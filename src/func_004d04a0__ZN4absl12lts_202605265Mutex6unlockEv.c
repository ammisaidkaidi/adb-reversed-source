// Function: _ZN4absl12lts_202605265Mutex6unlockEv
// Address: 004d04a0
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

undefined8 ** _ZN4absl12lts_202605265Mutex6unlockEv(ulong *param_1)

{
  undefined8 **ppuVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  byte bVar6;
  undefined8 **ppuVar7;
  char cVar8;
  undefined4 uVar9;
  long lVar10;
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
  undefined8 **ppuVar21;
  long lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  ppuVar21 = (undefined8 **)*param_1;
  if (((uint)ppuVar21 & 0x1e ^ 10) < 6) {
    LOCK();
    ppuVar17 = (undefined8 **)*param_1;
    bVar23 = ppuVar21 == ppuVar17;
    if (bVar23) {
      *param_1 = (ulong)ppuVar21 & 0xffffffffffffffd7;
      ppuVar17 = ppuVar21;
    }
    UNLOCK();
    if (bVar23) {
      return ppuVar17;
    }
  }
  lVar10 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar10 != 0) {
    *(int *)(lVar10 + 0x4c) = *(int *)(lVar10 + 0x4c) + 1;
  }
  uVar13 = *param_1;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(param_1);
  func_0x004d0510(uVar13,&UNK_00159a73);
  if ((uVar13 & 0x10) != 0) {
    func_0x004d0240(param_1,((uVar13 & 8) == 0) + '\b');
  }
  puStack_60 = (undefined8 *)0x1;
  uStack_58 = 0;
  ppuStack_40 = (undefined8 **)0x0;
  ppuVar21 = (undefined8 **)0x0;
  ppuStack_50 = (undefined8 **)0x0;
  uVar9 = 0;
code_r0x004d176a:
  ppuStack_48 = ppuVar21;
  do {
    ppuVar21 = (undefined8 **)*param_1;
    uVar20 = (uint)ppuVar21;
    if ((((ulong)ppuVar21 & 8) == 0) || ((uVar20 & 6) == 4)) {
      if ((uVar20 & 5) == 1) {
        uVar13 = (long)ppuVar21 + (-0x100 - (ulong)(ppuVar21 < (undefined8 **)0x200));
        goto code_r0x004d17ba;
      }
      if (((ulong)ppuVar21 & 0x40) == 0) {
        LOCK();
        ppuVar17 = (undefined8 **)*param_1;
        if (ppuVar21 == ppuVar17) {
          *param_1 = (ulong)ppuVar21 | 0x40;
        }
        UNLOCK();
        if (ppuVar21 == ppuVar17) break;
      }
    }
    else {
      uVar13 = (ulong)ppuVar21 & 0xffffffffffffffd7;
code_r0x004d17ba:
      LOCK();
      ppuVar12 = (undefined8 **)*param_1;
      bVar23 = ppuVar21 == ppuVar12;
      if (bVar23) {
        *param_1 = uVar13;
        ppuVar12 = ppuVar21;
      }
      UNLOCK();
      if (bVar23) goto code_r0x004d1d71;
    }
    uVar9 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar9,0);
  } while( true );
  if (((ulong)ppuVar21 & 4) == 0) {
    puVar15 = &UNK_0015e550;
    puVar16 = &UNK_0016b375;
    uVar14 = 0x87f;
    goto code_r0x004d1e38;
  }
  ppuVar17 = (undefined8 **)((ulong)ppuVar21 & 0xffffffffffffff00);
  if ((((ulong)ppuVar21 & 1) != 0) && (0x100 < (long)((ulong)ppuVar17[5] & 0xffffffffffffff00))) {
    ppuVar12 = (undefined8 **)(ppuVar17[5] + -0x20);
    ppuVar17[5] = ppuVar12;
    goto code_r0x004d1cb8;
  }
  ppuStack_38 = ppuVar17;
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
        puVar3 = *ppuStack_40;
        cVar8 = func_0x004cf840();
        if (cVar8 != '\0') {
          ppuStack_40[1] = puVar3;
        }
      }
    }
  }
  ppuVar12 = (undefined8 **)*ppuStack_38;
  if (((undefined *)*ppuVar12[4] == &UNK_001ff6d0) && (ppuVar12[4][1] == 0)) {
    *(undefined1 *)((long)ppuVar12 + 0x11) = 1;
    uStack_58 = 0x20;
    ppuVar21 = ppuStack_38;
  }
  else {
    if ((ppuStack_50 == (undefined8 **)0x0) ||
       ((ppuStack_40 != ppuStack_38 &&
        (ppuVar12 = (undefined8 **)ppuStack_50[4], *ppuVar12 != (undefined8 *)&UNK_001ff6d0)))) {
      if (ppuStack_40 == ppuStack_38) {
        ppuStack_38[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 0;
        ppuVar21 = (undefined8 **)((ulong)ppuVar21 & 0xffffffffffffff96);
        goto code_r0x004d1cb8;
      }
      ppuVar17 = ppuStack_40;
      if (ppuStack_40 == (undefined8 **)0x0) {
        ppuVar17 = ppuStack_38;
      }
      ppuVar17 = (undefined8 **)*ppuVar17;
      *(undefined1 *)(ppuStack_38 + 2) = 0;
      if (ppuStack_38[1] == (undefined8 *)0x0) {
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 1;
        *param_1 = (ulong)ppuVar21;
        ppuVar12 = ppuStack_38;
        ppuVar18 = ppuStack_40;
        while( true ) {
          ppuVar21 = ppuVar18;
          *(undefined1 *)((long)ppuVar17 + 0x11) = 0;
          if ((ppuVar17[4][1] == 0) ||
             (cVar8 = (**(code **)(ppuVar17[4][1] + 0x10))(), ppuVar12 = ppuStack_38, cVar8 != '\0')
             ) {
            if (ppuStack_50 == (undefined8 **)0x0) {
              *(undefined1 *)((long)ppuVar17 + 0x11) = 1;
              if ((undefined *)*ppuVar17[4] == &UNK_001ff6d0) {
                uStack_58 = 0x20;
                ppuStack_40 = ppuVar12;
                ppuStack_50 = ppuVar17;
                goto code_r0x004d176a;
              }
              ppuStack_50 = ppuVar17;
              ppuStack_48 = ppuVar21;
            }
            else if ((undefined *)*ppuVar17[4] == &UNK_001ff6f8) {
              *(undefined1 *)((long)ppuVar17 + 0x11) = 1;
            }
            else {
              uStack_58 = 0x20;
            }
          }
          ppuVar21 = ppuStack_48;
          if ((*(char *)((long)ppuVar17 + 0x11) == '\0') &&
             (ppuVar18 = (undefined8 **)ppuVar17[1], ppuVar18 != (undefined8 **)0x0)) {
            ppuVar1 = ppuVar17;
            for (ppuVar19 = (undefined8 **)ppuVar18[1]; ppuVar7 = ppuVar18,
                ppuVar19 != (undefined8 **)0x0; ppuVar19 = (undefined8 **)ppuVar19[1]) {
              ppuVar1[1] = ppuVar19;
              ppuVar18 = ppuVar19;
              ppuVar1 = ppuVar7;
            }
            ppuVar17[1] = ppuVar7;
            ppuVar17 = ppuVar7;
          }
          if (ppuVar17 == ppuVar12) break;
          ppuVar18 = ppuVar17;
          ppuVar17 = (undefined8 **)*ppuVar17;
          ppuStack_48 = ppuVar21;
        }
        ppuStack_40 = ppuVar12;
        goto code_r0x004d176a;
      }
      puVar15 = &UNK_0015feeb;
      puVar16 = &UNK_00183957;
      uVar14 = 0x8fd;
      goto code_r0x004d1e38;
    }
    ppuVar12 = ppuStack_50;
    ppuVar21 = ppuStack_48;
    if (ppuStack_48 == (undefined8 **)0x0) {
      ppuVar21 = ppuStack_38;
    }
  }
  if ((undefined8 **)*ppuVar21 != ppuVar12) {
    puVar15 = &UNK_0018839e;
    puVar16 = &UNK_001899ff;
    uVar14 = 0x936;
    goto code_r0x004d1e38;
  }
  ppuVar17 = &puStack_60;
  bVar6 = 0;
  ppuVar12 = ppuStack_38;
  ppuVar18 = ppuStack_38;
  do {
    ppuVar19 = (undefined8 **)*ppuVar21;
    if (*(char *)((long)ppuVar19 + 0x11) == '\x01') {
      if (ppuVar21[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar3 = *ppuVar19;
      *ppuVar21 = puVar3;
      if (ppuVar12 == ppuVar19) {
        bVar23 = ppuVar21 != ppuVar12;
        ppuVar12 = (undefined8 **)0x0;
        if (bVar23) {
          ppuVar12 = ppuVar21;
        }
      }
      else if (ppuVar21 != ppuVar12) {
        ppuVar18 = ppuStack_38;
        if ((*ppuVar21[4] == *(long *)puVar3[4]) && (*(int *)(ppuVar21 + 3) == *(int *)(puVar3 + 3))
           ) {
          pauVar4 = (undefined1 (*) [16])ppuVar21[4][1];
          pauVar5 = (undefined1 (*) [16])((long *)puVar3[4])[1];
          if ((pauVar4 == (undefined1 (*) [16])0x0) || (pauVar5 == (undefined1 (*) [16])0x0)) {
            bVar23 = pauVar4 == pauVar5;
          }
          else {
            if ((*(long *)pauVar4[1] != *(long *)pauVar5[1]) ||
               (*(long *)(pauVar4[1] + 8) != *(long *)(pauVar5[1] + 8))) goto code_r0x004d1bd9;
            auVar2 = *pauVar4;
            auVar24[0] = -((*pauVar5)[0] == auVar2[0]);
            auVar24[1] = -((*pauVar5)[1] == auVar2[1]);
            auVar24[2] = -((*pauVar5)[2] == auVar2[2]);
            auVar24[3] = -((*pauVar5)[3] == auVar2[3]);
            auVar24[4] = -((*pauVar5)[4] == auVar2[4]);
            auVar24[5] = -((*pauVar5)[5] == auVar2[5]);
            auVar24[6] = -((*pauVar5)[6] == auVar2[6]);
            auVar24[7] = -((*pauVar5)[7] == auVar2[7]);
            auVar24[8] = -((*pauVar5)[8] == auVar2[8]);
            auVar24[9] = -((*pauVar5)[9] == auVar2[9]);
            auVar24[10] = -((*pauVar5)[10] == auVar2[10]);
            auVar24[0xb] = -((*pauVar5)[0xb] == auVar2[0xb]);
            auVar24[0xc] = -((*pauVar5)[0xc] == auVar2[0xc]);
            auVar24[0xd] = -((*pauVar5)[0xd] == auVar2[0xd]);
            auVar24[0xe] = -((*pauVar5)[0xe] == auVar2[0xe]);
            auVar24[0xf] = -((*pauVar5)[0xf] == auVar2[0xf]);
            bVar23 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff;
          }
          if (bVar23) {
            if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
              ppuVar21[1] = puVar3;
            }
            else {
              ppuVar21[1] = (undefined8 *)puVar3[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar19 = *ppuVar17;
      *ppuVar17 = ppuVar19;
      if ((ppuVar12 != ppuVar18) ||
         (ppuVar1 = ppuVar19 + 4, ppuVar17 = ppuVar19, ppuVar19 = ppuVar21,
         (undefined *)**ppuVar1 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar21 = (undefined8 **)ppuVar19[1];
      bVar6 = 1;
      if (ppuVar21 != (undefined8 **)0x0) {
        ppuVar1 = ppuVar19;
        for (ppuVar7 = (undefined8 **)ppuVar21[1]; ppuVar7 != (undefined8 **)0x0;
            ppuVar7 = (undefined8 **)ppuVar7[1]) {
          ppuVar1[1] = ppuVar7;
          ppuVar1 = ppuVar21;
          ppuVar21 = ppuVar7;
        }
        ppuVar19[1] = ppuVar21;
        ppuVar19 = ppuVar21;
      }
    }
    ppuVar21 = ppuVar19;
  } while (!(bool)(ppuVar19 == ppuVar12 & bVar6));
  if (puStack_60 != (undefined8 *)0x1) {
    if (ppuVar12 == (undefined8 **)0x0) {
      ppuVar21 = (undefined8 **)((ulong)(uVar20 & 0x10) | 2);
      ppuVar12 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar17 = (undefined8 **)0x0;
    }
    else {
      ppuVar12[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar12 + 0x13) = 0;
      uVar13 = uStack_58 | (ulong)ppuVar12;
      ppuVar12 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar12 == (undefined8 **)0x0) {
        ppuVar12 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuVar21 = (undefined8 **)(uVar13 | uVar20 & 0x10 | 6);
      *(undefined1 *)(ppuVar12 + 0xb) = 1;
      ppuVar17 = ppuVar12;
    }
    *param_1 = (ulong)ppuVar21;
    if (puStack_60 != (undefined8 *)0x1) {
      ppuStack_48 = ppuVar17;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar11 = rdtsc();
      }
      else {
        lVar11 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      lVar22 = 0;
      do {
        if (*(char *)((long)puStack_60 + 0x12) == '\0') {
          lVar22 = lVar22 + ((lVar11 >> 1) - *(long *)(puStack_60[4] + 0x30));
          *(long *)(puStack_60[4] + 0x30) = lVar11 >> 1;
          *(undefined1 *)(puStack_60[4] + 0x38) = 1;
        }
        puVar3 = (undefined8 *)*puStack_60;
        *puStack_60 = 0;
        *(undefined4 *)((long)puStack_60 + 0x1c) = 0;
        ppuVar12 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
        ppuVar17 = ppuStack_48;
        puStack_60 = puVar3;
      } while (puVar3 != (undefined8 *)0x1);
      if (0 < lVar22) {
        (*pcRam00000000009fb820)(&UNK_00161854,param_1,lVar22);
        ppuVar12 = (undefined8 **)(*pcRam00000000009fb810)(lVar22);
      }
    }
    if (ppuVar17 != (undefined8 **)0x0) {
      *(undefined1 *)(ppuVar17 + 0xb) = 0;
    }
code_r0x004d1d71:
    if (lVar10 != 0) {
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


