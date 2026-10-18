// Function: BrotliEncoderSetParameter
// Address: 003752d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 BrotliEncoderSetParameter(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1[0x6cf] != 0) {
    return uVar1;
  }
  switch(param_2) {
  case 0:
    *param_1 = param_3;
    break;
  case 1:
    param_1[1] = param_3;
    break;
  case 2:
    param_1[2] = param_3;
    break;
  case 3:
    param_1[3] = param_3;
    break;
  case 4:
    if (1 < param_3) {
      return uVar1;
    }
    param_1[8] = param_3;
    return 1;
  case 5:
    *(ulong *)(param_1 + 6) = (ulong)param_3;
    break;
  case 6:
    param_1[9] = (uint)(param_3 != 0);
    break;
  case 7:
    param_1[0xe] = param_3;
    break;
  case 8:
    param_1[0xf] = param_3;
    break;
  case 9:
    if (param_3 < 0x40000001) {
      *(ulong *)(param_1 + 4) = (ulong)param_3;
      return 1;
    }
  default:
    return uVar1;
  }
  return 1;
}


