// Function: LZ4_compress
// Address: 004a4bf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00492a45) */

ulong LZ4_compress(long *param_1,undefined8 param_2,uint param_3)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  char *extraout_RDX;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 *puVar25;
  char *pcVar26;
  char *pcVar27;
  uint uVar28;
  long *plVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  ulong *puVar33;
  long *plVar34;
  long lVar35;
  ulong *puVar36;
  long *plVar37;
  int iVar38;
  uint uVar39;
  ulong *puVar40;
  long in_FS_OFFSET;
  char *pcStack_4098;
  int iStack_4090;
  undefined1 auStack_4058 [16416];
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar32 = 0;
  if (param_3 < 0x7e000001) {
    iVar32 = (uint)((ulong)param_3 * 0x8080808081 >> 0x27) + 0x10;
  }
  puVar25 = auStack_4058;
  func_0x0099bdb0(puVar25,0,0x4020);
  uVar14 = LZ4_compress_fast_extState(puVar25,param_1,param_2,(ulong)param_3,iVar32,1);
  uVar21 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar21 == uStack_38) {
    return uVar14;
  }
  func_0x0099bd00();
  uVar14 = uVar21 & 0xffffffff;
  iVar38 = 0;
  if (((ulong)puVar25 & 7) == 0 && puVar25 != (undefined1 *)0x0) {
    func_0x0099bdb0();
  }
  else {
    puVar25 = (undefined1 *)0x0;
  }
  uVar20 = (uint)uVar21;
  if (uVar20 < 0x7e000001) {
    iVar38 = uVar20 + (int)((uVar21 & 0xffffffff) / 0xff) + 0x10;
  }
  iVar31 = (int)extraout_RDX;
  if (iVar32 < iVar38) {
    if ((int)uVar20 < 0x1000b) {
      if (0x7e000000 < uVar20) {
        return 0;
      }
      if (uVar20 == 0) {
        if (iVar32 < 1) {
          return 0;
        }
code_r0x004936d6:
        *extraout_RDX = '\0';
        return 1;
      }
      uVar39 = *(uint *)(puVar25 + 0x4010);
      uVar21 = (ulong)uVar39;
      pcVar26 = extraout_RDX + iVar32;
      *(uint *)(puVar25 + 0x4018) = *(int *)(puVar25 + 0x4018) + uVar20;
      *(uint *)(puVar25 + 0x4010) = uVar39 + uVar20;
      *(undefined4 *)(puVar25 + 0x4014) = 3;
      pcVar12 = extraout_RDX;
      plVar37 = param_1;
      if (uVar20 < 0xd) {
code_r0x0049412e:
        uVar21 = (long)param_1 + (uVar14 - (long)plVar37);
        if (pcVar12 + (uVar21 + 0xf0) / 0xff + uVar21 + 1 <= pcVar26) {
          if (uVar21 < 0xf) {
            *pcVar12 = (char)uVar21 << 4;
          }
          else {
            uVar14 = uVar21 - 0xf;
            *pcVar12 = -0x10;
            pcVar26 = pcVar12 + 1;
            if (0xfe < uVar14) {
              uVar14 = (uVar21 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar26,0xff,uVar14 + 1);
              pcVar26 = pcVar12 + uVar14 + 2;
              uVar14 = (uVar21 + uVar14 * -0xff) - 0x10e;
            }
            *pcVar26 = (char)uVar14;
            pcVar12 = pcVar26;
          }
          func_0x0099bda0(pcVar12 + 1,plVar37,uVar21);
          return (ulong)(uint)(((int)(pcVar12 + 1) + (int)uVar21) - iVar31);
        }
        return 0;
      }
      lVar17 = (long)param_1 - uVar21;
      plVar29 = (long *)((long)param_1 + (uVar14 - 0xb));
      *(short *)(puVar25 + (ulong)((uint)((int)*param_1 * -0x61c8864f) >> 0x13) * 2) = (short)uVar39
      ;
      puVar33 = (ulong *)((long)param_1 + (uVar14 - 0xc));
      pcStack_4098 = extraout_RDX;
code_r0x00493768:
      iVar32 = *(int *)((long)plVar37 + 1);
      uVar22 = 1;
      plVar18 = (long *)((long)plVar37 + 1);
      uVar20 = 0x40;
      do {
        plVar16 = plVar18;
        plVar18 = (long *)(uVar22 + (long)plVar16);
        pcVar12 = pcStack_4098;
        if (plVar29 < plVar18) goto code_r0x0049412e;
        uVar22 = (ulong)(uVar20 >> 6);
        uVar20 = uVar20 + 1;
        uVar30 = (ulong)((uint)(iVar32 * -0x61c8864f) >> 0x13);
        uVar23 = (ulong)*(ushort *)(puVar25 + uVar30 * 2);
        sVar5 = (short)lVar17;
        iVar32 = (int)*plVar18;
        *(short *)(puVar25 + uVar30 * 2) = (short)plVar16 - sVar5;
      } while (*(int *)(lVar17 + uVar23) != (int)*plVar16);
      plVar18 = (long *)(lVar17 + uVar23);
      plVar34 = plVar16;
      if ((uVar21 < uVar23) && (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar18 + -1))) {
        plVar24 = (long *)((long)param_1 + uVar23 + ~uVar21);
        plVar19 = (long *)((long)plVar16 + -1);
        plVar13 = (long *)((long)plVar16 + -1);
        do {
          plVar16 = plVar13;
          plVar34 = plVar19;
          plVar18 = plVar24;
          if ((plVar18 <= param_1) || (plVar34 <= plVar37)) break;
          plVar24 = (long *)((long)plVar18 + -1);
          plVar19 = (long *)((long)plVar34 + -1);
          plVar13 = (long *)((long)plVar16 + -1);
        } while (*(char *)((long)plVar34 + -1) == *(char *)((long)plVar18 + -1));
      }
      uVar22 = (long)plVar16 - (long)plVar37;
      uVar23 = uVar22 & 0xffffffff;
      if (pcStack_4098 + uVar23 / 0xff + uVar23 + 9 <= pcVar26) {
        plVar24 = (long *)(pcStack_4098 + 1);
        if ((uint)uVar22 < 0xf) {
          *pcStack_4098 = (char)uVar22 << 4;
        }
        else {
          uVar20 = (uint)uVar22 - 0xf;
          *pcStack_4098 = -0x10;
          if (0xfe < uVar20) {
            iVar32 = (int)plVar16 - (int)plVar37;
            uVar20 = iVar32 - 0x10e;
            uVar22 = (ulong)uVar20 / 0xff;
            func_0x0099bdb0(plVar24,0xff,uVar22 + 1);
            plVar24 = (long *)(pcStack_4098 + uVar22 + 2);
            uVar20 = (iVar32 + uVar20 / 0xff) - 0x10e;
          }
          *(char *)plVar24 = (char)uVar20;
          plVar24 = (long *)((long)plVar24 + 1);
        }
        plVar16 = (long *)((long)plVar24 + uVar23);
        uVar22 = 8;
        if (8 < uVar23) {
          uVar22 = uVar23;
        }
        if ((0x18 < uVar23) && (0x1f < (ulong)((long)plVar24 - (long)plVar37))) {
          uVar22 = (uVar22 - 1 >> 3) + 1;
          uVar23 = uVar22 & 0xfffffffffffffffc;
          uVar30 = 0;
          do {
            puVar2 = (undefined4 *)((long)plVar37 + uVar30);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)((long)plVar37 + uVar30 + 0x10);
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            pcVar12 = (char *)((long)plVar24 + uVar30);
            *(undefined4 *)pcVar12 = *puVar2;
            *(undefined4 *)(pcVar12 + 4) = uVar6;
            *(undefined4 *)(pcVar12 + 8) = uVar7;
            *(undefined4 *)(pcVar12 + 0xc) = uVar8;
            pcVar12 = (char *)((long)plVar24 + uVar30 + 0x10);
            *(undefined8 *)pcVar12 = uVar9;
            *(undefined8 *)(pcVar12 + 8) = uVar10;
            uVar30 = uVar30 + 0x20;
          } while ((uVar22 * 8 & 0xffffffffffffffe0) != uVar30);
          plVar37 = plVar37 + uVar23;
          plVar24 = plVar24 + uVar23;
          if (uVar22 == uVar23) goto code_r0x00493960;
        }
        do {
          *plVar24 = *plVar37;
          plVar24 = plVar24 + 1;
          plVar37 = plVar37 + 1;
        } while (plVar24 < plVar16);
code_r0x00493960:
        do {
          *(short *)plVar16 = (short)plVar34 - (short)plVar18;
          puVar1 = (ulong *)((long)plVar34 + 4);
          puVar40 = (ulong *)((long)plVar18 + 4);
          puVar36 = puVar1;
          if (puVar1 < puVar33) {
            if (*puVar40 == *puVar1) {
              puVar40 = (ulong *)((long)plVar18 + 0xc);
              puVar36 = (ulong *)((long)plVar34 + 0xc);
              goto code_r0x0049399a;
            }
            uVar20 = 0;
            for (uVar22 = *puVar1 ^ *puVar40; (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar20 = uVar20 >> 3;
          }
          else {
code_r0x0049399a:
            if (puVar36 < puVar33) {
              iVar32 = ((int)puVar36 - (int)plVar34) + -4;
code_r0x004939b0:
              if (*puVar40 == *puVar36) goto code_r0x004939bb;
              uVar20 = 0;
              for (uVar22 = *puVar36 ^ *puVar40; (uVar22 & 1) == 0;
                  uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar20 = (uVar20 >> 3) + iVar32;
              goto code_r0x00493a3e;
            }
code_r0x004939cb:
            if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 8))) &&
               ((int)*puVar40 == (int)*puVar36)) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar40 = (ulong *)((long)puVar40 + 4);
            }
            if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 6))) &&
               ((short)*puVar40 == (short)*puVar36)) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar40 = (ulong *)((long)puVar40 + 2);
            }
            if (puVar36 < (ulong *)((long)param_1 + (uVar14 - 5))) {
              puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar40 == (char)*puVar36));
            }
            uVar20 = (int)puVar36 - (int)puVar1;
          }
code_r0x00493a3e:
          if (pcVar26 < (char *)((long)plVar16 + (ulong)(uVar20 + 0xf0) / 0xff + 8)) {
            return 0;
          }
          pcVar12 = (char *)((long)plVar16 + 2);
          if (uVar20 < 0xf) {
            *pcStack_4098 = *pcStack_4098 + (char)uVar20;
          }
          else {
            *pcStack_4098 = *pcStack_4098 + '\x0f';
            uVar39 = uVar20 - 0xf;
            pcVar12[0] = -1;
            pcVar12[1] = -1;
            pcVar12[2] = -1;
            pcVar12[3] = -1;
            if (0x3fb < uVar39) {
              uVar22 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar22 + 4);
              pcVar12 = (char *)((long)plVar16 + uVar22 + 6);
              uVar39 = (uVar20 - 0x40b) % 0x3fc;
            }
            uVar15 = uVar39 * 0x8081 >> 0x17;
            pcVar12[uVar15] = (char)uVar15 + (char)uVar39;
            pcVar12 = pcVar12 + (ulong)uVar15 + 1;
          }
          plVar37 = (long *)((long)plVar34 + (ulong)uVar20 + 4);
          if (plVar29 <= plVar37) goto code_r0x0049412e;
          lVar35 = (long)plVar34 + (ulong)uVar20;
          *(short *)(puVar25 + (ulong)((uint)(*(int *)(lVar35 + 2) * -0x61c8864f) >> 0x13) * 2) =
               ((short)lVar35 + 2) - sVar5;
          uVar22 = (ulong)((uint)(*(int *)(lVar35 + 4) * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)(puVar25 + uVar22 * 2);
          plVar18 = (long *)(lVar17 + (ulong)uVar4);
          *(short *)(puVar25 + uVar22 * 2) = (short)plVar37 - sVar5;
          pcStack_4098 = pcVar12;
          if (*(int *)(lVar17 + (ulong)uVar4) != *(int *)(lVar35 + 4)) goto code_r0x00493768;
          plVar16 = (long *)(pcVar12 + 1);
          *pcVar12 = '\0';
          plVar34 = plVar37;
        } while( true );
      }
    }
    else if (uVar20 < 0x7e000001) {
      uVar39 = *(uint *)(puVar25 + 0x4010);
      lVar17 = (long)param_1 - (ulong)uVar39;
      plVar16 = (long *)((long)param_1 + (uVar14 - 0xb));
      pcVar26 = extraout_RDX + iVar32;
      *(uint *)(puVar25 + 0x4018) = *(int *)(puVar25 + 0x4018) + uVar20;
      *(uint *)(puVar25 + 0x4010) = uVar20 + uVar39;
      *(undefined4 *)(puVar25 + 0x4014) = 2;
      *(uint *)(puVar25 + ((ulong)(*param_1 * -0x30e4432345000000) >> 0x34) * 4) = uVar39;
      puVar33 = (ulong *)((long)param_1 + (uVar14 - 0xc));
      plVar37 = (long *)((long)param_1 + 2);
      plVar29 = (long *)((long)param_1 + 1);
      pcVar12 = extraout_RDX;
      plVar18 = param_1;
code_r0x00493178:
      uVar20 = 1;
      lVar35 = *plVar29;
      uVar15 = 0x41;
      while( true ) {
        uVar22 = (ulong)(lVar35 * -0x30e4432345000000) >> 0x34;
        uVar11 = *(uint *)(puVar25 + uVar22 * 4);
        uVar21 = (ulong)uVar11;
        iVar32 = (int)lVar17;
        uVar28 = (int)plVar29 - iVar32;
        lVar35 = *plVar37;
        *(uint *)(puVar25 + uVar22 * 4) = uVar28;
        if ((uVar28 <= uVar11 + 0xffff) && (*(int *)(lVar17 + uVar21) == (int)*plVar29)) break;
        plVar34 = (long *)((ulong)uVar20 + (long)plVar37);
        uVar20 = uVar15 >> 6;
        plVar29 = plVar37;
        plVar37 = plVar34;
        uVar15 = uVar15 + 1;
        if (plVar16 < plVar34) goto code_r0x004941e4;
      }
      plVar34 = (long *)(lVar17 + uVar21);
      plVar37 = plVar29;
      if ((uVar39 < uVar11) && (*(char *)((long)plVar29 + -1) == *(char *)((long)plVar34 + -1))) {
        plVar24 = (long *)((long)param_1 + uVar21 + ~(ulong)uVar39);
        plVar19 = (long *)((long)plVar29 + -1);
        plVar13 = (long *)((long)plVar29 + -1);
        do {
          plVar37 = plVar13;
          plVar29 = plVar19;
          plVar34 = plVar24;
          if ((plVar34 <= param_1) || (plVar29 <= plVar18)) break;
          plVar24 = (long *)((long)plVar34 + -1);
          plVar19 = (long *)((long)plVar29 + -1);
          plVar13 = (long *)((long)plVar37 + -1);
        } while (*(char *)((long)plVar29 + -1) == *(char *)((long)plVar34 + -1));
      }
      uVar21 = (long)plVar37 - (long)plVar18;
      uVar22 = uVar21 & 0xffffffff;
      if (pcVar26 < pcVar12 + uVar22 / 0xff + uVar22 + 9) {
        return 0;
      }
      plVar24 = (long *)(pcVar12 + 1);
      if ((uint)uVar21 < 0xf) {
        *pcVar12 = (char)uVar21 << 4;
      }
      else {
        uVar20 = (uint)uVar21 - 0xf;
        *pcVar12 = -0x10;
        if (0xfe < uVar20) {
          iVar38 = (int)plVar37 - (int)plVar18;
          uVar20 = iVar38 - 0x10e;
          uVar21 = (ulong)uVar20 / 0xff;
          func_0x0099bdb0(plVar24,0xff,uVar21 + 1);
          plVar24 = (long *)(pcVar12 + uVar21 + 2);
          uVar20 = (iVar38 + uVar20 / 0xff) - 0x10e;
        }
        *(char *)plVar24 = (char)uVar20;
        plVar24 = (long *)((long)plVar24 + 1);
      }
      plVar37 = (long *)((long)plVar24 + uVar22);
      uVar21 = 8;
      if (8 < uVar22) {
        uVar21 = uVar22;
      }
      if ((0x18 < uVar22) && (0x1f < (ulong)((long)plVar24 - (long)plVar18))) {
        uVar21 = (uVar21 - 1 >> 3) + 1;
        uVar22 = uVar21 & 0x3ffffffffffffffc;
        uVar23 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar18 + uVar23);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar18 + uVar23 + 0x10);
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          pcVar27 = (char *)((long)plVar24 + uVar23);
          *(undefined4 *)pcVar27 = *puVar2;
          *(undefined4 *)(pcVar27 + 4) = uVar6;
          *(undefined4 *)(pcVar27 + 8) = uVar7;
          *(undefined4 *)(pcVar27 + 0xc) = uVar8;
          pcVar27 = (char *)((long)plVar24 + uVar23 + 0x10);
          *(undefined8 *)pcVar27 = uVar9;
          *(undefined8 *)(pcVar27 + 8) = uVar10;
          uVar23 = uVar23 + 0x20;
        } while ((uVar21 * 8 & 0xffffffffffffffe0) != uVar23);
        plVar18 = plVar18 + uVar22;
        plVar24 = plVar24 + uVar22;
        if (uVar21 == uVar22) goto code_r0x00493380;
      }
      do {
        *plVar24 = *plVar18;
        plVar24 = plVar24 + 1;
        plVar18 = plVar18 + 1;
      } while (plVar24 < plVar37);
code_r0x00493380:
      do {
        *(short *)plVar37 = (short)plVar29 - (short)plVar34;
        puVar1 = (ulong *)((long)plVar29 + 4);
        puVar40 = (ulong *)((long)plVar34 + 4);
        puVar36 = puVar1;
        if (puVar1 < puVar33) {
          if (*puVar40 == *puVar1) {
            puVar40 = (ulong *)((long)plVar34 + 0xc);
            puVar36 = (ulong *)((long)plVar29 + 0xc);
            goto code_r0x004933af;
          }
          uVar20 = 0;
          for (uVar21 = *puVar1 ^ *puVar40; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar20 = uVar20 >> 3;
        }
        else {
code_r0x004933af:
          if (puVar36 < puVar33) {
            iVar38 = ((int)puVar36 - (int)plVar29) + -4;
code_r0x004933d0:
            if (*puVar40 == *puVar36) goto code_r0x004933db;
            uVar20 = 0;
            for (uVar21 = *puVar36 ^ *puVar40; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar20 = (uVar20 >> 3) + iVar38;
            goto code_r0x00493422;
          }
code_r0x0049357e:
          if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 8))) &&
             ((int)*puVar40 == (int)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar40 = (ulong *)((long)puVar40 + 4);
          }
          if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 6))) &&
             ((short)*puVar40 == (short)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar40 = (ulong *)((long)puVar40 + 2);
          }
          if (puVar36 < (ulong *)((long)param_1 + (uVar14 - 5))) {
            puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar40 == (char)*puVar36));
          }
          uVar20 = (int)puVar36 - (int)puVar1;
        }
code_r0x00493422:
        if (pcVar26 < (char *)((long)plVar37 + (ulong)(uVar20 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcVar27 = (char *)((long)plVar37 + 2);
        if (uVar20 < 0xf) {
          *pcVar12 = *pcVar12 + (char)uVar20;
          pcVar12 = pcVar27;
        }
        else {
          *pcVar12 = *pcVar12 + '\x0f';
          uVar15 = uVar20 - 0xf;
          pcVar27[0] = -1;
          pcVar27[1] = -1;
          pcVar27[2] = -1;
          pcVar27[3] = -1;
          if (0x3fb < uVar15) {
            uVar21 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar37 + 6),0xff,uVar21 + 4);
            pcVar27 = (char *)((long)plVar37 + uVar21 + 6);
            uVar15 = (uVar20 - 0x40b) % 0x3fc;
          }
          uVar11 = uVar15 * 0x8081 >> 0x17;
          pcVar27[uVar11] = (char)uVar11 + (char)uVar15;
          pcVar12 = pcVar27 + (ulong)uVar11 + 1;
        }
        plVar18 = (long *)((long)plVar29 + (ulong)uVar20 + 4);
        if (plVar16 <= plVar18) goto code_r0x004941e4;
        lVar35 = (long)plVar29 + (ulong)uVar20;
        *(int *)(puVar25 + ((ulong)(*(long *)(lVar35 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)lVar35 + 2) - iVar32;
        uVar21 = (ulong)(*(long *)(lVar35 + 4) * -0x30e4432345000000) >> 0x34;
        uVar15 = (int)plVar18 - iVar32;
        uVar20 = *(uint *)(puVar25 + uVar21 * 4);
        *(uint *)(puVar25 + uVar21 * 4) = uVar15;
        if ((uVar20 + 0xffff < uVar15) ||
           (plVar34 = (long *)((ulong)uVar20 + lVar17), (int)*plVar34 != (int)*plVar18))
        goto code_r0x00493150;
        plVar37 = (long *)(pcVar12 + 1);
        *pcVar12 = '\0';
        plVar29 = plVar18;
      } while( true );
    }
  }
  else if ((int)uVar20 < 0x1000b) {
    if (uVar20 < 0x7e000001) {
      if (uVar20 != 0) {
        uVar39 = *(uint *)(puVar25 + 0x4010);
        uVar21 = (ulong)uVar39;
        *(uint *)(puVar25 + 0x4018) = *(int *)(puVar25 + 0x4018) + uVar20;
        *(uint *)(puVar25 + 0x4010) = uVar39 + uVar20;
        *(undefined4 *)(puVar25 + 0x4014) = 3;
        plVar37 = param_1;
        pcVar12 = extraout_RDX;
        if (uVar20 < 0xd) {
code_r0x00494084:
          uVar21 = (long)param_1 + (uVar14 - (long)plVar37);
          if (uVar21 < 0xf) {
            *pcVar12 = (char)uVar21 << 4;
          }
          else {
            uVar14 = uVar21 - 0xf;
            *pcVar12 = -0x10;
            pcVar26 = pcVar12 + 1;
            if (0xfe < uVar14) {
              uVar14 = (uVar21 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar26,0xff,uVar14 + 1);
              pcVar26 = pcVar12 + uVar14 + 2;
              uVar14 = (uVar21 + uVar14 * -0xff) - 0x10e;
            }
            *pcVar26 = (char)uVar14;
            pcVar12 = pcVar26;
          }
          func_0x0099bda0(pcVar12 + 1,plVar37,uVar21);
          return (ulong)(uint)(((int)(pcVar12 + 1) + (int)uVar21) - iVar31);
        }
        lVar17 = (long)param_1 - uVar21;
        plVar29 = (long *)((long)param_1 + (uVar14 - 0xb));
        *(short *)(puVar25 + (ulong)((uint)((int)*param_1 * -0x61c8864f) >> 0x13) * 2) =
             (short)uVar39;
        puVar33 = (ulong *)((long)param_1 + (uVar14 - 0xc));
code_r0x00493c7b:
        iVar32 = *(int *)((long)plVar37 + 1);
        uVar22 = 1;
        plVar18 = (long *)((long)plVar37 + 1);
        uVar20 = 0x40;
        do {
          plVar16 = plVar18;
          plVar18 = (long *)(uVar22 + (long)plVar16);
          if (plVar29 < plVar18) goto code_r0x00494084;
          uVar22 = (ulong)(uVar20 >> 6);
          uVar20 = uVar20 + 1;
          uVar30 = (ulong)((uint)(iVar32 * -0x61c8864f) >> 0x13);
          uVar23 = (ulong)*(ushort *)(puVar25 + uVar30 * 2);
          sVar5 = (short)lVar17;
          iVar32 = (int)*plVar18;
          *(short *)(puVar25 + uVar30 * 2) = (short)plVar16 - sVar5;
        } while (*(int *)(lVar17 + uVar23) != (int)*plVar16);
        plVar18 = (long *)(lVar17 + uVar23);
        plVar34 = plVar16;
        if ((uVar21 < uVar23) && (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar18 + -1))) {
          plVar24 = (long *)((long)param_1 + uVar23 + ~uVar21);
          plVar19 = (long *)((long)plVar16 + -1);
          plVar13 = (long *)((long)plVar16 + -1);
          do {
            plVar16 = plVar13;
            plVar34 = plVar19;
            plVar18 = plVar24;
            if ((plVar18 <= param_1) || (plVar34 <= plVar37)) break;
            plVar24 = (long *)((long)plVar18 + -1);
            plVar19 = (long *)((long)plVar34 + -1);
            plVar13 = (long *)((long)plVar16 + -1);
          } while (*(char *)((long)plVar34 + -1) == *(char *)((long)plVar18 + -1));
        }
        uVar22 = (long)plVar16 - (long)plVar37;
        plVar24 = (long *)(pcVar12 + 1);
        if ((uint)uVar22 < 0xf) {
          *pcVar12 = (char)uVar22 << 4;
        }
        else {
          uVar20 = (uint)uVar22 - 0xf;
          *pcVar12 = -0x10;
          if (0xfe < uVar20) {
            iStack_4090 = (int)plVar37;
            iStack_4090 = (int)plVar16 - iStack_4090;
            uVar20 = iStack_4090 - 0x10e;
            uVar23 = (ulong)uVar20 / 0xff;
            func_0x0099bdb0(plVar24,0xff,uVar23 + 1);
            plVar24 = (long *)(pcVar12 + uVar23 + 2);
            uVar20 = (iStack_4090 + uVar20 / 0xff) - 0x10e;
          }
          *(char *)plVar24 = (char)uVar20;
          plVar24 = (long *)((long)plVar24 + 1);
        }
        uVar22 = uVar22 & 0xffffffff;
        plVar16 = (long *)((long)plVar24 + uVar22);
        uVar23 = 8;
        if (8 < uVar22) {
          uVar23 = uVar22;
        }
        plVar13 = plVar37;
        plVar19 = plVar24;
        pcVar26 = pcVar12;
        if ((0x18 < uVar22) && (0x1f < (ulong)((long)plVar24 - (long)plVar37))) {
          uVar22 = (uVar23 - 1 >> 3) + 1;
          uVar23 = uVar22 & 0xfffffffffffffffc;
          plVar13 = plVar37 + uVar23;
          plVar19 = plVar24 + uVar23;
          uVar30 = 0;
          do {
            puVar2 = (undefined4 *)((long)plVar37 + uVar30);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)((long)plVar37 + uVar30 + 0x10);
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            pcVar12 = (char *)((long)plVar24 + uVar30);
            *(undefined4 *)pcVar12 = *puVar2;
            *(undefined4 *)(pcVar12 + 4) = uVar6;
            *(undefined4 *)(pcVar12 + 8) = uVar7;
            *(undefined4 *)(pcVar12 + 0xc) = uVar8;
            pcVar12 = (char *)((long)plVar24 + uVar30 + 0x10);
            *(undefined8 *)pcVar12 = uVar9;
            *(undefined8 *)(pcVar12 + 8) = uVar10;
            uVar30 = uVar30 + 0x20;
          } while ((uVar22 * 8 & 0xffffffffffffffe0) != uVar30);
          if (uVar22 == uVar23) goto code_r0x00493e30;
        }
        do {
          *plVar19 = *plVar13;
          plVar19 = plVar19 + 1;
          plVar13 = plVar13 + 1;
        } while (plVar19 < plVar16);
code_r0x00493e30:
        do {
          *(short *)plVar16 = (short)plVar34 - (short)plVar18;
          pcVar12 = (char *)((long)plVar16 + 2);
          puVar1 = (ulong *)((long)plVar34 + 4);
          puVar40 = (ulong *)((long)plVar18 + 4);
          puVar36 = puVar1;
          if (puVar1 < puVar33) {
            if (*puVar40 == *puVar1) {
              puVar40 = (ulong *)((long)plVar18 + 0xc);
              puVar36 = (ulong *)((long)plVar34 + 0xc);
              goto code_r0x00493e70;
            }
            uVar20 = 0;
            for (uVar22 = *puVar1 ^ *puVar40; (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar22 = (ulong)(uVar20 >> 3);
            plVar37 = (long *)((long)plVar34 + uVar22 + 4);
code_r0x00493f60:
            *pcVar26 = *pcVar26 + (char)uVar22;
          }
          else {
code_r0x00493e70:
            if (puVar36 < puVar33) {
              if (*puVar40 == *puVar36) goto code_r0x00493e85;
              uVar20 = 0;
              for (uVar22 = *puVar36 ^ *puVar40; (uVar22 & 1) == 0;
                  uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              puVar36 = (ulong *)((long)puVar36 + (ulong)(uVar20 >> 3));
            }
            else {
              if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 8))) &&
                 ((int)*puVar40 == (int)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 4);
                puVar40 = (ulong *)((long)puVar40 + 4);
              }
              if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 6))) &&
                 ((short)*puVar40 == (short)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 2);
                puVar40 = (ulong *)((long)puVar40 + 2);
              }
              if (puVar36 < (ulong *)((long)param_1 + (uVar14 - 5))) {
                puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar40 == (char)*puVar36));
              }
            }
            uVar22 = (long)puVar36 - (long)puVar1;
            uVar20 = (uint)uVar22;
            plVar37 = (long *)((long)plVar34 + (uVar22 & 0xffffffff) + 4);
            if (uVar20 < 0xf) goto code_r0x00493f60;
            *pcVar26 = *pcVar26 + '\x0f';
            uVar39 = uVar20 - 0xf;
            pcVar12[0] = -1;
            pcVar12[1] = -1;
            pcVar12[2] = -1;
            pcVar12[3] = -1;
            if (0x3fb < uVar39) {
              uVar22 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar22 + 4);
              pcVar12 = (char *)((long)plVar16 + uVar22 + 6);
              uVar39 = (uVar20 - 0x40b) % 0x3fc;
            }
            uVar20 = uVar39 * 0x8081 >> 0x17;
            pcVar12[uVar20] = (char)uVar20 + (char)uVar39;
            pcVar12 = pcVar12 + (ulong)uVar20 + 1;
          }
          if (plVar29 <= plVar37) goto code_r0x00494084;
          *(short *)(puVar25 +
                    (ulong)((uint)(*(int *)((long)plVar37 + -2) * -0x61c8864f) >> 0x13) * 2) =
               ((short)plVar37 + -2) - sVar5;
          uVar22 = (ulong)((uint)((int)*plVar37 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)(puVar25 + uVar22 * 2);
          plVar18 = (long *)(lVar17 + (ulong)uVar4);
          *(short *)(puVar25 + uVar22 * 2) = (short)plVar37 - sVar5;
          if (*(int *)(lVar17 + (ulong)uVar4) != (int)*plVar37) goto code_r0x00493c7b;
          plVar16 = (long *)(pcVar12 + 1);
          *pcVar12 = '\0';
          pcVar26 = pcVar12;
          plVar34 = plVar37;
        } while( true );
      }
      goto code_r0x004936d6;
    }
  }
  else if (uVar20 < 0x7e000001) {
    uVar39 = *(uint *)(puVar25 + 0x4010);
    lVar17 = (long)param_1 - (ulong)uVar39;
    plVar18 = (long *)((long)param_1 + (uVar14 - 0xb));
    *(uint *)(puVar25 + 0x4018) = *(int *)(puVar25 + 0x4018) + uVar20;
    *(uint *)(puVar25 + 0x4010) = uVar20 + uVar39;
    *(undefined4 *)(puVar25 + 0x4014) = 2;
    *(uint *)(puVar25 + ((ulong)(*param_1 * -0x30e4432345000000) >> 0x34) * 4) = uVar39;
    plVar37 = (long *)((long)param_1 + 2);
    puVar33 = (ulong *)((long)param_1 + (uVar14 - 0xc));
    pcVar12 = extraout_RDX;
    plVar29 = param_1;
code_r0x00492d1f:
    uVar21 = 1;
    lVar35 = *(long *)((long)plVar29 + 1);
    uVar22 = 0x41;
    plVar16 = (long *)((long)plVar29 + 1);
    while( true ) {
      plVar34 = plVar37;
      uVar30 = (ulong)(lVar35 * -0x30e4432345000000) >> 0x34;
      uVar20 = *(uint *)(puVar25 + uVar30 * 4);
      uVar23 = (ulong)uVar20;
      iVar32 = (int)lVar17;
      uVar15 = (int)plVar16 - iVar32;
      lVar35 = *plVar34;
      *(uint *)(puVar25 + uVar30 * 4) = uVar15;
      if ((uVar15 <= uVar20 + 0xffff) && (*(int *)(lVar17 + uVar23) == (int)*plVar16)) break;
      plVar37 = (long *)(uVar21 + (long)plVar34);
      uVar21 = uVar22 >> 6;
      uVar22 = (ulong)((int)uVar22 + 1);
      plVar16 = plVar34;
      if (plVar18 < plVar37) goto code_r0x00493622;
    }
    plVar37 = (long *)(lVar17 + uVar23);
    plVar34 = plVar16;
    if ((uVar39 < uVar20) && (*(char *)((long)plVar16 - 1) == *(char *)((long)plVar37 + -1))) {
      plVar24 = (long *)((long)param_1 + uVar23 + ~(ulong)uVar39);
      plVar19 = (long *)((long)plVar16 - 1U);
      plVar13 = (long *)((long)plVar16 - 1U);
      do {
        plVar16 = plVar13;
        plVar34 = plVar19;
        plVar37 = plVar24;
        if ((plVar37 <= param_1) || (plVar34 <= plVar29)) break;
        plVar24 = (long *)((long)plVar37 + -1);
        plVar19 = (long *)((long)plVar34 + -1);
        plVar13 = (long *)((long)plVar16 - 1);
      } while (*(char *)((long)plVar34 + -1) == *(char *)((long)plVar37 + -1));
    }
    uVar21 = (long)plVar16 - (long)plVar29;
    plVar24 = (long *)(pcVar12 + 1);
    if ((uint)uVar21 < 0xf) {
      *pcVar12 = (char)uVar21 << 4;
    }
    else {
      uVar20 = (uint)uVar21 - 0xf;
      *pcVar12 = -0x10;
      if (0xfe < uVar20) {
        iVar38 = (int)plVar16 - (int)plVar29;
        uVar22 = (ulong)(iVar38 - 0x10e) / 0xff;
        func_0x0099bdb0(plVar24,0xff,uVar22 + 1);
        plVar24 = (long *)(pcVar12 + uVar22 + 2);
        uVar20 = (iVar38 + (int)uVar22 * -0xff) - 0x10e;
      }
      *(char *)plVar24 = (char)uVar20;
      plVar24 = (long *)((long)plVar24 + 1);
    }
    uVar21 = uVar21 & 0xffffffff;
    plVar16 = (long *)((long)plVar24 + uVar21);
    uVar22 = 8;
    if (8 < uVar21) {
      uVar22 = uVar21;
    }
    if ((0x18 < uVar21) && (0x1f < (ulong)((long)plVar24 - (long)plVar29))) {
      uVar21 = (uVar22 - 1 >> 3) + 1;
      uVar22 = uVar21 & 0x3ffffffffffffffc;
      uVar23 = 0;
      do {
        puVar2 = (undefined4 *)((long)plVar29 + uVar23);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined8 *)((long)plVar29 + uVar23 + 0x10);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        pcVar26 = (char *)((long)plVar24 + uVar23);
        *(undefined4 *)pcVar26 = *puVar2;
        *(undefined4 *)(pcVar26 + 4) = uVar6;
        *(undefined4 *)(pcVar26 + 8) = uVar7;
        *(undefined4 *)(pcVar26 + 0xc) = uVar8;
        pcVar26 = (char *)((long)plVar24 + uVar23 + 0x10);
        *(undefined8 *)pcVar26 = uVar9;
        *(undefined8 *)(pcVar26 + 8) = uVar10;
        uVar23 = uVar23 + 0x20;
      } while ((uVar21 * 8 & 0xffffffffffffffe0) != uVar23);
      plVar29 = plVar29 + uVar22;
      plVar24 = plVar24 + uVar22;
      if (uVar21 == uVar22) goto code_r0x00492ee0;
    }
    do {
      *plVar24 = *plVar29;
      plVar24 = plVar24 + 1;
      plVar29 = plVar29 + 1;
    } while (plVar24 < plVar16);
code_r0x00492ee0:
    do {
      *(short *)plVar16 = (short)plVar34 - (short)plVar37;
      pcVar26 = (char *)((long)plVar16 + 2);
      puVar1 = (ulong *)((long)plVar34 + 4);
      puVar40 = (ulong *)((long)plVar37 + 4);
      puVar36 = puVar1;
      if (puVar1 < puVar33) {
        if (*puVar40 == *puVar1) {
          puVar40 = (ulong *)((long)plVar37 + 0xc);
          puVar36 = (ulong *)((long)plVar34 + 0xc);
          goto code_r0x00492f19;
        }
        uVar20 = 0;
        for (uVar21 = *puVar1 ^ *puVar40; (uVar21 & 1) == 0;
            uVar21 = uVar21 >> 1 | 0x8000000000000000) {
          uVar20 = uVar20 + 1;
        }
        uVar21 = (ulong)(uVar20 >> 3);
        plVar29 = (long *)((long)plVar34 + uVar21 + 4);
code_r0x00493090:
        *pcVar12 = *pcVar12 + (char)uVar21;
        pcVar12 = pcVar26;
      }
      else {
code_r0x00492f19:
        if (puVar36 < puVar33) {
code_r0x00492f30:
          if (*puVar40 == *puVar36) goto code_r0x00492f3f;
          uVar20 = 0;
          for (uVar21 = *puVar36 ^ *puVar40; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          puVar36 = (ulong *)((long)puVar36 + (ulong)(uVar20 >> 3));
          goto code_r0x00492fde;
        }
code_r0x00492f4c:
        if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 8))) && ((int)*puVar40 == (int)*puVar36))
        {
          puVar36 = (ulong *)((long)puVar36 + 4);
          puVar40 = (ulong *)((long)puVar40 + 4);
        }
        if ((puVar36 < (ulong *)((long)param_1 + (uVar14 - 6))) &&
           ((short)*puVar40 == (short)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 2);
          puVar40 = (ulong *)((long)puVar40 + 2);
        }
        if (puVar36 < (ulong *)((long)param_1 + (uVar14 - 5))) {
          puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar40 == (char)*puVar36));
        }
code_r0x00492fde:
        uVar21 = (long)puVar36 - (long)puVar1;
        uVar20 = (uint)uVar21;
        plVar29 = (long *)((long)plVar34 + (uVar21 & 0xffffffff) + 4);
        if (uVar20 < 0xf) goto code_r0x00493090;
        *pcVar12 = *pcVar12 + '\x0f';
        uVar15 = uVar20 - 0xf;
        pcVar26[0] = -1;
        pcVar26[1] = -1;
        pcVar26[2] = -1;
        pcVar26[3] = -1;
        if (0x3fb < uVar15) {
          uVar21 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
          func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar21 + 4);
          pcVar26 = (char *)((long)plVar16 + uVar21 + 6);
          uVar15 = (uVar20 - 0x40b) % 0x3fc;
        }
        uVar20 = uVar15 * 0x8081 >> 0x17;
        pcVar26[uVar20] = (char)uVar20 + (char)uVar15;
        pcVar12 = pcVar26 + (ulong)uVar20 + 1;
      }
      if (plVar18 <= plVar29) goto code_r0x00493622;
      *(int *)(puVar25 + ((ulong)(*(long *)((long)plVar29 + -2) * -0x30e4432345000000) >> 0x34) * 4)
           = ((int)plVar29 + -2) - iVar32;
      uVar21 = (ulong)(*plVar29 * -0x30e4432345000000) >> 0x34;
      uVar15 = (int)plVar29 - iVar32;
      uVar20 = *(uint *)(puVar25 + uVar21 * 4);
      *(uint *)(puVar25 + uVar21 * 4) = uVar15;
      if ((uVar20 + 0xffff < uVar15) ||
         (plVar37 = (long *)((ulong)uVar20 + lVar17), (int)*plVar37 != (int)*plVar29))
      goto code_r0x00492d00;
      plVar16 = (long *)(pcVar12 + 1);
      *pcVar12 = '\0';
      plVar34 = plVar29;
    } while( true );
  }
  return 0;
code_r0x00492f3f:
  puVar36 = puVar36 + 1;
  puVar40 = puVar40 + 1;
  if (puVar33 <= puVar36) goto code_r0x00492f4c;
  goto code_r0x00492f30;
code_r0x00492d00:
  plVar37 = (long *)((long)plVar29 + 2);
  if (plVar18 < plVar37) {
code_r0x00493622:
    uVar21 = (long)param_1 + (uVar14 - (long)plVar29);
    if (uVar21 < 0xf) {
      *pcVar12 = (char)uVar21 << 4;
    }
    else {
      uVar14 = uVar21 - 0xf;
      *pcVar12 = -0x10;
      pcVar26 = pcVar12 + 1;
      if (0xfe < uVar14) {
        uVar14 = (uVar21 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar26,0xff,uVar14 + 1);
        pcVar26 = pcVar12 + uVar14 + 2;
        uVar14 = (uVar14 * -0xff + uVar21) - 0x10e;
      }
      *pcVar26 = (char)uVar14;
      pcVar12 = pcVar26;
    }
    func_0x0099bda0(pcVar12 + 1,plVar29,uVar21);
    return (ulong)(uint)(((int)(pcVar12 + 1) + (int)uVar21) - iVar31);
  }
  goto code_r0x00492d1f;
code_r0x00493e85:
  puVar40 = puVar40 + 1;
  puVar36 = puVar36 + 1;
  goto code_r0x00493e70;
code_r0x004939bb:
  puVar36 = puVar36 + 1;
  puVar40 = puVar40 + 1;
  iVar32 = iVar32 + 8;
  if (puVar33 <= puVar36) goto code_r0x004939cb;
  goto code_r0x004939b0;
code_r0x004933db:
  puVar36 = puVar36 + 1;
  puVar40 = puVar40 + 1;
  iVar38 = iVar38 + 8;
  if (puVar33 <= puVar36) goto code_r0x0049357e;
  goto code_r0x004933d0;
code_r0x00493150:
  plVar29 = (long *)(lVar35 + 5);
  plVar37 = (long *)(lVar35 + 6);
  if (plVar16 < plVar37) {
code_r0x004941e4:
    uVar21 = (long)param_1 + (uVar14 - (long)plVar18);
    if (pcVar26 < pcVar12 + (uVar21 + 0xf0) / 0xff + uVar21 + 1) {
      return 0;
    }
    if (uVar21 < 0xf) {
      *pcVar12 = (char)uVar21 << 4;
    }
    else {
      uVar14 = uVar21 - 0xf;
      *pcVar12 = -0x10;
      pcVar26 = pcVar12 + 1;
      if (0xfe < uVar14) {
        uVar14 = (uVar21 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar26,0xff,uVar14 + 1);
        pcVar26 = pcVar12 + uVar14 + 2;
        uVar14 = (uVar21 + uVar14 * -0xff) - 0x10e;
      }
      *pcVar26 = (char)uVar14;
      pcVar12 = pcVar26;
    }
    func_0x0099bda0(pcVar12 + 1,plVar18,uVar21);
    return (ulong)(uint)(((int)(pcVar12 + 1) + (int)uVar21) - iVar31);
  }
  goto code_r0x00493178;
}


