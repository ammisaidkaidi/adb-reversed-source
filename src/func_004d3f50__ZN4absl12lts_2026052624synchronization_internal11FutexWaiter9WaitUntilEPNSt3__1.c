// Function: _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter9WaitUntilEPNSt3__16atomicIiEEiNS1_13KernelTimeoutE
// Address: 004d3f50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter9WaitUntilEPNSt3__16atomicIiEEiNS1_13KernelTimeoutE
                (undefined8 param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  bool bVar11;
  long in_FS_OFFSET;
  ulong uStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    if ((param_3 & 1) != 0) {
      auStack_38 = _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout20MakeRelativeTimespecEv
                             (&uStack_40);
      puVar8 = (uint *)0xca;
      lVar5 = func_0x0099c620(0xca,param_1,0x80,param_2,auStack_38);
      goto joined_r0x004d3fd8;
    }
    auStack_38 = _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout15MakeAbsTimespecEv
                           ();
    puVar10 = auStack_38;
  }
  puVar8 = (uint *)0xca;
  lVar5 = func_0x0099c620(0xca,param_1,0x189,param_2,puVar10,0);
joined_r0x004d3fd8:
  piVar6 = (int *)0x0;
  if (lVar5 != 0) {
    piVar6 = (int *)func_0x0099bce0();
    piVar6 = (int *)(ulong)(uint)-*piVar6;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return piVar6;
  }
  func_0x0099bd00();
  bVar11 = true;
  do {
    uVar7 = (ulong)*puVar8;
    while (uVar3 = (uint)uVar7, uVar3 != 0) {
      LOCK();
      uVar1 = *puVar8;
      if (uVar3 == uVar1) {
        *puVar8 = uVar3 - 1;
      }
      else {
        uVar7 = (ulong)uVar1;
      }
      UNLOCK();
      if (uVar3 == uVar1) {
        return (int *)CONCAT71((int7)(uVar7 >> 8),1);
      }
    }
    if (!bVar11) {
      _ZN4absl12lts_2026052624synchronization_internal10WaiterBase15MaybeBecomeIdleEv();
    }
    bVar11 = false;
    iVar4 = _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter9WaitUntilEPNSt3__16atomicIiEEiNS1_13KernelTimeoutE
                      (puVar8,0,param_1);
  } while ((iVar4 + 0xbU < 0xc) && ((0x881U >> (iVar4 + 0xbU & 0x1f) & 1) != 0));
  if (iVar4 == -0x6e) {
    return (int *)0x0;
  }
  puVar8 = (uint *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_001649fd,0x51,&UNK_00181e87,iVar4);
  LOCK();
  uVar3 = *puVar8;
  piVar6 = (int *)(ulong)uVar3;
  *puVar8 = *puVar8 + 1;
  UNLOCK();
  if (uVar3 == 0) {
    piVar6 = (int *)func_0x0099c620(0xca,puVar8,0x81,1);
    if ((long)piVar6 < 0) {
      piVar6 = (int *)func_0x0099bce0();
      if (0 < *piVar6) {
        uVar9 = 3;
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar6);
        piVar6 = (int *)func_0x0099c620(0xca,uVar9,0x81,1);
        if ((long)piVar6 < 0) {
          piVar6 = (int *)func_0x0099bce0();
          if (0 < *piVar6) {
            _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                      (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar6);
            pcVar2 = (code *)swi(3);
            piVar6 = (int *)(*pcVar2)();
            return piVar6;
          }
        }
        return piVar6;
      }
    }
  }
  return piVar6;
}


