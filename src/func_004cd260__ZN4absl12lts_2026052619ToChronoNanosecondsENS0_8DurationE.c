// Function: _ZN4absl12lts_2026052619ToChronoNanosecondsENS0_8DurationE
// Address: 004cd260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052619ToChronoNanosecondsENS0_8DurationE(ulong param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_1c [12];
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_1;
  if (param_2 == 0xffffffff) {
    lVar1 = -0x8000000000000000;
    if (-1 < (long)param_1) {
      lVar1 = 0x7fffffffffffffff;
    }
  }
  else if ((param_1 >> 0x21 == 0) || (param_1 < 0x225c17d00)) {
    lVar1 = (ulong)(param_2 >> 2) + param_1 * 1000000000;
  }
  else {
    uVar4 = 1;
    lVar1 = func_0x004ce520(1,param_1,param_2,0,4,auStack_1c);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return lVar1;
  }
  func_0x0099bd00();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = uVar4;
  if ((int)param_1 == -1) {
    lVar2 = -0x8000000000000000;
    if (-1 < (long)uVar4) {
      lVar2 = 0x7fffffffffffffff;
    }
  }
  else if ((uVar4 >> 0x2b == 0) || (uVar4 < 0x8637bd04b56)) {
    lVar2 = (param_1 & 0xffffffff) / 4000 + uVar4 * 1000000;
  }
  else {
    uVar5 = 1;
    lVar2 = func_0x004ce520();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lVar1) {
    func_0x0099bd00();
    lVar1 = *(long *)(in_FS_OFFSET + 0x28);
    uVar6 = uVar5;
    if ((int)uVar4 == -1) {
      lVar2 = -0x8000000000000000;
      if (-1 < (long)uVar5) {
        lVar2 = 0x7fffffffffffffff;
      }
    }
    else if ((uVar5 >> 0x35 == 0) || (uVar5 < 0x20c49ba5a64af7)) {
      lVar2 = (uVar4 & 0xffffffff) / 4000000 + uVar5 * 1000;
    }
    else {
      uVar6 = 1;
      lVar2 = func_0x004ce520();
    }
    iVar3 = (int)uVar5;
    if (*(long *)(in_FS_OFFSET + 0x28) != lVar1) {
      func_0x0099bd00();
      if (iVar3 == -1) {
        lVar1 = -0x8000000000000000;
        if (-1 < (long)uVar6) {
          lVar1 = 0x7fffffffffffffff;
        }
        return lVar1;
      }
      return (iVar3 != 0 && (long)uVar6 < 0) + uVar6;
    }
    return lVar2;
  }
  return lVar2;
}


