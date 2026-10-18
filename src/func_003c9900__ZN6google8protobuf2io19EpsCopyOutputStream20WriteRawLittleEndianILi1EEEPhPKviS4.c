// Function: _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
// Address: 003c9900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
               (long *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (*param_1 - param_4 < (long)param_3) {
    lVar1 = (*param_1 - param_4) + 0x10;
    if ((int)lVar1 < param_3) {
      do {
        param_3 = param_3 - (int)lVar1;
        lVar1 = (long)(int)lVar1;
        func_0x0099bda0(param_4,param_2,lVar1);
        param_2 = param_2 + lVar1;
        param_4 = _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                            (param_1,param_4 + lVar1);
        lVar1 = (*param_1 - param_4) + 0x10;
      } while ((int)lVar1 < param_3);
    }
    func_0x0099bda0(param_4,param_2,(long)param_3);
    return param_4 + param_3;
  }
  func_0x0099bda0(param_4,param_2,param_3);
  return param_4 + param_3;
}


