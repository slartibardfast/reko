// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.10.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(4003F6 code t4003F6)
		(400406 code t400406)
		(4005C5 Eq_16 t4005C5)
		(400620 Eq_19 t400620)
		(4006B0 Eq_20 t4006B0)
		(4006C8 (str char) str4006C8)
		(4006F0 (str char) str4006F0)
		(400718 (str char) str400718)
		(600DF8 (arr (ptr64 code)) a600DF8)
		(600E08 word64 qw600E08)
		(600FE0 (ptr64 code) __gmon_start___GOT)
		(601000 (ptr64 code) puts_GOT)
		(601008 (ptr64 code) __libc_start_main_GOT)
		(601020 (arr byte) a601020)
		(601038 byte b601038))
	globals_t (in globals @ 00000000 : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start @ 004003CC : ptr64)
	T_3 (in signature of call_gmon_start @ 0040043C : void)
Eq_5: (fn void ())
	T_5 (in rdx @ 004003D5 : (ptr64 Eq_5))
	T_21 (in rtld_fini @ 00400434 : (ptr64 (fn void ())))
Eq_7: (fn void (ptr64))
	T_7 (in __align @ 00400419 : ptr64)
	T_8 (in signature of __align @ 00000000 : void)
Eq_14: (fn int32 ((ptr64 Eq_16), int32, (ptr64 (ptr64 char)), (ptr64 Eq_19), (ptr64 Eq_20), (ptr64 Eq_5), (ptr64 void)))
	T_14 (in __libc_start_main @ 00400434 : ptr64)
	T_15 (in signature of __libc_start_main @ 00000000 : void)
Eq_16: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_16 (in main @ 00400434 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_23 (in 0x4005C5<64> @ 00400434 : word64)
Eq_19: (fn void ())
	T_19 (in init @ 00400434 : (ptr64 (fn void ())))
	T_27 (in 0x400620<64> @ 00400434 : word64)
Eq_20: (fn void ())
	T_20 (in fini @ 00400434 : (ptr64 (fn void ())))
	T_28 (in 0x4006B0<64> @ 00400434 : word64)
Eq_30: (fn void ())
	T_30 (in __hlt @ 00400439 : ptr64)
	T_31 (in signature of __hlt @ 00000000 : void)
Eq_48: (fn void ())
	T_48 (in deregister_tm_clones @ 004004DD : ptr64)
	T_49 (in signature of deregister_tm_clones @ 00400460 : void)
Eq_61: (fn void ())
	T_61 (in register_tm_clones @ 00400510 : ptr64)
	T_62 (in signature of register_tm_clones @ 00400490 : void)
	T_64 (in register_tm_clones @ 00400518 : ptr64)
Eq_113: (struct "Eq_113" (8 (ptr64 (arr byte)) ptr0008))
	T_113 (in rsi @ 004005C4 : (ptr64 Eq_113))
Eq_117: (fn word32 ((ptr64 (arr byte))))
	T_117 (in verify @ 00400600 : ptr64)
	T_118 (in signature of verify @ 00400520 : void)
Eq_125: (fn int32 ((ptr64 char)))
	T_125 (in puts @ 004005DF : ptr64)
	T_126 (in signature of puts @ 00000000 : void)
	T_130 (in puts @ 00400613 : ptr64)
	T_133 (in puts @ 00400607 : ptr64)
Eq_141: (fn void ())
	T_141 (in _init @ 00400660 : ptr64)
	T_142 (in signature of _init @ 004003C8 : void)
Eq_145: (union "Eq_145" (int64 u0) (ptr64 u1))
	T_145 (in 0000000000600E00 @ 00400650 : ptr64)
Eq_146: (union "Eq_146" (int64 u0) (ptr64 u1))
	T_146 (in 0000000000600DF8 @ 00400650 : ptr64)
Eq_152: (union "Eq_152" (int64 u0) (uint64 u1))
	T_152 (in rbx_38 @ 0040066A : Eq_152)
	T_153 (in 0<u64> @ 0040066A : uint64)
	T_159 (in rbx_38 + 1<64> @ 0040067D : word64)
	T_160 (in rbp_19 >> 3<64> @ 00000000 : word64)
// Type Variables ////////////
globals_t: (in globals @ 00000000 : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start @ 004003CC : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start @ 0040043C : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() @ 004003CC : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx @ 004003D5 : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in dwArg00 @ 004003D5 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in __align @ 00400419 : ptr64)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn T_13 (T_12)))
T_8: (in signature of __align @ 00000000 : void)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_9: (in  @ 00400419 : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: 
T_10: (in fp @ 00400419 : ptr64)
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in 8<i64> @ 00400419 : int64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 8<i64> @ 00400419 : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align((char *) fp + 8<i32>) @ 00400419 : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __libc_start_main @ 00400434 : ptr64)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: (ptr64 (fn T_29 (T_23, T_25, T_26, T_27, T_28, T_5, T_10)))
T_15: (in signature of __libc_start_main @ 00000000 : void)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: 
T_16: (in main @ 00400434 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_17: (in argc @ 00400434 : int32)
  Class: Eq_17
  DataType: int32
  OrigDataType: 
T_18: (in ubp_av @ 00400434 : (ptr64 (ptr64 char)))
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_19: (in init @ 00400434 : (ptr64 (fn void ())))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in fini @ 00400434 : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in rtld_fini @ 00400434 : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_22: (in stack_end @ 00400434 : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_23: (in 0x4005C5<64> @ 00400434 : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_24: (in qwArg00 @ 00400434 : word64)
  Class: Eq_24
  DataType: word64
  OrigDataType: word64
T_25: (in SLICE(qwArg00, int32, 0) @ 00400434 : int32)
  Class: Eq_17
  DataType: int32
  OrigDataType: int32
T_26: (in fp + 8<i64> @ 00400434 : word64)
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_27: (in 0x400620<64> @ 00400434 : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn void ()))
T_28: (in 0x4006B0<64> @ 00400434 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in __libc_start_main(&g_t4005C5, (int32) qwArg00, (char *) fp + 8<i32>, &g_t400620, &g_t4006B0, rdx, fp) @ 00400434 : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in __hlt @ 00400439 : ptr64)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: (ptr64 (fn T_32 ()))
T_31: (in signature of __hlt @ 00000000 : void)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: 
T_32: (in __hlt() @ 00400439 : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in __gmon_start__ @ 0040044A : ptr64)
  Class: Eq_33
  DataType: word64
  OrigDataType: 
T_34: (in signature of __gmon_start__ @ 00000000 : void)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: 
T_35: (in 0<64> @ 0040044A : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_36: (in __gmon_start__ == 0<64> @ 00000000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in __gmon_start__ @ 0040044C : ptr64)
  Class: Eq_37
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_38: (in false @ 00400473 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in true @ 0040047F : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0<u64> @ 00400487 : uint64)
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_41: (in false @ 004004B0 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in true @ 004004BC : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 0<u64> @ 004004C7 : uint64)
  Class: Eq_43
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_44: (in 0000000000601038 @ 004004D7 : ptr64)
  Class: Eq_44
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_45 t0000)))
T_45: (in Mem0[0x0000000000601038<p64>:byte] @ 004004D7 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0<8> @ 004004D7 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_47: (in g_b601038 != 0<8> @ 00000000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in deregister_tm_clones @ 004004DD : ptr64)
  Class: Eq_48
  DataType: (ptr64 Eq_48)
  OrigDataType: (ptr64 (fn T_50 ()))
T_49: (in signature of deregister_tm_clones @ 00400460 : void)
  Class: Eq_48
  DataType: (ptr64 Eq_48)
  OrigDataType: 
T_50: (in deregister_tm_clones() @ 004004DD : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in 1<8> @ 004004E3 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_52: (in 0000000000601038 @ 004004E3 : ptr64)
  Class: Eq_52
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_53 t0000)))
T_53: (in Mem19[0x0000000000601038<p64>:byte] @ 004004E3 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_54: (in 0000000000600E08 @ 004004F8 : ptr64)
  Class: Eq_54
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_55 t0000)))
T_55: (in Mem0[0x0000000000600E08<p64>:word64] @ 004004F8 : word64)
  Class: Eq_55
  DataType: word64
  OrigDataType: word64
T_56: (in 0<64> @ 004004F8 : word64)
  Class: Eq_55
  DataType: word64
  OrigDataType: word64
T_57: (in g_qw600E08 == 0<64> @ 00000000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in true @ 00400502 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in fn0000000000000000 @ 0040050D : ptr64)
  Class: Eq_59
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_60: (in signature of fn0000000000000000 @ 00000000 : void)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: 
T_61: (in register_tm_clones @ 00400510 : ptr64)
  Class: Eq_61
  DataType: (ptr64 Eq_61)
  OrigDataType: (ptr64 (fn T_63 ()))
T_62: (in signature of register_tm_clones @ 00400490 : void)
  Class: Eq_61
  DataType: (ptr64 Eq_61)
  OrigDataType: 
T_63: (in register_tm_clones() @ 00400510 : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_64: (in register_tm_clones @ 00400518 : ptr64)
  Class: Eq_61
  DataType: (ptr64 Eq_61)
  OrigDataType: (ptr64 (fn T_65 ()))
T_65: (in register_tm_clones() @ 00400518 : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_66: (in eax @ 00400518 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in rdi @ 00400518 : (arr byte))
  Class: Eq_67
  DataType: (ptr64 (arr byte))
  OrigDataType: (ptr64 (struct (0 (arr T_162) a0000)))
T_68: (in dwLoc0C_130 @ 00400528 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in 0<32> @ 00400528 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_70: (in rax_117 @ 004005A1 : uint64)
  Class: Eq_70
  DataType: uint64
  OrigDataType: uint64
T_71: (in CONVERT(dwLoc0C_130, word32, int64) @ 004005B3 : int64)
  Class: Eq_71
  DataType: int64
  OrigDataType: int64
T_72: (in rdi + CONVERT(dwLoc0C_130, word32, int64) @ 004005B3 : word64)
  Class: Eq_72
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_73 t0000)))
T_73: (in Mem12[rdi + CONVERT(dwLoc0C_130, word32, int64):byte] @ 004005B3 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in 0<8> @ 004005B3 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_75: (in rdi[(int64) dwLoc0C_130] != 0<8> @ 00000000 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in al_42 @ 00400546 : ui8)
  Class: Eq_76
  DataType: ui8
  OrigDataType: ui8
T_77: (in SLICE(dwLoc0C_130, byte, 0) @ 00400546 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in CONVERT(dwLoc0C_130, word32, int64) @ 00400546 : int64)
  Class: Eq_78
  DataType: int64
  OrigDataType: int64
T_79: (in rdi + CONVERT(dwLoc0C_130, word32, int64) @ 00400546 : word64)
  Class: Eq_79
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_80 t0000)))
T_80: (in Mem12[rdi + CONVERT(dwLoc0C_130, word32, int64):byte] @ 00400546 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_81: (in (byte) dwLoc0C_130 ^ rdi[(int64) dwLoc0C_130] @ 00000000 : byte)
  Class: Eq_76
  DataType: ui8
  OrigDataType: ui8
T_82: (in CONVERT(dwLoc0C_130, word32, int64) @ 00400594 : int64)
  Class: Eq_82
  DataType: int64
  OrigDataType: int64
T_83: (in 0x601020<64> @ 00400594 : word64)
  Class: Eq_83
  DataType: (ptr64 (arr byte))
  OrigDataType: (ptr64 (struct (0 (arr T_166) a0000)))
T_84: (in CONVERT(dwLoc0C_130, word32, int64) + 0x601020<64> @ 00400594 : word64)
  Class: Eq_84
  DataType: int64
  OrigDataType: int64
T_85: (in Mem103[CONVERT(dwLoc0C_130, word32, int64) + 0x601020<64>:byte] @ 00400594 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in CONVERT(al_42, byte, word32) @ 00400594 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in 8<8> @ 00400594 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in SLICE(dwLoc0C_130, byte, 0) @ 00400594 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in 9<8> @ 00400594 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (byte) dwLoc0C_130 ^ 9<8> @ 00000000 : byte)
  Class: Eq_90
  DataType: ui8
  OrigDataType: ui8
T_91: (in 3<8> @ 00400594 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in ((byte) dwLoc0C_130 ^ 9<8>) & 3<8> @ 00000000 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in 8<8> - (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>) @ 00000000 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in (word32) al_42 >> 8<8> - (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>) @ 00000000 : word32)
  Class: Eq_94
  DataType: int32
  OrigDataType: int32
T_95: (in SLICE(CONVERT(al_42, byte, word32) >> 8<8> - ((SLICE(dwLoc0C_130, byte, 0) ^ 9<8>) & 3<8>), byte, 0) @ 00400594 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in SLICE(dwLoc0C_130, byte, 0) @ 00400594 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in 9<8> @ 00400594 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in (byte) dwLoc0C_130 ^ 9<8> @ 00000000 : byte)
  Class: Eq_98
  DataType: ui8
  OrigDataType: ui8
T_99: (in 3<8> @ 00400594 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in ((byte) dwLoc0C_130 ^ 9<8>) & 3<8> @ 00000000 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in al_42 << (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>) @ 00000000 : byte)
  Class: Eq_101
  DataType: ui8
  OrigDataType: ui8
T_102: (in (byte) ((word32) al_42 >> 8<8> - (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>)) | al_42 << (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>) @ 00000000 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in 8<8> @ 00400594 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in ((byte) ((word32) al_42 >> 8<8> - (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>)) | al_42 << (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>)) + 8<8> @ 00000000 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_105: (in g_a601020[(int64) dwLoc0C_130] == ((byte) ((word32) al_42 >> 8<8> - (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>)) | al_42 << (((byte) dwLoc0C_130 ^ 9<8>) & 3<8>)) + 8<8> @ 00000000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x17<32> @ 004005C0 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_107: (in dwLoc0C_130 == 0x17<32> @ 00000000 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in CONVERT(dwLoc0C_130 == 0x17<32>, bool, uint64) @ 004005C0 : uint64)
  Class: Eq_70
  DataType: uint64
  OrigDataType: uint64
T_109: (in 1<32> @ 0040059D : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in dwLoc0C_130 + 1<32> @ 00000000 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_111: (in 0<u64> @ 00400596 : uint64)
  Class: Eq_70
  DataType: uint64
  OrigDataType: uint64
T_112: (in SLICE(rax_117, word32, 0) @ 004005C4 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_113: (in rsi @ 004005C4 : (ptr64 Eq_113))
  Class: Eq_113
  DataType: (ptr64 Eq_113)
  OrigDataType: (ptr64 (struct (8 T_121 t0008)))
T_114: (in edi @ 004005C4 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in 2<32> @ 004005D8 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_116: (in edi == 2<32> @ 00000000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in verify @ 00400600 : ptr64)
  Class: Eq_117
  DataType: (ptr64 Eq_117)
  OrigDataType: (ptr64 (fn T_122 (T_121)))
T_118: (in signature of verify @ 00400520 : void)
  Class: Eq_117
  DataType: (ptr64 Eq_117)
  OrigDataType: 
T_119: (in 8<64> @ 00400600 : word64)
  Class: Eq_119
  DataType: word64
  OrigDataType: word64
T_120: (in rsi + 8<64> @ 00400600 : word64)
  Class: Eq_120
  DataType: word64
  OrigDataType: word64
T_121: (in Mem12[rsi + 8<64>:word64] @ 00400600 : word64)
  Class: Eq_67
  DataType: (ptr64 (arr byte))
  OrigDataType: word64
T_122: (in verify(rsi->ptr0008) @ 00400600 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 0<32> @ 00400600 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_124: (in verify(rsi->ptr0008) == 0<32> @ 00000000 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in puts @ 004005DF : ptr64)
  Class: Eq_125
  DataType: (ptr64 Eq_125)
  OrigDataType: (ptr64 (fn T_129 (T_128)))
T_126: (in signature of puts @ 00000000 : void)
  Class: Eq_125
  DataType: (ptr64 Eq_125)
  OrigDataType: 
T_127: (in s @ 004005DF : (ptr64 char))
  Class: Eq_127
  DataType: (ptr64 char)
  OrigDataType: 
T_128: (in 0x4006C8<u64> @ 004005DF : uint64)
  Class: Eq_127
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_129: (in puts("You need to enter the secret key!") @ 004005DF : int32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_130: (in puts @ 00400613 : ptr64)
  Class: Eq_125
  DataType: (ptr64 Eq_125)
  OrigDataType: (ptr64 (fn T_132 (T_131)))
T_131: (in 0x400718<u64> @ 00400613 : uint64)
  Class: Eq_127
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_132: (in puts("I'm sorry, that's the wrong secret key!") @ 00400613 : int32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_133: (in puts @ 00400607 : ptr64)
  Class: Eq_125
  DataType: (ptr64 Eq_125)
  OrigDataType: (ptr64 (fn T_135 (T_134)))
T_134: (in 0x4006F0<u64> @ 00400607 : uint64)
  Class: Eq_127
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_135: (in puts("Correct! that is the secret key!") @ 00400607 : int32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_136: (in rdx @ 00400607 : word64)
  Class: Eq_136
  DataType: word64
  OrigDataType: word64
T_137: (in rsi @ 00400607 : word64)
  Class: Eq_137
  DataType: word64
  OrigDataType: word64
T_138: (in edi @ 00400607 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in rdi @ 00400620 : word64)
  Class: Eq_139
  DataType: word64
  OrigDataType: word64
T_140: (in SLICE(rdi, word32, 0) @ 00400620 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_141: (in _init @ 00400660 : ptr64)
  Class: Eq_141
  DataType: (ptr64 Eq_141)
  OrigDataType: (ptr64 (fn T_143 ()))
T_142: (in signature of _init @ 004003C8 : void)
  Class: Eq_141
  DataType: (ptr64 Eq_141)
  OrigDataType: 
T_143: (in _init() @ 00400660 : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_144: (in rbp_19 @ 00400650 : int64)
  Class: Eq_144
  DataType: int64
  OrigDataType: int64
T_145: (in 0000000000600E00 @ 00400650 : ptr64)
  Class: Eq_145
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_146: (in 0000000000600DF8 @ 00400650 : ptr64)
  Class: Eq_146
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_147: (in 0x600E00<u64> - 0x600DF8<u64> @ 00000000 : word64)
  Class: Eq_144
  DataType: int64
  OrigDataType: int64
T_148: (in 3<64> @ 00400668 : word64)
  Class: Eq_148
  DataType: word64
  OrigDataType: word64
T_149: (in rbp_19 >> 3<64> @ 00000000 : word64)
  Class: Eq_149
  DataType: int64
  OrigDataType: int64
T_150: (in 0<64> @ 00400668 : word64)
  Class: Eq_149
  DataType: int64
  OrigDataType: word64
T_151: (in rbp_19 >> 3<64> == 0<64> @ 00000000 : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in rbx_38 @ 0040066A : Eq_152)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: word64
T_153: (in 0<u64> @ 0040066A : uint64)
  Class: Eq_152
  DataType: uint64
  OrigDataType: uint64
T_154: (in 0000000000600DF8 @ 00400679 : ptr64)
  Class: Eq_154
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_168) a0000)))
T_155: (in 8<64> @ 00400679 : word64)
  Class: Eq_155
  DataType: ui64
  OrigDataType: ui64
T_156: (in rbx_38 * 8<64> @ 00000000 : word64)
  Class: Eq_156
  DataType: ui64
  OrigDataType: ui64
T_157: (in 0x0000000000600DF8<p64>[rbx_38 * 8<64>] @ 00400679 : word64)
  Class: Eq_157
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_158: (in 1<64> @ 0040067D : word64)
  Class: Eq_158
  DataType: word64
  OrigDataType: word64
T_159: (in rbx_38 + 1<64> @ 0040067D : word64)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: uint64
T_160: (in rbp_19 >> 3<64> @ 00000000 : word64)
  Class: Eq_152
  DataType: Eq_152
  OrigDataType: int64
T_161: (in rbx_38 != rbp_19 >> 3<64> @ 00000000 : bool)
  Class: Eq_161
  DataType: bool
  OrigDataType: bool
T_162:
  Class: Eq_162
  DataType: byte
  OrigDataType: (struct 0001 (0 T_73 t0000))
T_163:
  Class: Eq_163
  DataType: (arr byte)
  OrigDataType: (arr T_162)
T_164:
  Class: Eq_162
  DataType: byte
  OrigDataType: (struct 0001 (0 T_80 t0000))
T_165:
  Class: Eq_165
  DataType: (arr byte)
  OrigDataType: (arr T_164)
T_166:
  Class: Eq_166
  DataType: byte
  OrigDataType: (struct 0001 (0 T_85 t0000))
T_167:
  Class: Eq_167
  DataType: (arr byte)
  OrigDataType: (arr T_166)
T_168:
  Class: Eq_168
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_157 t0000))
T_169:
  Class: Eq_169
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_168)
*/
typedef struct Globals {
	<anonymous> t4003F6;	// 4003F6
	<anonymous> t400406;	// 400406
	Eq_16 t4005C5;	// 4005C5
	Eq_19 t400620;	// 400620
	Eq_20 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	<anonymous> * __gmon_start___GOT;	// 600FE0
	<anonymous> * puts_GOT;	// 601000
	<anonymous> * __libc_start_main_GOT;	// 601008
	byte a601020[];	// 601020
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_7)(ptr64);

typedef int32 (Eq_14)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_16)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_19)();

typedef void (Eq_20)();

typedef void (Eq_30)();

typedef void (Eq_48)();

typedef void (Eq_61)();

typedef struct Eq_113 {
	byte (* ptr0008)[];	// 8
} Eq_113;

typedef word32 (Eq_117)(byte *[]);

typedef int32 (Eq_125)(char *);

typedef void (Eq_141)();

typedef union Eq_145 {
	int64 u0;
	ptr64 u1;
} Eq_145;

typedef union Eq_146 {
	int64 u0;
	ptr64 u1;
} Eq_146;

typedef union Eq_152 {
	int64 u0;
	uint64 u1;
} Eq_152;

