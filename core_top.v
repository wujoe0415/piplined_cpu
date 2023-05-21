module core_top #(
    parameter DWIDTH = 32
)(
    input                 clk,
    input                 rst
);

    // Jump type
    localparam [2:0] J_TYPE_NOP = 3'b000,
                     J_TYPE_BEQ = 3'b001,
                     J_TYPE_JAL = 3'b010,
                     J_TYPE_JR  = 3'b011,
                     J_TYPE_J   = 3'b100;

    // Program Counter signals
    reg  [DWIDTH-1:0] pc;
    reg [DWIDTH-1:0] pc_increment;

    // Decode signals
    reg  [DWIDTH-1:0] instr;
    wire [3:0]        op;
    wire              ssel;
    wire [1:0]        wbsel;
    wire              we_regfile;
    wire              we_dmem;
    wire [2:0]        jump_type;
    wire [25:0]       jump_addr;
    wire [DWIDTH-1:0] imm;
    wire [4:0]        rs1_id;
    wire [4:0]        rs2_id;
    wire [4:0]        rdst_id;
    wire              branch;
    wire              mem_read;
    
    // Regfile signals
    reg  [DWIDTH-1:0] rd;
    wire [DWIDTH-1:0] rs1_out;
    wire [DWIDTH-1:0] rs2_out;

    // ALU signals
    reg  [DWIDTH-1:0] alu_rs1;
    reg  [DWIDTH-1:0] alu_rs2;
    wire [DWIDTH-1:0] alu_out;
    wire              zero;
    wire              overflow;

    // Dmem signals
    wire [DWIDTH-1:0] dmem_out;

    // IFID signals
    reg [DWIDTH-1:0] rdata;
    reg [DWIDTH-1:0] out;

    // IDEX signals
    reg [DWIDTH-1:0] ex_pc;
    reg [31:0] ex_jump_addr;
    reg [3:0] ex_op;
    reg [31:0] ex_imm;
    reg [31:0] ex_ra;
    reg [31:0] ex_rs1;
    reg [31:0] ex_rs2;
    wire [4:0] ex_rdst_id;
    wire       ex_we_reg;
    wire       ex_we_dmem;
    wire [1:0]        ex_wbsel;
    wire       ex_ssel;
    wire [3:0] ex_jump_type;

    //EXMEM signals
    reg [31:0] mem_pc;
    reg [31:0] mem_rd;
    reg [31:0] mem_rs2;
    reg [ 4:0] mem_rdst_id;
    wire       mem_we_reg;
    wire       mem_we_dmem;
    wire [1:0]        mem_wbsel;

    // MEMWB signals
    reg [31:0] wb_rdata;
    reg [ 4:0] wb_rdst_id;
    wire       wb_we_reg;

    // hazard control signals
    reg ifid_write; 
    reg pc_write;
    wire ifid_flush;
    wire idex_flush;
    wire exmem_flush;
    
    initial begin
        pc_write = 1'b1;
        ifid_write = 1'b1;
    end
    assign pc_increment = pc + 4;
    // Program counter
    always @(posedge clk) begin
        if (rst)
            pc <= 0;
        else if (ex_jump_type == J_TYPE_BEQ && zero && pc_write == 1'b1) 
            pc <= pc_increment + {ex_imm[29:0], 2'b00};
        else if (ex_jump_type == J_TYPE_JR && pc_write == 1'b1) 
            pc <= rs1_out;
        else if ((ex_jump_type == J_TYPE_JAL || ex_jump_type == J_TYPE_J )&& pc_write == 1'b1) 
            pc <= {pc[31:28], ex_jump_addr, 2'b00};
        else if (pc_write == 1'b1)begin
            pc <= pc_increment;
        end
    end
    imem imem_inst(
        .addr(pc),
        .rdata(rdata)
    );

    IFID ifid_inst(
        .clk(clk),
        .rst(rst),
        .flush(ifid_flush),
        .ifid_write(ifid_write),
        .pc(pc),
        .rdata(rdata),
        .pc_out(out),
        .instr(instr)
    );

    decode decode_inst (
        // input
        .instr(instr),

        // output  
        .op(op),
        .ssel(ssel),
        .wbsel(wbsel),
        .we_regfile(we_regfile),
        .we_dmem(we_dmem),
        .jump_type(jump_type),
        .jump_addr(jump_addr),
        .imm(imm),
        .rs1_id(rs1_id),
        .rs2_id(rs2_id),
        .rdst_id(rdst_id),
        .is_branch(branch),
        .mem_read(mem_read)
    );

    reg_file reg_file_inst (
        // input
        .clk(clk),
        .rst(rst),

        .rs1_id(rs1_id),
        .rs2_id(rs2_id),

        .we(wb_we_reg),
        .rdst_id(wb_rdst_id),
        .rdst(wb_rdata),

        // output 
        .rs1(rs1_out), // rs
        .rs2(rs2_out)  // rt
    );

    IDEX idex_instr(
        .rst(rst),
        .clk(clk),
        .flush(idex_flush),
        .ID_pc(out),
        .ID_jump_addr(jump_addr),
        .ID_op(op),
        .ID_imm(imm),
        .ID_rs1(rs1_out),
        .ID_rs2(rs2_out),
        .ID_rdst_id(rdst_id),
        .ID_we_dmem(we_dmem),
        .ID_we_reg(we_regfile),
        .ID_wbsel(wbsel),
        .ID_ssel(ssel),
        .ID_jump_type(jump_type),

        .EX_pc(ex_pc),
        .EX_jump_addr(ex_jump_addr),
        .EX_op(ex_op),
        .EX_imm(ex_imm),
        .EX_ra(ex_ra), // where
        .EX_rs1(ex_rs1),
        .EX_rs2(ex_rs2),
        .EX_rdst_id(ex_rdst_id),
        .EX_we_dmem(ex_we_dmem),
        .EX_we_reg(ex_we_reg),
        .EX_wbsel(ex_wbsel),
        .EX_ssel(ex_ssel),
        .EX_jump_type(ex_jump_type)
    );
    // ALU
    always @(*) begin
        alu_rs1 = ex_rs1;
    end

    always @(*) begin
        alu_rs2 = ex_ssel ? ex_rs2 : ex_imm;
    end

    alu alu_inst (
        // input
        .op(ex_op),
        .rs1(alu_rs1),
        .rs2(alu_rs2),

        // output
        .rd(alu_out),
        .zero(zero),
        .overflow(overflow)
    );
    EXMEM exmem_inst(
        .rst(rst),
        .clk(clk),
        .flush(exmem_flush),
        .ex_pc(ex_pc),
        .rd(alu_out),
        .rs2(ex_rs2),
        .ex_we_dmem(ex_we_dmem),
        .ex_we_reg(ex_we_reg),
        .ex_rdst_id(ex_rdst_id), 
        .ex_wbsel(ex_wbsel),
        .mem_pc(mem_pc),
        .mem_rd(mem_rd),
        .mem_rs2(mem_rs2),
        .mem_rdst_id(mem_rdst_id),
        .mem_we_dmem(mem_we_dmem),
        .mem_we_reg(mem_we_reg),
        .mem_wbsel(mem_wbsel)
    );
    // Dmem
    dmem dmem_inst (
        .clk(clk),
        .addr(mem_rd),
        .we(mem_we_dmem),
        .wdata(mem_rs2),
        .rdata(dmem_out)
    );
    // Regfile
    always @(*) begin
            //$display(dmem_out);
        case (mem_wbsel)
            2'b00:   rd = mem_rd;
            2'b01:   rd = dmem_out;
            2'b10:   rd = pc_increment;
            default: rd = 0;
        endcase
    end
    MEMWB memwb_inst(
        .rst(rst),
        .clk(clk),
        .mem_rdst_id(mem_rdst_id),
        .mem_rdata(rd),
        .mem_we_dmem(mem_we_dmem),
        .mem_we_reg(mem_we_reg),
        .wb_rdata(wb_rdata),
        .wb_rdst_id(wb_rdst_id),
        .wb_we_reg(wb_we_reg)
    );
    Hazard_Control hazard_ctrl_inst(
        .rst(rst),
        .clk(clk),
        .branch(branch),
        .zero(zero),
        .mem_read(mem_read),
        .rs1_id(rs1_id),
        .rs2_id(rs2_id),
        .idex_regt(ex_rdst_id),
        .exmem_regt(mem_rdst_id),
        .ifid_write(ifid_write), 
        .pc_write(pc_write),
        .ifid_flush(ifid_flush),
        .idex_flush(idex_flush),
        .exmem_flush(exmem_flush)
    );
endmodule