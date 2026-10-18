// Function: _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE
// Address: 004d16d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 **
_ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(ulong *param_1,long param_2)

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
  undefined4 uVar10;
  long lVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  uint uVar22;
  undefined8 **ppuVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  lVar11 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar11 != 0) {
    *(int *)(lVar11 + 0x4c) = *(int *)(lVar11 + 0x4c) + 1;
  }
  uVar15 = *param_1;
  _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(param_1);
  func_0x004d0510(uVar15,&UNK_00159a73);
  if ((uVar15 & 0x10) != 0) {
    func_0x004d0240(param_1,((uVar15 & 8) == 0) + '\b');
  }
  puStack_60 = (undefined8 *)0x1;
  if (((param_2 == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x20) == 0)) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x14) == '\x01')) {
    uStack_58 = 0;
    ppuStack_40 = (undefined8 **)0x0;
    ppuVar23 = (undefined8 **)0x0;
    ppuStack_50 = (undefined8 **)0x0;
    uVar10 = 0;
code_r0x004d176a:
    ppuStack_48 = ppuVar23;
    do {
      ppuVar23 = (undefined8 **)*param_1;
      uVar22 = (uint)ppuVar23;
      if ((((ulong)ppuVar23 & 8) == 0) || ((uVar22 & 6) == 4 || param_2 != 0)) {
        if ((uVar22 & 5) == 1 && param_2 == 0) {
          uVar15 = (long)ppuVar23 + (-0x100 - (ulong)(ppuVar23 < (undefined8 **)0x200));
          goto code_r0x004d17ba;
        }
        if (((ulong)ppuVar23 & 0x40) == 0) {
          LOCK();
          ppuVar19 = (undefined8 **)*param_1;
          if (ppuVar23 == ppuVar19) {
            *param_1 = (ulong)ppuVar23 | 0x40;
          }
          UNLOCK();
          if (ppuVar23 == ppuVar19) goto code_r0x004d17ee;
        }
      }
      else {
        uVar15 = (ulong)ppuVar23 & 0xffffffffffffffd7;
code_r0x004d17ba:
        LOCK();
        ppuVar14 = (undefined8 **)*param_1;
        bVar26 = ppuVar23 == ppuVar14;
        if (bVar26) {
          *param_1 = uVar15;
          ppuVar14 = ppuVar23;
        }
        UNLOCK();
        if (bVar26) goto code_r0x004d1d71;
      }
      uVar10 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar10,0);
    } while( true );
  }
  puVar17 = &UNK_001699f4;
  puVar18 = &UNK_0016b34a;
  uVar16 = 0x862;
  goto code_r0x004d1e38;
code_r0x004d1b12:
  do {
    ppuVar21 = (undefined8 **)*ppuVar19;
    if (*(char *)((long)ppuVar21 + 0x11) == '\x01') {
      if (ppuVar19[1] != (undefined8 *)0x0) goto code_r0x004d1e3f;
      puVar3 = *ppuVar21;
      *ppuVar19 = puVar3;
      if (ppuVar12 == ppuVar21) {
        bVar26 = ppuVar19 != ppuVar12;
        ppuVar12 = (undefined8 **)0x0;
        if (bVar26) {
          ppuVar12 = ppuVar19;
        }
      }
      else if (ppuVar19 != ppuVar12) {
        ppuVar20 = ppuStack_38;
        if ((*ppuVar19[4] == *(long *)puVar3[4]) && (*(int *)(ppuVar19 + 3) == *(int *)(puVar3 + 3))
           ) {
          pauVar4 = (undefined1 (*) [16])ppuVar19[4][1];
          pauVar5 = (undefined1 (*) [16])((long *)puVar3[4])[1];
          if ((pauVar4 == (undefined1 (*) [16])0x0) || (pauVar5 == (undefined1 (*) [16])0x0)) {
            bVar26 = pauVar4 == pauVar5;
          }
          else {
            if ((*(long *)pauVar4[1] != *(long *)pauVar5[1]) ||
               (*(long *)(pauVar4[1] + 8) != *(long *)(pauVar5[1] + 8))) goto code_r0x004d1bd9;
            auVar2 = *pauVar4;
            auVar28[0] = -((*pauVar5)[0] == auVar2[0]);
            auVar28[1] = -((*pauVar5)[1] == auVar2[1]);
            auVar28[2] = -((*pauVar5)[2] == auVar2[2]);
            auVar28[3] = -((*pauVar5)[3] == auVar2[3]);
            auVar28[4] = -((*pauVar5)[4] == auVar2[4]);
            auVar28[5] = -((*pauVar5)[5] == auVar2[5]);
            auVar28[6] = -((*pauVar5)[6] == auVar2[6]);
            auVar28[7] = -((*pauVar5)[7] == auVar2[7]);
            auVar28[8] = -((*pauVar5)[8] == auVar2[8]);
            auVar28[9] = -((*pauVar5)[9] == auVar2[9]);
            auVar28[10] = -((*pauVar5)[10] == auVar2[10]);
            auVar28[0xb] = -((*pauVar5)[0xb] == auVar2[0xb]);
            auVar28[0xc] = -((*pauVar5)[0xc] == auVar2[0xc]);
            auVar28[0xd] = -((*pauVar5)[0xd] == auVar2[0xd]);
            auVar28[0xe] = -((*pauVar5)[0xe] == auVar2[0xe]);
            auVar28[0xf] = -((*pauVar5)[0xf] == auVar2[0xf]);
            bVar26 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff;
          }
          if (bVar26) {
            if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
              ppuVar19[1] = puVar3;
            }
            else {
              ppuVar19[1] = (undefined8 *)puVar3[1];
            }
          }
        }
      }
code_r0x004d1bd9:
      *ppuVar21 = *ppuVar14;
      *ppuVar14 = ppuVar21;
      if ((ppuVar12 != ppuVar20) ||
         (ppuVar1 = ppuVar21 + 4, ppuVar14 = ppuVar21, ppuVar21 = ppuVar19,
         (undefined *)**ppuVar1 == &UNK_001ff6d0)) break;
    }
    else {
      ppuVar19 = (undefined8 **)ppuVar21[1];
      bVar6 = 1;
      if (ppuVar19 != (undefined8 **)0x0) {
        ppuVar8 = (undefined8 **)ppuVar19[1];
        ppuVar1 = ppuVar21;
        while (ppuVar7 = ppuVar19, ppuVar19 = ppuVar8, ppuVar19 != (undefined8 **)0x0) {
          ppuVar1[1] = ppuVar19;
          ppuVar8 = (undefined8 **)ppuVar19[1];
          ppuVar1 = ppuVar7;
        }
        ppuVar21[1] = ppuVar7;
        ppuVar21 = ppuVar7;
      }
    }
    ppuVar19 = ppuVar21;
  } while (!(bool)(ppuVar21 == ppuVar12 & bVar6));
  if (param_2 != 0) {
    ppuVar12 = (undefined8 **)func_0x004d0580(ppuVar12,param_2,ppuVar23,2);
  }
  if (puStack_60 != (undefined8 *)0x1) {
    if (ppuVar12 == (undefined8 **)0x0) {
      ppuVar23 = (undefined8 **)((ulong)(uVar22 & 0x10) | 2);
      ppuVar14 = (undefined8 **)0x0;
code_r0x004d1cb8:
      ppuVar19 = (undefined8 **)0x0;
    }
    else {
      ppuVar12[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar12 + 0x13) = 0;
      uVar15 = uStack_58 | (ulong)ppuVar12;
      ppuVar14 = (undefined8 **)
                 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (ppuVar14 == (undefined8 **)0x0) {
        ppuVar14 = (undefined8 **)
                   _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
      }
      ppuVar23 = (undefined8 **)(uVar15 | uVar22 & 0x10 | 6);
      *(undefined1 *)(ppuVar14 + 0xb) = 1;
      ppuVar19 = ppuVar14;
    }
    *param_1 = (ulong)ppuVar23;
    goto code_r0x004d1cbe;
  }
  puVar17 = &UNK_00170ab6;
  puVar18 = &UNK_001648fb;
  uVar16 = 0x94d;
code_r0x004d1e38:
  do {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,uVar16,&UNK_00183943,puVar17,puVar18);
code_r0x004d1e3f:
    puVar17 = &UNK_0018b20f;
    puVar18 = &UNK_00186ab0;
    uVar16 = 0x444;
  } while( true );
code_r0x004d17ee:
  if (((ulong)ppuVar23 & 4) != 0) {
    ppuVar19 = (undefined8 **)((ulong)ppuVar23 & 0xffffffffffffff00);
    if ((((ulong)ppuVar23 & 1) != 0) && (0x100 < (long)((ulong)ppuVar19[5] & 0xffffffffffffff00))) {
      ppuVar14 = (undefined8 **)(ppuVar19[5] + -0x20);
      ppuVar19[5] = ppuVar14;
      if (param_2 == 0) goto code_r0x004d1cb8;
      ppuVar14 = (undefined8 **)func_0x004d0580(ppuVar19,param_2,ppuVar23,2);
      if (ppuVar14 == (undefined8 **)0x0) {
        puVar17 = &UNK_0018838d;
        puVar18 = &UNK_0017434f;
        uVar16 = 0x8ab;
        goto code_r0x004d1e38;
      }
      uVar22 = uVar22 & 0xbf;
code_r0x004d1ae5:
      ppuVar23 = (undefined8 **)((ulong)uVar22 | (ulong)ppuVar14);
      goto code_r0x004d1cb8;
    }
    ppuStack_38 = ppuVar19;
    if (ppuStack_40 != (undefined8 **)0x0) {
      if (*(char *)((long)ppuVar19 + 0x13) == '\0') {
        puVar17 = &UNK_00174375;
        puVar18 = &UNK_0017439c;
        uVar16 = 0x8b7;
        goto code_r0x004d1e38;
      }
      if (*(char *)(ppuStack_40 + 2) == '\0') {
        *(undefined1 *)(ppuStack_40 + 2) = 1;
        if (ppuStack_40[1] != (undefined8 *)0x0) {
          puVar17 = &UNK_0017a5d2;
          puVar18 = &UNK_00183957;
          uVar16 = 0x8bd;
          goto code_r0x004d1e38;
        }
        if (ppuStack_40 != ppuVar19) {
          puVar3 = *ppuStack_40;
          cVar9 = func_0x004cf840();
          if (cVar9 != '\0') {
            ppuStack_40[1] = puVar3;
          }
        }
      }
    }
    ppuVar14 = (undefined8 **)*ppuStack_38;
    if (((undefined *)*ppuVar14[4] == &UNK_001ff6d0) && (ppuVar14[4][1] == 0)) {
      *(undefined1 *)((long)ppuVar14 + 0x11) = 1;
      uStack_58 = 0x20;
      ppuVar19 = ppuStack_38;
    }
    else {
      if ((ppuStack_50 == (undefined8 **)0x0) ||
         ((ppuStack_40 != ppuStack_38 &&
          (ppuVar14 = (undefined8 **)ppuStack_50[4], *ppuVar14 != (undefined8 *)&UNK_001ff6d0)))) {
        if (ppuStack_40 != ppuStack_38) {
          ppuVar19 = ppuStack_40;
          if (ppuStack_40 == (undefined8 **)0x0) {
            ppuVar19 = ppuStack_38;
          }
          ppuVar19 = (undefined8 **)*ppuVar19;
          *(undefined1 *)(ppuStack_38 + 2) = 0;
          if (ppuStack_38[1] == (undefined8 *)0x0) {
            *(undefined1 *)((long)ppuStack_38 + 0x13) = 1;
            *param_1 = (ulong)ppuVar23;
            ppuVar14 = ppuStack_38;
            ppuVar12 = ppuStack_40;
            while( true ) {
              ppuVar23 = ppuVar12;
              *(undefined1 *)((long)ppuVar19 + 0x11) = 0;
              if ((ppuVar19[4][1] == 0) ||
                 (cVar9 = (**(code **)(ppuVar19[4][1] + 0x10))(), ppuVar14 = ppuStack_38,
                 cVar9 != '\0')) {
                if (ppuStack_50 == (undefined8 **)0x0) {
                  *(undefined1 *)((long)ppuVar19 + 0x11) = 1;
                  if ((undefined *)*ppuVar19[4] == &UNK_001ff6d0) {
                    uStack_58 = 0x20;
                    ppuStack_40 = ppuVar14;
                    ppuStack_50 = ppuVar19;
                    goto code_r0x004d176a;
                  }
                  ppuStack_50 = ppuVar19;
                  ppuStack_48 = ppuVar23;
                }
                else if ((undefined *)*ppuVar19[4] == &UNK_001ff6f8) {
                  *(undefined1 *)((long)ppuVar19 + 0x11) = 1;
                }
                else {
                  uStack_58 = 0x20;
                }
              }
              ppuVar23 = ppuStack_48;
              if ((*(char *)((long)ppuVar19 + 0x11) == '\0') &&
                 (ppuVar12 = (undefined8 **)ppuVar19[1], ppuVar12 != (undefined8 **)0x0)) {
                ppuVar21 = ppuVar19;
                for (ppuVar20 = (undefined8 **)ppuVar12[1]; ppuVar1 = ppuVar12,
                    ppuVar20 != (undefined8 **)0x0; ppuVar20 = (undefined8 **)ppuVar20[1]) {
                  ppuVar21[1] = ppuVar20;
                  ppuVar12 = ppuVar20;
                  ppuVar21 = ppuVar1;
                }
                ppuVar19[1] = ppuVar1;
                ppuVar19 = ppuVar1;
              }
              if (ppuVar19 == ppuVar14) break;
              ppuVar12 = ppuVar19;
              ppuVar19 = (undefined8 **)*ppuVar19;
              ppuStack_48 = ppuVar23;
            }
            ppuStack_40 = ppuVar14;
            goto code_r0x004d176a;
          }
          puVar17 = &UNK_0015feeb;
          puVar18 = &UNK_00183957;
          uVar16 = 0x8fd;
          goto code_r0x004d1e38;
        }
        ppuStack_38[5] = (undefined8 *)0x0;
        *(undefined1 *)((long)ppuStack_38 + 0x13) = 0;
        if (param_2 == 0) {
          ppuVar23 = (undefined8 **)((ulong)ppuVar23 & 0xffffffffffffff96);
          goto code_r0x004d1cb8;
        }
        ppuVar14 = (undefined8 **)func_0x004d0580(ppuStack_38,param_2,ppuVar23,2);
        uVar22 = uVar22 & 0x96;
        goto code_r0x004d1ae5;
      }
      ppuVar14 = ppuStack_50;
      ppuVar19 = ppuStack_48;
      if (ppuStack_48 == (undefined8 **)0x0) {
        ppuVar19 = ppuStack_38;
      }
    }
    if ((undefined8 **)*ppuVar19 == ppuVar14) {
      ppuVar14 = &puStack_60;
      bVar6 = 0;
      ppuVar12 = ppuStack_38;
      ppuVar20 = ppuStack_38;
      goto code_r0x004d1b12;
    }
    puVar17 = &UNK_0018839e;
    puVar18 = &UNK_001899ff;
    uVar16 = 0x936;
    goto code_r0x004d1e38;
  }
  if (param_2 == 0) {
    puVar17 = &UNK_0015e550;
    puVar18 = &UNK_0016b375;
    uVar16 = 0x87f;
    goto code_r0x004d1e38;
  }
  bVar26 = true;
  do {
    ppuVar23 = (undefined8 **)*param_1;
    ppuVar19 = ppuVar23 + -0x20;
    if ((long)ppuVar23 < 0x100) {
      ppuVar19 = ppuVar23;
    }
    if (bVar26) {
      bVar26 = *(long *)(param_2 + 0x28) == 0;
      uVar15 = func_0x004d0580(0,param_2,ppuVar19,2);
    }
    else {
      uVar15 = 0;
      bVar26 = false;
    }
    uVar22 = 0xffffffd7;
    if (((ulong)ppuVar23 & 0xfffffffffffffe08) == 0) {
      uVar22 = 0xffffffde;
    }
    uVar25 = (ulong)ppuVar19 & 0xffffffffffffff00;
    if (uVar15 != 0) {
      uVar25 = uVar15 | 4;
    }
    LOCK();
    ppuVar14 = (undefined8 **)*param_1;
    bVar27 = ppuVar23 == ppuVar14;
    if (bVar27) {
      *param_1 = uVar25 | uVar22 & (uint)ppuVar23 & 0x9f;
      ppuVar14 = ppuVar23;
    }
    UNLOCK();
  } while (!bVar27);
  ppuVar19 = (undefined8 **)0x0;
code_r0x004d1cbe:
  if (puStack_60 != (undefined8 *)0x1) {
    ppuStack_48 = ppuVar19;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lVar13 = rdtsc();
    }
    else {
      lVar13 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    lVar24 = 0;
    do {
      if (*(char *)((long)puStack_60 + 0x12) == '\0') {
        lVar24 = lVar24 + ((lVar13 >> 1) - *(long *)(puStack_60[4] + 0x30));
        *(long *)(puStack_60[4] + 0x30) = lVar13 >> 1;
        *(undefined1 *)(puStack_60[4] + 0x38) = 1;
      }
      puVar3 = (undefined8 *)*puStack_60;
      *puStack_60 = 0;
      *(undefined4 *)((long)puStack_60 + 0x1c) = 0;
      ppuVar14 = (undefined8 **)AbslInternalPerThreadSemPost_lts_20260526();
      ppuVar19 = ppuStack_48;
      puStack_60 = puVar3;
    } while (puVar3 != (undefined8 *)0x1);
    if (0 < lVar24) {
      (*pcRam00000000009fb820)(&UNK_00161854,param_1,lVar24);
      ppuVar14 = (undefined8 **)(*pcRam00000000009fb810)(lVar24);
    }
  }
  if (ppuVar19 != (undefined8 **)0x0) {
    *(undefined1 *)(ppuVar19 + 0xb) = 0;
  }
code_r0x004d1d71:
  if (lVar11 != 0) {
    ppuVar14 = (undefined8 **)
               _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)((long)ppuVar14 + 0x4c) = *(int *)((long)ppuVar14 + 0x4c) + -1;
  }
  return ppuVar14;
}


