// Function: _ZN25BlockingConnectionAdapter5WriteENSt3__110unique_ptrI7apacketNS0_14default_deleteIS2_EEEE
// Address: 003e4850
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN25BlockingConnectionAdapter5WriteENSt3__110unique_ptrI7apacketNS0_14default_deleteIS2_EEEE
          (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _ZNSt3__15mutex4lockEv(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = 0;
  if (*(long *)(param_1 + 0x40) != lVar2) {
    uVar4 = (*(long *)(param_1 + 0x40) - lVar2) * 0x40 - 1;
  }
  uVar3 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
  if (uVar4 == uVar3) {
    func_0x003f1340(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x38);
    uVar3 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58);
  }
  lVar2 = *(long *)(lVar2 + (uVar3 >> 9) * 8);
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar2 + (ulong)((uint)uVar3 & 0x1ff) * 8) = uVar1;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x60);
  _ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x88);
  return 1;
}


