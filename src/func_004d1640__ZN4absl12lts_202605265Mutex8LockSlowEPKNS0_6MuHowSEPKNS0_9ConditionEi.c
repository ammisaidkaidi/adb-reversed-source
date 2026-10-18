// Function: _ZN4absl12lts_202605265Mutex8LockSlowEPKNS0_6MuHowSEPKNS0_9ConditionEi
// Address: 004d1640
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 **
_ZN4absl12lts_202605265Mutex8LockSlowEPKNS0_6MuHowSEPKNS0_9ConditionEi
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 **ppuVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  byte bVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 **ppuVar14;
  long lVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong *puVar20;
  undefined *puVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 **ppuVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (uRam0000000000a02b44 == 0) {
    iVar10 = _ZN4absl12lts_2026052613base_internal7NumCPUsEv();
    uRam0000000000a02b44 = -(uint)(iVar10 < 2) | 0x5dc;
  }
  ppuVar12 = (undefined8 **)
             _ZN4absl12lts_202605265Mutex20LockSlowWithDeadlineEPKNS0_6MuHowSEPKNS0_9ConditionENS0_24synchronization_internal13KernelTimeoutEi
                       (param_1,param_2,param_3,0xffffffffffffffff,param_4);
  if ((char)ppuVar12 != '\0') {
    return ppuVar12;
  }
  puVar19 = &UNK_00174346;
  puVar20 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x739,&UNK_00183943,&UNK_00188300,&UNK_00170a8d);
  uStack_58 = (ulong)param_4;
  uStack_50 = param_1;
  lVar13 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x4c) = *(int *)(lVar13 + 0x4c) + 1;
  }
  uVar17 = *puVar20;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(puVar20);
  func_0x004d0510(uVar17,&UNK_00159a73);
  if ((uVar17 & 0x10) != 0) {
    func_0x004d0240(puVar20,((uVar17 & 8) == 0) + '\b');
  }
  puStack_88 = (undefined8 *)0x1;
  if (((puVar19 == (undefined *)0x0) || (*(long *)(*(long *)(puVar19 + 0x20) + 0x20) == 0)) ||
     (*(char *)(*(long *)(puVar19 + 0x20) + 0x14) == '\x01')) {
    uStack_80 = 0;
    ppuStack_68 = (undefined8 **)0x0;
    ppuVar12 = (undefined8 **)0x0;
    ppuStack_78 = (undefined8 **)0x0;
    uVar11 = 0;
code_r0x004d176a:
    ppuStack_70 = ppuVar12;
    do {
      ppuVar12 = (undefined8 **)*puVar20;
      uVar25 = (uint)ppuVar12;
      if ((((ulong)ppuVar12 & 8) == 0) || ((uVar25 & 6) == 4 || puVar19 != (undefined *)0x0)) {
        if ((uVar25 & 5) == 1 && puVar19 == (undefined *)0x0) {
          uVar17 = (long)ppuVar12 + (-0x100 - (ulong)(ppuVar12 < (undefined8 **)0x200));
          goto code_r0x004d17ba;
        }
        if (((ulong)ppuVar12 & 0x40) == 0) {
          LOCK();
          ppuVar22 = (undefined8 **)*puVar20;
          if (ppuVar12 == ppuVar22) {
            *puVar20 = (ulong)ppuVar12 | 0x40;
          }
          UNLOCK();
          if (ppuVar12 == ppuVar22) goto code_r0x004d17ee;
        }
      }
      else {
        uVar17 = (ulong)ppuVar12 & 0xffffffffffffffd7;
code_r0x004d17ba:
        LOCK();
        ppuVar16 = (undefined8 **)*puVar20;
        bVar28 = ppuVar12 == ppuVar16;
        if (bVar28) {
          *puVar20 = uVar17;
          ppuVar16 = ppuVar12;
        }
        UNLOCK();
        if (bVar28) goto code_r0x004d1d71;
      }
      uVar11 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar11,0);
    } while( true );
  }
  puVar19 = &UNK_001699f4;
  puVar21 = &UNK_0016b34a;
  uVar18 = 0x862;
  goto code_r0x004d1e38;
code_r0x004d1b12:
  do {
    ppuVar24 = (undefined8 **)*ppuVar22;
    if (*(char *)((long)ppuVar24 + 0x11) == '\x01') {
      if (ppuVar22[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar3 = *ppuVar24;
      *ppuVar22 = puVar3;
      if (ppuVar14 == ppuVar24) {
        bVar28 = ppuVar22 != ppuVar14;
        ppuVar14 = (undefined8 **)0x0;
        if (bVar28) {
          ppuVar14 = ppuVar22;
        }
      }
      else if (ppuVar22 != ppuVar14) {
        ppuVar23 = ppuStack_60;
        if ((*ppuVar22[4] == *(long *)puVar3[4]) && (*(int *)(ppuVar22 + 3) == *(int *)(puVar3 + 3))
           ) {
          pauVar4 = (undefined1 (*) [16])ppuVar22[4][1];
          pauVar5 = (undefined1 (*) [16])((long *)puVar3[4])[1];
          if ((pauVar4 == (undefined1 (*) [16])0x0) || (pauVar5 == (undefined1 (*) [16])0x0)) {
            bVar28 = pauVar4 == pauVar5;
          }
          else {
            if ((*(long *)pauVar4[1] != *(long *)pauVar5[1]) ||
               (*(long *)(pauVar4[1] + 8) != *(long *)(pauVar5[1] + 8))) goto code_r0x004d1bd9;
            auVar2 = *pauVar4;
            auVar30[0] = -((*pauVar5)[0] == auVar2[0]);
            auVar30[1] = -((*pauVar5)[1] == auVar2[1]);
            auVar30[2] = -((*pauVar5)[2] == auVar2[2]);
            auVar30[3] = -((*pauVar5)[3] == auVar2[3]);
            auVar30[4] = -((*pauVar5)[4] == auVar2[4]);
            auVar30[5] = -((*pauVar5)[5] == auVar2[5]);
            auVar30[6] = -((*pauVar5)[6] == auVar2[6]);
            auVar30[7] = -((*pauVar5)[7] == auVar2[7]);
            auVar30[8] = -((*pauVar5)[8] == auVar2[8]);
            auVar30[9] = -((*pauVar5)[9] == auVar2[9]);
            auVar30[10] = -((*pauVar5)[10] == auVar2[10]);
            auVar30[0xb] = -((*pauVar5)[0xb] == auVar2[0xb]);
            auVar30[0xc] = -((*pauVar5)[0xc] == auVar2[0xc]);
            auVar30[0xd] = -((*pauVar5)[0xd] == auVar2[0xd]);
            auVar30[0xe] = -((*pauVar5)[0xe] == auVar2[0xe]);
            auVar30[0xf] = -((*pauVar5)[0xf] == auVar2[0xf]);
            bVar28 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          if (bVar28) {
            if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
              ppuVar22[1] = puVar3;
            }
            else {
              ppuVar22[1] = (undefined8 *)puVar3[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar24 = *ppuVar16;
      *ppuVar16 = ppuVar24;
      if ((ppuVar14 != ppuVar23) ||
         (ppuVar1 = ppuVar24 + 4, ppuVar16 = ppuVar24, ppuVar24 = ppuVar22,
         (undefined *)**ppuVar1 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar22 = (undefined8 **)ppuVar24[1];
      bVar6 = 1;
      if (ppuVar22 != (undefined8 **)0x0) {
        ppuVar8 = (undefined8 **)ppuVar22[1];
        ppuVar1 = ppuVar24;
        while (ppuVar7 = ppuVar22, ppuVar22 = ppuVar8, ppuVar22 != (undefined8 **)0x0) {
          ppuVar1[1] = ppuVar22;
          ppuVar8 = (undefined8 **)ppuVar22[1];
          ppuVar1 = ppuVar7;
        }
        ppuVar24[1] = ppuVar7;
        ppuVar24 = ppuVar7;
      }
    }
    ppuVar22 = ppuVar24;
  } while (!(bool)(ppuVar24 == ppuVar14 & bVar6));
  if (puVar19 != (undefined *)0x0) {
    ppuVar14 = (undefined8 **)func_0x004d0580(ppuVar14,puVar19,ppuVar12,2);
  }
  if (puStack_88 != (undefined8 *)0x1) {
    if (ppuVar14 == (undefined8 **)0x0) {
      ppuVar12 = (undefined8 **)((ulong)(uVar25 & 0x10) | 2);
      ppuVar16 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar22 = (undefined8 **)0x0;
    }
    else {
      ppuVar14[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar14 + 0x13) = 0;
      uVar17 = uStack_80 | (ulong)ppuVar14;
      ppuVar16 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar16 == (undefined8 **)0x0) {
        ppuVar16 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuVar12 = (undefined8 **)(uVar17 | uVar25 & 0x10 | 6);
      *(undefined1 *)(ppuVar16 + 0xb) = 1;
      ppuVar22 = ppuVar16;
    }
    *puVar20 = (ulong)ppuVar12;
    goto code_r0x004d1cbe;
  }
  puVar19 = &UNK_00170ab6;
  puVar21 = &UNK_001648fb;
  uVar18 = 0x94d;
code_r0x004d1e38:
  do {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar18,&UNK_00183943,puVar19,puVar21);
code_r0x004d1e3f:
    puVar19 = &UNK_0018b20f;
    puVar21 = &UNK_00186ab0;
    uVar18 = 0x444;
  } while( true );
code_r0x004d17ee:
  if (((ulong)ppuVar12 & 4) != 0) {
    ppuVar22 = (undefined8 **)((ulong)ppuVar12 & 0xffffffffffffff00);
    if ((((ulong)ppuVar12 & 1) != 0) && (0x100 < (long)((ulong)ppuVar22[5] & 0xffffffffffffff00))) {
      ppuVar16 = (undefined8 **)(ppuVar22[5] + -0x20);
      ppuVar22[5] = ppuVar16;
      if (puVar19 == (undefined *)0x0) goto code_r0x004d1cb8;
      ppuVar16 = (undefined8 **)func_0x004d0580(ppuVar22,puVar19,ppuVar12,2);
      if (ppuVar16 == (undefined8 **)0x0) {
        puVar19 = &UNK_0018838d;
        puVar21 = &UNK_0017434f;
        uVar18 = 0x8ab;
        goto code_r0x004d1e38;
      }
      uVar25 = uVar25 & 0xbf;
code_r0x004d1ae5:
      ppuVar12 = (undefined8 **)((ulong)uVar25 | (ulong)ppuVar16);
      goto code_r0x004d1cb8;
    }
    ppuStack_60 = ppuVar22;
    if (ppuStack_68 != (undefined8 **)0x0) {
      if (*(char *)((long)ppuVar22 + 0x13) == '\0') {
        puVar19 = &UNK_00174375;
        puVar21 = &UNK_0017439c;
        uVar18 = 0x8b7;
        goto code_r0x004d1e38;
      }
      if (*(char *)(ppuStack_68 + 2) == '\0') {
        *(undefined1 *)(ppuStack_68 + 2) = 1;
        if (ppuStack_68[1] != (undefined8 *)0x0) {
          puVar19 = &UNK_0017a5d2;
          puVar21 = &UNK_00183957;
          uVar18 = 0x8bd;
          goto code_r0x004d1e38;
        }
        if (ppuStack_68 != ppuVar22) {
          puVar3 = *ppuStack_68;
          cVar9 = func_0x004cf840();
          if (cVar9 != '\0') {
            ppuStack_68[1] = puVar3;
          }
        }
      }
    }
    ppuVar16 = (undefined8 **)*ppuStack_60;
    if (((undefined *)*ppuVar16[4] == &UNK_001ff6d0) && (ppuVar16[4][1] == 0)) {
      *(undefined1 *)((long)ppuVar16 + 0x11) = 1;
      uStack_80 = 0x20;
      ppuVar22 = ppuStack_60;
    }
    else {
      if ((ppuStack_78 == (undefined8 **)0x0) ||
         ((ppuStack_68 != ppuStack_60 &&
          (ppuVar16 = (undefined8 **)ppuStack_78[4], *ppuVar16 != (undefined8 *)&UNK_001ff6d0)))) {
        if (ppuStack_68 != ppuStack_60) {
          ppuVar22 = ppuStack_68;
          if (ppuStack_68 == (undefined8 **)0x0) {
            ppuVar22 = ppuStack_60;
          }
          ppuVar22 = (undefined8 **)*ppuVar22;
          *(undefined1 *)(ppuStack_60 + 2) = 0;
          if (ppuStack_60[1] == (undefined8 *)0x0) {
            *(undefined1 *)((long)ppuStack_60 + 0x13) = 1;
            *puVar20 = (ulong)ppuVar12;
            ppuVar16 = ppuStack_60;
            ppuVar14 = ppuStack_68;
            while( true ) {
              ppuVar12 = ppuVar14;
              *(undefined1 *)((long)ppuVar22 + 0x11) = 0;
              if ((ppuVar22[4][1] == 0) ||
                 (cVar9 = (**(code **)(ppuVar22[4][1] + 0x10))(), ppuVar16 = ppuStack_60,
                 cVar9 != '\0')) {
                if (ppuStack_78 == (undefined8 **)0x0) {
                  *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
                  if ((undefined *)*ppuVar22[4] == &UNK_001ff6d0) {
                    uStack_80 = 0x20;
                    ppuStack_68 = ppuVar16;
                    ppuStack_78 = ppuVar22;
                    goto code_r0x004d176a;
                  }
                  ppuStack_78 = ppuVar22;
                  ppuStack_70 = ppuVar12;
                }
                else if ((undefined *)*ppuVar22[4] == &UNK_001ff6f8) {
                  *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
                }
                else {
                  uStack_80 = 0x20;
                }
              }
              ppuVar12 = ppuStack_70;
              if ((*(char *)((long)ppuVar22 + 0x11) == '\0') &&
                 (ppuVar14 = (undefined8 **)ppuVar22[1], ppuVar14 != (undefined8 **)0x0)) {
                ppuVar24 = ppuVar22;
                for (ppuVar23 = (undefined8 **)ppuVar14[1]; ppuVar1 = ppuVar14,
                    ppuVar23 != (undefined8 **)0x0; ppuVar23 = (undefined8 **)ppuVar23[1]) {
                  ppuVar24[1] = ppuVar23;
                  ppuVar14 = ppuVar23;
                  ppuVar24 = ppuVar1;
                }
                ppuVar22[1] = ppuVar1;
                ppuVar22 = ppuVar1;
              }
              if (ppuVar22 == ppuVar16) break;
              ppuVar14 = ppuVar22;
              ppuVar22 = (undefined8 **)*ppuVar22;
              ppuStack_70 = ppuVar12;
            }
            ppuStack_68 = ppuVar16;
            goto code_r0x004d176a;
          }
          puVar19 = &UNK_0015feeb;
          puVar21 = &UNK_00183957;
          uVar18 = 0x8fd;
          goto code_r0x004d1e38;
        }
        ppuStack_60[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_60 + 0x13) = 0;
        if (puVar19 == (undefined *)0x0) {
          ppuVar12 = (undefined8 **)((ulong)ppuVar12 & 0xffffffffffffff96);
          goto code_r0x004d1cb8;
        }
        ppuVar16 = (undefined8 **)func_0x004d0580(ppuStack_60,puVar19,ppuVar12,2);
        uVar25 = uVar25 & 0x96;
        goto code_r0x004d1ae5;
      }
      ppuVar16 = ppuStack_78;
      ppuVar22 = ppuStack_70;
      if (ppuStack_70 == (undefined8 **)0x0) {
        ppuVar22 = ppuStack_60;
      }
    }
    if ((undefined8 **)*ppuVar22 == ppuVar16) {
      ppuVar16 = &puStack_88;
      bVar6 = 0;
      ppuVar14 = ppuStack_60;
      ppuVar23 = ppuStack_60;
      goto code_r0x004d1b12;
    }
    puVar19 = &UNK_0018839e;
    puVar21 = &UNK_001899ff;
    uVar18 = 0x936;
    goto code_r0x004d1e38;
  }
  if (puVar19 == (undefined *)0x0) {
    puVar19 = &UNK_0015e550;
    puVar21 = &UNK_0016b375;
    uVar18 = 0x87f;
    goto code_r0x004d1e38;
  }
  bVar28 = true;
  do {
    ppuVar12 = (undefined8 **)*puVar20;
    ppuVar22 = ppuVar12 + -0x20;
    if ((long)ppuVar12 < 0x100) {
      ppuVar22 = ppuVar12;
    }
    if (bVar28) {
      bVar28 = *(long *)(puVar19 + 0x28) == 0;
      uVar17 = func_0x004d0580(0,puVar19,ppuVar22,2);
    }
    else {
      uVar17 = 0;
      bVar28 = false;
    }
    uVar25 = 0xffffffd7;
    if (((ulong)ppuVar12 & 0xfffffffffffffe08) == 0) {
      uVar25 = 0xffffffde;
    }
    uVar27 = (ulong)ppuVar22 & 0xffffffffffffff00;
    if (uVar17 != 0) {
      uVar27 = uVar17 | 4;
    }
    LOCK();
    ppuVar16 = (undefined8 **)*puVar20;
    bVar29 = ppuVar12 == ppuVar16;
    if (bVar29) {
      *puVar20 = uVar27 | uVar25 & (uint)ppuVar12 & 0x9f;
      ppuVar16 = ppuVar12;
    }
    UNLOCK();
  } while (!bVar29);
  ppuVar22 = (undefined8 **)0x0;
code_r0x004d1cbe:
  if (puStack_88 != (undefined8 *)0x1) {
    ppuStack_70 = ppuVar22;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lVar15 = rdtsc();
    }
    else {
      lVar15 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    lVar26 = 0;
    do {
      if (*(char *)((long)puStack_88 + 0x12) == '\0') {
        lVar26 = lVar26 + ((lVar15 >> 1) - *(long *)(puStack_88[4] + 0x30));
        *(long *)(puStack_88[4] + 0x30) = lVar15 >> 1;
        *(undefined1 *)(puStack_88[4] + 0x38) = 1;
      }
      puVar3 = (undefined8 *)*puStack_88;
      *puStack_88 = 0;
      *(undefined4 *)((long)puStack_88 + 0x1c) = 0;
      ppuVar16 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
      ppuVar22 = ppuStack_70;
      puStack_88 = puVar3;
    } while (puVar3 != (undefined8 *)0x1);
    if (0 < lVar26) {
      (*pcRam00000000009fb820)(&UNK_00161854,puVar20,lVar26);
      ppuVar16 = (undefined8 **)(*pcRam00000000009fb810)(lVar26);
    }
  }
  if (ppuVar22 != (undefined8 **)0x0) {
    *(undefined1 *)(ppuVar22 + 0xb) = 0;
  }
code_r0x004d1d71:
  if (lVar13 != 0) {
    ppuVar16 = (undefined8 **)
               _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)((long)ppuVar16 + 0x4c) = *(int *)((long)ppuVar16 + 0x4c) + -1;
  }
  return ppuVar16;
}


