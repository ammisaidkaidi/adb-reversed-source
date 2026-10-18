// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_10TransitionE
// Address: 004c6920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_10TransitionE
          (undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(param_2 + 0x20);
  uVar3 = (ulong)((uint)*(byte *)(param_4 + 1) * 0x30);
  lVar2 = param_4[3];
  auVar4 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                     (param_4[2],(long)(char)lVar2,(long)(char)((ulong)lVar2 >> 8),
                      (long)(char)((ulong)lVar2 >> 0x10),
                      (long)(char)((ulong)lVar2 >> 0x18) + (param_3 - *param_4) / 0x3c,
                      (param_3 - *param_4) % 0x3c + (long)(char)((ulong)lVar2 >> 0x20));
  *param_1 = auVar4._0_8_;
  param_1[1] = auVar4._8_8_ & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + uVar3);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(lVar1 + 0x28 + uVar3);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    param_2 = param_2 + 0x41;
  }
  else {
    param_2 = *(long *)(param_2 + 0x50);
  }
  param_1[3] = param_2 + (ulong)*(byte *)(lVar1 + 0x29 + uVar3);
  return param_1;
}


