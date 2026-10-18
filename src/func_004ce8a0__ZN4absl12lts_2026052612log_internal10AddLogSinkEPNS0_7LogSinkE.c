// Function: _ZN4absl12lts_2026052612log_internal10AddLogSinkEPNS0_7LogSinkE
// Address: 004ce8a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004d1ac2) */
/* WARNING: Removing unreachable block (ram,0x004d1ee2) */
/* WARNING: Removing unreachable block (ram,0x004d1ade) */
/* WARNING: Removing unreachable block (ram,0x004d1c52) */
/* WARNING: Removing unreachable block (ram,0x004d1738) */
/* WARNING: Removing unreachable block (ram,0x004d1743) */
/* WARNING: Removing unreachable block (ram,0x004d1e12) */
/* WARNING: Removing unreachable block (ram,0x004d1a82) */
/* WARNING: Removing unreachable block (ram,0x004d1ae5) */
/* WARNING: Removing unreachable block (ram,0x004d19e4) */
/* WARNING: Removing unreachable block (ram,0x004d19eb) */
/* WARNING: Removing unreachable block (ram,0x004d19f8) */
/* WARNING: Removing unreachable block (ram,0x004d19fc) */
/* WARNING: Removing unreachable block (ram,0x004d1a22) */
/* WARNING: Removing unreachable block (ram,0x004d1a01) */
/* WARNING: Removing unreachable block (ram,0x004d1a26) */
/* WARNING: Removing unreachable block (ram,0x004d1a32) */
/* WARNING: Removing unreachable block (ram,0x004d1a35) */
/* WARNING: Removing unreachable block (ram,0x004d1a4f) */
/* WARNING: Removing unreachable block (ram,0x004d1a53) */
/* WARNING: Removing unreachable block (ram,0x004d1a59) */
/* WARNING: Removing unreachable block (ram,0x004d1a60) */
/* WARNING: Removing unreachable block (ram,0x004d17c8) */
/* WARNING: Removing unreachable block (ram,0x004d17da) */
/* WARNING: Removing unreachable block (ram,0x004d17bd) */
/* WARNING: Removing unreachable block (ram,0x004d04bb) */

undefined8 * _ZN4absl12lts_2026052612log_internal10AddLogSinkEPNS0_7LogSinkE(undefined1 *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  byte bVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined **ppuVar22;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  uint uVar29;
  undefined8 unaff_R12;
  long lVar30;
  undefined8 unaff_R13;
  long *unaff_R14;
  undefined8 unaff_R15;
  long *in_FS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_50;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 *puStack_40;
  long *plStack_38;
  long **pplStack_30;
  undefined1 **ppuStack_28;
  undefined *puStack_20;
  undefined8 *puStack_18;
  
  puStack_18 = (undefined8 *)(ulong)bRam0000000000a00a60;
  if (bRam0000000000a00a60 == 0) {
    puStack_20 = &UNK_004ce8c3;
    iVar11 = __cxa_guard_acquire(0xa00a60);
    if (iVar11 != 0) {
      puStack_20 = &UNK_004ce8cf;
      func_0x004cec20();
      puStack_20 = &UNK_004ce8db;
      __cxa_guard_release(0xa00a60);
    }
  }
  puStack_18 = (undefined8 *)in_FS_OFFSET[5];
  puStack_50 = &UNK_004ce919;
  puStack_40 = param_1;
  _ZN4absl12lts_202605265Mutex4lockEv(0xa00a40);
  for (plVar19 = plRam0000000000a00a48; plVar19 != plRam0000000000a00a50; plVar19 = plVar19 + 1) {
    if ((undefined1 *)*plVar19 == param_1) {
      if (plVar19 != plRam0000000000a00a50) goto code_r0x004ce9b1;
      break;
    }
  }
  plStack_38 = plRam0000000000a00a50;
  pplStack_30 = &plStack_38;
  ppuStack_28 = &puStack_40;
  puStack_20 = (undefined *)0xa00a48;
  if (plRam0000000000a00a50 < plRam0000000000a00a58) {
    *plRam0000000000a00a50 = (long)param_1;
    plRam0000000000a00a50 = plRam0000000000a00a50 + 1;
  }
  else {
    puStack_50 = &UNK_004ce9a6;
    _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
              (&pplStack_30);
    plRam0000000000a00a50 = plStack_38;
  }
  puStack_50 = &UNK_004ce987;
  _ZN4absl12lts_202605265Mutex6unlockEv(0xa00a40);
  if ((undefined8 *)in_FS_OFFSET[5] == puStack_18) {
    return (undefined8 *)in_FS_OFFSET[5];
  }
  puStack_50 = &UNK_004ce9b1;
  func_0x0099bd00();
code_r0x004ce9b1:
  puStack_50 = &UNK_004ce9bd;
  _ZN4absl12lts_202605265Mutex6unlockEv(0xa00a40);
  pplStack_30 = (long **)&UNK_0015e503;
  plStack_38 = (long *)CONCAT44(plStack_38._4_4_,3);
  uStack_44 = 0xd7;
  puVar23 = _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE;
  puStack_50 = &UNK_004ce9f5;
  _ZNK4absl12lts_2026052613base_internal10AtomicHookIPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEclIJS3_RKS5_iRA34_S4_EEEvDpOT_
            (_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE,&plStack_38,
             &pplStack_30,&uStack_44,&UNK_001806ba);
  ppuVar22 = &puStack_50;
  lStack_68 = in_FS_OFFSET[5];
  puStack_60 = param_1;
  puStack_50 = &stack0xfffffffffffffff8;
  if ((bRam0000000000a00a60 == 0) &&
     (puStack_50 = &stack0xfffffffffffffff8, iVar11 = __cxa_guard_acquire(0xa00a60), iVar11 != 0)) {
    func_0x004cec20();
    __cxa_guard_release(0xa00a60);
  }
  _ZN4absl12lts_202605265Mutex4lockEv(0xa00a40);
  plVar19 = plRam0000000000a00a50;
  plVar26 = plRam0000000000a00a48;
  if (plRam0000000000a00a48 == plRam0000000000a00a50) {
code_r0x004cea60:
    if (plVar26 != plRam0000000000a00a50) {
      func_0x0099bd90(plVar26,plVar26 + 1,(long)plRam0000000000a00a50 - (long)(plVar26 + 1));
      puVar13 = puRam0000000000a00a40;
      plVar19 = plVar19 + -1;
      plRam0000000000a00a50 = plVar19;
      if (in_FS_OFFSET[5] == lStack_68) {
        puVar21 = auStack_48;
        puVar23 = puStack_60;
        ppuVar22 = (undefined **)puStack_50;
        if (((uint)puRam0000000000a00a40 & 0x1e ^ 10) < 6) {
          LOCK();
          puRam0000000000a00a40 = (undefined8 *)((ulong)puRam0000000000a00a40 & 0xffffffffffffffd7);
          UNLOCK();
          return puVar13;
        }
        goto _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE;
      }
      func_0x0099bd00();
    }
  }
  else {
    do {
      if ((undefined1 *)*plVar26 == puVar23) goto code_r0x004cea60;
      plVar26 = plVar26 + 1;
    } while (plVar26 != plRam0000000000a00a50);
  }
  unaff_R14 = plVar19;
  _ZN4absl12lts_202605265Mutex6unlockEv(0xa00a40);
  puStack_70 = &UNK_0015e503;
  uStack_74 = 3;
  uStack_78 = 0xe3;
  _ZNK4absl12lts_2026052613base_internal10AtomicHookIPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEclIJS3_RKS5_iRA34_S4_EEEvDpOT_
            (_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE,&uStack_74,&puStack_70
             ,&uStack_78,&UNK_001774dd);
  if ((bRam0000000000a00a60 == 0) && (iVar11 = __cxa_guard_acquire(0xa00a60), iVar11 != 0)) {
    func_0x004cec20();
    __cxa_guard_release(0xa00a60);
  }
  if (*(char *)(*in_FS_OFFSET + -0xc3) == '\x01') {
    puVar13 = (undefined8 *)_ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
    plVar26 = plRam0000000000a00a50;
    for (plVar19 = plRam0000000000a00a48; plVar19 != plVar26; plVar19 = plVar19 + 1) {
      puVar13 = (undefined8 *)(**(code **)(*(long *)*plVar19 + 0x18))();
    }
    return puVar13;
  }
  puVar2 = (undefined1 *)(*in_FS_OFFSET + -0xc3);
  _ZN4absl12lts_202605265Mutex11lock_sharedEv(0xa00a40);
  *puVar2 = 1;
  plVar26 = plRam0000000000a00a50;
  for (plVar19 = plRam0000000000a00a48; plVar19 != plVar26; plVar19 = plVar19 + 1) {
    (**(code **)(*(long *)*plVar19 + 0x18))();
  }
  *puVar2 = 0;
  puVar21 = auStack_80;
  puVar13 = puRam0000000000a00a40;
  while (((uint)puVar13 & 0x15) == 1) {
    LOCK();
    bVar31 = puVar13 == puRam0000000000a00a40;
    puVar17 = (undefined8 *)((long)puVar13 + (-0x100 - (ulong)(puVar13 < (undefined8 *)0x200)));
    if (!bVar31) {
      puVar13 = puRam0000000000a00a40;
      puVar17 = puRam0000000000a00a40;
    }
    puRam0000000000a00a40 = puVar17;
    UNLOCK();
    if (bVar31) {
      return puVar13;
    }
  }
_ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE:
  *(undefined ***)(puVar21 + -8) = ppuVar22;
  *(undefined8 *)(puVar21 + -0x10) = unaff_R15;
  *(long **)(puVar21 + -0x18) = unaff_R14;
  *(undefined8 *)(puVar21 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar21 + -0x28) = unaff_R12;
  *(undefined1 **)(puVar21 + -0x30) = puVar23;
  *(undefined **)(puVar21 + -0x80) = &UNK_004d16ec;
  lVar14 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar14 != 0) {
    *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + 1;
  }
  puVar13 = puRam0000000000a00a40;
  *(undefined **)(puVar21 + -0x80) = &UNK_004d1703;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
  *(undefined **)(puVar21 + -0x80) = &UNK_004d1712;
  func_0x004d0510(puVar13,&UNK_00159a73);
  if (((ulong)puVar13 & 0x10) != 0) {
    *(undefined **)(puVar21 + -0x80) = &UNK_004d172b;
    func_0x004d0240(0xa00a40,(((ulong)puVar13 & 8) == 0) + '\b');
  }
  *(undefined8 *)(puVar21 + -0x60) = 1;
  *(undefined8 *)(puVar21 + -0x58) = 0;
  *(undefined8 *)(puVar21 + -0x40) = 0;
  plVar19 = (long *)0x0;
  *(undefined8 *)(puVar21 + -0x50) = 0;
  uVar12 = 0;
code_r0x004d176a:
  *(long **)(puVar21 + -0x48) = plVar19;
  do {
    puVar13 = puRam0000000000a00a40;
    uVar29 = (uint)puRam0000000000a00a40;
    if ((((ulong)puRam0000000000a00a40 & 8) != 0) && ((uVar29 & 6) != 4)) {
      puVar13 = (undefined8 *)((ulong)puRam0000000000a00a40 & 0xffffffffffffffd7);
code_r0x004d17ba:
      LOCK();
      UNLOCK();
      puVar17 = puRam0000000000a00a40;
      puRam0000000000a00a40 = puVar13;
      goto code_r0x004d1d71;
    }
    if ((uVar29 & 5) == 1) {
      puVar13 = (undefined8 *)
                ((long)puRam0000000000a00a40 +
                (-0x100 - (ulong)(puRam0000000000a00a40 < (undefined8 *)0x200)));
      goto code_r0x004d17ba;
    }
    if (((ulong)puRam0000000000a00a40 & 0x40) == 0) break;
    *(undefined **)(puVar21 + -0x80) = &UNK_004d17ea;
    uVar12 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar12,0);
  } while( true );
  uVar18 = (ulong)puRam0000000000a00a40 | 0x40;
  LOCK();
  UNLOCK();
  plVar19 = *(long **)(puVar21 + -0x40);
  *(long *)(puVar21 + -0x68) = lVar14;
  if (((ulong)puRam0000000000a00a40 & 4) == 0) {
    puVar24 = &UNK_0015e550;
    puVar25 = &UNK_0016b375;
    uVar20 = 0x87f;
    puRam0000000000a00a40 = (undefined8 *)uVar18;
    goto code_r0x004d1e38;
  }
  plVar26 = (long *)((ulong)puRam0000000000a00a40 & 0xffffffffffffff00);
  if (((ulong)puRam0000000000a00a40 & 1) != 0) {
    plVar19 = *(long **)(puVar21 + -0x40);
    if (0x100 < (long)(plVar26[5] & 0xffffffffffffff00U)) {
      puVar17 = (undefined8 *)(plVar26[5] - 0x100);
      plVar26[5] = (long)puVar17;
      goto code_r0x004d1cb8;
    }
  }
  *(long **)(puVar21 + -0x38) = plVar26;
  puRam0000000000a00a40 = (undefined8 *)uVar18;
  if (plVar19 != (long *)0x0) {
    if (*(char *)((long)plVar26 + 0x13) == '\0') {
      puVar24 = &UNK_00174375;
      puVar25 = &UNK_0017439c;
      uVar20 = 0x8b7;
      goto code_r0x004d1e38;
    }
    if ((char)plVar19[2] == '\0') {
      *(undefined1 *)(plVar19 + 2) = 1;
      if (plVar19[1] != 0) {
        puVar24 = &UNK_0017a5d2;
        puVar25 = &UNK_00183957;
        uVar20 = 0x8bd;
        goto code_r0x004d1e38;
      }
      if (plVar19 != plVar26) {
        *(long *)(puVar21 + -0x70) = *plVar19;
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1869;
        cVar10 = func_0x004cf840();
        plVar26 = *(long **)(puVar21 + -0x38);
        if (cVar10 != '\0') {
          *(undefined8 *)(*(long *)(puVar21 + -0x40) + 8) = *(undefined8 *)(puVar21 + -0x70);
        }
      }
    }
  }
  puVar17 = (undefined8 *)*plVar26;
  if ((*(undefined **)puVar17[4] == &UNK_001ff6d0) && (((undefined8 *)puVar17[4])[1] == 0)) {
    *(undefined1 *)((long)puVar17 + 0x11) = 1;
    *(undefined8 *)(puVar21 + -0x58) = 0x20;
    plVar19 = plVar26;
  }
  else {
    if ((*(long *)(puVar21 + -0x50) == 0) ||
       ((*(long **)(puVar21 + -0x40) != plVar26 &&
        (puVar17 = *(undefined8 **)(*(long *)(puVar21 + -0x50) + 0x20),
        (undefined *)*puVar17 != &UNK_001ff6d0)))) {
      plVar19 = *(long **)(puVar21 + -0x40);
      if (plVar19 == plVar26) {
        plVar26[5] = 0;
        *(undefined1 *)((long)plVar26 + 0x13) = 0;
        puRam0000000000a00a40 = (undefined8 *)((ulong)puVar13 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      plVar15 = plVar19;
      if (plVar19 == (long *)0x0) {
        plVar15 = plVar26;
      }
      plVar15 = (long *)*plVar15;
      *(undefined1 *)(plVar26 + 2) = 0;
      if (plVar26[1] == 0) {
        *(undefined1 *)((long)plVar26 + 0x13) = 1;
        puRam0000000000a00a40 = puVar13;
        do {
          *(undefined1 *)((long)plVar15 + 0x11) = 0;
          if (*(long *)(plVar15[4] + 8) == 0) {
code_r0x004d1916:
            if (*(long *)(puVar21 + -0x50) == 0) {
              *(undefined1 *)((long)plVar15 + 0x11) = 1;
              if (*(undefined **)plVar15[4] == &UNK_001ff6d0) {
                *(undefined8 *)(puVar21 + -0x58) = 0x20;
                *(long **)(puVar21 + -0x40) = plVar26;
                *(long **)(puVar21 + -0x50) = plVar15;
                lVar14 = *(long *)(puVar21 + -0x68);
                goto code_r0x004d176a;
              }
              *(long **)(puVar21 + -0x50) = plVar15;
            }
            else {
              plVar19 = *(long **)(puVar21 + -0x48);
              if (*(undefined **)plVar15[4] == &UNK_001ff6f8) {
                *(undefined1 *)((long)plVar15 + 0x11) = 1;
              }
              else {
                *(undefined8 *)(puVar21 + -0x58) = 0x20;
              }
            }
          }
          else {
            pcVar4 = *(code **)(*(long *)(plVar15[4] + 8) + 0x10);
            *(undefined **)(puVar21 + -0x80) = &UNK_004d190e;
            cVar10 = (*pcVar4)();
            plVar26 = *(long **)(puVar21 + -0x38);
            if (cVar10 != '\0') goto code_r0x004d1916;
            plVar19 = *(long **)(puVar21 + -0x48);
          }
          *(long **)(puVar21 + -0x48) = plVar19;
          if ((*(char *)((long)plVar15 + 0x11) == '\0') &&
             (plVar19 = (long *)plVar15[1], plVar19 != (long *)0x0)) {
            plVar28 = plVar15;
            for (plVar27 = (long *)plVar19[1]; plVar1 = plVar19, plVar27 != (long *)0x0;
                plVar27 = (long *)plVar27[1]) {
              plVar28[1] = (long)plVar27;
              plVar19 = plVar27;
              plVar28 = plVar1;
            }
            plVar15[1] = (long)plVar1;
            plVar15 = plVar1;
          }
          if (plVar15 == plVar26) goto code_r0x004d19b0;
          plVar19 = plVar15;
          plVar15 = (long *)*plVar15;
        } while( true );
      }
      puVar24 = &UNK_0015feeb;
      puVar25 = &UNK_00183957;
      uVar20 = 0x8fd;
      goto code_r0x004d1e38;
    }
    plVar19 = *(long **)(puVar21 + -0x48);
    if (*(long **)(puVar21 + -0x48) == (long *)0x0) {
      plVar19 = plVar26;
    }
    puVar17 = *(undefined8 **)(puVar21 + -0x50);
  }
  if ((undefined8 *)*plVar19 != puVar17) {
    puVar24 = &UNK_0018839e;
    puVar25 = &UNK_001899ff;
    uVar20 = 0x936;
    goto code_r0x004d1e38;
  }
  plVar15 = (long *)(puVar21 + -0x60);
  bVar8 = 0;
  plVar27 = plVar26;
  goto code_r0x004d1b12;
code_r0x004d19b0:
  *(long **)(puVar21 + -0x40) = plVar26;
  lVar14 = *(long *)(puVar21 + -0x68);
  plVar19 = *(long **)(puVar21 + -0x48);
  goto code_r0x004d176a;
code_r0x004d1b12:
  do {
    plVar28 = (long *)*plVar19;
    if (*(char *)((long)plVar28 + 0x11) == '\x01') {
      if (plVar19[1] != 0) goto code_r0x004d1e3f;
      lVar16 = *plVar28;
      *plVar19 = lVar16;
      if (plVar26 == plVar28) {
        bVar31 = plVar19 != plVar26;
        plVar26 = (long *)0x0;
        if (bVar31) {
          plVar26 = plVar19;
        }
      }
      else if (plVar19 != plVar26) {
        if ((*(long *)plVar19[4] == **(long **)(lVar16 + 0x20)) &&
           ((int)plVar19[3] == *(int *)(lVar16 + 0x18))) {
          pauVar5 = (undefined1 (*) [16])((long *)plVar19[4])[1];
          pauVar6 = (undefined1 (*) [16])(*(long **)(lVar16 + 0x20))[1];
          if ((pauVar5 == (undefined1 (*) [16])0x0) || (pauVar6 == (undefined1 (*) [16])0x0)) {
            bVar31 = pauVar5 == pauVar6;
          }
          else {
            if ((*(long *)pauVar5[1] != *(long *)pauVar6[1]) ||
               (*(long *)(pauVar5[1] + 8) != *(long *)(pauVar6[1] + 8))) goto code_r0x004d1bd5;
            auVar3 = *pauVar5;
            auVar32[0] = -((*pauVar6)[0] == auVar3[0]);
            auVar32[1] = -((*pauVar6)[1] == auVar3[1]);
            auVar32[2] = -((*pauVar6)[2] == auVar3[2]);
            auVar32[3] = -((*pauVar6)[3] == auVar3[3]);
            auVar32[4] = -((*pauVar6)[4] == auVar3[4]);
            auVar32[5] = -((*pauVar6)[5] == auVar3[5]);
            auVar32[6] = -((*pauVar6)[6] == auVar3[6]);
            auVar32[7] = -((*pauVar6)[7] == auVar3[7]);
            auVar32[8] = -((*pauVar6)[8] == auVar3[8]);
            auVar32[9] = -((*pauVar6)[9] == auVar3[9]);
            auVar32[10] = -((*pauVar6)[10] == auVar3[10]);
            auVar32[0xb] = -((*pauVar6)[0xb] == auVar3[0xb]);
            auVar32[0xc] = -((*pauVar6)[0xc] == auVar3[0xc]);
            auVar32[0xd] = -((*pauVar6)[0xd] == auVar3[0xd]);
            auVar32[0xe] = -((*pauVar6)[0xe] == auVar3[0xe]);
            auVar32[0xf] = -((*pauVar6)[0xf] == auVar3[0xf]);
            bVar31 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff;
          }
          plVar27 = *(long **)(puVar21 + -0x38);
          if (bVar31) {
            if (*(long *)(lVar16 + 8) == 0) {
              plVar19[1] = lVar16;
            }
            else {
              plVar19[1] = *(long *)(lVar16 + 8);
            }
          }
        }
        else {
code_r0x004d1bd5:
          plVar27 = *(long **)(puVar21 + -0x38);
        }
      }
      *plVar28 = *plVar15;
      *plVar15 = (long)plVar28;
      if ((plVar26 != plVar27) ||
         (plVar1 = plVar28 + 4, plVar15 = plVar28, plVar28 = plVar19,
         *(undefined **)*plVar1 == &UNK_001ff6d0)) break;
    }
    else {
      plVar19 = (long *)plVar28[1];
      bVar8 = 1;
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar28;
        for (plVar9 = (long *)plVar19[1]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
          plVar1[1] = (long)plVar9;
          plVar1 = plVar19;
          plVar19 = plVar9;
        }
        plVar28[1] = (long)plVar19;
        plVar28 = plVar19;
      }
    }
    plVar19 = plVar28;
  } while (!(bool)(plVar28 == plVar26 & bVar8));
  uVar18 = *(ulong *)(puVar21 + -0x58);
  if (*(long *)(puVar21 + -0x60) != 1) {
    if (plVar26 == (long *)0x0) {
      puRam0000000000a00a40 = (undefined8 *)((ulong)(uVar29 & 0x10) | 2);
      puVar17 = (undefined8 *)0x0;
code_r0x004d1cb8:
      puVar13 = (undefined8 *)0x0;
    }
    else {
      plVar26[5] = 0;
      *(undefined1 *)((long)plVar26 + 0x13) = 0;
      *(undefined **)(puVar21 + -0x80) = &UNK_004d1c94;
      puVar17 = (undefined8 *)
                _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (puVar17 == (undefined8 *)0x0) {
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1d92;
        puVar17 = (undefined8 *)
                  _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      puRam0000000000a00a40 = (undefined8 *)(uVar18 | (ulong)plVar26 | (ulong)(uVar29 & 0x10) | 6);
      *(undefined1 *)(puVar17 + 0xb) = 1;
      puVar13 = puVar17;
    }
    if (*(long *)(puVar21 + -0x60) != 1) {
      *(undefined8 **)(puVar21 + -0x48) = puVar13;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar16 = rdtsc();
      }
      else {
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1cde;
        lVar16 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar30 = 0;
      puVar13 = *(undefined8 **)(puVar21 + -0x60);
      do {
        if (*(char *)((long)puVar13 + 0x12) == '\0') {
          lVar30 = lVar30 + ((lVar16 >> 1) - *(long *)(puVar13[4] + 0x30));
          *(long *)(puVar13[4] + 0x30) = lVar16 >> 1;
          *(undefined1 *)(puVar13[4] + 0x38) = 1;
        }
        puVar7 = (undefined8 *)*puVar13;
        *puVar13 = 0;
        *(undefined4 *)((long)puVar13 + 0x1c) = 0;
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1d2f;
        puVar17 = (undefined8 *)AbslInternalPerThreadSemPost_lts_20260526();
        *(undefined8 **)(puVar21 + -0x60) = puVar7;
        puVar13 = puVar7;
      } while (puVar7 != (undefined8 *)0x1);
      puVar13 = *(undefined8 **)(puVar21 + -0x48);
      if (0 < lVar30) {
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1d5b;
        (*pcRam00000000009fb820)(&UNK_00161854,0xa00a40,lVar30);
        *(undefined **)(puVar21 + -0x80) = &UNK_004d1d67;
        puVar17 = (undefined8 *)(*pcRam00000000009fb810)(lVar30);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar13 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar14 != 0) {
      *(undefined **)(puVar21 + -0x80) = &UNK_004d1d7b;
      puVar17 = (undefined8 *)
                _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)((long)puVar17 + 0x4c) = *(int *)((long)puVar17 + 0x4c) + -1;
    }
    return puVar17;
  }
  puVar24 = &UNK_00170ab6;
  puVar25 = &UNK_001648fb;
  uVar20 = 0x94d;
code_r0x004d1e38:
  do {
    *(undefined **)(puVar21 + -0x80) = &UNK_004d1e3f;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar20,&UNK_00183943,puVar24,puVar25);
code_r0x004d1e3f:
    puVar24 = &UNK_0018b20f;
    puVar25 = &UNK_00186ab0;
    uVar20 = 0x444;
  } while( true );
}


