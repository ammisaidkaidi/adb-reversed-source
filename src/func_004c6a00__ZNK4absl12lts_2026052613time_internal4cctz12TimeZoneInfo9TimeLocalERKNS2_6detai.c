// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9TimeLocalERKNS2_6detail10civil_timeINS4_10second_tagEEEl
// Address: 004c6a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9TimeLocalERKNS2_6detail10civil_timeINS4_10second_tagEEEl
          (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*param_2 + 0x18))();
  if (param_4 < 0x2b8d7bd2) {
    lVar4 = param_4 * 0x2f0605980;
    lVar1 = param_4 * -0x2f0605980 + 0x7fffffffffffffff;
    lVar3 = param_1[1] + lVar4;
    if (lVar1 < (long)param_1[1]) {
      lVar3 = 0x7fffffffffffffff;
    }
    lVar2 = param_1[2] + lVar4;
    if (lVar1 < (long)param_1[2]) {
      lVar2 = 0x7fffffffffffffff;
    }
    param_1[1] = lVar3;
    param_1[2] = lVar2;
    lVar4 = lVar4 + param_1[3];
    if (lVar1 < (long)param_1[3]) {
      lVar4 = 0x7fffffffffffffff;
    }
    param_1[3] = lVar4;
  }
  else {
    param_1[3] = 0x7fffffffffffffff;
    param_1[2] = 0x7fffffffffffffff;
    param_1[1] = 0x7fffffffffffffff;
  }
  return param_1;
}


