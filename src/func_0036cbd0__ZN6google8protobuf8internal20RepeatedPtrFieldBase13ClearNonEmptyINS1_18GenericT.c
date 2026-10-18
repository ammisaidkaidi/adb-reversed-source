// Function: _ZN6google8protobuf8internal20RepeatedPtrFieldBase13ClearNonEmptyINS1_18GenericTypeHandlerINS0_11MessageLiteEEEEEvv
// Address: 0036cbd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal20RepeatedPtrFieldBase13ClearNonEmptyINS1_18GenericTypeHandlerINS0_11MessageLiteEEEEEvv
               (ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)(*param_1 + 7);
  if ((*param_1 & 1) == 0) {
    puVar3 = param_1;
  }
  uVar4 = 1;
  if (1 < (int)(uint)param_1[1]) {
    uVar4 = (ulong)(uint)param_1[1];
  }
  uVar2 = 0;
  do {
    puVar1 = puVar3 + uVar2;
    uVar2 = uVar2 + 1;
    (**(code **)(*(long *)*puVar1 + 0x10))();
  } while (uVar4 != uVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


