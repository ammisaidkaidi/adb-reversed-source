// Function: _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv
// Address: 004d0ad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004d0ae1: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004d0d61: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004d0ae6) */
/* WARNING: Removing unreachable block (ram,0x004d0af4) */
/* WARNING: Removing unreachable block (ram,0x004d0af8) */
/* WARNING: Removing unreachable block (ram,0x004d0b3e) */
/* WARNING: Removing unreachable block (ram,0x004d0b41) */
/* WARNING: Removing unreachable block (ram,0x004d0b50) */
/* WARNING: Removing unreachable block (ram,0x004d0b5f) */
/* WARNING: Removing unreachable block (ram,0x004d0b89) */
/* WARNING: Removing unreachable block (ram,0x004d0bb7) */
/* WARNING: Removing unreachable block (ram,0x004d0be0) */
/* WARNING: Removing unreachable block (ram,0x004d0c97) */
/* WARNING: Removing unreachable block (ram,0x004d0cc4) */
/* WARNING: Removing unreachable block (ram,0x004d0cf1) */
/* WARNING: Removing unreachable block (ram,0x004d0bf8) */
/* WARNING: Removing unreachable block (ram,0x004d0c0b) */
/* WARNING: Removing unreachable block (ram,0x004d0c16) */
/* WARNING: Removing unreachable block (ram,0x004d0bbd) */
/* WARNING: Removing unreachable block (ram,0x004d0bc3) */
/* WARNING: Removing unreachable block (ram,0x004d0bcd) */
/* WARNING: Removing unreachable block (ram,0x004d0b90) */
/* WARNING: Removing unreachable block (ram,0x004d0c18) */
/* WARNING: Removing unreachable block (ram,0x004d0bd4) */
/* WARNING: Removing unreachable block (ram,0x004d0c4d) */
/* WARNING: Removing unreachable block (ram,0x004d0d1e) */
/* WARNING: Removing unreachable block (ram,0x004d0d58) */
/* WARNING: Removing unreachable block (ram,0x004d0d57) */
/* WARNING: Removing unreachable block (ram,0x004d0c71) */
/* WARNING: Removing unreachable block (ram,0x004d0c80) */
/* WARNING: Removing unreachable block (ram,0x004d0c8e) */
/* WARNING: Removing unreachable block (ram,0x004d0c95) */
/* WARNING: Removing unreachable block (ram,0x004d0c2f) */
/* WARNING: Removing unreachable block (ram,0x004d0c36) */
/* WARNING: Removing unreachable block (ram,0x004d0c3e) */
/* WARNING: Removing unreachable block (ram,0x004d0d66) */
/* WARNING: Removing unreachable block (ram,0x004d0d74) */
/* WARNING: Removing unreachable block (ram,0x004d0d78) */

int * _ZNK4absl12lts_202605265Mutex16AssertReaderHeldEv(ulong *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar4 = uRam0000000000a02b08;
  if ((*param_1 & 9) != 0) {
    return (int *)*param_1;
  }
  if ((uRam0000000000a02b08 & 1) == 0) {
    if (((uRam0000000000a02b08 & 2) == 0) &&
       (lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
       lVar2 != 0)) {
      *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + 1;
      LOCK();
      bVar6 = uVar4 != uRam0000000000a02b08;
      uVar1 = uVar4;
      uVar3 = uVar4 | 5;
      if (bVar6) {
        uVar1 = uRam0000000000a02b08;
        uVar3 = uRam0000000000a02b08;
      }
      uRam0000000000a02b08 = uVar3;
      UNLOCK();
      if (bVar6) {
        lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + -1;
        uVar4 = uVar1;
      }
    }
    else {
      LOCK();
      uVar1 = uVar4 | 1;
      if (uVar4 != uRam0000000000a02b08) {
        uVar4 = uRam0000000000a02b08;
        uVar1 = uRam0000000000a02b08;
      }
      uRam0000000000a02b08 = uVar1;
      UNLOCK();
    }
  }
  if ((uVar4 & 1) != 0) {
    _ZN4absl12lts_2026052613base_internal8SpinLock8SlowLockEv(0xa02b08);
  }
  piVar5 = *(int **)(((ulong)param_1 % 0x407) * 8 + 0xa00ad0);
  do {
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
code_r0x004d0e6d:
      uVar1 = uRam0000000000a02b08;
      uVar3 = uRam0000000000a02b08 & 2;
      LOCK();
      UNLOCK();
      uVar4 = uRam0000000000a02b08 & 4;
      uRam0000000000a02b08 = uVar3;
      if (uVar4 != 0) {
        lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + -1;
      }
      if (7 < uVar1) {
        _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa02b08,uVar1);
      }
      return piVar5;
    }
    if ((*(ulong *)(piVar5 + 4) ^ (ulong)param_1) == 0xf03a5f7bf03a5f7b) {
      *piVar5 = *piVar5 + 1;
      goto code_r0x004d0e6d;
    }
    piVar5 = *(int **)(piVar5 + 2);
  } while( true );
}


