// Function: _Z8usb_readP10usb_handlePvi
// Address: 004146a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z8usb_readP10usb_handlePvi(byte *****param_1,byte ****param_2,uint param_3)

{
  byte *****pppppbVar1;
  undefined4 uVar2;
  byte ***pppbVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  byte ****ppppbVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  byte *****pppppbVar15;
  byte *****pppppbVar16;
  long lVar17;
  byte *****pppppbVar18;
  long in_FS_OFFSET;
  byte bStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  byte ****ppppbStack_120;
  long lStack_118;
  byte ****ppppbStack_110;
  uint *puStack_108;
  byte ****ppppbStack_100;
  byte ****ppppbStack_f8;
  byte ****ppppbStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_d4;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  ulong uStack_b0;
  ulong uStack_a8;
  uint *puStack_a0;
  byte ****ppppbStack_98;
  byte ***pppbStack_90;
  byte ****ppppbStack_88;
  undefined *apuStack_80 [2];
  byte ***pppbStack_70;
  uint uStack_68;
  uint uStack_64;
  byte ***apppbStack_60 [2];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  byte ****ppppbStack_40;
  long lStack_38;
  
  puVar10 = (uint *)(ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_64 = param_3;
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    apuStack_80[0] = &UNK_00414f66;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar4 != '\0') {
      apuStack_80[0] = &UNK_00414f73;
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar7;
      apuStack_80[0] = &UNK_00414f9f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_60,&UNK_0016974f,0x1cf,0,0,0xffffffff);
      apuStack_80[0] = &UNK_00414fa7;
      uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
      apuStack_80[0] = &UNK_00414fbb;
      func_0x0032eb30(uVar12,&UNK_0017f008,0xe);
      apuStack_80[0] = &UNK_00414fc6;
      _ZN7android4base10LogMessageD2Ev(apppbStack_60);
      *puVar7 = uVar2;
      puVar10 = (uint *)(ulong)uStack_64;
    }
  }
code_r0x0041470b:
  pppbStack_70 = (byte ***)param_2;
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    apuStack_80[0] = &UNK_00414b77;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar4 != '\0') {
      apuStack_80[0] = &UNK_00414b84;
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar7;
      apuStack_80[0] = &UNK_00414bad;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppbStack_40,&UNK_0016974f,0x1d4,0,0,0xffffffff);
      apuStack_80[0] = &UNK_00414bb5;
      uVar12 = _ZN7android4base10LogMessage6streamEv(&ppppbStack_40);
      apuStack_80[0] = &UNK_00414be2;
      _ZN7android4base12StringPrintfEPKcz(apppbStack_60,&UNK_0018b001,uStack_64);
      apuStack_80[0] = &UNK_00414bed;
      func_0x0032e5a0(uVar12);
      if (((byte)apppbStack_60[0] & 1) != 0) {
        apuStack_80[0] = &UNK_00414c04;
        _ZdaPvSt11align_val_t(uStack_50);
      }
      apuStack_80[0] = &UNK_00414c0d;
      _ZN7android4base10LogMessageD2Ev(&ppppbStack_40);
      *puVar7 = uVar2;
      puVar10 = (uint *)(ulong)uStack_64;
      param_2 = (byte ****)pppbStack_70;
    }
  }
  apuStack_80[0] = &UNK_00414738;
  _ZNSt3__15mutex4lockEv(param_1 + 0x1b);
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    apuStack_80[0] = &UNK_00414c31;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar4 != '\0') {
      apuStack_80[0] = &UNK_00414c3e;
      puVar11 = (uint *)func_0x0099bce0();
      uStack_68 = *puVar11;
      apuStack_80[0] = &UNK_00414c69;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_60,&UNK_0016974f,0x161,0,0,0xffffffff);
      apuStack_80[0] = &UNK_00414c71;
      uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
      apuStack_80[0] = &UNK_00414c85;
      func_0x0032eb30(uVar12,&UNK_0016b08c,0x13);
      apuStack_80[0] = &UNK_00414c8d;
      _ZN7android4base10LogMessageD2Ev(apppbStack_60);
      *puVar11 = uStack_68;
      param_2 = (byte ****)pppbStack_70;
    }
  }
  param_1[10] = (byte ****)0x0;
  param_1[0xb] = (byte ****)0x0;
  param_1[8] = (byte ****)0x0;
  param_1[9] = (byte ****)0x0;
  param_1[6] = (byte ****)0x0;
  param_1[7] = (byte ****)0x0;
  param_1[0xc] = (byte ****)0x0;
  *(undefined1 *)(param_1 + 6) = 3;
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_1 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  param_1[8] = param_2;
  *(int *)(param_1 + 9) = (int)puVar10;
  if (*(char *)((long)param_1 + 0xa2) == '\0') {
    do {
      apuStack_80[0] = &UNK_004147c3;
      iVar5 = func_0x0099c020(*(undefined4 *)(param_1 + 3),0x8038550a,param_1 + 6);
      if (iVar5 != -1) {
        *(undefined1 *)(param_1 + 0x14) = 1;
        goto code_r0x00414801;
      }
      apuStack_80[0] = &UNK_004147cd;
      piVar8 = (int *)func_0x0099bce0();
    } while (*piVar8 == 4);
    param_2 = (byte ****)0xffffffff;
  }
  else {
    apuStack_80[0] = &UNK_00414795;
    puVar7 = (undefined4 *)func_0x0099bce0();
    *puVar7 = 0x16;
    param_2 = (byte ****)0xffffffff;
  }
  goto code_r0x00414af0;
  while (iVar5 == 4) {
code_r0x00414801:
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
      apuStack_80[0] = &UNK_004148f9;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
      if (cVar4 != '\0') {
        apuStack_80[0] = &UNK_00414906;
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar7;
        apuStack_80[0] = &UNK_0041492f;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (apppbStack_60,&UNK_0016974f,0x176,0,0,0xffffffff);
        apuStack_80[0] = &UNK_00414937;
        uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
        apuStack_80[0] = &UNK_0041494b;
        func_0x0032eb30(uVar12,&UNK_0017f02c,0x13);
        apuStack_80[0] = &UNK_00414953;
        _ZN7android4base10LogMessageD2Ev(apppbStack_60);
        *puVar7 = uVar2;
      }
    }
    apuStack_80[0] = &UNK_0041481c;
    ppppbVar9 = (byte ****)func_0x0099c320();
    param_1[0x21] = ppppbVar9;
    uVar2 = *(undefined4 *)(param_1 + 3);
    apuStack_80[0] = &UNK_00414836;
    _ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x1b);
    ppppbStack_40 = (byte ****)0x0;
    apuStack_80[0] = &UNK_00414850;
    iVar6 = func_0x0099c020(uVar2,0x4008550c,&ppppbStack_40);
    apuStack_80[0] = &UNK_00414857;
    piVar8 = (int *)func_0x0099bce0();
    iVar5 = *piVar8;
    apuStack_80[0] = &UNK_00414865;
    _ZNSt3__15mutex4lockEv();
    param_1[0x21] = (byte ****)0x0;
    if (*(char *)((long)param_1 + 0xa2) == '\x01') {
      *piVar8 = 0x16;
      param_2 = (byte ****)0xffffffff;
      puVar10 = (uint *)(ulong)uStack_64;
      goto code_r0x00414af0;
    }
    if (-1 < iVar6) {
      if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
        apuStack_80[0] = &UNK_00414964;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
        if (cVar4 != '\0') {
          iVar5 = *piVar8;
          apuStack_80[0] = &UNK_00414992;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_48,&UNK_0016974f,0x18e,0,0,0xffffffff);
          apuStack_80[0] = &UNK_0041499a;
          uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_48);
          apuStack_80[0] = &UNK_004149bd;
          _ZN7android4base12StringPrintfEPKcz(apppbStack_60,&UNK_0016b0a0);
          apuStack_80[0] = &UNK_004149c8;
          func_0x0032e5a0(uVar12);
          if (((byte)apppbStack_60[0] & 1) != 0) {
            apuStack_80[0] = &UNK_004149df;
            _ZdaPvSt11align_val_t(uStack_50);
          }
          apuStack_80[0] = &UNK_004149e8;
          _ZN7android4base10LogMessageD2Ev();
          *piVar8 = iVar5;
        }
      }
      if ((byte *****)ppppbStack_40 == param_1 + 6) {
        if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
          apuStack_80[0] = &UNK_00414dd5;
          cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
          if (cVar4 != '\0') {
            iVar5 = *piVar8;
            apuStack_80[0] = &UNK_00414e03;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (apppbStack_60,&UNK_0016974f,0x192,0,0,0xffffffff);
            apuStack_80[0] = &UNK_00414e0b;
            uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
            apuStack_80[0] = &UNK_00414e1f;
            func_0x0032eb30(uVar12,&UNK_00183691,0x1a);
            apuStack_80[0] = &UNK_00414e27;
            _ZN7android4base10LogMessageD2Ev(apppbStack_60);
            *piVar8 = iVar5;
          }
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
        puVar10 = (uint *)(ulong)uStack_64;
        if (*(int *)((long)param_1 + 0x34) == 0) {
          param_2 = (byte ****)(ulong)*(uint *)((long)param_1 + 0x4c);
        }
        else {
          *piVar8 = -*(int *)((long)param_1 + 0x34);
          param_2 = (byte ****)0xffffffff;
        }
        goto code_r0x00414af0;
      }
      if ((byte *****)ppppbStack_40 == param_1 + 0xd) {
        if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
          apuStack_80[0] = &UNK_00414a04;
          cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
          if (cVar4 != '\0') {
            iVar5 = *piVar8;
            apuStack_80[0] = &UNK_00414a32;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (apppbStack_60,&UNK_0016974f,0x19b,0,0,0xffffffff);
            apuStack_80[0] = &UNK_00414a3a;
            uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
            apuStack_80[0] = &UNK_00414a4e;
            func_0x0032eb30(uVar12,&UNK_001868ab,0x1b);
            apuStack_80[0] = &UNK_00414a56;
            _ZN7android4base10LogMessageD2Ev(apppbStack_60);
            *piVar8 = iVar5;
          }
        }
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        apuStack_80[0] = &UNK_004148eb;
        _ZNSt3__118condition_variable10notify_allEv();
      }
      goto code_r0x00414801;
    }
  }
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_80[0] = &UNK_00414e42;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      apuStack_80[0] = &UNK_00414e6d;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_60,&UNK_0016974f,0x18a,1,0,0xffffffff);
      apuStack_80[0] = &UNK_00414e76;
      uVar12 = _ZN7android4base10LogMessage6streamEv(apppbStack_60);
      apuStack_80[0] = &UNK_00414e8a;
      func_0x0032eb30(uVar12,&UNK_00161528,0x14);
      apuStack_80[0] = &UNK_00414e93;
      _ZN7android4base10LogMessageD2Ev(apppbStack_60);
    }
  }
  *piVar8 = iVar5;
  param_2 = (byte ****)0xffffffff;
  puVar10 = (uint *)(ulong)uStack_64;
code_r0x00414af0:
  pppppbVar15 = param_1 + 0x1b;
  apuStack_80[0] = &UNK_00414afc;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    pppppbVar15 = (byte *****)0x0;
    apuStack_80[0] = &UNK_00414cab;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar4 != '\0') {
      apuStack_80[0] = &UNK_00414cb8;
      puVar10 = (uint *)func_0x0099bce0();
      uStack_68 = *puVar10;
      apuStack_80[0] = &UNK_00414ce3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppbStack_40,&UNK_0016974f,0x1d7,0,0,0xffffffff);
      apuStack_80[0] = &UNK_00414ceb;
      uVar12 = _ZN7android4base10LogMessage6streamEv(&ppppbStack_40);
      apuStack_80[0] = &UNK_00414d17;
      _ZN7android4base12StringPrintfEPKcz(apppbStack_60,&UNK_00178c3c,uStack_64);
      apuStack_80[0] = &UNK_00414d22;
      func_0x0032e5a0(uVar12);
      if (((byte)apppbStack_60[0] & 1) != 0) {
        apuStack_80[0] = &UNK_00414d39;
        _ZdaPvSt11align_val_t(uStack_50);
      }
      pppppbVar15 = &ppppbStack_40;
      apuStack_80[0] = &UNK_00414d42;
      _ZN7android4base10LogMessageD2Ev();
      *puVar10 = uStack_68;
      puVar10 = (uint *)(ulong)uStack_64;
    }
  }
  pppppbVar18 = param_1 + 6;
  if ((int)param_2 < 1) {
    apuStack_80[0] = &UNK_00414b20;
    puVar10 = (uint *)func_0x0099bce0();
    pppbVar3 = pppbStack_70;
    if ((*puVar10 != 0x6e) || (*(int *)(param_1 + 3) == -1)) {
      uVar14 = 0xffffffff;
      if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        pppppbVar15 = (byte *****)0x1;
        apuStack_80[0] = &UNK_00414fde;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          pppbStack_70 = (byte ***)CONCAT44(pppbStack_70._4_4_,*puVar10);
          apuStack_80[0] = &UNK_00415013;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&ppppbStack_40,&UNK_0016974f,0x1de,1,0,0xffffffff);
          apuStack_80[0] = &UNK_0041501b;
          param_1 = (byte *****)_ZN7android4base10LogMessage6streamEv(&ppppbStack_40);
          uVar13 = *puVar10;
          pppppbVar18 = (byte *****)(ulong)uVar13;
          apuStack_80[0] = &UNK_0041502a;
          uVar12 = func_0x0099bd20(pppppbVar18);
          apuStack_80[0] = &UNK_00415045;
          _ZN7android4base12StringPrintfEPKcz(apppbStack_60,&UNK_00162fd0,param_2,uVar13,uVar12);
          apuStack_80[0] = &UNK_00415051;
          func_0x0032e5a0(param_1,apppbStack_60);
          if (((byte)apppbStack_60[0] & 1) != 0) {
            apuStack_80[0] = &UNK_00415068;
            _ZdaPvSt11align_val_t
                      (uStack_50,
                       CONCAT71(apppbStack_60[0]._1_7_,(byte)apppbStack_60[0]) & 0xfffffffffffffffe)
            ;
          }
          pppppbVar15 = &ppppbStack_40;
          apuStack_80[0] = &UNK_00415071;
          _ZN7android4base10LogMessageD2Ev();
          *puVar10 = (uint)pppbStack_70;
        }
      }
      goto code_r0x00414f39;
    }
    param_2 = (byte ****)pppbVar3;
    if ((adb_trace_mask & 0x20) == 0) {
      puVar10 = (uint *)(ulong)uStack_64;
      uVar13 = uStack_64;
    }
    else {
      if ((int)adb_trace_severity._20_4_ < 2) {
        pppppbVar15 = (byte *****)0x1;
        apuStack_80[0] = &UNK_00414d67;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          uStack_68 = *puVar10;
          pppppbVar15 = (byte *****)apppbStack_60;
          apuStack_80[0] = &UNK_00414d9c;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pppppbVar15,&UNK_0016974f,0x1db,1,0,0xffffffff);
          apuStack_80[0] = &UNK_00414da4;
          uVar12 = _ZN7android4base10LogMessage6streamEv(pppppbVar15);
          apuStack_80[0] = &UNK_00414db8;
          func_0x0032eb30(uVar12,&UNK_00167cf9,0xb);
          apuStack_80[0] = &UNK_00414dc0;
          _ZN7android4base10LogMessageD2Ev();
          *puVar10 = uStack_68;
        }
      }
      puVar10 = (uint *)(ulong)uStack_64;
      uVar13 = uStack_64;
    }
  }
  else {
    uVar13 = (int)puVar10 - (int)param_2;
    param_2 = (byte ****)((long)pppbStack_70 + (long)param_2);
  }
  uVar13 = (int)puVar10 - uVar13;
  uVar14 = (ulong)uVar13;
  if (uVar13 != 0) {
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
      pppppbVar15 = (byte *****)0x0;
      apuStack_80[0] = &UNK_00414ec2;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
      if (cVar4 != '\0') {
        apuStack_80[0] = &UNK_00414ecb;
        param_2 = (byte ****)func_0x0099bce0();
        uVar13 = *(uint *)param_2;
        puVar10 = (uint *)(ulong)uVar13;
        param_1 = (byte *****)apppbStack_60;
        apuStack_80[0] = &UNK_00414ef4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (param_1,&UNK_0016974f,0x1e7,0,0,0xffffffff);
        apuStack_80[0] = &UNK_00414efc;
        uVar12 = _ZN7android4base10LogMessage6streamEv(param_1);
        apuStack_80[0] = &UNK_00414f10;
        func_0x0032eb30(uVar12,&UNK_00183682,0xe);
        apuStack_80[0] = &UNK_00414f18;
        pppppbVar15 = param_1;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)param_2 = uVar13;
      }
    }
code_r0x00414f39:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar14;
    }
    apuStack_80[0] = &UNK_00415082;
    pppbStack_90 = (byte ***)func_0x0099bd00();
    ppppbStack_98 = (byte ****)&UNK_004150a8;
    ppppbStack_88 = (byte ****)uVar14;
    apuStack_80[0] = &stack0xfffffffffffffff8;
    func_0x0099c020(*(undefined4 *)(pppppbVar15 + 3),0x5514);
    uStack_a8 = (ulong)ppppbStack_88;
    uStack_b0 = *(ulong *)(in_FS_OFFSET + 0x28);
    pppppbVar1 = pppppbVar15 + 0x1b;
    puStack_e8 = &UNK_004150f0;
    puStack_a0 = puVar10;
    ppppbStack_98 = (byte ****)pppppbVar18;
    pppbStack_90 = (byte ***)param_2;
    ppppbStack_88 = (byte ****)param_1;
    _ZNSt3__15mutex4lockEv(pppppbVar1);
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_e8 = &UNK_004151d1;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') {
        puStack_e8 = &UNK_004151de;
        param_1 = (byte *****)func_0x0099bce0();
        uStack_d4 = *(undefined4 *)param_1;
        puStack_e8 = &UNK_0041520c;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_b8,&UNK_0016974f,0x1f2,1,0,0xffffffff);
        puStack_e8 = &UNK_00415214;
        puVar10 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_b8);
        pppppbVar18 = (byte *****)&bStack_d0;
        puStack_e8 = &UNK_00415233;
        _ZN7android4base12StringPrintfEPKcz
                  (pppppbVar18,&UNK_0016150f,pppppbVar15,*(undefined4 *)(pppppbVar15 + 3));
        puStack_e8 = &UNK_0041523e;
        func_0x0032e5a0(puVar10,pppppbVar18);
        if ((bStack_d0 & 1) != 0) {
          puStack_e8 = &UNK_00415255;
          _ZdaPvSt11align_val_t(uStack_c0,CONCAT71(uStack_cf,bStack_d0) & 0xfffffffffffffffe);
        }
        puStack_e8 = &UNK_0041525e;
        _ZN7android4base10LogMessageD2Ev(auStack_b8);
        *(undefined4 *)param_1 = uStack_d4;
      }
    }
    if (*(char *)((long)pppppbVar15 + 0xa2) == '\0') {
      *(undefined1 *)((long)pppppbVar15 + 0xa2) = 1;
      if (*(int *)((long)pppppbVar15 + 0x2c) == 0) {
        puStack_e8 = &UNK_0041519b;
        _Z24unregister_usb_transportP10usb_handle(pppppbVar15);
      }
      else {
        if (pppppbVar15[0x21] != (byte ****)0x0) {
          puStack_e8 = &UNK_00415140;
          func_0x0099c400(pppppbVar15[0x21],0xe);
        }
        puStack_e8 = &UNK_00415154;
        func_0x0099c020(*(undefined4 *)(pppppbVar15 + 3),0x550b,pppppbVar15 + 6);
        puStack_e8 = &UNK_00415168;
        func_0x0099c020(*(undefined4 *)(pppppbVar15 + 3),0x550b,pppppbVar15 + 0xd);
        *(undefined4 *)((long)pppppbVar15 + 0x34) = 0xffffffed;
        *(undefined4 *)((long)pppppbVar15 + 0x6c) = 0xffffffed;
        *(undefined2 *)(pppppbVar15 + 0x14) = 0;
        pppppbVar15 = pppppbVar15 + 0x15;
        puStack_e8 = &UNK_00415191;
        _ZNSt3__118condition_variable10notify_allEv(pppppbVar15);
      }
    }
    puStack_e8 = &UNK_004151a3;
    pppppbVar16 = pppppbVar1;
    _ZNSt3__115recursive_mutex6unlockEv();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_b0) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
    puStack_e8 = &UNK_0041526e;
    func_0x0099bd00();
    lVar17 = lRam0000000000a008a0;
    lStack_118 = *(long *)(in_FS_OFFSET + 0x28);
    ppppbStack_120 = (byte ****)pppppbVar16;
    ppppbStack_110 = (byte ****)pppppbVar1;
    puStack_108 = puVar10;
    ppppbStack_100 = (byte ****)pppppbVar18;
    ppppbStack_f8 = (byte ****)pppppbVar15;
    ppppbStack_f0 = (byte ****)param_1;
    puStack_e8 = (undefined *)apuStack_80;
    _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
    func_0x003f0c30(uRam0000000000a008a8,&ppppbStack_120);
    if ((((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
       (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_128,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_128);
      _ZN7android4base12StringPrintfEPKcz
                (&bStack_140,&UNK_0015c986,ppppbStack_120,*(undefined4 *)(ppppbStack_120 + 3));
      func_0x0032e5a0(uVar12,&bStack_140);
      if ((bStack_140 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_130,CONCAT71(uStack_13f,bStack_140) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_128);
      *puVar7 = uVar2;
    }
    ppppbVar9 = ppppbStack_120;
    if ((byte *****)ppppbStack_120 != (byte *****)0x0) {
      if (*(int *)(ppppbStack_120 + 3) != -1) {
        func_0x0099bd10();
      }
      _ZNSt3__118condition_variableD2Ev(ppppbVar9 + 0x15);
      if (((ulong)*ppppbVar9 & 1) != 0) {
        _ZdaPvSt11align_val_t(ppppbVar9[2],(ulong)*ppppbVar9 & 0xfffffffffffffffe);
      }
      _ZdaPvSt11align_val_t(ppppbVar9,0x110);
    }
    _ZNSt3__115recursive_mutex6unlockEv();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_118) {
      return 0;
    }
    func_0x0099bd00();
    return *(ulong *)(lVar17 + 0x20);
  }
  goto code_r0x0041470b;
}


