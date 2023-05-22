module EXMEM(
    input clk,
    input wire rst,
    input wire flush,
    input [31:0] ex_pc,
    input [31:0] rd,
    input [31:0] rs2,
    input [ 4:0] ex_rdst_id,
    input         ex_we_reg,
    input         ex_we_dmem,
    input [ 1:0]  ex_wbsel,

    output reg    mem_we_reg,
    output reg    mem_we_dmem,
    output reg [31:0] mem_pc,
    output reg [31:0] mem_rd,
    output reg [31:0] mem_rs2,
    output reg [ 4:0]  mem_rdst_id,
    output  reg [ 1:0]  mem_wbsel
);

always @(posedge clk) begin
    if(rst==1'b1 || flush == 1'b1) begin
        mem_pc <= 32'b0;
        mem_rd <= 32'b0;
        mem_rs2 <= 32'b0;
        mem_rdst_id <= 5'b0;
        mem_we_dmem <= 1'b0;
        mem_we_reg <= 1'b0;
        mem_wbsel <= 2'b0;
    end
    else begin
        mem_pc <= ex_pc;
        //$display(mem_rd);
        mem_rd <= rd;
        mem_rs2 <= rs2;
        mem_rdst_id <= ex_rdst_id;
        mem_we_dmem <= ex_we_dmem;
        mem_we_reg <= ex_we_reg;
        mem_wbsel <= ex_wbsel;
    end
end

endmodule