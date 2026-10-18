// Function: _ZN10atransport18SetConnectionStateE15ConnectionState
// Address: 003ea630
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN10atransport18SetConnectionStateE15ConnectionState(long param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong *unaff_RBX;
  ulong *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  ulong *puStack_88;
  long lStack_80;
  ulong auStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = param_2;
  lVar8 = param_1;
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    lVar3 = _Z19fdevent_get_ambientv();
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_50,&UNK_0017a1e0,0x46d,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_50);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar3);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
        func_0x0032eb30(uVar6,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_50);
      } while( true );
    }
  }
  LOCK();
  *(int *)(param_1 + 0x110) = (int)param_2;
  UNLOCK();
  _Z23update_transport_statusv();
  if (lRam0000000000a006e8 != 0) {
    unaff_RBX = auStack_50;
    lVar3 = lRam0000000000a006e8;
    do {
      lVar8 = lVar3;
      lVar3 = *(long *)(lVar8 + 0xb0);
      _Z15list_transports17TrackerOutputType(unaff_RBX,*(undefined4 *)(lVar8 + 0xac));
      puVar7 = unaff_RBX;
      func_0x003e6370();
      if (((byte)auStack_50[0] & 1) != 0) {
        puVar7 = (ulong *)(CONCAT71(auStack_50[0]._1_7_,(byte)auStack_50[0]) & 0xfffffffffffffffe);
        lVar8 = lStack_40;
        _ZdaPvSt11align_val_t();
      }
    } while (lVar3 != 0);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_88 = unaff_RBX;
  lStack_80 = param_1;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uStack_b4 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_0017a1e0,0x474,1,0,0xffffffff);
      param_1 = _ZN7android4base10LogMessage6streamEv(auStack_98);
      if ((*(byte *)(lVar8 + 0x28) & 1) == 0) goto code_r0x003eaafa;
      lVar3 = *(long *)(lVar8 + 0x38);
      goto code_r0x003eaafe;
    }
  }
  do {
    lVar3 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar3 + 0x10) == '\x01') {
      lVar3 = _Z19fdevent_get_ambientv();
      lVar4 = _ZN7android4base11GetThreadIdEv();
      param_1 = *(long *)(lVar3 + 8);
      if (param_1 != lVar4) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_b0,&UNK_0017a1e0,0x475,6,0,0xffffffff);
          uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_b0);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
          uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,param_1);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
          uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
          func_0x0032eb30(uVar6,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(&uStack_b0);
        } while( true );
      }
    }
    puVar5 = (undefined4 *)(lVar8 + 0x1a0);
    _ZNSt3__15mutex4lockEv(puVar5);
    cVar1 = (**(code **)(**(long **)(lVar8 + 0x158) + 0x38))();
    if (cVar1 == '\0') {
      func_0x0032ea60(puVar7,&UNK_0015c8cf);
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
code_r0x003ea958:
      lVar3 = 0;
    }
    else {
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
      if (*(int *)(lVar8 + 0x110) != 4) {
        if ((*(byte *)(lVar8 + 0x28) & 1) == 0) {
          lVar8 = lVar8 + 0x29;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x38);
        }
        _ZN7android4base12StringPrintfEPKcz(&uStack_b0,&UNK_00164462,lVar8);
        if ((*puVar7 & 1) != 0) {
          _ZdaPvSt11align_val_t(puVar7[2],*puVar7 & 0xfffffffffffffffe);
        }
        puVar7[2] = uStack_a0;
        *(uint *)puVar7 = uStack_b0;
        *(undefined4 *)((long)puVar7 + 4) = uStack_ac;
        *(undefined4 *)(puVar7 + 1) = uStack_a8;
        *(undefined4 *)((long)puVar7 + 0xc) = uStack_a4;
        goto code_r0x003ea958;
      }
      _ZN10atransport9ResetKeysEv(lVar8);
      _ZNSt3__15mutex4lockEv(puVar5);
      uVar2 = (**(code **)(**(long **)(lVar8 + 0x158) + 0x40))(*(long **)(lVar8 + 0x158),puVar7);
      puVar7 = (ulong *)(ulong)uVar2;
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
      if ((char)uVar2 == '\0') goto code_r0x003ea958;
      _Z12send_connectP10atransport(lVar8);
      lVar3 = 1;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
      return lVar3;
    }
    func_0x0099bd00();
code_r0x003eaafa:
    lVar3 = lVar8 + 0x29;
code_r0x003eaafe:
    _ZN7android4base12StringPrintfEPKcz(&uStack_b0,&UNK_00166001,lVar3);
    func_0x0032e5a0(param_1,&uStack_b0);
    if ((uStack_b0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_a0,CONCAT44(uStack_ac,uStack_b0) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_98);
    *puVar5 = uStack_b4;
  } while( true );
}


