// Function: _ZN3adb5proto8HostInfoC1EPN6google8protobuf5ArenaERKS1_
// Address: 004234c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto8HostInfoC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  param_1[1] = param_2;
  *param_1 = 0x99f6b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar1 = *(ulong *)(param_3 + 0x18);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x18,param_2);
  }
  param_1[3] = uVar1;
  return;
}


