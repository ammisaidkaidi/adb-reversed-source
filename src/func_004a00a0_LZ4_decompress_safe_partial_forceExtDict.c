// Function: LZ4_decompress_safe_partial_forceExtDict
// Address: 004a00a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_safe_partial_forceExtDict
              (undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3,uint param_4,
              uint param_5,long param_6,ulong param_7)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 *puVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  int iStack_80;
  
  if ((int)param_4 < (int)param_5) {
    param_5 = param_4;
  }
  iVar20 = -1;
  if (-1 < (int)param_5 && param_1 != (undefined1 (*) [16])0x0) {
    lVar8 = param_7 + param_6;
    if (param_6 == 0) {
      lVar8 = 0;
    }
    if (param_5 == 0) {
      iVar20 = 0;
    }
    else if (param_3 != 0) {
      puVar1 = *param_1 + param_3;
      pauVar2 = (undefined1 (*) [16])(*param_2 + param_5);
      pauVar21 = param_2;
      pauVar10 = param_1;
      if (param_5 < 0x40) goto code_r0x004a0da2;
      pauVar12 = (undefined1 (*) [16])(puVar1 + -0xf);
      pauVar23 = param_1;
code_r0x004a01bb:
      while( true ) {
        pauVar11 = (undefined1 (*) [16])(*pauVar23 + 1);
        bVar3 = (*pauVar23)[0];
        uVar13 = (uint)bVar3;
        uVar29 = (ulong)(uint)(bVar3 >> 4);
        if (bVar3 >> 4 == 0xf) {
          pauVar25 = pauVar11;
          if ((pauVar12 <= pauVar11) ||
             (pauVar25 = (undefined1 (*) [16])(*pauVar23 + 2), pauVar12 < pauVar25))
          goto code_r0x004a0eb8;
          uVar29 = (ulong)(byte)(*pauVar11)[0];
          if (uVar29 == 0xff) {
            uVar29 = 0xff;
            pauVar10 = pauVar25;
            do {
              pauVar25 = (undefined1 (*) [16])(*pauVar10 + 1);
              if (pauVar12 < pauVar25) goto code_r0x004a0eb8;
              puVar15 = *pauVar10;
              uVar29 = uVar29 + (byte)*puVar15;
              pauVar10 = pauVar25;
            } while ((ulong)(byte)*puVar15 == 0xff);
            if (uVar29 == 0xffffffffffffffff) goto code_r0x004a0eb8;
          }
          uVar29 = uVar29 + 0xf;
          puVar9 = (ushort *)(*pauVar25 + uVar29);
          pauVar22 = (undefined1 (*) [16])(*pauVar21 + uVar29);
          if ((CARRY8((ulong)pauVar21,uVar29)) || (CARRY8((ulong)pauVar25,uVar29)))
          goto code_r0x004a0eb8;
          pauVar11 = pauVar25;
          if ((undefined1 (*) [16])(param_2[-2] + param_5) < pauVar22) goto code_r0x004a0876;
          if (puVar1 + -0x20 < puVar9) goto code_r0x004a0876;
          lVar14 = 0;
          do {
            uVar5 = *(undefined8 *)((long)(*pauVar25 + lVar14) + 8);
            *(undefined8 *)(*pauVar21 + lVar14) = *(undefined8 *)(*pauVar25 + lVar14);
            *(undefined8 *)((long)(*pauVar21 + lVar14) + 8) = uVar5;
            *(undefined1 (*) [16])(pauVar21[1] + lVar14) =
                 *(undefined1 (*) [16])(pauVar25[1] + lVar14);
            pauVar10 = (undefined1 (*) [16])(pauVar21[2] + lVar14);
            lVar14 = lVar14 + 0x20;
          } while (pauVar10 < pauVar22);
        }
        else {
          if ((undefined1 (*) [16])(puVar1 + -0x11) < pauVar11) goto code_r0x004a0876;
          *pauVar21 = *pauVar11;
          puVar9 = (ushort *)(*pauVar11 + uVar29);
          pauVar22 = (undefined1 (*) [16])(*pauVar21 + uVar29);
        }
        uVar4 = *puVar9;
        uVar26 = (ulong)uVar4;
        pauVar23 = (undefined1 (*) [16])(puVar9 + 1);
        pauVar27 = (undefined1 (*) [16])((long)pauVar22 - uVar26);
        uVar30 = (ulong)(bVar3 & 0xf);
        if (uVar30 == 0xf) break;
        pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30 + 4);
        uVar30 = uVar30 + 4;
        pauVar10 = pauVar23;
        if (pauVar2 + -4 <= pauVar21) goto code_r0x004a0a08;
        if ((pauVar27 < param_2) || (uVar4 < 8)) goto code_r0x004a0320;
        *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar27;
        *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(*pauVar27 + 8);
        *(undefined2 *)pauVar22[1] = *(undefined2 *)pauVar27[1];
      }
      pauVar10 = (undefined1 (*) [16])((long)puVar9 + 3);
      pauVar25 = pauVar10;
      if ((undefined1 (*) [16])(puVar1 + -4) < pauVar10) goto code_r0x004a0eb8;
      uVar29 = (ulong)(byte)(*pauVar23)[0];
      if (uVar29 == 0xff) {
        uVar29 = 0xff;
        pauVar21 = pauVar10;
        do {
          pauVar10 = (undefined1 (*) [16])(*pauVar21 + 1);
          pauVar25 = pauVar10;
          if ((undefined1 (*) [16])(puVar1 + -4) < pauVar10) goto code_r0x004a0eb8;
          puVar15 = *pauVar21;
          uVar29 = uVar29 + (byte)*puVar15;
          pauVar21 = pauVar10;
        } while ((ulong)(byte)*puVar15 == 0xff);
        if (uVar29 == 0xffffffffffffffff) goto code_r0x004a0eb8;
      }
      uVar30 = uVar29 + 0x13;
      pauVar25 = pauVar10;
      if (CARRY8((ulong)pauVar22,uVar30)) goto code_r0x004a0eb8;
      pauVar23 = pauVar10;
      if ((undefined1 (*) [16])(pauVar22[1] + uVar29 + 3) < pauVar2 + -4) {
code_r0x004a0320:
        pauVar25 = pauVar23;
        if (param_7 < 0x10000 && (undefined1 (*) [16])(*pauVar27 + param_7) < param_2)
        goto code_r0x004a0eb8;
        pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30);
        if (param_2 <= pauVar27) {
          if (0xf < uVar4) {
            do {
              puVar16 = (undefined8 *)((long)pauVar22 + -uVar26);
              uVar5 = puVar16[1];
              *(undefined8 *)*pauVar22 = *puVar16;
              *(undefined8 *)(*pauVar22 + 8) = uVar5;
              puVar16 = (undefined8 *)((long)pauVar22 + -uVar26 + 0x10);
              uVar5 = puVar16[1];
              *(undefined8 *)pauVar22[1] = *puVar16;
              *(undefined8 *)(pauVar22[1] + 8) = uVar5;
              pauVar22 = pauVar22 + 2;
            } while (pauVar22 < pauVar21);
            goto code_r0x004a01bb;
          }
          if (uVar26 == 4) {
            uVar13 = *(uint *)*pauVar27;
            uVar17 = uVar13 >> 0x10;
            uVar18 = uVar13;
          }
          else {
            if (uVar4 == 2) {
              uVar4 = *(ushort *)*pauVar27;
              uVar18 = CONCAT22(uVar4,uVar4);
            }
            else {
              if (uVar4 != 1) {
                if (uVar4 < 8) {
                  *(undefined4 *)*pauVar22 = 0;
                  (*pauVar22)[0] = (*pauVar27)[0];
                  (*pauVar22)[1] = (*pauVar27)[1];
                  (*pauVar22)[2] = (*pauVar27)[2];
                  (*pauVar22)[3] = (*pauVar27)[3];
                  uVar13 = *(uint *)(&UNK_001fe790 + (ulong)uVar4 * 4);
                  *(undefined4 *)(*pauVar22 + 4) = *(undefined4 *)(*pauVar27 + uVar13);
                  puVar16 = (undefined8 *)
                            ((long)pauVar27 +
                            ((ulong)uVar13 - (long)*(int *)(&UNK_001fe630 + (ulong)uVar4 * 4)));
                }
                else {
                  *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar27;
                  puVar16 = (undefined8 *)(*pauVar27 + 8);
                }
                pauVar10 = (undefined1 (*) [16])(*pauVar22 + uVar30);
                if ((undefined1 (*) [16])(*pauVar22 + uVar30) <= pauVar22 + 1) {
                  pauVar10 = pauVar22 + 1;
                }
                pauVar11 = (undefined1 (*) [16])(*pauVar22 + 8);
                puVar15 = (undefined1 *)((long)pauVar10 + (-9 - (long)pauVar22));
                if (((undefined1 *)0x17 < puVar15) &&
                   ((undefined1 *)0x1f < (undefined1 *)((long)pauVar22 + (8 - (long)puVar16)))) {
                  uVar26 = ((ulong)puVar15 >> 3) + 1;
                  uVar29 = uVar26 & 0x3ffffffffffffffc;
                  pauVar11 = (undefined1 (*) [16])(*pauVar11 + uVar29 * 8);
                  uVar30 = 0;
                  do {
                    uVar5 = puVar16[uVar30 + 2];
                    uVar6 = (puVar16 + uVar30 + 2)[1];
                    *(undefined1 (*) [16])(*pauVar22 + uVar30 * 8 + 8) =
                         *(undefined1 (*) [16])(puVar16 + uVar30);
                    *(undefined8 *)(pauVar22[1] + uVar30 * 8 + 8) = uVar5;
                    *(undefined8 *)((long)(pauVar22[1] + uVar30 * 8 + 8) + 8) = uVar6;
                    uVar30 = uVar30 + 4;
                  } while (uVar29 != uVar30);
                  puVar16 = puVar16 + uVar29;
                  if (uVar26 == uVar29) goto code_r0x004a01bb;
                }
                do {
                  *(undefined8 *)*pauVar11 = *puVar16;
                  pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
                  puVar16 = puVar16 + 1;
                } while (pauVar11 < pauVar21);
                goto code_r0x004a01bb;
              }
              bVar3 = (*pauVar27)[0];
              uVar4 = CONCAT11(bVar3,bVar3);
              uVar18 = (uint)bVar3 * 0x1010101;
            }
            uVar13 = (uint)uVar4;
            uVar17 = uVar13;
          }
          uVar13 = uVar13 & 0xffff | uVar17 << 0x10;
          *(ulong *)*pauVar22 = CONCAT44(uVar18,uVar13);
          if (8 < uVar30) {
            pauVar10 = (undefined1 (*) [16])(*pauVar22 + uVar30);
            if ((undefined1 (*) [16])(*pauVar22 + uVar30) <= pauVar22 + 1) {
              pauVar10 = pauVar22 + 1;
            }
            pauVar11 = (undefined1 (*) [16])(*pauVar22 + 8);
            puVar15 = (undefined1 *)((long)pauVar10 + (-9 - (long)pauVar22));
            if ((undefined1 *)0x17 < puVar15) {
              uVar26 = ((ulong)puVar15 >> 3) + 1;
              uVar29 = uVar26 & 0x3ffffffffffffffc;
              pauVar11 = (undefined1 (*) [16])(*pauVar11 + uVar29 * 8);
              auVar31._4_4_ = uVar18;
              auVar31._0_4_ = uVar13;
              auVar31._8_4_ = uVar13;
              auVar31._12_4_ = uVar18;
              uVar30 = 0;
              do {
                *(undefined1 (*) [16])(*pauVar22 + uVar30 * 8 + 8) = auVar31;
                *(undefined1 (*) [16])(pauVar22[1] + uVar30 * 8 + 8) = auVar31;
                uVar30 = uVar30 + 4;
              } while (uVar29 != uVar30);
              if (uVar26 == uVar29) goto code_r0x004a01bb;
            }
            do {
              *(ulong *)*pauVar11 = CONCAT44(uVar18,uVar13);
              pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
            } while (pauVar11 < pauVar21);
          }
          goto code_r0x004a01bb;
        }
        if (((undefined1 (*) [16])(pauVar2[-1] + 0xb) < pauVar21) &&
           ((ulong)((long)pauVar2 - (long)pauVar22) <= uVar30)) {
          uVar30 = (long)pauVar2 - (long)pauVar22;
        }
        uVar29 = (long)param_2 - (long)pauVar27;
        uVar28 = uVar30 - uVar29;
        if (uVar30 < uVar29 || uVar28 == 0) {
          func_0x0099bd90(pauVar22,lVar8 - uVar29,uVar30);
        }
        else {
          func_0x0099bda0(pauVar22,lVar8 - uVar29,uVar29);
          pauVar21 = (undefined1 (*) [16])(uVar29 + (long)pauVar22);
          if ((ulong)((long)pauVar21 - (long)param_2) < uVar28) {
            pauVar11 = (undefined1 (*) [16])(*pauVar22 + uVar30);
            pauVar10 = (undefined1 (*) [16])(*param_2 + uVar26 + 1);
            if ((undefined1 (*) [16])(*param_2 + uVar26 + 1) <= pauVar11) {
              pauVar10 = pauVar11;
            }
            puVar15 = (undefined1 *)((long)pauVar10 + (-uVar26 - (long)param_2));
            pauVar10 = param_2;
            if (((undefined1 *)0x1f < puVar15) && (0x1f < uVar4)) {
              puVar19 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffffe0);
              pauVar21 = (undefined1 (*) [16])(*pauVar21 + (long)puVar19);
              pauVar10 = (undefined1 (*) [16])(*param_2 + (long)puVar19);
              puVar24 = (undefined1 *)0x0;
              do {
                uVar5 = *(undefined8 *)((long)(*param_2 + (long)puVar24) + 8);
                uVar6 = *(undefined8 *)(param_2[1] + (long)puVar24);
                uVar7 = *(undefined8 *)((long)(param_2[1] + (long)puVar24) + 8);
                *(undefined8 *)(*param_2 + (long)(puVar24 + uVar26)) =
                     *(undefined8 *)(*param_2 + (long)puVar24);
                *(undefined8 *)((long)(*param_2 + (long)(puVar24 + uVar26)) + 8) = uVar5;
                *(undefined8 *)(param_2[1] + (long)(puVar24 + uVar26)) = uVar6;
                *(undefined8 *)((long)(param_2[1] + (long)(puVar24 + uVar26)) + 8) = uVar7;
                puVar24 = puVar24 + 0x20;
              } while (puVar19 != puVar24);
              if (puVar15 == puVar19) goto code_r0x004a01bb;
            }
            do {
              (*pauVar21)[0] = (*pauVar10)[0];
              pauVar21 = (undefined1 (*) [16])(*pauVar21 + 1);
              pauVar10 = (undefined1 (*) [16])(*pauVar10 + 1);
            } while (pauVar21 < pauVar11);
            goto code_r0x004a01bb;
          }
          func_0x0099bda0(pauVar21,param_2,uVar28);
        }
        pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30);
        goto code_r0x004a01bb;
      }
code_r0x004a0a08:
      do {
        pauVar25 = pauVar10;
        if (param_7 < 0x10000 && (undefined1 (*) [16])(*pauVar27 + param_7) < param_2) {
code_r0x004a0eb8:
          iStack_80 = (int)param_1;
          return ~(uint)pauVar25 + iStack_80;
        }
        pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30);
        if (pauVar27 < param_2) {
          if (((undefined1 (*) [16])(pauVar2[-1] + 0xb) < pauVar21) &&
             ((ulong)((long)pauVar2 - (long)pauVar22) <= uVar30)) {
            uVar30 = (long)pauVar2 - (long)pauVar22;
          }
          uVar29 = (long)param_2 - (long)pauVar27;
          if (uVar29 < uVar30) {
            func_0x0099bda0(pauVar22,lVar8 - uVar29,uVar29);
            pauVar21 = (undefined1 (*) [16])((long)pauVar22 + uVar29);
            if ((ulong)((long)pauVar21 - (long)param_2) < uVar30 - uVar29) {
              pauVar23 = (undefined1 (*) [16])(*pauVar22 + uVar30);
              puVar15 = *param_2 + (long)*pauVar22;
              pauVar12 = (undefined1 (*) [16])(puVar15 + (1 - (long)pauVar27));
              if ((undefined1 (*) [16])(puVar15 + (1 - (long)pauVar27)) <= pauVar23) {
                pauVar12 = pauVar23;
              }
              puVar15 = (undefined1 *)((long)pauVar27 + ((long)*pauVar12 - (long)puVar15));
              pauVar12 = param_2;
              if (((undefined1 *)0x1f < puVar15) && (0x1f < (ulong)((long)pauVar21 - (long)param_2))
                 ) {
                puVar19 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffffe0);
                pauVar21 = (undefined1 (*) [16])(*pauVar21 + (long)puVar19);
                puVar24 = (undefined1 *)0x0;
                do {
                  uVar5 = *(undefined8 *)((long)(*param_2 + (long)puVar24) + 8);
                  uVar6 = *(undefined8 *)(param_2[1] + (long)puVar24);
                  uVar7 = *(undefined8 *)((long)(param_2[1] + (long)puVar24) + 8);
                  *(undefined8 *)(puVar24 + uVar29 + (long)*pauVar22) =
                       *(undefined8 *)(*param_2 + (long)puVar24);
                  *(undefined8 *)((long)(puVar24 + uVar29 + (long)*pauVar22) + 8) = uVar5;
                  *(undefined8 *)(puVar24 + uVar29 + 0x10 + (long)*pauVar22) = uVar6;
                  *(undefined8 *)((long)(puVar24 + uVar29 + 0x10 + (long)*pauVar22) + 8) = uVar7;
                  puVar24 = puVar24 + 0x20;
                } while (puVar19 != puVar24);
                pauVar12 = (undefined1 (*) [16])(*param_2 + (long)puVar19);
                if (puVar15 == puVar19) goto code_r0x004a0da2;
              }
              do {
                (*pauVar21)[0] = (*pauVar12)[0];
                pauVar21 = (undefined1 (*) [16])(*pauVar21 + 1);
                pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
              } while (pauVar21 < pauVar23);
              goto code_r0x004a0da2;
            }
            func_0x0099bda0();
          }
          else {
            func_0x0099bd90(pauVar22,lVar8 - uVar29,uVar30);
          }
          pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30);
        }
        else if ((undefined1 (*) [16])(pauVar2[-1] + 4) < pauVar21) {
          uVar29 = (long)pauVar2 - (long)pauVar22;
          if (uVar30 < (ulong)((long)pauVar2 - (long)pauVar22)) {
            uVar29 = uVar30;
          }
          pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar29);
          if (pauVar22 < (undefined1 (*) [16])(*pauVar27 + uVar29)) {
            if (uVar29 != 0) {
              puVar15 = *pauVar22 + uVar29;
              if (*pauVar22 + uVar29 <= *pauVar22 + 1) {
                puVar15 = *pauVar22 + 1;
              }
              uVar29 = (long)puVar15 - (long)pauVar22;
              pauVar12 = pauVar22;
              pauVar23 = pauVar27;
              if ((3 < uVar29) && (0x1f < (ulong)((long)pauVar22 - (long)pauVar27))) {
                uVar30 = 0;
                if (0x1f < uVar29) {
                  uVar30 = uVar29 & 0xffffffffffffffe0;
                  uVar26 = 0;
                  do {
                    uVar5 = *(undefined8 *)((long)(*pauVar27 + uVar26) + 8);
                    uVar6 = *(undefined8 *)(pauVar27[1] + uVar26);
                    uVar7 = *(undefined8 *)((long)(pauVar27[1] + uVar26) + 8);
                    *(undefined8 *)(*pauVar22 + uVar26) = *(undefined8 *)(*pauVar27 + uVar26);
                    *(undefined8 *)((long)(*pauVar22 + uVar26) + 8) = uVar5;
                    *(undefined8 *)(pauVar22[1] + uVar26) = uVar6;
                    *(undefined8 *)((long)(pauVar22[1] + uVar26) + 8) = uVar7;
                    uVar26 = uVar26 + 0x20;
                  } while (uVar30 != uVar26);
                  if (uVar29 == uVar30) goto code_r0x004a0d00;
                  pauVar12 = (undefined1 (*) [16])(*pauVar22 + uVar30);
                  pauVar23 = (undefined1 (*) [16])(*pauVar27 + uVar30);
                  if ((uVar29 & 0x1c) == 0) goto code_r0x004a0cf0;
                }
                uVar26 = uVar29 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(*pauVar22 + uVar30) = *(undefined4 *)(*pauVar27 + uVar30);
                  uVar30 = uVar30 + 4;
                } while (uVar26 != uVar30);
                pauVar12 = (undefined1 (*) [16])(*pauVar22 + uVar26);
                pauVar23 = (undefined1 (*) [16])(*pauVar27 + uVar26);
                if (uVar29 == uVar26) goto code_r0x004a0d00;
              }
code_r0x004a0cf0:
              do {
                (*pauVar12)[0] = (*pauVar23)[0];
                puVar15 = *pauVar12;
                pauVar12 = (undefined1 (*) [16])(puVar15 + 1);
                pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
              } while ((undefined1 (*) [16])(puVar15 + 1) < pauVar21);
            }
          }
          else {
            func_0x0099bda0(pauVar22,pauVar27);
          }
code_r0x004a0d00:
          pauVar22 = pauVar2;
          if (pauVar21 == pauVar2) goto code_r0x004a0dda;
        }
        else {
          if ((uint)uVar26 < 8) {
            *(undefined4 *)*pauVar22 = 0;
            (*pauVar22)[0] = (*pauVar27)[0];
            (*pauVar22)[1] = (*pauVar27)[1];
            (*pauVar22)[2] = (*pauVar27)[2];
            (*pauVar22)[3] = (*pauVar27)[3];
            uVar18 = (uint)uVar26 << 2;
            uVar13 = *(uint *)(&UNK_001fe790 + uVar18);
            *(undefined4 *)(*pauVar22 + 4) = *(undefined4 *)(*pauVar27 + uVar13);
            puVar16 = (undefined8 *)
                      ((long)pauVar27 + ((ulong)uVar13 - (long)*(int *)(&UNK_001fe630 + uVar18)));
          }
          else {
            *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar27;
            puVar16 = (undefined8 *)(*pauVar27 + 8);
          }
          *(undefined8 *)(*pauVar22 + 8) = *puVar16;
          if (0x10 < uVar30) {
            puVar15 = *pauVar22 + uVar30;
            if (*pauVar22 + uVar30 <= pauVar22[1] + 8) {
              puVar15 = pauVar22[1] + 8;
            }
            pauVar12 = pauVar22 + 1;
            if (((undefined1 *)0x47 < puVar15 + (-0x11 - (long)pauVar22)) &&
               ((undefined1 *)0x1f < (undefined1 *)((long)pauVar22 + (8 - (long)puVar16)))) {
              uVar26 = ((ulong)(puVar15 + (-0x11 - (long)pauVar22)) >> 3) + 1;
              uVar29 = uVar26 & 0x3ffffffffffffffc;
              pauVar12 = (undefined1 (*) [16])(*pauVar12 + uVar29 * 8);
              uVar30 = 0;
              do {
                uVar5 = (puVar16 + uVar30 + 1)[1];
                uVar6 = puVar16[uVar30 + 3];
                uVar7 = (puVar16 + uVar30 + 3)[1];
                *(undefined8 *)(pauVar22[1] + uVar30 * 8) = puVar16[uVar30 + 1];
                *(undefined8 *)((long)(pauVar22[1] + uVar30 * 8) + 8) = uVar5;
                *(undefined8 *)(pauVar22[2] + uVar30 * 8) = uVar6;
                *(undefined8 *)((long)(pauVar22[2] + uVar30 * 8) + 8) = uVar7;
                uVar30 = uVar30 + 4;
              } while (uVar29 != uVar30);
              puVar16 = puVar16 + uVar29;
              if (uVar26 == uVar29) goto code_r0x004a0da2;
            }
            do {
              *(undefined8 *)*pauVar12 = puVar16[1];
              pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
              puVar16 = puVar16 + 1;
            } while (pauVar12 < pauVar21);
          }
        }
code_r0x004a0da2:
        pauVar11 = (undefined1 (*) [16])(*pauVar10 + 1);
        bVar3 = (*pauVar10)[0];
        while( true ) {
          uVar13 = (uint)bVar3;
          if (bVar3 >> 4 == 0xf) break;
          uVar29 = (ulong)(uint)(bVar3 >> 4);
          if (((undefined1 (*) [16])(param_1[-1] + param_3) <= pauVar11) ||
             ((undefined1 (*) [16])(param_2[-2] + param_5) < pauVar21)) goto code_r0x004a0876;
          uVar5 = *(undefined8 *)(*pauVar11 + 8);
          *(undefined8 *)*pauVar21 = *(undefined8 *)*pauVar11;
          *(undefined8 *)(*pauVar21 + 8) = uVar5;
          pauVar22 = (undefined1 (*) [16])(*pauVar21 + uVar29);
          uVar30 = (ulong)(uVar13 & 0xf);
          uVar26 = (ulong)*(ushort *)(*pauVar11 + uVar29);
          pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar29 + 2);
          pauVar27 = (undefined1 (*) [16])((long)pauVar22 - uVar26);
          if ((((uVar13 & 0xf) == 0xf) || (*(ushort *)(*pauVar11 + uVar29) < 8)) ||
             (pauVar27 < param_2)) goto code_r0x004a09aa;
          *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar27;
          *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(*pauVar27 + 8);
          *(undefined2 *)pauVar22[1] = *(undefined2 *)pauVar27[1];
          pauVar21 = (undefined1 (*) [16])(*pauVar22 + uVar30 + 4);
          bVar3 = (*pauVar11)[uVar29 + 2];
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + uVar29 + 3);
        }
        pauVar12 = (undefined1 (*) [16])(puVar1 + -0xf);
        pauVar25 = pauVar11;
        if ((pauVar12 <= pauVar11) ||
           (pauVar25 = (undefined1 (*) [16])(*pauVar10 + 2), pauVar12 < pauVar25))
        goto code_r0x004a0eb8;
        uVar29 = (ulong)(byte)(*pauVar11)[0];
        pauVar11 = pauVar25;
        if (uVar29 == 0xff) {
          uVar29 = 0xff;
          do {
            pauVar10 = pauVar25;
            pauVar11 = (undefined1 (*) [16])(*pauVar10 + 1);
            if (pauVar12 < pauVar11) goto code_r0x004a0e13;
            uVar29 = uVar29 + (byte)(*pauVar10)[0];
            pauVar25 = pauVar11;
          } while ((ulong)(byte)(*pauVar10)[0] == 0xff);
          if (uVar29 == 0xffffffffffffffff) {
code_r0x004a0e13:
            pauVar25 = (undefined1 (*) [16])(*pauVar10 + 1);
            goto code_r0x004a0eb8;
          }
        }
        uVar29 = uVar29 + 0xf;
        pauVar25 = pauVar11;
        if ((CARRY8((ulong)pauVar21,uVar29)) || (CARRY8((ulong)pauVar11,uVar29)))
        goto code_r0x004a0eb8;
code_r0x004a0876:
        pauVar22 = (undefined1 (*) [16])(*pauVar21 + uVar29);
        if (((undefined1 (*) [16])(pauVar2[-1] + 4) < pauVar22) ||
           (pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar29), puVar1 + -8 < pauVar10)) {
          pauVar10 = pauVar22;
          if (puVar1 < *pauVar11 + uVar29) {
            pauVar10 = (undefined1 (*) [16])((long)pauVar21 + ((long)puVar1 - (long)pauVar11));
          }
          if (pauVar2 < pauVar10) {
            func_0x0099bd90(pauVar21,pauVar11,(long)pauVar2 - (long)pauVar21);
            pauVar22 = pauVar2;
code_r0x004a0dda:
            return (int)pauVar22 - (int)param_2;
          }
          if (puVar1 < *pauVar11 + uVar29) {
            uVar29 = (long)puVar1 - (long)pauVar11;
          }
          func_0x0099bd90(pauVar21,pauVar11,uVar29);
          pauVar22 = (undefined1 (*) [16])(*pauVar21 + uVar29);
          if ((pauVar10 == pauVar2) ||
             (pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar29),
             (undefined1 (*) [16])(puVar1 + -2) <= pauVar10)) goto code_r0x004a0dda;
        }
        else {
          puVar15 = *pauVar21 + uVar29;
          if (*pauVar21 + uVar29 <= *pauVar21 + 8) {
            puVar15 = *pauVar21 + 8;
          }
          if (((undefined1 *)0x37 < puVar15 + ~(ulong)pauVar21) &&
             (0x1f < (ulong)((long)pauVar21 - (long)pauVar11))) {
            uVar26 = ((ulong)(puVar15 + ~(ulong)pauVar21) >> 3) + 1;
            uVar29 = uVar26 & 0x3ffffffffffffffc;
            uVar30 = 0;
            do {
              uVar5 = *(undefined8 *)((long)(*pauVar11 + uVar30 * 8) + 8);
              uVar6 = *(undefined8 *)(pauVar11[1] + uVar30 * 8);
              uVar7 = *(undefined8 *)((long)(pauVar11[1] + uVar30 * 8) + 8);
              *(undefined8 *)(*pauVar21 + uVar30 * 8) = *(undefined8 *)(*pauVar11 + uVar30 * 8);
              *(undefined8 *)((long)(*pauVar21 + uVar30 * 8) + 8) = uVar5;
              *(undefined8 *)(pauVar21[1] + uVar30 * 8) = uVar6;
              *(undefined8 *)((long)(pauVar21[1] + uVar30 * 8) + 8) = uVar7;
              uVar30 = uVar30 + 4;
            } while (uVar29 != uVar30);
            pauVar11 = (undefined1 (*) [16])(*pauVar11 + uVar29 * 8);
            pauVar21 = (undefined1 (*) [16])(*pauVar21 + uVar29 * 8);
            if (uVar26 == uVar29) goto code_r0x004a0996;
          }
          do {
            *(undefined8 *)*pauVar21 = *(undefined8 *)*pauVar11;
            pauVar21 = (undefined1 (*) [16])(*pauVar21 + 8);
            pauVar11 = (undefined1 (*) [16])(*pauVar11 + 8);
          } while (pauVar21 < pauVar22);
        }
code_r0x004a0996:
        uVar26 = (ulong)*(ushort *)*pauVar10;
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + 2);
        pauVar27 = (undefined1 (*) [16])((long)pauVar22 - uVar26);
        uVar30 = (ulong)(uVar13 & 0xf);
code_r0x004a09aa:
        pauVar25 = pauVar10;
        if ((int)uVar30 == 0xf) {
          pauVar25 = (undefined1 (*) [16])(*pauVar10 + 1);
          if ((undefined1 (*) [16])(puVar1 + -4) < pauVar25) goto code_r0x004a0eb8;
          uVar29 = (ulong)(byte)(*pauVar10)[0];
          if (uVar29 == 0xff) {
            uVar29 = 0xff;
            pauVar10 = pauVar25;
            do {
              pauVar25 = (undefined1 (*) [16])(*pauVar10 + 1);
              if ((undefined1 (*) [16])(puVar1 + -4) < pauVar25) {
                pauVar25 = (undefined1 (*) [16])(*pauVar10 + 1);
                goto code_r0x004a0eb8;
              }
              puVar15 = *pauVar10;
              uVar29 = uVar29 + (byte)*puVar15;
              pauVar10 = pauVar25;
            } while ((ulong)(byte)*puVar15 == 0xff);
          }
          uVar30 = uVar29 + 0xf;
          if ((uVar29 == 0xffffffffffffffff) || (~(ulong)pauVar22 < uVar30)) goto code_r0x004a0eb8;
        }
        uVar30 = uVar30 + 4;
        pauVar10 = pauVar25;
      } while( true );
    }
  }
  return iVar20;
}


