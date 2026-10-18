// Function: _ZN4absl12lts_2026052616numbers_internal23RoundTripDoubleToBufferEdPc
// Address: 004e37e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN4absl12lts_2026052616numbers_internal23RoundTripDoubleToBufferEdPc
          (double param_1,undefined4 *param_2)

{
  double dVar1;
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
  }
  else {
    if (ABS(param_1) <= 1.7976931348623137e+308) {
      func_0x0099c030(param_1,param_2,0x20,&UNK_00172874,0xf);
      dVar1 = (double)func_0x0099c560(param_2,0);
      if ((dVar1 == param_1) && (!NAN(dVar1) && !NAN(param_1))) {
        return param_2;
      }
    }
    func_0x0099c030(param_1,param_2,0x20,&UNK_00172874,0x11);
  }
  return param_2;
}


