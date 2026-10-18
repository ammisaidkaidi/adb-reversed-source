// Function: _Z15SafeReplaceFileNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
// Address: 003fb9d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003fbf22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003fbb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003fbb35) */
/* WARNING: Removing unreachable block (ram,0x003fbb3b) */

byte * _Z15SafeReplaceFileNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
                 (byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  byte *unaff_RBX;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong unaff_R12;
  ulong unaff_R13;
  byte *unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_2a8 [8];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  uint auStack_280 [38];
  byte abStack_1e8 [136];
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  byte abStack_60 [8];
  undefined8 uStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < (byte *)0xfffffffffffffff7) {
    uStack_58 = 0;
    pbStack_50 = (byte *)0x0;
    pbStack_48 = (byte *)0x0;
    uStack_80 = param_4;
    if (param_2 < (byte *)0x17) {
      uStack_58 = (ulong)(byte)((char)param_2 * '\x02');
      pbVar10 = (byte *)((long)&uStack_58 + 1);
    }
    else {
      lVar7 = 0x1a;
      if (((ulong)param_2 | 7) != 0x17) {
        lVar7 = ((ulong)param_2 | 7) + 1;
      }
      puStack_90 = &UNK_003fba48;
      pbVar10 = (byte *)_Znwm(lVar7);
      uStack_58 = lVar7 + 1;
      pbStack_50 = param_2;
      pbStack_48 = pbVar10;
    }
    unaff_R15 = (byte *)((long)&uStack_58 + 1);
    puStack_90 = &UNK_003fba6c;
    func_0x0099bda0(pbVar10,param_1,param_2);
    pbVar10[(long)param_2] = 0;
    puStack_90 = &UNK_003fba81;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (&uStack_58,&UNK_0017bbbe);
    pbVar10 = unaff_R15;
    if ((uStack_58 & 1) != 0) {
      pbVar10 = pbStack_48;
    }
    puStack_90 = &UNK_003fba96;
    uVar4 = func_0x0099c3f0(param_1,pbVar10);
    unaff_R12 = (ulong)uVar4;
    uStack_78 = param_3;
    if (uVar4 != 0) {
      puStack_90 = &UNK_003fbaad;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
      if (cVar3 != '\0') {
        puStack_90 = &UNK_003fbb42;
        puStack_68 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puStack_68;
        puStack_90 = &UNK_003fbb69;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (abStack_60,&UNK_001896a0,0x53,2,0,uVar2);
        puStack_90 = &UNK_003fbb72;
        uVar9 = _ZN7android4base10LogMessage6streamEv(abStack_60);
        puStack_90 = &UNK_003fbb86;
        uVar9 = func_0x0032eb30(uVar9,&UNK_001896c9,0x11);
        puStack_90 = &UNK_003fbb94;
        func_0x0032eb30(uVar9,param_1,param_2);
        puStack_90 = &UNK_003fbb9d;
        _ZN7android4base10LogMessageD2Ev(abStack_60);
        *puStack_68 = uVar2;
        param_3 = uStack_78;
      }
    }
    puStack_90 = &UNK_003fbac0;
    uVar5 = func_0x0099c3f0(param_3);
    unaff_R13 = (ulong)uVar5;
    if (uVar5 == 0) {
      if ((uStack_58 & 1) != 0) {
        unaff_R15 = pbStack_48;
      }
      puStack_90 = &UNK_003fbb35;
      goto code_r0x0099bfa0;
    }
    pbVar11 = (byte *)0x4;
    pbVar10 = (byte *)0x0;
    puStack_90 = &UNK_003fbad3;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puStack_90 = &UNK_003fbbb2;
      puStack_68 = (undefined4 *)func_0x0099bce0();
      uStack_6c = *puStack_68;
      puStack_90 = &UNK_003fbbda;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(abStack_60,&UNK_001896a0,0x58,4,0);
      puStack_90 = &UNK_003fbbe3;
      uVar9 = _ZN7android4base10LogMessage6streamEv(abStack_60);
      puStack_90 = &UNK_003fbbf7;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001896db,0x17);
      puStack_90 = &UNK_003fbc07;
      uVar9 = func_0x0032eb30(uVar9,uStack_78,uStack_80);
      puStack_90 = &UNK_003fbc1b;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00170725,4);
      puStack_90 = &UNK_003fbc29;
      uVar9 = func_0x0032eb30(uVar9,param_1,param_2);
      pbVar10 = &UNK_001692c7;
      puStack_90 = &UNK_003fbc3d;
      func_0x0032eb30(uVar9,&UNK_001692c7,1);
      pbVar11 = abStack_60;
      puStack_90 = &UNK_003fbc46;
      _ZN7android4base10LogMessageD2Ev();
      *puStack_68 = uStack_6c;
    }
    pbVar12 = pbStack_48;
    if (uVar4 == 0) {
      if ((uStack_58 & 1) != 0) {
        unaff_R15 = pbStack_48;
      }
      puStack_90 = &UNK_003fbc6d;
      pbVar10 = param_1;
      pbVar11 = unaff_R15;
      func_0x0099c3f0();
      pbVar12 = pbStack_48;
    }
    pbStack_48 = pbVar12;
    if ((uStack_58 & 1) != 0) {
      pbVar10 = (byte *)(uStack_58 & 0xfffffffffffffffe);
      puStack_90 = &UNK_003fbafb;
      _ZdaPvSt11align_val_t();
      pbVar11 = pbVar12;
    }
    unaff_RBX = param_1;
    param_1 = pbVar11;
    unaff_R14 = param_2;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return (byte *)(ulong)(uVar5 == 0);
    }
  }
  else {
    puStack_90 = &UNK_003fbc81;
    func_0x0032e8f0();
    pbVar10 = param_2;
  }
  puStack_90 = &UNK_003fbc86;
  func_0x0099bd00();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pbStack_b8 = unaff_RBX;
  uStack_b0 = unaff_R12;
  uStack_a8 = unaff_R13;
  pbStack_a0 = unaff_R14;
  pbStack_98 = unaff_R15;
  puStack_90 = &stack0xfffffffffffffff8;
  _ZN3adb5proto13AdbKnownHostsC1EPN6google8protobuf5ArenaE();
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  unaff_R15 = pbVar10 + 1;
  pbVar11 = unaff_R15;
  if ((*pbVar10 & 1) != 0) {
    pbVar11 = *(byte **)(pbVar10 + 0x10);
  }
  pbVar12 = (byte *)0x1;
  iVar6 = func_0x0099bf30(1,pbVar11,&uStack_150);
  if (iVar6 != -1) {
    func_0x0099bdb0(auStack_290,0,0x140);
    lStack_2a0 = 0x9ba5c8;
    abStack_1e8[0] = 0xf0;
    abStack_1e8[1] = 0xa5;
    abStack_1e8[2] = 0x9b;
    abStack_1e8[3] = 0;
    abStack_1e8[4] = 0;
    abStack_1e8[5] = 0;
    abStack_1e8[6] = 0;
    abStack_1e8[7] = 0;
    uStack_298 = 0;
    _ZNSt3__18ios_base4initEPv(abStack_1e8,auStack_290);
    uStack_160 = 0;
    uStack_158 = 0xffffffff;
    lStack_2a0 = 0x9ba558;
    abStack_1e8[0] = 0x80;
    abStack_1e8[1] = 0xa5;
    abStack_1e8[2] = 0x9b;
    abStack_1e8[3] = 0;
    abStack_1e8[4] = 0;
    abStack_1e8[5] = 0;
    abStack_1e8[6] = 0;
    abStack_1e8[7] = 0;
    _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(auStack_290);
    pbVar11 = unaff_R15;
    if ((*pbVar10 & 1) != 0) {
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    lVar7 = _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(auStack_290,pbVar11,0xc);
    if (lVar7 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)&lStack_2a0 + *(long *)(lStack_2a0 + -0x18),
                 *(uint *)((long)auStack_280 + *(long *)(lStack_2a0 + -0x18)) | 4);
    }
    pbVar12 = abStack_1e8;
    if ((*(byte *)((long)auStack_280 + *(long *)(lStack_2a0 + -0x18)) & 5) == 0) {
      cVar3 = _ZN6google8protobuf11MessageLite16ParseFromIstreamEPNSt3__113basic_istreamIcNS2_11char_traitsIcEEEE
                        (param_1,&lStack_2a0);
      if (cVar3 == '\0') {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 == '\0') {
          bVar1 = *pbVar10;
        }
        else {
          puVar8 = (undefined4 *)func_0x0099bce0();
          uVar2 = *puVar8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_2a8,&UNK_001896a0,0x74,4,0);
          uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_2a8);
          uVar9 = func_0x0032eb30(uVar9,&UNK_00184b2e,0x11);
          uVar9 = func_0x0032e5a0(uVar9,pbVar10);
          func_0x0032eb30(uVar9,&UNK_00161443,0x26);
          _ZN7android4base10LogMessageD2Ev(auStack_2a8);
          *puVar8 = uVar2;
          bVar1 = *pbVar10;
        }
        if ((bVar1 & 1) != 0) {
          unaff_R15 = *(byte **)(pbVar10 + 0x10);
        }
        goto code_r0x0099bfa0;
      }
    }
    else {
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_2a8,&UNK_001896a0,0x6f,4,0);
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_2a8);
        uVar9 = func_0x0032eb30(uVar9,&UNK_001896f3,0x10);
        uVar9 = func_0x0032e5a0(uVar9,pbVar10);
        func_0x0032eb30(uVar9,&UNK_001660a0,2);
        _ZN7android4base10LogMessageD2Ev(auStack_2a8);
        *puVar8 = uVar2;
      }
    }
    lStack_2a0 = 0x9ba558;
    abStack_1e8[0] = 0x80;
    abStack_1e8[1] = 0xa5;
    abStack_1e8[2] = 0x9b;
    abStack_1e8[3] = 0;
    abStack_1e8[4] = 0;
    abStack_1e8[5] = 0;
    abStack_1e8[6] = 0;
    abStack_1e8[7] = 0;
    _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(auStack_290);
    _ZNSt3__18ios_base4InitD1Ev(&lStack_2a0,0x9ba598);
    _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
    return param_1;
  }
  func_0x0099bd00();
  if ((*pbVar12 & 1) == 0) {
    unaff_R15 = pbVar12 + 1;
  }
  else {
    unaff_R15 = *(byte **)(pbVar12 + 0x10);
  }
code_r0x0099bfa0:
  pbVar10 = (byte *)unlink(unaff_R15);
  return pbVar10;
}


