// Function: _Z10mdns_checkv
// Address: 0040f3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _Z10mdns_checkv(undefined4 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = _ZN4mdns10is_enabledEv();
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)_Znwm(0x20);
    *puVar2 = 0x6d203a524f525245;
    puVar2[1] = 0x6373696420736e64;
    *(undefined8 *)((long)puVar2 + 0xe) = 0x20797265766f6373;
    *(undefined8 *)((long)puVar2 + 0x16) = 0x64656c6261736964;
    *(undefined1 *)((long)puVar2 + 0x1e) = 0;
    uVar3 = 0x21;
    uVar4 = 0x1e;
  }
  else {
    puVar2 = (undefined8 *)_Znwm(0x30);
    *puVar2 = 0x65616420736e646d;
    puVar2[1] = 0x73726576206e6f6d;
    puVar2[2] = 0x6264615b206e6f69;
    puVar2[3] = 0x65766f6373696420;
    *(undefined8 *)((long)puVar2 + 0x19) = 0x7265766f63736964;
    *(undefined8 *)((long)puVar2 + 0x21) = 0x5d302e302e302079;
    *(undefined1 *)((long)puVar2 + 0x29) = 0;
    uVar3 = 0x31;
    uVar4 = 0x29;
  }
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = uVar4;
  param_1[3] = 0;
  *(undefined8 **)(param_1 + 4) = puVar2;
  return param_1;
}


