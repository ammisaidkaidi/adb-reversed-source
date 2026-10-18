// Function: _ZN4absl12lts_2026052612ToUnixMicrosENS0_4TimeE
// Address: 004c1ba0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052612ToUnixMicrosENS0_4TimeE(ulong param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long lStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x2b == 0) {
    uVar3 = (ulong)param_2 / 4000 + param_1 * 1000000;
  }
  else {
    uStack_18 = 0;
    lStack_20 = 0;
    uVar2 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                      (param_1,param_2,0,4000,&lStack_20);
    uVar3 = 0x8000000000000000;
    if (!SBORROW8(0,uVar2)) {
      uVar3 = uVar2 - 1;
    }
    if (-1 < lStack_20) {
      uVar3 = uVar2;
    }
    if (0 < (long)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_10) {
    func_0x0099bd00();
    lVar1 = *(long *)(in_FS_OFFSET + 0x28);
    if (param_1 >> 0x35 == 0) {
      uVar3 = (ulong)param_2 / 4000000 + param_1 * 1000;
    }
    else {
      uVar3 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) != lVar1) {
      func_0x0099bd00();
      return param_1;
    }
    return uVar3;
  }
  return uVar3;
}


