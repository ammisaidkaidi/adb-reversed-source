// Function: _Z28transport_server_owns_deviceNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
// Address: 003e94b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z28transport_server_owns_deviceNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
                (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_R14;
  undefined7 uVar6;
  
  lVar1 = __transport_server_one_device;
  uVar6 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (__transport_server_one_device != 0) {
    uVar3 = func_0x0099bcf0(__transport_server_one_device);
    uVar4 = param_4;
    if (uVar3 < param_4) {
      uVar4 = uVar3;
    }
    iVar2 = func_0x0099bf90(param_3,lVar1,uVar4);
    if (iVar2 != 0 || param_4 != uVar3) {
      uVar5 = param_2;
      if (uVar3 < param_2) {
        uVar5 = uVar3;
      }
      iVar2 = func_0x0099bf90(param_1,lVar1,uVar5);
      uVar5 = CONCAT71(uVar6,param_2 == uVar3 && iVar2 == 0);
    }
  }
  return uVar5 & 0xffffffff;
}


