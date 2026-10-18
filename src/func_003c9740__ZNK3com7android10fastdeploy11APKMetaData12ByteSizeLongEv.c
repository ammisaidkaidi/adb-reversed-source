// Function: _ZNK3com7android10fastdeploy11APKMetaData12ByteSizeLongEv
// Address: 003c9740
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3com7android10fastdeploy11APKMetaData12ByteSizeLongEv(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 3) == 0) {
    lVar10 = 0;
    goto code_r0x003c9828;
  }
  if ((uVar5 & 1) == 0) {
code_r0x003c97df:
    lVar10 = 0;
  }
  else {
    lVar10 = (long)*(int *)(param_1 + 0x20);
    lVar8 = *(ulong *)(param_1 + 0x18) + 7;
    if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
      lVar8 = param_1 + 0x18;
    }
    if (lVar10 == 0) goto code_r0x003c97df;
    lVar1 = lVar10 * 8;
    lVar11 = 0;
    do {
      lVar4 = _ZNK3com7android10fastdeploy8APKEntry12ByteSizeLongEv(*(undefined8 *)(lVar8 + lVar11))
      ;
      uVar3 = (uint)lVar4 | 1;
      iVar9 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      lVar10 = lVar10 + lVar4 + (ulong)(iVar9 * 9 + 0x49U >> 6);
      lVar11 = lVar11 + 8;
    } while (lVar1 - lVar11 != 0);
  }
  if ((uVar5 & 2) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) == 0) {
      uVar7 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar6 + 8);
    }
    if (uVar7 != 0) {
      uVar5 = (uint)uVar7 | 1;
      iVar9 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      lVar10 = lVar10 + uVar7 + (ulong)(iVar9 * 9 + 0x49U >> 6) + 1;
    }
  }
code_r0x003c9828:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar9 = (int)lVar10;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar7 + 8);
    if ((bVar2 & 1) == 0) {
      uVar7 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar7 + 0x10);
    }
    lVar10 = lVar10 + uVar7;
    iVar9 = (int)lVar10;
  }
  if ((iVar9 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar10;
  }
  return lVar10;
}


