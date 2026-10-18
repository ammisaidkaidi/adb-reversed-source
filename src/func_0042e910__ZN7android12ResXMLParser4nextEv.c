// Function: _ZN7android12ResXMLParser4nextEv
// Address: 0042e910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android12ResXMLParser4nextEv(long *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  
  if ((int)param_1[1] == 0) {
    lVar5 = *param_1;
    param_1[2] = *(long *)(lVar5 + 0x1c0);
    param_1[3] = *(long *)(lVar5 + 0x1c8);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar5 + 0x1d0);
  }
  else if (0xff < (int)param_1[1]) {
    if (-1 < (int)param_1[1]) {
      lVar5 = *param_1;
      puVar7 = (ushort *)((ulong)*(uint *)(param_1[2] + 4) + param_1[2]);
      if (puVar7 < *(ushort **)(lVar5 + 0x78)) {
        do {
          iVar2 = _ZNK7android10ResXMLTree12validateNodeEPKNS_15ResXMLTree_nodeE(lVar5,puVar7);
          if (iVar2 != 0) {
            param_1[2] = 0;
code_r0x0042ea52:
            uVar3 = 0xffffffff;
            goto code_r0x0042ea57;
          }
          param_1[2] = (long)puVar7;
          uVar1 = puVar7[1];
          iVar2 = *(int *)(puVar7 + 2);
          param_1[3] = (long)puVar7 + (ulong)uVar1;
          uVar4 = *puVar7;
          *(uint *)(param_1 + 1) = (uint)uVar4;
          uVar4 = uVar4 - 0x100;
          if (uVar4 < 5) {
            uVar6 = (ulong)(iVar2 - (uint)uVar1);
            if (*(ulong *)(&UNK_001fee10 + (ulong)uVar4 * 8) <= uVar6) {
              return;
            }
            __android_log_print(5,&UNK_0015b3df,&UNK_0016625d,*puVar7,
                                (int)puVar7 - *(int *)(*param_1 + 0x68),uVar6,
                                (int)*(ulong *)(&UNK_001fee10 + (ulong)uVar4 * 8));
            goto code_r0x0042ea52;
          }
          __android_log_print(5,&UNK_0015b3df,&UNK_00178ce9,*puVar7,
                              (int)puVar7 - *(int *)(*param_1 + 0x68));
          lVar5 = *param_1;
          puVar7 = (ushort *)((ulong)*(uint *)(param_1[2] + 4) + param_1[2]);
        } while (puVar7 < *(ushort **)(lVar5 + 0x78));
      }
      param_1[2] = 0;
      uVar3 = 1;
code_r0x0042ea57:
      *(undefined4 *)(param_1 + 1) = uVar3;
    }
    return;
  }
  return;
}


