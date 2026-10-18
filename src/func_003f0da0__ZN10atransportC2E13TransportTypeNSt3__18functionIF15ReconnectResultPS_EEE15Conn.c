// Function: _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
// Address: 003f0da0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
               (undefined8 *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  LOCK();
  UNLOCK();
  lVar2 = lRam00000000009fa518 + 1;
  param_1[3] = lRam00000000009fa518;
  lRam00000000009fa518 = lVar2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x99) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x1000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = param_1 + 0x1f;
  param_1[0x20] = param_1 + 0x1f;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = param_4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2d] = 0;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == 0) {
    param_1[0x32] = 0;
  }
  else if (lVar2 == param_3) {
    param_1[0x32] = param_1 + 0x2e;
    (**(code **)(**(long **)(param_3 + 0x20) + 0x18))();
  }
  else {
    param_1[0x32] = lVar2;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((long)param_1 + 0x1b9) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  puVar4 = (undefined8 *)_Znwm(0x78);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0x99ef58;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  param_1[0x29] = puVar4 + 3;
  plVar3 = (long *)param_1[0x2a];
  param_1[0x2a] = puVar4;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x1d) = 0x1000000;
  param_1[0x1e] = 0x100000;
  return;
}


