// Function: _ZN3adb5proto17ServiceAdbPairingC1EPN6google8protobuf5ArenaERKS1_
// Address: 00421950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto17ServiceAdbPairingC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = 0x99f5b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto11MdnsServiceEEEPvPS1_PKv
                      (param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  return;
}


