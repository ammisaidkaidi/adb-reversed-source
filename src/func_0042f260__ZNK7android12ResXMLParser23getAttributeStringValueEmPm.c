// Function: _ZNK7android12ResXMLParser23getAttributeStringValueEmPm
// Address: 0042f260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser23getAttributeStringValueEmPm
                (long *param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long in_FS_OFFSET;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_1[1] == 0x102) && (lVar2 = param_1[3], param_2 < *(ushort *)(lVar2 + 0xc))) {
    param_2 = param_2 * *(ushort *)(lVar2 + 10);
    lVar2 = (long)*(int *)(param_2 + 8 + (ulong)*(ushort *)(lVar2 + 8) + lVar2);
    if (-1 < lVar2) {
      param_2 = *param_1 + 0x80;
      param_1 = &lStack_38;
      _ZNK7android13ResStringPool8stringAtEm(param_1,param_2,lVar2);
      if (iStack_20 == 0) {
        *param_3 = uStack_28;
        goto code_r0x0042f2c3;
      }
    }
  }
  uStack_30 = 0;
code_r0x0042f2c3:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_18) {
    func_0x0099bd00();
    uVar3 = 0;
    if (((int)param_1[1] == 0x102) && (lVar2 = param_1[3], param_2 < *(ushort *)(lVar2 + 0xc))) {
      bVar1 = *(byte *)(param_2 * *(ushort *)(lVar2 + 10) + 0xf +
                       (ulong)*(ushort *)(lVar2 + 8) + lVar2);
      bVar4 = 1;
      if (bVar1 != 7) {
        bVar4 = bVar1;
      }
      uVar3 = (ulong)bVar4;
    }
    return uVar3;
  }
  return uStack_30;
}


