// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo14PrevTransitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS2_9time_zone16civil_transitionE
// Address: 004c80b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo14PrevTransitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS2_9time_zone16civil_transitionE
          (long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar1 = *(long **)(param_1 + 8);
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar1 != plVar9) {
    plVar7 = plVar1 + 6;
    if (-0x800000000000000 < *plVar1) {
      plVar7 = plVar1;
    }
    lVar2 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lVar2 = SUB168(SEXT816(lVar2) * SEXT816(-0x431bde82d7b634db),8);
    lVar10 = ((lVar2 >> 0x12) - (lVar2 >> 0x3f)) + *param_2;
    lVar2 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    if (lVar2 / 1000000 + lVar10 != *param_2) {
      if (lVar10 == 0x7fffffffffffffff) {
joined_r0x004c8154:
        if (plVar9 == plVar7) {
          return 0;
        }
        lVar2 = plVar9[-1];
        auVar11 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                            (plVar9[-2],(long)(char)lVar2,(long)(char)((ulong)lVar2 >> 8),
                             (long)(char)((ulong)lVar2 >> 0x10),(long)(char)((ulong)lVar2 >> 0x18),
                             (long)(char)((ulong)lVar2 >> 0x20) + 1);
        *param_3 = auVar11._0_8_;
        param_3[1] = auVar11._8_8_ & 0xffffffffff;
        lVar2 = plVar9[-3];
        param_3[2] = plVar9[-4];
        param_3[3] = lVar2;
        return 1;
      }
      lVar10 = lVar10 + 1;
    }
    if ((long)plVar9 - (long)plVar7 != 0) {
      uVar5 = ((long)plVar9 - (long)plVar7 >> 4) * -0x5555555555555555;
      plVar9 = plVar7;
      do {
        uVar3 = uVar5 >> 1;
        uVar4 = uVar3;
        if (plVar9[uVar3 * 6] < lVar10) {
          uVar4 = ~uVar3 + uVar5;
          plVar9 = plVar9 + uVar3 * 6 + 6;
        }
        uVar5 = uVar4;
      } while (uVar4 != 0);
      if (plVar9 != plVar7) {
        lVar2 = *(long *)(param_1 + 0x20);
        do {
          plVar1 = plVar9 + -6;
          pbVar6 = (byte *)(plVar9 + -0xb);
          if (plVar1 == plVar7) {
            pbVar6 = (byte *)(param_1 + 0x38);
          }
          if (*pbVar6 != *(byte *)(plVar9 + -5)) {
            uVar5 = (ulong)((uint)*pbVar6 * 0x30);
            uVar4 = (ulong)((uint)*(byte *)(plVar9 + -5) * 0x30);
            if (*(int *)(lVar2 + uVar5) != *(int *)(lVar2 + uVar4)) goto joined_r0x004c8154;
            lVar10 = uVar5 + lVar2;
            lVar8 = uVar4 + lVar2;
            if ((*(char *)(lVar10 + 0x28) != *(char *)(lVar8 + 0x28)) ||
               (*(char *)(lVar10 + 0x29) != *(char *)(lVar8 + 0x29))) goto joined_r0x004c8154;
          }
          plVar9 = plVar1;
        } while (plVar1 != plVar7);
      }
    }
  }
  return 0;
}


