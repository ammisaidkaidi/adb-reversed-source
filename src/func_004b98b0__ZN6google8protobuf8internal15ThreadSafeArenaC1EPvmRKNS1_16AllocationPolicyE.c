// Function: _ZN6google8protobuf8internal15ThreadSafeArenaC1EPvmRKNS1_16AllocationPolicyE
// Address: 004b98b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal15ThreadSafeArenaC1EPvmRKNS1_16AllocationPolicyE
               (undefined **param_1,undefined8 *param_2,ulong param_3,ulong *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  ulong extraout_RDX;
  undefined *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  long *in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *apuStack_30 [2];
  
  param_1[4] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  uVar2 = *param_4;
  pcVar10 = (code *)param_4[2];
  if ((((uVar2 == 0x100) && (param_4[1] == 0x8000)) && (pcVar10 == (code *)0x0)) &&
     (param_4[3] == 0)) {
    if (0x10 < param_3 && param_2 != (undefined8 *)0x0) {
code_r0x004b9945:
      param_1[1] = (undefined *)0x1;
      goto code_r0x004b9960;
    }
    param_2 = (undefined8 *)&UNK_001ff288;
  }
  else {
    if (param_2 != (undefined8 *)0x0 && 0x2f < param_3) goto code_r0x004b9945;
    param_3 = 0x30;
    if (0x30 < uVar2) {
      param_3 = uVar2;
    }
    if (pcVar10 == (code *)0x0) {
      apuStack_30[0] = &UNK_004b9954;
      param_2 = (undefined8 *)_Znwm();
    }
    else {
      apuStack_30[0] = &UNK_004b9943;
      param_2 = (undefined8 *)(*pcVar10)();
    }
code_r0x004b9960:
    *param_2 = 0;
    param_2[1] = param_3;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = &_ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[7] = (undefined *)param_2;
  param_1[8] = &_ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[9] = &_ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[10] = (undefined *)param_2[1];
  param_1[0xb] = (undefined *)0x0;
  param_1[0xc] = (undefined *)0x0;
  param_1[0xd] = (undefined *)param_1;
  param_1[0xe] = (undefined *)0x0;
  param_1[0xf] = (undefined *)0x0;
  param_1[0x10] = (undefined *)0x0;
  param_1[0x11] = (undefined *)0x0;
  param_1[0x12] = (undefined *)0x0;
  param_1[0x13] = (undefined *)0x0;
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    param_1[8] = (undefined *)(param_2 + 2);
    param_1[6] = (undefined *)(param_2 + 2);
    param_1[9] = (undefined *)((uVar2 & 0xfffffffffffffff8) + (long)param_2);
  }
  lVar9 = in_FS_OFFSET[5];
  lVar3 = *in_FS_OFFSET;
  plVar1 = (long *)(lVar3 + -0x120);
  puVar13 = (undefined *)*plVar1;
  if ((char)puVar13 == '\0') {
    LOCK();
    UNLOCK();
    puVar13 = (undefined *)(_ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8);
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *plVar1 = (long)(puVar13 + 1);
  *param_1 = puVar13;
  param_1[2] = (undefined *)0xa00988;
  param_1[0x14] = (undefined *)plVar1;
  puVar17 = (undefined4 *)param_1[10];
  *(undefined ***)(lVar3 + -0x110) = param_1 + 5;
  *(undefined **)(lVar3 + -0x118) = puVar13;
  if (((*param_4 != 0x100) || (param_4[1] != 0x8000)) ||
     ((param_4[2] != 0 || (ppuVar18 = param_1, param_4[3] != 0)))) {
    puVar8 = *(undefined4 **)*(undefined1 (*) [16])(param_1 + 8);
    auVar20 = *(undefined1 (*) [16])(param_1 + 8);
    puVar12 = (undefined4 *)(param_1[9] + -(long)puVar8);
    if ((long)puVar12 < 0x20) {
      param_1 = apuStack_30;
      puStack_40 = &UNK_004b9bac;
      _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(param_1,&UNK_0015b58d,0x296);
      puVar16 = (undefined4 *)&UNK_00186a89;
      puStack_40 = &UNK_004b9bbb;
      uVar11 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(param_1);
      puStack_40 = &UNK_004b9bc3;
      _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar11);
      puStack_40 = &UNK_004b9bcb;
      ppuVar18 = param_1;
      auVar20 = _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
code_r0x004b9bcb:
      puVar14 = auVar20._8_8_;
      puVar8 = auVar20._0_8_;
      puVar17 = puVar16;
      if (puVar16 < puVar14) {
        if (puVar12 < puVar16) {
          puVar12 = puVar16;
        }
        puVar17 = puVar12 + 0x100;
        puVar16 = puVar12;
        if (puVar17 < puVar14) {
          puVar14 = puVar17;
        }
        for (; puVar16 < puVar14; puVar16 = puVar16 + 0x10) {
        }
      }
    }
    else {
      puVar12 = puVar8 + 8;
      param_1[8] = (undefined *)puVar12;
      puVar16 = (undefined4 *)param_1[6];
      ppuVar18 = (undefined **)((long)puVar16 - (long)puVar12);
      puVar17 = puVar16;
      if ((long)ppuVar18 < 0x401) goto code_r0x004b9bcb;
    }
    param_1[6] = (undefined *)puVar16;
    uVar6 = *param_4;
    uVar4 = *(undefined4 *)((long)param_4 + 4);
    uVar7 = param_4[1];
    uVar5 = *(undefined4 *)((long)param_4 + 0xc);
    uVar2 = param_4[3];
    *(ulong *)(puVar8 + 4) = param_4[2];
    *(ulong *)(puVar8 + 6) = uVar2;
    *puVar8 = (int)uVar6;
    puVar8[1] = uVar4;
    puVar8[2] = (int)uVar7;
    puVar8[3] = uVar5;
    param_1[1] = (undefined *)((ulong)((uint)param_1[1] & 7) | (ulong)puVar8);
  }
  if (in_FS_OFFSET[5] == lVar9) {
    return in_FS_OFFSET[5];
  }
  puStack_40 = &UNK_004b9c08;
  func_0x0099bd00();
  lStack_50 = in_FS_OFFSET[5];
  ppuStack_48 = param_1;
  if (ppuVar18 == (undefined **)0x0) {
    puVar13 = (undefined *)0x100;
    puVar15 = (undefined *)0x8000;
    pcVar10 = (code *)0x0;
    if (extraout_RDX < 0xfffffffffffffff0) goto code_r0x004b9c3f;
code_r0x004b9c7a:
    puStack_40 = &stack0xfffffffffffffff8;
    uVar11 = _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringImmEEPKcT_T0_S4_
                       (extraout_RDX,0xffffffffffffffef,&UNK_00172779);
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_
              (auStack_60,&UNK_0015b58d,0x4b,uVar11);
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(auStack_60);
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev(auStack_60);
  }
  else {
    puVar13 = *ppuVar18;
    puVar15 = ppuVar18[1];
    pcVar10 = (code *)ppuVar18[2];
    if (0xffffffffffffffef < extraout_RDX) goto code_r0x004b9c7a;
code_r0x004b9c3f:
    puVar19 = (undefined *)((long)puVar17 * 2);
    if (puVar15 < (undefined *)((long)puVar17 * 2)) {
      puVar19 = puVar15;
    }
    if (puVar17 == (undefined4 *)0x0) {
      puVar19 = puVar13;
    }
    puVar13 = (undefined *)(extraout_RDX + 0x10);
    if ((undefined *)(extraout_RDX + 0x10) < puVar19) {
      puVar13 = puVar19;
    }
    puStack_40 = &stack0xfffffffffffffff8;
    if (pcVar10 != (code *)0x0) {
      puStack_40 = &stack0xfffffffffffffff8;
      lVar9 = (*pcVar10)(puVar13);
      goto code_r0x004b9cc0;
    }
  }
  lVar9 = _Znwm();
code_r0x004b9cc0:
  if (in_FS_OFFSET[5] != lStack_50) {
    func_0x0099bd00();
    lVar9 = *(long *)(*in_FS_OFFSET + -0x120);
    if ((char)lVar9 == '\0') {
      LOCK();
      UNLOCK();
      lVar9 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
      _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
           _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
    }
    *(long *)(*in_FS_OFFSET + -0x120) = lVar9 + 1;
    return lVar9;
  }
  return lVar9;
}


