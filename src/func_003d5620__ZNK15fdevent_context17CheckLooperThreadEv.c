// Function: _ZNK15fdevent_context17CheckLooperThreadEv
// Address: 003d5620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK15fdevent_context17CheckLooperThreadEv
                 (long *param_1,long *param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  long extraout_RDX_02;
  long *unaff_RBX;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined *apuStack_98 [2];
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined *apuStack_50 [2];
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  plStack_38 = *(long **)(in_FS_OFFSET + 0x28);
  plVar5 = param_1;
  if ((char)param_1[2] == '\x01') {
    apuStack_50[0] = &UNK_003d564c;
    lVar1 = _ZN7android4base11GetThreadIdEv();
    lVar2 = param_1[1];
    if (lVar2 != lVar1) {
      do {
        apuStack_50[0] = &UNK_003d56b2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_00167a35,0xb7,6,0,0xffffffff);
        apuStack_50[0] = &UNK_003d56ba;
        uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        apuStack_50[0] = &UNK_003d56ce;
        uVar3 = func_0x0032eb30(uVar3,&UNK_00165d45,0xe);
        apuStack_50[0] = &UNK_003d56e2;
        uVar3 = func_0x0032eb30(uVar3,&UNK_0018ad38,0x12);
        apuStack_50[0] = &UNK_003d56f2;
        uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
        apuStack_50[0] = &UNK_003d5706;
        uVar3 = func_0x0032eb30(uVar3,&UNK_0015aef8,2);
        apuStack_50[0] = &UNK_003d5716;
        uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
        apuStack_50[0] = &UNK_003d572a;
        uVar3 = func_0x0032eb30(uVar3,&UNK_00183451,0x1c);
        apuStack_50[0] = &UNK_003d573e;
        uVar3 = func_0x0032eb30(uVar3,&UNK_0015b0d7,0x15);
        apuStack_50[0] = &UNK_003d5749;
        uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,lVar2);
        apuStack_50[0] = &UNK_003d575d;
        uVar3 = func_0x0032eb30(uVar3,&UNK_00165f20,0x1f);
        apuStack_50[0] = &UNK_003d5768;
        uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,lVar1);
        apuStack_50[0] = &UNK_003d5778;
        func_0x0032eb30(uVar3,&UNK_0017b788,2);
        apuStack_50[0] = &UNK_003d5780;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
      } while( true );
    }
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_38) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_50[0] = &UNK_003d578a;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_98[0] = &UNK_003d57bf;
  plVar8 = param_2;
  plVar6 = param_2;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  if (extraout_RDX == 0) {
    *(undefined4 *)plVar5 = 0xffffffff;
code_r0x003d5845:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      return plVar5;
    }
    apuStack_98[0] = &UNK_003d5af8;
    func_0x0099bd00();
    plStack_c0 = *(long **)(in_FS_OFFSET + 0x28);
    plVar7 = unaff_RBX;
    uVar9 = extraout_RDX;
    plStack_b8 = unaff_RBX;
    uStack_b0 = extraout_RDX;
    plStack_a8 = plVar5;
    plStack_a0 = param_2;
    apuStack_98[0] = (undefined *)apuStack_50;
    if ((extraout_RDX_00 & 8) != 0) {
      plVar7 = &lStack_c8;
      uVar9 = extraout_RDX_00 & 0xffffffff;
      param_4 = 6;
      puStack_d0 = &UNK_003d5b7f;
      apuStack_98[0] = (undefined *)apuStack_50;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar7,&UNK_00167a35,0x6d,6,0,0xffffffff);
      puStack_d0 = &UNK_003d5b87;
      uVar3 = _ZN7android4base10LogMessage6streamEv(plVar7);
      puStack_d0 = &UNK_003d5b9b;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0017ba7b,0x25);
      puStack_d0 = &UNK_003d5baf;
      func_0x0032eb30(uVar3,&UNK_0015ae05,1);
      puStack_d0 = &UNK_003d5bb7;
      _ZN7android4base10LogMessageD2Ev(plVar7);
      plVar5 = plVar6;
      param_2 = plVar8;
    }
    puStack_d0 = &UNK_003d5b2d;
    (**(code **)(*plVar6 + 0x20))();
    if (*(long **)(in_FS_OFFSET + 0x28) != plStack_c0) {
      puStack_d0 = &UNK_003d5bca;
      func_0x0099bd00();
      plStack_f8 = *(long **)(in_FS_OFFSET + 0x28);
      plStack_f0 = plVar7;
      uStack_e8 = uVar9;
      plStack_e0 = plVar5;
      plStack_d8 = param_2;
      puStack_d0 = (undefined *)apuStack_98;
      if ((extraout_RDX_01 & 8) != 0) {
        param_4 = 6;
        puStack_d0 = (undefined *)apuStack_98;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_100,&UNK_00167a35,0x72,6,0,0xffffffff);
        uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_100);
        uVar3 = func_0x0032eb30(uVar3,&UNK_0017ba7b,0x25);
        func_0x0032eb30(uVar3,&UNK_0015ae05,1);
        _ZN7android4base10LogMessageD2Ev(auStack_100);
      }
      (**(code **)(*plVar6 + 0x20))();
      if (*(long **)(in_FS_OFFSET + 0x28) != plStack_f8) {
        func_0x0099bd00();
        _ZNK15fdevent_context17CheckLooperThreadEv();
        plVar8[2] = extraout_RDX_02;
        *(undefined1 *)(plVar8 + 3) = param_4;
        plVar5 = (long *)_ZNSt3__16chrono12steady_clock3nowEv();
        plVar8[4] = (long)plVar5;
        return plVar5;
      }
      return *(long **)(in_FS_OFFSET + 0x28);
    }
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_98[0] = &UNK_003d57d0;
  (**(code **)(*param_2 + 0x18))(param_2,extraout_RDX);
  auStack_88[0] = *(undefined4 *)(extraout_RDX + 8);
  *(undefined4 *)(extraout_RDX + 8) = 0xffffffff;
  *(undefined4 *)plVar5 = auStack_88[0];
  apuStack_98[0] = &UNK_003d57f1;
  lVar2 = _ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
                    (param_2 + 4,auStack_88);
  if (lVar2 != 1) {
    do {
      apuStack_98[0] = &UNK_003d5a22;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_88,&UNK_00167a35,0x65,6,0,0xffffffff);
      apuStack_98[0] = &UNK_003d5a2a;
      uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_88);
      apuStack_98[0] = &UNK_003d5a3e;
      uVar3 = func_0x0032eb30(uVar3,&UNK_00165d45,0xe);
      apuStack_98[0] = &UNK_003d5a52;
      uVar3 = func_0x0032eb30(uVar3,&UNK_00177111,3);
      apuStack_98[0] = &UNK_003d5a62;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
      apuStack_98[0] = &UNK_003d5a76;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0015aef8,2);
      apuStack_98[0] = &UNK_003d5a86;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
      apuStack_98[0] = &UNK_003d5a9a;
      uVar3 = func_0x0032eb30(uVar3,&UNK_001722e6,6);
      apuStack_98[0] = &UNK_003d5aae;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0018ad31,6);
      apuStack_98[0] = &UNK_003d5abb;
      uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,1);
      apuStack_98[0] = &UNK_003d5acb;
      uVar3 = func_0x0032eb30(uVar3,&UNK_00177115,9);
      apuStack_98[0] = &UNK_003d5ad6;
      uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,lVar2);
      apuStack_98[0] = &UNK_003d5ae6;
      func_0x0032eb30(uVar3,&UNK_0017b788,2);
      apuStack_98[0] = &UNK_003d5aee;
      _ZN7android4base10LogMessageD2Ev(auStack_88);
    } while( true );
  }
  plVar8 = (long *)param_2[0x14];
  if (plVar8 != (long *)0x0) {
    unaff_RBX = plVar8;
    do {
      while (extraout_RDX < (ulong)unaff_RBX[4]) {
        unaff_RBX = (long *)*unaff_RBX;
        if (unaff_RBX == (long *)0x0) goto code_r0x003d5890;
      }
      if (extraout_RDX <= (ulong)unaff_RBX[4]) {
        if (unaff_RBX != param_2 + 0x14) {
          plVar6 = unaff_RBX;
          plVar7 = (long *)unaff_RBX[1];
          if ((long *)unaff_RBX[1] == (long *)0x0) {
            do {
              plVar4 = (long *)plVar6[2];
              bVar10 = plVar6 != (long *)*plVar4;
              plVar6 = plVar4;
            } while (bVar10);
          }
          else {
            do {
              plVar4 = plVar7;
              plVar7 = (long *)*plVar4;
            } while ((long *)*plVar4 != (long *)0x0);
            plVar6 = (long *)0x0;
          }
          param_4 = SUB81(plVar6,0);
          if ((long *)param_2[0x13] == unaff_RBX) {
            param_2[0x13] = (long)plVar4;
          }
          param_2[0x15] = param_2[0x15] + -1;
          apuStack_98[0] = &UNK_003d59cb;
          func_0x003d6d50(plVar8,unaff_RBX);
          plVar8 = (long *)0x28;
          apuStack_98[0] = &UNK_003d59d8;
          plVar6 = unaff_RBX;
          _ZdaPvSt11align_val_t();
          goto code_r0x003d5845;
        }
        break;
      }
      unaff_RBX = (long *)unaff_RBX[1];
    } while (unaff_RBX != (long *)0x0);
  }
code_r0x003d5890:
  do {
    apuStack_98[0] = &UNK_003d58b6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_88,&UNK_00167a35,0x67,6,0,0xffffffff);
    apuStack_98[0] = &UNK_003d58be;
    uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_88);
    apuStack_98[0] = &UNK_003d58d2;
    uVar3 = func_0x0032eb30(uVar3,&UNK_00165d45,0xe);
    apuStack_98[0] = &UNK_003d58e6;
    uVar3 = func_0x0032eb30(uVar3,&UNK_00177111,3);
    apuStack_98[0] = &UNK_003d58fd;
    uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_003d5911;
    uVar3 = func_0x0032eb30(uVar3,&UNK_0015aef8,2);
    apuStack_98[0] = &UNK_003d5921;
    uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_003d5935;
    uVar3 = func_0x0032eb30(uVar3,&UNK_001722e6,6);
    apuStack_98[0] = &UNK_003d5949;
    uVar3 = func_0x0032eb30(uVar3,&UNK_0018ad31,6);
    apuStack_98[0] = &UNK_003d5956;
    uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,1);
    apuStack_98[0] = &UNK_003d596a;
    uVar3 = func_0x0032eb30(uVar3,&UNK_00177115,9);
    apuStack_98[0] = &UNK_003d5974;
    uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,0);
    apuStack_98[0] = &UNK_003d5988;
    func_0x0032eb30(uVar3,&UNK_0017b788,2);
    apuStack_98[0] = &UNK_003d5990;
    _ZN7android4base10LogMessageD2Ev(auStack_88);
  } while( true );
}


