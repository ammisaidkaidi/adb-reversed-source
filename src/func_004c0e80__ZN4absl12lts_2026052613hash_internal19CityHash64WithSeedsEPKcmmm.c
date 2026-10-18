// Function: _ZN4absl12lts_2026052613hash_internal19CityHash64WithSeedsEPKcmmm
// Address: 004c0e80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613hash_internal19CityHash64WithSeedsEPKcmmm
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = _ZN4absl12lts_2026052613hash_internal10CityHash64EPKcm();
  uVar2 = (lVar1 - param_3 ^ param_4) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ param_4 ^ uVar2) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}


