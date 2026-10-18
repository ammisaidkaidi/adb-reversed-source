// Function: LZ4_slideInputBufferHC
// Address: 004ae480
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long LZ4_slideInputBufferHC(ulong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  
  lVar4 = *(long *)(param_1 + 0x40008);
  uVar2 = *(uint *)(param_1 + 0x40018);
  uVar3 = *(uint *)(param_1 + 0x4001c);
  uVar1 = *(ushort *)(param_1 + 0x40024);
  if (*(char *)(param_1 + 0x40027) == '\0') {
    *(uint *)(param_1 + 0x40018) = (*(int *)(param_1 + 0x40000) - (int)lVar4) + uVar2;
    *(undefined8 *)(param_1 + 0x40028) = 0;
    *(undefined8 *)(param_1 + 0x40000) = 0;
    *(undefined8 *)(param_1 + 0x40008) = 0;
  }
  else if ((param_1 & 7) == 0) {
    func_0x0099bdb0(param_1,0,0x40030);
  }
  if ((short)uVar1 < 1) {
    uVar5 = 9;
  }
  else {
    uVar5 = 0xc;
    if (uVar1 < 0xc) {
      uVar5 = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x40024) = uVar5;
  return (lVar4 - (ulong)uVar2) + (ulong)uVar3;
}


