// Function: _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl24ClearTimeZoneMapTestOnlyEv
// Address: 004c3be0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl24ClearTimeZoneMapTestOnlyEv(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((cRam0000000000a00a08 == '\0') && (iVar4 = __cxa_guard_acquire(0xa00a08), iVar4 != 0)) {
    puRam0000000000a00a00 = (undefined8 *)_Znwm(0x28);
    *puRam0000000000a00a00 = 0;
    puRam0000000000a00a00[1] = 0;
    puRam0000000000a00a00[2] = 0;
    puRam0000000000a00a00[3] = 0;
    puRam0000000000a00a00[4] = 0;
    __cxa_guard_release(0xa00a08);
  }
  puVar3 = puRam0000000000a00a00;
  _ZNSt3__15mutex4lockEv(puRam0000000000a00a00);
  if (plRam0000000000a009d8 == (long *)0x0) goto code_r0x004c3d8b;
  if ((cRam0000000000a009e8 == '\0') && (iVar4 = __cxa_guard_acquire(0xa009e8), iVar4 != 0)) {
    puRam0000000000a009e0 = (undefined8 *)_Znwm(0x30);
    *puRam0000000000a009e0 = 0;
    puRam0000000000a009e0[1] = 0;
    puRam0000000000a009e0[2] = 0;
    puRam0000000000a009e0[3] = 0;
    puRam0000000000a009e0[4] = 0;
    puRam0000000000a009e0[5] = 0;
    __cxa_guard_release(0xa009e8);
  }
  plVar9 = (long *)plRam0000000000a009d8[2];
  if (plVar9 != (long *)0x0) {
    do {
      puVar2 = puRam0000000000a009e0;
      lVar5 = puRam0000000000a009e0[1];
      uVar8 = (puRam0000000000a009e0[2] - lVar5) * 0x40 - 1;
      if (puRam0000000000a009e0[2] == lVar5) {
        uVar8 = 0;
      }
      uVar6 = puRam0000000000a009e0[5] + puRam0000000000a009e0[4];
      if (uVar8 == uVar6) {
        func_0x003f1340(puRam0000000000a009e0);
        lVar5 = puVar2[1];
        uVar6 = puVar2[4] + puVar2[5];
      }
      *(long *)(*(long *)(lVar5 + (uVar6 >> 9) * 8) + (ulong)((uint)uVar6 & 0x1ff) * 8) = plVar9[5];
      puVar2[5] = puVar2[5] + 1;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  plVar9 = plRam0000000000a009d8;
  if (plRam0000000000a009d8[3] == 0) goto code_r0x004c3d8b;
  puVar2 = (undefined8 *)plRam0000000000a009d8[2];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar2[4],puVar2[2] & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar2,0x30);
    puVar2 = puVar1;
  }
  plVar9[2] = 0;
  uVar8 = plVar9[1];
  if (uVar8 != 0) {
    uVar6 = (ulong)((uint)uVar8 & 3);
    if (uVar8 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        *(undefined8 *)(*plVar9 + uVar7 * 8) = 0;
        *(undefined8 *)(*plVar9 + 8 + uVar7 * 8) = 0;
        *(undefined8 *)(*plVar9 + 0x10 + uVar7 * 8) = 0;
        *(undefined8 *)(*plVar9 + 0x18 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 4;
      } while ((uVar8 & 0xfffffffffffffffc) != uVar7);
      if (uVar6 == 0) goto code_r0x004c3d83;
    }
    do {
      *(undefined8 *)(*plVar9 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
code_r0x004c3d83:
  plVar9[3] = 0;
code_r0x004c3d8b:
  pthread_mutex_unlock(puVar3);
  return;
}


