// Function: _ZN3com7android10fastdeploy8APKEntry5ClearEv
// Address: 003c8f80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3com7android10fastdeploy8APKEntry5ClearEv(long param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  if ((uVar2 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar3 = (byte *)_ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEPT_v
                                 ();
      bVar1 = *pbVar3;
    }
    else {
      pbVar3 = (byte *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
      bVar1 = *pbVar3;
    }
    if ((bVar1 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      return;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    return;
  }
  return;
}


