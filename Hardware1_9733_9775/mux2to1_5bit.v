`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:28 01/03/2022 
// Design Name: 
// Module Name:    mux2to1_5bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux2to1_5bit(
    input [4:0] Din0,
    input [4:0] Din1,
    input Sel,
    output [4:0] Dout
    );
	 
	reg [4:0] res;
	assign Dout = res;
	always @(*) 
	begin
		case(Sel)
			1'b0: begin res = Din0; end
			1'b1: begin res = Din1; end
		endcase
	end


endmodule