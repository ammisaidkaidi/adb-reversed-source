// Function: _ZN7android9ZipFileRO9nextEntryEPv
// Address: 00491830
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN7android9ZipFileRO9nextEntryEPv(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  iVar1 = _Z4NextPvP8ZipEntryPNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                    (*(undefined8 *)(param_2 + 0x48),param_2,param_2 + 0x38);
  if (iVar1 == -1) {
    param_2 = 0;
  }
  else if (iVar1 != 0) {
    puVar3 = &UNK_0017f172;
    if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 8);
    }
    uVar2 = _Z15ErrorCodeStringi(iVar1);
    param_2 = 0;
    __android_log_print(5,&UNK_001699cb,&UNK_0017a4c7,puVar3,uVar2);
  }
  return param_2;
}


