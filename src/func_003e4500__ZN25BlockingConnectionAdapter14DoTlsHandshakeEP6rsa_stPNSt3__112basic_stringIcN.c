// Function: _ZN25BlockingConnectionAdapter14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 003e4500
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
_ZN25BlockingConnectionAdapter14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  _ZNSt3__15mutex4lockEv(param_1 + 0x60);
  if (*(long *)(param_1 + 0x20) != 0) {
    _ZNSt3__16thread4joinEv(param_1 + 0x20);
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
                    (*(long **)(param_1 + 0x18),param_2,param_3);
  _ZN25BlockingConnectionAdapter15StartReadThreadEv(param_1);
  _ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x60);
  return uVar1;
}


