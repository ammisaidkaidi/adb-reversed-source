// Function: LZ4_decompress_safe_continue
// Address: 004a0f80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong LZ4_decompress_safe_continue
                (long *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4,
                uint param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ushort *puVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 *puVar27;
  uint *puVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  undefined1 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  uint *puVar34;
  uint uVar35;
  ulong uVar36;
  byte *pbVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 auVar40 [16];
  int iStack_68;
  
  uVar13 = param_1[3];
  if (uVar13 == 0) {
    uVar13 = LZ4_decompress_safe(param_2,param_3,param_4,param_5);
    iVar11 = (int)uVar13;
  }
  else {
    if ((undefined1 (*) [16])param_1[1] == param_3) {
      if (uVar13 < 0xffff) {
        uVar7 = param_1[2];
        if (uVar7 != 0) {
          if ((int)param_5 < 0 || param_2 == (undefined1 (*) [16])0x0) {
            return 0xffffffff;
          }
          lVar12 = *param_1 + uVar7;
          if (*param_1 == 0) {
            lVar12 = 0;
          }
          if (param_5 == 0) {
            if (param_4 != 1) {
              return 0xffffffff;
            }
            return (ulong)-(uint)((*param_2)[0] != '\0');
          }
          if (param_4 == 0) {
            return 0xffffffff;
          }
          puVar14 = (uint *)((long)param_3 - uVar13);
          puVar2 = *param_2 + param_4;
          pauVar3 = (undefined1 (*) [16])(*param_3 + param_5);
          pauVar19 = param_2;
          pauVar39 = param_3;
          if (param_5 < 0x40) goto code_r0x004a1b71;
          pauVar1 = (undefined1 (*) [16])(puVar2 + -0xf);
          pauVar15 = param_2;
code_r0x004a114b:
          do {
            while( true ) {
              pauVar16 = (undefined1 (*) [16])(*pauVar15 + 1);
              bVar5 = (*pauVar15)[0];
              uVar35 = (uint)bVar5;
              uVar20 = (ulong)(uint)(bVar5 >> 4);
              if (bVar5 >> 4 == 0xf) {
                pauVar17 = pauVar16;
                if ((pauVar1 <= pauVar16) ||
                   (pauVar17 = (undefined1 (*) [16])(*pauVar15 + 2), pauVar1 < pauVar17))
                goto code_r0x004a1e9f;
                uVar20 = (ulong)(byte)(*pauVar16)[0];
                if (uVar20 == 0xff) {
                  uVar20 = 0xff;
                  pauVar19 = pauVar17;
                  do {
                    pauVar17 = (undefined1 (*) [16])(*pauVar19 + 1);
                    if (pauVar1 < pauVar17) goto code_r0x004a1e9f;
                    puVar31 = *pauVar19;
                    uVar20 = uVar20 + (byte)*puVar31;
                    pauVar19 = pauVar17;
                  } while ((ulong)(byte)*puVar31 == 0xff);
                  if (uVar20 == 0xffffffffffffffff) goto code_r0x004a1e9f;
                }
                uVar20 = uVar20 + 0xf;
                puVar18 = (ushort *)(*pauVar17 + uVar20);
                pauVar38 = (undefined1 (*) [16])(*pauVar39 + uVar20);
                if ((CARRY8((ulong)pauVar39,uVar20)) || (CARRY8((ulong)pauVar17,uVar20)))
                goto code_r0x004a1e9f;
                pauVar16 = pauVar17;
                if ((undefined1 (*) [16])(param_3[-2] + param_5) < pauVar38) goto code_r0x004a186f;
                if (puVar2 + -0x20 < puVar18) goto code_r0x004a186f;
                lVar21 = 0;
                do {
                  uVar8 = *(undefined8 *)((long)(*pauVar17 + lVar21) + 8);
                  *(undefined8 *)(*pauVar39 + lVar21) = *(undefined8 *)(*pauVar17 + lVar21);
                  *(undefined8 *)((long)(*pauVar39 + lVar21) + 8) = uVar8;
                  *(undefined1 (*) [16])(pauVar39[1] + lVar21) =
                       *(undefined1 (*) [16])(pauVar17[1] + lVar21);
                  pauVar19 = (undefined1 (*) [16])(pauVar39[2] + lVar21);
                  lVar21 = lVar21 + 0x20;
                } while (pauVar19 < pauVar38);
              }
              else {
                if ((undefined1 (*) [16])(puVar2 + -0x11) < pauVar16) goto code_r0x004a186f;
                *pauVar39 = *pauVar16;
                puVar18 = (ushort *)(*pauVar16 + uVar20);
                pauVar38 = (undefined1 (*) [16])(*pauVar39 + uVar20);
              }
              uVar6 = *puVar18;
              uVar29 = (ulong)uVar6;
              pauVar15 = (undefined1 (*) [16])(puVar18 + 1);
              puVar34 = (uint *)((long)pauVar38 - uVar29);
              uVar20 = (ulong)(bVar5 & 0xf);
              if (uVar20 == 0xf) break;
              uVar36 = uVar20 + 4;
              pauVar19 = pauVar15;
              if (pauVar3 + -4 <= (undefined1 (*) [16])(*pauVar38 + uVar20 + 4))
              goto code_r0x004a19a0;
              if ((puVar34 < puVar14) || (uVar6 < 8)) goto code_r0x004a12a0;
              *(undefined8 *)*pauVar38 = *(undefined8 *)puVar34;
              *(undefined8 *)(*pauVar38 + 8) = *(undefined8 *)(puVar34 + 2);
              *(short *)pauVar38[1] = (short)puVar34[4];
              pauVar39 = (undefined1 (*) [16])(*pauVar38 + uVar20 + 4);
            }
            pauVar19 = (undefined1 (*) [16])((long)puVar18 + 3);
            pauVar17 = pauVar19;
            if ((undefined1 (*) [16])(puVar2 + -4) < pauVar19) goto code_r0x004a1e9f;
            uVar20 = (ulong)(byte)(*pauVar15)[0];
            if (uVar20 == 0xff) {
              uVar20 = 0xff;
              pauVar39 = pauVar19;
              do {
                pauVar19 = (undefined1 (*) [16])(*pauVar39 + 1);
                pauVar17 = pauVar19;
                if ((undefined1 (*) [16])(puVar2 + -4) < pauVar19) goto code_r0x004a1e9f;
                puVar31 = *pauVar39;
                uVar20 = uVar20 + (byte)*puVar31;
                pauVar39 = pauVar19;
              } while ((ulong)(byte)*puVar31 == 0xff);
              if (uVar20 == 0xffffffffffffffff) goto code_r0x004a1e9f;
            }
            uVar36 = uVar20 + 0x13;
            pauVar17 = pauVar19;
            if (CARRY8((ulong)pauVar38,uVar36)) goto code_r0x004a1e9f;
            pauVar15 = pauVar19;
            if (pauVar3 + -4 <= (undefined1 (*) [16])(pauVar38[1] + uVar20 + 3))
            goto code_r0x004a19a0;
code_r0x004a12a0:
            pauVar17 = pauVar15;
            if (uVar7 < 0x10000 && (uint *)((long)puVar34 + uVar7) < puVar14) goto code_r0x004a1e9f;
            pauVar19 = (undefined1 (*) [16])(*pauVar38 + uVar36);
            pauVar39 = pauVar19;
            if (puVar14 <= puVar34) {
              if (0xf < uVar6) {
                do {
                  puVar4 = (undefined8 *)((long)pauVar38 + -uVar29);
                  uVar8 = puVar4[1];
                  *(undefined8 *)*pauVar38 = *puVar4;
                  *(undefined8 *)(*pauVar38 + 8) = uVar8;
                  puVar4 = (undefined8 *)((long)pauVar38 + -uVar29 + 0x10);
                  uVar8 = puVar4[1];
                  *(undefined8 *)pauVar38[1] = *puVar4;
                  *(undefined8 *)(pauVar38[1] + 8) = uVar8;
                  pauVar38 = pauVar38 + 2;
                } while (pauVar38 < pauVar19);
                goto code_r0x004a114b;
              }
              if (uVar29 == 4) {
                uVar35 = *puVar34;
                uVar24 = uVar35 >> 0x10;
                uVar23 = uVar35;
              }
              else {
                if (uVar6 == 2) {
                  uVar6 = (ushort)*puVar34;
                  uVar23 = CONCAT22(uVar6,uVar6);
                }
                else {
                  if (uVar6 != 1) {
                    if (uVar6 < 8) {
                      *(undefined4 *)*pauVar38 = 0;
                      (*pauVar38)[0] = (byte)*puVar34;
                      (*pauVar38)[1] = *(byte *)((long)puVar34 + 1);
                      (*pauVar38)[2] = *(byte *)((long)puVar34 + 2);
                      (*pauVar38)[3] = *(byte *)((long)puVar34 + 3);
                      uVar35 = *(uint *)(&UNK_001fe790 + (ulong)uVar6 * 4);
                      *(undefined4 *)(*pauVar38 + 4) =
                           *(undefined4 *)((long)puVar34 + (ulong)uVar35);
                      puVar34 = (uint *)((long)puVar34 +
                                        ((ulong)uVar35 -
                                        (long)*(int *)(&UNK_001fe630 + (ulong)uVar6 * 4)));
                    }
                    else {
                      *(undefined8 *)*pauVar38 = *(undefined8 *)puVar34;
                      puVar34 = puVar34 + 2;
                    }
                    pauVar16 = (undefined1 (*) [16])(*pauVar38 + uVar36);
                    if ((undefined1 (*) [16])(*pauVar38 + uVar36) <= pauVar38 + 1) {
                      pauVar16 = pauVar38 + 1;
                    }
                    pauVar17 = (undefined1 (*) [16])(*pauVar38 + 8);
                    puVar31 = (undefined1 *)((long)pauVar16 + (-9 - (long)pauVar38));
                    if (((undefined1 *)0x17 < puVar31) &&
                       ((undefined1 *)0x1f < (undefined1 *)((long)pauVar38 + (8 - (long)puVar34))))
                    {
                      uVar36 = ((ulong)puVar31 >> 3) + 1;
                      uVar20 = uVar36 & 0x3ffffffffffffffc;
                      pauVar17 = (undefined1 (*) [16])(*pauVar17 + uVar20 * 8);
                      uVar29 = 0;
                      do {
                        uVar8 = *(undefined8 *)(puVar34 + uVar29 * 2 + 4);
                        uVar9 = *(undefined8 *)(puVar34 + uVar29 * 2 + 4 + 2);
                        *(undefined1 (*) [16])(*pauVar38 + uVar29 * 8 + 8) =
                             *(undefined1 (*) [16])(puVar34 + uVar29 * 2);
                        *(undefined8 *)(pauVar38[1] + uVar29 * 8 + 8) = uVar8;
                        *(undefined8 *)((long)(pauVar38[1] + uVar29 * 8 + 8) + 8) = uVar9;
                        uVar29 = uVar29 + 4;
                      } while (uVar20 != uVar29);
                      puVar34 = puVar34 + uVar20 * 2;
                      if (uVar36 == uVar20) goto code_r0x004a114b;
                    }
                    do {
                      *(undefined8 *)*pauVar17 = *(undefined8 *)puVar34;
                      pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
                      puVar34 = puVar34 + 2;
                    } while (pauVar17 < pauVar19);
                    goto code_r0x004a114b;
                  }
                  bVar5 = (byte)*puVar34;
                  uVar6 = CONCAT11(bVar5,bVar5);
                  uVar23 = (uint)bVar5 * 0x1010101;
                }
                uVar35 = (uint)uVar6;
                uVar24 = uVar35;
              }
              uVar35 = uVar35 & 0xffff | uVar24 << 0x10;
              *(ulong *)*pauVar38 = CONCAT44(uVar23,uVar35);
              if (8 < uVar36) {
                pauVar16 = (undefined1 (*) [16])(*pauVar38 + uVar36);
                if ((undefined1 (*) [16])(*pauVar38 + uVar36) <= pauVar38 + 1) {
                  pauVar16 = pauVar38 + 1;
                }
                pauVar17 = (undefined1 (*) [16])(*pauVar38 + 8);
                puVar31 = (undefined1 *)((long)pauVar16 + (-9 - (long)pauVar38));
                if ((undefined1 *)0x17 < puVar31) {
                  uVar36 = ((ulong)puVar31 >> 3) + 1;
                  uVar20 = uVar36 & 0x3ffffffffffffffc;
                  pauVar17 = (undefined1 (*) [16])(*pauVar17 + uVar20 * 8);
                  auVar40._4_4_ = uVar23;
                  auVar40._0_4_ = uVar35;
                  auVar40._8_4_ = uVar35;
                  auVar40._12_4_ = uVar23;
                  uVar29 = 0;
                  do {
                    *(undefined1 (*) [16])(*pauVar38 + uVar29 * 8 + 8) = auVar40;
                    *(undefined1 (*) [16])(pauVar38[1] + uVar29 * 8 + 8) = auVar40;
                    uVar29 = uVar29 + 4;
                  } while (uVar20 != uVar29);
                  if (uVar36 == uVar20) goto code_r0x004a114b;
                }
                do {
                  *(ulong *)*pauVar17 = CONCAT44(uVar23,uVar35);
                  pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
                } while (pauVar17 < pauVar19);
              }
              goto code_r0x004a114b;
            }
            if ((undefined1 (*) [16])(pauVar3[-1] + 0xb) < pauVar19) goto code_r0x004a1e9f;
            uVar33 = (long)puVar14 - (long)puVar34;
            uVar20 = uVar36 - uVar33;
            if (uVar33 <= uVar36 && uVar20 != 0) {
              func_0x0099bda0(pauVar38,lVar12 - uVar33,uVar33);
              pauVar39 = (undefined1 (*) [16])(uVar33 + (long)pauVar38);
              if (uVar20 <= (ulong)((long)pauVar39 - (long)puVar14)) {
                func_0x0099bda0(pauVar39,puVar14,uVar20);
                pauVar39 = pauVar19;
                goto code_r0x004a114b;
              }
              puVar25 = (undefined1 *)((long)param_3 + uVar29 + (1 - uVar13));
              puVar31 = *pauVar38 + uVar36;
              if (*pauVar38 + uVar36 < puVar25) {
                puVar31 = puVar25;
              }
              puVar31 = puVar31 + (uVar13 - (long)(*param_3 + uVar29));
              puVar34 = puVar14;
              if (((undefined1 *)0x1f < puVar31) && (0x1f < uVar6)) {
                puVar25 = (undefined1 *)((ulong)puVar31 & 0xffffffffffffffe0);
                pauVar39 = (undefined1 (*) [16])(*pauVar39 + (long)puVar25);
                puVar34 = (uint *)((long)puVar14 + (long)puVar25);
                lVar21 = uVar29 + (0x10 - uVar13);
                puVar27 = (undefined1 *)0x0;
                do {
                  puVar4 = (undefined8 *)((long)param_3 + ((long)puVar27 - uVar13));
                  uVar8 = puVar4[1];
                  uVar9 = *(undefined8 *)(puVar27 + (0x10 - uVar13) + (long)*param_3);
                  uVar10 = *(undefined8 *)((long)(puVar27 + (0x10 - uVar13) + (long)*param_3) + 8);
                  *(undefined8 *)(puVar27 + lVar21 + -0x10 + (long)*param_3) = *puVar4;
                  *(undefined8 *)((long)(puVar27 + lVar21 + -0x10 + (long)*param_3) + 8) = uVar8;
                  *(undefined8 *)(puVar27 + lVar21 + (long)*param_3) = uVar9;
                  *(undefined8 *)((long)(puVar27 + lVar21 + (long)*param_3) + 8) = uVar10;
                  puVar27 = puVar27 + 0x20;
                } while (puVar25 != puVar27);
                if (puVar31 == puVar25) goto code_r0x004a114b;
              }
              do {
                (*pauVar39)[0] = (byte)*puVar34;
                pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1);
                puVar34 = (uint *)((long)puVar34 + 1);
              } while (pauVar39 < pauVar19);
              goto code_r0x004a114b;
            }
            func_0x0099bd90(pauVar38,lVar12 - uVar33,uVar36);
          } while( true );
        }
        uVar13 = func_0x004a1ec0(param_2,param_3,param_4,param_5,uVar13);
      }
      else {
        uVar13 = LZ4_decompress_safe_withPrefix64k(param_2,param_3,param_4,param_5);
      }
      uVar35 = (uint)uVar13;
      goto joined_r0x004a1eac;
    }
    param_1[2] = uVar13;
    lVar12 = param_1[1] - uVar13;
    *param_1 = lVar12;
    uVar13 = LZ4_decompress_safe_forceExtDict(param_2,param_3,param_4,param_5,lVar12);
    iVar11 = (int)uVar13;
  }
  if (iVar11 < 1) {
    return uVar13;
  }
  param_1[3] = uVar13 & 0xffffffff;
  param_1[1] = (long)(*param_3 + (uVar13 & 0xffffffff));
  return uVar13;
code_r0x004a19a0:
  pauVar17 = pauVar19;
  if (uVar7 < 0x10000 && (uint *)((long)puVar34 + uVar7) < puVar14) goto code_r0x004a1e9f;
  pauVar1 = (undefined1 (*) [16])(*pauVar38 + uVar36);
  pauVar39 = pauVar1;
  if (puVar34 < puVar14) {
    if ((undefined1 (*) [16])(pauVar3[-1] + 0xb) < pauVar1) goto code_r0x004a1e9f;
    uVar20 = (long)puVar14 - (long)puVar34;
    if (uVar20 < uVar36) {
      func_0x0099bda0(pauVar38,lVar12 - uVar20,uVar20);
      pauVar39 = (undefined1 (*) [16])((long)pauVar38 + uVar20);
      if ((ulong)((long)pauVar39 - (long)puVar14) < uVar36 - uVar20) {
        puVar25 = *pauVar38 + (long)*param_3;
        puVar31 = *pauVar38 + uVar36;
        if (*pauVar38 + uVar36 < puVar25 + (1 - (long)((long)puVar34 + uVar13))) {
          puVar31 = puVar25 + (1 - (long)((long)puVar34 + uVar13));
        }
        pbVar37 = (byte *)((long)puVar34 + uVar13) + ((long)puVar31 - (long)puVar25);
        puVar34 = puVar14;
        if (((byte *)0x1f < pbVar37) && (0x1f < (ulong)((long)pauVar39 - (long)puVar14))) {
          pbVar22 = (byte *)((ulong)pbVar37 & 0xffffffffffffffe0);
          pauVar39 = (undefined1 (*) [16])(*pauVar39 + (long)pbVar22);
          pbVar32 = (byte *)0x0;
          do {
            uVar8 = *(undefined8 *)((byte *)((long)puVar14 + (long)pbVar32) + 8);
            uVar9 = *(undefined8 *)((long)puVar14 + (long)(pbVar32 + 0x10));
            uVar10 = *(undefined8 *)((byte *)((long)puVar14 + (long)(pbVar32 + 0x10)) + 8);
            *(undefined8 *)(pbVar32 + uVar20 + (long)*pauVar38) =
                 *(undefined8 *)((long)puVar14 + (long)pbVar32);
            *(undefined8 *)(pbVar32 + uVar20 + (long)*pauVar38 + 8) = uVar8;
            *(undefined8 *)(pbVar32 + uVar20 + 0x10 + (long)*pauVar38) = uVar9;
            *(undefined8 *)(pbVar32 + uVar20 + 0x10 + (long)*pauVar38 + 8) = uVar10;
            pbVar32 = pbVar32 + 0x20;
          } while (pbVar22 != pbVar32);
          puVar34 = (uint *)((long)puVar14 + (long)pbVar22);
          if (pbVar37 == pbVar22) goto code_r0x004a1b71;
        }
        do {
          (*pauVar39)[0] = (byte)*puVar34;
          pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1);
          puVar34 = (uint *)((long)puVar34 + 1);
        } while (pauVar39 < pauVar1);
      }
      else {
        func_0x0099bda0(pauVar39,puVar14);
        pauVar39 = pauVar1;
      }
    }
    else {
      func_0x0099bd90(pauVar38,lVar12 - uVar20,uVar36);
    }
  }
  else {
    if ((uint)uVar29 < 8) {
      *(undefined4 *)*pauVar38 = 0;
      (*pauVar38)[0] = (byte)*puVar34;
      (*pauVar38)[1] = *(byte *)((long)puVar34 + 1);
      (*pauVar38)[2] = *(byte *)((long)puVar34 + 2);
      (*pauVar38)[3] = *(byte *)((long)puVar34 + 3);
      uVar23 = (uint)uVar29 << 2;
      uVar35 = *(uint *)(&UNK_001fe790 + uVar23);
      *(undefined4 *)(*pauVar38 + 4) = *(undefined4 *)((long)puVar34 + (ulong)uVar35);
      puVar34 = (uint *)((long)puVar34 + ((ulong)uVar35 - (long)*(int *)(&UNK_001fe630 + uVar23)));
    }
    else {
      *(undefined8 *)*pauVar38 = *(undefined8 *)puVar34;
      puVar34 = puVar34 + 2;
    }
    pauVar15 = (undefined1 (*) [16])(*pauVar38 + 8);
    if ((undefined1 (*) [16])(pauVar3[-1] + 4) < pauVar1) {
      if ((undefined1 (*) [16])(pauVar3[-1] + 0xb) < pauVar1) goto code_r0x004a1e9f;
      pauVar16 = (undefined1 (*) [16])(pauVar3[-1] + 9);
      pauVar17 = (undefined1 (*) [16])(param_3[-1] + (ulong)param_5 + 9);
      puVar28 = puVar34;
      if (pauVar15 < pauVar16) {
        pauVar30 = pauVar38 + 1;
        if (pauVar38 + 1 < pauVar17) {
          pauVar30 = pauVar17;
        }
        puVar31 = (undefined1 *)((long)pauVar30 + (-9 - (long)pauVar38));
        pauVar30 = pauVar15;
        if ((puVar31 < (undefined1 *)0x48) ||
           ((undefined1 *)((long)pauVar38 + (8 - (long)puVar34)) < (undefined1 *)0x20)) {
code_r0x004a1dae:
          do {
            *(undefined8 *)*pauVar30 = *(undefined8 *)puVar28;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 8);
            puVar28 = puVar28 + 2;
          } while (pauVar30 < pauVar16);
        }
        else {
          uVar29 = ((ulong)puVar31 >> 3) + 1;
          uVar33 = uVar29 & 0x3ffffffffffffffc;
          puVar28 = puVar34 + uVar33 * 2;
          pauVar30 = (undefined1 (*) [16])(*pauVar15 + uVar33 * 8);
          uVar20 = 0;
          do {
            uVar8 = *(undefined8 *)(puVar34 + uVar20 * 2 + 2);
            uVar9 = *(undefined8 *)(puVar34 + uVar20 * 2 + 4);
            uVar10 = *(undefined8 *)(puVar34 + uVar20 * 2 + 4 + 2);
            *(undefined8 *)(*pauVar38 + uVar20 * 8 + 8) = *(undefined8 *)(puVar34 + uVar20 * 2);
            *(undefined8 *)((long)(*pauVar38 + uVar20 * 8 + 8) + 8) = uVar8;
            *(undefined8 *)(pauVar38[1] + uVar20 * 8 + 8) = uVar9;
            *(undefined8 *)((long)(pauVar38[1] + uVar20 * 8 + 8) + 8) = uVar10;
            uVar20 = uVar20 + 4;
          } while (uVar33 != uVar20);
          if (uVar29 != uVar33) goto code_r0x004a1dae;
        }
        lVar21 = (long)pauVar16 - (long)pauVar15;
        pauVar15 = pauVar16;
        puVar28 = (uint *)(lVar21 + (long)puVar34);
      }
      if (pauVar15 < pauVar1) {
        pauVar16 = (undefined1 (*) [16])(*pauVar38 + 8);
        if ((undefined1 (*) [16])(*pauVar38 + 8) < pauVar17) {
          pauVar16 = pauVar17;
        }
        puVar31 = (undefined1 *)((long)pauVar38 + (uVar36 - (long)pauVar16));
        pauVar17 = pauVar15;
        puVar26 = puVar28;
        if (((undefined1 *)0x3 < puVar31) &&
           ((undefined1 *)0x1f < (undefined1 *)((long)pauVar38 + (8 - (long)puVar34)))) {
          puVar25 = (undefined1 *)0x0;
          if ((undefined1 *)0x1f < puVar31) {
            puVar25 = (undefined1 *)((ulong)puVar31 & 0xffffffffffffffe0);
            puVar27 = (undefined1 *)0x0;
            do {
              uVar8 = *(undefined8 *)
                       ((byte *)((long)puVar34 +
                                (long)(puVar27 + (-8 - (long)pauVar38) + (long)*pauVar16)) + 8);
              uVar9 = *(undefined8 *)
                       ((long)puVar34 + (long)(puVar27 + (8 - (long)pauVar38) + (long)*pauVar16));
              uVar10 = *(undefined8 *)
                        ((byte *)((long)puVar34 +
                                 (long)(puVar27 + (8 - (long)pauVar38) + (long)*pauVar16)) + 8);
              *(undefined8 *)(*pauVar15 + (long)puVar27) =
                   *(undefined8 *)
                    ((long)puVar34 + (long)(puVar27 + (-8 - (long)pauVar38) + (long)*pauVar16));
              *(undefined8 *)((long)(*pauVar15 + (long)puVar27) + 8) = uVar8;
              *(undefined8 *)(pauVar15[1] + (long)puVar27) = uVar9;
              *(undefined8 *)((long)(pauVar15[1] + (long)puVar27) + 8) = uVar10;
              puVar27 = puVar27 + 0x20;
            } while (puVar25 != puVar27);
            if (puVar31 == puVar25) goto code_r0x004a1b71;
            pauVar17 = (undefined1 (*) [16])(*pauVar15 + (long)puVar25);
            puVar26 = (uint *)((long)puVar28 + (long)puVar25);
            if (((ulong)puVar31 & 0x1c) == 0) goto code_r0x004a1e04;
          }
          puVar27 = (undefined1 *)((ulong)puVar31 & 0xfffffffffffffffc);
          do {
            *(undefined4 *)(*pauVar15 + (long)puVar25) =
                 *(undefined4 *)((long)puVar28 + (long)puVar25);
            puVar25 = puVar25 + 4;
          } while (puVar27 != puVar25);
          pauVar17 = (undefined1 (*) [16])(*pauVar15 + (long)puVar27);
          puVar26 = (uint *)((long)puVar28 + (long)puVar27);
          if (puVar31 == puVar27) goto code_r0x004a1b71;
        }
code_r0x004a1e04:
        do {
          (*pauVar17)[0] = (byte)*puVar26;
          puVar31 = *pauVar17;
          pauVar17 = (undefined1 (*) [16])(puVar31 + 1);
          puVar26 = (uint *)((long)puVar26 + 1);
        } while ((undefined1 (*) [16])(puVar31 + 1) < pauVar1);
      }
    }
    else {
      *(undefined8 *)*pauVar15 = *(undefined8 *)puVar34;
      if (0x10 < uVar36) {
        puVar31 = *pauVar38 + uVar36;
        if (*pauVar38 + uVar36 <= pauVar38[1] + 8) {
          puVar31 = pauVar38[1] + 8;
        }
        pauVar15 = pauVar38 + 1;
        puVar28 = puVar34;
        if (((undefined1 *)0x47 < puVar31 + (-0x11 - (long)pauVar38)) &&
           ((undefined1 *)0x1f < (undefined1 *)((long)pauVar38 + (8 - (long)puVar34)))) {
          uVar36 = ((ulong)(puVar31 + (-0x11 - (long)pauVar38)) >> 3) + 1;
          uVar20 = uVar36 & 0x3ffffffffffffffc;
          puVar28 = puVar34 + uVar20 * 2;
          pauVar15 = (undefined1 (*) [16])(*pauVar15 + uVar20 * 8);
          uVar29 = 0;
          do {
            uVar8 = *(undefined8 *)(puVar34 + uVar29 * 2 + 2 + 2);
            uVar9 = *(undefined8 *)(puVar34 + uVar29 * 2 + 6);
            uVar10 = *(undefined8 *)(puVar34 + uVar29 * 2 + 6 + 2);
            *(undefined8 *)(pauVar38[1] + uVar29 * 8) = *(undefined8 *)(puVar34 + uVar29 * 2 + 2);
            *(undefined8 *)((long)(pauVar38[1] + uVar29 * 8) + 8) = uVar8;
            *(undefined8 *)(pauVar38[2] + uVar29 * 8) = uVar9;
            *(undefined8 *)((long)(pauVar38[2] + uVar29 * 8) + 8) = uVar10;
            uVar29 = uVar29 + 4;
          } while (uVar20 != uVar29);
          if (uVar36 == uVar20) goto code_r0x004a1b71;
        }
        do {
          *(undefined8 *)*pauVar15 = *(undefined8 *)(puVar28 + 2);
          pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
          puVar28 = puVar28 + 2;
        } while (pauVar15 < pauVar1);
      }
    }
  }
code_r0x004a1b71:
  pauVar16 = (undefined1 (*) [16])(*pauVar19 + 1);
  bVar5 = (*pauVar19)[0];
  while( true ) {
    uVar35 = (uint)bVar5;
    if (bVar5 >> 4 == 0xf) break;
    uVar20 = (ulong)(uint)(bVar5 >> 4);
    if (((undefined1 (*) [16])(param_2[-1] + param_4) <= pauVar16) ||
       ((undefined1 (*) [16])(param_3[-2] + param_5) < pauVar39)) goto code_r0x004a186f;
    uVar8 = *(undefined8 *)(*pauVar16 + 8);
    *(undefined8 *)*pauVar39 = *(undefined8 *)*pauVar16;
    *(undefined8 *)(*pauVar39 + 8) = uVar8;
    pauVar38 = (undefined1 (*) [16])(*pauVar39 + uVar20);
    uVar35 = uVar35 & 0xf;
    uVar36 = (ulong)uVar35;
    uVar29 = (ulong)*(ushort *)(*pauVar16 + uVar20);
    pauVar19 = (undefined1 (*) [16])(*pauVar16 + uVar20 + 2);
    puVar34 = (uint *)((long)pauVar38 - uVar29);
    if (((uVar35 == 0xf) || (*(ushort *)(*pauVar16 + uVar20) < 8)) || (puVar34 < puVar14))
    goto joined_r0x004a1810;
    *(undefined8 *)*pauVar38 = *(undefined8 *)puVar34;
    *(undefined8 *)(*pauVar38 + 8) = *(undefined8 *)(puVar34 + 2);
    *(short *)pauVar38[1] = (short)puVar34[4];
    pauVar39 = (undefined1 (*) [16])(*pauVar38 + uVar36 + 4);
    bVar5 = (*pauVar16)[uVar20 + 2];
    pauVar16 = (undefined1 (*) [16])(*pauVar16 + uVar20 + 3);
  }
  pauVar1 = (undefined1 (*) [16])(puVar2 + -0xf);
  pauVar17 = pauVar16;
  if ((pauVar1 <= pauVar16) || (pauVar17 = (undefined1 (*) [16])(*pauVar19 + 2), pauVar1 < pauVar17)
     ) goto code_r0x004a1e9f;
  uVar20 = (ulong)(byte)(*pauVar16)[0];
  pauVar16 = pauVar17;
  if (uVar20 == 0xff) {
    uVar20 = 0xff;
    do {
      pauVar19 = pauVar17;
      pauVar16 = (undefined1 (*) [16])(*pauVar19 + 1);
      if (pauVar1 < pauVar16) goto code_r0x004a1c7a;
      uVar20 = uVar20 + (byte)(*pauVar19)[0];
      pauVar17 = pauVar16;
    } while ((ulong)(byte)(*pauVar19)[0] == 0xff);
    if (uVar20 == 0xffffffffffffffff) {
code_r0x004a1c7a:
      pauVar17 = (undefined1 (*) [16])(*pauVar19 + 1);
      goto code_r0x004a1e9f;
    }
  }
  uVar20 = uVar20 + 0xf;
  pauVar17 = pauVar16;
  if ((CARRY8((ulong)pauVar39,uVar20)) || (CARRY8((ulong)pauVar16,uVar20))) goto code_r0x004a1e9f;
code_r0x004a186f:
  pauVar38 = (undefined1 (*) [16])(*pauVar39 + uVar20);
  if (((undefined1 (*) [16])(pauVar3[-1] + 4) < pauVar38) ||
     (puVar18 = (ushort *)(*pauVar16 + uVar20), puVar2 + -8 < puVar18)) {
    pauVar17 = pauVar16;
    if ((*pauVar16 + uVar20 == puVar2) && (pauVar38 <= pauVar3)) {
      func_0x0099bd90(pauVar39,pauVar16);
      iStack_68 = (int)param_3;
      uVar35 = (int)pauVar38 - iStack_68;
      goto code_r0x004a1ea3;
    }
    goto code_r0x004a1e9f;
  }
  puVar31 = *pauVar39 + uVar20;
  if (*pauVar39 + uVar20 <= *pauVar39 + 8) {
    puVar31 = *pauVar39 + 8;
  }
  if ((puVar31 + ~(ulong)pauVar39 < (undefined1 *)0x38) ||
     ((ulong)((long)pauVar39 - (long)pauVar16) < 0x20)) {
code_r0x004a1920:
    do {
      *(undefined8 *)*pauVar39 = *(undefined8 *)*pauVar16;
      pauVar39 = (undefined1 (*) [16])(*pauVar39 + 8);
      pauVar16 = (undefined1 (*) [16])(*pauVar16 + 8);
    } while (pauVar39 < pauVar38);
  }
  else {
    uVar20 = ((ulong)(puVar31 + ~(ulong)pauVar39) >> 3) + 1;
    uVar29 = uVar20 & 0x3ffffffffffffffc;
    uVar36 = 0;
    do {
      uVar8 = *(undefined8 *)((long)(*pauVar16 + uVar36 * 8) + 8);
      uVar9 = *(undefined8 *)(pauVar16[1] + uVar36 * 8);
      uVar10 = *(undefined8 *)((long)(pauVar16[1] + uVar36 * 8) + 8);
      *(undefined8 *)(*pauVar39 + uVar36 * 8) = *(undefined8 *)(*pauVar16 + uVar36 * 8);
      *(undefined8 *)((long)(*pauVar39 + uVar36 * 8) + 8) = uVar8;
      *(undefined8 *)(pauVar39[1] + uVar36 * 8) = uVar9;
      *(undefined8 *)((long)(pauVar39[1] + uVar36 * 8) + 8) = uVar10;
      uVar36 = uVar36 + 4;
    } while (uVar29 != uVar36);
    pauVar16 = (undefined1 (*) [16])(*pauVar16 + uVar29 * 8);
    pauVar39 = (undefined1 (*) [16])(*pauVar39 + uVar29 * 8);
    if (uVar20 != uVar29) goto code_r0x004a1920;
  }
  uVar29 = (ulong)*puVar18;
  pauVar19 = (undefined1 (*) [16])(puVar18 + 1);
  puVar34 = (uint *)((long)pauVar38 - uVar29);
  uVar35 = uVar35 & 0xf;
  uVar36 = (ulong)uVar35;
joined_r0x004a1810:
  if (uVar35 == 0xf) {
    pauVar17 = (undefined1 (*) [16])(*pauVar19 + 1);
    if ((undefined1 (*) [16])(puVar2 + -4) < pauVar17) goto code_r0x004a1e9f;
    uVar20 = (ulong)(byte)(*pauVar19)[0];
    pauVar19 = pauVar17;
    if (uVar20 == 0xff) {
      uVar20 = 0xff;
      do {
        pauVar19 = (undefined1 (*) [16])(*pauVar17 + 1);
        if ((undefined1 (*) [16])(puVar2 + -4) < pauVar19) {
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 1);
          goto code_r0x004a1e9f;
        }
        puVar31 = *pauVar17;
        uVar20 = uVar20 + (byte)*puVar31;
        pauVar17 = pauVar19;
      } while ((ulong)(byte)*puVar31 == 0xff);
    }
    uVar36 = uVar20 + 0xf;
    pauVar17 = pauVar19;
    if ((uVar20 == 0xffffffffffffffff) || (~(ulong)pauVar38 < uVar36)) goto code_r0x004a1e9f;
  }
  uVar36 = uVar36 + 4;
  goto code_r0x004a19a0;
code_r0x004a1e9f:
  uVar35 = ~(uint)pauVar17 + (int)param_2;
code_r0x004a1ea3:
  uVar13 = (ulong)uVar35;
joined_r0x004a1eac:
  if (0 < (int)uVar35) {
    param_1[3] = param_1[3] + (uVar13 & 0xffffffff);
    param_1[1] = param_1[1] + (uVar13 & 0xffffffff);
  }
  return uVar13;
}


