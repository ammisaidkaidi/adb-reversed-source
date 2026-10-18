// Function: _Z23OnServiceReceiverResultRK11ServiceInfo16ServiceInfoState
// Address: 0040ec80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0040ed10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0040ed15) */

long _Z23OnServiceReceiverResultRK11ServiceInfo16ServiceInfoState(uint *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  byte *pbVar23;
  undefined8 extraout_RDX;
  undefined **ppuVar24;
  uint *puVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined8 in_R9;
  undefined1 *unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  long lVar29;
  undefined1 *unaff_R15;
  long lVar30;
  long lVar31;
  long in_FS_OFFSET;
  bool bVar32;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  ppuVar24 = (undefined **)auStack_38;
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 2) {
    if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
      puStack_40 = &UNK_0040eded;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_40 = &UNK_0040edfa;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar20 = *unaff_R14;
        unaff_R12 = (undefined1 *)(ulong)uVar20;
        unaff_R15 = auStack_38;
        in_R9 = 0xffffffff;
        puStack_40 = &UNK_0040ee26;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0017bc23,0x77,1,0);
        puStack_40 = &UNK_0040ee2e;
        uVar11 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        puStack_40 = &UNK_0040ee42;
        uVar11 = func_0x0032eb30(uVar11,&UNK_001645ea,0x24);
        puStack_40 = &UNK_0040ee4d;
        _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar11,param_1);
        puStack_40 = &UNK_0040ee55;
        _ZN7android4base10LogMessageD2Ev(unaff_R15);
        *unaff_R14 = uVar20;
      }
    }
    puVar10 = _ZN4mdns19discovered_servicesE;
    puStack_40 = &UNK_0040ed44;
    _ZN4mdns18DiscoveredServices14ServiceDeletedERK11ServiceInfo
              (_ZN4mdns19discovered_servicesE,param_1);
code_r0x0040ed44:
    puStack_40 = &UNK_0040ed49;
    _Z20update_mdns_trackersv();
code_r0x0040ed49:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
      return *(long *)(in_FS_OFFSET + 0x28);
    }
    puStack_40 = &UNK_0040eede;
    func_0x0099bd00();
  }
  else {
    if (param_2 == 1) {
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        puStack_40 = &UNK_0040ed75;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          puStack_40 = &UNK_0040ed7e;
          unaff_R14 = (uint *)func_0x0099bce0();
          uVar20 = *unaff_R14;
          unaff_R12 = (undefined1 *)(ulong)uVar20;
          unaff_R15 = auStack_38;
          in_R9 = 0xffffffff;
          puStack_40 = &UNK_0040edaa;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_0017bc23,0x6f,1,0);
          puStack_40 = &UNK_0040edb2;
          uVar11 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          puStack_40 = &UNK_0040edc6;
          uVar11 = func_0x0032eb30(uVar11,&UNK_0018af0d,0x24);
          puStack_40 = &UNK_0040edd1;
          _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar11,param_1);
          puStack_40 = &UNK_0040edd9;
          _ZN7android4base10LogMessageD2Ev(unaff_R15);
          *unaff_R14 = uVar20;
        }
      }
      puVar10 = _ZN4mdns19discovered_servicesE;
      puStack_40 = &UNK_0040ed09;
      cVar8 = _ZN4mdns18DiscoveredServices14ServiceUpdatedERK11ServiceInfo
                        (_ZN4mdns19discovered_servicesE,param_1);
      if (cVar8 == '\0') goto code_r0x0040ed49;
    }
    else {
      puVar10 = (undefined1 *)param_1;
      if (param_2 != 0) goto code_r0x0040ed44;
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        puStack_40 = &UNK_0040ee69;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          puStack_40 = &UNK_0040ee76;
          unaff_R14 = (uint *)func_0x0099bce0();
          uVar20 = *unaff_R14;
          unaff_R12 = (undefined1 *)(ulong)uVar20;
          unaff_R15 = auStack_38;
          in_R9 = 0xffffffff;
          puStack_40 = &UNK_0040eea2;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_0017bc23,0x69,1,0);
          puStack_40 = &UNK_0040eeaa;
          uVar11 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          puStack_40 = &UNK_0040eebe;
          uVar11 = func_0x0032eb30(uVar11,&UNK_00167c9e,0x24);
          puStack_40 = &UNK_0040eec9;
          _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar11,param_1);
          puStack_40 = &UNK_0040eed1;
          _ZN7android4base10LogMessageD2Ev(unaff_R15);
          *unaff_R14 = uVar20;
        }
      }
      puStack_40 = &UNK_0040ecde;
      _ZN4mdns18DiscoveredServices14ServiceCreatedERK11ServiceInfo
                (_ZN4mdns19discovered_servicesE,param_1);
    }
    ppuVar24 = &puStack_40;
    puStack_40 = &UNK_0040ed15;
    puVar10 = (undefined1 *)param_1;
  }
  *(undefined1 **)((long)ppuVar24 + -8) = &stack0xfffffffffffffff8;
  *(undefined1 **)((long)ppuVar24 + -0x10) = unaff_R15;
  *(uint **)((long)ppuVar24 + -0x18) = unaff_R14;
  *(ulong *)((long)ppuVar24 + -0x20) = unaff_R13;
  *(undefined1 **)((long)ppuVar24 + -0x28) = unaff_R12;
  *(uint **)((long)ppuVar24 + -0x30) = param_1;
  *(undefined8 *)((long)ppuVar24 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar16 = (uint *)((long)puVar10 + 0x19);
  bVar32 = ((byte)*(uint *)((long)puVar10 + 0x18) & 1) == 0;
  puVar25 = *(uint **)((long)puVar10 + 0x28);
  if (bVar32) {
    puVar25 = puVar16;
  }
  uVar9 = (ulong)(byte)((byte)*(uint *)((long)puVar10 + 0x18) >> 1);
  if (!bVar32) {
    uVar9 = *(ulong *)((long)puVar10 + 0x20);
  }
  bVar32 = ((byte)*(uint *)puVar10 & 1) != 0;
  pbVar23 = (byte *)((long)puVar10 + 1);
  if (bVar32) {
    pbVar23 = *(byte **)((long)puVar10 + 0x10);
  }
  puVar12 = (uint *)((long)puVar10 + 0x18);
  puVar21 = (uint *)(ulong)(byte)((byte)*(uint *)puVar10 >> 1);
  if (bVar32) {
    puVar21 = *(uint **)((long)puVar10 + 8);
  }
  *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040ef3c;
  cVar8 = _Z31adb_DNSServiceShouldAutoConnectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
                    (puVar25,uVar9,pbVar23);
  if (cVar8 == '\0') {
    if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
      *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f147;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f154;
        puVar16 = (uint *)func_0x0099bce0();
        uVar20 = *puVar16;
        unaff_R13 = (ulong)uVar20;
        unaff_R12 = (undefined1 *)((long)ppuVar24 + -0x40);
        puVar21 = (uint *)0x1;
        in_R9 = 0xffffffff;
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f180;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R12,&UNK_0017bc23,0x40,1,0);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f188;
        uVar11 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f19c;
        uVar11 = func_0x0032eb30(uVar11,&UNK_00183618,0x16);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f1a7;
        uVar11 = func_0x0032e5a0(uVar11,puVar10);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f1bb;
        uVar11 = func_0x0032eb30(uVar11,&UNK_00162aea,1);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f1c6;
        func_0x0032e5a0(uVar11,puVar12);
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f1ce;
        _ZN7android4base10LogMessageD2Ev(unaff_R12);
        *puVar16 = uVar20;
      }
    }
code_r0x0040f02e:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0x38)) {
      return *(long *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    if ((byte)*(uint *)((long)puVar10 + 0x4c) != 1) goto code_r0x0040f02e;
    bVar32 = ((byte)*(uint *)((long)puVar10 + 0x18) & 1) != 0;
    if (bVar32) {
      puVar16 = *(uint **)((long)puVar10 + 0x28);
    }
    uVar9 = (ulong)(byte)((byte)*(uint *)((long)puVar10 + 0x18) >> 1);
    if (bVar32) {
      uVar9 = *(ulong *)((long)puVar10 + 0x20);
    }
    *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040ef6a;
    uVar9 = _Z25adb_DNSServiceIndexByNameNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
                      (puVar16,uVar9);
    if ((uVar9 >> 0x20 & 1) == 0) {
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040efa3;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040efb0;
          puVar10 = (undefined1 *)func_0x0099bce0();
          uVar20 = *(uint *)puVar10;
          unaff_R12 = (undefined1 *)(ulong)uVar20;
          puVar16 = (uint *)((long)ppuVar24 + -0x40);
          puVar21 = (uint *)0x1;
          in_R9 = 0xffffffff;
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040efdc;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar16,&UNK_0017bc23,0x4a,1,0);
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040efe4;
          uVar11 = _ZN7android4base10LogMessage6streamEv(puVar16);
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040eff8;
          uVar11 = func_0x0032eb30(uVar11,&UNK_001614ff,0xf);
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f003;
          func_0x0032e5a0(uVar11,puVar12);
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f00b;
          _ZN7android4base10LogMessageD2Ev(puVar16);
          *(uint *)puVar10 = uVar20;
        }
      }
      goto code_r0x0040f02e;
    }
    if ((int)uVar9 == 2) {
      *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f064;
      cVar8 = _ZN18KnownWifiHostsFile11IsKnownHostERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (known_wifi_hosts_file,puVar10);
      if (cVar8 == '\0') {
        if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
          *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f0b7;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 != '\0') {
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f0c4;
            puVar12 = (uint *)func_0x0099bce0();
            uVar20 = *puVar12;
            unaff_R12 = (undefined1 *)(ulong)uVar20;
            puVar16 = (uint *)((long)ppuVar24 + -0x40);
            puVar21 = (uint *)0x1;
            in_R9 = 0xffffffff;
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f0f0;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar16,&UNK_0017bc23,0x51,1,0);
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f0f8;
            uVar11 = _ZN7android4base10LogMessage6streamEv(puVar16);
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f10c;
            uVar11 = func_0x0032eb30(uVar11,&UNK_00177298,0xe);
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f117;
            uVar11 = func_0x0032e5a0(uVar11,puVar10);
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f12b;
            func_0x0032eb30(uVar11,&UNK_0015e1f8,0x10);
            *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f133;
            _ZN7android4base10LogMessageD2Ev(puVar16);
            *puVar12 = uVar20;
          }
        }
        goto code_r0x0040f02e;
      }
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0x38)) {
      uVar11 = *(undefined8 *)((long)ppuVar24 + -0x28);
      uVar5 = *(undefined8 *)((long)ppuVar24 + -0x20);
      *(undefined8 *)((long)ppuVar24 + -8) = *(undefined8 *)((long)ppuVar24 + -8);
      *(undefined8 *)((long)ppuVar24 + -0x10) = *(undefined8 *)((long)ppuVar24 + -0x10);
      *(undefined8 *)((long)ppuVar24 + -0x18) = *(undefined8 *)((long)ppuVar24 + -0x18);
      *(undefined8 *)((long)ppuVar24 + -0x20) = *(undefined8 *)((long)ppuVar24 + -0x30);
      *(undefined8 *)((long)ppuVar24 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puVar17 = (undefined1 *)((long)ppuVar24 + -0xd0);
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd4f;
      _ZN11ServiceInfoC2ERKS_(puVar17,puVar10);
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd59;
      uVar13 = _Znwm(8);
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd64;
      _ZNSt3__115__thread_structC2Ev(uVar13);
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd6e;
      puVar14 = (undefined8 *)_Znwm(0xb0);
      *puVar14 = uVar13;
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd80;
      _ZN11ServiceInfoC2ERKS_(puVar14 + 1,puVar17);
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fd98;
      uVar20 = func_0x0099be80((undefined1 *)((long)ppuVar24 + -0xd8),0,&UNK_0040fdf0,puVar14);
      if (uVar20 == 0) {
        puVar17 = (undefined1 *)((long)ppuVar24 + -0xd8);
        *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fdab;
        _ZNSt3__16thread6detachEv(puVar17);
        *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fdb3;
        _ZNSt3__16threadD2Ev(puVar17);
        plVar19 = (long *)((long)ppuVar24 + -0xd0);
        *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fdbf;
        _ZN11ServiceInfoD2Ev();
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0x28)) {
          return *(long *)(in_FS_OFFSET + 0x28);
        }
      }
      else {
        plVar19 = (long *)(ulong)uVar20;
        *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fdea;
        _ZNSt3__120__throw_system_errorEiPKc(plVar19,&UNK_0015f7ec);
      }
      *(undefined **)((long)ppuVar24 + -0xe0) = &UNK_0040fdef;
      func_0x0099bd00();
      *(undefined1 **)((long)ppuVar24 + -0xe0) = (undefined1 *)((long)ppuVar24 + -8);
      *(undefined8 **)((long)ppuVar24 + -0xe8) = puVar14;
      *(undefined8 *)((long)ppuVar24 + -0xf0) = uVar13;
      *(undefined8 *)((long)ppuVar24 + -0xf8) = uVar5;
      *(undefined8 *)((long)ppuVar24 + -0x100) = uVar11;
      *(undefined1 **)((long)ppuVar24 + -0x108) = puVar17;
      *(undefined8 *)((long)ppuVar24 + -0x110) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0040fe19;
      puVar15 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
      lVar30 = *plVar19;
      *plVar19 = 0;
      uVar27 = *puVar15;
      *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0040fe2a;
      func_0x0099bfc0(uVar27,lVar30);
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041017e;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041018b;
          puVar15 = (undefined4 *)func_0x0099bce0();
          uVar27 = *puVar15;
          puVar10 = (undefined1 *)((long)ppuVar24 + -0x240);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004101bd;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar10,&UNK_0017bc23,0x36,1,0,0xffffffff);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004101c5;
          uVar11 = _ZN7android4base10LogMessage6streamEv(puVar10);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004101d9;
          uVar11 = func_0x0032eb30(uVar11,&UNK_0018af32,0x2a);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004101e4;
          uVar11 = _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo
                             (uVar11,plVar19 + 1);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004101f8;
          func_0x0032eb30(uVar11,&UNK_00162c6d,1);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410200;
          _ZN7android4base10LogMessageD2Ev(puVar10);
          *puVar15 = uVar27;
        }
      }
      *(undefined8 *)((long)ppuVar24 + -800) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x318) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x310) = 0;
      bVar32 = (*(byte *)(plVar19 + 1) & 1) != 0;
      lVar30 = (long)plVar19 + 9;
      if (bVar32) {
        lVar30 = plVar19[3];
      }
      uVar9 = (ulong)(*(byte *)(plVar19 + 1) >> 1);
      if (bVar32) {
        uVar9 = plVar19[2];
      }
      *(long *)((long)ppuVar24 + -0x2d0) = lVar30;
      *(ulong *)((long)ppuVar24 + -0x2c8) = uVar9;
      bVar32 = (*(byte *)(plVar19 + 4) & 1) != 0;
      lVar30 = (long)plVar19 + 0x21;
      if (bVar32) {
        lVar30 = plVar19[6];
      }
      uVar9 = (ulong)(*(byte *)(plVar19 + 4) >> 1);
      if (bVar32) {
        uVar9 = plVar19[5];
      }
      *(undefined8 *)((long)ppuVar24 + -0x2b0) = 0x1ad;
      *(long *)((long)ppuVar24 + -0x2c0) = lVar30;
      *(ulong *)((long)ppuVar24 + -0x2b8) = uVar9;
      *(undefined8 *)((long)ppuVar24 + -0x128) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x120) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x138) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x130) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x148) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x140) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x158) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x150) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x168) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x160) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x178) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x170) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x188) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x180) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x198) = 0;
      *(undefined8 *)((long)ppuVar24 + -400) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1a8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1a0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1b8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1b0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1c8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1c0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1d8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1d0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1e8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1e0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1f8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1f0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x208) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x200) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x218) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x210) = 0;
      *(undefined1 **)((long)ppuVar24 + -0x240) = (undefined1 *)((long)ppuVar24 + -0x218);
      *(undefined8 *)((long)ppuVar24 + -0x238) = 0x100;
      *(undefined8 *)((long)ppuVar24 + -0x230) = 0;
      *(undefined **)((long)ppuVar24 + -0x228) = &UNK_00358010;
      *(undefined8 *)((long)ppuVar24 + -0x220) = 0;
      *(undefined1 **)((long)ppuVar24 + -0x118) = (undefined1 *)((long)ppuVar24 + -0x218);
      *(undefined **)((long)ppuVar24 + -0x2f8) = &UNK_0015b132;
      *(undefined **)((long)ppuVar24 + -0x2f0) = &UNK_0015b137;
      *(undefined4 *)((long)ppuVar24 + -0x2e8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x2e0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x2d8) = 2;
      *(undefined8 *)((long)ppuVar24 + -0x298) = 2;
      *(undefined1 **)((long)ppuVar24 + -0x290) = (undefined1 *)((long)ppuVar24 + -0x2d0);
      *(undefined8 *)((long)ppuVar24 + -0x288) = 0x1ad;
      *(undefined1 **)((long)ppuVar24 + -0x2a0) = (undefined1 *)((long)ppuVar24 + -0x240);
      *(undefined1 *)((long)ppuVar24 + -0x280) = 0;
      *(undefined1 *)((long)ppuVar24 + -0x278) = 0;
      *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0040ffec;
      func_0x003580e0((undefined1 *)((long)ppuVar24 + -0x2f8),
                      (undefined1 *)((long)ppuVar24 + -0x2a0));
      if (*(char *)((long)ppuVar24 + -0x278) == '\x01') {
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410001;
        _ZNSt3__16localeD2Ev((undefined1 *)((long)ppuVar24 + -0x280));
      }
      uVar9 = *(ulong *)((long)ppuVar24 + -0x230);
      if (uVar9 < 0xfffffffffffffff7) {
        puVar10 = *(undefined1 **)((long)ppuVar24 + -0x118);
        if (uVar9 < 0x17) {
          *(char *)((long)ppuVar24 + -0x2a0) = (char)uVar9 * '\x02';
          puVar17 = (undefined1 *)((long)ppuVar24 + -0x29f);
        }
        else {
          lVar30 = 0x1a;
          if ((uVar9 | 7) != 0x17) {
            lVar30 = (uVar9 | 7) + 1;
          }
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410050;
          puVar17 = (undefined1 *)_Znwm(lVar30);
          *(long *)((long)ppuVar24 + -0x2a0) = lVar30 + 1;
          *(ulong *)((long)ppuVar24 + -0x298) = uVar9;
          *(undefined1 **)((long)ppuVar24 + -0x290) = puVar17;
        }
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041007d;
        func_0x0099bd90(puVar17,puVar10,uVar9);
        puVar17[uVar9] = 0;
        if (puVar10 != (undefined1 *)((long)ppuVar24 + -0x218)) {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041009e;
          _ZdaPvSt11align_val_t(puVar10,*(undefined8 *)((long)ppuVar24 + -0x238));
        }
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x2a0);
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004100b4;
        _Z14connect_deviceRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_
                  (puVar10,(undefined1 *)((long)ppuVar24 + -800));
        if ((*(byte *)((long)ppuVar24 + -0x2a0) & 1) != 0) {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004100d4;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar24 + -0x290),
                     *(ulong *)((long)ppuVar24 + -0x2a0) & 0xfffffffffffffffe);
        }
        if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410217;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 != '\0') {
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410224;
            puVar15 = (undefined4 *)func_0x0099bce0();
            *(undefined4 **)((long)ppuVar24 + -0x338) = puVar15;
            *(undefined4 *)((long)ppuVar24 + -0x32c) = *puVar15;
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041025c;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      ((undefined1 *)((long)ppuVar24 + -0x328),&UNK_0017bc23,0x39,1,0,0xffffffff);
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410264;
            uVar11 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar24 + -0x328));
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410279;
            _ZNK11ServiceInfo17v4_address_stringEv
                      ((undefined1 *)((long)ppuVar24 + -0x2f8),plVar19 + 1);
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410299;
            func_0x00410810(puVar10,plVar19 + 1,plVar19 + 4,(undefined1 *)((long)ppuVar24 + -0x2f8),
                            plVar19 + 0x10,(undefined1 *)((long)ppuVar24 + -800));
            *(undefined8 *)((long)ppuVar24 + -0x128) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x120) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x138) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x130) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x148) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x140) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x158) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x150) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x168) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x160) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x178) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x170) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x188) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x180) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x198) = 0;
            *(undefined8 *)((long)ppuVar24 + -400) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1a8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1a0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1b8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1b0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1c8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1c0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1d8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1d0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1e8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1e0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1f8) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x1f0) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x208) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x200) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x218) = 0;
            *(undefined8 *)((long)ppuVar24 + -0x210) = 0;
            puVar17 = (undefined1 *)((long)ppuVar24 + -0x218);
            *(undefined1 **)((long)ppuVar24 + -0x240) = puVar17;
            *(undefined8 *)((long)ppuVar24 + -0x238) = 0x100;
            *(undefined8 *)((long)ppuVar24 + -0x230) = 0;
            *(undefined **)((long)ppuVar24 + -0x228) = &UNK_00358010;
            *(undefined8 *)((long)ppuVar24 + -0x220) = 0;
            *(undefined1 **)((long)ppuVar24 + -0x118) = puVar17;
            *(undefined8 *)((long)ppuVar24 + -0x2d0) = 5;
            *(undefined1 **)((long)ppuVar24 + -0x2c8) = puVar10;
            *(undefined8 *)((long)ppuVar24 + -0x2c0) = *(undefined8 *)((long)ppuVar24 + -0x250);
            *(undefined8 *)((long)ppuVar24 + -0x340) = *(undefined8 *)((long)ppuVar24 + -0x250);
            *(undefined4 *)((long)ppuVar24 + -0x350) = *(undefined4 *)((long)ppuVar24 + -0x2d0);
            *(undefined4 *)((long)ppuVar24 + -0x34c) = *(undefined4 *)((long)ppuVar24 + -0x2cc);
            *(undefined4 *)((long)ppuVar24 + -0x348) = *(undefined4 *)((long)ppuVar24 + -0x2c8);
            *(undefined4 *)((long)ppuVar24 + -0x344) = *(undefined4 *)((long)ppuVar24 + -0x2c4);
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410389;
            func_0x0036acc0((undefined1 *)((long)ppuVar24 + -0x240),&UNK_0017ef7d,0x2c);
            *(undefined8 *)((long)ppuVar24 + -0x308) = *(undefined8 *)((long)ppuVar24 + -0x118);
            *(undefined8 *)((long)ppuVar24 + -0x300) = *(undefined8 *)((long)ppuVar24 + -0x230);
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004103b5;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                      ((undefined1 *)((long)ppuVar24 + -0x2d0),
                       (undefined1 *)((long)ppuVar24 + -0x308));
            if (*(undefined1 **)((long)ppuVar24 + -0x118) != puVar17) {
              *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004103ca;
              _ZdaPvSt11align_val_t
                        (*(undefined1 **)((long)ppuVar24 + -0x118),
                         *(undefined8 *)((long)ppuVar24 + -0x238));
            }
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004103d9;
            func_0x0032e5a0(uVar11,(undefined1 *)((long)ppuVar24 + -0x2d0));
            if ((*(byte *)((long)ppuVar24 + -0x2d0) & 1) != 0) {
              *(undefined **)((long)ppuVar24 + -0x358) = &UNK_004103f9;
              _ZdaPvSt11align_val_t
                        (*(undefined8 *)((long)ppuVar24 + -0x2c0),
                         *(ulong *)((long)ppuVar24 + -0x2d0) & 0xfffffffffffffffe);
            }
            if ((*(byte *)((long)ppuVar24 + -0x2f8) & 1) != 0) {
              *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410419;
              _ZdaPvSt11align_val_t
                        (*(undefined8 *)((long)ppuVar24 + -0x2e8),
                         *(ulong *)((long)ppuVar24 + -0x2f8) & 0xfffffffffffffffe);
            }
            *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410425;
            _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar24 + -0x328));
            **(undefined4 **)((long)ppuVar24 + -0x338) = *(undefined4 *)((long)ppuVar24 + -0x32c);
          }
        }
        if ((*(byte *)((long)ppuVar24 + -800) & 1) != 0) {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410112;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar24 + -0x310),
                     *(ulong *)((long)ppuVar24 + -800) & 0xfffffffffffffffe);
        }
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041011a;
        _ZN11ServiceInfoD2Ev(plVar19 + 1);
        lVar30 = *plVar19;
        *plVar19 = 0;
        if (lVar30 != 0) {
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410131;
          _ZNSt3__115__thread_structD2Ev(lVar30);
          *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041013e;
          _ZdaPvSt11align_val_t(lVar30,8);
        }
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_0041014b;
        _ZdaPvSt11align_val_t(plVar19,0xb0);
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0x110)) {
          return 0;
        }
      }
      else {
        *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410442;
        func_0x0032e8f0();
      }
      *(undefined **)((long)ppuVar24 + -0x358) = &UNK_00410447;
      func_0x0099bd00();
      *(undefined1 **)((long)ppuVar24 + -0x358) = (undefined1 *)((long)ppuVar24 + -0xe0);
      lVar30 = free();
      return lVar30;
    }
  }
  *(undefined **)((long)ppuVar24 + -0x50) = &UNK_0040f1db;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar24 + -0x50) = (undefined1 *)((long)ppuVar24 + -8);
  *(undefined8 *)((long)ppuVar24 + -0x50) = *(undefined8 *)((long)ppuVar24 + -0x50);
  *(uint **)((long)ppuVar24 + -0x58) = puVar16;
  *(uint **)((long)ppuVar24 + -0x60) = puVar12;
  *(undefined1 **)((long)ppuVar24 + -0x68) = puVar10;
  *(undefined8 *)((long)ppuVar24 + -0x70) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iVar26 = 0x411540;
  puVar25 = (uint *)&UNK_004115f0;
  *(undefined **)((long)ppuVar24 + -0x88) = &UNK_0041148d;
  adbmdns_start();
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    iVar26 = 1;
    puVar25 = (uint *)0x0;
    *(undefined **)((long)ppuVar24 + -0x88) = &UNK_004114cd;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar8 != '\0') {
      *(undefined **)((long)ppuVar24 + -0x88) = &UNK_004114d6;
      puVar10 = (undefined1 *)func_0x0099bce0();
      uVar20 = *(uint *)puVar10;
      puVar16 = (uint *)(ulong)uVar20;
      puVar12 = (uint *)((long)ppuVar24 + -0x78);
      puVar21 = (uint *)0x1;
      in_R9 = 0xffffffff;
      *(undefined **)((long)ppuVar24 + -0x88) = &UNK_00411502;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar12,&UNK_0018af5d,0x85,1,0);
      *(undefined **)((long)ppuVar24 + -0x88) = &UNK_0041150a;
      uVar11 = _ZN7android4base10LogMessage6streamEv(puVar12);
      puVar25 = (uint *)&UNK_0017efb7;
      *(undefined **)((long)ppuVar24 + -0x88) = &UNK_0041151e;
      func_0x0032eb30(uVar11,&UNK_0017efb7,0x1a);
      *(undefined **)((long)ppuVar24 + -0x88) = &UNK_00411526;
      puVar22 = puVar12;
      _ZN7android4base10LogMessageD2Ev();
      iVar26 = (int)puVar22;
      *(uint *)puVar10 = uVar20;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0x70)) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar24 + -0x88) = &UNK_00411533;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar24 + -0x88) = (undefined1 *)((long)ppuVar24 + -0x50);
  *(uint **)((long)ppuVar24 + -0x90) = puVar16;
  *(uint **)((long)ppuVar24 + -0x98) = puVar12;
  *(undefined1 **)((long)ppuVar24 + -0xa0) = puVar10;
  uVar28 = 5 - iVar26;
  uVar20 = 1;
  if (iVar26 - 1U < 5) {
    uVar20 = uVar28;
  }
  *(undefined8 *)((long)ppuVar24 + -0xa8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar27 = 0xa00630;
  puVar22 = puVar21;
  if (((adb_trace_mask._1_1_ & 0x80) != 0) &&
     (uVar27 = 0xa00640, (int)adb_trace_severity._60_4_ <= (int)uVar20)) {
    puVar10 = (undefined1 *)((long)ppuVar24 + -0xb0);
    puVar22 = (uint *)(ulong)uVar20;
    uVar28 = 0;
    in_R9 = 0xffffffff;
    *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115be;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar10);
    *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115c6;
    puVar16 = (uint *)_ZN7android4base10LogMessage6streamEv(puVar10);
    *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115d1;
    uVar11 = func_0x0099bcf0(puVar21);
    *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115df;
    puVar25 = puVar21;
    func_0x0032eb30(puVar16,puVar21,uVar11);
    *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115e7;
    puVar12 = (uint *)puVar10;
    _ZN7android4base10LogMessageD2Ev();
    uVar27 = SUB84(puVar12,0);
    puVar12 = puVar21;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0xa8)) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar24 + -0xc0) = &UNK_004115ee;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar24 + -0xc0) = (undefined1 *)((long)ppuVar24 + -0x88);
  *(uint **)((long)ppuVar24 + -200) = puVar16;
  *(uint **)((long)ppuVar24 + -0xd0) = puVar12;
  *(ulong *)((long)ppuVar24 + -0xd8) = unaff_R13;
  *(undefined1 **)((long)ppuVar24 + -0xe0) = unaff_R12;
  *(undefined1 **)((long)ppuVar24 + -0xe8) = puVar10;
  *(undefined8 *)((long)ppuVar24 + -0x360) = in_R9;
  *(uint *)((long)ppuVar24 + -0x370) = uVar28;
  *(uint **)((long)ppuVar24 + -0x368) = puVar22;
  *(undefined8 *)((long)ppuVar24 + -0x380) = extraout_RDX;
  *(uint **)((long)ppuVar24 + -0x388) = puVar25;
  *(undefined4 *)((long)ppuVar24 + -0x374) = uVar27;
  uVar20 = *(uint *)((long)ppuVar24 + -0xb0);
  *(undefined8 *)((long)ppuVar24 + -0xf0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((long)ppuVar24 + -0x2c0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x2b8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x2d0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x2c8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x2b0) = 0;
  *(undefined4 *)((long)ppuVar24 + -0x2b0) = 0x3f800000;
  if (uVar20 != 0) {
    lVar30 = 0;
    do {
      puVar15 = (undefined4 *)(*(long *)((long)ppuVar24 + -0xa8) + lVar30);
      uVar27 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      *(undefined4 *)((long)ppuVar24 + -0x220) = *puVar15;
      *(undefined4 *)((long)ppuVar24 + -0x21c) = uVar27;
      *(undefined4 *)((long)ppuVar24 + -0x218) = uVar6;
      *(undefined4 *)((long)ppuVar24 + -0x214) = uVar7;
      *(undefined1 **)((long)ppuVar24 + -0x280) = (undefined1 *)((long)ppuVar24 + -0x2d0);
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_004116b5;
      _ZZNSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE16__emplace_uniqueB8nn220000IJRKS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                ((undefined1 *)((long)ppuVar24 + -0x280),(undefined1 *)((long)ppuVar24 + -0x220),
                 (undefined1 *)((long)ppuVar24 + -0x220));
      lVar30 = lVar30 + 0x10;
    } while ((ulong)uVar20 << 4 != lVar30);
  }
  if (*(int *)((long)ppuVar24 + -0x370) == 0) {
    *(undefined4 *)((long)ppuVar24 + -0x360) = 0;
    *(undefined4 *)((long)ppuVar24 + -0x354) = 0;
    *(undefined4 *)((long)ppuVar24 + -0x358) = 0;
  }
  else {
    uVar20 = **(uint **)((long)ppuVar24 + -0x360);
    *(uint *)((long)ppuVar24 + -0x358) = uVar20 & 0xff;
    uVar20 = uVar20 & 0xffffff00;
    *(uint *)((long)ppuVar24 + -0x360) = uVar20;
    *(int *)((long)ppuVar24 + -0x354) = (int)CONCAT71((uint7)(uint3)(uVar20 >> 8),1);
  }
  *(undefined8 *)((long)ppuVar24 + -0x350) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x348) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x340) = 0;
  if (*(uint *)((long)ppuVar24 + -0x98) != 0) {
    *(ulong *)((long)ppuVar24 + -0x370) = (ulong)*(uint *)((long)ppuVar24 + -0x98) << 5;
    lVar30 = 0;
    do {
      *(undefined8 *)((long)ppuVar24 + -0x2a0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x298) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x290) = 0;
      uVar11 = *(undefined8 *)(*(long *)((long)ppuVar24 + -0x90) + lVar30);
      uVar20 = *(uint *)(*(long *)((long)ppuVar24 + -0x90) + 8 + lVar30);
      uVar9 = (ulong)uVar20;
      if (uVar9 < 0x17) {
        *(char *)((long)ppuVar24 + -0x2a0) = (char)uVar20 * '\x02';
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x29f);
      }
      else {
        lVar29 = (uVar9 | 7) + 1;
        if ((uVar9 | 7) == 0x17) {
          lVar29 = 0x1a;
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_004117c0;
        puVar10 = (undefined1 *)_Znwm(lVar29);
        *(long *)((long)ppuVar24 + -0x2a0) = lVar29 + 1;
        *(ulong *)((long)ppuVar24 + -0x298) = uVar9;
        *(undefined1 **)((long)ppuVar24 + -0x290) = puVar10;
      }
      puVar17 = (undefined1 *)((long)ppuVar24 + -0x30f);
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_004117f0;
      func_0x0099bd90(puVar10,uVar11,uVar9);
      puVar10[uVar9] = 0;
      *(undefined8 *)((long)ppuVar24 + -0x310) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x308) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x300) = 0;
      uVar11 = *(undefined8 *)(*(long *)((long)ppuVar24 + -0x90) + 0x10 + lVar30);
      uVar20 = *(uint *)(*(long *)((long)ppuVar24 + -0x90) + 0x18 + lVar30);
      uVar9 = (ulong)uVar20;
      if (uVar9 < 0x17) {
        *(char *)((long)ppuVar24 + -0x310) = (char)uVar20 * '\x02';
      }
      else {
        lVar29 = (uVar9 | 7) + 1;
        if ((uVar9 | 7) == 0x17) {
          lVar29 = 0x1a;
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411850;
        puVar17 = (undefined1 *)_Znwm(lVar29);
        *(long *)((long)ppuVar24 + -0x310) = lVar29 + 1;
        *(ulong *)((long)ppuVar24 + -0x308) = uVar9;
        *(undefined1 **)((long)ppuVar24 + -0x300) = puVar17;
      }
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411880;
      func_0x0099bd90(puVar17,uVar11,uVar9);
      puVar17[uVar9] = 0;
      *(undefined8 *)((long)ppuVar24 + -0x330) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x328) = 0;
      bVar32 = (*(byte *)((long)ppuVar24 + -0x2a0) & 1) == 0;
      puVar10 = *(undefined1 **)((long)ppuVar24 + -0x290);
      if (bVar32) {
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x29f);
      }
      uVar9 = (ulong)(*(byte *)((long)ppuVar24 + -0x2a0) >> 1);
      if (!bVar32) {
        uVar9 = *(ulong *)((long)ppuVar24 + -0x298);
      }
      *(undefined1 **)((long)ppuVar24 + -0x250) = puVar10;
      *(ulong *)((long)ppuVar24 + -0x248) = uVar9;
      bVar32 = (*(byte *)((long)ppuVar24 + -0x310) & 1) == 0;
      puVar10 = *(undefined1 **)((long)ppuVar24 + -0x300);
      if (bVar32) {
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x30f);
      }
      *(undefined8 *)((long)ppuVar24 + -800) = 0;
      uVar9 = (ulong)(*(byte *)((long)ppuVar24 + -0x310) >> 1);
      if (!bVar32) {
        uVar9 = *(ulong *)((long)ppuVar24 + -0x308);
      }
      *(undefined8 *)((long)ppuVar24 + -0x230) = 0x1ad;
      *(undefined1 **)((long)ppuVar24 + -0x240) = puVar10;
      *(ulong *)((long)ppuVar24 + -0x238) = uVar9;
      puVar14 = (undefined8 *)((long)ppuVar24 + -0x1f8);
      *(undefined8 *)((long)ppuVar24 + -0x108) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x100) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x118) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x110) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x128) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x120) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x138) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x130) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x148) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x140) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x158) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x150) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x168) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x160) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x178) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x170) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x188) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x180) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x198) = 0;
      *(undefined8 *)((long)ppuVar24 + -400) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1a8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1a0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1b8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1b0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1c8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1c0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1d8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1d0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1e8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1e0) = 0;
      *puVar14 = 0;
      *(undefined8 *)((long)ppuVar24 + -0x1f0) = 0;
      *(undefined8 **)((long)ppuVar24 + -0x220) = puVar14;
      *(undefined8 *)((long)ppuVar24 + -0x218) = 0x100;
      *(undefined8 *)((long)ppuVar24 + -0x210) = 0;
      *(undefined **)((long)ppuVar24 + -0x208) = &UNK_00358010;
      *(undefined8 *)((long)ppuVar24 + -0x200) = 0;
      *(undefined8 **)((long)ppuVar24 + -0xf8) = puVar14;
      *(undefined **)((long)ppuVar24 + -0x2f8) = &UNK_00169739;
      *(undefined **)((long)ppuVar24 + -0x2f0) = &UNK_0016973e;
      *(undefined4 *)((long)ppuVar24 + -0x2e8) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x2e0) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x2d8) = 2;
      *(undefined8 *)((long)ppuVar24 + -0x278) = 2;
      *(undefined1 **)((long)ppuVar24 + -0x270) = (undefined1 *)((long)ppuVar24 + -0x250);
      *(undefined8 *)((long)ppuVar24 + -0x268) = 0x1ad;
      *(undefined1 **)((long)ppuVar24 + -0x280) = (undefined1 *)((long)ppuVar24 + -0x220);
      *(undefined1 *)((long)ppuVar24 + -0x260) = 0;
      *(undefined1 *)((long)ppuVar24 + -600) = 0;
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411a2f;
      func_0x003580e0((undefined1 *)((long)ppuVar24 + -0x2f8),
                      (undefined1 *)((long)ppuVar24 + -0x280));
      if (*(char *)((long)ppuVar24 + -600) == '\x01') {
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411a44;
        _ZNSt3__16localeD2Ev((undefined1 *)((long)ppuVar24 + -0x260));
      }
      uVar9 = *(ulong *)((long)ppuVar24 + -0x210);
      if (0xfffffffffffffff6 < uVar9) goto code_r0x0041204d;
      puVar10 = *(undefined1 **)((long)ppuVar24 + -0xf8);
      if (uVar9 < 0x17) {
        *(char *)((long)ppuVar24 + -0x330) = (char)uVar9 * '\x02';
        puVar17 = (undefined1 *)((long)ppuVar24 + -0x32f);
      }
      else {
        lVar29 = (uVar9 | 7) + 1;
        if ((uVar9 | 7) == 0x17) {
          lVar29 = 0x1a;
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411aa0;
        puVar17 = (undefined1 *)_Znwm(lVar29);
        *(long *)((long)ppuVar24 + -0x330) = lVar29 + 1;
        *(ulong *)((long)ppuVar24 + -0x328) = uVar9;
        *(undefined1 **)((long)ppuVar24 + -800) = puVar17;
      }
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411ad0;
      func_0x0099bd90(puVar17,puVar10,uVar9);
      puVar17[uVar9] = 0;
      if (puVar10 != (undefined1 *)((long)ppuVar24 + -0x1f8)) {
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411af0;
        _ZdaPvSt11align_val_t(puVar10,*(undefined8 *)((long)ppuVar24 + -0x218));
      }
      bVar32 = (*(byte *)((long)ppuVar24 + -0x330) & 1) == 0;
      puVar10 = *(undefined1 **)((long)ppuVar24 + -800);
      if (bVar32) {
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x32f);
      }
      uVar9 = (ulong)(*(byte *)((long)ppuVar24 + -0x330) >> 1);
      if (!bVar32) {
        uVar9 = *(ulong *)((long)ppuVar24 + -0x328);
      }
      *(undefined8 *)((long)ppuVar24 + -0x220) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x218) = 0;
      *(undefined8 *)((long)ppuVar24 + -0x210) = 0;
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411b40;
      _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPcEES7_EENS5_IPhEENS5_IPKhEET_T0_l
                ((undefined1 *)((long)ppuVar24 + -0x220),0,puVar10,puVar10 + uVar9);
      plVar19 = *(long **)((long)ppuVar24 + -0x348);
      if (plVar19 < *(long **)((long)ppuVar24 + -0x340)) {
        *plVar19 = 0;
        plVar19[1] = 0;
        plVar19[2] = 0;
        lVar29 = *(long *)((long)ppuVar24 + -0x220);
        lVar31 = *(long *)((long)ppuVar24 + -0x218) - lVar29;
        if (lVar31 != 0) {
          if (lVar31 < 0) goto code_r0x00412052;
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411b83;
          lVar18 = _Znwm(lVar31);
          *plVar19 = lVar18;
          plVar19[1] = lVar18;
          plVar19[2] = lVar18 + lVar31;
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411ba0;
          func_0x0099bda0(lVar18,lVar29,lVar31);
          plVar19[1] = lVar18 + lVar31;
        }
        plVar19 = plVar19 + 3;
      }
      else {
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411c7c;
        plVar19 = (long *)_ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__emplace_back_slow_pathIJRS3_EEEPS3_DpOT_
                                    ((undefined1 *)((long)ppuVar24 + -0x350),
                                     (undefined1 *)((long)ppuVar24 + -0x220));
      }
      *(long **)((long)ppuVar24 + -0x348) = plVar19;
      lVar29 = *(long *)((long)ppuVar24 + -0x220);
      if (lVar29 != 0) {
        *(long *)((long)ppuVar24 + -0x218) = lVar29;
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411bdb;
        _ZdaPvSt11align_val_t(lVar29,*(long *)((long)ppuVar24 + -0x210) - lVar29);
      }
      if ((*(byte *)((long)ppuVar24 + -0x330) & 1) == 0) {
        if ((*(byte *)((long)ppuVar24 + -0x310) & 1) == 0) goto code_r0x00411bf0;
code_r0x00411c23:
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411c3a;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar24 + -0x300),
                   *(ulong *)((long)ppuVar24 + -0x310) & 0xfffffffffffffffe);
        bVar1 = *(byte *)((long)ppuVar24 + -0x2a0);
      }
      else {
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411c17;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar24 + -800),
                   *(ulong *)((long)ppuVar24 + -0x330) & 0xfffffffffffffffe);
        if ((*(byte *)((long)ppuVar24 + -0x310) & 1) != 0) goto code_r0x00411c23;
code_r0x00411bf0:
        bVar1 = *(byte *)((long)ppuVar24 + -0x2a0);
      }
      if ((bVar1 & 1) != 0) {
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411c61;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar24 + -0x290),
                   *(ulong *)((long)ppuVar24 + -0x2a0) & 0xfffffffffffffffe);
      }
      lVar30 = lVar30 + 0x20;
    } while (*(long *)((long)ppuVar24 + -0x370) != lVar30);
  }
  *(undefined8 *)((long)ppuVar24 + -400) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x188) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1a0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x198) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1b0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1a8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1c0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1b8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1d0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1c8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1e0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1d8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1f0) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1e8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x200) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x1f8) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x210) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x208) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x218) = 0;
  *(undefined8 *)((long)ppuVar24 + -0x180) = 0;
  *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411ce4;
  uVar9 = func_0x0099bcf0(*(undefined8 *)((long)ppuVar24 + -0x388));
  if (uVar9 < 0xfffffffffffffff7) {
    if (uVar9 < 0x17) {
      *(char *)((long)ppuVar24 + -0x280) = (char)uVar9 * '\x02';
      puVar10 = (undefined1 *)((long)ppuVar24 + -0x27f);
    }
    else {
      lVar30 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        lVar30 = (uVar9 | 7) + 1;
      }
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411d2b;
      puVar10 = (undefined1 *)_Znwm(lVar30);
      *(long *)((long)ppuVar24 + -0x280) = lVar30 + 1;
      *(ulong *)((long)ppuVar24 + -0x278) = uVar9;
      *(undefined1 **)((long)ppuVar24 + -0x270) = puVar10;
    }
    *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411d58;
    func_0x0099bda0(puVar10,*(undefined8 *)((long)ppuVar24 + -0x388),uVar9);
    puVar10[uVar9] = 0;
    *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411d69;
    uVar9 = func_0x0099bcf0(*(undefined8 *)((long)ppuVar24 + -0x380));
    if (uVar9 < 0xfffffffffffffff7) {
      if (uVar9 < 0x17) {
        *(char *)((long)ppuVar24 + -0x250) = (char)uVar9 * '\x02';
        puVar10 = (undefined1 *)((long)ppuVar24 + -0x24f);
      }
      else {
        lVar30 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar30 = (uVar9 | 7) + 1;
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411db0;
        puVar10 = (undefined1 *)_Znwm(lVar30);
        *(long *)((long)ppuVar24 + -0x250) = lVar30 + 1;
        *(ulong *)((long)ppuVar24 + -0x248) = uVar9;
        *(undefined1 **)((long)ppuVar24 + -0x240) = puVar10;
      }
      uVar11 = *(undefined8 *)((long)ppuVar24 + -0x368);
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411de4;
      func_0x0099bda0(puVar10,*(undefined8 *)((long)ppuVar24 + -0x380),uVar9);
      puVar10[uVar9] = 0;
      *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411df1;
      uVar9 = func_0x0099bcf0(uVar11);
      if (uVar9 < 0xfffffffffffffff7) {
        uVar2 = *(ushort *)((long)ppuVar24 + -0xa0);
        if (uVar9 < 0x17) {
          *(char *)((long)ppuVar24 + -0x2f8) = (char)uVar9 * '\x02';
          puVar10 = (undefined1 *)((long)ppuVar24 + -0x2f7);
        }
        else {
          lVar30 = 0x1a;
          if ((uVar9 | 7) != 0x17) {
            lVar30 = (uVar9 | 7) + 1;
          }
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411e3d;
          puVar10 = (undefined1 *)_Znwm(lVar30);
          *(long *)((long)ppuVar24 + -0x2f8) = lVar30 + 1;
          uVar11 = *(undefined8 *)((long)ppuVar24 + -0x368);
          *(ulong *)((long)ppuVar24 + -0x2f0) = uVar9;
          *(undefined1 **)((long)ppuVar24 + -0x2e8) = puVar10;
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411e6d;
        func_0x0099bda0(puVar10,uVar11,uVar9);
        puVar10[uVar9] = 0;
        *(uint *)((long)ppuVar24 + -0x2a0) =
             *(uint *)((long)ppuVar24 + -0x358) | *(uint *)((long)ppuVar24 + -0x360);
        *(char *)((long)ppuVar24 + -0x29c) = (char)*(undefined4 *)((long)ppuVar24 + -0x354);
        *(undefined1 **)((long)ppuVar24 + -0x398) = (undefined1 *)((long)ppuVar24 + -0x350);
        *(ulong *)((long)ppuVar24 + -0x3a0) = (ulong)uVar2;
        *(undefined **)((long)ppuVar24 + -0x3a8) = &UNK_00411ecd;
        _ZN11ServiceInfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_RKNS0_8optionalI11IPv4AddressEERKNS0_13unordered_setI11IPv6Address15IPv6AddressHashNS0_8equal_toISF_EENS4_ISF_EEEEtRKNS0_6vectorINSN_IhNS4_IhEEEENS4_ISP_EEEE
                  ((undefined1 *)((long)ppuVar24 + -0x220),(undefined1 *)((long)ppuVar24 + -0x280),
                   (undefined1 *)((long)ppuVar24 + -0x250),(undefined1 *)((long)ppuVar24 + -0x2f8),
                   (undefined1 *)((long)ppuVar24 + -0x2a0),(undefined1 *)((long)ppuVar24 + -0x2d0));
        if ((*(byte *)((long)ppuVar24 + -0x2f8) & 1) == 0) {
          if ((*(byte *)((long)ppuVar24 + -0x250) & 1) == 0) goto code_r0x00411eeb;
code_r0x00411f98:
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411faf;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar24 + -0x240),
                     *(ulong *)((long)ppuVar24 + -0x250) & 0xfffffffffffffffe);
          bVar1 = *(byte *)((long)ppuVar24 + -0x280);
        }
        else {
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411f8b;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar24 + -0x2e8),
                     *(ulong *)((long)ppuVar24 + -0x2f8) & 0xfffffffffffffffe);
          if ((*(byte *)((long)ppuVar24 + -0x250) & 1) != 0) goto code_r0x00411f98;
code_r0x00411eeb:
          bVar1 = *(byte *)((long)ppuVar24 + -0x280);
        }
        if ((bVar1 & 1) != 0) {
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411f0b;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar24 + -0x270),
                     *(ulong *)((long)ppuVar24 + -0x280) & 0xfffffffffffffffe);
        }
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411f22;
        _Z23OnServiceReceiverResultRK11ServiceInfo16ServiceInfoState
                  ((undefined1 *)((long)ppuVar24 + -0x220),*(int *)((long)ppuVar24 + -0x374) + -1);
        *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411f2a;
        _ZN11ServiceInfoD2Ev((undefined1 *)((long)ppuVar24 + -0x220));
        lVar30 = *(long *)((long)ppuVar24 + -0x350);
        if (lVar30 != 0) {
          lVar29 = *(long *)((long)ppuVar24 + -0x348);
          lVar31 = lVar30;
          if (lVar30 != lVar29) {
            do {
              lVar31 = *(long *)(lVar29 + -0x18);
              if (lVar31 != 0) {
                *(long *)(lVar29 + -0x10) = lVar31;
                lVar18 = *(long *)(lVar29 + -8);
                *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411f72;
                _ZdaPvSt11align_val_t(lVar31,lVar18 - lVar31);
              }
              lVar29 = lVar29 + -0x18;
            } while (lVar29 != lVar30);
            lVar31 = *(long *)((long)ppuVar24 + -0x350);
          }
          *(long *)((long)ppuVar24 + -0x348) = lVar30;
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411fde;
          _ZdaPvSt11align_val_t(lVar31,*(long *)((long)ppuVar24 + -0x340) - lVar31);
        }
        puVar14 = *(undefined8 **)((long)ppuVar24 + -0x2c0);
        while (puVar14 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar14;
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00411ffd;
          _ZdaPvSt11align_val_t(puVar14,0x20);
          puVar14 = puVar3;
        }
        lVar30 = *(long *)((long)ppuVar24 + -0x2d0);
        *(undefined8 *)((long)ppuVar24 + -0x2d0) = 0;
        if (lVar30 != 0) {
          *(undefined **)((long)ppuVar24 + -0x398) = &UNK_0041202c;
          _ZdaPvSt11align_val_t(lVar30,*(long *)((long)ppuVar24 + -0x2c8) << 3);
        }
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar24 + -0xf0)) {
          return *(long *)(in_FS_OFFSET + 0x28);
        }
        goto code_r0x00412057;
      }
    }
  }
code_r0x0041204d:
  *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00412052;
  func_0x0032e8f0();
code_r0x00412052:
  *(undefined **)((long)ppuVar24 + -0x398) = &UNK_00412057;
  func_0x00330ca0();
code_r0x00412057:
  *(undefined **)((long)ppuVar24 + -0x398) = &UNK_0041205c;
  func_0x0099bd00();
  pcVar4 = (code *)swi(3);
  lVar30 = (*pcVar4)();
  return lVar30;
}


