// Function: _ZN4absl12lts_2026052619str_format_internal17LengthModToStringENS0_9LengthModE
// Address: 004ed390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal17LengthModToStringENS0_9LengthModE
               (undefined2 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *param_1 = 0x6802;
    break;
  case 1:
    *(undefined1 *)param_1 = 4;
    *(undefined2 *)((long)param_1 + 1) = 0x6868;
    goto code_r0x004ed3d7;
  case 2:
    *param_1 = 0x6c02;
    break;
  case 3:
    *(undefined1 *)param_1 = 4;
    *(undefined2 *)((long)param_1 + 1) = 0x6c6c;
code_r0x004ed3d7:
    *(undefined1 *)((long)param_1 + 3) = 0;
    return;
  case 4:
    *param_1 = 0x4c02;
    break;
  case 5:
    *param_1 = 0x6a02;
    break;
  case 6:
    *param_1 = 0x7a02;
    break;
  case 7:
    *param_1 = 0x7402;
    break;
  case 8:
    *param_1 = 0x7102;
    break;
  default:
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


