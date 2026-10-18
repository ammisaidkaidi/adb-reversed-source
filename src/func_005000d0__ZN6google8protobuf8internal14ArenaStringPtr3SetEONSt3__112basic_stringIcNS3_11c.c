// Function: _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
// Address: 005000d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal14ArenaStringPtr3SetEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
               (ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if ((*param_1 & 3) == 0) {
    if (param_3 == 0) {
      puVar3 = (ulong *)_Znwm(0x18);
      uVar2 = 2;
    }
    else {
      puVar3 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                  (param_3);
      uVar2 = 3;
    }
    puVar3[2] = param_2[2];
    uVar1 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_1 = uVar2 | (ulong)puVar3;
  }
  else {
    puVar3 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    if ((*puVar3 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar3[2],*puVar3 & 0xfffffffffffffffe);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    puVar3[2] = param_2[2];
    uVar2 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar2;
    *(undefined2 *)param_2 = 0;
  }
  return;
}


