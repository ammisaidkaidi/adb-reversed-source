// Function: _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj
// Address: 004f22e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal11ElfMemImage14SymbolIterator6UpdateEj
               (long *param_1,int param_2)

{
  uint *puVar1;
  ushort uVar2;
  long *plVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  
  plVar3 = (long *)param_1[5];
  if (param_2 == 0 || *plVar3 != 0) {
    if (*plVar3 == 0) {
      return;
    }
    uVar5 = param_2 + (int)param_1[4];
    *(uint *)(param_1 + 4) = uVar5;
    if (*(uint *)(plVar3 + 5) <= uVar5) {
      *(uint *)(param_1 + 4) = *(uint *)(plVar3 + 5);
      return;
    }
    if ((plVar3[1] == 0) || (plVar3[2] == 0)) goto code_r0x004f244a;
    puVar1 = (uint *)(plVar3[1] + (ulong)uVar5 * 0x18);
    if ((ulong)plVar3[6] <= (ulong)*puVar1) goto code_r0x004f2477;
    puVar6 = &UNK_00162ac9;
    if (*(short *)((long)puVar1 + 6) == 0) goto code_r0x004f23d5;
    uVar5 = *(ushort *)(plVar3[2] + (ulong)uVar5 * 2) & 0x7fff;
    if ((ulong)plVar3[7] < (ulong)uVar5) goto code_r0x004f24a4;
    lVar8 = plVar3[3];
    uVar2 = *(ushort *)(lVar8 + 4);
    uVar7 = (ushort)uVar5;
    for (; (uVar2 < uVar7 && (uVar5 = *(uint *)(lVar8 + 0x10), uVar5 != 0));
        lVar8 = lVar8 + (ulong)uVar5) {
      uVar2 = *(ushort *)(lVar8 + 4 + (ulong)uVar5);
    }
    if (uVar2 != uVar7) {
code_r0x004f23d5:
      *param_1 = plVar3[4] + (ulong)*puVar1;
      param_1[1] = (long)puVar6;
      if ((ushort)(*(short *)((long)puVar1 + 6) + 0x100U) < 0x101) {
        lVar8 = *(long *)(puVar1 + 2);
code_r0x004f2410:
        param_1[2] = lVar8;
        param_1[3] = (long)puVar1;
        return;
      }
      lVar8 = *(ulong *)(puVar1 + 2) - plVar3[8];
      if ((ulong)plVar3[8] <= *(ulong *)(puVar1 + 2) && lVar8 != 0) {
        lVar8 = lVar8 + *plVar3;
        goto code_r0x004f2410;
      }
      goto code_r0x004f24d1;
    }
    if (0xfffd < (ushort)(*(short *)(lVar8 + 6) - 3U)) {
      if ((ulong)plVar3[6] <= (ulong)*(uint *)(lVar8 + 0x14)) goto code_r0x004f252b;
      puVar6 = (undefined *)((ulong)*(uint *)(lVar8 + 0x14) + plVar3[4]);
      goto code_r0x004f23d5;
    }
  }
  else {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x16f,&UNK_00183943,&UNK_00181eea,&UNK_00162ac9);
code_r0x004f244a:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x17a,&UNK_00183943,&UNK_0015b62f,&UNK_00162ac9);
code_r0x004f2477:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x6f,&UNK_00183943,&UNK_00189a99,&UNK_0016b461);
code_r0x004f24a4:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x7e,&UNK_00183943,&UNK_0015ff38,&UNK_00186b65);
code_r0x004f24d1:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x78,&UNK_00183943,&UNK_00188436,&UNK_0015b61b);
  }
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,399,&UNK_00183943,&UNK_0017a626,&UNK_00174408);
code_r0x004f252b:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017f257,0x90,&UNK_00183943,&UNK_00189a99,&UNK_0016b461);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


