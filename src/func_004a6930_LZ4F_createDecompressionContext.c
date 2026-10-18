// Function: LZ4F_createDecompressionContext
// Address: 004a6930
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 LZ4F_createDecompressionContext(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != (long *)0x0) {
    lVar1 = func_0x0099c4d0(1,0x120);
    if (lVar1 == 0) {
      uVar2 = 0xfffffffffffffff7;
      lVar1 = 0;
    }
    else {
      *(undefined4 *)(lVar1 + 0x40) = param_2;
      uVar2 = 0;
    }
    *param_1 = lVar1;
    return uVar2;
  }
  return 0xffffffffffffffeb;
}


