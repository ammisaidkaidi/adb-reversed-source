// Function: LZ4_compress_HC_destSize
// Address: 004ad1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
LZ4_compress_HC_destSize
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          ,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  
  if ((param_1 & 7) == 0 && param_1 != 0) {
    func_0x0099bdb0(param_1,0,0x40030);
    *(undefined4 *)(param_1 + 0x40020) = 0x10000;
    *(undefined8 *)(param_1 + 0x40008) = param_2;
    *(undefined8 *)(param_1 + 0x40000) = param_2;
    *(undefined8 *)(param_1 + 0x40010) = param_2;
    *(undefined8 *)(param_1 + 0x40018) = 0x1000000010000;
    uVar1 = 0xc;
    if (param_6 < 0xc) {
      uVar1 = param_6;
    }
    uVar3 = 9;
    if (0 < (int)param_6) {
      uVar3 = (undefined2)uVar1;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar3;
    uVar2 = func_0x004a84b0(param_1,param_2,param_3,param_4,param_5,param_6,2);
    return uVar2;
  }
  return 0;
}


