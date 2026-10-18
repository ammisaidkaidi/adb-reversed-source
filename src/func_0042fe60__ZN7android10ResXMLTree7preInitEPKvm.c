// Function: _ZN7android10ResXMLTree7preInitEPKvm
// Address: 0042fe60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android10ResXMLTree7preInitEPKvm(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x60) = 0xffffffed;
  _ZN7android13ResStringPool6uninitEv(param_1 + 0x80);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    _ZN7android4base10MappedFileD2Ev(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    _ZdaPvSt11align_val_t();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (7 < param_3) {
      return 0;
    }
    __android_log_print(5,&UNK_0015b3df,&UNK_001758cf,param_3 & 0xffffffff,8);
  }
  *(undefined4 *)(param_1 + 0x60) = 0x80000001;
  return 0x80000001;
}


