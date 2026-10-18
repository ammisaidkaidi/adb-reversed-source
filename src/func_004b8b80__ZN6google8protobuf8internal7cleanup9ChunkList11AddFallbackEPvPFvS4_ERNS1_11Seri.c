// Function: _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
// Address: 004b8b80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
               (long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(*(long *)(param_4 + 0x40) + 8) & 0xfffffffffffffff8;
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 8);
    uVar3 = lVar1 * 2;
    uVar6 = 0x1000;
    if (uVar3 < 0x1000) {
      uVar6 = uVar3;
    }
    if (lVar1 != 0) goto joined_r0x004b8bdc;
  }
  uVar6 = 0x40;
joined_r0x004b8bdc:
  if ((uVar4 == 0) || (pcVar2 = *(code **)(uVar4 + 0x10), pcVar2 == (code *)0x0)) {
    plVar5 = (long *)_Znwm(uVar6);
  }
  else {
    plVar5 = (long *)(*pcVar2)(uVar6);
  }
  *(long *)(param_4 + 0x28) = *(long *)(param_4 + 0x28) + uVar6;
  *plVar5 = *param_1;
  plVar5[1] = uVar6;
  *param_1 = (long)plVar5;
  param_1[3] = (long)(plVar5 + 2);
  param_1[2] = (long)plVar5 + (uVar6 - 0x10 & 0xfffffffffffffff0) + 0x10;
  param_1[1] = (long)(plVar5 + 4);
  plVar5[2] = param_2;
  plVar5[3] = param_3;
  return;
}


