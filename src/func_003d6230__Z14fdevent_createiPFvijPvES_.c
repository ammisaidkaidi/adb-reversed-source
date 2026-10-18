// Function: _Z14fdevent_createiPFvijPvES_
// Address: 003d6230
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z14fdevent_createiPFvijPvES_(uint param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 unaff_R13;
  long in_FS_OFFSET;
  uint uStack_84;
  long lStack_80;
  uint *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_50 = &UNK_003d625c;
  puVar4 = (uint *)func_0x0099bce0();
  if (cRam0000000000a00688 == '\0') {
    puStack_50 = &UNK_003d62cd;
    iVar3 = __cxa_guard_acquire(0xa00688);
    if (iVar3 != 0) {
      puStack_50 = &UNK_003d62db;
      unaff_R13 = _Znwm(0xc0);
      puStack_50 = &UNK_003d62e6;
      _ZN21fdevent_context_epollC2Ev(unaff_R13);
      puStack_50 = &UNK_003d62f9;
      uRam0000000000a00680 = unaff_R13;
      __cxa_guard_release(0xa00688);
    }
  }
  uVar7 = uRam0000000000a00680;
  *puVar4 = *puVar4;
  puVar8 = &uStack_3c;
  puStack_50 = &UNK_003d628a;
  uStack_3c = param_1;
  uVar5 = _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
                    (uVar7,puVar8,param_2,0,param_3);
  uVar1 = *puVar4;
  uVar9 = uStack_3c;
  if (uStack_3c != 0xffffffff) {
    puStack_50 = &UNK_003d629d;
    func_0x0099bd10();
    param_2 = uVar5;
  }
  *puVar4 = uVar1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar5;
  }
  puStack_50 = &UNK_003d6303;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_78 = puVar4;
  uStack_70 = (ulong)param_1;
  uStack_68 = unaff_R13;
  uStack_60 = (ulong)uVar1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff8;
  puVar6 = (undefined4 *)func_0x0099bce0();
  if (cRam0000000000a00688 == '\0') {
    iVar3 = __cxa_guard_acquire(0xa00688);
    if (iVar3 != 0) {
      uVar7 = _Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(uVar7);
      uRam0000000000a00680 = uVar7;
      __cxa_guard_release(0xa00688);
    }
  }
  uVar7 = uRam0000000000a00680;
  *puVar6 = *puVar6;
  puVar4 = &uStack_84;
  uStack_84 = uVar9;
  uVar5 = _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
                    (uVar7,puVar4,puVar8,1,extraout_RDX);
  uVar2 = *puVar6;
  uVar10 = (ulong)uStack_84;
  if (uStack_84 != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar6 = uVar2;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uVar5;
  }
  func_0x0099bd00();
  if (cRam0000000000a00688 == '\0') {
    iVar3 = __cxa_guard_acquire(0xa00688);
    if (iVar3 != 0) {
      uVar7 = _Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(uVar7);
      uRam0000000000a00680 = uVar7;
      __cxa_guard_release(0xa00688);
    }
  }
  _ZN15fdevent_context7DestroyEP7fdevent(uVar10,uRam0000000000a00680,puVar4);
  return uVar10;
}


