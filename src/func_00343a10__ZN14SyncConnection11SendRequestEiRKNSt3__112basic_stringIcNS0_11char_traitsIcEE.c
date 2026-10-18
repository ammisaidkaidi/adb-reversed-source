// Function: _ZN14SyncConnection11SendRequestEiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00343a10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
_ZN14SyncConnection11SendRequestEiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  bVar2 = *param_3;
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  if (uVar5 < 0x401) {
    lVar1 = uVar5 + 8;
    puVar4 = (undefined4 *)_Znwm(lVar1);
    func_0x0099bdb0(puVar4,0,lVar1);
    *puVar4 = param_2;
    puVar4[1] = (int)uVar5;
    if ((bVar2 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    func_0x0099bda0(puVar4 + 2,param_3,uVar5);
    uVar3 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(*param_1,puVar4,lVar1);
    _ZdaPvSt11align_val_t(puVar4,lVar1);
  }
  else {
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00172144,uVar5);
    puVar4 = (undefined4 *)func_0x0099bce0();
    *puVar4 = 0x24;
    uVar3 = 0;
  }
  return uVar3;
}


