// Function: _ZN7android9ZipFileRO16nextEntryOrErrorEPv
// Address: 004918a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN7android9ZipFileRO16nextEntryOrErrorEPv(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  uVar1 = _Z4NextPvP8ZipEntryPNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                    (*(undefined8 *)(param_2 + 0x48),param_2,param_2 + 0x38);
  uVar2 = 0;
  if (uVar1 == 0xffffffff) {
    param_2 = 0;
  }
  else if (uVar1 != 0) {
    puVar3 = &UNK_0017f172;
    if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 8);
    }
    param_2 = (ulong)uVar1;
    uVar2 = _Z15ErrorCodeStringi(uVar1);
    __android_log_print(5,&UNK_001699cb,&UNK_0017a4c7,puVar3,uVar2);
    uVar2 = 1;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_2;
  return auVar4;
}


