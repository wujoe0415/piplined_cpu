module Hazard_Control(
    input clk,
    input rst,
    input branch,
    input zero,
    input mem_read,
    input [4:0] rs1_id,
    input [4:0] rs2_id,
    input [4:0] idex_regt,
    output reg ifid_write, 
    output reg pc_write,
    output reg ifid_flush,
    output reg idex_flush,
    output reg exmem_flush
);
integer data_stall_counter;
always @(posedge clk) begin // Data Hazard
    if(data_stall_counter > 0)begin
        //$display("stall ", data_stall_counter);
        pc_write <= 1'b0;
        ifid_write <= 1'b0;
        ifid_flush <= 1'b0;
        idex_flush <= 1'b1;
        exmem_flush <= 1'b0;
        data_stall_counter = data_stall_counter - 1;
    end
    else begin
    if(mem_read == 1'b1 &&(idex_regt != 1'b0 && (idex_regt == rs1_id || idex_regt == rs2_id)))
    begin
        $display("data hazard");
        data_stall_counter = 1;
        pc_write <= 1'b0;
        ifid_write <= 1'b0;
        ifid_flush <= 1'b0;
        idex_flush <= 1'b1;
        exmem_flush <= 1'b0;
    end
    else begin
        pc_write <= 1'b1;
        ifid_write <= 1'b1;
	  	ifid_flush <= 1'b0;
        idex_flush <= 1'b0;
        exmem_flush <= 1'b0;
        data_stall_counter = 0;
    end
    end
end

always@(posedge clk)begin
    if(branch == 1'b1 && data_stall_counter == 0) // Control Hazard
    begin
        $display("branch");
        pc_write <= 1'b1;
        ifid_write <= 1'b1;
        ifid_flush <= 1'b1;
        idex_flush <= 1'b1;
        exmem_flush <= 1'b1;
    end
end   
endmodule