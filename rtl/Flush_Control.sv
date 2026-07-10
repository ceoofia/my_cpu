/*
    A flushing unit.
*/
`timescale 1ns/1ps

module Flush_Control (
    input dummy_inputs,

    output flush_out
);
    assign flush_out = 1'b0;
endmodule