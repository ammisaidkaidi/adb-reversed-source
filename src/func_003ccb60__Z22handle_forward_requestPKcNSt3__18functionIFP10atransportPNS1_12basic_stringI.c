// Function: _Z22handle_forward_requestPKcNSt3__18functionIFP10atransportPNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEEEi
// Address: 003ccb60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_Z22handle_forward_requestPKcNSt3__18functionIFP10atransportPNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEEEi
          (long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uVar15;
  long lVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  bool bVar18;
  int iStack_b4;
  byte bStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  byte *pbStack_78;
  byte *pbStack_70;
  long lStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  uVar12 = param_3 & 0xffffffff;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = func_0x0099bdd0(param_1,&UNK_00187ac9);
  if (iVar7 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    _Z16format_listenersv(&uStack_58);
    _Z8SendOkayN7android4base11borrowed_fdE(param_3 & 0xffffffff);
    uVar12 = uStack_58 >> 1 & 0x7f;
    lVar8 = (long)&uStack_58 + 1;
    if ((uStack_58 & 1) != 0) {
      uVar12 = uStack_50;
      lVar8 = lStack_48;
    }
    param_3 = param_3 & 0xffffffff;
    _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (param_3,lVar8,uVar12);
    uVar15 = (undefined1)param_3;
    goto code_r0x003ccc25;
  }
  iVar7 = func_0x0099bdd0(param_1,&UNK_00186199);
  if (iVar7 == 0) {
    _Z20remove_all_listenersv();
    _Z8SendOkayN7android4base11borrowed_fdE(uVar12);
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar15 = (undefined1)uVar12;
    goto code_r0x003cccca;
  }
  iVar7 = func_0x0099bed0(param_1,&UNK_0015ae2b,8);
  if (iVar7 != 0) {
    lVar8 = param_1;
    iVar7 = func_0x0099bed0(param_1,&UNK_0015f7ad,0xc);
    uVar15 = (undefined1)lVar8;
    if (iVar7 == 0) goto code_r0x003ccc45;
    uVar11 = 0;
    goto code_r0x003ccccc;
  }
code_r0x003ccc45:
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  pbStack_78 = (byte *)&uStack_58;
  plVar2 = *(long **)(param_2 + 0x20);
  uVar15 = 0;
  if (plVar2 == (long *)0x0) goto code_r0x003cd11f;
  lVar8 = (**(code **)(*plVar2 + 0x30))(plVar2,&pbStack_78);
  if (lVar8 == 0) {
    uVar12 = uStack_58 >> 1 & 0x7f;
    lVar8 = (long)&uStack_58 + 1;
    if ((uStack_58 & 1) != 0) {
      uVar12 = uStack_50;
      lVar8 = lStack_48;
    }
    param_3 = param_3 & 0xffffffff;
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (param_3,lVar8,uVar12);
    uVar15 = (undefined1)param_3;
    goto code_r0x003ccc25;
  }
  uVar11 = func_0x0099bcf0(param_1);
  cVar5 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_1,uVar11,&UNK_0015f7ad,0xc);
  if (cVar5 == '\0') {
    lVar16 = param_1 + 8;
    uVar11 = func_0x0099bcf0(lVar16);
    cVar6 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (lVar16,uVar11,&UNK_001577e0,9);
    lVar13 = param_1 + 0x11;
    if (cVar6 == '\0') {
      lVar13 = lVar16;
    }
  }
  else {
    cVar6 = '\0';
    lVar13 = param_1 + 0xc;
  }
  pbStack_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  lStack_68 = 0;
  lVar16 = lVar13;
  uVar9 = func_0x0099bcf0();
  uVar15 = (undefined1)lVar16;
  if (0xfffffffffffffff6 < uVar9) goto code_r0x003cd124;
  if (uVar9 < 0x17) {
    uStack_98._0_4_ = CONCAT31(uStack_98._1_3_,(char)uVar9 * '\x02');
    lVar10 = (long)&uStack_98 + 1;
  }
  else {
    lVar16 = 0x1a;
    if ((uVar9 | 7) != 0x17) {
      lVar16 = (uVar9 | 7) + 1;
    }
    lVar10 = _Znwm(lVar16);
    uStack_98 = lVar16 + 1;
    uStack_90 = (undefined4)uVar9;
    uStack_8c = (undefined4)(uVar9 >> 0x20);
    lStack_88 = lVar10;
  }
  func_0x0099bda0(lVar10,lVar13,uVar9);
  *(undefined1 *)(lVar10 + uVar9) = 0;
  bStack_b0 = 2;
  uStack_af = 0x3b;
  uStack_ae = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (&pbStack_78,&uStack_98,&bStack_b0);
  if ((bStack_b0 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_a0,
               CONCAT44(uStack_ac,
                        CONCAT13(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,bStack_b0)))) &
               0xfffffffffffffffe);
  }
  if (((uint)uStack_98 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_88,CONCAT44(uStack_98._4_4_,(uint)uStack_98) & 0xfffffffffffffffe);
  }
  if (cVar5 == '\0') {
    if ((long)pbStack_70 - (long)pbStack_78 == 0x30) {
      if ((*pbStack_78 & 1) == 0) {
        uVar9 = (ulong)(*pbStack_78 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbStack_78 + 8);
      }
      if (uVar9 != 0) {
        bVar1 = pbStack_78[0x18];
        if ((bVar1 & 1) == 0) {
          uVar9 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar9 = *(ulong *)(pbStack_78 + 0x20);
        }
        if (uVar9 != 0) {
          if ((bVar1 & 1) == 0) {
            pbVar17 = pbStack_78 + 0x19;
          }
          else {
            pbVar17 = *(byte **)(pbStack_78 + 0x28);
          }
          if (*pbVar17 != 0x2a) {
            iStack_b4 = 0;
            iVar7 = _Z16install_listenerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcP10atransportiPiPS5_
                              (pbStack_78,pbVar17,lVar8,cVar6,&iStack_b4,&uStack_58);
            goto joined_r0x003cd021;
          }
        }
      }
    }
    puVar14 = &UNK_001705ac;
code_r0x003ccf41:
    _ZN7android4base12StringPrintfEPKcz(&uStack_98,puVar14,lVar13);
    goto code_r0x003ccf52;
  }
  if ((long)pbStack_70 - (long)pbStack_78 != 0x18) {
code_r0x003ccea2:
    puVar14 = &UNK_0015fb76;
    goto code_r0x003ccf41;
  }
  if ((*pbStack_78 & 1) == 0) {
    uVar9 = (ulong)(*pbStack_78 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbStack_78 + 8);
  }
  if (uVar9 == 0) goto code_r0x003ccea2;
  iStack_b4 = 0;
  if ((*pbStack_78 & 1) == 0) {
    pbVar17 = pbStack_78 + 1;
  }
  else {
    pbVar17 = *(byte **)(pbStack_78 + 0x10);
  }
  iVar7 = _Z15remove_listenerPKcP10atransport(pbVar17,lVar8);
joined_r0x003cd021:
  if (iVar7 == 0) {
    _Z8SendOkayN7android4base11borrowed_fdE(param_3 & 0xffffffff);
    uVar9 = uVar12;
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar15 = (undefined1)uVar9;
    if (iStack_b4 != 0) {
      _ZN7android4base12StringPrintfEPKcz(&uStack_98,&UNK_0017ba3a);
      bVar18 = ((uint)uStack_98 & 1) != 0;
      lVar8 = (long)&uStack_98 + 1;
      if (bVar18) {
        lVar8 = lStack_88;
      }
      uVar9 = (ulong)((byte)uStack_98 >> 1);
      if (bVar18) {
        uVar9 = CONCAT44(uStack_8c,uStack_90);
      }
      _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (uVar12,lVar8,uVar9);
      uVar15 = (undefined1)uVar12;
      if (((uint)uStack_98 & 1) == 0) goto code_r0x003ccf97;
      goto code_r0x003ccf83;
    }
    goto code_r0x003ccf97;
  }
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  lStack_88 = 0;
  switch(iVar7) {
  case -4:
    puVar14 = &UNK_00165ee4;
    goto code_r0x003cd0f5;
  case -3:
    _ZN7android4base12StringPrintfEPKcz(&bStack_b0,&UNK_001895c5);
    goto code_r0x003cd0fc;
  case -2:
    lVar13 = lStack_48;
    if ((uStack_58 & 1) == 0) {
      lVar13 = (long)&uStack_58 + 1;
    }
    puVar14 = &UNK_00181a7e;
code_r0x003cd0f5:
    _ZN7android4base12StringPrintfEPKcz(&bStack_b0,puVar14,lVar13);
code_r0x003cd0fc:
    lStack_88 = lStack_a0;
    uStack_98._0_4_ = CONCAT13(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,bStack_b0)));
    uStack_98._4_4_ = uStack_ac;
    uStack_90 = uStack_a8;
    uStack_8c = uStack_a4;
    break;
  case -1:
    uStack_98._0_4_ = 0x746e691c;
    uStack_98._4_4_ = 0x616e7265;
    uStack_90 = 0x7265206c;
    uStack_8c = 0x726f72;
  }
code_r0x003ccf52:
  bVar18 = ((uint)uStack_98 & 1) != 0;
  lVar8 = (long)&uStack_98 + 1;
  if (bVar18) {
    lVar8 = lStack_88;
  }
  uVar12 = (ulong)((byte)uStack_98 >> 1);
  if (bVar18) {
    uVar12 = CONCAT44(uStack_8c,uStack_90);
  }
  param_3 = param_3 & 0xffffffff;
  _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
            (param_3,lVar8,uVar12);
  uVar15 = (undefined1)param_3;
  if (((uint)uStack_98 & 1) != 0) {
code_r0x003ccf83:
    lVar8 = lStack_88;
    _ZdaPvSt11align_val_t(lStack_88,CONCAT44(uStack_98._4_4_,(uint)uStack_98) & 0xfffffffffffffffe);
    uVar15 = (undefined1)lVar8;
  }
code_r0x003ccf97:
  pbVar4 = pbStack_78;
  pbVar17 = pbStack_78;
  pbVar3 = pbStack_70;
  if (pbStack_78 != (byte *)0x0) {
    for (; pbStack_78 = pbVar17, pbVar4 != pbVar3; pbVar3 = pbVar3 + -0x18) {
      if ((pbVar3[-0x18] & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(pbVar3 + -8),*(ulong *)(pbVar3 + -0x18) & 0xfffffffffffffffe);
      }
      pbVar17 = pbStack_78;
    }
    pbStack_70 = pbVar4;
    _ZdaPvSt11align_val_t(pbVar17,lStack_68 - (long)pbVar17);
    uVar15 = SUB81(pbVar17,0);
  }
code_r0x003ccc25:
  if ((uStack_58 & 1) != 0) {
    lVar8 = lStack_48;
    _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    uVar15 = (undefined1)lVar8;
  }
code_r0x003cccca:
  uVar11 = 1;
code_r0x003ccccc:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar11;
  }
  func_0x0099bd00();
code_r0x003cd11f:
  func_0x00343f00();
code_r0x003cd124:
  uVar11 = func_0x0032e8f0();
  uRam0000000000a005f8 = uVar15;
  return uVar11;
}


