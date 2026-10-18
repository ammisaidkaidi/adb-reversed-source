// Function: LZ4_compressHC2_limitedOutput
// Address: 004ade40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
LZ4_compressHC2_limitedOutput
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x0099c1e0(0x40038);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((uVar1 & 7) == 0) {
      func_0x0099bdb0(uVar1,0,0x40030);
      *(undefined2 *)(uVar1 + 0x40024) = 9;
      uVar2 = LZ4_compress_HC_extStateHC_fastReset(uVar1,param_1,param_2,param_3,param_4,param_5);
    }
    func_0x0099c1f0(uVar1);
  }
  return uVar2;
}


