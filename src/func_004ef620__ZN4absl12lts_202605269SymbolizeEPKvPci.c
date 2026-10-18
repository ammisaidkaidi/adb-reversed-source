// Function: _ZN4absl12lts_202605269SymbolizeEPKvPci
// Address: 004ef620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004ef531) */

ulong _ZN4absl12lts_202605269SymbolizeEPKvPci(ulong param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 (*pauVar14) [16];
  char cVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *extraout_RDX;
  uint uVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined1 *puVar28;
  ulong uVar29;
  char *pcVar30;
  long lVar31;
  long lVar32;
  long in_FS_OFFSET;
  bool bVar33;
  ulong uStack_4a8;
  ulong uStack_4a0;
  undefined1 *puStack_498;
  undefined8 uStack_490;
  undefined1 auStack_488 [16];
  undefined1 auStack_478 [16];
  undefined1 auStack_468 [16];
  undefined1 auStack_458 [16];
  undefined1 auStack_448 [16];
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [16];
  undefined4 uStack_418;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_3 < 0) {
code_r0x004f0426:
    func_0x0099c600();
code_r0x004f042b:
    func_0x0099bd00();
code_r0x004f0430:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0018840c,0x126,&UNK_00183943,&UNK_0015cd54,&UNK_00186b39);
  }
  else {
    _ZN4absl12lts_2026052613base_internal16InitSigSafeArenaEv();
    pauVar20 = pauRam0000000000a030c0;
    LOCK();
    pauRam0000000000a030c0 = (undefined1 (*) [16])0x0;
    UNLOCK();
    if (pauVar20 == (undefined1 (*) [16])0x0) {
      uVar18 = func_0x0099c2d0(0x1e);
      if (uVar18 < 0x5830) {
        uVar29 = 0x582f / (uVar18 & 0xffffffff);
      }
      else {
        uVar29 = 0;
      }
      uVar19 = _ZN4absl12lts_2026052613base_internal12SigSafeArenaEv();
      pauVar20 = (undefined1 (*) [16])
                 _ZN4absl12lts_2026052613base_internal13LowLevelAlloc14AllocWithArenaEmPNS2_5ArenaE
                           ((uVar29 + 1) * uVar18,uVar19);
      *pauVar20 = (undefined1  [16])0x0;
      pauVar20[1] = (undefined1  [16])0x0;
      *(undefined2 *)pauVar20[2] = 1;
      func_0x0099bdb0(pauVar20 + 0x303,0,0x2800);
    }
    lVar32 = lRam0000000000a030b0;
    if (*(long *)(pauVar20[1] + 8) != lRam0000000000a030b0) {
      lVar31 = 0x3030;
      do {
        *(undefined8 *)(*pauVar20 + lVar31) = 0;
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                  (*(undefined8 *)(pauVar20[2] + lVar31));
        *(undefined8 *)(pauVar20[2] + lVar31) = 0;
        *(undefined4 *)(pauVar20[4] + lVar31) = 0;
        *(undefined8 *)(*pauVar20 + lVar31 + 8) = 0;
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                  (*(undefined8 *)(pauVar20[2] + lVar31 + 8));
        *(undefined8 *)(pauVar20[2] + lVar31 + 8) = 0;
        *(undefined4 *)(pauVar20[4] + lVar31 + 4) = 0;
        *(undefined8 *)(pauVar20[1] + lVar31) = 0;
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                  (*(undefined8 *)(pauVar20[3] + lVar31));
        *(undefined8 *)(pauVar20[3] + lVar31) = 0;
        *(undefined4 *)(pauVar20[4] + lVar31 + 8) = 0;
        *(undefined8 *)(pauVar20[1] + lVar31 + 8) = 0;
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                  (*(undefined8 *)(pauVar20[3] + lVar31 + 8));
        *(undefined8 *)(pauVar20[3] + lVar31 + 8) = 0;
        *(undefined4 *)(pauVar20[4] + lVar31 + 0xc) = 0;
        lVar31 = lVar31 + 0x50;
      } while (lVar31 != 0x5830);
      *(long *)(pauVar20[1] + 8) = lVar32;
      lVar32 = *(long *)*pauVar20;
      if (lVar32 != 0) {
        lVar31 = 0x148;
        do {
          puVar21 = *(undefined8 **)(*(long *)pauVar20[1] + lVar31);
          *(undefined8 *)(*(long *)pauVar20[1] + lVar31) = 0;
          if (puVar21 != (undefined8 *)0x0) {
            (**(code **)*puVar21)(puVar21);
            _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(puVar21);
          }
          lVar31 = lVar31 + 0x150;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
    }
    if (param_1 != 0) {
      uVar18 = (ulong)((((uint)(param_1 >> 0x15) & 0x7ff ^ (uint)(param_1 >> 3) & 0x1fffffff ^
                        (uint)(param_1 >> 0xf) & 0x1ffff ^ (uint)(param_1 >> 9) & 0x7fffff) & 0x7f)
                      * 0x50);
      if (*(ulong *)(pauVar20[0x303] + uVar18) == param_1) {
        lVar32 = 0;
      }
      else if (*(ulong *)(pauVar20[0x303] + uVar18 + 8) == param_1) {
        lVar32 = 1;
      }
      else if (*(ulong *)(pauVar20[0x304] + uVar18) == param_1) {
        lVar32 = 2;
      }
      else {
        if (*(ulong *)(pauVar20[0x304] + uVar18 + 8) != param_1) goto code_r0x004ef880;
        lVar32 = 3;
      }
      iVar16 = *(int *)(pauVar20[0x307] + uVar18 + 4);
      iVar8 = *(int *)(pauVar20[0x307] + uVar18 + 8);
      iVar9 = *(int *)(pauVar20[0x307] + uVar18 + 0xc);
      *(int *)(pauVar20[0x307] + uVar18) = *(int *)(pauVar20[0x307] + uVar18) + 1;
      *(int *)(pauVar20[0x307] + uVar18 + 4) = iVar16 + 1;
      *(int *)(pauVar20[0x307] + uVar18 + 8) = iVar8 + 1;
      *(int *)(pauVar20[0x307] + uVar18 + 0xc) = iVar9 + 1;
      *(undefined4 *)(pauVar20[0x307] + lVar32 * 4 + uVar18) = 0;
      lVar32 = *(long *)(pauVar20[0x305] + lVar32 * 8 + uVar18);
      if (lVar32 == 0) goto code_r0x004ef880;
code_r0x004f027a:
      if (param_3 == 0) {
code_r0x004f02cf:
        uVar18 = 0;
      }
      else {
        uVar29 = (ulong)param_3;
        func_0x0099c310(param_2,lVar32,uVar29);
        uVar18 = CONCAT71((int7)((ulong)lVar32 >> 8),1);
        if (*(char *)(param_2 + -1 + uVar29) != '\0') {
          uVar24 = 3;
          if (uVar29 - 1 < 3) {
            uVar24 = uVar29 - 1;
          }
          func_0x0099bda0((uVar29 + param_2 + -1) - uVar24,&UNK_00204a20);
          *(undefined1 *)(param_2 + -1 + uVar29) = 0;
        }
      }
      LOCK();
      bVar33 = pauRam0000000000a030c0 != (undefined1 (*) [16])0x0;
      pauVar14 = pauVar20;
      if (bVar33) {
        pauVar14 = pauRam0000000000a030c0;
      }
      pauRam0000000000a030c0 = pauVar14;
      UNLOCK();
      if (bVar33) {
        lVar32 = 0x3068;
        do {
          _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                    (*(undefined8 *)(pauVar20[-2] + lVar32 + 8));
          _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                    (*(undefined8 *)(pauVar20[-1] + lVar32));
          _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                    (*(undefined8 *)(pauVar20[-1] + lVar32 + 8));
          _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                    (*(undefined8 *)(*pauVar20 + lVar32));
          lVar32 = lVar32 + 0x50;
        } while (lVar32 != 0x5868);
        func_0x004f0fa0(pauVar20);
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(*(undefined8 *)pauVar20[1]);
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(pauVar20);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return uVar18 & 0xffffffff;
      }
      goto code_r0x004f042b;
    }
code_r0x004ef880:
    pauVar20[2][2] = 0;
    puVar21 = (undefined8 *)func_0x004f04f0(pauVar20,param_1);
    if (puVar21 == (undefined8 *)0x0) {
      auStack_448 = (undefined1  [16])0x0;
      auStack_458 = (undefined1  [16])0x0;
      auStack_468 = (undefined1  [16])0x0;
      auStack_478 = (undefined1  [16])0x0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auStack_438._8_8_;
      auStack_438 = auVar10 << 0x40;
      _ZN4absl12lts_2026052618debugging_internal11VDSOSupportC1Ev(auStack_478);
      if (auStack_478._0_8_ != 0) {
        auStack_68 = (undefined1  [16])0x0;
        auStack_78 = (undefined1  [16])0x0;
        cVar15 = _ZNK4absl12lts_2026052618debugging_internal11VDSOSupport21LookupSymbolByAddressEPKvPNS1_11ElfMemImage10SymbolInfoE
                           (auStack_478,param_1,auStack_78);
        if (cVar15 != '\0') {
          uVar19 = auStack_78._0_8_;
          lVar32 = func_0x0099bcf0(auStack_78._0_8_);
          if (0xbff < lVar32 + 1U)
          goto _ZN4absl12lts_2026052618debugging_internal18GetFileMappingHintEPPKvS4_PmPPKc;
          func_0x0099bda0(pauVar20[2] + 2,uVar19,lVar32 + 1U);
        }
      }
code_r0x004f010b:
      pcVar30 = pauVar20[2] + 2;
      if (*pcVar30 == '\0') goto code_r0x004f02cf;
      pauVar20[0xc2][1] = 0;
      if (param_1 == 0) goto code_r0x004f0426;
      uVar18 = (ulong)((((uint)(param_1 >> 0x15) & 0x7ff ^ (uint)(param_1 >> 3) & 0x1fffffff ^
                        (uint)(param_1 >> 0xf) & 0x1ffff ^ (uint)(param_1 >> 9) & 0x7fffff) & 0x7f)
                      * 0x50);
      uVar17 = *(uint *)(pauVar20[0x307] + uVar18);
      if (*(long *)(pauVar20[0x303] + uVar18) == 0) {
        uStack_4a8 = 0;
code_r0x004f01fc:
        *(uint *)(pauVar20[0x307] + uVar18) = uVar17 + 1;
        *(ulong *)(pauVar20[0x307] + uVar18 + 4) =
             CONCAT44((int)((ulong)*(undefined8 *)(pauVar20[0x307] + uVar18 + 4) >> 0x20) + 1,
                      (int)*(undefined8 *)(pauVar20[0x307] + uVar18 + 4) + 1);
        *(int *)(pauVar20[0x307] + uVar18 + 0xc) = *(int *)(pauVar20[0x307] + uVar18 + 0xc) + 1;
        *(ulong *)(pauVar20[0x303] + uStack_4a8 * 8 + uVar18) = param_1;
      }
      else {
        if (*(long *)(pauVar20[0x303] + uVar18 + 8) == 0) {
          uStack_4a8 = 1;
          goto code_r0x004f01fc;
        }
        if (*(long *)(pauVar20[0x304] + uVar18) == 0) {
          uStack_4a8 = 2;
          goto code_r0x004f01fc;
        }
        if (*(long *)(pauVar20[0x304] + uVar18 + 8) == 0) {
          uStack_4a8 = 3;
          goto code_r0x004f01fc;
        }
        uVar3 = *(uint *)(pauVar20[0x307] + uVar18 + 4);
        uVar25 = uVar17;
        if (uVar17 < uVar3) {
          uVar25 = uVar3;
        }
        uVar4 = *(uint *)(pauVar20[0x307] + uVar18 + 8);
        uVar5 = *(uint *)(pauVar20[0x307] + uVar18 + 0xc);
        uVar29 = 2;
        if (uVar4 < uVar25) {
          uVar29 = (ulong)(uVar17 <= uVar3);
        }
        if (uVar25 < uVar4) {
          uVar25 = uVar4;
        }
        uStack_4a8 = 3;
        if (uVar5 < uVar25) {
          uStack_4a8 = uVar29;
        }
        *(uint *)(pauVar20[0x307] + uVar18) = uVar17 + 1;
        *(uint *)(pauVar20[0x307] + uVar18 + 4) = uVar3 + 1;
        *(uint *)(pauVar20[0x307] + uVar18 + 8) = uVar4 + 1;
        *(uint *)(pauVar20[0x307] + uVar18 + 0xc) = uVar5 + 1;
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv
                  (*(undefined8 *)(pauVar20[0x305] + uStack_4a8 * 8 + uVar18));
        *(ulong *)(pauVar20[0x303] + uStack_4a8 * 8 + uVar18) = param_1;
      }
      lVar31 = func_0x0099bcf0(pcVar30);
      uVar19 = _ZN4absl12lts_2026052613base_internal12SigSafeArenaEv();
      lVar32 = _ZN4absl12lts_2026052613base_internal13LowLevelAlloc14AllocWithArenaEmPNS2_5ArenaE
                         (lVar31 + 1,uVar19);
      if (lVar32 != 0) {
        func_0x0099bda0(lVar32,pcVar30,lVar31 + 1);
        *(long *)(pauVar20[0x305] + uStack_4a8 * 8 + uVar18) = lVar32;
        *(undefined4 *)(pauVar20[0x307] + uStack_4a8 * 4 + uVar18) = 0;
        goto code_r0x004f027a;
      }
      goto code_r0x004f0430;
    }
    pcVar6 = *(code **)(pauVar20[1] + 8);
    if (*(int *)(puVar21 + 4) < 0) {
      uVar17 = func_0x004f1060(*puVar21);
      *(uint *)(puVar21 + 4) = uVar17;
      if ((int)uVar17 < 0) {
        iVar16 = func_0x0099bdd0(*puVar21,&UNK_0015c665);
        if (iVar16 == 0) {
          if (lRam0000000000a02fa0 == 0) goto code_r0x004efdd1;
          uVar17 = func_0x004f1060();
          *(uint *)(puVar21 + 4) = uVar17;
        }
        else {
          if ((*(int *)puVar21[1] == 0x464c457f) &&
             (uVar17 = func_0x004f1060(&UNK_0015c665), uVar17 != 0xffffffff)) {
            lVar32 = puVar21[1];
            func_0x0099bdb0(auStack_478,0,0x400);
            lVar31 = func_0x0099be20(uVar17,auStack_478,0x400);
            if ((lVar31 == 0x400) &&
               (iVar16 = func_0x0099bf90(auStack_478,lVar32,0x400), iVar16 == 0)) {
              func_0x0099bdb0(auStack_478,0,0x400);
              lVar31 = func_0x0099be20(uVar17,auStack_478,0x400);
              if ((lVar31 == 0x400) &&
                 (iVar16 = func_0x0099bf90(auStack_478,lVar32 + 0x400,0x400), iVar16 == 0)) {
                func_0x0099bdb0(auStack_478,0,0x400);
                lVar31 = func_0x0099be20(uVar17,auStack_478,0x400);
                if ((lVar31 == 0x400) &&
                   (iVar16 = func_0x0099bf90(auStack_478,lVar32 + 0x800,0x400), iVar16 == 0)) {
                  func_0x0099bdb0(auStack_478,0,0x400);
                  lVar31 = func_0x0099be20(uVar17,auStack_478,0x400);
                  if ((lVar31 == 0x400) &&
                     (iVar16 = func_0x0099bf90(auStack_478,lVar32 + 0xc00,0x400), iVar16 == 0)) {
                    *(uint *)(puVar21 + 4) = uVar17;
                    goto joined_r0x004efd92;
                  }
                }
              }
            }
            func_0x0099bd10(uVar17);
          }
code_r0x004efdd1:
          uVar17 = *(uint *)(puVar21 + 4);
        }
joined_r0x004efd92:
        if (-1 < (int)uVar17) goto code_r0x004efdd9;
        uVar19 = *puVar21;
        puVar22 = (undefined4 *)func_0x0099bce0();
        lVar32 = 0;
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (1,&UNK_0018840c,0x581,&UNK_001632ab,uVar19,*puVar22);
      }
      else {
code_r0x004efdd9:
        auStack_428 = (undefined1  [16])0x0;
        auStack_438 = (undefined1  [16])0x0;
        auStack_448 = (undefined1  [16])0x0;
        auStack_458 = (undefined1  [16])0x0;
        auStack_468 = (undefined1  [16])0x0;
        auStack_478 = (undefined1  [16])0x0;
        uStack_418 = 0;
        uStack_4a0 = (ulong)uVar17;
        puStack_498 = auStack_478;
        uStack_490 = 100;
        auStack_488 = (undefined1  [16])0x0;
        auStack_48 = (undefined1  [16])0x0;
        auStack_58 = (undefined1  [16])0x0;
        auStack_68 = (undefined1  [16])0x0;
        auStack_78 = (undefined1  [16])0x0;
        lVar32 = func_0x004eef80(&uStack_4a0,auStack_78,0x40,0);
        uVar17 = 0xffffffff;
        if (auStack_78._0_4_ == 0x464c457f && lVar32 == 0x40) {
          uVar17 = (uint)(ushort)auStack_68._0_2_;
        }
        *(uint *)((long)puVar21 + 0x24) = uVar17;
        if (auStack_78._0_4_ == 0x464c457f && lVar32 == 0x40) {
          lVar32 = func_0x004eef80(&uStack_4a0,puVar21 + 5,0x40,0);
          if (lVar32 == 0x40) {
            uVar1 = *(ushort *)(puVar21 + 0xc);
            if (uVar1 != 0) {
              lVar32 = puVar21[9];
              uVar2 = *(ushort *)((long)puVar21 + 0x5e);
              uVar17 = 0;
              uVar18 = 0;
              do {
                auStack_58 = (undefined1  [16])0x0;
                auStack_68 = (undefined1  [16])0x0;
                auStack_78 = (undefined1  [16])0x0;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = auStack_48._8_8_;
                auStack_48 = auVar13 << 0x40;
                lVar31 = func_0x004eef80(&uStack_4a0,auStack_78,0x38,lVar32);
                if (lVar31 != 0x38) {
                  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                            (1,&UNK_0018840c,0x59c,&UNK_001775d4,*puVar21,uVar17);
                  goto code_r0x004f00d8;
                }
                uVar29 = uVar18;
                if ((auStack_78._0_4_ == 1) && ((~auStack_78._4_4_ & 5) == 0)) {
                  if (3 < uVar18) {
                    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                              (1,&UNK_0018840c,0x5b7,&UNK_00166488,*puVar21,uVar18,4);
                    goto joined_r0x004f00a6;
                  }
                  uVar29 = uVar18 + 1;
                  puVar21[uVar18 * 7 + 0x13] = auStack_48._0_8_;
                  puVar21[uVar18 * 7 + 0x11] = auStack_58._0_8_;
                  (puVar21 + uVar18 * 7 + 0x11)[1] = auStack_58._8_8_;
                  puVar21[uVar18 * 7 + 0xf] = auStack_68._0_8_;
                  (puVar21 + uVar18 * 7 + 0xf)[1] = auStack_68._8_8_;
                  puVar21[uVar18 * 7 + 0xd] = auStack_78._0_8_;
                  (puVar21 + uVar18 * 7 + 0xd)[1] = auStack_78._8_8_;
                }
                lVar32 = lVar32 + (ulong)uVar2;
                uVar17 = uVar17 + 1;
                uVar18 = uVar29;
              } while (uVar1 != uVar17);
              if (uVar29 != 0) goto joined_r0x004f00a6;
            }
            _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                      (1,&UNK_0018840c,0x5bd,&UNK_00175a1b,*puVar21);
          }
          else {
            _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                      (1,&UNK_0018840c,0x591,&UNK_00189a71,*puVar21);
          }
        }
        else {
          _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                    (1,&UNK_0018840c,0x58b,&UNK_0015e5b2,*puVar21,0xffffffff);
        }
code_r0x004f00d8:
        lVar32 = 0;
      }
      goto code_r0x004f00db;
    }
joined_r0x004f00a6:
    if ((pcVar6 != (code *)0x0) && (puVar21[0x29] == 0)) {
      (*pcVar6)(auStack_478,*(undefined4 *)(puVar21 + 4));
      uVar19 = auStack_478._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auStack_478._8_8_;
      auStack_478 = auVar11 << 0x40;
      puVar23 = (undefined8 *)puVar21[0x29];
      puVar21[0x29] = uVar19;
      if (puVar23 != (undefined8 *)0x0) {
        (**(code **)*puVar23)(puVar23);
        _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(puVar23);
        uVar19 = auStack_478._0_8_;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = auStack_478._8_8_;
        auStack_478 = auVar12 << 0x40;
        if ((undefined8 *)uVar19 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)uVar19)(uVar19);
          _ZN4absl12lts_2026052613base_internal13LowLevelAlloc4FreeEPv(uVar19);
        }
      }
    }
    puVar28 = pauVar20[2] + 2;
    if (*(int *)((long)puVar21 + 0x24) != 3) {
code_r0x004ef8df:
      lVar32 = 0;
code_r0x004ef8e2:
      pauVar14 = pauVar20 + 0x2c3;
      auStack_448 = (undefined1  [16])0x0;
      auStack_458 = (undefined1  [16])0x0;
      auStack_468 = (undefined1  [16])0x0;
      auStack_478 = (undefined1  [16])0x0;
      auStack_48 = (undefined1  [16])0x0;
      auStack_58 = (undefined1  [16])0x0;
      auStack_68 = (undefined1  [16])0x0;
      auStack_78 = (undefined1  [16])0x0;
      puStack_498 = pauVar20[0xc2] + 2;
      uStack_4a0 = (ulong)*(uint *)(puVar21 + 4);
      uStack_490 = 0x2000;
      auStack_488 = (undefined1  [16])0x0;
      cVar15 = func_0x004f12b0(&uStack_4a0,*(undefined2 *)((long)puVar21 + 100),puVar21[10],2,
                               auStack_478,pauVar14);
      if (cVar15 == '\0') {
code_r0x004ef9d5:
        cVar15 = func_0x004f12b0(&uStack_4a0,*(undefined2 *)((long)puVar21 + 100),puVar21[10],0xb,
                                 auStack_478,pauVar14);
        if (cVar15 != '\0') {
          lVar31 = func_0x004eef80(&uStack_4a0,auStack_78,0x40,
                                   (ulong)(uint)auStack_458._8_4_ * 0x40 + puVar21[10]);
          if ((lVar31 == 0x40) &&
             (iVar16 = func_0x004f1420(param_1,&uStack_4a0,puVar28,lVar32,auStack_78,auStack_478,
                                       pauVar14), iVar16 != 1)) goto code_r0x004efa53;
        }
      }
      else {
        lVar31 = func_0x004eef80(&uStack_4a0,auStack_78,0x40,
                                 (ulong)(uint)auStack_458._8_4_ * 0x40 + puVar21[10]);
        if ((lVar31 != 0x40) ||
           (iVar16 = func_0x004f1420(param_1,&uStack_4a0,puVar28,lVar32,auStack_78,auStack_478,
                                     pauVar14), iVar16 == 1)) goto code_r0x004ef9d5;
code_r0x004efa53:
        if (iVar16 == 3) {
          func_0x004f0670(puVar28,pauVar14);
        }
      }
code_r0x004f00db:
      plVar7 = (long *)puVar21[0x29];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))
                  (plVar7,param_1,lVar32,pauVar20[2] + 2,0xc00,pauVar20 + 0x2c3,0x400);
      }
      goto code_r0x004f010b;
    }
    uVar18 = puVar21[1];
    if (uVar18 < (ulong)puVar21[3]) goto code_r0x004ef8df;
    lVar32 = uVar18 - puVar21[3];
    iVar16 = *(int *)(puVar21 + 0xd);
    if (iVar16 == 1) {
      if (puVar21[0xf] + uVar18 + puVar21[0x12] <= param_1) {
        iVar16 = *(int *)(puVar21 + 0x14);
        if (iVar16 != 1) goto code_r0x004f03ca;
        if (param_1 < puVar21[0x16] + uVar18 + puVar21[0x19]) {
          puVar23 = puVar21 + 0x14;
          goto code_r0x004f03bd;
        }
        iVar16 = *(int *)(puVar21 + 0x1b);
        if (iVar16 != 1) goto code_r0x004f03ca;
        if (param_1 < puVar21[0x1d] + uVar18 + puVar21[0x20]) {
          puVar23 = puVar21 + 0x1b;
          goto code_r0x004f03bd;
        }
        iVar16 = *(int *)(puVar21 + 0x22);
        if (iVar16 != 1) goto code_r0x004f03ca;
        if (param_1 < puVar21[0x24] + uVar18 + puVar21[0x27]) {
          puVar23 = puVar21 + 0x22;
          goto code_r0x004f03bd;
        }
        goto code_r0x004f03d2;
      }
      puVar23 = puVar21 + 0xd;
code_r0x004f03bd:
      lVar32 = (lVar32 - puVar23[2]) + puVar23[1];
      goto code_r0x004ef8e2;
    }
code_r0x004f03ca:
    if (iVar16 == 0) {
code_r0x004f03d2:
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (1,&UNK_0018840c,0x5f1,&UNK_0016f170,*puVar21,param_1,uVar18);
      goto code_r0x004ef8e2;
    }
  }
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0018840c,0x5e3,&UNK_00183943,&UNK_00166474,&UNK_00184ebc);
_ZN4absl12lts_2026052618debugging_internal18GetFileMappingHintEPPKvS4_PmPPKc:
  puVar26 = (ulong *)&UNK_0018840c;
  puVar21 = (undefined8 *)&UNK_00183943;
  puVar27 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0018840c,0x60b,&UNK_00183943,&UNK_00169a6f,&UNK_00186b47);
  uVar17 = uRam0000000000a030b8;
  if ((uRam0000000000a030b8 & 1) == 0) {
    if ((uRam0000000000a030b8 & 2) == 0) {
      lVar32 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (lVar32 == 0) {
        LOCK();
        uVar3 = uVar17 | 1;
        if (uVar17 != uRam0000000000a030b8) {
          uVar17 = uRam0000000000a030b8;
          uVar3 = uRam0000000000a030b8;
        }
        uRam0000000000a030b8 = uVar3;
        UNLOCK();
      }
      else {
        *(int *)(lVar32 + 0x4c) = *(int *)(lVar32 + 0x4c) + 1;
        LOCK();
        bVar33 = uVar17 != uRam0000000000a030b8;
        uVar3 = uVar17;
        uVar25 = uVar17 | 5;
        if (bVar33) {
          uVar3 = uRam0000000000a030b8;
          uVar25 = uRam0000000000a030b8;
        }
        uRam0000000000a030b8 = uVar25;
        UNLOCK();
        if (bVar33) {
          lVar32 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
          *(int *)(lVar32 + 0x4c) = *(int *)(lVar32 + 0x4c) + -1;
          uVar17 = uVar3;
        }
      }
    }
    else {
      uRam0000000000a030b8 = uRam0000000000a030b8 | 1;
      LOCK();
      UNLOCK();
    }
  }
  if ((uVar17 & 1) == 0) {
    if (0 < (long)iRam0000000000a02fa8) {
      lVar32 = 0;
      do {
        if ((*(ulong *)(lVar32 + 0xa02fb0) <= *puVar27) &&
           (uVar18 = *(ulong *)(lVar32 + 0xa02fb8), *puVar26 <= uVar18)) {
          *puVar27 = *(ulong *)(lVar32 + 0xa02fb0);
          *puVar26 = uVar18;
          *extraout_RDX = *(undefined8 *)(lVar32 + 0xa02fc0);
          uVar19 = *(undefined8 *)(lVar32 + 0xa02fc8);
          *puVar21 = uVar19;
          uVar18 = CONCAT71((int7)((ulong)uVar19 >> 8),1);
          goto code_r0x004ef5a8;
        }
        lVar32 = lVar32 + 0x20;
      } while ((long)iRam0000000000a02fa8 * 0x20 != lVar32);
    }
    uVar18 = 0;
code_r0x004ef5a8:
    uVar3 = uRam0000000000a030b8;
    uVar25 = uRam0000000000a030b8 & 2;
    LOCK();
    UNLOCK();
    uVar17 = uRam0000000000a030b8 & 4;
    uRam0000000000a030b8 = uVar25;
    if (uVar17 != 0) {
      uVar18 = uVar18 & 0xffffffff;
      lVar32 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)(lVar32 + 0x4c) = *(int *)(lVar32 + 0x4c) + -1;
    }
    if (7 < uVar3) {
      uVar18 = uVar18 & 0xffffffff;
      _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa030b8,uVar3);
    }
  }
  else {
    uVar18 = 0;
  }
  return uVar18;
}


