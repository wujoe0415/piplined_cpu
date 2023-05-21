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
    id_we_reg,

    ifid_write, 
    pc_write,
    ifid_flush,
    idex_flush,
    exmem_flush
);
input clk,rst,branch,zero,mem_read, id_we_reg;
input [4:0] rs1_id, rs2_id,idex_regt,exmem_regt;
output ifid_write, pc_write, ifid_flush, idex_flush, exmem_flush;
reg [1:0] hazard_type; // 00: No hazard, 01: Data hazard, 10: Control hazard, 11: Both hazards


integer data_stall_counter;

assign hazard_type = (id_we_reg == 1'b1&& mem_read == 1'b1 && (((idex_regt != 1'b0 && (idex_regt == rs1_id || idex_regt == rs2_id)))
                                || (exmem_regt != 1'b0 && (exmem_regt == rs1_id || exmem_regt == rs2_id))))?
                    2'b01/*data*/:branch == 1'b1 ? 2'b10 : 2'b00;
assign pc_write = (hazard_type == 2'b01)?1'b0:
           (hazard_type == 2'b10)?1'b1:
           (data_stall_counter > 0) ? 1'b0 : 1'b1;
assign ifid_write = (hazard_type == 2'b01)?1'b0:
           (hazard_type == 2'b10)?1'b1:
           (data_stall_counter > 0) ? 1'b0 : 1'b1;    
assign ifid_flush = (hazard_type == 2'b01)?1'b0:
           (hazard_type == 2'b10)?1'b1:1'b0; 
assign exmem_flush = (hazard_type == 2'b01)?1'b0:
           (hazard_type == 2'b10)?1'b0:1'b0; 
assign idex_flush = (hazard_type == 2'b01)?1'b1:
           (hazard_type == 2'b10)?1'b1:1'b0;

always@(posedge clk)begin
    if(hazard_type == 2'b10)begin
        data_stall_counter = 2;
        if((exmem_regt != 1'b0 && (exmem_regt == rs1_id || exmem_regt == rs2_id)))
            data_stall_counter = 1;
    end
    if(data_stall_counter > 0)
        data_stall_counter = data_stall_counter - 1;
end   
endmodule