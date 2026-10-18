// Function: _ZN6google8protobuf8internal20RepeatedPtrFieldBase7DestroyINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEvv
// Address: 0036c9b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal20RepeatedPtrFieldBase7DestroyINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEvv
               (ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if (param_1[2] == 0) {
    uVar6 = *param_1;
    uVar3 = (uint)uVar6;
    if ((uVar6 & 1) == 0) {
      uVar4 = (uint)(uVar6 != 0);
    }
    else {
      uVar4 = *(uint *)(uVar6 + 3);
    }
    puVar7 = (ulong *)(uVar6 + 7);
    if ((uVar6 & 1) == 0) {
      puVar7 = param_1;
    }
    if (0 < (int)uVar4) {
      lVar5 = 5;
      do {
        puVar2 = (ulong *)puVar7[lVar5 + -5];
        if (puVar2 != (ulong *)0x0) {
          if ((*puVar2 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar2[2],*puVar2 & 0xfffffffffffffffe);
          }
          _ZdaPvSt11align_val_t(puVar2,0x18);
        }
        lVar1 = lVar5 - (ulong)uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar1 != 4);
      uVar6 = *param_1;
      uVar3 = (uint)uVar6;
    }
    if ((uVar3 & 1) != 0) {
      free(uVar6 - 1,(long)*(int *)(uVar6 - 1) * 8 + 8);
      return;
    }
  }
  return;
}


