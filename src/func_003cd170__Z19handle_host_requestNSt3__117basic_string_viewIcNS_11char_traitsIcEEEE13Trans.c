// Function: _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
// Address: 003cd170
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
              (byte *param_1,ulong param_2,undefined4 param_3,byte *param_4,long param_5,
              ulong param_6,long param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  char cVar28;
  byte bVar29;
  undefined1 uVar30;
  int iVar31;
  undefined4 uVar32;
  uint uVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  char *pcVar36;
  byte *pbVar37;
  long *plVar38;
  ulong uVar39;
  byte *pbVar40;
  undefined4 *puVar41;
  undefined8 uVar42;
  ulong uVar43;
  byte *pbVar44;
  undefined1 *puVar45;
  byte *pbVar46;
  undefined1 *puVar47;
  undefined1 auVar48 [8];
  undefined7 *puVar49;
  undefined *puVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  byte *pbVar54;
  long in_FS_OFFSET;
  bool bVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1c8;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  ulong uStack_1b8;
  undefined7 *puStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 *puStack_198;
  undefined1 auStack_188 [16];
  byte *pbStack_178;
  undefined1 auStack_168 [8];
  ulong uStack_160;
  byte *pbStack_158;
  byte *pbStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [32];
  long *plStack_118;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar32 = (undefined4)param_6;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_148 = param_1;
  uStack_140 = param_2;
  if ((param_2 == 4) && (*(int *)param_1 == 0x6c6c696b)) {
    if (cRam0000000000a005f8 != '\x01') goto code_r0x003cf1b6;
    cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
    if (cVar27 != '\0') {
      puVar41 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar41;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_d8,&UNK_00181a61,0x505,3,0,0xffffffff);
      uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
      func_0x0032eb30(uVar42,&UNK_0015b049,0x1f);
      _ZN7android4base10LogMessageD2Ev(auStack_d8);
      *puVar41 = uVar1;
    }
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (param_6 & 0xffffffff,&UNK_001577ea,0x25);
  }
  pbVar37 = (byte *)(param_6 & 0xffffffff);
  if ((((adb_trace_mask._1_1_ & 2) != 0) && ((int)adb_trace_severity._36_4_ < 2)) &&
     (cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar27 != '\0')) {
    puVar41 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar41;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_d8,&UNK_00181a61,0x513,1,0,0xffffffff);
    uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
    uVar42 = func_0x0032eb30(uVar42,&UNK_00178944,0x14);
    uVar42 = func_0x0032eb30(uVar42,pbStack_148,uStack_140);
    func_0x0032eb30(uVar42,&UNK_001692c7,1);
    _ZN7android4base10LogMessageD2Ev(auStack_d8);
    *puVar41 = uVar1;
  }
  pbVar46 = pbStack_148;
  if (uStack_140 < 9) {
    if (5 < uStack_140) {
code_r0x003cd247:
      if (*(short *)(pbStack_148 + 4) == 0x3a74 && *(int *)pbStack_148 == 0x726f7074)
      goto code_r0x003cd29b;
    }
    pbVar44 = pbVar37;
    pbVar40 = pbVar37;
    switch(uStack_140) {
    case 7:
      iVar31 = func_0x0099bf90(pbStack_148,&UNK_001831cd);
      if (iVar31 != 0) break;
      bVar55 = false;
code_r0x003cd40e:
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar27 != '\0')) {
        puVar41 = (undefined4 *)func_0x0099bce0();
        uVar32 = *puVar41;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_d8,&UNK_00181a61,0x581,1,0,0xffffffff);
        uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
        func_0x0032eb30(uVar42,&UNK_001679ea,0x16);
        _ZN7android4base10LogMessageD2Ev(auStack_d8);
        *puVar41 = uVar32;
      }
      auStack_d8 = (undefined1  [16])0x0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar12 << 0x40;
      _Z15list_transports17TrackerOutputType(auStack_d8,bVar55);
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar27 != '\0')) {
        puVar41 = (undefined4 *)func_0x0099bce0();
        uVar32 = *puVar41;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_168,&UNK_00181a61,0x583,1,0,0xffffffff);
        uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_168);
        func_0x0032eb30(uVar42,&UNK_00184979,0x16);
        _ZN7android4base10LogMessageD2Ev(auStack_168);
        *puVar41 = uVar32;
      }
      pbVar40 = (byte *)(param_6 & 0xffffffff);
      _Z8SendOkayN7android4base11borrowed_fdE(pbVar40);
      bVar55 = (auStack_d8[0] & 1) != 0;
      puVar47 = auStack_d8 + 1;
      if (bVar55) {
        puVar47 = (undefined1 *)auStack_c8._0_8_;
      }
      uVar43 = (ulong)(auStack_d8[0] >> 1);
      if (bVar55) {
        uVar43 = auStack_d8._8_8_;
      }
      _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (pbVar40,puVar47,uVar43);
      goto joined_r0x003ce8ae;
    case 8:
      iVar31 = func_0x0099bf90(pbStack_148,&UNK_00181813);
      if (iVar31 != 0) break;
      auStack_d8 = (undefined1  [16])0x0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar13 << 0x40;
      lVar34 = *(long *)(param_7 + 0x38);
      if ((lVar34 == 0) &&
         (lVar34 = _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                             (param_3,param_4,param_5,0,auStack_d8,0), lVar34 == 0))
      goto code_r0x003ce3a3;
      _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
                (auStack_168,lVar34 + 0xd0);
      goto code_r0x003cdbcb;
    case 9:
      iVar31 = func_0x0099bf90(pbStack_148,&UNK_0015b069);
      pbVar44 = pbVar46;
      if (iVar31 == 0) {
        bVar55 = pbVar46[8] == 0x6c && *(long *)pbVar46 == 0x2d73656369766564;
        goto code_r0x003cd40e;
      }
      break;
    case 0xd:
      if (*(long *)(pbStack_148 + 5) == 0x7375746174732d72 &&
          *(long *)pbStack_148 == 0x732d726576726573) {
        auStack_88 = (undefined1  [16])0x0;
        auStack_98 = (undefined1  [16])0x0;
        auStack_a8 = (undefined1  [16])0x0;
        auStack_b8 = (undefined1  [16])0x0;
        auStack_c8 = (undefined1  [16])0x0;
        auStack_d8 = (undefined1  [16])0x0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auStack_78._8_8_;
        auStack_78 = auVar20 << 0x40;
        _ZN3adb5proto15AdbServerStatusC1EPN6google8protobuf5ArenaE(auStack_d8,0);
        pcVar36 = (char *)func_0x0099be70(&UNK_001770d0);
        if (((pcVar36 == (char *)0x0) || (*pcVar36 != '0')) || (pcVar36[1] != '\0')) {
          cVar27 = _Z17is_libusb_enabledv();
          if (cVar27 == '\0') {
            cVar27 = _ZN19libadbusbconnection10is_enabledEv();
            if (cVar27 == '\0') {
              auStack_88._8_4_ = 1;
            }
            else {
              auStack_88._8_4_ = 4;
            }
          }
          else {
            auStack_88._8_4_ = 2;
          }
        }
        else {
          auStack_88._8_4_ = 3;
        }
        uVar32 = auStack_c8._0_4_;
        auStack_c8._0_4_ = auStack_c8._0_4_ | 0x100;
        lVar34 = func_0x0099be70(&UNK_0015c7b0);
        auStack_78[0] = lVar34 != 0;
        auStack_c8._0_4_ = uVar32 | 0x500;
        bVar29 = _ZN4mdns10is_enabledEv();
        auStack_88._12_4_ = 4 - (uint)bVar29;
        auStack_c8._0_4_ = auStack_c8._0_4_ | 0x201;
        auStack_168 = (undefined1  [8])0x312e302e37330c;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_c8 + 8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        func_0x0036b860(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 2;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_b8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        _ZN7android4base17GetExecutablePathEv(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 4;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_b8 + 8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        _Z14GetLogFilePathv(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 8;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_a8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        _Z12GetOSVersionv(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 0x10;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_a8 + 8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        uVar30 = _Z18burst_mode_enabledv();
        auStack_78[2] = uVar30;
        auStack_c8._0_2_ = auStack_c8._0_2_ | 0x1000;
        _Z17get_trace_settingv(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 0x20;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_98,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        uVar30 = _ZN4mdns10is_enabledEv();
        auStack_78[3] = uVar30;
        auStack_c8._0_2_ = auStack_c8._0_2_ | 0x2000;
        _Z25adb_auth_get_userkey_pathv(auStack_168);
        auStack_c8[0] = auStack_c8[0] | 0x40;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_98 + 8,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        if ((known_wifi_hosts_file[0] & 1) == 0) {
          pbStack_158 = (byte *)known_wifi_hosts_file._16_8_;
          auStack_168._1_7_ = known_wifi_hosts_file._1_7_;
          auStack_168[0] = known_wifi_hosts_file[0];
          uStack_160 = known_wifi_hosts_file._8_8_;
        }
        else {
          func_0x00330340(auStack_168,known_wifi_hosts_file._16_8_,known_wifi_hosts_file._8_8_);
        }
        auStack_c8[0] = auStack_c8[0] | 0x80;
        uVar43 = auStack_d8._8_8_;
        if ((auStack_d8._8_8_ & 1) != 0) {
          uVar43 = *(ulong *)(auStack_d8._8_8_ & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
                  (auStack_88,auStack_168,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        _auStack_168 = (undefined1  [16])0x0;
        pbStack_158 = (byte *)0x0;
        _ZNK6google8protobuf11MessageLite17SerializeToStringEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                  (auStack_d8,auStack_168);
        _Z8SendOkayN7android4base11borrowed_fdE(pbVar37);
        bVar55 = (auStack_168[0] & 1) != 0;
        pbVar46 = auStack_168 + 1;
        if (bVar55) {
          pbVar46 = pbStack_158;
        }
        uVar43 = (ulong)(auStack_168[0] >> 1);
        if (bVar55) {
          uVar43 = uStack_160;
        }
        _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (pbVar37,pbVar46,uVar43);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        _ZN3adb5proto15AdbServerStatusD2Ev(auStack_d8);
        iVar31 = 0;
      }
      else {
        iVar31 = func_0x0099bf90(pbStack_148,&UNK_00173d10);
        if (iVar31 != 0) break;
        auStack_d8 = (undefined1  [16])0x0;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = auStack_c8._8_8_;
        auStack_c8 = auVar14 << 0x40;
        uVar42 = _Z18supported_featuresv();
        func_0x003d00f0(auStack_d8,uVar42);
        cVar27 = _Z17is_libusb_enabledv();
        if (cVar27 != '\0') {
          _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRKPKcEEERS6_DpOT_
                    (auStack_d8,&kFeatureLibusb);
        }
        _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRKPKcEEERS6_DpOT_
                  (auStack_d8,&kFeaturePushSync);
        _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
                  (auStack_168,auStack_d8);
        func_0x003cf240(pbVar37,auStack_168);
        if ((auStack_168[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        func_0x0033abb0(auStack_d8);
        iVar31 = 0;
        pbVar37 = auStack_d8;
      }
      goto code_r0x003ced0f;
    case 0x11:
      iVar31 = func_0x0099bf90(pbStack_148,&UNK_001595e1);
      if (iVar31 != 0) break;
      auStack_d8 = (undefined1  [16])0x0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar21 << 0x40;
      puStack_108 = &UNK_0099e948;
      puStack_100 = auStack_d8;
      ppuStack_e8 = &puStack_108;
      _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb(&puStack_108,1);
      if (ppuStack_e8 == &puStack_108) {
        lVar34 = 0x20;
code_r0x003ce33e:
        (**(code **)(*ppuStack_e8 + lVar34))();
      }
      else {
        lVar34 = 0x28;
        if (ppuStack_e8 != (undefined **)0x0) goto code_r0x003ce33e;
      }
      if ((auStack_d8[0] & 1) == 0) {
        uVar43 = (ulong)(auStack_d8[0] >> 1);
      }
      else {
        uVar43 = auStack_d8._8_8_;
      }
      if (uVar43 != 0) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (auStack_d8,uVar43 - 1,0);
      }
      goto code_r0x003ce37b;
    }
    cVar27 = func_0x003d00b0(&pbStack_148,&UNK_00181a97);
    uVar43 = uStack_140;
    pbVar40 = pbStack_148;
    if (cVar27 == '\0') {
      switch(uStack_140) {
      case 7:
        if (*(int *)(pbStack_148 + 3) != 0x6e6f6973 || *(int *)pbStack_148 != 0x73726576) break;
        iVar31 = 0;
        pbVar40 = auStack_d8;
        _ZN7android4base12StringPrintfEPKcz(pbVar40,&UNK_00179ee3,0x29);
        func_0x003cf240(pbVar37,pbVar40);
        goto code_r0x003ce1c5;
      case 9:
        iVar31 = func_0x0099bf90(pbStack_148,&UNK_001753f8,uStack_140);
        if (iVar31 == 0) {
          auStack_d8 = (undefined1  [16])0x0;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auStack_c8._8_8_;
          auStack_c8 = auVar17 << 0x40;
          lVar34 = *(long *)(param_7 + 0x38);
          if ((lVar34 != 0) ||
             (lVar34 = _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                 (param_3,param_4,param_5,0,auStack_d8,0), lVar34 != 0)) {
            uVar32 = _ZNK10atransport18GetConnectionStateEv(lVar34);
            _Z9to_string15ConnectionState(auStack_168,uVar32);
code_r0x003cdbcb:
            pbVar40 = auStack_168;
            goto code_r0x003cecc7;
          }
code_r0x003ce3a3:
          bVar55 = (auStack_d8[0] & 1) != 0;
          puVar47 = auStack_d8 + 1;
          if (bVar55) {
            puVar47 = (undefined1 *)auStack_c8._0_8_;
          }
          uVar43 = (ulong)(auStack_d8[0] >> 1);
          if (bVar55) {
            uVar43 = auStack_d8._8_8_;
          }
          _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                    (pbVar37,puVar47,uVar43);
          goto code_r0x003cecec;
        }
        break;
      case 0xb:
        iVar31 = func_0x0099bf90(pbStack_148,&UNK_0017eb15,uStack_140);
        if (iVar31 == 0) {
          auStack_d8 = (undefined1  [16])0x0;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auStack_c8._8_8_;
          auStack_c8 = auVar16 << 0x40;
          lVar34 = *(long *)(param_7 + 0x38);
          if ((lVar34 == 0) &&
             (lVar34 = _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                 (param_3,param_4,param_5,0,auStack_d8,0), lVar34 == 0))
          goto code_r0x003ce3a3;
          bVar29 = *(byte *)(lVar34 + 0x88);
          uVar43 = (ulong)(bVar29 >> 1);
          if ((bVar29 & 1) != 0) {
            uVar43 = *(ulong *)(lVar34 + 0x90);
          }
          if (uVar43 == 0) {
code_r0x003ce436:
            _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                      (auStack_168,&UNK_00162e00);
            pbVar40 = pbVar37;
          }
          else {
            if ((bVar29 & 1) == 0) {
              pauVar35 = (undefined1 (*) [16])(lVar34 + 0x88);
              goto code_r0x003ce317;
            }
            uVar42 = *(undefined8 *)(lVar34 + 0x98);
code_r0x003cecb2:
            func_0x00330340(auStack_168,uVar42);
            pbVar40 = pbVar37;
          }
code_r0x003cecc7:
          func_0x003cf240(pbVar37,auStack_168);
          if ((auStack_168[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
          }
          goto code_r0x003cecec;
        }
        break;
      case 0xc:
        iVar31 = func_0x0099bf90(pbStack_148,&UNK_001861d1,uStack_140);
        if (iVar31 == 0) {
          auStack_d8 = (undefined1  [16])0x0;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = auStack_c8._8_8_;
          auStack_c8 = auVar23 << 0x40;
          lVar34 = *(long *)(param_7 + 0x38);
          if ((lVar34 == 0) &&
             (lVar34 = _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                 (param_3,param_4,param_5,0,auStack_d8,0), lVar34 == 0))
          goto code_r0x003ce3a3;
          bVar29 = *(byte *)(lVar34 + 0x28);
          uVar43 = (ulong)(bVar29 >> 1);
          if ((bVar29 & 1) != 0) {
            uVar43 = *(ulong *)(lVar34 + 0x30);
          }
          if (uVar43 == 0) goto code_r0x003ce436;
          if ((bVar29 & 1) != 0) {
            uVar42 = *(undefined8 *)(lVar34 + 0x38);
            goto code_r0x003cecb2;
          }
          pauVar35 = (undefined1 (*) [16])(lVar34 + 0x28);
code_r0x003ce317:
          pbStack_158 = *(byte **)pauVar35[1];
          _auStack_168 = *pauVar35;
          pbVar40 = pbVar37;
          goto code_r0x003cecc7;
        }
      }
      cVar27 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (pbVar40,uVar43,&UNK_0018ad23,9);
      if (cVar27 == '\0') {
        if (uStack_140 == 6) {
          if (*(short *)(pbStack_148 + 4) == 0x6863 && *(int *)pbStack_148 == 0x61747461) {
            auStack_d8 = (undefined1  [16])0x0;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = auStack_c8._8_8_;
            auStack_c8 = auVar24 << 0x40;
            pbVar40 = *(byte **)(param_7 + 0x38);
            if ((pbVar40 != (byte *)0x0) ||
               (pbVar40 = (byte *)_Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                            (param_3,param_4,param_5,0,auStack_d8,1),
               pbVar40 != (byte *)0x0)) {
              _ZNK10atransport11serial_nameEv(auStack_168,pbVar40);
              _ZN15AttachedDevices14RegisterAttachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (attached_devices,auStack_168);
              if ((auStack_168[0] & 1) != 0) {
                _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
              }
              cVar27 = _ZN10atransport6AttachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                 (pbVar40,auStack_d8);
              if (cVar27 == '\0') goto code_r0x003ce878;
              _ZNK10atransport11serial_nameEv(auStack_188,pbVar40);
              pbVar46 = pbStack_178;
              if ((auStack_188[0] & 1) == 0) {
                pbVar46 = auStack_188 + 1;
              }
              puVar50 = &UNK_001833ed;
code_r0x003ceea5:
              pbVar40 = auStack_168;
              _ZN7android4base12StringPrintfEPKcz(pbVar40,puVar50,pbVar46);
              func_0x003cf240(pbVar37,pbVar40);
              if ((auStack_168[0] & 1) == 0) {
                pbVar37 = pbStack_178;
              }
              else {
                _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
                pbVar37 = pbStack_178;
              }
              pbStack_178 = pbVar37;
              if ((auStack_188[0] & 1) != 0) {
                auVar48 = (undefined1  [8])auStack_188._0_8_;
                goto code_r0x003cd870;
              }
code_r0x003cecec:
              goto joined_r0x003ce8ae;
            }
          }
          else {
            if (*(short *)(pbStack_148 + 4) != 0x6863 || *(int *)pbStack_148 != 0x61746564)
            goto code_r0x003ce0f9;
            auStack_d8 = (undefined1  [16])0x0;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = auStack_c8._8_8_;
            auStack_c8 = auVar26 << 0x40;
            pbVar40 = *(byte **)(param_7 + 0x38);
            if ((pbVar40 != (byte *)0x0) ||
               (pbVar40 = (byte *)_Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                            (param_3,param_4,param_5,0,auStack_d8,1),
               pbVar40 != (byte *)0x0)) {
              *(undefined8 *)(param_7 + 0x38) = 0;
              _ZNK10atransport11serial_nameEv(auStack_168,pbVar40);
              _ZN15AttachedDevices14RegisterDetachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (attached_devices,auStack_168);
              if ((auStack_168[0] & 1) != 0) {
                _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
              }
              cVar27 = _ZN10atransport6DetachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                 (pbVar40,auStack_d8);
              if (cVar27 != '\0') {
                _ZNK10atransport11serial_nameEv(auStack_188,pbVar40);
                pbVar46 = pbStack_178;
                if ((auStack_188[0] & 1) == 0) {
                  pbVar46 = auStack_188 + 1;
                }
                puVar50 = &UNK_0018653f;
                goto code_r0x003ceea5;
              }
            }
          }
code_r0x003ce878:
          bVar55 = (auStack_d8[0] & 1) != 0;
          puVar47 = auStack_d8 + 1;
          if (bVar55) {
            puVar47 = (undefined1 *)auStack_c8._0_8_;
          }
          uVar43 = (ulong)(auStack_d8[0] >> 1);
          if (bVar55) {
            uVar43 = auStack_d8._8_8_;
          }
          _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                    (pbVar37,puVar47,uVar43);
        }
        else {
          if ((uStack_140 != 9) ||
             (pbStack_148[8] != 0x74 || *(long *)pbStack_148 != 0x63656e6e6f636572)) {
code_r0x003ce0f9:
            auStack_d8 = (undefined1  [16])0x0;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = auStack_c8._8_8_;
            auStack_c8 = auVar22 << 0x40;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                      (auStack_d8,&pbStack_148);
            if ((auStack_d8[0] & 1) == 0) {
              puVar47 = auStack_d8 + 1;
            }
            else {
              puVar47 = (undefined1 *)auStack_c8._0_8_;
            }
            plVar38 = (long *)_Znwm(0x28);
            *plVar38 = (long)&UNK_0099e990;
            plVar38[1] = param_7;
            *(undefined4 *)(plVar38 + 2) = param_3;
            *(undefined4 *)((long)plVar38 + 0x14) = 0;
            plVar38[3] = (long)param_4;
            plVar38[4] = param_5;
            plStack_118 = plVar38;
            uVar33 = _Z22handle_forward_requestPKcNSt3__18functionIFP10atransportPNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEEEi
                               (puVar47,auStack_138,pbVar37);
            pbVar40 = (byte *)(ulong)uVar33;
            (**(code **)(*plVar38 + 0x28))(plVar38);
            iVar31 = 0;
            if ((char)uVar33 == '\0') {
              bVar29 = func_0x003cf2f0(pbStack_148,uStack_140,pbVar37);
              iVar31 = (uint)(bVar29 ^ 1) * 2;
            }
code_r0x003ce1c5:
            pbVar37 = pbVar40;
            if ((auStack_d8[0] & 1) != 0) {
              auVar48 = (undefined1  [8])auStack_d8._0_8_;
              pbVar46 = (byte *)auStack_c8._0_8_;
              goto code_r0x003ce799;
            }
            goto code_r0x003ced0f;
          }
          auStack_d8 = (undefined1  [16])0x0;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auStack_c8._8_8_;
          auStack_c8 = auVar19 << 0x40;
          lVar34 = *(long *)(param_7 + 0x38);
          if (lVar34 == 0) {
            lVar34 = _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                               (param_3,param_4,param_5,0,auStack_d8,1);
            pbVar40 = (byte *)0x0;
            if (lVar34 != 0) goto code_r0x003cdd13;
          }
          else {
code_r0x003cdd13:
            _Z14kick_transportP10atransportb(lVar34,1);
            _ZNK10atransport11serial_nameEv(&bStack_1c0,lVar34);
            func_0x003cfaf0(auStack_1a8,&UNK_0017ed10,&bStack_1c0);
            pauVar35 = (undefined1 (*) [16])
                       _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                 (auStack_1a8,&UNK_00161368);
            pbStack_178 = *(byte **)pauVar35[1];
            auStack_188 = *pauVar35;
            *(undefined8 *)*pauVar35 = 0;
            *(undefined8 *)(*pauVar35 + 8) = 0;
            *(undefined8 *)pauVar35[1] = 0;
            uVar32 = _ZNK10atransport18GetConnectionStateEv(lVar34);
            _Z9to_string15ConnectionState(&uStack_1d8,uVar32);
            pauVar35 = (undefined1 (*) [16])func_0x0032e820(auStack_188,&uStack_1d8);
            pbStack_158 = *(byte **)pauVar35[1];
            _auStack_168 = *pauVar35;
            *pauVar35 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar35[1] = 0;
            pauVar35 = (undefined1 (*) [16])
                       _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                 (auStack_168,&UNK_00173f66);
            auVar2 = *pauVar35;
            pbVar40 = *(byte **)pauVar35[1];
            *pauVar35 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar35[1] = 0;
            if ((auStack_d8[0] & 1) != 0) {
              _ZdaPvSt11align_val_t(auStack_c8._0_8_,auStack_d8._0_8_ & 0xfffffffffffffffe);
            }
            auStack_c8._0_8_ = pbVar40;
            auStack_d8 = auVar2;
            if ((auStack_168[0] & 1) == 0) {
              if ((uStack_1d8 & 1) == 0) goto code_r0x003cde50;
code_r0x003ced5b:
              _ZdaPvSt11align_val_t(uStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe)
              ;
              if ((auStack_188[0] & 1) != 0) goto code_r0x003ced7f;
code_r0x003cde5d:
            }
            else {
              _ZdaPvSt11align_val_t(pbStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
              if ((uStack_1d8 & 1) != 0) goto code_r0x003ced5b;
code_r0x003cde50:
              if ((auStack_188[0] & 1) == 0) goto code_r0x003cde5d;
code_r0x003ced7f:
              _ZdaPvSt11align_val_t(pbStack_178,auStack_188._0_8_ & 0xfffffffffffffffe);
            }
            if ((auStack_1a8[0] & 1) != 0) {
              _ZdaPvSt11align_val_t(puStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
            }
            if ((bStack_1c0 & 1) != 0) {
              _ZdaPvSt11align_val_t
                        (puStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
            }
          }
code_r0x003ce37b:
          func_0x003cf240(pbVar37,auStack_d8);
        }
joined_r0x003ce8ae:
        if ((auStack_d8[0] & 1) != 0) goto code_r0x003cecf5;
      }
      else {
        pbStack_148 = pbStack_148 + 9;
        uStack_140 = uStack_140 - 9;
        auVar18._12_4_ = 0;
        auVar18._0_12_ = stack0xfffffffffffffe9c;
        _auStack_168 = auVar18 << 0x20;
        cVar27 = _Z9ParseUintIjEbPT_NSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPS6_
                           (auStack_168,pbStack_148,uStack_140,0);
        if (cVar27 == '\0') {
          cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          if (cVar27 != '\0') {
            pbVar37 = (byte *)func_0x0099bce0();
            iVar31 = *(int *)pbVar37;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_d8,&UNK_00181a61,0x608,4,0,0xffffffff);
            uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
            uVar42 = func_0x0032eb30(uVar42,&UNK_00173f41,0x24);
            func_0x0032eb30(uVar42,pbStack_148,uStack_140);
            _ZN7android4base10LogMessageD2Ev(auStack_d8);
            *(int *)pbVar37 = iVar31;
            iVar31 = 0;
            goto code_r0x003ced0f;
          }
        }
        else {
          auStack_188._0_4_ = auStack_168._0_4_;
          pbVar40 = auStack_d8;
          func_0x003cf280(pbVar40,auStack_188);
          _ZNSt3__16thread6detachEv(pbVar40);
          _ZNSt3__16threadD2Ev(pbVar40);
        }
      }
code_r0x003ced0c:
      iVar31 = 0;
      pbVar37 = pbVar40;
      goto code_r0x003ced0f;
    }
    auStack_d8 = (undefined1  [16])0x0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auStack_c8._8_8_;
    auStack_c8 = auVar15 << 0x40;
    uVar1 = (int)pbVar44;
    if (10 < uStack_140) {
      uStack_160 = uStack_140 - 0xb;
      auStack_168 = (undefined1  [8])(pbStack_148 + 0xb);
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (auStack_d8,auStack_168);
      if ((auStack_d8[0] & 1) == 0) {
        if (auStack_d8[0] >> 1 == 0) goto code_r0x003cd82c;
code_r0x003cd6a9:
        puVar47 = auStack_d8 + 1;
        puVar45 = puVar47;
        if ((auStack_d8[0] & 1) != 0) {
          puVar45 = (undefined1 *)auStack_c8._0_8_;
        }
        lVar34 = _Z14find_transportPKc(puVar45);
        if (lVar34 != 0) {
          _Z14kick_transportP10atransportb(lVar34,0);
          if ((auStack_d8[0] & 1) != 0) {
            puVar47 = (undefined1 *)auStack_c8._0_8_;
          }
          _ZN7android4base12StringPrintfEPKcz(auStack_168,&UNK_001705bc,puVar47);
          goto code_r0x003cd847;
        }
        _auStack_168 = (undefined1  [16])0x0;
        pbStack_158 = (byte *)0x0;
        auStack_188 = (undefined1  [16])0x0;
        pbStack_178 = (byte *)0x0;
        uStack_1d8 = 0x15b3;
        auStack_1a8 = (undefined1  [16])0x0;
        puStack_198 = (undefined1 *)0x0;
        cVar27 = func_0x003d02a0(auStack_d8,&UNK_0018ad1c);
        if ((cVar27 == '\0') && (cVar27 = func_0x003d02a0(auStack_d8,&UNK_00165efc), cVar27 == '\0')
           ) {
          cVar27 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                             (auStack_d8,auStack_188,&uStack_1d8,auStack_168,auStack_1a8);
          if (cVar27 != '\0') goto code_r0x003cda15;
          if ((auStack_d8[0] & 1) != 0) {
            puVar47 = (undefined1 *)auStack_c8._0_8_;
          }
          puVar45 = puStack_198;
          if ((auStack_1a8[0] & 1) == 0) {
            puVar45 = auStack_1a8 + 1;
          }
          _ZN7android4base12StringPrintfEPKcz(&bStack_1c0,&UNK_00167a01,puVar47,puVar45);
          uVar43 = (ulong)(bStack_1c0 >> 1);
          puVar49 = &uStack_1bf;
          if ((bStack_1c0 & 1) != 0) {
            uVar43 = uStack_1b8;
            puVar49 = puStack_1b0;
          }
code_r0x003cee11:
          _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                    (uVar32,puVar49,uVar43);
          if ((bStack_1c0 & 1) == 0) goto code_r0x003cda8d;
code_r0x003cee23:
          _ZdaPvSt11align_val_t(puStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
          if ((auStack_1a8[0] & 1) != 0) goto code_r0x003cee47;
code_r0x003cda9a:
          pbVar40 = pbVar37;
        }
        else {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (auStack_168,auStack_d8);
code_r0x003cda15:
          pbVar37 = auStack_168 + 1;
          if ((auStack_168[0] & 1) != 0) {
            pbVar37 = pbStack_158;
          }
          lVar34 = _Z14find_transportPKc(pbVar37);
          if (lVar34 == 0) {
            pbVar37 = auStack_168 + 1;
            if ((auStack_168[0] & 1) != 0) {
              pbVar37 = pbStack_158;
            }
            _ZN7android4base12StringPrintfEPKcz(&bStack_1c0,&UNK_001770d8,pbVar37);
            uVar43 = (ulong)(bStack_1c0 >> 1);
            puVar49 = &uStack_1bf;
            if ((bStack_1c0 & 1) != 0) {
              uVar43 = uStack_1b8;
              puVar49 = puStack_1b0;
            }
            goto code_r0x003cee11;
          }
          _Z14kick_transportP10atransportb(lVar34,0);
          if ((auStack_d8[0] & 1) != 0) {
            puVar47 = (undefined1 *)auStack_c8._0_8_;
          }
          pbVar37 = &bStack_1c0;
          _ZN7android4base12StringPrintfEPKcz(pbVar37,&UNK_001705bc,puVar47);
          func_0x003cf240(uVar32,pbVar37);
          if ((bStack_1c0 & 1) != 0) goto code_r0x003cee23;
code_r0x003cda8d:
          if ((auStack_1a8[0] & 1) == 0) goto code_r0x003cda9a;
code_r0x003cee47:
          _ZdaPvSt11align_val_t(puStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
          pbVar40 = pbVar37;
        }
        if ((auStack_188[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(pbStack_178,auStack_188._0_8_ & 0xfffffffffffffffe);
        }
      }
      else {
        if (auStack_d8._8_8_ != 0) goto code_r0x003cd6a9;
code_r0x003cd82c:
        _Z20kick_all_tcp_devicesv();
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (auStack_168,&UNK_00173f29);
code_r0x003cd847:
        pbVar40 = auStack_168;
        func_0x003cf240(uVar32,pbVar40);
      }
      if ((auStack_168[0] & 1) == 0) goto code_r0x003cecec;
      auVar48 = auStack_168;
      pbVar37 = pbStack_158;
code_r0x003cd870:
      _ZdaPvSt11align_val_t(pbVar37,(ulong)auVar48 & 0xfffffffffffffffe);
      if ((auStack_d8[0] & 1) == 0) goto code_r0x003ced0c;
code_r0x003cecf5:
      _ZdaPvSt11align_val_t(auStack_c8._0_8_,auStack_d8._0_8_ & 0xfffffffffffffffe);
      goto code_r0x003ced0c;
    }
  }
  else {
    if (pbStack_148[8] != 0x74 || *(long *)pbStack_148 != 0x726f70736e617274) goto code_r0x003cd247;
code_r0x003cd29b:
    _auStack_168 = (undefined1  [16])0x0;
    pbStack_158 = (byte *)0x0;
    cVar27 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                       (pbStack_148,uStack_140,&UNK_001679e3,6);
    if (cVar27 == '\0') {
      cVar28 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (pbStack_148,uStack_140,&UNK_0018ad0e,0xd);
      uVar43 = uStack_140;
      pbVar46 = pbStack_148;
      if (cVar28 == '\0') {
        if (uStack_140 == 0xf) {
          iVar31 = func_0x0099bf90(pbStack_148,&UNK_0017d5bc,0xf);
          if (iVar31 == 0) {
            pbVar46 = (byte *)0x1;
            goto code_r0x003ce6a9;
          }
code_r0x003ce056:
          cVar28 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (pbVar46,uVar43,&UNK_00162df5,10);
          pbVar46 = (byte *)0x2;
          if (cVar28 != '\0') {
            pbStack_148 = pbStack_148 + 10;
            uStack_140 = uStack_140 - 10;
            func_0x0032ea90(auStack_168);
            param_4 = pbStack_158;
            if ((auStack_168[0] & 1) == 0) {
              param_4 = auStack_168 + 1;
            }
          }
          goto code_r0x003ce6a9;
        }
        if (uStack_140 != 0xd) goto code_r0x003ce056;
        if (*(long *)(pbStack_148 + 5) == 0x6273752d74726f70 &&
            *(long *)pbStack_148 == 0x726f70736e617274) {
          pbVar46 = (byte *)0x0;
          goto code_r0x003ce6a9;
        }
        iVar31 = func_0x0099bf90(pbStack_148,&UNK_0016439e,0xd);
        if (iVar31 != 0) goto code_r0x003ce056;
code_r0x003ce69d:
        pbVar46 = (byte *)0x2;
        goto code_r0x003ce6a9;
      }
      pbVar46 = pbStack_148 + 0xd;
      pbVar54 = pbStack_148 + uStack_140;
      uStack_140 = uStack_140 - 0xd;
      uVar43 = uStack_140;
      pbVar44 = pbVar46;
      pbVar40 = pbVar54;
      pbStack_148 = pbVar46;
      if (uStack_140 == 0) {
code_r0x003cd88b:
        if ((pbVar44 == pbVar54) || (pbVar40 = pbVar44, 9 < (byte)(*pbVar44 - 0x30)))
        goto code_r0x003ce1e8;
        auStack_48 = (undefined1  [16])0x0;
        auStack_58 = (undefined1  [16])0x0;
        auStack_68 = (undefined1  [16])0x0;
        auStack_78 = (undefined1  [16])0x0;
        auStack_88 = (undefined1  [16])0x0;
        auStack_98 = (undefined1  [16])0x0;
        auStack_a8 = (undefined1  [16])0x0;
        auStack_b8 = (undefined1  [16])0x0;
        auStack_c8 = (undefined1  [16])0x0;
        auStack_d8 = (undefined1  [16])0x0;
        lVar34 = 0x14;
        while (bVar29 = *pbVar44, 0xf5 < (byte)(bVar29 - 0x3a)) {
          pbVar44 = pbVar44 + 1;
          (&uStack_e0)[lVar34] = (ulong)(byte)(bVar29 - 0x30);
          lVar34 = lVar34 + -1;
          if ((lVar34 == 0) || (pbVar44 == pbVar54)) break;
        }
        uVar52 = (lVar34 << 0x20) >> 0x1d;
        uVar43 = *(ulong *)(auStack_d8 + uVar52);
        if ((int)lVar34 < 0x12) {
          uVar39 = 0;
          if (uVar52 < 0x89) {
            uVar39 = 0x88 - uVar52;
          }
          if (uVar39 < 0x18) {
            plVar38 = (long *)&UNK_0018fd78;
            uVar39 = uVar52;
          }
          else {
            uVar33 = ((uint)(uVar39 >> 3) & 0x1fffffff) + 1;
            uVar51 = uVar33 & 0x3c;
            plVar38 = (long *)(&UNK_0018fd78 + uVar51 * 8);
            uVar39 = uVar51 * 8 + uVar52;
            lVar56 = 0;
            lVar57 = 0;
            lVar58 = 0;
            uVar53 = 0;
            do {
              uVar4 = *(ulong *)(auStack_d8 + uVar53 * 8 + uVar52 + 8);
              uVar5 = *(ulong *)((long)(auStack_d8 + uVar53 * 8 + uVar52 + 8) + 8);
              uVar6 = *(ulong *)(auStack_c8 + uVar53 * 8 + uVar52 + 8);
              uVar7 = *(ulong *)((long)(auStack_c8 + uVar53 * 8 + uVar52 + 8) + 8);
              uVar8 = *(ulong *)(&UNK_0018fd78 + uVar53 * 8);
              uVar9 = *(ulong *)(&UNK_0018fd80 + uVar53 * 8);
              uVar10 = *(ulong *)(&UNK_0018fd88 + uVar53 * 8);
              uVar11 = *(ulong *)(&UNK_0018fd90 + uVar53 * 8);
              uVar43 = uVar43 + (uVar8 & 0xffffffff) * (uVar4 & 0xffffffff) +
                       ((uVar4 >> 0x20) * (uVar8 & 0xffffffff) +
                        (uVar8 >> 0x20) * (uVar4 & 0xffffffff) << 0x20);
              lVar56 = lVar56 + (uVar9 & 0xffffffff) * (uVar5 & 0xffffffff) +
                       ((uVar5 >> 0x20) * (uVar9 & 0xffffffff) +
                        (uVar9 >> 0x20) * (uVar5 & 0xffffffff) << 0x20);
              lVar57 = lVar57 + (uVar10 & 0xffffffff) * (uVar6 & 0xffffffff) +
                       ((uVar6 >> 0x20) * (uVar10 & 0xffffffff) +
                        (uVar10 >> 0x20) * (uVar6 & 0xffffffff) << 0x20);
              lVar58 = lVar58 + (uVar11 & 0xffffffff) * (uVar7 & 0xffffffff) +
                       ((uVar7 >> 0x20) * (uVar11 & 0xffffffff) +
                        (uVar11 >> 0x20) * (uVar7 & 0xffffffff) << 0x20);
              uVar53 = uVar53 + 4;
            } while (uVar51 != uVar53);
            uVar43 = lVar58 + lVar56 + lVar57 + uVar43;
            if (uVar33 == uVar51) goto code_r0x003ce62f;
          }
          uVar39 = uVar39 - 8;
          do {
            uVar43 = uVar43 + *plVar38 * *(long *)(auStack_c8 + uVar39);
            plVar38 = plVar38 + 1;
            uVar39 = uVar39 + 8;
          } while (uVar39 < 0x88);
        }
code_r0x003ce62f:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auStack_48._8_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(&UNK_0018fd70 + (0x1300000000 - (lVar34 << 0x20) >> 0x1d));
        uVar52 = SUB168(auVar2 * auVar3,0);
        pbVar40 = pbVar44 + -(ulong)(SUB168(auVar2 * auVar3,8) != 0);
        if (((pbVar40 == pbVar54) || (9 < (byte)(*pbVar40 - 0x30))) && (!CARRY8(uVar43,uVar52))) {
          param_5 = uVar52 + uVar43;
          goto joined_r0x003ce694;
        }
      }
      else {
        do {
          if (*pbVar44 != 0x30) goto code_r0x003cd88b;
          uVar43 = uVar43 - 1;
          pbVar44 = pbVar44 + 1;
        } while (uVar43 != 0);
code_r0x003ce1e8:
        if (pbVar40 != pbVar46) {
          param_5 = 0;
joined_r0x003ce694:
          if (pbVar40 == pbVar54) goto code_r0x003ce69d;
        }
      }
      _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (pbVar37,&UNK_00173c99,0x14);
      iVar31 = 0;
      pbVar40 = pbVar37;
      pbVar46 = pbStack_158;
    }
    else {
      pbStack_148 = pbStack_148 + 6;
      uStack_140 = uStack_140 - 6;
      cVar28 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (pbStack_148,uStack_140,&UNK_001595d9,7);
      if (cVar28 == '\0') {
        if (uStack_140 == 5) {
          pbVar46 = (byte *)(ulong)((pbStack_148[4] != 0x6c || *(int *)pbStack_148 != 0x61636f6c) +
                                   1);
        }
        else {
          pbVar46 = (byte *)0x2;
          if (uStack_140 == 3) {
            pbVar46 = (byte *)(ulong)((uint)(pbStack_148[2] != 0x62 ||
                                            *(short *)pbStack_148 != 0x7375) * 2);
          }
        }
      }
      else {
        pbStack_148 = pbStack_148 + 7;
        uStack_140 = uStack_140 - 7;
        func_0x0032ea90(auStack_168);
        if ((auStack_168[0] & 1) == 0) {
          pbVar46 = (byte *)0x2;
          param_4 = auStack_168 + 1;
        }
        else {
          pbVar46 = (byte *)0x2;
          param_4 = pbStack_158;
        }
      }
code_r0x003ce6a9:
      auStack_d8 = (undefined1  [16])0x0;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar25 << 0x40;
      iVar31 = 0;
      pbVar40 = (byte *)_Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                                  (pbVar46,param_4,param_5,0,auStack_d8,0);
      if (pbVar40 == (byte *)0x0) {
        bVar55 = (auStack_d8[0] & 1) != 0;
        puVar47 = auStack_d8 + 1;
        if (bVar55) {
          puVar47 = (undefined1 *)auStack_c8._0_8_;
        }
        uVar43 = (ulong)(auStack_d8[0] >> 1);
        if (bVar55) {
          uVar43 = auStack_d8._8_8_;
        }
        _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (pbVar37,puVar47,uVar43);
        pbVar40 = pbVar46;
      }
      else {
        *(byte **)(param_7 + 0x38) = pbVar40;
        _Z8SendOkayN7android4base11borrowed_fdE(pbVar37);
        iVar31 = 1;
        if (cVar27 == '\0') {
        }
        else {
          _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(pbVar37,pbVar40 + 0x18,8);
          pbVar40 = pbVar40 + 0x18;
        }
      }
      if ((auStack_d8[0] & 1) == 0) {
        pbVar46 = pbStack_158;
      }
      else {
        _ZdaPvSt11align_val_t(auStack_c8._0_8_,auStack_d8._0_8_ & 0xfffffffffffffffe);
        pbVar46 = pbStack_158;
      }
    }
    pbVar37 = pbVar40;
    pbStack_158 = pbVar46;
    if ((auStack_168[0] & 1) == 0) goto code_r0x003ced0f;
    auVar48 = auStack_168;
code_r0x003ce799:
    _ZdaPvSt11align_val_t(pbVar46,(ulong)auVar48 & 0xfffffffffffffffe);
    pbVar37 = pbVar40;
code_r0x003ced0f:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return iVar31;
    }
    func_0x0099bd00();
    uVar1 = (int)pbVar37;
  }
  uVar32 = uVar1;
  func_0x0032fc70(&UNK_001705cc);
code_r0x003cf1b6:
  cVar27 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
  if (cVar27 != '\0') goto code_r0x003cf1e0;
  do {
    _Z10blame_killi(uVar32);
    _Z8SendOkayN7android4base11borrowed_fdE(uVar32);
    func_0x0099bd80(0);
code_r0x003cf1e0:
    puVar41 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar41;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_d8,&UNK_00181a61,0x508,2,0,0xffffffff);
    uVar42 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
    func_0x0032eb30(uVar42,&UNK_001722b6,0x23);
    _ZN7android4base10LogMessageD2Ev(auStack_d8);
    *puVar41 = uVar1;
  } while( true );
}


