// Function: _ZN4absl12lts_2026052613base_internal13LowLevelAlloc11DeleteArenaEPNS2_5ArenaE
// Address: 004d2770
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1
_ZN4absl12lts_2026052613base_internal13LowLevelAlloc11DeleteArenaEPNS2_5ArenaE(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint *puStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
code_r0x004d2b59:
    iVar6 = _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                      (3,&UNK_0016f0bc,0x1a4,&UNK_00183943,&UNK_0018b223,&UNK_00163285);
  }
  else {
    if (iRam0000000000a02ce0 != 0xdd) {
      _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
                (0xa02ce0,0,&UNK_004d2c20);
    }
    if (param_1 == 0xa02b90) goto code_r0x004d2b59;
    if (iRam0000000000a02ce0 != 0xdd) {
      _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
                (0xa02ce0,0,&UNK_004d2c20);
    }
    if (param_1 == 0xa02ce8) goto code_r0x004d2b59;
    uStack_48 = 0;
    puStack_40 = (uint *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    func_0x004d2d40(&uStack_c8,param_1);
    puVar5 = puStack_40;
    iVar2 = *(int *)(param_1 + 0x120);
    if (iVar2 == 0) {
      do {
        while( true ) {
          puVar3 = *(ulong **)(param_1 + 0x30);
          if (puVar3 == (ulong *)0x0) goto code_r0x004d2986;
          uVar4 = *puVar3;
          *(ulong *)(param_1 + 0x30) = puVar3[5];
          if ((puVar3[1] ^ (ulong)puVar3) != 0xffffffffb37cc16a) goto code_r0x004d2aa5;
          if (puVar3[2] != param_1) goto code_r0x004d2ad2;
          uVar10 = *(ulong *)(param_1 + 0x128);
          if ((uVar4 | uVar10) >> 0x20 == 0) {
            uVar9 = (uVar4 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          else {
            uVar9 = uVar4 % uVar10;
          }
          if (uVar9 != 0) goto code_r0x004d2aff;
          if (((ulong)puVar3 | uVar10) >> 0x20 == 0) {
            uVar10 = ((ulong)puVar3 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          else {
            uVar10 = (ulong)puVar3 % uVar10;
          }
          if (uVar10 != 0) goto code_r0x004d2b2c;
          if ((*(byte *)(param_1 + 0x124) & 2) != 0) break;
          iVar6 = func_0x0099c710(puVar3,uVar4);
          if (iVar6 != 0) goto code_r0x004d295f;
        }
        iVar6 = func_0x0099c620(0xb,puVar3,uVar4);
      } while (iVar6 == 0);
code_r0x004d295f:
      puVar7 = (undefined4 *)func_0x0099bce0();
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (3,&UNK_0016f0bc,0x1c8,&UNK_00186aef,*puVar7);
code_r0x004d2986:
      puVar5 = puStack_40;
      LOCK();
      uVar1 = *puStack_40;
      *puStack_40 = *puStack_40 & 2;
      UNLOCK();
      if ((uVar1 & 4) == 0) {
        if (uVar1 < 8) goto code_r0x004d29a8;
code_r0x004d2a4f:
        _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(puVar5,uVar1);
        if (uStack_c8._1_1_ == '\x01') goto code_r0x004d29b1;
code_r0x004d29cc:
        uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(param_1);
        if ((uStack_c8 & 1) == 0) goto code_r0x004d2ba8;
        goto code_r0x004d29e8;
      }
      lVar8 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)(lVar8 + 0x4c) = *(int *)(lVar8 + 0x4c) + -1;
      if (7 < uVar1) goto code_r0x004d2a4f;
code_r0x004d29a8:
      if (uStack_c8._1_1_ != '\x01') goto code_r0x004d29cc;
code_r0x004d29b1:
      iVar6 = func_0x0099c010(2,&uStack_c0,0);
      if (iVar6 == 0) goto code_r0x004d29cc;
    }
    else {
      LOCK();
      uVar1 = *puStack_40;
      *puStack_40 = *puStack_40 & 2;
      UNLOCK();
      if ((uVar1 & 4) == 0) {
        if (uVar1 < 8) goto code_r0x004d284d;
code_r0x004d2a23:
        _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(puVar5,uVar1);
      }
      else {
        lVar8 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar8 + 0x4c) = *(int *)(lVar8 + 0x4c) + -1;
        if (7 < uVar1) goto code_r0x004d2a23;
code_r0x004d284d:
      }
      if ((uStack_c8._1_1_ != '\x01') || (iVar6 = func_0x0099c010(2,&uStack_c0,0), iVar6 == 0)) {
code_r0x004d29e8:
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
          return iVar2 == 0;
        }
        func_0x0099bd00();
code_r0x004d2aa5:
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_0016f0bc,0x1b0,&UNK_00183943,&UNK_00183979,&UNK_00177546);
code_r0x004d2ad2:
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_0016f0bc,0x1b2,&UNK_00183943,&UNK_00170ad7,&UNK_0017f1ad);
code_r0x004d2aff:
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_0016f0bc,0x1b4,&UNK_00183943,&UNK_00170af5,&UNK_0016f0cf);
code_r0x004d2b2c:
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_0016f0bc,0x1b6,&UNK_00183943,&UNK_001680a1,&UNK_00184e8e);
        goto code_r0x004d2b59;
      }
    }
  }
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016f0bc,0x150,&UNK_0016b415,iVar6);
code_r0x004d2ba8:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016f0bc,0x149,&UNK_00183943,&UNK_00189a64,&UNK_0015e564);
  if (iRam0000000000a02ce0 == 0xdd) {
    return 0x90;
  }
  _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
            (0xa02ce0,0,&UNK_004d2c20);
  return 0x90;
}


