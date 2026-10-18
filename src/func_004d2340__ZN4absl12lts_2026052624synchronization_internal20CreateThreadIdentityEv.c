// Function: _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv
// Address: 004d2340
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar3 = uRam0000000000a02b88;
  if ((uRam0000000000a02b88 & 1) == 0) {
    if (((uRam0000000000a02b88 & 2) == 0) &&
       (lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
       lVar2 != 0)) {
      *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + 1;
      LOCK();
      bVar6 = uVar3 != uRam0000000000a02b88;
      uVar1 = uVar3;
      uVar5 = uVar3 | 5;
      if (bVar6) {
        uVar1 = uRam0000000000a02b88;
        uVar5 = uRam0000000000a02b88;
      }
      uRam0000000000a02b88 = uVar5;
      UNLOCK();
      if (bVar6) {
        lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + -1;
        uVar3 = uVar1;
      }
    }
    else {
      LOCK();
      uVar1 = uVar3 | 1;
      if (uVar3 != uRam0000000000a02b88) {
        uVar3 = uRam0000000000a02b88;
        uVar1 = uRam0000000000a02b88;
      }
      uRam0000000000a02b88 = uVar1;
      UNLOCK();
    }
  }
  if ((uVar3 & 1) != 0) {
    _ZN4absl12lts_2026052613base_internal8SpinLock8SlowLockEv(0xa02b88);
  }
  uVar3 = uRam0000000000a02b88;
  puVar4 = puRam0000000000a02b80;
  if (puRam0000000000a02b80 != (undefined8 *)0x0) {
    puRam0000000000a02b80 = (undefined8 *)puRam0000000000a02b80[0x33];
  }
  uVar5 = uRam0000000000a02b88 & 2;
  LOCK();
  UNLOCK();
  uVar1 = uRam0000000000a02b88 & 4;
  uRam0000000000a02b88 = uVar5;
  if (uVar1 != 0) {
    lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + -1;
  }
  if (7 < uVar3) {
    _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(0xa02b88,uVar3);
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar2 = _ZN4absl12lts_2026052613base_internal13LowLevelAlloc5AllocEm(0x29f);
    puVar4 = (undefined8 *)(lVar2 + 0xffU & 0xffffffffffffff00);
    AbslInternalPerThreadSemInit_lts_20260526(puVar4);
    *(undefined4 *)(puVar4 + 0x31) = 0;
    *(undefined4 *)((long)puVar4 + 0x18c) = 0;
    *(undefined1 *)(puVar4 + 0x32) = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined1 *)((long)puVar4 + 0x13) = 0;
  *(undefined2 *)((long)puVar4 + 0x11) = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  *(undefined4 *)((long)puVar4 + 0x4c) = 0;
  *(undefined4 *)((long)puVar4 + 0x194) = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined1 *)(puVar4 + 0xc) = 0;
  puVar4[0x30] = 0;
  *(undefined4 *)(puVar4 + 0x31) = 0;
  *(undefined4 *)((long)puVar4 + 0x18c) = 0;
  *(undefined1 *)(puVar4 + 0x32) = 0;
  puVar4[0x33] = 0;
  _ZN4absl12lts_2026052613base_internal24SetCurrentThreadIdentityEPNS1_14ThreadIdentityEPFvPvE
            (puVar4,&UNK_004d2520);
  return puVar4;
}


