// Function: _ZN21fdevent_context_epoll3SetEP7fdeventj
// Address: 004193e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN21fdevent_context_epoll3SetEP7fdeventj(undefined1 *param_1,long param_2,uint param_3)

{
  long **pplVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  byte extraout_DL;
  ulong uVar20;
  ulong uVar21;
  undefined4 *unaff_RBX;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  long unaff_R12;
  long lVar27;
  long *plVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined8 uStack_130;
  long lStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  undefined1 auStack_48 [12];
  int iStack_3c;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)(param_2 + 0xc);
  *(short *)(param_2 + 0xc) = (short)param_3;
  lStack_70 = unaff_R12;
  if ((param_3 & 0xfffffff7) != (uVar2 & 0xfffffff7)) {
    iStack_3c = (param_3 & 1) + (param_3 & 6) * 2 + 0x2000;
    param_1 = (undefined1 *)(ulong)*(uint *)(param_1 + 0xb0);
    lStack_38 = param_2;
    iVar7 = func_0x0099c440(param_1,3,*(undefined4 *)(param_2 + 8),&iStack_3c);
    lStack_70 = param_2;
    if (iVar7 != 0) {
      param_1 = (undefined1 *)0x6;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar6 != '\0') {
        unaff_RBX = (undefined4 *)func_0x0099bce0();
        uVar3 = *unaff_RBX;
        param_1 = auStack_48;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (param_1,&UNK_00187fcd,0x68,6,0,uVar3);
        uVar10 = _ZN7android4base10LogMessage6streamEv(param_1);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015c9af,0x14);
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                           (uVar10,*(undefined4 *)(param_2 + 8));
        func_0x0032eb30(uVar10,&UNK_0015c9a3,0xb);
        _ZN7android4base10LogMessageD2Ev();
        *unaff_RBX = uVar3;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_78 = unaff_RBX;
  uVar10 = _ZN7android4base11GetThreadIdEv();
  *(undefined8 *)(param_1 + 8) = uVar10;
  param_1[0x10] = 1;
  plStack_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  lStack_98 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0x3f800000;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  do {
    plStack_d0 = plStack_c8;
    if (param_1[0x18] != '\0') {
      if (param_1[0x10] == '\x01') {
        param_1[0x10] = 0;
      }
      plVar23 = plStack_b0;
      puVar25 = puStack_a0;
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        _ZdaPvSt11align_val_t(lStack_f0,lStack_e0 - lStack_f0);
        plVar23 = plStack_b0;
        puVar25 = puStack_a0;
      }
      while (puVar25 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar25;
        plStack_b0 = plVar23;
        _ZdaPvSt11align_val_t(puVar25,0x20);
        plVar23 = plStack_b0;
        puVar25 = puVar4;
      }
      plStack_b0 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        _ZdaPvSt11align_val_t(plVar23,uStack_a8 << 3);
      }
      plVar23 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plStack_c8 = plStack_d0;
        _ZdaPvSt11align_val_t(plStack_d0,(long)plStack_c0 - (long)plStack_d0);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
code_r0x0041a072:
      func_0x0099bd00();
code_r0x0041a077:
      func_0x0032fc40();
      return plVar23[6] + -1;
    }
    lVar11 = lStack_e8 - lStack_f0 >> 2;
    if ((ulong)(lVar11 * -0x5555555555555555) <= *(ulong *)(param_1 + 0x30) &&
        *(ulong *)(param_1 + 0x30) + lVar11 * 0x5555555555555555 != 0) {
      func_0x0041a4b0(&lStack_f0);
    }
    while( true ) {
      uVar8 = _ZN15fdevent_context21CalculatePollDurationEv(param_1);
      plVar23 = (long *)(ulong)*(uint *)(param_1 + 0xb0);
      uVar8 = func_0x0099c450(plVar23,lStack_f0,
                              (int)((ulong)(lStack_e8 - lStack_f0) >> 2) * -0x55555555,
                              -(uint)((extraout_DL & 1) == 0) | uVar8);
      if (uVar8 != 0xffffffff) break;
      piVar12 = (int *)func_0x0099bce0();
      if ((*piVar12 != 4) &&
         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar6 != '\0')) {
        iVar7 = *piVar12;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_118,&UNK_00187fcd,0x88,6,0,iVar7);
        uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_118);
        func_0x0032eb30(uVar10,&UNK_0016b0fa,0x11);
        _ZN7android4base10LogMessageD2Ev(&uStack_118);
        *piVar12 = iVar7;
      }
    }
    lVar11 = _ZNSt3__16chrono12steady_clock3nowEv();
    plVar16 = plStack_d0;
    uVar19 = *(ulong *)(param_1 + 0x30);
    lVar27 = (long)plStack_c0 - (long)plStack_d0;
    if ((ulong)(lVar27 >> 4) < uVar19) {
      if (0xfffffffffffffff < uVar19) {
code_r0x0041a06d:
        func_0x00330ca0();
        goto code_r0x0041a072;
      }
      lVar13 = (long)plStack_c8 - (long)plStack_d0;
      plVar14 = (long *)_Znwm(uVar19 * 0x10);
      plVar23 = plVar14;
      func_0x0099bda0(plVar14,plVar16);
      plStack_d0 = plVar14;
      plStack_c0 = plVar14 + uVar19 * 2;
      if (plVar16 != (long *)0x0) {
        plStack_c8 = (long *)((long)plVar14 + lVar13);
        _ZdaPvSt11align_val_t(plVar16,lVar27);
        plVar23 = plVar16;
      }
    }
    plStack_c8 = plStack_d0;
    puVar25 = puStack_a0;
    if (lStack_98 != 0) {
      while (puVar25 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar25;
        _ZdaPvSt11align_val_t(puVar25,0x20);
        puVar25 = puVar4;
      }
      puStack_a0 = (undefined8 *)0x0;
      plVar23 = (long *)0x0;
      if (uStack_a8 != 0) {
        uVar19 = (ulong)((uint)uStack_a8 & 3);
        if (uStack_a8 < 4) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          do {
            plStack_b0[uVar20] = 0;
            plStack_b0[uVar20 + 1] = 0;
            plStack_b0[uVar20 + 2] = 0;
            plStack_b0[uVar20 + 3] = 0;
            uVar20 = uVar20 + 4;
          } while ((uStack_a8 & 0xfffffffffffffffc) != uVar20);
          plVar23 = plStack_b0;
          if (uVar19 == 0) goto code_r0x00419814;
        }
        do {
          plStack_b0[uVar20] = 0;
          uVar20 = uVar20 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
code_r0x00419814:
      lStack_98 = 0;
    }
    if (0 < (int)uVar8) {
      lVar27 = 0;
      do {
        lStack_f8 = *(long *)(lStack_f0 + 4 + lVar27);
        uVar9 = *(uint *)(lStack_f0 + lVar27);
        uVar26 = 0;
        if ((uVar9 & 1) != 0) {
          uVar26 = 1;
          if ((*(byte *)(lStack_f8 + 0xc) & 1) == 0) {
            plVar23 = &uStack_118;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar23,&UNK_00187fcd,0x96,6,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(plVar23);
            uVar10 = func_0x0032eb30(uVar10,&UNK_00167d4d,0x23);
            func_0x0032eb30(uVar10,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar9 = *(uint *)(lStack_f0 + lVar27);
            uVar26 = 1;
          }
        }
        if ((uVar9 & 4) != 0) {
          if ((*(byte *)(lStack_f8 + 0xc) & 2) == 0) {
            plVar23 = &uStack_118;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar23,&UNK_00187fcd,0x9a,6,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(plVar23);
            uVar10 = func_0x0032eb30(uVar10,&UNK_0017a31e,0x24);
            func_0x0032eb30(uVar10,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar9 = *(uint *)(lStack_f0 + lVar27);
          }
          uVar26 = uVar26 | 2;
        }
        uVar5 = uVar26 | 5;
        if ((uVar9 & 0x2018) == 0) {
          uVar5 = uVar26;
        }
        if (((adb_trace_mask._1_1_ & 8) != 0) && ((int)adb_trace_severity._44_4_ < 2)) {
          plVar23 = (long *)0x1;
          cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar6 != '\0') {
            puVar18 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar18;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&lStack_100,&UNK_00187fcd,0xa3,1,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_100);
            _Z8dump_fdePK7fdevent(&uStack_130,lStack_f8);
            lVar13 = (long)&uStack_130 + 1;
            if (((ulong)uStack_130 & 1) != 0) {
              lVar13 = lStack_120;
            }
            _ZN7android4base12StringPrintfEPKcz(&uStack_118,&UNK_0018b03c,lVar13,uVar5);
            func_0x0032e5a0(uVar10,&uStack_118);
            if (((ulong)uStack_118 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_130 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
            }
            plVar23 = &lStack_100;
            _ZN7android4base10LogMessageD2Ev();
            *puVar18 = uVar3;
          }
        }
        plVar16 = plStack_d0;
        if (plStack_c8 < plStack_c0) {
          *plStack_c8 = lStack_f8;
          *(uint *)(plStack_c8 + 1) = uVar5;
          plVar24 = plStack_c8 + 2;
        }
        else {
          lVar13 = (long)plStack_c8 - (long)plStack_d0;
          uVar19 = (lVar13 >> 4) + 1;
          if (0xfffffffffffffff < uVar19) goto code_r0x0041a06d;
          uVar17 = (long)plStack_c0 - (long)plStack_d0;
          uVar20 = (long)uVar17 >> 3;
          if ((ulong)((long)uVar17 >> 3) <= uVar19) {
            uVar20 = uVar19;
          }
          if (0x7fffffffffffffef < uVar17) {
            uVar20 = 0xfffffffffffffff;
          }
          if (0xfffffffffffffff < uVar20) goto code_r0x0041a077;
          lVar15 = _Znwm(uVar20 * 0x10);
          plVar23 = (long *)(uVar20 * 0x10 + lVar15);
          *(long *)(lVar15 + lVar13) = lStack_f8;
          *(uint *)(lVar15 + 8 + lVar13) = uVar5;
          plVar24 = (long *)(lVar15 + lVar13 + 0x10);
          plVar14 = (long *)(lVar15 + lVar13 + (lVar13 >> 4) * -0x10);
          func_0x0099bda0(plVar14,plVar16,lVar13);
          plStack_d0 = plVar14;
          plStack_c0 = plVar23;
          if (plVar16 != (long *)0x0) {
            plStack_c8 = plVar24;
            _ZdaPvSt11align_val_t(plVar16,uVar17);
          }
        }
        uStack_130 = &lStack_f8;
        uStack_118 = &plStack_b0;
        plVar23 = &uStack_118;
        plStack_c8 = plVar24;
        lVar13 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                           (plVar23,uStack_130,&_ZNSt3__119piecewise_constructE,&uStack_130);
        *(long **)(lVar13 + 0x18) = plVar24 + -2;
        *(long *)(lStack_f8 + 0x20) = lVar11;
        lVar27 = lVar27 + 0xc;
      } while ((ulong)uVar8 * 0xc != lVar27);
    }
    plVar16 = *(long **)(param_1 + 0x20);
    if (plVar16 != (long *)(param_1 + 0x28)) {
      do {
        uVar19 = uStack_a8;
        pplVar1 = (long **)(plVar16 + 5);
        if ((uStack_a8 != 0) && (lStack_98 != 0)) {
          uStack_118 = pplVar1;
          uVar17 = _ZNSt3__113__hash_memoryEPKvm(&uStack_118,8);
          uVar20 = uVar19 - 1;
          if ((uVar19 & uVar20) == 0) {
            uVar22 = uVar17 & uVar20;
          }
          else {
            uVar22 = uVar17;
            if (uVar19 <= uVar17) {
              if ((uVar17 | uVar19) >> 0x20 == 0) {
                uVar22 = (uVar17 & 0xffffffff) % (uVar19 & 0xffffffff);
              }
              else {
                uVar22 = uVar17 % uVar19;
              }
            }
          }
          if ((undefined8 *)plStack_b0[uVar22] != (undefined8 *)0x0) {
            for (puVar25 = *(undefined8 **)plStack_b0[uVar22]; puVar25 != (undefined8 *)0x0;
                puVar25 = (undefined8 *)*puVar25) {
              uVar21 = puVar25[1];
              if (uVar21 == uVar17) {
                if ((long **)puVar25[2] == pplVar1) {
                  if (*(int *)(puVar25[3] + 8) != 0) goto code_r0x00419dcf;
                  break;
                }
              }
              else {
                if ((uVar19 & uVar20) == 0) {
                  uVar21 = uVar21 & uVar20;
                }
                else if (uVar19 <= uVar21) {
                  if ((uVar21 | uVar19) >> 0x20 == 0) {
                    uVar21 = (uVar21 & 0xffffffff) % (uVar19 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar21 % uVar19;
                  }
                }
                if (uVar21 != uVar22) break;
              }
            }
          }
        }
        if (((char)plVar16[8] == '\x01') && (plVar16[7] * 1000000 + plVar16[9] < lVar11)) {
          plVar23 = (long *)0x1;
          cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar6 != '\0') {
            puVar18 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar18;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_130,&UNK_00187fcd,0xb5,1,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
            _Z8dump_fdePK7fdevent(&uStack_118,pplVar1);
            uVar19 = (ulong)uStack_118 >> 1 & 0x7f;
            lVar27 = (long)&uStack_118 + 1;
            if (((ulong)uStack_118 & 1) != 0) {
              uVar19 = uStack_110;
              lVar27 = lStack_108;
            }
            uVar10 = func_0x0032eb30(uVar10,lVar27,uVar19);
            func_0x0032eb30(uVar10,&UNK_001661c2,10);
            if (((ulong)uStack_118 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_108);
            }
            plVar23 = &uStack_130;
            _ZN7android4base10LogMessageD2Ev();
            *puVar18 = uVar3;
          }
          plVar14 = plStack_d0;
          if (plStack_c8 < plStack_c0) {
            *plStack_c8 = (long)pplVar1;
            *(undefined4 *)(plStack_c8 + 1) = 8;
            plVar28 = plStack_c8 + 2;
          }
          else {
            lVar27 = (long)plStack_c8 - (long)plStack_d0;
            uVar19 = (lVar27 >> 4) + 1;
            if (0xfffffffffffffff < uVar19) goto code_r0x0041a06d;
            uVar20 = (long)plStack_c0 - (long)plStack_d0 >> 3;
            if (uVar20 <= uVar19) {
              uVar20 = uVar19;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_c0 - (long)plStack_d0)) {
              uVar20 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar20) goto code_r0x0041a077;
            lVar13 = _Znwm(uVar20 * 0x10);
            plVar23 = (long *)(uVar20 * 0x10 + lVar13);
            *(long ***)(lVar13 + lVar27) = pplVar1;
            *(undefined4 *)(lVar13 + 8 + lVar27) = 8;
            plVar28 = (long *)(lVar13 + lVar27 + 0x10);
            plVar24 = (long *)(lVar13 + lVar27 + (lVar27 >> 4) * -0x10);
            func_0x0099bda0(plVar24,plVar14,lVar27);
            plStack_d0 = plVar24;
            plStack_c0 = plVar23;
            if (plVar14 != (long *)0x0) {
              plStack_c8 = plVar28;
              _ZdaPvSt11align_val_t();
            }
          }
          plVar16[9] = lVar11;
          plStack_c8 = plVar28;
        }
code_r0x00419dcf:
        plVar23 = (long *)plVar16[1];
        plVar14 = plVar16;
        if ((long *)plVar16[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar14[2];
            bVar29 = plVar14 != (long *)*plVar16;
            plVar14 = plVar16;
          } while (bVar29);
        }
        else {
          do {
            plVar16 = plVar23;
            plVar23 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      } while (plVar16 != (long *)(param_1 + 0x28));
    }
    _ZN15fdevent_context12HandleEventsERKNSt3__16vectorI13fdevent_eventNS0_9allocatorIS2_EEEE
              (param_1,&plStack_d0);
    plStack_c8 = plStack_d0;
  } while( true );
}


