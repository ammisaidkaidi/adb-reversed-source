// Function: _ZNK7android12ResXMLParser22getAttributeNamespace8EmPm
// Address: 0042efa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser22getAttributeNamespace8EmPm
                (long *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_1[1] == 0x102) && (lVar1 = param_1[3], param_2 < *(ushort *)(lVar1 + 0xc))) {
    param_2 = param_2 * *(ushort *)(lVar1 + 10);
    lVar1 = (long)*(int *)(param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    if (-1 < lVar1) {
      param_2 = *param_1 + 0x80;
      param_1 = &lStack_38;
      _ZNK7android13ResStringPool9string8AtEm(param_1,param_2,lVar1);
      if (iStack_20 == 0) {
        *param_3 = uStack_28;
        goto code_r0x0042f002;
      }
    }
  }
  uStack_30 = 0;
code_r0x0042f002:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_18) {
    func_0x0099bd00();
    uVar2 = 0xffffffff;
    if (((int)param_1[1] == 0x102) && (lVar1 = param_1[3], param_2 < *(ushort *)(lVar1 + 0xc))) {
      uVar2 = (ulong)*(uint *)(param_2 * *(ushort *)(lVar1 + 10) + 4 +
                              (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    }
    return uVar2;
  }
  return uStack_30;
}


