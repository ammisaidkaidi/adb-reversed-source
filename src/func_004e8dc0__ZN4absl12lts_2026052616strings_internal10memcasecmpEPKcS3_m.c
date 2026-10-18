// Function: _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m
// Address: 004e8dc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m
              (long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      bVar4 = *(byte *)(param_1 + lVar3);
      bVar1 = *(byte *)(param_2 + lVar3);
      if (bVar4 != bVar1) {
        bVar2 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar2 = bVar4;
        }
        bVar4 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if ((uint)bVar2 - (uint)bVar4 != 0) {
          return (uint)bVar2 - (uint)bVar4;
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != lVar3);
  }
  return 0;
}


