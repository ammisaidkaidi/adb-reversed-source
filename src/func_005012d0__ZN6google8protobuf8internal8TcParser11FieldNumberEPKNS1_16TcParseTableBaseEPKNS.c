// Function: _ZN6google8protobuf8internal8TcParser11FieldNumberEPKNS1_16TcParseTableBaseEPKNS3_10FieldEntryE
// Address: 005012d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN6google8protobuf8internal8TcParser11FieldNumberEPKNS1_16TcParseTableBaseEPKNS3_10FieldEntryE
              (long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  
  lVar2 = ((long)(param_2 - ((ulong)*(uint *)(param_1 + 0x10) + param_1)) >> 2) *
          -0x5555555555555555;
  if (*(uint *)(param_1 + 0xc) != 0xffffffff) {
    uVar3 = ~*(uint *)(param_1 + 0xc);
    do {
      if (lVar2 == 0) {
        iVar1 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          iVar1 = iVar1 + 1;
        }
        return iVar1 + 1;
      }
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  puVar5 = (ushort *)((ulong)*(ushort *)(param_1 + 10) + param_1);
  do {
    do {
      puVar4 = puVar5;
      puVar5 = puVar4 + 3;
    } while (puVar4[2] == 0);
    uVar3 = 0;
    do {
      if (*puVar5 != 0xffff) {
        uVar6 = (uint)(ushort)~*puVar5;
        do {
          if (lVar2 == 0) {
            iVar1 = 0;
            for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              iVar1 = iVar1 + 1;
            }
            return iVar1 + uVar3 * 0x10 + *(int *)puVar4;
          }
          lVar2 = lVar2 + -1;
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
      }
      puVar5 = puVar5 + 2;
      uVar3 = uVar3 + 1;
    } while (uVar3 != puVar4[2]);
  } while( true );
}


