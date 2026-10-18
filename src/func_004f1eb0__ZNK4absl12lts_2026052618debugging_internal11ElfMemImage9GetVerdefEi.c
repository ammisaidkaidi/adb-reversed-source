// Function: _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage9GetVerdefEi
// Address: 004f1eb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined *
_ZNK4absl12lts_2026052618debugging_internal11ElfMemImage9GetVerdefEi(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((-1 < (int)param_2) && ((ulong)param_2 <= *(ulong *)(param_1 + 0x38))) {
    puVar4 = *(undefined **)(param_1 + 0x18);
    uVar1 = *(ushort *)(puVar4 + 4);
    for (; (uVar1 < param_2 && (uVar2 = *(uint *)(puVar4 + 0x10), uVar2 != 0));
        puVar4 = puVar4 + uVar2) {
      uVar1 = *(ushort *)(puVar4 + (ulong)uVar2 + 4);
    }
    puVar3 = (undefined *)0x0;
    if (param_2 == uVar1) {
      puVar3 = puVar4;
    }
    return puVar3;
  }
  puVar4 = &UNK_0017f257;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,0x7e,&UNK_00183943,&UNK_0015ff38,&UNK_00186b65);
  return puVar4 + 0x14;
}


