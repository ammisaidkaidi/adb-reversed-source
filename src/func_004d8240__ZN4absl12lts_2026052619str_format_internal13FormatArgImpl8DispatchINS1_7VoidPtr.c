// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINS1_7VoidPtrEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8240
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINS1_7VoidPtrEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
               (ulong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == '\x11') {
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
      lVar5 = (long)&uStack_30 + 5;
      do {
        lVar7 = lVar5;
        *(undefined2 *)(lVar7 + -3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + (param_1 & 0xff) * 2);
        bVar3 = 0xff < param_1;
        lVar5 = lVar7 + -2;
        param_1 = param_1 >> 8;
      } while (bVar3);
      lStack_68 = lVar7 + -3;
      if (*(char *)(lVar7 + -3) == '0') {
        lStack_68 = lVar7 + -2;
      }
      lStack_60 = (long)&uStack_30 + (4 - lStack_68);
      func_0x004d5b70(&lStack_68);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return param_2 == '\x11';
  }
  func_0x0099bd00();
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}


