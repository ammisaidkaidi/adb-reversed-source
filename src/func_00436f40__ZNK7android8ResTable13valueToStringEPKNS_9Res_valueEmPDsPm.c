// Function: _ZNK7android8ResTable13valueToStringEPKNS_9Res_valueEmPDsPm
// Address: 00436f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android8ResTable13valueToStringEPKNS_9Res_valueEmPDsPm
               (undefined1 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5
               )

{
  undefined4 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (*(char *)(param_2 + 3) == '\x03')) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + param_3 * 8);
    puVar1 = (undefined4 *)(param_2 + 4);
    param_2 = lVar2 + 0x38;
    param_1 = auStack_38;
    (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))(param_1,param_2,*puVar1);
    if (iStack_20 == 0) {
      *param_5 = uStack_28;
      goto code_r0x00436f8c;
    }
  }
  lStack_30 = 0;
code_r0x00436f8c:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return lStack_30;
  }
  func_0x0099bd00();
  return *(long *)(*(long *)(param_1 + 0xa0) + param_2 * 8) + 0x38;
}


