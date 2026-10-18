// Function: _ZNK7android12ResXMLParser16getAttributeDataEm
// Address: 0042f330
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser16getAttributeDataEm(long *param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint uStack_14;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if ((int)param_1[1] != 0x102) goto code_r0x0042f3c2;
  lVar2 = param_1[3];
  if ((uint *)(ulong)*(ushort *)(lVar2 + 0xc) <= param_2) goto code_r0x0042f3c2;
  lVar5 = (ulong)*(ushort *)(lVar2 + 8) + lVar2;
  param_2 = (uint *)((long)param_2 * (ulong)*(ushort *)(lVar2 + 10));
  param_1 = *(long **)(*param_1 + 0x28);
  if (param_1 != (long *)0x0) {
    cVar1 = *(char *)(lVar5 + 0xf + (long)param_2);
    if ((byte)(cVar1 - 1U) < 2) {
      if ((*(char *)((long)param_1 + 0x109) != '\0') ||
         (*(uint *)(lVar5 + 0x10 + (long)param_2) < 0x1000000)) {
code_r0x0042f3a6:
        uStack_14 = *(uint *)(lVar5 + 0x10 + (long)param_2);
        param_2 = &uStack_14;
        iVar3 = (**(code **)(*param_1 + 0x10))();
        uVar6 = 0;
        if (iVar3 == 0) {
          uVar6 = (ulong)uStack_14;
        }
        goto code_r0x0042f3c2;
      }
    }
    else if ((byte)(cVar1 - 7U) < 2) goto code_r0x0042f3a6;
  }
  uVar6 = (ulong)*(uint *)(lVar5 + 0x10 + (long)param_2);
code_r0x0042f3c2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar6;
  }
  func_0x0099bd00();
  uVar4 = *(byte *)((long)param_2 + 3) - 1;
  uVar6 = (ulong)uVar4;
  if ((1 < (byte)uVar4) ||
     ((uVar6 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1), *(char *)((long)param_1 + 0x109) == '\0' &&
      (0xffffff < param_2[1])))) {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)(*(byte *)((long)param_2 + 3) - 7) < 2);
  }
  return uVar6;
}


