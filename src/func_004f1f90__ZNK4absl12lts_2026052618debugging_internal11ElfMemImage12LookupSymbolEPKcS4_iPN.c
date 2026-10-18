// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage12LookupSymbolEPKcS4_iPNS2_10SymbolInfoE
// Address: 004f1f90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage12LookupSymbolEPKcS4_iPNS2_10SymbolInfoE
          (long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = (undefined8 *)0x0;
  uVar3 = 0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj
            (&uStack_68,param_1,0);
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(&uStack_68,0);
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar2 = &uStack_98;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj
            (puVar2,param_1,*(undefined4 *)(param_1 + 0x28));
  if ((lStack_40 != lStack_70) || ((int)uStack_48 != (int)uStack_78)) {
    do {
      iVar1 = func_0x0099bdd0(uStack_68,param_2);
      if (iVar1 == 0) {
        puVar2 = uStack_60;
        iVar1 = func_0x0099bdd0(uStack_60,param_3);
        if ((iVar1 == 0) && (param_4 == (*(byte *)(lStack_50 + 4) & 0xf))) {
          uVar3 = CONCAT71((int7)((ulong)&uStack_68 >> 8),1);
          if (param_5 != (undefined4 *)0x0) {
            *(undefined8 *)(param_5 + 4) = uStack_58;
            *(long *)(param_5 + 6) = lStack_50;
            *param_5 = (undefined4)uStack_68;
            param_5[1] = uStack_68._4_4_;
            param_5[2] = (undefined4)uStack_60;
            param_5[3] = uStack_60._4_4_;
          }
          goto code_r0x004f2092;
        }
      }
      puVar2 = &uStack_68;
      _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(&uStack_68,1)
      ;
    } while ((lStack_40 != lStack_70) || ((int)uStack_48 != (int)uStack_78));
    uVar3 = 0;
  }
code_r0x004f2092:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (undefined8 *)(uVar3 & 0xffffffff);
  }
  func_0x0099bd00();
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj();
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(puVar2,0);
  return puVar2;
}


