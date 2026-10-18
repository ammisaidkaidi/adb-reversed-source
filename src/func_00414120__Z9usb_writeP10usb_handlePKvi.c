// Function: _Z9usb_writeP10usb_handlePKvi
// Address: 00414120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00414170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00414219: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00414175) */
/* WARNING: Removing unreachable block (ram,0x004141ae) */
/* WARNING: Removing unreachable block (ram,0x004141c2) */
/* WARNING: Removing unreachable block (ram,0x0041421e) */
/* WARNING: Removing unreachable block (ram,0x00414224) */
/* WARNING: Removing unreachable block (ram,0x00414227) */
/* WARNING: Removing unreachable block (ram,0x004141f0) */
/* WARNING: Removing unreachable block (ram,0x004141f6) */
/* WARNING: Removing unreachable block (ram,0x004141f9) */
/* WARNING: Removing unreachable block (ram,0x00414364) */
/* WARNING: Removing unreachable block (ram,0x0041417a) */
/* WARNING: Removing unreachable block (ram,0x0041432a) */
/* WARNING: Removing unreachable block (ram,0x00414330) */
/* WARNING: Removing unreachable block (ram,0x00414406) */
/* WARNING: Removing unreachable block (ram,0x00414417) */
/* WARNING: Removing unreachable block (ram,0x0041433c) */
/* WARNING: Removing unreachable block (ram,0x00414190) */
/* WARNING: Removing unreachable block (ram,0x00414385) */
/* WARNING: Removing unreachable block (ram,0x00414203) */
/* WARNING: Removing unreachable block (ram,0x0041424e) */
/* WARNING: Removing unreachable block (ram,0x00414387) */
/* WARNING: Removing unreachable block (ram,0x0041425e) */
/* WARNING: Removing unreachable block (ram,0x00414275) */
/* WARNING: Removing unreachable block (ram,0x0041428b) */
/* WARNING: Removing unreachable block (ram,0x004142ff) */
/* WARNING: Removing unreachable block (ram,0x00414310) */
/* WARNING: Removing unreachable block (ram,0x0041433f) */
/* WARNING: Removing unreachable block (ram,0x00414471) */
/* WARNING: Removing unreachable block (ram,0x00414352) */

ulong _Z9usb_writeP10usb_handlePKvi(byte *****param_1,byte *****param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  byte ****ppppbVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  byte *****pppppbVar12;
  ulong extraout_RDX;
  uint uVar13;
  ulong uVar14;
  byte *****pppppbVar15;
  byte *****pppppbVar16;
  undefined1 *puVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  undefined4 *unaff_R14;
  byte *****pppppbVar20;
  long in_FS_OFFSET;
  byte bStack_218;
  undefined7 uStack_217;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  byte ****ppppbStack_1f8;
  long lStack_1f0;
  byte ****ppppbStack_1e8;
  uint *puStack_1e0;
  byte ****ppppbStack_1d8;
  byte ****ppppbStack_1d0;
  byte ****ppppbStack_1c8;
  undefined *puStack_1c0;
  undefined4 uStack_1ac;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  ulong uStack_188;
  ulong uStack_180;
  uint *puStack_178;
  byte ****ppppbStack_170;
  byte ****ppppbStack_168;
  byte ****ppppbStack_160;
  undefined *apuStack_158 [2];
  byte ****ppppbStack_148;
  uint uStack_140;
  uint uStack_13c;
  byte ***apppbStack_138 [2];
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  byte ****ppppbStack_118;
  long lStack_110;
  ulong uStack_108;
  byte ***pppbStack_100;
  byte ****ppppbStack_f8;
  byte ****ppppbStack_f0;
  byte ****ppppbStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d4;
  byte ***pppbStack_d0;
  byte ****ppppbStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  byte ****ppppbStack_b0;
  undefined1 *puStack_a8;
  byte ****ppppbStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined *puStack_80;
  undefined4 uStack_68;
  byte ****ppppbStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  pppppbVar16 = (byte *****)(ulong)param_3;
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar17 = adb_trace_severity;
  ppppbStack_60 = (byte ****)param_2;
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    puStack_80 = &UNK_00414398;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar2 != '\0') {
      puStack_80 = &UNK_004143a5;
      unaff_R14 = (undefined4 *)func_0x0099bce0();
      uStack_68 = *unaff_R14;
      puStack_80 = &UNK_004143d0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_58,&UNK_0016974f,0x1b1,0,0,0xffffffff);
      puStack_80 = &UNK_004143d8;
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_58);
      puStack_80 = &UNK_004143ec;
      func_0x0032eb30(uVar11,&UNK_0015c976,0xf);
      puStack_80 = &UNK_004143f4;
      _ZN7android4base10LogMessageD2Ev(auStack_58);
      *unaff_R14 = uStack_68;
    }
  }
  pppppbVar19 = (byte *****)ppppbStack_60;
  puStack_80 = &UNK_00414175;
  puStack_90 = &adb_trace_mask;
  puStack_a8 = adb_trace_severity;
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  pppppbVar12 = param_1 + 0x1b;
  uStack_c0 = 1;
  puStack_e0 = &UNK_004144c3;
  pppppbVar20 = (byte *****)ppppbStack_60;
  ppppbStack_c8 = (byte ****)pppppbVar12;
  ppppbStack_b0 = (byte ****)pppppbVar16;
  ppppbStack_a0 = (byte ****)param_1;
  puStack_98 = unaff_R14;
  puStack_88 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv();
  pppppbVar18 = param_1;
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    pppppbVar12 = (byte *****)0x0;
    pppppbVar20 = (byte *****)0x0;
    puStack_e0 = &UNK_00414631;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 != '\0') {
      puStack_e0 = &UNK_0041463e;
      puVar17 = (undefined1 *)func_0x0099bce0();
      uStack_d4 = *(undefined4 *)puVar17;
      pppppbVar18 = (byte *****)&pppbStack_d0;
      puStack_e0 = &UNK_00414669;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppbVar18,&UNK_0016974f,0x13a,0,0,0xffffffff);
      puStack_e0 = &UNK_00414671;
      uVar11 = _ZN7android4base10LogMessage6streamEv(pppppbVar18);
      pppppbVar20 = (byte *****)&UNK_0018047b;
      puStack_e0 = &UNK_00414685;
      func_0x0032eb30(uVar11,&UNK_0018047b,0x14);
      puStack_e0 = &UNK_0041468d;
      pppppbVar12 = pppppbVar18;
      _ZN7android4base10LogMessageD2Ev();
      *(undefined4 *)puVar17 = uStack_d4;
    }
  }
  param_1[0xd] = (byte ****)0x0;
  param_1[0xe] = (byte ****)0x0;
  param_1[0xf] = (byte ****)0x0;
  param_1[0x10] = (byte ****)0x0;
  param_1[0x11] = (byte ****)0x0;
  param_1[0x12] = (byte ****)0x0;
  param_1[0x13] = (byte ****)0x0;
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_1 + 0x1d);
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  param_1[0xf] = (byte ****)pppppbVar19;
  *(uint *)(param_1 + 0x10) = param_3;
  if (*(char *)((long)param_1 + 0xa2) == '\0') {
    pppppbVar16 = param_1 + 0xd;
    do {
      pppppbVar12 = (byte *****)(ulong)*(uint *)(param_1 + 3);
      pppppbVar20 = (byte *****)0x8038550a;
      puStack_e0 = &UNK_00414552;
      iVar3 = func_0x0099c020(pppppbVar12,0x8038550a,pppppbVar16);
      if (iVar3 != -1) {
        *(undefined1 *)((long)param_1 + 0xa1) = 1;
        pppppbVar16 = param_1 + 0x15;
        pppppbVar18 = (byte *****)0x12a05f200;
        pppppbVar19 = &ppppbStack_c8;
        puVar17 = (undefined1 *)&pppbStack_d0;
        goto code_r0x00414590;
      }
      puStack_e0 = &UNK_0041455c;
      piVar7 = (int *)func_0x0099bce0();
    } while (*piVar7 == 4);
  }
  else {
    puStack_e0 = &UNK_00414528;
    puVar5 = (undefined4 *)func_0x0099bce0();
    *puVar5 = 0x16;
  }
  goto code_r0x004145e2;
  while (*(char *)((long)param_1 + 0xa1) != '\0') {
code_r0x00414590:
    puStack_e0 = &UNK_00414595;
    lVar6 = _ZNSt3__16chrono12steady_clock3nowEv();
    pppbStack_d0 = (byte ***)(lVar6 + 5000000000);
    puStack_e0 = &UNK_004145aa;
    pppppbVar20 = pppppbVar19;
    pppppbVar12 = pppppbVar16;
    iVar3 = func_0x003d06b0(pppppbVar16,pppppbVar19,puVar17);
    if ((iVar3 == 1) || (*(char *)((long)param_1 + 0xa2) != '\0')) {
      puStack_e0 = &UNK_004145dc;
      puVar5 = (undefined4 *)func_0x0099bce0();
      *puVar5 = 0x6e;
      goto code_r0x004145e2;
    }
  }
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x84);
    pppppbVar16 = (byte *****)0x0;
    pppppbVar15 = (byte *****)ppppbStack_c8;
    goto joined_r0x00414624;
  }
  uVar13 = -*(int *)((long)param_1 + 0x6c);
  pppppbVar16 = (byte *****)(ulong)uVar13;
  puStack_e0 = &UNK_004145d2;
  puVar9 = (uint *)func_0x0099bce0();
  *puVar9 = uVar13;
code_r0x004145e2:
  uVar14 = 0xffffffff;
  pppppbVar15 = (byte *****)ppppbStack_c8;
joined_r0x00414624:
  ppppbStack_c8 = (byte ****)pppppbVar15;
  if ((char)uStack_c0 == '\x01') {
    puStack_e0 = &UNK_004145f6;
    _ZNSt3__115recursive_mutex6unlockEv();
    pppppbVar12 = pppppbVar15;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
    return uVar14;
  }
  puStack_e0 = &UNK_0041469e;
  func_0x0099bd00();
  uStack_13c = (uint)extraout_RDX;
  puVar9 = (uint *)(extraout_RDX & 0xffffffff);
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_108 = uVar14;
  pppbStack_100 = (byte ***)puVar17;
  ppppbStack_f8 = (byte ****)pppppbVar18;
  ppppbStack_f0 = (byte ****)pppppbVar16;
  ppppbStack_e8 = (byte ****)pppppbVar19;
  puStack_e0 = (undefined *)&puStack_88;
  if (((adb_trace_mask & 0x20) != 0) &&
     (puStack_e0 = (undefined *)&puStack_88, (int)adb_trace_severity._20_4_ < 1)) {
    apuStack_158[0] = &UNK_00414f66;
    puStack_e0 = (undefined *)&puStack_88;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar2 != '\0') {
      apuStack_158[0] = &UNK_00414f73;
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      apuStack_158[0] = &UNK_00414f9f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_138,&UNK_0016974f,0x1cf,0,0,0xffffffff);
      apuStack_158[0] = &UNK_00414fa7;
      uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
      apuStack_158[0] = &UNK_00414fbb;
      func_0x0032eb30(uVar11,&UNK_0017f008,0xe);
      apuStack_158[0] = &UNK_00414fc6;
      _ZN7android4base10LogMessageD2Ev(apppbStack_138);
      *puVar5 = uVar1;
      puVar9 = (uint *)(ulong)uStack_13c;
    }
  }
code_r0x0041470b:
  ppppbStack_148 = (byte ****)pppppbVar20;
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    apuStack_158[0] = &UNK_00414b77;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar2 != '\0') {
      apuStack_158[0] = &UNK_00414b84;
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      apuStack_158[0] = &UNK_00414bad;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppbStack_118,&UNK_0016974f,0x1d4,0,0,0xffffffff);
      apuStack_158[0] = &UNK_00414bb5;
      uVar11 = _ZN7android4base10LogMessage6streamEv(&ppppbStack_118);
      apuStack_158[0] = &UNK_00414be2;
      _ZN7android4base12StringPrintfEPKcz(apppbStack_138,&UNK_0018b001,uStack_13c);
      apuStack_158[0] = &UNK_00414bed;
      func_0x0032e5a0(uVar11);
      if (((byte)apppbStack_138[0] & 1) != 0) {
        apuStack_158[0] = &UNK_00414c04;
        _ZdaPvSt11align_val_t(uStack_128);
      }
      apuStack_158[0] = &UNK_00414c0d;
      _ZN7android4base10LogMessageD2Ev(&ppppbStack_118);
      *puVar5 = uVar1;
      puVar9 = (uint *)(ulong)uStack_13c;
      pppppbVar20 = (byte *****)ppppbStack_148;
    }
  }
  apuStack_158[0] = &UNK_00414738;
  _ZNSt3__15mutex4lockEv(pppppbVar12 + 0x1b);
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    apuStack_158[0] = &UNK_00414c31;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar2 != '\0') {
      apuStack_158[0] = &UNK_00414c3e;
      puVar10 = (uint *)func_0x0099bce0();
      uStack_140 = *puVar10;
      apuStack_158[0] = &UNK_00414c69;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_138,&UNK_0016974f,0x161,0,0,0xffffffff);
      apuStack_158[0] = &UNK_00414c71;
      uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
      apuStack_158[0] = &UNK_00414c85;
      func_0x0032eb30(uVar11,&UNK_0016b08c,0x13);
      apuStack_158[0] = &UNK_00414c8d;
      _ZN7android4base10LogMessageD2Ev(apppbStack_138);
      *puVar10 = uStack_140;
      pppppbVar20 = (byte *****)ppppbStack_148;
    }
  }
  pppppbVar12[10] = (byte ****)0x0;
  pppppbVar12[0xb] = (byte ****)0x0;
  pppppbVar12[8] = (byte ****)0x0;
  pppppbVar12[9] = (byte ****)0x0;
  pppppbVar12[6] = (byte ****)0x0;
  pppppbVar12[7] = (byte ****)0x0;
  pppppbVar12[0xc] = (byte ****)0x0;
  *(undefined1 *)(pppppbVar12 + 6) = 3;
  *(undefined1 *)((long)pppppbVar12 + 0x31) = *(undefined1 *)((long)pppppbVar12 + 0x1c);
  *(undefined4 *)((long)pppppbVar12 + 0x34) = 0xffffffff;
  pppppbVar12[8] = (byte ****)pppppbVar20;
  *(int *)(pppppbVar12 + 9) = (int)puVar9;
  if (*(char *)((long)pppppbVar12 + 0xa2) == '\0') {
    do {
      apuStack_158[0] = &UNK_004147c3;
      iVar3 = func_0x0099c020(*(undefined4 *)(pppppbVar12 + 3),0x8038550a,pppppbVar12 + 6);
      if (iVar3 != -1) {
        *(undefined1 *)(pppppbVar12 + 0x14) = 1;
        goto code_r0x00414801;
      }
      apuStack_158[0] = &UNK_004147cd;
      piVar7 = (int *)func_0x0099bce0();
    } while (*piVar7 == 4);
    pppppbVar20 = (byte *****)0xffffffff;
  }
  else {
    apuStack_158[0] = &UNK_00414795;
    puVar5 = (undefined4 *)func_0x0099bce0();
    *puVar5 = 0x16;
    pppppbVar20 = (byte *****)0xffffffff;
  }
  goto code_r0x00414af0;
  while (iVar3 == 4) {
code_r0x00414801:
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
      apuStack_158[0] = &UNK_004148f9;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
      if (cVar2 != '\0') {
        apuStack_158[0] = &UNK_00414906;
        puVar5 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar5;
        apuStack_158[0] = &UNK_0041492f;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (apppbStack_138,&UNK_0016974f,0x176,0,0,0xffffffff);
        apuStack_158[0] = &UNK_00414937;
        uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
        apuStack_158[0] = &UNK_0041494b;
        func_0x0032eb30(uVar11,&UNK_0017f02c,0x13);
        apuStack_158[0] = &UNK_00414953;
        _ZN7android4base10LogMessageD2Ev(apppbStack_138);
        *puVar5 = uVar1;
      }
    }
    apuStack_158[0] = &UNK_0041481c;
    ppppbVar8 = (byte ****)func_0x0099c320();
    pppppbVar12[0x21] = ppppbVar8;
    uVar1 = *(undefined4 *)(pppppbVar12 + 3);
    apuStack_158[0] = &UNK_00414836;
    _ZNSt3__115recursive_mutex6unlockEv(pppppbVar12 + 0x1b);
    ppppbStack_118 = (byte ****)0x0;
    apuStack_158[0] = &UNK_00414850;
    iVar4 = func_0x0099c020(uVar1,0x4008550c,&ppppbStack_118);
    apuStack_158[0] = &UNK_00414857;
    piVar7 = (int *)func_0x0099bce0();
    iVar3 = *piVar7;
    apuStack_158[0] = &UNK_00414865;
    _ZNSt3__15mutex4lockEv();
    pppppbVar12[0x21] = (byte ****)0x0;
    if (*(char *)((long)pppppbVar12 + 0xa2) == '\x01') {
      *piVar7 = 0x16;
      pppppbVar20 = (byte *****)0xffffffff;
      puVar9 = (uint *)(ulong)uStack_13c;
      goto code_r0x00414af0;
    }
    if (-1 < iVar4) {
      if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
        apuStack_158[0] = &UNK_00414964;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
        if (cVar2 != '\0') {
          iVar3 = *piVar7;
          apuStack_158[0] = &UNK_00414992;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_120,&UNK_0016974f,0x18e,0,0,0xffffffff);
          apuStack_158[0] = &UNK_0041499a;
          uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_120);
          apuStack_158[0] = &UNK_004149bd;
          _ZN7android4base12StringPrintfEPKcz(apppbStack_138,&UNK_0016b0a0);
          apuStack_158[0] = &UNK_004149c8;
          func_0x0032e5a0(uVar11);
          if (((byte)apppbStack_138[0] & 1) != 0) {
            apuStack_158[0] = &UNK_004149df;
            _ZdaPvSt11align_val_t(uStack_128);
          }
          apuStack_158[0] = &UNK_004149e8;
          _ZN7android4base10LogMessageD2Ev();
          *piVar7 = iVar3;
        }
      }
      if ((byte *****)ppppbStack_118 == pppppbVar12 + 6) {
        if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
          apuStack_158[0] = &UNK_00414dd5;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
          if (cVar2 != '\0') {
            iVar3 = *piVar7;
            apuStack_158[0] = &UNK_00414e03;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (apppbStack_138,&UNK_0016974f,0x192,0,0,0xffffffff);
            apuStack_158[0] = &UNK_00414e0b;
            uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
            apuStack_158[0] = &UNK_00414e1f;
            func_0x0032eb30(uVar11,&UNK_00183691,0x1a);
            apuStack_158[0] = &UNK_00414e27;
            _ZN7android4base10LogMessageD2Ev(apppbStack_138);
            *piVar7 = iVar3;
          }
        }
        *(undefined1 *)(pppppbVar12 + 0x14) = 0;
        puVar9 = (uint *)(ulong)uStack_13c;
        if (*(int *)((long)pppppbVar12 + 0x34) == 0) {
          pppppbVar20 = (byte *****)(ulong)*(uint *)((long)pppppbVar12 + 0x4c);
        }
        else {
          *piVar7 = -*(int *)((long)pppppbVar12 + 0x34);
          pppppbVar20 = (byte *****)0xffffffff;
        }
        goto code_r0x00414af0;
      }
      if ((byte *****)ppppbStack_118 == pppppbVar12 + 0xd) {
        if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
          apuStack_158[0] = &UNK_00414a04;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
          if (cVar2 != '\0') {
            iVar3 = *piVar7;
            apuStack_158[0] = &UNK_00414a32;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (apppbStack_138,&UNK_0016974f,0x19b,0,0,0xffffffff);
            apuStack_158[0] = &UNK_00414a3a;
            uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
            apuStack_158[0] = &UNK_00414a4e;
            func_0x0032eb30(uVar11,&UNK_001868ab,0x1b);
            apuStack_158[0] = &UNK_00414a56;
            _ZN7android4base10LogMessageD2Ev(apppbStack_138);
            *piVar7 = iVar3;
          }
        }
        *(undefined1 *)((long)pppppbVar12 + 0xa1) = 0;
        apuStack_158[0] = &UNK_004148eb;
        _ZNSt3__118condition_variable10notify_allEv();
      }
      goto code_r0x00414801;
    }
  }
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_158[0] = &UNK_00414e42;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      apuStack_158[0] = &UNK_00414e6d;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apppbStack_138,&UNK_0016974f,0x18a,1,0,0xffffffff);
      apuStack_158[0] = &UNK_00414e76;
      uVar11 = _ZN7android4base10LogMessage6streamEv(apppbStack_138);
      apuStack_158[0] = &UNK_00414e8a;
      func_0x0032eb30(uVar11,&UNK_00161528,0x14);
      apuStack_158[0] = &UNK_00414e93;
      _ZN7android4base10LogMessageD2Ev(apppbStack_138);
    }
  }
  *piVar7 = iVar3;
  pppppbVar20 = (byte *****)0xffffffff;
  puVar9 = (uint *)(ulong)uStack_13c;
code_r0x00414af0:
  pppppbVar16 = pppppbVar12 + 0x1b;
  apuStack_158[0] = &UNK_00414afc;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
    pppppbVar16 = (byte *****)0x0;
    apuStack_158[0] = &UNK_00414cab;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
    if (cVar2 != '\0') {
      apuStack_158[0] = &UNK_00414cb8;
      puVar9 = (uint *)func_0x0099bce0();
      uStack_140 = *puVar9;
      apuStack_158[0] = &UNK_00414ce3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppbStack_118,&UNK_0016974f,0x1d7,0,0,0xffffffff);
      apuStack_158[0] = &UNK_00414ceb;
      uVar11 = _ZN7android4base10LogMessage6streamEv(&ppppbStack_118);
      apuStack_158[0] = &UNK_00414d17;
      _ZN7android4base12StringPrintfEPKcz(apppbStack_138,&UNK_00178c3c,uStack_13c);
      apuStack_158[0] = &UNK_00414d22;
      func_0x0032e5a0(uVar11);
      if (((byte)apppbStack_138[0] & 1) != 0) {
        apuStack_158[0] = &UNK_00414d39;
        _ZdaPvSt11align_val_t(uStack_128);
      }
      pppppbVar16 = &ppppbStack_118;
      apuStack_158[0] = &UNK_00414d42;
      _ZN7android4base10LogMessageD2Ev();
      *puVar9 = uStack_140;
      puVar9 = (uint *)(ulong)uStack_13c;
    }
  }
  pppppbVar19 = pppppbVar12 + 6;
  if ((int)pppppbVar20 < 1) {
    apuStack_158[0] = &UNK_00414b20;
    puVar9 = (uint *)func_0x0099bce0();
    ppppbVar8 = ppppbStack_148;
    if ((*puVar9 != 0x6e) || (*(int *)(pppppbVar12 + 3) == -1)) {
      uVar14 = 0xffffffff;
      if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        pppppbVar16 = (byte *****)0x1;
        apuStack_158[0] = &UNK_00414fde;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar2 != '\0') {
          ppppbStack_148 = (byte ****)CONCAT44(ppppbStack_148._4_4_,*puVar9);
          apuStack_158[0] = &UNK_00415013;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&ppppbStack_118,&UNK_0016974f,0x1de,1,0,0xffffffff);
          apuStack_158[0] = &UNK_0041501b;
          pppppbVar12 = (byte *****)_ZN7android4base10LogMessage6streamEv(&ppppbStack_118);
          uVar13 = *puVar9;
          pppppbVar19 = (byte *****)(ulong)uVar13;
          apuStack_158[0] = &UNK_0041502a;
          uVar11 = func_0x0099bd20(pppppbVar19);
          apuStack_158[0] = &UNK_00415045;
          _ZN7android4base12StringPrintfEPKcz
                    (apppbStack_138,&UNK_00162fd0,pppppbVar20,uVar13,uVar11);
          apuStack_158[0] = &UNK_00415051;
          func_0x0032e5a0(pppppbVar12,apppbStack_138);
          if (((byte)apppbStack_138[0] & 1) != 0) {
            apuStack_158[0] = &UNK_00415068;
            _ZdaPvSt11align_val_t
                      (uStack_128,
                       CONCAT71(apppbStack_138[0]._1_7_,(byte)apppbStack_138[0]) &
                       0xfffffffffffffffe);
          }
          pppppbVar16 = &ppppbStack_118;
          apuStack_158[0] = &UNK_00415071;
          _ZN7android4base10LogMessageD2Ev();
          *puVar9 = (uint)ppppbStack_148;
        }
      }
      goto code_r0x00414f39;
    }
    pppppbVar20 = (byte *****)ppppbVar8;
    if ((adb_trace_mask & 0x20) == 0) {
      puVar9 = (uint *)(ulong)uStack_13c;
      uVar13 = uStack_13c;
    }
    else {
      if ((int)adb_trace_severity._20_4_ < 2) {
        pppppbVar16 = (byte *****)0x1;
        apuStack_158[0] = &UNK_00414d67;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar2 != '\0') {
          uStack_140 = *puVar9;
          pppppbVar16 = (byte *****)apppbStack_138;
          apuStack_158[0] = &UNK_00414d9c;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pppppbVar16,&UNK_0016974f,0x1db,1,0,0xffffffff);
          apuStack_158[0] = &UNK_00414da4;
          uVar11 = _ZN7android4base10LogMessage6streamEv(pppppbVar16);
          apuStack_158[0] = &UNK_00414db8;
          func_0x0032eb30(uVar11,&UNK_00167cf9,0xb);
          apuStack_158[0] = &UNK_00414dc0;
          _ZN7android4base10LogMessageD2Ev();
          *puVar9 = uStack_140;
        }
      }
      puVar9 = (uint *)(ulong)uStack_13c;
      uVar13 = uStack_13c;
    }
  }
  else {
    uVar13 = (int)puVar9 - (int)pppppbVar20;
    pppppbVar20 = (byte *****)((long)ppppbStack_148 + (long)pppppbVar20);
  }
  uVar13 = (int)puVar9 - uVar13;
  uVar14 = (ulong)uVar13;
  if (uVar13 != 0) {
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 1)) {
      pppppbVar16 = (byte *****)0x0;
      apuStack_158[0] = &UNK_00414ec2;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(0,0);
      if (cVar2 != '\0') {
        apuStack_158[0] = &UNK_00414ecb;
        pppppbVar20 = (byte *****)func_0x0099bce0();
        uVar13 = *(uint *)pppppbVar20;
        puVar9 = (uint *)(ulong)uVar13;
        pppppbVar12 = (byte *****)apppbStack_138;
        apuStack_158[0] = &UNK_00414ef4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppbVar12,&UNK_0016974f,0x1e7,0,0,0xffffffff);
        apuStack_158[0] = &UNK_00414efc;
        uVar11 = _ZN7android4base10LogMessage6streamEv(pppppbVar12);
        apuStack_158[0] = &UNK_00414f10;
        func_0x0032eb30(uVar11,&UNK_00183682,0xe);
        apuStack_158[0] = &UNK_00414f18;
        pppppbVar16 = pppppbVar12;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)pppppbVar20 = uVar13;
      }
    }
code_r0x00414f39:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
      return uVar14;
    }
    apuStack_158[0] = &UNK_00415082;
    ppppbStack_168 = (byte ****)func_0x0099bd00();
    ppppbStack_170 = (byte ****)&UNK_004150a8;
    ppppbStack_160 = (byte ****)uVar14;
    apuStack_158[0] = (undefined *)&puStack_e0;
    func_0x0099c020(*(undefined4 *)(pppppbVar16 + 3),0x5514);
    uStack_180 = (ulong)ppppbStack_160;
    uStack_188 = *(ulong *)(in_FS_OFFSET + 0x28);
    pppppbVar18 = pppppbVar16 + 0x1b;
    puStack_1c0 = &UNK_004150f0;
    puStack_178 = puVar9;
    ppppbStack_170 = (byte ****)pppppbVar19;
    ppppbStack_168 = (byte ****)pppppbVar20;
    ppppbStack_160 = (byte ****)pppppbVar12;
    _ZNSt3__15mutex4lockEv(pppppbVar18);
    if (((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_1c0 = &UNK_004151d1;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        puStack_1c0 = &UNK_004151de;
        pppppbVar12 = (byte *****)func_0x0099bce0();
        uStack_1ac = *(undefined4 *)pppppbVar12;
        puStack_1c0 = &UNK_0041520c;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_190,&UNK_0016974f,0x1f2,1,0,0xffffffff);
        puStack_1c0 = &UNK_00415214;
        puVar9 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_190);
        pppppbVar19 = (byte *****)&bStack_1a8;
        puStack_1c0 = &UNK_00415233;
        _ZN7android4base12StringPrintfEPKcz
                  (pppppbVar19,&UNK_0016150f,pppppbVar16,*(undefined4 *)(pppppbVar16 + 3));
        puStack_1c0 = &UNK_0041523e;
        func_0x0032e5a0(puVar9,pppppbVar19);
        if ((bStack_1a8 & 1) != 0) {
          puStack_1c0 = &UNK_00415255;
          _ZdaPvSt11align_val_t(uStack_198,CONCAT71(uStack_1a7,bStack_1a8) & 0xfffffffffffffffe);
        }
        puStack_1c0 = &UNK_0041525e;
        _ZN7android4base10LogMessageD2Ev(auStack_190);
        *(undefined4 *)pppppbVar12 = uStack_1ac;
      }
    }
    if (*(char *)((long)pppppbVar16 + 0xa2) == '\0') {
      *(undefined1 *)((long)pppppbVar16 + 0xa2) = 1;
      if (*(int *)((long)pppppbVar16 + 0x2c) == 0) {
        puStack_1c0 = &UNK_0041519b;
        _Z24unregister_usb_transportP10usb_handle(pppppbVar16);
      }
      else {
        if (pppppbVar16[0x21] != (byte ****)0x0) {
          puStack_1c0 = &UNK_00415140;
          func_0x0099c400(pppppbVar16[0x21],0xe);
        }
        puStack_1c0 = &UNK_00415154;
        func_0x0099c020(*(undefined4 *)(pppppbVar16 + 3),0x550b,pppppbVar16 + 6);
        puStack_1c0 = &UNK_00415168;
        func_0x0099c020(*(undefined4 *)(pppppbVar16 + 3),0x550b,pppppbVar16 + 0xd);
        *(undefined4 *)((long)pppppbVar16 + 0x34) = 0xffffffed;
        *(undefined4 *)((long)pppppbVar16 + 0x6c) = 0xffffffed;
        *(undefined2 *)(pppppbVar16 + 0x14) = 0;
        pppppbVar16 = pppppbVar16 + 0x15;
        puStack_1c0 = &UNK_00415191;
        _ZNSt3__118condition_variable10notify_allEv(pppppbVar16);
      }
    }
    puStack_1c0 = &UNK_004151a3;
    pppppbVar20 = pppppbVar18;
    _ZNSt3__115recursive_mutex6unlockEv();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_188) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
    puStack_1c0 = &UNK_0041526e;
    func_0x0099bd00();
    lVar6 = lRam0000000000a008a0;
    lStack_1f0 = *(long *)(in_FS_OFFSET + 0x28);
    ppppbStack_1f8 = (byte ****)pppppbVar20;
    ppppbStack_1e8 = (byte ****)pppppbVar18;
    puStack_1e0 = puVar9;
    ppppbStack_1d8 = (byte ****)pppppbVar19;
    ppppbStack_1d0 = (byte ****)pppppbVar16;
    ppppbStack_1c8 = (byte ****)pppppbVar12;
    puStack_1c0 = (undefined *)apuStack_158;
    _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
    func_0x003f0c30(uRam0000000000a008a8,&ppppbStack_1f8);
    if ((((adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_200,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_200);
      _ZN7android4base12StringPrintfEPKcz
                (&bStack_218,&UNK_0015c986,ppppbStack_1f8,*(undefined4 *)(ppppbStack_1f8 + 3));
      func_0x0032e5a0(uVar11,&bStack_218);
      if ((bStack_218 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_208,CONCAT71(uStack_217,bStack_218) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_200);
      *puVar5 = uVar1;
    }
    ppppbVar8 = ppppbStack_1f8;
    if ((byte *****)ppppbStack_1f8 != (byte *****)0x0) {
      if (*(int *)(ppppbStack_1f8 + 3) != -1) {
        func_0x0099bd10();
      }
      _ZNSt3__118condition_variableD2Ev(ppppbVar8 + 0x15);
      if (((ulong)*ppppbVar8 & 1) != 0) {
        _ZdaPvSt11align_val_t(ppppbVar8[2],(ulong)*ppppbVar8 & 0xfffffffffffffffe);
      }
      _ZdaPvSt11align_val_t(ppppbVar8,0x110);
    }
    _ZNSt3__115recursive_mutex6unlockEv();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1f0) {
      return 0;
    }
    func_0x0099bd00();
    return *(ulong *)(lVar6 + 0x20);
  }
  goto code_r0x0041470b;
}


