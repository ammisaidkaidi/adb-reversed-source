// Function: BrotliSharedDictionaryCreateInstance
// Address: 00373970
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long BrotliSharedDictionaryCreateInstance(code *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (code *)0x0 && param_2 == (code *)0x0) {
    lVar1 = func_0x0099c1e0(0x580);
  }
  else {
    if (param_1 == (code *)0x0 || param_2 == (code *)0x0) {
      return 0;
    }
    lVar1 = (*param_1)(param_3,0x580);
  }
  if (lVar1 == 0) {
    return 0;
  }
  func_0x0099bdb0(lVar1,0,0x580);
  *(undefined4 *)(lVar1 + 0xf8) = 0;
  *(undefined1 *)(lVar1 + 0x13c) = 1;
  *(undefined1 *)(lVar1 + 0x540) = 0;
  *(undefined1 *)(lVar1 + 0x550) = 0;
  uVar2 = BrotliGetDictionary();
  *(undefined8 *)(lVar1 + 0x140) = uVar2;
  uVar2 = BrotliGetTransforms();
  if (param_1 == (code *)0x0) {
    param_1 = BrotliDefaultAllocFunc;
  }
  *(undefined8 *)(lVar1 + 0x340) = uVar2;
  *(code **)(lVar1 + 0x568) = param_1;
  if (param_2 == (code *)0x0) {
    param_2 = BrotliDefaultFreeFunc;
  }
  *(code **)(lVar1 + 0x570) = param_2;
  *(undefined8 *)(lVar1 + 0x578) = param_3;
  return lVar1;
}


