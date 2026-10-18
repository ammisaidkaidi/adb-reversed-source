// Function: _ZNSt3__16vectorI8copyinfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRKS1_EEEPS1_DpOT_
// Address: 00344610
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZNSt3__16vectorI8copyinfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRKS1_EEEPS1_DpOT_
          (long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined4 *puVar19;
  
  lVar18 = param_1[1] - *param_1;
  uVar16 = (lVar18 >> 4) * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar16) {
    func_0x00330ca0();
code_r0x00344848:
    func_0x0032fc40();
    pcVar4 = (code *)swi(3);
    puVar19 = (undefined4 *)(*pcVar4)();
    return puVar19;
  }
  lVar15 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar15 * -0x6666666666666666;
  if (uVar16 < uVar5) {
    uVar16 = uVar5;
  }
  if (0x199999999999998 < (ulong)(lVar15 * -0x3333333333333333)) {
    uVar16 = 0x333333333333333;
  }
  if (uVar16 == 0) {
    lVar15 = 0;
  }
  else {
    if (0x333333333333333 < uVar16) goto code_r0x00344848;
    lVar15 = _Znwm(uVar16 * 0x50);
  }
  puVar19 = (undefined4 *)(lVar18 + lVar15);
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    *puVar19 = *(undefined4 *)param_2;
    puVar19[1] = uVar6;
    puVar19[2] = uVar7;
    puVar19[3] = uVar8;
  }
  else {
    func_0x00330340(puVar19,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    *(undefined8 *)(puVar19 + 10) = *(undefined8 *)(param_2 + 0x28);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(puVar19 + 6) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar19 + 8) = uVar10;
  }
  else {
    func_0x00330340(puVar19 + 6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)((long)puVar19 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)((long)puVar19 + 0x41) = uVar10;
  puVar19[0xc] = uVar6;
  puVar19[0xd] = uVar7;
  puVar19[0xe] = uVar8;
  puVar19[0xf] = uVar9;
  puVar17 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  lVar18 = (long)puVar19 + ((long)puVar17 - (long)puVar3);
  if ((long)puVar17 - (long)puVar3 != 0) {
    lVar14 = 0;
    do {
      *(undefined8 *)(lVar18 + 0x10 + lVar14) = *(undefined8 *)((long)puVar17 + lVar14 + 0x10);
      uVar10 = *(undefined8 *)((byte *)((long)puVar17 + lVar14) + 8);
      *(undefined8 *)(lVar18 + lVar14) = *(undefined8 *)((long)puVar17 + lVar14);
      ((undefined8 *)(lVar18 + lVar14))[1] = uVar10;
      pbVar2 = (byte *)((long)puVar17 + lVar14);
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x10);
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      *(undefined8 *)(lVar18 + 0x28 + lVar14) = *(undefined8 *)((long)puVar17 + lVar14 + 0x28);
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x18);
      uVar10 = *(undefined8 *)(pbVar2 + 8);
      puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar14);
      *puVar1 = *(undefined8 *)pbVar2;
      puVar1[1] = uVar10;
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x18);
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x28);
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x30);
      uVar10 = *(undefined8 *)pbVar2;
      uVar11 = *(undefined8 *)(pbVar2 + 8);
      pbVar2 = (byte *)((long)puVar17 + lVar14 + 0x39);
      uVar12 = *(undefined8 *)(pbVar2 + 8);
      puVar1 = (undefined8 *)(lVar18 + 0x39 + lVar14);
      *puVar1 = *(undefined8 *)pbVar2;
      puVar1[1] = uVar12;
      puVar1 = (undefined8 *)(lVar18 + 0x30 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      lVar13 = lVar14 + 0x50;
      lVar14 = lVar14 + 0x50;
    } while ((ulong *)((long)puVar17 + lVar13) != puVar3);
    do {
      if ((puVar17[3] & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar17[5],puVar17[3] & 0xfffffffffffffffe);
      }
      if ((*puVar17 & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar17[2],*puVar17 & 0xfffffffffffffffe);
      }
      puVar17 = puVar17 + 10;
    } while (puVar17 != puVar3);
    puVar17 = (ulong *)*param_1;
  }
  lVar14 = param_1[2];
  *param_1 = lVar18;
  param_1[1] = (long)(puVar19 + 0x14);
  param_1[2] = lVar15 + uVar16 * 0x50;
  if (puVar17 != (ulong *)0x0) {
    _ZdaPvSt11align_val_t(puVar17,lVar14 - (long)puVar17);
  }
  return puVar19 + 0x14;
}


