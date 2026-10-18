// Function: _ZNK3com7android10fastdeploy7APKDump12ByteSizeLongEv
// Address: 003c8b20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK3com7android10fastdeploy7APKDump12ByteSizeLongEv(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xf) == 0) {
    iVar3 = 0;
    goto code_r0x003c8c63;
  }
  if ((uVar4 & 1) == 0) {
code_r0x003c8b54:
    iVar3 = 0;
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
      if (uVar5 != 0) goto code_r0x003c8b89;
      goto code_r0x003c8b54;
    }
    uVar5 = *(ulong *)(pbVar7 + 8);
    if (uVar5 == 0) goto code_r0x003c8b54;
code_r0x003c8b89:
    uVar6 = (uint)uVar5 | 1;
    iVar3 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = (uint)uVar5 + (iVar3 * 9 + 0x49U >> 6) + 1;
  }
  if ((uVar4 & 2) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar5 != 0) {
      uVar6 = (uint)uVar5 | 1;
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar3 = iVar3 + (uint)uVar5 + (iVar2 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar4 & 4) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar5 != 0) {
      uVar6 = (uint)uVar5 | 1;
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar3 = iVar3 + (uint)uVar5 + (iVar2 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar4 & 8) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar5 != 0) {
      uVar4 = (uint)uVar5 | 1;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar3 = iVar3 + (uint)uVar5 + (iVar2 * 9 + 0x49U >> 6) + 1;
    }
  }
code_r0x003c8c63:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar5 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (uint)(bVar1 >> 1);
    }
    else {
      uVar4 = (uint)*(undefined8 *)(uVar5 + 0x10);
    }
    iVar3 = iVar3 + uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar3;
  }
  return;
}


