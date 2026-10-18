// Function: _ZNK7android13StringPoolRef8string16Ev
// Address: 00436c90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android13StringPoolRef8string16Ev(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(param_1,plVar1,(int)param_2[1]);
  }
  return param_1;
}


