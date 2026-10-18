// Function: _ZN10atransport5ResetEv
// Address: 003e5c20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN10atransport5ResetEv(long *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *unaff_RBX;
  undefined4 uVar11;
  long *plVar12;
  ulong unaff_R12;
  long in_FS_OFFSET;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long *plStack_68;
  ulong uStack_60;
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  
  puStack_30 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar2 = *(byte *)(param_1 + 0x19);
  *(byte *)(param_1 + 0x19) = 1;
  UNLOCK();
  plVar12 = param_1;
  if ((bVar2 & 1) == 0) {
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar6 != '\0') {
      puVar7 = (uint *)func_0x0099bce0();
      uVar4 = *puVar7;
      unaff_R12 = (ulong)uVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_0017a1e0,0x45c,2,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      uVar10 = func_0x0032eb30(uVar10,&UNK_00177195,0x14);
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uVar10,param_1);
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      func_0x0032e5a0(uVar10,param_1 + 5);
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar7 = uVar4;
    }
    plVar1 = param_1 + 0x34;
    _ZNSt3__15mutex4lockEv(plVar1);
    plVar12 = (long *)param_1[0x2b];
    unaff_RBX = (long *)param_1[0x2c];
    if (unaff_RBX == (long *)0x0) {
      _ZNSt3__115recursive_mutex6unlockEv(plVar1);
      (**(code **)(*plVar12 + 0x30))();
    }
    else {
      LOCK();
      unaff_RBX[1] = unaff_RBX[1] + 1;
      UNLOCK();
      _ZNSt3__115recursive_mutex6unlockEv(plVar1);
      (**(code **)(*plVar12 + 0x30))();
      LOCK();
      plVar1 = unaff_RBX + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
        plVar12 = unaff_RBX;
        _ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  uVar11 = SUB84(plVar12,0);
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_30) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_68 = unaff_RBX;
  uStack_60 = unaff_R12;
  puVar8 = (undefined8 *)_Znwm(0xb8);
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined4 *)(puVar8 + 9) = 0xffffffff;
  *(undefined1 *)(puVar8 + 0x10) = 0;
  puVar8[0x16] = 0;
  *(undefined8 *)((long)puVar8 + 0x99) = 0;
  *(undefined8 *)((long)puVar8 + 0xa1) = 0;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar6 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar5 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_78,&UNK_0017a1e0,0x2e1,1,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_78);
      _ZN7android4base12StringPrintfEPKcz(&bStack_90,&UNK_0015790f,puVar8);
      func_0x0032e5a0(uVar10,&bStack_90);
      if ((bStack_90 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_78);
      *puVar9 = uVar5;
    }
  }
  puVar8[3] = &UNK_003e5f30;
  puVar8[4] = &UNK_003e5f40;
  puVar8[6] = &UNK_003e5fc0;
  *(undefined1 *)(puVar8 + 0x15) = 1;
  *(undefined4 *)((long)puVar8 + 0xac) = uVar11;
  puVar8[0x16] = puRam0000000000a006e8;
  puRam0000000000a006e8 = puVar8;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return puVar8;
  }
  func_0x0099bd00();
  func_0x003e5fc0();
  return (undefined8 *)0xffffffff;
}


