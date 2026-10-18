// Function: _ZNK7android12ResXMLParser10getCommentEPm
// Address: 0042ea90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser10getCommentEPm(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[2] != 0) && (-1 < *(int *)(param_1[2] + 0xc))) {
    lVar1 = *param_1;
    param_1 = &lStack_38;
    _ZNK7android13ResStringPool8stringAtEm(param_1,lVar1 + 0x80);
    if (iStack_20 == 0) {
      *param_2 = uStack_28;
      goto code_r0x0042ead3;
    }
  }
  uStack_30 = 0;
code_r0x0042ead3:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uStack_30;
  }
  func_0x0099bd00();
  if (param_1[2] != 0) {
    return (ulong)*(uint *)(param_1[2] + 8);
  }
  return 0xffffffff;
}


