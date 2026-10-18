// Function: _ZN4absl12lts_2026052612log_internal13RemoveLogSinkEPNS0_7LogSinkE
// Address: 004cea00
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

undefined8 * _ZN4absl12lts_2026052612log_internal13RemoveLogSinkEPNS0_7LogSinkE(long param_1)

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
  long unaff_RBX;
  undefined1 *unaff_RBP;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  undefined8 unaff_R12;
  long lVar28;
  undefined8 unaff_R13;
  long *unaff_R14;
  undefined8 unaff_R15;
  long *in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  long lStack_20;
  
  puVar21 = &stack0xfffffffffffffff8;
  lStack_20 = in_FS_OFFSET[5];
  if ((cRam0000000000a00a60 == '\0') && (iVar11 = __cxa_guard_acquire(0xa00a60), iVar11 != 0)) {
    func_0x004cec20();
    __cxa_guard_release(0xa00a60);
  }
  _ZN4absl12lts_202605265Mutex4lockEv(0xa00a40);
  plVar19 = plRam0000000000a00a50;
  plVar24 = plRam0000000000a00a48;
  if (plRam0000000000a00a48 == plRam0000000000a00a50) {
code_r0x004cea60:
    if (plVar24 != plRam0000000000a00a50) {
      func_0x0099bd90(plVar24,plVar24 + 1,(long)plRam0000000000a00a50 - (long)(plVar24 + 1));
      puVar13 = puRam0000000000a00a40;
      plVar19 = plVar19 + -1;
      plRam0000000000a00a50 = plVar19;
      if (in_FS_OFFSET[5] == lStack_20) {
        param_1 = unaff_RBX;
        puVar21 = unaff_RBP;
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
      if (*plVar24 == param_1) goto code_r0x004cea60;
      plVar24 = plVar24 + 1;
    } while (plVar24 != plRam0000000000a00a50);
  }
  unaff_R14 = plVar19;
  _ZN4absl12lts_202605265Mutex6unlockEv(0xa00a40);
  puStack_28 = &UNK_0015e503;
  uStack_2c = 3;
  uStack_30 = 0xe3;
  _ZNK4absl12lts_2026052613base_internal10AtomicHookIPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEclIJS3_RKS5_iRA34_S4_EEEvDpOT_
            (_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE,&uStack_2c,&puStack_28
             ,&uStack_30,&UNK_001774dd);
  if ((cRam0000000000a00a60 == '\0') && (iVar11 = __cxa_guard_acquire(0xa00a60), iVar11 != 0)) {
    func_0x004cec20();
    __cxa_guard_release(0xa00a60);
  }
  if (*(char *)(*in_FS_OFFSET + -0xc3) == '\x01') {
    puVar13 = (undefined8 *)_ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
    plVar24 = plRam0000000000a00a50;
    for (plVar19 = plRam0000000000a00a48; plVar19 != plVar24; plVar19 = plVar19 + 1) {
      puVar13 = (undefined8 *)(**(code **)(*(long *)*plVar19 + 0x18))();
    }
    return puVar13;
  }
  puVar2 = (undefined1 *)(*in_FS_OFFSET + -0xc3);
  _ZN4absl12lts_202605265Mutex11lock_sharedEv(0xa00a40);
  *puVar2 = 1;
  plVar24 = plRam0000000000a00a50;
  for (plVar19 = plRam0000000000a00a48; plVar19 != plVar24; plVar19 = plVar19 + 1) {
    (**(code **)(*(long *)*plVar19 + 0x18))();
  }
  *puVar2 = 0;
  register0x00000020 = (BADSPACEBASE *)auStack_38;
  puVar13 = puRam0000000000a00a40;
  while (((uint)puVar13 & 0x15) == 1) {
    LOCK();
    bVar29 = puVar13 == puRam0000000000a00a40;
    puVar17 = (undefined8 *)((long)puVar13 + (-0x100 - (ulong)(puVar13 < (undefined8 *)0x200)));
    if (!bVar29) {
      puVar13 = puRam0000000000a00a40;
      puVar17 = puRam0000000000a00a40;
    }
    puRam0000000000a00a40 = puVar17;
    UNLOCK();
    if (bVar29) {
      return puVar13;
    }
  }
_ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE:
  *(undefined1 **)((long)register0x00000020 + -8) = puVar21;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(long *)((long)register0x00000020 + -0x30) = param_1;
  *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d16ec;
  lVar14 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar14 != 0) {
    *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + 1;
  }
  puVar13 = puRam0000000000a00a40;
  *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1703;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
  *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1712;
  func_0x004d0510(puVar13,&UNK_00159a73);
  if (((ulong)puVar13 & 0x10) != 0) {
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d172b;
    func_0x004d0240(0xa00a40,(((ulong)puVar13 & 8) == 0) + '\b');
  }
  *(undefined8 *)((long)register0x00000020 + -0x60) = 1;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
  plVar19 = (long *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
  uVar12 = 0;
code_r0x004d176a:
  *(long **)((long)register0x00000020 + -0x48) = plVar19;
  do {
    puVar13 = puRam0000000000a00a40;
    uVar27 = (uint)puRam0000000000a00a40;
    if ((((ulong)puRam0000000000a00a40 & 8) != 0) && ((uVar27 & 6) != 4)) {
      puVar13 = (undefined8 *)((ulong)puRam0000000000a00a40 & 0xffffffffffffffd7);
code_r0x004d17ba:
      LOCK();
      UNLOCK();
      puVar17 = puRam0000000000a00a40;
      puRam0000000000a00a40 = puVar13;
      goto code_r0x004d1d71;
    }
    if ((uVar27 & 5) == 1) {
      puVar13 = (undefined8 *)
                ((long)puRam0000000000a00a40 +
                (-0x100 - (ulong)(puRam0000000000a00a40 < (undefined8 *)0x200)));
      goto code_r0x004d17ba;
    }
    if (((ulong)puRam0000000000a00a40 & 0x40) == 0) break;
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d17ea;
    uVar12 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar12,0);
  } while( true );
  uVar18 = (ulong)puRam0000000000a00a40 | 0x40;
  LOCK();
  UNLOCK();
  plVar19 = *(long **)((long)register0x00000020 + -0x40);
  *(long *)((long)register0x00000020 + -0x68) = lVar14;
  if (((ulong)puRam0000000000a00a40 & 4) == 0) {
    puVar22 = &UNK_0015e550;
    puVar23 = &UNK_0016b375;
    uVar20 = 0x87f;
    puRam0000000000a00a40 = (undefined8 *)uVar18;
    goto code_r0x004d1e38;
  }
  plVar24 = (long *)((ulong)puRam0000000000a00a40 & 0xffffffffffffff00);
  if (((ulong)puRam0000000000a00a40 & 1) != 0) {
    plVar19 = *(long **)((long)register0x00000020 + -0x40);
    if (0x100 < (long)(plVar24[5] & 0xffffffffffffff00U)) {
      puVar17 = (undefined8 *)(plVar24[5] - 0x100);
      plVar24[5] = (long)puVar17;
      goto code_r0x004d1cb8;
    }
  }
  *(long **)((long)register0x00000020 + -0x38) = plVar24;
  puRam0000000000a00a40 = (undefined8 *)uVar18;
  if (plVar19 != (long *)0x0) {
    if (*(char *)((long)plVar24 + 0x13) == '\0') {
      puVar22 = &UNK_00174375;
      puVar23 = &UNK_0017439c;
      uVar20 = 0x8b7;
      goto code_r0x004d1e38;
    }
    if ((char)plVar19[2] == '\0') {
      *(undefined1 *)(plVar19 + 2) = 1;
      if (plVar19[1] != 0) {
        puVar22 = &UNK_0017a5d2;
        puVar23 = &UNK_00183957;
        uVar20 = 0x8bd;
        goto code_r0x004d1e38;
      }
      if (plVar19 != plVar24) {
        *(long *)((long)register0x00000020 + -0x70) = *plVar19;
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1869;
        cVar10 = func_0x004cf840();
        plVar24 = *(long **)((long)register0x00000020 + -0x38);
        if (cVar10 != '\0') {
          *(undefined8 *)(*(long *)((long)register0x00000020 + -0x40) + 8) =
               *(undefined8 *)((long)register0x00000020 + -0x70);
        }
      }
    }
  }
  puVar17 = (undefined8 *)*plVar24;
  if ((*(undefined **)puVar17[4] == &UNK_001ff6d0) && (((undefined8 *)puVar17[4])[1] == 0)) {
    *(undefined1 *)((long)puVar17 + 0x11) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x20;
    plVar19 = plVar24;
  }
  else {
    if ((*(long *)((long)register0x00000020 + -0x50) == 0) ||
       ((*(long **)((long)register0x00000020 + -0x40) != plVar24 &&
        (puVar17 = *(undefined8 **)(*(long *)((long)register0x00000020 + -0x50) + 0x20),
        (undefined *)*puVar17 != &UNK_001ff6d0)))) {
      plVar19 = *(long **)((long)register0x00000020 + -0x40);
      if (plVar19 == plVar24) {
        plVar24[5] = 0;
        *(undefined1 *)((long)plVar24 + 0x13) = 0;
        puRam0000000000a00a40 = (undefined8 *)((ulong)puVar13 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      plVar15 = plVar19;
      if (plVar19 == (long *)0x0) {
        plVar15 = plVar24;
      }
      plVar15 = (long *)*plVar15;
      *(undefined1 *)(plVar24 + 2) = 0;
      if (plVar24[1] == 0) {
        *(undefined1 *)((long)plVar24 + 0x13) = 1;
        puRam0000000000a00a40 = puVar13;
        do {
          *(undefined1 *)((long)plVar15 + 0x11) = 0;
          if (*(long *)(plVar15[4] + 8) == 0) {
code_r0x004d1916:
            if (*(long *)((long)register0x00000020 + -0x50) == 0) {
              *(undefined1 *)((long)plVar15 + 0x11) = 1;
              if (*(undefined **)plVar15[4] == &UNK_001ff6d0) {
                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x20;
                *(long **)((long)register0x00000020 + -0x40) = plVar24;
                *(long **)((long)register0x00000020 + -0x50) = plVar15;
                lVar14 = *(long *)((long)register0x00000020 + -0x68);
                goto code_r0x004d176a;
              }
              *(long **)((long)register0x00000020 + -0x50) = plVar15;
            }
            else {
              plVar19 = *(long **)((long)register0x00000020 + -0x48);
              if (*(undefined **)plVar15[4] == &UNK_001ff6f8) {
                *(undefined1 *)((long)plVar15 + 0x11) = 1;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x20;
              }
            }
          }
          else {
            pcVar4 = *(code **)(*(long *)(plVar15[4] + 8) + 0x10);
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d190e;
            cVar10 = (*pcVar4)();
            plVar24 = *(long **)((long)register0x00000020 + -0x38);
            if (cVar10 != '\0') goto code_r0x004d1916;
            plVar19 = *(long **)((long)register0x00000020 + -0x48);
          }
          *(long **)((long)register0x00000020 + -0x48) = plVar19;
          if ((*(char *)((long)plVar15 + 0x11) == '\0') &&
             (plVar19 = (long *)plVar15[1], plVar19 != (long *)0x0)) {
            plVar26 = plVar15;
            for (plVar25 = (long *)plVar19[1]; plVar1 = plVar19, plVar25 != (long *)0x0;
                plVar25 = (long *)plVar25[1]) {
              plVar26[1] = (long)plVar25;
              plVar19 = plVar25;
              plVar26 = plVar1;
            }
            plVar15[1] = (long)plVar1;
            plVar15 = plVar1;
          }
          if (plVar15 == plVar24) goto code_r0x004d19b0;
          plVar19 = plVar15;
          plVar15 = (long *)*plVar15;
        } while( true );
      }
      puVar22 = &UNK_0015feeb;
      puVar23 = &UNK_00183957;
      uVar20 = 0x8fd;
      goto code_r0x004d1e38;
    }
    plVar19 = *(long **)((long)register0x00000020 + -0x48);
    if (*(long **)((long)register0x00000020 + -0x48) == (long *)0x0) {
      plVar19 = plVar24;
    }
    puVar17 = *(undefined8 **)((long)register0x00000020 + -0x50);
  }
  if ((undefined8 *)*plVar19 != puVar17) {
    puVar22 = &UNK_0018839e;
    puVar23 = &UNK_001899ff;
    uVar20 = 0x936;
    goto code_r0x004d1e38;
  }
  plVar15 = (long *)((long)register0x00000020 + -0x60);
  bVar8 = 0;
  plVar25 = plVar24;
  goto code_r0x004d1b12;
code_r0x004d19b0:
  *(long **)((long)register0x00000020 + -0x40) = plVar24;
  lVar14 = *(long *)((long)register0x00000020 + -0x68);
  plVar19 = *(long **)((long)register0x00000020 + -0x48);
  goto code_r0x004d176a;
code_r0x004d1b12:
  do {
    plVar26 = (long *)*plVar19;
    if (*(char *)((long)plVar26 + 0x11) == '\x01') {
      if (plVar19[1] != 0) goto code_r0x004d1e3f;
      lVar16 = *plVar26;
      *plVar19 = lVar16;
      if (plVar24 == plVar26) {
        bVar29 = plVar19 != plVar24;
        plVar24 = (long *)0x0;
        if (bVar29) {
          plVar24 = plVar19;
        }
      }
      else if (plVar19 != plVar24) {
        if ((*(long *)plVar19[4] == **(long **)(lVar16 + 0x20)) &&
           ((int)plVar19[3] == *(int *)(lVar16 + 0x18))) {
          pauVar5 = (undefined1 (*) [16])((long *)plVar19[4])[1];
          pauVar6 = (undefined1 (*) [16])(*(long **)(lVar16 + 0x20))[1];
          if ((pauVar5 == (undefined1 (*) [16])0x0) || (pauVar6 == (undefined1 (*) [16])0x0)) {
            bVar29 = pauVar5 == pauVar6;
          }
          else {
            if ((*(long *)pauVar5[1] != *(long *)pauVar6[1]) ||
               (*(long *)(pauVar5[1] + 8) != *(long *)(pauVar6[1] + 8))) goto code_r0x004d1bd5;
            auVar3 = *pauVar5;
            auVar30[0] = -((*pauVar6)[0] == auVar3[0]);
            auVar30[1] = -((*pauVar6)[1] == auVar3[1]);
            auVar30[2] = -((*pauVar6)[2] == auVar3[2]);
            auVar30[3] = -((*pauVar6)[3] == auVar3[3]);
            auVar30[4] = -((*pauVar6)[4] == auVar3[4]);
            auVar30[5] = -((*pauVar6)[5] == auVar3[5]);
            auVar30[6] = -((*pauVar6)[6] == auVar3[6]);
            auVar30[7] = -((*pauVar6)[7] == auVar3[7]);
            auVar30[8] = -((*pauVar6)[8] == auVar3[8]);
            auVar30[9] = -((*pauVar6)[9] == auVar3[9]);
            auVar30[10] = -((*pauVar6)[10] == auVar3[10]);
            auVar30[0xb] = -((*pauVar6)[0xb] == auVar3[0xb]);
            auVar30[0xc] = -((*pauVar6)[0xc] == auVar3[0xc]);
            auVar30[0xd] = -((*pauVar6)[0xd] == auVar3[0xd]);
            auVar30[0xe] = -((*pauVar6)[0xe] == auVar3[0xe]);
            auVar30[0xf] = -((*pauVar6)[0xf] == auVar3[0xf]);
            bVar29 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff;
          }
          plVar25 = *(long **)((long)register0x00000020 + -0x38);
          if (bVar29) {
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
          plVar25 = *(long **)((long)register0x00000020 + -0x38);
        }
      }
      *plVar26 = *plVar15;
      *plVar15 = (long)plVar26;
      if ((plVar24 != plVar25) ||
         (plVar1 = plVar26 + 4, plVar15 = plVar26, plVar26 = plVar19,
         *(undefined **)*plVar1 == &UNK_001ff6d0)) break;
    }
    else {
      plVar19 = (long *)plVar26[1];
      bVar8 = 1;
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar26;
        for (plVar9 = (long *)plVar19[1]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
          plVar1[1] = (long)plVar9;
          plVar1 = plVar19;
          plVar19 = plVar9;
        }
        plVar26[1] = (long)plVar19;
        plVar26 = plVar19;
      }
    }
    plVar19 = plVar26;
  } while (!(bool)(plVar26 == plVar24 & bVar8));
  uVar18 = *(ulong *)((long)register0x00000020 + -0x58);
  if (*(long *)((long)register0x00000020 + -0x60) != 1) {
    if (plVar24 == (long *)0x0) {
      puRam0000000000a00a40 = (undefined8 *)((ulong)(uVar27 & 0x10) | 2);
      puVar17 = (undefined8 *)0x0;
code_r0x004d1cb8:
      puVar13 = (undefined8 *)0x0;
    }
    else {
      plVar24[5] = 0;
      *(undefined1 *)((long)plVar24 + 0x13) = 0;
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1c94;
      puVar17 = (undefined8 *)
                _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (puVar17 == (undefined8 *)0x0) {
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1d92;
        puVar17 = (undefined8 *)
                  _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      puRam0000000000a00a40 = (undefined8 *)(uVar18 | (ulong)plVar24 | (ulong)(uVar27 & 0x10) | 6);
      *(undefined1 *)(puVar17 + 0xb) = 1;
      puVar13 = puVar17;
    }
    if (*(long *)((long)register0x00000020 + -0x60) != 1) {
      *(undefined8 **)((long)register0x00000020 + -0x48) = puVar13;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar16 = rdtsc();
      }
      else {
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1cde;
        lVar16 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar28 = 0;
      puVar13 = *(undefined8 **)((long)register0x00000020 + -0x60);
      do {
        if (*(char *)((long)puVar13 + 0x12) == '\0') {
          lVar28 = lVar28 + ((lVar16 >> 1) - *(long *)(puVar13[4] + 0x30));
          *(long *)(puVar13[4] + 0x30) = lVar16 >> 1;
          *(undefined1 *)(puVar13[4] + 0x38) = 1;
        }
        puVar7 = (undefined8 *)*puVar13;
        *puVar13 = 0;
        *(undefined4 *)((long)puVar13 + 0x1c) = 0;
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1d2f;
        puVar17 = (undefined8 *)AbslInternalPerThreadSemPost_lts_20260526();
        *(undefined8 **)((long)register0x00000020 + -0x60) = puVar7;
        puVar13 = puVar7;
      } while (puVar7 != (undefined8 *)0x1);
      puVar13 = *(undefined8 **)((long)register0x00000020 + -0x48);
      if (0 < lVar28) {
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1d5b;
        (*pcRam00000000009fb820)(&UNK_00161854,0xa00a40,lVar28);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1d67;
        puVar17 = (undefined8 *)(*pcRam00000000009fb810)(lVar28);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar13 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar14 != 0) {
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1d7b;
      puVar17 = (undefined8 *)
                _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)((long)puVar17 + 0x4c) = *(int *)((long)puVar17 + 0x4c) + -1;
    }
    return puVar17;
  }
  puVar22 = &UNK_00170ab6;
  puVar23 = &UNK_001648fb;
  uVar20 = 0x94d;
code_r0x004d1e38:
  do {
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004d1e3f;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar20,&UNK_00183943,puVar22,puVar23);
code_r0x004d1e3f:
    puVar22 = &UNK_0018b20f;
    puVar23 = &UNK_00186ab0;
    uVar20 = 0x444;
  } while( true );
}


