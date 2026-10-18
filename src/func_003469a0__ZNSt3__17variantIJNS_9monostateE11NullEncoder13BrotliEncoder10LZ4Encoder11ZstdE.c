// Function: _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS3_JiELm2ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
// Address: 003469a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS3_JiELm2ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
          (undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined1 uStack_21;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)*(uint *)(param_1 + 0x12) != 0xffffffff) {
    (**(code **)(&UNK_0099e240 + (ulong)*(uint *)(param_1 + 0x12) * 8))(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[1] = (long)*param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0x99e360;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  _ZN5Block8allocateEm(param_1 + 9);
  param_1[0xd] = param_1[1];
  uVar2 = BrotliEncoderCreateInstance(0,0,0);
  param_1[0xe] = uVar2;
  param_1[0xf] = BrotliEncoderDestroyInstance;
  BrotliEncoderSetParameter(uVar2,1,1);
  *(undefined4 *)(param_1 + 0x12) = 2;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


