// Function: _ZN4absl12lts_202605269StrAppendEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS0_8AlphaNumE
// Address: 004fef30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605269StrAppendEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS0_8AlphaNumE
               (ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  undefined8 *extraout_RDX_01;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  bVar1 = (byte)*param_1;
  uVar13 = param_1[1];
  uVar10 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar10 = uVar13;
  }
  if ((ulong)param_2[1] <= -uVar10 - 10) {
    uVar12 = param_2[1] + uVar10;
    uVar14 = *param_1;
    uVar5 = (uVar14 & 0xfffffffffffffffe) - 1;
    uVar6 = uVar5;
    if ((bVar1 & 1) == 0) {
      uVar6 = 0x16;
    }
    if (uVar6 < uVar12) {
      if ((uVar14 & 1) == 0) {
        uVar5 = 0x16;
      }
      uVar6 = 0xfffffffffffffff6;
      if ((-uVar5 - 10 < uVar5) || (uVar6 = uVar5 * 2, uVar12 < uVar6)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar6);
        uVar14 = (ulong)(byte)*param_1;
        uVar13 = param_1[1];
      }
    }
    uVar6 = (ulong)((byte)((uVar14 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar14 & 1) != 0) {
      uVar6 = uVar13;
    }
    uVar5 = uVar12 - uVar6;
    if (uVar12 < uVar6 || uVar5 == 0) {
      if ((uVar14 & 1) == 0) {
        pbVar4 = (byte *)((long)param_1 + 1);
        *(char *)param_1 = (char)uVar12 * '\x02';
      }
      else {
        pbVar4 = (byte *)param_1[2];
        param_1[1] = uVar12;
      }
      pbVar4[uVar12] = 0;
    }
    else {
      uVar6 = *param_1;
      lVar7 = 0x16;
      if ((uVar14 & 1) != 0) {
        lVar7 = (uVar6 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar6 & 1) == 0) {
        uVar13 = (ulong)((uint)(uVar6 >> 1) & 0x7f);
      }
      if (lVar7 - uVar13 < uVar5) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,lVar7,(uVar5 - lVar7) + uVar13,uVar13,uVar13,0);
        param_1[1] = uVar13;
        uVar6 = (ulong)(byte)*param_1;
      }
      uVar13 = uVar13 + uVar5;
      if ((uVar6 & 1) == 0) {
        *(char *)param_1 = (char)uVar13 * '\x02';
        *(byte *)((long)param_1 + uVar13 + 1) = 0;
      }
      else {
        param_1[1] = uVar13;
        *(undefined1 *)(param_1[2] + uVar13) = 0;
      }
    }
    pbVar4 = (byte *)((long)param_1 + 1);
    if (param_2[1] != 0) {
      pbVar11 = pbVar4;
      if ((*param_1 & 1) != 0) {
        pbVar11 = (byte *)param_1[2];
      }
      func_0x0099bda0(pbVar11 + uVar10,*param_2);
    }
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar12 * '\x02';
    }
    else {
      pbVar4 = (byte *)param_1[2];
      param_1[1] = uVar12;
    }
    pbVar4[uVar12] = 0;
    return;
  }
  puVar8 = (ulong *)&UNK_00157dda;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  bVar1 = (byte)*puVar8;
  uVar13 = puVar8[1];
  uVar10 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar10 = uVar13;
  }
  if ((ulong)(extraout_RDX[1] + param_2[1]) <= -uVar10 - 10) {
    uVar12 = extraout_RDX[1] + param_2[1] + uVar10;
    uVar14 = *puVar8;
    uVar5 = (uVar14 & 0xfffffffffffffffe) - 1;
    uVar6 = uVar5;
    if ((bVar1 & 1) == 0) {
      uVar6 = 0x16;
    }
    if (uVar6 < uVar12) {
      if ((uVar14 & 1) == 0) {
        uVar5 = 0x16;
      }
      uVar6 = 0xfffffffffffffff6;
      if ((-uVar5 - 10 < uVar5) || (uVar6 = uVar5 * 2, uVar12 < uVar6)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar8,uVar6);
        uVar14 = (ulong)(byte)*puVar8;
        uVar13 = puVar8[1];
      }
    }
    uVar6 = (ulong)((byte)((uVar14 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar14 & 1) != 0) {
      uVar6 = uVar13;
    }
    uVar5 = uVar12 - uVar6;
    if (uVar12 < uVar6 || uVar5 == 0) {
      if ((uVar14 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar8 + 1);
        *(char *)puVar8 = (char)uVar12 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar8[2];
        puVar8[1] = uVar12;
      }
      pbVar4[uVar12] = 0;
    }
    else {
      uVar6 = *puVar8;
      lVar7 = 0x16;
      if ((uVar14 & 1) != 0) {
        lVar7 = (uVar6 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar6 & 1) == 0) {
        uVar13 = (ulong)((uint)(uVar6 >> 1) & 0x7f);
      }
      if (lVar7 - uVar13 < uVar5) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar8,lVar7,(uVar5 - lVar7) + uVar13,uVar13,uVar13,0);
        puVar8[1] = uVar13;
        uVar6 = (ulong)(byte)*puVar8;
      }
      uVar13 = uVar13 + uVar5;
      if ((uVar6 & 1) == 0) {
        *(char *)puVar8 = (char)uVar13 * '\x02';
        *(byte *)((long)puVar8 + uVar13 + 1) = 0;
      }
      else {
        puVar8[1] = uVar13;
        *(undefined1 *)(puVar8[2] + uVar13) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar8 + 1);
    if ((*puVar8 & 1) != 0) {
      pbVar4 = (byte *)puVar8[2];
    }
    lVar7 = param_2[1];
    if (lVar7 != 0) {
      func_0x0099bda0(pbVar4 + uVar10,*param_2,lVar7);
    }
    pbVar11 = (byte *)((long)puVar8 + 1);
    if (extraout_RDX[1] != 0) {
      func_0x0099bda0(pbVar4 + uVar10 + lVar7,*extraout_RDX);
    }
    if ((*puVar8 & 1) == 0) {
      *(char *)puVar8 = (char)uVar12 * '\x02';
    }
    else {
      pbVar11 = (byte *)puVar8[2];
      puVar8[1] = uVar12;
    }
    pbVar11[uVar12] = 0;
    return;
  }
  puVar8 = (ulong *)&UNK_00157dda;
  puVar9 = extraout_RDX;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  uVar14 = extraout_RDX_00[1] + param_2[1] + param_4[1];
  bVar1 = (byte)*puVar8;
  uVar13 = puVar8[1];
  uVar10 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar10 = uVar13;
  }
  if (uVar14 <= -uVar10 - 10) {
    uVar14 = uVar14 + uVar10;
    uVar6 = *puVar8;
    uVar12 = (uVar6 & 0xfffffffffffffffe) - 1;
    uVar5 = uVar12;
    if ((bVar1 & 1) == 0) {
      uVar5 = 0x16;
    }
    if (uVar5 < uVar14) {
      if ((uVar6 & 1) == 0) {
        uVar12 = 0x16;
      }
      uVar5 = 0xfffffffffffffff6;
      if ((-uVar12 - 10 < uVar12) || (uVar5 = uVar12 * 2, uVar14 < uVar5)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar8,uVar5);
        uVar6 = (ulong)(byte)*puVar8;
        uVar13 = puVar8[1];
      }
    }
    uVar5 = (ulong)((byte)((uVar6 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar13;
    }
    uVar12 = uVar14 - uVar5;
    if (uVar14 < uVar5 || uVar12 == 0) {
      if ((uVar6 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar8 + 1);
        *(char *)puVar8 = (char)uVar14 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar8[2];
        puVar8[1] = uVar14;
      }
      pbVar4[uVar14] = 0;
    }
    else {
      uVar5 = *puVar8;
      lVar7 = 0x16;
      if ((uVar6 & 1) != 0) {
        lVar7 = (uVar5 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar5 & 1) == 0) {
        uVar13 = (ulong)((uint)(uVar5 >> 1) & 0x7f);
      }
      if (lVar7 - uVar13 < uVar12) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar8,lVar7,(uVar12 - lVar7) + uVar13,uVar13,uVar13,0,0);
        puVar8[1] = uVar13;
        uVar5 = (ulong)(byte)*puVar8;
      }
      uVar13 = uVar13 + uVar12;
      if ((uVar5 & 1) == 0) {
        *(char *)puVar8 = (char)uVar13 * '\x02';
        *(byte *)((long)puVar8 + uVar13 + 1) = 0;
      }
      else {
        puVar8[1] = uVar13;
        *(undefined1 *)(puVar8[2] + uVar13) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar8 + 1);
    pbVar11 = pbVar4;
    if ((*puVar8 & 1) != 0) {
      pbVar11 = (byte *)puVar8[2];
    }
    pbVar11 = pbVar11 + uVar10;
    lVar7 = param_2[1];
    if (lVar7 != 0) {
      func_0x0099bda0(pbVar11,*param_2,lVar7);
    }
    lVar2 = extraout_RDX_00[1];
    if (lVar2 != 0) {
      func_0x0099bda0(pbVar11 + lVar7,*extraout_RDX_00,lVar2);
    }
    if (param_4[1] != 0) {
      func_0x0099bda0(pbVar11 + lVar7 + lVar2,*param_4);
    }
    if ((*puVar8 & 1) == 0) {
      *(char *)puVar8 = (char)uVar14 * '\x02';
    }
    else {
      pbVar4 = (byte *)puVar8[2];
      puVar8[1] = uVar14;
    }
    pbVar4[uVar14] = 0;
    return;
  }
  puVar8 = (ulong *)&UNK_00157dda;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  uVar14 = extraout_RDX_01[1] + param_2[1] + param_4[1] + puVar9[1];
  bVar1 = (byte)*puVar8;
  uVar13 = puVar8[1];
  uVar10 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar10 = uVar13;
  }
  if (uVar14 <= -uVar10 - 10) {
    uVar14 = uVar14 + uVar10;
    uVar6 = *puVar8;
    uVar12 = (uVar6 & 0xfffffffffffffffe) - 1;
    uVar5 = uVar12;
    if ((bVar1 & 1) == 0) {
      uVar5 = 0x16;
    }
    if (uVar5 < uVar14) {
      if ((uVar6 & 1) == 0) {
        uVar12 = 0x16;
      }
      if ((-uVar12 - 10 < uVar12) || (uVar14 < uVar12 * 2)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
        uVar6 = (ulong)(byte)*puVar8;
        uVar13 = puVar8[1];
      }
    }
    uVar5 = (ulong)((byte)((uVar6 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar13;
    }
    uVar12 = uVar14 - uVar5;
    if (uVar14 < uVar5 || uVar12 == 0) {
      if ((uVar6 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar8 + 1);
        *(char *)puVar8 = (char)uVar14 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar8[2];
        puVar8[1] = uVar14;
      }
      pbVar4[uVar14] = 0;
    }
    else {
      uVar5 = *puVar8;
      lVar7 = 0x16;
      if ((uVar6 & 1) != 0) {
        lVar7 = (uVar5 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar5 & 1) == 0) {
        uVar13 = (ulong)((uint)(uVar5 >> 1) & 0x7f);
      }
      if (lVar7 - uVar13 < uVar12) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar8,lVar7,(uVar12 - lVar7) + uVar13,uVar13,uVar13,0,0);
        puVar8[1] = uVar13;
        uVar5 = (ulong)(byte)*puVar8;
      }
      uVar13 = uVar13 + uVar12;
      if ((uVar5 & 1) == 0) {
        *(char *)puVar8 = (char)uVar13 * '\x02';
        *(byte *)((long)puVar8 + uVar13 + 1) = 0;
      }
      else {
        puVar8[1] = uVar13;
        *(undefined1 *)(puVar8[2] + uVar13) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar8 + 1);
    pbVar11 = pbVar4;
    if ((*puVar8 & 1) != 0) {
      pbVar11 = (byte *)puVar8[2];
    }
    pbVar11 = pbVar11 + uVar10;
    lVar7 = param_2[1];
    if (lVar7 != 0) {
      func_0x0099bda0(pbVar11,*param_2,lVar7);
    }
    pbVar11 = pbVar11 + lVar7;
    lVar7 = extraout_RDX_01[1];
    if (lVar7 != 0) {
      func_0x0099bda0(pbVar11,*extraout_RDX_01,lVar7);
    }
    lVar2 = param_4[1];
    if (lVar2 != 0) {
      func_0x0099bda0(pbVar11 + lVar7,*param_4,lVar2);
    }
    if (puVar9[1] != 0) {
      func_0x0099bda0(pbVar11 + lVar7 + lVar2,*puVar9);
    }
    if ((*puVar8 & 1) == 0) {
      *(char *)puVar8 = (char)uVar14 * '\x02';
    }
    else {
      pbVar4 = (byte *)puVar8[2];
      puVar8[1] = uVar14;
    }
    pbVar4[uVar14] = 0;
    return;
  }
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc(&UNK_00157dda);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


