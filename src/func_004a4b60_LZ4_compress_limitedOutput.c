// Function: LZ4_compress_limitedOutput
// Address: 004a4b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00492a45) */

ulong LZ4_compress_limitedOutput(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

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
  uint uVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  uint extraout_EDX;
  char *extraout_RDX;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  undefined1 *puVar26;
  char *pcVar27;
  char *pcVar28;
  uint uVar29;
  long *plVar30;
  ulong uVar31;
  int iVar32;
  int iVar33;
  ulong *puVar34;
  long *plVar35;
  long lVar36;
  ulong *puVar37;
  long *plVar38;
  int iVar39;
  uint uVar40;
  ulong *puVar41;
  long in_FS_OFFSET;
  char *pcStack_80f0;
  int iStack_80e8;
  undefined1 auStack_80b0 [16416];
  ulong uStack_4090;
  ulong uStack_4088;
  undefined8 uStack_4080;
  long *plStack_4078;
  ulong uStack_4070;
  undefined8 uStack_4068;
  undefined1 *puStack_4060;
  long alStack_4058 [2052];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_4060 = &UNK_004a4ba2;
  func_0x0099bdb0(alStack_4058,0,0x4020);
  puStack_4060 = &UNK_004a4bbc;
  uVar23 = param_1;
  plVar24 = alStack_4058;
  uVar13 = LZ4_compress_fast_extState(alStack_4058,param_1,param_2,(ulong)param_3,param_4,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar13;
  }
  puStack_4060 = &UNK_004a4be2;
  func_0x0099bd00();
  uStack_4090 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar33 = 0;
  if (extraout_EDX < 0x7e000001) {
    iVar33 = (uint)((ulong)extraout_EDX * 0x8080808081 >> 0x27) + 0x10;
  }
  puVar26 = auStack_80b0;
  uStack_4088 = (ulong)param_4;
  uStack_4080 = param_1;
  plStack_4078 = alStack_4058;
  uStack_4070 = (ulong)param_3;
  uStack_4068 = param_2;
  puStack_4060 = &stack0xfffffffffffffff8;
  func_0x0099bdb0(puVar26,0,0x4020);
  uVar14 = LZ4_compress_fast_extState(puVar26,plVar24,uVar23,(ulong)extraout_EDX,iVar33,1);
  uVar13 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar13 == uStack_4090) {
    return uVar14;
  }
  func_0x0099bd00();
  uVar14 = uVar13 & 0xffffffff;
  iVar39 = 0;
  if (((ulong)puVar26 & 7) == 0 && puVar26 != (undefined1 *)0x0) {
    func_0x0099bdb0();
  }
  else {
    puVar26 = (undefined1 *)0x0;
  }
  uVar20 = (uint)uVar13;
  if (uVar20 < 0x7e000001) {
    iVar39 = uVar20 + (int)((uVar13 & 0xffffffff) / 0xff) + 0x10;
  }
  iVar32 = (int)extraout_RDX;
  if (iVar33 < iVar39) {
    if ((int)uVar20 < 0x1000b) {
      if (0x7e000000 < uVar20) {
        return 0;
      }
      if (uVar20 == 0) {
        if (iVar33 < 1) {
          return 0;
        }
code_r0x004936d6:
        *extraout_RDX = '\0';
        return 1;
      }
      uVar40 = *(uint *)(puVar26 + 0x4010);
      uVar13 = (ulong)uVar40;
      pcVar27 = extraout_RDX + iVar33;
      *(uint *)(puVar26 + 0x4018) = *(int *)(puVar26 + 0x4018) + uVar20;
      *(uint *)(puVar26 + 0x4010) = uVar40 + uVar20;
      *(undefined4 *)(puVar26 + 0x4014) = 3;
      pcVar11 = extraout_RDX;
      plVar38 = plVar24;
      if (uVar20 < 0xd) {
code_r0x0049412e:
        uVar13 = (long)plVar24 + (uVar14 - (long)plVar38);
        if (pcVar11 + (uVar13 + 0xf0) / 0xff + uVar13 + 1 <= pcVar27) {
          if (uVar13 < 0xf) {
            *pcVar11 = (char)uVar13 << 4;
          }
          else {
            uVar14 = uVar13 - 0xf;
            *pcVar11 = -0x10;
            pcVar27 = pcVar11 + 1;
            if (0xfe < uVar14) {
              uVar14 = (uVar13 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar27,0xff,uVar14 + 1);
              pcVar27 = pcVar11 + uVar14 + 2;
              uVar14 = (uVar13 + uVar14 * -0xff) - 0x10e;
            }
            *pcVar27 = (char)uVar14;
            pcVar11 = pcVar27;
          }
          func_0x0099bda0(pcVar11 + 1,plVar38,uVar13);
          return (ulong)(uint)(((int)(pcVar11 + 1) + (int)uVar13) - iVar32);
        }
        return 0;
      }
      lVar17 = (long)plVar24 - uVar13;
      plVar30 = (long *)((long)plVar24 + (uVar14 - 0xb));
      *(short *)(puVar26 + (ulong)((uint)((int)*plVar24 * -0x61c8864f) >> 0x13) * 2) = (short)uVar40
      ;
      puVar34 = (ulong *)((long)plVar24 + (uVar14 - 0xc));
      pcStack_80f0 = extraout_RDX;
code_r0x00493768:
      iVar33 = *(int *)((long)plVar38 + 1);
      uVar21 = 1;
      plVar18 = (long *)((long)plVar38 + 1);
      uVar20 = 0x40;
      do {
        plVar16 = plVar18;
        plVar18 = (long *)(uVar21 + (long)plVar16);
        pcVar11 = pcStack_80f0;
        if (plVar30 < plVar18) goto code_r0x0049412e;
        uVar21 = (ulong)(uVar20 >> 6);
        uVar20 = uVar20 + 1;
        uVar31 = (ulong)((uint)(iVar33 * -0x61c8864f) >> 0x13);
        uVar22 = (ulong)*(ushort *)(puVar26 + uVar31 * 2);
        sVar5 = (short)lVar17;
        iVar33 = (int)*plVar18;
        *(short *)(puVar26 + uVar31 * 2) = (short)plVar16 - sVar5;
      } while (*(int *)(lVar17 + uVar22) != (int)*plVar16);
      plVar18 = (long *)(lVar17 + uVar22);
      plVar35 = plVar16;
      if ((uVar13 < uVar22) && (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar18 + -1))) {
        plVar25 = (long *)((long)plVar24 + uVar22 + ~uVar13);
        plVar19 = (long *)((long)plVar16 + -1);
        plVar12 = (long *)((long)plVar16 + -1);
        do {
          plVar16 = plVar12;
          plVar35 = plVar19;
          plVar18 = plVar25;
          if ((plVar18 <= plVar24) || (plVar35 <= plVar38)) break;
          plVar25 = (long *)((long)plVar18 + -1);
          plVar19 = (long *)((long)plVar35 + -1);
          plVar12 = (long *)((long)plVar16 + -1);
        } while (*(char *)((long)plVar35 + -1) == *(char *)((long)plVar18 + -1));
      }
      uVar21 = (long)plVar16 - (long)plVar38;
      uVar22 = uVar21 & 0xffffffff;
      if (pcStack_80f0 + uVar22 / 0xff + uVar22 + 9 <= pcVar27) {
        plVar25 = (long *)(pcStack_80f0 + 1);
        if ((uint)uVar21 < 0xf) {
          *pcStack_80f0 = (char)uVar21 << 4;
        }
        else {
          uVar20 = (uint)uVar21 - 0xf;
          *pcStack_80f0 = -0x10;
          if (0xfe < uVar20) {
            iVar33 = (int)plVar16 - (int)plVar38;
            uVar20 = iVar33 - 0x10e;
            uVar21 = (ulong)uVar20 / 0xff;
            func_0x0099bdb0(plVar25,0xff,uVar21 + 1);
            plVar25 = (long *)(pcStack_80f0 + uVar21 + 2);
            uVar20 = (iVar33 + uVar20 / 0xff) - 0x10e;
          }
          *(char *)plVar25 = (char)uVar20;
          plVar25 = (long *)((long)plVar25 + 1);
        }
        plVar16 = (long *)((long)plVar25 + uVar22);
        uVar21 = 8;
        if (8 < uVar22) {
          uVar21 = uVar22;
        }
        if ((0x18 < uVar22) && (0x1f < (ulong)((long)plVar25 - (long)plVar38))) {
          uVar21 = (uVar21 - 1 >> 3) + 1;
          uVar22 = uVar21 & 0xfffffffffffffffc;
          uVar31 = 0;
          do {
            puVar2 = (undefined4 *)((long)plVar38 + uVar31);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)((long)plVar38 + uVar31 + 0x10);
            uVar23 = *puVar3;
            uVar9 = puVar3[1];
            pcVar11 = (char *)((long)plVar25 + uVar31);
            *(undefined4 *)pcVar11 = *puVar2;
            *(undefined4 *)(pcVar11 + 4) = uVar6;
            *(undefined4 *)(pcVar11 + 8) = uVar7;
            *(undefined4 *)(pcVar11 + 0xc) = uVar8;
            pcVar11 = (char *)((long)plVar25 + uVar31 + 0x10);
            *(undefined8 *)pcVar11 = uVar23;
            *(undefined8 *)(pcVar11 + 8) = uVar9;
            uVar31 = uVar31 + 0x20;
          } while ((uVar21 * 8 & 0xffffffffffffffe0) != uVar31);
          plVar38 = plVar38 + uVar22;
          plVar25 = plVar25 + uVar22;
          if (uVar21 == uVar22) goto code_r0x00493960;
        }
        do {
          *plVar25 = *plVar38;
          plVar25 = plVar25 + 1;
          plVar38 = plVar38 + 1;
        } while (plVar25 < plVar16);
code_r0x00493960:
        do {
          *(short *)plVar16 = (short)plVar35 - (short)plVar18;
          puVar1 = (ulong *)((long)plVar35 + 4);
          puVar41 = (ulong *)((long)plVar18 + 4);
          puVar37 = puVar1;
          if (puVar1 < puVar34) {
            if (*puVar41 == *puVar1) {
              puVar41 = (ulong *)((long)plVar18 + 0xc);
              puVar37 = (ulong *)((long)plVar35 + 0xc);
              goto code_r0x0049399a;
            }
            uVar20 = 0;
            for (uVar21 = *puVar1 ^ *puVar41; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar20 = uVar20 >> 3;
          }
          else {
code_r0x0049399a:
            if (puVar37 < puVar34) {
              iVar33 = ((int)puVar37 - (int)plVar35) + -4;
code_r0x004939b0:
              if (*puVar41 == *puVar37) goto code_r0x004939bb;
              uVar20 = 0;
              for (uVar21 = *puVar37 ^ *puVar41; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar20 = (uVar20 >> 3) + iVar33;
              goto code_r0x00493a3e;
            }
code_r0x004939cb:
            if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 8))) &&
               ((int)*puVar41 == (int)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 4);
              puVar41 = (ulong *)((long)puVar41 + 4);
            }
            if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 6))) &&
               ((short)*puVar41 == (short)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 2);
              puVar41 = (ulong *)((long)puVar41 + 2);
            }
            if (puVar37 < (ulong *)((long)plVar24 + (uVar14 - 5))) {
              puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar41 == (char)*puVar37));
            }
            uVar20 = (int)puVar37 - (int)puVar1;
          }
code_r0x00493a3e:
          if (pcVar27 < (char *)((long)plVar16 + (ulong)(uVar20 + 0xf0) / 0xff + 8)) {
            return 0;
          }
          pcVar11 = (char *)((long)plVar16 + 2);
          if (uVar20 < 0xf) {
            *pcStack_80f0 = *pcStack_80f0 + (char)uVar20;
          }
          else {
            *pcStack_80f0 = *pcStack_80f0 + '\x0f';
            uVar40 = uVar20 - 0xf;
            pcVar11[0] = -1;
            pcVar11[1] = -1;
            pcVar11[2] = -1;
            pcVar11[3] = -1;
            if (0x3fb < uVar40) {
              uVar21 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar21 + 4);
              pcVar11 = (char *)((long)plVar16 + uVar21 + 6);
              uVar40 = (uVar20 - 0x40b) % 0x3fc;
            }
            uVar15 = uVar40 * 0x8081 >> 0x17;
            pcVar11[uVar15] = (char)uVar15 + (char)uVar40;
            pcVar11 = pcVar11 + (ulong)uVar15 + 1;
          }
          plVar38 = (long *)((long)plVar35 + (ulong)uVar20 + 4);
          if (plVar30 <= plVar38) goto code_r0x0049412e;
          lVar36 = (long)plVar35 + (ulong)uVar20;
          *(short *)(puVar26 + (ulong)((uint)(*(int *)(lVar36 + 2) * -0x61c8864f) >> 0x13) * 2) =
               ((short)lVar36 + 2) - sVar5;
          uVar21 = (ulong)((uint)(*(int *)(lVar36 + 4) * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)(puVar26 + uVar21 * 2);
          plVar18 = (long *)(lVar17 + (ulong)uVar4);
          *(short *)(puVar26 + uVar21 * 2) = (short)plVar38 - sVar5;
          pcStack_80f0 = pcVar11;
          if (*(int *)(lVar17 + (ulong)uVar4) != *(int *)(lVar36 + 4)) goto code_r0x00493768;
          plVar16 = (long *)(pcVar11 + 1);
          *pcVar11 = '\0';
          plVar35 = plVar38;
        } while( true );
      }
    }
    else if (uVar20 < 0x7e000001) {
      uVar40 = *(uint *)(puVar26 + 0x4010);
      lVar17 = (long)plVar24 - (ulong)uVar40;
      plVar16 = (long *)((long)plVar24 + (uVar14 - 0xb));
      pcVar27 = extraout_RDX + iVar33;
      *(uint *)(puVar26 + 0x4018) = *(int *)(puVar26 + 0x4018) + uVar20;
      *(uint *)(puVar26 + 0x4010) = uVar20 + uVar40;
      *(undefined4 *)(puVar26 + 0x4014) = 2;
      *(uint *)(puVar26 + ((ulong)(*plVar24 * -0x30e4432345000000) >> 0x34) * 4) = uVar40;
      puVar34 = (ulong *)((long)plVar24 + (uVar14 - 0xc));
      plVar38 = (long *)((long)plVar24 + 2);
      plVar30 = (long *)((long)plVar24 + 1);
      pcVar11 = extraout_RDX;
      plVar18 = plVar24;
code_r0x00493178:
      uVar20 = 1;
      lVar36 = *plVar30;
      uVar15 = 0x41;
      while( true ) {
        uVar21 = (ulong)(lVar36 * -0x30e4432345000000) >> 0x34;
        uVar10 = *(uint *)(puVar26 + uVar21 * 4);
        uVar13 = (ulong)uVar10;
        iVar33 = (int)lVar17;
        uVar29 = (int)plVar30 - iVar33;
        lVar36 = *plVar38;
        *(uint *)(puVar26 + uVar21 * 4) = uVar29;
        if ((uVar29 <= uVar10 + 0xffff) && (*(int *)(lVar17 + uVar13) == (int)*plVar30)) break;
        plVar35 = (long *)((ulong)uVar20 + (long)plVar38);
        uVar20 = uVar15 >> 6;
        plVar30 = plVar38;
        plVar38 = plVar35;
        uVar15 = uVar15 + 1;
        if (plVar16 < plVar35) goto code_r0x004941e4;
      }
      plVar35 = (long *)(lVar17 + uVar13);
      plVar38 = plVar30;
      if ((uVar40 < uVar10) && (*(char *)((long)plVar30 + -1) == *(char *)((long)plVar35 + -1))) {
        plVar25 = (long *)((long)plVar24 + uVar13 + ~(ulong)uVar40);
        plVar19 = (long *)((long)plVar30 + -1);
        plVar12 = (long *)((long)plVar30 + -1);
        do {
          plVar38 = plVar12;
          plVar30 = plVar19;
          plVar35 = plVar25;
          if ((plVar35 <= plVar24) || (plVar30 <= plVar18)) break;
          plVar25 = (long *)((long)plVar35 + -1);
          plVar19 = (long *)((long)plVar30 + -1);
          plVar12 = (long *)((long)plVar38 + -1);
        } while (*(char *)((long)plVar30 + -1) == *(char *)((long)plVar35 + -1));
      }
      uVar13 = (long)plVar38 - (long)plVar18;
      uVar21 = uVar13 & 0xffffffff;
      if (pcVar27 < pcVar11 + uVar21 / 0xff + uVar21 + 9) {
        return 0;
      }
      plVar25 = (long *)(pcVar11 + 1);
      if ((uint)uVar13 < 0xf) {
        *pcVar11 = (char)uVar13 << 4;
      }
      else {
        uVar20 = (uint)uVar13 - 0xf;
        *pcVar11 = -0x10;
        if (0xfe < uVar20) {
          iVar39 = (int)plVar38 - (int)plVar18;
          uVar20 = iVar39 - 0x10e;
          uVar13 = (ulong)uVar20 / 0xff;
          func_0x0099bdb0(plVar25,0xff,uVar13 + 1);
          plVar25 = (long *)(pcVar11 + uVar13 + 2);
          uVar20 = (iVar39 + uVar20 / 0xff) - 0x10e;
        }
        *(char *)plVar25 = (char)uVar20;
        plVar25 = (long *)((long)plVar25 + 1);
      }
      plVar38 = (long *)((long)plVar25 + uVar21);
      uVar13 = 8;
      if (8 < uVar21) {
        uVar13 = uVar21;
      }
      if ((0x18 < uVar21) && (0x1f < (ulong)((long)plVar25 - (long)plVar18))) {
        uVar13 = (uVar13 - 1 >> 3) + 1;
        uVar21 = uVar13 & 0x3ffffffffffffffc;
        uVar22 = 0;
        do {
          puVar2 = (undefined4 *)((long)plVar18 + uVar22);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined8 *)((long)plVar18 + uVar22 + 0x10);
          uVar23 = *puVar3;
          uVar9 = puVar3[1];
          pcVar28 = (char *)((long)plVar25 + uVar22);
          *(undefined4 *)pcVar28 = *puVar2;
          *(undefined4 *)(pcVar28 + 4) = uVar6;
          *(undefined4 *)(pcVar28 + 8) = uVar7;
          *(undefined4 *)(pcVar28 + 0xc) = uVar8;
          pcVar28 = (char *)((long)plVar25 + uVar22 + 0x10);
          *(undefined8 *)pcVar28 = uVar23;
          *(undefined8 *)(pcVar28 + 8) = uVar9;
          uVar22 = uVar22 + 0x20;
        } while ((uVar13 * 8 & 0xffffffffffffffe0) != uVar22);
        plVar18 = plVar18 + uVar21;
        plVar25 = plVar25 + uVar21;
        if (uVar13 == uVar21) goto code_r0x00493380;
      }
      do {
        *plVar25 = *plVar18;
        plVar25 = plVar25 + 1;
        plVar18 = plVar18 + 1;
      } while (plVar25 < plVar38);
code_r0x00493380:
      do {
        *(short *)plVar38 = (short)plVar30 - (short)plVar35;
        puVar1 = (ulong *)((long)plVar30 + 4);
        puVar41 = (ulong *)((long)plVar35 + 4);
        puVar37 = puVar1;
        if (puVar1 < puVar34) {
          if (*puVar41 == *puVar1) {
            puVar41 = (ulong *)((long)plVar35 + 0xc);
            puVar37 = (ulong *)((long)plVar30 + 0xc);
            goto code_r0x004933af;
          }
          uVar20 = 0;
          for (uVar13 = *puVar1 ^ *puVar41; (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar20 = uVar20 >> 3;
        }
        else {
code_r0x004933af:
          if (puVar37 < puVar34) {
            iVar39 = ((int)puVar37 - (int)plVar30) + -4;
code_r0x004933d0:
            if (*puVar41 == *puVar37) goto code_r0x004933db;
            uVar20 = 0;
            for (uVar13 = *puVar37 ^ *puVar41; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar20 = (uVar20 >> 3) + iVar39;
            goto code_r0x00493422;
          }
code_r0x0049357e:
          if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 8))) &&
             ((int)*puVar41 == (int)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar41 = (ulong *)((long)puVar41 + 4);
          }
          if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 6))) &&
             ((short)*puVar41 == (short)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar41 = (ulong *)((long)puVar41 + 2);
          }
          if (puVar37 < (ulong *)((long)plVar24 + (uVar14 - 5))) {
            puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar41 == (char)*puVar37));
          }
          uVar20 = (int)puVar37 - (int)puVar1;
        }
code_r0x00493422:
        if (pcVar27 < (char *)((long)plVar38 + (ulong)(uVar20 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcVar28 = (char *)((long)plVar38 + 2);
        if (uVar20 < 0xf) {
          *pcVar11 = *pcVar11 + (char)uVar20;
          pcVar11 = pcVar28;
        }
        else {
          *pcVar11 = *pcVar11 + '\x0f';
          uVar15 = uVar20 - 0xf;
          pcVar28[0] = -1;
          pcVar28[1] = -1;
          pcVar28[2] = -1;
          pcVar28[3] = -1;
          if (0x3fb < uVar15) {
            uVar13 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar38 + 6),0xff,uVar13 + 4);
            pcVar28 = (char *)((long)plVar38 + uVar13 + 6);
            uVar15 = (uVar20 - 0x40b) % 0x3fc;
          }
          uVar10 = uVar15 * 0x8081 >> 0x17;
          pcVar28[uVar10] = (char)uVar10 + (char)uVar15;
          pcVar11 = pcVar28 + (ulong)uVar10 + 1;
        }
        plVar18 = (long *)((long)plVar30 + (ulong)uVar20 + 4);
        if (plVar16 <= plVar18) goto code_r0x004941e4;
        lVar36 = (long)plVar30 + (ulong)uVar20;
        *(int *)(puVar26 + ((ulong)(*(long *)(lVar36 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)lVar36 + 2) - iVar33;
        uVar13 = (ulong)(*(long *)(lVar36 + 4) * -0x30e4432345000000) >> 0x34;
        uVar15 = (int)plVar18 - iVar33;
        uVar20 = *(uint *)(puVar26 + uVar13 * 4);
        *(uint *)(puVar26 + uVar13 * 4) = uVar15;
        if ((uVar20 + 0xffff < uVar15) ||
           (plVar35 = (long *)((ulong)uVar20 + lVar17), (int)*plVar35 != (int)*plVar18))
        goto code_r0x00493150;
        plVar38 = (long *)(pcVar11 + 1);
        *pcVar11 = '\0';
        plVar30 = plVar18;
      } while( true );
    }
  }
  else if ((int)uVar20 < 0x1000b) {
    if (uVar20 < 0x7e000001) {
      if (uVar20 != 0) {
        uVar40 = *(uint *)(puVar26 + 0x4010);
        uVar13 = (ulong)uVar40;
        *(uint *)(puVar26 + 0x4018) = *(int *)(puVar26 + 0x4018) + uVar20;
        *(uint *)(puVar26 + 0x4010) = uVar40 + uVar20;
        *(undefined4 *)(puVar26 + 0x4014) = 3;
        plVar38 = plVar24;
        pcVar11 = extraout_RDX;
        if (uVar20 < 0xd) {
code_r0x00494084:
          uVar13 = (long)plVar24 + (uVar14 - (long)plVar38);
          if (uVar13 < 0xf) {
            *pcVar11 = (char)uVar13 << 4;
          }
          else {
            uVar14 = uVar13 - 0xf;
            *pcVar11 = -0x10;
            pcVar27 = pcVar11 + 1;
            if (0xfe < uVar14) {
              uVar14 = (uVar13 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar27,0xff,uVar14 + 1);
              pcVar27 = pcVar11 + uVar14 + 2;
              uVar14 = (uVar13 + uVar14 * -0xff) - 0x10e;
            }
            *pcVar27 = (char)uVar14;
            pcVar11 = pcVar27;
          }
          func_0x0099bda0(pcVar11 + 1,plVar38,uVar13);
          return (ulong)(uint)(((int)(pcVar11 + 1) + (int)uVar13) - iVar32);
        }
        lVar17 = (long)plVar24 - uVar13;
        plVar30 = (long *)((long)plVar24 + (uVar14 - 0xb));
        *(short *)(puVar26 + (ulong)((uint)((int)*plVar24 * -0x61c8864f) >> 0x13) * 2) =
             (short)uVar40;
        puVar34 = (ulong *)((long)plVar24 + (uVar14 - 0xc));
code_r0x00493c7b:
        iVar33 = *(int *)((long)plVar38 + 1);
        uVar21 = 1;
        plVar18 = (long *)((long)plVar38 + 1);
        uVar20 = 0x40;
        do {
          plVar16 = plVar18;
          plVar18 = (long *)(uVar21 + (long)plVar16);
          if (plVar30 < plVar18) goto code_r0x00494084;
          uVar21 = (ulong)(uVar20 >> 6);
          uVar20 = uVar20 + 1;
          uVar31 = (ulong)((uint)(iVar33 * -0x61c8864f) >> 0x13);
          uVar22 = (ulong)*(ushort *)(puVar26 + uVar31 * 2);
          sVar5 = (short)lVar17;
          iVar33 = (int)*plVar18;
          *(short *)(puVar26 + uVar31 * 2) = (short)plVar16 - sVar5;
        } while (*(int *)(lVar17 + uVar22) != (int)*plVar16);
        plVar18 = (long *)(lVar17 + uVar22);
        plVar35 = plVar16;
        if ((uVar13 < uVar22) && (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar18 + -1))) {
          plVar25 = (long *)((long)plVar24 + uVar22 + ~uVar13);
          plVar19 = (long *)((long)plVar16 + -1);
          plVar12 = (long *)((long)plVar16 + -1);
          do {
            plVar16 = plVar12;
            plVar35 = plVar19;
            plVar18 = plVar25;
            if ((plVar18 <= plVar24) || (plVar35 <= plVar38)) break;
            plVar25 = (long *)((long)plVar18 + -1);
            plVar19 = (long *)((long)plVar35 + -1);
            plVar12 = (long *)((long)plVar16 + -1);
          } while (*(char *)((long)plVar35 + -1) == *(char *)((long)plVar18 + -1));
        }
        uVar21 = (long)plVar16 - (long)plVar38;
        plVar25 = (long *)(pcVar11 + 1);
        if ((uint)uVar21 < 0xf) {
          *pcVar11 = (char)uVar21 << 4;
        }
        else {
          uVar20 = (uint)uVar21 - 0xf;
          *pcVar11 = -0x10;
          if (0xfe < uVar20) {
            iStack_80e8 = (int)plVar38;
            iStack_80e8 = (int)plVar16 - iStack_80e8;
            uVar20 = iStack_80e8 - 0x10e;
            uVar22 = (ulong)uVar20 / 0xff;
            func_0x0099bdb0(plVar25,0xff,uVar22 + 1);
            plVar25 = (long *)(pcVar11 + uVar22 + 2);
            uVar20 = (iStack_80e8 + uVar20 / 0xff) - 0x10e;
          }
          *(char *)plVar25 = (char)uVar20;
          plVar25 = (long *)((long)plVar25 + 1);
        }
        uVar21 = uVar21 & 0xffffffff;
        plVar16 = (long *)((long)plVar25 + uVar21);
        uVar22 = 8;
        if (8 < uVar21) {
          uVar22 = uVar21;
        }
        plVar12 = plVar38;
        plVar19 = plVar25;
        pcVar27 = pcVar11;
        if ((0x18 < uVar21) && (0x1f < (ulong)((long)plVar25 - (long)plVar38))) {
          uVar21 = (uVar22 - 1 >> 3) + 1;
          uVar22 = uVar21 & 0xfffffffffffffffc;
          plVar12 = plVar38 + uVar22;
          plVar19 = plVar25 + uVar22;
          uVar31 = 0;
          do {
            puVar2 = (undefined4 *)((long)plVar38 + uVar31);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)((long)plVar38 + uVar31 + 0x10);
            uVar23 = *puVar3;
            uVar9 = puVar3[1];
            pcVar11 = (char *)((long)plVar25 + uVar31);
            *(undefined4 *)pcVar11 = *puVar2;
            *(undefined4 *)(pcVar11 + 4) = uVar6;
            *(undefined4 *)(pcVar11 + 8) = uVar7;
            *(undefined4 *)(pcVar11 + 0xc) = uVar8;
            pcVar11 = (char *)((long)plVar25 + uVar31 + 0x10);
            *(undefined8 *)pcVar11 = uVar23;
            *(undefined8 *)(pcVar11 + 8) = uVar9;
            uVar31 = uVar31 + 0x20;
          } while ((uVar21 * 8 & 0xffffffffffffffe0) != uVar31);
          if (uVar21 == uVar22) goto code_r0x00493e30;
        }
        do {
          *plVar19 = *plVar12;
          plVar19 = plVar19 + 1;
          plVar12 = plVar12 + 1;
        } while (plVar19 < plVar16);
code_r0x00493e30:
        do {
          *(short *)plVar16 = (short)plVar35 - (short)plVar18;
          pcVar11 = (char *)((long)plVar16 + 2);
          puVar1 = (ulong *)((long)plVar35 + 4);
          puVar41 = (ulong *)((long)plVar18 + 4);
          puVar37 = puVar1;
          if (puVar1 < puVar34) {
            if (*puVar41 == *puVar1) {
              puVar41 = (ulong *)((long)plVar18 + 0xc);
              puVar37 = (ulong *)((long)plVar35 + 0xc);
              goto code_r0x00493e70;
            }
            uVar20 = 0;
            for (uVar21 = *puVar1 ^ *puVar41; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar21 = (ulong)(uVar20 >> 3);
            plVar38 = (long *)((long)plVar35 + uVar21 + 4);
code_r0x00493f60:
            *pcVar27 = *pcVar27 + (char)uVar21;
          }
          else {
code_r0x00493e70:
            if (puVar37 < puVar34) {
              if (*puVar41 == *puVar37) goto code_r0x00493e85;
              uVar20 = 0;
              for (uVar21 = *puVar37 ^ *puVar41; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              puVar37 = (ulong *)((long)puVar37 + (ulong)(uVar20 >> 3));
            }
            else {
              if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 8))) &&
                 ((int)*puVar41 == (int)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar41 = (ulong *)((long)puVar41 + 4);
              }
              if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 6))) &&
                 ((short)*puVar41 == (short)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar41 = (ulong *)((long)puVar41 + 2);
              }
              if (puVar37 < (ulong *)((long)plVar24 + (uVar14 - 5))) {
                puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar41 == (char)*puVar37));
              }
            }
            uVar21 = (long)puVar37 - (long)puVar1;
            uVar20 = (uint)uVar21;
            plVar38 = (long *)((long)plVar35 + (uVar21 & 0xffffffff) + 4);
            if (uVar20 < 0xf) goto code_r0x00493f60;
            *pcVar27 = *pcVar27 + '\x0f';
            uVar40 = uVar20 - 0xf;
            pcVar11[0] = -1;
            pcVar11[1] = -1;
            pcVar11[2] = -1;
            pcVar11[3] = -1;
            if (0x3fb < uVar40) {
              uVar21 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar21 + 4);
              pcVar11 = (char *)((long)plVar16 + uVar21 + 6);
              uVar40 = (uVar20 - 0x40b) % 0x3fc;
            }
            uVar20 = uVar40 * 0x8081 >> 0x17;
            pcVar11[uVar20] = (char)uVar20 + (char)uVar40;
            pcVar11 = pcVar11 + (ulong)uVar20 + 1;
          }
          if (plVar30 <= plVar38) goto code_r0x00494084;
          *(short *)(puVar26 +
                    (ulong)((uint)(*(int *)((long)plVar38 + -2) * -0x61c8864f) >> 0x13) * 2) =
               ((short)plVar38 + -2) - sVar5;
          uVar21 = (ulong)((uint)((int)*plVar38 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)(puVar26 + uVar21 * 2);
          plVar18 = (long *)(lVar17 + (ulong)uVar4);
          *(short *)(puVar26 + uVar21 * 2) = (short)plVar38 - sVar5;
          if (*(int *)(lVar17 + (ulong)uVar4) != (int)*plVar38) goto code_r0x00493c7b;
          plVar16 = (long *)(pcVar11 + 1);
          *pcVar11 = '\0';
          pcVar27 = pcVar11;
          plVar35 = plVar38;
        } while( true );
      }
      goto code_r0x004936d6;
    }
  }
  else if (uVar20 < 0x7e000001) {
    uVar40 = *(uint *)(puVar26 + 0x4010);
    lVar17 = (long)plVar24 - (ulong)uVar40;
    plVar18 = (long *)((long)plVar24 + (uVar14 - 0xb));
    *(uint *)(puVar26 + 0x4018) = *(int *)(puVar26 + 0x4018) + uVar20;
    *(uint *)(puVar26 + 0x4010) = uVar20 + uVar40;
    *(undefined4 *)(puVar26 + 0x4014) = 2;
    *(uint *)(puVar26 + ((ulong)(*plVar24 * -0x30e4432345000000) >> 0x34) * 4) = uVar40;
    plVar38 = (long *)((long)plVar24 + 2);
    puVar34 = (ulong *)((long)plVar24 + (uVar14 - 0xc));
    pcVar11 = extraout_RDX;
    plVar30 = plVar24;
code_r0x00492d1f:
    uVar13 = 1;
    lVar36 = *(long *)((long)plVar30 + 1);
    uVar21 = 0x41;
    plVar16 = (long *)((long)plVar30 + 1);
    while( true ) {
      plVar35 = plVar38;
      uVar31 = (ulong)(lVar36 * -0x30e4432345000000) >> 0x34;
      uVar20 = *(uint *)(puVar26 + uVar31 * 4);
      uVar22 = (ulong)uVar20;
      iVar33 = (int)lVar17;
      uVar15 = (int)plVar16 - iVar33;
      lVar36 = *plVar35;
      *(uint *)(puVar26 + uVar31 * 4) = uVar15;
      if ((uVar15 <= uVar20 + 0xffff) && (*(int *)(lVar17 + uVar22) == (int)*plVar16)) break;
      plVar38 = (long *)(uVar13 + (long)plVar35);
      uVar13 = uVar21 >> 6;
      uVar21 = (ulong)((int)uVar21 + 1);
      plVar16 = plVar35;
      if (plVar18 < plVar38) goto code_r0x00493622;
    }
    plVar38 = (long *)(lVar17 + uVar22);
    plVar35 = plVar16;
    if ((uVar40 < uVar20) && (*(char *)((long)plVar16 - 1) == *(char *)((long)plVar38 + -1))) {
      plVar25 = (long *)((long)plVar24 + uVar22 + ~(ulong)uVar40);
      plVar19 = (long *)((long)plVar16 - 1U);
      plVar12 = (long *)((long)plVar16 - 1U);
      do {
        plVar16 = plVar12;
        plVar35 = plVar19;
        plVar38 = plVar25;
        if ((plVar38 <= plVar24) || (plVar35 <= plVar30)) break;
        plVar25 = (long *)((long)plVar38 + -1);
        plVar19 = (long *)((long)plVar35 + -1);
        plVar12 = (long *)((long)plVar16 - 1);
      } while (*(char *)((long)plVar35 + -1) == *(char *)((long)plVar38 + -1));
    }
    uVar13 = (long)plVar16 - (long)plVar30;
    plVar25 = (long *)(pcVar11 + 1);
    if ((uint)uVar13 < 0xf) {
      *pcVar11 = (char)uVar13 << 4;
    }
    else {
      uVar20 = (uint)uVar13 - 0xf;
      *pcVar11 = -0x10;
      if (0xfe < uVar20) {
        iVar39 = (int)plVar16 - (int)plVar30;
        uVar21 = (ulong)(iVar39 - 0x10e) / 0xff;
        func_0x0099bdb0(plVar25,0xff,uVar21 + 1);
        plVar25 = (long *)(pcVar11 + uVar21 + 2);
        uVar20 = (iVar39 + (int)uVar21 * -0xff) - 0x10e;
      }
      *(char *)plVar25 = (char)uVar20;
      plVar25 = (long *)((long)plVar25 + 1);
    }
    uVar13 = uVar13 & 0xffffffff;
    plVar16 = (long *)((long)plVar25 + uVar13);
    uVar21 = 8;
    if (8 < uVar13) {
      uVar21 = uVar13;
    }
    if ((0x18 < uVar13) && (0x1f < (ulong)((long)plVar25 - (long)plVar30))) {
      uVar13 = (uVar21 - 1 >> 3) + 1;
      uVar21 = uVar13 & 0x3ffffffffffffffc;
      uVar22 = 0;
      do {
        puVar2 = (undefined4 *)((long)plVar30 + uVar22);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined8 *)((long)plVar30 + uVar22 + 0x10);
        uVar23 = *puVar3;
        uVar9 = puVar3[1];
        pcVar27 = (char *)((long)plVar25 + uVar22);
        *(undefined4 *)pcVar27 = *puVar2;
        *(undefined4 *)(pcVar27 + 4) = uVar6;
        *(undefined4 *)(pcVar27 + 8) = uVar7;
        *(undefined4 *)(pcVar27 + 0xc) = uVar8;
        pcVar27 = (char *)((long)plVar25 + uVar22 + 0x10);
        *(undefined8 *)pcVar27 = uVar23;
        *(undefined8 *)(pcVar27 + 8) = uVar9;
        uVar22 = uVar22 + 0x20;
      } while ((uVar13 * 8 & 0xffffffffffffffe0) != uVar22);
      plVar30 = plVar30 + uVar21;
      plVar25 = plVar25 + uVar21;
      if (uVar13 == uVar21) goto code_r0x00492ee0;
    }
    do {
      *plVar25 = *plVar30;
      plVar25 = plVar25 + 1;
      plVar30 = plVar30 + 1;
    } while (plVar25 < plVar16);
code_r0x00492ee0:
    do {
      *(short *)plVar16 = (short)plVar35 - (short)plVar38;
      pcVar27 = (char *)((long)plVar16 + 2);
      puVar1 = (ulong *)((long)plVar35 + 4);
      puVar41 = (ulong *)((long)plVar38 + 4);
      puVar37 = puVar1;
      if (puVar1 < puVar34) {
        if (*puVar41 == *puVar1) {
          puVar41 = (ulong *)((long)plVar38 + 0xc);
          puVar37 = (ulong *)((long)plVar35 + 0xc);
          goto code_r0x00492f19;
        }
        uVar20 = 0;
        for (uVar13 = *puVar1 ^ *puVar41; (uVar13 & 1) == 0;
            uVar13 = uVar13 >> 1 | 0x8000000000000000) {
          uVar20 = uVar20 + 1;
        }
        uVar13 = (ulong)(uVar20 >> 3);
        plVar30 = (long *)((long)plVar35 + uVar13 + 4);
code_r0x00493090:
        *pcVar11 = *pcVar11 + (char)uVar13;
        pcVar11 = pcVar27;
      }
      else {
code_r0x00492f19:
        if (puVar37 < puVar34) {
code_r0x00492f30:
          if (*puVar41 == *puVar37) goto code_r0x00492f3f;
          uVar20 = 0;
          for (uVar13 = *puVar37 ^ *puVar41; (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          puVar37 = (ulong *)((long)puVar37 + (ulong)(uVar20 >> 3));
          goto code_r0x00492fde;
        }
code_r0x00492f4c:
        if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 8))) && ((int)*puVar41 == (int)*puVar37))
        {
          puVar37 = (ulong *)((long)puVar37 + 4);
          puVar41 = (ulong *)((long)puVar41 + 4);
        }
        if ((puVar37 < (ulong *)((long)plVar24 + (uVar14 - 6))) &&
           ((short)*puVar41 == (short)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 2);
          puVar41 = (ulong *)((long)puVar41 + 2);
        }
        if (puVar37 < (ulong *)((long)plVar24 + (uVar14 - 5))) {
          puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar41 == (char)*puVar37));
        }
code_r0x00492fde:
        uVar13 = (long)puVar37 - (long)puVar1;
        uVar20 = (uint)uVar13;
        plVar30 = (long *)((long)plVar35 + (uVar13 & 0xffffffff) + 4);
        if (uVar20 < 0xf) goto code_r0x00493090;
        *pcVar11 = *pcVar11 + '\x0f';
        uVar15 = uVar20 - 0xf;
        pcVar27[0] = -1;
        pcVar27[1] = -1;
        pcVar27[2] = -1;
        pcVar27[3] = -1;
        if (0x3fb < uVar15) {
          uVar13 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
          func_0x0099bdb0((char *)((long)plVar16 + 6),0xff,uVar13 + 4);
          pcVar27 = (char *)((long)plVar16 + uVar13 + 6);
          uVar15 = (uVar20 - 0x40b) % 0x3fc;
        }
        uVar20 = uVar15 * 0x8081 >> 0x17;
        pcVar27[uVar20] = (char)uVar20 + (char)uVar15;
        pcVar11 = pcVar27 + (ulong)uVar20 + 1;
      }
      if (plVar18 <= plVar30) goto code_r0x00493622;
      *(int *)(puVar26 + ((ulong)(*(long *)((long)plVar30 + -2) * -0x30e4432345000000) >> 0x34) * 4)
           = ((int)plVar30 + -2) - iVar33;
      uVar13 = (ulong)(*plVar30 * -0x30e4432345000000) >> 0x34;
      uVar15 = (int)plVar30 - iVar33;
      uVar20 = *(uint *)(puVar26 + uVar13 * 4);
      *(uint *)(puVar26 + uVar13 * 4) = uVar15;
      if ((uVar20 + 0xffff < uVar15) ||
         (plVar38 = (long *)((ulong)uVar20 + lVar17), (int)*plVar38 != (int)*plVar30))
      goto code_r0x00492d00;
      plVar16 = (long *)(pcVar11 + 1);
      *pcVar11 = '\0';
      plVar35 = plVar30;
    } while( true );
  }
  return 0;
code_r0x00492f3f:
  puVar37 = puVar37 + 1;
  puVar41 = puVar41 + 1;
  if (puVar34 <= puVar37) goto code_r0x00492f4c;
  goto code_r0x00492f30;
code_r0x00492d00:
  plVar38 = (long *)((long)plVar30 + 2);
  if (plVar18 < plVar38) {
code_r0x00493622:
    uVar13 = (long)plVar24 + (uVar14 - (long)plVar30);
    if (uVar13 < 0xf) {
      *pcVar11 = (char)uVar13 << 4;
    }
    else {
      uVar14 = uVar13 - 0xf;
      *pcVar11 = -0x10;
      pcVar27 = pcVar11 + 1;
      if (0xfe < uVar14) {
        uVar14 = (uVar13 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar27,0xff,uVar14 + 1);
        pcVar27 = pcVar11 + uVar14 + 2;
        uVar14 = (uVar14 * -0xff + uVar13) - 0x10e;
      }
      *pcVar27 = (char)uVar14;
      pcVar11 = pcVar27;
    }
    func_0x0099bda0(pcVar11 + 1,plVar30,uVar13);
    return (ulong)(uint)(((int)(pcVar11 + 1) + (int)uVar13) - iVar32);
  }
  goto code_r0x00492d1f;
code_r0x00493e85:
  puVar41 = puVar41 + 1;
  puVar37 = puVar37 + 1;
  goto code_r0x00493e70;
code_r0x004939bb:
  puVar37 = puVar37 + 1;
  puVar41 = puVar41 + 1;
  iVar33 = iVar33 + 8;
  if (puVar34 <= puVar37) goto code_r0x004939cb;
  goto code_r0x004939b0;
code_r0x004933db:
  puVar37 = puVar37 + 1;
  puVar41 = puVar41 + 1;
  iVar39 = iVar39 + 8;
  if (puVar34 <= puVar37) goto code_r0x0049357e;
  goto code_r0x004933d0;
code_r0x00493150:
  plVar30 = (long *)(lVar36 + 5);
  plVar38 = (long *)(lVar36 + 6);
  if (plVar16 < plVar38) {
code_r0x004941e4:
    uVar13 = (long)plVar24 + (uVar14 - (long)plVar18);
    if (pcVar27 < pcVar11 + (uVar13 + 0xf0) / 0xff + uVar13 + 1) {
      return 0;
    }
    if (uVar13 < 0xf) {
      *pcVar11 = (char)uVar13 << 4;
    }
    else {
      uVar14 = uVar13 - 0xf;
      *pcVar11 = -0x10;
      pcVar27 = pcVar11 + 1;
      if (0xfe < uVar14) {
        uVar14 = (uVar13 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar27,0xff,uVar14 + 1);
        pcVar27 = pcVar11 + uVar14 + 2;
        uVar14 = (uVar13 + uVar14 * -0xff) - 0x10e;
      }
      *pcVar27 = (char)uVar14;
      pcVar11 = pcVar27;
    }
    func_0x0099bda0(pcVar11 + 1,plVar18,uVar13);
    return (ulong)(uint)(((int)(pcVar11 + 1) + (int)uVar13) - iVar32);
  }
  goto code_r0x00493178;
}


