// Function: _ZN4absl12lts_202605267uint128C1Ed
// Address: 004e05f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605267uint128C1Ed(double param_1,ulong *param_2)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = (double)func_0x0099c780(0x3ff0000000000000,0x40);
  if (dVar2 <= param_1) {
    dVar2 = (double)func_0x0099c780(param_1,0xffffffc0);
    uVar1 = (long)(dVar2 - 9.223372036854776e+18) & (long)dVar2 >> 0x3f | (long)dVar2;
    auVar3._8_4_ = (int)(uVar1 >> 0x20);
    auVar3._0_8_ = uVar1;
    auVar3._12_4_ = 0x45300000;
    dVar2 = (double)func_0x0099c780((auVar3._8_8_ - 1.9342813113834067e+25) +
                                    ((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0),
                                    0x40);
    param_1 = param_1 - dVar2;
  }
  else {
    uVar1 = 0;
  }
  *param_2 = (long)(param_1 - 9.223372036854776e+18) & (long)param_1 >> 0x3f | (long)param_1;
  param_2[1] = uVar1;
  return;
}


