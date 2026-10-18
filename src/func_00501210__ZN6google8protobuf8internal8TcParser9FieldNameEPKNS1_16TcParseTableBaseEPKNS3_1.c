// Function: _ZN6google8protobuf8internal8TcParser9FieldNameEPKNS1_16TcParseTableBaseEPKNS3_10FieldEntryE
// Address: 00501210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN6google8protobuf8internal8TcParser9FieldNameEPKNS1_16TcParseTableBaseEPKNS3_10FieldEntryE
          (long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = ((long)(param_2 - ((ulong)*(uint *)(param_1 + 0x10) + param_1)) >> 2) *
          -0x5555555555555555;
  pbVar1 = (byte *)((ulong)*(uint *)(param_1 + 0x18) + param_1 +
                   (ulong)*(ushort *)(param_1 + 0x16) * 8);
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x14) + 8 & 0xfffffff8);
  uVar4 = uVar6 + 1;
  if (uVar4 != 0) {
    pbVar2 = pbVar1;
    for (uVar5 = uVar4 & 7; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = uVar3 + *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    if (6 < uVar6) {
      do {
        uVar3 = (ulong)pbVar2[7] + (ulong)pbVar2[6] +
                (ulong)pbVar2[5] + (ulong)pbVar2[4] + (ulong)pbVar2[3] +
                (ulong)pbVar2[2] + (ulong)pbVar2[1] + *pbVar2 + uVar3;
        pbVar2 = pbVar2 + 8;
      } while (pbVar2 != pbVar1 + uVar4);
    }
  }
  auVar7._8_8_ = (long)(char)pbVar1[uVar4];
  auVar7._0_8_ = pbVar1 + uVar3;
  return auVar7;
}


