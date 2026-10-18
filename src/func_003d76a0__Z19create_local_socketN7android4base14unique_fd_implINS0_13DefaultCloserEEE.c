// Function: _Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
// Address: 003d76a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x003d5b4d) */

uint * _Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE(uint *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long lVar12;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  uint *puVar13;
  uint *unaff_R12;
  ulong unaff_R13;
  uint *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_130 [8];
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  uint *puStack_110;
  uint *puStack_108;
  undefined *puStack_100;
  uint *puStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined1 *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b4;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  uint *puStack_88;
  uint *puStack_80;
  ulong uStack_78;
  uint *puStack_70;
  uint *puStack_68;
  undefined *puStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *param_1;
  puVar9 = (uint *)(ulong)uVar4;
  *param_1 = 0xffffffff;
  puStack_60 = &UNK_003d76d0;
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
  puVar7[0x12] = uVar4;
  *(undefined **)(puVar7 + 6) = &UNK_003d7840;
  *(undefined **)(puVar7 + 8) = &UNK_003d79f0;
  *(undefined **)(puVar7 + 0xc) = &UNK_003d7a10;
  puStack_60 = &UNK_003d7741;
  _Z20install_local_socketP7asocket(puVar7);
  puVar13 = (uint *)&UNK_003d8290;
  puVar5 = (uint *)(ulong)uVar4;
  puStack_60 = &UNK_003d7752;
  uVar8 = _Z14fdevent_createiPFvijPvES_(puVar5,&UNK_003d8290,puVar7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    puVar5 = (uint *)0x1;
    puVar13 = (uint *)0x0;
    puStack_60 = &UNK_003d77a3;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    unaff_R12 = puVar7;
    if (cVar2 != '\0') {
      puStack_60 = &UNK_003d77af;
      puVar9 = (uint *)func_0x0099bce0();
      uVar4 = *puVar9;
      unaff_R13 = (ulong)uVar4;
      puStack_60 = &UNK_003d77db;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0015b0ed,0x1d1,1,0,0xffffffff);
      puStack_60 = &UNK_003d77e3;
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      unaff_R15 = (uint *)&bStack_58;
      puStack_60 = &UNK_003d7802;
      _ZN7android4base12StringPrintfEPKcz(unaff_R15,&UNK_00159613,*puVar7,puVar7[0x12]);
      puStack_60 = &UNK_003d780d;
      puVar13 = unaff_R15;
      func_0x0032e5a0(uVar8);
      if ((bStack_58 & 1) != 0) {
        puVar13 = (uint *)(CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        puStack_60 = &UNK_003d7824;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      puVar5 = auStack_40;
      puStack_60 = &UNK_003d782d;
      _ZN7android4base10LogMessageD2Ev();
      *puVar9 = uVar4;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar7;
  }
  puStack_60 = &UNK_003d783d;
  func_0x0099bd00();
  puStack_60 = &stack0xfffffffffffffff8;
  puStack_68 = unaff_R15;
  puStack_70 = puVar7;
  uStack_78 = unaff_R13;
  puStack_80 = unaff_R12;
  puStack_88 = puVar9;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    puStack_c8 = &UNK_003d7917;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    unaff_R12 = puVar5;
    if (cVar2 != '\0') {
      puStack_c8 = &UNK_003d7930;
      puStack_c0 = (undefined4 *)func_0x0099bce0();
      uStack_b4 = *puStack_c0;
      puStack_c8 = &UNK_003d795f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_0015b0ed,0x102,1,0,0xffffffff);
      puStack_c8 = &UNK_003d7967;
      puVar7 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_98);
      unaff_R15 = (uint *)&bStack_b0;
      puStack_c8 = &UNK_003d7986;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R15,&UNK_001722ed,*puVar5,*(undefined8 *)(puVar13 + 4));
      puStack_c8 = &UNK_003d7991;
      func_0x0032e5a0(puVar7,unaff_R15);
      if ((bStack_b0 & 1) != 0) {
        puStack_c8 = &UNK_003d79a8;
        _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
      }
      puStack_c8 = &UNK_003d79b1;
      _ZN7android4base10LogMessageD2Ev(auStack_98);
      *puStack_c0 = uStack_b4;
      puVar9 = puVar13;
    }
  }
  if (*(long *)(puVar13 + 4) != 0) {
    *(long *)(puVar5 + 0x14) = *(long *)(puVar5 + 0x14) + *(long *)(puVar13 + 4);
    puVar10 = *(undefined8 **)(puVar5 + 0x1c);
    if (puVar10 < *(undefined8 **)(puVar5 + 0x1e)) {
      *puVar10 = *(undefined8 *)puVar13;
      uVar8 = *(undefined8 *)(puVar13 + 2);
      puVar13[0] = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar10[1] = uVar8;
      uVar8 = *(undefined8 *)(puVar13 + 4);
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar10[2] = uVar8;
      uVar8 = *(undefined8 *)(puVar13 + 6);
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar10[3] = uVar8;
      puVar10 = puVar10 + 4;
    }
    else {
      puStack_c8 = &UNK_003d79d4;
      puVar10 = (undefined8 *)
                _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                          (puVar5 + 0x1a);
      puVar9 = puVar5;
    }
    *(undefined8 **)(puVar5 + 0x1c) = puVar10;
  }
  puStack_c8 = &UNK_003d78d7;
  uVar4 = func_0x003da5a0();
  lVar12 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 != lStack_90) {
    puStack_c8 = &UNK_003d79e1;
    puStack_e8 = (uint *)func_0x0099bd00();
    uVar11 = (undefined1)lVar12;
    puStack_c8 = (undefined1 *)&puStack_60;
    lVar12 = *(long *)(puVar5 + 0x10);
    puStack_e0 = puVar9;
    puStack_d8 = puVar7;
    puStack_d0 = unaff_R15;
    ppuVar1 = &puStack_60;
    if (cRam0000000000a00688 == '\0') {
      puStack_f0 = (uint *)&UNK_003d65e2;
      iVar3 = __cxa_guard_acquire(0xa00688);
      ppuVar1 = (undefined **)puStack_c8;
      if (iVar3 != 0) {
        puStack_f0 = (uint *)&UNK_003d65f3;
        plVar6 = (long *)_Znwm(0xc0);
        puStack_f0 = (uint *)&UNK_003d65fe;
        _ZN21fdevent_context_epollC2Ev(plVar6);
        puStack_f0 = (uint *)&UNK_003d6611;
        plRam0000000000a00680 = plVar6;
        __cxa_guard_release(0xa00688);
        ppuVar1 = (undefined **)puStack_c8;
      }
    }
    puStack_c8 = (undefined1 *)ppuVar1;
    puVar13 = puStack_d0;
    puVar9 = puStack_d8;
    puVar5 = puStack_e0;
    puStack_e8 = puStack_e0;
    puStack_f0 = *(uint **)(in_FS_OFFSET + 0x28);
    puStack_100 = &UNK_003d5b2d;
    plVar6 = plRam0000000000a00680;
    puStack_e0 = unaff_R12;
    (**(code **)(*plRam0000000000a00680 + 0x20))
              (plRam0000000000a00680,lVar12,*(ushort *)(lVar12 + 0xc) | 1);
    if (*(uint **)(in_FS_OFFSET + 0x28) != puStack_f0) {
      puStack_100 = &UNK_003d5bca;
      func_0x0099bd00();
      puStack_108 = puVar13;
      puStack_110 = puVar9;
      puStack_120 = puVar5;
      puStack_128 = *(uint **)(in_FS_OFFSET + 0x28);
      puStack_118 = unaff_R12;
      puStack_100 = (undefined *)&puStack_c8;
      if ((extraout_RDX & 8) != 0) {
        uVar11 = 6;
        puStack_100 = (undefined *)&puStack_c8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_130,&UNK_00167a35,0x72,6,0,0xffffffff);
        uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_130);
        uVar8 = func_0x0032eb30(uVar8,&UNK_0017ba7b,0x25);
        func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        _ZN7android4base10LogMessageD2Ev(auStack_130);
      }
      (**(code **)(*plVar6 + 0x20))();
      if (*(uint **)(in_FS_OFFSET + 0x28) != puStack_128) {
        func_0x0099bd00();
        _ZNK15fdevent_context17CheckLooperThreadEv();
        *(undefined8 *)(lVar12 + 0x10) = extraout_RDX_00;
        *(undefined1 *)(lVar12 + 0x18) = uVar11;
        puVar5 = (uint *)_ZNSt3__16chrono12steady_clock3nowEv();
        *(uint **)(lVar12 + 0x20) = puVar5;
        return puVar5;
      }
      return *(uint **)(in_FS_OFFSET + 0x28);
    }
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  return (uint *)(ulong)*(uint *)(&UNK_001fdff4 + (ulong)uVar4 * 4);
}


