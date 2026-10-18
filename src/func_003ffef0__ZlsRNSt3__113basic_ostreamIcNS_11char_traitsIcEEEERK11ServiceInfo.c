// Function: _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo
// Address: 003ffef0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  bool bVar4;
  
  bVar4 = (*param_2 & 1) != 0;
  pbVar3 = param_2 + 1;
  if (bVar4) {
    pbVar3 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = (ulong)(*param_2 >> 1);
  if (bVar4) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  uVar1 = func_0x0032eb30(param_1,pbVar3,uVar2);
  uVar1 = func_0x0032eb30(uVar1,&UNK_00162aea,1);
  bVar4 = (param_2[0x18] & 1) != 0;
  pbVar3 = param_2 + 0x19;
  if (bVar4) {
    pbVar3 = *(byte **)(param_2 + 0x28);
  }
  uVar2 = (ulong)(param_2[0x18] >> 1);
  if (bVar4) {
    uVar2 = *(ulong *)(param_2 + 0x20);
  }
  uVar1 = func_0x0032eb30(uVar1,pbVar3,uVar2);
  uVar1 = func_0x0032eb30(uVar1,&UNK_00173d53,1);
  uVar1 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt(uVar1,*(undefined2 *)(param_2 + 0x78))
  ;
  func_0x0032eb30(uVar1,&UNK_00162ac9,0);
  return param_1;
}


