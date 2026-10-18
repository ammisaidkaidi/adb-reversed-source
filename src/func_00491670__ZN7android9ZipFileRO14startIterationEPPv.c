// Function: _ZN7android9ZipFileRO14startIterationEPPv
// Address: 00491670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN7android9ZipFileRO14startIterationEPPv(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_EDX;
  
  uVar1 = _ZN7android9ZipFileRO21startIterationOrErrorEPKcS2_(param_1,0,0);
  if (extraout_EDX == 0) {
    *param_2 = uVar1;
  }
  return extraout_EDX == 0;
}


