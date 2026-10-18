// Function: _ZNK3com7android10fastdeploy8APKEntry12ByteSizeLongEv
// Address: 003c9110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK3com7android10fastdeploy8APKEntry12ByteSizeLongEv(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 7) == 0) {
    iVar3 = 0;
    goto code_r0x003c91d6;
  }
  if ((uVar4 & 1) == 0) {
code_r0x003c9144:
    iVar3 = 0;
  }
  else {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar6;
    if ((bVar1 & 1) == 0) {
      uVar7 = (ulong)(bVar1 >> 1);
      if (uVar7 != 0) goto code_r0x003c9175;
      goto code_r0x003c9144;
    }
    uVar7 = *(ulong *)(pbVar6 + 8);
    if (uVar7 == 0) goto code_r0x003c9144;
code_r0x003c9175:
    uVar5 = (uint)uVar7 | 1;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = (uint)uVar7 + (iVar3 * 9 + 0x49U >> 6) + 1;
  }
  if (((uVar4 & 2) != 0) && (*(ulong *)(param_1 + 0x20) != 0)) {
    uVar7 = *(ulong *)(param_1 + 0x20) | 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = iVar3 + ((int)lVar2 * 9 + 0x89U >> 6);
  }
  if (((uVar4 & 4) != 0) && (*(ulong *)(param_1 + 0x28) != 0)) {
    uVar7 = *(ulong *)(param_1 + 0x28) | 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = iVar3 + ((int)lVar2 * 9 + 0x89U >> 6);
  }
code_r0x003c91d6:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar7 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (uint)(bVar1 >> 1);
    }
    else {
      uVar4 = (uint)*(undefined8 *)(uVar7 + 0x10);
    }
    iVar3 = iVar3 + uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar3;
  }
  return;
}


