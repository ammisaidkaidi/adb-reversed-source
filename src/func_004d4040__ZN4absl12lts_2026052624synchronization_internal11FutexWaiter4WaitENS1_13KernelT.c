// Function: _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter4WaitENS1_13KernelTimeoutE
// Address: 004d4040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter4WaitENS1_13KernelTimeoutE
                (uint *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 in_R9;
  bool bVar9;
  undefined **ppuVar10;
  undefined *puStack_30;
  
  bVar9 = true;
  do {
    uVar5 = (ulong)*param_1;
    while (uVar3 = (uint)uVar5, uVar3 != 0) {
      LOCK();
      uVar1 = *param_1;
      if (uVar3 == uVar1) {
        *param_1 = uVar3 - 1;
      }
      else {
        uVar5 = (ulong)uVar1;
      }
      UNLOCK();
      if (uVar3 == uVar1) {
        return (int *)CONCAT71((int7)(uVar5 >> 8),1);
      }
    }
    if (!bVar9) {
      puStack_30 = &UNK_004d407b;
      _ZN4absl12lts_2026052624synchronization_internal10WaiterBase15MaybeBecomeIdleEv();
    }
    bVar9 = false;
    puStack_30 = &UNK_004d408b;
    iVar4 = _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter9WaitUntilEPNSt3__16atomicIiEEiNS1_13KernelTimeoutE
                      (param_1,0,param_2);
  } while ((iVar4 + 0xbU < 0xc) && ((0x881U >> (iVar4 + 0xbU & 0x1f) & 1) != 0));
  if (iVar4 == -0x6e) {
    return (int *)0x0;
  }
  puVar7 = (uint *)0x3;
  puStack_30 = &UNK_004d40cf;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_001649fd,0x51,&UNK_00181e87,iVar4);
  ppuVar10 = &puStack_30;
  LOCK();
  uVar3 = *puVar7;
  piVar6 = (int *)(ulong)uVar3;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  if ((uVar3 == 0) &&
     (puStack_30 = &stack0xfffffffffffffff8, piVar6 = (int *)func_0x0099c620(0xca,puVar7,0x81,1),
     (long)piVar6 < 0)) {
    piVar6 = (int *)func_0x0099bce0();
    if (0 < *piVar6) {
      uVar8 = 3;
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar6);
      piVar6 = (int *)func_0x0099c620(0xca,uVar8,0x81,1);
      if ((long)piVar6 < 0) {
        piVar6 = (int *)func_0x0099bce0();
        if (0 < *piVar6) {
          _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                    (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar6,in_R9,ppuVar10);
          pcVar2 = (code *)swi(3);
          piVar6 = (int *)(*pcVar2)();
          return piVar6;
        }
      }
      return piVar6;
    }
  }
  return piVar6;
}


