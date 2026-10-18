// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage21LookupSymbolByAddressEPKvPNS2_10SymbolInfoE
// Address: 004f2190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage21LookupSymbolByAddressEPKvPNS2_10SymbolInfoE
          (long param_1,ulong param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
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
  uStack_60 = 0;
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
      if (uStack_58 <= param_2) {
        if (param_2 < uStack_58 + *(long *)(lStack_50 + 0x10)) {
          uVar3 = 1;
          if (param_3 == (undefined4 *)0x0) goto code_r0x004f2279;
          bVar1 = *(byte *)(lStack_50 + 4);
          *(ulong *)(param_3 + 4) = uStack_58;
          *(long *)(param_3 + 6) = lStack_50;
          *param_3 = (undefined4)uStack_68;
          param_3[1] = uStack_68._4_4_;
          param_3[2] = (undefined4)uStack_60;
          param_3[3] = uStack_60._4_4_;
          if ((bVar1 & 0xf0) == 0x10) goto code_r0x004f2279;
        }
      }
      param_1 = 1;
      puVar2 = &uStack_68;
      _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj();
    } while ((lStack_40 != lStack_70) || ((int)uStack_48 != (int)uStack_78));
    uVar3 = 0;
  }
code_r0x004f2279:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar3;
  }
  auVar4 = func_0x0099bd00();
  *(int *)(puVar2 + 4) = auVar4._8_4_;
  puVar2[5] = param_1;
  return auVar4._0_8_;
}


