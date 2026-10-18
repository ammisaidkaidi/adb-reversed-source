// Function: _ZN4absl12lts_2026052612ToUnixMillisENS0_4TimeE
// Address: 004c1c40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052612ToUnixMillisENS0_4TimeE(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long lStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x35 == 0) {
    uVar2 = (ulong)param_2 / 4000000 + param_1 * 1000;
  }
  else {
    uStack_18 = 0;
    lStack_20 = 0;
    uVar1 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                      (param_1,param_2,0,&UNK_003d0900,&lStack_20);
    uVar2 = 0x8000000000000000;
    if (!SBORROW8(0,uVar1)) {
      uVar2 = uVar1 - 1;
    }
    if (-1 < lStack_20) {
      uVar2 = uVar1;
    }
    if (0 < (long)uVar1) {
      uVar2 = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar2;
  }
  func_0x0099bd00();
  return param_1;
}


