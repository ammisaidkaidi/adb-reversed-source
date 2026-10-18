// Function: _ZN4absl12lts_2026052613base_internal24SetCurrentThreadIdentityEPNS1_14ThreadIdentityEPFvPvE
// Address: 004c13d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613base_internal24SetCurrentThreadIdentityEPNS1_14ThreadIdentityEPFvPvE
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (iRam0000000000a009c8 != 0xdd) {
    LOCK();
    bVar2 = iRam0000000000a009c8 == 0;
    if (bVar2) {
      iRam0000000000a009c8 = 0x65c2937b;
    }
    UNLOCK();
    if ((bVar2) ||
       (iVar1 = _ZN4absl12lts_2026052613base_internal12SpinLockWaitEPNSt3__16atomicIjEEiPKNS1_22SpinLockWaitTransitionENS1_14SchedulingModeE
                          (0xa009c8,3,
                           _ZZN4absl12lts_2026052613base_internal12CallOnceImplIRFvPFvPvEEJRS5_EEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_E5trans
                           ,1), iVar1 == 0)) {
      func_0x0099c670(0xa009c4,param_2);
      iVar1 = iRam0000000000a009c8;
      uRam0000000000a009cc = 1;
      LOCK();
      iRam0000000000a009c8 = 0xdd;
      UNLOCK();
      if (iVar1 == 0x5a308d2) {
        AbslInternalSpinLockWake_lts_20260526(0xa009c8,1);
      }
    }
  }
  uStack_38 = 0;
  uStack_30 = 0;
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
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  func_0x0099c660(&uStack_a8);
  func_0x0099c010(2,&uStack_a8,&uStack_128);
  func_0x0099bfc0(uRam0000000000a009c4,param_1);
  func_0x0099c010(2,&uStack_128,0);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    return;
  }
  return;
}


