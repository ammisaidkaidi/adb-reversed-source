// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo3UTCEv
// Address: 004c67e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo3UTCEv(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)_Znwm(0xa8);
  *puVar2 = 0x99fd50;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  *param_1 = puVar2;
  uStack_20 = 0;
  puVar4 = &uStack_20;
  _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ResetToBuiltinUTCERKNSt3__16chrono8durationIlNS4_5ratioILl1ELl1EEEEE
            (puVar2,puVar4);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return param_1;
  }
  func_0x0099bd00();
  plVar3 = (long *)_Znwm(0xa8);
  *plVar3 = 0x99fd50;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *puVar2 = plVar3;
  cVar1 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
                    (plVar3,puVar4);
  if (cVar1 == '\0') {
    *puVar2 = 0;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return puVar2;
}


