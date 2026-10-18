// Function: _ZN4absl12lts_202605265Mutex12LockSlowLoopEPNS0_15SynchWaitParamsEi
// Address: 004cfd90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex12LockSlowLoopEPNS0_15SynchWaitParamsEi
                (ulong *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  
  uVar7 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (uVar7 != 0) {
    *(int *)(uVar7 + 0x4c) = *(int *)(uVar7 + 0x4c) + 1;
  }
  if ((*param_1 & 0x10) != 0) {
    func_0x004d0240(param_1,((undefined *)*param_2 != &UNK_001ff6d0) * '\x02' + '\x04');
  }
  if ((*(long *)(param_2[4] + 0x20) == 0) || (uVar13 = uVar7, *(char *)(param_2[4] + 0x14) != '\0'))
  {
    uVar13 = 0;
    do {
      uVar14 = *param_1;
      uVar6 = (uint)uVar14;
      if (((uVar6 * 8 ^ 0x20) & uVar6 & 0x28) != 0) {
        if ((~uVar6 & 9) == 0) goto code_r0x004d0144;
        if ((uVar6 & 0x24) == 0x20) {
          puVar9 = &UNK_00178e70;
          uVar11 = 0x7c7;
          goto code_r0x004d0163;
        }
      }
      lVar3 = *param_2;
      if ((*(ulong *)(lVar3 + 0x18) & uVar14) == 0) {
        LOCK();
        uVar8 = *param_1;
        if (uVar14 == uVar8) {
          *param_1 = (((ulong)((param_3 & 1) - 1) | 0xfffffffffffffffd) & uVar14 |
                     *(ulong *)(lVar3 + 8)) + *(long *)(lVar3 + 0x10);
        }
        UNLOCK();
        if (uVar14 == uVar8) {
code_r0x004cffd7:
          if ((param_2[1] == 0) || (cVar5 = (**(code **)(param_2[1] + 0x10))(), cVar5 != '\0')) {
            uVar8 = param_2[4];
            if ((*(long *)(uVar8 + 0x20) == 0) || (*(char *)(uVar8 + 0x14) != '\0')) {
              if ((uVar14 & 0x10) != 0) {
                uVar8 = func_0x004d0240(param_1,((undefined *)*param_2 != &UNK_001ff6d0) * '\x02' +
                                                '\x05');
              }
              if (uVar7 != 0) {
                uVar8 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
                *(int *)(uVar8 + 0x4c) = *(int *)(uVar8 + 0x4c) + -1;
              }
              return uVar8;
            }
            goto code_r0x004d019a;
          }
          _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(param_1,param_2);
code_r0x004cfff6:
          _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE
                    (param_1,param_2[4]);
          param_3 = param_3 | 1;
          uVar13 = 0;
        }
      }
      else {
        bVar4 = (byte)param_3;
        if ((uVar14 & 0x44) == 0) {
          uVar8 = func_0x004d0580(0,param_2,uVar14,param_3);
          if (uVar8 == 0) goto code_r0x004d00ea;
          uVar10 = (ulong)(uVar6 & ((byte)~bVar4 & 1) * 2 + 0xb9);
          uVar1 = uVar10 + 4;
          uVar10 = uVar10 | 0x24;
          if ((uVar14 & 1) == 0) {
            uVar10 = uVar1;
          }
          if ((undefined *)*param_2 != &UNK_001ff6d0) {
            uVar10 = uVar1;
          }
          LOCK();
          uVar1 = *param_1;
          if (uVar14 == uVar1) {
            *param_1 = uVar10 | uVar8;
          }
          UNLOCK();
          if (uVar14 == uVar1) goto code_r0x004cfff6;
          *(undefined8 *)(param_2[4] + 0x20) = 0;
        }
        else if ((((ulong)((param_3 & 1) - 1) | 0xffffffffffffffdf) & *(ulong *)(lVar3 + 0x20) &
                 uVar14) == 0) {
          LOCK();
          uVar8 = *param_1;
          if (uVar14 == uVar8) {
            *param_1 = ((ulong)((uint)(byte)~bVar4 * 2) | 0xffffffffffffffbc) & uVar14 | 0x41;
          }
          UNLOCK();
          if (uVar14 == uVar8) {
            plVar2 = (long *)((uVar14 & 0xffffffffffffff00) + 0x28);
            *plVar2 = *plVar2 + 0x100;
            do {
              uVar14 = *param_1;
              LOCK();
              uVar8 = *param_1;
              if (uVar14 == uVar8) {
                *param_1 = (uVar14 & 0xffffffffffffffbe) + 1;
              }
              UNLOCK();
            } while (uVar14 != uVar8);
            goto code_r0x004cffd7;
          }
        }
        else if ((uVar14 & 0x40) == 0) {
          LOCK();
          uVar8 = *param_1;
          if (uVar14 == uVar8) {
            *param_1 = ((ulong)((uint)(byte)~bVar4 * 2) | 0xffffffffffffffb9) & uVar14 | 0x44;
          }
          UNLOCK();
          if (uVar14 == uVar8) {
            uVar8 = func_0x004d0580(uVar14 & 0xffffffffffffff00,param_2,uVar14,param_3);
            if (uVar8 != 0) {
              uVar13 = (ulong)((uVar6 & 1) << 5);
              if ((undefined *)*param_2 != &UNK_001ff6d0) {
                uVar13 = 0;
              }
              uVar14 = uVar13 | uVar8 | 4;
              do {
                uVar8 = *param_1;
                LOCK();
                uVar13 = *param_1;
                if (uVar8 == uVar13) {
                  *param_1 = (uint)uVar8 & 0xbb | uVar14;
                }
                UNLOCK();
              } while (uVar8 != uVar13);
              goto code_r0x004cfff6;
            }
            goto code_r0x004d0117;
          }
        }
      }
      if ((*(long *)(param_2[4] + 0x20) != 0) && (*(char *)(param_2[4] + 0x14) == '\0'))
      goto code_r0x004d00bd;
      uVar6 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar13,1);
      uVar13 = (ulong)uVar6;
    } while( true );
  }
code_r0x004d016d:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x7d5,&UNK_00183943,&UNK_00188345,&UNK_0016b34a);
code_r0x004d019a:
  puVar12 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x83c,&UNK_00183943,&UNK_00188345,&UNK_0016b34a);
  uVar7 = *puVar12;
  if ((uVar7 & 0x19) == 0) {
    LOCK();
    uVar13 = *puVar12;
    bVar15 = uVar7 == uVar13;
    if (bVar15) {
      *puVar12 = uVar7 | 8;
      uVar13 = uVar7;
    }
    UNLOCK();
    return CONCAT71((int7)(uVar13 >> 8),bVar15);
  }
  if ((uVar7 & 0x10) == 0) {
    return 0;
  }
  uVar7 = *puVar12;
  if ((uVar7 & 9) == 0) {
    LOCK();
    uVar14 = *puVar12;
    if (uVar7 == uVar14) {
      *puVar12 = uVar7 | 8;
    }
    UNLOCK();
    if (uVar7 == uVar14) {
      uVar7 = CONCAT71((int7)(uVar13 >> 8),1);
      goto code_r0x004d0228;
    }
  }
  uVar7 = 0;
code_r0x004d0228:
  func_0x004d0240();
  return uVar7 & 0xffffffff;
code_r0x004d00bd:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x836,&UNK_00183943,&UNK_00188345,&UNK_0016b34a);
code_r0x004d00ea:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x7f2,&UNK_00183943,&UNK_0018838d,&UNK_0017be2a);
code_r0x004d0117:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x821,&UNK_00183943,&UNK_0018838d,&UNK_0015e539);
code_r0x004d0144:
  puVar9 = &UNK_00164916;
  uVar11 = 0x7c4;
code_r0x004d0163:
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,uVar11,puVar9,&UNK_00181e73,uVar14);
  goto code_r0x004d016d;
}


