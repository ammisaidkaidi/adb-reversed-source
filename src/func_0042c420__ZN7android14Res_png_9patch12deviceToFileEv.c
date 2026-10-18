// Function: _ZN7android14Res_png_9patch12deviceToFileEv
// Address: 0042c420
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android14Res_png_9patch12deviceToFileEv(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 1) != '\0') {
    lVar3 = (ulong)*(uint *)(param_1 + 4) + param_1;
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + uVar4 * 4);
      *(uint *)(lVar3 + uVar4 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 1));
  }
  if (*(char *)(param_1 + 2) != '\0') {
    lVar3 = (ulong)*(uint *)(param_1 + 8) + param_1;
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + uVar4 * 4);
      *(uint *)(lVar3 + uVar4 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 2));
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_1 + 0x10) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (*(char *)(param_1 + 3) != '\0') {
    lVar3 = (ulong)*(uint *)(param_1 + 0x1c) + param_1;
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + uVar4 * 4);
      *(uint *)(lVar3 + uVar4 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 3));
  }
  return;
}


