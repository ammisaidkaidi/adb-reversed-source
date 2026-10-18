// Function: _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
// Address: 003c42e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
               (char *param_1,undefined *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 uStack_58;
  ulong uStack_50;
  char *pcStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != '\x01') goto code_r0x003c446a;
  pbVar3 = (byte *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  bVar11 = (*pbVar3 & 1) != 0;
  pbVar9 = pbVar3 + 1;
  if (bVar11) {
    pbVar9 = *(byte **)(pbVar3 + 0x10);
  }
  uVar7 = (ulong)(*pbVar3 >> 1);
  if (bVar11) {
    uVar7 = *(ulong *)(pbVar3 + 8);
  }
  uStack_58 = 0;
  uStack_50 = 0;
  pcStack_48 = (char *)0x0;
  uVar2 = (int)uVar7 * 2;
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    uStack_58 = (ulong)(byte)((char)uVar2 * '\x02');
    pcVar4 = (char *)((long)&uStack_58 + 1);
    if (uVar6 != 0) goto code_r0x003c4390;
  }
  else {
    lVar8 = 0x1a;
    if ((uVar6 | 7) != 0x17) {
      lVar8 = (uVar6 | 7) + 1;
    }
    pcVar4 = (char *)_Znwm(lVar8);
    uStack_58 = lVar8 + 1;
    uStack_50 = uVar6;
    pcStack_48 = pcVar4;
code_r0x003c4390:
    param_1 = pcVar4;
    func_0x0099bdb0(pcVar4,0,uVar6);
  }
  pcVar4[uVar6] = '\0';
  if ((int)uVar7 != 0) {
    uVar6 = 0;
    do {
      pcVar4 = (char *)((long)&uStack_58 + 1);
      if ((uStack_58 & 1) != 0) {
        pcVar4 = pcStack_48;
      }
      bVar1 = *pbVar9;
      pcVar4[uVar6 & 0xffffffff] = (&UNK_001fdcf0)[bVar1 >> 4];
      pcVar4 = (char *)((long)&uStack_58 + 1);
      if ((uStack_58 & 1) != 0) {
        pcVar4 = pcStack_48;
      }
      param_1 = (char *)(ulong)(byte)(&UNK_001fdcf0)[bVar1 & 0xf];
      pcVar4[(int)uVar6 + 1] = (&UNK_001fdcf0)[bVar1 & 0xf];
      uVar6 = uVar6 + 2;
      pbVar9 = pbVar9 + 1;
    } while ((uVar7 & 0xffffffff) * 2 != uVar6);
  }
  _ZN20DeployPatchGenerator3LogEPKcz();
  if ((uStack_58 & 1) != 0) {
    param_1 = pcStack_48;
    _ZdaPvSt11align_val_t(pcStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  _ZN20DeployPatchGenerator3LogEPKcz();
  param_2 = &UNK_00159522;
  _ZN20DeployPatchGenerator3LogEPKcz();
code_r0x003c446a:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  if ((*param_1 == '\x01') && (_ZN20DeployPatchGenerator3LogEPKcz(), 0 < *(int *)(param_2 + 0x20)))
  {
    lVar8 = 8;
    lVar10 = 0;
    do {
      puVar5 = (undefined8 *)((*(ulong *)(param_2 + 0x18) - 1) + lVar8);
      if ((*(ulong *)(param_2 + 0x18) & 1) == 0) {
        puVar5 = (undefined8 *)(param_2 + 0x18);
      }
      _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                (param_1,*puVar5);
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 8;
    } while (lVar10 < *(int *)(param_2 + 0x20));
  }
  return;
}


