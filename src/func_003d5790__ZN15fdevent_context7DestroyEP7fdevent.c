// Function: _ZN15fdevent_context7DestroyEP7fdevent
// Address: 003d5790
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN15fdevent_context7DestroyEP7fdevent
                 (long *param_1,long *param_2,ulong param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  long extraout_RDX_01;
  long *unaff_RBX;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  ulong uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined *apuStack_50 [2];
  undefined4 auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_50[0] = &UNK_003d57bf;
  plVar6 = param_2;
  plVar4 = param_2;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  if (param_3 == 0) {
    *(undefined4 *)param_1 = 0xffffffff;
code_r0x003d5845:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    apuStack_50[0] = &UNK_003d5af8;
    func_0x0099bd00();
    plStack_78 = *(long **)(in_FS_OFFSET + 0x28);
    plVar5 = unaff_RBX;
    plStack_70 = unaff_RBX;
    uStack_68 = param_3;
    plStack_60 = param_1;
    plStack_58 = param_2;
    apuStack_50[0] = &stack0xfffffffffffffff8;
    if ((extraout_RDX & 8) != 0) {
      plVar5 = &lStack_80;
      param_3 = extraout_RDX & 0xffffffff;
      param_4 = 6;
      puStack_88 = &UNK_003d5b7f;
      apuStack_50[0] = &stack0xfffffffffffffff8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar5,&UNK_00167a35,0x6d,6,0,0xffffffff);
      puStack_88 = &UNK_003d5b87;
      uVar2 = _ZN7android4base10LogMessage6streamEv(plVar5);
      puStack_88 = &UNK_003d5b9b;
      uVar2 = func_0x0032eb30(uVar2,&UNK_0017ba7b,0x25);
      puStack_88 = &UNK_003d5baf;
      func_0x0032eb30(uVar2,&UNK_0015ae05,1);
      puStack_88 = &UNK_003d5bb7;
      _ZN7android4base10LogMessageD2Ev(plVar5);
      param_1 = plVar4;
      param_2 = plVar6;
    }
    puStack_88 = &UNK_003d5b2d;
    (**(code **)(*plVar4 + 0x20))();
    if (*(long **)(in_FS_OFFSET + 0x28) != plStack_78) {
      puStack_88 = &UNK_003d5bca;
      func_0x0099bd00();
      plStack_b0 = *(long **)(in_FS_OFFSET + 0x28);
      plStack_a8 = plVar5;
      uStack_a0 = param_3;
      plStack_98 = param_1;
      plStack_90 = param_2;
      puStack_88 = (undefined *)apuStack_50;
      if ((extraout_RDX_00 & 8) != 0) {
        param_4 = 6;
        puStack_88 = (undefined *)apuStack_50;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_b8,&UNK_00167a35,0x72,6,0,0xffffffff);
        uVar2 = _ZN7android4base10LogMessage6streamEv(auStack_b8);
        uVar2 = func_0x0032eb30(uVar2,&UNK_0017ba7b,0x25);
        func_0x0032eb30(uVar2,&UNK_0015ae05,1);
        _ZN7android4base10LogMessageD2Ev(auStack_b8);
      }
      (**(code **)(*plVar4 + 0x20))();
      if (*(long **)(in_FS_OFFSET + 0x28) != plStack_b0) {
        func_0x0099bd00();
        _ZNK15fdevent_context17CheckLooperThreadEv();
        plVar6[2] = extraout_RDX_01;
        *(undefined1 *)(plVar6 + 3) = param_4;
        plVar4 = (long *)_ZNSt3__16chrono12steady_clock3nowEv();
        plVar6[4] = (long)plVar4;
        return plVar4;
      }
      return *(long **)(in_FS_OFFSET + 0x28);
    }
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_50[0] = &UNK_003d57d0;
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  auStack_40[0] = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined4 *)param_1 = auStack_40[0];
  apuStack_50[0] = &UNK_003d57f1;
  lVar1 = _ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
                    (param_2 + 4,auStack_40);
  if (lVar1 != 1) {
    do {
      apuStack_50[0] = &UNK_003d5a22;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00167a35,0x65,6,0,0xffffffff);
      apuStack_50[0] = &UNK_003d5a2a;
      uVar2 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      apuStack_50[0] = &UNK_003d5a3e;
      uVar2 = func_0x0032eb30(uVar2,&UNK_00165d45,0xe);
      apuStack_50[0] = &UNK_003d5a52;
      uVar2 = func_0x0032eb30(uVar2,&UNK_00177111,3);
      apuStack_50[0] = &UNK_003d5a62;
      uVar2 = func_0x0032eb30(uVar2,&UNK_0015ae05,1);
      apuStack_50[0] = &UNK_003d5a76;
      uVar2 = func_0x0032eb30(uVar2,&UNK_0015aef8,2);
      apuStack_50[0] = &UNK_003d5a86;
      uVar2 = func_0x0032eb30(uVar2,&UNK_0015ae05,1);
      apuStack_50[0] = &UNK_003d5a9a;
      uVar2 = func_0x0032eb30(uVar2,&UNK_001722e6,6);
      apuStack_50[0] = &UNK_003d5aae;
      uVar2 = func_0x0032eb30(uVar2,&UNK_0018ad31,6);
      apuStack_50[0] = &UNK_003d5abb;
      uVar2 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar2,1);
      apuStack_50[0] = &UNK_003d5acb;
      uVar2 = func_0x0032eb30(uVar2,&UNK_00177115,9);
      apuStack_50[0] = &UNK_003d5ad6;
      uVar2 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar2,lVar1);
      apuStack_50[0] = &UNK_003d5ae6;
      func_0x0032eb30(uVar2,&UNK_0017b788,2);
      apuStack_50[0] = &UNK_003d5aee;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
    } while( true );
  }
  plVar6 = (long *)param_2[0x14];
  if (plVar6 != (long *)0x0) {
    unaff_RBX = plVar6;
    do {
      while (param_3 < (ulong)unaff_RBX[4]) {
        unaff_RBX = (long *)*unaff_RBX;
        if (unaff_RBX == (long *)0x0) goto code_r0x003d5890;
      }
      if (param_3 <= (ulong)unaff_RBX[4]) {
        if (unaff_RBX != param_2 + 0x14) {
          plVar4 = unaff_RBX;
          plVar5 = (long *)unaff_RBX[1];
          if ((long *)unaff_RBX[1] == (long *)0x0) {
            do {
              plVar3 = (long *)plVar4[2];
              bVar7 = plVar4 != (long *)*plVar3;
              plVar4 = plVar3;
            } while (bVar7);
          }
          else {
            do {
              plVar3 = plVar5;
              plVar5 = (long *)*plVar3;
            } while ((long *)*plVar3 != (long *)0x0);
            plVar4 = (long *)0x0;
          }
          param_4 = SUB81(plVar4,0);
          if ((long *)param_2[0x13] == unaff_RBX) {
            param_2[0x13] = (long)plVar3;
          }
          param_2[0x15] = param_2[0x15] + -1;
          apuStack_50[0] = &UNK_003d59cb;
          func_0x003d6d50(plVar6,unaff_RBX);
          plVar6 = (long *)0x28;
          apuStack_50[0] = &UNK_003d59d8;
          plVar4 = unaff_RBX;
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
    apuStack_50[0] = &UNK_003d58b6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_00167a35,0x67,6,0,0xffffffff);
    apuStack_50[0] = &UNK_003d58be;
    uVar2 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    apuStack_50[0] = &UNK_003d58d2;
    uVar2 = func_0x0032eb30(uVar2,&UNK_00165d45,0xe);
    apuStack_50[0] = &UNK_003d58e6;
    uVar2 = func_0x0032eb30(uVar2,&UNK_00177111,3);
    apuStack_50[0] = &UNK_003d58fd;
    uVar2 = func_0x0032eb30(uVar2,&UNK_0015ae05,1);
    apuStack_50[0] = &UNK_003d5911;
    uVar2 = func_0x0032eb30(uVar2,&UNK_0015aef8,2);
    apuStack_50[0] = &UNK_003d5921;
    uVar2 = func_0x0032eb30(uVar2,&UNK_0015ae05,1);
    apuStack_50[0] = &UNK_003d5935;
    uVar2 = func_0x0032eb30(uVar2,&UNK_001722e6,6);
    apuStack_50[0] = &UNK_003d5949;
    uVar2 = func_0x0032eb30(uVar2,&UNK_0018ad31,6);
    apuStack_50[0] = &UNK_003d5956;
    uVar2 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar2,1);
    apuStack_50[0] = &UNK_003d596a;
    uVar2 = func_0x0032eb30(uVar2,&UNK_00177115,9);
    apuStack_50[0] = &UNK_003d5974;
    uVar2 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar2,0);
    apuStack_50[0] = &UNK_003d5988;
    func_0x0032eb30(uVar2,&UNK_0017b788,2);
    apuStack_50[0] = &UNK_003d5990;
    _ZN7android4base10LogMessageD2Ev(auStack_40);
  } while( true );
}


