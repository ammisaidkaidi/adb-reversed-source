// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC8MakeTimeERKNS2_6detail10civil_timeINS4_10second_tagEEE
// Address: 004cb640
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined4 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC8MakeTimeERKNS2_6detail10civil_timeINS4_10second_tagEEE
          (undefined4 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong extraout_RDX;
  ulong *puVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  long lStack_110;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long alStack_80 [9];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = param_3;
  if (*(char *)(param_2 + 8) == '\0') {
    uVar10 = 0x8000000000000000;
    if (cRam0000000000a00a20 == '\0') goto code_r0x004cbbdb;
    goto code_r0x004cb6b7;
  }
  uVar10 = *param_3;
  if ((long)uVar10 < 0) {
    if (0xffffffff8000076b < uVar10) goto code_r0x004cb849;
    *param_1 = 0;
    uVar4 = 0x8000000000000000;
  }
  else if (uVar10 >> 2 < 0x200001db) {
code_r0x004cb849:
    lStack_88 = 0;
    lStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    cVar2 = func_0x004cbcf0(param_3,0,&lStack_88,auStack_c8);
    if (cVar2 != '\0') {
      cVar2 = func_0x004cbcf0(param_3,1,&lStack_90,auStack_100);
      lVar9 = lStack_88;
      if (cVar2 != '\0') {
        iVar3 = (int)uStack_a8;
        if ((int)uStack_a8 == (int)uStack_e0) {
          if ((int)uStack_a8 != 0) {
            lVar9 = lStack_90;
          }
          lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
          uVar10 = lVar5 / 1000000 + lVar9;
          goto code_r0x004cb90e;
        }
        lVar5 = lStack_a0;
        if (lStack_88 < lStack_90) {
          lStack_88 = lStack_90;
          lStack_90 = lVar9;
          lVar5 = lStack_d8;
        }
        alStack_80[5] = 0;
        alStack_80[6] = 0;
        alStack_80[3] = 0;
        alStack_80[4] = 0;
        alStack_80[1] = 0;
        alStack_80[2] = 0;
        alStack_80[7] = 0;
        lVar9 = lStack_88;
        alStack_80[8] = lStack_90;
        do {
          lVar8 = lVar9;
          if (alStack_80[8] + 1 == lVar9) break;
          alStack_80[0] = (lVar9 - alStack_80[8]) / 2 + alStack_80[8];
          lVar6 = func_0x0099c6b0(alStack_80,alStack_80 + 1);
          if (lVar6 == 0) {
            alStack_80[8] = alStack_80[8] + 1;
            if (alStack_80[8] == lVar9) break;
            do {
              lVar7 = func_0x0099c6b0(alStack_80 + 8,alStack_80 + 1);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x28) == lVar5)) {
                lStack_110 = alStack_80[8];
                break;
              }
              alStack_80[8] = alStack_80[8] + 1;
              lStack_110 = lVar9;
            } while (alStack_80[8] != lVar9);
          }
          else {
            lVar8 = alStack_80[0];
            if (*(long *)(lVar6 + 0x28) != lVar5) {
              alStack_80[8] = alStack_80[0];
              lVar8 = lVar9;
            }
          }
          lVar9 = lVar8;
          lVar8 = lStack_110;
        } while (lVar6 != 0);
        lStack_110 = lVar8;
        lVar8 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar5 = lStack_88;
        lVar9 = lStack_90;
        if (iVar3 == 0) {
          lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
          lVar6 = lStack_88;
          lVar5 = lVar5 / 1000000 + lVar9;
          lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
          lVar6 = lVar9 / 1000000 + lVar6;
          *param_1 = 2;
        }
        else {
          lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
          lVar6 = lStack_90;
          lVar5 = lVar9 / 1000000 + lVar5;
          lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
          lVar6 = lVar9 / 1000000 + lVar6;
          *param_1 = 1;
        }
        *(long *)(param_1 + 2) = lVar5;
        *(long *)(param_1 + 4) = lVar8 / 1000000 + lStack_110;
        *(long *)(param_1 + 6) = lVar6;
        goto code_r0x004cb982;
      }
    }
    uVar4 = 0x8000000000000000;
    if ((0x7b1 < (long)*param_3) &&
       ((*param_3 != 0x7b2 ||
        (('\0' < (char)param_3[1] &&
         (((char)param_3[1] != '\x01' ||
          (('\0' < *(char *)((long)param_3 + 9) &&
           ((*(char *)((long)param_3 + 9) != '\x01' ||
            ((-1 < *(char *)((long)param_3 + 10) &&
             ((*(char *)((long)param_3 + 10) != '\0' ||
              ((-1 < *(char *)((long)param_3 + 0xb) &&
               ((*(char *)((long)param_3 + 0xb) != '\0' || (-1 < *(char *)((long)param_3 + 0xc))))))
              ))))))))))))))) {
      uVar4 = 0x7fffffffffffffff;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = 0;
    uVar4 = 0x7fffffffffffffff;
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar4;
code_r0x004cb982:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    func_0x0099bd00();
    uVar10 = extraout_RDX;
    param_3 = puVar11;
code_r0x004cbbdb:
    iVar3 = __cxa_guard_acquire(0xa00a20);
    puVar11 = param_3;
    if (iVar3 != 0) {
      lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lVar9 = SUB168(SEXT816(lVar9) * SEXT816(-0x431bde82d7b634db),8);
      auVar12 = _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
                          (0x7b2,0x101,(lVar9 >> 0x12) - (lVar9 >> 0x3f) ^ uVar10);
      _Ram0000000000a00a10 = auVar12;
      __cxa_guard_release(0xa00a20);
    }
code_r0x004cb6b7:
    if (cRam0000000000a00a38 == '\0') {
      iVar3 = __cxa_guard_acquire(0xa00a38);
      if (iVar3 != 0) {
        lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar9 = SUB168(SEXT816(lVar9) * SEXT816(-0x431bde82d7b634db),8);
        auVar12 = _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
                            (0x7b2,0x101,((lVar9 >> 0x12) - (lVar9 >> 0x3f)) + uVar10 + -1);
        _Ram0000000000a00a28 = auVar12;
        __cxa_guard_release(0xa00a38);
      }
    }
    uVar1 = *puVar11;
    if ((long)(ulong)Ram0000000000a00a10 <= (long)uVar1) {
      if (uVar1 == (ulong)Ram0000000000a00a10) {
        if ((char)puVar11[1] < Ram0000000000a00a10._8_1_) goto code_r0x004cb90e;
        if ((char)puVar11[1] == Ram0000000000a00a10._8_1_) {
          if (*(char *)((long)puVar11 + 9) < Ram0000000000a00a10._9_1_) goto code_r0x004cb90e;
          if (*(char *)((long)puVar11 + 9) == Ram0000000000a00a10._9_1_) {
            if (*(char *)((long)puVar11 + 10) < cRam0000000000a00a1a) goto code_r0x004cb90e;
            if (*(char *)((long)puVar11 + 10) == cRam0000000000a00a1a) {
              if ((*(char *)((long)puVar11 + 0xb) < cRam0000000000a00a1b) ||
                 ((*(char *)((long)puVar11 + 0xb) == cRam0000000000a00a1b &&
                  (*(char *)((long)puVar11 + 0xc) < cRam0000000000a00a1c)))) goto code_r0x004cb90e;
            }
          }
        }
      }
      uVar10 = uVar10 - 1;
      if ((long)uVar1 <= (long)(ulong)Ram0000000000a00a28) {
        if ((ulong)Ram0000000000a00a28 == uVar1) {
          if (Ram0000000000a00a28._8_1_ < (char)puVar11[1]) goto code_r0x004cb90e;
          if (Ram0000000000a00a28._8_1_ == (char)puVar11[1]) {
            if (Ram0000000000a00a28._9_1_ < *(char *)((long)puVar11 + 9)) goto code_r0x004cb90e;
            if (Ram0000000000a00a28._9_1_ == *(char *)((long)puVar11 + 9)) {
              if (cRam0000000000a00a32 < *(char *)((long)puVar11 + 10)) goto code_r0x004cb90e;
              if (cRam0000000000a00a32 == *(char *)((long)puVar11 + 10)) {
                if ((cRam0000000000a00a33 < *(char *)((long)puVar11 + 0xb)) ||
                   ((cRam0000000000a00a33 == *(char *)((long)puVar11 + 0xb) &&
                    (cRam0000000000a00a34 < *(char *)((long)puVar11 + 0xc)))))
                goto code_r0x004cb90e;
              }
            }
          }
        }
        uVar10 = puVar11[1];
        puVar11 = (ulong *)0x1;
        lVar9 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                          (uVar1,(int)(char)uVar10,(int)(char)(uVar10 >> 8),0x7b2,1,1);
        lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        uVar10 = lVar5 / 1000000 + (long)(char)(uVar10 >> 0x20) +
                 (((long)(char)(uVar10 >> 0x10) + lVar9 * 0x18) * 0x3c +
                 (long)(char)(uVar10 >> 0x18)) * 0x3c;
      }
    }
code_r0x004cb90e:
    *param_1 = 0;
    *(ulong *)(param_1 + 2) = uVar10;
    *(ulong *)(param_1 + 4) = uVar10;
    *(ulong *)(param_1 + 6) = uVar10;
  } while( true );
}


