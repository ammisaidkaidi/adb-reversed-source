// Function: _Z8usb_initv
// Address: 004153f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z8usb_initv(void)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  char *pcVar20;
  ulong uVar21;
  undefined7 *puVar22;
  undefined *puVar23;
  byte *pbVar24;
  byte *unaff_R14;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 auStack_11f0 [8];
  long lStack_11e8;
  byte *pbStack_11e0;
  byte *pbStack_11d8;
  byte *pbStack_11d0;
  undefined *puStack_11c8;
  byte *pbStack_11c0;
  byte *pbStack_11b8;
  byte *pbStack_11b0;
  uint uStack_11a4;
  ulong uStack_11a0;
  byte *pbStack_1198;
  ulong uStack_1190;
  undefined1 auStack_1188 [8];
  undefined8 uStack_1180;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined8 uStack_1170;
  byte *pbStack_1168;
  byte *pbStack_1160;
  byte bStack_1150;
  undefined8 uStack_114f;
  undefined1 uStack_1147;
  undefined1 uStack_1146;
  undefined5 uStack_1145;
  long *plStack_1140;
  undefined8 uStack_1130;
  byte *pbStack_1128;
  byte *pbStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  byte bStack_1100;
  undefined7 uStack_10ff;
  undefined4 uStack_10f8;
  uint uStack_10f4;
  undefined8 uStack_10f0;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined *apuStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_b8 = (undefined *)0x0;
  uStack_b0 = 0;
  uStack_28 = 0;
  apuStack_d0[0] = &UNK_0041544d;
  func_0x0099bff0(&uStack_b0);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  puStack_b8 = &UNK_00416860;
  apuStack_d0[0] = &UNK_00415475;
  func_0x0099bfe0(0xe,&puStack_b8,0);
  apuStack_d0[0] = &UNK_0041547f;
  puVar6 = (undefined1 *)_Znwm(8);
  apuStack_d0[0] = &UNK_0041548a;
  _ZNSt3__115__thread_structC2Ev(puVar6);
  apuStack_d0[0] = &UNK_00415494;
  plVar7 = (long *)_Znwm(0x10);
  *plVar7 = (long)puVar6;
  plVar7[1] = (long)&UNK_00415510;
  apuStack_d0[0] = &UNK_004154ba;
  iVar4 = func_0x0099be80(auStack_c0,0,&UNK_00405090,plVar7);
  if (iVar4 == 0) {
    puVar6 = auStack_c0;
    apuStack_d0[0] = &UNK_004154cd;
    _ZNSt3__16thread6detachEv(puVar6);
    apuStack_d0[0] = &UNK_004154d5;
    _ZNSt3__16threadD2Ev(puVar6);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
      return;
    }
  }
  else {
    apuStack_d0[0] = &UNK_004154fc;
    _ZNSt3__120__throw_system_errorEiPKc(iVar4,&UNK_0015f7ec);
  }
  apuStack_d0[0] = &UNK_00415501;
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  bStack_1100 = 0x16;
  uStack_10ff = 0x20656369766564;
  uStack_10f8 = 0x6c6c6f70;
  uStack_10f4 = uStack_10f4 & 0xffffff00;
  pbVar18 = (byte *)&uStack_1130;
  puStack_11c8 = &UNK_00415575;
  puStack_f8 = puVar6;
  apuStack_d0[0] = &stack0xfffffffffffffff8;
  func_0x0099c310(pbVar18,&uStack_10ff,0xf);
  pbStack_1128 = (byte *)((ulong)pbStack_1128 & 0xffffffffffffff);
  puStack_11c8 = &UNK_00415581;
  uVar8 = func_0x0099c320();
  puStack_11c8 = &UNK_0041558c;
  func_0x0099c330(uVar8,pbVar18);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_11c8 = &UNK_004164a7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_11c8 = &UNK_004164b4;
      pbVar18 = (byte *)func_0x0099bce0();
      uVar2 = *(undefined4 *)pbVar18;
      unaff_R14 = &bStack_1100;
      puStack_11c8 = &UNK_004164e3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R14,&UNK_0016974f,0x295,1,0,0xffffffff);
      puStack_11c8 = &UNK_004164eb;
      uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
      puStack_11c8 = &UNK_004164ff;
      func_0x0032eb30(uVar8,&UNK_00164638,0x1e);
      puStack_11c8 = &UNK_00416507;
      _ZN7android4base10LogMessageD2Ev(unaff_R14);
      *(undefined4 *)pbVar18 = uVar2;
    }
  }
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_11c8 = &UNK_00416522;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_11c8 = &UNK_0041652f;
      pbVar18 = (byte *)func_0x0099bce0();
      uVar2 = *(undefined4 *)pbVar18;
      unaff_R14 = &bStack_1100;
      puStack_11c8 = &UNK_0041655e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R14,&UNK_0016974f,0x277,1,0,0xffffffff);
      puStack_11c8 = &UNK_00416566;
      uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
      puStack_11c8 = &UNK_0041657a;
      func_0x0032eb30(uVar8,&UNK_001804ae,0x1b);
      puStack_11c8 = &UNK_00416582;
      _ZN7android4base10LogMessageD2Ev(unaff_R14);
      *(undefined4 *)pbVar18 = uVar2;
    }
  }
  uStack_10f0 = 0;
  bStack_1100 = 0x18;
  uStack_10ff = 0x75622f7665642f;
  uStack_10f8 = 0x73752f73;
  uStack_10f4 = 0x62;
  puStack_11c8 = &UNK_004155f4;
  pbVar9 = (byte *)func_0x0099c0d0(&uStack_10ff);
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = pbVar18;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 4)) {
      puStack_11c8 = &UNK_00415a04;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar3 != '\0') {
        puStack_11c8 = &UNK_00416637;
        pbVar9 = (byte *)func_0x0099bce0();
        uVar2 = *(undefined4 *)pbVar9;
        puStack_11c8 = &UNK_00416666;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_1130,&UNK_0016974f,0x27b,3,0,0xffffffff);
        puStack_11c8 = &UNK_0041666e;
        uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1130);
        puStack_11c8 = &UNK_00416682;
        uVar8 = func_0x0032eb30(uVar8,&UNK_00170777,0x1e);
        puStack_11c8 = &UNK_00416691;
        uVar8 = func_0x0032e5a0(uVar8,&bStack_1100);
        puStack_11c8 = &UNK_004166a5;
        uVar8 = func_0x0032eb30(uVar8,&UNK_001865fe,3);
        puStack_11c8 = &UNK_004166af;
        uVar16 = func_0x0099bd20(*(undefined4 *)pbVar9);
        puStack_11c8 = &UNK_004166ba;
        uVar17 = func_0x0099bcf0(uVar16);
        puStack_11c8 = &UNK_004166cf;
        func_0x0032eb30(uVar8,uVar16,uVar17);
        puStack_11c8 = &UNK_004166d7;
        _ZN7android4base10LogMessageD2Ev(&uStack_1130);
        *(undefined4 *)pbVar9 = uVar2;
      }
    }
  }
  else {
    puStack_11c8 = &UNK_00415608;
    lVar10 = func_0x0099c0e0(pbVar9);
    pbVar24 = pbVar9;
    pbVar18 = pbStack_11b8;
    pbVar14 = pbStack_1198;
    bVar1 = bStack_1100;
    while (pbStack_11b8 = pbVar24, bStack_1100 = bVar1, lVar10 != 0) {
      pbVar18 = (byte *)&adb_trace_mask;
      pbStack_1198 = (byte *)(lVar10 + 0x13);
      pcVar20 = (char *)pbStack_1198;
      do {
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      } while ((int)cVar3 - 0x30U < 10);
      if (cVar3 == '\0') {
        uStack_1130 = 0;
        pbStack_1128 = (byte *)0x0;
        pbStack_1120 = (byte *)0x0;
        if ((bVar1 & 1) == 0) {
          pbVar9 = (byte *)(ulong)(bVar1 >> 1);
        }
        else {
          pbVar9 = (byte *)CONCAT44(uStack_10f4,uStack_10f8);
        }
        bStack_1150 = 0;
        uStack_114f._0_7_ = 0;
        uStack_114f._7_1_ = '\0';
        uStack_1147 = 0;
        uStack_1146 = 0;
        uStack_1145 = 0;
        plStack_1140 = (long *)0x0;
        pbVar24 = pbVar9 + 1;
        if ((byte *)0xfffffffffffffff6 < pbVar24) {
code_r0x00416777:
          pbStack_1198 = pbVar14;
          puStack_11c8 = &UNK_0041677c;
          func_0x0032e8f0();
          goto code_r0x0041677c;
        }
        if (pbVar24 < (byte *)0x17) {
          bStack_1150 = (char)pbVar24 * '\x02';
          uVar13 = 0;
        }
        else {
          lVar10 = ((ulong)pbVar24 | 7) + 1;
          if (((ulong)pbVar24 | 7) == 0x17) {
            lVar10 = 0x1a;
          }
          puStack_11c8 = &UNK_004156ef;
          plStack_1140 = (long *)_Znwm(lVar10);
          uVar13 = lVar10 + 1;
          bStack_1150 = (byte)uVar13;
          uStack_114f._0_7_ = (undefined7)(uVar13 >> 8);
          uStack_1147 = (undefined1)((ulong)pbVar24 >> 8);
          uStack_1146 = (undefined1)((ulong)pbVar24 >> 0x10);
          uStack_1145 = (undefined5)((ulong)pbVar24 >> 0x18);
          uVar13 = uVar13 & 0xffffffff;
          uStack_114f._7_1_ = (char)pbVar24;
        }
        puVar22 = (undefined7 *)0x0;
        if ((bVar1 & 1) == 0) {
          puVar22 = &uStack_10ff;
        }
        plVar7 = plStack_1140;
        if ((uVar13 & 1) == 0) {
          plVar7 = &uStack_114f;
        }
        puStack_11c8 = &UNK_0041573b;
        func_0x0099bda0(plVar7,puVar22,pbVar9);
        ((byte *)((long)plVar7 + (long)pbVar9))[0] = 0x2f;
        ((byte *)((long)plVar7 + (long)pbVar9))[1] = 0;
        puStack_11c8 = &UNK_00415755;
        puVar11 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                     (&bStack_1150,pbStack_1198);
        pbStack_1120 = (byte *)puVar11[2];
        uStack_1130 = *puVar11;
        pbStack_1128 = (byte *)puVar11[1];
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        if ((bStack_1150 & 1) != 0) {
          puStack_11c8 = &UNK_00415798;
          _ZdaPvSt11align_val_t
                    (plStack_1140,CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe
                    );
        }
        pbVar18 = pbStack_1120;
        unaff_R14 = (byte *)(uStack_1130 & 0xff);
        pbStack_1198 = pbStack_1120;
        if ((uStack_1130 & 1) == 0) {
          pbStack_1198 = (byte *)((long)&uStack_1130 + 1);
        }
        puStack_11c8 = &UNK_004157c5;
        lVar10 = func_0x0099c0d0();
        if (lVar10 != 0) {
          pbStack_11c0 = pbVar18;
          puStack_11c8 = &UNK_004157e7;
          pbStack_11b0 = unaff_R14;
          lVar12 = func_0x0099c0e0(lVar10);
          if (lVar12 != 0) {
            pbVar18 = pbStack_1128;
            if (((ulong)pbStack_11b0 & 1) == 0) {
              pbVar18 = (byte *)((ulong)pbStack_11b0 >> 1 & 0x7fffffff);
            }
            uVar13 = (ulong)(pbVar18 + 1) | 7;
            uStack_11a0 = uVar13 + 1;
            if (uVar13 == 0x17) {
              uStack_11a0 = 0x1a;
            }
            uStack_1190 = uStack_11a0 + 1;
            uStack_11a4 = (int)(pbVar18 + 1) * 2;
            do {
              pbVar24 = pbVar18 + 1;
              pbVar9 = (byte *)(lVar12 + 0x13);
              pbVar14 = pbVar9;
              do {
                bVar1 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while ((int)(char)bVar1 - 0x30U < 10);
              if (bVar1 == 0) {
                uStack_1170 = 0;
                pbStack_1168 = (byte *)0x0;
                pbStack_1160 = (byte *)0x0;
                pbVar14 = pbStack_1198;
                if ((byte *)0xfffffffffffffff6 < pbVar24) goto code_r0x00416777;
                if (pbVar24 < (byte *)0x17) {
                  uStack_1170 = (ulong)(byte)uStack_11a4;
                  uVar13 = (ulong)uStack_11a4;
                }
                else {
                  puStack_11c8 = &UNK_004158c4;
                  pbStack_1160 = (byte *)_Znwm(uStack_11a0);
                  uStack_1170 = uStack_1190;
                  uVar13 = uStack_1190;
                  pbStack_1168 = pbVar24;
                }
                unaff_R14 = pbStack_1160;
                if ((uVar13 & 1) == 0) {
                  unaff_R14 = (byte *)((long)&uStack_1170 + 1);
                }
                puStack_11c8 = &UNK_00415902;
                func_0x0099bda0(unaff_R14,pbStack_1198,pbVar18);
                (unaff_R14 + (long)pbVar18)[0] = 0x2f;
                (unaff_R14 + (long)pbVar18)[1] = 0;
                puStack_11c8 = &UNK_00415918;
                puVar15 = (undefined8 *)
                          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                    (&uStack_1170,pbVar9);
                plStack_1140 = (long *)puVar15[2];
                uVar8 = puVar15[1];
                bStack_1150 = (byte)*puVar15;
                uStack_114f._0_7_ = (undefined7)((ulong)*puVar15 >> 8);
                uStack_114f._7_1_ = (char)uVar8;
                uStack_1147 = (undefined1)((ulong)uVar8 >> 8);
                uStack_1146 = (undefined1)((ulong)uVar8 >> 0x10);
                uStack_1145 = (undefined5)((ulong)uVar8 >> 0x18);
                *puVar15 = 0;
                puVar15[1] = 0;
                puVar15[2] = 0;
                puStack_11c8 = &UNK_00415947;
                func_0x00417300(&bStack_1150);
                if ((bStack_1150 & 1) != 0) {
                  puStack_11c8 = &UNK_00415967;
                  _ZdaPvSt11align_val_t
                            (plStack_1140,
                             CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe);
                }
                if ((uStack_1170 & 1) != 0) {
                  puStack_11c8 = &UNK_0041598f;
                  _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
                }
              }
              puStack_11c8 = &UNK_00415858;
              lVar12 = func_0x0099c0e0(lVar10);
            } while (lVar12 != 0);
          }
          puStack_11c8 = &UNK_004159a8;
          func_0x0099c100(lVar10);
          pbVar18 = pbStack_11c0;
          unaff_R14 = pbStack_11b0;
        }
        pbVar9 = pbStack_11b8;
        pbVar14 = pbStack_1198;
        if (((ulong)unaff_R14 & 1) != 0) {
          puStack_11c8 = &UNK_004159d3;
          _ZdaPvSt11align_val_t(pbVar18,uStack_1130 & 0xfffffffffffffffe);
          pbVar9 = pbStack_11b8;
          pbVar14 = pbStack_1198;
        }
      }
      pbStack_1198 = pbVar14;
      puStack_11c8 = &UNK_0041563d;
      lVar10 = func_0x0099c0e0(pbVar9);
      pbVar24 = pbStack_11b8;
      pbVar18 = pbStack_11b8;
      pbVar14 = pbStack_1198;
      bVar1 = bStack_1100;
    }
    puStack_11c8 = &UNK_004159e0;
    pbStack_11b8 = pbVar18;
    pbStack_1198 = pbVar14;
    func_0x0099c100(pbVar9);
  }
  if ((bStack_1100 & 1) != 0) {
    puStack_11c8 = &UNK_00415a2c;
    _ZdaPvSt11align_val_t(uStack_10f0,CONCAT71(uStack_10ff,bStack_1100) & 0xfffffffffffffffe);
  }
  pbVar18 = (byte *)&adb_trace_mask;
  puStack_11c8 = &UNK_00415a31;
  _Z31adb_notify_device_scan_completev();
  puStack_11c8 = &UNK_00415a45;
  iVar4 = func_0x0099c340(0x10,3,0xf);
  puStack_11c8 = &UNK_00415a4d;
  unaff_R14 = (byte *)func_0x0099bce0();
  if (iVar4 == -1) {
    if ((((byte)adb_trace_mask & 0x20) == 0) || (3 < (int)adb_trace_severity._20_4_)) {
      iVar4 = *(int *)unaff_R14;
    }
    else {
      puStack_11c8 = &UNK_004163bf;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      iVar4 = *(int *)unaff_R14;
      if (cVar3 != '\0') {
        pbVar9 = &bStack_1100;
        puStack_11c8 = &UNK_004163f3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pbVar9,&UNK_0016974f,0x29e,3,0,0xffffffff);
        puStack_11c8 = &UNK_004163fb;
        uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar9);
        puStack_11c8 = &UNK_0041640f;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0017d805,0x1f);
        puStack_11c8 = &UNK_0041641e;
        pbVar18 = (byte *)func_0x0099bd20(*(int *)unaff_R14);
        puStack_11c8 = &UNK_00416429;
        uVar16 = func_0x0099bcf0(pbVar18);
        puStack_11c8 = &UNK_0041643a;
        func_0x0032eb30(uVar8,pbVar18,uVar16);
        puStack_11c8 = &UNK_00416442;
        _ZN7android4base10LogMessageD2Ev(pbVar9);
      }
    }
  }
  else {
    uStack_1174 = 0x400000;
    puStack_11c8 = &UNK_00415a83;
    func_0x0099bf50(iVar4,1,8,&uStack_1174,4);
    uStack_1178 = 2;
    uStack_1180 = 0x10;
    puStack_11c8 = &UNK_00415aac;
    iVar5 = func_0x0099c370(iVar4,&uStack_1180,0xc);
    uStack_11a0 = CONCAT44(uStack_11a0._4_4_,iVar4);
    if (iVar5 < 0) {
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 4)) {
        puStack_11c8 = &UNK_0041645d;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
        if (cVar3 != '\0') {
          iVar4 = *(int *)unaff_R14;
          pbVar9 = &bStack_1100;
          puStack_11c8 = &UNK_00416722;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar9,&UNK_0016974f,0x2b3,3,0,0xffffffff);
          puStack_11c8 = &UNK_0041672a;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar9);
          puStack_11c8 = &UNK_0041673e;
          pbVar18 = (byte *)func_0x0032eb30(uVar8,&UNK_00167d05,0x1f);
          puStack_11c8 = &UNK_0041674a;
          uVar8 = func_0x0099bd20(*(int *)unaff_R14);
          puStack_11c8 = &UNK_00416755;
          uVar16 = func_0x0099bcf0(uVar8);
          puStack_11c8 = &UNK_00416763;
          func_0x0032eb30(pbVar18,uVar8,uVar16);
          puStack_11c8 = &UNK_0041676b;
          _ZN7android4base10LogMessageD2Ev(pbVar9);
          *(int *)unaff_R14 = iVar4;
        }
      }
    }
    else {
      puStack_11c8 = &UNK_00415ad8;
      pbStack_1198 = unaff_R14;
      func_0x0099bdb0(&bStack_1100,0,0x1000);
      do {
        while( true ) {
          pbVar9 = &bStack_1100;
          puStack_11c8 = &UNK_00415b02;
          lVar10 = func_0x0099c410(iVar4,pbVar9,0xfff,0);
          unaff_R14 = pbStack_1198;
          if (lVar10 == -1) break;
          if (lVar10 < 0) goto code_r0x004162ef;
          pbStack_1120 = (byte *)0x0;
          uStack_1118 = 0;
          uStack_1130 = 0;
          pbStack_1128 = (byte *)0x0;
          uStack_1110 = 0;
          puStack_11c8 = &UNK_00415b42;
          _ZN18NetlinkUdevMessageC2EPKcl(&uStack_1130,pbVar9,lVar10);
          bStack_1150 = 0x12;
          uStack_114f._0_7_ = 0x54535953425553;
          uStack_114f._7_1_ = 'E';
          uStack_1147 = 0x4d;
          uStack_1146 = 0;
          puStack_11c8 = &UNK_00415b83;
          cVar3 = _ZNK18NetlinkUdevMessage8has_attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_17basic_string_viewIcS3_EE
                            (&uStack_1130,&bStack_1150,&UNK_0015adb1);
          if ((bStack_1150 & 1) != 0) {
            puStack_11c8 = &UNK_00415ba5;
            _ZdaPvSt11align_val_t
                      (plStack_1140,
                       CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe);
          }
          if (cVar3 == '\0') {
            if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 4)) {
              puStack_11c8 = &UNK_00415c48;
              cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
              if (cVar3 != '\0') {
                uStack_1190 = CONCAT44(uStack_1190._4_4_,*(int *)pbStack_1198);
                puStack_11c8 = &UNK_00415c89;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_1188,&UNK_0016974f,0x2c1,3,0,0xffffffff);
                puStack_11c8 = &UNK_00415c91;
                uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_1188);
                puStack_11c8 = &UNK_00415ca5;
                uVar8 = func_0x0032eb30(uVar8,&UNK_0017d825,0x1f);
                puVar23 = &UNK_001772a7;
code_r0x00415f06:
                puStack_11c8 = &UNK_00415f0b;
                _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                          (&uStack_1170,puVar23);
                puStack_11c8 = &UNK_00415f24;
                _ZNK18NetlinkUdevMessage4attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (&bStack_1150,&uStack_1130,&uStack_1170);
                puStack_11c8 = &UNK_00415f2f;
                func_0x0032e5a0(uVar8,&bStack_1150);
                if ((bStack_1150 & 1) != 0) {
                  puStack_11c8 = &UNK_00415f4f;
                  _ZdaPvSt11align_val_t
                            (plStack_1140,
                             CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe);
                }
                if ((uStack_1170 & 1) != 0) {
                  puStack_11c8 = &UNK_00415f6f;
                  _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
                }
                puStack_11c8 = &UNK_00415f7b;
                _ZN7android4base10LogMessageD2Ev(auStack_1188);
                *(int *)pbStack_1198 = (int)uStack_1190;
                iVar4 = (int)uStack_11a0;
              }
            }
          }
          else {
            uStack_1170 = 0x455059545645440e;
            pbStack_1168 = (byte *)((ulong)pbStack_1168 & 0xffffffffffffff00);
            puStack_11c8 = &UNK_00415be5;
            _ZNK18NetlinkUdevMessage4attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (&bStack_1150,&uStack_1130,&uStack_1170);
            if ((bStack_1150 & 1) == 0) {
              if (bStack_1150 >> 1 != 10) goto code_r0x00415c05;
code_r0x00415ccf:
              plVar7 = &uStack_114f;
              if ((bStack_1150 & 1) != 0) {
                plVar7 = plStack_1140;
              }
              bVar25 = (short)plVar7[1] == 0x6563 && *plVar7 == 0x697665645f627375;
            }
            else {
              if (CONCAT53(uStack_1145,CONCAT12(uStack_1146,CONCAT11(uStack_1147,uStack_114f._7_1_))
                          ) == 10) goto code_r0x00415ccf;
code_r0x00415c05:
              bVar25 = false;
            }
            if ((bStack_1150 & 1) != 0) {
              puStack_11c8 = &UNK_00415d1d;
              _ZdaPvSt11align_val_t
                        (plStack_1140,
                         CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe);
            }
            if ((uStack_1170 & 1) != 0) {
              puStack_11c8 = &UNK_00415e65;
              _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
            }
            if (bVar25) {
              bStack_1150 = 0;
              uStack_114f._0_7_ = 0;
              uStack_114f._7_1_ = '\0';
              uStack_1147 = 0;
              uStack_1146 = 0;
              uStack_1145 = 0;
              plStack_1140 = (long *)0x0;
              uStack_1170 = 0x454d414e5645440e;
              pbStack_1168 = (byte *)((ulong)pbStack_1168 & 0xffffffffffffff00);
              puStack_11c8 = &UNK_00415d83;
              _ZNK18NetlinkUdevMessage4attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (&bStack_1150,&uStack_1130,&uStack_1170);
              if ((uStack_1170 & 1) != 0) {
                puStack_11c8 = &UNK_00415da3;
                _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
              }
              if ((bStack_1150 & 1) == 0) {
                if (bStack_1150 >> 1 != 0) goto code_r0x00415dc2;
code_r0x00415fa8:
                if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 4)) {
                  puStack_11c8 = &UNK_00415fd0;
                  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
                  pbVar18 = pbStack_1198;
                  if (cVar3 != '\0') {
                    uStack_1190 = CONCAT44(uStack_1190._4_4_,*(int *)pbStack_1198);
                    puStack_11c8 = &UNK_00416010;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (&uStack_1170,&UNK_0016974f,0x2cc,3,0,0xffffffff);
                    puStack_11c8 = &UNK_00416018;
                    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1170);
                    puStack_11c8 = &UNK_0041602c;
                    func_0x0032eb30(uVar8,&UNK_0018976c,0x25);
                    puStack_11c8 = &UNK_00416034;
                    _ZN7android4base10LogMessageD2Ev(&uStack_1170);
                    *(int *)pbVar18 = (int)uStack_1190;
                  }
                }
              }
              else {
                if (CONCAT53(uStack_1145,
                             CONCAT12(uStack_1146,CONCAT11(uStack_1147,uStack_114f._7_1_))) == 0)
                goto code_r0x00415fa8;
code_r0x00415dc2:
                uStack_1170 = 0x4e4f495443410c;
                puStack_11c8 = &UNK_00415e02;
                cVar3 = _ZNK18NetlinkUdevMessage8has_attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_17basic_string_viewIcS3_EE
                                  (&uStack_1130,&uStack_1170,&UNK_001724d8);
                if ((uStack_1170 & 1) != 0) {
                  puStack_11c8 = &UNK_00415e24;
                  _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
                }
                if (cVar3 == '\0') {
                  uStack_1170 = 0x4e4f495443410c;
                  puStack_11c8 = &UNK_00416081;
                  cVar3 = _ZNK18NetlinkUdevMessage8has_attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_17basic_string_viewIcS3_EE
                                    (&uStack_1130,&uStack_1170,&UNK_001597ab);
                  if ((uStack_1170 & 1) != 0) {
                    puStack_11c8 = &UNK_004160a3;
                    _ZdaPvSt11align_val_t(pbStack_1160,uStack_1170 & 0xfffffffffffffffe);
                  }
                  if (cVar3 != '\0') {
                    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)
                       ) {
                      puStack_11c8 = &UNK_00416279;
                      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                      pbVar18 = pbStack_1198;
                      if (cVar3 != '\0') {
                        iVar4 = *(int *)pbStack_1198;
                        puStack_11c8 = &UNK_004162b4;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (&uStack_1170,&UNK_0016974f,0x2d7,1,0,0xffffffff);
                        puStack_11c8 = &UNK_004162bc;
                        uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1170);
                        puStack_11c8 = &UNK_004162d0;
                        uVar8 = func_0x0032eb30(uVar8,&UNK_00169779,0x1d);
                        puStack_11c8 = &UNK_004162df;
                        func_0x0032e5a0(uVar8,&bStack_1150);
                        puStack_11c8 = &UNK_004162e7;
                        _ZN7android4base10LogMessageD2Ev(&uStack_1170);
                        *(int *)pbVar18 = iVar4;
                      }
                    }
                    uStack_1190 = uRam0000000000a008a0;
                    puStack_11c8 = &UNK_004160d6;
                    _ZNSt3__15mutex4lockEv();
                    lVar12 = lRam0000000000a008a8;
                    lVar10 = *(long *)(lRam0000000000a008a8 + 8);
                    if (lVar10 != lRam0000000000a008a8) {
                      if ((bStack_1150 & 1) == 0) {
                        uVar13 = (ulong)(bStack_1150 >> 1);
                        plVar7 = &uStack_114f;
                      }
                      else {
                        uVar13 = CONCAT53(uStack_1145,
                                          CONCAT12(uStack_1146,
                                                   CONCAT11(uStack_1147,uStack_114f._7_1_)));
                        plVar7 = plStack_1140;
                      }
                      do {
                        pbVar18 = *(byte **)(lVar10 + 0x10);
                        bVar1 = *pbVar18;
                        if ((bVar1 & 1) == 0) {
                          uVar21 = (ulong)(bVar1 >> 1);
                        }
                        else {
                          uVar21 = *(ulong *)(pbVar18 + 8);
                        }
                        if (uVar21 == uVar13) {
                          if ((bVar1 & 1) == 0) {
                            pbVar9 = pbVar18 + 1;
                          }
                          else {
                            pbVar9 = *(byte **)(pbVar18 + 0x10);
                          }
                          puStack_11c8 = &UNK_0041612f;
                          iVar4 = func_0x0099bf90(pbVar9,plVar7,uVar13);
                          if (iVar4 == 0) {
                            puStack_11c8 = &UNK_0041617b;
                            _Z8usb_kickP10usb_handle(pbVar18);
                            break;
                          }
                        }
                        lVar10 = *(long *)(lVar10 + 8);
                      } while (lVar10 != lVar12);
                    }
                    puStack_11c8 = &UNK_00416187;
                    _ZNSt3__115recursive_mutex6unlockEv(uStack_1190);
                    iVar4 = (int)uStack_11a0;
                  }
                }
                else {
                  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2))
                  {
                    puStack_11c8 = &UNK_004161ed;
                    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                    pbVar18 = pbStack_1198;
                    if (cVar3 != '\0') {
                      uStack_1190 = CONCAT44(uStack_1190._4_4_,*(int *)pbStack_1198);
                      puStack_11c8 = &UNK_0041622d;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (&uStack_1170,&UNK_0016974f,0x2d1,1,0,0xffffffff);
                      puStack_11c8 = &UNK_00416235;
                      uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1170);
                      puStack_11c8 = &UNK_00416249;
                      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fd6c,0x1b);
                      puStack_11c8 = &UNK_00416258;
                      func_0x0032e5a0(uVar8,&bStack_1150);
                      puStack_11c8 = &UNK_00416260;
                      _ZN7android4base10LogMessageD2Ev(&uStack_1170);
                      *(int *)pbVar18 = (int)uStack_1190;
                    }
                  }
                  puStack_11c8 = &UNK_00415e49;
                  func_0x00417300(&bStack_1150);
                }
              }
              if ((bStack_1150 & 1) != 0) {
                puStack_11c8 = &UNK_004161c3;
                _ZdaPvSt11align_val_t
                          (plStack_1140,
                           CONCAT71((undefined7)uStack_114f,bStack_1150) & 0xfffffffffffffffe);
              }
            }
            else if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 4)) {
              puStack_11c8 = &UNK_00415e95;
              cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
              if (cVar3 != '\0') {
                uStack_1190 = CONCAT44(uStack_1190._4_4_,*(int *)pbStack_1198);
                puStack_11c8 = &UNK_00415ed6;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_1188,&UNK_0016974f,0x2c6,3,0,0xffffffff);
                puStack_11c8 = &UNK_00415ede;
                uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_1188);
                puStack_11c8 = &UNK_00415ef2;
                uVar8 = func_0x0032eb30(uVar8,&UNK_00180490,0x1d);
                puVar23 = &UNK_001661ba;
                goto code_r0x00415f06;
              }
            }
          }
          puStack_11c8 = &UNK_004161dc;
          func_0x003e26d0(&uStack_1130);
        }
      } while (*(int *)pbStack_1198 == 4);
code_r0x004162ef:
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 5)) {
        puStack_11c8 = &UNK_0041630f;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 != '\0') {
          uStack_1190 = CONCAT44(uStack_1190._4_4_,*(int *)unaff_R14);
          pbVar9 = (byte *)&uStack_1130;
          puStack_11c8 = &UNK_004165c3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar9,&UNK_0016974f,699,4,0,0xffffffff);
          puStack_11c8 = &UNK_004165cb;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar9);
          puStack_11c8 = &UNK_004165df;
          uVar8 = func_0x0032eb30(uVar8,&UNK_001740c2,0x20);
          puStack_11c8 = &UNK_004165ea;
          uVar16 = func_0x0099bd20(*(int *)unaff_R14);
          puStack_11c8 = &UNK_004165f5;
          uVar17 = func_0x0099bcf0(uVar16);
          puStack_11c8 = &UNK_0041660a;
          func_0x0032eb30(uVar8,uVar16,uVar17);
          puStack_11c8 = &UNK_00416612;
          _ZN7android4base10LogMessageD2Ev(pbVar9);
          *(int *)unaff_R14 = (int)uStack_1190;
        }
      }
      pbVar18 = (byte *)&adb_trace_mask;
      if ((((byte)adb_trace_mask & 0x20) != 0) &&
         (pbVar18 = (byte *)&adb_trace_mask, (int)adb_trace_severity._20_4_ < 2)) {
        puStack_11c8 = &UNK_00416338;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar3 != '\0') {
          iVar4 = *(int *)unaff_R14;
          pbVar9 = (byte *)&uStack_1130;
          puStack_11c8 = &UNK_0041636f;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar9,&UNK_0016974f,0x2e2,1,0,0xffffffff);
          puStack_11c8 = &UNK_00416377;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar9);
          puStack_11c8 = &UNK_0041638b;
          func_0x0032eb30(uVar8,&UNK_0017d845,0x1e);
          puStack_11c8 = &UNK_00416393;
          _ZN7android4base10LogMessageD2Ev(pbVar9);
          *(int *)unaff_R14 = iVar4;
          pbVar18 = unaff_R14;
        }
      }
    }
    iVar4 = *(int *)unaff_R14;
    puStack_11c8 = &UNK_00416473;
    func_0x0099bd10(uStack_11a0 & 0xffffffff);
  }
  *(int *)unaff_R14 = iVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
    return;
  }
code_r0x0041677c:
  puStack_11c8 = &UNK_00416781;
  func_0x0099bd00();
  lStack_11e8 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_11e0 = pbVar9;
  pbStack_11d8 = unaff_R14;
  pbStack_11d0 = pbVar18;
  puStack_11c8 = (undefined *)apuStack_d0;
  cVar3 = _Z17is_libusb_enabledv();
  if (cVar3 != '\0') {
    if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
       (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
      puVar19 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar19;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_11f0,&UNK_0016974f,0x2f2,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_11f0);
      func_0x0032eb30(uVar8,&UNK_0017f017,0x14);
      _ZN7android4base10LogMessageD2Ev(auStack_11f0);
      *puVar19 = uVar2;
    }
    _Z17close_usb_devicesb(0);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_11e8) {
    func_0x0099bd00();
    return;
  }
  return;
}


