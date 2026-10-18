// Function: _Z28transport_server_owns_deviceNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
// Address: 003e9450
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _Z28transport_server_owns_deviceNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = __transport_server_one_device;
  if (__transport_server_one_device == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = func_0x0099bcf0(__transport_server_one_device);
    uVar5 = param_2;
    if (uVar4 < param_2) {
      uVar5 = uVar4;
    }
    iVar3 = func_0x0099bf90(param_1,lVar1,uVar5);
    bVar2 = param_2 == uVar4 && iVar3 == 0;
  }
  return bVar2;
}


