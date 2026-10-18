// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout25MakeClockAbsoluteTimespecEi
// Address: 004d44b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004cd18e) */
/* WARNING: Removing unreachable block (ram,0x004cd183) */
/* WARNING: Removing unreachable block (ram,0x004cd1bb) */
/* WARNING: Removing unreachable block (ram,0x004cd199) */
/* WARNING: Removing unreachable block (ram,0x004cd1ad) */
/* WARNING: Removing unreachable block (ram,0x004cd1b1) */
/* WARNING: Removing unreachable block (ram,0x004cd1b5) */
/* WARNING: Removing unreachable block (ram,0x004cd1b9) */

ulong _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout25MakeClockAbsoluteTimespecEi
                (ulong *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [12];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *param_1;
  if (uVar5 == 0xffffffffffffffff) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
      return 0x225c17d04;
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      lVar3 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
    }
    else {
      lVar3 = _ZNSt3__16chrono12steady_clock3nowEv();
    }
    uStack_48 = 0;
    uStack_40 = 0;
    iVar2 = func_0x0099c650(param_2,&uStack_48);
    if (iVar2 != 0) goto code_r0x004d45ee;
    lVar3 = (uVar5 >> 1) - lVar3;
    auStack_38 = _ZN4absl12lts_2026052620DurationFromTimespecE8timespec(uStack_48,uStack_40);
    lVar6 = lVar3 % 1000000000;
    iVar2 = (int)lVar6 * 4 + -0x1194d800;
    if (-1 < lVar6) {
      iVar2 = (int)lVar6 * 4;
    }
    plVar4 = (long *)_ZN4absl12lts_202605268DurationpLES1_
                               (auStack_38,(lVar6 >> 0x3d) + lVar3 / 1000000000,iVar2);
    lVar3 = *plVar4;
    iVar2 = (int)plVar4[1];
    bVar1 = lVar3 < 1;
    if (lVar3 == 0) {
      bVar1 = iVar2 == 0;
    }
    if (bVar1) {
      lVar3 = 0;
      iVar2 = 4;
    }
    uVar5 = _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE(lVar3,iVar2);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
      return uVar5;
    }
  }
  func_0x0099bd00();
code_r0x004d45ee:
  puVar8 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00159af3,0xa0,&UNK_00183943,&UNK_00166458,&UNK_0017285d);
  uVar5 = *puVar8;
  uVar7 = 0xffffffffffffffff;
  if (uVar5 != 0xffffffffffffffff) {
    if ((uVar5 & 1) == 0) {
      lVar3 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
    }
    else {
      lVar3 = _ZNSt3__16chrono12steady_clock3nowEv();
    }
    lVar3 = (uVar5 >> 1) - lVar3;
    if (lVar3 < 0x7ffffffffff0bdc0) {
      lVar6 = 0;
      if (0 < lVar3) {
        lVar6 = lVar3;
      }
      uVar7 = (lVar6 + 999999U) / 1000000;
    }
  }
  return uVar7;
}


