// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC9BreakTimeERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
// Address: 004cb4a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long * _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneLibC9BreakTimeERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                 (long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *extraout_RDX;
  ulong uVar11;
  ulong extraout_RDX_00;
  undefined8 *puVar12;
  long *plVar13;
  ulong *puVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  long lStack_198;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long alStack_108 [9];
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = (long)&UNK_00166389;
  lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  lVar4 = SUB168(SEXT816(lVar4) * SEXT816(-0x431bde82d7b634db),8);
  lVar4 = ((lVar4 >> 0x12) - (lVar4 >> 0x3f)) + *param_3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_48 = 0;
  lStack_38 = lVar4;
  if (*(char *)(param_2 + 8) == '\x01') {
    plVar13 = &lStack_38;
    puVar12 = &uStack_78;
    piVar5 = (int *)func_0x0099c6b0();
  }
  else {
    plVar13 = &lStack_38;
    puVar12 = &uStack_78;
    piVar5 = (int *)func_0x0099c6c0();
  }
  if (piVar5 == (int *)0x0) {
    if (lVar4 < 0) {
      uVar11 = 0x101;
      lVar7 = -0x8000000000000000;
    }
    else {
      plVar13 = (long *)0x7fffffffffffffff;
      puVar12 = (undefined8 *)0xc;
      auVar15 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                          (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b);
      lVar7 = auVar15._0_8_;
      uVar11 = auVar15._8_8_ & 0xffffffffff;
    }
    *param_1 = lVar7;
    param_1[1] = uVar11;
  }
  else {
    plVar13 = (long *)((long)piVar5[5] + 0x76c);
    puVar12 = (undefined8 *)((long)piVar5[4] + 1);
    auVar15 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (plVar13,puVar12,(long)piVar5[3],(long)piVar5[2],(long)piVar5[1],
                         (long)*piVar5);
    *param_1 = auVar15._0_8_;
    *(int *)(param_1 + 1) = auVar15._8_4_;
    *(char *)((long)param_1 + 0xc) = auVar15[0xc];
    *(int *)(param_1 + 2) = piVar5[10];
    if (*(char *)(param_2 + 8) == '\x01') {
      puVar6 = *(undefined **)(piVar5 + 0xc);
    }
    else {
      puVar6 = &UNK_00178e4b;
    }
    param_1[3] = (long)puVar6;
    *(bool *)((long)param_1 + 0x14) = 0 < piVar5[8];
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  func_0x0099bd00();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = extraout_RDX;
  plStack_b8 = param_1;
  lStack_b0 = lVar4;
  if (*(char *)(puVar12 + 1) == '\0') {
    uVar11 = 0x8000000000000000;
    if (cRam0000000000a00a20 == '\0') goto code_r0x004cbbdb;
    goto code_r0x004cb6b7;
  }
  uVar11 = *extraout_RDX;
  if ((long)uVar11 < 0) {
    if (0xffffffff8000076b < uVar11) goto code_r0x004cb849;
    *(undefined4 *)plVar13 = 0;
    lVar4 = -0x8000000000000000;
  }
  else if (uVar11 >> 2 < 0x200001db) {
code_r0x004cb849:
    lStack_110 = 0;
    lStack_118 = 0;
    lStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    cVar2 = func_0x004cbcf0(extraout_RDX,0,&lStack_110,auStack_150);
    if ((cVar2 != '\0') &&
       (cVar2 = func_0x004cbcf0(extraout_RDX,1,&lStack_118,auStack_188), lVar4 = lStack_110,
       cVar2 != '\0')) {
      iVar3 = (int)uStack_130;
      if ((int)uStack_130 == (int)uStack_168) {
        if ((int)uStack_130 != 0) {
          lVar4 = lStack_118;
        }
        lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        uVar11 = lVar7 / 1000000 + lVar4;
        goto code_r0x004cb90e;
      }
      lVar7 = lStack_128;
      if (lStack_110 < lStack_118) {
        lStack_110 = lStack_118;
        lStack_118 = lVar4;
        lVar7 = lStack_160;
      }
      alStack_108[5] = 0;
      alStack_108[6] = 0;
      alStack_108[3] = 0;
      alStack_108[4] = 0;
      alStack_108[1] = 0;
      alStack_108[2] = 0;
      alStack_108[7] = 0;
      lVar4 = lStack_110;
      alStack_108[8] = lStack_118;
      do {
        lVar10 = lVar4;
        if (alStack_108[8] + 1 == lVar4) break;
        alStack_108[0] = (lVar4 - alStack_108[8]) / 2 + alStack_108[8];
        lVar8 = func_0x0099c6b0(alStack_108,alStack_108 + 1);
        if (lVar8 == 0) {
          alStack_108[8] = alStack_108[8] + 1;
          if (alStack_108[8] == lVar4) break;
          do {
            lVar9 = func_0x0099c6b0(alStack_108 + 8,alStack_108 + 1);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x28) == lVar7)) {
              lStack_198 = alStack_108[8];
              break;
            }
            alStack_108[8] = alStack_108[8] + 1;
            lStack_198 = lVar4;
          } while (alStack_108[8] != lVar4);
        }
        else {
          lVar10 = alStack_108[0];
          if (*(long *)(lVar8 + 0x28) != lVar7) {
            alStack_108[8] = alStack_108[0];
            lVar10 = lVar4;
          }
        }
        lVar4 = lVar10;
        lVar10 = lStack_198;
      } while (lVar8 != 0);
      lStack_198 = lVar10;
      lVar10 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lVar7 = lStack_110;
      lVar4 = lStack_118;
      if (iVar3 == 0) {
        lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar8 = lStack_110;
        lVar7 = lVar7 / 1000000 + lVar4;
        lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar8 = lVar4 / 1000000 + lVar8;
        *(undefined4 *)plVar13 = 2;
      }
      else {
        lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar8 = lStack_118;
        lVar7 = lVar4 / 1000000 + lVar7;
        lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar8 = lVar4 / 1000000 + lVar8;
        *(undefined4 *)plVar13 = 1;
      }
      plVar13[1] = lVar7;
      plVar13[2] = lVar10 / 1000000 + lStack_198;
      plVar13[3] = lVar8;
      goto code_r0x004cb982;
    }
    lVar4 = -0x8000000000000000;
    if ((0x7b1 < (long)*extraout_RDX) &&
       ((*extraout_RDX != 0x7b2 ||
        (('\0' < (char)extraout_RDX[1] &&
         (((char)extraout_RDX[1] != '\x01' ||
          (('\0' < *(char *)((long)extraout_RDX + 9) &&
           ((*(char *)((long)extraout_RDX + 9) != '\x01' ||
            ((-1 < *(char *)((long)extraout_RDX + 10) &&
             ((*(char *)((long)extraout_RDX + 10) != '\0' ||
              ((-1 < *(char *)((long)extraout_RDX + 0xb) &&
               ((*(char *)((long)extraout_RDX + 0xb) != '\0' ||
                (-1 < *(char *)((long)extraout_RDX + 0xc))))))))))))))))))))) {
      lVar4 = 0x7fffffffffffffff;
    }
    *(undefined4 *)plVar13 = 0;
  }
  else {
    *(undefined4 *)plVar13 = 0;
    lVar4 = 0x7fffffffffffffff;
  }
  plVar13[1] = lVar4;
  plVar13[2] = lVar4;
  plVar13[3] = lVar4;
code_r0x004cb982:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
      return plVar13;
    }
    func_0x0099bd00();
    uVar11 = extraout_RDX_00;
code_r0x004cbbdb:
    iVar3 = __cxa_guard_acquire(0xa00a20);
    if (iVar3 != 0) {
      lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lVar4 = SUB168(SEXT816(lVar4) * SEXT816(-0x431bde82d7b634db),8);
      auVar15 = _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
                          (0x7b2,0x101,(lVar4 >> 0x12) - (lVar4 >> 0x3f) ^ uVar11);
      _Ram0000000000a00a10 = auVar15;
      __cxa_guard_release(0xa00a20);
    }
code_r0x004cb6b7:
    if (cRam0000000000a00a38 == '\0') {
      iVar3 = __cxa_guard_acquire(0xa00a38);
      if (iVar3 != 0) {
        lVar4 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar4 = SUB168(SEXT816(lVar4) * SEXT816(-0x431bde82d7b634db),8);
        auVar15 = _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
                            (0x7b2,0x101,((lVar4 >> 0x12) - (lVar4 >> 0x3f)) + uVar11 + -1);
        _Ram0000000000a00a28 = auVar15;
        __cxa_guard_release(0xa00a38);
      }
    }
    uVar1 = *puVar14;
    if ((long)(ulong)Ram0000000000a00a10 <= (long)uVar1) {
      if (uVar1 == (ulong)Ram0000000000a00a10) {
        if ((char)puVar14[1] < Ram0000000000a00a10._8_1_) goto code_r0x004cb90e;
        if ((char)puVar14[1] == Ram0000000000a00a10._8_1_) {
          if (*(char *)((long)puVar14 + 9) < Ram0000000000a00a10._9_1_) goto code_r0x004cb90e;
          if (*(char *)((long)puVar14 + 9) == Ram0000000000a00a10._9_1_) {
            if (*(char *)((long)puVar14 + 10) < cRam0000000000a00a1a) goto code_r0x004cb90e;
            if (*(char *)((long)puVar14 + 10) == cRam0000000000a00a1a) {
              if ((*(char *)((long)puVar14 + 0xb) < cRam0000000000a00a1b) ||
                 ((*(char *)((long)puVar14 + 0xb) == cRam0000000000a00a1b &&
                  (*(char *)((long)puVar14 + 0xc) < cRam0000000000a00a1c)))) goto code_r0x004cb90e;
            }
          }
        }
      }
      uVar11 = uVar11 - 1;
      if ((long)uVar1 <= (long)(ulong)Ram0000000000a00a28) {
        if ((ulong)Ram0000000000a00a28 == uVar1) {
          if (Ram0000000000a00a28._8_1_ < (char)puVar14[1]) goto code_r0x004cb90e;
          if (Ram0000000000a00a28._8_1_ == (char)puVar14[1]) {
            if (Ram0000000000a00a28._9_1_ < *(char *)((long)puVar14 + 9)) goto code_r0x004cb90e;
            if (Ram0000000000a00a28._9_1_ == *(char *)((long)puVar14 + 9)) {
              if (cRam0000000000a00a32 < *(char *)((long)puVar14 + 10)) goto code_r0x004cb90e;
              if (cRam0000000000a00a32 == *(char *)((long)puVar14 + 10)) {
                if ((cRam0000000000a00a33 < *(char *)((long)puVar14 + 0xb)) ||
                   ((cRam0000000000a00a33 == *(char *)((long)puVar14 + 0xb) &&
                    (cRam0000000000a00a34 < *(char *)((long)puVar14 + 0xc)))))
                goto code_r0x004cb90e;
              }
            }
          }
        }
        uVar11 = puVar14[1];
        puVar14 = (ulong *)0x1;
        lVar4 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                          (uVar1,(int)(char)uVar11,(int)(char)(uVar11 >> 8),0x7b2,1,1);
        lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
        uVar11 = lVar7 / 1000000 + (long)(char)(uVar11 >> 0x20) +
                 (((long)(char)(uVar11 >> 0x10) + lVar4 * 0x18) * 0x3c +
                 (long)(char)(uVar11 >> 0x18)) * 0x3c;
      }
    }
code_r0x004cb90e:
    *(undefined4 *)plVar13 = 0;
    plVar13[1] = uVar11;
    plVar13[2] = uVar11;
    plVar13[3] = uVar11;
  } while( true );
}


