module Instruction(
  input         clock,
  input  [9:0]  io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:1023]; // @[Instruction.scala 11:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_11_data; // @[Instruction.scala 11:22]
  wire [9:0] mem__T_11_addr; // @[Instruction.scala 11:22]
  assign mem__T_11_addr = io_wrAddr;
  assign mem__T_11_data = mem[mem__T_11_addr]; // @[Instruction.scala 11:22]
  assign io_rdData = mem__T_11_data; // @[Instruction.scala 12:19]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module Pc(
  input         clock,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  reg [31:0] reg$; // @[Pc.scala 11:26]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[Pc.scala 13:23]
  assign _T_14 = reg$ + 32'h4; // @[Pc.scala 13:23]
  assign io_pc4 = reg$ + 32'h4; // @[Pc.scala 13:16]
  assign io_pc = reg$; // @[Pc.scala 14:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg$ = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    reg$ <= io_input;
  end
endmodule
module Control(
  input  [6:0] io_opcode,
  output       io_memwrite,
  output       io_memread,
  output       io_regwrite,
  output       io_memtoreg,
  output [2:0] io_aluop,
  output [1:0] io_opA,
  output       io_opB,
  output [1:0] io_extend,
  output [1:0] io_nxtpc
);
  wire  _T_28; // @[Control.scala 18:24]
  wire  _T_40; // @[Control.scala 30:30]
  wire  _T_52; // @[Control.scala 42:30]
  wire  _T_64; // @[Control.scala 54:30]
  wire  _T_76; // @[Control.scala 66:30]
  wire  _T_88; // @[Control.scala 78:30]
  wire  _T_100; // @[Control.scala 90:30]
  wire [2:0] _GEN_8; // @[Control.scala 90:47]
  wire [1:0] _GEN_9; // @[Control.scala 90:47]
  wire  _GEN_10; // @[Control.scala 90:47]
  wire [1:0] _GEN_11; // @[Control.scala 90:47]
  wire [2:0] _GEN_15; // @[Control.scala 78:47]
  wire [1:0] _GEN_16; // @[Control.scala 78:47]
  wire  _GEN_17; // @[Control.scala 78:47]
  wire [1:0] _GEN_18; // @[Control.scala 78:47]
  wire [2:0] _GEN_22; // @[Control.scala 66:47]
  wire [1:0] _GEN_23; // @[Control.scala 66:47]
  wire  _GEN_24; // @[Control.scala 66:47]
  wire  _GEN_25; // @[Control.scala 66:47]
  wire [1:0] _GEN_26; // @[Control.scala 66:47]
  wire [2:0] _GEN_30; // @[Control.scala 54:47]
  wire [1:0] _GEN_31; // @[Control.scala 54:47]
  wire  _GEN_32; // @[Control.scala 54:47]
  wire  _GEN_33; // @[Control.scala 54:47]
  wire [1:0] _GEN_34; // @[Control.scala 54:47]
  wire  _GEN_38; // @[Control.scala 42:47]
  wire [2:0] _GEN_39; // @[Control.scala 42:47]
  wire [1:0] _GEN_40; // @[Control.scala 42:47]
  wire  _GEN_41; // @[Control.scala 42:47]
  wire [1:0] _GEN_42; // @[Control.scala 42:47]
  wire [1:0] _GEN_43; // @[Control.scala 42:47]
  wire  _GEN_44; // @[Control.scala 30:47]
  wire  _GEN_47; // @[Control.scala 30:47]
  wire [2:0] _GEN_48; // @[Control.scala 30:47]
  wire [1:0] _GEN_49; // @[Control.scala 30:47]
  wire  _GEN_50; // @[Control.scala 30:47]
  wire [1:0] _GEN_51; // @[Control.scala 30:47]
  wire [1:0] _GEN_52; // @[Control.scala 30:47]
  assign _T_28 = io_opcode == 7'h33; // @[Control.scala 18:24]
  assign _T_40 = io_opcode == 7'h3; // @[Control.scala 30:30]
  assign _T_52 = io_opcode == 7'h23; // @[Control.scala 42:30]
  assign _T_64 = io_opcode == 7'h63; // @[Control.scala 54:30]
  assign _T_76 = io_opcode == 7'h13; // @[Control.scala 66:30]
  assign _T_88 = io_opcode == 7'h67; // @[Control.scala 78:30]
  assign _T_100 = io_opcode == 7'h6f; // @[Control.scala 90:30]
  assign _GEN_8 = _T_100 ? 3'h3 : 3'h6; // @[Control.scala 90:47]
  assign _GEN_9 = _T_100 ? 2'h2 : 2'h3; // @[Control.scala 90:47]
  assign _GEN_10 = _T_100 ? 1'h0 : 1'h1; // @[Control.scala 90:47]
  assign _GEN_11 = _T_100 ? 2'h2 : 2'h0; // @[Control.scala 90:47]
  assign _GEN_15 = _T_88 ? 3'h3 : _GEN_8; // @[Control.scala 78:47]
  assign _GEN_16 = _T_88 ? 2'h2 : _GEN_9; // @[Control.scala 78:47]
  assign _GEN_17 = _T_88 ? 1'h0 : _GEN_10; // @[Control.scala 78:47]
  assign _GEN_18 = _T_88 ? 2'h3 : _GEN_11; // @[Control.scala 78:47]
  assign _GEN_22 = _T_76 ? 3'h1 : _GEN_15; // @[Control.scala 66:47]
  assign _GEN_23 = _T_76 ? 2'h0 : _GEN_16; // @[Control.scala 66:47]
  assign _GEN_24 = _T_76 ? 1'h1 : _GEN_17; // @[Control.scala 66:47]
  assign _GEN_25 = _T_76 ? 1'h0 : _GEN_17; // @[Control.scala 66:47]
  assign _GEN_26 = _T_76 ? 2'h0 : _GEN_18; // @[Control.scala 66:47]
  assign _GEN_30 = _T_64 ? 3'h2 : _GEN_22; // @[Control.scala 54:47]
  assign _GEN_31 = _T_64 ? 2'h0 : _GEN_23; // @[Control.scala 54:47]
  assign _GEN_32 = _T_64 ? 1'h0 : _GEN_24; // @[Control.scala 54:47]
  assign _GEN_33 = _T_64 ? 1'h0 : _GEN_25; // @[Control.scala 54:47]
  assign _GEN_34 = _T_64 ? 2'h1 : _GEN_26; // @[Control.scala 54:47]
  assign _GEN_38 = _T_52 ? 1'h0 : 1'h1; // @[Control.scala 42:47]
  assign _GEN_39 = _T_52 ? 3'h5 : _GEN_30; // @[Control.scala 42:47]
  assign _GEN_40 = _T_52 ? 2'h0 : _GEN_31; // @[Control.scala 42:47]
  assign _GEN_41 = _T_52 ? 1'h1 : _GEN_32; // @[Control.scala 42:47]
  assign _GEN_42 = _T_52 ? 2'h2 : {{1'd0}, _GEN_33}; // @[Control.scala 42:47]
  assign _GEN_43 = _T_52 ? 2'h0 : _GEN_34; // @[Control.scala 42:47]
  assign _GEN_44 = _T_40 ? 1'h0 : _T_52; // @[Control.scala 30:47]
  assign _GEN_47 = _T_40 ? 1'h1 : _GEN_38; // @[Control.scala 30:47]
  assign _GEN_48 = _T_40 ? 3'h4 : _GEN_39; // @[Control.scala 30:47]
  assign _GEN_49 = _T_40 ? 2'h0 : _GEN_40; // @[Control.scala 30:47]
  assign _GEN_50 = _T_40 ? 1'h1 : _GEN_41; // @[Control.scala 30:47]
  assign _GEN_51 = _T_40 ? 2'h0 : _GEN_42; // @[Control.scala 30:47]
  assign _GEN_52 = _T_40 ? 2'h0 : _GEN_43; // @[Control.scala 30:47]
  assign io_memwrite = _T_28 ? 1'h0 : _GEN_44; // @[Control.scala 19:29 Control.scala 31:29 Control.scala 43:29 Control.scala 55:29 Control.scala 67:29 Control.scala 79:29 Control.scala 91:29 Control.scala 103:29]
  assign io_memread = _T_28 ? 1'h0 : _T_40; // @[Control.scala 21:28 Control.scala 33:28 Control.scala 45:28 Control.scala 57:28 Control.scala 69:28 Control.scala 81:28 Control.scala 93:28 Control.scala 105:28]
  assign io_regwrite = _T_28 ? 1'h1 : _GEN_47; // @[Control.scala 22:29 Control.scala 34:29 Control.scala 46:29 Control.scala 58:29 Control.scala 70:29 Control.scala 82:29 Control.scala 94:29 Control.scala 106:29]
  assign io_memtoreg = _T_28 ? 1'h0 : _T_40; // @[Control.scala 23:29 Control.scala 35:29 Control.scala 47:29 Control.scala 59:29 Control.scala 71:29 Control.scala 83:29 Control.scala 95:29 Control.scala 107:29]
  assign io_aluop = _T_28 ? 3'h0 : _GEN_48; // @[Control.scala 24:26 Control.scala 36:26 Control.scala 48:26 Control.scala 60:26 Control.scala 72:26 Control.scala 84:26 Control.scala 96:26 Control.scala 108:26]
  assign io_opA = _T_28 ? 2'h0 : _GEN_49; // @[Control.scala 25:24 Control.scala 37:24 Control.scala 49:24 Control.scala 61:24 Control.scala 73:24 Control.scala 85:24 Control.scala 97:24 Control.scala 109:24]
  assign io_opB = _T_28 ? 1'h0 : _GEN_50; // @[Control.scala 26:24 Control.scala 38:24 Control.scala 50:24 Control.scala 62:24 Control.scala 74:24 Control.scala 86:24 Control.scala 98:24 Control.scala 110:24]
  assign io_extend = _T_28 ? 2'h0 : _GEN_51; // @[Control.scala 27:27 Control.scala 39:27 Control.scala 51:27 Control.scala 63:27 Control.scala 75:27 Control.scala 87:27 Control.scala 99:27 Control.scala 111:27]
  assign io_nxtpc = _T_28 ? 2'h0 : _GEN_52; // @[Control.scala 28:26 Control.scala 40:26 Control.scala 52:26 Control.scala 64:26 Control.scala 76:26 Control.scala 88:26 Control.scala 100:26 Control.scala 112:26]
endmodule
module Imme(
  input  [31:0] io_inst,
  input  [31:0] io_pc,
  output [31:0] io_Sout,
  output [31:0] io_Uout,
  output [31:0] io_Sbout,
  output [31:0] io_Ujout,
  output [31:0] io_Iout
);
  wire [4:0] extract1; // @[Imme.scala 18:31]
  wire [6:0] extract2; // @[Imme.scala 19:31]
  wire [11:0] combined0; // @[Cat.scala 30:58]
  wire  _T_19; // @[Imme.scala 21:42]
  wire [19:0] _T_23; // @[Bitwise.scala 72:12]
  wire [31:0] _T_24; // @[Cat.scala 30:58]
  wire [19:0] extract3; // @[Imme.scala 24:31]
  wire  _T_26; // @[Imme.scala 25:42]
  wire [11:0] _T_30; // @[Bitwise.scala 72:12]
  wire [31:0] _T_31; // @[Cat.scala 30:58]
  wire [46:0] _GEN_0; // @[Imme.scala 25:59]
  wire [46:0] _T_33; // @[Imme.scala 25:59]
  wire [46:0] _T_34; // @[Imme.scala 25:68]
  wire  _T_36; // @[Imme.scala 28:53]
  wire [5:0] _T_37; // @[Imme.scala 28:67]
  wire [3:0] _T_38; // @[Imme.scala 28:84]
  wire [12:0] combined1; // @[Cat.scala 30:58]
  wire  _T_43; // @[Imme.scala 29:44]
  wire [18:0] _T_47; // @[Bitwise.scala 72:12]
  wire [31:0] _T_48; // @[Cat.scala 30:58]
  wire [32:0] _T_49; // @[Imme.scala 29:62]
  wire [31:0] _T_50; // @[Imme.scala 29:62]
  wire [11:0] extract4; // @[Imme.scala 32:31]
  wire  _T_52; // @[Imme.scala 33:41]
  wire [19:0] _T_56; // @[Bitwise.scala 72:12]
  wire [31:0] _T_57; // @[Cat.scala 30:58]
  wire  _T_59; // @[Imme.scala 37:36]
  wire [7:0] _T_60; // @[Imme.scala 37:49]
  wire  _T_61; // @[Imme.scala 37:65]
  wire [9:0] _T_62; // @[Imme.scala 37:78]
  wire [10:0] _T_71; // @[Bitwise.scala 72:12]
  wire [31:0] _T_72; // @[Cat.scala 30:58]
  wire [32:0] _T_73; // @[Imme.scala 38:60]
  wire [31:0] _T_74; // @[Imme.scala 38:60]
  wire [31:0] _GEN_1; // @[Imme.scala 25:17]
  assign extract1 = io_inst[11:7]; // @[Imme.scala 18:31]
  assign extract2 = io_inst[31:25]; // @[Imme.scala 19:31]
  assign combined0 = {extract2,extract1}; // @[Cat.scala 30:58]
  assign _T_19 = combined0[11]; // @[Imme.scala 21:42]
  assign _T_23 = _T_19 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_24 = {_T_23,extract2,extract1}; // @[Cat.scala 30:58]
  assign extract3 = io_inst[31:12]; // @[Imme.scala 24:31]
  assign _T_26 = extract3[19]; // @[Imme.scala 25:42]
  assign _T_30 = _T_26 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_31 = {_T_30,extract3}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, _T_31}; // @[Imme.scala 25:59]
  assign _T_33 = _GEN_0 << 4'hc; // @[Imme.scala 25:59]
  assign _T_34 = $signed(_T_33); // @[Imme.scala 25:68]
  assign _T_36 = combined0[0]; // @[Imme.scala 28:53]
  assign _T_37 = combined0[10:5]; // @[Imme.scala 28:67]
  assign _T_38 = combined0[4:1]; // @[Imme.scala 28:84]
  assign combined1 = {_T_19,_T_36,_T_37,_T_38,1'h0}; // @[Cat.scala 30:58]
  assign _T_43 = combined1[12]; // @[Imme.scala 29:44]
  assign _T_47 = _T_43 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign _T_48 = {_T_47,_T_19,_T_36,_T_37,_T_38,1'h0}; // @[Cat.scala 30:58]
  assign _T_49 = _T_48 + io_pc; // @[Imme.scala 29:62]
  assign _T_50 = _T_48 + io_pc; // @[Imme.scala 29:62]
  assign extract4 = io_inst[31:20]; // @[Imme.scala 32:31]
  assign _T_52 = extract4[11]; // @[Imme.scala 33:41]
  assign _T_56 = _T_52 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_57 = {_T_56,extract4}; // @[Cat.scala 30:58]
  assign _T_59 = io_inst[31]; // @[Imme.scala 37:36]
  assign _T_60 = io_inst[19:12]; // @[Imme.scala 37:49]
  assign _T_61 = io_inst[20]; // @[Imme.scala 37:65]
  assign _T_62 = io_inst[30:21]; // @[Imme.scala 37:78]
  assign _T_71 = _T_59 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign _T_72 = {_T_71,_T_59,_T_60,_T_61,_T_62,1'h0}; // @[Cat.scala 30:58]
  assign _T_73 = _T_72 + io_pc; // @[Imme.scala 38:60]
  assign _T_74 = _T_72 + io_pc; // @[Imme.scala 38:60]
  assign io_Sout = $signed(_T_24); // @[Imme.scala 21:17]
  assign _GEN_1 = _T_34[31:0]; // @[Imme.scala 25:17]
  assign io_Uout = $signed(_GEN_1); // @[Imme.scala 25:17]
  assign io_Sbout = $signed(_T_50); // @[Imme.scala 29:18]
  assign io_Ujout = $signed(_T_74); // @[Imme.scala 38:18]
  assign io_Iout = $signed(_T_57); // @[Imme.scala 33:17]
endmodule
module Alu(
  input  [31:0] io_rs1,
  input  [31:0] io_rs2,
  input  [4:0]  io_cntrl,
  output [31:0] io_out
);
  wire  _T_16; // @[Alu.scala 15:23]
  wire [32:0] _T_17; // @[Alu.scala 16:34]
  wire [31:0] _T_18; // @[Alu.scala 16:34]
  wire [31:0] _T_19; // @[Alu.scala 16:34]
  wire  _T_21; // @[Alu.scala 18:29]
  wire [4:0] _T_22; // @[Alu.scala 19:35]
  wire [62:0] _GEN_24; // @[Alu.scala 20:34]
  wire [62:0] _T_23; // @[Alu.scala 20:34]
  wire  _T_25; // @[Alu.scala 22:29]
  wire  _T_26; // @[Alu.scala 23:29]
  wire [1:0] _GEN_0; // @[Alu.scala 23:38]
  wire  _T_30; // @[Alu.scala 29:29]
  wire  _T_32; // @[Alu.scala 29:56]
  wire  _T_33; // @[Alu.scala 29:44]
  wire [31:0] _T_34; // @[Alu.scala 30:29]
  wire [31:0] _T_35; // @[Alu.scala 30:45]
  wire  _T_36; // @[Alu.scala 30:36]
  wire [1:0] _GEN_1; // @[Alu.scala 30:52]
  wire  _T_40; // @[Alu.scala 36:29]
  wire [31:0] _T_41; // @[Alu.scala 37:34]
  wire [31:0] _T_42; // @[Alu.scala 37:34]
  wire  _T_44; // @[Alu.scala 39:29]
  wire [31:0] _T_46; // @[Alu.scala 41:34]
  wire  _T_48; // @[Alu.scala 43:29]
  wire [31:0] _T_49; // @[Alu.scala 44:34]
  wire [31:0] _T_50; // @[Alu.scala 44:34]
  wire  _T_52; // @[Alu.scala 46:29]
  wire [31:0] _T_53; // @[Alu.scala 47:34]
  wire [31:0] _T_54; // @[Alu.scala 47:34]
  wire  _T_56; // @[Alu.scala 49:29]
  wire [32:0] _T_57; // @[Alu.scala 50:34]
  wire [31:0] _T_58; // @[Alu.scala 50:34]
  wire [31:0] _T_59; // @[Alu.scala 50:34]
  wire  _T_61; // @[Alu.scala 52:29]
  wire  _T_65; // @[Alu.scala 56:29]
  wire  _T_66; // @[Alu.scala 57:29]
  wire [1:0] _GEN_2; // @[Alu.scala 57:40]
  wire  _T_70; // @[Alu.scala 63:29]
  wire  _T_71; // @[Alu.scala 64:29]
  wire [1:0] _GEN_3; // @[Alu.scala 64:40]
  wire  _T_75; // @[Alu.scala 70:29]
  wire  _T_80; // @[Alu.scala 77:29]
  wire  _T_81; // @[Alu.scala 78:29]
  wire [1:0] _GEN_5; // @[Alu.scala 78:39]
  wire  _T_85; // @[Alu.scala 84:29]
  wire [31:0] _GEN_8; // @[Alu.scala 84:44]
  wire [31:0] _GEN_9; // @[Alu.scala 77:44]
  wire [31:0] _GEN_10; // @[Alu.scala 70:44]
  wire [31:0] _GEN_11; // @[Alu.scala 63:44]
  wire [31:0] _GEN_12; // @[Alu.scala 56:44]
  wire [31:0] _GEN_13; // @[Alu.scala 52:44]
  wire [31:0] _GEN_14; // @[Alu.scala 49:45]
  wire [31:0] _GEN_15; // @[Alu.scala 46:44]
  wire [31:0] _GEN_16; // @[Alu.scala 43:44]
  wire [31:0] _GEN_17; // @[Alu.scala 39:44]
  wire [31:0] _GEN_18; // @[Alu.scala 36:44]
  wire [31:0] _GEN_19; // @[Alu.scala 29:71]
  wire [31:0] _GEN_20; // @[Alu.scala 22:44]
  wire [62:0] _GEN_21; // @[Alu.scala 18:44]
  wire [62:0] _GEN_22; // @[Alu.scala 15:38]
  wire [31:0] _GEN_25; // @[Alu.scala 16:24 Alu.scala 20:24 Alu.scala 24:32 Alu.scala 26:32 Alu.scala 31:32 Alu.scala 33:32 Alu.scala 37:24 Alu.scala 41:24 Alu.scala 44:24 Alu.scala 47:24 Alu.scala 50:24 Alu.scala 54:24 Alu.scala 58:32 Alu.scala 60:32 Alu.scala 65:32 Alu.scala 67:32 Alu.scala 72:32 Alu.scala 74:32 Alu.scala 79:32 Alu.scala 81:32 Alu.scala 86:32 Alu.scala 88:32 Alu.scala 92:24]
  assign _T_16 = io_cntrl == 5'h0; // @[Alu.scala 15:23]
  assign _T_17 = $signed(io_rs1) + $signed(io_rs2); // @[Alu.scala 16:34]
  assign _T_18 = $signed(io_rs1) + $signed(io_rs2); // @[Alu.scala 16:34]
  assign _T_19 = $signed(_T_18); // @[Alu.scala 16:34]
  assign _T_21 = io_cntrl == 5'h1; // @[Alu.scala 18:29]
  assign _T_22 = io_rs2[4:0]; // @[Alu.scala 19:35]
  assign _GEN_24 = {{31{io_rs1[31]}},io_rs1}; // @[Alu.scala 20:34]
  assign _T_23 = $signed(_GEN_24) << _T_22; // @[Alu.scala 20:34]
  assign _T_25 = io_cntrl == 5'h2; // @[Alu.scala 22:29]
  assign _T_26 = $signed(io_rs1) < $signed(io_rs2); // @[Alu.scala 23:29]
  assign _GEN_0 = _T_26 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 23:38]
  assign _T_30 = io_cntrl == 5'h3; // @[Alu.scala 29:29]
  assign _T_32 = io_cntrl == 5'h16; // @[Alu.scala 29:56]
  assign _T_33 = _T_30 | _T_32; // @[Alu.scala 29:44]
  assign _T_34 = $unsigned(io_rs1); // @[Alu.scala 30:29]
  assign _T_35 = $unsigned(io_rs2); // @[Alu.scala 30:45]
  assign _T_36 = _T_34 < _T_35; // @[Alu.scala 30:36]
  assign _GEN_1 = _T_36 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 30:52]
  assign _T_40 = io_cntrl == 5'h4; // @[Alu.scala 36:29]
  assign _T_41 = $signed(io_rs1) ^ $signed(io_rs2); // @[Alu.scala 37:34]
  assign _T_42 = $signed(_T_41); // @[Alu.scala 37:34]
  assign _T_44 = io_cntrl == 5'h5; // @[Alu.scala 39:29]
  assign _T_46 = $signed(io_rs1) >>> _T_22; // @[Alu.scala 41:34]
  assign _T_48 = io_cntrl == 5'h6; // @[Alu.scala 43:29]
  assign _T_49 = $signed(io_rs1) | $signed(io_rs2); // @[Alu.scala 44:34]
  assign _T_50 = $signed(_T_49); // @[Alu.scala 44:34]
  assign _T_52 = io_cntrl == 5'h7; // @[Alu.scala 46:29]
  assign _T_53 = $signed(io_rs1) & $signed(io_rs2); // @[Alu.scala 47:34]
  assign _T_54 = $signed(_T_53); // @[Alu.scala 47:34]
  assign _T_56 = io_cntrl == 5'h8; // @[Alu.scala 49:29]
  assign _T_57 = $signed(io_rs1) - $signed(io_rs2); // @[Alu.scala 50:34]
  assign _T_58 = $signed(io_rs1) - $signed(io_rs2); // @[Alu.scala 50:34]
  assign _T_59 = $signed(_T_58); // @[Alu.scala 50:34]
  assign _T_61 = io_cntrl == 5'hd; // @[Alu.scala 52:29]
  assign _T_65 = io_cntrl == 5'h10; // @[Alu.scala 56:29]
  assign _T_66 = $signed(io_rs1) == $signed(io_rs2); // @[Alu.scala 57:29]
  assign _GEN_2 = _T_66 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 57:40]
  assign _T_70 = io_cntrl == 5'h11; // @[Alu.scala 63:29]
  assign _T_71 = $signed(io_rs1) != $signed(io_rs2); // @[Alu.scala 64:29]
  assign _GEN_3 = _T_71 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 64:40]
  assign _T_75 = io_cntrl == 5'h14; // @[Alu.scala 70:29]
  assign _T_80 = io_cntrl == 5'h15; // @[Alu.scala 77:29]
  assign _T_81 = $signed(io_rs1) >= $signed(io_rs2); // @[Alu.scala 78:29]
  assign _GEN_5 = _T_81 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 78:39]
  assign _T_85 = io_cntrl == 5'h17; // @[Alu.scala 84:29]
  assign _GEN_8 = _T_85 ? $signed({{30{_GEN_5[1]}},_GEN_5}) : $signed(io_rs1); // @[Alu.scala 84:44]
  assign _GEN_9 = _T_80 ? $signed({{30{_GEN_5[1]}},_GEN_5}) : $signed(_GEN_8); // @[Alu.scala 77:44]
  assign _GEN_10 = _T_75 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_9); // @[Alu.scala 70:44]
  assign _GEN_11 = _T_70 ? $signed({{30{_GEN_3[1]}},_GEN_3}) : $signed(_GEN_10); // @[Alu.scala 63:44]
  assign _GEN_12 = _T_65 ? $signed({{30{_GEN_2[1]}},_GEN_2}) : $signed(_GEN_11); // @[Alu.scala 56:44]
  assign _GEN_13 = _T_61 ? $signed(_T_46) : $signed(_GEN_12); // @[Alu.scala 52:44]
  assign _GEN_14 = _T_56 ? $signed(_T_59) : $signed(_GEN_13); // @[Alu.scala 49:45]
  assign _GEN_15 = _T_52 ? $signed(_T_54) : $signed(_GEN_14); // @[Alu.scala 46:44]
  assign _GEN_16 = _T_48 ? $signed(_T_50) : $signed(_GEN_15); // @[Alu.scala 43:44]
  assign _GEN_17 = _T_44 ? $signed(_T_46) : $signed(_GEN_16); // @[Alu.scala 39:44]
  assign _GEN_18 = _T_40 ? $signed(_T_42) : $signed(_GEN_17); // @[Alu.scala 36:44]
  assign _GEN_19 = _T_33 ? $signed({{30{_GEN_1[1]}},_GEN_1}) : $signed(_GEN_18); // @[Alu.scala 29:71]
  assign _GEN_20 = _T_25 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_19); // @[Alu.scala 22:44]
  assign _GEN_21 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_20[31]}},_GEN_20}); // @[Alu.scala 18:44]
  assign _GEN_22 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_21); // @[Alu.scala 15:38]
  assign _GEN_25 = _GEN_22[31:0]; // @[Alu.scala 16:24 Alu.scala 20:24 Alu.scala 24:32 Alu.scala 26:32 Alu.scala 31:32 Alu.scala 33:32 Alu.scala 37:24 Alu.scala 41:24 Alu.scala 44:24 Alu.scala 47:24 Alu.scala 50:24 Alu.scala 54:24 Alu.scala 58:32 Alu.scala 60:32 Alu.scala 65:32 Alu.scala 67:32 Alu.scala 72:32 Alu.scala 74:32 Alu.scala 79:32 Alu.scala 81:32 Alu.scala 86:32 Alu.scala 88:32 Alu.scala 92:24]
  assign io_out = $signed(_GEN_25); // @[Alu.scala 16:24 Alu.scala 20:24 Alu.scala 24:32 Alu.scala 26:32 Alu.scala 31:32 Alu.scala 33:32 Alu.scala 37:24 Alu.scala 41:24 Alu.scala 44:24 Alu.scala 47:24 Alu.scala 50:24 Alu.scala 54:24 Alu.scala 58:32 Alu.scala 60:32 Alu.scala 65:32 Alu.scala 67:32 Alu.scala 72:32 Alu.scala 74:32 Alu.scala 79:32 Alu.scala 81:32 Alu.scala 86:32 Alu.scala 88:32 Alu.scala 92:24]
endmodule
module AluOp(
  input  [2:0] io_fnc3,
  input        io_fnc7,
  input  [2:0] io_aluop,
  output [4:0] io_out
);
  wire  _T_14; // @[AluOp.scala 14:24]
  wire [4:0] _T_17; // @[Cat.scala 30:58]
  wire  _T_19; // @[AluOp.scala 16:30]
  wire  _T_22; // @[AluOp.scala 18:30]
  wire  _T_25; // @[AluOp.scala 20:30]
  wire [4:0] _T_27; // @[Cat.scala 30:58]
  wire  _T_29; // @[AluOp.scala 22:30]
  wire  _T_31; // @[AluOp.scala 23:31]
  wire [3:0] _T_36; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[AluOp.scala 23:44]
  wire  _T_38; // @[AluOp.scala 28:30]
  wire [4:0] _GEN_2; // @[AluOp.scala 28:43]
  wire [4:0] _GEN_3; // @[AluOp.scala 22:43]
  wire [4:0] _GEN_4; // @[AluOp.scala 20:43]
  wire [4:0] _GEN_5; // @[AluOp.scala 18:43]
  wire [4:0] _GEN_6; // @[AluOp.scala 16:43]
  assign _T_14 = io_aluop == 3'h0; // @[AluOp.scala 14:24]
  assign _T_17 = {1'h0,io_fnc7,io_fnc3}; // @[Cat.scala 30:58]
  assign _T_19 = io_aluop == 3'h4; // @[AluOp.scala 16:30]
  assign _T_22 = io_aluop == 3'h5; // @[AluOp.scala 18:30]
  assign _T_25 = io_aluop == 3'h2; // @[AluOp.scala 20:30]
  assign _T_27 = {2'h2,io_fnc3}; // @[Cat.scala 30:58]
  assign _T_29 = io_aluop == 3'h1; // @[AluOp.scala 22:30]
  assign _T_31 = io_fnc3 == 3'h5; // @[AluOp.scala 23:31]
  assign _T_36 = {1'h0,io_fnc3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_31 ? _T_17 : {{1'd0}, _T_36}; // @[AluOp.scala 23:44]
  assign _T_38 = io_aluop == 3'h3; // @[AluOp.scala 28:30]
  assign _GEN_2 = _T_38 ? 5'h1f : 5'h0; // @[AluOp.scala 28:43]
  assign _GEN_3 = _T_29 ? _GEN_0 : _GEN_2; // @[AluOp.scala 22:43]
  assign _GEN_4 = _T_25 ? _T_27 : _GEN_3; // @[AluOp.scala 20:43]
  assign _GEN_5 = _T_22 ? 5'h0 : _GEN_4; // @[AluOp.scala 18:43]
  assign _GEN_6 = _T_19 ? 5'h0 : _GEN_5; // @[AluOp.scala 16:43]
  assign io_out = _T_14 ? _T_17 : _GEN_6; // @[AluOp.scala 15:24 AluOp.scala 17:24 AluOp.scala 19:24 AluOp.scala 21:24 AluOp.scala 24:32 AluOp.scala 26:32 AluOp.scala 29:24 AluOp.scala 31:24]
endmodule
module Regfile(
  input         clock,
  input         io_regwrite,
  input  [4:0]  io_rd_sel,
  input  [4:0]  io_r1,
  input  [4:0]  io_r2,
  input  [31:0] io_writedata,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] registers_0; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_0;
  reg [31:0] registers_1; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_1;
  reg [31:0] registers_2; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_2;
  reg [31:0] registers_3; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_3;
  reg [31:0] registers_4; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_4;
  reg [31:0] registers_5; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_5;
  reg [31:0] registers_6; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_6;
  reg [31:0] registers_7; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_7;
  reg [31:0] registers_8; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_8;
  reg [31:0] registers_9; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_9;
  reg [31:0] registers_10; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_10;
  reg [31:0] registers_11; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_11;
  reg [31:0] registers_12; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_12;
  reg [31:0] registers_13; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_13;
  reg [31:0] registers_14; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_14;
  reg [31:0] registers_15; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_15;
  reg [31:0] registers_16; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_16;
  reg [31:0] registers_17; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_17;
  reg [31:0] registers_18; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_18;
  reg [31:0] registers_19; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_19;
  reg [31:0] registers_20; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_20;
  reg [31:0] registers_21; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_21;
  reg [31:0] registers_22; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_22;
  reg [31:0] registers_23; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_23;
  reg [31:0] registers_24; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_24;
  reg [31:0] registers_25; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_25;
  reg [31:0] registers_26; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_26;
  reg [31:0] registers_27; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_27;
  reg [31:0] registers_28; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_28;
  reg [31:0] registers_29; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_29;
  reg [31:0] registers_30; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_30;
  reg [31:0] registers_31; // @[Regfile.scala 15:28]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_2; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_3; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_4; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_5; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_6; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_7; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_8; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_9; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_10; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_11; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_12; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_13; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_14; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_15; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_16; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_17; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_18; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_19; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_20; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_21; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_22; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_23; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_24; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_25; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_26; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_27; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_28; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_29; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_30; // @[Regfile.scala 17:16]
  wire [31:0] _GEN_33; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_34; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_35; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_36; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_37; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_38; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_39; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_40; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_41; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_42; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_43; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_44; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_45; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_46; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_47; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_48; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_49; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_50; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_51; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_52; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_53; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_54; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_55; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_56; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_57; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_58; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_59; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_60; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_61; // @[Regfile.scala 18:16]
  wire [31:0] _GEN_62; // @[Regfile.scala 18:16]
  wire  _T_62; // @[Regfile.scala 20:32]
  wire [31:0] _GEN_65; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_66; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_67; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_68; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_69; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_70; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_71; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_72; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_73; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_74; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_75; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_76; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_77; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_78; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_79; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_80; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_81; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_82; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_83; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_84; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_85; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_86; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_87; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_88; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_89; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_90; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_91; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_92; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_93; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_94; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_95; // @[Regfile.scala 21:46]
  wire [31:0] _GEN_96; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_97; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_98; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_99; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_100; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_101; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_102; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_103; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_104; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_105; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_106; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_107; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_108; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_109; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_110; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_111; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_112; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_113; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_114; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_115; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_116; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_117; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_118; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_119; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_120; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_121; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_122; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_123; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_124; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_125; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_126; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_127; // @[Regfile.scala 23:46]
  wire [31:0] _GEN_129; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_130; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_131; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_132; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_133; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_134; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_135; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_136; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_137; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_138; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_139; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_140; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_141; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_142; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_143; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_144; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_145; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_146; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_147; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_148; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_149; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_150; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_151; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_152; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_153; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_154; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_155; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_156; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_157; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_158; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_159; // @[Regfile.scala 20:47]
  wire [31:0] _GEN_160; // @[Regfile.scala 20:47]
  assign _GEN_1 = 5'h1 == io_r1 ? $signed(registers_1) : $signed(registers_0); // @[Regfile.scala 17:16]
  assign _GEN_2 = 5'h2 == io_r1 ? $signed(registers_2) : $signed(_GEN_1); // @[Regfile.scala 17:16]
  assign _GEN_3 = 5'h3 == io_r1 ? $signed(registers_3) : $signed(_GEN_2); // @[Regfile.scala 17:16]
  assign _GEN_4 = 5'h4 == io_r1 ? $signed(registers_4) : $signed(_GEN_3); // @[Regfile.scala 17:16]
  assign _GEN_5 = 5'h5 == io_r1 ? $signed(registers_5) : $signed(_GEN_4); // @[Regfile.scala 17:16]
  assign _GEN_6 = 5'h6 == io_r1 ? $signed(registers_6) : $signed(_GEN_5); // @[Regfile.scala 17:16]
  assign _GEN_7 = 5'h7 == io_r1 ? $signed(registers_7) : $signed(_GEN_6); // @[Regfile.scala 17:16]
  assign _GEN_8 = 5'h8 == io_r1 ? $signed(registers_8) : $signed(_GEN_7); // @[Regfile.scala 17:16]
  assign _GEN_9 = 5'h9 == io_r1 ? $signed(registers_9) : $signed(_GEN_8); // @[Regfile.scala 17:16]
  assign _GEN_10 = 5'ha == io_r1 ? $signed(registers_10) : $signed(_GEN_9); // @[Regfile.scala 17:16]
  assign _GEN_11 = 5'hb == io_r1 ? $signed(registers_11) : $signed(_GEN_10); // @[Regfile.scala 17:16]
  assign _GEN_12 = 5'hc == io_r1 ? $signed(registers_12) : $signed(_GEN_11); // @[Regfile.scala 17:16]
  assign _GEN_13 = 5'hd == io_r1 ? $signed(registers_13) : $signed(_GEN_12); // @[Regfile.scala 17:16]
  assign _GEN_14 = 5'he == io_r1 ? $signed(registers_14) : $signed(_GEN_13); // @[Regfile.scala 17:16]
  assign _GEN_15 = 5'hf == io_r1 ? $signed(registers_15) : $signed(_GEN_14); // @[Regfile.scala 17:16]
  assign _GEN_16 = 5'h10 == io_r1 ? $signed(registers_16) : $signed(_GEN_15); // @[Regfile.scala 17:16]
  assign _GEN_17 = 5'h11 == io_r1 ? $signed(registers_17) : $signed(_GEN_16); // @[Regfile.scala 17:16]
  assign _GEN_18 = 5'h12 == io_r1 ? $signed(registers_18) : $signed(_GEN_17); // @[Regfile.scala 17:16]
  assign _GEN_19 = 5'h13 == io_r1 ? $signed(registers_19) : $signed(_GEN_18); // @[Regfile.scala 17:16]
  assign _GEN_20 = 5'h14 == io_r1 ? $signed(registers_20) : $signed(_GEN_19); // @[Regfile.scala 17:16]
  assign _GEN_21 = 5'h15 == io_r1 ? $signed(registers_21) : $signed(_GEN_20); // @[Regfile.scala 17:16]
  assign _GEN_22 = 5'h16 == io_r1 ? $signed(registers_22) : $signed(_GEN_21); // @[Regfile.scala 17:16]
  assign _GEN_23 = 5'h17 == io_r1 ? $signed(registers_23) : $signed(_GEN_22); // @[Regfile.scala 17:16]
  assign _GEN_24 = 5'h18 == io_r1 ? $signed(registers_24) : $signed(_GEN_23); // @[Regfile.scala 17:16]
  assign _GEN_25 = 5'h19 == io_r1 ? $signed(registers_25) : $signed(_GEN_24); // @[Regfile.scala 17:16]
  assign _GEN_26 = 5'h1a == io_r1 ? $signed(registers_26) : $signed(_GEN_25); // @[Regfile.scala 17:16]
  assign _GEN_27 = 5'h1b == io_r1 ? $signed(registers_27) : $signed(_GEN_26); // @[Regfile.scala 17:16]
  assign _GEN_28 = 5'h1c == io_r1 ? $signed(registers_28) : $signed(_GEN_27); // @[Regfile.scala 17:16]
  assign _GEN_29 = 5'h1d == io_r1 ? $signed(registers_29) : $signed(_GEN_28); // @[Regfile.scala 17:16]
  assign _GEN_30 = 5'h1e == io_r1 ? $signed(registers_30) : $signed(_GEN_29); // @[Regfile.scala 17:16]
  assign _GEN_33 = 5'h1 == io_r2 ? $signed(registers_1) : $signed(registers_0); // @[Regfile.scala 18:16]
  assign _GEN_34 = 5'h2 == io_r2 ? $signed(registers_2) : $signed(_GEN_33); // @[Regfile.scala 18:16]
  assign _GEN_35 = 5'h3 == io_r2 ? $signed(registers_3) : $signed(_GEN_34); // @[Regfile.scala 18:16]
  assign _GEN_36 = 5'h4 == io_r2 ? $signed(registers_4) : $signed(_GEN_35); // @[Regfile.scala 18:16]
  assign _GEN_37 = 5'h5 == io_r2 ? $signed(registers_5) : $signed(_GEN_36); // @[Regfile.scala 18:16]
  assign _GEN_38 = 5'h6 == io_r2 ? $signed(registers_6) : $signed(_GEN_37); // @[Regfile.scala 18:16]
  assign _GEN_39 = 5'h7 == io_r2 ? $signed(registers_7) : $signed(_GEN_38); // @[Regfile.scala 18:16]
  assign _GEN_40 = 5'h8 == io_r2 ? $signed(registers_8) : $signed(_GEN_39); // @[Regfile.scala 18:16]
  assign _GEN_41 = 5'h9 == io_r2 ? $signed(registers_9) : $signed(_GEN_40); // @[Regfile.scala 18:16]
  assign _GEN_42 = 5'ha == io_r2 ? $signed(registers_10) : $signed(_GEN_41); // @[Regfile.scala 18:16]
  assign _GEN_43 = 5'hb == io_r2 ? $signed(registers_11) : $signed(_GEN_42); // @[Regfile.scala 18:16]
  assign _GEN_44 = 5'hc == io_r2 ? $signed(registers_12) : $signed(_GEN_43); // @[Regfile.scala 18:16]
  assign _GEN_45 = 5'hd == io_r2 ? $signed(registers_13) : $signed(_GEN_44); // @[Regfile.scala 18:16]
  assign _GEN_46 = 5'he == io_r2 ? $signed(registers_14) : $signed(_GEN_45); // @[Regfile.scala 18:16]
  assign _GEN_47 = 5'hf == io_r2 ? $signed(registers_15) : $signed(_GEN_46); // @[Regfile.scala 18:16]
  assign _GEN_48 = 5'h10 == io_r2 ? $signed(registers_16) : $signed(_GEN_47); // @[Regfile.scala 18:16]
  assign _GEN_49 = 5'h11 == io_r2 ? $signed(registers_17) : $signed(_GEN_48); // @[Regfile.scala 18:16]
  assign _GEN_50 = 5'h12 == io_r2 ? $signed(registers_18) : $signed(_GEN_49); // @[Regfile.scala 18:16]
  assign _GEN_51 = 5'h13 == io_r2 ? $signed(registers_19) : $signed(_GEN_50); // @[Regfile.scala 18:16]
  assign _GEN_52 = 5'h14 == io_r2 ? $signed(registers_20) : $signed(_GEN_51); // @[Regfile.scala 18:16]
  assign _GEN_53 = 5'h15 == io_r2 ? $signed(registers_21) : $signed(_GEN_52); // @[Regfile.scala 18:16]
  assign _GEN_54 = 5'h16 == io_r2 ? $signed(registers_22) : $signed(_GEN_53); // @[Regfile.scala 18:16]
  assign _GEN_55 = 5'h17 == io_r2 ? $signed(registers_23) : $signed(_GEN_54); // @[Regfile.scala 18:16]
  assign _GEN_56 = 5'h18 == io_r2 ? $signed(registers_24) : $signed(_GEN_55); // @[Regfile.scala 18:16]
  assign _GEN_57 = 5'h19 == io_r2 ? $signed(registers_25) : $signed(_GEN_56); // @[Regfile.scala 18:16]
  assign _GEN_58 = 5'h1a == io_r2 ? $signed(registers_26) : $signed(_GEN_57); // @[Regfile.scala 18:16]
  assign _GEN_59 = 5'h1b == io_r2 ? $signed(registers_27) : $signed(_GEN_58); // @[Regfile.scala 18:16]
  assign _GEN_60 = 5'h1c == io_r2 ? $signed(registers_28) : $signed(_GEN_59); // @[Regfile.scala 18:16]
  assign _GEN_61 = 5'h1d == io_r2 ? $signed(registers_29) : $signed(_GEN_60); // @[Regfile.scala 18:16]
  assign _GEN_62 = 5'h1e == io_r2 ? $signed(registers_30) : $signed(_GEN_61); // @[Regfile.scala 18:16]
  assign _T_62 = io_rd_sel == 5'h0; // @[Regfile.scala 20:32]
  assign _GEN_65 = 5'h1 == io_rd_sel ? $signed(32'sh0) : $signed(registers_1); // @[Regfile.scala 21:46]
  assign _GEN_66 = 5'h2 == io_rd_sel ? $signed(32'sh0) : $signed(registers_2); // @[Regfile.scala 21:46]
  assign _GEN_67 = 5'h3 == io_rd_sel ? $signed(32'sh0) : $signed(registers_3); // @[Regfile.scala 21:46]
  assign _GEN_68 = 5'h4 == io_rd_sel ? $signed(32'sh0) : $signed(registers_4); // @[Regfile.scala 21:46]
  assign _GEN_69 = 5'h5 == io_rd_sel ? $signed(32'sh0) : $signed(registers_5); // @[Regfile.scala 21:46]
  assign _GEN_70 = 5'h6 == io_rd_sel ? $signed(32'sh0) : $signed(registers_6); // @[Regfile.scala 21:46]
  assign _GEN_71 = 5'h7 == io_rd_sel ? $signed(32'sh0) : $signed(registers_7); // @[Regfile.scala 21:46]
  assign _GEN_72 = 5'h8 == io_rd_sel ? $signed(32'sh0) : $signed(registers_8); // @[Regfile.scala 21:46]
  assign _GEN_73 = 5'h9 == io_rd_sel ? $signed(32'sh0) : $signed(registers_9); // @[Regfile.scala 21:46]
  assign _GEN_74 = 5'ha == io_rd_sel ? $signed(32'sh0) : $signed(registers_10); // @[Regfile.scala 21:46]
  assign _GEN_75 = 5'hb == io_rd_sel ? $signed(32'sh0) : $signed(registers_11); // @[Regfile.scala 21:46]
  assign _GEN_76 = 5'hc == io_rd_sel ? $signed(32'sh0) : $signed(registers_12); // @[Regfile.scala 21:46]
  assign _GEN_77 = 5'hd == io_rd_sel ? $signed(32'sh0) : $signed(registers_13); // @[Regfile.scala 21:46]
  assign _GEN_78 = 5'he == io_rd_sel ? $signed(32'sh0) : $signed(registers_14); // @[Regfile.scala 21:46]
  assign _GEN_79 = 5'hf == io_rd_sel ? $signed(32'sh0) : $signed(registers_15); // @[Regfile.scala 21:46]
  assign _GEN_80 = 5'h10 == io_rd_sel ? $signed(32'sh0) : $signed(registers_16); // @[Regfile.scala 21:46]
  assign _GEN_81 = 5'h11 == io_rd_sel ? $signed(32'sh0) : $signed(registers_17); // @[Regfile.scala 21:46]
  assign _GEN_82 = 5'h12 == io_rd_sel ? $signed(32'sh0) : $signed(registers_18); // @[Regfile.scala 21:46]
  assign _GEN_83 = 5'h13 == io_rd_sel ? $signed(32'sh0) : $signed(registers_19); // @[Regfile.scala 21:46]
  assign _GEN_84 = 5'h14 == io_rd_sel ? $signed(32'sh0) : $signed(registers_20); // @[Regfile.scala 21:46]
  assign _GEN_85 = 5'h15 == io_rd_sel ? $signed(32'sh0) : $signed(registers_21); // @[Regfile.scala 21:46]
  assign _GEN_86 = 5'h16 == io_rd_sel ? $signed(32'sh0) : $signed(registers_22); // @[Regfile.scala 21:46]
  assign _GEN_87 = 5'h17 == io_rd_sel ? $signed(32'sh0) : $signed(registers_23); // @[Regfile.scala 21:46]
  assign _GEN_88 = 5'h18 == io_rd_sel ? $signed(32'sh0) : $signed(registers_24); // @[Regfile.scala 21:46]
  assign _GEN_89 = 5'h19 == io_rd_sel ? $signed(32'sh0) : $signed(registers_25); // @[Regfile.scala 21:46]
  assign _GEN_90 = 5'h1a == io_rd_sel ? $signed(32'sh0) : $signed(registers_26); // @[Regfile.scala 21:46]
  assign _GEN_91 = 5'h1b == io_rd_sel ? $signed(32'sh0) : $signed(registers_27); // @[Regfile.scala 21:46]
  assign _GEN_92 = 5'h1c == io_rd_sel ? $signed(32'sh0) : $signed(registers_28); // @[Regfile.scala 21:46]
  assign _GEN_93 = 5'h1d == io_rd_sel ? $signed(32'sh0) : $signed(registers_29); // @[Regfile.scala 21:46]
  assign _GEN_94 = 5'h1e == io_rd_sel ? $signed(32'sh0) : $signed(registers_30); // @[Regfile.scala 21:46]
  assign _GEN_95 = 5'h1f == io_rd_sel ? $signed(32'sh0) : $signed(registers_31); // @[Regfile.scala 21:46]
  assign _GEN_96 = 5'h0 == io_rd_sel ? $signed(io_writedata) : $signed(32'sh0); // @[Regfile.scala 23:46]
  assign _GEN_97 = 5'h1 == io_rd_sel ? $signed(io_writedata) : $signed(registers_1); // @[Regfile.scala 23:46]
  assign _GEN_98 = 5'h2 == io_rd_sel ? $signed(io_writedata) : $signed(registers_2); // @[Regfile.scala 23:46]
  assign _GEN_99 = 5'h3 == io_rd_sel ? $signed(io_writedata) : $signed(registers_3); // @[Regfile.scala 23:46]
  assign _GEN_100 = 5'h4 == io_rd_sel ? $signed(io_writedata) : $signed(registers_4); // @[Regfile.scala 23:46]
  assign _GEN_101 = 5'h5 == io_rd_sel ? $signed(io_writedata) : $signed(registers_5); // @[Regfile.scala 23:46]
  assign _GEN_102 = 5'h6 == io_rd_sel ? $signed(io_writedata) : $signed(registers_6); // @[Regfile.scala 23:46]
  assign _GEN_103 = 5'h7 == io_rd_sel ? $signed(io_writedata) : $signed(registers_7); // @[Regfile.scala 23:46]
  assign _GEN_104 = 5'h8 == io_rd_sel ? $signed(io_writedata) : $signed(registers_8); // @[Regfile.scala 23:46]
  assign _GEN_105 = 5'h9 == io_rd_sel ? $signed(io_writedata) : $signed(registers_9); // @[Regfile.scala 23:46]
  assign _GEN_106 = 5'ha == io_rd_sel ? $signed(io_writedata) : $signed(registers_10); // @[Regfile.scala 23:46]
  assign _GEN_107 = 5'hb == io_rd_sel ? $signed(io_writedata) : $signed(registers_11); // @[Regfile.scala 23:46]
  assign _GEN_108 = 5'hc == io_rd_sel ? $signed(io_writedata) : $signed(registers_12); // @[Regfile.scala 23:46]
  assign _GEN_109 = 5'hd == io_rd_sel ? $signed(io_writedata) : $signed(registers_13); // @[Regfile.scala 23:46]
  assign _GEN_110 = 5'he == io_rd_sel ? $signed(io_writedata) : $signed(registers_14); // @[Regfile.scala 23:46]
  assign _GEN_111 = 5'hf == io_rd_sel ? $signed(io_writedata) : $signed(registers_15); // @[Regfile.scala 23:46]
  assign _GEN_112 = 5'h10 == io_rd_sel ? $signed(io_writedata) : $signed(registers_16); // @[Regfile.scala 23:46]
  assign _GEN_113 = 5'h11 == io_rd_sel ? $signed(io_writedata) : $signed(registers_17); // @[Regfile.scala 23:46]
  assign _GEN_114 = 5'h12 == io_rd_sel ? $signed(io_writedata) : $signed(registers_18); // @[Regfile.scala 23:46]
  assign _GEN_115 = 5'h13 == io_rd_sel ? $signed(io_writedata) : $signed(registers_19); // @[Regfile.scala 23:46]
  assign _GEN_116 = 5'h14 == io_rd_sel ? $signed(io_writedata) : $signed(registers_20); // @[Regfile.scala 23:46]
  assign _GEN_117 = 5'h15 == io_rd_sel ? $signed(io_writedata) : $signed(registers_21); // @[Regfile.scala 23:46]
  assign _GEN_118 = 5'h16 == io_rd_sel ? $signed(io_writedata) : $signed(registers_22); // @[Regfile.scala 23:46]
  assign _GEN_119 = 5'h17 == io_rd_sel ? $signed(io_writedata) : $signed(registers_23); // @[Regfile.scala 23:46]
  assign _GEN_120 = 5'h18 == io_rd_sel ? $signed(io_writedata) : $signed(registers_24); // @[Regfile.scala 23:46]
  assign _GEN_121 = 5'h19 == io_rd_sel ? $signed(io_writedata) : $signed(registers_25); // @[Regfile.scala 23:46]
  assign _GEN_122 = 5'h1a == io_rd_sel ? $signed(io_writedata) : $signed(registers_26); // @[Regfile.scala 23:46]
  assign _GEN_123 = 5'h1b == io_rd_sel ? $signed(io_writedata) : $signed(registers_27); // @[Regfile.scala 23:46]
  assign _GEN_124 = 5'h1c == io_rd_sel ? $signed(io_writedata) : $signed(registers_28); // @[Regfile.scala 23:46]
  assign _GEN_125 = 5'h1d == io_rd_sel ? $signed(io_writedata) : $signed(registers_29); // @[Regfile.scala 23:46]
  assign _GEN_126 = 5'h1e == io_rd_sel ? $signed(io_writedata) : $signed(registers_30); // @[Regfile.scala 23:46]
  assign _GEN_127 = 5'h1f == io_rd_sel ? $signed(io_writedata) : $signed(registers_31); // @[Regfile.scala 23:46]
  assign _GEN_129 = _T_62 ? $signed(32'sh0) : $signed(_GEN_96); // @[Regfile.scala 20:47]
  assign _GEN_130 = _T_62 ? $signed(_GEN_65) : $signed(_GEN_97); // @[Regfile.scala 20:47]
  assign _GEN_131 = _T_62 ? $signed(_GEN_66) : $signed(_GEN_98); // @[Regfile.scala 20:47]
  assign _GEN_132 = _T_62 ? $signed(_GEN_67) : $signed(_GEN_99); // @[Regfile.scala 20:47]
  assign _GEN_133 = _T_62 ? $signed(_GEN_68) : $signed(_GEN_100); // @[Regfile.scala 20:47]
  assign _GEN_134 = _T_62 ? $signed(_GEN_69) : $signed(_GEN_101); // @[Regfile.scala 20:47]
  assign _GEN_135 = _T_62 ? $signed(_GEN_70) : $signed(_GEN_102); // @[Regfile.scala 20:47]
  assign _GEN_136 = _T_62 ? $signed(_GEN_71) : $signed(_GEN_103); // @[Regfile.scala 20:47]
  assign _GEN_137 = _T_62 ? $signed(_GEN_72) : $signed(_GEN_104); // @[Regfile.scala 20:47]
  assign _GEN_138 = _T_62 ? $signed(_GEN_73) : $signed(_GEN_105); // @[Regfile.scala 20:47]
  assign _GEN_139 = _T_62 ? $signed(_GEN_74) : $signed(_GEN_106); // @[Regfile.scala 20:47]
  assign _GEN_140 = _T_62 ? $signed(_GEN_75) : $signed(_GEN_107); // @[Regfile.scala 20:47]
  assign _GEN_141 = _T_62 ? $signed(_GEN_76) : $signed(_GEN_108); // @[Regfile.scala 20:47]
  assign _GEN_142 = _T_62 ? $signed(_GEN_77) : $signed(_GEN_109); // @[Regfile.scala 20:47]
  assign _GEN_143 = _T_62 ? $signed(_GEN_78) : $signed(_GEN_110); // @[Regfile.scala 20:47]
  assign _GEN_144 = _T_62 ? $signed(_GEN_79) : $signed(_GEN_111); // @[Regfile.scala 20:47]
  assign _GEN_145 = _T_62 ? $signed(_GEN_80) : $signed(_GEN_112); // @[Regfile.scala 20:47]
  assign _GEN_146 = _T_62 ? $signed(_GEN_81) : $signed(_GEN_113); // @[Regfile.scala 20:47]
  assign _GEN_147 = _T_62 ? $signed(_GEN_82) : $signed(_GEN_114); // @[Regfile.scala 20:47]
  assign _GEN_148 = _T_62 ? $signed(_GEN_83) : $signed(_GEN_115); // @[Regfile.scala 20:47]
  assign _GEN_149 = _T_62 ? $signed(_GEN_84) : $signed(_GEN_116); // @[Regfile.scala 20:47]
  assign _GEN_150 = _T_62 ? $signed(_GEN_85) : $signed(_GEN_117); // @[Regfile.scala 20:47]
  assign _GEN_151 = _T_62 ? $signed(_GEN_86) : $signed(_GEN_118); // @[Regfile.scala 20:47]
  assign _GEN_152 = _T_62 ? $signed(_GEN_87) : $signed(_GEN_119); // @[Regfile.scala 20:47]
  assign _GEN_153 = _T_62 ? $signed(_GEN_88) : $signed(_GEN_120); // @[Regfile.scala 20:47]
  assign _GEN_154 = _T_62 ? $signed(_GEN_89) : $signed(_GEN_121); // @[Regfile.scala 20:47]
  assign _GEN_155 = _T_62 ? $signed(_GEN_90) : $signed(_GEN_122); // @[Regfile.scala 20:47]
  assign _GEN_156 = _T_62 ? $signed(_GEN_91) : $signed(_GEN_123); // @[Regfile.scala 20:47]
  assign _GEN_157 = _T_62 ? $signed(_GEN_92) : $signed(_GEN_124); // @[Regfile.scala 20:47]
  assign _GEN_158 = _T_62 ? $signed(_GEN_93) : $signed(_GEN_125); // @[Regfile.scala 20:47]
  assign _GEN_159 = _T_62 ? $signed(_GEN_94) : $signed(_GEN_126); // @[Regfile.scala 20:47]
  assign _GEN_160 = _T_62 ? $signed(_GEN_95) : $signed(_GEN_127); // @[Regfile.scala 20:47]
  assign io_rs1 = 5'h1f == io_r1 ? $signed(registers_31) : $signed(_GEN_30); // @[Regfile.scala 17:16]
  assign io_rs2 = 5'h1f == io_r2 ? $signed(registers_31) : $signed(_GEN_62); // @[Regfile.scala 18:16]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_regwrite) begin
      if (_T_62) begin
        registers_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd_sel) begin
          registers_0 <= io_writedata;
        end else begin
          registers_0 <= 32'sh0;
        end
      end
    end else begin
      registers_0 <= 32'sh0;
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1 == io_rd_sel) begin
          registers_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd_sel) begin
          registers_1 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h2 == io_rd_sel) begin
          registers_2 <= 32'sh0;
        end
      end else begin
        if (5'h2 == io_rd_sel) begin
          registers_2 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h3 == io_rd_sel) begin
          registers_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd_sel) begin
          registers_3 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h4 == io_rd_sel) begin
          registers_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd_sel) begin
          registers_4 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h5 == io_rd_sel) begin
          registers_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd_sel) begin
          registers_5 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h6 == io_rd_sel) begin
          registers_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd_sel) begin
          registers_6 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h7 == io_rd_sel) begin
          registers_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd_sel) begin
          registers_7 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h8 == io_rd_sel) begin
          registers_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd_sel) begin
          registers_8 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h9 == io_rd_sel) begin
          registers_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd_sel) begin
          registers_9 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'ha == io_rd_sel) begin
          registers_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd_sel) begin
          registers_10 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hb == io_rd_sel) begin
          registers_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd_sel) begin
          registers_11 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hc == io_rd_sel) begin
          registers_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd_sel) begin
          registers_12 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hd == io_rd_sel) begin
          registers_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd_sel) begin
          registers_13 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'he == io_rd_sel) begin
          registers_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd_sel) begin
          registers_14 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hf == io_rd_sel) begin
          registers_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd_sel) begin
          registers_15 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h10 == io_rd_sel) begin
          registers_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd_sel) begin
          registers_16 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h11 == io_rd_sel) begin
          registers_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd_sel) begin
          registers_17 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h12 == io_rd_sel) begin
          registers_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd_sel) begin
          registers_18 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h13 == io_rd_sel) begin
          registers_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd_sel) begin
          registers_19 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h14 == io_rd_sel) begin
          registers_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd_sel) begin
          registers_20 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h15 == io_rd_sel) begin
          registers_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd_sel) begin
          registers_21 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h16 == io_rd_sel) begin
          registers_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd_sel) begin
          registers_22 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h17 == io_rd_sel) begin
          registers_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd_sel) begin
          registers_23 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h18 == io_rd_sel) begin
          registers_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd_sel) begin
          registers_24 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h19 == io_rd_sel) begin
          registers_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd_sel) begin
          registers_25 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1a == io_rd_sel) begin
          registers_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd_sel) begin
          registers_26 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1b == io_rd_sel) begin
          registers_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd_sel) begin
          registers_27 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1c == io_rd_sel) begin
          registers_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd_sel) begin
          registers_28 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1d == io_rd_sel) begin
          registers_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd_sel) begin
          registers_29 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1e == io_rd_sel) begin
          registers_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd_sel) begin
          registers_30 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1f == io_rd_sel) begin
          registers_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd_sel) begin
          registers_31 <= io_writedata;
        end
      end
    end
  end
endmodule
module Jalrr(
  input  [31:0] io_input1,
  input  [31:0] io_input2,
  output [31:0] io_out
);
  wire [32:0] _T_11; // @[Jalrr.scala 11:30]
  wire [31:0] _T_12; // @[Jalrr.scala 11:30]
  wire [31:0] _T_13; // @[Jalrr.scala 11:30]
  wire [31:0] _T_14; // @[Jalrr.scala 11:43]
  assign _T_11 = $signed(io_input1) + $signed(io_input2); // @[Jalrr.scala 11:30]
  assign _T_12 = $signed(io_input1) + $signed(io_input2); // @[Jalrr.scala 11:30]
  assign _T_13 = $signed(_T_12); // @[Jalrr.scala 11:30]
  assign _T_14 = $unsigned(_T_13); // @[Jalrr.scala 11:43]
  assign io_out = _T_14 & 32'hfffffffe; // @[Jalrr.scala 11:16]
endmodule
module Memory(
  input         clock,
  output [31:0] io_out,
  input         io_load,
  input         io_store,
  input  [7:0]  io_addd,
  input  [31:0] io_data
);
  reg [31:0] mem [0:1023]; // @[Memory.scala 13:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_19_data; // @[Memory.scala 13:22]
  wire [9:0] mem__T_19_addr; // @[Memory.scala 13:22]
  wire [31:0] mem__T_23_data; // @[Memory.scala 13:22]
  wire [9:0] mem__T_23_addr; // @[Memory.scala 13:22]
  wire  mem__T_23_mask; // @[Memory.scala 13:22]
  wire  mem__T_23_en; // @[Memory.scala 13:22]
  assign mem__T_19_addr = {{2'd0}, io_addd};
  assign mem__T_19_data = mem[mem__T_19_addr]; // @[Memory.scala 13:22]
  assign mem__T_23_data = $unsigned(io_data);
  assign mem__T_23_addr = {{2'd0}, io_addd};
  assign mem__T_23_mask = 1'h1;
  assign mem__T_23_en = io_load ? 1'h0 : io_store;
  assign io_out = $signed(mem__T_19_data); // @[Memory.scala 15:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_23_en & mem__T_23_mask) begin
      mem[mem__T_23_addr] <= mem__T_23_data; // @[Memory.scala 13:22]
    end
  end
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_regout
);
  wire  Instruction_clock; // @[Top.scala 14:33]
  wire [9:0] Instruction_io_wrAddr; // @[Top.scala 14:33]
  wire [31:0] Instruction_io_rdData; // @[Top.scala 14:33]
  wire  pc_clock; // @[Top.scala 15:24]
  wire [31:0] pc_io_input; // @[Top.scala 15:24]
  wire [31:0] pc_io_pc4; // @[Top.scala 15:24]
  wire [31:0] pc_io_pc; // @[Top.scala 15:24]
  wire [6:0] control_io_opcode; // @[Top.scala 16:29]
  wire  control_io_memwrite; // @[Top.scala 16:29]
  wire  control_io_memread; // @[Top.scala 16:29]
  wire  control_io_regwrite; // @[Top.scala 16:29]
  wire  control_io_memtoreg; // @[Top.scala 16:29]
  wire [2:0] control_io_aluop; // @[Top.scala 16:29]
  wire [1:0] control_io_opA; // @[Top.scala 16:29]
  wire  control_io_opB; // @[Top.scala 16:29]
  wire [1:0] control_io_extend; // @[Top.scala 16:29]
  wire [1:0] control_io_nxtpc; // @[Top.scala 16:29]
  wire [31:0] immediate_io_inst; // @[Top.scala 17:31]
  wire [31:0] immediate_io_pc; // @[Top.scala 17:31]
  wire [31:0] immediate_io_Sout; // @[Top.scala 17:31]
  wire [31:0] immediate_io_Uout; // @[Top.scala 17:31]
  wire [31:0] immediate_io_Sbout; // @[Top.scala 17:31]
  wire [31:0] immediate_io_Ujout; // @[Top.scala 17:31]
  wire [31:0] immediate_io_Iout; // @[Top.scala 17:31]
  wire [31:0] alu_io_rs1; // @[Top.scala 18:25]
  wire [31:0] alu_io_rs2; // @[Top.scala 18:25]
  wire [4:0] alu_io_cntrl; // @[Top.scala 18:25]
  wire [31:0] alu_io_out; // @[Top.scala 18:25]
  wire [2:0] alucontrol_io_fnc3; // @[Top.scala 19:32]
  wire  alucontrol_io_fnc7; // @[Top.scala 19:32]
  wire [2:0] alucontrol_io_aluop; // @[Top.scala 19:32]
  wire [4:0] alucontrol_io_out; // @[Top.scala 19:32]
  wire  regfile_clock; // @[Top.scala 20:29]
  wire  regfile_io_regwrite; // @[Top.scala 20:29]
  wire [4:0] regfile_io_rd_sel; // @[Top.scala 20:29]
  wire [4:0] regfile_io_r1; // @[Top.scala 20:29]
  wire [4:0] regfile_io_r2; // @[Top.scala 20:29]
  wire [31:0] regfile_io_writedata; // @[Top.scala 20:29]
  wire [31:0] regfile_io_rs1; // @[Top.scala 20:29]
  wire [31:0] regfile_io_rs2; // @[Top.scala 20:29]
  wire [31:0] jalr_io_input1; // @[Top.scala 21:26]
  wire [31:0] jalr_io_input2; // @[Top.scala 21:26]
  wire [31:0] jalr_io_out; // @[Top.scala 21:26]
  wire  memory_clock; // @[Top.scala 22:28]
  wire [31:0] memory_io_out; // @[Top.scala 22:28]
  wire  memory_io_load; // @[Top.scala 22:28]
  wire  memory_io_store; // @[Top.scala 22:28]
  wire [7:0] memory_io_addd; // @[Top.scala 22:28]
  wire [31:0] memory_io_data; // @[Top.scala 22:28]
  wire  _T_10; // @[Top.scala 28:31]
  wire  _T_12; // @[Top.scala 30:37]
  wire  _T_14; // @[Top.scala 32:37]
  wire [31:0] _T_15; // @[Top.scala 33:51]
  wire [31:0] _T_20; // @[Top.scala 36:59]
  wire [31:0] _GEN_2; // @[Top.scala 32:49]
  wire [31:0] _GEN_3; // @[Top.scala 30:49]
  wire  _T_28; // @[Top.scala 60:30]
  wire  _T_30; // @[Top.scala 60:62]
  wire  _T_31; // @[Top.scala 60:43]
  wire [31:0] _T_34; // @[Top.scala 63:41]
  wire  _T_36; // @[Top.scala 69:33]
  wire  _T_43; // @[Top.scala 77:62]
  wire  _T_44; // @[Top.scala 77:44]
  wire  _T_46; // @[Top.scala 79:38]
  wire  _T_49; // @[Top.scala 79:50]
  wire  _T_51; // @[Top.scala 81:38]
  wire  _T_54; // @[Top.scala 81:50]
  wire [31:0] _GEN_8; // @[Top.scala 81:79]
  wire [31:0] _GEN_9; // @[Top.scala 79:79]
  wire  _T_57; // @[Top.scala 93:34]
  Instruction Instruction ( // @[Top.scala 14:33]
    .clock(Instruction_clock),
    .io_wrAddr(Instruction_io_wrAddr),
    .io_rdData(Instruction_io_rdData)
  );
  Pc pc ( // @[Top.scala 15:24]
    .clock(pc_clock),
    .io_input(pc_io_input),
    .io_pc4(pc_io_pc4),
    .io_pc(pc_io_pc)
  );
  Control control ( // @[Top.scala 16:29]
    .io_opcode(control_io_opcode),
    .io_memwrite(control_io_memwrite),
    .io_memread(control_io_memread),
    .io_regwrite(control_io_regwrite),
    .io_memtoreg(control_io_memtoreg),
    .io_aluop(control_io_aluop),
    .io_opA(control_io_opA),
    .io_opB(control_io_opB),
    .io_extend(control_io_extend),
    .io_nxtpc(control_io_nxtpc)
  );
  Imme immediate ( // @[Top.scala 17:31]
    .io_inst(immediate_io_inst),
    .io_pc(immediate_io_pc),
    .io_Sout(immediate_io_Sout),
    .io_Uout(immediate_io_Uout),
    .io_Sbout(immediate_io_Sbout),
    .io_Ujout(immediate_io_Ujout),
    .io_Iout(immediate_io_Iout)
  );
  Alu alu ( // @[Top.scala 18:25]
    .io_rs1(alu_io_rs1),
    .io_rs2(alu_io_rs2),
    .io_cntrl(alu_io_cntrl),
    .io_out(alu_io_out)
  );
  AluOp alucontrol ( // @[Top.scala 19:32]
    .io_fnc3(alucontrol_io_fnc3),
    .io_fnc7(alucontrol_io_fnc7),
    .io_aluop(alucontrol_io_aluop),
    .io_out(alucontrol_io_out)
  );
  Regfile regfile ( // @[Top.scala 20:29]
    .clock(regfile_clock),
    .io_regwrite(regfile_io_regwrite),
    .io_rd_sel(regfile_io_rd_sel),
    .io_r1(regfile_io_r1),
    .io_r2(regfile_io_r2),
    .io_writedata(regfile_io_writedata),
    .io_rs1(regfile_io_rs1),
    .io_rs2(regfile_io_rs2)
  );
  Jalrr jalr ( // @[Top.scala 21:26]
    .io_input1(jalr_io_input1),
    .io_input2(jalr_io_input2),
    .io_out(jalr_io_out)
  );
  Memory memory ( // @[Top.scala 22:28]
    .clock(memory_clock),
    .io_out(memory_io_out),
    .io_load(memory_io_load),
    .io_store(memory_io_store),
    .io_addd(memory_io_addd),
    .io_data(memory_io_data)
  );
  assign _T_10 = control_io_nxtpc == 2'h0; // @[Top.scala 28:31]
  assign _T_12 = control_io_nxtpc == 2'h3; // @[Top.scala 30:37]
  assign _T_14 = control_io_nxtpc == 2'h2; // @[Top.scala 32:37]
  assign _T_15 = $unsigned(immediate_io_Ujout); // @[Top.scala 33:51]
  assign _T_20 = $unsigned(immediate_io_Sbout); // @[Top.scala 36:59]
  assign _GEN_2 = _T_14 ? _T_15 : _T_20; // @[Top.scala 32:49]
  assign _GEN_3 = _T_12 ? jalr_io_out : _GEN_2; // @[Top.scala 30:49]
  assign _T_28 = control_io_opA == 2'h0; // @[Top.scala 60:30]
  assign _T_30 = control_io_opA == 2'h3; // @[Top.scala 60:62]
  assign _T_31 = _T_28 | _T_30; // @[Top.scala 60:43]
  assign _T_34 = $signed(pc_io_pc4); // @[Top.scala 63:41]
  assign _T_36 = control_io_extend == 2'h0; // @[Top.scala 69:33]
  assign _T_43 = control_io_opB; // @[Top.scala 77:62]
  assign _T_44 = _T_36 & _T_43; // @[Top.scala 77:44]
  assign _T_46 = control_io_extend == 2'h2; // @[Top.scala 79:38]
  assign _T_49 = _T_46 & _T_43; // @[Top.scala 79:50]
  assign _T_51 = control_io_extend == 2'h1; // @[Top.scala 81:38]
  assign _T_54 = _T_51 & _T_43; // @[Top.scala 81:50]
  assign _GEN_8 = _T_54 ? $signed(immediate_io_Uout) : $signed(regfile_io_rs2); // @[Top.scala 81:79]
  assign _GEN_9 = _T_49 ? $signed(immediate_io_Sout) : $signed(_GEN_8); // @[Top.scala 79:79]
  assign _T_57 = control_io_memtoreg; // @[Top.scala 93:34]
  assign io_regout = regfile_io_writedata; // @[Top.scala 99:19]
  assign Instruction_clock = clock;
  assign Instruction_io_wrAddr = pc_io_pc[11:2]; // @[Top.scala 23:31]
  assign pc_clock = clock;
  assign pc_io_input = _T_10 ? pc_io_pc4 : _GEN_3; // @[Top.scala 29:29 Top.scala 31:29 Top.scala 33:29 Top.scala 36:37]
  assign control_io_opcode = Instruction_io_rdData[6:0]; // @[Top.scala 45:27]
  assign immediate_io_inst = Instruction_io_rdData; // @[Top.scala 46:27]
  assign immediate_io_pc = pc_io_pc; // @[Top.scala 47:25]
  assign alu_io_rs1 = _T_31 ? $signed(regfile_io_rs1) : $signed(_T_34); // @[Top.scala 61:28 Top.scala 63:28]
  assign alu_io_rs2 = _T_44 ? $signed(immediate_io_Iout) : $signed(_GEN_9); // @[Top.scala 78:28 Top.scala 80:28 Top.scala 82:28 Top.scala 84:28]
  assign alu_io_cntrl = alucontrol_io_out; // @[Top.scala 92:22]
  assign alucontrol_io_fnc3 = Instruction_io_rdData[14:12]; // @[Top.scala 56:28]
  assign alucontrol_io_fnc7 = Instruction_io_rdData[30]; // @[Top.scala 57:28]
  assign alucontrol_io_aluop = control_io_aluop; // @[Top.scala 55:29]
  assign regfile_clock = clock;
  assign regfile_io_regwrite = control_io_regwrite; // @[Top.scala 53:29]
  assign regfile_io_rd_sel = Instruction_io_rdData[11:7]; // @[Top.scala 52:27]
  assign regfile_io_r1 = Instruction_io_rdData[19:15]; // @[Top.scala 50:23]
  assign regfile_io_r2 = Instruction_io_rdData[24:20]; // @[Top.scala 51:23]
  assign regfile_io_writedata = _T_57 ? $signed(memory_io_out) : $signed(alu_io_out); // @[Top.scala 94:38 Top.scala 96:38]
  assign jalr_io_input1 = regfile_io_rs1; // @[Top.scala 68:24]
  assign jalr_io_input2 = immediate_io_Iout; // @[Top.scala 70:32]
  assign memory_clock = clock;
  assign memory_io_load = control_io_memread; // @[Top.scala 87:24]
  assign memory_io_store = control_io_memwrite; // @[Top.scala 88:25]
  assign memory_io_addd = alu_io_out[9:2]; // @[Top.scala 90:24]
  assign memory_io_data = regfile_io_rs2; // @[Top.scala 89:24]
endmodule
