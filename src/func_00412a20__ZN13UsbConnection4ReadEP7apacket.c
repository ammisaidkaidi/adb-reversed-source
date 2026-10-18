// Function: _ZN13UsbConnection4ReadEP7apacket
// Address: 00412a20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN13UsbConnection4ReadEP7apacket(long param_1,uint *param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  uint *puVar17;
  undefined *puVar18;
  uint *puVar19;
  ulong *puVar20;
  long lVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  byte bStack_11a0;
  undefined7 uStack_119f;
  undefined8 uStack_1190;
  undefined1 auStack_1188 [8];
  ulong *puStack_1180;
  long lStack_1178;
  ulong *puStack_1170;
  uint *puStack_1168;
  byte *pbStack_1160;
  long lStack_1158;
  uint *puStack_1150;
  undefined *puStack_1148;
  uint uStack_1134;
  byte bStack_1130;
  undefined7 uStack_112f;
  undefined8 uStack_1120;
  undefined1 auStack_1118 [8];
  ulong uStack_1110;
  uint *puStack_1108;
  uint *puStack_1100;
  byte *pbStack_10f8;
  uint *puStack_10f0;
  uint *puStack_10e8;
  undefined *apuStack_10e0 [2];
  uint auStack_10d0 [2];
  long lStack_10c8;
  uint *puStack_10c0;
  uint *puStack_10b8;
  uint *puStack_10b0;
  undefined *puStack_10a8;
  uint auStack_10a0 [2];
  long lStack_1098;
  uint *puStack_1090;
  uint *puStack_1088;
  uint *puStack_1080;
  uint *puStack_1078;
  undefined *puStack_1070;
  undefined4 uStack_1064;
  undefined4 *puStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1048;
  uint auStack_1040 [2];
  uint uStack_1038;
  uint uStack_1034;
  uint uStack_1030;
  uint uStack_102c;
  undefined8 uStack_1028;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = *(uint **)(param_1 + 8);
  pbVar22 = (byte *)&adb_trace_mask;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    puStack_1070 = &UNK_00412f3f;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_1070 = &UNK_00412f4c;
      puVar13 = (undefined4 *)func_0x0099bce0();
      puStack_1060 = (undefined4 *)CONCAT44(puStack_1060._4_4_,*puVar13);
      puStack_1070 = &UNK_00412f80;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_1038,&UNK_00181cdb,0x29,1,0,0xffffffff);
      puStack_1070 = &UNK_00412f88;
      uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_1038);
      puStack_1070 = &UNK_00412f9c;
      func_0x0032eb30(uVar12,&UNK_0018670e,0xe);
      puStack_1070 = &UNK_00412fa4;
      _ZN7android4base10LogMessageD2Ev(&uStack_1038);
      *puVar13 = (uint)puStack_1060;
    }
  }
  puStack_1070 = &UNK_00412a6f;
  puVar7 = (uint *)_Z23usb_get_max_packet_sizeP10usb_handle(puVar9);
  if (puVar7 < (uint *)0x18) {
    do {
      puStack_1070 = &UNK_00412d52;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_1038,&UNK_00181cdb,0x2d,6,0,0xffffffff);
      puStack_1070 = &UNK_00412d5a;
      uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_1038);
      puStack_1070 = &UNK_00412d6e;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
      puStack_1070 = &UNK_00412d82;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0017eff8,0xf);
      puStack_1070 = &UNK_00412d92;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_1070 = &UNK_00412da6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00181913,2);
      puStack_1070 = &UNK_00412db6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_1070 = &UNK_00412dca;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00157a3e,0xc);
      puStack_1070 = &UNK_00412dde;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0017d795,0x12);
      puStack_1070 = &UNK_00412de9;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,puVar7);
      puStack_1070 = &UNK_00412df9;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0016973f,0xf);
      puStack_1070 = &UNK_00412e06;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,0x18);
      puStack_1070 = &UNK_00412e16;
      func_0x0032eb30(uVar12,&UNK_0017b788,2);
      puStack_1070 = &UNK_00412e1e;
      _ZN7android4base10LogMessageD2Ev(&uStack_1038);
    } while( true );
  }
  if ((uint *)0xfff < puVar7) {
    do {
      puStack_1070 = &UNK_00412e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_1038,&UNK_00181cdb,0x2e,6,0,0xffffffff);
      puStack_1070 = &UNK_00412e6a;
      uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_1038);
      puStack_1070 = &UNK_00412e7e;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
      puStack_1070 = &UNK_00412e92;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0017eff8,0xf);
      puStack_1070 = &UNK_00412ea2;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_1070 = &UNK_00412eb6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0016af8a,1);
      puStack_1070 = &UNK_00412ec6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_1070 = &UNK_00412eda;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0017d7a8,7);
      puStack_1070 = &UNK_00412eee;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0017d795,0x12);
      puStack_1070 = &UNK_00412ef9;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,puVar7);
      puStack_1070 = &UNK_00412f09;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00189761,10);
      puStack_1070 = &UNK_00412f16;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(uVar12,0x1000);
      puStack_1070 = &UNK_00412f26;
      func_0x0032eb30(uVar12,&UNK_0017b788,2);
      puStack_1070 = &UNK_00412f2e;
      _ZN7android4base10LogMessageD2Ev(&uStack_1038);
    } while( true );
  }
  puVar10 = &uStack_1038;
  puStack_1070 = &UNK_00412a9f;
  func_0x0099bdb0(puVar10,0,0x1000);
  puStack_1070 = &UNK_00412aad;
  puVar17 = puVar10;
  puVar19 = puVar9;
  uVar4 = _Z8usb_readP10usb_handlePvi(puVar9,puVar10,(ulong)puVar7 & 0xffffffff);
  if (uVar4 == 0x18) {
    *(undefined8 *)(param_2 + 4) = uStack_1028;
    *param_2 = uStack_1038;
    param_2[1] = uStack_1034;
    param_2[2] = uStack_1030;
    param_2[3] = uStack_102c;
    uVar11 = 1;
    if (param_2[3] != 0) {
      if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
        puVar19 = (uint *)0x1;
        puVar17 = (uint *)0x0;
        puStack_1070 = &UNK_0041307d;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        if (cVar3 != '\0') {
          puStack_1070 = &UNK_0041308a;
          puStack_1060 = (undefined4 *)func_0x0099bce0();
          uStack_1064 = *puStack_1060;
          puStack_1070 = &UNK_004130c2;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_1058,&UNK_00181cdb,0x41,1,0,0xffffffff);
          puStack_1070 = &UNK_004130ca;
          puVar10 = (uint *)_ZN7android4base10LogMessage6streamEv(&uStack_1058);
          puVar7 = &uStack_1038;
          puStack_1070 = &UNK_004130e8;
          _ZN7android4base12StringPrintfEPKcz(puVar7,&UNK_00187f51,param_2[3]);
          puStack_1070 = &UNK_004130f3;
          puVar17 = puVar7;
          func_0x0032e5a0(puVar10);
          if ((uStack_1038 & 1) != 0) {
            puVar17 = (uint *)(CONCAT44(uStack_1034,uStack_1038) & 0xfffffffffffffffe);
            puStack_1070 = &UNK_00413113;
            _ZdaPvSt11align_val_t(uStack_1028);
          }
          puVar19 = (uint *)&uStack_1058;
          puStack_1070 = &UNK_0041311f;
          _ZN7android4base10LogMessageD2Ev();
          *puStack_1060 = uStack_1064;
        }
      }
      if (param_2[3] < 0x100001) {
        puStack_1070 = &UNK_00412b04;
        uVar8 = _Z23usb_get_max_packet_sizeP10usb_handle(puVar9);
        uVar14 = (ulong)param_2[3];
        uVar11 = uVar14;
        if (uVar8 <= uVar14) {
          uVar11 = uVar14 % (uVar8 & 0xffffffff);
        }
        lVar16 = uVar8 - uVar11;
        if (uVar11 == 0) {
          lVar16 = 0;
        }
        puVar10 = param_2 + 6;
        puStack_1070 = &UNK_00412b31;
        _ZN5Block6resizeEm(puVar10,lVar16 + uVar14);
        puVar17 = *(uint **)(param_2 + 6);
        puStack_1070 = &UNK_00412b40;
        puVar19 = puVar9;
        uVar4 = _Z8usb_readP10usb_handlePvi(puVar9,puVar17,param_2[10]);
        if (uVar4 == param_2[3]) {
          puVar7 = (uint *)(ulong)uVar4;
          puVar17 = (uint *)(long)(int)uVar4;
          puStack_1070 = &UNK_00412b57;
          puVar19 = puVar10;
          _ZN5Block6resizeEm();
          if (-1 < (int)uVar4) {
            uVar11 = 1;
            if (((uVar4 != param_2[3]) && (uVar11 = 0, ((byte)adb_trace_mask & 8) != 0)) &&
               ((int)adb_trace_severity._12_4_ < 2)) {
              puVar19 = (uint *)0x1;
              puVar17 = (uint *)0x0;
              puStack_1070 = &UNK_00412b96;
              cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              uVar11 = 0;
              if (cVar3 != '\0') {
                puStack_1070 = &UNK_00412ba7;
                puVar9 = (uint *)func_0x0099bce0();
                uVar6 = *puVar9;
                pbVar22 = (byte *)(ulong)uVar6;
                puStack_1070 = &UNK_00412bd6;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_1058,&UNK_00181cdb,0x73,1,0,0xffffffff);
                puStack_1070 = &UNK_00412bde;
                puVar10 = (uint *)_ZN7android4base10LogMessage6streamEv(&uStack_1058);
                puVar19 = param_2 + 3;
                param_2 = &uStack_1038;
                puStack_1070 = &UNK_00412bff;
                _ZN7android4base12StringPrintfEPKcz(param_2,&UNK_0018af8d,*puVar19,uVar4);
                puStack_1070 = &UNK_00412c0a;
                puVar17 = param_2;
                func_0x0032e5a0(puVar10);
                if ((uStack_1038 & 1) != 0) {
                  puVar17 = (uint *)(CONCAT44(uStack_1034,uStack_1038) & 0xfffffffffffffffe);
                  puStack_1070 = &UNK_00412c2a;
                  _ZdaPvSt11align_val_t(uStack_1028);
                }
                puVar19 = (uint *)&uStack_1058;
                puStack_1070 = &UNK_00412c36;
                _ZN7android4base10LogMessageD2Ev();
                *puVar9 = uVar6;
                uVar11 = 0;
              }
            }
            goto code_r0x00412ced;
          }
        }
      }
      uVar11 = 0;
      if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
        puVar19 = (uint *)0x1;
        puVar17 = (uint *)0x0;
        puStack_1070 = &UNK_0041313f;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        uVar11 = 0;
        if (cVar3 != '\0') {
          puStack_1070 = &UNK_00413150;
          param_2 = (uint *)func_0x0099bce0();
          uVar4 = *param_2;
          puStack_1070 = &UNK_0041317f;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_1038,&UNK_00181cdb,0x6f,1,0,0xffffffff);
          puStack_1070 = &UNK_00413187;
          uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_1038);
          puVar17 = (uint *)&UNK_00186871;
          uVar15 = 0x1d;
          goto code_r0x00413193;
        }
      }
    }
  }
  else {
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      puVar19 = (uint *)0x1;
      puVar17 = (uint *)0x0;
      puVar7 = (uint *)(ulong)uVar4;
      puStack_1070 = &UNK_00412fc1;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        puStack_1070 = &UNK_00412fce;
        param_2 = (uint *)func_0x0099bce0();
        puStack_1060 = (undefined4 *)CONCAT44(puStack_1060._4_4_,*param_2);
        puStack_1070 = &UNK_00413002;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1040,&UNK_00181cdb,0x33,1,0,0xffffffff);
        puStack_1070 = &UNK_0041300a;
        puVar9 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_1040);
        puVar10 = (uint *)&uStack_1058;
        puStack_1070 = &UNK_0041302d;
        _ZN7android4base12StringPrintfEPKcz(puVar10,&UNK_00167cc3,puVar7,0x18);
        puStack_1070 = &UNK_00413038;
        puVar17 = puVar10;
        func_0x0032e5a0(puVar9);
        if (((byte)uStack_1058 & 1) != 0) {
          puVar17 = (uint *)(CONCAT71(uStack_1058._1_7_,(byte)uStack_1058) & 0xfffffffffffffffe);
          puStack_1070 = &UNK_00413058;
          _ZdaPvSt11align_val_t(uStack_1048);
        }
        puVar19 = auStack_1040;
        puStack_1070 = &UNK_00413064;
        _ZN7android4base10LogMessageD2Ev();
        *param_2 = (uint)puStack_1060;
      }
    }
    uVar11 = 0;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      puVar19 = (uint *)0x1;
      puVar17 = (uint *)0x0;
      puStack_1070 = &UNK_00412c7e;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar11 = 0;
      if (cVar3 != '\0') {
        puStack_1070 = &UNK_00412c8b;
        param_2 = (uint *)func_0x0099bce0();
        uVar4 = *param_2;
        puStack_1070 = &UNK_00412cba;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_1038,&UNK_00181cdb,100,1,0,0xffffffff);
        puStack_1070 = &UNK_00412cc2;
        uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_1038);
        puVar17 = (uint *)&UNK_0017efd2;
        uVar15 = 0x25;
code_r0x00413193:
        puVar9 = (uint *)(ulong)uVar4;
        puVar7 = &uStack_1038;
        puStack_1070 = &UNK_0041319b;
        func_0x0032eb30(uVar12,puVar17,uVar15);
        puStack_1070 = &UNK_004131a3;
        puVar19 = puVar7;
        _ZN7android4base10LogMessageD2Ev();
        uVar11 = 0;
        *param_2 = uVar4;
      }
    }
  }
code_r0x00412ced:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar11;
  }
  puStack_1070 = &UNK_004131b2;
  func_0x0099bd00();
  puStack_1070 = &stack0xfffffffffffffff8;
  puStack_1078 = puVar9;
  puStack_1080 = puVar7;
  puStack_1088 = puVar10;
  puStack_1090 = param_2;
  lStack_1098 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = puVar17[3];
  puVar9 = (uint *)(ulong)uVar4;
  puStack_10a8 = &UNK_004131f4;
  iVar5 = _Z9usb_writeP10usb_handlePKvi(*(undefined8 *)(puVar19 + 2));
  if (iVar5 == 0x18) {
    puVar7 = (uint *)CONCAT71((int7)((ulong)param_2 >> 8),1);
    if (puVar17[3] == 0) goto code_r0x0041327d;
    puStack_10a8 = &UNK_00413213;
    uVar6 = _Z9usb_writeP10usb_handlePKvi
                      (*(undefined8 *)(puVar19 + 2),*(undefined8 *)(puVar17 + 6),puVar9);
    if (uVar6 == uVar4) goto code_r0x0041327d;
    puVar7 = (uint *)0x0;
    puStack_10a8 = &UNK_00413226;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 == '\0') goto code_r0x0041327d;
    puStack_10a8 = &UNK_0041322f;
    puVar9 = (uint *)func_0x0099bce0();
    puVar17 = (uint *)(ulong)*puVar9;
    puStack_10a8 = &UNK_0041325a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_10a0,&UNK_00181cdb,0x8e,4,0,puVar17);
    puStack_10a8 = &UNK_00413262;
    uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_10a0);
    puVar18 = &UNK_001724b7;
  }
  else {
    puVar7 = (uint *)0x0;
    puStack_10a8 = &UNK_00413279;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 == '\0') goto code_r0x0041327d;
    puStack_10a8 = &UNK_004132a0;
    puVar9 = (uint *)func_0x0099bce0();
    puVar17 = (uint *)(ulong)*puVar9;
    puStack_10a8 = &UNK_004132cb;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_10a0,&UNK_00181cdb,0x89,4,0,puVar17);
    puStack_10a8 = &UNK_004132d3;
    uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_10a0);
    puVar18 = &UNK_00187f30;
  }
  puVar19 = auStack_10a0;
  puVar7 = (uint *)0x0;
  puStack_10a8 = &UNK_004132e7;
  func_0x0032eb30(uVar12,puVar18,0x20);
  puStack_10a8 = &UNK_004132ef;
  _ZN7android4base10LogMessageD2Ev(puVar19);
  *puVar9 = (uint)puVar17;
code_r0x0041327d:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1098) {
    return (ulong)puVar7 & 0xffffffff;
  }
  puStack_10a8 = &UNK_004132f9;
  func_0x0099bd00();
  lStack_10c8 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (uint *)0x6;
  apuStack_10e0[0] = &UNK_00413326;
  puStack_10c0 = puVar7;
  puStack_10b8 = puVar9;
  puStack_10b0 = puVar17;
  puStack_10a8 = (undefined *)&puStack_1070;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar3 != '\0') {
    apuStack_10e0[0] = &UNK_0041334b;
    puVar7 = (uint *)func_0x0099bce0();
    uVar4 = *puVar7;
    puVar17 = (uint *)(ulong)uVar4;
    puVar9 = auStack_10d0;
    apuStack_10e0[0] = &UNK_00413377;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar9,&UNK_00181cdb,0x97,6,0,0xffffffff);
    apuStack_10e0[0] = &UNK_0041337f;
    uVar12 = _ZN7android4base10LogMessage6streamEv(puVar9);
    apuStack_10e0[0] = &UNK_00413393;
    func_0x0032eb30(uVar12,&UNK_001661a7,0x12);
    apuStack_10e0[0] = &UNK_0041339b;
    puVar10 = puVar9;
    _ZN7android4base10LogMessageD2Ev();
    *puVar7 = uVar4;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10c8) {
    return 0;
  }
  apuStack_10e0[0] = &UNK_004133a5;
  puStack_10f0 = (uint *)func_0x0099bd00();
  pbStack_10f8 = &UNK_004133c2;
  puStack_10e8 = puVar7;
  apuStack_10e0[0] = (undefined *)&puStack_10a8;
  _Z9usb_resetP10usb_handle(*(undefined8 *)(puVar10 + 2));
  lVar16 = *(long *)(puVar10 + 2);
  puStack_1108 = puStack_10e8;
  uStack_1110 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)(lVar16 + 0xd8);
  puStack_1148 = &UNK_004150f0;
  puStack_1100 = puVar19;
  pbStack_10f8 = pbVar22;
  puStack_10f0 = puVar9;
  puStack_10e8 = puVar17;
  _ZNSt3__15mutex4lockEv(puVar1);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_1148 = &UNK_004151d1;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_1148 = &UNK_004151de;
      puVar17 = (uint *)func_0x0099bce0();
      uStack_1134 = *puVar17;
      puStack_1148 = &UNK_0041520c;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1118,&UNK_0016974f,0x1f2,1,0,0xffffffff);
      puStack_1148 = &UNK_00415214;
      puVar19 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_1118);
      pbVar22 = &bStack_1130;
      puStack_1148 = &UNK_00415233;
      _ZN7android4base12StringPrintfEPKcz
                (pbVar22,&UNK_0016150f,lVar16,*(undefined4 *)(lVar16 + 0x18));
      puStack_1148 = &UNK_0041523e;
      func_0x0032e5a0(puVar19,pbVar22);
      if ((bStack_1130 & 1) != 0) {
        puStack_1148 = &UNK_00415255;
        _ZdaPvSt11align_val_t(uStack_1120,CONCAT71(uStack_112f,bStack_1130) & 0xfffffffffffffffe);
      }
      puStack_1148 = &UNK_0041525e;
      _ZN7android4base10LogMessageD2Ev(auStack_1118);
      *puVar17 = uStack_1134;
    }
  }
  if (*(char *)(lVar16 + 0xa2) == '\0') {
    *(undefined1 *)(lVar16 + 0xa2) = 1;
    if (*(int *)(lVar16 + 0x2c) == 0) {
      puStack_1148 = &UNK_0041519b;
      _Z24unregister_usb_transportP10usb_handle(lVar16);
    }
    else {
      if (*(long *)(lVar16 + 0x108) != 0) {
        puStack_1148 = &UNK_00415140;
        func_0x0099c400(*(long *)(lVar16 + 0x108),0xe);
      }
      puStack_1148 = &UNK_00415154;
      func_0x0099c020(*(undefined4 *)(lVar16 + 0x18),0x550b,lVar16 + 0x30);
      puStack_1148 = &UNK_00415168;
      func_0x0099c020(*(undefined4 *)(lVar16 + 0x18),0x550b,lVar16 + 0x68);
      *(undefined4 *)(lVar16 + 0x34) = 0xffffffed;
      *(undefined4 *)(lVar16 + 0x6c) = 0xffffffed;
      *(undefined2 *)(lVar16 + 0xa0) = 0;
      lVar16 = lVar16 + 0xa8;
      puStack_1148 = &UNK_00415191;
      _ZNSt3__118condition_variable10notify_allEv(lVar16);
    }
  }
  puStack_1148 = &UNK_004151a3;
  puVar20 = puVar1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_1110) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_1148 = &UNK_0041526e;
  func_0x0099bd00();
  lVar21 = lRam0000000000a008a0;
  lStack_1178 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_1180 = puVar20;
  puStack_1170 = puVar1;
  puStack_1168 = puVar19;
  pbStack_1160 = pbVar22;
  lStack_1158 = lVar16;
  puStack_1150 = puVar17;
  puStack_1148 = (undefined *)apuStack_10e0;
  _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
  func_0x003f0c30(uRam0000000000a008a8,&puStack_1180);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar13 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar13;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1188,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_1188);
      _ZN7android4base12StringPrintfEPKcz
                (&bStack_11a0,&UNK_0015c986,puStack_1180,(int)puStack_1180[3]);
      func_0x0032e5a0(uVar12,&bStack_11a0);
      if ((bStack_11a0 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_1190,CONCAT71(uStack_119f,bStack_11a0) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_1188);
      *puVar13 = uVar2;
    }
  }
  puVar1 = puStack_1180;
  if (puStack_1180 != (ulong *)0x0) {
    if ((int)puStack_1180[3] != -1) {
      func_0x0099bd10();
    }
    _ZNSt3__118condition_variableD2Ev(puVar1 + 0x15);
    if ((*puVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar1,0x110);
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1178) {
    return 0;
  }
  func_0x0099bd00();
  return *(ulong *)(lVar21 + 0x20);
}


