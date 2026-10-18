// Function: LZ4_compressHC2
// Address: 004adda0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
LZ4_compressHC2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = LZ4_compressBound(param_3);
  uVar2 = func_0x0099c1e0(0x40038);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((uVar2 & 7) == 0) {
      func_0x0099bdb0(uVar2,0,0x40030);
      *(undefined2 *)(uVar2 + 0x40024) = 9;
      uVar3 = LZ4_compress_HC_extStateHC_fastReset(uVar2,param_1,param_2,param_3,uVar1,param_4);
    }
    func_0x0099c1f0(uVar2);
  }
  return uVar3;
}


