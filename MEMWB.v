module MEMWB(
    input clk,
    input wire rst,
    input [31:0] mem_rdata,
    input [ 4:0] mem_rdst_id,
    input        mem_we_reg,
    input        mem_we_dmem,
    output reg    wb_we_reg,
    output reg [31:0] wb_rdata,
    output reg [ 4:0] wb_rdst_id
);

always @(posedge clk) begin
    if(rst) begin
        wb_rdata <= 32'b0;
        wb_rdst_id <= 5'b0;
        wb_we_reg <= 1'b0;
    end
    else begin
        wb_rdata <= mem_rdata;
        wb_rdst_id <= mem_rdst_id;
        wb_we_reg <= mem_we_reg;
    end
end

endmodule