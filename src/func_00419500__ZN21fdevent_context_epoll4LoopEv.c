// Function: _ZN21fdevent_context_epoll4LoopEv
// Address: 00419500
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN21fdevent_context_epoll4LoopEv(long param_1)

{
  long **pplVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  byte extraout_DL;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = _ZN7android4base11GetThreadIdEv();
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined1 *)(param_1 + 0x10) = 1;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  plStack_68 = (long *)0x0;
  uStack_60 = 0;
  uStack_48 = 0x3f800000;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  do {
    plStack_88 = plStack_80;
    if (*(char *)(param_1 + 0x18) != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      plVar22 = plStack_68;
      puVar24 = puStack_58;
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        _ZdaPvSt11align_val_t(lStack_a8,lStack_98 - lStack_a8);
        plVar22 = plStack_68;
        puVar24 = puStack_58;
      }
      while (puVar24 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar24;
        plStack_68 = plVar22;
        _ZdaPvSt11align_val_t(puVar24,0x20);
        plVar22 = plStack_68;
        puVar24 = puVar4;
      }
      plStack_68 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        _ZdaPvSt11align_val_t(plVar22,uStack_60 << 3);
      }
      plVar22 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plStack_80 = plStack_88;
        _ZdaPvSt11align_val_t(plStack_88,(long)plStack_78 - (long)plStack_88);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
code_r0x0041a072:
      func_0x0099bd00();
code_r0x0041a077:
      func_0x0032fc40();
      return plVar22[6] + -1;
    }
    lVar10 = lStack_a0 - lStack_a8 >> 2;
    if ((ulong)(lVar10 * -0x5555555555555555) <= *(ulong *)(param_1 + 0x30) &&
        *(ulong *)(param_1 + 0x30) + lVar10 * 0x5555555555555555 != 0) {
      func_0x0041a4b0(&lStack_a8);
    }
    while( true ) {
      uVar7 = _ZN15fdevent_context21CalculatePollDurationEv(param_1);
      plVar22 = (long *)(ulong)*(uint *)(param_1 + 0xb0);
      uVar7 = func_0x0099c450(plVar22,lStack_a8,
                              (int)((ulong)(lStack_a0 - lStack_a8) >> 2) * -0x55555555,
                              -(uint)((extraout_DL & 1) == 0) | uVar7);
      if (uVar7 != 0xffffffff) break;
      piVar11 = (int *)func_0x0099bce0();
      if ((*piVar11 != 4) &&
         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar6 != '\0')) {
        iVar2 = *piVar11;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_d0,&UNK_00187fcd,0x88,6,0,iVar2);
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_d0);
        func_0x0032eb30(uVar9,&UNK_0016b0fa,0x11);
        _ZN7android4base10LogMessageD2Ev(&uStack_d0);
        *piVar11 = iVar2;
      }
    }
    lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
    plVar15 = plStack_88;
    uVar18 = *(ulong *)(param_1 + 0x30);
    lVar26 = (long)plStack_78 - (long)plStack_88;
    if ((ulong)(lVar26 >> 4) < uVar18) {
      if (0xfffffffffffffff < uVar18) {
code_r0x0041a06d:
        func_0x00330ca0();
        goto code_r0x0041a072;
      }
      lVar12 = (long)plStack_80 - (long)plStack_88;
      plVar13 = (long *)_Znwm(uVar18 * 0x10);
      plVar22 = plVar13;
      func_0x0099bda0(plVar13,plVar15);
      plStack_88 = plVar13;
      plStack_78 = plVar13 + uVar18 * 2;
      if (plVar15 != (long *)0x0) {
        plStack_80 = (long *)((long)plVar13 + lVar12);
        _ZdaPvSt11align_val_t(plVar15,lVar26);
        plVar22 = plVar15;
      }
    }
    plStack_80 = plStack_88;
    puVar24 = puStack_58;
    if (lStack_50 != 0) {
      while (puVar24 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar24;
        _ZdaPvSt11align_val_t(puVar24,0x20);
        puVar24 = puVar4;
      }
      puStack_58 = (undefined8 *)0x0;
      plVar22 = (long *)0x0;
      if (uStack_60 != 0) {
        uVar18 = (ulong)((uint)uStack_60 & 3);
        if (uStack_60 < 4) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          do {
            plStack_68[uVar19] = 0;
            plStack_68[uVar19 + 1] = 0;
            plStack_68[uVar19 + 2] = 0;
            plStack_68[uVar19 + 3] = 0;
            uVar19 = uVar19 + 4;
          } while ((uStack_60 & 0xfffffffffffffffc) != uVar19);
          plVar22 = plStack_68;
          if (uVar18 == 0) goto code_r0x00419814;
        }
        do {
          plStack_68[uVar19] = 0;
          uVar19 = uVar19 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
code_r0x00419814:
      lStack_50 = 0;
    }
    if (0 < (int)uVar7) {
      lVar26 = 0;
      do {
        lStack_b0 = *(long *)(lStack_a8 + 4 + lVar26);
        uVar8 = *(uint *)(lStack_a8 + lVar26);
        uVar25 = 0;
        if ((uVar8 & 1) != 0) {
          uVar25 = 1;
          if ((*(byte *)(lStack_b0 + 0xc) & 1) == 0) {
            plVar22 = &uStack_d0;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar22,&UNK_00187fcd,0x96,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar22);
            uVar9 = func_0x0032eb30(uVar9,&UNK_00167d4d,0x23);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_a8 + lVar26);
            uVar25 = 1;
          }
        }
        if ((uVar8 & 4) != 0) {
          if ((*(byte *)(lStack_b0 + 0xc) & 2) == 0) {
            plVar22 = &uStack_d0;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar22,&UNK_00187fcd,0x9a,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar22);
            uVar9 = func_0x0032eb30(uVar9,&UNK_0017a31e,0x24);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_a8 + lVar26);
          }
          uVar25 = uVar25 | 2;
        }
        uVar5 = uVar25 | 5;
        if ((uVar8 & 0x2018) == 0) {
          uVar5 = uVar25;
        }
        if (((adb_trace_mask._1_1_ & 8) != 0) && ((int)adb_trace_severity._44_4_ < 2)) {
          plVar22 = (long *)0x1;
          cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar6 != '\0') {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&lStack_b8,&UNK_00187fcd,0xa3,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_b8);
            _Z8dump_fdePK7fdevent(&uStack_e8,lStack_b0);
            lVar12 = (long)&uStack_e8 + 1;
            if (((ulong)uStack_e8 & 1) != 0) {
              lVar12 = lStack_d8;
            }
            _ZN7android4base12StringPrintfEPKcz(&uStack_d0,&UNK_0018b03c,lVar12,uVar5);
            func_0x0032e5a0(uVar9,&uStack_d0);
            if (((ulong)uStack_d0 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_c0,(ulong)uStack_d0 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_e8 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
            }
            plVar22 = &lStack_b8;
            _ZN7android4base10LogMessageD2Ev();
            *puVar17 = uVar3;
          }
        }
        plVar15 = plStack_88;
        if (plStack_80 < plStack_78) {
          *plStack_80 = lStack_b0;
          *(uint *)(plStack_80 + 1) = uVar5;
          plVar23 = plStack_80 + 2;
        }
        else {
          lVar12 = (long)plStack_80 - (long)plStack_88;
          uVar18 = (lVar12 >> 4) + 1;
          if (0xfffffffffffffff < uVar18) goto code_r0x0041a06d;
          uVar16 = (long)plStack_78 - (long)plStack_88;
          uVar19 = (long)uVar16 >> 3;
          if ((ulong)((long)uVar16 >> 3) <= uVar18) {
            uVar19 = uVar18;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar19 = 0xfffffffffffffff;
          }
          if (0xfffffffffffffff < uVar19) goto code_r0x0041a077;
          lVar14 = _Znwm(uVar19 * 0x10);
          plVar22 = (long *)(uVar19 * 0x10 + lVar14);
          *(long *)(lVar14 + lVar12) = lStack_b0;
          *(uint *)(lVar14 + 8 + lVar12) = uVar5;
          plVar23 = (long *)(lVar14 + lVar12 + 0x10);
          plVar13 = (long *)(lVar14 + lVar12 + (lVar12 >> 4) * -0x10);
          func_0x0099bda0(plVar13,plVar15,lVar12);
          plStack_88 = plVar13;
          plStack_78 = plVar22;
          if (plVar15 != (long *)0x0) {
            plStack_80 = plVar23;
            _ZdaPvSt11align_val_t(plVar15,uVar16);
          }
        }
        uStack_e8 = &lStack_b0;
        uStack_d0 = &plStack_68;
        plVar22 = &uStack_d0;
        plStack_80 = plVar23;
        lVar12 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                           (plVar22,uStack_e8,&_ZNSt3__119piecewise_constructE,&uStack_e8);
        *(long **)(lVar12 + 0x18) = plVar23 + -2;
        *(long *)(lStack_b0 + 0x20) = lVar10;
        lVar26 = lVar26 + 0xc;
      } while ((ulong)uVar7 * 0xc != lVar26);
    }
    plVar15 = *(long **)(param_1 + 0x20);
    if (plVar15 != (long *)(param_1 + 0x28)) {
      do {
        uVar18 = uStack_60;
        pplVar1 = (long **)(plVar15 + 5);
        if ((uStack_60 != 0) && (lStack_50 != 0)) {
          uStack_d0 = pplVar1;
          uVar16 = _ZNSt3__113__hash_memoryEPKvm(&uStack_d0,8);
          uVar19 = uVar18 - 1;
          if ((uVar18 & uVar19) == 0) {
            uVar21 = uVar16 & uVar19;
          }
          else {
            uVar21 = uVar16;
            if (uVar18 <= uVar16) {
              if ((uVar16 | uVar18) >> 0x20 == 0) {
                uVar21 = (uVar16 & 0xffffffff) % (uVar18 & 0xffffffff);
              }
              else {
                uVar21 = uVar16 % uVar18;
              }
            }
          }
          if ((undefined8 *)plStack_68[uVar21] != (undefined8 *)0x0) {
            for (puVar24 = *(undefined8 **)plStack_68[uVar21]; puVar24 != (undefined8 *)0x0;
                puVar24 = (undefined8 *)*puVar24) {
              uVar20 = puVar24[1];
              if (uVar20 == uVar16) {
                if ((long **)puVar24[2] == pplVar1) {
                  if (*(int *)(puVar24[3] + 8) != 0) goto code_r0x00419dcf;
                  break;
                }
              }
              else {
                if ((uVar18 & uVar19) == 0) {
                  uVar20 = uVar20 & uVar19;
                }
                else if (uVar18 <= uVar20) {
                  if ((uVar20 | uVar18) >> 0x20 == 0) {
                    uVar20 = (uVar20 & 0xffffffff) % (uVar18 & 0xffffffff);
                  }
                  else {
                    uVar20 = uVar20 % uVar18;
                  }
                }
                if (uVar20 != uVar21) break;
              }
            }
          }
        }
        if (((char)plVar15[8] == '\x01') && (plVar15[7] * 1000000 + plVar15[9] < lVar10)) {
          plVar22 = (long *)0x1;
          cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar6 != '\0') {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_e8,&UNK_00187fcd,0xb5,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_e8);
            _Z8dump_fdePK7fdevent(&uStack_d0,pplVar1);
            uVar18 = (ulong)uStack_d0 >> 1 & 0x7f;
            lVar26 = (long)&uStack_d0 + 1;
            if (((ulong)uStack_d0 & 1) != 0) {
              uVar18 = uStack_c8;
              lVar26 = lStack_c0;
            }
            uVar9 = func_0x0032eb30(uVar9,lVar26,uVar18);
            func_0x0032eb30(uVar9,&UNK_001661c2,10);
            if (((ulong)uStack_d0 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_c0);
            }
            plVar22 = &uStack_e8;
            _ZN7android4base10LogMessageD2Ev();
            *puVar17 = uVar3;
          }
          plVar13 = plStack_88;
          if (plStack_80 < plStack_78) {
            *plStack_80 = (long)pplVar1;
            *(undefined4 *)(plStack_80 + 1) = 8;
            plVar27 = plStack_80 + 2;
          }
          else {
            lVar26 = (long)plStack_80 - (long)plStack_88;
            uVar18 = (lVar26 >> 4) + 1;
            if (0xfffffffffffffff < uVar18) goto code_r0x0041a06d;
            uVar19 = (long)plStack_78 - (long)plStack_88 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_78 - (long)plStack_88)) {
              uVar19 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar19) goto code_r0x0041a077;
            lVar12 = _Znwm(uVar19 * 0x10);
            plVar22 = (long *)(uVar19 * 0x10 + lVar12);
            *(long ***)(lVar12 + lVar26) = pplVar1;
            *(undefined4 *)(lVar12 + 8 + lVar26) = 8;
            plVar27 = (long *)(lVar12 + lVar26 + 0x10);
            plVar23 = (long *)(lVar12 + lVar26 + (lVar26 >> 4) * -0x10);
            func_0x0099bda0(plVar23,plVar13,lVar26);
            plStack_88 = plVar23;
            plStack_78 = plVar22;
            if (plVar13 != (long *)0x0) {
              plStack_80 = plVar27;
              _ZdaPvSt11align_val_t();
            }
          }
          plVar15[9] = lVar10;
          plStack_80 = plVar27;
        }
code_r0x00419dcf:
        plVar22 = (long *)plVar15[1];
        plVar13 = plVar15;
        if ((long *)plVar15[1] == (long *)0x0) {
          do {
            plVar15 = (long *)plVar13[2];
            bVar28 = plVar13 != (long *)*plVar15;
            plVar13 = plVar15;
          } while (bVar28);
        }
        else {
          do {
            plVar15 = plVar22;
            plVar22 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
      } while (plVar15 != (long *)(param_1 + 0x28));
    }
    _ZN15fdevent_context12HandleEventsERKNSt3__16vectorI13fdevent_eventNS0_9allocatorIS2_EEEE
              (param_1,&plStack_88);
    plStack_80 = plStack_88;
  } while( true );
}


