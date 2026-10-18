// Function: _Z11send_packetP7apacketP10atransport
// Address: 003e53b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z11send_packetP7apacketP10atransport(uint *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **unaff_R13;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined4 *puStack_240;
  undefined8 uStack_238;
  undefined4 uStack_22c;
  undefined1 auStack_228 [8];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 **ppuStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
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
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar5 = (undefined8 **)&adb_trace_mask;
  puVar6 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 4) != 0) && ((int)adb_trace_severity._8_4_ < 2)) {
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 != '\0') {
      puStack_240 = (undefined4 *)func_0x0099bce0();
      uStack_22c = *puStack_240;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_228,&UNK_0017a1e0,0x267,1,0,0xffffffff);
      uStack_238 = _ZN7android4base10LogMessage6streamEv(auStack_228);
      puStack_1b8 = (undefined8 *)(ulong)(byte)*param_1;
      uStack_1b0 = 0;
      uStack_1a8 = (ulong)*(byte *)((long)param_1 + 1);
      uStack_1a0 = 0;
      uStack_198 = (ulong)*(byte *)((long)param_1 + 2);
      uStack_190 = 0;
      uStack_188 = (ulong)*(byte *)((long)param_1 + 3);
      uStack_178 = 0x10842;
      uStack_180 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      ppuStack_1d0 = (undefined8 **)0x0;
      uStack_210 = 4;
      unaff_R13 = &puStack_1b8;
      uStack_200 = 0x10842;
      ppuStack_208 = unaff_R13;
      func_0x003d0680(&uStack_1d8,&UNK_00181b9b,0x13);
      if ((char)uStack_1c0 != '\x01') goto code_r0x003e56c2;
      uStack_1e8 = uStack_1c8;
      uStack_1f8 = uStack_1d8;
      ppuStack_1f0 = ppuStack_1d0;
      uStack_1d8 = 0;
      ppuStack_1d0 = (undefined8 **)0x0;
      uStack_1c8 = 0;
      goto code_r0x003e5804;
    }
  }
  while( true ) {
    param_1[5] = ~*param_1;
    uVar2 = 0;
    if (*(int *)(param_2 + 0xe8) < 0x1000001) {
      uVar2 = _Z26calculate_apacket_checksumPK7apacket(param_1);
    }
    param_1[4] = uVar2;
    if ((((ulong)*ppuVar5 & 8) != 0) && (*(int *)(puVar6 + 0xc) < 2)) {
      cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar1 != '\0') {
        puStack_240 = (undefined4 *)func_0x0099bce0();
        uStack_22c = *puStack_240;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_1b8,&UNK_0017a1e0,0x273,1,0,0xffffffff);
        uStack_238 = _ZN7android4base10LogMessage6streamEv(&puStack_1b8);
        if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
          lVar4 = param_2 + 0x29;
        }
        else {
          lVar4 = *(long *)(param_2 + 0x38);
        }
        unaff_R13 = &puStack_168;
        _Z11dump_packetPKcS0_PK7apacket(unaff_R13,lVar4,&UNK_00157905,param_1);
        func_0x0032e5a0(uStack_238,unaff_R13);
        if (((ulong)puStack_168 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_158,(ulong)puStack_168 & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&puStack_1b8);
        *puStack_240 = uStack_22c;
      }
    }
    iVar3 = _ZN10atransport5WriteEP7apacket(param_2,param_1);
    if (iVar3 != 0) {
      if ((((ulong)*ppuVar5 & 8) != 0) && (*(int *)(puVar6 + 0xc) < 2)) {
        cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar1 != '\0') {
          param_1 = (uint *)func_0x0099bce0();
          uVar2 = *param_1;
          unaff_R13 = (undefined8 **)(ulong)uVar2;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&puStack_1b8,&UNK_0017a1e0,0x27a,1,0,0xffffffff);
          puVar6 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(&puStack_1b8);
          if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
            lVar4 = param_2 + 0x29;
          }
          else {
            lVar4 = *(long *)(param_2 + 0x38);
          }
          ppuVar5 = &puStack_168;
          _ZN7android4base12StringPrintfEPKcz(ppuVar5,&UNK_0016ec11,lVar4);
          func_0x0032e5a0(puVar6,ppuVar5);
          if (((ulong)puStack_168 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_158,(ulong)puStack_168 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&puStack_1b8);
          *param_1 = uVar2;
        }
      }
      _ZN10atransport4KickEv(param_2);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) break;
    func_0x0099bd00();
code_r0x003e56c2:
    puStack_168 = &uStack_140;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
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
    uStack_160 = 0x100;
    uStack_158 = 0;
    puStack_150 = &UNK_00358010;
    uStack_148 = 0;
    uStack_1f8 = 4;
    uStack_1e8 = 0x10842;
    ppuStack_1f0 = unaff_R13;
    puStack_40 = puStack_168;
    func_0x0036acc0(&puStack_168,&UNK_00181b9b,0x13);
    puStack_220 = puStack_40;
    uStack_218 = uStack_158;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
              (&uStack_1f8,&puStack_220);
    if (puStack_40 != &uStack_140) {
      _ZdaPvSt11align_val_t(puStack_40,uStack_160);
    }
    if ((char)uStack_1c0 == '\x01') {
code_r0x003e5804:
      if ((uStack_1d8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
      }
    }
    func_0x0032e5a0(uStack_238);
    if ((uStack_1f8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_1e8);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_228);
    *puStack_240 = uStack_22c;
  }
  return;
}


