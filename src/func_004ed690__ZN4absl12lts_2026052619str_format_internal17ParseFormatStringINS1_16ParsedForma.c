// Function: _ZN4absl12lts_2026052619str_format_internal17ParseFormatStringINS1_16ParsedFormatBase20ParsedFormatConsumerEEEbNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEET_
// Address: 004ed690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052619str_format_internal17ParseFormatStringINS1_16ParsedFormatBase20ParsedFormatConsumerEEEbNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEET_
                (byte *param_1,long param_2,long param_3,undefined1 *param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 unaff_R12;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  long in_FS_OFFSET;
  undefined1 *puStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  int iStack_7c;
  uint *puStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined1 *puStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  char cStack_52;
  undefined1 uStack_51;
  uint **ppuStack_50;
  uint *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_7c = 0;
  pbVar7 = (byte *)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if (param_2 != 0) {
    pbVar6 = param_1 + param_2;
    puStack_a0 = param_4;
    do {
      lVar8 = (long)pbVar6 - (long)param_1;
      lVar3 = func_0x0099c070(param_1,0x25,lVar8);
      if (lVar3 == 0) {
        func_0x0099bda0(puStack_a0,param_1,lVar8);
        puStack_a0 = puStack_a0 + (lVar8 - *(long *)(param_3 + 8));
        puVar4 = *(uint **)(param_3 + 0x18);
        pbVar7 = (byte *)CONCAT71((int7)((ulong)pbVar7 >> 8),1);
        if ((*(uint **)(param_3 + 0x10) == puVar4) || ((char)puVar4[-8] != '\0')) {
          uStack_70 = uStack_70 & 0xffffff00;
          uStack_5c = 0xffffffff;
          uStack_58 = 0xffffffff;
          uStack_54 = 0x900;
          cStack_52 = '\x13';
          iStack_98 = (int)puVar4;
          uStack_94 = (undefined4)((ulong)puVar4 >> 0x20);
          ppuStack_50 = (uint **)&iStack_98;
          puStack_48 = &uStack_70;
          lStack_40 = param_3 + 0x10;
          puStack_68 = puStack_a0;
          if (puVar4 < *(uint **)(param_3 + 0x20)) {
            *(ulong *)(puVar4 + 4) = CONCAT44(0xffffffff,iStack_60);
            *(ulong *)(puVar4 + 6) = CONCAT17(uStack_51,0x130900ffffffff);
            *puVar4 = uStack_70;
            puVar4[1] = uStack_6c;
            *(undefined1 **)(puVar4 + 2) = puStack_a0;
            *(uint **)(param_3 + 0x18) = puVar4 + 8;
          }
          else {
            _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                      (&ppuStack_50);
            *(ulong *)(param_3 + 0x18) = CONCAT44(uStack_94,iStack_98);
          }
        }
        else {
          *(undefined1 **)(puVar4 + -6) = puStack_a0;
        }
        goto code_r0x004edb1b;
      }
      lVar8 = lVar3 - (long)param_1;
      if (lVar8 != 0) {
        func_0x0099bda0(puStack_a0,param_1,lVar8);
        puStack_a0 = puStack_a0 + lVar8;
        puVar9 = puStack_a0 + -*(long *)(param_3 + 8);
        puVar4 = *(uint **)(param_3 + 0x18);
        if ((*(uint **)(param_3 + 0x10) == puVar4) || ((char)puVar4[-8] != '\0')) {
          uStack_70 = uStack_70 & 0xffffff00;
          uStack_5c = 0xffffffff;
          uStack_58 = 0xffffffff;
          uStack_54 = 0x900;
          cStack_52 = '\x13';
          iStack_98 = (int)puVar4;
          uStack_94 = (undefined4)((ulong)puVar4 >> 0x20);
          ppuStack_50 = (uint **)&iStack_98;
          puStack_48 = &uStack_70;
          lStack_40 = param_3 + 0x10;
          puStack_68 = puVar9;
          if (puVar4 < *(uint **)(param_3 + 0x20)) {
            *(ulong *)(puVar4 + 4) = CONCAT44(0xffffffff,iStack_60);
            *(ulong *)(puVar4 + 6) = CONCAT17(uStack_51,0x130900ffffffff);
            *puVar4 = uStack_70;
            puVar4[1] = uStack_6c;
            *(undefined1 **)(puVar4 + 2) = puVar9;
            puVar4 = puVar4 + 8;
          }
          else {
            _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                      (&ppuStack_50);
            puVar4 = (uint *)CONCAT44(uStack_94,iStack_98);
          }
          *(uint **)(param_3 + 0x18) = puVar4;
        }
        else {
          *(undefined1 **)(puVar4 + -6) = puVar9;
        }
      }
      pbVar7 = (byte *)(lVar3 + 1);
      if (pbVar6 <= pbVar7) {
code_r0x004edb3c:
        pbVar7 = (byte *)0x0;
        goto code_r0x004edb1b;
      }
      cVar1 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar7];
      if (cVar1 < '\0') {
        if (*pbVar7 == 0x25) {
          *puStack_a0 = 0x25;
          puStack_a0 = puStack_a0 + 1;
          puVar9 = puStack_a0 + -*(long *)(param_3 + 8);
          puVar4 = *(uint **)(param_3 + 0x18);
          if ((*(uint **)(param_3 + 0x10) == puVar4) || ((char)puVar4[-8] != '\0')) {
            uStack_70 = (uint)uStack_70._1_3_ << 8;
            uStack_5c = 0xffffffff;
            uStack_58 = 0xffffffff;
            uStack_54 = 0x900;
            cStack_52 = '\x13';
            iStack_98 = (int)puVar4;
            uStack_94 = (undefined4)((ulong)puVar4 >> 0x20);
            ppuStack_50 = (uint **)&iStack_98;
            puStack_48 = &uStack_70;
            lStack_40 = param_3 + 0x10;
            puStack_68 = puVar9;
            if (puVar4 < *(uint **)(param_3 + 0x20)) {
              *(ulong *)(puVar4 + 4) = CONCAT44(0xffffffff,iStack_60);
              *(ulong *)(puVar4 + 6) = CONCAT17(uStack_51,0x130900ffffffff);
              *puVar4 = uStack_70;
              puVar4[1] = uStack_6c;
              *(undefined1 **)(puVar4 + 2) = puVar9;
              puVar4 = puVar4 + 8;
            }
            else {
              _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                        (&ppuStack_50);
              puVar4 = (uint *)CONCAT44(uStack_94,iStack_98);
            }
            *(uint **)(param_3 + 0x18) = puVar4;
          }
          else {
            *(undefined1 **)(puVar4 + -6) = puVar9;
          }
          param_1 = (byte *)(lVar3 + 2);
        }
        else {
          iStack_98 = 0;
          uStack_8c = 0;
          uStack_89 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0xffffffff;
          uStack_8b = 0x1309;
          param_1 = (byte *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                      (pbVar7,pbVar6,&iStack_98,&iStack_7c);
          if (param_1 == (byte *)0x0) goto code_r0x004edb3c;
          func_0x0099bda0(puStack_a0,pbVar7,(long)param_1 - (long)pbVar7);
          puStack_a0 = puStack_a0 + ((long)param_1 - (long)pbVar7);
          puStack_68 = puStack_a0 + -*(long *)(param_3 + 8);
          uStack_70 = CONCAT31(uStack_70._1_3_,1);
          uStack_58 = uStack_90;
          uStack_54 = (undefined2)(CONCAT25(uStack_8b,CONCAT14(uStack_8c,uStack_90)) >> 0x20);
          cStack_52 = (char)((ushort)uStack_8b >> 8);
          iStack_60 = iStack_98;
          uStack_5c = uStack_94;
          puStack_78 = *(uint **)(param_3 + 0x18);
          ppuStack_50 = &puStack_78;
          puStack_48 = &uStack_70;
          lStack_40 = param_3 + 0x10;
          if (puStack_78 < *(uint **)(param_3 + 0x20)) {
            *(ulong *)(puStack_78 + 4) = CONCAT44(uStack_94,iStack_98);
            *(ulong *)(puStack_78 + 6) =
                 CONCAT17(uStack_51,CONCAT16(cStack_52,CONCAT24(uStack_54,uStack_90)));
            *puStack_78 = uStack_70;
            puStack_78[1] = uStack_6c;
            *(undefined1 **)(puStack_78 + 2) = puStack_68;
            puVar4 = puStack_78 + 8;
          }
          else {
            _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                      (&ppuStack_50);
            puVar4 = puStack_78;
          }
          *(uint **)(param_3 + 0x18) = puVar4;
        }
      }
      else {
        if (iStack_7c < 0) goto code_r0x004edb3c;
        param_1 = (byte *)(lVar3 + 2);
        iStack_7c = iStack_7c + 1;
        *puStack_a0 = *(undefined1 *)(lVar3 + 1);
        puStack_a0 = puStack_a0 + 1;
        puStack_68 = puStack_a0 + -*(long *)(param_3 + 8);
        uStack_70 = CONCAT31(uStack_70._1_3_,1);
        uStack_5c = 0xffffffff;
        uStack_58 = 0xffffffff;
        uStack_54 = 0x900;
        puVar4 = *(uint **)(param_3 + 0x18);
        iStack_98 = (int)puVar4;
        uStack_94 = (undefined4)((ulong)puVar4 >> 0x20);
        ppuStack_50 = (uint **)&iStack_98;
        puStack_48 = &uStack_70;
        lStack_40 = param_3 + 0x10;
        iStack_60 = iStack_7c;
        cStack_52 = cVar1;
        if (puVar4 < *(uint **)(param_3 + 0x20)) {
          *(ulong *)(puVar4 + 4) = CONCAT44(0xffffffff,iStack_7c);
          *(ulong *)(puVar4 + 6) = CONCAT17(uStack_51,CONCAT16(cVar1,0x900ffffffff));
          *puVar4 = uStack_70;
          puVar4[1] = uStack_6c;
          *(undefined1 **)(puVar4 + 2) = puStack_68;
          *(uint **)(param_3 + 0x18) = puVar4 + 8;
        }
        else {
          _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&ppuStack_50);
          *(ulong *)(param_3 + 0x18) = CONCAT44(uStack_94,iStack_98);
        }
      }
      pbVar7 = param_1;
    } while (param_1 != pbVar6);
    pbVar7 = (byte *)CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
code_r0x004edb1b:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return (ulong)pbVar7 & 0xffffffff;
}


