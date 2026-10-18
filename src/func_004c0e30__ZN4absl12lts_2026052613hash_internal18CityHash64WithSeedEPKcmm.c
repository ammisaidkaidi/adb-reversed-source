// Function: _ZN4absl12lts_2026052613hash_internal18CityHash64WithSeedEPKcmm
// Address: 004c0e30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613hash_internal18CityHash64WithSeedEPKcmm
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = _ZN4absl12lts_2026052613hash_internal10CityHash64EPKcm();
  uVar2 = (lVar1 + 0x651e95c4d06fbfb1U ^ param_3) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ param_3 ^ uVar2) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}


