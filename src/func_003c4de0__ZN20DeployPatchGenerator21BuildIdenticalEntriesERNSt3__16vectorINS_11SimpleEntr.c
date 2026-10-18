// Function: _ZN20DeployPatchGenerator21BuildIdenticalEntriesERNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKN3com7android10fastdeploy11APKMetaDataESC_
// Address: 003c4de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c559a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c5ea6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c5ee2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c6865: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c5ee7) */
/* WARNING: Removing unreachable block (ram,0x003c5eab) */
/* WARNING: Removing unreachable block (ram,0x003c5fc5) */
/* WARNING: Removing unreachable block (ram,0x003c5fd9) */
/* WARNING: Removing unreachable block (ram,0x003c5ec1) */
/* WARNING: Removing unreachable block (ram,0x003c686a) */
/* WARNING: Type propagation algorithm not settling */

long *******
_ZN20DeployPatchGenerator21BuildIdenticalEntriesERNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKN3com7android10fastdeploy11APKMetaDataESC_
          (long *******param_1,long *******param_2,ulong param_3,long *******param_4,
          long *******param_5)

{
  undefined4 *puVar1;
  long *******ppppppplVar2;
  undefined4 *puVar3;
  long ******pppppplVar4;
  long *****ppppplVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long ******pppppplVar12;
  long lVar13;
  int iVar14;
  long ******pppppplVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  long *******ppppppplVar19;
  undefined7 uVar20;
  byte bVar21;
  long *******ppppppplVar22;
  ulong uVar23;
  long *****ppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******unaff_RBX;
  byte **ppbVar27;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long *******ppppppplVar34;
  byte *pbVar35;
  long lVar36;
  long lVar37;
  long *******ppppppplVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  long in_FS_OFFSET;
  bool bVar41;
  bool bVar42;
  float fVar43;
  undefined *puStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  long *******ppppppplStack_d8;
  ulong uStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  long *******ppppppplStack_60;
  long *******ppppppplStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  undefined1 *puVar28;
  
  ppbVar27 = &pbStack_e8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = *(int *)(param_3 + 0x20);
  if (*(int *)(param_4 + 4) < *(int *)(param_3 + 0x20)) {
    iVar14 = *(int *)(param_4 + 4);
  }
  ppppppplVar38 = (long *******)(long)iVar14;
  ppppppplVar39 = (long *******)*param_2;
  ppppppplVar40 = (long *******)((long)param_2[2] - (long)ppppppplVar39);
  ppppppplVar22 = (long *******)((long)ppppppplVar40 >> 4);
  ppppppplStack_d8 = param_1;
  uStack_d0 = param_3;
  ppppppplStack_c0 = param_2;
  if (ppppppplVar22 < ppppppplVar38) {
    ppppppplStack_b8 = param_4;
    if (-1 < iVar14) {
      pppppplVar4 = param_2[1];
      puStack_f0 = &UNK_003c4e66;
      pppppplVar15 = (long ******)_Znwm((long)ppppppplVar38 * 0x10);
      ppppppplStack_b0 =
           (long *******)((long)pppppplVar15 + ((long)pppppplVar4 - (long)ppppppplVar39));
      puStack_f0 = &UNK_003c4e84;
      func_0x0099bda0(pppppplVar15,ppppppplVar39,(long)pppppplVar4 - (long)ppppppplVar39);
      param_4 = ppppppplStack_b8;
      *ppppppplStack_c0 = pppppplVar15;
      ppppppplStack_c0[1] = (long ******)ppppppplStack_b0;
      ppppppplStack_c0[2] = pppppplVar15 + (long)ppppppplVar38 * 2;
      if (ppppppplVar39 != (long *******)0x0) {
        puStack_f0 = &UNK_003c4eb4;
        _ZdaPvSt11align_val_t(ppppppplVar39,ppppppplVar40);
      }
      goto code_r0x003c4eb4;
    }
  }
  else {
code_r0x003c4eb4:
    ppppppplStack_58 = (long *******)0x0;
    uStack_50 = 0;
    ppppppplStack_68 = (long *******)0x0;
    ppppppplStack_60 = (long *******)0x0;
    uStack_48 = 0x3f800000;
    unaff_RBX = (long *******)((long)param_4[3] + 7);
    if (((ulong)param_4[3] & 1) == 0) {
      unaff_RBX = param_4 + 3;
    }
    if ((long)*(int *)(param_4 + 4) != 0) {
      ppppppplStack_b0 = unaff_RBX + *(int *)(param_4 + 4);
      do {
        ppppppplVar22 = (long *******)*unaff_RBX;
        ppppppplStack_98 = (long *******)0x0;
        ppppppplStack_90 = (long *******)0x0;
        pbVar16 = (byte *)((ulong)ppppppplVar22[3] & 0xfffffffffffffffc);
        bVar41 = (*pbVar16 & 1) != 0;
        pbVar35 = pbVar16 + 1;
        if (bVar41) {
          pbVar35 = *(byte **)(pbVar16 + 0x10);
        }
        uVar18 = (ulong)(*pbVar16 >> 1);
        if (bVar41) {
          uVar18 = *(ulong *)(pbVar16 + 8);
        }
        puStack_f0 = &UNK_003c4f3e;
        func_0x0099c110(&ppppppplStack_98,pbVar35,uVar18,0x10);
        ppppppplVar38 = ppppppplStack_60;
        uVar18 = (long)ppppppplStack_98 + 0x9e3779b9;
        ppppppplVar39 =
             (long *******)
             ((long)ppppppplStack_90 + (uVar18 >> 2) + uVar18 * 0x40 + 0x9e3779b9 ^ uVar18);
        ppppppplStack_b8 = ppppppplVar22;
        if (ppppppplStack_60 == (long *******)0x0) {
          ppppppplVar22 = (long *******)0x0;
        }
        else {
          uVar18 = (long)ppppppplStack_60 - 1;
          if (((ulong)ppppppplStack_60 & uVar18) == 0) {
            ppppppplVar22 = (long *******)((ulong)ppppppplVar39 & uVar18);
          }
          else {
            ppppppplVar22 = ppppppplVar39;
            if (ppppppplStack_60 <= ppppppplVar39) {
              ppppppplVar22 = (long *******)((ulong)ppppppplVar39 % (ulong)ppppppplStack_60);
            }
          }
          if (ppppppplStack_68[(long)ppppppplVar22] != (long ******)0x0) {
            for (param_4 = (long *******)*ppppppplStack_68[(long)ppppppplVar22];
                param_4 != (long *******)0x0; param_4 = (long *******)*param_4) {
              ppppppplVar40 = (long *******)param_4[1];
              if (ppppppplVar40 == ppppppplVar39) {
                if (((long *******)param_4[2] == ppppppplStack_98) &&
                   ((long *******)param_4[3] == ppppppplStack_90)) goto code_r0x003c54cc;
              }
              else {
                if (((ulong)ppppppplStack_60 & uVar18) == 0) {
                  ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & uVar18);
                }
                else if (ppppppplStack_60 <= ppppppplVar40) {
                  if (((ulong)ppppppplVar40 | (ulong)ppppppplStack_60) >> 0x20 == 0) {
                    ppppppplVar40 =
                         (long *******)
                         (((ulong)ppppppplVar40 & 0xffffffff) %
                         ((ulong)ppppppplStack_60 & 0xffffffff));
                  }
                  else {
                    ppppppplVar40 = (long *******)((ulong)ppppppplVar40 % (ulong)ppppppplStack_60);
                  }
                }
                if (ppppppplVar40 != ppppppplVar22) break;
              }
            }
          }
        }
        puStack_f0 = &UNK_003c502a;
        param_2 = ppppppplStack_90;
        param_4 = (long *******)_Znwm(0x38);
        *param_4 = (long ******)0x0;
        param_4[1] = (long ******)ppppppplVar39;
        param_4[2] = (long ******)ppppppplStack_98;
        param_4[3] = (long ******)ppppppplStack_90;
        param_4[4] = (long ******)0x0;
        param_4[5] = (long ******)0x0;
        param_4[6] = (long ******)0x0;
        if ((float)ppppppplVar38 * (float)uStack_48 < (float)(uStack_50 + 1)) {
          uVar18 = 1;
          if ((long *******)0x2 < ppppppplVar38) {
            uVar18 = (ulong)(((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) != 0);
          }
          ppppppplVar40 = (long *******)((long)ppppppplVar38 * 2 | uVar18);
          puStack_f0 = &UNK_003c50f3;
          ppppppplStack_c8 = unaff_RBX;
          fVar43 = (float)func_0x009992a0((float)(uStack_50 + 1) / (float)uStack_48);
          ppppppplVar22 = (long *******)((long)fVar43 >> 0x3f);
          unaff_RBX = (long *******)
                      ((long)(fVar43 - 9.223372e+18) & (ulong)ppppppplVar22 | (long)fVar43);
          if (unaff_RBX < ppppppplVar40) {
            unaff_RBX = ppppppplVar40;
          }
          ppppppplVar40 = (long *******)0x2;
          param_1 = unaff_RBX;
          if (unaff_RBX == (long *******)0x1) {
code_r0x003c5139:
            unaff_RBX = ppppppplVar40;
            bVar41 = unaff_RBX < ppppppplVar38;
            ppppppplVar40 = unaff_RBX;
            if (ppppppplVar38 < unaff_RBX) goto code_r0x003c5141;
code_r0x003c51b0:
            if (bVar41) {
              puStack_f0 = &UNK_003c52c5;
              fVar43 = (float)func_0x009992a0((float)uStack_50 / (float)uStack_48);
              ppppppplVar22 = (long *******)((long)fVar43 >> 0x3f);
              ppppppplVar26 =
                   (long *******)
                   ((long)(fVar43 - 9.223372e+18) & (ulong)ppppppplVar22 | (long)fVar43);
              if ((ppppppplVar38 < (long *******)0x3) ||
                 (((long)ppppppplVar38 - 1U & (ulong)ppppppplVar38) != 0)) {
                puStack_f0 = &UNK_003c531e;
                ppppppplVar40 = (long *******)_ZNSt3__112__next_primeEm();
                param_1 = ppppppplVar26;
              }
              else {
                ppppppplVar40 = ppppppplVar26;
                if ((long *******)0x1 < ppppppplVar26) {
                  lVar36 = 0x3f;
                  if ((long)ppppppplVar26 - 1U != 0) {
                    for (; (long)ppppppplVar26 - 1U >> lVar36 == 0; lVar36 = lVar36 + -1) {
                    }
                  }
                  bVar21 = -((byte)lVar36 ^ 0x3f);
                  ppppppplVar22 = (long *******)(ulong)CONCAT31((int3)((ulong)lVar36 >> 8),bVar21);
                  ppppppplVar40 = (long *******)(1L << (bVar21 & 0x3f));
                }
              }
              if (ppppppplVar40 < unaff_RBX) {
                ppppppplVar40 = unaff_RBX;
              }
              if (ppppppplVar38 <= ppppppplVar40) goto code_r0x003c5400;
              if (ppppppplVar40 != (long *******)0x0) goto code_r0x003c5141;
              bVar41 = true;
              ppppppplVar40 = (long *******)0x0;
              ppppppplVar38 = (long *******)0x0;
              goto code_r0x003c5167;
            }
          }
          else {
            if (((ulong)unaff_RBX & (long)unaff_RBX - 1U) != 0) {
              puStack_f0 = &UNK_003c5132;
              ppppppplVar40 = (long *******)_ZNSt3__112__next_primeEm();
              param_1 = unaff_RBX;
              ppppppplVar38 = ppppppplStack_60;
              goto code_r0x003c5139;
            }
            bVar41 = unaff_RBX < ppppppplVar38;
            ppppppplVar40 = unaff_RBX;
            if (unaff_RBX <= ppppppplVar38) goto code_r0x003c51b0;
code_r0x003c5141:
            if ((long *******)0x1fffffffffffffff < ppppppplVar40) {
              puStack_f0 = &UNK_003c58cb;
              func_0x0032fc40();
              goto code_r0x003c58cb;
            }
            puStack_f0 = &UNK_003c5165;
            ppppppplVar38 = (long *******)_Znwm((long)ppppppplVar40 * 8);
            bVar41 = false;
code_r0x003c5167:
            ppppppplVar22 = ppppppplStack_68;
            bVar42 = ppppppplStack_68 != (long *******)0x0;
            ppppppplStack_68 = ppppppplVar38;
            if (bVar42) {
              puStack_f0 = &UNK_003c5181;
              _ZdaPvSt11align_val_t(ppppppplVar22,(long)ppppppplStack_60 << 3);
            }
            ppppppplStack_60 = ppppppplVar40;
            if (!bVar41) {
              uVar18 = (long)ppppppplVar40 - 1;
              uVar17 = (ulong)((uint)ppppppplVar40 & 3);
              if (2 < uVar18) {
                uVar23 = 0;
                do {
                  ppppppplStack_68[uVar23] = (long ******)0x0;
                  ppppppplStack_68[uVar23 + 1] = (long ******)0x0;
                  ppppppplStack_68[uVar23 + 2] = (long ******)0x0;
                  ppppppplStack_68[uVar23 + 3] = (long ******)0x0;
                  uVar23 = uVar23 + 4;
                  if (((ulong)ppppppplVar40 & 0x1ffffffffffffffc) == uVar23)
                  goto joined_r0x003c522f;
                } while( true );
              }
              uVar23 = 0;
              do {
                ppppppplStack_68[uVar23] = (long ******)0x0;
                uVar23 = uVar23 + 1;
                uVar17 = uVar17 - 1;
joined_r0x003c522f:
              } while (uVar17 != 0);
              if (ppppppplStack_58 != (long *******)0x0) {
                ppppppplVar38 = (long *******)ppppppplStack_58[1];
                if (((ulong)ppppppplVar40 & uVar18) == 0) {
                  ppppppplVar38 = (long *******)((ulong)ppppppplVar38 & uVar18);
                }
                else if (ppppppplVar40 <= ppppppplVar38) {
                  if (((ulong)ppppppplVar38 | (ulong)ppppppplVar40) >> 0x20 == 0) {
                    ppppppplVar38 =
                         (long *******)
                         (((ulong)ppppppplVar38 & 0xffffffff) % ((ulong)ppppppplVar40 & 0xffffffff))
                    ;
                  }
                  else {
                    ppppppplVar38 = (long *******)((ulong)ppppppplVar38 % (ulong)ppppppplVar40);
                  }
                }
                ppppppplStack_68[(long)ppppppplVar38] = (long ******)&ppppppplStack_58;
                ppppppplVar22 = (long *******)*ppppppplStack_58;
                ppppppplVar26 = ppppppplStack_58;
                while (param_5 = (long *******)0x0, ppppppplVar22 != (long *******)0x0) {
                  ppppppplVar25 = (long *******)ppppppplVar22[1];
                  if (((ulong)ppppppplVar40 & uVar18) == 0) {
                    ppppppplVar25 = (long *******)((ulong)ppppppplVar25 & uVar18);
                  }
                  else if (ppppppplVar40 <= ppppppplVar25) {
                    if (((ulong)ppppppplVar25 | (ulong)ppppppplVar40) >> 0x20 == 0) {
                      ppppppplVar25 =
                           (long *******)
                           (((ulong)ppppppplVar25 & 0xffffffff) %
                           ((ulong)ppppppplVar40 & 0xffffffff));
                    }
                    else {
                      ppppppplVar25 = (long *******)((ulong)ppppppplVar25 % (ulong)ppppppplVar40);
                    }
                  }
                  if (ppppppplVar25 != ppppppplVar38) {
                    if (ppppppplStack_68[(long)ppppppplVar25] == (long ******)0x0) {
                      ppppppplStack_68[(long)ppppppplVar25] = (long ******)ppppppplVar26;
                      ppppppplVar38 = ppppppplVar25;
                    }
                    else {
                      *ppppppplVar26 = *ppppppplVar22;
                      *ppppppplVar22 = (long ******)*ppppppplStack_68[(long)ppppppplVar25];
                      *ppppppplStack_68[(long)ppppppplVar25] = (long *****)ppppppplVar22;
                      ppppppplVar22 = ppppppplVar26;
                    }
                  }
                  ppppppplVar26 = ppppppplVar22;
                  ppppppplVar22 = (long *******)*ppppppplVar26;
                }
              }
            }
          }
code_r0x003c5400:
          ppppppplVar38 = ppppppplStack_60;
          unaff_RBX = ppppppplStack_c8;
          if (((ulong)ppppppplStack_60 & (long)ppppppplStack_60 - 1U) == 0) {
            ppppppplVar22 = (long *******)((long)ppppppplStack_60 - 1U & (ulong)ppppppplVar39);
          }
          else {
            ppppppplVar22 = ppppppplVar39;
            if (ppppppplStack_60 <= ppppppplVar39) {
              ppppppplVar22 = (long *******)((ulong)ppppppplVar39 % (ulong)ppppppplStack_60);
            }
          }
        }
        pppppplVar4 = ppppppplStack_68[(long)ppppppplVar22];
        if (pppppplVar4 == (long ******)0x0) {
          *param_4 = (long ******)ppppppplStack_58;
          ppppppplStack_68[(long)ppppppplVar22] = (long ******)&ppppppplStack_58;
          ppppppplVar22 = param_4;
          if (ppppppplStack_58 != (long *******)0x0) {
            ppppppplVar22 = (long *******)ppppppplStack_58[1];
            if (((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) == 0) {
              ppppppplVar22 = (long *******)((ulong)ppppppplVar22 & (long)ppppppplVar38 - 1U);
            }
            else if (ppppppplVar38 <= ppppppplVar22) {
              if (((ulong)ppppppplVar22 | (ulong)ppppppplVar38) >> 0x20 == 0) {
                ppppppplVar22 =
                     (long *******)
                     (((ulong)ppppppplVar22 & 0xffffffff) % ((ulong)ppppppplVar38 & 0xffffffff));
              }
              else {
                ppppppplVar22 = (long *******)((ulong)ppppppplVar22 % (ulong)ppppppplVar38);
              }
            }
            ppppppplStack_68[(long)ppppppplVar22] = (long ******)param_4;
            ppppppplVar22 = param_4;
          }
        }
        else {
          *param_4 = (long ******)*pppppplVar4;
          *pppppplVar4 = (long *****)param_4;
          ppppppplVar22 = ppppppplStack_58;
        }
        ppppppplStack_58 = ppppppplVar22;
        uStack_50 = uStack_50 + 1;
code_r0x003c54cc:
        uStack_a8 = (long *******)param_4[5];
        ppppppplStack_70 = param_4 + 4;
        ppppppplStack_80 = (long *******)&uStack_a8;
        ppppppplStack_78 = (long *******)&ppppppplStack_88;
        ppppppplStack_88 = ppppppplStack_b8;
        if (uStack_a8 < param_4[6]) {
          *uStack_a8 = (long ******)ppppppplStack_b8;
          ppppppplVar38 = uStack_a8 + 1;
        }
        else {
          puStack_f0 = &UNK_003c5523;
          _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_80);
          ppppppplVar38 = uStack_a8;
        }
        param_4[5] = (long ******)ppppppplVar38;
        unaff_RBX = unaff_RBX + 1;
      } while (unaff_RBX != ppppppplStack_b0);
    }
    ppppppplVar22 = *(long ********)(uStack_d0 + 0x18);
    ppppppplVar38 = (long *******)((long)ppppppplVar22 + 7);
    if (((ulong)ppppppplVar22 & 1) == 0) {
      ppppppplVar38 = (long *******)(uStack_d0 + 0x18);
    }
    if ((long)*(int *)(uStack_d0 + 0x20) != 0) {
      ppppppplStack_b8 = ppppppplVar38 + *(int *)(uStack_d0 + 0x20);
      ppppppplVar40 = (long *******)0x0;
code_r0x003c56a1:
      unaff_RBX = (long *******)*ppppppplVar38;
      ppppppplVar40 = (long *******)((long)ppppppplVar40 + (long)unaff_RBX[5]);
      ppppppplStack_98 = (long *******)0x0;
      ppppppplStack_90 = (long *******)0x0;
      pbVar16 = (byte *)((ulong)unaff_RBX[3] & 0xfffffffffffffffc);
      bVar41 = (*pbVar16 & 1) != 0;
      pbVar35 = pbVar16 + 1;
      if (bVar41) {
        pbVar35 = *(byte **)(pbVar16 + 0x10);
      }
      uVar18 = (ulong)(*pbVar16 >> 1);
      if (bVar41) {
        uVar18 = *(ulong *)(pbVar16 + 8);
      }
      ppppppplVar22 = (long *******)0x10;
      puStack_f0 = &UNK_003c56e4;
      func_0x0099c110(&ppppppplStack_98,pbVar35,uVar18);
      if ((ppppppplStack_60 != (long *******)0x0) && (uStack_50 != 0)) {
        uVar18 = (long)ppppppplStack_98 + 0x9e3779b9;
        ppppppplVar22 =
             (long *******)
             ((long)ppppppplStack_90 + (uVar18 >> 2) + uVar18 * 0x40 + 0x9e3779b9 ^ uVar18);
        uVar18 = (long)ppppppplStack_60 - 1;
        if (((ulong)ppppppplStack_60 & uVar18) == 0) {
          ppppppplVar39 = (long *******)((ulong)ppppppplVar22 & uVar18);
        }
        else {
          ppppppplVar39 = ppppppplVar22;
          if (ppppppplStack_60 <= ppppppplVar22) {
            ppppppplVar39 = (long *******)((ulong)ppppppplVar22 % (ulong)ppppppplStack_60);
          }
        }
        param_5 = ppppppplStack_98;
        if (ppppppplStack_68[(long)ppppppplVar39] != (long ******)0x0) {
          for (ppppplVar24 = *ppppppplStack_68[(long)ppppppplVar39]; ppppplVar24 != (long *****)0x0;
              ppppplVar24 = (long *****)*ppppplVar24) {
            ppppppplVar26 = (long *******)ppppplVar24[1];
            if (ppppppplVar26 == ppppppplVar22) {
              if (((long *******)ppppplVar24[2] == ppppppplStack_98) &&
                 ((long *******)ppppplVar24[3] == ppppppplStack_90)) {
                ppppppplVar39 = (long *******)ppppplVar24[4];
                param_4 = (long *******)ppppplVar24[5];
                if (ppppppplVar39 != param_4) {
                  pbStack_e0 = (byte *)((ulong)unaff_RBX[3] & 0xfffffffffffffffc);
                  bVar21 = *pbStack_e0;
                  param_5 = (long *******)(ulong)bVar21;
                  if ((bVar21 & 1) == 0) {
                    ppppppplVar26 = (long *******)(ulong)(bVar21 >> 1);
                  }
                  else {
                    ppppppplVar26 = *(long ********)(pbStack_e0 + 8);
                  }
                  pbStack_e8 = pbStack_e0 + 1;
                  uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)bVar21);
                  ppppppplStack_c8 = unaff_RBX;
                  ppppppplStack_b0 = ppppppplVar40;
                  goto code_r0x003c5845;
                }
                break;
              }
            }
            else {
              if (((ulong)ppppppplStack_60 & uVar18) == 0) {
                ppppppplVar26 = (long *******)((ulong)ppppppplVar26 & uVar18);
              }
              else if (ppppppplStack_60 <= ppppppplVar26) {
                if (((ulong)ppppppplVar26 | (ulong)ppppppplStack_60) >> 0x20 == 0) {
                  ppppppplVar26 =
                       (long *******)
                       (((ulong)ppppppplVar26 & 0xffffffff) % ((ulong)ppppppplStack_60 & 0xffffffff)
                       );
                }
                else {
                  ppppppplVar26 = (long *******)((ulong)ppppppplVar26 % (ulong)ppppppplStack_60);
                }
              }
              if (ppppppplVar26 != ppppppplVar39) break;
            }
          }
        }
      }
      goto code_r0x003c5690;
    }
    ppppppplVar40 = (long *******)0x0;
code_r0x003c5568:
    param_1 = (long *******)*ppppppplStack_c0;
    param_2 = (long *******)ppppppplStack_c0[1];
    ppppppplVar39 = ppppppplVar40;
    ppppppplVar25 = ppppppplStack_68;
    ppppppplVar26 = ppppppplStack_58;
    if (param_1 != param_2) {
      uVar18 = (long)param_2 - (long)param_1 >> 4;
      lVar36 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      ppppppplVar26 = (long *******)((ulong)(((uint)lVar36 ^ 0x3f) * 2) ^ 0x7e);
      ppppppplVar22 = (long *******)0x1;
      ppbVar27 = &puStack_f0;
      puStack_f0 = &UNK_003c559f;
      puVar31 = &stack0xfffffffffffffff8;
      goto code_r0x003c58e0;
    }
    while (param_1 = ppppppplVar25, ppppppplVar26 != (long *******)0x0) {
      ppppppplVar39 = (long *******)*ppppppplVar26;
      pppppplVar4 = ppppppplVar26[4];
      ppppppplStack_68 = param_1;
      if (pppppplVar4 != (long ******)0x0) {
        ppppppplVar26[5] = pppppplVar4;
        puStack_f0 = &UNK_003c5621;
        _ZdaPvSt11align_val_t(pppppplVar4,(long)ppppppplVar26[6] - (long)pppppplVar4);
      }
      param_2 = (long *******)0x38;
      puStack_f0 = &UNK_003c55fd;
      _ZdaPvSt11align_val_t(ppppppplVar26);
      ppppppplVar25 = ppppppplStack_68;
      ppppppplVar26 = ppppppplVar39;
    }
    ppppppplStack_68 = (long *******)0x0;
    if (param_1 != (long *******)0x0) {
      param_2 = (long *******)((long)ppppppplStack_60 << 3);
      puStack_f0 = &UNK_003c55c6;
      _ZdaPvSt11align_val_t();
    }
    unaff_RBX = (long *******)0x0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return ppppppplVar40;
    }
code_r0x003c58cb:
    puStack_f0 = &UNK_003c58d0;
    func_0x0099bd00();
  }
  puStack_f0 = &UNK_003c58d5;
  func_0x00330ca0();
  ppppppplVar26 = extraout_RDX;
  puVar31 = &stack0xfffffffffffffff8;
code_r0x003c58e0:
  do {
    ppppppplVar25 = param_2;
    puVar32 = (undefined1 *)((long)ppbVar27 + -8);
    puVar33 = (undefined1 *)((long)ppbVar27 + -8);
    puVar28 = (undefined1 *)((long)ppbVar27 + -8);
    *(undefined1 **)((long)ppbVar27 + -8) = puVar31;
    *(long ********)((long)ppbVar27 + -0x10) = ppppppplVar40;
    *(long ********)((long)ppbVar27 + -0x18) = ppppppplVar39;
    *(long ********)((long)ppbVar27 + -0x20) = param_4;
    *(long ********)((long)ppbVar27 + -0x28) = ppppppplVar38;
    *(long ********)((long)ppbVar27 + -0x30) = unaff_RBX;
    *(int *)((long)ppbVar27 + -0x4c) = (int)ppppppplVar22;
    *(undefined8 *)((long)ppbVar27 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppppplVar38 = ppppppplVar25 + -2;
    *(long ********)((long)ppbVar27 + -0x60) = ppppppplVar25 + -4;
    *(long ********)((long)ppbVar27 + -0x58) = ppppppplVar25 + -6;
    param_4 = param_1;
    param_2 = ppppppplVar25;
code_r0x003c591e:
    ppppppplVar22 = (long *******)((long)ppppppplVar25 - (long)param_4 >> 4);
    unaff_RBX = param_4;
    if (ppppppplVar22 < (long *******)0x6) {
      ppppppplVar39 =
           (long *******)(&UNK_001fdcb4 + *(int *)(&UNK_001fdcb4 + (long)ppppppplVar22 * 4));
      switch(ppppppplVar22) {
      default:
        goto code_r0x003c6596;
      case (long *******)0x2:
        ppppppplVar39 = (long *******)*param_4;
        if ((long)ppppppplVar39[4] <= (long)ppppppplVar25[-2][4]) goto code_r0x003c6596;
code_r0x003c6030:
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x48) = *param_4;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        pppppplVar4 = ppppppplVar25[-1];
        *param_4 = *ppppppplVar38;
        param_4[1] = pppppplVar4;
        break;
      case (long *******)0x3:
        ppppppplVar22 = param_4 + 2;
        param_2 = (long *******)*param_4;
        ppppppplVar39 = (long *******)param_4[2][4];
        if ((long)param_2[4] <= (long)ppppppplVar39) {
          if ((long)ppppppplVar25[-2][4] < (long)ppppppplVar39) {
            pppppplVar4 = param_4[3];
            *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            pppppplVar4 = ppppppplVar25[-1];
            *ppppppplVar22 = *ppppppplVar38;
            param_4[3] = pppppplVar4;
            uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
            uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
            uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
            *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
            *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
            *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
            *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
            goto code_r0x003c656c;
          }
          goto code_r0x003c6596;
        }
        if ((long)ppppppplVar25[-2][4] < (long)ppppppplVar39) goto code_r0x003c6030;
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x48) = *param_4;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        *param_4 = *ppppppplVar22;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x48);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
        ppppppplVar39 = (long *******)(*ppppppplVar38)[4];
        if ((long)param_4[2][4] <= (long)ppppppplVar39) goto code_r0x003c6596;
        pppppplVar4 = param_4[3];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        pppppplVar4 = ppppppplVar25[-1];
        *ppppppplVar22 = *ppppppplVar38;
        param_4[3] = pppppplVar4;
        break;
      case (long *******)0x4:
        ppppppplVar22 = param_4 + 2;
        ppppppplVar39 = param_4 + 4;
        param_5 = (long *******)*param_4;
        ppppplVar24 = param_4[2][4];
        pppppplVar4 = param_4[4];
        param_1 = (long *******)pppppplVar4[4];
        if ((long)ppppplVar24 < (long)param_5[4]) {
          if ((long)param_1 < (long)ppppplVar24) {
            pppppplVar4 = param_4[1];
            *(long *******)((long)ppbVar27 + -0x48) = *param_4;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            *param_4 = *ppppppplVar39;
            param_4[1] = param_4[5];
          }
          else {
            pppppplVar15 = param_4[1];
            *(long *******)((long)ppbVar27 + -0x48) = *param_4;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar15;
            *param_4 = *ppppppplVar22;
            param_4[1] = param_4[3];
            uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
            uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
            uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
            *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x48);
            *(undefined4 *)((long)param_4 + 0x14) = uVar9;
            *(undefined4 *)(param_4 + 3) = uVar10;
            *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
            if ((long)param_4[2][4] <= (long)pppppplVar4[4]) goto code_r0x003c651f;
            pppppplVar4 = param_4[3];
            *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            *ppppppplVar22 = *ppppppplVar39;
            param_4[3] = param_4[5];
          }
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
          *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x48);
          *(undefined4 *)((long)param_4 + 0x24) = uVar9;
          *(undefined4 *)(param_4 + 5) = uVar10;
          *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
        }
        else if ((long)param_1 < (long)ppppplVar24) {
          pppppplVar4 = param_4[3];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          *ppppppplVar22 = *ppppppplVar39;
          param_4[3] = param_4[5];
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
          *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x48);
          *(undefined4 *)((long)param_4 + 0x24) = uVar9;
          *(undefined4 *)(param_4 + 5) = uVar10;
          *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
          if ((long)param_4[2][4] < (long)(*param_4)[4]) {
            pppppplVar4 = param_4[1];
            *(long *******)((long)ppbVar27 + -0x48) = *param_4;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            *param_4 = *ppppppplVar22;
            param_4[1] = param_4[3];
            uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
            uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
            uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
            *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x48);
            *(undefined4 *)((long)param_4 + 0x14) = uVar9;
            *(undefined4 *)(param_4 + 3) = uVar10;
            *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
          }
        }
code_r0x003c651f:
        param_2 = (long *******)*ppppppplVar39;
        if ((long)(*ppppppplVar38)[4] < (long)param_2[4]) {
          pppppplVar4 = param_4[5];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar25[-1];
          *ppppppplVar39 = *ppppppplVar38;
          param_4[5] = pppppplVar4;
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
          *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
          *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
          *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
          *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
          param_2 = (long *******)*ppppppplVar22;
          if ((long)(*ppppppplVar39)[4] < (long)param_2[4]) {
            pppppplVar4 = param_4[3];
            *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            *ppppppplVar22 = *ppppppplVar39;
            param_4[3] = param_4[5];
            uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
            uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
            uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
            *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x48);
            *(undefined4 *)((long)param_4 + 0x24) = uVar9;
            *(undefined4 *)(param_4 + 5) = uVar10;
            *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
code_r0x003c656c:
            ppppppplVar39 = (long *******)*param_4;
            ppppppplVar38 = param_4 + 2;
            if ((long)(*ppppppplVar38)[4] < (long)ppppppplVar39[4]) {
              pppppplVar4 = param_4[1];
              *(long *******)((long)ppbVar27 + -0x48) = *param_4;
              *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
              *param_4 = *ppppppplVar38;
              param_4[1] = param_4[3];
              uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
              uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
              uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
              *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
              *(undefined4 *)((long)param_4 + 0x14) = uVar9;
              *(undefined4 *)(param_4 + 3) = uVar10;
              *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
            }
          }
        }
        goto code_r0x003c6596;
      case (long *******)0x5:
        ppppppplVar25 = ppppppplVar26;
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar27 + -0x38)) {
          param_2 = param_4 + 2;
          ppppppplVar22 = param_4 + 4;
          ppppppplVar39 = param_4 + 6;
          unaff_RBX = *(long ********)((long)ppbVar27 + -0x30);
          ppppppplVar25 = *(long ********)((long)ppbVar27 + -0x18);
          puVar32 = *(undefined1 **)((long)ppbVar27 + -8);
          goto code_r0x003c65c0;
        }
        goto code_r0x003c65b4;
      }
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
      *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
      *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
      *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
      *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
      goto code_r0x003c6596;
    }
    if ((long)ppppppplVar22 < 0x18) {
      ppppppplVar39 = param_4 + 2;
      if (*(char *)((long)ppbVar27 + -0x4c) != '\x01') {
        if (ppppppplVar39 != ppppppplVar25 && param_4 != ppppppplVar25) {
          ppppppplVar38 = param_4 + 3;
          do {
            ppppppplVar22 = ppppppplVar39;
            param_2 = (long *******)*param_4;
            pppppplVar4 = param_4[2];
            param_1 = (long *******)pppppplVar4[4];
            if ((long)param_1 < (long)param_2[4]) {
              param_2 = (long *******)param_4[3];
              param_1 = ppppppplVar38;
              do {
                ppppppplVar39 = param_1;
                *(undefined4 *)(ppppppplVar39 + -1) = *(undefined4 *)(ppppppplVar39 + -3);
                *(undefined4 *)((long)ppppppplVar39 + -4) =
                     *(undefined4 *)((long)ppppppplVar39 + -0x14);
                *(undefined4 *)ppppppplVar39 = *(undefined4 *)(ppppppplVar39 + -2);
                *(undefined4 *)((long)ppppppplVar39 + 4) =
                     *(undefined4 *)((long)ppppppplVar39 + -0xc);
                param_5 = (long *******)pppppplVar4[4];
                param_1 = ppppppplVar39 + -2;
              } while ((long)param_5 < (long)ppppppplVar39[-5][4]);
              ppppppplVar39[-3] = pppppplVar4;
              *param_1 = (long ******)param_2;
            }
            ppppppplVar39 = ppppppplVar22 + 2;
            ppppppplVar38 = ppppppplVar38 + 2;
            param_4 = ppppppplVar22;
          } while (ppppppplVar39 != ppppppplVar25);
        }
        goto code_r0x003c6596;
      }
      if (ppppppplVar39 == ppppppplVar25 || param_4 == ppppppplVar25) goto code_r0x003c6596;
      lVar36 = 0x10;
      ppppppplVar38 = param_4;
      goto code_r0x003c611e;
    }
    if (ppppppplVar26 == (long *******)0x0) {
      ppppppplVar39 = ppppppplVar22;
      if (param_4 == ppppppplVar25) goto code_r0x003c6596;
      ppppppplVar39 = (long *******)((long)ppppppplVar22 - 2U >> 1);
      ppppppplVar38 = ppppppplVar39;
      goto code_r0x003c6197;
    }
    ppppppplVar39 = param_4 + ((ulong)ppppppplVar22 & 0xfffffffffffffffe);
    ppppplVar24 = (*ppppppplVar38)[4];
    if (ppppppplVar22 < (long *******)0x81) {
      ppppplVar5 = (*param_4)[4];
      param_2 = (long *******)*ppppppplVar39;
      if ((long)ppppplVar5 < (long)param_2[4]) {
        if ((long)ppppplVar24 < (long)ppppplVar5) {
          pppppplVar4 = ppppppplVar39[1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar25[-1];
          *ppppppplVar39 = *ppppppplVar38;
          ppppppplVar39[1] = pppppplVar4;
        }
        else {
          pppppplVar4 = ppppppplVar39[1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = param_4[1];
          *ppppppplVar39 = *param_4;
          ppppppplVar39[1] = pppppplVar4;
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
          *(undefined4 *)param_4 = *(undefined4 *)((long)ppbVar27 + -0x48);
          *(undefined4 *)((long)param_4 + 4) = uVar9;
          *(undefined4 *)(param_4 + 1) = uVar10;
          *(undefined4 *)((long)param_4 + 0xc) = uVar11;
          if ((long)(*param_4)[4] <= (long)(*ppppppplVar38)[4]) goto code_r0x003c5d7e;
          pppppplVar4 = param_4[1];
          *(long *******)((long)ppbVar27 + -0x48) = *param_4;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar25[-1];
          *param_4 = *ppppppplVar38;
          param_4[1] = pppppplVar4;
        }
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
        *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
        *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
        *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
        *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
      }
      else if ((long)ppppplVar24 < (long)ppppplVar5) {
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x48) = *param_4;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        pppppplVar4 = ppppppplVar25[-1];
        *param_4 = *ppppppplVar38;
        param_4[1] = pppppplVar4;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
        *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
        *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
        *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
        *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
        if ((long)(*param_4)[4] < (long)(*ppppppplVar39)[4]) {
          pppppplVar4 = ppppppplVar39[1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = param_4[1];
          *ppppppplVar39 = *param_4;
          ppppppplVar39[1] = pppppplVar4;
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
          *(undefined4 *)param_4 = *(undefined4 *)((long)ppbVar27 + -0x48);
          *(undefined4 *)((long)param_4 + 4) = uVar9;
          *(undefined4 *)(param_4 + 1) = uVar10;
          *(undefined4 *)((long)param_4 + 0xc) = uVar11;
        }
      }
    }
    else {
      ppppplVar5 = (*ppppppplVar39)[4];
      if ((long)ppppplVar5 < (long)(*param_4)[4]) {
        if ((long)ppppplVar24 < (long)ppppplVar5) {
          pppppplVar4 = param_4[1];
          *(long *******)((long)ppbVar27 + -0x48) = *param_4;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar25[-1];
          *param_4 = *ppppppplVar38;
          param_4[1] = pppppplVar4;
        }
        else {
          pppppplVar4 = param_4[1];
          *(long *******)((long)ppbVar27 + -0x48) = *param_4;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[1];
          *param_4 = *ppppppplVar39;
          param_4[1] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar39 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[1] = pppppplVar4;
          if ((long)(*ppppppplVar39)[4] <= (long)(*ppppppplVar38)[4]) goto code_r0x003c5ab9;
          pppppplVar4 = ppppppplVar39[1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar25[-1];
          *ppppppplVar39 = *ppppppplVar38;
          ppppppplVar39[1] = pppppplVar4;
        }
        pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
        *ppppppplVar38 = *(long *******)((long)ppbVar27 + -0x48);
        ppppppplVar25[-1] = pppppplVar4;
      }
      else if ((long)ppppplVar24 < (long)ppppplVar5) {
        pppppplVar4 = ppppppplVar39[1];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        pppppplVar4 = ppppppplVar25[-1];
        *ppppppplVar39 = *ppppppplVar38;
        ppppppplVar39[1] = pppppplVar4;
        pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
        *ppppppplVar38 = *(long *******)((long)ppbVar27 + -0x48);
        ppppppplVar25[-1] = pppppplVar4;
        if ((long)(*ppppppplVar39)[4] < (long)(*param_4)[4]) {
          pppppplVar4 = param_4[1];
          *(long *******)((long)ppbVar27 + -0x48) = *param_4;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[1];
          *param_4 = *ppppppplVar39;
          param_4[1] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar39 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[1] = pppppplVar4;
        }
      }
code_r0x003c5ab9:
      ppppppplVar22 = param_4 + 2;
      ppppppplVar40 = ppppppplVar39 + -2;
      ppppplVar24 = ppppppplVar39[-2][4];
      if ((long)ppppplVar24 < (long)param_4[2][4]) {
        if (*(long *)(**(long **)((long)ppbVar27 + -0x60) + 0x20) < (long)ppppplVar24) {
          pppppplVar4 = param_4[3];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          plVar6 = *(long **)((long)ppbVar27 + -0x60);
          pppppplVar4 = (long ******)plVar6[1];
          *ppppppplVar22 = (long ******)*plVar6;
          param_4[3] = pppppplVar4;
          lVar36 = *(long *)((long)ppbVar27 + -0x40);
          *plVar6 = *(long *)((long)ppbVar27 + -0x48);
          plVar6[1] = lVar36;
        }
        else {
          pppppplVar4 = param_4[3];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[-1];
          *ppppppplVar22 = *ppppppplVar40;
          param_4[3] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar40 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[-1] = pppppplVar4;
          if (*(long *)(**(long **)((long)ppbVar27 + -0x60) + 0x20) < (long)(*ppppppplVar40)[4]) {
            pppppplVar4 = ppppppplVar39[-1];
            *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar40;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            plVar6 = *(long **)((long)ppbVar27 + -0x60);
            pppppplVar4 = (long ******)plVar6[1];
            *ppppppplVar40 = (long ******)*plVar6;
            ppppppplVar39[-1] = pppppplVar4;
            lVar36 = *(long *)((long)ppbVar27 + -0x40);
            *plVar6 = *(long *)((long)ppbVar27 + -0x48);
            plVar6[1] = lVar36;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar27 + -0x60) + 0x20) < (long)ppppplVar24) {
        pppppplVar4 = ppppppplVar39[-1];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar40;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        plVar6 = *(long **)((long)ppbVar27 + -0x60);
        pppppplVar4 = (long ******)plVar6[1];
        *ppppppplVar40 = (long ******)*plVar6;
        ppppppplVar39[-1] = pppppplVar4;
        lVar36 = *(long *)((long)ppbVar27 + -0x40);
        *plVar6 = *(long *)((long)ppbVar27 + -0x48);
        plVar6[1] = lVar36;
        if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar22)[4]) {
          pppppplVar4 = param_4[3];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[-1];
          *ppppppplVar22 = *ppppppplVar40;
          param_4[3] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar40 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[-1] = pppppplVar4;
        }
      }
      ppppppplVar22 = param_4 + 4;
      ppppppplVar19 = ppppppplVar39 + 2;
      ppppplVar24 = ppppppplVar39[2][4];
      if ((long)ppppplVar24 < (long)param_4[4][4]) {
        if (*(long *)(**(long **)((long)ppbVar27 + -0x58) + 0x20) < (long)ppppplVar24) {
          pppppplVar4 = param_4[5];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          plVar6 = *(long **)((long)ppbVar27 + -0x58);
          pppppplVar4 = (long ******)plVar6[1];
          *ppppppplVar22 = (long ******)*plVar6;
          param_4[5] = pppppplVar4;
          lVar36 = *(long *)((long)ppbVar27 + -0x40);
          *plVar6 = *(long *)((long)ppbVar27 + -0x48);
          plVar6[1] = lVar36;
        }
        else {
          pppppplVar4 = param_4[5];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[3];
          *ppppppplVar22 = *ppppppplVar19;
          param_4[5] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar19 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[3] = pppppplVar4;
          if (*(long *)(**(long **)((long)ppbVar27 + -0x58) + 0x20) < (long)(*ppppppplVar19)[4]) {
            pppppplVar4 = ppppppplVar39[3];
            *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar19;
            *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
            plVar6 = *(long **)((long)ppbVar27 + -0x58);
            pppppplVar4 = (long ******)plVar6[1];
            *ppppppplVar19 = (long ******)*plVar6;
            ppppppplVar39[3] = pppppplVar4;
            lVar36 = *(long *)((long)ppbVar27 + -0x40);
            *plVar6 = *(long *)((long)ppbVar27 + -0x48);
            plVar6[1] = lVar36;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar27 + -0x58) + 0x20) < (long)ppppplVar24) {
        pppppplVar4 = ppppppplVar39[3];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar19;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        plVar6 = *(long **)((long)ppbVar27 + -0x58);
        pppppplVar4 = (long ******)plVar6[1];
        *ppppppplVar19 = (long ******)*plVar6;
        ppppppplVar39[3] = pppppplVar4;
        lVar36 = *(long *)((long)ppbVar27 + -0x40);
        *plVar6 = *(long *)((long)ppbVar27 + -0x48);
        plVar6[1] = lVar36;
        if ((long)(*ppppppplVar19)[4] < (long)(*ppppppplVar22)[4]) {
          pppppplVar4 = param_4[5];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          pppppplVar4 = ppppppplVar39[3];
          *ppppppplVar22 = *ppppppplVar19;
          param_4[5] = pppppplVar4;
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar19 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[3] = pppppplVar4;
        }
      }
      param_5 = (long *******)ppppppplVar39[-2];
      param_2 = (long *******)(*ppppppplVar39)[4];
      param_1 = (long *******)ppppppplVar39[2][4];
      if ((long)param_2 < (long)param_5[4]) {
        if ((long)param_1 < (long)param_2) {
          pppppplVar4 = ppppppplVar39[-1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          *ppppppplVar40 = *ppppppplVar19;
          ppppppplVar39[-1] = ppppppplVar39[3];
        }
        else {
          pppppplVar4 = ppppppplVar39[-1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          *ppppppplVar40 = *ppppppplVar39;
          ppppppplVar39[-1] = ppppppplVar39[1];
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar39 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[1] = pppppplVar4;
          param_2 = (long *******)ppppppplVar39[2][4];
          if ((long)(*ppppppplVar39)[4] <= (long)param_2) goto code_r0x003c5d66;
          pppppplVar4 = ppppppplVar39[1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          *ppppppplVar39 = *ppppppplVar19;
          ppppppplVar39[1] = ppppppplVar39[3];
        }
        pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
        *ppppppplVar19 = *(long *******)((long)ppbVar27 + -0x48);
        ppppppplVar39[3] = pppppplVar4;
      }
      else if ((long)param_1 < (long)param_2) {
        pppppplVar4 = ppppppplVar39[1];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar39;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
        *ppppppplVar39 = *ppppppplVar19;
        ppppppplVar39[1] = ppppppplVar39[3];
        pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
        *ppppppplVar19 = *(long *******)((long)ppbVar27 + -0x48);
        ppppppplVar39[3] = pppppplVar4;
        param_2 = (long *******)(*ppppppplVar39)[4];
        if ((long)param_2 < (long)ppppppplVar39[-2][4]) {
          pppppplVar4 = ppppppplVar39[-1];
          *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
          *ppppppplVar40 = *ppppppplVar39;
          ppppppplVar39[-1] = ppppppplVar39[1];
          pppppplVar4 = *(long *******)((long)ppbVar27 + -0x40);
          *ppppppplVar39 = *(long *******)((long)ppbVar27 + -0x48);
          ppppppplVar39[1] = pppppplVar4;
        }
      }
code_r0x003c5d66:
      pppppplVar4 = param_4[1];
      *(long *******)((long)ppbVar27 + -0x48) = *param_4;
      *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
      pppppplVar4 = ppppppplVar39[1];
      *param_4 = *ppppppplVar39;
      param_4[1] = pppppplVar4;
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
      *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x48);
      *(undefined4 *)((long)ppppppplVar39 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar39 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar11;
    }
code_r0x003c5d7e:
    ppppppplVar26 = (long *******)((long)ppppppplVar26 + -1);
    pppppplVar4 = *param_4;
    if (*(char *)((long)ppbVar27 + -0x4c) != '\x01') {
      ppppplVar24 = pppppplVar4[4];
      if ((long)param_4[-2][4] < (long)ppppplVar24) goto code_r0x003c5db2;
      ppppppplVar22 = param_4;
      if ((long)ppppplVar24 < (long)ppppppplVar25[-2][4]) {
        do {
          ppppppplVar39 = ppppppplVar22 + 2;
          ppppppplVar22 = ppppppplVar22 + 2;
        } while ((long)(*ppppppplVar39)[4] <= (long)ppppplVar24);
      }
      else {
        do {
          ppppppplVar22 = ppppppplVar22 + 2;
          if (ppppppplVar25 <= ppppppplVar22) break;
          param_2 = (long *******)*ppppppplVar22;
        } while ((long)param_2[4] <= (long)ppppplVar24);
      }
      ppppppplVar39 = ppppppplVar25;
      if (ppppppplVar22 < ppppppplVar25) {
        do {
          param_2 = (long *******)ppppppplVar39[-2];
          ppppppplVar39 = ppppppplVar39 + -2;
        } while ((long)ppppplVar24 < (long)param_2[4]);
      }
      pppppplVar15 = param_4[1];
      while (ppppppplVar22 < ppppppplVar39) {
        pppppplVar12 = ppppppplVar22[1];
        *(long *******)((long)ppbVar27 + -0x48) = *ppppppplVar22;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar12;
        pppppplVar12 = ppppppplVar39[1];
        *ppppppplVar22 = *ppppppplVar39;
        ppppppplVar22[1] = pppppplVar12;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x48);
        *(undefined4 *)((long)ppppppplVar39 + 4) = uVar9;
        *(undefined4 *)(ppppppplVar39 + 1) = uVar10;
        *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar11;
        param_2 = (long *******)pppppplVar4[4];
        do {
          ppppppplVar40 = ppppppplVar22 + 2;
          ppppppplVar22 = ppppppplVar22 + 2;
        } while ((long)(*ppppppplVar40)[4] <= (long)param_2);
        do {
          param_1 = (long *******)ppppppplVar39[-2];
          ppppppplVar39 = ppppppplVar39 + -2;
        } while ((long)param_2 < (long)param_1[4]);
      }
      if (param_4 != ppppppplVar22 + -2) {
        uVar9 = *(undefined4 *)((long)ppppppplVar22 + -0xc);
        uVar10 = *(undefined4 *)(ppppppplVar22 + -1);
        uVar11 = *(undefined4 *)((long)ppppppplVar22 + -4);
        *(undefined4 *)param_4 = *(undefined4 *)(ppppppplVar22 + -2);
        *(undefined4 *)((long)param_4 + 4) = uVar9;
        *(undefined4 *)(param_4 + 1) = uVar10;
        *(undefined4 *)((long)param_4 + 0xc) = uVar11;
      }
      ppppppplVar22[-2] = pppppplVar4;
      ppppppplVar22[-1] = pppppplVar15;
      *(undefined4 *)((long)ppbVar27 + -0x4c) = 0;
      param_4 = ppppppplVar22;
      goto code_r0x003c591e;
    }
    ppppplVar24 = pppppplVar4[4];
code_r0x003c5db2:
    pppppplVar15 = param_4[1];
    lVar36 = 0;
    do {
      lVar37 = lVar36 + 0x10;
      lVar36 = lVar36 + 0x10;
    } while (*(long *)(*(long *)((long)param_4 + lVar37) + 0x20) < (long)ppppplVar24);
    ppppppplVar22 = (long *******)(lVar36 + (long)param_4);
    ppppppplVar39 = ppppppplVar25;
    if (lVar36 == 0x10) {
      param_5 = (long *******)0x10;
      do {
        if (ppppppplVar39 <= ppppppplVar22) break;
        param_5 = (long *******)ppppppplVar39[-2];
        ppppppplVar39 = ppppppplVar39 + -2;
      } while ((long)ppppplVar24 <= (long)param_5[4]);
    }
    else {
      do {
        param_5 = (long *******)ppppppplVar39[-2];
        ppppppplVar39 = ppppppplVar39 + -2;
      } while ((long)ppppplVar24 <= (long)param_5[4]);
    }
    ppppppplVar40 = ppppppplVar39;
    unaff_RBX = ppppppplVar22;
    if (ppppppplVar22 < ppppppplVar39) {
      do {
        pppppplVar12 = unaff_RBX[1];
        *(long *******)((long)ppbVar27 + -0x48) = *unaff_RBX;
        *(long *******)((long)ppbVar27 + -0x40) = pppppplVar12;
        pppppplVar12 = ppppppplVar40[1];
        *unaff_RBX = *ppppppplVar40;
        unaff_RBX[1] = pppppplVar12;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar27 + -0x48);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar9;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar10;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar11;
        param_5 = (long *******)pppppplVar4[4];
        do {
          ppppppplVar19 = unaff_RBX + 2;
          unaff_RBX = unaff_RBX + 2;
        } while ((long)(*ppppppplVar19)[4] < (long)param_5);
        do {
          ppppppplVar19 = ppppppplVar40 + -2;
          ppppppplVar40 = ppppppplVar40 + -2;
        } while ((long)param_5 <= (long)(*ppppppplVar19)[4]);
      } while (unaff_RBX < ppppppplVar40);
    }
    param_2 = unaff_RBX + -2;
    if (param_4 != param_2) {
      uVar9 = *(undefined4 *)((long)unaff_RBX + -0xc);
      uVar10 = *(undefined4 *)(unaff_RBX + -1);
      uVar11 = *(undefined4 *)((long)unaff_RBX + -4);
      *(undefined4 *)param_4 = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_4 + 4) = uVar9;
      *(undefined4 *)(param_4 + 1) = uVar10;
      *(undefined4 *)((long)param_4 + 0xc) = uVar11;
    }
    *(long ********)((long)ppbVar27 + -0x68) = param_4;
    unaff_RBX[-2] = pppppplVar4;
    unaff_RBX[-1] = pppppplVar15;
    if (ppppppplVar39 <= ppppppplVar22) goto code_r0x003c5e95;
    ppppppplVar22 = (long *******)(ulong)*(byte *)((long)ppbVar27 + -0x4c);
    param_1 = *(long ********)((long)ppbVar27 + -0x68);
    puVar29 = (undefined8 *)((long)ppbVar27 + -0x80);
    ppbVar27 = (byte **)((long)ppbVar27 + -0x80);
    *puVar29 = &UNK_003c5ee7;
    puVar31 = puVar28;
    ppppppplVar39 = ppppppplVar26;
    ppppppplVar40 = ppppppplVar25;
  } while( true );
code_r0x003c5845:
  do {
    pppppplVar4 = *ppppppplVar39;
    pbVar35 = (byte *)((ulong)pppppplVar4[3] & 0xfffffffffffffffc);
    bVar21 = *pbVar35;
    if ((bVar21 & 1) == 0) {
      ppppppplVar22 = (long *******)(ulong)(bVar21 >> 1);
    }
    else {
      ppppppplVar22 = *(long ********)(pbVar35 + 8);
    }
    if (ppppppplVar22 == ppppppplVar26) {
      if ((bVar21 & 1) == 0) {
        pbVar35 = pbVar35 + 1;
      }
      else {
        pbVar35 = *(byte **)(pbVar35 + 0x10);
      }
      pbVar16 = pbStack_e8;
      if (((ulong)param_5 & 1) != 0) {
        pbVar16 = *(byte **)(pbStack_e0 + 0x10);
      }
      puStack_f0 = &UNK_003c5818;
      iVar14 = func_0x0099bf90(pbVar35,pbVar16);
      param_5 = (long *******)(uStack_d0 & 0xffffffff);
      unaff_RBX = ppppppplVar26;
      if (iVar14 == 0) {
        uStack_a8 = ppppppplStack_c8;
        puStack_f0 = &UNK_003c563d;
        uStack_a0 = pppppplVar4;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (ppppppplStack_d8);
        ppppppplVar39 = ppppppplStack_c0;
        ppppppplStack_88 = (long *******)ppppppplStack_c0[1];
        ppppppplStack_80 = (long *******)&ppppppplStack_88;
        ppppppplVar22 = (long *******)&uStack_a8;
        ppppppplStack_70 = ppppppplStack_c0;
        ppppppplStack_78 = ppppppplVar22;
        if (ppppppplStack_88 < ppppppplStack_c0[2]) {
          *(undefined4 *)ppppppplStack_88 = (undefined4)uStack_a8;
          *(undefined4 *)((long)ppppppplStack_88 + 4) = uStack_a8._4_4_;
          *(undefined4 *)(ppppppplStack_88 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((long)ppppppplStack_88 + 0xc) = uStack_a0._4_4_;
          ppppppplVar40 = ppppppplStack_88 + 2;
        }
        else {
          puStack_f0 = &UNK_003c58bd;
          _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_80);
          ppppppplVar40 = ppppppplStack_88;
        }
        ppppppplVar39[1] = (long ******)ppppppplVar40;
        ppppppplVar40 = ppppppplStack_b0;
        break;
      }
    }
    ppppppplVar39 = ppppppplVar39 + 1;
    ppppppplVar40 = ppppppplStack_b0;
  } while (ppppppplVar39 != param_4);
code_r0x003c5690:
  ppppppplVar38 = ppppppplVar38 + 1;
  if (ppppppplVar38 == ppppppplStack_b8) goto code_r0x003c5568;
  goto code_r0x003c56a1;
code_r0x003c611e:
  do {
    param_2 = ppppppplVar39;
    param_1 = (long *******)*ppppppplVar38;
    pppppplVar4 = ppppppplVar38[2];
    param_5 = (long *******)pppppplVar4[4];
    if ((long)param_5 < (long)param_1[4]) {
      pppppplVar15 = ppppppplVar38[3];
      lVar37 = lVar36;
      do {
        puVar1 = (undefined4 *)((long)param_4 + lVar37 + -0x10);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar3 = (undefined4 *)((long)param_4 + lVar37);
        *puVar3 = *puVar1;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        param_1 = param_4;
        if (lVar37 == 0x10) goto code_r0x003c6103;
        param_5 = (long *******)pppppplVar4[4];
        lVar13 = lVar37 + -0x20;
        lVar37 = lVar37 + -0x10;
      } while ((long)param_5 < *(long *)(*(long *)((long)param_4 + lVar13) + 0x20));
      param_1 = (long *******)(lVar37 + (long)param_4);
code_r0x003c6103:
      *param_1 = pppppplVar4;
      param_1[1] = pppppplVar15;
    }
    ppppppplVar39 = param_2 + 2;
    lVar36 = lVar36 + 0x10;
    ppppppplVar38 = param_2;
  } while (ppppppplVar39 != ppppppplVar25);
  goto code_r0x003c6596;
code_r0x003c6197:
  do {
    if (ppppppplVar38 <= ppppppplVar39) {
      ppppppplVar40 = (long *******)((long)ppppppplVar38 * 2 + 1);
      ppppppplVar19 = (long *******)((long)ppppppplVar38 * 2 + 2);
      if ((ppppppplVar19 < ppppppplVar22) &&
         ((long)param_4[(long)ppppppplVar40 * 2][4] < (long)param_4[(long)ppppppplVar19 * 2][4])) {
        ppppppplVar40 = ppppppplVar19;
      }
      pppppplVar4 = param_4[(long)ppppppplVar38 * 2];
      if ((long)pppppplVar4[4] <= (long)param_4[(long)ppppppplVar40 * 2][4]) {
        pppppplVar15 = param_4[(long)ppppppplVar38 * 2 + 1];
        ppppppplVar19 = ppppppplVar38;
        do {
          ppppppplVar34 = ppppppplVar40;
          pppppplVar12 = (param_4 + (long)ppppppplVar34 * 2)[1];
          param_4[(long)ppppppplVar19 * 2] = param_4[(long)ppppppplVar34 * 2];
          (param_4 + (long)ppppppplVar19 * 2)[1] = pppppplVar12;
          if ((long)ppppppplVar39 < (long)ppppppplVar34) break;
          ppppppplVar19 = (long *******)((long)ppppppplVar34 * 2 + 1);
          ppppppplVar2 = (long *******)((long)ppppppplVar34 * 2 + 2);
          ppppppplVar40 = ppppppplVar19;
          if (((long)ppppppplVar2 < (long)ppppppplVar22) &&
             (ppppppplVar26 = (long *******)param_4[(long)ppppppplVar2 * 2],
             ppppppplVar40 = ppppppplVar2,
             (long)ppppppplVar26[4] <= (long)param_4[(long)ppppppplVar19 * 2][4])) {
            ppppppplVar40 = ppppppplVar19;
          }
          unaff_RBX = (long *******)param_4[(long)ppppppplVar40 * 2][4];
          ppppppplVar19 = ppppppplVar34;
        } while ((long)pppppplVar4[4] <= (long)unaff_RBX);
        param_4[(long)ppppppplVar34 * 2] = pppppplVar4;
        (param_4 + (long)ppppppplVar34 * 2)[1] = pppppplVar15;
      }
    }
    bVar41 = 0 < (long)ppppppplVar38;
    ppppppplVar38 = (long *******)((long)ppppppplVar38 + -1);
  } while (bVar41);
  do {
    pppppplVar4 = param_4[1];
    *(long *******)((long)ppbVar27 + -0x48) = *param_4;
    *(long *******)((long)ppbVar27 + -0x40) = pppppplVar4;
    param_1 = (long *******)0x0;
    ppppppplVar38 = param_4;
    do {
      param_5 = (long *******)((long)param_1 * 0x10);
      ppppppplVar19 = ppppppplVar38 + (long)param_1 * 2 + 2;
      ppppppplVar39 = (long *******)((long)param_1 * 2 + 1);
      ppppppplVar40 = (long *******)((long)param_1 * 2 + 2);
      param_1 = ppppppplVar39;
      if (((long)ppppppplVar40 < (long)ppppppplVar22) &&
         (param_5 = (long *******)((long)param_5 + (long)ppppppplVar38),
         (long)param_5[2][4] < (long)param_5[4][4])) {
        ppppppplVar19 = param_5 + 4;
        param_1 = ppppppplVar40;
        param_5 = ppppppplVar19;
      }
      pppppplVar4 = ppppppplVar19[1];
      *ppppppplVar38 = *ppppppplVar19;
      ppppppplVar38[1] = pppppplVar4;
      ppppppplVar38 = ppppppplVar19;
    } while ((long)param_1 <= (long)((long)ppppppplVar22 - 2U >> 1));
    ppppppplVar38 = ppppppplVar25 + -2;
    param_2 = ppppppplVar19;
    if (ppppppplVar19 == ppppppplVar38) {
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
      *(undefined4 *)ppppppplVar19 = *(undefined4 *)((long)ppbVar27 + -0x48);
      *(undefined4 *)((long)ppppppplVar19 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar19 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar19 + 0xc) = uVar11;
    }
    else {
      pppppplVar4 = ppppppplVar25[-1];
      *ppppppplVar19 = *ppppppplVar38;
      ppppppplVar19[1] = pppppplVar4;
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x44);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x40);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x3c);
      *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x48);
      *(undefined4 *)((long)ppppppplVar25 + -0xc) = uVar9;
      *(undefined4 *)(ppppppplVar25 + -1) = uVar10;
      *(undefined4 *)((long)ppppppplVar25 + -4) = uVar11;
      lVar36 = (long)ppppppplVar19 + (0x10 - (long)param_4) >> 4;
      if (1 < lVar36) {
        uVar18 = lVar36 - 2U >> 1;
        param_5 = (long *******)(uVar18 * 0x10);
        param_1 = (long *******)param_4[uVar18 * 2][4];
        param_2 = (long *******)*ppppppplVar19;
        if ((long)param_1 < (long)param_2[4]) {
          param_1 = (long *******)ppppppplVar19[1];
          param_5 = (long *******)((long)param_5 + (long)param_4);
          do {
            ppppppplVar39 = param_5;
            uVar9 = *(undefined4 *)((long)ppppppplVar39 + 4);
            uVar10 = *(undefined4 *)(ppppppplVar39 + 1);
            uVar11 = *(undefined4 *)((long)ppppppplVar39 + 0xc);
            *(undefined4 *)ppppppplVar19 = *(undefined4 *)ppppppplVar39;
            *(undefined4 *)((long)ppppppplVar19 + 4) = uVar9;
            *(undefined4 *)(ppppppplVar19 + 1) = uVar10;
            *(undefined4 *)((long)ppppppplVar19 + 0xc) = uVar11;
            param_5 = ppppppplVar39;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            param_5 = param_4 + uVar18 * 2;
            ppppppplVar19 = ppppppplVar39;
          } while ((long)param_4[uVar18 * 2][4] < (long)param_2[4]);
          *ppppppplVar39 = (long ******)param_2;
          ppppppplVar39[1] = (long ******)param_1;
        }
      }
    }
    ppppppplVar39 = (long *******)((long)ppppppplVar22 + -1);
    bVar41 = 2 < (long)ppppppplVar22;
    ppppppplVar22 = ppppppplVar39;
    ppppppplVar25 = ppppppplVar38;
  } while (bVar41);
code_r0x003c6596:
  ppppppplVar25 = ppppppplVar26;
  if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar27 + -0x38)) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
code_r0x003c65b4:
  ppppppplVar38 = param_5;
  param_4 = param_1;
  *(undefined **)((long)ppbVar27 + -0x80) = &UNK_003c65b9;
  func_0x0099bd00();
  ppppppplVar22 = extraout_RDX_00;
  ppbVar27 = (byte **)((long)ppbVar27 + -0x78);
  goto code_r0x003c65c0;
code_r0x003c5e95:
  *(long ********)((long)ppbVar27 + -0x70) = ppppppplVar26;
  param_4 = *(long ********)((long)ppbVar27 + -0x68);
  puVar30 = (undefined1 *)((long)ppbVar27 + -0x80);
  *(undefined **)((long)ppbVar27 + -0x80) = &UNK_003c5eab;
code_r0x003c67a0:
  puVar32 = puVar30 + -8;
  *(undefined1 **)(puVar30 + -8) = puVar33;
  *(long ********)(puVar30 + -0x10) = ppppppplVar25;
  *(long ********)(puVar30 + -0x18) = unaff_RBX;
  uVar7 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar30 + -0x20) = uVar7;
  uVar20 = (undefined7)((ulong)uVar7 >> 8);
  ppppppplVar38 = (long *******)CONCAT71(uVar20,1);
  switch((long)param_2 - (long)param_4 >> 4) {
  case 0:
  case 1:
    goto code_r0x003c6b3a;
  case 2:
    if ((long)param_2[-2][4] < (long)(*param_4)[4]) {
      pppppplVar4 = param_4[1];
      *(long *******)(puVar30 + -0x38) = *param_4;
      *(long *******)(puVar30 + -0x30) = pppppplVar4;
      pppppplVar4 = param_2[-1];
      *param_4 = param_2[-2];
      param_4[1] = pppppplVar4;
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_2 + -0xc) = uVar9;
      *(undefined4 *)(param_2 + -1) = uVar10;
      *(undefined4 *)((long)param_2 + -4) = uVar11;
    }
    goto code_r0x003c6b3a;
  case 3:
    ppppppplVar22 = param_4 + 2;
    ppppppplVar39 = param_2 + -2;
    ppppplVar24 = param_4[2][4];
    if ((long)ppppplVar24 < (long)(*param_4)[4]) {
      if ((long)param_2[-2][4] < (long)ppppplVar24) {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        pppppplVar4 = param_2[-1];
        *param_4 = *ppppppplVar39;
        param_4[1] = pppppplVar4;
      }
      else {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar22;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)(puVar30 + -0x34);
        uVar10 = *(undefined4 *)(puVar30 + -0x30);
        uVar11 = *(undefined4 *)(puVar30 + -0x2c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
        if ((long)param_4[2][4] <= (long)(*ppppppplVar39)[4]) goto code_r0x003c6b3a;
        pppppplVar4 = param_4[3];
        *(long *******)(puVar30 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        pppppplVar4 = param_2[-1];
        *ppppppplVar22 = *ppppppplVar39;
        param_4[3] = pppppplVar4;
      }
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_2 + -0xc) = uVar9;
      *(undefined4 *)(param_2 + -1) = uVar10;
      *(undefined4 *)((long)param_2 + -4) = uVar11;
      goto code_r0x003c6b3a;
    }
    if ((long)ppppplVar24 <= (long)param_2[-2][4]) goto code_r0x003c6b3a;
    break;
  case 4:
    ppppppplVar22 = param_4 + 2;
    ppppppplVar39 = param_4 + 4;
    ppppppplVar40 = param_2 + -2;
    pppppplVar4 = *param_4;
    ppppplVar24 = param_4[2][4];
    pppppplVar15 = param_4[4];
    ppppplVar5 = pppppplVar15[4];
    if ((long)ppppplVar24 < (long)pppppplVar4[4]) {
      if ((long)ppppplVar5 < (long)ppppplVar24) {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar39;
        param_4[1] = param_4[5];
      }
      else {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar22;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)(puVar30 + -0x34);
        uVar10 = *(undefined4 *)(puVar30 + -0x30);
        uVar11 = *(undefined4 *)(puVar30 + -0x2c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
        if ((long)param_4[2][4] <= (long)pppppplVar15[4]) goto code_r0x003c6abf;
        pppppplVar4 = param_4[3];
        *(long *******)(puVar30 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *ppppppplVar22 = *ppppppplVar39;
        param_4[3] = param_4[5];
      }
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_4 + 0x24) = uVar9;
      *(undefined4 *)(param_4 + 5) = uVar10;
      *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
    }
    else if ((long)ppppplVar5 < (long)ppppplVar24) {
      pppppplVar15 = param_4[3];
      *(long *******)(puVar30 + -0x38) = *ppppppplVar22;
      *(long *******)(puVar30 + -0x30) = pppppplVar15;
      *ppppppplVar22 = *ppppppplVar39;
      param_4[3] = param_4[5];
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_4 + 0x24) = uVar9;
      *(undefined4 *)(param_4 + 5) = uVar10;
      *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
      if ((long)(*ppppppplVar22)[4] < (long)pppppplVar4[4]) {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar22;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)(puVar30 + -0x34);
        uVar10 = *(undefined4 *)(puVar30 + -0x30);
        uVar11 = *(undefined4 *)(puVar30 + -0x2c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
      }
    }
code_r0x003c6abf:
    if ((long)(*ppppppplVar39)[4] <= (long)(*ppppppplVar40)[4]) goto code_r0x003c6b3a;
    pppppplVar4 = param_4[5];
    *(long *******)(puVar30 + -0x38) = *ppppppplVar39;
    *(long *******)(puVar30 + -0x30) = pppppplVar4;
    pppppplVar4 = param_2[-1];
    *ppppppplVar39 = *ppppppplVar40;
    param_4[5] = pppppplVar4;
    uVar9 = *(undefined4 *)(puVar30 + -0x34);
    uVar10 = *(undefined4 *)(puVar30 + -0x30);
    uVar11 = *(undefined4 *)(puVar30 + -0x2c);
    *(undefined4 *)ppppppplVar40 = *(undefined4 *)(puVar30 + -0x38);
    *(undefined4 *)((long)param_2 + -0xc) = uVar9;
    *(undefined4 *)(param_2 + -1) = uVar10;
    *(undefined4 *)((long)param_2 + -4) = uVar11;
    if ((long)(*ppppppplVar22)[4] <= (long)(*ppppppplVar39)[4]) goto code_r0x003c6b3a;
    break;
  case 5:
    ppppppplVar22 = param_4 + 4;
    ppppppplVar39 = param_4 + 6;
    ppppppplVar38 = param_2 + -2;
    ppbVar27 = (byte **)(puVar30 + -0x40);
    *(undefined **)(puVar30 + -0x40) = &UNK_003c686a;
    param_2 = param_4 + 2;
code_r0x003c65c0:
    puVar33 = (undefined1 *)((long)ppbVar27 + -8);
    *(undefined1 **)((long)ppbVar27 + -8) = puVar32;
    puVar30 = (undefined1 *)((long)ppbVar27 + -0x28);
    *(undefined8 *)((long)ppbVar27 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppplVar24 = (*param_2)[4];
    if ((long)ppppplVar24 < (long)(*param_4)[4]) {
      if ((long)(*ppppppplVar22)[4] < (long)ppppplVar24) {
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x28) = *param_4;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = ppppppplVar22[1];
        *param_4 = *ppppppplVar22;
        param_4[1] = pppppplVar4;
      }
      else {
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x28) = *param_4;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = param_2[1];
        *param_4 = *param_2;
        param_4[1] = pppppplVar4;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
        *(undefined4 *)param_2 = *(undefined4 *)((long)ppbVar27 + -0x28);
        *(undefined4 *)((long)param_2 + 4) = uVar9;
        *(undefined4 *)(param_2 + 1) = uVar10;
        *(undefined4 *)((long)param_2 + 0xc) = uVar11;
        if ((long)(*param_2)[4] <= (long)(*ppppppplVar22)[4]) goto code_r0x003c6677;
        pppppplVar4 = param_2[1];
        *(long *******)((long)ppbVar27 + -0x28) = *param_2;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = ppppppplVar22[1];
        *param_2 = *ppppppplVar22;
        param_2[1] = pppppplVar4;
      }
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x28);
      *(undefined4 *)((long)ppppppplVar22 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar22 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar11;
    }
    else if ((long)(*ppppppplVar22)[4] < (long)ppppplVar24) {
      pppppplVar4 = param_2[1];
      *(long *******)((long)ppbVar27 + -0x28) = *param_2;
      *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
      pppppplVar4 = ppppppplVar22[1];
      *param_2 = *ppppppplVar22;
      param_2[1] = pppppplVar4;
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x28);
      *(undefined4 *)((long)ppppppplVar22 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar22 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar11;
      if ((long)(*param_2)[4] < (long)(*param_4)[4]) {
        pppppplVar4 = param_4[1];
        *(long *******)((long)ppbVar27 + -0x28) = *param_4;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = param_2[1];
        *param_4 = *param_2;
        param_4[1] = pppppplVar4;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
        *(undefined4 *)param_2 = *(undefined4 *)((long)ppbVar27 + -0x28);
        *(undefined4 *)((long)param_2 + 4) = uVar9;
        *(undefined4 *)(param_2 + 1) = uVar10;
        *(undefined4 *)((long)param_2 + 0xc) = uVar11;
      }
    }
code_r0x003c6677:
    if ((long)(*ppppppplVar39)[4] < (long)(*ppppppplVar22)[4]) {
      pppppplVar4 = ppppppplVar22[1];
      *(long *******)((long)ppbVar27 + -0x28) = *ppppppplVar22;
      *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
      pppppplVar4 = ppppppplVar39[1];
      *ppppppplVar22 = *ppppppplVar39;
      ppppppplVar22[1] = pppppplVar4;
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
      *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x28);
      *(undefined4 *)((long)ppppppplVar39 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar39 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar11;
      if ((long)(*ppppppplVar22)[4] < (long)(*param_2)[4]) {
        pppppplVar4 = param_2[1];
        *(long *******)((long)ppbVar27 + -0x28) = *param_2;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = ppppppplVar22[1];
        *param_2 = *ppppppplVar22;
        param_2[1] = pppppplVar4;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x28);
        *(undefined4 *)((long)ppppppplVar22 + 4) = uVar9;
        *(undefined4 *)(ppppppplVar22 + 1) = uVar10;
        *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar11;
        if ((long)(*param_2)[4] < (long)(*param_4)[4]) {
          pppppplVar4 = param_4[1];
          *(long *******)((long)ppbVar27 + -0x28) = *param_4;
          *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
          pppppplVar4 = param_2[1];
          *param_4 = *param_2;
          param_4[1] = pppppplVar4;
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
          *(undefined4 *)param_2 = *(undefined4 *)((long)ppbVar27 + -0x28);
          *(undefined4 *)((long)param_2 + 4) = uVar9;
          *(undefined4 *)(param_2 + 1) = uVar10;
          *(undefined4 *)((long)param_2 + 0xc) = uVar11;
        }
      }
    }
    if ((long)(*ppppppplVar38)[4] < (long)(*ppppppplVar39)[4]) {
      pppppplVar4 = ppppppplVar39[1];
      *(long *******)((long)ppbVar27 + -0x28) = *ppppppplVar39;
      *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
      pppppplVar4 = ppppppplVar38[1];
      *ppppppplVar39 = *ppppppplVar38;
      ppppppplVar39[1] = pppppplVar4;
      uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
      uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
      uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
      *(undefined4 *)ppppppplVar38 = *(undefined4 *)((long)ppbVar27 + -0x28);
      *(undefined4 *)((long)ppppppplVar38 + 4) = uVar9;
      *(undefined4 *)(ppppppplVar38 + 1) = uVar10;
      *(undefined4 *)((long)ppppppplVar38 + 0xc) = uVar11;
      if ((long)(*ppppppplVar39)[4] < (long)(*ppppppplVar22)[4]) {
        pppppplVar4 = ppppppplVar22[1];
        *(long *******)((long)ppbVar27 + -0x28) = *ppppppplVar22;
        *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
        pppppplVar4 = ppppppplVar39[1];
        *ppppppplVar22 = *ppppppplVar39;
        ppppppplVar22[1] = pppppplVar4;
        uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
        uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
        uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar27 + -0x28);
        *(undefined4 *)((long)ppppppplVar39 + 4) = uVar9;
        *(undefined4 *)(ppppppplVar39 + 1) = uVar10;
        *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar11;
        if ((long)(*ppppppplVar22)[4] < (long)(*param_2)[4]) {
          pppppplVar4 = param_2[1];
          *(long *******)((long)ppbVar27 + -0x28) = *param_2;
          *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
          pppppplVar4 = ppppppplVar22[1];
          *param_2 = *ppppppplVar22;
          param_2[1] = pppppplVar4;
          uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
          uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
          uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
          *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar27 + -0x28);
          *(undefined4 *)((long)ppppppplVar22 + 4) = uVar9;
          *(undefined4 *)(ppppppplVar22 + 1) = uVar10;
          *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar11;
          if ((long)(*param_2)[4] < (long)(*param_4)[4]) {
            pppppplVar4 = param_4[1];
            *(long *******)((long)ppbVar27 + -0x28) = *param_4;
            *(long *******)((long)ppbVar27 + -0x20) = pppppplVar4;
            pppppplVar4 = param_2[1];
            *param_4 = *param_2;
            param_4[1] = pppppplVar4;
            uVar9 = *(undefined4 *)((long)ppbVar27 + -0x24);
            uVar10 = *(undefined4 *)((long)ppbVar27 + -0x20);
            uVar11 = *(undefined4 *)((long)ppbVar27 + -0x1c);
            *(undefined4 *)param_2 = *(undefined4 *)((long)ppbVar27 + -0x28);
            *(undefined4 *)((long)param_2 + 4) = uVar9;
            *(undefined4 *)(param_2 + 1) = uVar10;
            *(undefined4 *)((long)param_2 + 0xc) = uVar11;
          }
        }
      }
    }
    if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar27 + -0x10)) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
    *(undefined **)((long)ppbVar27 + -0x30) = &UNK_003c6793;
    func_0x0099bd00();
    goto code_r0x003c67a0;
  default:
    ppppppplVar22 = param_4 + 4;
    ppppppplVar39 = param_4 + 2;
    pppppplVar4 = *param_4;
    ppppplVar24 = param_4[2][4];
    pppppplVar15 = param_4[4];
    ppppplVar5 = pppppplVar15[4];
    if ((long)ppppplVar24 < (long)pppppplVar4[4]) {
      if ((long)ppppplVar5 < (long)ppppplVar24) {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar22;
        param_4[1] = param_4[5];
      }
      else {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar39;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)(puVar30 + -0x34);
        uVar10 = *(undefined4 *)(puVar30 + -0x30);
        uVar11 = *(undefined4 *)(puVar30 + -0x2c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
        if ((long)param_4[2][4] <= (long)pppppplVar15[4]) goto code_r0x003c6a01;
        pppppplVar4 = param_4[3];
        *(long *******)(puVar30 + -0x38) = *ppppppplVar39;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *ppppppplVar39 = *ppppppplVar22;
        param_4[3] = param_4[5];
      }
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_4 + 0x24) = uVar9;
      *(undefined4 *)(param_4 + 5) = uVar10;
      *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
    }
    else if ((long)ppppplVar5 < (long)ppppplVar24) {
      pppppplVar15 = param_4[3];
      *(long *******)(puVar30 + -0x38) = *ppppppplVar39;
      *(long *******)(puVar30 + -0x30) = pppppplVar15;
      *ppppppplVar39 = *ppppppplVar22;
      param_4[3] = param_4[5];
      uVar9 = *(undefined4 *)(puVar30 + -0x34);
      uVar10 = *(undefined4 *)(puVar30 + -0x30);
      uVar11 = *(undefined4 *)(puVar30 + -0x2c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
      *(undefined4 *)((long)param_4 + 0x24) = uVar9;
      *(undefined4 *)(param_4 + 5) = uVar10;
      *(undefined4 *)((long)param_4 + 0x2c) = uVar11;
      if ((long)(*ppppppplVar39)[4] < (long)pppppplVar4[4]) {
        pppppplVar4 = param_4[1];
        *(long *******)(puVar30 + -0x38) = *param_4;
        *(long *******)(puVar30 + -0x30) = pppppplVar4;
        *param_4 = *ppppppplVar39;
        param_4[1] = param_4[3];
        uVar9 = *(undefined4 *)(puVar30 + -0x34);
        uVar10 = *(undefined4 *)(puVar30 + -0x30);
        uVar11 = *(undefined4 *)(puVar30 + -0x2c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
        *(undefined4 *)((long)param_4 + 0x14) = uVar9;
        *(undefined4 *)(param_4 + 3) = uVar10;
        *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
      }
    }
code_r0x003c6a01:
    if (param_4 + 6 != param_2) {
      iVar14 = 0;
      lVar36 = 0x30;
      ppppppplVar39 = param_4 + 6;
      goto code_r0x003c6a49;
    }
    goto code_r0x003c6b3a;
  }
  ppppppplVar22 = param_4 + 2;
  pppppplVar4 = param_4[3];
  *(long *******)(puVar30 + -0x38) = *ppppppplVar22;
  *(long *******)(puVar30 + -0x30) = pppppplVar4;
  pppppplVar4 = ppppppplVar39[1];
  *ppppppplVar22 = *ppppppplVar39;
  param_4[3] = pppppplVar4;
  uVar9 = *(undefined4 *)(puVar30 + -0x34);
  uVar10 = *(undefined4 *)(puVar30 + -0x30);
  uVar11 = *(undefined4 *)(puVar30 + -0x2c);
  *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar30 + -0x38);
  *(undefined4 *)((long)ppppppplVar39 + 4) = uVar9;
  *(undefined4 *)(ppppppplVar39 + 1) = uVar10;
  *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar11;
  if ((long)param_4[2][4] < (long)(*param_4)[4]) {
    pppppplVar4 = param_4[1];
    *(long *******)(puVar30 + -0x38) = *param_4;
    *(long *******)(puVar30 + -0x30) = pppppplVar4;
    *param_4 = *ppppppplVar22;
    param_4[1] = param_4[3];
    uVar9 = *(undefined4 *)(puVar30 + -0x34);
    uVar10 = *(undefined4 *)(puVar30 + -0x30);
    uVar11 = *(undefined4 *)(puVar30 + -0x2c);
    *(undefined4 *)ppppppplVar22 = *(undefined4 *)(puVar30 + -0x38);
    *(undefined4 *)((long)param_4 + 0x14) = uVar9;
    *(undefined4 *)(param_4 + 3) = uVar10;
    *(undefined4 *)((long)param_4 + 0x1c) = uVar11;
  }
  goto code_r0x003c6b3a;
code_r0x003c6a49:
  pppppplVar4 = *ppppppplVar39;
  if ((long)pppppplVar4[4] < (long)(*ppppppplVar22)[4]) {
    pppppplVar15 = ppppppplVar39[1];
    lVar37 = lVar36;
    do {
      puVar3 = (undefined4 *)((long)param_4 + lVar37 + -0x10);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar1 = (undefined4 *)((long)param_4 + lVar37);
      *puVar1 = *puVar3;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      ppppppplVar22 = param_4;
      if (lVar37 == 0x10) goto code_r0x003c6a23;
      lVar13 = lVar37 + -0x20;
      lVar37 = lVar37 + -0x10;
    } while ((long)pppppplVar4[4] < *(long *)(*(long *)((long)param_4 + lVar13) + 0x20));
    ppppppplVar22 = (long *******)(lVar37 + (long)param_4);
code_r0x003c6a23:
    *ppppppplVar22 = pppppplVar4;
    ppppppplVar22[1] = pppppplVar15;
    iVar14 = iVar14 + 1;
    if (iVar14 == 8) {
      ppppppplVar38 = (long *******)CONCAT71(uVar20,ppppppplVar39 + 2 == param_2);
      goto code_r0x003c6b3a;
    }
  }
  ppppppplVar40 = ppppppplVar39 + 2;
  lVar36 = lVar36 + 0x10;
  ppppppplVar22 = ppppppplVar39;
  ppppppplVar39 = ppppppplVar40;
  if (ppppppplVar40 == param_2) {
code_r0x003c6b3a:
    if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(puVar30 + -0x20)) {
      *(undefined **)(puVar30 + -0x40) = &UNK_003c6b57;
      func_0x0099bd00();
      pcVar8 = (code *)swi(3);
      ppppppplVar38 = (long *******)(*pcVar8)();
      return ppppppplVar38;
    }
    return ppppppplVar38;
  }
  goto code_r0x003c6a49;
}


