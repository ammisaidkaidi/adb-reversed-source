// Function: _ZN4absl12lts_202605265Mutex15try_lock_sharedEv
// Address: 004d0400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex15try_lock_sharedEv(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  undefined8 uVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x1c) == 0) {
    iVar4 = -4;
    uVar2 = uVar1;
    do {
      uVar3 = (uVar2 | 1) + 0x100;
      LOCK();
      uVar1 = *param_1;
      bVar6 = uVar2 == uVar1;
      if (bVar6) {
        *param_1 = uVar3;
        uVar1 = uVar2;
      }
      UNLOCK();
      uVar2 = CONCAT71((int7)(uVar3 >> 8),1);
      if (bVar6) goto code_r0x004d043d;
    } while ((iVar4 != 0) && (iVar4 = iVar4 + 1, uVar2 = uVar1, (uVar1 & 0x1c) == 0));
  }
  if ((uVar1 & 0x10) == 0) {
    uVar2 = 0;
code_r0x004d043d:
    return uVar2 & 0xffffffff;
  }
  iVar4 = -5;
  uVar1 = *param_1;
  do {
    uVar2 = uVar1;
    if ((uVar1 & 0xc) == 0) {
      LOCK();
      uVar2 = *param_1;
      bVar6 = uVar1 == uVar2;
      if (bVar6) {
        *param_1 = (uVar1 | 1) + 0x100;
        uVar2 = uVar1;
      }
      UNLOCK();
      if (bVar6) {
        uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
        uVar5 = 2;
        goto code_r0x004d048d;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = uVar2;
    if (iVar4 == 0) {
      uVar1 = 0;
      uVar5 = 3;
code_r0x004d048d:
      func_0x004d0240(param_1,uVar5);
      return uVar1 & 0xffffffff;
    }
  } while( true );
}


