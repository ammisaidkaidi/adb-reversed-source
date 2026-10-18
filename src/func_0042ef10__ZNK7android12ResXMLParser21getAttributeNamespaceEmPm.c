// Function: _ZNK7android12ResXMLParser21getAttributeNamespaceEmPm
// Address: 0042ef10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser21getAttributeNamespaceEmPm
                (long *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *extraout_RDX;
  undefined8 *unaff_RBX;
  long in_FS_OFFSET;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_1[1] == 0x102) && (lVar1 = param_1[3], param_2 < *(ushort *)(lVar1 + 0xc))) {
    param_2 = param_2 * *(ushort *)(lVar1 + 10);
    lVar1 = (long)*(int *)(param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    if (lVar1 < 0) goto code_r0x0042ef70;
    param_2 = *param_1 + 0x80;
    param_1 = &lStack_38;
    puStack_40 = &UNK_0042ef6a;
    _ZNK7android13ResStringPool8stringAtEm(param_1,param_2,lVar1);
    unaff_RBX = param_3;
    if (iStack_20 != 0) goto code_r0x0042ef70;
    *param_3 = uStack_28;
  }
  else {
code_r0x0042ef70:
    uStack_30 = 0;
    param_3 = unaff_RBX;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uStack_30;
  }
  puStack_40 = &UNK_0042ef9a;
  func_0x0099bd00();
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_48 = param_3;
  puStack_40 = &stack0xfffffffffffffff8;
  if (((int)param_1[1] == 0x102) &&
     (lVar1 = param_1[3], puStack_40 = &stack0xfffffffffffffff8, param_2 < *(ushort *)(lVar1 + 0xc))
     ) {
    param_2 = param_2 * *(ushort *)(lVar1 + 10);
    lVar1 = (long)*(int *)(param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    puStack_40 = &stack0xfffffffffffffff8;
    if (-1 < lVar1) {
      param_2 = *param_1 + 0x80;
      param_1 = &lStack_70;
      puStack_40 = &stack0xfffffffffffffff8;
      _ZNK7android13ResStringPool9string8AtEm(param_1,param_2,lVar1);
      if (iStack_58 == 0) {
        *extraout_RDX = uStack_60;
        goto code_r0x0042f002;
      }
    }
  }
  uStack_68 = 0;
code_r0x0042f002:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_50) {
    func_0x0099bd00();
    uVar2 = 0xffffffff;
    if (((int)param_1[1] == 0x102) && (lVar1 = param_1[3], param_2 < *(ushort *)(lVar1 + 0xc))) {
      uVar2 = (ulong)*(uint *)(param_2 * *(ushort *)(lVar1 + 10) + 4 +
                              (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    }
    return uVar2;
  }
  return uStack_68;
}


