// Function: _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi4EE8ToStringEv
// Address: 004e9f60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi4EE8ToStringEv
                  (ulong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  byte *pbVar4;
  ulong *puVar5;
  byte bVar6;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_38;
  byte bVar7;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = *(undefined4 *)(param_2 + 2);
  uStack_58 = *param_2;
  uVar3 = uStack_58;
  uStack_50 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar16 = (int)(uint)uStack_58 < 1;
  uVar13 = (uint)uStack_58;
  uStack_58 = uVar3;
  if (bVar16) {
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    do {
      uVar9 = (ulong)uVar13 + 1;
      lVar15 = 0;
      do {
        uVar14 = lVar15 << 0x20 | (ulong)(&uStack_5c)[uVar9];
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar14;
        uVar11 = SUB168(auVar2 * ZEXT816(0x6666666666666667),8) >> 2;
        (&uStack_5c)[uVar9] = (uint)uVar11;
        lVar15 = uVar14 + uVar11 * -10;
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
      uVar13 = (uint)uStack_58;
      if (0 < (int)(uint)uStack_58) {
        do {
          if (*(int *)((long)&uStack_58 + (ulong)uVar13 * 4) != 0) goto code_r0x004ea067;
          bVar16 = uVar13 != 0;
          uVar13 = uVar13 - 1;
          uStack_58 = CONCAT44(uStack_58._4_4_,uVar13);
        } while (bVar16 && uVar13 != 0);
        uVar13 = 0;
      }
code_r0x004ea067:
      bVar6 = (byte)*param_1;
      if ((bVar6 & 1) == 0) {
        uVar11 = 0x16;
        if (bVar6 == 0x2c) {
code_r0x004e9fc0:
          uVar9 = uVar11;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (param_1,uVar9,1,uVar9,uVar9,0,0);
          goto code_r0x004e9fe4;
        }
        uVar9 = (ulong)(bVar6 >> 1);
        *(byte *)param_1 = bVar6 + 2;
        pbVar8 = (byte *)((long)param_1 + 1);
      }
      else {
        uVar9 = param_1[1];
        uVar11 = (*param_1 & 0xfffffffffffffffe) - 1;
        if (uVar9 == uVar11) goto code_r0x004e9fc0;
code_r0x004e9fe4:
        pbVar8 = (byte *)param_1[2];
        param_1[1] = uVar9 + 1;
      }
      pbVar8[uVar9] = (byte)lVar15 | 0x30;
      pbVar8[uVar9 + 1] = 0;
    } while (0 < (int)uVar13);
    uVar11 = (ulong)(byte)*param_1;
    uVar9 = param_1[1];
  }
  uVar14 = uVar11 >> 1;
  bVar6 = (byte)uVar11;
  bVar7 = bVar6 & 1;
  uVar12 = uVar9;
  if ((uVar11 & 1) == 0) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    if ((uVar11 & 1) == 0) {
      uVar9 = 0x16;
      if (bVar6 == 0x2c) {
code_r0x004ea10a:
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,uVar9,1,uVar9,uVar9,0,0);
        uVar14 = uVar9;
        goto code_r0x004ea12b;
      }
      pbVar8 = (byte *)((long)param_1 + 1);
      *(byte *)param_1 = bVar6 + 2;
    }
    else {
      uVar14 = uVar9;
      if (uVar9 == (*param_1 & 0xfffffffffffffffe) - 1) goto code_r0x004ea10a;
code_r0x004ea12b:
      pbVar8 = (byte *)param_1[2];
      param_1[1] = uVar14 + 1;
    }
    (pbVar8 + uVar14)[0] = 0x30;
    (pbVar8 + uVar14)[1] = 0;
    bVar7 = (byte)*param_1 & 1;
    uVar14 = (ulong)(byte)((byte)*param_1 >> 1);
    if (bVar7 == 0) goto code_r0x004ea0d6;
code_r0x004ea14e:
    uVar14 = param_1[1];
    if ((long)uVar14 < 2) goto code_r0x004ea189;
  }
  else {
    if ((uVar11 & 1) != 0) goto code_r0x004ea14e;
code_r0x004ea0d6:
    if (uVar14 < 2) goto code_r0x004ea189;
  }
  if (bVar7 == 0) {
    pbVar8 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar8 = (byte *)param_1[2];
  }
  pbVar4 = pbVar8 + (uVar14 - 1);
  do {
    pbVar10 = pbVar8 + 1;
    bVar6 = *pbVar8;
    *pbVar8 = *pbVar4;
    *pbVar4 = bVar6;
    pbVar4 = pbVar4 + -1;
    pbVar8 = pbVar10;
  } while (pbVar10 < pbVar4);
code_r0x004ea189:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    puVar5 = (ulong *)(*pcVar1)();
    return puVar5;
  }
  return param_1;
}


