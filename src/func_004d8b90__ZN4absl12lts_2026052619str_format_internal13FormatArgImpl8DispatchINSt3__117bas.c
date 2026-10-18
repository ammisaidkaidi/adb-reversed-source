// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIwNS4_11char_traitsIwEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8b90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIwNS4_11char_traitsIwEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
                (long *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 extraout_EDX;
  ulong uVar10;
  undefined8 *puVar11;
  undefined7 uVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined2 uStack_14a;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  if ((((ulong)param_2 & 0xff) == 0x13) || ((2L << ((byte)param_2 & 0x3f) & 0x80004U) == 0)) {
    return 0;
  }
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar9 = (undefined8 *)(ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = lVar3 * 4;
  if (uStack_48 < 0x101) {
    puStack_40 = &uStack_148;
  }
  else {
    puStack_40 = (undefined8 *)_Znwm();
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_14a = 0;
  uVar12 = (undefined7)((ulong)lVar2 >> 8);
  bVar4 = (byte)((ulong)param_2 >> 8);
  if (lVar3 == 0) {
    if (bVar4 == 0) {
      uVar8 = CONCAT71(uVar12,1);
      goto code_r0x004d697d;
    }
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)0x0;
    lVar13 = 0;
    do {
      lVar7 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                        (*(undefined4 *)(lVar2 + lVar13 * 4),(long)puStack_40 + (long)puVar11,
                         &uStack_14a);
      puVar5 = puStack_40;
      if (lVar7 == -1) {
        uVar8 = 0;
        param_2 = puVar9;
        param_4 = (undefined8 *)&uStack_14a;
        goto code_r0x004d697d;
      }
      puVar11 = (undefined8 *)((long)puVar11 + lVar7);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    if (bVar4 == 0) {
      uVar8 = CONCAT71(uVar12,1);
      if (puVar11 != (undefined8 *)0x0) {
        param_4[2] = param_4[2] + (long)puVar11;
        lVar2 = param_4[3];
        param_2 = (undefined8 *)((long)param_4 + (0x420 - lVar2));
        if (puVar11 < param_2) {
          func_0x0099bda0(lVar2,puStack_40,puVar11);
          param_4[3] = param_4[3] + (long)puVar11;
        }
        else {
          puVar9 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar9,lVar2 - (long)puVar9);
          param_4[3] = puVar9;
          (*(code *)param_4[1])(*param_4,puVar5,puVar11);
          param_4 = puVar9;
        }
      }
      goto code_r0x004d697d;
    }
  }
  param_2 = (undefined8 *)((ulong)param_2 >> 0x20);
  uVar6 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                    (param_4,puStack_40,puVar11,param_2,param_3,bVar4 & 1);
  uVar8 = (ulong)uVar6;
code_r0x004d697d:
  uVar10 = uStack_48;
  if (0x100 < uStack_48) {
    _ZdaPvSt11align_val_t(puStack_40);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    if ((char)uVar10 == '\x11') {
      param_2[2] = param_2[2] + 5;
      puVar1 = (undefined4 *)param_2[3];
      if ((ulong)((long)param_2 + (0x420 - (long)puVar1)) < 6) {
        puVar9 = param_2 + 4;
        (*(code *)param_2[1])(*param_2,puVar9,(long)puVar1 - (long)puVar9);
        param_2[3] = puVar9;
        (*(code *)param_2[1])(*param_2,&UNK_00181ead,5);
      }
      else {
        *(undefined1 *)(puVar1 + 1) = 0x29;
        *puVar1 = 0x6c696e28;
        param_2[3] = param_2[3] + 5;
      }
    }
    else {
      bVar4 = (byte)(uVar10 >> 8);
      if (bVar4 != 0) {
        uVar8 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (param_2,0,0,uVar10 >> 0x20,extraout_EDX,bVar4 & 1,param_4,uVar8,
                           &stack0xfffffffffffffff8);
        return uVar8;
      }
    }
    return 1;
  }
  return uVar8 & 0xffffffff;
}


