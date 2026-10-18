// Function: _ZN6google8protobuf8internal15ThreadSafeArena14AddSerialArenaEPvPNS1_11SerialArenaE
// Address: 004b9e00
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

undefined8 **
_ZN6google8protobuf8internal15ThreadSafeArena14AddSerialArenaEPvPNS1_11SerialArenaE
          (long param_1,long param_2,undefined8 **param_3)

{
  uint *puVar1;
  undefined8 **ppuVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  byte bVar7;
  undefined8 **ppuVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 **ppuVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 **ppuVar24;
  uint uVar25;
  undefined8 **ppuVar26;
  long lVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  lVar19 = *(long *)(param_1 + 0x10);
  uVar17 = *(uint *)(lVar19 + 8);
  if ((ulong)uVar17 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar19 + 0xc);
    uVar25 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar25 < uVar17) {
      *(long *)(lVar19 + 0x10 + (ulong)uVar25 * 8) = param_2;
      ppuVar11 = (undefined8 **)((ulong)uVar17 * 8 + 0x17 & 0xffffffff8);
      *(undefined8 ***)((long)ppuVar11 + lVar19 + (ulong)uVar25 * 8) = param_3;
      return ppuVar11;
    }
    *(uint *)(lVar19 + 0xc) = uVar17;
  }
  ppuVar11 = (undefined8 **)(param_1 + 0x20);
  ppuStack_50 = (undefined8 **)&UNK_004b9e7a;
  ppuStack_48 = (undefined8 **)param_2;
  _ZN4absl12lts_202605265Mutex4lockEv(ppuVar11);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == lVar19) {
    uVar12 = (ulong)*(uint *)(lVar19 + 8);
    lVar14 = lVar19;
  }
  else {
    LOCK();
    puVar1 = (uint *)(lVar14 + 0xc);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    uVar25 = *(uint *)(lVar14 + 8);
    uVar12 = (ulong)uVar25;
    if (uVar17 < uVar25) {
      *(undefined8 ***)(lVar14 + 0x10 + (ulong)uVar17 * 8) = ppuStack_48;
      *(undefined8 ***)((uVar12 * 8 + 0x17 & 0xffffffff8) + lVar14 + (ulong)uVar17 * 8) = param_3;
      goto code_r0x004b9f92;
    }
    *(uint *)(lVar14 + 0xc) = uVar25;
  }
  uVar12 = ((uVar12 * 8 + 0x17 & 0xffffffff8) + uVar12 * 8) * 4;
  iVar16 = 0x1000;
  if (uVar12 < 0x1000) {
    iVar16 = (int)uVar12;
  }
  uVar17 = iVar16 - 0x10U >> 4;
  lVar19 = (ulong)(uVar17 * 8 + 0x10) + (ulong)(uVar17 * 8);
  ppuStack_50 = (undefined8 **)&UNK_004b9f19;
  ppuStack_40 = ppuVar11;
  ppuStack_38 = param_3;
  plVar13 = (long *)_Znwm(lVar19);
  uVar17 = (int)lVar19 - 0x10;
  uVar25 = uVar17 >> 4;
  *(uint *)(plVar13 + 1) = uVar25;
  *(undefined4 *)((long)plVar13 + 0xc) = 1;
  plVar13[2] = (long)ppuStack_48;
  if (uVar17 < 0x20) {
    plVar13[(ulong)uVar25 + 2] = (long)ppuStack_38;
  }
  else {
    lVar19 = (ulong)(uVar25 - 1) << 3;
    ppuStack_50 = (undefined8 **)&UNK_004b9f55;
    func_0x0099bdb0(plVar13 + 3,0,lVar19);
    uVar12 = (ulong)(uVar25 * 8 + 0x10);
    *(undefined8 ***)((long)plVar13 + uVar12) = ppuStack_38;
    ppuStack_50 = (undefined8 **)&UNK_004b9f7b;
    func_0x0099bdb0((long)plVar13 + uVar12 + 8,0,lVar19);
  }
  *plVar13 = lVar14;
  *(long **)(param_1 + 0x10) = plVar13;
  ppuVar11 = ppuStack_40;
code_r0x004b9f92:
  ppuVar26 = (undefined8 **)*ppuVar11;
  if (((uint)ppuVar26 & 0x1e ^ 10) < 6) {
    LOCK();
    ppuVar22 = (undefined8 **)*ppuVar11;
    bVar28 = ppuVar26 == ppuVar22;
    if (bVar28) {
      *ppuVar11 = (undefined8 *)((ulong)ppuVar26 & 0xffffffffffffffd7);
      ppuVar22 = ppuVar26;
    }
    UNLOCK();
    if (bVar28) {
      return ppuVar22;
    }
  }
  lVar19 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar19 != 0) {
    *(int *)(lVar19 + 0x4c) = *(int *)(lVar19 + 0x4c) + 1;
  }
  uVar12 = (ulong)*ppuVar11;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(ppuVar11);
  func_0x004d0510(uVar12,&UNK_00159a73);
  if ((uVar12 & 0x10) != 0) {
    func_0x004d0240(ppuVar11,((uVar12 & 8) == 0) + '\b');
  }
  puStack_60 = (undefined8 *)0x1;
  uStack_58 = 0;
  ppuStack_40 = (undefined8 **)0x0;
  ppuVar26 = (undefined8 **)0x0;
  ppuStack_50 = (undefined8 **)0x0;
  uVar10 = 0;
code_r0x004d176a:
  ppuStack_48 = ppuVar26;
  do {
    ppuVar26 = (undefined8 **)*ppuVar11;
    uVar17 = (uint)ppuVar26;
    if ((((ulong)ppuVar26 & 8) == 0) || ((uVar17 & 6) == 4)) {
      if ((uVar17 & 5) == 1) {
        uVar12 = (long)ppuVar26 + (-0x100 - (ulong)(ppuVar26 < (undefined8 **)0x200));
        goto code_r0x004d17ba;
      }
      if (((ulong)ppuVar26 & 0x40) == 0) {
        LOCK();
        ppuVar22 = (undefined8 **)*ppuVar11;
        if (ppuVar26 == ppuVar22) {
          *ppuVar11 = (undefined8 *)((ulong)ppuVar26 | 0x40);
        }
        UNLOCK();
        if (ppuVar26 == ppuVar22) break;
      }
    }
    else {
      uVar12 = (ulong)ppuVar26 & 0xffffffffffffffd7;
code_r0x004d17ba:
      LOCK();
      ppuVar15 = (undefined8 **)*ppuVar11;
      bVar28 = ppuVar26 == ppuVar15;
      if (bVar28) {
        *ppuVar11 = (undefined8 *)uVar12;
        ppuVar15 = ppuVar26;
      }
      UNLOCK();
      if (bVar28) goto code_r0x004d1d71;
    }
    uVar10 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar10,0);
  } while( true );
  if (((ulong)ppuVar26 & 4) == 0) {
    puVar20 = &UNK_0015e550;
    puVar21 = &UNK_0016b375;
    uVar18 = 0x87f;
    goto code_r0x004d1e38;
  }
  ppuVar22 = (undefined8 **)((ulong)ppuVar26 & 0xffffffffffffff00);
  if ((((ulong)ppuVar26 & 1) != 0) && (0x100 < (long)((ulong)ppuVar22[5] & 0xffffffffffffff00))) {
    ppuVar15 = (undefined8 **)(ppuVar22[5] + -0x20);
    ppuVar22[5] = ppuVar15;
    goto code_r0x004d1cb8;
  }
  ppuStack_38 = ppuVar22;
  if (ppuStack_40 != (undefined8 **)0x0) {
    if (*(char *)((long)ppuVar22 + 0x13) == '\0') {
      puVar20 = &UNK_00174375;
      puVar21 = &UNK_0017439c;
      uVar18 = 0x8b7;
      goto code_r0x004d1e38;
    }
    if (*(char *)(ppuStack_40 + 2) == '\0') {
      *(undefined1 *)(ppuStack_40 + 2) = 1;
      if (ppuStack_40[1] != (undefined8 *)0x0) {
        puVar20 = &UNK_0017a5d2;
        puVar21 = &UNK_00183957;
        uVar18 = 0x8bd;
        goto code_r0x004d1e38;
      }
      if (ppuStack_40 != ppuVar22) {
        puVar4 = *ppuStack_40;
        cVar9 = func_0x004cf840();
        if (cVar9 != '\0') {
          ppuStack_40[1] = puVar4;
        }
      }
    }
  }
  ppuVar15 = (undefined8 **)*ppuStack_38;
  if (((undefined *)*ppuVar15[4] == &UNK_001ff6d0) && (ppuVar15[4][1] == 0)) {
    *(undefined1 *)((long)ppuVar15 + 0x11) = 1;
    uStack_58 = 0x20;
    ppuVar26 = ppuStack_38;
  }
  else {
    if ((ppuStack_50 == (undefined8 **)0x0) ||
       ((ppuStack_40 != ppuStack_38 &&
        (ppuVar15 = (undefined8 **)ppuStack_50[4], *ppuVar15 != (undefined8 *)&UNK_001ff6d0)))) {
      if (ppuStack_40 == ppuStack_38) {
        ppuStack_38[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 0;
        ppuVar26 = (undefined8 **)((ulong)ppuVar26 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      ppuVar22 = ppuStack_40;
      if (ppuStack_40 == (undefined8 **)0x0) {
        ppuVar22 = ppuStack_38;
      }
      ppuVar22 = (undefined8 **)*ppuVar22;
      *(undefined1 *)(ppuStack_38 + 2) = 0;
      if (ppuStack_38[1] == (undefined8 *)0x0) {
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 1;
        *ppuVar11 = ppuVar26;
        ppuVar15 = ppuStack_38;
        ppuVar23 = ppuStack_40;
        while( true ) {
          ppuVar26 = ppuVar23;
          *(undefined1 *)((long)ppuVar22 + 0x11) = 0;
          if ((ppuVar22[4][1] == 0) ||
             (cVar9 = (**(code **)(ppuVar22[4][1] + 0x10))(), ppuVar15 = ppuStack_38, cVar9 != '\0')
             ) {
            if (ppuStack_50 == (undefined8 **)0x0) {
              *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
              if ((undefined *)*ppuVar22[4] == &UNK_001ff6d0) {
                uStack_58 = 0x20;
                ppuStack_40 = ppuVar15;
                ppuStack_50 = ppuVar22;
                goto code_r0x004d176a;
              }
              ppuStack_50 = ppuVar22;
              ppuStack_48 = ppuVar26;
            }
            else if ((undefined *)*ppuVar22[4] == &UNK_001ff6f8) {
              *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
            }
            else {
              uStack_58 = 0x20;
            }
          }
          ppuVar26 = ppuStack_48;
          if ((*(char *)((long)ppuVar22 + 0x11) == '\0') &&
             (ppuVar23 = (undefined8 **)ppuVar22[1], ppuVar23 != (undefined8 **)0x0)) {
            ppuVar2 = ppuVar22;
            for (ppuVar24 = (undefined8 **)ppuVar23[1]; ppuVar8 = ppuVar23,
                ppuVar24 != (undefined8 **)0x0; ppuVar24 = (undefined8 **)ppuVar24[1]) {
              ppuVar2[1] = ppuVar24;
              ppuVar23 = ppuVar24;
              ppuVar2 = ppuVar8;
            }
            ppuVar22[1] = ppuVar8;
            ppuVar22 = ppuVar8;
          }
          if (ppuVar22 == ppuVar15) break;
          ppuVar23 = ppuVar22;
          ppuVar22 = (undefined8 **)*ppuVar22;
          ppuStack_48 = ppuVar26;
        }
        ppuStack_40 = ppuVar15;
        goto code_r0x004d176a;
      }
      puVar20 = &UNK_0015feeb;
      puVar21 = &UNK_00183957;
      uVar18 = 0x8fd;
      goto code_r0x004d1e38;
    }
    ppuVar15 = ppuStack_50;
    ppuVar26 = ppuStack_48;
    if (ppuStack_48 == (undefined8 **)0x0) {
      ppuVar26 = ppuStack_38;
    }
  }
  if ((undefined8 **)*ppuVar26 != ppuVar15) {
    puVar20 = &UNK_0018839e;
    puVar21 = &UNK_001899ff;
    uVar18 = 0x936;
    goto code_r0x004d1e38;
  }
  ppuVar22 = &puStack_60;
  bVar7 = 0;
  ppuVar15 = ppuStack_38;
  ppuVar23 = ppuStack_38;
  do {
    ppuVar24 = (undefined8 **)*ppuVar26;
    if (*(char *)((long)ppuVar24 + 0x11) == '\x01') {
      if (ppuVar26[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar4 = *ppuVar24;
      *ppuVar26 = puVar4;
      if (ppuVar15 == ppuVar24) {
        bVar28 = ppuVar26 != ppuVar15;
        ppuVar15 = (undefined8 **)0x0;
        if (bVar28) {
          ppuVar15 = ppuVar26;
        }
      }
      else if (ppuVar26 != ppuVar15) {
        ppuVar23 = ppuStack_38;
        if ((*ppuVar26[4] == *(long *)puVar4[4]) && (*(int *)(ppuVar26 + 3) == *(int *)(puVar4 + 3))
           ) {
          pauVar5 = (undefined1 (*) [16])ppuVar26[4][1];
          pauVar6 = (undefined1 (*) [16])((long *)puVar4[4])[1];
          if ((pauVar5 == (undefined1 (*) [16])0x0) || (pauVar6 == (undefined1 (*) [16])0x0)) {
            bVar28 = pauVar5 == pauVar6;
          }
          else {
            if ((*(long *)pauVar5[1] != *(long *)pauVar6[1]) ||
               (*(long *)(pauVar5[1] + 8) != *(long *)(pauVar6[1] + 8))) goto code_r0x004d1bd9;
            auVar3 = *pauVar5;
            auVar29[0] = -((*pauVar6)[0] == auVar3[0]);
            auVar29[1] = -((*pauVar6)[1] == auVar3[1]);
            auVar29[2] = -((*pauVar6)[2] == auVar3[2]);
            auVar29[3] = -((*pauVar6)[3] == auVar3[3]);
            auVar29[4] = -((*pauVar6)[4] == auVar3[4]);
            auVar29[5] = -((*pauVar6)[5] == auVar3[5]);
            auVar29[6] = -((*pauVar6)[6] == auVar3[6]);
            auVar29[7] = -((*pauVar6)[7] == auVar3[7]);
            auVar29[8] = -((*pauVar6)[8] == auVar3[8]);
            auVar29[9] = -((*pauVar6)[9] == auVar3[9]);
            auVar29[10] = -((*pauVar6)[10] == auVar3[10]);
            auVar29[0xb] = -((*pauVar6)[0xb] == auVar3[0xb]);
            auVar29[0xc] = -((*pauVar6)[0xc] == auVar3[0xc]);
            auVar29[0xd] = -((*pauVar6)[0xd] == auVar3[0xd]);
            auVar29[0xe] = -((*pauVar6)[0xe] == auVar3[0xe]);
            auVar29[0xf] = -((*pauVar6)[0xf] == auVar3[0xf]);
            bVar28 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff;
          }
          if (bVar28) {
            if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
              ppuVar26[1] = puVar4;
            }
            else {
              ppuVar26[1] = (undefined8 *)puVar4[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar24 = *ppuVar22;
      *ppuVar22 = ppuVar24;
      if ((ppuVar15 != ppuVar23) ||
         (ppuVar2 = ppuVar24 + 4, ppuVar22 = ppuVar24, ppuVar24 = ppuVar26,
         (undefined *)**ppuVar2 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar26 = (undefined8 **)ppuVar24[1];
      bVar7 = 1;
      if (ppuVar26 != (undefined8 **)0x0) {
        ppuVar2 = ppuVar24;
        for (ppuVar8 = (undefined8 **)ppuVar26[1]; ppuVar8 != (undefined8 **)0x0;
            ppuVar8 = (undefined8 **)ppuVar8[1]) {
          ppuVar2[1] = ppuVar8;
          ppuVar2 = ppuVar26;
          ppuVar26 = ppuVar8;
        }
        ppuVar24[1] = ppuVar26;
        ppuVar24 = ppuVar26;
      }
    }
    ppuVar26 = ppuVar24;
  } while (!(bool)(ppuVar24 == ppuVar15 & bVar7));
  if (puStack_60 != (undefined8 *)0x1) {
    if (ppuVar15 == (undefined8 **)0x0) {
      ppuVar26 = (undefined8 **)((ulong)(uVar17 & 0x10) | 2);
      ppuVar15 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar22 = (undefined8 **)0x0;
    }
    else {
      ppuVar15[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar15 + 0x13) = 0;
      uVar12 = uStack_58 | (ulong)ppuVar15;
      ppuVar15 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar15 == (undefined8 **)0x0) {
        ppuVar15 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuVar26 = (undefined8 **)(uVar12 | uVar17 & 0x10 | 6);
      *(undefined1 *)(ppuVar15 + 0xb) = 1;
      ppuVar22 = ppuVar15;
    }
    *ppuVar11 = ppuVar26;
    if (puStack_60 != (undefined8 *)0x1) {
      ppuStack_48 = ppuVar22;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar14 = rdtsc();
      }
      else {
        lVar14 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar27 = 0;
      do {
        if (*(char *)((long)puStack_60 + 0x12) == '\0') {
          lVar27 = lVar27 + ((lVar14 >> 1) - *(long *)(puStack_60[4] + 0x30));
          *(long *)(puStack_60[4] + 0x30) = lVar14 >> 1;
          *(undefined1 *)(puStack_60[4] + 0x38) = 1;
        }
        puVar4 = (undefined8 *)*puStack_60;
        *puStack_60 = 0;
        *(undefined4 *)((long)puStack_60 + 0x1c) = 0;
        ppuVar15 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
        ppuVar22 = ppuStack_48;
        puStack_60 = puVar4;
      } while (puVar4 != (undefined8 *)0x1);
      if (0 < lVar27) {
        (*pcRam00000000009fb820)(&UNK_00161854,ppuVar11,lVar27);
        ppuVar15 = (undefined8 **)(*pcRam00000000009fb810)(lVar27);
      }
    }
    if (ppuVar22 != (undefined8 **)0x0) {
      *(undefined1 *)(ppuVar22 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar19 != 0) {
      ppuVar15 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)((long)ppuVar15 + 0x4c) = *(int *)((long)ppuVar15 + 0x4c) + -1;
    }
    return ppuVar15;
  }
  puVar20 = &UNK_00170ab6;
  puVar21 = &UNK_001648fb;
  uVar18 = 0x94d;
code_r0x004d1e38:
  do {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar18,&UNK_00183943,puVar20,puVar21);
code_r0x004d1e3f:
    puVar20 = &UNK_0018b20f;
    puVar21 = &UNK_00186ab0;
    uVar18 = 0x444;
  } while( true );
}


