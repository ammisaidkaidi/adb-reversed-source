// Function: _Z16local_socket_ackP7asocketNSt3__18optionalIiEE
// Address: 003d7400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x003d5b4d) */

uint * _Z16local_socket_ackP7asocketNSt3__18optionalIiEE(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  uint *puVar11;
  uint *unaff_R12;
  uint *puVar12;
  undefined8 *unaff_R13;
  uint *puVar13;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 auStack_198 [8];
  uint *puStack_190;
  uint *puStack_188;
  uint *puStack_180;
  uint *puStack_178;
  uint *puStack_170;
  undefined *puStack_168;
  uint *puStack_158;
  uint *puStack_150;
  uint *puStack_148;
  uint *puStack_140;
  uint *puStack_138;
  undefined1 *puStack_130;
  undefined4 *puStack_128;
  undefined4 uStack_11c;
  byte bStack_118;
  undefined7 uStack_117;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  byte *pbStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined *puStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b0;
  uint auStack_a8 [2];
  long lStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  byte *pbStack_88;
  uint *puStack_80;
  uint *puStack_78;
  undefined *puStack_70;
  uint *puStack_68;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_48;
  uint auStack_40 [2];
  uint *puStack_38;
  
  puStack_38 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar13 = (uint *)((ulong)param_2 >> 0x20);
  if (((byte)((ulong)param_2 >> 0x20) & 1) == (byte)param_1[0x22]) {
    bVar14 = ((byte)adb_trace_mask & 2) != 0;
    if ((byte)param_1[0x22] == 0) {
      if ((int)adb_trace_severity._4_4_ < 2 && bVar14) {
        puStack_70 = &UNK_003d7609;
        cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar1 != '\0') {
          puStack_70 = &UNK_003d7616;
          puVar13 = (uint *)func_0x0099bce0();
          uVar3 = *puVar13;
          unaff_R13 = (undefined8 *)(ulong)uVar3;
          puStack_70 = &UNK_003d7642;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_0015b0ed,0x1c1,1,0,0xffffffff);
          puStack_70 = &UNK_003d764a;
          unaff_R15 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_40);
          unaff_R12 = (uint *)&uStack_58;
          puStack_70 = &UNK_003d7664;
          _ZN7android4base12StringPrintfEPKcz(unaff_R12,&UNK_001695c3,*param_1);
          puStack_70 = &UNK_003d766f;
          func_0x0032e5a0(unaff_R15,unaff_R12);
          if (((byte)uStack_58 & 1) != 0) {
            puStack_70 = &UNK_003d7686;
            _ZdaPvSt11align_val_t
                      (uStack_48,CONCAT71(uStack_58._1_7_,(byte)uStack_58) & 0xfffffffffffffffe);
          }
          puStack_70 = &UNK_003d768f;
          _ZN7android4base10LogMessageD2Ev(auStack_40);
          *puVar13 = uVar3;
        }
      }
    }
    else {
      puVar11 = param_1;
      if ((int)adb_trace_severity._4_4_ < 2 && bVar14) {
        puVar11 = (uint *)0x1;
        puStack_70 = &UNK_003d7559;
        cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        unaff_R15 = param_2;
        if (cVar1 != '\0') {
          puStack_70 = &UNK_003d7569;
          puStack_68 = param_2;
          puVar13 = (uint *)func_0x0099bce0();
          uStack_5c = *puVar13;
          puStack_70 = &UNK_003d7597;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_0015b0ed,0x1b7,1,0,0xffffffff);
          puStack_70 = &UNK_003d759f;
          unaff_R12 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_40);
          unaff_R13 = &uStack_58;
          puStack_70 = &UNK_003d75c4;
          _ZN7android4base12StringPrintfEPKcz
                    (unaff_R13,&UNK_00181ac1,*param_1,*(undefined8 *)(param_1 + 0x20),puStack_68);
          puStack_70 = &UNK_003d75cf;
          func_0x0032e5a0(unaff_R12,unaff_R13);
          if (((byte)uStack_58 & 1) != 0) {
            puStack_70 = &UNK_003d75e6;
            _ZdaPvSt11align_val_t
                      (uStack_48,CONCAT71(uStack_58._1_7_,(byte)uStack_58) & 0xfffffffffffffffe);
          }
          puVar11 = auStack_40;
          puStack_70 = &UNK_003d75ef;
          _ZN7android4base10LogMessageD2Ev();
          *puVar13 = uStack_5c;
        }
      }
      lVar6 = (long)(int)param_2 + *(long *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar6;
      if (lVar6 < 1) goto code_r0x003d7528;
    }
    puStack_70 = &UNK_003d7528;
    puVar11 = param_1;
    (**(code **)(param_1 + 8))();
  }
  else {
    puVar11 = (uint *)0x4;
    puStack_70 = &UNK_003d7449;
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar1 != '\0') {
      puVar13 = (uint *)(ulong)((uint)((ulong)param_2 >> 0x20) & 1);
      puStack_70 = &UNK_003d745a;
      unaff_R15 = (uint *)func_0x0099bce0();
      uVar3 = *unaff_R15;
      unaff_R13 = (undefined8 *)(ulong)uVar3;
      unaff_R12 = (uint *)&uStack_58;
      puStack_70 = &UNK_003d7486;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_0015b0ed,0x1b1,4,0,0xffffffff);
      puStack_70 = &UNK_003d748e;
      uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_70 = &UNK_003d74a2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fbd0,0x1f);
      puStack_70 = &UNK_003d74b1;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar5,(char)param_1[0x22]);
      puStack_70 = &UNK_003d74c5;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165f40,0xc);
      puStack_70 = &UNK_003d74d0;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar5,puVar13);
      puStack_70 = &UNK_003d74d8;
      puVar11 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R15 = uVar3;
    }
  }
code_r0x003d7528:
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_003d769c;
  func_0x0099bd00();
  puStack_70 = &stack0xfffffffffffffff8;
  puStack_78 = unaff_R15;
  puStack_80 = puVar13;
  pbStack_88 = (byte *)unaff_R13;
  puStack_90 = unaff_R12;
  puStack_98 = param_1;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *puVar11;
  puVar8 = (uint *)(ulong)uVar3;
  *puVar11 = 0xffffffff;
  puStack_c8 = &UNK_003d76d0;
  puVar7 = (uint *)_Znwm(0xa8);
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  *(undefined1 *)(puVar7 + 0x20) = 0;
  puVar7[0x12] = uVar3;
  *(undefined **)(puVar7 + 6) = &UNK_003d7840;
  *(undefined **)(puVar7 + 8) = &UNK_003d79f0;
  *(undefined **)(puVar7 + 0xc) = &UNK_003d7a10;
  puStack_c8 = &UNK_003d7741;
  _Z20install_local_socketP7asocket(puVar7);
  puVar11 = (uint *)&UNK_003d8290;
  puVar13 = (uint *)(ulong)uVar3;
  puStack_c8 = &UNK_003d7752;
  uVar5 = _Z14fdevent_createiPFvijPvES_(puVar13,&UNK_003d8290,puVar7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  puStack_e8 = unaff_R12;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    puVar13 = (uint *)0x1;
    puVar11 = (uint *)0x0;
    puStack_c8 = &UNK_003d77a3;
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    puStack_e8 = puVar7;
    if (cVar1 != '\0') {
      puStack_c8 = &UNK_003d77af;
      puVar8 = (uint *)func_0x0099bce0();
      uVar3 = *puVar8;
      unaff_R13 = (undefined8 *)(ulong)uVar3;
      puStack_c8 = &UNK_003d77db;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a8,&UNK_0015b0ed,0x1d1,1,0,0xffffffff);
      puStack_c8 = &UNK_003d77e3;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
      unaff_R15 = (uint *)&bStack_c0;
      puStack_c8 = &UNK_003d7802;
      _ZN7android4base12StringPrintfEPKcz(unaff_R15,&UNK_00159613,*puVar7,puVar7[0x12]);
      puStack_c8 = &UNK_003d780d;
      puVar11 = unaff_R15;
      func_0x0032e5a0(uVar5);
      if ((bStack_c0 & 1) != 0) {
        puVar11 = (uint *)(CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
        puStack_c8 = &UNK_003d7824;
        _ZdaPvSt11align_val_t(uStack_b0);
      }
      puVar13 = auStack_a8;
      puStack_c8 = &UNK_003d782d;
      _ZN7android4base10LogMessageD2Ev();
      *puVar8 = uVar3;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return puVar7;
  }
  puStack_c8 = &UNK_003d783d;
  func_0x0099bd00();
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = puStack_e8;
  puStack_f0 = puVar8;
  pbStack_e0 = (byte *)unaff_R13;
  puStack_d8 = puVar7;
  puStack_d0 = unaff_R15;
  puStack_c8 = (undefined *)&puStack_70;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (puStack_c8 = (undefined *)&puStack_70, (int)adb_trace_severity._4_4_ < 2)) {
    puStack_130 = &UNK_003d7917;
    puStack_c8 = (undefined *)&puStack_70;
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    puVar12 = puVar13;
    if (cVar1 != '\0') {
      puStack_130 = &UNK_003d7930;
      puStack_128 = (undefined4 *)func_0x0099bce0();
      uStack_11c = *puStack_128;
      puStack_130 = &UNK_003d795f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_100,&UNK_0015b0ed,0x102,1,0,0xffffffff);
      puStack_130 = &UNK_003d7967;
      puVar7 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_100);
      unaff_R15 = (uint *)&bStack_118;
      puStack_130 = &UNK_003d7986;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R15,&UNK_001722ed,*puVar13,*(undefined8 *)(puVar11 + 4));
      puStack_130 = &UNK_003d7991;
      func_0x0032e5a0(puVar7,unaff_R15);
      if ((bStack_118 & 1) != 0) {
        puStack_130 = &UNK_003d79a8;
        _ZdaPvSt11align_val_t(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
      }
      puStack_130 = &UNK_003d79b1;
      _ZN7android4base10LogMessageD2Ev(auStack_100);
      *puStack_128 = uStack_11c;
      puVar8 = puVar11;
    }
  }
  if (*(long *)(puVar11 + 4) != 0) {
    *(long *)(puVar13 + 0x14) = *(long *)(puVar13 + 0x14) + *(long *)(puVar11 + 4);
    puVar9 = *(undefined8 **)(puVar13 + 0x1c);
    if (puVar9 < *(undefined8 **)(puVar13 + 0x1e)) {
      *puVar9 = *(undefined8 *)puVar11;
      uVar5 = *(undefined8 *)(puVar11 + 2);
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar9[1] = uVar5;
      uVar5 = *(undefined8 *)(puVar11 + 4);
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar9[2] = uVar5;
      uVar5 = *(undefined8 *)(puVar11 + 6);
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar9[3] = uVar5;
      puVar9 = puVar9 + 4;
    }
    else {
      puStack_130 = &UNK_003d79d4;
      puVar9 = (undefined8 *)
               _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                         (puVar13 + 0x1a);
      puVar8 = puVar13;
    }
    *(undefined8 **)(puVar13 + 0x1c) = puVar9;
  }
  puStack_130 = &UNK_003d78d7;
  uVar3 = func_0x003da5a0();
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == lStack_f8) {
    return (uint *)(ulong)*(uint *)(&UNK_001fdff4 + (ulong)uVar3 * 4);
  }
  puStack_130 = &UNK_003d79e1;
  puStack_150 = (uint *)func_0x0099bd00();
  uVar10 = (undefined1)lVar6;
  lVar6 = *(long *)(puVar13 + 0x10);
  puStack_148 = puVar8;
  puStack_140 = puVar7;
  puStack_138 = unaff_R15;
  puStack_130 = (undefined1 *)&puStack_c8;
  if (cRam0000000000a00688 == '\0') {
    puStack_158 = (uint *)&UNK_003d65e2;
    puStack_130 = (undefined1 *)&puStack_c8;
    iVar2 = __cxa_guard_acquire(0xa00688);
    if (iVar2 != 0) {
      puStack_158 = (uint *)&UNK_003d65f3;
      plVar4 = (long *)_Znwm(0xc0);
      puStack_158 = (uint *)&UNK_003d65fe;
      _ZN21fdevent_context_epollC2Ev(plVar4);
      puStack_158 = (uint *)&UNK_003d6611;
      plRam0000000000a00680 = plVar4;
      __cxa_guard_release(0xa00688);
    }
  }
  puVar8 = puStack_138;
  puVar11 = puStack_140;
  puVar13 = puStack_148;
  puStack_150 = puStack_148;
  puStack_158 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_168 = &UNK_003d5b2d;
  plVar4 = plRam0000000000a00680;
  puStack_148 = puVar12;
  (**(code **)(*plRam0000000000a00680 + 0x20))
            (plRam0000000000a00680,lVar6,*(ushort *)(lVar6 + 0xc) | 1);
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_158) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_168 = &UNK_003d5bca;
  func_0x0099bd00();
  puStack_170 = puVar8;
  puStack_178 = puVar11;
  puStack_188 = puVar13;
  puStack_190 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_180 = puVar12;
  puStack_168 = (undefined *)&puStack_130;
  if ((extraout_RDX & 8) != 0) {
    uVar10 = 6;
    puStack_168 = (undefined *)&puStack_130;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_198,&UNK_00167a35,0x72,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_198);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017ba7b,0x25);
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_198);
  }
  (**(code **)(*plVar4 + 0x20))();
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_190) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNK15fdevent_context17CheckLooperThreadEv();
  *(undefined8 *)(lVar6 + 0x10) = extraout_RDX_00;
  *(undefined1 *)(lVar6 + 0x18) = uVar10;
  puVar13 = (uint *)_ZNSt3__16chrono12steady_clock3nowEv();
  *(uint **)(lVar6 + 0x20) = puVar13;
  return puVar13;
}


