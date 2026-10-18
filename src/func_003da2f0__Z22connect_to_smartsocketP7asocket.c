// Function: _Z22connect_to_smartsocketP7asocket
// Address: 003da2f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long _Z22connect_to_smartsocketP7asocket(uint *******param_1,uint *******param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  int iVar16;
  uint ******ppppppuVar17;
  int *piVar18;
  undefined8 uVar19;
  uint ******ppppppuVar20;
  long lVar21;
  uint *******pppppppuVar22;
  ulong *puVar23;
  undefined1 (*pauVar24) [16];
  ulong uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  byte bVar28;
  byte bVar29;
  uint *******extraout_RDX;
  uint *******pppppppuVar30;
  ulong extraout_RDX_00;
  uint uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  uint *******pppppppuVar34;
  uint *puVar35;
  uint *puVar36;
  byte bVar37;
  uint *puVar38;
  long *plVar39;
  byte bVar40;
  uint uVar41;
  undefined1 *puVar42;
  uint *******pppppppuVar43;
  undefined1 *puVar44;
  undefined4 *unaff_R14;
  uint *******pppppppuVar45;
  byte *unaff_R15;
  uint *******pppppppuVar46;
  long in_FS_OFFSET;
  bool bVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  byte bStack_22a0;
  undefined7 uStack_229f;
  undefined8 uStack_2290;
  byte bStack_2288;
  undefined7 uStack_2287;
  undefined8 uStack_2278;
  ulong uStack_2270;
  ulong uStack_2268;
  ulong uStack_2260;
  undefined1 auStack_2250 [16];
  uint *puStack_2240;
  uint *******pppppppuStack_2238;
  undefined1 auStack_2230 [16];
  undefined1 auStack_2220 [16];
  undefined1 auStack_2210 [16];
  undefined1 auStack_2200 [16];
  undefined1 auStack_21f0 [16];
  undefined1 auStack_21e0 [16];
  undefined1 auStack_21d0 [16];
  undefined1 auStack_21c0 [16];
  undefined1 auStack_21b0 [16];
  undefined1 auStack_21a0 [16];
  long lStack_2190;
  uint *******pppppppuStack_2188;
  uint *******pppppppuStack_2180;
  uint *******pppppppuStack_2178;
  uint *******pppppppuStack_2170;
  uint *******pppppppuStack_2168;
  undefined *puStack_2160;
  uint ******ppppppuStack_2150;
  uint ******appppppuStack_2148 [1024];
  long lStack_148;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  undefined *puStack_118;
  undefined4 *puStack_110;
  undefined4 uStack_104;
  long alStack_100 [4];
  uint ******appppppuStack_e0 [2];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  long lStack_b0;
  long lStack_a0;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_90;
  uint ******ppppppuStack_88;
  undefined4 *puStack_80;
  byte *pbStack_78;
  undefined *apuStack_70 [2];
  undefined4 uStack_5c;
  uint ******appppppuStack_58 [2];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar42 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    param_2 = (uint *******)0x0;
    apuStack_70[0] = &UNK_003da408;
    cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar15 != '\0') {
      apuStack_70[0] = &UNK_003da415;
      unaff_R14 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *unaff_R14;
      unaff_R15 = (byte *)appppppuStack_58;
      apuStack_70[0] = &UNK_003da443;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0015b0ed,0x3e2,1,0);
      apuStack_70[0] = &UNK_003da44b;
      uVar19 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      param_2 = (uint *******)&UNK_00161370;
      apuStack_70[0] = &UNK_003da45f;
      func_0x0032eb30(uVar19,&UNK_00161370,0x1a);
      apuStack_70[0] = &UNK_003da467;
      _ZN7android4base10LogMessageD2Ev(unaff_R15);
      *unaff_R14 = uStack_5c;
    }
  }
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    param_2 = (uint *******)0x0;
    apuStack_70[0] = &UNK_003da47e;
    cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar15 != '\0') {
      apuStack_70[0] = &UNK_003da48b;
      unaff_R14 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *unaff_R14;
      unaff_R15 = (byte *)appppppuStack_58;
      apuStack_70[0] = &UNK_003da4b9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0015b0ed,0x3d6,1,0);
      apuStack_70[0] = &UNK_003da4c1;
      uVar19 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      param_2 = (uint *******)&UNK_0018961a;
      apuStack_70[0] = &UNK_003da4d5;
      func_0x0032eb30(uVar19,&UNK_0018961a,0x15);
      apuStack_70[0] = &UNK_003da4dd;
      _ZN7android4base10LogMessageD2Ev(unaff_R15);
      *unaff_R14 = uStack_5c;
    }
  }
  apuStack_70[0] = &UNK_003da34f;
  ppppppuVar17 = (uint ******)_Znwm(0xa8);
  ppppppuVar17[8] = (uint *****)0x0;
  ppppppuVar17[9] = (uint *****)0x0;
  ppppppuVar17[0x10] = (uint *****)0x0;
  ppppppuVar17[0x11] = (uint *****)0x0;
  ppppppuVar17[2] = (uint *****)0x0;
  ppppppuVar17[3] = (uint *****)0x0;
  ppppppuVar17[4] = (uint *****)0x0;
  ppppppuVar17[5] = (uint *****)0x0;
  ppppppuVar17[6] = (uint *****)0x0;
  ppppppuVar17[7] = (uint *****)0x0;
  *ppppppuVar17 = (uint *****)0x0;
  ppppppuVar17[1] = (uint *****)0x0;
  ppppppuVar17[10] = (uint *****)0x0;
  ppppppuVar17[0xb] = (uint *****)0x0;
  ppppppuVar17[0xc] = (uint *****)0x0;
  ppppppuVar17[0xd] = (uint *****)0x0;
  ppppppuVar17[0xe] = (uint *****)0x0;
  ppppppuVar17[0xf] = (uint *****)0x0;
  *(undefined4 *)(ppppppuVar17 + 9) = 0xffffffff;
  ppppppuVar17[0x12] = (uint *****)0x0;
  ppppppuVar17[0x13] = (uint *****)0x0;
  ppppppuVar17[0x14] = (uint *****)0x0;
  *(undefined1 *)(ppppppuVar17 + 0x10) = 0;
  ppppppuVar17[3] = (uint *****)&UNK_003daae0;
  ppppppuVar17[4] = (uint *****)&UNK_003dc1a0;
  ppppppuVar17[6] = (uint *****)&UNK_003dc2a0;
  ppppppuVar20 = (uint ******)&adb_trace_mask;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    param_2 = (uint *******)0x0;
    apuStack_70[0] = &UNK_003da4f7;
    cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    ppppppuVar20 = ppppppuVar17;
    if (cVar15 != '\0') {
      apuStack_70[0] = &UNK_003da509;
      unaff_R14 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *unaff_R14;
      apuStack_70[0] = &UNK_003da537;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(auStack_40,&UNK_0015b0ed,0x3dd,1,0);
      apuStack_70[0] = &UNK_003da53f;
      unaff_R15 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_40);
      puVar42 = (undefined1 *)appppppuStack_58;
      apuStack_70[0] = &UNK_003da559;
      _ZN7android4base12StringPrintfEPKcz(puVar42,&UNK_0015e051,0);
      apuStack_70[0] = &UNK_003da564;
      param_2 = (uint *******)puVar42;
      func_0x0032e5a0(unaff_R15);
      if (((byte)appppppuStack_58[0] & 1) != 0) {
        param_2 = (uint *******)
                  (CONCAT71(appppppuStack_58[0]._1_7_,(byte)appppppuStack_58[0]) &
                  0xfffffffffffffffe);
        apuStack_70[0] = &UNK_003da57b;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      apuStack_70[0] = &UNK_003da584;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *unaff_R14 = uStack_5c;
    }
  }
  param_1[2] = ppppppuVar17;
  ppppppuVar17[2] = (uint *****)param_1;
  apuStack_70[0] = &UNK_003da3da;
  pppppppuVar34 = param_1;
  (*(code *)param_1[4])();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  apuStack_70[0] = &UNK_003da597;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar46 = (uint *******)&adb_trace_mask;
  puVar44 = adb_trace_severity;
  pppppppuStack_98 = param_1;
  pppppppuStack_90 = (uint *******)puVar42;
  ppppppuStack_88 = ppppppuVar20;
  puStack_80 = unaff_R14;
  pbStack_78 = unaff_R15;
  apuStack_70[0] = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (apuStack_70[0] = &stack0xfffffffffffffff8, (int)adb_trace_severity._4_4_ < 2)) {
    param_2 = (uint *******)0x0;
    puStack_118 = &UNK_003da788;
    apuStack_70[0] = &stack0xfffffffffffffff8;
    cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar15 != '\0') {
      puStack_118 = &UNK_003da795;
      puStack_110 = (undefined4 *)func_0x0099bce0();
      uStack_104 = *puStack_110;
      puStack_118 = &UNK_003da7ca;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (appppppuStack_e0,&UNK_0015b0ed,0x79,1,0);
      puStack_118 = &UNK_003da7d2;
      uVar19 = _ZN7android4base10LogMessage6streamEv(appppppuStack_e0);
      puVar42 = (undefined1 *)&pppppppuStack_c0;
      puStack_118 = &UNK_003da7fb;
      _ZN7android4base12StringPrintfEPKcz
                (puVar42,&UNK_0017ed58,*(uint *)pppppppuVar34,&UNK_00167a77,
                 (long)pppppppuVar34[10] - (long)pppppppuVar34[0xb]);
      puStack_118 = &UNK_003da806;
      param_2 = (uint *******)puVar42;
      func_0x0032e5a0(uVar19);
      if (((ulong)pppppppuStack_c0 & 1) != 0) {
        param_2 = (uint *******)((ulong)pppppppuStack_c0 & 0xfffffffffffffffe);
        puStack_118 = &UNK_003da81d;
        _ZdaPvSt11align_val_t(lStack_b0);
      }
      puStack_118 = &UNK_003da826;
      _ZN7android4base10LogMessageD2Ev(appppppuStack_e0);
      *puStack_110 = uStack_104;
    }
  }
  ppppppuVar20 = pppppppuVar34[10];
  pppppppuVar22 = (uint *******)CONCAT71((int7)((ulong)puVar42 >> 8),1);
  pppppppuVar43 = (uint *******)0x0;
  ppppppuVar17 = ppppppuVar20;
  if (ppppppuVar20 != pppppppuVar34[0xb]) {
    pppppppuStack_c0 = (uint *******)0x0;
    pppppppuStack_b8 = (uint *******)0x0;
    lStack_b0 = 0;
    puStack_118 = &UNK_003da614;
    _ZNK8IOVector6iovecsEv(&pppppppuStack_c0,pppppppuVar34 + 10);
    uVar33 = (ulong)((long)pppppppuStack_b8 - (long)pppppppuStack_c0) >> 4;
    uVar25 = 0x400;
    if ((int)uVar33 < 0x400) {
      uVar25 = uVar33 & 0xffffffff;
    }
    puStack_118 = &UNK_003da638;
    param_2 = pppppppuStack_c0;
    pppppppuVar43 =
         (uint *******)func_0x0099c300(*(uint *)(pppppppuVar34 + 9),pppppppuStack_c0,uVar25);
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      param_2 = (uint *******)0x0;
      puStack_118 = &UNK_003da846;
      cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar15 != '\0') {
        puStack_118 = &UNK_003da853;
        puStack_110 = (undefined4 *)func_0x0099bce0();
        uStack_104 = *puStack_110;
        puStack_118 = &UNK_003da888;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(auStack_c8,&UNK_0015b0ed,0x7f,1,0)
        ;
        puStack_118 = &UNK_003da890;
        puVar44 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(auStack_c8);
        pppppppuVar46 = appppppuStack_e0;
        puStack_118 = &UNK_003da8b4;
        _ZN7android4base12StringPrintfEPKcz
                  (pppppppuVar46,&UNK_00189606,*(uint *)pppppppuVar34,&UNK_00167a77,pppppppuVar43);
        puStack_118 = &UNK_003da8bf;
        param_2 = pppppppuVar46;
        func_0x0032e5a0(puVar44);
        if (((byte)appppppuStack_e0[0] & 1) != 0) {
          param_2 = (uint *******)
                    (CONCAT71(appppppuStack_e0[0]._1_7_,(byte)appppppuStack_e0[0]) &
                    0xfffffffffffffffe);
          puStack_118 = &UNK_003da8d6;
          _ZdaPvSt11align_val_t(uStack_d0);
        }
        puStack_118 = &UNK_003da8df;
        _ZN7android4base10LogMessageD2Ev(auStack_c8);
        *puStack_110 = uStack_104;
      }
    }
    if ((long)pppppppuVar43 < 1) {
      if (pppppppuVar43 == (uint *******)0xffffffffffffffff) {
        puStack_118 = &UNK_003da697;
        piVar18 = (int *)func_0x0099bce0();
        pppppppuVar43 = (uint *******)0x0;
        if (*piVar18 == 0xb) goto code_r0x003da6b4;
      }
      *(byte *)((long)pppppppuVar34 + 5) = 1;
      pppppppuVar43 = (uint *******)0x0;
    }
    else if (pppppppuVar43 == (uint *******)((long)pppppppuVar34[10] - (long)pppppppuVar34[0xb])) {
      param_2 = pppppppuVar34 + 10;
      puStack_118 = &UNK_003da66e;
      _ZN8IOVector5clearEv(alStack_100);
      lVar21 = alStack_100[0];
      alStack_100[0] = 0;
      if (lVar21 != 0) {
        puStack_118 = &UNK_003da68a;
        _ZdaPvSt11align_val_t();
      }
    }
    else {
      puStack_118 = &UNK_003da6b4;
      param_2 = pppppppuVar43;
      _ZN8IOVector10drop_frontEm(pppppppuVar34 + 10);
    }
code_r0x003da6b4:
    if (pppppppuStack_c0 != (uint *******)0x0) {
      pppppppuStack_b8 = pppppppuStack_c0;
      param_2 = (uint *******)(lStack_b0 - (long)pppppppuStack_c0);
      puStack_118 = &UNK_003da6cd;
      _ZdaPvSt11align_val_t();
    }
    ppppppuVar20 = pppppppuVar34[10];
    ppppppuVar17 = pppppppuVar34[0xb];
    if (ppppppuVar20 != ppppppuVar17) {
      pppppppuVar22 = (uint *******)(ulong)*(byte *)((long)pppppppuVar34 + 5);
    }
  }
  if (((pppppppuVar34[7] != (uint ******)0x0) &&
      (param_2 = (uint *******)pppppppuVar34[2], param_2 != (uint *******)0x0)) &&
     ((*(byte *)(pppppppuVar34 + 0x11) != 0 ||
      (iVar16 = (int)pppppppuVar43, pppppppuVar43 = (uint *******)0x0,
      (ulong)((long)ppppppuVar20 - (long)ppppppuVar17) < 0x100000 && iVar16 != 0)))) {
    param_2 = (uint *******)(ulong)*(uint *)param_2;
    puStack_118 = &UNK_003da721;
    _Z10send_readyjjP10atransportj
              (*(uint *)pppppppuVar34,param_2,pppppppuVar34[7],(ulong)pppppppuVar43 & 0xffffffff);
  }
  if ((*(byte *)((long)pppppppuVar34 + 4) & (byte)pppppppuVar22) == 1) {
    puStack_118 = &UNK_003da732;
    pppppppuVar45 = pppppppuVar34;
    (*(code *)pppppppuVar34[6])();
    lVar21 = 0;
  }
  else {
    pppppppuVar45 = (uint *******)pppppppuVar34[8];
    param_2 = (uint *******)0x2;
    if ((byte)pppppppuVar22 == 0) {
      puStack_118 = &UNK_003da755;
      _Z11fdevent_addP7fdeventj();
      lVar21 = 1;
    }
    else {
      puStack_118 = &UNK_003da749;
      _Z11fdevent_delP7fdeventj();
      lVar21 = 2;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return lVar21;
  }
  puStack_118 = &UNK_003da8f8;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_140 = pppppppuVar34;
  pppppppuStack_138 = pppppppuVar22;
  pppppppuStack_130 = (uint *******)puVar44;
  pppppppuStack_128 = pppppppuVar43;
  pppppppuStack_120 = pppppppuVar46;
  if (((ulong)param_2 & 1) == 0) {
    puStack_118 = (undefined *)apuStack_70;
    if (((ulong)param_2 & 8) != 0) {
      param_2 = (uint *******)0x0;
      puStack_2160 = &UNK_003da943;
      puStack_118 = (undefined *)apuStack_70;
      cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3);
      if (cVar15 != '\0') {
        puStack_2160 = &UNK_003da950;
        pppppppuVar46 = (uint *******)func_0x0099bce0();
        uVar31 = *(uint *)pppppppuVar46;
        pppppppuVar22 = appppppuStack_2148;
        puStack_2160 = &UNK_003da97f;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar22,&UNK_0015b0ed,0x13b,3,0);
        puStack_2160 = &UNK_003da987;
        uVar19 = _ZN7android4base10LogMessage6streamEv(pppppppuVar22);
        param_2 = (uint *******)&UNK_00187d3e;
        puStack_2160 = &UNK_003da99b;
        func_0x0032eb30(uVar19,&UNK_00187d3e,0x2e);
        puStack_2160 = &UNK_003da9a3;
        _ZN7android4base10LogMessageD2Ev(pppppppuVar22);
        *(uint *)pppppppuVar46 = uVar31;
        puVar44 = (undefined1 *)(ulong)uVar31;
      }
    }
  }
  else {
    pppppppuVar46 = appppppuStack_2148;
    puStack_2160 = &UNK_003da9c1;
    puStack_118 = (undefined *)apuStack_70;
    func_0x0099bdb0(pppppppuVar46,0,0x2000);
    do {
      pppppppuVar22 = (uint *******)(ulong)*(uint *)(pppppppuVar45 + 1);
      while( true ) {
        puStack_2160 = &UNK_003da9e0;
        param_2 = pppppppuVar46;
        pppppppuVar34 = pppppppuVar22;
        lVar21 = func_0x0099be20(pppppppuVar22,pppppppuVar46,0x2000);
        if (lVar21 != -1) break;
        puStack_2160 = &UNK_003da9eb;
        pppppppuVar43 = (uint *******)func_0x0099bce0();
        uVar31 = *(uint *)pppppppuVar43;
        if (uVar31 != 4) goto code_r0x003daa10;
      }
    } while (0 < (int)lVar21);
    if ((int)lVar21 == -1) {
      puStack_2160 = &UNK_003daa0e;
      pppppppuVar43 = (uint *******)func_0x0099bce0();
      uVar31 = *(uint *)pppppppuVar43;
code_r0x003daa10:
      if (uVar31 == 0xb) {
        puStack_2160 = &UNK_003daa1d;
        lVar21 = _ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar21 - (long)*extraout_RDX < 0x3b9aca01) goto code_r0x003daa52;
        param_2 = (uint *******)0x0;
        puStack_2160 = &UNK_003daa34;
        cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3);
        pppppppuVar46 = pppppppuVar43;
        if (cVar15 != '\0') {
          uVar31 = *(uint *)pppppppuVar43;
          pppppppuVar22 = (uint *******)(ulong)uVar31;
          pppppppuVar46 = &ppppppuStack_2150;
          puStack_2160 = &UNK_003daaa5;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pppppppuVar46,&UNK_0015b0ed,0x135,3,0);
          puStack_2160 = &UNK_003daaad;
          uVar19 = _ZN7android4base10LogMessage6streamEv(pppppppuVar46);
          param_2 = (uint *******)&UNK_00187cfc;
          puStack_2160 = &UNK_003daac1;
          func_0x0032eb30(uVar19,&UNK_00187cfc,0x41);
          puStack_2160 = &UNK_003daac9;
          _ZN7android4base10LogMessageD2Ev(pppppppuVar46);
          *(uint *)pppppppuVar43 = uVar31;
          puVar44 = (undefined1 *)pppppppuVar43;
        }
      }
    }
  }
  puStack_2160 = &UNK_003daa40;
  pppppppuVar34 = pppppppuVar45;
  _Z15fdevent_destroyP7fdevent();
  pppppppuVar43 = pppppppuVar46;
  if (extraout_RDX != (uint *******)0x0) {
    param_2 = (uint *******)0x8;
    puStack_2160 = &UNK_003daa52;
    pppppppuVar34 = extraout_RDX;
    _ZdaPvSt11align_val_t();
  }
code_r0x003daa52:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_2160 = &UNK_003daad7;
  func_0x0099bd00();
  puStack_2160 = (undefined *)&puStack_118;
  pppppppuStack_2168 = pppppppuVar43;
  pppppppuStack_2170 = pppppppuVar45;
  pppppppuStack_2178 = (uint *******)puVar44;
  pppppppuStack_2180 = pppppppuVar22;
  pppppppuStack_2188 = extraout_RDX;
  lStack_2190 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_2240 = (uint *)0x0;
  pppppppuStack_2238 = (uint *******)0x0;
  auStack_2250 = (undefined1  [16])0x0;
  puVar42 = (undefined1 *)extraout_RDX;
  if (((((byte)adb_trace_mask & 2) != 0) &&
      (puVar42 = (undefined1 *)extraout_RDX, (int)adb_trace_severity._4_4_ < 2)) &&
     (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0),
     puVar42 = (undefined1 *)param_2, cVar15 != '\0')) {
    pppppppuVar45 = (uint *******)func_0x0099bce0();
    uVar31 = *(uint *)pppppppuVar45;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(&uStack_2270,&UNK_0015b0ed,0x327,1,0);
    uVar19 = _ZN7android4base10LogMessage6streamEv(&uStack_2270);
    _ZN7android4base12StringPrintfEPKcz
              (auStack_2230,&UNK_001755e1,*(uint *)pppppppuVar34,param_2[2]);
    func_0x0032e5a0(uVar19,auStack_2230);
    if ((auStack_2230[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_2220._0_8_,auStack_2230._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&uStack_2270);
    *(uint *)pppppppuVar45 = uVar31;
    puVar44 = (undefined1 *)pppppppuVar34;
  }
  if ((*(byte *)(pppppppuVar34 + 0x12) & 1) == 0) {
    ppppppuVar20 = (uint ******)(ulong)(*(byte *)(pppppppuVar34 + 0x12) >> 1);
  }
  else {
    ppppppuVar20 = pppppppuVar34[0x13];
  }
  pppppppuVar46 = pppppppuVar34 + 0x12;
  pppppppuVar43 = (uint *******)*param_2;
  pppppppuVar22 = (uint *******)param_2[2];
  if (ppppppuVar20 == (uint ******)0x0) {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__assign_trivialB8nn220000INS_11__wrap_iterIPKcEESA_EEvT_T0_m
              (pppppppuVar46,pppppppuVar43,(byte *)((long)pppppppuVar43 + (long)pppppppuVar22),
               pppppppuVar22);
  }
  else if (pppppppuVar22 != (uint *******)0x0) {
    puVar42 = (undefined1 *)0x0;
    do {
      bVar29 = *(byte *)((long)pppppppuVar43 + (long)puVar42);
      pppppppuVar45 = (uint *******)(ulong)bVar29;
      bVar28 = *(byte *)pppppppuVar46;
      if ((bVar28 & 1) == 0) {
        puVar44 = (undefined1 *)0x16;
        if (bVar28 == 0x2c) {
code_r0x003dab90:
          pppppppuVar30 = (uint *******)puVar44;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (pppppppuVar46,pppppppuVar30,1,pppppppuVar30,pppppppuVar30,0,0);
          puVar44 = (undefined1 *)pppppppuVar30;
          goto code_r0x003dabc2;
        }
        pppppppuVar30 = (uint *******)(ulong)(bVar28 >> 1);
        *(byte *)pppppppuVar46 = bVar28 + 2;
        ppppppuVar20 = (uint ******)((long)pppppppuVar34 + 0x91);
      }
      else {
        pppppppuVar30 = (uint *******)pppppppuVar34[0x13];
        puVar44 = (undefined1 *)(((ulong)pppppppuVar34[0x12] & 0xfffffffffffffffe) - 1);
        if (pppppppuVar30 == (uint *******)puVar44) goto code_r0x003dab90;
code_r0x003dabc2:
        ppppppuVar20 = pppppppuVar34[0x14];
        pppppppuVar34[0x13] = (uint ******)((long)pppppppuVar30 + 1);
      }
      *(byte *)((long)ppppppuVar20 + (long)pppppppuVar30) = bVar29;
      ((byte *)((long)ppppppuVar20 + 1))[(long)pppppppuVar30] = 0;
      puVar42 = (undefined1 *)((long)puVar42 + 1);
    } while (pppppppuVar22 != (uint *******)puVar42);
  }
  bVar29 = *(byte *)(pppppppuVar34 + 0x12);
  if ((bVar29 & 1) == 0) {
    ppppppuVar20 = (uint ******)(ulong)(bVar29 >> 1);
  }
  else {
    ppppppuVar20 = pppppppuVar34[0x13];
  }
  lVar21 = 0;
  if (ppppppuVar20 < (uint ******)0x4) goto code_r0x003dad76;
  pppppppuVar22 = (uint *******)((long)pppppppuVar34 + 0x91);
  puVar42 = (undefined1 *)pppppppuVar22;
  if ((bVar29 & 1) != 0) {
    puVar42 = (undefined1 *)pppppppuVar34[0x14];
  }
  bVar29 = *puVar42;
  bVar28 = bVar29 - 0x30;
  pppppppuVar43 = (uint *******)0xffffffff;
  if ((bVar28 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)bVar28 & 0x3f) & 1) != 0)) {
    pbVar1 = (byte *)((long)puVar42 + 1);
    bVar37 = *pbVar1 - 0x30;
    if ((bVar37 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)bVar37 & 0x3f) & 1) != 0)) {
      pbVar2 = (byte *)((long)puVar42 + 2);
      bVar40 = *pbVar2 - 0x30;
      if ((bVar40 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)bVar40 & 0x3f) & 1) != 0)) {
        bVar3 = *(byte *)((long)puVar42 + 3);
        pppppppuVar45 = (uint *******)(ulong)bVar3;
        uVar31 = bVar3 - 0x30;
        puVar42 = (undefined1 *)(ulong)uVar31;
        if (((byte)uVar31 < 0x37) &&
           (puVar42 = (undefined1 *)(ulong)(uVar31 & 0xff),
           (0x7e0000007e03ffU >> ((ulong)puVar42 & 0x3f) & 1) != 0)) {
          pppppppuVar45 =
               (uint *******)(ulong)((uint)bVar3 + *(int *)(&UNK_001fe318 + (long)puVar42 * 4));
          uVar31 = (((uint)*pbVar1 + *(int *)(&UNK_001fe318 + (ulong)bVar37 * 4)) * 0x10 |
                    ((uint)bVar29 + *(int *)(&UNK_001fe318 + (ulong)bVar28 * 4)) * 0x100 |
                   (uint)*pbVar2 + *(int *)(&UNK_001fe318 + (ulong)bVar40 * 4)) << 4 |
                   (uint)bVar3 + *(int *)(&UNK_001fe318 + (long)puVar42 * 4);
          pppppppuVar43 = (uint *******)(ulong)uVar31;
          if (0xffefffff < uVar31 - 0x100001) {
            pppppppuVar45 = (uint *******)&adb_trace_mask;
            puVar42 = adb_trace_severity;
            if (((byte)adb_trace_mask & 2) == 0) goto code_r0x003dadc0;
            if ((int)adb_trace_severity._4_4_ < 2) goto code_r0x003dbc93;
            goto code_r0x003dadc0;
          }
        }
      }
    }
  }
  if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
     (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
    pppppppuVar45 = (uint *******)func_0x0099bce0();
    uVar31 = *(uint *)pppppppuVar45;
    puVar42 = (undefined1 *)(ulong)uVar31;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(&uStack_2270,&UNK_0015b0ed,0x337,1,0);
    pppppppuVar22 = (uint *******)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
    puVar44 = auStack_2230;
    _ZN7android4base12StringPrintfEPKcz(puVar44,&UNK_001613d6,*(uint *)pppppppuVar34,pppppppuVar43);
    func_0x0032e5a0(pppppppuVar22,puVar44);
    if ((auStack_2230[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_2220._0_8_,auStack_2230._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&uStack_2270);
    *(uint *)pppppppuVar45 = uVar31;
  }
code_r0x003dad6e:
  do {
    (*(code *)pppppppuVar34[6])();
    lVar21 = 0xffffffff;
code_r0x003dad76:
    while( true ) {
      uVar31 = (uint)pppppppuVar43;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2190) {
        return lVar21;
      }
      func_0x0099bd00();
code_r0x003dbc93:
      cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar15 != '\0') {
        puVar26 = (undefined4 *)func_0x0099bce0();
        uVar4 = *puVar26;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_2270,&UNK_0015b0ed,0x33b,1,0);
        puVar44 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
        _ZN7android4base12StringPrintfEPKcz
                  (auStack_2230,&UNK_001789f5,*(uint *)pppppppuVar34,uVar31);
        func_0x0032e5a0(puVar44,auStack_2230);
        if ((auStack_2230[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(auStack_2220._0_8_,auStack_2230._0_8_ & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&uStack_2270);
        *puVar26 = uVar4;
        puVar42 = adb_trace_severity;
        pppppppuVar45 = (uint *******)&adb_trace_mask;
      }
code_r0x003dadc0:
      lVar21 = 0;
      pppppppuVar43 = (uint *******)((ulong)uVar31 + 4);
      bVar29 = *(byte *)(pppppppuVar34 + 0x12);
      if ((bVar29 & 1) == 0) {
        pppppppuVar30 = (uint *******)(ulong)(bVar29 >> 1);
      }
      else {
        pppppppuVar30 = (uint *******)pppppppuVar34[0x13];
      }
      if (pppppppuVar43 <= pppppppuVar30) break;
      if ((((ulong)*pppppppuVar45 & 2) != 0) && ((int)*(uint *)((long)puVar42 + 4) < 2)) {
        cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        lVar21 = 0;
        if (cVar15 != '\0') {
          pppppppuVar45 = (uint *******)func_0x0099bce0();
          puVar44 = (undefined1 *)(ulong)*(uint *)pppppppuVar45;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_2270,&UNK_0015b0ed,0x33e,1,0);
          pppppppuVar22 = (uint *******)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
          uVar33 = (ulong)*(uint *)pppppppuVar34;
          uVar31 = (uint)*(byte *)(pppppppuVar34 + 0x12);
          if ((*(byte *)(pppppppuVar34 + 0x12) & 1) == 0) {
code_r0x003dc136:
            ppppppuVar20 = (uint ******)(ulong)(uVar31 >> 1);
          }
          else {
            ppppppuVar20 = pppppppuVar34[0x13];
          }
          _ZN7android4base12StringPrintfEPKcz
                    (auStack_2230,&UNK_0017a1bd,uVar33,
                     (uint *******)((long)pppppppuVar43 - (long)ppppppuVar20));
          func_0x0032e5a0(pppppppuVar22);
          if ((auStack_2230[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(auStack_2220._0_8_);
          }
          _ZN7android4base10LogMessageD2Ev(&uStack_2270);
          *(uint *)pppppppuVar45 = (uint)puVar44;
          lVar21 = 0;
          puVar42 = auStack_2230;
          pppppppuVar43 = (uint *******)((long)pppppppuVar43 - (long)ppppppuVar20);
        }
      }
    }
    pppppppuVar30 = pppppppuVar22;
    if ((bVar29 & 1) != 0) {
      pppppppuVar30 = (uint *******)pppppppuVar34[0x14];
    }
    *(byte *)((long)pppppppuVar30 + (long)pppppppuVar43) = 0;
    if (((((ulong)*pppppppuVar45 & 2) != 0) && ((int)*(uint *)((long)puVar42 + 4) < 2)) &&
       (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
      puVar26 = (undefined4 *)func_0x0099bce0();
      uVar4 = *puVar26;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_2270,&UNK_0015b0ed,0x345,1,0);
      puVar44 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
      pppppppuVar45 = pppppppuVar22;
      if (((ulong)pppppppuVar34[0x12] & 1) != 0) {
        pppppppuVar45 = (uint *******)pppppppuVar34[0x14];
      }
      pppppppuVar43 = (uint *******)auStack_2230;
      _ZN7android4base12StringPrintfEPKcz
                (pppppppuVar43,&UNK_00167ae1,*(uint *)pppppppuVar34,
                 (uint *)((long)pppppppuVar45 + 4));
      func_0x0032e5a0(puVar44,pppppppuVar43);
      if ((auStack_2230[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(auStack_2220._0_8_,auStack_2230._0_8_ & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_2270);
      *puVar26 = uVar4;
      puVar42 = adb_trace_severity;
      pppppppuVar45 = (uint *******)&adb_trace_mask;
    }
    bVar29 = *(byte *)(pppppppuVar34 + 0x12);
    if ((bVar29 & 1) == 0) {
      ppppppuVar20 = (uint ******)(ulong)(bVar29 >> 1);
    }
    else {
      ppppppuVar20 = pppppppuVar34[0x13];
    }
    if (ppppppuVar20 < (uint ******)0x4) {
code_r0x003dc12a:
      uVar31 = func_0x0032fc70(&UNK_001705cc);
      uVar33 = extraout_RDX_00;
      goto code_r0x003dc136;
    }
    pppppppuVar30 = pppppppuVar22;
    if ((bVar29 & 1) != 0) {
      pppppppuVar30 = (uint *******)pppppppuVar34[0x14];
    }
    puStack_2240 = (uint *)((long)pppppppuVar30 + 4);
    pppppppuStack_2238 = (uint *******)((long)ppppppuVar20 - 4);
    if (((((ulong)*pppppppuVar45 & 0x200) != 0) && ((int)*(uint *)((long)puVar42 + 0x24) < 2)) &&
       (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
      pppppppuVar43 = (uint *******)func_0x0099bce0();
      uVar31 = *(uint *)pppppppuVar43;
      puVar42 = (undefined1 *)(ulong)uVar31;
      puVar44 = auStack_2230;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar44,&UNK_0015b0ed,0x34a,1,0);
      uVar19 = _ZN7android4base10LogMessage6streamEv(puVar44);
      uVar19 = func_0x0032eb30(uVar19,&UNK_001803b9,0x12);
      uVar19 = func_0x0032eb30(uVar19,puStack_2240,pppppppuStack_2238);
      func_0x0032eb30(uVar19,&UNK_00162c6d,1);
      _ZN7android4base10LogMessageD2Ev(puVar44);
      *(uint *)pppppppuVar43 = uVar31;
    }
    cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                       (puStack_2240,pppppppuStack_2238,&UNK_001643d9,0xc);
    if (cVar15 == '\0') {
      cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (puStack_2240,pppppppuStack_2238,&UNK_00173f7c,0x12);
      if (cVar15 == '\0') {
        cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (puStack_2240,pppppppuStack_2238,&UNK_0018ad4b,9);
        if (cVar15 == '\0') {
          cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (puStack_2240,pppppppuStack_2238,&UNK_0017bb27,0xb);
          if (cVar15 == '\0') {
            cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                               (puStack_2240,pppppppuStack_2238,&UNK_0015752c,5);
            if (cVar15 == '\0') {
              puStack_2240 = (uint *)0x0;
              pppppppuStack_2238 = (uint *******)0x0;
              goto code_r0x003db107;
            }
            puStack_2240 = (uint *)((long)puStack_2240 + 5);
            pppppppuStack_2238 = (uint *******)((long)pppppppuStack_2238 + -5);
            uVar19 = 2;
          }
          else {
            puStack_2240 = (uint *)((long)puStack_2240 + 0xb);
            pppppppuStack_2238 = (uint *******)((long)pppppppuStack_2238 + -0xb);
            uVar19 = 1;
          }
          goto code_r0x003db113;
        }
        puStack_2240 = (uint *)((long)puStack_2240 + 9);
        pppppppuStack_2238 = (uint *******)((long)pppppppuStack_2238 + -9);
        pppppppuVar45 = (uint *******)0x0;
        uVar19 = 0;
        goto code_r0x003db45a;
      }
      puVar27 = (uint *)((long)puStack_2240 + 0x12);
      puVar38 = (uint *)((long)puStack_2240 + (long)pppppppuStack_2238);
      pppppppuVar30 = (uint *******)((long)pppppppuStack_2238 + -0x12);
      puStack_2240 = puVar27;
      pppppppuStack_2238 = pppppppuVar30;
      puVar35 = puVar27;
      puVar36 = puVar38;
      if (pppppppuVar30 == (uint *******)0x0) {
code_r0x003db297:
        if ((puVar35 == puVar38) ||
           (bVar29 = (byte)*puVar35 - 0x30, pppppppuVar30 = (uint *******)(ulong)bVar29,
           puVar36 = puVar35, 9 < bVar29)) goto code_r0x003db404;
        auStack_21a0 = (undefined1  [16])0x0;
        auStack_21b0 = (undefined1  [16])0x0;
        auStack_21c0 = (undefined1  [16])0x0;
        auStack_21d0 = (undefined1  [16])0x0;
        auStack_21e0 = (undefined1  [16])0x0;
        auStack_21f0 = (undefined1  [16])0x0;
        auStack_2200 = (undefined1  [16])0x0;
        auStack_2210 = (undefined1  [16])0x0;
        auStack_2220 = (undefined1  [16])0x0;
        auStack_2230 = (undefined1  [16])0x0;
        lVar21 = 0x14;
        while (uVar31 = *puVar35, 0xf5 < (byte)((byte)uVar31 - 0x3a)) {
          puVar35 = (uint *)((long)puVar35 + 1);
          *(ulong *)(auStack_2230 + lVar21 * 8 + -8) = (ulong)(byte)((byte)uVar31 - 0x30);
          lVar21 = lVar21 + -1;
          if ((lVar21 == 0) || (puVar35 == puVar38)) break;
        }
        pppppppuVar45 = (uint *******)((lVar21 << 0x20) >> 0x1d);
        uVar33 = *(ulong *)(auStack_2230 + (long)pppppppuVar45);
        puVar42 = (undefined1 *)pppppppuVar45;
        if ((int)lVar21 < 0x12) {
          uVar25 = 0;
          if (pppppppuVar45 < (uint *******)0x89) {
            uVar25 = 0x88 - (long)pppppppuVar45;
          }
          if (uVar25 < 0x18) {
            plVar39 = (long *)&UNK_0018fd78;
            pppppppuVar30 = pppppppuVar45;
          }
          else {
            uVar31 = ((uint)(uVar25 >> 3) & 0x1fffffff) + 1;
            uVar41 = uVar31 & 0x3c;
            plVar39 = (long *)(&UNK_0018fd78 + uVar41 * 8);
            pppppppuVar30 = (uint *******)((ulong)(uVar41 * 8) + (long)pppppppuVar45);
            lVar48 = 0;
            lVar49 = 0;
            lVar50 = 0;
            puVar42 = (undefined1 *)0x0;
            do {
              uVar25 = *(ulong *)(auStack_2230 + 8 + (long)pppppppuVar45 + (long)puVar42 * 8);
              uVar8 = *(ulong *)((long)(auStack_2230 + 8 + (long)pppppppuVar45 + (long)puVar42 * 8)
                                + 8);
              uVar9 = *(ulong *)(auStack_2220 + 8 + (long)pppppppuVar45 + (long)puVar42 * 8);
              uVar10 = *(ulong *)((long)(auStack_2220 + 8 + (long)pppppppuVar45 + (long)puVar42 * 8)
                                 + 8);
              uVar11 = *(ulong *)(&UNK_0018fd78 + (long)puVar42 * 8);
              uVar12 = *(ulong *)(&UNK_0018fd80 + (long)puVar42 * 8);
              uVar13 = *(ulong *)(&UNK_0018fd88 + (long)puVar42 * 8);
              uVar14 = *(ulong *)(&UNK_0018fd90 + (long)puVar42 * 8);
              uVar33 = uVar33 + (uVar11 & 0xffffffff) * (uVar25 & 0xffffffff) +
                       ((uVar25 >> 0x20) * (uVar11 & 0xffffffff) +
                        (uVar11 >> 0x20) * (uVar25 & 0xffffffff) << 0x20);
              lVar48 = lVar48 + (uVar12 & 0xffffffff) * (uVar8 & 0xffffffff) +
                       ((uVar8 >> 0x20) * (uVar12 & 0xffffffff) +
                        (uVar12 >> 0x20) * (uVar8 & 0xffffffff) << 0x20);
              lVar49 = lVar49 + (uVar13 & 0xffffffff) * (uVar9 & 0xffffffff) +
                       ((uVar9 >> 0x20) * (uVar13 & 0xffffffff) +
                        (uVar13 >> 0x20) * (uVar9 & 0xffffffff) << 0x20);
              lVar50 = lVar50 + (uVar14 & 0xffffffff) * (uVar10 & 0xffffffff) +
                       ((uVar10 >> 0x20) * (uVar14 & 0xffffffff) +
                        (uVar14 >> 0x20) * (uVar10 & 0xffffffff) << 0x20);
              puVar42 = (undefined1 *)((long)puVar42 + 4);
            } while ((uint *******)(ulong)uVar41 != (uint *******)puVar42);
            uVar33 = lVar50 + lVar48 + lVar49 + uVar33;
            if (uVar31 == uVar41) goto code_r0x003dbb78;
          }
          pppppppuVar30 = pppppppuVar30 + -1;
          do {
            uVar33 = uVar33 + *plVar39 * *(long *)(auStack_2220 + (long)pppppppuVar30);
            plVar39 = plVar39 + 1;
            pppppppuVar30 = pppppppuVar30 + 1;
          } while (pppppppuVar30 < (uint *******)0x88);
        }
code_r0x003dbb78:
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auStack_21a0._8_8_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulong *)(&UNK_0018fd70 + (0x1300000000 - (lVar21 << 0x20) >> 0x1d));
        auVar7 = auVar5 * auVar6;
        uVar25 = auVar7._0_8_;
        puVar36 = (uint *)((long)puVar35 - (ulong)(auVar7._8_8_ != 0));
        if (puVar36 != puVar38) {
          if (((byte)((byte)*puVar36 - 0x30) < 10) || (CARRY8(uVar33,uVar25)))
          goto code_r0x003dbbd2;
code_r0x003dbbc2:
          pppppppuVar45 = (uint *******)(uVar25 + uVar33);
          goto code_r0x003db410;
        }
        if (!CARRY8(uVar33,uVar25)) goto code_r0x003dbbc2;
code_r0x003dbbd2:
        pppppppuVar45 = auVar7._0_8_;
        cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        lVar21 = 0xffffffff;
        pppppppuVar43 = pppppppuVar34;
        if (cVar15 != '\0') {
          pppppppuVar45 = (uint *******)func_0x0099bce0();
          uVar31 = *(uint *)pppppppuVar45;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_2230,&UNK_0015b0ed,0x355,4,0);
          uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_2230);
          uVar19 = func_0x0032eb30(uVar19,&UNK_0015fc26,3);
          uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj
                             (uVar19,*(uint *)pppppppuVar34);
          uVar19 = func_0x0032eb30(uVar19,&UNK_00164408,0x26);
          pppppppuVar43 = pppppppuStack_2238;
          puVar27 = puStack_2240;
          goto code_r0x003dbc71;
        }
      }
      else {
        do {
          if ((byte)*puVar35 != 0x30) goto code_r0x003db297;
          pppppppuVar30 = (uint *******)((long)pppppppuVar30 + -1);
          puVar35 = (uint *)((long)puVar35 + 1);
        } while (pppppppuVar30 != (uint *******)0x0);
code_r0x003db404:
        auVar7._8_8_ = pppppppuVar30;
        auVar7._0_8_ = pppppppuVar45;
        if (puVar36 == puVar27) goto code_r0x003dbbd2;
        pppppppuVar45 = (uint *******)0x0;
code_r0x003db410:
        pppppppuStack_2238 = (uint *******)((long)puVar38 - (long)puVar36);
        puStack_2240 = puVar36;
        cVar15 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (puVar36,pppppppuStack_2238,&UNK_00173d53,1);
        if (cVar15 != '\0') {
          puStack_2240 = (uint *)((long)puStack_2240 + 1);
          pppppppuStack_2238 = (uint *******)((long)pppppppuStack_2238 + -1);
          uVar19 = 2;
          goto code_r0x003db45a;
        }
        cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        lVar21 = 0xffffffff;
        pppppppuVar43 = pppppppuVar34;
        if (cVar15 != '\0') {
          pppppppuVar45 = (uint *******)func_0x0099bce0();
          uVar31 = *(uint *)pppppppuVar45;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_2230,&UNK_0015b0ed,0x359,4,0);
          uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_2230);
          uVar19 = func_0x0032eb30(uVar19,&UNK_0015fc26,3);
          uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj
                             (uVar19,*(uint *)pppppppuVar34);
          pppppppuVar43 = (uint *******)0x24;
          puVar27 = (uint *)&UNK_001803cc;
code_r0x003dbc71:
          pppppppuVar22 = (uint *******)auStack_2230;
          puVar42 = (undefined1 *)(ulong)uVar31;
          func_0x0032eb30(uVar19,puVar27,pppppppuVar43);
          _ZN7android4base10LogMessageD2Ev(pppppppuVar22);
          lVar21 = 0xffffffff;
          *(uint *)pppppppuVar45 = uVar31;
          pppppppuVar43 = pppppppuVar34;
        }
      }
      goto code_r0x003dad76;
    }
    puStack_2240 = puStack_2240 + 3;
    pppppppuStack_2238 = (uint *******)((long)pppppppuStack_2238 + -0xc);
    cVar15 = _ZN8internal18parse_host_serviceEPNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEES5_S4_
                       (auStack_2250,&puStack_2240,puStack_2240);
    if (cVar15 == '\0') {
      cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar15 == '\0') goto code_r0x003dad6e;
      pppppppuVar45 = (uint *******)func_0x0099bce0();
      uVar31 = *(uint *)pppppppuVar45;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_2230,&UNK_0015b0ed,0x350,4,0);
      uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_2230);
      uVar19 = func_0x0032eb30(uVar19,&UNK_0015fc26,3);
      uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19,*(uint *)pppppppuVar34);
      uVar19 = func_0x0032eb30(uVar19,&UNK_001643e6,0x21);
      pppppppuVar30 = pppppppuStack_2238;
      puVar27 = puStack_2240;
code_r0x003db227:
      pppppppuVar22 = (uint *******)auStack_2230;
      func_0x0032eb30(uVar19,puVar27,pppppppuVar30);
      _ZN7android4base10LogMessageD2Ev(pppppppuVar22);
      *(uint *)pppppppuVar45 = uVar31;
      puVar42 = (undefined1 *)(ulong)uVar31;
      goto code_r0x003dad6e;
    }
code_r0x003db107:
    uVar19 = 2;
code_r0x003db113:
    pppppppuVar45 = (uint *******)0x0;
code_r0x003db45a:
    puVar44 = (undefined1 *)pppppppuStack_2238;
    puVar27 = puStack_2240;
    if (pppppppuStack_2238 == (uint *******)0x0) {
      puVar42 = (undefined1 *)pppppppuVar34;
      if (pppppppuVar34[7] == (uint ******)0x0) {
        _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (*(undefined4 *)(pppppppuVar34[2] + 9),&UNK_0017d625,0x1d);
        goto code_r0x003dad6e;
      }
      iVar16 = _ZNK10atransport18GetConnectionStateEv();
      if (5 < iVar16 - 6U) {
        _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (*(undefined4 *)(pppppppuVar34[2] + 9),&UNK_00173f8f,0x22);
        goto code_r0x003dad6e;
      }
      pppppppuVar34[2][4] = (uint *****)&UNK_003dc450;
      pppppppuVar34[2][5] = (uint *****)0x0;
      pppppppuVar34[2][6] = (uint *****)&UNK_003dc490;
      pppppppuVar34[2][2] = (uint *****)0x0;
      pppppppuVar34[2][7] = (uint *****)pppppppuVar34[7];
      bVar29 = *(byte *)(pppppppuVar34 + 0x12);
      if ((bVar29 & 1) == 0) {
        ppppppuVar20 = (uint ******)(ulong)(bVar29 >> 1);
      }
      else {
        ppppppuVar20 = pppppppuVar34[0x13];
      }
      if (ppppppuVar20 < (uint ******)0x4) goto code_r0x003dc12a;
      if ((bVar29 & 1) != 0) {
        pppppppuVar22 = (uint *******)pppppppuVar34[0x14];
      }
      pppppppuVar22 = (uint *******)((long)pppppppuVar22 + 4);
      _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                (pppppppuVar34[2],pppppppuVar22,(long)ppppppuVar20 - 4);
      pppppppuVar34[2] = (uint ******)0x0;
      (*(code *)pppppppuVar34[6])(pppppppuVar34);
      lVar21 = 1;
      goto code_r0x003dad76;
    }
    if (auStack_2250._8_8_ == 0) {
      uVar31 = _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
                         (puStack_2240,pppppppuStack_2238,uVar19,0,pppppppuVar45,
                          *(undefined4 *)(pppppppuVar34[2] + 9),pppppppuVar34);
    }
    else {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (auStack_2230,auStack_2250);
      if ((auStack_2230[0] & 1) == 0) {
        puVar42 = auStack_2230 + 1;
      }
      else {
        puVar42 = (undefined1 *)auStack_2220._0_8_;
      }
      uVar31 = _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
                         (puVar27,puVar44,uVar19,puVar42,pppppppuVar45,
                          *(undefined4 *)(pppppppuVar34[2] + 9),pppppppuVar34);
      if ((auStack_2230[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(auStack_2220._0_8_);
      }
    }
    pppppppuVar43 = (uint *******)(ulong)uVar31;
    pppppppuVar30 = pppppppuVar34 + 2;
    if (uVar31 == 1) {
      if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
         (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
        pppppppuVar45 = (uint *******)func_0x0099bce0();
        uVar31 = *(uint *)pppppppuVar45;
        pppppppuVar30 = (uint *******)(ulong)uVar31;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_2270,&UNK_0015b0ed,0x375,1,0);
        puVar44 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
        pppppppuVar43 = (uint *******)auStack_2230;
        _ZN7android4base12StringPrintfEPKcz(pppppppuVar43,&UNK_00184998,*(uint *)pppppppuVar34);
        func_0x0032e5a0(puVar44);
        if ((auStack_2230[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(auStack_2220._0_8_);
        }
        _ZN7android4base10LogMessageD2Ev(&uStack_2270);
        *(uint *)pppppppuVar45 = uVar31;
      }
      puVar42 = (undefined1 *)pppppppuVar30;
      if (((ulong)*pppppppuVar46 & 1) == 0) {
        *(byte *)pppppppuVar22 = 0;
        *(byte *)pppppppuVar46 = 0;
        lVar21 = 0;
      }
      else {
        *(undefined1 *)pppppppuVar34[0x14] = 0;
        pppppppuVar34[0x13] = (uint ******)0x0;
        lVar21 = 0;
      }
      goto code_r0x003dad76;
    }
    puVar42 = (undefined1 *)pppppppuVar30;
    if (uVar31 == 0) {
      if ((((adb_trace_mask._1_1_ & 2) == 0) || (1 < (int)adb_trace_severity._36_4_)) ||
         (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 == '\0'))
      goto code_r0x003dad6e;
      pppppppuVar45 = (uint *******)func_0x0099bce0();
      uVar31 = *(uint *)pppppppuVar45;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_2230,&UNK_0015b0ed,0x371,1,0);
      uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_2230);
      uVar19 = func_0x0032eb30(uVar19,&UNK_0015fc26,3);
      uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19,*(uint *)pppppppuVar34);
      uVar19 = func_0x0032eb30(uVar19,&UNK_001578bc,0x19);
      uVar19 = func_0x0032eb30(uVar19,puStack_2240,pppppppuStack_2238);
      pppppppuVar30 = (uint *******)0x1;
      puVar27 = (uint *)&UNK_00162c6d;
      goto code_r0x003db227;
    }
    pppppppuVar45 =
         (uint *******)
         _Z22host_service_to_socketNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_m
                   (puStack_2240,pppppppuStack_2238,auStack_2250._0_8_,auStack_2250._8_8_);
    puVar44 = (undefined1 *)pppppppuVar30;
    if (pppppppuVar45 != (uint *******)0x0) {
      _Z8SendOkayN7android4base11borrowed_fdE(*(undefined4 *)(*pppppppuVar30 + 9));
      (*pppppppuVar30)[4] = (uint *****)&UNK_003d79f0;
      (*pppppppuVar30)[5] = (uint *****)0x0;
      (*pppppppuVar30)[6] = (uint *****)&UNK_003d7a10;
      (*pppppppuVar30)[2] = (uint *****)pppppppuVar45;
      pppppppuVar45[2] = *pppppppuVar30;
      *pppppppuVar30 = (uint ******)0x0;
      if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
         (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
        pppppppuVar22 = (uint *******)func_0x0099bce0();
        uVar31 = *(uint *)pppppppuVar22;
        pppppppuVar30 = (uint *******)(ulong)uVar31;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_2270,&UNK_0015b0ed,0x39a,1,0);
        pppppppuVar43 = (uint *******)_ZN7android4base10LogMessage6streamEv(&uStack_2270);
        puVar44 = auStack_2230;
        _ZN7android4base12StringPrintfEPKcz(puVar44,&UNK_0018ad55,*(uint *)pppppppuVar34);
        func_0x0032e5a0(pppppppuVar43);
        if ((auStack_2230[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(auStack_2220._0_8_);
        }
        _ZN7android4base10LogMessageD2Ev(&uStack_2270);
        *(uint *)pppppppuVar22 = uVar31;
      }
      (*(code *)pppppppuVar34[6])();
      (*(code *)pppppppuVar45[4])(pppppppuVar45);
      lVar21 = 0;
      puVar42 = (undefined1 *)pppppppuVar30;
      goto code_r0x003dad76;
    }
    if ((((adb_trace_mask._1_1_ & 2) != 0) && ((int)adb_trace_severity._36_4_ < 2)) &&
       (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
      puVar27 = (uint *)func_0x0099bce0();
      uVar31 = *puVar27;
      puVar42 = (undefined1 *)(ulong)uVar31;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(auStack_2230,&UNK_0015b0ed,900,1,0);
      uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_2230);
      uVar19 = func_0x0032eb30(uVar19,&UNK_0015fc26,3);
      uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19,*(uint *)pppppppuVar34);
      uVar19 = func_0x0032eb30(uVar19,&UNK_0015c81c,0x21);
      uVar19 = func_0x0032eb30(uVar19,puStack_2240,pppppppuStack_2238);
      func_0x0032eb30(uVar19,&UNK_00162c6d,1);
      _ZN7android4base10LogMessageD2Ev(auStack_2230);
      *puVar27 = uVar31;
    }
    pppppppuVar45 = (uint *******)&bStack_2288;
    _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
              (pppppppuVar45,&UNK_0015e058);
    pppppppuVar22 = (uint *******)&bStack_22a0;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
              (pppppppuVar22,&puStack_2240);
    puVar23 = (ulong *)func_0x0032e820(pppppppuVar45,pppppppuVar22);
    uStack_2260 = puVar23[2];
    uStack_2270 = *puVar23;
    uStack_2268 = puVar23[1];
    *puVar23 = 0;
    puVar23[1] = 0;
    puVar23[2] = 0;
    pauVar24 = (undefined1 (*) [16])
               _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                         (&uStack_2270,&UNK_00162c6d);
    auStack_2220._0_8_ = *(undefined8 *)pauVar24[1];
    auStack_2230 = *pauVar24;
    *pauVar24 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar24[1] = 0;
    if ((uStack_2270 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_2260,uStack_2270 & 0xfffffffffffffffe);
    }
    if ((bStack_22a0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_2290,CONCAT71(uStack_229f,bStack_22a0) & 0xfffffffffffffffe);
    }
    if ((bStack_2288 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_2278,CONCAT71(uStack_2287,bStack_2288) & 0xfffffffffffffffe);
    }
    bVar47 = (auStack_2230[0] & 1) != 0;
    puVar32 = auStack_2230 + 1;
    if (bVar47) {
      puVar32 = (undefined1 *)auStack_2220._0_8_;
    }
    uVar33 = (ulong)(auStack_2230[0] >> 1);
    if (bVar47) {
      uVar33 = auStack_2230._8_8_;
    }
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (*(undefined4 *)(*pppppppuVar30 + 9),puVar32,uVar33);
    if ((auStack_2230[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_2220._0_8_);
    }
  } while( true );
}


