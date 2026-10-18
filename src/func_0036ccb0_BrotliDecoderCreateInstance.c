// Function: BrotliDecoderCreateInstance
// Address: 0036ccb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long BrotliDecoderCreateInstance(code *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = param_1 == (code *)0x0 && param_2 == (code *)0x0;
  if (bVar3) {
    lVar2 = func_0x0099c1e0(0x1670);
  }
  else {
    if (param_1 == (code *)0x0 || param_2 == (code *)0x0) {
      return 0;
    }
    lVar2 = (*param_1)(param_3,0x1670);
  }
  if (lVar2 != 0) {
    iVar1 = func_0x00374eb0(lVar2,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return lVar2;
    }
    if (bVar3) {
      func_0x0099c1f0(lVar2);
    }
    else if (param_1 != (code *)0x0 && param_2 != (code *)0x0) {
      (*param_2)(param_3,lVar2);
    }
  }
  return 0;
}


