// Function: _ZN4absl12lts_2026052619str_format_internal29FormatConversionCharToConvIntEc
// Address: 004ee340
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052619str_format_internal29FormatConversionCharToConvIntEc
                (undefined4 param_1)

{
  switch(param_1) {
  case 0x41:
    return 0x10000;
  default:
    return (ulong)((char)param_1 == '*');
  case 0x45:
    return 0x1000;
  case 0x46:
    return 0x400;
  case 0x47:
    return 0x4000;
  case 0x58:
    return 0x100;
  case 0x61:
    return 0x8000;
  case 99:
    return 2;
  case 100:
    return 8;
  case 0x65:
    return 0x800;
  case 0x66:
    return 0x200;
  case 0x67:
    return 0x2000;
  case 0x69:
    return 0x10;
  case 0x6e:
    return 0x20000;
  case 0x6f:
    return 0x20;
  case 0x70:
    return 0x40000;
  case 0x73:
    return 4;
  case 0x75:
    return 0x40;
  case 0x76:
    return 0x80000;
  case 0x78:
    return 0x80;
  }
}


