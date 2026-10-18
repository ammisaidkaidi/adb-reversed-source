// Function: _ZN4absl12lts_2026052612log_internal24CheckstrcasecmpfalseImplEPKcS3_S3_
// Address: 004fcd00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal24CheckstrcasecmpfalseImplEPKcS3_S3_
                 (byte *param_1,byte *param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    pbVar3 = param_2;
    pbVar4 = param_1;
    if (param_2 != (byte *)0x0 && param_1 != (byte *)0x0) {
      iVar1 = func_0x0099c820();
      if (iVar1 == 0) goto code_r0x004fcd52;
    }
    pbVar2 = (byte *)0x0;
    goto code_r0x004fce34;
  }
code_r0x004fcd52:
  pbVar2 = (byte *)_Znwm(0x18);
  if (param_3 == 0) {
    uStack_a0 = 0;
    if (param_1 == (byte *)0x0) goto code_r0x004fcda2;
code_r0x004fcd78:
    uStack_70 = func_0x0099bcf0(param_1);
    if (param_2 != (byte *)0x0) goto code_r0x004fcd88;
code_r0x004fcdaa:
    uStack_50 = 0;
  }
  else {
    uStack_a0 = func_0x0099bcf0(param_3);
    if (param_1 != (byte *)0x0) goto code_r0x004fcd78;
code_r0x004fcda2:
    uStack_70 = 0;
    if (param_2 == (byte *)0x0) goto code_r0x004fcdaa;
code_r0x004fcd88:
    uStack_50 = func_0x0099bcf0(param_2);
  }
  uStack_90 = uStack_a0;
  puStack_88 = &UNK_0016ebd4;
  uStack_80 = 2;
  puStack_68 = &UNK_001632e9;
  uStack_60 = 5;
  puStack_48 = &UNK_001692c7;
  uStack_40 = 1;
  pbVar3 = (byte *)&lStack_98;
  lStack_98 = param_3;
  pbStack_78 = param_1;
  pbStack_58 = param_2;
  _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
            (pbVar2,pbVar3,6);
  pbVar4 = pbVar2;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv();
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
code_r0x004fce34:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pbVar2;
  }
  pbVar2 = (byte *)func_0x0099bd00();
  *(byte **)pbVar4 = pbVar3;
  return pbVar2;
}


