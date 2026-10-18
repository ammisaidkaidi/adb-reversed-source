// Function: _ZN18KnownWifiHostsFile4LoadEv
// Address: 003fbc90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003fbf22: Changing call to branch */

undefined8 * _ZN18KnownWifiHostsFile4LoadEv(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  undefined1 auStack_220 [8];
  long lStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  uint auStack_1f8 [38];
  byte abStack_160 [136];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  _ZN3adb5proto13AdbKnownHostsC1EPN6google8protobuf5ArenaE(param_1,0);
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
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pbVar11 = param_2 + 1;
  pbVar9 = pbVar11;
  if ((*param_2 & 1) != 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
  }
  pbVar10 = (byte *)0x1;
  iVar4 = func_0x0099bf30(1,pbVar9,&uStack_c8);
  if (iVar4 != -1) {
    func_0x0099bdb0(auStack_208,0,0x140);
    lStack_218 = 0x9ba5c8;
    abStack_160[0] = 0xf0;
    abStack_160[1] = 0xa5;
    abStack_160[2] = 0x9b;
    abStack_160[3] = 0;
    abStack_160[4] = 0;
    abStack_160[5] = 0;
    abStack_160[6] = 0;
    abStack_160[7] = 0;
    uStack_210 = 0;
    _ZNSt3__18ios_base4initEPv(abStack_160,auStack_208);
    uStack_d8 = 0;
    uStack_d0 = 0xffffffff;
    lStack_218 = 0x9ba558;
    abStack_160[0] = 0x80;
    abStack_160[1] = 0xa5;
    abStack_160[2] = 0x9b;
    abStack_160[3] = 0;
    abStack_160[4] = 0;
    abStack_160[5] = 0;
    abStack_160[6] = 0;
    abStack_160[7] = 0;
    _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(auStack_208);
    pbVar9 = pbVar11;
    if ((*param_2 & 1) != 0) {
      pbVar9 = *(byte **)(param_2 + 0x10);
    }
    lVar5 = _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(auStack_208,pbVar9,0xc);
    if (lVar5 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)&lStack_218 + *(long *)(lStack_218 + -0x18),
                 *(uint *)((long)auStack_1f8 + *(long *)(lStack_218 + -0x18)) | 4);
    }
    pbVar10 = abStack_160;
    if ((*(byte *)((long)auStack_1f8 + *(long *)(lStack_218 + -0x18)) & 5) == 0) {
      cVar3 = _ZN6google8protobuf11MessageLite16ParseFromIstreamEPNSt3__113basic_istreamIcNS2_11char_traitsIcEEEE
                        (param_1,&lStack_218);
      if (cVar3 == '\0') {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 == '\0') {
          bVar1 = *param_2;
        }
        else {
          puVar6 = (undefined4 *)func_0x0099bce0();
          uVar2 = *puVar6;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_220,&UNK_001896a0,0x74,4,0);
          uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_220);
          uVar7 = func_0x0032eb30(uVar7,&UNK_00184b2e,0x11);
          uVar7 = func_0x0032e5a0(uVar7,param_2);
          func_0x0032eb30(uVar7,&UNK_00161443,0x26);
          _ZN7android4base10LogMessageD2Ev(auStack_220);
          *puVar6 = uVar2;
          bVar1 = *param_2;
        }
        if ((bVar1 & 1) != 0) {
          pbVar11 = *(byte **)(param_2 + 0x10);
        }
        goto code_r0x0099bfa0;
      }
    }
    else {
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar3 != '\0') {
        puVar6 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_220,&UNK_001896a0,0x6f,4,0);
        uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_220);
        uVar7 = func_0x0032eb30(uVar7,&UNK_001896f3,0x10);
        uVar7 = func_0x0032e5a0(uVar7,param_2);
        func_0x0032eb30(uVar7,&UNK_001660a0,2);
        _ZN7android4base10LogMessageD2Ev(auStack_220);
        *puVar6 = uVar2;
      }
    }
    lStack_218 = 0x9ba558;
    abStack_160[0] = 0x80;
    abStack_160[1] = 0xa5;
    abStack_160[2] = 0x9b;
    abStack_160[3] = 0;
    abStack_160[4] = 0;
    abStack_160[5] = 0;
    abStack_160[6] = 0;
    abStack_160[7] = 0;
    _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(auStack_208);
    _ZNSt3__18ios_base4InitD1Ev(&lStack_218,0x9ba598);
    _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  if ((*pbVar10 & 1) == 0) {
    pbVar11 = pbVar10 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar10 + 0x10);
  }
code_r0x0099bfa0:
  puVar8 = (undefined8 *)unlink(pbVar11);
  return puVar8;
}


