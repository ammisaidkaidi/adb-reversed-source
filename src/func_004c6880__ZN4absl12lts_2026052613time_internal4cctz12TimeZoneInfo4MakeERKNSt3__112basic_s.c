// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// Address: 004c6880
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
          (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)_Znwm(0xa8);
  *plVar2 = 0x99fd50;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  *param_1 = plVar2;
  cVar1 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
                    (plVar2,param_2);
  if (cVar1 == '\0') {
    *param_1 = 0;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return param_1;
}


