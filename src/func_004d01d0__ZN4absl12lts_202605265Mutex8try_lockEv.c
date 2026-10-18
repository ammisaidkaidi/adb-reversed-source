// Function: _ZN4absl12lts_202605265Mutex8try_lockEv
// Address: 004d01d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex8try_lockEv(ulong *param_1)

{
  ulong uVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x19) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar4 = uVar2 == uVar1;
    if (bVar4) {
      *param_1 = uVar2 | 8;
      uVar1 = uVar2;
    }
    UNLOCK();
    return CONCAT71((int7)(uVar1 >> 8),bVar4);
  }
  if ((uVar2 & 0x10) == 0) {
    return 0;
  }
  uVar2 = *param_1;
  if ((uVar2 & 9) == 0) {
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar2 | 8;
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      uVar3 = 0;
      uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      goto code_r0x004d0228;
    }
  }
  uVar3 = 1;
  uVar2 = 0;
code_r0x004d0228:
  func_0x004d0240(param_1,uVar3);
  return uVar2 & 0xffffffff;
}


