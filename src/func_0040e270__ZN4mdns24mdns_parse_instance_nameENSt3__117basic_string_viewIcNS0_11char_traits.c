// Function: _ZN4mdns24mdns_parse_instance_nameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
// Address: 0040e270
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZN4mdns24mdns_parse_instance_nameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
          (undefined1 *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  bool bVar24;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_68,&UNK_001867f0,0x19,6,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_68);
    uVar11 = func_0x0032eb30(uVar11,&UNK_0015b324,0x1b);
    func_0x0032eb30(uVar11,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&uStack_68);
  }
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = (undefined4 *)0x6c61636f6c2e0c;
  cVar5 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_2,param_3,&UNK_00162aea,1);
  puVar22 = &UNK_00162ac9;
  puVar19 = &UNK_00162ac9;
  if (cVar5 != '\0') {
    puVar19 = &UNK_00162aea;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_68,puVar19);
  uVar6 = (ulong)uStack_68 >> 1 & 0x7f;
  lVar18 = (long)&uStack_68 + 1;
  if (((ulong)uStack_68 & 1) != 0) {
    uVar6 = uStack_60;
    lVar18 = lStack_58;
  }
  cVar5 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_2,param_3,lVar18,uVar6);
  bVar24 = true;
  if (cVar5 == '\0') {
joined_r0x0040e363:
    bVar2 = false;
    bVar4 = false;
    if (((ulong)uStack_68 & 1) == 0) goto code_r0x0040e34c;
code_r0x0040e37f:
    _ZdaPvSt11align_val_t(lStack_58,(ulong)uStack_68 & 0xfffffffffffffffe);
    if (bVar24) goto code_r0x0040e399;
code_r0x0040e9ed:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
code_r0x0040eabc:
    func_0x0099bd00();
  }
  else {
    bVar2 = true;
    param_3 = param_3 - uVar6;
    if (param_3 == 0) {
      *param_1 = 0;
      param_1[0x48] = 0;
      param_3 = 0;
      bVar24 = false;
      goto joined_r0x0040e363;
    }
    bVar4 = bVar2;
    if (((ulong)uStack_68 & 1) != 0) goto code_r0x0040e37f;
code_r0x0040e34c:
    bVar2 = bVar4;
    if (!bVar24) goto code_r0x0040e9ed;
code_r0x0040e399:
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_78 = (undefined4 *)0x0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    if (!bVar2) {
      cVar5 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (param_2,param_3,&UNK_00162aea,1);
      puVar22 = &UNK_00162ac9;
      if (cVar5 != '\0') {
        puVar22 = &UNK_00162aea;
      }
    }
    uVar6 = func_0x0099bcf0(puVar22);
    if (0xfffffffffffffff6 < uVar6) {
code_r0x0040eab7:
      func_0x0032e8f0();
      goto code_r0x0040eabc;
    }
    if (uVar6 < 0x17) {
      uStack_a8 = CONCAT71(uStack_a8._1_7_,(char)uVar6 * '\x02');
      lVar7 = (long)&uStack_a8 + 1;
    }
    else {
      lVar18 = 0x1a;
      if ((uVar6 | 7) != 0x17) {
        lVar18 = (uVar6 | 7) + 1;
      }
      lVar7 = _Znwm(lVar18);
      uStack_a8 = lVar18 + 1;
      uStack_a0 = uVar6;
      lStack_98 = lVar7;
    }
    func_0x0099bda0(lVar7,puVar22,uVar6);
    uVar16 = uStack_a8;
    *(undefined1 *)(lVar7 + uVar6) = 0;
    lVar18 = lStack_98;
    uStack_60 = 0;
    lStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_68 = (undefined4 *)0x7063745f2e0a;
    bVar24 = (uStack_a8 & 1) != 0;
    uVar6 = uStack_a8 >> 1 & 0x7f;
    if (bVar24) {
      uVar6 = uStack_a0;
    }
    uStack_50 = 0x7064755f2e0a;
    lVar7 = (long)&uStack_a8 + 1;
    if (bVar24) {
      lVar7 = lStack_98;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_b8 = (undefined4 *)0x0;
    uVar10 = uVar6 + 5;
    if (0xfffffffffffffff6 < uVar10) goto code_r0x0040eab7;
    if (uVar10 < 0x17) {
      uVar20 = 0;
      uStack_c8 = (ulong)(byte)((char)uVar10 * '\x02');
    }
    else {
      lVar21 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        lVar21 = (uVar10 | 7) + 1;
      }
      puStack_b8 = (undefined4 *)_Znwm(lVar21);
      uVar20 = lVar21 + 1;
      uStack_c8 = uVar20;
      uStack_c0 = uVar10;
    }
    puVar19 = (undefined *)((long)puStack_b8 + 5);
    bVar24 = (uVar20 & 1) == 0;
    puVar9 = (undefined4 *)((long)&uStack_c8 + 1);
    puVar8 = puStack_b8;
    if (bVar24) {
      puVar8 = puVar9;
    }
    *(undefined1 *)(puVar8 + 1) = 0x70;
    *puVar8 = 0x63745f2e;
    if (bVar24) {
      puVar19 = (undefined *)((long)&uStack_c8 + 6);
    }
    func_0x0099bd90(puVar19,lVar7,uVar6);
    puVar19[uVar6] = 0;
    uVar20 = uStack_c8 >> 1 & 0x7f;
    if ((uStack_c8 & 1) != 0) {
      uVar20 = uStack_c0;
      puVar9 = puStack_b8;
    }
    cVar5 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (param_2,param_3,puVar9,uVar20);
    uStack_d0 = 0;
    if (cVar5 != '\0') {
      uStack_d0 = uVar20;
    }
    if ((uStack_c8 & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
    uStack_d0 = param_3 - uStack_d0;
    if (cVar5 == '\0') {
      uStack_c8 = 0;
      uStack_c0 = 0;
      puStack_b8 = (undefined4 *)0x0;
      if (uVar10 < 0x17) {
        uStack_c8 = (ulong)(byte)((char)uVar10 * '\x02');
      }
      else {
        lVar21 = 0x1a;
        if ((uVar10 | 7) != 0x17) {
          lVar21 = (uVar10 | 7) + 1;
        }
        puStack_b8 = (undefined4 *)_Znwm(lVar21);
        uStack_c8 = lVar21 + 1;
        uStack_c0 = uVar10;
      }
      puVar19 = (undefined *)((long)puStack_b8 + 5);
      bVar24 = (uStack_c8 & 1) == 0;
      puVar9 = (undefined4 *)((long)&uStack_c8 + 1);
      puVar8 = puStack_b8;
      if (bVar24) {
        puVar8 = puVar9;
      }
      *(undefined1 *)(puVar8 + 1) = 0x70;
      *puVar8 = 0x64755f2e;
      if (bVar24) {
        puVar19 = (undefined *)((long)&uStack_c8 + 6);
      }
      func_0x0099bd90(puVar19,lVar7,uVar6);
      puVar19[uVar6] = 0;
      uVar6 = uStack_c8 >> 1 & 0x7f;
      if ((uStack_c8 & 1) != 0) {
        uVar6 = uStack_c0;
        puVar9 = puStack_b8;
      }
      cVar5 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (param_2,uStack_d0,puVar9,uVar6);
      uVar10 = 0;
      if (cVar5 != '\0') {
        uVar10 = uVar6;
      }
      if ((uStack_c8 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_b8,uStack_c8 & 0xfffffffffffffffe);
      }
      uStack_d0 = uStack_d0 - uVar10;
      if (cVar5 != '\0') {
        pbVar3 = (byte *)&uStack_50;
        goto joined_r0x0040e757;
      }
code_r0x0040e82f:
      uVar6 = uStack_80;
      if (bVar2) {
        bVar17 = (byte)uStack_88;
        uVar10 = (ulong)((byte)uStack_88 >> 1);
        if ((uStack_88 & 1) != 0) {
          uVar10 = uStack_80;
        }
        if (uVar10 == 0) goto code_r0x0040e887;
        if ((uVar16 & 1) != 0) {
          _ZdaPvSt11align_val_t(lVar18,uStack_a8 & 0xfffffffffffffffe);
        }
code_r0x0040e8fe:
        pcVar1 = param_2 + uStack_d0;
        pcVar14 = pcVar1;
        pcVar12 = param_2;
        pcVar15 = pcVar1;
        if (uStack_d0 != 0) {
          do {
            while (pcVar14 = pcVar12, pcVar12 = pcVar14 + 1, *pcVar14 != '.') {
              pcVar14 = pcVar15;
              if (pcVar12 == pcVar1) goto code_r0x0040e940;
            }
            pcVar15 = pcVar14;
          } while (pcVar12 != pcVar1);
        }
code_r0x0040e940:
        uVar16 = 0xffffffffffffffff;
        if (pcVar14 != pcVar1) {
          uVar16 = (long)pcVar14 - (long)param_2;
        }
        uVar10 = uVar16 + 1;
        if ((uVar10 < 2) || (uVar16 == uStack_d0 - 1)) {
          *param_1 = 0;
          param_1[0x48] = 0;
          goto joined_r0x0040e8b4;
        }
        if (uStack_d0 < uVar10) goto code_r0x0040eac6;
        if (uStack_d0 < uVar16) {
          uVar16 = uStack_d0;
        }
        bVar24 = (bVar17 & 1) != 0;
        uStack_68 = (undefined4 *)((long)&uStack_88 + 1);
        if (bVar24) {
          uStack_68 = puStack_78;
        }
        uStack_60 = uVar6;
        if (!bVar24) {
          uStack_60 = (ulong)(bVar17 >> 1);
        }
        _ZN4mdns12MdnsInstanceC2ENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_
                  (param_1,param_2,uVar16,param_2 + uVar10,uStack_d0 - uVar10);
        param_1[0x48] = 1;
        uVar16 = uStack_88;
      }
      else {
        if ((uVar16 & 1) != 0) {
          _ZdaPvSt11align_val_t(lVar18,uStack_a8 & 0xfffffffffffffffe);
        }
        uVar16 = uStack_88;
        uVar10 = (ulong)((byte)uStack_88 >> 1);
        if ((uStack_88 & 1) != 0) {
          uVar10 = uStack_80;
        }
        uVar6 = uStack_80;
        bVar17 = (byte)uStack_88;
        if (uVar10 != 0) goto code_r0x0040e8fe;
        uStack_68 = (undefined4 *)&UNK_00162ac9;
        uStack_60 = 0;
        _ZN4mdns12MdnsInstanceC2ENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_
                  (param_1,param_2,uStack_d0,&UNK_00162ac9,0);
        param_1[0x48] = 1;
      }
      if ((uVar16 & 1) != 0) {
code_r0x0040e9dc:
        _ZdaPvSt11align_val_t(puStack_78,uStack_88 & 0xfffffffffffffffe);
      }
      goto code_r0x0040e9ed;
    }
    pbVar3 = (byte *)&uStack_68;
joined_r0x0040e757:
    if (uStack_d0 == 0) {
      bVar17 = 0;
code_r0x0040e887:
      *param_1 = 0;
      param_1[0x48] = 0;
      if ((uVar16 & 1) != 0) {
        _ZdaPvSt11align_val_t(lVar18,uStack_a8 & 0xfffffffffffffffe);
      }
joined_r0x0040e8b4:
      if ((bVar17 & 1) != 0) goto code_r0x0040e9dc;
      goto code_r0x0040e9ed;
    }
    bVar17 = *pbVar3;
    if ((bVar17 & 1) == 0) {
      uVar6 = (ulong)(bVar17 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar3 + 8);
    }
    if (uVar6 != 0) {
      uVar10 = uVar6 - 1;
      if (0xfffffffffffffff6 < uVar10) goto code_r0x0040eab7;
      lVar7 = *(long *)(pbVar3 + 0x10);
      if (uVar6 < 0x18) {
        uVar6 = uStack_c8 >> 8;
        uStack_c8 = CONCAT71((int7)uVar6,(char)uVar10 * '\x02');
        puVar9 = (undefined4 *)((long)&uStack_c8 + 1);
      }
      else {
        lVar21 = 0x1a;
        if ((uVar10 | 7) != 0x17) {
          lVar21 = (uVar10 | 7) + 1;
        }
        puVar9 = (undefined4 *)_Znwm(lVar21);
        uStack_c8 = lVar21 + 1;
        uStack_c0 = uVar10;
        puStack_b8 = puVar9;
      }
      pbVar23 = (byte *)(lVar7 + 1);
      if ((bVar17 & 1) == 0) {
        pbVar23 = pbVar3 + 2;
      }
      func_0x0099bd90(puVar9,pbVar23,uVar10);
      *(undefined1 *)((long)puVar9 + uVar10) = 0;
      uStack_88 = uStack_c8;
      uStack_80 = uStack_c0;
      puStack_78 = puStack_b8;
      goto code_r0x0040e82f;
    }
  }
  func_0x0032fc60();
code_r0x0040eac6:
  func_0x0032fc70(&UNK_001705cc);
  pcVar12 = (char *)func_0x0099be70(&UNK_0017076e);
  puVar13 = (undefined1 *)0x1;
  if ((pcVar12 != (char *)0x0) && (*pcVar12 == '0')) {
    puVar13 = (undefined1 *)(ulong)(pcVar12[1] != '\0');
  }
  return puVar13;
}


