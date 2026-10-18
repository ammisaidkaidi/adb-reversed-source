// Function: _ZN7android11TypeVariantC2EPKNS_13ResTable_typeE
// Address: 00491160
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android11TypeVariantC2EPKNS_13ResTable_typeE(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xc);
  bVar1 = *(byte *)(param_2 + 9) & 1;
  *(byte *)((long)param_1 + 0xc) = bVar1;
  if (bVar1 != 0) {
    lVar2 = (ulong)*(ushort *)(param_2 + 2) + param_2;
    if ((ulong)*(uint *)(param_2 + 4) + param_2 < lVar2 + (ulong)*(uint *)(param_2 + 0xc) * 4) {
      iVar3 = 0;
      __android_log_print(6,0,&UNK_0016efd0);
    }
    else {
      iVar3 = *(ushort *)(lVar2 + (ulong)(*(uint *)(param_2 + 0xc) - 1) * 4) + 1;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  return;
}


