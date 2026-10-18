// Function: _ZN3adb5proto17ServiceAdbPairingD1Ev
// Address: 004219d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto17ServiceAdbPairingD1Ev(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINS0_15UnknownFieldSetEEEvv
              (param_1 + 8);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _ZN3adb5proto11MdnsServiceD2Ev(lVar1);
    free(lVar1,0x88);
    return;
  }
  return;
}


