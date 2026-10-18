// Function: _ZN6google8protobuf8internal20RepeatedPtrFieldBase13ClearNonEmptyINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEvv
// Address: 0036cb00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal20RepeatedPtrFieldBase13ClearNonEmptyINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEvv
               (ulong *param_1)

{
  uint uVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = (uint)param_1[1];
  puVar3 = (ulong *)(*param_1 + 7);
  if ((*param_1 & 1) == 0) {
    puVar3 = param_1;
  }
  if ((int)uVar1 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      pbVar2 = (byte *)puVar3[uVar4];
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
      pbVar2 = (byte *)puVar3[uVar4 + 1];
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
      uVar4 = uVar4 + 2;
    } while ((uVar1 & 0x7ffffffe) != uVar4);
    if ((uVar1 & 1) == 0) goto code_r0x0036cbc1;
  }
  pbVar2 = (byte *)puVar3[uVar4];
  if ((*pbVar2 & 1) == 0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  else {
    **(undefined1 **)(pbVar2 + 0x10) = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
  }
code_r0x0036cbc1:
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


