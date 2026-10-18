// Function: _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS5_JiELm4ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
// Address: 00346b00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS5_JiELm4ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
               (long param_1,int *param_2)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 uStack_21;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)*(uint *)(param_1 + 0x90) != 0xffffffff) {
    (**(code **)(&UNK_0099e240 + (ulong)*(uint *)(param_1 + 0x90) * 8))(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  _ZN11ZstdEncoderC2Em(param_1,(long)*param_2);
  *(undefined4 *)(param_1 + 0x90) = 4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}


