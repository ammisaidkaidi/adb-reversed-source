// Function: _ZN11incremental17IncrementalServer26SendTreeBlocksForDataBlockEsi
// Address: 003648e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char _ZN11incremental17IncrementalServer26SendTreeBlocksForDataBlockEsi
               (long param_1,int param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  long extraout_RDX;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  cVar2 = '\x01';
  if (-1 < *(int *)(*(long *)(param_1 + 8) + 0x70 + (long)param_2 * 0x80)) {
    lVar6 = *(long *)(param_1 + 8) + (long)param_2 * 0x80;
    iVar5 = (int)(*(long *)(lVar6 + 0x48) + 0xfffU >> 0xc);
    iVar4 = iVar5 + 0x7f;
    iVar5 = iVar5 + 0xfe;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    uVar8 = *(int *)(lVar6 + 0x28) - (iVar5 >> 7);
    iVar5 = param_3 + 0x7f;
    if (-1 < param_3) {
      iVar5 = param_3;
    }
    iVar5 = (iVar5 >> 7) + uVar8;
    uVar7 = (ulong)(long)iVar5 >> 6;
    uVar9 = *(ulong *)(*(long *)(lVar6 + 0x20) + uVar7 * 8);
    if ((uVar9 >> ((long)iVar5 & 0x3fU) & 1) == 0) {
      cVar2 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                        (param_1,(int)(short)param_2,uVar9,iVar5);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        puVar1 = (ulong *)(*(long *)(lVar6 + 0x20) + uVar7 * 8);
        *puVar1 = *puVar1 | 1L << ((byte)iVar5 & 0x3f);
        cVar2 = '\x01';
        if (((uVar8 != 0) && ((**(byte **)(lVar6 + 0x20) & 1) == 0)) && (0 < (int)uVar8)) {
          uVar9 = 0;
          lVar3 = extraout_RDX;
          do {
            cVar2 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                              (param_1,(int)(short)param_2,lVar3,uVar9 & 0xffffffff);
            if (cVar2 == '\0') {
              return '\0';
            }
            lVar3 = *(long *)(lVar6 + 0x20);
            puVar1 = (ulong *)(lVar3 + (uVar9 >> 6) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
        }
      }
    }
  }
  return cVar2;
}


