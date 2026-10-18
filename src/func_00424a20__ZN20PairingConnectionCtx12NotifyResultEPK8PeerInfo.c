// Function: _ZN20PairingConnectionCtx12NotifyResultEPK8PeerInfo
// Address: 00424a20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZN20PairingConnectionCtx12NotifyResultEPK8PeerInfo(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(param_1 + 0x4058))
            (param_2,*(undefined4 *)(param_1 + 0x4078),*(undefined8 *)(param_1 + 0x4060));
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 3;
  UNLOCK();
  return uVar1;
}


