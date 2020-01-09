module BindsTo_0_Instruction(
  input         clock,
  input  [9:0]  io_wrAddr,
  output [31:0] io_rdData
);

initial begin
  $readmemh("/home/mohsin/inst", Instruction.mem);
end
                      endmodule

bind Instruction BindsTo_0_Instruction BindsTo_0_Instruction_Inst(.*);