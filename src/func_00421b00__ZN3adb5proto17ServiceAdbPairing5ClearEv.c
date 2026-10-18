// Function: _ZN3adb5proto17ServiceAdbPairing5ClearEv
// Address: 00421b00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto17ServiceAdbPairing5ClearEv(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    _ZN3adb5proto11MdnsService5ClearEv(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar2 = (undefined8 *)
             _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINS0_15UnknownFieldSetEEEPT_v
                       ();
  }
  else {
    puVar2 = (undefined8 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  if ((puVar2[1] & 4) == 0) {
    if ((puVar2[1] & 3) == 0) goto code_r0x0060e126;
  }
  else if (*(int *)(puVar2 + 2) == 0) goto code_r0x0060e126;
  _ZN6google8protobuf15UnknownFieldSet13ClearFallbackEv(puVar2);
code_r0x0060e126:
  pbVar1 = (byte *)*puVar2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
    }
  }
  return;
}


