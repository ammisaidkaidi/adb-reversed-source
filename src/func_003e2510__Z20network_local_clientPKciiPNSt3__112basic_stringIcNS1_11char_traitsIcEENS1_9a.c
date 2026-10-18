// Function: _Z20network_local_clientPKciiPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// Address: 003e2510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_Z20network_local_clientPKciiPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_40 = (undefined8 *)_Znwm(0x28);
  uStack_50 = 0x29;
  uStack_48 = 0x24;
  *puStack_40 = 0x2e74736973726570;
  puStack_40[1] = 0x61636f6c2e626461;
  *(undefined4 *)(puStack_40 + 2) = 0x6f635f6c;
  *(undefined4 *)((long)puStack_40 + 0x14) = 0x63656e6e;
  *(undefined4 *)(puStack_40 + 3) = 0x69745f74;
  *(undefined4 *)((long)puStack_40 + 0x1c) = 0x756f656d;
  *(undefined4 *)(puStack_40 + 4) = 0x736d5f74;
  *(undefined1 *)((long)puStack_40 + 0x24) = 0;
  iVar2 = _ZN7android4base14GetIntPropertyIiEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_
                    (&uStack_50,500,0x80000000,0x7fffffff);
  if ((uStack_50 & 1) != 0) {
    _ZdaPvSt11align_val_t(puStack_40,uStack_50 & 0xfffffffffffffffe);
  }
  if (iVar2 == -1) {
    uVar3 = socket_local_client(param_1,param_2,param_3);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = socket_local_client_timeout();
    iVar2 = (int)uVar3;
  }
  if (iVar2 == -1) {
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar3 = func_0x0099bd20(*puVar4);
    func_0x0032ea60(param_4,uVar3);
    uVar3 = 0xffffffff;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar3;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


