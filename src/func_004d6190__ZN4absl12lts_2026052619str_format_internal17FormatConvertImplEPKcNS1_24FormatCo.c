// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEPKcNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEPKcNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (byte *param_1,byte *param_2,uint param_3,byte *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 extraout_EDX;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *unaff_R12;
  byte *unaff_R14;
  byte *pbVar11;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  pbVar10 = param_1;
  if ((char)param_2 == '\x11') {
    if (param_1 == (byte *)0x0) {
      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 5;
      puVar2 = *(undefined4 **)(param_4 + 0x18);
      if (param_4 + (0x420 - (long)puVar2) < (byte *)0x6) {
        param_1 = param_4 + 0x20;
        (**(code **)(param_4 + 8))(*(undefined8 *)param_4,param_1,(long)puVar2 - (long)param_1);
        *(byte **)(param_4 + 0x18) = param_1;
        pbVar10 = *(byte **)param_4;
        param_2 = &UNK_00181ead;
        (**(code **)(param_4 + 8))(pbVar10,&UNK_00181ead,5);
        unaff_R14 = param_4;
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x29;
        *puVar2 = 0x6c696e28;
        *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 5;
      }
    }
    else {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      lStack_78 = 0;
      lStack_70 = 0;
      lVar3 = (long)&uStack_40 + 5;
      do {
        lVar9 = lVar3;
        *(undefined2 *)(lVar9 + -3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + ((ulong)param_1 & 0xff) * 2);
        pbVar10 = (byte *)((ulong)param_1 >> 8);
        bVar12 = (byte *)0xff < param_1;
        lVar3 = lVar9 + -2;
        param_1 = pbVar10;
      } while (bVar12);
      lStack_78 = lVar9 + -3;
      if (*(char *)(lVar9 + -3) == '0') {
        lStack_78 = lVar9 + -2;
      }
      lStack_70 = (long)&uStack_40 + (4 - lStack_78);
      pbVar10 = (byte *)&lStack_78;
      func_0x004d5b70();
    }
  }
  else {
    bVar4 = (byte)((ulong)param_2 >> 8);
    if (param_1 == (byte *)0x0) {
      if (bVar4 != 0) {
        unaff_R14 = (byte *)0x0;
        goto code_r0x004d62ca;
      }
    }
    else {
      if ((int)param_3 < 0) {
        unaff_R14 = (byte *)func_0x0099bcf0();
      }
      else {
        pbVar5 = (byte *)func_0x0099c070(param_1,0);
        pbVar11 = param_1 + param_3;
        if (pbVar5 != (byte *)0x0) {
          pbVar11 = pbVar5;
        }
        unaff_R14 = pbVar11 + -(long)param_1;
      }
      unaff_R15 = (byte *)(ulong)param_3;
      unaff_R12 = param_4;
      if (bVar4 != 0) {
code_r0x004d62ca:
        unaff_R15 = (byte *)(ulong)param_3;
        uVar8 = (ulong)param_2 >> 0x20;
        param_2 = param_1;
        uVar6 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (param_4,param_1,unaff_R14,uVar8,unaff_R15,bVar4 & 1);
        pbVar10 = param_4;
        param_4 = unaff_R12;
        goto code_r0x004d637d;
      }
      uVar6 = 1;
      if (unaff_R14 == (byte *)0x0) goto code_r0x004d637d;
      *(byte **)(param_4 + 0x10) = unaff_R14 + *(long *)(param_4 + 0x10);
      pbVar10 = *(byte **)(param_4 + 0x18);
      if (unaff_R14 < param_4 + (0x420 - (long)pbVar10)) {
        param_2 = param_1;
        func_0x0099bda0(pbVar10,param_1,unaff_R14);
        *(byte **)(param_4 + 0x18) = unaff_R14 + *(long *)(param_4 + 0x18);
        param_1 = param_4;
      }
      else {
        unaff_R15 = param_4 + 0x20;
        (**(code **)(param_4 + 8))(*(undefined8 *)param_4,unaff_R15,(long)pbVar10 - (long)unaff_R15)
        ;
        *(byte **)(param_4 + 0x18) = unaff_R15;
        pbVar10 = *(byte **)param_4;
        param_2 = param_1;
        (**(code **)(param_4 + 8))(pbVar10,param_1,unaff_R14);
      }
    }
  }
  uVar6 = 1;
  param_4 = unaff_R12;
code_r0x004d637d:
  puVar7 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  if (puVar7 == puStack_38) {
    return uVar6;
  }
  func_0x0099bd00();
  bVar12 = (*pbVar10 & 1) != 0;
  pbVar11 = pbVar10 + 1;
  if (bVar12) {
    pbVar11 = *(byte **)(pbVar10 + 0x10);
  }
  uVar8 = (ulong)(*pbVar10 >> 1);
  if (bVar12) {
    uVar8 = *(ulong *)(pbVar10 + 8);
  }
  bVar4 = (byte)((ulong)param_2 >> 8);
  if (bVar4 == 0) {
    uVar6 = 1;
    if (uVar8 != 0) {
      puVar7[2] = puVar7[2] + uVar8;
      lVar3 = puVar7[3];
      if (uVar8 < (ulong)((long)puVar7 + (0x420 - lVar3))) {
        func_0x0099bda0(lVar3,pbVar11,uVar8);
        puVar7[3] = puVar7[3] + uVar8;
        uVar6 = 1;
      }
      else {
        puVar1 = puVar7 + 4;
        (*(code *)puVar7[1])(*puVar7,puVar1,lVar3 - (long)puVar1);
        puVar7[3] = puVar1;
        (*(code *)puVar7[1])(*puVar7,pbVar11,uVar8);
        uVar6 = 1;
      }
    }
  }
  else {
    uVar6 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (puVar7,pbVar11,uVar8,(ulong)param_2 >> 0x20,extraout_EDX,bVar4 & 1,param_1,
                       param_4,unaff_R14,unaff_R15,&stack0xfffffffffffffff8);
  }
  return uVar6;
}


