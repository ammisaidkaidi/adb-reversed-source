// Function: _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv
// Address: 004ceb20
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

undefined8 ** _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv(void)

{
  undefined8 **ppuVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  byte bVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  long lVar13;
  long lVar14;
  undefined8 **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  uint uVar24;
  long lVar25;
  long *in_FS_OFFSET;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  undefined *puStack_30;
  
  if (cRam0000000000a00a60 == '\0') {
    puStack_30 = &UNK_004cebf7;
    iVar10 = __cxa_guard_acquire(0xa00a60);
    if (iVar10 != 0) {
      puStack_30 = &UNK_004cec04;
      func_0x004cec20();
      puStack_30 = &UNK_004cec10;
      __cxa_guard_release(0xa00a60);
    }
  }
  if (*(char *)(*in_FS_OFFSET + -0xc3) == '\x01') {
    puStack_30 = &UNK_004ceb5a;
    ppuVar12 = (undefined8 **)_ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
    puVar8 = puRam0000000000a00a50;
    for (puVar18 = puRam0000000000a00a48; puVar18 != puVar8; puVar18 = puVar18 + 1) {
      puStack_30 = &UNK_004ceb79;
      ppuVar12 = (undefined8 **)(**(code **)(*(long *)*puVar18 + 0x18))();
    }
    return ppuVar12;
  }
  puVar2 = (undefined1 *)(*in_FS_OFFSET + -0xc3);
  puStack_30 = &UNK_004ceba0;
  _ZN4absl12lts_202605265Mutex11lock_sharedEv(0xa00a40);
  *puVar2 = 1;
  puVar8 = puRam0000000000a00a50;
  for (puVar18 = puRam0000000000a00a48; puVar18 != puVar8; puVar18 = puVar18 + 1) {
    puStack_30 = &UNK_004cebc9;
    (**(code **)(*(long *)*puVar18 + 0x18))();
  }
  *puVar2 = 0;
  ppuVar12 = ppuRam0000000000a00a40;
  while (((uint)ppuVar12 & 0x15) == 1) {
    LOCK();
    bVar26 = ppuVar12 == ppuRam0000000000a00a40;
    ppuVar15 = (undefined8 **)((long)ppuVar12 + (-0x100 - (ulong)(ppuVar12 < (undefined8 **)0x200)))
    ;
    if (!bVar26) {
      ppuVar12 = ppuRam0000000000a00a40;
      ppuVar15 = ppuRam0000000000a00a40;
    }
    ppuRam0000000000a00a40 = ppuVar15;
    UNLOCK();
    if (bVar26) {
      return ppuVar12;
    }
  }
  lVar13 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x4c) = *(int *)(lVar13 + 0x4c) + 1;
  }
  ppuVar12 = ppuRam0000000000a00a40;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(0xa00a40);
  func_0x004d0510(ppuVar12,&UNK_00159a73);
  if (((ulong)ppuVar12 & 0x10) != 0) {
    func_0x004d0240(0xa00a40,(((ulong)ppuVar12 & 8) == 0) + '\b');
  }
  puStack_60 = (undefined8 *)0x1;
  uStack_58 = 0;
  ppuStack_40 = (undefined8 **)0x0;
  ppuVar12 = (undefined8 **)0x0;
  ppuStack_50 = (undefined8 **)0x0;
  uVar11 = 0;
code_r0x004d176a:
  ppuStack_48 = ppuVar12;
  do {
    ppuVar12 = ppuRam0000000000a00a40;
    uVar24 = (uint)ppuRam0000000000a00a40;
    if ((((ulong)ppuRam0000000000a00a40 & 8) != 0) && ((uVar24 & 6) != 4)) {
      ppuVar12 = (undefined8 **)((ulong)ppuRam0000000000a00a40 & 0xffffffffffffffd7);
code_r0x004d17ba:
      LOCK();
      UNLOCK();
      ppuVar15 = ppuRam0000000000a00a40;
      ppuRam0000000000a00a40 = ppuVar12;
      goto code_r0x004d1d71;
    }
    if ((uVar24 & 5) == 1) {
      ppuVar12 = (undefined8 **)
                 ((long)ppuRam0000000000a00a40 +
                 (-0x100 - (ulong)(ppuRam0000000000a00a40 < (undefined8 **)0x200)));
      goto code_r0x004d17ba;
    }
    if (((ulong)ppuRam0000000000a00a40 & 0x40) == 0) break;
    uVar11 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar11,0);
  } while( true );
  uVar16 = (ulong)ppuRam0000000000a00a40 | 0x40;
  LOCK();
  UNLOCK();
  if (((ulong)ppuRam0000000000a00a40 & 4) == 0) {
    puVar19 = &UNK_0015e550;
    puVar20 = &UNK_0016b375;
    uVar17 = 0x87f;
    ppuRam0000000000a00a40 = (undefined8 **)uVar16;
    goto code_r0x004d1e38;
  }
  ppuVar21 = (undefined8 **)((ulong)ppuRam0000000000a00a40 & 0xffffffffffffff00);
  if ((((ulong)ppuRam0000000000a00a40 & 1) != 0) &&
     (0x100 < (long)((ulong)ppuVar21[5] & 0xffffffffffffff00))) {
    ppuVar15 = (undefined8 **)(ppuVar21[5] + -0x20);
    ppuVar21[5] = ppuVar15;
    goto code_r0x004d1cb8;
  }
  ppuStack_38 = ppuVar21;
  ppuRam0000000000a00a40 = (undefined8 **)uVar16;
  if (ppuStack_40 != (undefined8 **)0x0) {
    if (*(char *)((long)ppuVar21 + 0x13) == '\0') {
      puVar19 = &UNK_00174375;
      puVar20 = &UNK_0017439c;
      uVar17 = 0x8b7;
      goto code_r0x004d1e38;
    }
    if (*(char *)(ppuStack_40 + 2) == '\0') {
      *(undefined1 *)(ppuStack_40 + 2) = 1;
      if (ppuStack_40[1] != (undefined8 *)0x0) {
        puVar19 = &UNK_0017a5d2;
        puVar20 = &UNK_00183957;
        uVar17 = 0x8bd;
        goto code_r0x004d1e38;
      }
      if (ppuStack_40 != ppuVar21) {
        puVar18 = *ppuStack_40;
        cVar9 = func_0x004cf840();
        if (cVar9 != '\0') {
          ppuStack_40[1] = puVar18;
        }
      }
    }
  }
  ppuVar15 = (undefined8 **)*ppuStack_38;
  if (((undefined *)*ppuVar15[4] == &UNK_001ff6d0) && (ppuVar15[4][1] == 0)) {
    *(undefined1 *)((long)ppuVar15 + 0x11) = 1;
    uStack_58 = 0x20;
    ppuVar12 = ppuStack_38;
  }
  else {
    if ((ppuStack_50 == (undefined8 **)0x0) ||
       ((ppuStack_40 != ppuStack_38 &&
        (ppuVar15 = (undefined8 **)ppuStack_50[4], *ppuVar15 != (undefined8 *)&UNK_001ff6d0)))) {
      if (ppuStack_40 == ppuStack_38) {
        ppuStack_38[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 0;
        ppuRam0000000000a00a40 = (undefined8 **)((ulong)ppuVar12 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      ppuVar15 = ppuStack_40;
      if (ppuStack_40 == (undefined8 **)0x0) {
        ppuVar15 = ppuStack_38;
      }
      ppuVar15 = (undefined8 **)*ppuVar15;
      *(undefined1 *)(ppuStack_38 + 2) = 0;
      if (ppuStack_38[1] == (undefined8 *)0x0) {
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 1;
        ppuVar21 = ppuStack_38;
        ppuVar22 = ppuStack_40;
        ppuRam0000000000a00a40 = ppuVar12;
        while( true ) {
          ppuVar12 = ppuVar22;
          *(undefined1 *)((long)ppuVar15 + 0x11) = 0;
          if ((ppuVar15[4][1] == 0) ||
             (cVar9 = (**(code **)(ppuVar15[4][1] + 0x10))(), ppuVar21 = ppuStack_38, cVar9 != '\0')
             ) {
            if (ppuStack_50 == (undefined8 **)0x0) {
              *(undefined1 *)((long)ppuVar15 + 0x11) = 1;
              if ((undefined *)*ppuVar15[4] == &UNK_001ff6d0) {
                uStack_58 = 0x20;
                ppuStack_40 = ppuVar21;
                ppuStack_50 = ppuVar15;
                goto code_r0x004d176a;
              }
              ppuStack_50 = ppuVar15;
              ppuStack_48 = ppuVar12;
            }
            else if ((undefined *)*ppuVar15[4] == &UNK_001ff6f8) {
              *(undefined1 *)((long)ppuVar15 + 0x11) = 1;
            }
            else {
              uStack_58 = 0x20;
            }
          }
          ppuVar12 = ppuStack_48;
          if ((*(char *)((long)ppuVar15 + 0x11) == '\0') &&
             (ppuVar22 = (undefined8 **)ppuVar15[1], ppuVar22 != (undefined8 **)0x0)) {
            ppuVar1 = ppuVar15;
            for (ppuVar23 = (undefined8 **)ppuVar22[1]; ppuVar7 = ppuVar22,
                ppuVar23 != (undefined8 **)0x0; ppuVar23 = (undefined8 **)ppuVar23[1]) {
              ppuVar1[1] = ppuVar23;
              ppuVar22 = ppuVar23;
              ppuVar1 = ppuVar7;
            }
            ppuVar15[1] = ppuVar7;
            ppuVar15 = ppuVar7;
          }
          if (ppuVar15 == ppuVar21) break;
          ppuVar22 = ppuVar15;
          ppuVar15 = (undefined8 **)*ppuVar15;
          ppuStack_48 = ppuVar12;
        }
        ppuStack_40 = ppuVar21;
        goto code_r0x004d176a;
      }
      puVar19 = &UNK_0015feeb;
      puVar20 = &UNK_00183957;
      uVar17 = 0x8fd;
      goto code_r0x004d1e38;
    }
    ppuVar15 = ppuStack_50;
    ppuVar12 = ppuStack_48;
    if (ppuStack_48 == (undefined8 **)0x0) {
      ppuVar12 = ppuStack_38;
    }
  }
  if ((undefined8 **)*ppuVar12 != ppuVar15) {
    puVar19 = &UNK_0018839e;
    puVar20 = &UNK_001899ff;
    uVar17 = 0x936;
    goto code_r0x004d1e38;
  }
  ppuVar15 = &puStack_60;
  bVar6 = 0;
  ppuVar21 = ppuStack_38;
  ppuVar22 = ppuStack_38;
  do {
    ppuVar23 = (undefined8 **)*ppuVar12;
    if (*(char *)((long)ppuVar23 + 0x11) == '\x01') {
      if (ppuVar12[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar18 = *ppuVar23;
      *ppuVar12 = puVar18;
      if (ppuVar21 == ppuVar23) {
        bVar26 = ppuVar12 != ppuVar21;
        ppuVar21 = (undefined8 **)0x0;
        if (bVar26) {
          ppuVar21 = ppuVar12;
        }
      }
      else if (ppuVar12 != ppuVar21) {
        ppuVar22 = ppuStack_38;
        if ((*ppuVar12[4] == *(long *)puVar18[4]) &&
           (*(int *)(ppuVar12 + 3) == *(int *)(puVar18 + 3))) {
          pauVar4 = (undefined1 (*) [16])ppuVar12[4][1];
          pauVar5 = (undefined1 (*) [16])((long *)puVar18[4])[1];
          if ((pauVar4 == (undefined1 (*) [16])0x0) || (pauVar5 == (undefined1 (*) [16])0x0)) {
            bVar26 = pauVar4 == pauVar5;
          }
          else {
            if ((*(long *)pauVar4[1] != *(long *)pauVar5[1]) ||
               (*(long *)(pauVar4[1] + 8) != *(long *)(pauVar5[1] + 8))) goto code_r0x004d1bd9;
            auVar3 = *pauVar4;
            auVar27[0] = -((*pauVar5)[0] == auVar3[0]);
            auVar27[1] = -((*pauVar5)[1] == auVar3[1]);
            auVar27[2] = -((*pauVar5)[2] == auVar3[2]);
            auVar27[3] = -((*pauVar5)[3] == auVar3[3]);
            auVar27[4] = -((*pauVar5)[4] == auVar3[4]);
            auVar27[5] = -((*pauVar5)[5] == auVar3[5]);
            auVar27[6] = -((*pauVar5)[6] == auVar3[6]);
            auVar27[7] = -((*pauVar5)[7] == auVar3[7]);
            auVar27[8] = -((*pauVar5)[8] == auVar3[8]);
            auVar27[9] = -((*pauVar5)[9] == auVar3[9]);
            auVar27[10] = -((*pauVar5)[10] == auVar3[10]);
            auVar27[0xb] = -((*pauVar5)[0xb] == auVar3[0xb]);
            auVar27[0xc] = -((*pauVar5)[0xc] == auVar3[0xc]);
            auVar27[0xd] = -((*pauVar5)[0xd] == auVar3[0xd]);
            auVar27[0xe] = -((*pauVar5)[0xe] == auVar3[0xe]);
            auVar27[0xf] = -((*pauVar5)[0xf] == auVar3[0xf]);
            bVar26 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff;
          }
          if (bVar26) {
            if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
              ppuVar12[1] = puVar18;
            }
            else {
              ppuVar12[1] = (undefined8 *)puVar18[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar23 = *ppuVar15;
      *ppuVar15 = ppuVar23;
      if ((ppuVar21 != ppuVar22) ||
         (ppuVar1 = ppuVar23 + 4, ppuVar15 = ppuVar23, ppuVar23 = ppuVar12,
         (undefined *)**ppuVar1 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar12 = (undefined8 **)ppuVar23[1];
      bVar6 = 1;
      if (ppuVar12 != (undefined8 **)0x0) {
        ppuVar1 = ppuVar23;
        for (ppuVar7 = (undefined8 **)ppuVar12[1]; ppuVar7 != (undefined8 **)0x0;
            ppuVar7 = (undefined8 **)ppuVar7[1]) {
          ppuVar1[1] = ppuVar7;
          ppuVar1 = ppuVar12;
          ppuVar12 = ppuVar7;
        }
        ppuVar23[1] = ppuVar12;
        ppuVar23 = ppuVar12;
      }
    }
    ppuVar12 = ppuVar23;
  } while (!(bool)(ppuVar23 == ppuVar21 & bVar6));
  if (puStack_60 != (undefined8 *)0x1) {
    if (ppuVar21 == (undefined8 **)0x0) {
      ppuRam0000000000a00a40 = (undefined8 **)((ulong)(uVar24 & 0x10) | 2);
      ppuVar15 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar12 = (undefined8 **)0x0;
    }
    else {
      ppuVar21[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar21 + 0x13) = 0;
      uVar16 = uStack_58 | (ulong)ppuVar21;
      ppuVar15 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar15 == (undefined8 **)0x0) {
        ppuVar15 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuRam0000000000a00a40 = (undefined8 **)(uVar16 | uVar24 & 0x10 | 6);
      *(undefined1 *)(ppuVar15 + 0xb) = 1;
      ppuVar12 = ppuVar15;
    }
    if (puStack_60 != (undefined8 *)0x1) {
      ppuStack_48 = ppuVar12;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar14 = rdtsc();
      }
      else {
        lVar14 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar25 = 0;
      do {
        if (*(char *)((long)puStack_60 + 0x12) == '\0') {
          lVar25 = lVar25 + ((lVar14 >> 1) - *(long *)(puStack_60[4] + 0x30));
          *(long *)(puStack_60[4] + 0x30) = lVar14 >> 1;
          *(undefined1 *)(puStack_60[4] + 0x38) = 1;
        }
        puVar18 = (undefined8 *)*puStack_60;
        *puStack_60 = 0;
        *(undefined4 *)((long)puStack_60 + 0x1c) = 0;
        ppuVar15 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
        ppuVar12 = ppuStack_48;
        puStack_60 = puVar18;
      } while (puVar18 != (undefined8 *)0x1);
      if (0 < lVar25) {
        (*pcRam00000000009fb820)(&UNK_00161854,0xa00a40,lVar25);
        ppuVar15 = (undefined8 **)(*pcRam00000000009fb810)(lVar25);
      }
    }
    if (ppuVar12 != (undefined8 **)0x0) {
      *(undefined1 *)(ppuVar12 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar13 != 0) {
      ppuVar15 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)((long)ppuVar15 + 0x4c) = *(int *)((long)ppuVar15 + 0x4c) + -1;
    }
    return ppuVar15;
  }
  puVar19 = &UNK_00170ab6;
  puVar20 = &UNK_001648fb;
  uVar17 = 0x94d;
code_r0x004d1e38:
  do {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar17,&UNK_00183943,puVar19,puVar20);
code_r0x004d1e3f:
    puVar19 = &UNK_0018b20f;
    puVar20 = &UNK_00186ab0;
    uVar17 = 0x444;
  } while( true );
}


