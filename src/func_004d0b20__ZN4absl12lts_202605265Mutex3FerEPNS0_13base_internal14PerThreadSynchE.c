// Function: _ZN4absl12lts_202605265Mutex3FerEPNS0_13base_internal14PerThreadSynchE
// Address: 004d0b20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004d0d61: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004d0d66) */
/* WARNING: Removing unreachable block (ram,0x004d0d74) */
/* WARNING: Removing unreachable block (ram,0x004d0d78) */

int * _ZN4absl12lts_202605265Mutex3FerEPNS0_13base_internal14PerThreadSynchE
                (ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  
  lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
  }
  lVar1 = param_2[4];
  if (*(long *)(lVar1 + 8) == 0) {
    if (*(long *)(lVar1 + 0x28) == 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
      piVar10 = (int *)*param_1;
      puVar8 = (undefined8 *)param_2[4];
      if ((((undefined *)*puVar8 != &UNK_001ff6f8 | 8) & (uint)piVar10) != 0) {
        uVar2 = 0;
        do {
          if (((ulong)piVar10 & 0x44) == 0) {
            uVar6 = func_0x004d0580(0,puVar8,piVar10,6);
            if (uVar6 == 0) {
              _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                        (3,&UNK_00174346,0x9b2,&UNK_00183943,&UNK_0018838d,&UNK_0015fefe);
              goto code_r0x004d0cc4;
            }
            LOCK();
            piVar5 = (int *)*param_1;
            bVar12 = piVar10 == piVar5;
            if (bVar12) {
              *param_1 = (uint)piVar10 & 0xbb | uVar6 | 4;
              piVar5 = piVar10;
            }
            UNLOCK();
            if (bVar12) goto code_r0x004d0c2f;
          }
          else if (((ulong)piVar10 & 0x40) == 0) {
            LOCK();
            piVar5 = (int *)*param_1;
            if (piVar10 == piVar5) {
              *param_1 = (ulong)piVar10 | 0x44;
            }
            UNLOCK();
            if (piVar10 == piVar5) {
              uVar6 = func_0x004d0580((ulong)piVar10 & 0xffffffffffffff00,param_2[4],piVar10,6);
              if (uVar6 != 0) {
                do {
                  piVar10 = (int *)*param_1;
                  LOCK();
                  piVar5 = (int *)*param_1;
                  bVar12 = piVar10 == piVar5;
                  if (bVar12) {
                    *param_1 = (ulong)((uint)piVar10 & 0xbb) | uVar6 | 4;
                    piVar5 = piVar10;
                  }
                  UNLOCK();
                } while (!bVar12);
                goto code_r0x004d0c2f;
              }
              goto code_r0x004d0d1e;
            }
          }
          uVar2 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar2,1);
          piVar10 = (int *)*param_1;
          puVar8 = (undefined8 *)param_2[4];
        } while ((((undefined *)*puVar8 != &UNK_001ff6f8 | 8) & (uint)piVar10) != 0);
      }
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 0x1c) = 0;
      piVar5 = (int *)AbslInternalPerThreadSemPost_lts_20260526(param_2);
code_r0x004d0c2f:
      if (lVar4 != 0) {
        piVar5 = (int *)_ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        piVar5[0x13] = piVar5[0x13] + -1;
      }
      return piVar5;
    }
  }
  else {
code_r0x004d0cc4:
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,0x998,&UNK_00183943,&UNK_0016639d,&UNK_0017da79);
  }
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x99a,&UNK_00183943,&UNK_0017a5e9,&UNK_00161861);
code_r0x004d0d1e:
  puVar9 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x9bd,&UNK_00183943,&UNK_0018838d,&UNK_0015fefe);
  uVar11 = uRam0000000000a02b08;
  if ((*puVar9 & 8) != 0) {
    return (int *)*puVar9;
  }
  if ((uRam0000000000a02b08 & 1) == 0) {
    if (((uRam0000000000a02b08 & 2) == 0) &&
       (lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
       lVar4 != 0)) {
      *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
      LOCK();
      bVar12 = uVar11 != uRam0000000000a02b08;
      uVar3 = uVar11;
      uVar7 = uVar11 | 5;
      if (bVar12) {
        uVar3 = uRam0000000000a02b08;
        uVar7 = uRam0000000000a02b08;
      }
      uRam0000000000a02b08 = uVar7;
      UNLOCK();
      if (bVar12) {
        lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
        uVar11 = uVar3;
      }
    }
    else {
      LOCK();
      uVar3 = uVar11 | 1;
      if (uVar11 != uRam0000000000a02b08) {
        uVar11 = uRam0000000000a02b08;
        uVar3 = uRam0000000000a02b08;
      }
      uRam0000000000a02b08 = uVar3;
      UNLOCK();
    }
  }
  if ((uVar11 & 1) != 0) {
    _ZN4absl12lts_2026052613base_internal8SpinLock8SlowLockEv(0xa02b08);
  }
  piVar10 = *(int **)(((ulong)puVar9 % 0x407) * 8 + 0xa00ad0);
  do {
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
code_r0x004d0e6d:
      uVar3 = uRam0000000000a02b08;
      uVar7 = uRam0000000000a02b08 & 2;
      LOCK();
      UNLOCK();
      uVar11 = uRam0000000000a02b08 & 4;
      uRam0000000000a02b08 = uVar7;
      if (uVar11 != 0) {
        lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
      }
      if (7 < uVar3) {
        _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa02b08,uVar3);
      }
      return piVar10;
    }
    if ((*(ulong *)(piVar10 + 4) ^ (ulong)puVar9) == 0xf03a5f7bf03a5f7b) {
      *piVar10 = *piVar10 + 1;
      goto code_r0x004d0e6d;
    }
    piVar10 = *(int **)(piVar10 + 2);
  } while( true );
}


