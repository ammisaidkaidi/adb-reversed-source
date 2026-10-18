// Function: _ZN20PairingConnectionCtx20CreatePairingAuthPtrENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
// Address: 00424520
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN20PairingConnectionCtx20CreatePairingAuthPtrENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
          (undefined8 *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = pairing_auth_client_new(*param_3,param_3[1] - *param_3);
  }
  else {
    uVar1 = pairing_auth_server_new();
  }
  *param_1 = uVar1;
  return param_1;
}


