// Function: _ZN4absl12lts_2026052619GetCurrentTimeNanosEv
// Address: 004d2070
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052619GetCurrentTimeNanosEv(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  long lStack_80;
  uint uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_28;
  long lStack_20;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_28 = 0;
  lStack_20 = 0;
  iVar2 = func_0x0099c650(0,&lStack_28);
  if (iVar2 == 0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
      return lStack_28 * 1000000000 + lStack_20;
    }
    func_0x0099bd00();
  }
  puVar5 = &UNK_0016b3fa;
  lVar6 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016b3fa,0x11,&UNK_00183943,&UNK_00157d0b,&UNK_00186acf);
  uStack_78 = (uint)puVar5;
  uVar4 = (ulong)puVar5 & 0xffffffff;
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_80 = lVar6;
  do {
    lVar6 = lStack_80;
    if (lStack_80 == 0) {
      if ((int)uVar4 == 0) {
code_r0x004d219b:
        if (*(long *)(in_FS_OFFSET + 0x28) != lStack_60) {
          func_0x0099bd00();
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        return *(long *)(in_FS_OFFSET + 0x28);
      }
    }
    else if (lStack_80 < 1) goto code_r0x004d219b;
    if (lStack_80 == 0x7fffffffffffffff) {
      uVar4 = 0;
    }
    auVar7 = _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE(lStack_80,uVar4);
    auStack_70 = auVar7;
    do {
      iVar2 = func_0x0099c640(auStack_70,auStack_70);
      if (iVar2 == 0) break;
      piVar3 = (int *)func_0x0099bce0();
    } while (*piVar3 == 4);
    _ZN4absl12lts_202605268DurationmIES1_(&lStack_80,lVar6,uVar4);
    uVar4 = (ulong)uStack_78;
  } while( true );
}


