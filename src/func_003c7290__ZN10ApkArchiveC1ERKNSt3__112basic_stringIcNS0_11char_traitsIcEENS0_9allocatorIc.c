// Function: _ZN10ApkArchiveC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003c7290
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c7463: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c7468) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN10ApkArchiveC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xff;
  param_1[0x21] = 0xff;
  param_1[0x22] = 0xff;
  param_1[0x23] = 0xff;
  pbVar8 = param_1 + 1;
  pbVar9 = pbVar8;
  if ((*param_1 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x10);
  }
  do {
    iVar4 = func_0x0099bf40(pbVar9,0);
    if (iVar4 != -1) {
      if (-1 < iVar4) {
        uVar5 = func_0x0099bf10(iVar4,1);
        if ((uVar5 & 0x80000001) == 0) {
          func_0x0099bf10(iVar4,2,uVar5 | 1);
        }
        goto code_r0x003c7355;
      }
      break;
    }
    piVar6 = (int *)func_0x0099bce0();
  } while (*piVar6 == 4);
  iVar4 = -1;
code_r0x003c7355:
  puVar7 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar7;
  if (*(int *)(param_1 + 0x20) != -1) {
    func_0x0099bd10();
  }
  *(int *)(param_1 + 0x20) = iVar4;
  *puVar7 = uVar1;
  if (*(int *)(param_1 + 0x20) == -1) {
    if ((*param_1 & 1) != 0) {
      pbVar8 = *(byte **)(param_1 + 0x10);
    }
    puVar11 = _stderr;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar10 = &UNK_0016aee4;
      goto code_r0x0099bd30;
    }
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    pbVar9 = pbVar8;
    if ((*param_1 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x10);
    }
    puVar11 = (ulong *)0x1;
    iVar4 = func_0x0099bf30(1,pbVar9,&uStack_c8);
    if (iVar4 == -1) {
      if ((*param_1 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      puVar10 = &UNK_0017eca0;
code_r0x0099bd30:
      fprintf(_stderr,puVar10,pbVar8);
      return;
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_98;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  func_0x0099bd00();
  puVar7 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar7;
  if ((int)puVar11[4] != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *puVar7 = uVar1;
  if ((*puVar11 & 1) != 0) {
    free(puVar11[2],*puVar11 & 0xfffffffffffffffe);
    return;
  }
  return;
}


