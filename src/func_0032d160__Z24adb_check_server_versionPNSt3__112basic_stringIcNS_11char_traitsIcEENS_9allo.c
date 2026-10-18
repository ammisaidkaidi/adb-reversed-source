// Function: _Z24adb_check_server_versionPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0032d160
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z24adb_check_server_versionPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                (byte *param_1,undefined1 ***param_2,undefined8 param_3,undefined8 param_4,
                byte param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char cVar6;
  undefined8 uVar7;
  ulong *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint *extraout_RDX;
  ulong uVar12;
  byte *pbVar13;
  undefined *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte *pbStack_f8;
  uint *puStack_e8;
  ulong uStack_e0;
  uint uStack_d4;
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [8];
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  byte *pbStack_68;
  undefined1 uStack_29;
  undefined1 **ppuStack_28;
  undefined1 *puStack_20;
  ulong *puStack_18;
  
  puStack_18 = *(ulong **)(in_FS_OFFSET + 0x28);
  pbVar13 = param_1;
  if (lRam0000000000a00530 != -1) {
    puStack_20 = &uStack_29;
    ppuStack_28 = &puStack_20;
    pbVar13 = (byte *)0xa00530;
    param_2 = &ppuStack_28;
    _ZNSt3__111__call_onceERVmPvPFvS2_E(0xa00530,param_2,&UNK_0032e030);
  }
  pbVar5 = pbRam0000000000a00540;
  if (param_1 != pbRam0000000000a00540) {
    bVar1 = *pbRam0000000000a00540;
    if ((*param_1 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pbRam0000000000a00540 + 0x10);
        uVar17 = *(undefined4 *)(pbVar5 + 4);
        uVar3 = *(undefined4 *)(pbVar5 + 8);
        uVar4 = *(undefined4 *)(pbVar5 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)pbVar5;
        *(undefined4 *)(param_1 + 4) = uVar17;
        *(undefined4 *)(param_1 + 8) = uVar3;
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      else {
        param_2 = *(undefined1 ****)(pbRam0000000000a00540 + 0x10);
        pbVar13 = param_1;
        func_0x0032e990(param_1,param_2,*(undefined8 *)(pbRam0000000000a00540 + 8));
      }
    }
    else {
      bVar18 = (bVar1 & 1) != 0;
      param_2 = (undefined1 ***)(pbRam0000000000a00540 + 1);
      if (bVar18) {
        param_2 = *(undefined1 ****)(pbRam0000000000a00540 + 0x10);
      }
      uVar16 = (ulong)(bVar1 >> 1);
      if (bVar18) {
        uVar16 = *(ulong *)(pbRam0000000000a00540 + 8);
      }
      pbVar13 = param_1;
      func_0x0032e920(param_1,param_2,uVar16);
    }
  }
  puVar8 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (puVar8 == puStack_18) {
    return (ulong)bRam0000000000a00538;
  }
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_68 = param_1;
  cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  if (cVar6 != '\0') {
    puVar15 = (uint *)func_0x0099bce0();
    uVar2 = *puVar15;
    uStack_e0 = (ulong)uVar2;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_90,&UNK_00183124,0x9d,1,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_90);
    uVar7 = func_0x0032eb30(uVar7,&UNK_001752ec,0xe);
    func_0x0032eb30(uVar7,pbVar13,param_2);
    _ZN7android4base10LogMessageD2Ev(&uStack_90);
    *puVar15 = uVar2;
    puStack_e8 = extraout_RDX;
  }
  puVar15 = puRam0000000000a00520;
  if ((byte *)0xffffffffffefffff < (byte *)((long)param_2 - 0x100001U)) {
    auStack_d0[0] = 0;
    auStack_d0[1] = 0;
    auStack_d0[2] = 0;
    uStack_d4 = 0xffffffff;
    uVar7 = func_0x0099bcf0(puRam0000000000a00520);
    cVar6 = _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
                      (&uStack_d4,puVar15,uVar7,0,0,auStack_d0);
    uVar2 = uStack_d4;
    uVar16 = uRam0000000000a00518;
    if (cVar6 == '\0') {
      _ZN7android4base12StringPrintfEPKcz(&uStack_90,&UNK_00187a70,puRam0000000000a00520);
      if ((*puVar8 & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar8[2],*puVar8 & 0xfffffffffffffffe);
      }
      puVar8[2] = uStack_80;
      *(undefined4 *)puVar8 = (undefined4)uStack_90;
      *(undefined4 *)((long)puVar8 + 4) = uStack_90._4_4_;
      *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_88;
      *(undefined4 *)((long)puVar8 + 0xc) = uStack_88._4_4_;
      uVar16 = 0xfffffffe;
      puStack_e8 = extraout_RDX;
      goto code_r0x0032d684;
    }
    if (((undefined1 ***)0x3 < param_2) &&
       (puStack_e8 = extraout_RDX, (~param_5 & *(int *)pbVar13 == 0x74736f68) != 0))
    goto code_r0x0032d5e3;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_e0 = uRam0000000000a00518;
    pbStack_f8 = pbVar13;
    if (uRam0000000000a00518 == 0) {
      if (puRam0000000000a00510 == (undefined *)0x0) {
        switch(uRam00000000009c55c0) {
        case 0:
          puVar14 = &UNK_0015adb1;
          break;
        case 1:
          puVar14 = &UNK_0015f761;
          break;
        case 2:
          puVar14 = &UNK_00165c24;
          break;
        case 3:
          bVar18 = true;
          uVar11 = 0;
          puVar15 = (uint *)0x0;
          puStack_e8 = extraout_RDX;
          goto code_r0x0032d599;
        default:
          puVar14 = &UNK_00176d58;
        }
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_90,&UNK_001752fb);
      }
      else {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_90,&UNK_00162ab6);
        puVar14 = puRam0000000000a00510;
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_90,puVar14)
      ;
    }
    else {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_90,&UNK_0015ad9e);
      _ZNSt3__19to_stringEy(&uStack_a8,uRam0000000000a00518);
      func_0x0032e820(&uStack_90,&uStack_a8);
      if ((uStack_a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_98,CONCAT44(uStack_a4,uStack_a8) & 0xfffffffffffffffe);
      }
      uStack_78 = uRam0000000000a00518;
    }
    uVar12 = uStack_90 >> 1 & 0x7f;
    uVar11 = (long)&uStack_90 + 1;
    if ((uStack_90 & 1) != 0) {
      uVar12 = uStack_88;
      uVar11 = uStack_80;
    }
    cVar6 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                      (uVar2,uVar11,uVar12);
    if (cVar6 != '\0') {
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar6 != '\0') {
        puVar10 = (undefined4 *)func_0x0099bce0();
        uVar17 = *puVar10;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_a8,&UNK_00183124,0x74,1,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_a8);
        uVar7 = func_0x0032eb30(uVar7,&UNK_0015c4d6,0x1e);
        func_0x0032e5a0(uVar7,&uStack_90);
        _ZN7android4base10LogMessageD2Ev(&uStack_a8);
        *puVar10 = uVar17;
      }
      cVar6 = _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                        (uVar2,puVar8);
      if (cVar6 != '\0') {
        if ((uVar16 == 0) &&
           (cVar6 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(uVar2,&uStack_78,8),
           cVar6 == '\0')) {
          func_0x0032ea60(puVar8,&UNK_0016ac30);
          puStack_e8 = extraout_RDX;
          goto code_r0x0032d591;
        }
        if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
           (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
          puVar10 = (undefined4 *)func_0x0099bce0();
          uVar17 = *puVar10;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_a8,&UNK_00183124,0x82,1,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_a8);
          func_0x0032eb30(uVar7,&UNK_00172014,0x18);
          _ZN7android4base10LogMessageD2Ev(&uStack_a8);
          *puVar10 = uVar17;
        }
        puVar15 = (uint *)(uStack_78 & 0xffffffffffffff00);
        bVar18 = true;
        uVar11 = uStack_78 & 0xff;
        puStack_e8 = extraout_RDX;
        goto code_r0x0032d599;
      }
      uVar11 = 0;
      bVar18 = false;
      if (((byte)adb_trace_mask & 1) != 0) {
        puVar15 = (uint *)0x0;
        uVar11 = 0;
        puStack_e8 = extraout_RDX;
        if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032d599;
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar11 = 0;
        puVar15 = (uint *)0x0;
        bVar18 = false;
        if (cVar6 == '\0') goto code_r0x0032d599;
        puVar15 = (uint *)func_0x0099bce0();
        uStack_e0 = (ulong)*puVar15;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_b0,&UNK_00183124,0x77,1,0,0xffffffff);
        uVar16 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
        if ((*puVar8 & 1) == 0) goto code_r0x0032d9c9;
        pbVar13 = (byte *)puVar8[2];
        goto code_r0x0032d9cd;
      }
      puVar15 = (uint *)0x0;
      puStack_e8 = extraout_RDX;
      goto code_r0x0032d599;
    }
    _Z10perror_strPKc(&uStack_a8,&UNK_0017ea4d);
    if ((*puVar8 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    puVar8[2] = uStack_98;
    *(uint *)puVar8 = uStack_a8;
    *(undefined4 *)((long)puVar8 + 4) = uStack_a4;
    *(undefined4 *)(puVar8 + 1) = uStack_a0;
    *(undefined4 *)((long)puVar8 + 0xc) = uStack_9c;
    puStack_e8 = extraout_RDX;
    goto code_r0x0032d591;
  }
  _ZN7android4base12StringPrintfEPKcz(&uStack_90,&UNK_00173b35,param_2);
  if ((*puVar8 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar8[2],*puVar8 & 0xfffffffffffffffe);
  }
  puVar8[2] = uStack_80;
  *(undefined4 *)puVar8 = (undefined4)uStack_90;
  *(undefined4 *)((long)puVar8 + 4) = uStack_90._4_4_;
  *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_88;
  *(undefined4 *)((long)puVar8 + 0xc) = uStack_88._4_4_;
  uVar16 = 0xffffffff;
  puVar15 = extraout_RDX;
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
      return uVar16;
    }
    func_0x0099bd00();
code_r0x0032d9c9:
    pbVar13 = (byte *)((long)puVar8 + 1);
code_r0x0032d9cd:
    _ZN7android4base12StringPrintfEPKcz(&uStack_a8,&UNK_0018611c,pbVar13);
    func_0x0032e5a0(uVar16,&uStack_a8);
    if ((uStack_a8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_98,CONCAT44(uStack_a4,uStack_a8) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_b0);
    *puVar15 = (uint)uStack_e0;
code_r0x0032d591:
    puVar15 = (uint *)0x0;
    bVar18 = false;
    uVar11 = 0;
code_r0x0032d599:
    if ((uStack_90 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_80,uStack_90 & 0xfffffffffffffffe);
    }
    uVar16 = 0xffffffff;
    if (bVar18) {
      pbVar13 = pbStack_f8;
      if (puStack_e8 != (uint *)0x0) {
        puVar15 = (uint *)((ulong)puVar15 | uVar11);
        *(uint **)puStack_e8 = puVar15;
      }
code_r0x0032d5e3:
      cVar6 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (uStack_d4,pbVar13,param_2);
      if (cVar6 == '\0') {
        _Z10perror_strPKc(&uStack_90,&UNK_0017ea4d);
        if ((*puVar8 & 1) != 0) {
          _ZdaPvSt11align_val_t(puVar8[2],*puVar8 & 0xfffffffffffffffe);
        }
        puVar8[2] = uStack_80;
        *(undefined4 *)puVar8 = (undefined4)uStack_90;
        *(undefined4 *)((long)puVar8 + 4) = uStack_90._4_4_;
        *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_88;
        *(undefined4 *)((long)puVar8 + 0xc) = uStack_88._4_4_;
        uVar16 = 0xffffffff;
        goto code_r0x0032d684;
      }
      cVar6 = _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                        (uStack_d4,puVar8);
      uVar16 = 0xffffffff;
      if (cVar6 == '\0') goto code_r0x0032d684;
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
        puVar9 = (uint *)func_0x0099bce0();
        uVar2 = *puVar9;
        puVar15 = (uint *)(ulong)uVar2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_a8,&UNK_00183124,0xbf,1,0,0xffffffff);
        param_2 = (undefined1 ***)_ZN7android4base10LogMessage6streamEv(&uStack_a8);
        _ZN7android4base12StringPrintfEPKcz(&uStack_90,&UNK_00183167,uStack_d4);
        func_0x0032e5a0(param_2,&uStack_90);
        if ((uStack_90 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_80,uStack_90 & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&uStack_a8);
        *puVar9 = uVar2;
      }
      uVar16 = (ulong)uStack_d4;
      uStack_d4 = 0xffffffff;
      puVar8 = (ulong *)func_0x0099bce0();
      uVar17 = (undefined4)*puVar8;
    }
    else {
code_r0x0032d684:
      uVar2 = uStack_d4;
      param_2 = (undefined1 ***)(ulong)uStack_d4;
      puVar8 = (ulong *)func_0x0099bce0();
      uVar17 = (undefined4)*puVar8;
      if (uVar2 != 0xffffffff) {
        func_0x0099bd10(uVar2);
      }
    }
    *(undefined4 *)puVar8 = uVar17;
    if ((auStack_d0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_d0[2],auStack_d0[0] & 0xfffffffffffffffe);
    }
  } while( true );
}


