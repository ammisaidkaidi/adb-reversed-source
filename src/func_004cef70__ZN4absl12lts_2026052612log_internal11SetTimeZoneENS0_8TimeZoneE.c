// Function: _ZN4absl12lts_2026052612log_internal11SetTimeZoneENS0_8TimeZoneE
// Address: 004cef70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN4absl12lts_2026052612log_internal11SetTimeZoneENS0_8TimeZoneE(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar1 = (undefined8 *)_Znwm(8);
  *puVar1 = param_1;
  puVar2 = (undefined8 *)0x0;
  LOCK();
  bVar3 = puRam0000000000a00a88 != (undefined8 *)0x0;
  if (bVar3) {
    puVar2 = puRam0000000000a00a88;
    puVar1 = puRam0000000000a00a88;
  }
  puRam0000000000a00a88 = puVar1;
  UNLOCK();
  if (bVar3) {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00183938,0x69,&UNK_00172812);
    return puRam0000000000a00a88;
  }
  return puVar2;
}


