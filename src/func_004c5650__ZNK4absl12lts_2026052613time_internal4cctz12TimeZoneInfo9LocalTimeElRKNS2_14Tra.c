// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
// Address: 004c5650
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
          (undefined8 *param_1,long param_2,long param_3,int *param_4)

{
  undefined1 auVar1 [16];
  
  auVar1 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                     (0x7b2,1,1,0,param_3 / 0x3c,param_3 % 0x3c);
  auVar1 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                     (auVar1._0_8_,(long)auVar1[8],(long)auVar1[9],(long)auVar1[10],
                      (long)auVar1[0xb] + (long)(*param_4 / 0x3c),
                      (long)(*param_4 % 0x3c) + (long)auVar1[0xc]);
  *param_1 = auVar1._0_8_;
  param_1[1] = auVar1._8_8_ & 0xffffffffff;
  *(int *)(param_1 + 2) = *param_4;
  *(char *)((long)param_1 + 0x14) = (char)param_4[10];
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    param_2 = param_2 + 0x41;
  }
  else {
    param_2 = *(long *)(param_2 + 0x50);
  }
  param_1[3] = param_2 + (ulong)*(byte *)((long)param_4 + 0x29);
  return param_1;
}


