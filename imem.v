module imem (
    input  [ 5 : 0] addr,  // byte address
    output [31 : 0] rdata  // read data
);

    reg [31 : 0] RAM [15 : 0];

    initial // put the machine code of the program here.
    begin
        RAM[0]  = 32'h01294827; RAM[1]  = 32'h21296f7d;
        RAM[2]  = 32'h21082dd1; RAM[3]  = 32'h200822d8;
        RAM[4]  = 32'h2129060e; RAM[5]  = 32'h21299dba;
        RAM[6]  = 32'h1109fffe; RAM[7]  = 32'h2108bf80;
        RAM[8]  = 32'h2008fdfa; RAM[9]  = 32'h1128fff8; 
        RAM[10]  = 32'h00084020; RAM[11]  = 32'h0800000b; 
        RAM[12] = 32'h00000000; RAM[13] = 32'h00000000;
        RAM[14] = 32'h00000000; RAM[15] = 32'h00000000;
    end

    assign rdata = RAM[addr[5:2]];

endmodule