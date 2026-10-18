// Function: _Z16is_adb_interfaceiii
// Address: 00413590
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z16is_adb_interfaceiii(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 1) ||
     ((uVar1 = 1, param_2 != 0x42 || param_1 != 0xff && (param_2 != 2 || param_1 != 0xdc)))) {
    uVar1 = 0;
  }
  return uVar1;
}


