// Function: _ZNK7android8ResTable5Theme9dumpToLogEv
// Address: 00434240
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android8ResTable5Theme9dumpToLogEv(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  __android_log_print(4,&UNK_0015b3df,&UNK_0016b1b4);
  uVar5 = 0;
  do {
    lVar2 = *(long *)(param_1 + 8 + uVar5 * 8);
    uVar5 = uVar5 + 1;
    if (lVar2 != 0) {
      __android_log_print(4,&UNK_0015b3df,&UNK_00167f80,uVar5 & 0xffffffff);
      uVar8 = 0;
      do {
        lVar6 = uVar8 * 0x10;
        uVar8 = uVar8 + 1;
        if (*(long *)(lVar2 + lVar6) != 0) {
          puVar7 = (ulong *)(lVar6 + lVar2);
          __android_log_print(4,&UNK_0015b3df,&UNK_00170913,uVar8 & 0xffffffff);
          uVar4 = *puVar7;
          if (uVar4 != 0) {
            lVar6 = 0x10;
            uVar9 = 0;
            do {
              uVar3 = puVar7[1];
              cVar1 = *(char *)((uVar3 - 1) + lVar6);
              if (cVar1 != '\0') {
                __android_log_print(4,&UNK_0015b3df,&UNK_0016ef4b,
                                    (uint)uVar9 & 0xffff |
                                    ((uint)uVar8 & 0xff) << 0x10 | (int)uVar5 * 0x1000000,cVar1,
                                    *(undefined4 *)(uVar3 + lVar6),
                                    *(undefined4 *)((uVar3 - 0x10) + lVar6));
                uVar4 = *puVar7;
              }
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x18;
            } while (uVar9 < uVar4);
          }
        }
      } while (uVar8 != 0x100);
    }
  } while (uVar5 != 0xff);
  return;
}


