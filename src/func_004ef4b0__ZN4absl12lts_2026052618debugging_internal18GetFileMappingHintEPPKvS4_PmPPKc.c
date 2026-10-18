// Function: _ZN4absl12lts_2026052618debugging_internal18GetFileMappingHintEPPKvS4_PmPPKc
// Address: 004ef4b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004ef531) */

ulong _ZN4absl12lts_2026052618debugging_internal18GetFileMappingHintEPPKvS4_PmPPKc
                (ulong *param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = uRam0000000000a030b8;
  if ((uRam0000000000a030b8 & 1) == 0) {
    if ((uRam0000000000a030b8 & 2) == 0) {
      lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      if (lVar4 == 0) {
        LOCK();
        uVar3 = uVar2 | 1;
        if (uVar2 != uRam0000000000a030b8) {
          uVar2 = uRam0000000000a030b8;
          uVar3 = uRam0000000000a030b8;
        }
        uRam0000000000a030b8 = uVar3;
        UNLOCK();
      }
      else {
        *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
        LOCK();
        bVar7 = uVar2 != uRam0000000000a030b8;
        uVar3 = uVar2;
        uVar6 = uVar2 | 5;
        if (bVar7) {
          uVar3 = uRam0000000000a030b8;
          uVar6 = uRam0000000000a030b8;
        }
        uRam0000000000a030b8 = uVar6;
        UNLOCK();
        if (bVar7) {
          lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
          *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
          uVar2 = uVar3;
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
      lVar4 = 0;
      do {
        if ((*(ulong *)(lVar4 + 0xa02fb0) <= *param_1) &&
           (uVar5 = *(ulong *)(lVar4 + 0xa02fb8), *param_2 <= uVar5)) {
          *param_1 = *(ulong *)(lVar4 + 0xa02fb0);
          *param_2 = uVar5;
          *param_3 = *(undefined8 *)(lVar4 + 0xa02fc0);
          uVar1 = *(undefined8 *)(lVar4 + 0xa02fc8);
          *param_4 = uVar1;
          uVar5 = CONCAT71((int7)((ulong)uVar1 >> 8),1);
          goto code_r0x004ef5a8;
        }
        lVar4 = lVar4 + 0x20;
      } while ((long)iRam0000000000a02fa8 * 0x20 != lVar4);
    }
    uVar5 = 0;
code_r0x004ef5a8:
    uVar3 = uRam0000000000a030b8;
    uVar6 = uRam0000000000a030b8 & 2;
    LOCK();
    UNLOCK();
    uVar2 = uRam0000000000a030b8 & 4;
    uRam0000000000a030b8 = uVar6;
    if (uVar2 != 0) {
      uVar5 = uVar5 & 0xffffffff;
      lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
      *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
    }
    if (7 < uVar3) {
      uVar5 = uVar5 & 0xffffffff;
      _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa030b8,uVar3);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


