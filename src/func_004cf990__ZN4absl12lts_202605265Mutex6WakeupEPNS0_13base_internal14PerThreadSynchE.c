// Function: _ZN4absl12lts_202605265Mutex6WakeupEPNS0_13base_internal14PerThreadSynchE
// Address: 004cf990
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_202605265Mutex6WakeupEPNS0_13base_internal14PerThreadSynchE
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  AbslInternalPerThreadSemPost_lts_20260526(param_2);
  return uVar1;
}


