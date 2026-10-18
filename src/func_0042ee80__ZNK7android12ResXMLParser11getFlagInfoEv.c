// Function: _ZNK7android12ResXMLParser11getFlagInfoEv
// Address: 0042ee80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZNK7android12ResXMLParser11getFlagInfoEv(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 8) == 0x102) {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(short *)(lVar1 + 8) == 0x1c) && (*(char *)(lVar1 + 0x14) == '\x01')) {
      uVar2 = (ulong)(*(uint *)(lVar1 + 0x18) & 0xff);
      uVar3 = (ulong)(CONCAT14(*(byte *)(lVar1 + 0x15),*(uint *)(lVar1 + 0x18)) & 0xffffffff00);
      uVar4 = CONCAT71((int7)(((ulong)*(byte *)(lVar1 + 0x15) << 0x20) >> 8),1);
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
    }
    auVar5._0_8_ = uVar2 | uVar3;
    auVar5._8_8_ = uVar4;
    return auVar5;
  }
  return ZEXT816(0);
}


