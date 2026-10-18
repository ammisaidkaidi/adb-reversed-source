// Function: LZ4F_freeCompressionContext
// Address: 004a5a30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 LZ4F_freeCompressionContext(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(param_1 + 200) != 0) {
      if (pcVar1 == (code *)0x0) {
        func_0x0099c1f0(*(long *)(param_1 + 200));
      }
      else {
        (*pcVar1)(uVar2);
      }
      pcVar1 = *(code **)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      if (pcVar1 == (code *)0x0) {
        func_0x0099c1f0(*(long *)(param_1 + 0x78));
      }
      else {
        (*pcVar1)(uVar2);
      }
    }
    if (*(code **)(param_1 + 0x10) == (code *)0x0) {
      func_0x0099c1f0(param_1);
    }
    else {
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1);
    }
  }
  return 0;
}


