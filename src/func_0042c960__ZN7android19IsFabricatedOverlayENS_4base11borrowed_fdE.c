// Function: _ZN7android19IsFabricatedOverlayENS_4base11borrowed_fdE
// Address: 0042c960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android19IsFabricatedOverlayENS_4base11borrowed_fdE(long *param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined1 *extraout_RDX;
  undefined *puVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  long lStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  int iStack_14;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_14 = 0;
  piVar7 = &iStack_14;
  uVar11 = 0;
  bVar3 = _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml(param_1,piVar7,4,0);
  plVar6 = (long *)CONCAT71((int7)((ulong)uVar11 >> 8),iStack_14 == 0x4f525246);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return (long *)(ulong)(bVar3 & iStack_14 == 0x4f525246);
  }
  func_0x0099bd00();
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_1 & 3) == 0) {
    if (piVar7 < (int *)0x210) {
      puVar8 = &UNK_001599e0;
      plVar10 = (long *)0x5;
code_r0x0042ca25:
      __android_log_print(plVar10,&UNK_0015b3df,puVar8,piVar7);
    }
    else {
      iVar2 = (int)*param_1;
      if (iVar2 == 0x504d4449) {
        iVar2 = *(int *)((long)param_1 + 4);
        if (iVar2 == 0xb) {
          piVar9 = piVar7 + -0x85;
          if (piVar9 < (int *)0x4) {
            puVar8 = &UNK_00174152;
          }
          else {
            uVar1 = *(ushort *)((long)param_1 + 0x214);
            piVar7 = (int *)(ulong)uVar1;
            if ((ushort)(uVar1 - 0x100) < 0xff01) {
              puVar8 = &UNK_0015fde2;
              plVar10 = (long *)0x6;
              goto code_r0x0042ca25;
            }
            if (*(ushort *)((long)param_1 + 0x216) != 0) {
              plVar10 = param_1;
              if (0xff < *(ushort *)((long)param_1 + 0x216)) {
                plVar10 = (long *)0x5;
                __android_log_print(5,&UNK_0015b3df,&UNK_0018b086);
              }
              if ((int *)0x8 < piVar9) {
                param_1 = param_1 + 0x43;
                do {
                  lStack_68 = 0;
                  plVar10 = &lStack_68;
                  plVar4 = (long *)_ZN7android12IdmapEntries5setToEPKvm(plVar10,param_1);
                  if ((int)plVar4 != 0) goto code_r0x0042caa0;
                  if (lStack_68 == 0) {
                    auStack_60[0] = 0;
                  }
                  else {
                    auStack_60[0] = *(undefined1 *)(lStack_68 + 2);
                  }
                  lStack_58 = lStack_68;
                  plVar10 = plVar6;
                  lVar5 = _ZN7android16SortedVectorImpl3addEPKv(plVar6,auStack_60);
                  if (lVar5 < 0) {
                    plVar4 = (long *)0xfffffff4;
                    goto code_r0x0042caa0;
                  }
                  if (lStack_68 == 0) {
                    lVar5 = 0;
                  }
                  else {
                    param_1 = (long *)((long)param_1 + ((ulong)*(ushort *)(lStack_68 + 4) + 2) * 4);
                    lVar5 = (ulong)*(ushort *)(lStack_68 + 4) * 4 + 8;
                  }
                  piVar9 = (int *)((long)piVar9 - lVar5);
                } while ((int *)0x8 < piVar9);
              }
              plVar4 = (long *)0x0;
              if (extraout_RDX != (undefined1 *)0x0) {
                *extraout_RDX = (char)uVar1;
              }
              goto code_r0x0042caa0;
            }
            puVar8 = &UNK_00178cd6;
          }
          goto code_r0x0042c9f2;
        }
        puVar8 = &UNK_00186a3d;
        uVar11 = 0xb;
      }
      else {
        puVar8 = &UNK_0016b2cf;
        uVar11 = 0x504d4449;
      }
      plVar10 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,puVar8,iVar2,uVar11);
    }
  }
  else {
    puVar8 = &UNK_00157bc8;
code_r0x0042c9f2:
    plVar10 = (long *)0x6;
    __android_log_print(6,&UNK_0015b3df,puVar8);
  }
  plVar4 = (long *)0x0;
code_r0x0042caa0:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return plVar4;
  }
  func_0x0099bd00();
  *(undefined1 *)plVar10 = 1;
  *(int *)((long)plVar10 + 4) = 0x20;
  *(uint *)(plVar10 + 1) = (uint)*(byte *)((long)plVar10 + 1) * 4 + 0x20;
  *(uint *)((long)plVar10 + 0x1c) =
       ((uint)*(byte *)((long)plVar10 + 2) + (uint)*(byte *)((long)plVar10 + 1)) * 4 + 0x20;
  return plVar10;
}


