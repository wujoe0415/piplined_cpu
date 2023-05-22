module IFID(
    input wire clk,
    input wire rst,
    input wire flush,
    input wire ifid_write,
    input [31:0] pc,
    input [31:0] rdata,
    output reg [31:0] pc_out,
    output reg [31:0] instr
);
always @(posedge clk) begin
    if(rst || flush == 1'b1) begin
        pc_out <= 32'b0;
        instr <= 32'b0;
    end
    else if(ifid_write)begin
        pc_out <= pc;
        instr <= rdata;
    end
    else begin // Maybe no need
        pc_out <= pc_out;
        instr <= instr;
    end
    // else begin
    //     pc_out <= pc_out;
    //     instr <= {{26{1'b0}},{4{1'b1}}};
    // end
end

endmodule