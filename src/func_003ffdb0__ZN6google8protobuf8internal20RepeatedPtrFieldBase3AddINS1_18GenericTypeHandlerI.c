// Function: _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
// Address: 003ffdb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                (ulong *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 == 0) goto code_r0x003ffec4;
code_r0x003ffe38:
    puVar4 = (undefined8 *)
             _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(param_2);
  }
  else {
    if ((uVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 1) = 1;
      }
      else {
        puVar3 = (ulong *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                    (param_1,1,param_2);
        if (param_2 == 0) {
          puVar4 = (undefined8 *)_Znwm(0x18);
        }
        else {
          puVar4 = (undefined8 *)
                   _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(param_2)
          ;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar3 = (ulong)puVar4;
        *(undefined4 *)(*param_1 + 3) = 2;
        *(undefined4 *)(param_1 + 1) = 2;
        param_1 = puVar3;
      }
      goto code_r0x003ffe7d;
    }
    iVar1 = (int)param_1[1];
    if (iVar1 == *(int *)(uVar2 - 1)) {
      _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                (param_1,1,param_2);
      iVar6 = *(int *)(*param_1 + 3);
      lVar5 = *param_1 - 1;
    }
    else {
      lVar5 = uVar2 - 1;
      iVar6 = *(int *)(uVar2 + 3);
      if (iVar1 < iVar6) {
        *(int *)(param_1 + 1) = iVar1 + 1;
        param_1 = (ulong *)(lVar5 + (long)iVar1 * 8 + 8);
        goto code_r0x003ffe7d;
      }
    }
    *(int *)(lVar5 + 4) = iVar6 + 1;
    uVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar2 + 1;
    param_1 = (ulong *)(lVar5 + (long)(int)uVar2 * 8 + 8);
    if (param_2 != 0) goto code_r0x003ffe38;
code_r0x003ffec4:
    puVar4 = (undefined8 *)_Znwm(0x18);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *param_1 = (ulong)puVar4;
code_r0x003ffe7d:
  return *param_1;
}


