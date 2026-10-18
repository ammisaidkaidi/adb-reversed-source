// Function: _ZN4absl12lts_2026052618debugging_internal23RegisterFileMappingHintEPKvS3_mPKc
// Address: 004ef300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004ef531) */
/* WARNING: Type propagation algorithm not settling */

ulong _ZN4absl12lts_2026052618debugging_internal23RegisterFileMappingHintEPKvS3_mPKc
                (ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_RDX;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  bool bVar11;
  
  if ((param_2 < param_1) || (param_4 == 0)) {
    func_0x0099c600();
    goto code_r0x004ef474;
  }
  _ZN4absl12lts_2026052613base_internal16InitSigSafeArenaEv();
  uVar2 = uRam0000000000a030b8;
  uVar6 = (ulong)uRam0000000000a030b8;
  if ((uRam0000000000a030b8 & 1) == 0) {
    if (((uRam0000000000a030b8 & 2) == 0) &&
       (lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
       lVar3 != 0)) {
      *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
      LOCK();
      bVar11 = uVar2 != uRam0000000000a030b8;
      uVar1 = uVar2 | 5;
      if (bVar11) {
        uVar2 = uRam0000000000a030b8;
        uVar1 = uRam0000000000a030b8;
      }
      uRam0000000000a030b8 = uVar1;
      UNLOCK();
      if (bVar11) {
        lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
        uVar6 = (ulong)uVar2;
      }
      goto code_r0x004ef380;
    }
    LOCK();
    uVar1 = uVar2 | 1;
    if (uVar2 != uRam0000000000a030b8) {
      uVar2 = uRam0000000000a030b8;
      uVar1 = uRam0000000000a030b8;
    }
    uRam0000000000a030b8 = uVar1;
    UNLOCK();
    uVar6 = (ulong)uVar2;
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  else {
code_r0x004ef380:
    if ((uVar6 & 1) != 0) {
      return 0;
    }
  }
  bVar11 = iRam0000000000a02fa8 < 8;
  if (iRam0000000000a02fa8 < 8) {
    lVar3 = func_0x0099bcf0(param_4);
    uVar4 = _ZN4absl12lts_2026052613base_internal12SigSafeArenaEv();
    lVar5 = _ZN4absl12lts_2026052613base_internal13LowLevelAlloc14AllocWithArenaEmPNS2_5ArenaE
                      (lVar3 + 1,uVar4);
    if (lVar5 == 0) {
code_r0x004ef474:
      puVar9 = (ulong *)&UNK_0018840c;
      puVar7 = (undefined8 *)&UNK_00183943;
      puVar10 = (ulong *)0x3;
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (3,&UNK_0018840c,0x65a,&UNK_00183943,&UNK_0015cd54,&UNK_00186b39);
      uVar2 = uRam0000000000a030b8;
      if ((uRam0000000000a030b8 & 1) == 0) {
        if ((uRam0000000000a030b8 & 2) == 0) {
          lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
          if (lVar3 == 0) {
            LOCK();
            uVar1 = uVar2 | 1;
            if (uVar2 != uRam0000000000a030b8) {
              uVar2 = uRam0000000000a030b8;
              uVar1 = uRam0000000000a030b8;
            }
            uRam0000000000a030b8 = uVar1;
            UNLOCK();
          }
          else {
            *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
            LOCK();
            bVar11 = uVar2 != uRam0000000000a030b8;
            uVar1 = uVar2;
            uVar8 = uVar2 | 5;
            if (bVar11) {
              uVar1 = uRam0000000000a030b8;
              uVar8 = uRam0000000000a030b8;
            }
            uRam0000000000a030b8 = uVar8;
            UNLOCK();
            if (bVar11) {
              lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
              *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
              uVar2 = uVar1;
            }
          }
        }
        else {
          uRam0000000000a030b8 = uRam0000000000a030b8 | 1;
          LOCK();
          UNLOCK();
        }
      }
      if ((uVar2 & 1) == 0) {
        if (0 < (long)iRam0000000000a02fa8) {
          lVar3 = 0;
          do {
            if ((*(ulong *)(lVar3 + 0xa02fb0) <= *puVar10) &&
               (uVar6 = *(ulong *)(lVar3 + 0xa02fb8), *puVar9 <= uVar6)) {
              *puVar10 = *(ulong *)(lVar3 + 0xa02fb0);
              *puVar9 = uVar6;
              *extraout_RDX = *(undefined8 *)(lVar3 + 0xa02fc0);
              uVar4 = *(undefined8 *)(lVar3 + 0xa02fc8);
              *puVar7 = uVar4;
              uVar6 = CONCAT71((int7)((ulong)uVar4 >> 8),1);
              goto code_r0x004ef5a8;
            }
            lVar3 = lVar3 + 0x20;
          } while ((long)iRam0000000000a02fa8 * 0x20 != lVar3);
        }
        uVar6 = 0;
code_r0x004ef5a8:
        uVar1 = uRam0000000000a030b8;
        uVar8 = uRam0000000000a030b8 & 2;
        LOCK();
        UNLOCK();
        uVar2 = uRam0000000000a030b8 & 4;
        uRam0000000000a030b8 = uVar8;
        if (uVar2 != 0) {
          uVar6 = uVar6 & 0xffffffff;
          lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
          *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
        }
        if (7 < uVar1) {
          uVar6 = uVar6 & 0xffffffff;
          _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa030b8,uVar1);
        }
      }
      else {
        uVar6 = 0;
      }
      return uVar6;
    }
    func_0x0099bda0(lVar5,param_4,lVar3 + 1);
    lVar3 = (long)iRam0000000000a02fa8;
    iRam0000000000a02fa8 = iRam0000000000a02fa8 + 1;
    lVar3 = lVar3 * 0x20;
    *(ulong *)(lVar3 + 0xa02fb0) = param_1;
    *(ulong *)(lVar3 + 0xa02fb8) = param_2;
    *(undefined8 *)(lVar3 + 0xa02fc0) = param_3;
    *(long *)(lVar3 + 0xa02fc8) = lVar5;
  }
  uVar1 = uRam0000000000a030b8;
  uVar8 = uRam0000000000a030b8 & 2;
  LOCK();
  UNLOCK();
  uVar2 = uRam0000000000a030b8 & 4;
  uRam0000000000a030b8 = uVar8;
  if (uVar2 != 0) {
    lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
  }
  if (7 < uVar1) {
    _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa030b8,uVar1);
  }
  return CONCAT71((int7)(uVar6 >> 8),bVar11);
}


