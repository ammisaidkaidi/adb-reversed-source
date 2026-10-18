// Function: _ZN6google8protobuf8internal8TcParser11MessageNameEPKNS1_16TcParseTableBaseE
// Address: 005011e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN6google8protobuf8internal8TcParser11MessageNameEPKNS1_16TcParseTableBaseE(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (ulong)*(uint *)(param_1 + 0x18) + param_1;
  auVar2._0_8_ = (ulong)(*(ushort *)(param_1 + 0x14) + 8 & 0xfffffff8) +
                 lVar1 + (ulong)*(ushort *)(param_1 + 0x16) * 8;
  auVar2._8_8_ = (long)*(char *)(lVar1 + (ulong)*(ushort *)(param_1 + 0x16) * 8);
  return auVar2;
}


