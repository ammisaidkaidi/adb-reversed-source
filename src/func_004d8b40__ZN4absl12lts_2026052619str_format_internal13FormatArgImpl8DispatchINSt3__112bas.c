// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__112basic_stringIwNS4_11char_traitsIwEENS4_9allocatorIwEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8b40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__112basic_stringIwNS4_11char_traitsIwEENS4_9allocatorIwEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
                (byte *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined4 extraout_EDX;
  undefined8 *puVar9;
  undefined7 uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
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
  bVar12 = (*param_1 & 1) != 0;
  pbVar7 = param_1 + 4;
  if (bVar12) {
    pbVar7 = *(byte **)(param_1 + 0x10);
  }
  uVar6 = (ulong)(*param_1 >> 1);
  if (bVar12) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  puVar8 = (undefined8 *)(ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = uVar6 * 4;
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
  uVar10 = (undefined7)((ulong)pbVar7 >> 8);
  bVar2 = (byte)((ulong)param_2 >> 8);
  if (uVar6 == 0) {
    if (bVar2 == 0) {
      uVar6 = CONCAT71(uVar10,1);
      goto code_r0x004d697d;
    }
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    uVar11 = 0;
    do {
      lVar5 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                        (*(undefined4 *)(pbVar7 + uVar11 * 4),(long)puStack_40 + (long)puVar9,
                         &uStack_14a);
      puVar3 = puStack_40;
      if (lVar5 == -1) {
        uVar6 = 0;
        param_2 = puVar8;
        param_4 = (undefined8 *)&uStack_14a;
        goto code_r0x004d697d;
      }
      puVar9 = (undefined8 *)((long)puVar9 + lVar5);
      uVar11 = uVar11 + 1;
    } while (uVar6 != uVar11);
    if (bVar2 == 0) {
      uVar6 = CONCAT71(uVar10,1);
      if (puVar9 != (undefined8 *)0x0) {
        param_4[2] = param_4[2] + (long)puVar9;
        lVar5 = param_4[3];
        param_2 = (undefined8 *)((long)param_4 + (0x420 - lVar5));
        if (puVar9 < param_2) {
          func_0x0099bda0(lVar5,puStack_40,puVar9);
          param_4[3] = param_4[3] + (long)puVar9;
        }
        else {
          puVar8 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar8,lVar5 - (long)puVar8);
          param_4[3] = puVar8;
          (*(code *)param_4[1])(*param_4,puVar3,puVar9);
          param_4 = puVar8;
        }
      }
      goto code_r0x004d697d;
    }
  }
  param_2 = (undefined8 *)((ulong)param_2 >> 0x20);
  uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                    (param_4,puStack_40,puVar9,param_2,param_3,bVar2 & 1);
  uVar6 = (ulong)uVar4;
code_r0x004d697d:
  uVar11 = uStack_48;
  if (0x100 < uStack_48) {
    _ZdaPvSt11align_val_t(puStack_40);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    if ((char)uVar11 == '\x11') {
      param_2[2] = param_2[2] + 5;
      puVar1 = (undefined4 *)param_2[3];
      if ((ulong)((long)param_2 + (0x420 - (long)puVar1)) < 6) {
        puVar8 = param_2 + 4;
        (*(code *)param_2[1])(*param_2,puVar8,(long)puVar1 - (long)puVar8);
        param_2[3] = puVar8;
        (*(code *)param_2[1])(*param_2,&UNK_00181ead,5);
      }
      else {
        *(undefined1 *)(puVar1 + 1) = 0x29;
        *puVar1 = 0x6c696e28;
        param_2[3] = param_2[3] + 5;
      }
    }
    else {
      bVar2 = (byte)(uVar11 >> 8);
      if (bVar2 != 0) {
        uVar6 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (param_2,0,0,uVar11 >> 0x20,extraout_EDX,bVar2 & 1,param_4,uVar6,
                           &stack0xfffffffffffffff8);
        return uVar6;
      }
    }
    return 1;
  }
  return uVar6 & 0xffffffff;
}


