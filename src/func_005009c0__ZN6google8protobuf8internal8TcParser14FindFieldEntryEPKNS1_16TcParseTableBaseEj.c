// Function: _ZN6google8protobuf8internal8TcParser14FindFieldEntryEPKNS1_16TcParseTableBaseEj
// Address: 005009c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal8TcParser14FindFieldEntryEPKNS1_16TcParseTableBaseEj
               (long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = param_2 - 1;
  if (uVar5 < 0x20) {
    if ((*(uint *)(param_1 + 0xc) >> (uVar5 & 0x1f) & 1) != 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0xc) & (1 << ((byte)uVar5 & 0x1f)) - 1U;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar5 = uVar5 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x00500a18:
    lVar4 = (ulong)*(uint *)(param_1 + 0x10) + param_1 + (ulong)uVar5 * 0xc;
  }
  else {
    uVar5 = *(uint *)((ulong)*(ushort *)(param_1 + 10) + param_1);
    if (param_2 < uVar5) {
      return 0;
    }
    lVar6 = (ulong)*(ushort *)(param_1 + 10) + param_1;
    lVar4 = 0;
    do {
      uVar1 = *(ushort *)(lVar6 + 4);
      lVar7 = lVar6 + 6;
      uVar2 = param_2 - uVar5 >> 4;
      if (uVar2 < uVar1) {
        uVar1 = *(ushort *)(lVar7 + (ulong)uVar2 * 4);
        uVar5 = param_2 - uVar5 & 0xf;
        if ((uVar1 >> uVar5 & 1) != 0) {
          return 0;
        }
        uVar3 = (1 << (sbyte)uVar5) - 1U & (uint)uVar1;
        uVar3 = uVar3 - (uVar3 >> 1 & 0x5555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar5 = (uVar5 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                (uint)*(ushort *)(lVar6 + 8 + (ulong)(uVar2 * 2) * 2);
        goto code_r0x00500a18;
      }
      uVar5 = *(uint *)(lVar7 + (ulong)uVar1 * 4);
      lVar6 = lVar7 + (ulong)uVar1 * 4;
    } while (uVar5 <= param_2);
  }
  return lVar4;
}


