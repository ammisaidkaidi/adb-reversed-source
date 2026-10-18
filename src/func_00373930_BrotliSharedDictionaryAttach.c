// Function: BrotliSharedDictionaryAttach
// Address: 00373930
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
BrotliSharedDictionaryAttach(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_2 == 0 && param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    uVar3 = (ulong)uVar1;
    if (uVar3 < 0xf) {
      *(undefined8 *)(param_1 + uVar3 * 2 + 2) = param_3;
      *(undefined8 *)(param_1 + uVar3 * 2 + 0x20) = param_4;
      *param_1 = uVar1 + 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


