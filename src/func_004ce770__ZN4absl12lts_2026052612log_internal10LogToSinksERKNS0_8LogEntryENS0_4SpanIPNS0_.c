// Function: _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
// Address: 004ce770
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
/* WARNING: Removing unreachable block (ram,0x004d17da) */
/* WARNING: Removing unreachable block (ram,0x004d17bd) */
/* WARNING: Removing unreachable block (ram,0x004d17c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
_ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
          (long param_1,long param_2,long param_3,char param_4)

{
  undefined8 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  byte bVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 **in_RAX;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long *in_FS_OFFSET;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  ppuVar10 = (undefined8 **)(ulong)bRam0000000000a00a60;
  ppuStack_38 = in_RAX;
  if (bRam0000000000a00a60 == 0) {
    ppuStack_40 = (undefined8 **)&UNK_004ce87f;
    ppuVar10 = (undefined8 **)__cxa_guard_acquire(0xa00a60);
    if ((int)ppuVar10 != 0) {
      ppuStack_40 = (undefined8 **)&UNK_004ce88c;
      func_0x004cec20();
      ppuStack_40 = (undefined8 **)&UNK_004ce898;
      ppuVar10 = (undefined8 **)__cxa_guard_release(0xa00a60);
    }
  }
  if (param_3 != 0) {
    lVar22 = 0;
    do {
      ppuStack_40 = (undefined8 **)&UNK_004ce7bd;
      ppuVar10 = (undefined8 **)(**(code **)(**(long **)(param_2 + lVar22) + 0x10))();
      lVar22 = lVar22 + 8;
    } while (param_3 << 3 != lVar22);
  }
  if (param_4 != '\0') {
    return ppuVar10;
  }
  ppuVar10 = (undefined8 **)*in_FS_OFFSET;
  if (*(char *)((long)ppuVar10 + -0xc3) == '\x01') {
    lVar22 = *(long *)(param_1 + 0x48) + -1;
    if (lVar22 != 0) {
      ppuVar10 = (undefined8 **)fwrite(*(undefined8 *)(param_1 + 0x40),lVar22,1,_stderr);
      return ppuVar10;
    }
    return ppuVar10;
  }
  ppuStack_40 = (undefined8 **)&UNK_004ce823;
  _ZN4absl12lts_202605265Mutex11lock_sharedEv(0xa00a40);
  *(undefined1 *)((long)ppuVar10 + -0xc3) = 1;
  puVar7 = puRam0000000000a00a50;
  for (puVar23 = puRam0000000000a00a48; puVar7 != puVar23; puVar23 = puVar23 + 1) {
    ppuStack_40 = (undefined8 **)&UNK_004ce84c;
    (**(code **)(*(long *)*puVar23 + 0x10))();
  }
  *(undefined1 *)((long)ppuVar10 + -0xc3) = 0;
  ppuVar10 = ppuRam0000000000a00a40;
  while (((uint)ppuVar10 & 0x15) == 1) {
    LOCK();
    bVar24 = ppuVar10 == ppuRam0000000000a00a40;
    ppuVar12 = (undefined8 **)((long)ppuVar10 + (-0x100 - (ulong)(ppuVar10 < (undefined8 **)0x200)))
    ;
    if (!bVar24) {
      ppuVar10 = ppuRam0000000000a00a40;
      ppuVar12 = ppuRam0000000000a00a40;
    }
    ppuRam0000000000a00a40 = ppuVar12;
    UNLOCK();
    if (bVar24) {
      return ppuVar10;
    }
  }
  lVar22 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar22 != 0) {
    *(int *)(lVar22 + 0x4c) = *(int *)(lVar22 + 0x4c) + 1;
  }
  ppuVar10 = ppuRam0000000000a00a40;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
  func_0x004d0510(ppuVar10,&UNK_00159a73);
  if (((ulong)ppuVar10 & 0x10) != 0) {
    func_0x004d0240(0xa00a40,(((ulong)ppuVar10 & 8) == 0) + '\b');
  }
  puStack_60 = (undefined8 *)0x1;
  uStack_58 = 0;
  ppuStack_40 = (undefined8 **)0x0;
  ppuVar10 = (undefined8 **)0x0;
  ppuStack_50 = (undefined8 **)0x0;
  uVar9 = 0;
code_r0x004d176a:
  ppuStack_48 = ppuVar10;
  do {
    ppuVar10 = ppuRam0000000000a00a40;
    uVar20 = (uint)ppuRam0000000000a00a40;
    if ((((ulong)ppuRam0000000000a00a40 & 8) != 0) && ((uVar20 & 6) != 4)) {
      ppuVar10 = (undefined8 **)((ulong)ppuRam0000000000a00a40 & 0xffffffffffffffd7);
code_r0x004d17ba:
      LOCK();
      UNLOCK();
      ppuVar12 = ppuRam0000000000a00a40;
      ppuRam0000000000a00a40 = ppuVar10;
      goto code_r0x004d1d71;
    }
    if ((uVar20 & 5) == 1) {
      ppuVar10 = (undefined8 **)
                 ((long)ppuRam0000000000a00a40 +
                 (-0x100 - (ulong)(ppuRam0000000000a00a40 < (undefined8 **)0x200)));
      goto code_r0x004d17ba;
    }
    if (((ulong)ppuRam0000000000a00a40 & 0x40) == 0) break;
    uVar9 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar9,0);
  } while( true );
  uVar13 = (ulong)ppuRam0000000000a00a40 | 0x40;
  LOCK();
  UNLOCK();
  if (((ulong)ppuRam0000000000a00a40 & 4) == 0) {
    puVar15 = &UNK_0015e550;
    puVar16 = &UNK_0016b375;
    uVar14 = 0x87f;
    ppuRam0000000000a00a40 = (undefined8 **)uVar13;
    goto code_r0x004d1e38;
  }
  ppuVar17 = (undefined8 **)((ulong)ppuRam0000000000a00a40 & 0xffffffffffffff00);
  if ((((ulong)ppuRam0000000000a00a40 & 1) != 0) &&
     (0x100 < (long)((ulong)ppuVar17[5] & 0xffffffffffffff00))) {
    ppuVar12 = (undefined8 **)(ppuVar17[5] + -0x20);
    ppuVar17[5] = ppuVar12;
    goto code_r0x004d1cb8;
  }
  ppuStack_38 = ppuVar17;
  ppuRam0000000000a00a40 = (undefined8 **)uVar13;
  if (ppuStack_40 != (undefined8 **)0x0) {
    if (*(char *)((long)ppuVar17 + 0x13) == '\0') {
      puVar15 = &UNK_00174375;
      puVar16 = &UNK_0017439c;
      uVar14 = 0x8b7;
      goto code_r0x004d1e38;
    }
    if (*(char *)(ppuStack_40 + 2) == '\0') {
      *(undefined1 *)(ppuStack_40 + 2) = 1;
      if (ppuStack_40[1] != (undefined8 *)0x0) {
        puVar15 = &UNK_0017a5d2;
        puVar16 = &UNK_00183957;
        uVar14 = 0x8bd;
        goto code_r0x004d1e38;
      }
      if (ppuStack_40 != ppuVar17) {
        puVar23 = *ppuStack_40;
        cVar8 = func_0x004cf840();
        if (cVar8 != '\0') {
          ppuStack_40[1] = puVar23;
        }
      }
    }
  }
  ppuVar12 = (undefined8 **)*ppuStack_38;
  if (((undefined *)*ppuVar12[4] == &UNK_001ff6d0) && (ppuVar12[4][1] == 0)) {
    *(undefined1 *)((long)ppuVar12 + 0x11) = 1;
    uStack_58 = 0x20;
    ppuVar10 = ppuStack_38;
  }
  else {
    if ((ppuStack_50 == (undefined8 **)0x0) ||
       ((ppuStack_40 != ppuStack_38 &&
        (ppuVar12 = (undefined8 **)ppuStack_50[4], *ppuVar12 != (undefined8 *)&UNK_001ff6d0)))) {
      if (ppuStack_40 == ppuStack_38) {
        ppuStack_38[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 0;
        ppuRam0000000000a00a40 = (undefined8 **)((ulong)ppuVar10 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      ppuVar12 = ppuStack_40;
      if (ppuStack_40 == (undefined8 **)0x0) {
        ppuVar12 = ppuStack_38;
      }
      ppuVar12 = (undefined8 **)*ppuVar12;
      *(undefined1 *)(ppuStack_38 + 2) = 0;
      if (ppuStack_38[1] == (undefined8 *)0x0) {
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 1;
        ppuVar17 = ppuStack_38;
        ppuVar18 = ppuStack_40;
        ppuRam0000000000a00a40 = ppuVar10;
        while( true ) {
          ppuVar10 = ppuVar18;
          *(undefined1 *)((long)ppuVar12 + 0x11) = 0;
          if ((ppuVar12[4][1] == 0) ||
             (cVar8 = (**(code **)(ppuVar12[4][1] + 0x10))(), ppuVar17 = ppuStack_38, cVar8 != '\0')
             ) {
            if (ppuStack_50 == (undefined8 **)0x0) {
              *(undefined1 *)((long)ppuVar12 + 0x11) = 1;
              if ((undefined *)*ppuVar12[4] == &UNK_001ff6d0) {
                uStack_58 = 0x20;
                ppuStack_40 = ppuVar17;
                ppuStack_50 = ppuVar12;
                goto code_r0x004d176a;
              }
              ppuStack_50 = ppuVar12;
              ppuStack_48 = ppuVar10;
            }
            else if ((undefined *)*ppuVar12[4] == &UNK_001ff6f8) {
              *(undefined1 *)((long)ppuVar12 + 0x11) = 1;
            }
            else {
              uStack_58 = 0x20;
            }
          }
          ppuVar10 = ppuStack_48;
          if ((*(char *)((long)ppuVar12 + 0x11) == '\0') &&
             (ppuVar18 = (undefined8 **)ppuVar12[1], ppuVar18 != (undefined8 **)0x0)) {
            ppuVar1 = ppuVar12;
            for (ppuVar19 = (undefined8 **)ppuVar18[1]; ppuVar6 = ppuVar18,
                ppuVar19 != (undefined8 **)0x0; ppuVar19 = (undefined8 **)ppuVar19[1]) {
              ppuVar1[1] = ppuVar19;
              ppuVar18 = ppuVar19;
              ppuVar1 = ppuVar6;
            }
            ppuVar12[1] = ppuVar6;
            ppuVar12 = ppuVar6;
          }
          if (ppuVar12 == ppuVar17) break;
          ppuVar18 = ppuVar12;
          ppuVar12 = (undefined8 **)*ppuVar12;
          ppuStack_48 = ppuVar10;
        }
        ppuStack_40 = ppuVar17;
        goto code_r0x004d176a;
      }
      puVar15 = &UNK_0015feeb;
      puVar16 = &UNK_00183957;
      uVar14 = 0x8fd;
      goto code_r0x004d1e38;
    }
    ppuVar12 = ppuStack_50;
    ppuVar10 = ppuStack_48;
    if (ppuStack_48 == (undefined8 **)0x0) {
      ppuVar10 = ppuStack_38;
    }
  }
  if ((undefined8 **)*ppuVar10 != ppuVar12) {
    puVar15 = &UNK_0018839e;
    puVar16 = &UNK_001899ff;
    uVar14 = 0x936;
    goto code_r0x004d1e38;
  }
  ppuVar12 = &puStack_60;
  bVar5 = 0;
  ppuVar17 = ppuStack_38;
  ppuVar18 = ppuStack_38;
  do {
    ppuVar19 = (undefined8 **)*ppuVar10;
    if (*(char *)((long)ppuVar19 + 0x11) == '\x01') {
      if (ppuVar10[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar23 = *ppuVar19;
      *ppuVar10 = puVar23;
      if (ppuVar17 == ppuVar19) {
        bVar24 = ppuVar10 != ppuVar17;
        ppuVar17 = (undefined8 **)0x0;
        if (bVar24) {
          ppuVar17 = ppuVar10;
        }
      }
      else if (ppuVar10 != ppuVar17) {
        ppuVar18 = ppuStack_38;
        if ((*ppuVar10[4] == *(long *)puVar23[4]) &&
           (*(int *)(ppuVar10 + 3) == *(int *)(puVar23 + 3))) {
          pauVar3 = (undefined1 (*) [16])ppuVar10[4][1];
          pauVar4 = (undefined1 (*) [16])((long *)puVar23[4])[1];
          if ((pauVar3 == (undefined1 (*) [16])0x0) || (pauVar4 == (undefined1 (*) [16])0x0)) {
            bVar24 = pauVar3 == pauVar4;
          }
          else {
            if ((*(long *)pauVar3[1] != *(long *)pauVar4[1]) ||
               (*(long *)(pauVar3[1] + 8) != *(long *)(pauVar4[1] + 8))) goto code_r0x004d1bd9;
            auVar2 = *pauVar3;
            auVar25[0] = -((*pauVar4)[0] == auVar2[0]);
            auVar25[1] = -((*pauVar4)[1] == auVar2[1]);
            auVar25[2] = -((*pauVar4)[2] == auVar2[2]);
            auVar25[3] = -((*pauVar4)[3] == auVar2[3]);
            auVar25[4] = -((*pauVar4)[4] == auVar2[4]);
            auVar25[5] = -((*pauVar4)[5] == auVar2[5]);
            auVar25[6] = -((*pauVar4)[6] == auVar2[6]);
            auVar25[7] = -((*pauVar4)[7] == auVar2[7]);
            auVar25[8] = -((*pauVar4)[8] == auVar2[8]);
            auVar25[9] = -((*pauVar4)[9] == auVar2[9]);
            auVar25[10] = -((*pauVar4)[10] == auVar2[10]);
            auVar25[0xb] = -((*pauVar4)[0xb] == auVar2[0xb]);
            auVar25[0xc] = -((*pauVar4)[0xc] == auVar2[0xc]);
            auVar25[0xd] = -((*pauVar4)[0xd] == auVar2[0xd]);
            auVar25[0xe] = -((*pauVar4)[0xe] == auVar2[0xe]);
            auVar25[0xf] = -((*pauVar4)[0xf] == auVar2[0xf]);
            bVar24 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff;
          }
          if (bVar24) {
            if ((undefined8 *)puVar23[1] == (undefined8 *)0x0) {
              ppuVar10[1] = puVar23;
            }
            else {
              ppuVar10[1] = (undefined8 *)puVar23[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar19 = *ppuVar12;
      *ppuVar12 = ppuVar19;
      if ((ppuVar17 != ppuVar18) ||
         (ppuVar1 = ppuVar19 + 4, ppuVar12 = ppuVar19, ppuVar19 = ppuVar10,
         (undefined *)**ppuVar1 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar10 = (undefined8 **)ppuVar19[1];
      bVar5 = 1;
      if (ppuVar10 != (undefined8 **)0x0) {
        ppuVar1 = ppuVar19;
        for (ppuVar6 = (undefined8 **)ppuVar10[1]; ppuVar6 != (undefined8 **)0x0;
            ppuVar6 = (undefined8 **)ppuVar6[1]) {
          ppuVar1[1] = ppuVar6;
          ppuVar1 = ppuVar10;
          ppuVar10 = ppuVar6;
        }
        ppuVar19[1] = ppuVar10;
        ppuVar19 = ppuVar10;
      }
    }
    ppuVar10 = ppuVar19;
  } while (!(bool)(ppuVar19 == ppuVar17 & bVar5));
  if (puStack_60 != (undefined8 *)0x1) {
    if (ppuVar17 == (undefined8 **)0x0) {
      ppuRam0000000000a00a40 = (undefined8 **)((ulong)(uVar20 & 0x10) | 2);
      ppuVar12 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar10 = (undefined8 **)0x0;
    }
    else {
      ppuVar17[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar17 + 0x13) = 0;
      uVar13 = uStack_58 | (ulong)ppuVar17;
      ppuVar12 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar12 == (undefined8 **)0x0) {
        ppuVar12 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuRam0000000000a00a40 = (undefined8 **)(uVar13 | uVar20 & 0x10 | 6);
      *(undefined1 *)(ppuVar12 + 0xb) = 1;
      ppuVar10 = ppuVar12;
    }
    if (puStack_60 != (undefined8 *)0x1) {
      ppuStack_48 = ppuVar10;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar11 = rdtsc();
      }
      else {
        lVar11 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar21 = 0;
      do {
        if (*(char *)((long)puStack_60 + 0x12) == '\0') {
          lVar21 = lVar21 + ((lVar11 >> 1) - *(long *)(puStack_60[4] + 0x30));
          *(long *)(puStack_60[4] + 0x30) = lVar11 >> 1;
          *(undefined1 *)(puStack_60[4] + 0x38) = 1;
        }
        puVar23 = (undefined8 *)*puStack_60;
        *puStack_60 = 0;
        *(undefined4 *)((long)puStack_60 + 0x1c) = 0;
        ppuVar12 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
        ppuVar10 = ppuStack_48;
        puStack_60 = puVar23;
      } while (puVar23 != (undefined8 *)0x1);
      if (0 < lVar21) {
        (*pcRam00000000009fb820)(&UNK_00161854,0xa00a40,lVar21);
        ppuVar12 = (undefined8 **)(*pcRam00000000009fb810)(lVar21);
      }
    }
    if (ppuVar10 != (undefined8 **)0x0) {
      *(undefined1 *)(ppuVar10 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar22 != 0) {
      ppuVar12 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)((long)ppuVar12 + 0x4c) = *(int *)((long)ppuVar12 + 0x4c) + -1;
    }
    return ppuVar12;
  }
  puVar15 = &UNK_00170ab6;
  puVar16 = &UNK_001648fb;
  uVar14 = 0x94d;
code_r0x004d1e38:
  do {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar14,&UNK_00183943,puVar15,puVar16);
code_r0x004d1e3f:
    puVar15 = &UNK_0018b20f;
    puVar16 = &UNK_00186ab0;
    uVar14 = 0x444;
  } while( true );
}


