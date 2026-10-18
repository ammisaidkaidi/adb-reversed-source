// Function: LZ4_compress_fast_extState
// Address: 004929e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_compress_fast_extState
              (ulong param_1,long *param_2,char *param_3,uint param_4,int param_5,uint param_6)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  int iVar26;
  long *plVar27;
  ulong uVar28;
  int iVar29;
  ulong *puVar30;
  long *plVar31;
  long lVar32;
  ulong *puVar33;
  long *plVar34;
  int iVar35;
  uint uVar36;
  ulong *puVar37;
  ulong uVar38;
  char *pcStack_40;
  int iStack_38;
  
  uVar19 = (ulong)param_4;
  iVar35 = 0;
  if ((param_1 & 7) == 0 && param_1 != 0) {
    func_0x0099bdb0(param_1,0,0x4020);
  }
  else {
    param_1 = 0;
  }
  uVar18 = 1;
  if (1 < (int)param_6) {
    uVar18 = param_6;
  }
  uVar17 = 0x10001;
  if ((int)uVar18 < 0x10001) {
    uVar17 = uVar18;
  }
  if (param_4 < 0x7e000001) {
    iVar35 = param_4 + param_4 / 0xff + 0x10;
  }
  iVar29 = (int)param_3;
  if (param_5 < iVar35) {
    if (0x1000a < (int)param_4) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      uVar18 = *(uint *)(param_1 + 0x4010);
      lVar14 = (long)param_2 - (ulong)uVar18;
      plVar13 = (long *)((long)param_2 + (uVar19 - 0xb));
      pcVar23 = param_3 + param_5;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = param_4 + uVar18;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar18;
      puVar30 = (ulong *)((long)param_2 + (uVar19 - 0xc));
      plVar34 = (long *)((long)param_2 + 2);
      plVar27 = (long *)((long)param_2 + 1);
      plVar15 = param_2;
code_r0x00493178:
      lVar32 = *plVar27;
      uVar12 = uVar17;
      uVar36 = uVar17 * 0x40;
      while( true ) {
        uVar36 = uVar36 + 1;
        uVar20 = (ulong)(lVar32 * -0x30e4432345000000) >> 0x34;
        uVar10 = *(uint *)(param_1 + uVar20 * 4);
        uVar38 = (ulong)uVar10;
        iVar35 = (int)lVar14;
        uVar25 = (int)plVar27 - iVar35;
        lVar32 = *plVar34;
        *(uint *)(param_1 + uVar20 * 4) = uVar25;
        if ((uVar25 <= uVar10 + 0xffff) && (*(int *)(lVar14 + uVar38) == (int)*plVar27)) break;
        plVar31 = (long *)((ulong)uVar12 + (long)plVar34);
        uVar12 = uVar36 >> 6;
        plVar27 = plVar34;
        plVar34 = plVar31;
        if (plVar13 < plVar31) goto code_r0x004941e4;
      }
      plVar31 = (long *)(lVar14 + uVar38);
      plVar34 = plVar27;
      if ((uVar18 < uVar10) && (*(char *)((long)plVar27 + -1) == *(char *)((long)plVar31 + -1))) {
        plVar22 = (long *)((long)param_2 + uVar38 + ~(ulong)uVar18);
        plVar16 = (long *)((long)plVar27 + -1);
        plVar11 = (long *)((long)plVar27 + -1);
        do {
          plVar34 = plVar11;
          plVar27 = plVar16;
          plVar31 = plVar22;
          if ((plVar31 <= param_2) || (plVar27 <= plVar15)) break;
          plVar22 = (long *)((long)plVar31 + -1);
          plVar16 = (long *)((long)plVar27 + -1);
          plVar11 = (long *)((long)plVar34 + -1);
        } while (*(char *)((long)plVar27 + -1) == *(char *)((long)plVar31 + -1));
      }
      uVar38 = (long)plVar34 - (long)plVar15;
      uVar20 = uVar38 & 0xffffffff;
      if (pcVar23 < param_3 + uVar20 / 0xff + uVar20 + 9) {
        return 0;
      }
      plVar22 = (long *)(param_3 + 1);
      if ((uint)uVar38 < 0xf) {
        *param_3 = (char)uVar38 << 4;
      }
      else {
        uVar36 = (uint)uVar38 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar36) {
          iVar26 = (int)plVar34 - (int)plVar15;
          uVar36 = iVar26 - 0x10e;
          uVar38 = (ulong)uVar36 / 0xff;
          func_0x0099bdb0(plVar22,0xff,uVar38 + 1);
          plVar22 = (long *)(param_3 + uVar38 + 2);
          uVar36 = (iVar26 + uVar36 / 0xff) - 0x10e;
        }
        *(char *)plVar22 = (char)uVar36;
        plVar22 = (long *)((long)plVar22 + 1);
      }
      plVar34 = (long *)((long)plVar22 + uVar20);
      uVar38 = 8;
      if (8 < uVar20) {
        uVar38 = uVar20;
      }
      if ((0x18 < uVar20) && (0x1f < (ulong)((long)plVar22 - (long)plVar15))) {
        uVar38 = (uVar38 - 1 >> 3) + 1;
        uVar20 = uVar38 & 0x3ffffffffffffffc;
        uVar21 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar15 + uVar21);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar15 + uVar21 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar22 + uVar21);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar22 + uVar21 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar21 = uVar21 + 0x20;
        } while ((uVar38 * 8 & 0xffffffffffffffe0) != uVar21);
        plVar15 = plVar15 + uVar20;
        plVar22 = plVar22 + uVar20;
        if (uVar38 == uVar20) goto code_r0x00493380;
      }
      do {
        *plVar22 = *plVar15;
        plVar22 = plVar22 + 1;
        plVar15 = plVar15 + 1;
      } while (plVar22 < plVar34);
code_r0x00493380:
      do {
        *(short *)plVar34 = (short)plVar27 - (short)plVar31;
        puVar1 = (ulong *)((long)plVar27 + 4);
        puVar37 = (ulong *)((long)plVar31 + 4);
        puVar33 = puVar1;
        if (puVar1 < puVar30) {
          if (*puVar37 == *puVar1) {
            puVar37 = (ulong *)((long)plVar31 + 0xc);
            puVar33 = (ulong *)((long)plVar27 + 0xc);
            goto code_r0x004933af;
          }
          uVar36 = 0;
          for (uVar38 = *puVar1 ^ *puVar37; (uVar38 & 1) == 0;
              uVar38 = uVar38 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          uVar36 = uVar36 >> 3;
        }
        else {
code_r0x004933af:
          if (puVar33 < puVar30) {
            iVar26 = ((int)puVar33 - (int)plVar27) + -4;
code_r0x004933d0:
            if (*puVar37 == *puVar33) goto code_r0x004933db;
            uVar36 = 0;
            for (uVar38 = *puVar33 ^ *puVar37; (uVar38 & 1) == 0;
                uVar38 = uVar38 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            uVar36 = (uVar36 >> 3) + iVar26;
            goto code_r0x00493422;
          }
code_r0x0049357e:
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 8))) &&
             ((int)*puVar37 == (int)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 4);
            puVar37 = (ulong *)((long)puVar37 + 4);
          }
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 6))) &&
             ((short)*puVar37 == (short)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 2);
            puVar37 = (ulong *)((long)puVar37 + 2);
          }
          if (puVar33 < (ulong *)((long)param_2 + (uVar19 - 5))) {
            puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar37 == (char)*puVar33));
          }
          uVar36 = (int)puVar33 - (int)puVar1;
        }
code_r0x00493422:
        if (pcVar23 < (char *)((long)plVar34 + (ulong)(uVar36 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcVar24 = (char *)((long)plVar34 + 2);
        if (uVar36 < 0xf) {
          *param_3 = *param_3 + (char)uVar36;
          param_3 = pcVar24;
        }
        else {
          *param_3 = *param_3 + '\x0f';
          uVar12 = uVar36 - 0xf;
          pcVar24[0] = -1;
          pcVar24[1] = -1;
          pcVar24[2] = -1;
          pcVar24[3] = -1;
          if (0x3fb < uVar12) {
            uVar38 = (ulong)(((uVar36 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar34 + 6),0xff,uVar38 + 4);
            pcVar24 = (char *)((long)plVar34 + uVar38 + 6);
            uVar12 = (uVar36 - 0x40b) % 0x3fc;
          }
          uVar10 = uVar12 * 0x8081 >> 0x17;
          pcVar24[uVar10] = (char)uVar10 + (char)uVar12;
          param_3 = pcVar24 + (ulong)uVar10 + 1;
        }
        plVar15 = (long *)((long)plVar27 + (ulong)uVar36 + 4);
        if (plVar13 <= plVar15) goto code_r0x004941e4;
        lVar32 = (long)plVar27 + (ulong)uVar36;
        *(int *)(param_1 + ((ulong)(*(long *)(lVar32 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)lVar32 + 2) - iVar35;
        uVar38 = (ulong)(*(long *)(lVar32 + 4) * -0x30e4432345000000) >> 0x34;
        uVar12 = (int)plVar15 - iVar35;
        uVar36 = *(uint *)(param_1 + uVar38 * 4);
        *(uint *)(param_1 + uVar38 * 4) = uVar12;
        if ((uVar36 + 0xffff < uVar12) ||
           (plVar31 = (long *)((ulong)uVar36 + lVar14), (int)*plVar31 != (int)*plVar15))
        goto code_r0x00493150;
        plVar34 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar27 = plVar15;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar18 = *(uint *)(param_1 + 0x4010);
      uVar38 = (ulong)uVar18;
      pcVar23 = param_3 + param_5;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = uVar18 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      plVar34 = param_2;
      if (param_4 < 0xd) {
code_r0x0049412e:
        uVar19 = (long)param_2 + (uVar19 - (long)plVar34);
        if (param_3 + (uVar19 + 0xf0) / 0xff + uVar19 + 1 <= pcVar23) {
          if (uVar19 < 0xf) {
            *param_3 = (char)uVar19 << 4;
          }
          else {
            uVar38 = uVar19 - 0xf;
            *param_3 = -0x10;
            pcVar23 = param_3 + 1;
            if (0xfe < uVar38) {
              uVar38 = (uVar19 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar23,0xff,uVar38 + 1);
              pcVar23 = param_3 + uVar38 + 2;
              uVar38 = (uVar19 + uVar38 * -0xff) - 0x10e;
            }
            *pcVar23 = (char)uVar38;
            param_3 = pcVar23;
          }
          func_0x0099bda0(param_3 + 1,plVar34,uVar19);
          return ((int)(param_3 + 1) + (int)uVar19) - iVar29;
        }
        return 0;
      }
      lVar14 = (long)param_2 - uVar38;
      plVar27 = (long *)((long)param_2 + (uVar19 - 0xb));
      *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = (short)uVar18
      ;
      puVar30 = (ulong *)((long)param_2 + (uVar19 - 0xc));
      pcStack_40 = param_3;
code_r0x00493768:
      iVar35 = *(int *)((long)plVar34 + 1);
      uVar20 = 1;
      plVar15 = (long *)((long)plVar34 + 1);
      uVar18 = uVar17 << 6;
      do {
        plVar13 = plVar15;
        plVar15 = (long *)(uVar20 + (long)plVar13);
        param_3 = pcStack_40;
        if (plVar27 < plVar15) goto code_r0x0049412e;
        uVar20 = (ulong)(uVar18 >> 6);
        uVar18 = uVar18 + 1;
        uVar28 = (ulong)((uint)(iVar35 * -0x61c8864f) >> 0x13);
        uVar21 = (ulong)*(ushort *)(param_1 + uVar28 * 2);
        sVar4 = (short)lVar14;
        iVar35 = (int)*plVar15;
        *(short *)(param_1 + uVar28 * 2) = (short)plVar13 - sVar4;
      } while (*(int *)(lVar14 + uVar21) != (int)*plVar13);
      plVar15 = (long *)(lVar14 + uVar21);
      plVar31 = plVar13;
      if ((uVar38 < uVar21) && (*(char *)((long)plVar13 + -1) == *(char *)((long)plVar15 + -1))) {
        plVar22 = (long *)((long)param_2 + uVar21 + ~uVar38);
        plVar16 = (long *)((long)plVar13 + -1);
        plVar11 = (long *)((long)plVar13 + -1);
        do {
          plVar13 = plVar11;
          plVar31 = plVar16;
          plVar15 = plVar22;
          if ((plVar15 <= param_2) || (plVar31 <= plVar34)) break;
          plVar22 = (long *)((long)plVar15 + -1);
          plVar16 = (long *)((long)plVar31 + -1);
          plVar11 = (long *)((long)plVar13 + -1);
        } while (*(char *)((long)plVar31 + -1) == *(char *)((long)plVar15 + -1));
      }
      uVar20 = (long)plVar13 - (long)plVar34;
      uVar21 = uVar20 & 0xffffffff;
      if (pcVar23 < pcStack_40 + uVar21 / 0xff + uVar21 + 9) {
        return 0;
      }
      plVar22 = (long *)(pcStack_40 + 1);
      if ((uint)uVar20 < 0xf) {
        *pcStack_40 = (char)uVar20 << 4;
      }
      else {
        uVar18 = (uint)uVar20 - 0xf;
        *pcStack_40 = -0x10;
        if (0xfe < uVar18) {
          iVar35 = (int)plVar13 - (int)plVar34;
          uVar18 = iVar35 - 0x10e;
          uVar20 = (ulong)uVar18 / 0xff;
          func_0x0099bdb0(plVar22,0xff,uVar20 + 1);
          plVar22 = (long *)(pcStack_40 + uVar20 + 2);
          uVar18 = (iVar35 + uVar18 / 0xff) - 0x10e;
        }
        *(char *)plVar22 = (char)uVar18;
        plVar22 = (long *)((long)plVar22 + 1);
      }
      plVar13 = (long *)((long)plVar22 + uVar21);
      uVar20 = 8;
      if (8 < uVar21) {
        uVar20 = uVar21;
      }
      if ((0x18 < uVar21) && (0x1f < (ulong)((long)plVar22 - (long)plVar34))) {
        uVar20 = (uVar20 - 1 >> 3) + 1;
        uVar21 = uVar20 & 0xfffffffffffffffc;
        uVar28 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar34 + uVar28);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar34 + uVar28 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar22 + uVar28);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar22 + uVar28 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar28 = uVar28 + 0x20;
        } while ((uVar20 * 8 & 0xffffffffffffffe0) != uVar28);
        plVar34 = plVar34 + uVar21;
        plVar22 = plVar22 + uVar21;
        if (uVar20 == uVar21) goto code_r0x00493960;
      }
      do {
        *plVar22 = *plVar34;
        plVar22 = plVar22 + 1;
        plVar34 = plVar34 + 1;
      } while (plVar22 < plVar13);
code_r0x00493960:
      do {
        *(short *)plVar13 = (short)plVar31 - (short)plVar15;
        puVar1 = (ulong *)((long)plVar31 + 4);
        puVar37 = (ulong *)((long)plVar15 + 4);
        puVar33 = puVar1;
        if (puVar1 < puVar30) {
          if (*puVar37 == *puVar1) {
            puVar37 = (ulong *)((long)plVar15 + 0xc);
            puVar33 = (ulong *)((long)plVar31 + 0xc);
            goto code_r0x0049399a;
          }
          uVar18 = 0;
          for (uVar20 = *puVar1 ^ *puVar37; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar18 = uVar18 + 1;
          }
          uVar18 = uVar18 >> 3;
        }
        else {
code_r0x0049399a:
          if (puVar33 < puVar30) {
            iVar35 = ((int)puVar33 - (int)plVar31) + -4;
code_r0x004939b0:
            if (*puVar37 == *puVar33) goto code_r0x004939bb;
            uVar18 = 0;
            for (uVar20 = *puVar33 ^ *puVar37; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar18 = uVar18 + 1;
            }
            uVar18 = (uVar18 >> 3) + iVar35;
            goto code_r0x00493a3e;
          }
code_r0x004939cb:
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 8))) &&
             ((int)*puVar37 == (int)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 4);
            puVar37 = (ulong *)((long)puVar37 + 4);
          }
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 6))) &&
             ((short)*puVar37 == (short)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 2);
            puVar37 = (ulong *)((long)puVar37 + 2);
          }
          if (puVar33 < (ulong *)((long)param_2 + (uVar19 - 5))) {
            puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar37 == (char)*puVar33));
          }
          uVar18 = (int)puVar33 - (int)puVar1;
        }
code_r0x00493a3e:
        if (pcVar23 < (char *)((long)plVar13 + (ulong)(uVar18 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        param_3 = (char *)((long)plVar13 + 2);
        if (uVar18 < 0xf) {
          *pcStack_40 = *pcStack_40 + (char)uVar18;
        }
        else {
          *pcStack_40 = *pcStack_40 + '\x0f';
          uVar36 = uVar18 - 0xf;
          param_3[0] = -1;
          param_3[1] = -1;
          param_3[2] = -1;
          param_3[3] = -1;
          if (0x3fb < uVar36) {
            uVar20 = (ulong)(((uVar18 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar20 + 4);
            param_3 = (char *)((long)plVar13 + uVar20 + 6);
            uVar36 = (uVar18 - 0x40b) % 0x3fc;
          }
          uVar12 = uVar36 * 0x8081 >> 0x17;
          param_3[uVar12] = (char)uVar12 + (char)uVar36;
          param_3 = param_3 + (ulong)uVar12 + 1;
        }
        plVar34 = (long *)((long)plVar31 + (ulong)uVar18 + 4);
        if (plVar27 <= plVar34) goto code_r0x0049412e;
        lVar32 = (long)plVar31 + (ulong)uVar18;
        *(short *)(param_1 + (ulong)((uint)(*(int *)(lVar32 + 2) * -0x61c8864f) >> 0x13) * 2) =
             ((short)lVar32 + 2) - sVar4;
        uVar20 = (ulong)((uint)(*(int *)(lVar32 + 4) * -0x61c8864f) >> 0x13);
        uVar21 = (ulong)*(ushort *)(param_1 + uVar20 * 2);
        plVar15 = (long *)(lVar14 + uVar21);
        *(short *)(param_1 + uVar20 * 2) = (short)plVar34 - sVar4;
        pcStack_40 = param_3;
        if (*(int *)(lVar14 + uVar21) != *(int *)(lVar32 + 4)) goto code_r0x00493768;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar31 = plVar34;
      } while( true );
    }
    if (param_5 < 1) {
      return 0;
    }
  }
  else {
    if (0x1000a < (int)param_4) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      uVar18 = *(uint *)(param_1 + 0x4010);
      lVar14 = (long)param_2 - (ulong)uVar18;
      plVar15 = (long *)((long)param_2 + (uVar19 - 0xb));
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = param_4 + uVar18;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar18;
      plVar34 = (long *)((long)param_2 + 2);
      puVar30 = (ulong *)((long)param_2 + (uVar19 - 0xc));
      plVar27 = param_2;
code_r0x00492d1f:
      lVar32 = *(long *)((long)plVar27 + 1);
      plVar13 = (long *)((long)plVar27 + 1);
      uVar36 = uVar17 * 0x40;
      uVar12 = uVar17;
      while( true ) {
        plVar31 = plVar34;
        uVar20 = (ulong)uVar12;
        uVar36 = uVar36 + 1;
        uVar21 = (ulong)(lVar32 * -0x30e4432345000000) >> 0x34;
        uVar12 = *(uint *)(param_1 + uVar21 * 4);
        uVar38 = (ulong)uVar12;
        iVar35 = (int)lVar14;
        uVar10 = (int)plVar13 - iVar35;
        lVar32 = *plVar31;
        *(uint *)(param_1 + uVar21 * 4) = uVar10;
        if ((uVar10 <= uVar12 + 0xffff) && (*(int *)(lVar14 + uVar38) == (int)*plVar13)) break;
        uVar12 = uVar36 >> 6;
        plVar34 = (long *)(uVar20 + (long)plVar31);
        plVar13 = plVar31;
        if (plVar15 < (long *)(uVar20 + (long)plVar31)) goto code_r0x00493622;
      }
      plVar34 = (long *)(lVar14 + uVar38);
      plVar31 = plVar13;
      if ((uVar18 < uVar12) && (*(char *)((long)plVar13 - 1) == *(char *)((long)plVar34 + -1))) {
        plVar22 = (long *)((long)param_2 + uVar38 + ~(ulong)uVar18);
        plVar16 = (long *)((long)plVar13 - 1U);
        plVar11 = (long *)((long)plVar13 - 1U);
        do {
          plVar13 = plVar11;
          plVar31 = plVar16;
          plVar34 = plVar22;
          if ((plVar34 <= param_2) || (plVar31 <= plVar27)) break;
          plVar22 = (long *)((long)plVar34 + -1);
          plVar16 = (long *)((long)plVar31 + -1);
          plVar11 = (long *)((long)plVar13 - 1);
        } while (*(char *)((long)plVar31 + -1) == *(char *)((long)plVar34 + -1));
      }
      uVar38 = (long)plVar13 - (long)plVar27;
      plVar22 = (long *)(param_3 + 1);
      if ((uint)uVar38 < 0xf) {
        *param_3 = (char)uVar38 << 4;
      }
      else {
        uVar36 = (uint)uVar38 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar36) {
          iVar26 = (int)plVar13 - (int)plVar27;
          uVar20 = (ulong)(iVar26 - 0x10e) / 0xff;
          func_0x0099bdb0(plVar22,0xff,uVar20 + 1);
          plVar22 = (long *)(param_3 + uVar20 + 2);
          uVar36 = (iVar26 + (int)uVar20 * -0xff) - 0x10e;
        }
        *(char *)plVar22 = (char)uVar36;
        plVar22 = (long *)((long)plVar22 + 1);
      }
      uVar38 = uVar38 & 0xffffffff;
      plVar13 = (long *)((long)plVar22 + uVar38);
      uVar20 = 8;
      if (8 < uVar38) {
        uVar20 = uVar38;
      }
      if ((0x18 < uVar38) && (0x1f < (ulong)((long)plVar22 - (long)plVar27))) {
        uVar38 = (uVar20 - 1 >> 3) + 1;
        uVar20 = uVar38 & 0x3ffffffffffffffc;
        uVar21 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar27 + uVar21);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar27 + uVar21 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar23 = (char *)((long)plVar22 + uVar21);
          *(undefined4 *)pcVar23 = *puVar2;
          *(undefined4 *)(pcVar23 + 4) = uVar5;
          *(undefined4 *)(pcVar23 + 8) = uVar6;
          *(undefined4 *)(pcVar23 + 0xc) = uVar7;
          pcVar23 = (char *)((long)plVar22 + uVar21 + 0x10);
          *(undefined8 *)pcVar23 = uVar8;
          *(undefined8 *)(pcVar23 + 8) = uVar9;
          uVar21 = uVar21 + 0x20;
        } while ((uVar38 * 8 & 0xffffffffffffffe0) != uVar21);
        plVar27 = plVar27 + uVar20;
        plVar22 = plVar22 + uVar20;
        if (uVar38 == uVar20) goto code_r0x00492ee0;
      }
      do {
        *plVar22 = *plVar27;
        plVar22 = plVar22 + 1;
        plVar27 = plVar27 + 1;
      } while (plVar22 < plVar13);
code_r0x00492ee0:
      do {
        *(short *)plVar13 = (short)plVar31 - (short)plVar34;
        pcVar23 = (char *)((long)plVar13 + 2);
        puVar1 = (ulong *)((long)plVar31 + 4);
        puVar37 = (ulong *)((long)plVar34 + 4);
        puVar33 = puVar1;
        if (puVar1 < puVar30) {
          if (*puVar37 == *puVar1) {
            puVar37 = (ulong *)((long)plVar34 + 0xc);
            puVar33 = (ulong *)((long)plVar31 + 0xc);
            goto code_r0x00492f19;
          }
          uVar36 = 0;
          for (uVar38 = *puVar1 ^ *puVar37; (uVar38 & 1) == 0;
              uVar38 = uVar38 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          uVar38 = (ulong)(uVar36 >> 3);
          plVar27 = (long *)((long)plVar31 + uVar38 + 4);
code_r0x00493090:
          *param_3 = *param_3 + (char)uVar38;
          param_3 = pcVar23;
        }
        else {
code_r0x00492f19:
          if (puVar33 < puVar30) {
code_r0x00492f30:
            if (*puVar37 == *puVar33) goto code_r0x00492f3f;
            uVar36 = 0;
            for (uVar38 = *puVar33 ^ *puVar37; (uVar38 & 1) == 0;
                uVar38 = uVar38 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            puVar33 = (ulong *)((long)puVar33 + (ulong)(uVar36 >> 3));
            goto code_r0x00492fde;
          }
code_r0x00492f4c:
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 8))) &&
             ((int)*puVar37 == (int)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 4);
            puVar37 = (ulong *)((long)puVar37 + 4);
          }
          if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 6))) &&
             ((short)*puVar37 == (short)*puVar33)) {
            puVar33 = (ulong *)((long)puVar33 + 2);
            puVar37 = (ulong *)((long)puVar37 + 2);
          }
          if (puVar33 < (ulong *)((long)param_2 + (uVar19 - 5))) {
            puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar37 == (char)*puVar33));
          }
code_r0x00492fde:
          uVar38 = (long)puVar33 - (long)puVar1;
          uVar36 = (uint)uVar38;
          plVar27 = (long *)((long)plVar31 + (uVar38 & 0xffffffff) + 4);
          if (uVar36 < 0xf) goto code_r0x00493090;
          *param_3 = *param_3 + '\x0f';
          uVar12 = uVar36 - 0xf;
          pcVar23[0] = -1;
          pcVar23[1] = -1;
          pcVar23[2] = -1;
          pcVar23[3] = -1;
          if (0x3fb < uVar12) {
            uVar38 = (ulong)(((uVar36 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar38 + 4);
            pcVar23 = (char *)((long)plVar13 + uVar38 + 6);
            uVar12 = (uVar36 - 0x40b) % 0x3fc;
          }
          uVar36 = uVar12 * 0x8081 >> 0x17;
          pcVar23[uVar36] = (char)uVar36 + (char)uVar12;
          param_3 = pcVar23 + (ulong)uVar36 + 1;
        }
        if (plVar15 <= plVar27) goto code_r0x00493622;
        *(int *)(param_1 +
                ((ulong)(*(long *)((long)plVar27 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)plVar27 + -2) - iVar35;
        uVar38 = (ulong)(*plVar27 * -0x30e4432345000000) >> 0x34;
        uVar12 = (int)plVar27 - iVar35;
        uVar36 = *(uint *)(param_1 + uVar38 * 4);
        *(uint *)(param_1 + uVar38 * 4) = uVar12;
        if ((uVar36 + 0xffff < uVar12) ||
           (plVar34 = (long *)((ulong)uVar36 + lVar14), (int)*plVar34 != (int)*plVar27))
        goto code_r0x00492d00;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar31 = plVar27;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar18 = *(uint *)(param_1 + 0x4010);
      uVar38 = (ulong)uVar18;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = uVar18 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      plVar34 = param_2;
      if (param_4 < 0xd) {
code_r0x00494084:
        uVar19 = (long)param_2 + (uVar19 - (long)plVar34);
        if (uVar19 < 0xf) {
          *param_3 = (char)uVar19 << 4;
        }
        else {
          uVar38 = uVar19 - 0xf;
          *param_3 = -0x10;
          pcVar23 = param_3 + 1;
          if (0xfe < uVar38) {
            uVar38 = (uVar19 - 0x10e) / 0xff;
            func_0x0099bdb0(pcVar23,0xff,uVar38 + 1);
            pcVar23 = param_3 + uVar38 + 2;
            uVar38 = (uVar19 + uVar38 * -0xff) - 0x10e;
          }
          *pcVar23 = (char)uVar38;
          param_3 = pcVar23;
        }
        func_0x0099bda0(param_3 + 1,plVar34,uVar19);
        return ((int)(param_3 + 1) + (int)uVar19) - iVar29;
      }
      lVar14 = (long)param_2 - uVar38;
      plVar27 = (long *)((long)param_2 + (uVar19 - 0xb));
      *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = (short)uVar18
      ;
      puVar30 = (ulong *)((long)param_2 + (uVar19 - 0xc));
code_r0x00493c7b:
      iVar35 = *(int *)((long)plVar34 + 1);
      uVar20 = 1;
      plVar15 = (long *)((long)plVar34 + 1);
      uVar18 = uVar17 << 6;
      do {
        plVar13 = plVar15;
        plVar15 = (long *)(uVar20 + (long)plVar13);
        if (plVar27 < plVar15) goto code_r0x00494084;
        uVar20 = (ulong)(uVar18 >> 6);
        uVar18 = uVar18 + 1;
        uVar28 = (ulong)((uint)(iVar35 * -0x61c8864f) >> 0x13);
        uVar21 = (ulong)*(ushort *)(param_1 + uVar28 * 2);
        sVar4 = (short)lVar14;
        iVar35 = (int)*plVar15;
        *(short *)(param_1 + uVar28 * 2) = (short)plVar13 - sVar4;
      } while (*(int *)(lVar14 + uVar21) != (int)*plVar13);
      plVar15 = (long *)(lVar14 + uVar21);
      plVar31 = plVar13;
      if ((uVar38 < uVar21) && (*(char *)((long)plVar13 + -1) == *(char *)((long)plVar15 + -1))) {
        plVar22 = (long *)((long)param_2 + uVar21 + ~uVar38);
        plVar16 = (long *)((long)plVar13 + -1);
        plVar11 = (long *)((long)plVar13 + -1);
        do {
          plVar13 = plVar11;
          plVar31 = plVar16;
          plVar15 = plVar22;
          if ((plVar15 <= param_2) || (plVar31 <= plVar34)) break;
          plVar22 = (long *)((long)plVar15 + -1);
          plVar16 = (long *)((long)plVar31 + -1);
          plVar11 = (long *)((long)plVar13 + -1);
        } while (*(char *)((long)plVar31 + -1) == *(char *)((long)plVar15 + -1));
      }
      uVar20 = (long)plVar13 - (long)plVar34;
      plVar22 = (long *)(param_3 + 1);
      if ((uint)uVar20 < 0xf) {
        *param_3 = (char)uVar20 << 4;
      }
      else {
        uVar18 = (uint)uVar20 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar18) {
          iStack_38 = (int)plVar34;
          iStack_38 = (int)plVar13 - iStack_38;
          uVar18 = iStack_38 - 0x10e;
          uVar21 = (ulong)uVar18 / 0xff;
          func_0x0099bdb0(plVar22,0xff,uVar21 + 1);
          plVar22 = (long *)(param_3 + uVar21 + 2);
          uVar18 = (iStack_38 + uVar18 / 0xff) - 0x10e;
        }
        *(char *)plVar22 = (char)uVar18;
        plVar22 = (long *)((long)plVar22 + 1);
      }
      uVar20 = uVar20 & 0xffffffff;
      plVar13 = (long *)((long)plVar22 + uVar20);
      uVar21 = 8;
      if (8 < uVar20) {
        uVar21 = uVar20;
      }
      plVar11 = plVar34;
      plVar16 = plVar22;
      pcVar23 = param_3;
      if ((0x18 < uVar20) && (0x1f < (ulong)((long)plVar22 - (long)plVar34))) {
        uVar20 = (uVar21 - 1 >> 3) + 1;
        uVar21 = uVar20 & 0xfffffffffffffffc;
        plVar11 = plVar34 + uVar21;
        plVar16 = plVar22 + uVar21;
        uVar28 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar34 + uVar28);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar34 + uVar28 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar22 + uVar28);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar22 + uVar28 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar28 = uVar28 + 0x20;
        } while ((uVar20 * 8 & 0xffffffffffffffe0) != uVar28);
        if (uVar20 == uVar21) goto code_r0x00493e30;
      }
      do {
        *plVar16 = *plVar11;
        plVar16 = plVar16 + 1;
        plVar11 = plVar11 + 1;
      } while (plVar16 < plVar13);
code_r0x00493e30:
      do {
        *(short *)plVar13 = (short)plVar31 - (short)plVar15;
        param_3 = (char *)((long)plVar13 + 2);
        puVar1 = (ulong *)((long)plVar31 + 4);
        puVar37 = (ulong *)((long)plVar15 + 4);
        puVar33 = puVar1;
        if (puVar1 < puVar30) {
          if (*puVar37 == *puVar1) {
            puVar37 = (ulong *)((long)plVar15 + 0xc);
            puVar33 = (ulong *)((long)plVar31 + 0xc);
            goto code_r0x00493e70;
          }
          uVar18 = 0;
          for (uVar20 = *puVar1 ^ *puVar37; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar18 = uVar18 + 1;
          }
          uVar20 = (ulong)(uVar18 >> 3);
          plVar34 = (long *)((long)plVar31 + uVar20 + 4);
code_r0x00493f60:
          *pcVar23 = *pcVar23 + (char)uVar20;
        }
        else {
code_r0x00493e70:
          if (puVar33 < puVar30) {
            if (*puVar37 == *puVar33) goto code_r0x00493e85;
            uVar18 = 0;
            for (uVar20 = *puVar33 ^ *puVar37; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar18 = uVar18 + 1;
            }
            puVar33 = (ulong *)((long)puVar33 + (ulong)(uVar18 >> 3));
          }
          else {
            if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 8))) &&
               ((int)*puVar37 == (int)*puVar33)) {
              puVar33 = (ulong *)((long)puVar33 + 4);
              puVar37 = (ulong *)((long)puVar37 + 4);
            }
            if ((puVar33 < (ulong *)((long)param_2 + (uVar19 - 6))) &&
               ((short)*puVar37 == (short)*puVar33)) {
              puVar33 = (ulong *)((long)puVar33 + 2);
              puVar37 = (ulong *)((long)puVar37 + 2);
            }
            if (puVar33 < (ulong *)((long)param_2 + (uVar19 - 5))) {
              puVar33 = (ulong *)((long)puVar33 + (ulong)((char)*puVar37 == (char)*puVar33));
            }
          }
          uVar20 = (long)puVar33 - (long)puVar1;
          uVar18 = (uint)uVar20;
          plVar34 = (long *)((long)plVar31 + (uVar20 & 0xffffffff) + 4);
          if (uVar18 < 0xf) goto code_r0x00493f60;
          *pcVar23 = *pcVar23 + '\x0f';
          uVar36 = uVar18 - 0xf;
          param_3[0] = -1;
          param_3[1] = -1;
          param_3[2] = -1;
          param_3[3] = -1;
          if (0x3fb < uVar36) {
            uVar20 = (ulong)(((uVar18 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar20 + 4);
            param_3 = (char *)((long)plVar13 + uVar20 + 6);
            uVar36 = (uVar18 - 0x40b) % 0x3fc;
          }
          uVar18 = uVar36 * 0x8081 >> 0x17;
          param_3[uVar18] = (char)uVar18 + (char)uVar36;
          param_3 = param_3 + (ulong)uVar18 + 1;
        }
        if (plVar27 <= plVar34) goto code_r0x00494084;
        *(short *)(param_1 + (ulong)((uint)(*(int *)((long)plVar34 + -2) * -0x61c8864f) >> 0x13) * 2
                  ) = ((short)plVar34 + -2) - sVar4;
        uVar20 = (ulong)((uint)((int)*plVar34 * -0x61c8864f) >> 0x13);
        uVar21 = (ulong)*(ushort *)(param_1 + uVar20 * 2);
        plVar15 = (long *)(lVar14 + uVar21);
        *(short *)(param_1 + uVar20 * 2) = (short)plVar34 - sVar4;
        if (*(int *)(lVar14 + uVar21) != (int)*plVar34) goto code_r0x00493c7b;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        pcVar23 = param_3;
        plVar31 = plVar34;
      } while( true );
    }
  }
  *param_3 = '\0';
  return 1;
code_r0x00492f3f:
  puVar33 = puVar33 + 1;
  puVar37 = puVar37 + 1;
  if (puVar30 <= puVar33) goto code_r0x00492f4c;
  goto code_r0x00492f30;
code_r0x00492d00:
  plVar34 = (long *)((long)plVar27 + 2);
  if (plVar15 < plVar34) {
code_r0x00493622:
    uVar19 = (long)param_2 + (uVar19 - (long)plVar27);
    if (uVar19 < 0xf) {
      *param_3 = (char)uVar19 << 4;
    }
    else {
      uVar38 = uVar19 - 0xf;
      *param_3 = -0x10;
      pcVar23 = param_3 + 1;
      if (0xfe < uVar38) {
        uVar38 = (uVar19 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar23,0xff,uVar38 + 1);
        pcVar23 = param_3 + uVar38 + 2;
        uVar38 = (uVar38 * -0xff + uVar19) - 0x10e;
      }
      *pcVar23 = (char)uVar38;
      param_3 = pcVar23;
    }
    func_0x0099bda0(param_3 + 1,plVar27,uVar19);
    return ((int)(param_3 + 1) + (int)uVar19) - iVar29;
  }
  goto code_r0x00492d1f;
code_r0x00493e85:
  puVar37 = puVar37 + 1;
  puVar33 = puVar33 + 1;
  goto code_r0x00493e70;
code_r0x004939bb:
  puVar33 = puVar33 + 1;
  puVar37 = puVar37 + 1;
  iVar35 = iVar35 + 8;
  if (puVar30 <= puVar33) goto code_r0x004939cb;
  goto code_r0x004939b0;
code_r0x004933db:
  puVar33 = puVar33 + 1;
  puVar37 = puVar37 + 1;
  iVar26 = iVar26 + 8;
  if (puVar30 <= puVar33) goto code_r0x0049357e;
  goto code_r0x004933d0;
code_r0x00493150:
  plVar27 = (long *)(lVar32 + 5);
  plVar34 = (long *)(lVar32 + 6);
  if (plVar13 < plVar34) {
code_r0x004941e4:
    uVar19 = (long)param_2 + (uVar19 - (long)plVar15);
    if (pcVar23 < param_3 + (uVar19 + 0xf0) / 0xff + uVar19 + 1) {
      return 0;
    }
    if (uVar19 < 0xf) {
      *param_3 = (char)uVar19 << 4;
    }
    else {
      uVar38 = uVar19 - 0xf;
      *param_3 = -0x10;
      pcVar23 = param_3 + 1;
      if (0xfe < uVar38) {
        uVar38 = (uVar19 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar23,0xff,uVar38 + 1);
        pcVar23 = param_3 + uVar38 + 2;
        uVar38 = (uVar19 + uVar38 * -0xff) - 0x10e;
      }
      *pcVar23 = (char)uVar38;
      param_3 = pcVar23;
    }
    func_0x0099bda0(param_3 + 1,plVar15,uVar19);
    return ((int)(param_3 + 1) + (int)uVar19) - iVar29;
  }
  goto code_r0x00493178;
}


