// Function: _ZN4absl12lts_2026052613hash_internal42CombineLargeContiguousImplOn32BitLengthGt8EmPKhm
// Address: 004c0120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052613hash_internal42CombineLargeContiguousImplOn32BitLengthGt8EmPKhm
                (ulong param_1,uint *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0x400 < param_3) {
    for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
      uVar4 = _ZN4absl12lts_2026052613hash_internal10CityHash32EPKcm(param_2,0x400);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar4 ^ param_1 + 0x400;
      param_1 = SUB168(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                SUB168(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),0);
      param_2 = param_2 + 0x100;
    }
    if (param_3 != 0) {
      if (param_3 < 9) {
        if (param_3 < 4) {
          uVar6 = (ulong)*(byte *)((long)param_2 + (param_3 - 1)) | (ulong)(byte)*param_2 << 0x10;
          uVar5 = (ulong)*(byte *)((long)param_2 + (param_3 >> 1)) << 8;
        }
        else {
          uVar6 = (ulong)*param_2 << 0x20;
          uVar5 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
        }
        uVar5 = *(ulong *)(_ZN4absl12lts_2026052613hash_internal17kStaticRandomDataE + param_3) ^
                (uVar5 | uVar6) ^ param_1;
      }
      else {
        uVar4 = _ZN4absl12lts_2026052613hash_internal10CityHash32EPKcm(param_2,param_3);
        uVar5 = (ulong)uVar4 ^ param_1 + param_3;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      param_1 = SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),0);
    }
    return param_1;
  }
  uVar4 = _ZN4absl12lts_2026052613hash_internal10CityHash32EPKcm(param_2,param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)uVar4 ^ param_1 + param_3;
  return SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),0) ^
         SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8);
}


