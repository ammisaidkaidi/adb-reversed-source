// Function: _Z25adb_DNSServiceIndexByNameNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
// Address: 00411370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_Z25adb_DNSServiceIndexByNameNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = kADBDNSServices._0_8_;
  uVar3 = func_0x0099bcf0(kADBDNSServices._0_8_);
  iVar2 = func_0x0099bed0(param_1,uVar1,uVar3);
  uVar1 = kADBDNSServices._8_8_;
  uVar3 = 0x100000000;
  if (iVar2 != 0) {
    uVar3 = func_0x0099bcf0(kADBDNSServices._8_8_);
    iVar2 = func_0x0099bed0(param_1,uVar1,uVar3);
    uVar1 = kADBDNSServices._16_8_;
    if (iVar2 == 0) {
      uVar3 = 0x100000001;
    }
    else {
      uVar3 = func_0x0099bcf0(kADBDNSServices._16_8_);
      iVar2 = func_0x0099bed0(param_1,uVar1,uVar3);
      uVar3 = 0x100000002;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


