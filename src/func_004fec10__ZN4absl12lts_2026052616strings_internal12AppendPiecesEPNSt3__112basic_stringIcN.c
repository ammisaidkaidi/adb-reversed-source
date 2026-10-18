// Function: _ZN4absl12lts_2026052616strings_internal12AppendPiecesEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESt16initializer_listINS2_17basic_string_viewIcS5_EEE
// Address: 004fec10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal12AppendPiecesEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESt16initializer_listINS2_17basic_string_viewIcS5_EEE
               (ulong *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  undefined8 *extraout_RDX_01;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar12 = param_2 + param_3 * 2;
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    param_4 = (undefined8 *)(param_3 * 0x10 - 0x10);
    if (param_4 < (undefined8 *)0x40) {
      uVar8 = 0;
      puVar3 = param_2;
    }
    else {
      uVar13 = ((ulong)param_4 >> 4) + 1;
      uVar8 = 4;
      if ((uVar13 & 3) != 0) {
        uVar8 = (ulong)((uint)uVar13 & 3);
      }
      lVar5 = uVar13 - uVar8;
      puVar3 = param_2 + lVar5 * 2;
      plVar7 = param_2 + 5;
      lVar16 = 0;
      lVar17 = 0;
      lVar18 = 0;
      lVar19 = 0;
      do {
        lVar16 = lVar16 + plVar7[-4];
        lVar17 = lVar17 + plVar7[-2];
        lVar18 = lVar18 + *plVar7;
        lVar19 = lVar19 + plVar7[2];
        plVar7 = plVar7 + 8;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
      uVar8 = lVar19 + lVar17 + lVar18 + lVar16;
      param_4 = (undefined8 *)0x0;
    }
    do {
      uVar8 = uVar8 + puVar3[1];
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar12);
  }
  bVar2 = (byte)*param_1;
  uVar13 = param_1[1];
  uVar15 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar15 = uVar13;
  }
  if (uVar8 <= -uVar15 - 10) {
    uVar8 = uVar8 + uVar15;
    uVar10 = *param_1;
    uVar6 = (uVar10 & 0xfffffffffffffffe) - 1;
    uVar9 = uVar6;
    if ((bVar2 & 1) == 0) {
      uVar9 = 0x16;
    }
    if (uVar9 < uVar8) {
      if ((uVar10 & 1) == 0) {
        uVar6 = 0x16;
      }
      uVar9 = 0xfffffffffffffff6;
      if ((-uVar6 - 10 < uVar6) || (uVar9 = uVar6 * 2, uVar8 < uVar9)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar9);
        uVar10 = (ulong)(byte)*param_1;
        uVar13 = param_1[1];
      }
    }
    uVar9 = (ulong)((byte)((uVar10 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar10 & 1) != 0) {
      uVar9 = uVar13;
    }
    uVar6 = uVar8 - uVar9;
    if (uVar8 < uVar9 || uVar6 == 0) {
      if ((uVar10 & 1) == 0) {
        pbVar4 = (byte *)((long)param_1 + 1);
        *(char *)param_1 = (char)uVar8 * '\x02';
      }
      else {
        pbVar4 = (byte *)param_1[2];
        param_1[1] = uVar8;
      }
      pbVar4[uVar8] = 0;
    }
    else {
      uVar9 = *param_1;
      lVar5 = 0x16;
      if ((uVar10 & 1) != 0) {
        lVar5 = (uVar9 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar9 & 1) == 0) {
        uVar13 = (ulong)((uint)(uVar9 >> 1) & 0x7f);
      }
      if (lVar5 - uVar13 < uVar6) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,lVar5,(uVar6 - lVar5) + uVar13,uVar13,uVar13,0);
        param_1[1] = uVar13;
        uVar9 = (ulong)(byte)*param_1;
      }
      uVar13 = uVar13 + uVar6;
      if ((uVar9 & 1) == 0) {
        *(char *)param_1 = (char)uVar13 * '\x02';
        *(byte *)((long)param_1 + uVar13 + 1) = 0;
      }
      else {
        param_1[1] = uVar13;
        *(undefined1 *)(param_1[2] + uVar13) = 0;
      }
    }
    pbVar4 = (byte *)((long)param_1 + 1);
    bVar2 = (byte)*param_1;
    if (param_3 != 0) {
      pbVar14 = pbVar4;
      if ((bVar2 & 1) != 0) {
        pbVar14 = (byte *)param_1[2];
      }
      pbVar14 = pbVar14 + uVar15;
      uVar13 = param_3 * 0x10 - 0x10;
      if ((uVar13 & 0x10) == 0) {
        lVar5 = param_2[1];
        if (lVar5 != 0) {
          func_0x0099bda0(pbVar14,*param_2,lVar5);
          pbVar14 = pbVar14 + lVar5;
        }
        param_2 = param_2 + 2;
      }
      if (uVar13 != 0) {
        do {
          lVar5 = param_2[1];
          if (lVar5 != 0) {
            func_0x0099bda0(pbVar14,*param_2,lVar5);
            pbVar14 = pbVar14 + lVar5;
          }
          lVar5 = param_2[3];
          if (lVar5 != 0) {
            func_0x0099bda0(pbVar14,param_2[2],lVar5);
            pbVar14 = pbVar14 + lVar5;
          }
          param_2 = param_2 + 4;
        } while (param_2 != puVar12);
      }
      bVar2 = (byte)*param_1;
    }
    if ((bVar2 & 1) == 0) {
      *(char *)param_1 = (char)uVar8 * '\x02';
    }
    else {
      pbVar4 = (byte *)param_1[2];
      param_1[1] = uVar8;
    }
    pbVar4[uVar8] = 0;
    return;
  }
  puVar11 = (ulong *)&UNK_00157dda;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  bVar2 = (byte)*puVar11;
  uVar8 = puVar11[1];
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = uVar8;
  }
  if ((ulong)param_2[1] <= -uVar13 - 10) {
    uVar6 = param_2[1] + uVar13;
    uVar15 = *puVar11;
    uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
    uVar10 = uVar9;
    if ((bVar2 & 1) == 0) {
      uVar10 = 0x16;
    }
    if (uVar10 < uVar6) {
      if ((uVar15 & 1) == 0) {
        uVar9 = 0x16;
      }
      uVar10 = 0xfffffffffffffff6;
      if ((-uVar9 - 10 < uVar9) || (uVar10 = uVar9 * 2, uVar6 < uVar10)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar11,uVar10);
        uVar15 = (ulong)(byte)*puVar11;
        uVar8 = puVar11[1];
      }
    }
    uVar10 = (ulong)((byte)((uVar15 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar15 & 1) != 0) {
      uVar10 = uVar8;
    }
    uVar9 = uVar6 - uVar10;
    if (uVar6 < uVar10 || uVar9 == 0) {
      if ((uVar15 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar11 + 1);
        *(char *)puVar11 = (char)uVar6 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar11[2];
        puVar11[1] = uVar6;
      }
      pbVar4[uVar6] = 0;
    }
    else {
      uVar10 = *puVar11;
      lVar5 = 0x16;
      if ((uVar15 & 1) != 0) {
        lVar5 = (uVar10 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar10 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar10 >> 1) & 0x7f);
      }
      if (lVar5 - uVar8 < uVar9) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar11,lVar5,(uVar9 - lVar5) + uVar8,uVar8,uVar8,0);
        puVar11[1] = uVar8;
        uVar10 = (ulong)(byte)*puVar11;
      }
      uVar8 = uVar8 + uVar9;
      if ((uVar10 & 1) == 0) {
        *(char *)puVar11 = (char)uVar8 * '\x02';
        *(byte *)((long)puVar11 + uVar8 + 1) = 0;
      }
      else {
        puVar11[1] = uVar8;
        *(undefined1 *)(puVar11[2] + uVar8) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar11 + 1);
    if (param_2[1] != 0) {
      pbVar14 = pbVar4;
      if ((*puVar11 & 1) != 0) {
        pbVar14 = (byte *)puVar11[2];
      }
      func_0x0099bda0(pbVar14 + uVar13,*param_2);
    }
    if ((*puVar11 & 1) == 0) {
      *(char *)puVar11 = (char)uVar6 * '\x02';
    }
    else {
      pbVar4 = (byte *)puVar11[2];
      puVar11[1] = uVar6;
    }
    pbVar4[uVar6] = 0;
    return;
  }
  puVar11 = (ulong *)&UNK_00157dda;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  bVar2 = (byte)*puVar11;
  uVar8 = puVar11[1];
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = uVar8;
  }
  if ((ulong)(extraout_RDX[1] + param_2[1]) <= -uVar13 - 10) {
    uVar6 = extraout_RDX[1] + param_2[1] + uVar13;
    uVar15 = *puVar11;
    uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
    uVar10 = uVar9;
    if ((bVar2 & 1) == 0) {
      uVar10 = 0x16;
    }
    if (uVar10 < uVar6) {
      if ((uVar15 & 1) == 0) {
        uVar9 = 0x16;
      }
      uVar10 = 0xfffffffffffffff6;
      if ((-uVar9 - 10 < uVar9) || (uVar10 = uVar9 * 2, uVar6 < uVar10)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar11,uVar10);
        uVar15 = (ulong)(byte)*puVar11;
        uVar8 = puVar11[1];
      }
    }
    uVar10 = (ulong)((byte)((uVar15 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar15 & 1) != 0) {
      uVar10 = uVar8;
    }
    uVar9 = uVar6 - uVar10;
    if (uVar6 < uVar10 || uVar9 == 0) {
      if ((uVar15 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar11 + 1);
        *(char *)puVar11 = (char)uVar6 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar11[2];
        puVar11[1] = uVar6;
      }
      pbVar4[uVar6] = 0;
    }
    else {
      uVar10 = *puVar11;
      lVar5 = 0x16;
      if ((uVar15 & 1) != 0) {
        lVar5 = (uVar10 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar10 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar10 >> 1) & 0x7f);
      }
      if (lVar5 - uVar8 < uVar9) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar11,lVar5,(uVar9 - lVar5) + uVar8,uVar8,uVar8,0);
        puVar11[1] = uVar8;
        uVar10 = (ulong)(byte)*puVar11;
      }
      uVar8 = uVar8 + uVar9;
      if ((uVar10 & 1) == 0) {
        *(char *)puVar11 = (char)uVar8 * '\x02';
        *(byte *)((long)puVar11 + uVar8 + 1) = 0;
      }
      else {
        puVar11[1] = uVar8;
        *(undefined1 *)(puVar11[2] + uVar8) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar11 + 1);
    if ((*puVar11 & 1) != 0) {
      pbVar4 = (byte *)puVar11[2];
    }
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      func_0x0099bda0(pbVar4 + uVar13,*param_2,lVar5);
    }
    pbVar14 = (byte *)((long)puVar11 + 1);
    if (extraout_RDX[1] != 0) {
      func_0x0099bda0(pbVar4 + uVar13 + lVar5,*extraout_RDX);
    }
    if ((*puVar11 & 1) == 0) {
      *(char *)puVar11 = (char)uVar6 * '\x02';
    }
    else {
      pbVar14 = (byte *)puVar11[2];
      puVar11[1] = uVar6;
    }
    pbVar14[uVar6] = 0;
    return;
  }
  puVar11 = (ulong *)&UNK_00157dda;
  puVar12 = extraout_RDX;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  uVar15 = extraout_RDX_00[1] + param_2[1] + param_4[1];
  bVar2 = (byte)*puVar11;
  uVar8 = puVar11[1];
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = uVar8;
  }
  if (uVar15 <= -uVar13 - 10) {
    uVar15 = uVar15 + uVar13;
    uVar10 = *puVar11;
    uVar6 = (uVar10 & 0xfffffffffffffffe) - 1;
    uVar9 = uVar6;
    if ((bVar2 & 1) == 0) {
      uVar9 = 0x16;
    }
    if (uVar9 < uVar15) {
      if ((uVar10 & 1) == 0) {
        uVar6 = 0x16;
      }
      uVar9 = 0xfffffffffffffff6;
      if ((-uVar6 - 10 < uVar6) || (uVar9 = uVar6 * 2, uVar15 < uVar9)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar11,uVar9);
        uVar10 = (ulong)(byte)*puVar11;
        uVar8 = puVar11[1];
      }
    }
    uVar9 = (ulong)((byte)((uVar10 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar10 & 1) != 0) {
      uVar9 = uVar8;
    }
    uVar6 = uVar15 - uVar9;
    if (uVar15 < uVar9 || uVar6 == 0) {
      if ((uVar10 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar11 + 1);
        *(char *)puVar11 = (char)uVar15 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar11[2];
        puVar11[1] = uVar15;
      }
      pbVar4[uVar15] = 0;
    }
    else {
      uVar9 = *puVar11;
      lVar5 = 0x16;
      if ((uVar10 & 1) != 0) {
        lVar5 = (uVar9 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar9 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar9 >> 1) & 0x7f);
      }
      if (lVar5 - uVar8 < uVar6) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar11,lVar5,(uVar6 - lVar5) + uVar8,uVar8,uVar8,0,0);
        puVar11[1] = uVar8;
        uVar9 = (ulong)(byte)*puVar11;
      }
      uVar8 = uVar8 + uVar6;
      if ((uVar9 & 1) == 0) {
        *(char *)puVar11 = (char)uVar8 * '\x02';
        *(byte *)((long)puVar11 + uVar8 + 1) = 0;
      }
      else {
        puVar11[1] = uVar8;
        *(undefined1 *)(puVar11[2] + uVar8) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar11 + 1);
    pbVar14 = pbVar4;
    if ((*puVar11 & 1) != 0) {
      pbVar14 = (byte *)puVar11[2];
    }
    pbVar14 = pbVar14 + uVar13;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      func_0x0099bda0(pbVar14,*param_2,lVar5);
    }
    lVar16 = extraout_RDX_00[1];
    if (lVar16 != 0) {
      func_0x0099bda0(pbVar14 + lVar5,*extraout_RDX_00,lVar16);
    }
    if (param_4[1] != 0) {
      func_0x0099bda0(pbVar14 + lVar5 + lVar16,*param_4);
    }
    if ((*puVar11 & 1) == 0) {
      *(char *)puVar11 = (char)uVar15 * '\x02';
    }
    else {
      pbVar4 = (byte *)puVar11[2];
      puVar11[1] = uVar15;
    }
    pbVar4[uVar15] = 0;
    return;
  }
  puVar11 = (ulong *)&UNK_00157dda;
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc();
  uVar15 = extraout_RDX_01[1] + param_2[1] + param_4[1] + puVar12[1];
  bVar2 = (byte)*puVar11;
  uVar8 = puVar11[1];
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = uVar8;
  }
  if (uVar15 <= -uVar13 - 10) {
    uVar15 = uVar15 + uVar13;
    uVar10 = *puVar11;
    uVar6 = (uVar10 & 0xfffffffffffffffe) - 1;
    uVar9 = uVar6;
    if ((bVar2 & 1) == 0) {
      uVar9 = 0x16;
    }
    if (uVar9 < uVar15) {
      if ((uVar10 & 1) == 0) {
        uVar6 = 0x16;
      }
      if ((-uVar6 - 10 < uVar6) || (uVar15 < uVar6 * 2)) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
        uVar10 = (ulong)(byte)*puVar11;
        uVar8 = puVar11[1];
      }
    }
    uVar9 = (ulong)((byte)((uVar10 & 0xffffffff) >> 1) & 0x7f);
    if ((uVar10 & 1) != 0) {
      uVar9 = uVar8;
    }
    uVar6 = uVar15 - uVar9;
    if (uVar15 < uVar9 || uVar6 == 0) {
      if ((uVar10 & 1) == 0) {
        pbVar4 = (byte *)((long)puVar11 + 1);
        *(char *)puVar11 = (char)uVar15 * '\x02';
      }
      else {
        pbVar4 = (byte *)puVar11[2];
        puVar11[1] = uVar15;
      }
      pbVar4[uVar15] = 0;
    }
    else {
      uVar9 = *puVar11;
      lVar5 = 0x16;
      if ((uVar10 & 1) != 0) {
        lVar5 = (uVar9 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar9 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar9 >> 1) & 0x7f);
      }
      if (lVar5 - uVar8 < uVar6) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar11,lVar5,(uVar6 - lVar5) + uVar8,uVar8,uVar8,0,0);
        puVar11[1] = uVar8;
        uVar9 = (ulong)(byte)*puVar11;
      }
      uVar8 = uVar8 + uVar6;
      if ((uVar9 & 1) == 0) {
        *(char *)puVar11 = (char)uVar8 * '\x02';
        *(byte *)((long)puVar11 + uVar8 + 1) = 0;
      }
      else {
        puVar11[1] = uVar8;
        *(undefined1 *)(puVar11[2] + uVar8) = 0;
      }
    }
    pbVar4 = (byte *)((long)puVar11 + 1);
    pbVar14 = pbVar4;
    if ((*puVar11 & 1) != 0) {
      pbVar14 = (byte *)puVar11[2];
    }
    pbVar14 = pbVar14 + uVar13;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      func_0x0099bda0(pbVar14,*param_2,lVar5);
    }
    pbVar14 = pbVar14 + lVar5;
    lVar5 = extraout_RDX_01[1];
    if (lVar5 != 0) {
      func_0x0099bda0(pbVar14,*extraout_RDX_01,lVar5);
    }
    lVar16 = param_4[1];
    if (lVar16 != 0) {
      func_0x0099bda0(pbVar14 + lVar5,*param_4,lVar16);
    }
    if (puVar12[1] != 0) {
      func_0x0099bda0(pbVar14 + lVar5 + lVar16,*puVar12);
    }
    if ((*puVar11 & 1) == 0) {
      *(char *)puVar11 = (char)uVar15 * '\x02';
    }
    else {
      pbVar4 = (byte *)puVar11[2];
      puVar11[1] = uVar15;
    }
    pbVar4[uVar15] = 0;
    return;
  }
  _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc(&UNK_00157dda);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


