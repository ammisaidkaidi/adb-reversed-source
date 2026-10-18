// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage9GetVerstrEj
// Address: 004f1f50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage9GetVerstrEj(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 extraout_RDX;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  if ((param_2 & 0xffffffff) < *(ulong *)(param_1 + 0x30)) {
    return (undefined8 *)((param_2 & 0xffffffff) + *(long *)(param_1 + 0x20));
  }
  puVar3 = &UNK_0017f257;
  uVar2 = 0x183943;
  puVar6 = (undefined4 *)&UNK_00189a99;
  lVar4 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,0x90,&UNK_00183943,&UNK_00189a99,&UNK_0016b461);
  lStack_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = (undefined8 *)0x0;
  uVar7 = 0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj(&uStack_70,lVar4,0)
  ;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(&uStack_70,0);
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar5 = &uStack_a0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj
            (puVar5,lVar4,*(undefined4 *)(lVar4 + 0x28));
  if ((lStack_48 != lStack_78) || ((int)uStack_50 != (int)uStack_80)) {
    do {
      iVar1 = func_0x0099bdd0(uStack_70,puVar3);
      if (iVar1 == 0) {
        puVar5 = uStack_68;
        iVar1 = func_0x0099bdd0(uStack_68,extraout_RDX);
        if ((iVar1 == 0) && (uVar2 == (*(byte *)(lStack_58 + 4) & 0xf))) {
          uVar7 = CONCAT71((int7)((ulong)&uStack_70 >> 8),1);
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar6 + 4) = uStack_60;
            *(long *)(puVar6 + 6) = lStack_58;
            *puVar6 = (undefined4)uStack_70;
            puVar6[1] = uStack_70._4_4_;
            puVar6[2] = (undefined4)uStack_68;
            puVar6[3] = uStack_68._4_4_;
          }
          goto code_r0x004f2092;
        }
      }
      puVar5 = &uStack_70;
      _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(&uStack_70,1)
      ;
    } while ((lStack_48 != lStack_78) || ((int)uStack_50 != (int)uStack_80));
    uVar7 = 0;
  }
code_r0x004f2092:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_40) {
    return (undefined8 *)(uVar7 & 0xffffffff);
  }
  func_0x0099bd00();
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj();
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(puVar5,0);
  return puVar5;
}


