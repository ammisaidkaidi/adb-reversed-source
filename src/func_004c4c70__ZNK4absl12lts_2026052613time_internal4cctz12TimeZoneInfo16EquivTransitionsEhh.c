// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo16EquivTransitionsEhh
// Address: 004c4c70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo16EquivTransitionsEhh
               (long param_1,byte param_2,byte param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = true;
  if (param_2 != param_3) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar3 + (ulong)((uint)param_2 * 0x30)) ==
        *(int *)(lVar3 + (ulong)((uint)param_3 * 0x30))) {
      lVar2 = (ulong)((uint)param_2 * 0x30) + lVar3;
      lVar3 = (ulong)((uint)param_3 * 0x30) + lVar3;
      if (*(char *)(lVar2 + 0x28) == *(char *)(lVar3 + 0x28)) {
        return *(char *)(lVar2 + 0x29) == *(char *)(lVar3 + 0x29);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


