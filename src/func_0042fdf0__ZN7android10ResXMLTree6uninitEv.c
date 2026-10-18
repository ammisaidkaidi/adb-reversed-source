// Function: _ZN7android10ResXMLTree6uninitEv
// Address: 0042fdf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android10ResXMLTree6uninitEv(long *param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
  _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
  if ((char)param_1[10] == '\x01') {
    _ZN7android4base10MappedFileD2Ev(param_1 + 7);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    _ZdaPvSt11align_val_t();
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = -(uint)(*(int *)(*param_1 + 0x60) != 0);
  return;
}


