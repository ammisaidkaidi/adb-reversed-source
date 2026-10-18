// Function: _ZN21fdevent_context_epoll8RegisterEP7fdevent
// Address: 004191e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN21fdevent_context_epoll8RegisterEP7fdevent(long param_1,long param_2)

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
  ulong uVar17;
  byte extraout_DL;
  uint extraout_EDX;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puVar20;
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
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_130;
  ulong uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_100;
  undefined4 *puStack_f8;
  undefined *puStack_f0;
  undefined auStack_c8 [12];
  int iStack_bc;
  undefined *puStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined *puStack_a0;
  uint *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  uint *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined auStack_48 [12];
  int iStack_3c;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_3c = (*(ushort *)(param_2 + 0xc) & 1) + (*(ushort *)(param_2 + 0xc) & 6) * 2 + 0x2000;
  puVar23 = (undefined *)(ulong)*(uint *)(param_1 + 0xb0);
  puVar20 = (undefined4 *)0x1;
  puStack_50 = &UNK_00419231;
  lStack_38 = param_2;
  iVar6 = func_0x0099c440(puVar23,1,*(undefined4 *)(param_2 + 8),&iStack_3c);
  if (iVar6 != 0) {
    puVar23 = (undefined *)0x6;
    puVar20 = (undefined4 *)0x0;
    puStack_50 = &UNK_00419241;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar5 != '\0') {
      puStack_50 = &UNK_0041926a;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar7 = *unaff_R14;
      unaff_R15 = (ulong)uVar7;
      unaff_R12 = auStack_48;
      puStack_50 = &UNK_00419293;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00187fcd,0x53,6,0,unaff_R15);
      puStack_50 = &UNK_0041929b;
      uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_50 = &UNK_004192af;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0016468b,0x16);
      puStack_50 = &UNK_004192ba;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                        (uVar9,*(undefined4 *)(param_2 + 8));
      puVar20 = (undefined4 *)&UNK_0015c9a3;
      puStack_50 = &UNK_004192ce;
      func_0x0032eb30(uVar9,&UNK_0015c9a3,0xb);
      puStack_50 = &UNK_004192d6;
      puVar23 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_50 = &UNK_004192e3;
  func_0x0099bd00();
  puStack_50 = &stack0xfffffffffffffff8;
  uStack_58 = unaff_R15;
  puStack_60 = unaff_R14;
  puStack_68 = unaff_R12;
  lStack_70 = param_2;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  puVar23 = (undefined *)(ulong)*(uint *)(puVar23 + 0xb0);
  puVar21 = (undefined *)0x2;
  puStack_88 = &UNK_00419324;
  iVar6 = func_0x0099c440(puVar23,2,puVar20[2],0);
  if (iVar6 != 0) {
    puVar23 = (undefined *)0x6;
    puVar21 = (undefined *)0x0;
    puStack_88 = &UNK_00419334;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar5 != '\0') {
      puStack_88 = &UNK_0041935d;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar7 = *unaff_R14;
      unaff_R15 = (ulong)uVar7;
      unaff_R12 = auStack_80;
      puStack_88 = &UNK_00419386;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00187fcd,0x59,6,0,unaff_R15);
      puStack_88 = &UNK_0041938e;
      uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_88 = &UNK_004193a2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017bc52,0x18);
      puStack_88 = &UNK_004193ad;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,puVar20[2]);
      puVar21 = &UNK_0015c9a3;
      puStack_88 = &UNK_004193c1;
      func_0x0032eb30(uVar9,&UNK_0015c9a3,0xb);
      puStack_88 = &UNK_004193c9;
      puVar23 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_88 = &UNK_004193d6;
  func_0x0099bd00();
  puStack_88 = (undefined *)&puStack_50;
  uStack_90 = unaff_R15;
  puStack_98 = unaff_R14;
  puStack_a0 = unaff_R12;
  puStack_a8 = puVar20;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)(puVar21 + 0xc);
  *(short *)(puVar21 + 0xc) = (short)extraout_EDX;
  if ((extraout_EDX & 0xfffffff7) != (uVar2 & 0xfffffff7)) {
    iStack_bc = (extraout_EDX & 1) + (extraout_EDX & 6) * 2 + 0x2000;
    puStack_b8 = puVar21;
    puVar23 = (undefined *)(ulong)*(uint *)(puVar23 + 0xb0);
    iVar6 = func_0x0099c440(puVar23,3,*(undefined4 *)(puVar21 + 8),&iStack_bc);
    unaff_R12 = puVar21;
    if (iVar6 != 0) {
      puVar23 = (undefined *)0x6;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar5 != '\0') {
        puVar20 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar20;
        puVar23 = auStack_c8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar23,&UNK_00187fcd,0x68,6,0,uVar3);
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar23);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015c9af,0x14);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                          (uVar9,*(undefined4 *)(puVar21 + 8));
        func_0x0032eb30(uVar9,&UNK_0015c9a3,0xb);
        _ZN7android4base10LogMessageD2Ev();
        *puVar20 = uVar3;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_f8 = puVar20;
  puStack_f0 = unaff_R12;
  uVar9 = _ZN7android4base11GetThreadIdEv();
  *(undefined8 *)(puVar23 + 8) = uVar9;
  puVar23[0x10] = 1;
  plStack_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  plStack_140 = (long *)0x0;
  puStack_120 = (undefined8 *)0x0;
  lStack_118 = 0;
  plStack_130 = (long *)0x0;
  uStack_128 = 0;
  uStack_110 = 0x3f800000;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  do {
    plStack_150 = plStack_148;
    if (puVar23[0x18] != '\0') {
      if (puVar23[0x10] == '\x01') {
        puVar23[0x10] = 0;
      }
      plVar25 = plStack_130;
      puVar15 = puStack_120;
      if (lStack_170 != 0) {
        lStack_168 = lStack_170;
        _ZdaPvSt11align_val_t(lStack_170,lStack_160 - lStack_170);
        plVar25 = plStack_130;
        puVar15 = puStack_120;
      }
      while (puVar15 != (undefined8 *)0x0) {
        puVar26 = (undefined8 *)*puVar15;
        plStack_130 = plVar25;
        _ZdaPvSt11align_val_t(puVar15,0x20);
        plVar25 = plStack_130;
        puVar15 = puVar26;
      }
      plStack_130 = (long *)0x0;
      if (plVar25 != (long *)0x0) {
        _ZdaPvSt11align_val_t(plVar25,uStack_128 << 3);
      }
      plVar25 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plStack_148 = plStack_150;
        _ZdaPvSt11align_val_t(plStack_150,(long)plStack_140 - (long)plStack_150);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
code_r0x0041a072:
      func_0x0099bd00();
code_r0x0041a077:
      func_0x0032fc40();
      return plVar25[6] + -1;
    }
    lVar10 = lStack_168 - lStack_170 >> 2;
    if ((ulong)(lVar10 * -0x5555555555555555) <= *(ulong *)(puVar23 + 0x30) &&
        *(ulong *)(puVar23 + 0x30) + lVar10 * 0x5555555555555555 != 0) {
      func_0x0041a4b0(&lStack_170);
    }
    while( true ) {
      uVar7 = _ZN15fdevent_context21CalculatePollDurationEv(puVar23);
      plVar25 = (long *)(ulong)*(uint *)(puVar23 + 0xb0);
      uVar7 = func_0x0099c450(plVar25,lStack_170,
                              (int)((ulong)(lStack_168 - lStack_170) >> 2) * -0x55555555,
                              -(uint)((extraout_DL & 1) == 0) | uVar7);
      if (uVar7 != 0xffffffff) break;
      piVar11 = (int *)func_0x0099bce0();
      if ((*piVar11 != 4) &&
         (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar5 != '\0')) {
        iVar6 = *piVar11;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_198,&UNK_00187fcd,0x88,6,0,iVar6);
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_198);
        func_0x0032eb30(uVar9,&UNK_0016b0fa,0x11);
        _ZN7android4base10LogMessageD2Ev(&uStack_198);
        *piVar11 = iVar6;
      }
    }
    lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
    plVar24 = plStack_150;
    uVar17 = *(ulong *)(puVar23 + 0x30);
    lVar28 = (long)plStack_140 - (long)plStack_150;
    if ((ulong)(lVar28 >> 4) < uVar17) {
      if (0xfffffffffffffff < uVar17) {
code_r0x0041a06d:
        func_0x00330ca0();
        goto code_r0x0041a072;
      }
      lVar12 = (long)plStack_148 - (long)plStack_150;
      plVar13 = (long *)_Znwm(uVar17 * 0x10);
      plVar25 = plVar13;
      func_0x0099bda0(plVar13,plVar24);
      plStack_150 = plVar13;
      plStack_140 = plVar13 + uVar17 * 2;
      if (plVar24 != (long *)0x0) {
        plStack_148 = (long *)((long)plVar13 + lVar12);
        _ZdaPvSt11align_val_t(plVar24,lVar28);
        plVar25 = plVar24;
      }
    }
    plStack_148 = plStack_150;
    puVar15 = puStack_120;
    if (lStack_118 != 0) {
      while (puVar15 != (undefined8 *)0x0) {
        puVar26 = (undefined8 *)*puVar15;
        _ZdaPvSt11align_val_t(puVar15,0x20);
        puVar15 = puVar26;
      }
      puStack_120 = (undefined8 *)0x0;
      plVar25 = (long *)0x0;
      if (uStack_128 != 0) {
        uVar17 = (ulong)((uint)uStack_128 & 3);
        if (uStack_128 < 4) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          do {
            plStack_130[uVar18] = 0;
            plStack_130[uVar18 + 1] = 0;
            plStack_130[uVar18 + 2] = 0;
            plStack_130[uVar18 + 3] = 0;
            uVar18 = uVar18 + 4;
          } while ((uStack_128 & 0xfffffffffffffffc) != uVar18);
          plVar25 = plStack_130;
          if (uVar17 == 0) goto code_r0x00419814;
        }
        do {
          plStack_130[uVar18] = 0;
          uVar18 = uVar18 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
code_r0x00419814:
      lStack_118 = 0;
    }
    if (0 < (int)uVar7) {
      lVar28 = 0;
      do {
        lStack_178 = *(long *)(lStack_170 + 4 + lVar28);
        uVar8 = *(uint *)(lStack_170 + lVar28);
        uVar27 = 0;
        if ((uVar8 & 1) != 0) {
          uVar27 = 1;
          if ((*(byte *)(lStack_178 + 0xc) & 1) == 0) {
            plVar25 = &uStack_198;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar25,&UNK_00187fcd,0x96,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar25);
            uVar9 = func_0x0032eb30(uVar9,&UNK_00167d4d,0x23);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_170 + lVar28);
            uVar27 = 1;
          }
        }
        if ((uVar8 & 4) != 0) {
          if ((*(byte *)(lStack_178 + 0xc) & 2) == 0) {
            plVar25 = &uStack_198;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (plVar25,&UNK_00187fcd,0x9a,6,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(plVar25);
            uVar9 = func_0x0032eb30(uVar9,&UNK_0017a31e,0x24);
            func_0x0032eb30(uVar9,&UNK_0015ae05,1);
            _ZN7android4base10LogMessageD2Ev();
            uVar8 = *(uint *)(lStack_170 + lVar28);
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
            puVar20 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar20;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&lStack_180,&UNK_00187fcd,0xa3,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_180);
            _Z8dump_fdePK7fdevent(&uStack_1b0,lStack_178);
            lVar12 = (long)&uStack_1b0 + 1;
            if (((ulong)uStack_1b0 & 1) != 0) {
              lVar12 = lStack_1a0;
            }
            _ZN7android4base12StringPrintfEPKcz(&uStack_198,&UNK_0018b03c,lVar12,uVar4);
            func_0x0032e5a0(uVar9,&uStack_198);
            if (((ulong)uStack_198 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_1b0 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
            }
            plVar25 = &lStack_180;
            _ZN7android4base10LogMessageD2Ev();
            *puVar20 = uVar3;
          }
        }
        plVar24 = plStack_150;
        if (plStack_148 < plStack_140) {
          *plStack_148 = lStack_178;
          *(uint *)(plStack_148 + 1) = uVar4;
          plVar30 = plStack_148 + 2;
        }
        else {
          lVar12 = (long)plStack_148 - (long)plStack_150;
          uVar17 = (lVar12 >> 4) + 1;
          if (0xfffffffffffffff < uVar17) goto code_r0x0041a06d;
          uVar16 = (long)plStack_140 - (long)plStack_150;
          uVar18 = (long)uVar16 >> 3;
          if ((ulong)((long)uVar16 >> 3) <= uVar17) {
            uVar18 = uVar17;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar18 = 0xfffffffffffffff;
          }
          if (0xfffffffffffffff < uVar18) goto code_r0x0041a077;
          lVar14 = _Znwm(uVar18 * 0x10);
          plVar25 = (long *)(uVar18 * 0x10 + lVar14);
          *(long *)(lVar14 + lVar12) = lStack_178;
          *(uint *)(lVar14 + 8 + lVar12) = uVar4;
          plVar30 = (long *)(lVar14 + lVar12 + 0x10);
          plVar13 = (long *)(lVar14 + lVar12 + (lVar12 >> 4) * -0x10);
          func_0x0099bda0(plVar13,plVar24,lVar12);
          plStack_150 = plVar13;
          plStack_140 = plVar25;
          if (plVar24 != (long *)0x0) {
            plStack_148 = plVar30;
            _ZdaPvSt11align_val_t(plVar24,uVar16);
          }
        }
        uStack_1b0 = &lStack_178;
        uStack_198 = &plStack_130;
        plVar25 = &uStack_198;
        plStack_148 = plVar30;
        lVar12 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                           (plVar25,uStack_1b0,&_ZNSt3__119piecewise_constructE,&uStack_1b0);
        *(long **)(lVar12 + 0x18) = plVar30 + -2;
        *(long *)(lStack_178 + 0x20) = lVar10;
        lVar28 = lVar28 + 0xc;
      } while ((ulong)uVar7 * 0xc != lVar28);
    }
    puVar15 = *(undefined8 **)(puVar23 + 0x20);
    if (puVar15 != (undefined8 *)(puVar23 + 0x28)) {
      do {
        uVar17 = uStack_128;
        pplVar1 = (long **)(puVar15 + 5);
        if ((uStack_128 != 0) && (lStack_118 != 0)) {
          uStack_198 = pplVar1;
          uVar16 = _ZNSt3__113__hash_memoryEPKvm(&uStack_198,8);
          uVar18 = uVar17 - 1;
          if ((uVar17 & uVar18) == 0) {
            uVar22 = uVar16 & uVar18;
          }
          else {
            uVar22 = uVar16;
            if (uVar17 <= uVar16) {
              if ((uVar16 | uVar17) >> 0x20 == 0) {
                uVar22 = (uVar16 & 0xffffffff) % (uVar17 & 0xffffffff);
              }
              else {
                uVar22 = uVar16 % uVar17;
              }
            }
          }
          if ((undefined8 *)plStack_130[uVar22] != (undefined8 *)0x0) {
            for (puVar26 = *(undefined8 **)plStack_130[uVar22]; puVar26 != (undefined8 *)0x0;
                puVar26 = (undefined8 *)*puVar26) {
              uVar19 = puVar26[1];
              if (uVar19 == uVar16) {
                if ((long **)puVar26[2] == pplVar1) {
                  if (*(int *)(puVar26[3] + 8) != 0) goto code_r0x00419dcf;
                  break;
                }
              }
              else {
                if ((uVar17 & uVar18) == 0) {
                  uVar19 = uVar19 & uVar18;
                }
                else if (uVar17 <= uVar19) {
                  if ((uVar19 | uVar17) >> 0x20 == 0) {
                    uVar19 = (uVar19 & 0xffffffff) % (uVar17 & 0xffffffff);
                  }
                  else {
                    uVar19 = uVar19 % uVar17;
                  }
                }
                if (uVar19 != uVar22) break;
              }
            }
          }
        }
        if ((*(char *)(puVar15 + 8) == '\x01') && (puVar15[7] * 1000000 + puVar15[9] < lVar10)) {
          plVar25 = (long *)0x1;
          cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar5 != '\0') {
            puVar20 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar20;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_1b0,&UNK_00187fcd,0xb5,1,0,0xffffffff);
            uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_1b0);
            _Z8dump_fdePK7fdevent(&uStack_198,pplVar1);
            uVar17 = (ulong)uStack_198 >> 1 & 0x7f;
            lVar28 = (long)&uStack_198 + 1;
            if (((ulong)uStack_198 & 1) != 0) {
              uVar17 = uStack_190;
              lVar28 = lStack_188;
            }
            uVar9 = func_0x0032eb30(uVar9,lVar28,uVar17);
            func_0x0032eb30(uVar9,&UNK_001661c2,10);
            if (((ulong)uStack_198 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_188);
            }
            plVar25 = &uStack_1b0;
            _ZN7android4base10LogMessageD2Ev();
            *puVar20 = uVar3;
          }
          plVar24 = plStack_150;
          if (plStack_148 < plStack_140) {
            *plStack_148 = (long)pplVar1;
            *(undefined4 *)(plStack_148 + 1) = 8;
            plVar30 = plStack_148 + 2;
          }
          else {
            lVar28 = (long)plStack_148 - (long)plStack_150;
            uVar17 = (lVar28 >> 4) + 1;
            if (0xfffffffffffffff < uVar17) goto code_r0x0041a06d;
            uVar18 = (long)plStack_140 - (long)plStack_150 >> 3;
            if (uVar18 <= uVar17) {
              uVar18 = uVar17;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_140 - (long)plStack_150)) {
              uVar18 = 0xfffffffffffffff;
            }
            if (0xfffffffffffffff < uVar18) goto code_r0x0041a077;
            lVar12 = _Znwm(uVar18 * 0x10);
            plVar25 = (long *)(uVar18 * 0x10 + lVar12);
            *(long ***)(lVar12 + lVar28) = pplVar1;
            *(undefined4 *)(lVar12 + 8 + lVar28) = 8;
            plVar30 = (long *)(lVar12 + lVar28 + 0x10);
            plVar13 = (long *)(lVar12 + lVar28 + (lVar28 >> 4) * -0x10);
            func_0x0099bda0(plVar13,plVar24,lVar28);
            plStack_150 = plVar13;
            plStack_140 = plVar25;
            if (plVar24 != (long *)0x0) {
              plStack_148 = plVar30;
              _ZdaPvSt11align_val_t();
            }
          }
          puVar15[9] = lVar10;
          plStack_148 = plVar30;
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
              (puVar23,&plStack_150);
    plStack_148 = plStack_150;
  } while( true );
}


