// Function: _ZN6google8protobuf8internal15ThreadSafeArena10FirstBlockEPvmRKNS1_16AllocationPolicyE
// Address: 004b99e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal15ThreadSafeArena10FirstBlockEPvmRKNS1_16AllocationPolicyE
          (long param_1,undefined8 *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = *param_4;
  pcVar2 = (code *)param_4[2];
  if ((((uVar1 == 0x100) && (param_4[1] == 0x8000)) && (pcVar2 == (code *)0x0)) && (param_4[3] == 0)
     ) {
    if (param_3 < 0x11 || param_2 == (undefined8 *)0x0) {
      return (undefined8 *)&UNK_001ff288;
    }
  }
  else if (param_2 == (undefined8 *)0x0 || param_3 < 0x30) {
    param_3 = 0x30;
    if (0x30 < uVar1) {
      param_3 = uVar1;
    }
    if (pcVar2 == (code *)0x0) {
      param_2 = (undefined8 *)_Znwm();
    }
    else {
      param_2 = (undefined8 *)(*pcVar2)();
    }
    goto code_r0x004b9a5e;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
code_r0x004b9a5e:
  *param_2 = 0;
  param_2[1] = param_3;
  return param_2;
}


