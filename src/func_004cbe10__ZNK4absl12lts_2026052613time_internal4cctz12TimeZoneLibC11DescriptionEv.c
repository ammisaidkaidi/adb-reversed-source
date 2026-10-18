// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC11DescriptionEv
// Address: 004cbe10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char * _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC11DescriptionEv
                 (char *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_2 + 8) != '\0';
  lVar1 = 3;
  if (bVar3) {
    lVar1 = 9;
  }
  puVar2 = &UNK_00178e4b;
  if (bVar3) {
    puVar2 = &UNK_001882f6;
  }
  *param_1 = (char)lVar1 * '\x02';
  func_0x0099bda0(param_1 + 1,puVar2,lVar1);
  param_1[lVar1 + 1] = '\0';
  return param_1;
}


