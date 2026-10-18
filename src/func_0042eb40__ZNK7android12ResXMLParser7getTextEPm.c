// Function: _ZNK7android12ResXMLParser7getTextEPm
// Address: 0042eb40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZNK7android12ResXMLParser7getTextEPm(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = param_2;
  if (((int)param_1[1] == 0x104) && (-1 < *(int *)param_1[3])) {
    puVar2 = (undefined8 *)(*param_1 + 0x80);
    param_1 = &lStack_38;
    _ZNK7android13ResStringPool8stringAtEm();
    if (iStack_20 == 0) {
      *param_2 = uStack_28;
      goto code_r0x0042eb86;
    }
  }
  uStack_30 = 0;
code_r0x0042eb86:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uStack_30;
  }
  func_0x0099bd00();
  uVar1 = 0xffffffff80000001;
  if ((int)param_1[1] == 0x104) {
    *puVar2 = *(undefined8 *)(param_1[3] + 4);
    uVar1 = 8;
  }
  return uVar1;
}


