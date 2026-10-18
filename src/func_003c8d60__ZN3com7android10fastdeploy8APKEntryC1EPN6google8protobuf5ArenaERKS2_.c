// Function: _ZN3com7android10fastdeploy8APKEntryC1EPN6google8protobuf5ArenaERKS2_
// Address: 003c8d60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3com7android10fastdeploy8APKEntryC1EPN6google8protobuf5ArenaERKS2_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  param_1[1] = param_2;
  *param_1 = 0x99e718;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar2 = *(ulong *)(param_3 + 0x18);
  if ((uVar2 & 3) != 0) {
    uVar2 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x18,param_2);
  }
  param_1[3] = uVar2;
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = uVar1;
  return;
}


