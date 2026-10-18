// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ExtendTransitionsEv
// Address: 004c4cc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int *******
_ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ExtendTransitionsEv
          (int *******param_1,long ******param_2,undefined8 param_3,long *******param_4)

{
  int ******ppppppiVar1;
  long *******ppppppplVar2;
  int *****pppppiVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long ******pppppplVar14;
  int ******ppppppiVar15;
  long lVar16;
  int iVar17;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int iVar20;
  undefined8 unaff_R14;
  long *****ppppplVar21;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  long lStack_158;
  byte bStack_13a;
  byte bStack_139;
  long ******pppppplStack_138;
  undefined8 uStack_130;
  int *******pppppppiStack_128;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  long lStack_110;
  int *******pppppppiStack_108;
  long ******pppppplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long ******pppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  int *******pppppppiStack_b0;
  int *******pppppppiStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long ******pppppplStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long ******pppppplStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if (*(byte *)(param_1 + 0xe) >> 1 == 0) goto code_r0x004c4e6d;
  }
  else if (param_1[0xf] == (int ******)0x0) {
code_r0x004c4e6d:
    uVar12 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    pppppppiVar19 = param_1;
    goto code_r0x004c4f18;
  }
  pppppppiVar19 = param_1 + 0xe;
  uStack_d8 = 0;
  lStack_d0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  pppppppiStack_108 = (int *******)0x0;
  pppppplStack_100 = (long ******)0x0;
  pppppplStack_118 = (long ******)0x0;
  lStack_110 = 0;
  pppppppiStack_128 = (int *******)0x0;
  pppppplStack_120 = (long ******)0x0;
  pppppplStack_138 = (long ******)0x0;
  uStack_130 = 0;
  param_2 = (long ******)&pppppplStack_138;
  cVar10 = _ZN4absl12lts_2026052613time_internal4cctz14ParsePosixSpecERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS2_13PosixTimeZoneE
                     ();
  if (cVar10 == '\0') {
code_r0x004c4ed5:
    uVar12 = 0;
    pppppppiVar18 = pppppppiStack_108;
  }
  else {
    bStack_139 = 0;
    uVar12 = 0;
    param_4 = &pppppplStack_138;
    param_2 = pppppplStack_120;
    pppppppiVar19 = param_1;
    cVar10 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17GetTransitionTypeElbRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPh
                       (param_1,pppppplStack_120,0,param_4,&bStack_139);
    pppppppiVar18 = pppppppiStack_108;
    if (cVar10 != '\0') {
      if (((ulong)pppppplStack_118 & 1) == 0) {
        if ((byte)pppppplStack_118 >> 1 != 0) goto code_r0x004c4da0;
      }
      else if (lStack_110 != 0) {
code_r0x004c4da0:
        param_4 = &pppppplStack_118;
        bStack_13a = 0;
        param_2 = pppppplStack_100;
        pppppppiVar19 = param_1;
        cVar10 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17GetTransitionTypeElbRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPh
                           (param_1,pppppplStack_100,1,param_4,&bStack_13a);
        if (cVar10 == '\0') goto code_r0x004c4ed5;
        if ((((((int)uStack_f8 == 1) && (uStack_f0 == 0)) && (lStack_e8 == 0)) &&
            (((int)uStack_e0 == 0 && (uStack_d8 == 0x16d)))) &&
           ((long)pppppplStack_120 + (lStack_d0 - (long)pppppplStack_100) == 0x15180)) {
          param_2 = (long ******)(ulong)*(byte *)(param_1[2] + -5);
          pppppppiVar19 = param_1;
          uVar11 = _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo16EquivTransitionsEhh
                             (param_1,param_2,bStack_13a);
          uVar12 = (ulong)uVar11;
          pppppppiVar18 = pppppppiStack_108;
        }
        else {
          func_0x004c9530(param_1 + 1,
                          ((long)param_1[2] - (long)param_1[1] >> 4) * -0x5555555555555555 + 0x324);
          *(undefined1 *)(param_1 + 0x11) = 1;
          pppppiVar3 = param_1[2][-6];
          _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                    (&pppppplStack_78,param_1,pppppiVar3,
                     (ulong)((uint)*(byte *)(param_1[2] + -5) * 0x30) + (long)param_1[4]);
          param_1[0x12] = (int ******)pppppplStack_78;
          bVar22 = false;
          if (((ulong)pppppplStack_78 & 3) == 0) {
            lVar13 = (long)pppppplStack_78 * -0x70a3d70a3d70a3d7;
            bVar22 = true;
            if ((lVar13 + 0x51eb851eb851eb8U >> 2 | lVar13 << 0x3e) < 0x28f5c28f5c28f5d) {
              bVar22 = (lVar13 + 0x51eb851eb851eb0U >> 4 | lVar13 << 0x3c) < 0xa3d70a3d70a3d7;
            }
          }
          pppppplStack_48 = pppppplStack_78;
          uStack_40 = 0x101;
          lStack_158 = _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEES6_
                                 (pppppplStack_78,0x101,0x7b2,0x101);
          uVar11 = _ZN4absl12lts_2026052613time_internal4cctz6detail11get_weekdayERKNS3_10civil_timeINS3_10second_tagEEE
                             (&pppppplStack_48);
          uVar12 = (ulong)(uVar11 + 1);
          if (5 < uVar11) {
            uVar12 = 0;
          }
          uStack_70 = (ulong)bStack_13a;
          uStack_68 = 0x7b2;
          uStack_60 = 0x101;
          uStack_58 = 0x7b2;
          uStack_50 = 0x101;
          uStack_a0 = (ulong)bStack_139;
          uStack_98 = 0x7b2;
          uStack_90 = 0x101;
          uStack_88 = 0x7b2;
          uStack_80 = 0x101;
          ppppppiVar15 = param_1[0x12];
          ppppppiVar1 = (int ******)((long)ppppppiVar15 + 0x191);
          while( true ) {
            unaff_R15 = (ulong)bVar22;
            iVar20 = (int)uVar12;
            if ((int)uStack_f8 == 2) {
              lVar13 = (long)uStack_f0._1_1_;
              iVar17 = (int)*(short *)(&UNK_001ff610 +
                                      (ulong)(lVar13 == 5) * 2 +
                                      (long)(char)uStack_f0 * 2 + unaff_R15 * 0x1c);
              sVar4 = (short)((iVar20 + iVar17) % 7);
              if (lVar13 == 5) {
                sVar4 = sVar4 - uStack_f0._2_1_;
                lVar13 = (long)(short)~(((short)(sVar4 + 6) / 7) * -7 + sVar4 + 6U) + (long)iVar17;
              }
              else {
                sVar4 = uStack_f0._2_1_ - sVar4;
                lVar13 = (long)iVar17 + lVar13 * 7 +
                         (long)(short)(((short)(sVar4 + 7) / 7) * -7 + sVar4 + 7) + -7;
              }
            }
            else {
              lVar13 = uStack_f0;
              if ((int)uStack_f8 != 1) {
                if ((int)uStack_f8 == 0) {
                  lVar13 = uStack_f0 - (ulong)((byte)(~bVar22 | uStack_f0 < 0x3c) & 1);
                }
                else {
                  lVar13 = 0;
                }
              }
            }
            if ((int)uStack_e0 == 2) {
              lVar16 = (long)uStack_d8._1_1_;
              iVar17 = (int)*(short *)(&UNK_001ff610 +
                                      (ulong)(lVar16 == 5) * 2 +
                                      (long)(char)uStack_d8 * 2 + unaff_R15 * 0x1c);
              sVar4 = (short)((iVar20 + iVar17) % 7);
              if (lVar16 == 5) {
                sVar4 = sVar4 - uStack_d8._2_1_;
                lVar16 = (long)(short)~(((short)(sVar4 + 6) / 7) * -7 + sVar4 + 6U) + (long)iVar17;
              }
              else {
                sVar4 = uStack_d8._2_1_ - sVar4;
                lVar16 = (long)iVar17 + lVar16 * 7 +
                         (long)(short)(((short)(sVar4 + 7) / 7) * -7 + sVar4 + 7) + -7;
              }
            }
            else {
              lVar16 = uStack_d8;
              if ((int)uStack_e0 != 1) {
                if ((int)uStack_e0 == 0) {
                  lVar16 = uStack_d8 - (ulong)((byte)(~bVar22 | uStack_d8 < 0x3c) & 1);
                }
                else {
                  lVar16 = 0;
                }
              }
            }
            param_2 = (long ******)
                      ((lStack_e8 + lStack_158 + lVar13 * 0x15180) - (long)pppppplStack_120);
            pppppplStack_78 = param_2;
            pppppppiVar19 =
                 (int *******)((lStack_d0 + lStack_158 + lVar16 * 0x15180) - (long)pppppplStack_100)
            ;
            pppppppiStack_a8 = pppppppiVar19;
            ppppppplVar2 = (long *******)&pppppppiStack_a8;
            param_4 = &pppppplStack_78;
            pppppppiVar18 = pppppppiVar19;
            if ((long)pppppppiVar19 <= (long)param_2) {
              param_4 = (long *******)&pppppppiStack_a8;
              ppppppplVar2 = &pppppplStack_78;
              pppppppiVar18 = (int *******)param_2;
            }
            if ((long)pppppiVar3 < (long)pppppppiVar18) {
              pppppplStack_c8 = (long ******)param_1[2];
              pppppplVar14 = (long ******)param_1[3];
              if ((long)pppppiVar3 < (long)*param_4) {
                param_2 = (long ******)&pppppplStack_c8;
                ppppppplStack_c0 = (long *******)param_2;
                ppppppplStack_b8 = param_4;
                pppppppiStack_b0 = param_1 + 1;
                if (pppppplStack_c8 < pppppplVar14) {
                  iVar17 = *(int *)param_4;
                  iVar5 = *(int *)((long)param_4 + 4);
                  iVar6 = *(int *)((long)param_4 + 8);
                  iVar7 = *(int *)((long)param_4 + 0xc);
                  pppppplVar14 = *(long *******)((long)param_4 + 0x10);
                  pppppplVar8 = *(long *******)((long)param_4 + 0x18);
                  pppppplVar9 = *(long *******)((long)param_4 + 0x28);
                  pppppplStack_c8[4] = (long *****)*(long *******)((long)param_4 + 0x20);
                  pppppplStack_c8[5] = (long *****)pppppplVar9;
                  pppppplStack_c8[2] = (long *****)pppppplVar14;
                  pppppplStack_c8[3] = (long *****)pppppplVar8;
                  *(int *)pppppplStack_c8 = iVar17;
                  *(int *)((long)pppppplStack_c8 + 4) = iVar5;
                  *(int *)(pppppplStack_c8 + 1) = iVar6;
                  *(int *)((long)pppppplStack_c8 + 0xc) = iVar7;
                  pppppplStack_c8 = pppppplStack_c8 + 6;
                }
                else {
                  pppppppiVar19 = (int *******)&ppppppplStack_c0;
                  _ZZNSt3__16vectorIN6google8protobuf14DescriptorPool18DeferredValidation13LifetimesInfoENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                            ();
                }
                param_1[2] = (int ******)pppppplStack_c8;
                pppppplVar14 = (long ******)param_1[3];
              }
              param_4 = &pppppplStack_c8;
              ppppppplStack_c0 = param_4;
              ppppppplStack_b8 = ppppppplVar2;
              pppppppiStack_b0 = param_1 + 1;
              if (pppppplStack_c8 < pppppplVar14) {
                iVar17 = *(int *)ppppppplVar2;
                iVar5 = *(int *)((long)ppppppplVar2 + 4);
                iVar6 = *(int *)((long)ppppppplVar2 + 8);
                iVar7 = *(int *)((long)ppppppplVar2 + 0xc);
                pppppplVar14 = *(long *******)((long)ppppppplVar2 + 0x10);
                pppppplVar8 = *(long *******)((long)ppppppplVar2 + 0x18);
                pppppplVar9 = *(long *******)((long)ppppppplVar2 + 0x28);
                pppppplStack_c8[4] = (long *****)*(long *******)((long)ppppppplVar2 + 0x20);
                pppppplStack_c8[5] = (long *****)pppppplVar9;
                pppppplStack_c8[2] = (long *****)pppppplVar14;
                pppppplStack_c8[3] = (long *****)pppppplVar8;
                *(int *)pppppplStack_c8 = iVar17;
                *(int *)((long)pppppplStack_c8 + 4) = iVar5;
                *(int *)(pppppplStack_c8 + 1) = iVar6;
                *(int *)((long)pppppplStack_c8 + 0xc) = iVar7;
                pppppplVar14 = pppppplStack_c8 + 6;
              }
              else {
                pppppppiVar19 = (int *******)&ppppppplStack_c0;
                _ZZNSt3__16vectorIN6google8protobuf14DescriptorPool18DeferredValidation13LifetimesInfoENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                          ();
                pppppplVar14 = pppppplStack_c8;
              }
              param_1[2] = (int ******)pppppplVar14;
              ppppppiVar15 = param_1[0x12];
            }
            if (ppppppiVar15 == ppppppiVar1) break;
            ppppppiVar15 = (int ******)((long)ppppppiVar15 + 1);
            bVar23 = false;
            if ((bVar22 == false) && (((ulong)ppppppiVar15 & 3) == 0)) {
              lVar13 = (long)ppppppiVar15 * -0x70a3d70a3d70a3d7;
              bVar23 = true;
              if ((lVar13 + 0x51eb851eb851eb8U >> 2 | lVar13 << 0x3e) < 0x28f5c28f5c28f5d) {
                bVar23 = (lVar13 + 0x51eb851eb851eb0U >> 4 | lVar13 << 0x3c) < 0xa3d70a3d70a3d7;
              }
            }
            lStack_158 = lStack_158 + *(int *)(&UNK_0018c698 + (ulong)bVar22 * 4);
            uVar12 = (ulong)(uint)((iVar20 + *(int *)(&UNK_0018c928 + (ulong)bVar22 * 4)) % 7);
            param_1[0x12] = ppppppiVar15;
            bVar22 = bVar23;
          }
          uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
          pppppppiVar18 = pppppppiStack_108;
        }
        goto joined_r0x004c563f;
      }
      param_4 = (long *******)(ulong)bStack_139;
      uVar12 = 1;
      if (*(byte *)(param_1[2] + -5) != bStack_139) {
        ppppppiVar1 = param_1[4];
        uVar12 = (ulong)((uint)*(byte *)(param_1[2] + -5) * 0x30);
        param_4 = (long *******)(ulong)((uint)bStack_139 * 0x30);
        param_2 = (long ******)(ulong)*(uint *)((long)ppppppiVar1 + uVar12);
        if ((*(uint *)((long)ppppppiVar1 + uVar12) != *(uint *)((long)ppppppiVar1 + (long)param_4))
           || (param_4 = (long *******)((long)param_4 + (long)ppppppiVar1),
              *(char *)((long)ppppppiVar1 + uVar12 + 0x28) != *(char *)(param_4 + 5)))
        goto code_r0x004c4ed5;
        uVar12 = (ulong)(*(char *)((long)ppppppiVar1 + uVar12 + 0x29) ==
                        *(char *)((long)param_4 + 0x29));
      }
    }
  }
joined_r0x004c563f:
  pppppppiStack_108 = pppppppiVar18;
  if (((ulong)pppppplStack_118 & 1) != 0) {
    param_2 = (long ******)((ulong)pppppplStack_118 & 0xfffffffffffffffe);
    _ZdaPvSt11align_val_t();
    pppppppiVar19 = pppppppiVar18;
  }
  if (((ulong)pppppplStack_138 & 1) != 0) {
    param_2 = (long ******)((ulong)pppppplStack_138 & 0xfffffffffffffffe);
    pppppppiVar19 = pppppppiStack_128;
    _ZdaPvSt11align_val_t();
  }
code_r0x004c4f18:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (int *******)(uVar12 & 0xffffffff);
  }
  auVar24 = func_0x0099bd00();
  auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (0x7b2,1,1,0,auVar24._8_8_ / 0x3c,auVar24._8_8_ % 0x3c,auVar24._0_8_,param_1,
                       uVar12,unaff_R15,&stack0xfffffffffffffff8);
  auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (auVar24._0_8_,(long)auVar24[8],(long)auVar24[9],(long)auVar24[10],
                       (long)auVar24[0xb] + (long)(*(int *)param_4 / 0x3c),
                       (long)(*(int *)param_4 % 0x3c) + (long)auVar24[0xc]);
  *pppppppiVar19 = auVar24._0_8_;
  pppppppiVar19[1] = (int ******)(auVar24._8_8_ & 0xffffffffff);
  *(int *)(pppppppiVar19 + 2) = *(int *)param_4;
  *(undefined1 *)((long)pppppppiVar19 + 0x14) = *(undefined1 *)(param_4 + 5);
  if (((ulong)param_2[8] & 1) == 0) {
    ppppplVar21 = (long *****)((long)param_2 + 0x41);
  }
  else {
    ppppplVar21 = param_2[10];
  }
  pppppppiVar19[3] = (int ******)((long)ppppplVar21 + (ulong)*(byte *)((long)param_4 + 0x29));
  return pppppppiVar19;
}


