// Function: _ZN14TransferLedger18ReportTransferRateER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE17TransferDirection
// Address: 00348010
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14TransferLedger18ReportTransferRateER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE17TransferDirection
               (long *param_1,undefined8 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_180;
  ulong uStack_178;
  long lStack_170;
  byte bStack_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  ulong uStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [10];
  ulong uStack_d8;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_d8 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
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
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0x9ba228;
  uStack_150 = 0x9ba340;
  uStack_d0 = 0x9ba368;
  uStack_148 = 0;
  _ZNSt3__18ios_base4initEPv(&uStack_d0,&uStack_138);
  uStack_48 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_40._0_4_ = 0xffffffff;
  uStack_150 = 0x9ba200;
  uStack_d0 = 0x9ba250;
  uStack_140 = 0x9ba228;
  uStack_138 = 0x9b9bf8;
  _ZNSt3__16localeC2Ev(&uStack_130);
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_138 = 0x9b9f28;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,0x18);
  func_0x00348610(&uStack_138);
  bVar1 = *param_3;
  if ((bVar1 & 1) == 0) {
    uVar11 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar11 = *(ulong *)(param_3 + 8);
  }
  if (uVar11 != 0) {
    if ((bVar1 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    lVar4 = func_0x0099be70(&UNK_0017b7a3);
    if (lVar4 != 0) {
      lVar5 = func_0x0099bcf0(lVar4);
      cVar3 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (param_3,uVar11,lVar4,lVar5);
      if (cVar3 != '\0') {
        param_3 = param_3 + lVar5;
        uVar11 = uVar11 - lVar5;
      }
    }
    uVar6 = func_0x0032eb30(&uStack_140,param_3,uVar11);
    func_0x0032eb30(uVar6,&UNK_00186281,2);
  }
  puVar12 = &UNK_001832aa;
  if (param_4 == 0) {
    puVar12 = &UNK_0016ad70;
  }
  uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(&uStack_140,param_1[1]);
  uVar6 = func_0x0032eb30(uVar6,&UNK_00167897,5);
  puVar9 = &UNK_00162ac9;
  if (param_1[1] != 1) {
    puVar9 = &UNK_00165d61;
  }
  uVar6 = func_0x0032eb30(uVar6,puVar9,param_1[1] != 1);
  uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
  uVar6 = func_0x0032eb30(uVar6,puVar12,6);
  uVar6 = func_0x0032eb30(uVar6,&UNK_0015f9ff,2);
  uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,param_1[2]);
  func_0x0032eb30(uVar6,&UNK_00181922,9);
  if (param_1[3] == 0) {
code_r0x003483a0:
    bStack_168 = 0;
    uStack_167 = 0;
  }
  else {
    lVar4 = _ZNSt3__16chrono12steady_clock3nowEv();
    dVar14 = (double)(lVar4 - *param_1) / 1000000000.0;
    if ((dVar14 == 0.0) && (!NAN(dVar14))) goto code_r0x003483a0;
    lVar4 = param_1[3];
    auVar15._8_4_ = (int)((ulong)lVar4 >> 0x20);
    auVar15._0_8_ = lVar4;
    auVar15._12_4_ = 0x45300000;
    _ZN7android4base12StringPrintfEPKcz
              ((((auVar15._8_8_ - 1.9342813113834067e+25) +
                ((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0)) / dVar14) *
               9.5367431640625e-07,&bStack_168,&UNK_0017eb71);
  }
  bVar13 = (bStack_168 & 1) != 0;
  puVar10 = &uStack_167;
  if (bVar13) {
    puVar10 = puStack_158;
  }
  uVar11 = (ulong)(bStack_168 >> 1);
  if (bVar13) {
    uVar11 = uStack_160;
  }
  func_0x0032eb30(&uStack_140,puVar10,uVar11,bStack_168 >> 1);
  if ((bStack_168 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (puStack_158,CONCAT62(uStack_166,CONCAT11(uStack_167,bStack_168)) & 0xfffffffffffffffe
              );
  }
  if ((uStack_d8 & 0x10) == 0) {
    lVar4 = 0;
    uVar11 = 0;
    if ((uStack_d8 & 8) != 0) {
      plVar7 = alStack_128;
      uVar11 = alStack_128[2];
      goto code_r0x0034848c;
    }
code_r0x003484a2:
    uStack_180 = CONCAT71(uStack_180._1_7_,(char)uVar11 * '\x02');
    lVar8 = (long)&uStack_180 + 1;
  }
  else {
    if ((ulong)alStack_128[9] < (ulong)alStack_128[4]) {
      alStack_128[9] = alStack_128[4];
    }
    plVar7 = alStack_128 + 3;
    uVar11 = alStack_128[9];
code_r0x0034848c:
    lVar4 = *plVar7;
    uVar11 = uVar11 - lVar4;
    if (0xfffffffffffffff6 < uVar11) goto code_r0x00348602;
    if (uVar11 < 0x17) goto code_r0x003484a2;
    lVar5 = 0x1a;
    if ((uVar11 | 7) != 0x17) {
      lVar5 = (uVar11 | 7) + 1;
    }
    lVar8 = _Znwm(lVar5);
    uStack_180 = lVar5 + 1;
    uStack_178 = uVar11;
    lStack_170 = lVar8;
  }
  func_0x0099bd90(lVar8,lVar4,uVar11);
  *(undefined1 *)(lVar8 + uVar11) = 0;
  _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
            (param_2,&uStack_180,0);
  if ((uStack_180 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_170,uStack_180 & 0xfffffffffffffffe);
  }
  _ZN11LinePrinter12KeepInfoLineEv(param_2);
  uStack_150 = 0x9ba200;
  uStack_d0 = 0x9ba250;
  uStack_140 = 0x9ba228;
  uStack_138 = 0x9b9f28;
  if ((alStack_128[6] & 1U) != 0) {
    _ZdaPvSt11align_val_t(alStack_128[8],alStack_128[6] & 0xfffffffffffffffe);
  }
  uStack_138 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(&uStack_130);
  _ZNSt3__18ios_base4InitD1Ev(&uStack_150,0x9ba268);
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev(&uStack_d0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
code_r0x00348602:
  func_0x0032e8f0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


