// Function: _ZN7android10ResXMLTree9fromAssetEONSt3__110unique_ptrINS_5AssetENS1_14default_deleteIS3_EEEENS2_IS0_NS4_IS0_EEEE
// Address: 00430500
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android10ResXMLTree9fromAssetEONSt3__110unique_ptrINS_5AssetENS1_14default_deleteIS3_EEEENS2_IS0_NS4_IS0_EEEE
                 (long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte ***pppbVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  char *extraout_RDX;
  char cVar8;
  byte ****ppppbVar9;
  long in_FS_OFFSET;
  byte ***pppbStack_68;
  undefined1 uStack_59;
  byte ***pppbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  pppbStack_58 = (byte ***)0x0;
  uStack_50 = 0;
  lVar7 = *param_2;
  ppppbVar9 = &pppbStack_58;
  (**(code **)(lVar7 + 8))();
  pppbVar3 = pppbStack_58;
  cVar8 = (char)lVar7;
  if ((uint)uStack_40 == 0) {
    ppppbVar9 = (byte ****)*param_3;
    cVar8 = (char)&pppbStack_58;
    iVar4 = _ZN7android10ResXMLTree5setToEONS_4base10MappedFileE();
    if (iVar4 != 0) goto code_r0x0043059e;
code_r0x004305b2:
    lVar7 = *param_3;
    *param_3 = 0;
code_r0x004305bc:
    *param_1 = lVar7;
    uVar5 = (uint)uStack_40;
    if ((uint)uStack_40 != 0xffffffff) goto code_r0x004305c7;
  }
  else {
    if ((uint)uStack_40 == 1) {
      pppbStack_58 = (byte ***)0x0;
      lVar7 = *param_3;
      pppbStack_68 = pppbVar3;
      uVar6 = (**(code **)(*(long *)*param_2 + 0x38))();
      ppppbVar9 = &pppbStack_68;
      iVar4 = _ZN7android10ResXMLTree5setToENSt3__110unique_ptrIA_hNS1_14default_deleteIS3_EEEEm
                        (lVar7,ppppbVar9,uVar6);
      cVar8 = (char)ppppbVar9;
      ppppbVar9 = (byte ****)pppbStack_68;
      if ((byte ****)pppbStack_68 != (byte ****)0x0) {
        _ZdaPvSt11align_val_t();
      }
      if (iVar4 == 0) goto code_r0x004305b2;
code_r0x0043059e:
      lVar7 = 0;
      goto code_r0x004305bc;
    }
    if ((uint)uStack_40 != 2) goto code_r0x004305ff;
    *param_1 = 0;
    uVar5 = 2;
code_r0x004305c7:
    ppppbVar9 = (byte ****)&uStack_59;
    cVar8 = (char)&pppbStack_58;
    (**(code **)(&UNK_0099f870 + (ulong)uVar5 * 8))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x004305ff:
  func_0x0043f2f0();
  bVar1 = *(byte *)ppppbVar9;
  if ((char)bVar1 < '\0') {
    bVar2 = *(byte *)((long)ppppbVar9 + 1);
    *extraout_RDX = (bVar2 & 0x1f) + cVar8;
    extraout_RDX[1] = (bVar2 >> 5) + cVar8 + (bVar1 * '\b' & 0x18);
    extraout_RDX[2] = (bVar1 >> 2 & 0x1f) + cVar8;
    extraout_RDX[3] = '\0';
    return (long *)0x3;
  }
  if (bVar1 != 0) {
    *(undefined2 *)extraout_RDX = *(undefined2 *)ppppbVar9;
    extraout_RDX[2] = '\0';
    extraout_RDX[3] = '\0';
    return (long *)0x2;
  }
  extraout_RDX[0] = '\0';
  extraout_RDX[1] = '\0';
  extraout_RDX[2] = '\0';
  extraout_RDX[3] = '\0';
  return (long *)0x0;
}


