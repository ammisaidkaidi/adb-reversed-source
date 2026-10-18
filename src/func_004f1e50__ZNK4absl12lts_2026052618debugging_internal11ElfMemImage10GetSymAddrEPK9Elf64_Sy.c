// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage10GetSymAddrEPK9Elf64_Sym
// Address: 004f1e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined *
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage10GetSymAddrEPK9Elf64_Sym
          (long *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  
  if ((ushort)(*(short *)(param_2 + 6) + 0x100U) < 0x101) {
    return *(undefined **)(param_2 + 8);
  }
  lVar3 = *(ulong *)(param_2 + 8) - param_1[8];
  if (*(ulong *)(param_2 + 8) < (ulong)param_1[8] || lVar3 == 0) {
    puVar6 = &UNK_0017f257;
    lVar3 = 3;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x78,&UNK_00183943,&UNK_00188436,&UNK_0015b61b);
    uVar5 = (uint)puVar6;
    if ((-1 < (int)uVar5) && (((ulong)puVar6 & 0xffffffff) <= *(ulong *)(lVar3 + 0x38))) {
      puVar6 = *(undefined **)(lVar3 + 0x18);
      uVar1 = *(ushort *)(puVar6 + 4);
      for (; (uVar1 < uVar5 && (uVar2 = *(uint *)(puVar6 + 0x10), uVar2 != 0));
          puVar6 = puVar6 + uVar2) {
        uVar1 = *(ushort *)(puVar6 + (ulong)uVar2 + 4);
      }
      puVar4 = (undefined *)0x0;
      if (uVar5 == uVar1) {
        puVar4 = puVar6;
      }
      return puVar4;
    }
    puVar6 = &UNK_0017f257;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x7e,&UNK_00183943,&UNK_0015ff38,&UNK_00186b65);
    return puVar6 + 0x14;
  }
  return (undefined *)(lVar3 + *param_1);
}


