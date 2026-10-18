// Function: _ZNK7android10ResXMLTree12validateNodeEPKNS_15ResXMLTree_nodeE
// Address: 0042fad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


short * _ZNK7android10ResXMLTree12validateNodeEPKNS_15ResXMLTree_nodeE
                  (undefined8 param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  short **ppsVar9;
  undefined *puVar10;
  undefined *puVar11;
  long in_FS_OFFSET;
  short *psStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = *param_2;
  uStack_30 = 0;
  uStack_28 = 0;
  ppsVar9 = &psStack_38;
  puVar8 = (undefined4 *)0x10;
  psStack_38 = param_2;
  psVar5 = (short *)func_0x0042d730(ppsVar9,0x10,&UNK_001647f3);
  if ((-1 < (int)psVar5) && (psVar5 = (short *)0x0, sVar1 == 0x102)) {
    uVar2 = param_2[1];
    uVar6 = (ulong)uVar2;
    uVar4 = *(uint *)(param_2 + 2);
    puVar10 = (undefined *)(ulong)uVar4;
    if (uVar4 < uVar2 + 0x14 || uVar6 == 0) {
      puVar7 = &UNK_0017a3f6;
    }
    else {
      uVar3 = *(ushort *)((long)param_2 + uVar6 + 10);
      if (uVar3 < 0x14) {
        puVar7 = &UNK_001837c5;
        puVar10 = (undefined *)0x14;
        uVar6 = (ulong)uVar3;
      }
      else {
        puVar8 = (undefined4 *)
                 ((ulong)*(ushort *)((long)param_2 + uVar6 + 0xc) * (ulong)(uint)uVar3);
        puVar11 = (undefined *)((ulong)*(ushort *)((long)param_2 + uVar6 + 8) + (long)puVar8);
        puVar10 = (undefined *)(ulong)(uVar4 - uVar2);
        if (puVar11 <= puVar10) goto code_r0x0042fba4;
        puVar7 = &UNK_00186963;
        uVar6 = (ulong)puVar11 & 0xffffffff;
      }
    }
    ppsVar9 = (short **)0x5;
    puVar8 = (undefined4 *)&UNK_0015b3df;
    __android_log_print(5,&UNK_0015b3df,puVar7,uVar6,puVar10);
    psVar5 = (short *)0x80000001;
  }
code_r0x0042fba4:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    func_0x0099bd00();
    *puVar8 = *(undefined4 *)(ppsVar9 + 1);
    *(short **)(puVar8 + 2) = ppsVar9[2];
    psVar5 = ppsVar9[3];
    *(short **)(puVar8 + 4) = psVar5;
    return psVar5;
  }
  return psVar5;
}


