// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEeNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEeNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (ulong param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *unaff_R12;
  ulong *unaff_R14;
  byte *pbVar13;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  unkbyte10 in_stack_00000008;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_40;
  unkbyte10 Stack_38;
  ulong uStack_20;
  undefined4 uStack_18;
  ulong *puStack_10;
  
  puStack_10 = *(ulong **)(in_FS_OFFSET + 0x28);
  uStack_18 = SUB84(param_2,0);
  if ((char)param_1 == '\x12') {
    uStack_20 = CONCAT71((int7)(param_1 >> 8),0xc);
code_r0x004d6155:
    Stack_38 = in_stack_00000008;
    puVar8 = &uStack_20;
    puStack_40 = &UNK_004d6164;
    uVar5 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
    param_2 = param_3;
  }
  else {
    puVar8 = (ulong *)(param_1 & 0xfffffffffffffff8);
    uStack_20 = param_1;
    if ((char)puVar8 == '\b') goto code_r0x004d6155;
    uVar5 = 0;
  }
  puVar12 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (puVar12 == puStack_10) {
    return uVar5;
  }
  puStack_40 = &UNK_004d6184;
  func_0x0099bd00();
  puStack_70 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puVar11 = puVar8;
  if ((char)param_2 == '\x11') {
    if (puVar8 == (ulong *)0x0) {
      puVar12[2] = puVar12[2] + 5;
      puVar2 = (undefined4 *)puVar12[3];
      if ((byte *)((long)puVar12 + (0x420 - (long)puVar2)) < (byte *)0x6) {
        puVar8 = puVar12 + 4;
        puStack_40 = &stack0xfffffffffffffff8;
        (*(code *)puVar12[1])(*puVar12,puVar8,(long)puVar2 - (long)puVar8);
        puVar12[3] = (ulong)puVar8;
        puVar11 = (ulong *)*puVar12;
        param_2 = (ulong *)&UNK_00181ead;
        (*(code *)puVar12[1])(puVar11,&UNK_00181ead,5);
        unaff_R14 = puVar12;
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x29;
        *puVar2 = 0x6c696e28;
        puVar12[3] = puVar12[3] + 5;
        puStack_40 = &stack0xfffffffffffffff8;
      }
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uVar9 = (long)&uStack_78 + 5;
      do {
        uVar10 = uVar9;
        *(undefined2 *)(uVar10 - 3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + ((ulong)puVar8 & 0xff) * 2);
        puVar12 = (ulong *)((ulong)puVar8 >> 8);
        bVar14 = (ulong *)0xff < puVar8;
        uVar9 = uVar10 - 2;
        puVar8 = puVar12;
      } while (bVar14);
      uStack_b0 = uVar10 - 3;
      if (*(char *)(uVar10 - 3) == '0') {
        uStack_b0 = uVar10 - 2;
      }
      lStack_a8 = (long)&uStack_78 + (4 - uStack_b0);
      puVar11 = &uStack_b0;
      puStack_40 = &stack0xfffffffffffffff8;
      func_0x004d5b70();
    }
  }
  else {
    bVar4 = (byte)((ulong)param_2 >> 8);
    if (puVar8 == (ulong *)0x0) {
      puStack_40 = &stack0xfffffffffffffff8;
      if (bVar4 != 0) {
        unaff_R14 = (ulong *)0x0;
        puStack_40 = &stack0xfffffffffffffff8;
        goto code_r0x004d62ca;
      }
    }
    else {
      if ((int)extraout_RDX < 0) {
        puStack_40 = &stack0xfffffffffffffff8;
        unaff_R14 = (ulong *)func_0x0099bcf0();
      }
      else {
        puStack_40 = &stack0xfffffffffffffff8;
        pbVar6 = (byte *)func_0x0099c070(puVar8,0);
        pbVar13 = (byte *)((long)puVar8 + (extraout_RDX & 0xffffffff));
        if (pbVar6 != (byte *)0x0) {
          pbVar13 = pbVar6;
        }
        unaff_R14 = (ulong *)(pbVar13 + -(long)puVar8);
      }
      unaff_R15 = (ulong *)(extraout_RDX & 0xffffffff);
      unaff_R12 = puVar12;
      if (bVar4 != 0) {
code_r0x004d62ca:
        unaff_R15 = (ulong *)(extraout_RDX & 0xffffffff);
        uVar9 = (ulong)param_2 >> 0x20;
        param_2 = puVar8;
        uVar5 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (puVar12,puVar8,unaff_R14,uVar9,unaff_R15,bVar4 & 1);
        puVar11 = puVar12;
        puVar12 = unaff_R12;
        goto code_r0x004d637d;
      }
      uVar5 = 1;
      if (unaff_R14 == (ulong *)0x0) goto code_r0x004d637d;
      puVar12[2] = (ulong)((long)unaff_R14 + puVar12[2]);
      puVar11 = (ulong *)puVar12[3];
      if (unaff_R14 < (ulong *)((long)puVar12 + (0x420 - (long)puVar11))) {
        param_2 = puVar8;
        func_0x0099bda0(puVar11,puVar8,unaff_R14);
        puVar12[3] = (ulong)((long)unaff_R14 + puVar12[3]);
        puVar8 = puVar12;
      }
      else {
        unaff_R15 = puVar12 + 4;
        (*(code *)puVar12[1])(*puVar12,unaff_R15,(long)puVar11 - (long)unaff_R15);
        puVar12[3] = (ulong)unaff_R15;
        puVar11 = (ulong *)*puVar12;
        param_2 = puVar8;
        (*(code *)puVar12[1])(puVar11,puVar8,unaff_R14);
      }
    }
  }
  uVar5 = 1;
  puVar12 = unaff_R12;
code_r0x004d637d:
  puVar7 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  if (puVar7 == puStack_70) {
    return uVar5;
  }
  func_0x0099bd00();
  bVar14 = ((byte)*puVar11 & 1) != 0;
  pbVar13 = (byte *)((long)puVar11 + 1);
  if (bVar14) {
    pbVar13 = (byte *)puVar11[2];
  }
  uVar9 = (ulong)(byte)((byte)*puVar11 >> 1);
  if (bVar14) {
    uVar9 = puVar11[1];
  }
  bVar4 = (byte)((ulong)param_2 >> 8);
  if (bVar4 == 0) {
    uVar5 = 1;
    if (uVar9 != 0) {
      puVar7[2] = puVar7[2] + uVar9;
      lVar3 = puVar7[3];
      if (uVar9 < (ulong)((long)puVar7 + (0x420 - lVar3))) {
        func_0x0099bda0(lVar3,pbVar13,uVar9);
        puVar7[3] = puVar7[3] + uVar9;
        uVar5 = 1;
      }
      else {
        puVar1 = puVar7 + 4;
        (*(code *)puVar7[1])(*puVar7,puVar1,lVar3 - (long)puVar1);
        puVar7[3] = puVar1;
        (*(code *)puVar7[1])(*puVar7,pbVar13,uVar9);
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (puVar7,pbVar13,uVar9,(ulong)param_2 >> 0x20,extraout_EDX,bVar4 & 1,puVar8,
                       puVar12,unaff_R14,unaff_R15,&puStack_40);
  }
  return uVar5;
}


