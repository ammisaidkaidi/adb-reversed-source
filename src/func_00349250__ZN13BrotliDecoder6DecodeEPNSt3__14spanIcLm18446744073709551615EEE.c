// Function: _ZN13BrotliDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
// Address: 00349250
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN13BrotliDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
                (long param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == *(long *)(param_1 + 0x30)) {
    lStack_38 = 0;
    lStack_40 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20) * 0x20;
    lStack_38 = *(long *)(lVar6 + 0x10 + lVar5) - *(long *)(param_1 + 0x18);
    lStack_40 = *(long *)(param_1 + 0x18) + *(long *)(lVar6 + lVar5);
  }
  lStack_48 = *(long *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  lVar6 = 0;
  uVar2 = BrotliDecoderDecompressStream
                    (*(undefined8 *)(param_1 + 0x50),&lStack_38,&lStack_40,&lStack_48,&uStack_50,0);
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x10 + *(long *)(param_1 + 0x20) * 0x20) -
            *(long *)(param_1 + 0x18);
  }
  _ZN8IOVector10drop_frontEm(param_1 + 0x10,lVar6 - lStack_38);
  lVar6 = *(long *)(param_1 + 0x48);
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = lVar6 - lStack_48;
  uVar3 = 2 - *(byte *)(param_1 + 8);
  if (uVar2 != 1) {
    uVar3 = uVar2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (ulong)uVar3;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


