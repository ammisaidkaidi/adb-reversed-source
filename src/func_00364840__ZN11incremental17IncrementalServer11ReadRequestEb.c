// Function: _ZN11incremental17IncrementalServer11ReadRequestEb
// Address: 00364840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN11incremental17IncrementalServer11ReadRequestEb(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long extraout_RDX;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [12];
  ulong uStack_20;
  ulong uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_18 = 0;
  uStack_20 = 8;
  cVar2 = _ZN11incremental17IncrementalServer13SkipToRequestEPvPmb
                    (param_1,&uStack_18,&uStack_20,param_2);
  if (cVar2 == '\0') {
    uVar3 = 3;
  }
  else if (uStack_20 < 8) {
    uVar3 = 0;
  }
  else {
    uVar3 = uStack_18 >> 8 & 0xff;
  }
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 != lStack_10) {
    auVar13 = func_0x0099bd00();
    iVar9 = auVar13._8_4_;
    lVar4 = (long)(int)lVar6 * 0x80;
    uVar3 = 1;
    if (-1 < *(int *)(*(long *)(param_1 + 8) + 0x70 + lVar4)) {
      lVar4 = *(long *)(param_1 + 8) + lVar4;
      iVar8 = (int)(*(long *)(lVar4 + 0x48) + 0xfffU >> 0xc);
      iVar7 = iVar8 + 0x7f;
      iVar8 = iVar8 + 0xfe;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      uVar11 = *(int *)(lVar4 + 0x28) - (iVar8 >> 7);
      iVar8 = iVar9 + 0x7f;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      iVar9 = (iVar8 >> 7) + uVar11;
      uVar10 = (ulong)(long)iVar9 >> 6;
      uVar12 = *(ulong *)(*(long *)(lVar4 + 0x20) + uVar10 * 8);
      if ((uVar12 >> ((long)iVar9 & 0x3fU) & 1) == 0) {
        cVar2 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                          (param_1,(int)(short)lVar6,uVar12,iVar9);
        if (cVar2 == '\0') {
          uVar3 = 0;
        }
        else {
          puVar1 = (ulong *)(*(long *)(lVar4 + 0x20) + uVar10 * 8);
          *puVar1 = *puVar1 | 1L << ((byte)iVar9 & 0x3f);
          uVar3 = 1;
          if (((uVar11 != 0) && ((**(byte **)(lVar4 + 0x20) & 1) == 0)) && (0 < (int)uVar11)) {
            uVar12 = 0;
            lVar5 = extraout_RDX;
            do {
              uVar3 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                                (param_1,(int)(short)lVar6,lVar5,uVar12 & 0xffffffff);
              if ((char)uVar3 == '\0') {
                return uVar3;
              }
              lVar5 = *(long *)(lVar4 + 0x20);
              puVar1 = (ulong *)(lVar5 + (uVar12 >> 6) * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar12 & 0x3f);
              uVar12 = uVar12 + 1;
            } while (uVar11 != uVar12);
          }
        }
      }
    }
    return uVar3;
  }
  return uVar3;
}


