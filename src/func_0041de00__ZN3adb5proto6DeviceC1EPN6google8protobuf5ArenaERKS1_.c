// Function: _ZN3adb5proto6DeviceC1EPN6google8protobuf5ArenaERKS1_
// Address: 0041de00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto6DeviceC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  param_1[1] = param_2;
  *param_1 = 0x99f4b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar4 = *(ulong *)(param_3 + 0x18);
  if ((uVar4 & 3) != 0) {
    uVar4 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x18,param_2);
  }
  param_1[3] = uVar4;
  uVar4 = *(ulong *)(param_3 + 0x20);
  if ((uVar4 & 3) != 0) {
    uVar4 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x20,param_2);
  }
  param_1[4] = uVar4;
  uVar4 = *(ulong *)(param_3 + 0x28);
  if ((uVar4 & 3) != 0) {
    uVar4 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x28,param_2);
  }
  param_1[5] = uVar4;
  uVar4 = *(ulong *)(param_3 + 0x30);
  if ((uVar4 & 3) != 0) {
    uVar4 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x30,param_2);
  }
  param_1[6] = uVar4;
  uVar4 = *(ulong *)(param_3 + 0x38);
  if ((uVar4 & 3) != 0) {
    uVar4 = _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                      (param_3 + 0x38,param_2);
  }
  param_1[7] = uVar4;
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x50);
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}


