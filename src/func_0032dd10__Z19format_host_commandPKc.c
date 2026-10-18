// Function: _Z19format_host_commandPKc
// Address: 0032dd10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z19format_host_commandPKc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam0000000000a00518 == (undefined *)0x0) {
    if (puRam0000000000a00510 == (undefined *)0x0) {
      puVar2 = &UNK_0018014d;
      if (iRam00000000009c55c0 == 1) {
        puVar2 = &UNK_00167696;
      }
      puVar1 = &UNK_00165bd9;
      if (iRam00000000009c55c0 != 0) {
        puVar1 = puVar2;
      }
      puVar2 = &UNK_00183161;
    }
    else {
      puVar2 = &UNK_0018314f;
      puVar1 = puRam0000000000a00510;
    }
  }
  else {
    puVar2 = &UNK_001574b0;
    puVar1 = puRam0000000000a00518;
  }
  _ZN7android4base12StringPrintfEPKcz(param_1,puVar2,puVar1,param_2);
  return param_1;
}


