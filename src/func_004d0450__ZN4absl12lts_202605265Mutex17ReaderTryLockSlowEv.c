// Function: _ZN4absl12lts_202605265Mutex17ReaderTryLockSlowEv
// Address: 004d0450
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex17ReaderTryLockSlowEv(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 uVar4;
  bool bVar5;
  
  iVar3 = -5;
  uVar1 = *param_1;
  do {
    uVar2 = uVar1;
    if ((uVar1 & 0xc) == 0) {
      LOCK();
      uVar2 = *param_1;
      bVar5 = uVar1 == uVar2;
      if (bVar5) {
        *param_1 = (uVar1 | 1) + 0x100;
        uVar2 = uVar1;
      }
      UNLOCK();
      if (bVar5) {
        uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
        uVar4 = 2;
        goto code_r0x004d048d;
      }
    }
    iVar3 = iVar3 + 1;
    uVar1 = uVar2;
    if (iVar3 == 0) {
      uVar1 = 0;
      uVar4 = 3;
code_r0x004d048d:
      func_0x004d0240(param_1,uVar4);
      return uVar1 & 0xffffffff;
    }
  } while( true );
}


