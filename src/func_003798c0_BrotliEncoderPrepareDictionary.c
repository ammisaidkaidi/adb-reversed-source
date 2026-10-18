// Function: BrotliEncoderPrepareDictionary
// Address: 003798c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long BrotliEncoderPrepareDictionary
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    return 0;
  }
  lVar1 = func_0x003bb7f0(param_5,param_6,param_7);
  if (lVar1 != 0) {
    lVar2 = func_0x003bb070(lVar1 + 8,param_3,param_2);
    *(long *)(lVar1 + 0x20) = lVar2;
    if (lVar2 != 0) {
      return lVar1;
    }
    func_0x003bb850(lVar1);
  }
  return 0;
}


