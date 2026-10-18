// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage7GetPhdrEi
// Address: 004f1db0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined *
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage7GetPhdrEi(long *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  if ((-1 < (int)param_2) && (lVar6 = *param_1, param_2 < *(ushort *)(lVar6 + 0x38))) {
    return (undefined *)
           (lVar6 + *(long *)(lVar6 + 0x20) + (ulong)param_2 * (ulong)*(ushort *)(lVar6 + 0x36));
  }
  puVar5 = &UNK_0017f257;
  lVar6 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,0x69,&UNK_00183943,&UNK_00184ece,&UNK_00186b65);
  if (((ulong)puVar5 & 0xffffffff) < *(ulong *)(lVar6 + 0x30)) {
    return (undefined *)(((ulong)puVar5 & 0xffffffff) + *(long *)(lVar6 + 0x20));
  }
  puVar5 = &UNK_0017f257;
  plVar7 = (long *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,0x6f,&UNK_00183943,&UNK_00189a99,&UNK_0016b461);
  if (0x100 < (ushort)(*(short *)(puVar5 + 6) + 0x100U)) {
    lVar6 = *(ulong *)(puVar5 + 8) - plVar7[8];
    if ((ulong)plVar7[8] <= *(ulong *)(puVar5 + 8) && lVar6 != 0) {
      return (undefined *)(lVar6 + *plVar7);
    }
    puVar5 = &UNK_0017f257;
    lVar6 = 3;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x78,&UNK_00183943,&UNK_00188436,&UNK_0015b61b);
    uVar4 = (uint)puVar5;
    if ((-1 < (int)uVar4) && (((ulong)puVar5 & 0xffffffff) <= *(ulong *)(lVar6 + 0x38))) {
      puVar5 = *(undefined **)(lVar6 + 0x18);
      uVar1 = *(ushort *)(puVar5 + 4);
      for (; (uVar1 < uVar4 && (uVar2 = *(uint *)(puVar5 + 0x10), uVar2 != 0));
          puVar5 = puVar5 + uVar2) {
        uVar1 = *(ushort *)(puVar5 + (ulong)uVar2 + 4);
      }
      puVar3 = (undefined *)0x0;
      if (uVar4 == uVar1) {
        puVar3 = puVar5;
      }
      return puVar3;
    }
    puVar5 = &UNK_0017f257;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x7e,&UNK_00183943,&UNK_0015ff38,&UNK_00186b65);
    return puVar5 + 0x14;
  }
  return *(undefined **)(puVar5 + 8);
}


