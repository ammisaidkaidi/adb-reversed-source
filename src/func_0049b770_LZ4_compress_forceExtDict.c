// Function: LZ4_compress_forceExtDict
// Address: 0049b770
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_compress_forceExtDict(long param_1,ulong *param_2,char *param_3,uint param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  char *pcVar32;
  long lVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  ulong *puVar42;
  ulong uVar43;
  ulong uVar44;
  int iStack_88;
  
  uVar44 = (ulong)param_4;
  uVar37 = *(uint *)(param_1 + 0x4010);
  uVar39 = (ulong)uVar37;
  if (uVar37 + param_4 < 0x80000001) {
    uVar19 = (ulong)*(uint *)(param_1 + 0x4018);
  }
  else {
    lVar33 = *(long *)(param_1 + 0x4000);
    uVar38 = *(uint *)(param_1 + 0x4018);
    uVar37 = uVar37 - 0x10000;
    lVar28 = 0;
    do {
      puVar4 = (uint *)(param_1 + lVar28 * 4);
      uVar41 = puVar4[1];
      uVar16 = puVar4[2];
      uVar7 = puVar4[3];
      puVar5 = (uint *)(param_1 + 0x10 + lVar28 * 4);
      uVar9 = *puVar5;
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar5 = (uint *)(param_1 + lVar28 * 4);
      *puVar5 = *puVar4 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(*puVar4 ^ 0x80000000))
      ;
      puVar5[1] = uVar41 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar41 ^ 0x80000000))
      ;
      puVar5[2] = uVar16 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar16 ^ 0x80000000))
      ;
      puVar5[3] = uVar7 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar7 ^ 0x80000000));
      puVar4 = (uint *)(param_1 + 0x10 + lVar28 * 4);
      *puVar4 = uVar9 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar9 ^ 0x80000000));
      puVar4[1] = uVar10 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar10 ^ 0x80000000))
      ;
      puVar4[2] = uVar11 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar11 ^ 0x80000000))
      ;
      puVar4[3] = uVar12 - uVar37 & -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar12 ^ 0x80000000))
      ;
      lVar28 = lVar28 + 8;
    } while (lVar28 != 0x1000);
    *(undefined4 *)(param_1 + 0x4010) = 0x10000;
    uVar39 = 0x10000;
    uVar19 = (ulong)*(uint *)(param_1 + 0x4018);
    if (0xffff < *(uint *)(param_1 + 0x4018)) {
      uVar19 = 0x10000;
    }
    *(ulong *)(param_1 + 0x4000) = (lVar33 + (ulong)uVar38) - uVar19;
  }
  uVar37 = (uint)uVar19;
  uVar38 = (uint)uVar39;
  iVar40 = (int)param_3;
  if (uVar37 < uVar38 && uVar37 < 0x10000) {
    if (0x7e000000 < param_4) {
code_r0x0049b9ad:
      iVar17 = 0;
      goto code_r0x0049cb5a;
    }
    if (param_4 == 0) {
code_r0x0049bac3:
      *param_3 = '\0';
      iVar17 = 1;
      goto code_r0x0049cb5a;
    }
    puVar8 = *(ulong **)(param_1 + 0x4000);
    lVar28 = uVar19 + (long)puVar8;
    lVar33 = lVar28 - uVar39;
    if (puVar8 == (ulong *)0x0) {
      lVar33 = 0;
    }
    *(uint *)(param_1 + 0x4018) = uVar37 + param_4;
    *(uint *)(param_1 + 0x4010) = uVar38 + param_4;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    puVar36 = param_2;
    if (0xc < param_4) {
      lVar20 = (long)param_2 - uVar39;
      puVar21 = (ulong *)((long)param_2 + (uVar44 - 0xb));
      puVar22 = (ulong *)((long)param_2 + (uVar44 - 5));
      if (puVar8 == (ulong *)0x0) {
        lVar28 = 0;
      }
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar38;
      puVar27 = (ulong *)((long)param_2 + 2);
      puVar23 = (ulong *)((long)param_2 + 1);
      uVar41 = uVar38 + 1;
      puVar1 = (ulong *)((long)param_2 + (uVar44 - 0xc));
      puVar2 = (ulong *)((long)param_2 + (uVar44 - 8));
      puVar26 = (ulong *)((long)param_2 + (uVar44 - 6));
code_r0x0049baf9:
      uVar39 = *(ulong *)((long)puVar36 + 1);
      uVar19 = 1;
      uVar16 = 0x41;
      do {
        uVar29 = uVar39 * -0x30e4432345000000 >> 0x34;
        uVar7 = *(uint *)(param_1 + uVar29 * 4);
        uVar24 = (ulong)uVar7;
        uVar39 = *puVar27;
        *(uint *)(param_1 + uVar29 * 4) = uVar41;
        iStack_88 = (int)lVar20;
        if ((uVar38 - uVar37 <= uVar7) && (uVar41 <= uVar7 + 0xffff)) {
          lVar25 = lVar20;
          if (uVar7 < uVar38) {
            lVar25 = lVar33;
          }
          if (*(int *)(lVar25 + uVar24) == (int)*puVar23) goto code_r0x0049bb8d;
        }
        uVar41 = (int)puVar27 - iStack_88;
        puVar30 = (ulong *)(uVar19 + (long)puVar27);
        uVar19 = (ulong)(uVar16 >> 6);
        puVar23 = puVar27;
        puVar27 = puVar30;
        uVar16 = uVar16 + 1;
        if (puVar21 < puVar30) break;
      } while( true );
    }
code_r0x0049c9f4:
    uVar44 = (long)param_2 + (uVar44 - (long)puVar36);
    if (uVar44 < 0xf) {
      *param_3 = (char)uVar44 << 4;
    }
    else {
      uVar39 = uVar44 - 0xf;
      *param_3 = -0x10;
      pcVar32 = param_3 + 1;
      if (0xfe < uVar39) {
        uVar19 = (uVar44 - 0x10e) / 0xff;
        func_0x0099bdb0(param_3 + 1,0xff,uVar19 + 1);
        uVar39 = (uVar44 + uVar19 * -0xff) - 0x10e;
        pcVar32 = param_3 + uVar19 + 2;
      }
      param_3 = pcVar32;
      *param_3 = (char)uVar39;
    }
    func_0x0099bda0(param_3 + 1,puVar36);
    iVar17 = (int)(param_3 + 1) + (int)uVar44;
  }
  else {
    if (0x7e000000 < param_4) goto code_r0x0049b9ad;
    if (param_4 == 0) goto code_r0x0049bac3;
    puVar8 = *(ulong **)(param_1 + 0x4000);
    lVar28 = uVar19 + (long)puVar8;
    lVar33 = lVar28 - uVar39;
    if (puVar8 == (ulong *)0x0) {
      lVar33 = 0;
    }
    *(uint *)(param_1 + 0x4018) = uVar37 + param_4;
    *(uint *)(param_1 + 0x4010) = uVar38 + param_4;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    puVar36 = param_2;
    if (0xc < param_4) {
      lVar20 = (long)param_2 - uVar39;
      puVar21 = (ulong *)((long)param_2 + (uVar44 - 0xb));
      puVar22 = (ulong *)((long)param_2 + (uVar44 - 5));
      if (puVar8 == (ulong *)0x0) {
        lVar28 = 0;
      }
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar38;
      puVar27 = (ulong *)((long)param_2 + 2);
      puVar23 = (ulong *)((long)param_2 + 1);
      uVar37 = uVar38 + 1;
      puVar1 = (ulong *)((long)param_2 + (uVar44 - 0xc));
      puVar2 = (ulong *)((long)param_2 + (uVar44 - 8));
      puVar26 = (ulong *)((long)param_2 + (uVar44 - 6));
code_r0x0049c263:
      uVar39 = *(ulong *)((long)puVar36 + 1);
      uVar29 = 0x41;
      uVar19 = 1;
      do {
        puVar30 = puVar27;
        uVar24 = uVar39 * -0x30e4432345000000 >> 0x34;
        uVar41 = *(uint *)(param_1 + uVar24 * 4);
        uVar43 = (ulong)uVar41;
        uVar39 = *puVar30;
        *(uint *)(param_1 + uVar24 * 4) = uVar37;
        iVar17 = (int)lVar20;
        if (uVar37 <= uVar41 + 0xffff) {
          lVar25 = lVar20;
          if (uVar41 < uVar38) {
            lVar25 = lVar33;
          }
          if (*(int *)(lVar25 + uVar43) == (int)*puVar23) goto code_r0x0049c2e7;
        }
        uVar37 = (int)puVar30 - iVar17;
        puVar27 = (ulong *)(uVar19 + (long)puVar30);
        uVar19 = uVar29 >> 6;
        uVar29 = (ulong)((int)uVar29 + 1);
        puVar23 = puVar30;
        if (puVar21 < puVar27) break;
      } while( true );
    }
code_r0x0049caaa:
    uVar44 = (long)param_2 + (uVar44 - (long)puVar36);
    if (uVar44 < 0xf) {
      *param_3 = (char)uVar44 << 4;
    }
    else {
      uVar39 = uVar44 - 0xf;
      *param_3 = -0x10;
      pcVar32 = param_3 + 1;
      if (0xfe < uVar39) {
        uVar19 = (uVar44 - 0x10e) / 0xff;
        func_0x0099bdb0(param_3 + 1,0xff,uVar19 + 1);
        uVar39 = (uVar19 * -0xff + uVar44) - 0x10e;
        pcVar32 = param_3 + uVar19 + 2;
      }
      param_3 = pcVar32;
      *param_3 = (char)uVar39;
    }
    func_0x0099bda0(param_3 + 1,puVar36,uVar44);
    iVar17 = (int)(param_3 + 1) + (int)uVar44;
  }
  iVar17 = iVar17 - iVar40;
code_r0x0049cb5a:
  *(ulong **)(param_1 + 0x4000) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
  return iVar17;
code_r0x0049c2e7:
  puVar27 = (ulong *)(lVar25 + uVar43);
  puVar30 = param_2;
  if (uVar41 < uVar38) {
    puVar30 = puVar8;
  }
  if ((puVar30 < puVar27) && (*(char *)((long)puVar23 - 1) == *(char *)((long)puVar27 - 1))) {
    puVar34 = (ulong *)(lVar25 + uVar43);
    puVar35 = puVar23;
    do {
      puVar23 = (ulong *)((long)puVar35 - 1);
      puVar27 = (ulong *)((long)puVar34 + -1);
      if ((puVar27 <= puVar30) || (puVar23 <= puVar36)) break;
      pcVar32 = (char *)((long)puVar35 - 2);
      pcVar3 = (char *)((long)puVar34 + -2);
      puVar34 = puVar27;
      puVar35 = puVar23;
    } while (*pcVar32 == *pcVar3);
  }
  uVar39 = (long)puVar23 - (long)puVar36;
  puVar34 = (ulong *)(param_3 + 1);
  if ((uint)uVar39 < 0xf) {
    *param_3 = (char)uVar39 << 4;
  }
  else {
    uVar16 = (uint)uVar39 - 0xf;
    *param_3 = -0x10;
    if (0xfe < uVar16) {
      iVar18 = (int)puVar23 - (int)puVar36;
      uVar19 = (ulong)(iVar18 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar34,0xff,uVar19 + 1);
      puVar34 = (ulong *)(param_3 + uVar19 + 2);
      uVar16 = (iVar18 + (int)uVar19 * -0xff) - 0x10e;
    }
    *(char *)puVar34 = (char)uVar16;
    puVar34 = (ulong *)((long)puVar34 + 1);
  }
  uVar39 = uVar39 & 0xffffffff;
  puVar35 = (ulong *)((long)puVar34 + uVar39);
  uVar19 = 8;
  if (8 < uVar39) {
    uVar19 = uVar39;
  }
  if ((0x18 < uVar39) && (0x1f < (ulong)((long)puVar34 - (long)puVar36))) {
    uVar19 = (uVar19 - 1 >> 3) + 1;
    uVar39 = uVar19 & 0x3ffffffffffffffc;
    uVar29 = 0;
    do {
      uVar13 = ((undefined8 *)((long)puVar36 + uVar29))[1];
      puVar6 = (undefined8 *)((long)puVar36 + uVar29 + 0x10);
      uVar14 = *puVar6;
      uVar15 = puVar6[1];
      *(undefined8 *)((long)puVar34 + uVar29) = *(undefined8 *)((long)puVar36 + uVar29);
      *(undefined8 *)((char *)((long)puVar34 + uVar29) + 8) = uVar13;
      pcVar32 = (char *)((long)puVar34 + uVar29 + 0x10);
      *(undefined8 *)pcVar32 = uVar14;
      *(undefined8 *)(pcVar32 + 8) = uVar15;
      uVar29 = uVar29 + 0x20;
    } while ((uVar19 * 8 & 0xffffffffffffffe0) != uVar29);
    puVar36 = puVar36 + uVar39;
    puVar34 = puVar34 + uVar39;
    if (uVar19 == uVar39) goto code_r0x0049c4c3;
  }
  do {
    *puVar34 = *puVar36;
    puVar34 = puVar34 + 1;
    puVar36 = puVar36 + 1;
  } while (puVar34 < puVar35);
code_r0x0049c4c3:
  iVar18 = uVar37 - uVar41;
  do {
    *(short *)puVar35 = (short)iVar18;
    if (puVar30 == puVar8) {
      puVar30 = (ulong *)((lVar28 - (long)puVar27) + (long)puVar23);
      if (puVar22 < puVar30) {
        puVar30 = puVar22;
      }
      puVar36 = (ulong *)((long)puVar23 + 4);
      puVar31 = (ulong *)((long)puVar27 + 4);
      puVar34 = (ulong *)((long)puVar30 - 7);
      puVar42 = puVar36;
      if (puVar36 < puVar34) {
        if (*puVar31 == *puVar36) {
          puVar31 = (ulong *)((long)puVar27 + 0xc);
          puVar42 = (ulong *)((long)puVar23 + 0xc);
          goto code_r0x0049c5bf;
        }
        uVar37 = 0;
        for (uVar39 = *puVar36 ^ *puVar31; (uVar39 & 1) == 0;
            uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar37 = uVar37 + 1;
        }
        uVar37 = uVar37 >> 3;
      }
      else {
code_r0x0049c5bf:
        if (puVar42 < puVar34) {
          iVar18 = ((int)puVar42 - (int)puVar23) + -4;
code_r0x0049c5e0:
          if (*puVar31 == *puVar42) goto code_r0x0049c5ef;
          uVar37 = 0;
          for (uVar39 = *puVar42 ^ *puVar31; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = (uVar37 >> 3) + iVar18;
          goto code_r0x0049c6ac;
        }
code_r0x0049c600:
        if ((puVar42 < (ulong *)((long)puVar30 - 3U)) && ((int)*puVar31 == (int)*puVar42)) {
          puVar42 = (ulong *)((long)puVar42 + 4);
          puVar31 = (ulong *)((long)puVar31 + 4);
        }
        if ((puVar42 < (ulong *)((long)puVar30 - 1U)) && ((short)*puVar31 == (short)*puVar42)) {
          puVar42 = (ulong *)((long)puVar42 + 2);
          puVar31 = (ulong *)((long)puVar31 + 2);
        }
        if (puVar42 < puVar30) {
          puVar42 = (ulong *)((long)puVar42 + (ulong)((char)*puVar31 == (char)*puVar42));
        }
        uVar37 = (int)puVar42 - (int)puVar36;
      }
code_r0x0049c6ac:
      puVar36 = (ulong *)((long)puVar23 + (ulong)uVar37 + 4);
      if (puVar36 == puVar30) {
        puVar34 = puVar30;
        puVar31 = param_2;
        if (puVar30 < puVar1) {
          if (*param_2 == *puVar30) {
            puVar34 = puVar30 + 1;
            puVar31 = param_2 + 1;
            goto code_r0x0049c6e8;
          }
          uVar41 = 0;
          for (uVar39 = *puVar30 ^ *param_2; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar41 = uVar41 + 1;
          }
          uVar41 = uVar41 >> 3;
        }
        else {
code_r0x0049c6e8:
          if (puVar34 < puVar1) {
            puVar23 = (ulong *)((long)puVar23 + (lVar28 - (long)puVar27));
            if (puVar22 <= puVar23) {
              puVar23 = puVar22;
            }
            iVar18 = (int)puVar34 - (int)puVar23;
code_r0x0049c710:
            if (*puVar31 == *puVar34) goto code_r0x0049c71b;
            uVar41 = 0;
            for (uVar39 = *puVar34 ^ *puVar31; (uVar39 & 1) == 0;
                uVar39 = uVar39 >> 1 | 0x8000000000000000) {
              uVar41 = uVar41 + 1;
            }
            uVar41 = (uVar41 >> 3) + iVar18;
            goto code_r0x0049c75c;
          }
code_r0x0049c979:
          if ((puVar34 < puVar2) && ((int)*puVar31 == (int)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar34 < puVar26) && ((short)*puVar31 == (short)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar34 < puVar22) {
            puVar34 = (ulong *)((long)puVar34 + (ulong)((char)*puVar31 == (char)*puVar34));
          }
          uVar41 = (int)puVar34 - (int)puVar30;
        }
code_r0x0049c75c:
        uVar37 = uVar37 + uVar41;
        puVar36 = (ulong *)((long)puVar36 + (ulong)uVar41);
      }
    }
    else {
      puVar36 = (ulong *)((long)puVar23 + 4);
      puVar30 = (ulong *)((long)puVar27 + 4);
      puVar34 = puVar36;
      if (puVar36 < puVar1) {
        if (*puVar30 == *puVar36) {
          puVar30 = (ulong *)((long)puVar27 + 0xc);
          puVar34 = (ulong *)((long)puVar23 + 0xc);
          goto code_r0x0049c51c;
        }
        uVar37 = 0;
        for (uVar39 = *puVar36 ^ *puVar30; (uVar39 & 1) == 0;
            uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar37 = uVar37 + 1;
        }
        uVar37 = uVar37 >> 3;
      }
      else {
code_r0x0049c51c:
        if (puVar34 < puVar1) {
          iVar18 = ((int)puVar34 - (int)puVar23) + -4;
code_r0x0049c540:
          if (*puVar30 == *puVar34) break;
          uVar37 = 0;
          for (uVar39 = *puVar34 ^ *puVar30; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = (uVar37 >> 3) + iVar18;
          goto code_r0x0049c66d;
        }
code_r0x0049c8bc:
        if ((puVar34 < puVar2) && ((int)*puVar30 == (int)*puVar34)) {
          puVar34 = (ulong *)((long)puVar34 + 4);
          puVar30 = (ulong *)((long)puVar30 + 4);
        }
        if ((puVar34 < puVar26) && ((short)*puVar30 == (short)*puVar34)) {
          puVar34 = (ulong *)((long)puVar34 + 2);
          puVar30 = (ulong *)((long)puVar30 + 2);
        }
        if (puVar34 < puVar22) {
          puVar34 = (ulong *)((long)puVar34 + (ulong)((char)*puVar30 == (char)*puVar34));
        }
        uVar37 = (int)puVar34 - (int)puVar36;
      }
code_r0x0049c66d:
      puVar36 = (ulong *)((long)puVar23 + (ulong)uVar37 + 4);
    }
    pcVar32 = (char *)((long)puVar35 + 2);
    if (uVar37 < 0xf) {
      *param_3 = *param_3 + (char)uVar37;
      param_3 = pcVar32;
    }
    else {
      *param_3 = *param_3 + '\x0f';
      uVar41 = uVar37 - 0xf;
      pcVar32[0] = -1;
      pcVar32[1] = -1;
      pcVar32[2] = -1;
      pcVar32[3] = -1;
      if (0x3fb < uVar41) {
        uVar39 = (ulong)(((uVar37 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar35 + 6),0xff,uVar39 + 4);
        pcVar32 = (char *)((long)puVar35 + uVar39 + 6);
        uVar41 = (uVar37 - 0x40b) % 0x3fc;
      }
      uVar37 = uVar41 * 0x8081 >> 0x17;
      pcVar32[uVar37] = (char)uVar37 + (char)uVar41;
      param_3 = pcVar32 + (ulong)uVar37 + 1;
    }
    if (puVar21 <= puVar36) goto code_r0x0049caaa;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar36 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar36 + -2) - iVar17;
    uVar39 = *puVar36 * -0x30e4432345000000 >> 0x34;
    uVar41 = (int)puVar36 - iVar17;
    uVar37 = *(uint *)(param_1 + uVar39 * 4);
    puVar30 = param_2;
    lVar25 = lVar20;
    if (uVar37 < uVar38) {
      puVar30 = puVar8;
      lVar25 = lVar33;
    }
    *(uint *)(param_1 + uVar39 * 4) = uVar41;
    if ((uVar37 + 0xffff < uVar41) ||
       (puVar27 = (ulong *)(lVar25 + (ulong)uVar37), (int)*puVar27 != (int)*puVar36))
    goto code_r0x0049c240;
    puVar35 = (ulong *)(param_3 + 1);
    *param_3 = '\0';
    iVar18 = uVar41 - uVar37;
    puVar23 = puVar36;
  } while( true );
  puVar34 = puVar34 + 1;
  puVar30 = puVar30 + 1;
  iVar18 = iVar18 + 8;
  if (puVar1 <= puVar34) goto code_r0x0049c8bc;
  goto code_r0x0049c540;
code_r0x0049c5ef:
  puVar42 = puVar42 + 1;
  puVar31 = puVar31 + 1;
  iVar18 = iVar18 + 8;
  if (puVar34 <= puVar42) goto code_r0x0049c600;
  goto code_r0x0049c5e0;
code_r0x0049c71b:
  puVar34 = puVar34 + 1;
  puVar31 = puVar31 + 1;
  iVar18 = iVar18 + 8;
  if (puVar1 <= puVar34) goto code_r0x0049c979;
  goto code_r0x0049c710;
code_r0x0049c240:
  puVar23 = (ulong *)((long)puVar36 + 1);
  uVar37 = (int)puVar23 - iVar17;
  puVar27 = (ulong *)((long)puVar36 + 2);
  if (puVar21 < puVar27) goto code_r0x0049caaa;
  goto code_r0x0049c263;
code_r0x0049bb8d:
  puVar27 = (ulong *)(lVar25 + uVar24);
  puVar30 = param_2;
  if (uVar7 < uVar38) {
    puVar30 = puVar8;
  }
  if ((puVar30 < puVar27) && (*(char *)((long)puVar23 - 1) == *(char *)((long)puVar27 - 1))) {
    puVar34 = (ulong *)(lVar25 + uVar24);
    puVar35 = puVar23;
    do {
      puVar23 = (ulong *)((long)puVar35 - 1);
      puVar27 = (ulong *)((long)puVar34 + -1);
      if ((puVar27 <= puVar30) || (puVar23 <= puVar36)) break;
      pcVar32 = (char *)((long)puVar35 - 2);
      pcVar3 = (char *)((long)puVar34 + -2);
      puVar34 = puVar27;
      puVar35 = puVar23;
    } while (*pcVar32 == *pcVar3);
  }
  uVar39 = (long)puVar23 - (long)puVar36;
  puVar34 = (ulong *)(param_3 + 1);
  if ((uint)uVar39 < 0xf) {
    *param_3 = (char)uVar39 << 4;
  }
  else {
    uVar16 = (uint)uVar39 - 0xf;
    *param_3 = -0x10;
    if (0xfe < uVar16) {
      iVar17 = (int)puVar23 - (int)puVar36;
      uVar19 = (ulong)(iVar17 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar34,0xff,uVar19 + 1);
      puVar34 = (ulong *)(param_3 + uVar19 + 2);
      uVar16 = (iVar17 + (int)uVar19 * -0xff) - 0x10e;
    }
    *(char *)puVar34 = (char)uVar16;
    puVar34 = (ulong *)((long)puVar34 + 1);
  }
  uVar39 = uVar39 & 0xffffffff;
  puVar35 = (ulong *)((long)puVar34 + uVar39);
  uVar19 = 8;
  if (8 < uVar39) {
    uVar19 = uVar39;
  }
  if ((0x18 < uVar39) && (0x1f < (ulong)((long)puVar34 - (long)puVar36))) {
    uVar19 = (uVar19 - 1 >> 3) + 1;
    uVar39 = uVar19 & 0x3ffffffffffffffc;
    uVar29 = 0;
    do {
      uVar13 = ((undefined8 *)((long)puVar36 + uVar29))[1];
      puVar6 = (undefined8 *)((long)puVar36 + uVar29 + 0x10);
      uVar14 = *puVar6;
      uVar15 = puVar6[1];
      *(undefined8 *)((long)puVar34 + uVar29) = *(undefined8 *)((long)puVar36 + uVar29);
      *(undefined8 *)((char *)((long)puVar34 + uVar29) + 8) = uVar13;
      pcVar32 = (char *)((long)puVar34 + uVar29 + 0x10);
      *(undefined8 *)pcVar32 = uVar14;
      *(undefined8 *)(pcVar32 + 8) = uVar15;
      uVar29 = uVar29 + 0x20;
    } while ((uVar19 * 8 & 0xffffffffffffffe0) != uVar29);
    puVar36 = puVar36 + uVar39;
    puVar34 = puVar34 + uVar39;
    if (uVar19 == uVar39) goto code_r0x0049bd73;
  }
  do {
    *puVar34 = *puVar36;
    puVar34 = puVar34 + 1;
    puVar36 = puVar36 + 1;
  } while (puVar34 < puVar35);
code_r0x0049bd73:
  iVar17 = uVar41 - uVar7;
  do {
    *(short *)puVar35 = (short)iVar17;
    if (puVar30 == puVar8) {
      puVar30 = (ulong *)((lVar28 - (long)puVar27) + (long)puVar23);
      if (puVar22 < puVar30) {
        puVar30 = puVar22;
      }
      puVar36 = (ulong *)((long)puVar23 + 4);
      puVar31 = (ulong *)((long)puVar27 + 4);
      puVar34 = (ulong *)((long)puVar30 - 7);
      puVar42 = puVar36;
      if (puVar36 < puVar34) {
        if (*puVar31 == *puVar36) {
          puVar31 = (ulong *)((long)puVar27 + 0xc);
          puVar42 = (ulong *)((long)puVar23 + 0xc);
          goto code_r0x0049be62;
        }
        uVar41 = 0;
        for (uVar39 = *puVar36 ^ *puVar31; (uVar39 & 1) == 0;
            uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar41 = uVar41 + 1;
        }
        uVar41 = uVar41 >> 3;
      }
      else {
code_r0x0049be62:
        if (puVar42 < puVar34) {
          iVar17 = ((int)puVar42 - (int)puVar23) + -4;
code_r0x0049be80:
          if (*puVar31 == *puVar42) goto code_r0x0049be90;
          uVar41 = 0;
          for (uVar39 = *puVar42 ^ *puVar31; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar41 = uVar41 + 1;
          }
          uVar41 = (uVar41 >> 3) + iVar17;
          goto code_r0x0049bf4d;
        }
code_r0x0049bea1:
        if ((puVar42 < (ulong *)((long)puVar30 - 3U)) && ((int)*puVar31 == (int)*puVar42)) {
          puVar42 = (ulong *)((long)puVar42 + 4);
          puVar31 = (ulong *)((long)puVar31 + 4);
        }
        if ((puVar42 < (ulong *)((long)puVar30 - 1U)) && ((short)*puVar31 == (short)*puVar42)) {
          puVar42 = (ulong *)((long)puVar42 + 2);
          puVar31 = (ulong *)((long)puVar31 + 2);
        }
        if (puVar42 < puVar30) {
          puVar42 = (ulong *)((long)puVar42 + (ulong)((char)*puVar31 == (char)*puVar42));
        }
        uVar41 = (int)puVar42 - (int)puVar36;
      }
code_r0x0049bf4d:
      puVar36 = (ulong *)((long)puVar23 + (ulong)uVar41 + 4);
      if (puVar36 == puVar30) {
        puVar34 = puVar30;
        puVar31 = param_2;
        if (puVar30 < puVar1) {
          if (*param_2 == *puVar30) {
            puVar34 = puVar30 + 1;
            puVar31 = param_2 + 1;
            goto code_r0x0049bf85;
          }
          uVar16 = 0;
          for (uVar39 = *puVar30 ^ *param_2; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar16 = uVar16 + 1;
          }
          uVar16 = uVar16 >> 3;
        }
        else {
code_r0x0049bf85:
          if (puVar34 < puVar1) {
            puVar23 = (ulong *)((long)puVar23 + (lVar28 - (long)puVar27));
            if (puVar22 <= puVar23) {
              puVar23 = puVar22;
            }
            iVar17 = (int)puVar34 - (int)puVar23;
code_r0x0049bfb0:
            if (*puVar31 == *puVar34) goto code_r0x0049bfbb;
            uVar16 = 0;
            for (uVar39 = *puVar34 ^ *puVar31; (uVar39 & 1) == 0;
                uVar39 = uVar39 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar16 = (uVar16 >> 3) + iVar17;
            goto code_r0x0049c050;
          }
code_r0x0049bfcc:
          if ((puVar34 < puVar2) && ((int)*puVar31 == (int)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar34 < puVar26) && ((short)*puVar31 == (short)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar34 < puVar22) {
            puVar34 = (ulong *)((long)puVar34 + (ulong)((char)*puVar31 == (char)*puVar34));
          }
          uVar16 = (int)puVar34 - (int)puVar30;
        }
code_r0x0049c050:
        uVar41 = uVar41 + uVar16;
        puVar36 = (ulong *)((long)puVar36 + (ulong)uVar16);
      }
    }
    else {
      puVar36 = (ulong *)((long)puVar23 + 4);
      puVar30 = (ulong *)((long)puVar27 + 4);
      puVar34 = puVar36;
      if (puVar36 < puVar1) {
        if (*puVar30 == *puVar36) {
          puVar30 = (ulong *)((long)puVar27 + 0xc);
          puVar34 = (ulong *)((long)puVar23 + 0xc);
          goto code_r0x0049bdbd;
        }
        uVar41 = 0;
        for (uVar39 = *puVar36 ^ *puVar30; (uVar39 & 1) == 0;
            uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar41 = uVar41 + 1;
        }
        uVar41 = uVar41 >> 3;
      }
      else {
code_r0x0049bdbd:
        if (puVar34 < puVar1) {
          iVar17 = ((int)puVar34 - (int)puVar23) + -4;
code_r0x0049bde0:
          if (*puVar30 == *puVar34) break;
          uVar41 = 0;
          for (uVar39 = *puVar34 ^ *puVar30; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar41 = uVar41 + 1;
          }
          uVar41 = (uVar41 >> 3) + iVar17;
          goto code_r0x0049bf15;
        }
code_r0x0049c1a7:
        if ((puVar34 < puVar2) && ((int)*puVar30 == (int)*puVar34)) {
          puVar34 = (ulong *)((long)puVar34 + 4);
          puVar30 = (ulong *)((long)puVar30 + 4);
        }
        if ((puVar34 < puVar26) && ((short)*puVar30 == (short)*puVar34)) {
          puVar34 = (ulong *)((long)puVar34 + 2);
          puVar30 = (ulong *)((long)puVar30 + 2);
        }
        if (puVar34 < puVar22) {
          puVar34 = (ulong *)((long)puVar34 + (ulong)((char)*puVar30 == (char)*puVar34));
        }
        uVar41 = (int)puVar34 - (int)puVar36;
      }
code_r0x0049bf15:
      puVar36 = (ulong *)((long)puVar23 + (ulong)uVar41 + 4);
    }
    pcVar32 = (char *)((long)puVar35 + 2);
    if (uVar41 < 0xf) {
      *param_3 = *param_3 + (char)uVar41;
      param_3 = pcVar32;
    }
    else {
      *param_3 = *param_3 + '\x0f';
      uVar16 = uVar41 - 0xf;
      pcVar32[0] = -1;
      pcVar32[1] = -1;
      pcVar32[2] = -1;
      pcVar32[3] = -1;
      if (0x3fb < uVar16) {
        uVar39 = (ulong)(((uVar41 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar35 + 6),0xff,uVar39 + 4);
        pcVar32 = (char *)((long)puVar35 + uVar39 + 6);
        uVar16 = (uVar41 - 0x40b) % 0x3fc;
      }
      uVar41 = uVar16 * 0x8081 >> 0x17;
      pcVar32[uVar41] = (char)uVar41 + (char)uVar16;
      param_3 = pcVar32 + (ulong)uVar41 + 1;
    }
    if (puVar21 <= puVar36) goto code_r0x0049c9f4;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar36 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar36 + -2) - iStack_88;
    uVar39 = *puVar36 * -0x30e4432345000000 >> 0x34;
    uVar16 = (int)puVar36 - iStack_88;
    uVar41 = *(uint *)(param_1 + uVar39 * 4);
    lVar25 = lVar20;
    if (uVar41 < uVar38) {
      lVar25 = lVar33;
    }
    *(uint *)(param_1 + uVar39 * 4) = uVar16;
    puVar30 = param_2;
    if (uVar41 < uVar38) {
      puVar30 = puVar8;
    }
    if (((uVar41 < uVar38 - uVar37) || (uVar41 + 0xffff < uVar16)) ||
       (puVar27 = (ulong *)(lVar25 + (ulong)uVar41), (int)*puVar27 != (int)*puVar36))
    goto code_r0x0049bad2;
    puVar35 = (ulong *)(param_3 + 1);
    *param_3 = '\0';
    iVar17 = uVar16 - uVar41;
    puVar23 = puVar36;
  } while( true );
  puVar34 = puVar34 + 1;
  puVar30 = puVar30 + 1;
  iVar17 = iVar17 + 8;
  if (puVar1 <= puVar34) goto code_r0x0049c1a7;
  goto code_r0x0049bde0;
code_r0x0049be90:
  puVar42 = puVar42 + 1;
  puVar31 = puVar31 + 1;
  iVar17 = iVar17 + 8;
  if (puVar34 <= puVar42) goto code_r0x0049bea1;
  goto code_r0x0049be80;
code_r0x0049bfbb:
  puVar34 = puVar34 + 1;
  puVar31 = puVar31 + 1;
  iVar17 = iVar17 + 8;
  if (puVar1 <= puVar34) goto code_r0x0049bfcc;
  goto code_r0x0049bfb0;
code_r0x0049bad2:
  puVar23 = (ulong *)((long)puVar36 + 1);
  uVar41 = (int)puVar23 - iStack_88;
  puVar27 = (ulong *)((long)puVar36 + 2);
  if (puVar21 < puVar27) goto code_r0x0049c9f4;
  goto code_r0x0049baf9;
}


