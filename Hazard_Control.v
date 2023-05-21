module Hazard_Control(
    clk,
    rst,
    branch,
    zero,
    mem_read,
    rs1_id,
    rs2_id,
    idex_regt,
    exmem_regt,

    ifid_write, 
    pc_write,
    ifid_flush,
    idex_flush,
    exmem_flush
);
input clk,rst,branch,zero,mem_read;
    input [4:0] rs1_id, rs2_id,idex_regt,exmem_regt;

    output ifid_write, pc_write, ifid_flush, idex_flush, exmem_flush;
    
    reg [1:0] hazard_type; // 00: No hazard, 01: Data hazard, 10: Control hazard, 11: Both hazards
    reg ifid_gate, pc_gate, ifid_reset, exmem_reset, idex_reset;
assign ifid_gate = ifid_write;
assign pc_gate = pc_write;
assign ifid_reset = ifid_flush;
assign exmem_reset = exmem_flush;
assign idex_reset = idex_reset;



integer data_stall_counter;
 always @* begin
        if (mem_read == 1'b1 && (((idex_regt != 1'b0 && (idex_regt == rs1_id || idex_regt == rs2_id)))
                                || (exmem_regt != 1'b0 && (exmem_regt == rs1_id || exmem_regt == rs2_id))))
            hazard_type = 2'b01; // Data hazard
        else if (branch == 1'b1)
            hazard_type = 2'b10; // Control hazard
        else if (mem_read == 1'b0 && branch == 1'b0)
            hazard_type = 2'b00; // No hazard

        case (hazard_type)
            2'b01: begin // Data hazard
                ifid_gate = 1'b0;
                pc_gate = 1'b0;
                ifid_reset = 1'b0;
                idex_reset = 1'b1;
                exmem_reset = 1'b0;
                data_stall_counter = 2;
                if((exmem_regt != 1'b0 && (exmem_regt == rs1_id || exmem_regt == rs2_id)))
                    data_stall_counter = 1;
            end
            2'b10: begin // Control hazard
                ifid_gate = 1'b1;
                pc_gate = 1'b1;
                ifid_reset = 1'b1;
                idex_reset = 1'b1;
                exmem_reset = 1'b1;
            end
            default: begin // No hazard or both hazards
                ifid_gate = (data_stall_counter > 0) ? 1'b0 : 1'b1;
                pc_gate = (data_stall_counter > 0) ? 1'b0 : 1'b1;
                ifid_reset = 1'b0;
                idex_reset = 1'b0;
                exmem_reset = 1'b0;
            end
        endcase
    end

always@(posedge clk)begin
    if(rst)begin
    ifid_gate <= 1'b1;
    pc_gate <= 1'b1;
    idex_reset <= 1'b1;
    exmem_reset <= 1'b1;
    ifid_reset <= 1'b1;
    end
    if(data_stall_counter > 0)
        data_stall_counter = data_stall_counter - 1;
end   
endmodule