// Function: _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii
// Address: 004cf0c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  
  if (iRam0000000000a02b40 != 0xdd) {
    func_0x004d1460(0xa02b40);
  }
  iVar1 = *(int *)((long)param_2 * 4 + 0xa02b48);
  uVar3 = uRam0000000000a02b50;
  uVar4 = uRam0000000000a02b58;
  if (iRam0000000000a02b40 != 0xdd) {
    func_0x004d1460(0xa02b40);
    uVar3 = uRam0000000000a02b50;
    uVar4 = uRam0000000000a02b58;
  }
  uRam0000000000a02b50 = uVar3;
  uRam0000000000a02b58 = uVar4;
  if (param_1 < iVar1) {
    param_1 = param_1 + 1;
  }
  else {
    lVar5 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    iVar6 = 0;
    if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x4c), iVar6 = 0, iVar2 != 0)) {
      *(undefined4 *)(lVar5 + 0x4c) = 0;
      iVar6 = iVar2;
    }
    if (param_1 == iVar1) {
      AbslInternalMutexYield_lts_20260526();
      param_1 = param_1 + 1;
    }
    else {
      AbslInternalSleepFor_lts_20260526(uVar3,uVar4);
      param_1 = 0;
    }
    if (iVar6 != 0) {
      lVar5 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)(lVar5 + 0x4c) = iVar6;
    }
  }
  return param_1;
}


