// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplENS1_7VoidPtrENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d5e80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplENS1_7VoidPtrENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    param_4[2] = param_4[2] + 5;
    puVar2 = (undefined4 *)param_4[3];
    if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
      puVar1 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar2 - (long)puVar1);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,&UNK_00181ead,5);
    }
    else {
      *(undefined1 *)(puVar2 + 1) = 0x29;
      *puVar2 = 0x6c696e28;
      param_4[3] = param_4[3] + 5;
    }
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    lVar4 = (long)&uStack_30 + 5;
    do {
      lVar6 = lVar4;
      *(undefined2 *)(lVar6 + -3) =
           *(undefined2 *)
            (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + (param_1 & 0xff) * 2);
      bVar3 = 0xff < param_1;
      lVar4 = lVar6 + -2;
      param_1 = param_1 >> 8;
    } while (bVar3);
    lStack_68 = lVar6 + -3;
    if (*(char *)(lVar6 + -3) == '0') {
      lStack_68 = lVar6 + -2;
    }
    lStack_60 = (long)&uStack_30 + (4 - lStack_68);
    func_0x004d5b70(&lStack_68);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  func_0x0099bd00();
  uVar5 = _ZN4absl12lts_2026052619str_format_internal13ConvertIntArgIaEEbT_NS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                    ();
  return uVar5;
}


