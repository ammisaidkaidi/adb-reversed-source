// Function: LZ4_compress_withState
// Address: 004a4ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00492a45) */

int LZ4_compress_withState(ulong param_1,long *param_2,char *param_3,uint param_4)

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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  int iVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  int iVar28;
  ulong *puVar29;
  long *plVar30;
  long lVar31;
  ulong *puVar32;
  long *plVar33;
  int iVar34;
  uint uVar35;
  ulong *puVar36;
  ulong uVar37;
  char *pcStack_40;
  int iStack_38;
  
  iVar22 = 0;
  if (param_4 < 0x7e000001) {
    iVar22 = param_4 / 0xff + param_4 + 0x10;
  }
  uVar18 = (ulong)param_4;
  iVar34 = 0;
  if ((param_1 & 7) == 0 && param_1 != 0) {
    func_0x0099bdb0(param_1,0,0x4020);
  }
  else {
    param_1 = 0;
  }
  if (param_4 < 0x7e000001) {
    iVar34 = param_4 + param_4 / 0xff + 0x10;
  }
  iVar28 = (int)param_3;
  if (iVar22 < iVar34) {
    if (0x1000a < (int)param_4) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      uVar17 = *(uint *)(param_1 + 0x4010);
      lVar14 = (long)param_2 - (ulong)uVar17;
      plVar13 = (long *)((long)param_2 + (uVar18 - 0xb));
      pcVar23 = param_3 + iVar22;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = param_4 + uVar17;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar17;
      puVar29 = (ulong *)((long)param_2 + (uVar18 - 0xc));
      plVar33 = (long *)((long)param_2 + 2);
      plVar26 = (long *)((long)param_2 + 1);
      plVar15 = param_2;
code_r0x00493178:
      uVar35 = 1;
      lVar31 = *plVar26;
      uVar12 = 0x41;
      while( true ) {
        uVar19 = (ulong)(lVar31 * -0x30e4432345000000) >> 0x34;
        uVar10 = *(uint *)(param_1 + uVar19 * 4);
        uVar37 = (ulong)uVar10;
        iVar22 = (int)lVar14;
        uVar25 = (int)plVar26 - iVar22;
        lVar31 = *plVar33;
        *(uint *)(param_1 + uVar19 * 4) = uVar25;
        if ((uVar25 <= uVar10 + 0xffff) && (*(int *)(lVar14 + uVar37) == (int)*plVar26)) break;
        plVar30 = (long *)((ulong)uVar35 + (long)plVar33);
        uVar35 = uVar12 >> 6;
        plVar26 = plVar33;
        plVar33 = plVar30;
        uVar12 = uVar12 + 1;
        if (plVar13 < plVar30) goto code_r0x004941e4;
      }
      plVar30 = (long *)(lVar14 + uVar37);
      plVar33 = plVar26;
      if ((uVar17 < uVar10) && (*(char *)((long)plVar26 + -1) == *(char *)((long)plVar30 + -1))) {
        plVar21 = (long *)((long)param_2 + uVar37 + ~(ulong)uVar17);
        plVar16 = (long *)((long)plVar26 + -1);
        plVar11 = (long *)((long)plVar26 + -1);
        do {
          plVar33 = plVar11;
          plVar26 = plVar16;
          plVar30 = plVar21;
          if ((plVar30 <= param_2) || (plVar26 <= plVar15)) break;
          plVar21 = (long *)((long)plVar30 + -1);
          plVar16 = (long *)((long)plVar26 + -1);
          plVar11 = (long *)((long)plVar33 + -1);
        } while (*(char *)((long)plVar26 + -1) == *(char *)((long)plVar30 + -1));
      }
      uVar37 = (long)plVar33 - (long)plVar15;
      uVar19 = uVar37 & 0xffffffff;
      if (pcVar23 < param_3 + uVar19 / 0xff + uVar19 + 9) {
        return 0;
      }
      plVar21 = (long *)(param_3 + 1);
      if ((uint)uVar37 < 0xf) {
        *param_3 = (char)uVar37 << 4;
      }
      else {
        uVar35 = (uint)uVar37 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar35) {
          iVar34 = (int)plVar33 - (int)plVar15;
          uVar35 = iVar34 - 0x10e;
          uVar37 = (ulong)uVar35 / 0xff;
          func_0x0099bdb0(plVar21,0xff,uVar37 + 1);
          plVar21 = (long *)(param_3 + uVar37 + 2);
          uVar35 = (iVar34 + uVar35 / 0xff) - 0x10e;
        }
        *(char *)plVar21 = (char)uVar35;
        plVar21 = (long *)((long)plVar21 + 1);
      }
      plVar33 = (long *)((long)plVar21 + uVar19);
      uVar37 = 8;
      if (8 < uVar19) {
        uVar37 = uVar19;
      }
      if ((0x18 < uVar19) && (0x1f < (ulong)((long)plVar21 - (long)plVar15))) {
        uVar37 = (uVar37 - 1 >> 3) + 1;
        uVar19 = uVar37 & 0x3ffffffffffffffc;
        uVar20 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar15 + uVar20);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar15 + uVar20 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar21 + uVar20);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar21 + uVar20 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar20 = uVar20 + 0x20;
        } while ((uVar37 * 8 & 0xffffffffffffffe0) != uVar20);
        plVar15 = plVar15 + uVar19;
        plVar21 = plVar21 + uVar19;
        if (uVar37 == uVar19) goto code_r0x00493380;
      }
      do {
        *plVar21 = *plVar15;
        plVar21 = plVar21 + 1;
        plVar15 = plVar15 + 1;
      } while (plVar21 < plVar33);
code_r0x00493380:
      do {
        *(short *)plVar33 = (short)plVar26 - (short)plVar30;
        puVar1 = (ulong *)((long)plVar26 + 4);
        puVar36 = (ulong *)((long)plVar30 + 4);
        puVar32 = puVar1;
        if (puVar1 < puVar29) {
          if (*puVar36 == *puVar1) {
            puVar36 = (ulong *)((long)plVar30 + 0xc);
            puVar32 = (ulong *)((long)plVar26 + 0xc);
            goto code_r0x004933af;
          }
          uVar35 = 0;
          for (uVar37 = *puVar1 ^ *puVar36; (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x8000000000000000) {
            uVar35 = uVar35 + 1;
          }
          uVar35 = uVar35 >> 3;
        }
        else {
code_r0x004933af:
          if (puVar32 < puVar29) {
            iVar34 = ((int)puVar32 - (int)plVar26) + -4;
code_r0x004933d0:
            if (*puVar36 == *puVar32) goto code_r0x004933db;
            uVar35 = 0;
            for (uVar37 = *puVar32 ^ *puVar36; (uVar37 & 1) == 0;
                uVar37 = uVar37 >> 1 | 0x8000000000000000) {
              uVar35 = uVar35 + 1;
            }
            uVar35 = (uVar35 >> 3) + iVar34;
            goto code_r0x00493422;
          }
code_r0x0049357e:
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
             ((int)*puVar36 == (int)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 4);
            puVar36 = (ulong *)((long)puVar36 + 4);
          }
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
             ((short)*puVar36 == (short)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 2);
            puVar36 = (ulong *)((long)puVar36 + 2);
          }
          if (puVar32 < (ulong *)((long)param_2 + (uVar18 - 5))) {
            puVar32 = (ulong *)((long)puVar32 + (ulong)((char)*puVar36 == (char)*puVar32));
          }
          uVar35 = (int)puVar32 - (int)puVar1;
        }
code_r0x00493422:
        if (pcVar23 < (char *)((long)plVar33 + (ulong)(uVar35 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcVar24 = (char *)((long)plVar33 + 2);
        if (uVar35 < 0xf) {
          *param_3 = *param_3 + (char)uVar35;
          param_3 = pcVar24;
        }
        else {
          *param_3 = *param_3 + '\x0f';
          uVar12 = uVar35 - 0xf;
          pcVar24[0] = -1;
          pcVar24[1] = -1;
          pcVar24[2] = -1;
          pcVar24[3] = -1;
          if (0x3fb < uVar12) {
            uVar37 = (ulong)(((uVar35 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar33 + 6),0xff,uVar37 + 4);
            pcVar24 = (char *)((long)plVar33 + uVar37 + 6);
            uVar12 = (uVar35 - 0x40b) % 0x3fc;
          }
          uVar10 = uVar12 * 0x8081 >> 0x17;
          pcVar24[uVar10] = (char)uVar10 + (char)uVar12;
          param_3 = pcVar24 + (ulong)uVar10 + 1;
        }
        plVar15 = (long *)((long)plVar26 + (ulong)uVar35 + 4);
        if (plVar13 <= plVar15) goto code_r0x004941e4;
        lVar31 = (long)plVar26 + (ulong)uVar35;
        *(int *)(param_1 + ((ulong)(*(long *)(lVar31 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)lVar31 + 2) - iVar22;
        uVar37 = (ulong)(*(long *)(lVar31 + 4) * -0x30e4432345000000) >> 0x34;
        uVar12 = (int)plVar15 - iVar22;
        uVar35 = *(uint *)(param_1 + uVar37 * 4);
        *(uint *)(param_1 + uVar37 * 4) = uVar12;
        if ((uVar35 + 0xffff < uVar12) ||
           (plVar30 = (long *)((ulong)uVar35 + lVar14), (int)*plVar30 != (int)*plVar15))
        goto code_r0x00493150;
        plVar33 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar26 = plVar15;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar17 = *(uint *)(param_1 + 0x4010);
      uVar37 = (ulong)uVar17;
      pcVar23 = param_3 + iVar22;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = uVar17 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      plVar33 = param_2;
      if (param_4 < 0xd) {
code_r0x0049412e:
        uVar18 = (long)param_2 + (uVar18 - (long)plVar33);
        if (param_3 + (uVar18 + 0xf0) / 0xff + uVar18 + 1 <= pcVar23) {
          if (uVar18 < 0xf) {
            *param_3 = (char)uVar18 << 4;
          }
          else {
            uVar37 = uVar18 - 0xf;
            *param_3 = -0x10;
            pcVar23 = param_3 + 1;
            if (0xfe < uVar37) {
              uVar37 = (uVar18 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar23,0xff,uVar37 + 1);
              pcVar23 = param_3 + uVar37 + 2;
              uVar37 = (uVar18 + uVar37 * -0xff) - 0x10e;
            }
            *pcVar23 = (char)uVar37;
            param_3 = pcVar23;
          }
          func_0x0099bda0(param_3 + 1,plVar33,uVar18);
          return ((int)(param_3 + 1) + (int)uVar18) - iVar28;
        }
        return 0;
      }
      lVar14 = (long)param_2 - uVar37;
      plVar26 = (long *)((long)param_2 + (uVar18 - 0xb));
      *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = (short)uVar17
      ;
      puVar29 = (ulong *)((long)param_2 + (uVar18 - 0xc));
      pcStack_40 = param_3;
code_r0x00493768:
      iVar22 = *(int *)((long)plVar33 + 1);
      uVar19 = 1;
      plVar15 = (long *)((long)plVar33 + 1);
      uVar17 = 0x40;
      do {
        plVar13 = plVar15;
        plVar15 = (long *)(uVar19 + (long)plVar13);
        param_3 = pcStack_40;
        if (plVar26 < plVar15) goto code_r0x0049412e;
        uVar19 = (ulong)(uVar17 >> 6);
        uVar17 = uVar17 + 1;
        uVar27 = (ulong)((uint)(iVar22 * -0x61c8864f) >> 0x13);
        uVar20 = (ulong)*(ushort *)(param_1 + uVar27 * 2);
        sVar4 = (short)lVar14;
        iVar22 = (int)*plVar15;
        *(short *)(param_1 + uVar27 * 2) = (short)plVar13 - sVar4;
      } while (*(int *)(lVar14 + uVar20) != (int)*plVar13);
      plVar15 = (long *)(lVar14 + uVar20);
      plVar30 = plVar13;
      if ((uVar37 < uVar20) && (*(char *)((long)plVar13 + -1) == *(char *)((long)plVar15 + -1))) {
        plVar21 = (long *)((long)param_2 + uVar20 + ~uVar37);
        plVar16 = (long *)((long)plVar13 + -1);
        plVar11 = (long *)((long)plVar13 + -1);
        do {
          plVar13 = plVar11;
          plVar30 = plVar16;
          plVar15 = plVar21;
          if ((plVar15 <= param_2) || (plVar30 <= plVar33)) break;
          plVar21 = (long *)((long)plVar15 + -1);
          plVar16 = (long *)((long)plVar30 + -1);
          plVar11 = (long *)((long)plVar13 + -1);
        } while (*(char *)((long)plVar30 + -1) == *(char *)((long)plVar15 + -1));
      }
      uVar19 = (long)plVar13 - (long)plVar33;
      uVar20 = uVar19 & 0xffffffff;
      if (pcVar23 < pcStack_40 + uVar20 / 0xff + uVar20 + 9) {
        return 0;
      }
      plVar21 = (long *)(pcStack_40 + 1);
      if ((uint)uVar19 < 0xf) {
        *pcStack_40 = (char)uVar19 << 4;
      }
      else {
        uVar17 = (uint)uVar19 - 0xf;
        *pcStack_40 = -0x10;
        if (0xfe < uVar17) {
          iVar22 = (int)plVar13 - (int)plVar33;
          uVar17 = iVar22 - 0x10e;
          uVar19 = (ulong)uVar17 / 0xff;
          func_0x0099bdb0(plVar21,0xff,uVar19 + 1);
          plVar21 = (long *)(pcStack_40 + uVar19 + 2);
          uVar17 = (iVar22 + uVar17 / 0xff) - 0x10e;
        }
        *(char *)plVar21 = (char)uVar17;
        plVar21 = (long *)((long)plVar21 + 1);
      }
      plVar13 = (long *)((long)plVar21 + uVar20);
      uVar19 = 8;
      if (8 < uVar20) {
        uVar19 = uVar20;
      }
      if ((0x18 < uVar20) && (0x1f < (ulong)((long)plVar21 - (long)plVar33))) {
        uVar19 = (uVar19 - 1 >> 3) + 1;
        uVar20 = uVar19 & 0xfffffffffffffffc;
        uVar27 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar33 + uVar27);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar33 + uVar27 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar21 + uVar27);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar21 + uVar27 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar27 = uVar27 + 0x20;
        } while ((uVar19 * 8 & 0xffffffffffffffe0) != uVar27);
        plVar33 = plVar33 + uVar20;
        plVar21 = plVar21 + uVar20;
        if (uVar19 == uVar20) goto code_r0x00493960;
      }
      do {
        *plVar21 = *plVar33;
        plVar21 = plVar21 + 1;
        plVar33 = plVar33 + 1;
      } while (plVar21 < plVar13);
code_r0x00493960:
      do {
        *(short *)plVar13 = (short)plVar30 - (short)plVar15;
        puVar1 = (ulong *)((long)plVar30 + 4);
        puVar36 = (ulong *)((long)plVar15 + 4);
        puVar32 = puVar1;
        if (puVar1 < puVar29) {
          if (*puVar36 == *puVar1) {
            puVar36 = (ulong *)((long)plVar15 + 0xc);
            puVar32 = (ulong *)((long)plVar30 + 0xc);
            goto code_r0x0049399a;
          }
          uVar17 = 0;
          for (uVar19 = *puVar1 ^ *puVar36; (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
            uVar17 = uVar17 + 1;
          }
          uVar17 = uVar17 >> 3;
        }
        else {
code_r0x0049399a:
          if (puVar32 < puVar29) {
            iVar22 = ((int)puVar32 - (int)plVar30) + -4;
code_r0x004939b0:
            if (*puVar36 == *puVar32) goto code_r0x004939bb;
            uVar17 = 0;
            for (uVar19 = *puVar32 ^ *puVar36; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar17 = uVar17 + 1;
            }
            uVar17 = (uVar17 >> 3) + iVar22;
            goto code_r0x00493a3e;
          }
code_r0x004939cb:
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
             ((int)*puVar36 == (int)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 4);
            puVar36 = (ulong *)((long)puVar36 + 4);
          }
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
             ((short)*puVar36 == (short)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 2);
            puVar36 = (ulong *)((long)puVar36 + 2);
          }
          if (puVar32 < (ulong *)((long)param_2 + (uVar18 - 5))) {
            puVar32 = (ulong *)((long)puVar32 + (ulong)((char)*puVar36 == (char)*puVar32));
          }
          uVar17 = (int)puVar32 - (int)puVar1;
        }
code_r0x00493a3e:
        if (pcVar23 < (char *)((long)plVar13 + (ulong)(uVar17 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        param_3 = (char *)((long)plVar13 + 2);
        if (uVar17 < 0xf) {
          *pcStack_40 = *pcStack_40 + (char)uVar17;
        }
        else {
          *pcStack_40 = *pcStack_40 + '\x0f';
          uVar35 = uVar17 - 0xf;
          param_3[0] = -1;
          param_3[1] = -1;
          param_3[2] = -1;
          param_3[3] = -1;
          if (0x3fb < uVar35) {
            uVar19 = (ulong)(((uVar17 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar19 + 4);
            param_3 = (char *)((long)plVar13 + uVar19 + 6);
            uVar35 = (uVar17 - 0x40b) % 0x3fc;
          }
          uVar12 = uVar35 * 0x8081 >> 0x17;
          param_3[uVar12] = (char)uVar12 + (char)uVar35;
          param_3 = param_3 + (ulong)uVar12 + 1;
        }
        plVar33 = (long *)((long)plVar30 + (ulong)uVar17 + 4);
        if (plVar26 <= plVar33) goto code_r0x0049412e;
        lVar31 = (long)plVar30 + (ulong)uVar17;
        *(short *)(param_1 + (ulong)((uint)(*(int *)(lVar31 + 2) * -0x61c8864f) >> 0x13) * 2) =
             ((short)lVar31 + 2) - sVar4;
        uVar19 = (ulong)((uint)(*(int *)(lVar31 + 4) * -0x61c8864f) >> 0x13);
        uVar20 = (ulong)*(ushort *)(param_1 + uVar19 * 2);
        plVar15 = (long *)(lVar14 + uVar20);
        *(short *)(param_1 + uVar19 * 2) = (short)plVar33 - sVar4;
        pcStack_40 = param_3;
        if (*(int *)(lVar14 + uVar20) != *(int *)(lVar31 + 4)) goto code_r0x00493768;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar30 = plVar33;
      } while( true );
    }
    if (iVar22 < 1) {
      return 0;
    }
  }
  else {
    if (0x1000a < (int)param_4) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      uVar17 = *(uint *)(param_1 + 0x4010);
      lVar14 = (long)param_2 - (ulong)uVar17;
      plVar15 = (long *)((long)param_2 + (uVar18 - 0xb));
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = param_4 + uVar17;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar17;
      plVar33 = (long *)((long)param_2 + 2);
      puVar29 = (ulong *)((long)param_2 + (uVar18 - 0xc));
      plVar26 = param_2;
code_r0x00492d1f:
      uVar37 = 1;
      lVar31 = *(long *)((long)plVar26 + 1);
      uVar19 = 0x41;
      plVar13 = (long *)((long)plVar26 + 1);
      while( true ) {
        plVar30 = plVar33;
        uVar27 = (ulong)(lVar31 * -0x30e4432345000000) >> 0x34;
        uVar35 = *(uint *)(param_1 + uVar27 * 4);
        uVar20 = (ulong)uVar35;
        iVar22 = (int)lVar14;
        uVar12 = (int)plVar13 - iVar22;
        lVar31 = *plVar30;
        *(uint *)(param_1 + uVar27 * 4) = uVar12;
        if ((uVar12 <= uVar35 + 0xffff) && (*(int *)(lVar14 + uVar20) == (int)*plVar13)) break;
        plVar33 = (long *)(uVar37 + (long)plVar30);
        uVar37 = uVar19 >> 6;
        uVar19 = (ulong)((int)uVar19 + 1);
        plVar13 = plVar30;
        if (plVar15 < plVar33) goto code_r0x00493622;
      }
      plVar33 = (long *)(lVar14 + uVar20);
      plVar30 = plVar13;
      if ((uVar17 < uVar35) && (*(char *)((long)plVar13 - 1) == *(char *)((long)plVar33 + -1))) {
        plVar21 = (long *)((long)param_2 + uVar20 + ~(ulong)uVar17);
        plVar16 = (long *)((long)plVar13 - 1U);
        plVar11 = (long *)((long)plVar13 - 1U);
        do {
          plVar13 = plVar11;
          plVar30 = plVar16;
          plVar33 = plVar21;
          if ((plVar33 <= param_2) || (plVar30 <= plVar26)) break;
          plVar21 = (long *)((long)plVar33 + -1);
          plVar16 = (long *)((long)plVar30 + -1);
          plVar11 = (long *)((long)plVar13 - 1);
        } while (*(char *)((long)plVar30 + -1) == *(char *)((long)plVar33 + -1));
      }
      uVar37 = (long)plVar13 - (long)plVar26;
      plVar21 = (long *)(param_3 + 1);
      if ((uint)uVar37 < 0xf) {
        *param_3 = (char)uVar37 << 4;
      }
      else {
        uVar35 = (uint)uVar37 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar35) {
          iVar34 = (int)plVar13 - (int)plVar26;
          uVar19 = (ulong)(iVar34 - 0x10e) / 0xff;
          func_0x0099bdb0(plVar21,0xff,uVar19 + 1);
          plVar21 = (long *)(param_3 + uVar19 + 2);
          uVar35 = (iVar34 + (int)uVar19 * -0xff) - 0x10e;
        }
        *(char *)plVar21 = (char)uVar35;
        plVar21 = (long *)((long)plVar21 + 1);
      }
      uVar37 = uVar37 & 0xffffffff;
      plVar13 = (long *)((long)plVar21 + uVar37);
      uVar19 = 8;
      if (8 < uVar37) {
        uVar19 = uVar37;
      }
      if ((0x18 < uVar37) && (0x1f < (ulong)((long)plVar21 - (long)plVar26))) {
        uVar37 = (uVar19 - 1 >> 3) + 1;
        uVar19 = uVar37 & 0x3ffffffffffffffc;
        uVar20 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar26 + uVar20);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar26 + uVar20 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar23 = (char *)((long)plVar21 + uVar20);
          *(undefined4 *)pcVar23 = *puVar2;
          *(undefined4 *)(pcVar23 + 4) = uVar5;
          *(undefined4 *)(pcVar23 + 8) = uVar6;
          *(undefined4 *)(pcVar23 + 0xc) = uVar7;
          pcVar23 = (char *)((long)plVar21 + uVar20 + 0x10);
          *(undefined8 *)pcVar23 = uVar8;
          *(undefined8 *)(pcVar23 + 8) = uVar9;
          uVar20 = uVar20 + 0x20;
        } while ((uVar37 * 8 & 0xffffffffffffffe0) != uVar20);
        plVar26 = plVar26 + uVar19;
        plVar21 = plVar21 + uVar19;
        if (uVar37 == uVar19) goto code_r0x00492ee0;
      }
      do {
        *plVar21 = *plVar26;
        plVar21 = plVar21 + 1;
        plVar26 = plVar26 + 1;
      } while (plVar21 < plVar13);
code_r0x00492ee0:
      do {
        *(short *)plVar13 = (short)plVar30 - (short)plVar33;
        pcVar23 = (char *)((long)plVar13 + 2);
        puVar1 = (ulong *)((long)plVar30 + 4);
        puVar36 = (ulong *)((long)plVar33 + 4);
        puVar32 = puVar1;
        if (puVar1 < puVar29) {
          if (*puVar36 == *puVar1) {
            puVar36 = (ulong *)((long)plVar33 + 0xc);
            puVar32 = (ulong *)((long)plVar30 + 0xc);
            goto code_r0x00492f19;
          }
          uVar35 = 0;
          for (uVar37 = *puVar1 ^ *puVar36; (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x8000000000000000) {
            uVar35 = uVar35 + 1;
          }
          uVar37 = (ulong)(uVar35 >> 3);
          plVar26 = (long *)((long)plVar30 + uVar37 + 4);
code_r0x00493090:
          *param_3 = *param_3 + (char)uVar37;
          param_3 = pcVar23;
        }
        else {
code_r0x00492f19:
          if (puVar32 < puVar29) {
code_r0x00492f30:
            if (*puVar36 == *puVar32) goto code_r0x00492f3f;
            uVar35 = 0;
            for (uVar37 = *puVar32 ^ *puVar36; (uVar37 & 1) == 0;
                uVar37 = uVar37 >> 1 | 0x8000000000000000) {
              uVar35 = uVar35 + 1;
            }
            puVar32 = (ulong *)((long)puVar32 + (ulong)(uVar35 >> 3));
            goto code_r0x00492fde;
          }
code_r0x00492f4c:
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
             ((int)*puVar36 == (int)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 4);
            puVar36 = (ulong *)((long)puVar36 + 4);
          }
          if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
             ((short)*puVar36 == (short)*puVar32)) {
            puVar32 = (ulong *)((long)puVar32 + 2);
            puVar36 = (ulong *)((long)puVar36 + 2);
          }
          if (puVar32 < (ulong *)((long)param_2 + (uVar18 - 5))) {
            puVar32 = (ulong *)((long)puVar32 + (ulong)((char)*puVar36 == (char)*puVar32));
          }
code_r0x00492fde:
          uVar37 = (long)puVar32 - (long)puVar1;
          uVar35 = (uint)uVar37;
          plVar26 = (long *)((long)plVar30 + (uVar37 & 0xffffffff) + 4);
          if (uVar35 < 0xf) goto code_r0x00493090;
          *param_3 = *param_3 + '\x0f';
          uVar12 = uVar35 - 0xf;
          pcVar23[0] = -1;
          pcVar23[1] = -1;
          pcVar23[2] = -1;
          pcVar23[3] = -1;
          if (0x3fb < uVar12) {
            uVar37 = (ulong)(((uVar35 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar37 + 4);
            pcVar23 = (char *)((long)plVar13 + uVar37 + 6);
            uVar12 = (uVar35 - 0x40b) % 0x3fc;
          }
          uVar35 = uVar12 * 0x8081 >> 0x17;
          pcVar23[uVar35] = (char)uVar35 + (char)uVar12;
          param_3 = pcVar23 + (ulong)uVar35 + 1;
        }
        if (plVar15 <= plVar26) goto code_r0x00493622;
        *(int *)(param_1 +
                ((ulong)(*(long *)((long)plVar26 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)plVar26 + -2) - iVar22;
        uVar37 = (ulong)(*plVar26 * -0x30e4432345000000) >> 0x34;
        uVar12 = (int)plVar26 - iVar22;
        uVar35 = *(uint *)(param_1 + uVar37 * 4);
        *(uint *)(param_1 + uVar37 * 4) = uVar12;
        if ((uVar35 + 0xffff < uVar12) ||
           (plVar33 = (long *)((ulong)uVar35 + lVar14), (int)*plVar33 != (int)*plVar26))
        goto code_r0x00492d00;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar30 = plVar26;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar17 = *(uint *)(param_1 + 0x4010);
      uVar37 = (ulong)uVar17;
      *(int *)(param_1 + 0x4018) = *(int *)(param_1 + 0x4018) + param_4;
      *(uint *)(param_1 + 0x4010) = uVar17 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      plVar33 = param_2;
      if (param_4 < 0xd) {
code_r0x00494084:
        uVar18 = (long)param_2 + (uVar18 - (long)plVar33);
        if (uVar18 < 0xf) {
          *param_3 = (char)uVar18 << 4;
        }
        else {
          uVar37 = uVar18 - 0xf;
          *param_3 = -0x10;
          pcVar23 = param_3 + 1;
          if (0xfe < uVar37) {
            uVar37 = (uVar18 - 0x10e) / 0xff;
            func_0x0099bdb0(pcVar23,0xff,uVar37 + 1);
            pcVar23 = param_3 + uVar37 + 2;
            uVar37 = (uVar18 + uVar37 * -0xff) - 0x10e;
          }
          *pcVar23 = (char)uVar37;
          param_3 = pcVar23;
        }
        func_0x0099bda0(param_3 + 1,plVar33,uVar18);
        return ((int)(param_3 + 1) + (int)uVar18) - iVar28;
      }
      lVar14 = (long)param_2 - uVar37;
      plVar26 = (long *)((long)param_2 + (uVar18 - 0xb));
      *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = (short)uVar17
      ;
      puVar29 = (ulong *)((long)param_2 + (uVar18 - 0xc));
code_r0x00493c7b:
      iVar22 = *(int *)((long)plVar33 + 1);
      uVar19 = 1;
      plVar15 = (long *)((long)plVar33 + 1);
      uVar17 = 0x40;
      do {
        plVar13 = plVar15;
        plVar15 = (long *)(uVar19 + (long)plVar13);
        if (plVar26 < plVar15) goto code_r0x00494084;
        uVar19 = (ulong)(uVar17 >> 6);
        uVar17 = uVar17 + 1;
        uVar27 = (ulong)((uint)(iVar22 * -0x61c8864f) >> 0x13);
        uVar20 = (ulong)*(ushort *)(param_1 + uVar27 * 2);
        sVar4 = (short)lVar14;
        iVar22 = (int)*plVar15;
        *(short *)(param_1 + uVar27 * 2) = (short)plVar13 - sVar4;
      } while (*(int *)(lVar14 + uVar20) != (int)*plVar13);
      plVar15 = (long *)(lVar14 + uVar20);
      plVar30 = plVar13;
      if ((uVar37 < uVar20) && (*(char *)((long)plVar13 + -1) == *(char *)((long)plVar15 + -1))) {
        plVar21 = (long *)((long)param_2 + uVar20 + ~uVar37);
        plVar16 = (long *)((long)plVar13 + -1);
        plVar11 = (long *)((long)plVar13 + -1);
        do {
          plVar13 = plVar11;
          plVar30 = plVar16;
          plVar15 = plVar21;
          if ((plVar15 <= param_2) || (plVar30 <= plVar33)) break;
          plVar21 = (long *)((long)plVar15 + -1);
          plVar16 = (long *)((long)plVar30 + -1);
          plVar11 = (long *)((long)plVar13 + -1);
        } while (*(char *)((long)plVar30 + -1) == *(char *)((long)plVar15 + -1));
      }
      uVar19 = (long)plVar13 - (long)plVar33;
      plVar21 = (long *)(param_3 + 1);
      if ((uint)uVar19 < 0xf) {
        *param_3 = (char)uVar19 << 4;
      }
      else {
        uVar17 = (uint)uVar19 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar17) {
          iStack_38 = (int)plVar33;
          iStack_38 = (int)plVar13 - iStack_38;
          uVar17 = iStack_38 - 0x10e;
          uVar20 = (ulong)uVar17 / 0xff;
          func_0x0099bdb0(plVar21,0xff,uVar20 + 1);
          plVar21 = (long *)(param_3 + uVar20 + 2);
          uVar17 = (iStack_38 + uVar17 / 0xff) - 0x10e;
        }
        *(char *)plVar21 = (char)uVar17;
        plVar21 = (long *)((long)plVar21 + 1);
      }
      uVar19 = uVar19 & 0xffffffff;
      plVar13 = (long *)((long)plVar21 + uVar19);
      uVar20 = 8;
      if (8 < uVar19) {
        uVar20 = uVar19;
      }
      plVar11 = plVar33;
      plVar16 = plVar21;
      pcVar23 = param_3;
      if ((0x18 < uVar19) && (0x1f < (ulong)((long)plVar21 - (long)plVar33))) {
        uVar19 = (uVar20 - 1 >> 3) + 1;
        uVar20 = uVar19 & 0xfffffffffffffffc;
        plVar11 = plVar33 + uVar20;
        plVar16 = plVar21 + uVar20;
        uVar27 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar33 + uVar27);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar33 + uVar27 + 0x10);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          pcVar24 = (char *)((long)plVar21 + uVar27);
          *(undefined4 *)pcVar24 = *puVar2;
          *(undefined4 *)(pcVar24 + 4) = uVar5;
          *(undefined4 *)(pcVar24 + 8) = uVar6;
          *(undefined4 *)(pcVar24 + 0xc) = uVar7;
          pcVar24 = (char *)((long)plVar21 + uVar27 + 0x10);
          *(undefined8 *)pcVar24 = uVar8;
          *(undefined8 *)(pcVar24 + 8) = uVar9;
          uVar27 = uVar27 + 0x20;
        } while ((uVar19 * 8 & 0xffffffffffffffe0) != uVar27);
        if (uVar19 == uVar20) goto code_r0x00493e30;
      }
      do {
        *plVar16 = *plVar11;
        plVar16 = plVar16 + 1;
        plVar11 = plVar11 + 1;
      } while (plVar16 < plVar13);
code_r0x00493e30:
      do {
        *(short *)plVar13 = (short)plVar30 - (short)plVar15;
        param_3 = (char *)((long)plVar13 + 2);
        puVar1 = (ulong *)((long)plVar30 + 4);
        puVar36 = (ulong *)((long)plVar15 + 4);
        puVar32 = puVar1;
        if (puVar1 < puVar29) {
          if (*puVar36 == *puVar1) {
            puVar36 = (ulong *)((long)plVar15 + 0xc);
            puVar32 = (ulong *)((long)plVar30 + 0xc);
            goto code_r0x00493e70;
          }
          uVar17 = 0;
          for (uVar19 = *puVar1 ^ *puVar36; (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
            uVar17 = uVar17 + 1;
          }
          uVar19 = (ulong)(uVar17 >> 3);
          plVar33 = (long *)((long)plVar30 + uVar19 + 4);
code_r0x00493f60:
          *pcVar23 = *pcVar23 + (char)uVar19;
        }
        else {
code_r0x00493e70:
          if (puVar32 < puVar29) {
            if (*puVar36 == *puVar32) goto code_r0x00493e85;
            uVar17 = 0;
            for (uVar19 = *puVar32 ^ *puVar36; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar17 = uVar17 + 1;
            }
            puVar32 = (ulong *)((long)puVar32 + (ulong)(uVar17 >> 3));
          }
          else {
            if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
               ((int)*puVar36 == (int)*puVar32)) {
              puVar32 = (ulong *)((long)puVar32 + 4);
              puVar36 = (ulong *)((long)puVar36 + 4);
            }
            if ((puVar32 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
               ((short)*puVar36 == (short)*puVar32)) {
              puVar32 = (ulong *)((long)puVar32 + 2);
              puVar36 = (ulong *)((long)puVar36 + 2);
            }
            if (puVar32 < (ulong *)((long)param_2 + (uVar18 - 5))) {
              puVar32 = (ulong *)((long)puVar32 + (ulong)((char)*puVar36 == (char)*puVar32));
            }
          }
          uVar19 = (long)puVar32 - (long)puVar1;
          uVar17 = (uint)uVar19;
          plVar33 = (long *)((long)plVar30 + (uVar19 & 0xffffffff) + 4);
          if (uVar17 < 0xf) goto code_r0x00493f60;
          *pcVar23 = *pcVar23 + '\x0f';
          uVar35 = uVar17 - 0xf;
          param_3[0] = -1;
          param_3[1] = -1;
          param_3[2] = -1;
          param_3[3] = -1;
          if (0x3fb < uVar35) {
            uVar19 = (ulong)(((uVar17 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar13 + 6),0xff,uVar19 + 4);
            param_3 = (char *)((long)plVar13 + uVar19 + 6);
            uVar35 = (uVar17 - 0x40b) % 0x3fc;
          }
          uVar17 = uVar35 * 0x8081 >> 0x17;
          param_3[uVar17] = (char)uVar17 + (char)uVar35;
          param_3 = param_3 + (ulong)uVar17 + 1;
        }
        if (plVar26 <= plVar33) goto code_r0x00494084;
        *(short *)(param_1 + (ulong)((uint)(*(int *)((long)plVar33 + -2) * -0x61c8864f) >> 0x13) * 2
                  ) = ((short)plVar33 + -2) - sVar4;
        uVar19 = (ulong)((uint)((int)*plVar33 * -0x61c8864f) >> 0x13);
        uVar20 = (ulong)*(ushort *)(param_1 + uVar19 * 2);
        plVar15 = (long *)(lVar14 + uVar20);
        *(short *)(param_1 + uVar19 * 2) = (short)plVar33 - sVar4;
        if (*(int *)(lVar14 + uVar20) != (int)*plVar33) goto code_r0x00493c7b;
        plVar13 = (long *)(param_3 + 1);
        *param_3 = '\0';
        pcVar23 = param_3;
        plVar30 = plVar33;
      } while( true );
    }
  }
  *param_3 = '\0';
  return 1;
code_r0x00492f3f:
  puVar32 = puVar32 + 1;
  puVar36 = puVar36 + 1;
  if (puVar29 <= puVar32) goto code_r0x00492f4c;
  goto code_r0x00492f30;
code_r0x00492d00:
  plVar33 = (long *)((long)plVar26 + 2);
  if (plVar15 < plVar33) {
code_r0x00493622:
    uVar18 = (long)param_2 + (uVar18 - (long)plVar26);
    if (uVar18 < 0xf) {
      *param_3 = (char)uVar18 << 4;
    }
    else {
      uVar37 = uVar18 - 0xf;
      *param_3 = -0x10;
      pcVar23 = param_3 + 1;
      if (0xfe < uVar37) {
        uVar37 = (uVar18 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar23,0xff,uVar37 + 1);
        pcVar23 = param_3 + uVar37 + 2;
        uVar37 = (uVar37 * -0xff + uVar18) - 0x10e;
      }
      *pcVar23 = (char)uVar37;
      param_3 = pcVar23;
    }
    func_0x0099bda0(param_3 + 1,plVar26,uVar18);
    return ((int)(param_3 + 1) + (int)uVar18) - iVar28;
  }
  goto code_r0x00492d1f;
code_r0x00493e85:
  puVar36 = puVar36 + 1;
  puVar32 = puVar32 + 1;
  goto code_r0x00493e70;
code_r0x004939bb:
  puVar32 = puVar32 + 1;
  puVar36 = puVar36 + 1;
  iVar22 = iVar22 + 8;
  if (puVar29 <= puVar32) goto code_r0x004939cb;
  goto code_r0x004939b0;
code_r0x004933db:
  puVar32 = puVar32 + 1;
  puVar36 = puVar36 + 1;
  iVar34 = iVar34 + 8;
  if (puVar29 <= puVar32) goto code_r0x0049357e;
  goto code_r0x004933d0;
code_r0x00493150:
  plVar26 = (long *)(lVar31 + 5);
  plVar33 = (long *)(lVar31 + 6);
  if (plVar13 < plVar33) {
code_r0x004941e4:
    uVar18 = (long)param_2 + (uVar18 - (long)plVar15);
    if (pcVar23 < param_3 + (uVar18 + 0xf0) / 0xff + uVar18 + 1) {
      return 0;
    }
    if (uVar18 < 0xf) {
      *param_3 = (char)uVar18 << 4;
    }
    else {
      uVar37 = uVar18 - 0xf;
      *param_3 = -0x10;
      pcVar23 = param_3 + 1;
      if (0xfe < uVar37) {
        uVar37 = (uVar18 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar23,0xff,uVar37 + 1);
        pcVar23 = param_3 + uVar37 + 2;
        uVar37 = (uVar18 + uVar37 * -0xff) - 0x10e;
      }
      *pcVar23 = (char)uVar37;
      param_3 = pcVar23;
    }
    func_0x0099bda0(param_3 + 1,plVar15,uVar18);
    return ((int)(param_3 + 1) + (int)uVar18) - iVar28;
  }
  goto code_r0x00493178;
}


