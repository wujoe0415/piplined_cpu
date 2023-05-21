module IDEX(
    input clk,
    input wire rst,
    input wire flush,
    input [31:0] ID_pc,
    input [25:0] ID_jump_addr,
    input [3:0] ID_op,
    input [31:0] ID_imm,
    input [31:0] ID_rs1,
    input [31:0] ID_rs2,
    input [ 4:0] ID_rdst_id,
    input        ID_we_reg,
    input        ID_we_dmem,
    input [ 1:0] ID_wbsel,
    input        ID_ssel,
    input [ 2:0] ID_jump_type,

    output reg    EX_we_reg,
    output reg    EX_we_dmem,
    output reg [31:0] EX_pc,
    output reg [25:0] EX_jump_addr,
    output reg [ 3:0] EX_op,
    output reg [31:0] EX_imm,
    output reg [31:0] EX_ra,
    output reg [31:0] EX_rs1,
    output reg [31:0] EX_rs2,
    output reg [ 4:0] EX_rdst_id,
    output reg  [ 1:0] EX_wbsel,
    output reg         EX_ssel,
    output reg [ 2:0] EX_jump_type
);
always @(posedge clk) begin
    if(rst == 1'b1|| flush == 1'b1) begin
        EX_pc <= 32'b0;
        EX_jump_addr <= 26'b0;
        EX_op <= 4'b0;
        EX_imm <= 32'b0;
        EX_ra <= 32'b0;
        EX_rs1 <= 5'b0;
        EX_rs2 <= 5'b0;
        EX_rdst_id <= 5'b0;
        EX_we_dmem <= 1'b0;
        EX_we_reg <= 1'b0;
        EX_wbsel <= 2'b0;
        EX_ssel <= 1'b0;
        EX_jump_type <= 3'b0;
    end
    else begin
        EX_op <= ID_op;
        EX_pc <= ID_pc;
        EX_jump_addr <= ID_jump_addr;
        EX_imm <= ID_imm;
        EX_ra <= ID_pc + 4;
        EX_rs1 <= ID_rs1;
        EX_rs2 <= ID_rs2;
        EX_rdst_id <= ID_rdst_id;
        EX_we_dmem <= ID_we_dmem;
        EX_we_reg <= ID_we_reg;
        EX_wbsel <= ID_wbsel;
        EX_ssel <= ID_ssel;
        EX_jump_type <= ID_jump_type;
    end
end
endmodule