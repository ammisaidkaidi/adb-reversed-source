// Function: LZ4_compress_default
// Address: 00496a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compress_default
                (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 auStack_4058 [16416];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = auStack_4058;
  func_0x0099bdb0(puVar2,0,0x4020);
  uVar1 = LZ4_compress_fast_extState(puVar2,param_1,param_2,param_3,param_4,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar1;
  }
  func_0x0099bd00();
  uVar1 = func_0x00496ad0();
  if (((ulong)puVar2 & 7) == 0 && puVar2 != (undefined1 *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    func_0x0099bdb0(puVar2,0,0x4020);
  }
  return uVar1;
}


