// Function: _ZNK7android8ResTable16resolveReferenceEPNS_9Res_valueElPjS3_PNS_15ResTable_configE
// Address: 00434150
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android8ResTable16resolveReferenceEPNS_9Res_valueElPjS3_PNS_15ResTable_configE
                (long param_1,long param_2,ulong param_3,int *param_4,uint *param_5,
                undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = param_1;
  if ((-1 < (long)param_3) && (*(char *)(param_2 + 3) == '\x01')) {
    uVar4 = 0;
    while( true ) {
      iVar1 = *(int *)(param_2 + 4);
      if ((iVar1 == 0) || (0x13 < uVar4)) goto code_r0x004341fa;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
        iVar1 = *(int *)(param_2 + 4);
      }
      uStack_3c = 0;
      lVar3 = param_1;
      uVar2 = _ZNK7android8ResTable11getResourceEjPNS_9Res_valueEbtPjPNS_15ResTable_configE
                        (param_1,iVar1,param_2,1,0,&uStack_3c,param_6);
      if (uVar2 == 0xffffffffffffffb5) break;
      if (param_5 != (uint *)0x0) {
        *param_5 = *param_5 | uStack_3c;
      }
      if (((long)uVar2 < 0) ||
         (uVar4 = uVar4 + 1, param_3 = uVar2, *(char *)(param_2 + 3) != '\x01'))
      goto code_r0x004341fa;
    }
    param_3 = 0xffffffffffffffb5;
  }
code_r0x004341fa:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    return (ulong)*(uint *)(lVar3 + 0x800);
  }
  return param_3;
}


