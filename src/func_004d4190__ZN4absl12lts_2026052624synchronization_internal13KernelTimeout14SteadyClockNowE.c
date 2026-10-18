// Function: _ZN4absl12lts_2026052624synchronization_internal13KernelTimeout14SteadyClockNowEv
// Address: 004d4190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052624synchronization_internal13KernelTimeout14SteadyClockNowEv(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_RBP;
  long lStack_10;
  
  iVar2 = func_0x0099c650(1,&lStack_10);
  if (iVar2 == 0) {
    return lStack_10 * 1000000000 + unaff_RBP;
  }
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar4 = _ZNSt3__120__throw_system_errorEiPKc(*puVar3,&UNK_00160eb4);
  __cxa_call_terminate(uVar4);
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}


