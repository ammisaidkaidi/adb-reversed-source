// Function: _ZN4absl12lts_2026052618debugging_internal11VDSOSupport7SetBaseEPKv
// Address: 004f1930
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052618debugging_internal11VDSOSupport7SetBaseEPKv
          (undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *extraout_RDX;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  
  uVar5 = _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E;
  if (param_2 != &_ZN4absl12lts_2026052618debugging_internal11ElfMemImage20kInvalidBaseSentinelE) {
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E = param_2;
    _ZN4absl12lts_2026052618debugging_internal11ElfMemImage4InitEPKv();
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E =
         _ZN4absl12lts_2026052618debugging_internal11VDSOSupport13InitAndGetCPUEPjPvS4_;
    return uVar5;
  }
  puVar2 = &UNK_0016f1d8;
  lVar3 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016f1d8,0x94,&UNK_00183943,&UNK_00169adc,&UNK_00187cb2);
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_60 = 0;
  lStack_58 = 0;
  puStack_70 = (undefined *)0x0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar5 = 0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj(&uStack_80,lVar3,0)
  ;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj(&uStack_80,0);
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar4 = &uStack_b0;
  _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIteratorC2EPKvj
            (puVar4,lVar3,*(undefined4 *)(lVar3 + 0x28));
  if ((lStack_58 != lStack_88) || ((int)uStack_60 != (int)uStack_90)) {
    do {
      if (puStack_70 <= puVar2) {
        if (puVar2 < puStack_70 + *(long *)(lStack_68 + 0x10)) {
          uVar5 = 1;
          if (extraout_RDX == (undefined4 *)0x0) goto code_r0x004f2279;
          bVar1 = *(byte *)(lStack_68 + 4);
          *(undefined **)(extraout_RDX + 4) = puStack_70;
          *(long *)(extraout_RDX + 6) = lStack_68;
          *extraout_RDX = (undefined4)uStack_80;
          extraout_RDX[1] = uStack_80._4_4_;
          extraout_RDX[2] = (undefined4)uStack_78;
          extraout_RDX[3] = uStack_78._4_4_;
          if ((bVar1 & 0xf0) == 0x10) goto code_r0x004f2279;
        }
      }
      lVar3 = 1;
      puVar4 = &uStack_80;
      _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj();
    } while ((lStack_58 != lStack_88) || ((int)uStack_60 != (int)uStack_90));
    uVar5 = 0;
  }
code_r0x004f2279:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return uVar5;
  }
  auVar6 = func_0x0099bd00();
  *(int *)(puVar4 + 4) = auVar6._8_4_;
  puVar4[5] = lVar3;
  return auVar6._0_8_;
}


