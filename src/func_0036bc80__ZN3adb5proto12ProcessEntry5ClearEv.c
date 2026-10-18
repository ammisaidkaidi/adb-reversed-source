// Function: _ZN3adb5proto12ProcessEntry5ClearEv
// Address: 0036bc80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12ProcessEntry5ClearEv(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
      _ZN6google8protobuf8internal20RepeatedPtrFieldBase13ClearNonEmptyINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEvv
                (param_1 + 0x18);
    }
    if ((uVar1 & 2) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
  }
  if ((uVar1 & 0xf8) != 0) {
    *(undefined8 *)(param_1 + 0x4a) = 0;
    *(undefined8 *)(param_1 + 0x52) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar3 = (undefined8 *)
             _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINS0_15UnknownFieldSetEEEPT_v
                       ();
  }
  else {
    puVar3 = (undefined8 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  if ((puVar3[1] & 4) == 0) {
    if ((puVar3[1] & 3) == 0) goto code_r0x0060e126;
  }
  else if (*(int *)(puVar3 + 2) == 0) goto code_r0x0060e126;
  _ZN6google8protobuf15UnknownFieldSet13ClearFallbackEv(puVar3);
code_r0x0060e126:
  pbVar2 = (byte *)*puVar3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
  }
  return;
}


