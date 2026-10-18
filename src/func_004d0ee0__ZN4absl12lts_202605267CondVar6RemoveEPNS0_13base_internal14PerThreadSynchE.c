// Function: _ZN4absl12lts_202605267CondVar6RemoveEPNS0_13base_internal14PerThreadSynchE
// Address: 004d0ee0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605267CondVar6RemoveEPNS0_13base_internal14PerThreadSynchE
               (ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
  }
  uVar3 = 0;
  do {
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) {
      LOCK();
      uVar1 = *param_1;
      if (uVar2 == uVar1) {
        *param_1 = uVar2 | 1;
      }
      UNLOCK();
      if (uVar2 == uVar1) break;
    }
    uVar3 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar3,1);
  } while( true );
  puVar5 = (undefined8 *)(uVar2 & 0xfffffffffffffffc);
  puVar7 = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar6 = puVar7;
      puVar7 = (undefined8 *)*puVar6;
      if (puVar7 == param_2) break;
    } while (puVar7 != puVar5);
    if (puVar7 == param_2) {
      *puVar6 = *param_2;
      puVar7 = (undefined8 *)0x0;
      if (puVar6 != param_2) {
        puVar7 = puVar6;
      }
      if (param_2 == puVar5) {
        puVar5 = puVar7;
      }
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 0x1c) = 0;
    }
  }
  *param_1 = (ulong)((uint)uVar2 & 2) | (ulong)puVar5;
  if (lVar4 != 0) {
    lVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + -1;
  }
  return;
}


