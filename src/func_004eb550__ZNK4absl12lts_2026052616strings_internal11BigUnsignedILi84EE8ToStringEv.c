// Function: _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi84EE8ToStringEv
// Address: 004eb550
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong * _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi84EE8ToStringEv
                  (ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  ulong *puVar4;
  byte bVar5;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  uint auStack_190 [86];
  long lStack_38;
  byte bVar6;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bda0(auStack_190 + 1,param_2,0x154);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar12 = auStack_190[1];
  if ((int)auStack_190[1] < 1) {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    do {
      uVar8 = (ulong)uVar12 + 1;
      lVar14 = 0;
      do {
        uVar13 = lVar14 << 0x20 | (ulong)auStack_190[uVar8];
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar13;
        uVar10 = SUB168(auVar2 * ZEXT816(0x6666666666666667),8) >> 2;
        auStack_190[uVar8] = (uint)uVar10;
        lVar14 = uVar13 + uVar10 * -10;
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
      uVar12 = auStack_190[1];
      if (0 < (int)auStack_190[1]) {
        do {
          uVar12 = auStack_190[1];
          if (auStack_190[(ulong)auStack_190[1] + 1] != 0) goto code_r0x004eb65d;
          bVar15 = auStack_190[1] != 0;
          auStack_190[1] = auStack_190[1] - 1;
        } while (bVar15 && auStack_190[1] != 0);
        uVar12 = 0;
      }
code_r0x004eb65d:
      bVar5 = (byte)*param_1;
      if ((bVar5 & 1) == 0) {
        uVar10 = 0x16;
        if (bVar5 == 0x2c) {
code_r0x004eb5b0:
          uVar8 = uVar10;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (param_1,uVar8,1,uVar8,uVar8,0,0);
          goto code_r0x004eb5d4;
        }
        uVar8 = (ulong)(bVar5 >> 1);
        *(byte *)param_1 = bVar5 + 2;
        pbVar7 = (byte *)((long)param_1 + 1);
      }
      else {
        uVar8 = param_1[1];
        uVar10 = (*param_1 & 0xfffffffffffffffe) - 1;
        if (uVar8 == uVar10) goto code_r0x004eb5b0;
code_r0x004eb5d4:
        pbVar7 = (byte *)param_1[2];
        param_1[1] = uVar8 + 1;
      }
      pbVar7[uVar8] = (byte)lVar14 | 0x30;
      pbVar7[uVar8 + 1] = 0;
    } while (0 < (int)uVar12);
    uVar10 = (ulong)(byte)*param_1;
    uVar8 = param_1[1];
  }
  uVar13 = uVar10 >> 1;
  bVar5 = (byte)uVar10;
  bVar6 = bVar5 & 1;
  uVar11 = uVar8;
  if ((uVar10 & 1) == 0) {
    uVar11 = uVar13;
  }
  if (uVar11 == 0) {
    if ((uVar10 & 1) == 0) {
      uVar8 = 0x16;
      if (bVar5 == 0x2c) {
code_r0x004eb70a:
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,uVar8,1,uVar8,uVar8,0,0);
        uVar13 = uVar8;
        goto code_r0x004eb72b;
      }
      pbVar7 = (byte *)((long)param_1 + 1);
      *(byte *)param_1 = bVar5 + 2;
    }
    else {
      uVar13 = uVar8;
      if (uVar8 == (*param_1 & 0xfffffffffffffffe) - 1) goto code_r0x004eb70a;
code_r0x004eb72b:
      pbVar7 = (byte *)param_1[2];
      param_1[1] = uVar13 + 1;
    }
    (pbVar7 + uVar13)[0] = 0x30;
    (pbVar7 + uVar13)[1] = 0;
    bVar6 = (byte)*param_1 & 1;
    uVar13 = (ulong)(byte)((byte)*param_1 >> 1);
    if (bVar6 == 0) goto code_r0x004eb6d6;
code_r0x004eb74e:
    uVar13 = param_1[1];
    if ((long)uVar13 < 2) goto code_r0x004eb789;
  }
  else {
    if ((uVar10 & 1) != 0) goto code_r0x004eb74e;
code_r0x004eb6d6:
    if (uVar13 < 2) goto code_r0x004eb789;
  }
  if (bVar6 == 0) {
    pbVar7 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar7 = (byte *)param_1[2];
  }
  pbVar3 = pbVar7 + (uVar13 - 1);
  do {
    pbVar9 = pbVar7 + 1;
    bVar5 = *pbVar7;
    *pbVar7 = *pbVar3;
    *pbVar3 = bVar5;
    pbVar3 = pbVar3 + -1;
    pbVar7 = pbVar9;
  } while (pbVar9 < pbVar3);
code_r0x004eb789:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    puVar4 = (ulong *)(*pcVar1)();
    return puVar4;
  }
  return param_1;
}


