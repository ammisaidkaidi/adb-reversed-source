// Function: _ZN4absl12lts_2026052620ToChronoMicrosecondsENS0_8DurationE
// Address: 004cd300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052620ToChronoMicrosecondsENS0_8DurationE(ulong param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_1;
  if (param_2 == 0xffffffff) {
    lVar1 = -0x8000000000000000;
    if (-1 < (long)param_1) {
      lVar1 = 0x7fffffffffffffff;
    }
  }
  else if ((param_1 >> 0x2b == 0) || (param_1 < 0x8637bd04b56)) {
    lVar1 = (ulong)param_2 / 4000 + param_1 * 1000000;
  }
  else {
    uVar4 = 1;
    lVar1 = func_0x004ce520();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar2) {
    return lVar1;
  }
  func_0x0099bd00();
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = uVar4;
  if ((int)param_1 == -1) {
    lVar1 = -0x8000000000000000;
    if (-1 < (long)uVar4) {
      lVar1 = 0x7fffffffffffffff;
    }
  }
  else if ((uVar4 >> 0x35 == 0) || (uVar4 < 0x20c49ba5a64af7)) {
    lVar1 = (param_1 & 0xffffffff) / 4000000 + uVar4 * 1000;
  }
  else {
    uVar5 = 1;
    lVar1 = func_0x004ce520();
  }
  iVar3 = (int)uVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) != lVar2) {
    func_0x0099bd00();
    if (iVar3 == -1) {
      lVar2 = -0x8000000000000000;
      if (-1 < (long)uVar5) {
        lVar2 = 0x7fffffffffffffff;
      }
      return lVar2;
    }
    return (iVar3 != 0 && (long)uVar5 < 0) + uVar5;
  }
  return lVar1;
}


