// Function: _ZN3adb5proto11MdnsServiceC1EPN6google8protobuf5ArenaERKS1_
// Address: 00421d50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto11MdnsServiceC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  param_1[1] = param_2;
  *param_1 = 0x99f470;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvRKS2_PNS0_5ArenaE
              (param_1 + 3,param_3 + 0x18,param_2);
  }
  uVar1 = *(ulong *)(param_3 + 0x30);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x30,param_2);
  }
  param_1[6] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x38);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x38,param_2);
  }
  param_1[7] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x40);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x40,param_2);
  }
  param_1[8] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x48);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x48,param_2);
  }
  param_1[9] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x50);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x50,param_2);
  }
  param_1[10] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x58);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x58,param_2);
  }
  param_1[0xb] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x60);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x60,param_2);
  }
  param_1[0xc] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x68);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x68,param_2);
  }
  param_1[0xd] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x70);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x70,param_2);
  }
  param_1[0xe] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x78);
  if ((uVar1 & 3) != 0) {
    uVar1 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x78,param_2);
  }
  param_1[0xf] = uVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x80);
  return;
}


