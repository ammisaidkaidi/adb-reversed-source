// Function: _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaERKS2_
// Address: 003c92d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaERKS2_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  param_1[1] = param_2;
  *param_1 = 0x99e798;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_11MessageLiteEEEvRKS2_PNS0_5ArenaE
              (param_1 + 3,param_3 + 0x18,param_2);
  }
  uVar1 = *(ulong *)(param_3 + 0x30);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x30,param_2);
  }
  param_1[6] = uVar1;
  return;
}


