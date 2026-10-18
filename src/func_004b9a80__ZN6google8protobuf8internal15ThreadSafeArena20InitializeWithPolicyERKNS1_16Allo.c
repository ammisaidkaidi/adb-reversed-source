// Function: _ZN6google8protobuf8internal15ThreadSafeArena20InitializeWithPolicyERKNS1_16AllocationPolicyE
// Address: 004b9a80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal15ThreadSafeArena20InitializeWithPolicyERKNS1_16AllocationPolicyE
               (ulong *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong extraout_RDX;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long *in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  ulong *puStack_48;
  undefined *puStack_40;
  ulong auStack_30 [2];
  long lStack_20;
  
  lStack_20 = in_FS_OFFSET[5];
  lVar8 = *in_FS_OFFSET;
  puVar17 = (ulong *)(lVar8 + -0x120);
  uVar12 = *puVar17;
  if ((char)uVar12 == '\0') {
    LOCK();
    UNLOCK();
    uVar12 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *puVar17 = uVar12 + 1;
  *param_1 = uVar12;
  param_1[2] = 0xa00988;
  param_1[0x14] = (ulong)puVar17;
  puVar16 = (undefined4 *)param_1[10];
  *(ulong **)(lVar8 + -0x110) = param_1 + 5;
  *(ulong *)(lVar8 + -0x118) = uVar12;
  if ((((*param_2 != 0x100) || (param_2[1] != 0x8000)) || (param_2[2] != 0)) ||
     (puVar17 = param_1, param_2[3] != 0)) {
    puVar7 = *(undefined4 **)*(undefined1 (*) [16])(param_1 + 8);
    auVar19 = *(undefined1 (*) [16])(param_1 + 8);
    puVar11 = (undefined4 *)(param_1[9] - (long)puVar7);
    if ((long)puVar11 < 0x20) {
      param_1 = auStack_30;
      puStack_40 = &UNK_004b9bac;
      _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(param_1,&UNK_0015b58d,0x296);
      puVar15 = (undefined4 *)&UNK_00186a89;
      puStack_40 = &UNK_004b9bbb;
      uVar10 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(param_1);
      puStack_40 = &UNK_004b9bc3;
      _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar10);
      puStack_40 = &UNK_004b9bcb;
      puVar17 = param_1;
      auVar19 = _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
code_r0x004b9bcb:
      puVar13 = auVar19._8_8_;
      puVar7 = auVar19._0_8_;
      puVar16 = puVar15;
      if (puVar15 < puVar13) {
        if (puVar11 < puVar15) {
          puVar11 = puVar15;
        }
        puVar16 = puVar11 + 0x100;
        puVar15 = puVar11;
        if (puVar16 < puVar13) {
          puVar13 = puVar16;
        }
        for (; puVar15 < puVar13; puVar15 = puVar15 + 0x10) {
        }
      }
    }
    else {
      puVar11 = puVar7 + 8;
      param_1[8] = (ulong)puVar11;
      puVar15 = (undefined4 *)param_1[6];
      puVar17 = (ulong *)((long)puVar15 - (long)puVar11);
      puVar16 = puVar15;
      if ((long)puVar17 < 0x401) goto code_r0x004b9bcb;
    }
    param_1[6] = (ulong)puVar15;
    lVar8 = *param_2;
    uVar1 = *(undefined4 *)((long)param_2 + 4);
    lVar5 = param_2[1];
    uVar2 = *(undefined4 *)((long)param_2 + 0xc);
    uVar3 = *(undefined4 *)((long)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar4 = *(undefined4 *)((long)param_2 + 0x1c);
    puVar7[4] = (int)param_2[2];
    puVar7[5] = uVar3;
    puVar7[6] = (int)lVar6;
    puVar7[7] = uVar4;
    *puVar7 = (int)lVar8;
    puVar7[1] = uVar1;
    puVar7[2] = (int)lVar5;
    puVar7[3] = uVar2;
    param_1[1] = (ulong)((uint)param_1[1] & 7) | (ulong)puVar7;
  }
  if (in_FS_OFFSET[5] == lStack_20) {
    return in_FS_OFFSET[5];
  }
  puStack_40 = &UNK_004b9c08;
  func_0x0099bd00();
  lStack_50 = in_FS_OFFSET[5];
  puStack_48 = param_1;
  if (puVar17 == (ulong *)0x0) {
    uVar12 = 0x100;
    uVar14 = 0x8000;
    pcVar9 = (code *)0x0;
    if (extraout_RDX < 0xfffffffffffffff0) goto code_r0x004b9c3f;
code_r0x004b9c7a:
    puStack_40 = &stack0xfffffffffffffff8;
    uVar10 = _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringImmEEPKcT_T0_S4_
                       (extraout_RDX,0xffffffffffffffef,&UNK_00172779);
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_
              (auStack_60,&UNK_0015b58d,0x4b,uVar10);
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(auStack_60);
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev(auStack_60);
  }
  else {
    uVar12 = *puVar17;
    uVar14 = puVar17[1];
    pcVar9 = (code *)puVar17[2];
    if (0xffffffffffffffef < extraout_RDX) goto code_r0x004b9c7a;
code_r0x004b9c3f:
    uVar18 = (long)puVar16 * 2;
    if (uVar14 < (ulong)((long)puVar16 * 2)) {
      uVar18 = uVar14;
    }
    if (puVar16 == (undefined4 *)0x0) {
      uVar18 = uVar12;
    }
    uVar12 = extraout_RDX + 0x10;
    if (extraout_RDX + 0x10 < uVar18) {
      uVar12 = uVar18;
    }
    puStack_40 = &stack0xfffffffffffffff8;
    if (pcVar9 != (code *)0x0) {
      puStack_40 = &stack0xfffffffffffffff8;
      lVar8 = (*pcVar9)(uVar12);
      goto code_r0x004b9cc0;
    }
  }
  lVar8 = _Znwm();
code_r0x004b9cc0:
  if (in_FS_OFFSET[5] != lStack_50) {
    func_0x0099bd00();
    lVar8 = *(long *)(*in_FS_OFFSET + -0x120);
    if ((char)lVar8 == '\0') {
      LOCK();
      UNLOCK();
      lVar8 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
      _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
           _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
    }
    *(long *)(*in_FS_OFFSET + -0x120) = lVar8 + 1;
    return lVar8;
  }
  return lVar8;
}


