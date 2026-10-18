// Function: _ZN20DeployPatchGenerator3LogEPKcz
// Address: 003c4210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN20DeployPatchGenerator3LogEPKcz
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  byte bVar1;
  uint uVar2;
  char in_AL;
  byte *pbVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined8 uStack_130;
  ulong uStack_128;
  char *pcStack_120;
  long lStack_110;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  long lStack_10;
  
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_18 = auStack_d8;
  uStack_28 = 0x3000000010;
  puStack_20 = &stack0x00000008;
  puVar8 = (undefined *)0x1;
  uStack_c8 = param_11;
  uStack_c0 = param_12;
  uStack_b8 = param_13;
  uStack_b0 = param_14;
  func_0x0099bd60(_stdout,1,param_10,&uStack_28);
  pcVar9 = (char *)0xa;
  func_0x0099c040();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return;
  }
  func_0x0099bd00();
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  if (*pcVar9 != '\x01') goto code_r0x003c446a;
  pbVar3 = (byte *)(*(ulong *)(puVar8 + 0x18) & 0xfffffffffffffffc);
  bVar13 = (*pbVar3 & 1) != 0;
  pbVar11 = pbVar3 + 1;
  if (bVar13) {
    pbVar11 = *(byte **)(pbVar3 + 0x10);
  }
  uVar7 = (ulong)(*pbVar3 >> 1);
  if (bVar13) {
    uVar7 = *(ulong *)(pbVar3 + 8);
  }
  uStack_130 = 0;
  uStack_128 = 0;
  pcStack_120 = (char *)0x0;
  uVar2 = (int)uVar7 * 2;
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    uStack_130 = (ulong)(byte)((char)uVar2 * '\x02');
    pcVar4 = (char *)((long)&uStack_130 + 1);
    if (uVar6 != 0) goto code_r0x003c4390;
  }
  else {
    lVar10 = 0x1a;
    if ((uVar6 | 7) != 0x17) {
      lVar10 = (uVar6 | 7) + 1;
    }
    pcVar4 = (char *)_Znwm(lVar10);
    uStack_130 = lVar10 + 1;
    uStack_128 = uVar6;
    pcStack_120 = pcVar4;
code_r0x003c4390:
    pcVar9 = pcVar4;
    func_0x0099bdb0(pcVar4,0,uVar6);
  }
  pcVar4[uVar6] = '\0';
  if ((int)uVar7 != 0) {
    uVar6 = 0;
    do {
      pcVar9 = (char *)((long)&uStack_130 + 1);
      if ((uStack_130 & 1) != 0) {
        pcVar9 = pcStack_120;
      }
      bVar1 = *pbVar11;
      pcVar9[uVar6 & 0xffffffff] = (&UNK_001fdcf0)[bVar1 >> 4];
      pcVar4 = (char *)((long)&uStack_130 + 1);
      if ((uStack_130 & 1) != 0) {
        pcVar4 = pcStack_120;
      }
      pcVar9 = (char *)(ulong)(byte)(&UNK_001fdcf0)[bVar1 & 0xf];
      pcVar4[(int)uVar6 + 1] = (&UNK_001fdcf0)[bVar1 & 0xf];
      uVar6 = uVar6 + 2;
      pbVar11 = pbVar11 + 1;
    } while ((uVar7 & 0xffffffff) * 2 != uVar6);
  }
  _ZN20DeployPatchGenerator3LogEPKcz();
  if ((uStack_130 & 1) != 0) {
    pcVar9 = pcStack_120;
    _ZdaPvSt11align_val_t(pcStack_120,uStack_130 & 0xfffffffffffffffe);
  }
  _ZN20DeployPatchGenerator3LogEPKcz();
  puVar8 = &UNK_00159522;
  _ZN20DeployPatchGenerator3LogEPKcz();
code_r0x003c446a:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
    return;
  }
  func_0x0099bd00();
  if ((*pcVar9 == '\x01') && (_ZN20DeployPatchGenerator3LogEPKcz(), 0 < *(int *)(puVar8 + 0x20))) {
    lVar10 = 8;
    lVar12 = 0;
    do {
      puVar5 = (undefined8 *)((*(ulong *)(puVar8 + 0x18) - 1) + lVar10);
      if ((*(ulong *)(puVar8 + 0x18) & 1) == 0) {
        puVar5 = (undefined8 *)(puVar8 + 0x18);
      }
      _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE(pcVar9,*puVar5)
      ;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 8;
    } while (lVar12 < *(int *)(puVar8 + 0x20));
  }
  return;
}


