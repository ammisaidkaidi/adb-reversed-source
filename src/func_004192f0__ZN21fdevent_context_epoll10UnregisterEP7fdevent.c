// Function: _ZN21fdevent_context_epoll10UnregisterEP7fdevent
// Address: 004192f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN21fdevent_context_epoll10UnregisterEP7fdevent(long param_1,undefined4 *param_2)

{
  long **pplVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  byte extraout_DL;
  uint extraout_EDX;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined *unaff_R12;
  long lVar28;
  uint *unaff_R14;
  undefined8 *puVar29;
  ulong unaff_R15;
  long *plVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined8 uStack_168;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined *puStack_a8;
  undefined auStack_80 [12];
  int iStack_74;
  undefined *puStack_70;
  long lStack_68;
  undefined4 *puStack_60;
  undefined *puStack_58;
  uint *puStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar23 = (undefined *)(ulong)*(uint *)(param_1 + 0xb0);
  puVar21 = (undefined *)0x2;
  puStack_40 = &UNK_00419324;
  iVar6 = func_0x0099c440(puVar23,2,param_2[2],0);
  if (iVar6 != 0) {
    puVar23 = (undefined *)0x6;
    puVar21 = (undefined *)0x0;
    puStack_40 = &UNK_00419334;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar5 != '\0') {
      puStack_40 = &UNK_0041935d;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar7 = *unaff_R14;
      unaff_R15 = (ulong)uVar7;
      unaff_R12 = auStack_38;
      puStack_40 = &UNK_00419386;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00187fcd,0x59,6,0,unaff_R15);
      puStack_40 = &UNK_0041938e;
      uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_40 = &UNK_004193a2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017bc52,0x18);
      puStack_40 = &UNK_004193ad;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,param_2[2]);
      puVar21 = &UNK_0015c9a3;
      puStack_40 = &UNK_004193c1;
      func_0x0032eb30(uVar9,&UNK_0015c9a3,0xb);
      puStack_40 = &UNK_004193c9;
      puVar23 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_40 = &UNK_004193d6;
  func_0x0099bd00();
  puStack_40 = &stack0xfffffffffffffff8;
  uStack_48 = unaff_R15;
  puStack_50 = unaff_R14;
  puStack_58 = unaff_R12;
  puStack_60 = param_2;
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)(puVar21 + 0xc);
  *(short *)(puVar21 + 0xc) = (short)extraout_EDX;
  if ((extraout_EDX & 0xfffffff7) != (uVar2 & 0xfffffff7)) {
    iStack_74 = (extraout_EDX & 1) + (extraout_EDX & 6) * 2 + 0x2000;
    puStack_70 = puVar21;
    puVar23 = (undefined *)(ulong)*(uint *)(puVar23 + 0xb0);
    iVar6 = func_0x0099c440(puVar23,3,*(undefined4 *)(puVar21 + 8),&iStack_74);
    unaff_R12 = puVar21;
    if (iVar6 != 0) {
      puVar23 = (undefined *)0x6;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar5 != '\0') {
        param_2 = (undefined4 *)func_0x0099bce0();
        uVar3 = *param_2;
        puVar23 = auStack_80;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar23,&UNK_00187fcd,0x68,6,0,uVar3);
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar23);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015c9af,0x14);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                          (uVar9,*(undefined4 *)(puVar21 + 8));
        func_0x0032eb30(uVar9,&UNK_0015c9a3,0xb);
        _ZN7android4base10LogMessageD2Ev();
        *param_2 = uVar3;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b0 = param_2;
  puStack_a8 = unaff_R12;
  uVar9 = _ZN7android4base11GetThreadIdEv();
  *(undefined8 *)(puVar23 + 8) = uVar9;
  puVar23[0x10] = 1;
  plStack_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 0x3f800000;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  do {
    plStack_108 = plStack_100;
    if (puVar23[0x18] != '\0') {
      if (puVar23[0x10] == '\x01') {
        puVar23[0x10] = 0;
      }
      plVar25 = plStack_e8;
      puVar15 = puStack_d8;
      if (lStack_128 != 0) {
        lStack_120 = lStack_128;
        _ZdaPvSt11align_val_t(lStack_128,lStack_118 - lStack_128);
        plVar25 = plStack_e8;
        puVar15 = puStack_d8;
      }
      while (puVar15 != (undefined8 *)0x0) {
        puVar26 = (undefined8 *)*puVar15;
        plStack_e8 = plVar25;
        _ZdaPvSt11align_val_t(puVar15,0x20);
        plVar25 = plStack_e8;
        puVar15 = puVar26;
      }
      plStack_e8 = (long *)0x0;
      if (plVar25 != (long *)0x0) {
        _ZdaPvSt11align_val_t(plVar25,uStack_e0 << 3);
      }
      plVar25 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plStack_100 = plStack_108;
        _ZdaPvSt11align_val_t(plStack_108,(long)plStack_f8 - (long)plStack_108);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
code_r0x0041a072:
      func_0x0099bd00();
code_r0x0041a077:
      func_0x0032fc40();
      return plVar25[6] + -1;
    }
    lVar10 = lStack_120 - lStack_128 >> 2;
    if ((ulong)(lVar10 * -0x5555555555555555) <= *(ulong *)(puVar23 + 0x30) &&
        *(ulong *)(puVar23 + 0x30) + lVar10 * 0x5555555555555555 != 0) {
      func_0x0041a4b0(&lStack_128);
    }
    while( true ) {
      uVar7 = _ZN15fdevent_context21CalculatePollDurationEv(puVar23);
      plVar25 = (long *)(ulong)*(uint *)(puVar23 + 0xb0);
      uVar7 = func_0x0099c450(plVar25,lStack_128,
                              (int)((ulong)(lStack_120 - lStack_128) >> 2) * -0x55555555,
                              -(uint)((extraout_DL & 1) == 0) | uVar7);
      if (uVar7 != 0xffffffff) break;
      piVar11 = (int *)func_0x0099bce0();
      if ((*piVar11 != 4) &&
         (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar5 != '\0')) {
        iVar6 = *piVar11;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_150,&UNK_00187fcd,0x88,6,0,iVar6);
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_150);
        func_0x0032eb30(uVar9,&UNK_0016b0fa,0x11);
        _ZN7android4base10LogMessageD2Ev(&uStack_150);
        *piVar11 = iVar6;
      }
    }
    lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
    plVar24 = plStack_108;
    uVar18 = *(ulong *)(puVar23 + 0x30);
    lVar28 = (long)plStack_f8 - (long)plStack_108;
    if ((ulong)(lVar28 >> 4) < uVar18) {
      if (0xfffffffffffffff < uVar18) {
code_r0x0041a06d:
        func_0x00330ca0();
        goto code_r0x0041a072;
      }
      lVar12 = (long)plStack_100 - (long)plStack_108;
      plVar13 = (long *)_Znwm(uVar18 * 0x10);
      plVar25 = plVar13;
      func_0x0099bda0(plVar13,plVar24);
      plStack_108 = plVar13;
      plStack_f8 = plVar13 + uVar18 * 2;
      if (plVar24 != (long *)0x0) {
        plStack_100 = (long *)((long)plVar13 + lVar12);
        _ZdaPvSt11align_val_t(plVar24,lVar28);
        plVar25 = plVar24;
      }
    }
    plStack_100 = plStack_108;
    puVar15 = puStack_d8;
    if (lStack_d0 != 0) {
      while (puVar15 != (undefined8 *)0x0) {
        puVar26 = (undefined8 *)*puVar15;
        _ZdaPvSt11align_val_t(puVar15,0x20);
        puVar15 = puVar26;
      }
      puStack_d8 = (undefined8 *)0x0;
      plVar25 = (long *)0x0;
      if (uStack_e0 != 0) {
        uVar18 = (ulong)((uint)uStack_e0 & 3);
        if (uStack_e0 < 4) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          do {
            plStack_e8[uVar19] = 0;
            plStack_e8[uVar19 + 1] = 0;
            plStack_e8[uVar19 + 2] = 0;
            plStack_e8[uVar19 + 3] = 0;
            uVar19 = uVar19 + 4;
          } while ((uStack_e0 & 0xfffffffffffffffc) != uVar19);
          plVar25 = plStack_e8;
          if (uVar18 == 0) goto code_r0x00419814;
        }
        do {
          plStack_e8[uVar19] = 0;
          uVar19 = uVar19 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
code_r0x00419814:
      lStack_d0 = 0;
    }
    if (0 < (int)uVar7) {
      lVar28 = 0;
      do {
        lStack_130 = *(long *)(lStack_128 + 4 + lVar28);
        uVar8 = *(uint *)(lStack_128 + lVar28);
        uVar27 = 0;
        if ((uVar8 & 1) != 0) {
          uVar27 = 1;
          if ((*(byte *)(lStack_130 + 0xc) & 1) == 0) {
            plVar25 = &uStack_150;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar25,&UNK_00187fcd,0x96,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar25);
            uVar9 = func_0x0032eb30(uVar9,&UNK_00167d4d,0x23);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_128 + lVar28);
            uVar27 = 1;
          }
        }
        if ((uVar8 & 4) != 0) {
          if ((*(byte *)(lStack_130 + 0xc) & 2) == 0) {
            plVar25 = &uStack_150;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar25,&UNK_00187fcd,0x9a,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar25);
            uVar9 = func_0x0032eb30(uVar9,&UNK_0017a31e,0x24);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_128 + lVar28);
          }
          uVar27 = uVar27 | 2;
        }
        uVar4 = uVar27 | 5;
        if ((uVar8 & 0x2018) == 0) {
          uVar4 = uVar27;
        }
        if (((adb_trace_mask._1_1_ & 8) != 0) && ((int)adb_trace_severity._44_4_ < 2)) {
          plVar25 = (long *)0x1;
          cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar5 != '\0') {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&lStack_138,&UNK_00187fcd,0xa3,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_138);
            _Z8dump_fdePK7fdevent(&uStack_168,lStack_130);
            lVar12 = (long)&uStack_168 + 1;
            if (((ulong)uStack_168 & 1) != 0) {
              lVar12 = lStack_158;
            }
            _ZN7android4base12StringPrintfEPKcz(&uStack_150,&UNK_0018b03c,lVar12,uVar4);
            func_0x0032e5a0(uVar9,&uStack_150);
            if (((ulong)uStack_150 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_140,(ulong)uStack_150 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_168 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
            }
            plVar25 = &lStack_138;
            _ZN7android4base10LogMessageD2Ev();
            *puVar17 = uVar3;
          }
        }
        plVar24 = plStack_108;
        if (plStack_100 < plStack_f8) {
          *plStack_100 = lStack_130;
          *(uint *)(plStack_100 + 1) = uVar4;
          plVar30 = plStack_100 + 2;
        }
        else {
          lVar12 = (long)plStack_100 - (long)plStack_108;
          uVar18 = (lVar12 >> 4) + 1;
          if (0xfffffffffffffff < uVar18) goto code_r0x0041a06d;
          uVar16 = (long)plStack_f8 - (long)plStack_108;
          uVar19 = (long)uVar16 >> 3;
          if ((ulong)((long)uVar16 >> 3) <= uVar18) {
            uVar19 = uVar18;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar19 = 0xfffffffffffffff;
          }
          if (0xfffffffffffffff < uVar19) goto code_r0x0041a077;
          lVar14 = _Znwm(uVar19 * 0x10);
          plVar25 = (long *)(uVar19 * 0x10 + lVar14);
          *(long *)(lVar14 + lVar12) = lStack_130;
          *(uint *)(lVar14 + 8 + lVar12) = uVar4;
          plVar30 = (long *)(lVar14 + lVar12 + 0x10);
          plVar13 = (long *)(lVar14 + lVar12 + (lVar12 >> 4) * -0x10);
          func_0x0099bda0(plVar13,plVar24,lVar12);
          plStack_108 = plVar13;
          plStack_f8 = plVar25;
          if (plVar24 != (long *)0x0) {
            plStack_100 = plVar30;
            _ZdaPvSt11align_val_t(plVar24,uVar16);
          }
        }
        uStack_168 = &lStack_130;
        uStack_150 = &plStack_e8;
        plVar25 = &uStack_150;
        plStack_100 = plVar30;
        lVar12 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                           (plVar25,uStack_168,&_ZNSt3__119piecewise_constructE,&uStack_168);
        *(long **)(lVar12 + 0x18) = plVar30 + -2;
        *(long *)(lStack_130 + 0x20) = lVar10;
        lVar28 = lVar28 + 0xc;
      } while ((ulong)uVar7 * 0xc != lVar28);
    }
    puVar15 = *(undefined8 **)(puVar23 + 0x20);
    if (puVar15 != (undefined8 *)(puVar23 + 0x28)) {
      do {
        uVar18 = uStack_e0;
        pplVar1 = (long **)(puVar15 + 5);
        if ((uStack_e0 != 0) && (lStack_d0 != 0)) {
          uStack_150 = pplVar1;
          uVar16 = _ZNSt3__113__hash_memoryEPKvm(&uStack_150,8);
          uVar19 = uVar18 - 1;
          if ((uVar18 & uVar19) == 0) {
            uVar22 = uVar16 & uVar19;
          }
          else {
            uVar22 = uVar16;
            if (uVar18 <= uVar16) {
              if ((uVar16 | uVar18) >> 0x20 == 0) {
                uVar22 = (uVar16 & 0xffffffff) % (uVar18 & 0xffffffff);
              }
              else {
                uVar22 = uVar16 % uVar18;
              }
            }
          }
          if ((undefined8 *)plStack_e8[uVar22] != (undefined8 *)0x0) {
            for (puVar26 = *(undefined8 **)plStack_e8[uVar22]; puVar26 != (undefined8 *)0x0;
                puVar26 = (undefined8 *)*puVar26) {
              uVar20 = puVar26[1];
              if (uVar20 == uVar16) {
                if ((long **)puVar26[2] == pplVar1) {
                  if (*(int *)(puVar26[3] + 8) != 0) goto code_r0x00419dcf;
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
                if (uVar20 != uVar22) break;
              }
            }
          }
        }
        if ((*(char *)(puVar15 + 8) == '\x01') && (puVar15[7] * 1000000 + puVar15[9] < lVar10)) {
          plVar25 = (long *)0x1;
          cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar5 != '\0') {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_168,&UNK_00187fcd,0xb5,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_168);
            _Z8dump_fdePK7fdevent(&uStack_150,pplVar1);
            uVar18 = (ulong)uStack_150 >> 1 & 0x7f;
            lVar28 = (long)&uStack_150 + 1;
            if (((ulong)uStack_150 & 1) != 0) {
              uVar18 = uStack_148;
              lVar28 = lStack_140;
            }
            uVar9 = func_0x0032eb30(uVar9,lVar28,uVar18);
            func_0x0032eb30(uVar9,&UNK_001661c2,10);
            if (((ulong)uStack_150 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_140);
            }
            plVar25 = &uStack_168;
            _ZN7android4base10LogMessageD2Ev();
            *puVar17 = uVar3;
          }
          plVar24 = plStack_108;
          if (plStack_100 < plStack_f8) {
            *plStack_100 = (long)pplVar1;
            *(undefined4 *)(plStack_100 + 1) = 8;
            plVar30 = plStack_100 + 2;
          }
          else {
            lVar28 = (long)plStack_100 - (long)plStack_108;
            uVar18 = (lVar28 >> 4) + 1;
            if (0xfffffffffffffff < uVar18) goto code_r0x0041a06d;
            uVar19 = (long)plStack_f8 - (long)plStack_108 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_f8 - (long)plStack_108)) {
              uVar19 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar19) goto code_r0x0041a077;
            lVar12 = _Znwm(uVar19 * 0x10);
            plVar25 = (long *)(uVar19 * 0x10 + lVar12);
            *(long ***)(lVar12 + lVar28) = pplVar1;
            *(undefined4 *)(lVar12 + 8 + lVar28) = 8;
            plVar30 = (long *)(lVar12 + lVar28 + 0x10);
            plVar13 = (long *)(lVar12 + lVar28 + (lVar28 >> 4) * -0x10);
            func_0x0099bda0(plVar13,plVar24,lVar28);
            plStack_108 = plVar13;
            plStack_f8 = plVar25;
            if (plVar24 != (long *)0x0) {
              plStack_100 = plVar30;
              _ZdaPvSt11align_val_t();
            }
          }
          puVar15[9] = lVar10;
          plStack_100 = plVar30;
        }
code_r0x00419dcf:
        puVar26 = (undefined8 *)puVar15[1];
        puVar29 = puVar15;
        if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
          do {
            puVar15 = (undefined8 *)puVar29[2];
            bVar31 = puVar29 != (undefined8 *)*puVar15;
            puVar29 = puVar15;
          } while (bVar31);
        }
        else {
          do {
            puVar15 = puVar26;
            puVar26 = (undefined8 *)*puVar15;
          } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
        }
      } while (puVar15 != (undefined8 *)(puVar23 + 0x28));
    }
    _ZN15fdevent_context12HandleEventsERKNSt3__16vectorI13fdevent_eventNS0_9allocatorIS2_EEEE
              (puVar23,&plStack_108);
    plStack_100 = plStack_108;
  } while( true );
}


