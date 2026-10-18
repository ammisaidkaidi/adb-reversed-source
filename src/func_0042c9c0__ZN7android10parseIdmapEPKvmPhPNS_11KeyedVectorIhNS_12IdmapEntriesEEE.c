// Function: _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
// Address: 0042c9c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
                 (long *param_1,ulong param_2,undefined1 *param_3,long *param_4)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  long lStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_1 & 3) == 0) {
    if (param_2 < 0x210) {
      puVar5 = &UNK_001599e0;
      plVar7 = (long *)0x5;
code_r0x0042ca25:
      __android_log_print(plVar7,&UNK_0015b3df,puVar5,param_2);
    }
    else {
      iVar2 = (int)*param_1;
      if (iVar2 == 0x504d4449) {
        iVar2 = *(int *)((long)param_1 + 4);
        if (iVar2 == 0xb) {
          uVar6 = param_2 - 0x214;
          if (uVar6 < 4) {
            puVar5 = &UNK_00174152;
          }
          else {
            uVar1 = *(ushort *)((long)param_1 + 0x214);
            param_2 = (ulong)uVar1;
            if ((ushort)(uVar1 - 0x100) < 0xff01) {
              puVar5 = &UNK_0015fde2;
              plVar7 = (long *)0x6;
              goto code_r0x0042ca25;
            }
            if (*(ushort *)((long)param_1 + 0x216) != 0) {
              plVar7 = param_1;
              if (0xff < *(ushort *)((long)param_1 + 0x216)) {
                plVar7 = (long *)0x5;
                __android_log_print(5,&UNK_0015b3df,&UNK_0018b086);
              }
              if (8 < uVar6) {
                param_1 = param_1 + 0x43;
                do {
                  lStack_50 = 0;
                  plVar7 = &lStack_50;
                  plVar3 = (long *)_ZN7android12IdmapEntries5setToEPKvm(plVar7,param_1);
                  if ((int)plVar3 != 0) goto code_r0x0042caa0;
                  if (lStack_50 == 0) {
                    auStack_48[0] = 0;
                  }
                  else {
                    auStack_48[0] = *(undefined1 *)(lStack_50 + 2);
                  }
                  lStack_40 = lStack_50;
                  plVar7 = param_4;
                  lVar4 = _ZN7android16SortedVectorImpl3addEPKv(param_4,auStack_48);
                  if (lVar4 < 0) {
                    plVar3 = (long *)0xfffffff4;
                    goto code_r0x0042caa0;
                  }
                  if (lStack_50 == 0) {
                    lVar4 = 0;
                  }
                  else {
                    param_1 = (long *)((long)param_1 + ((ulong)*(ushort *)(lStack_50 + 4) + 2) * 4);
                    lVar4 = (ulong)*(ushort *)(lStack_50 + 4) * 4 + 8;
                  }
                  uVar6 = uVar6 - lVar4;
                } while (8 < uVar6);
              }
              plVar3 = (long *)0x0;
              if (param_3 != (undefined1 *)0x0) {
                *param_3 = (char)uVar1;
              }
              goto code_r0x0042caa0;
            }
            puVar5 = &UNK_00178cd6;
          }
          goto code_r0x0042c9f2;
        }
        puVar5 = &UNK_00186a3d;
        uVar8 = 0xb;
      }
      else {
        puVar5 = &UNK_0016b2cf;
        uVar8 = 0x504d4449;
      }
      plVar7 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,puVar5,iVar2,uVar8);
    }
  }
  else {
    puVar5 = &UNK_00157bc8;
code_r0x0042c9f2:
    plVar7 = (long *)0x6;
    __android_log_print(6,&UNK_0015b3df,puVar5);
  }
  plVar3 = (long *)0x80000000;
code_r0x0042caa0:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plVar3;
  }
  func_0x0099bd00();
  *(undefined1 *)plVar7 = 1;
  *(int *)((long)plVar7 + 4) = 0x20;
  *(uint *)(plVar7 + 1) = (uint)*(byte *)((long)plVar7 + 1) * 4 + 0x20;
  *(uint *)((long)plVar7 + 0x1c) =
       ((uint)*(byte *)((long)plVar7 + 2) + (uint)*(byte *)((long)plVar7 + 1)) * 4 + 0x20;
  return plVar7;
}


