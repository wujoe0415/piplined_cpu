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
    ex_we_reg,
    mem_we_reg,
    ex_wbsel,
    mem_wbsel,

    ifid_write, 
    pc_write,
    ifid_flush,
    idex_flush,
    exmem_flush
);
input clk,rst,branch,zero,mem_read, ex_we_reg, mem_we_reg;
input [1:0] ex_wbsel,mem_wbsel;
input [4:0] rs1_id, rs2_id,idex_regt,exmem_regt;
output ifid_write, pc_write, ifid_flush, idex_flush, exmem_flush;
reg [1:0] hazard_type; // 00: No hazard, 01: Data hazard, 10: Control hazard, 11: Both hazards


reg data_stall_counter;

assign hazard_type = (((ex_wbsel == 2'b01 || ex_we_reg == 1'b1) && idex_regt != 5'b0 && (idex_regt == rs1_id || idex_regt == rs2_id)))
                                || (( mem_wbsel == 2'b01 || mem_we_reg == 1'b1) && exmem_regt != 1'b0 && (exmem_regt == rs1_id || exmem_regt == rs2_id))?
                    2'b01:branch == 1'b1 ? 2'b10 : 2'b00;
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
           (hazard_type == 2'b10)?1'b0:1'b0;

always@(posedge clk)begin
    if(data_stall_counter > 0)
        data_stall_counter <= 0;
    else if(hazard_type == 2'b01)begin
        if(((ex_wbsel == 2'b01 || ex_we_reg == 1'b1) && idex_regt != 5'b0 && (idex_regt == rs1_id || idex_regt == rs2_id))) begin
            data_stall_counter <= 1; 
        end
        else if(((mem_wbsel == 2'b01 || mem_we_reg == 1'b1) && idex_regt != 5'b0 && (idex_regt == rs1_id || idex_regt == rs2_id))) begin
            data_stall_counter <= 0; 
        end
    end
end   
endmodule