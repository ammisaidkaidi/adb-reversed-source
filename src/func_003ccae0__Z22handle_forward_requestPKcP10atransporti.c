// Function: _Z22handle_forward_requestPKcP10atransporti
// Address: 003ccae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z22handle_forward_requestPKcP10atransporti(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong extraout_RDX;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined **ppuVar18;
  byte *pbVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int iStack_10c;
  byte bStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  undefined **ppuStack_a0;
  long lStack_90;
  ulong uStack_88;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_38;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_58 = &UNK_0099e900;
  ppuVar15 = &puStack_58;
  uStack_50 = param_2;
  ppuStack_38 = &puStack_58;
  uVar7 = _Z22handle_forward_requestPKcNSt3__18functionIFP10atransportPNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEEEi
                    ();
  ppuVar14 = ppuStack_38;
  if (ppuStack_38 == &puStack_58) {
    lVar9 = 0x20;
code_r0x003ccb33:
    (**(code **)(*ppuStack_38 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto code_r0x003ccb33;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return (ulong)uVar7;
  }
  func_0x0099bd00();
  uVar13 = extraout_RDX & 0xffffffff;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_88 = (ulong)uVar7;
  iVar8 = func_0x0099bdd0();
  if (iVar8 == 0) {
    auStack_b0 = (undefined1  [8])0x0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined **)0x0;
    _Z16format_listenersv(auStack_b0);
    _Z8SendOkayN7android4base11borrowed_fdE(extraout_RDX & 0xffffffff);
    uVar13 = (ulong)auStack_b0 >> 1 & 0x7f;
    ppuVar15 = (undefined **)(auStack_b0 + 1);
    if (((ulong)auStack_b0 & 1) != 0) {
      uVar13 = uStack_a8;
      ppuVar15 = ppuStack_a0;
    }
    uVar11 = extraout_RDX & 0xffffffff;
    _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (uVar11,ppuVar15,uVar13);
    uVar17 = (undefined1)uVar11;
    goto code_r0x003ccc25;
  }
  iVar8 = func_0x0099bdd0(ppuVar14,&UNK_00186199);
  if (iVar8 == 0) {
    _Z20remove_all_listenersv();
    _Z8SendOkayN7android4base11borrowed_fdE(uVar13);
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar17 = (undefined1)uVar13;
    goto code_r0x003cccca;
  }
  iVar8 = func_0x0099bed0(ppuVar14,&UNK_0015ae2b,8);
  if (iVar8 != 0) {
    ppuVar18 = ppuVar14;
    iVar8 = func_0x0099bed0(ppuVar14,&UNK_0015f7ad,0xc);
    uVar17 = SUB81(ppuVar18,0);
    if (iVar8 == 0) goto code_r0x003ccc45;
    uVar13 = 0;
    goto code_r0x003ccccc;
  }
code_r0x003ccc45:
  auStack_b0 = (undefined1  [8])0x0;
  uStack_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  pbStack_d0 = auStack_b0;
  plVar2 = (long *)ppuVar15[4];
  uVar17 = 0;
  if (plVar2 == (long *)0x0) goto code_r0x003cd11f;
  lVar9 = (**(code **)(*plVar2 + 0x30))(plVar2,&pbStack_d0);
  if (lVar9 == 0) {
    uVar13 = (ulong)auStack_b0 >> 1 & 0x7f;
    ppuVar15 = (undefined **)(auStack_b0 + 1);
    if (((ulong)auStack_b0 & 1) != 0) {
      uVar13 = uStack_a8;
      ppuVar15 = ppuStack_a0;
    }
    uVar11 = extraout_RDX & 0xffffffff;
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (uVar11,ppuVar15,uVar13);
    uVar17 = (undefined1)uVar11;
    goto code_r0x003ccc25;
  }
  uVar10 = func_0x0099bcf0(ppuVar14);
  cVar5 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (ppuVar14,uVar10,&UNK_0015f7ad,0xc);
  if (cVar5 == '\0') {
    ppuVar15 = ppuVar14 + 1;
    uVar10 = func_0x0099bcf0(ppuVar15);
    cVar6 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (ppuVar15,uVar10,&UNK_001577e0,9);
    ppuVar14 = (undefined **)((long)ppuVar14 + 0x11);
    if (cVar6 == '\0') {
      ppuVar14 = ppuVar15;
    }
  }
  else {
    cVar6 = '\0';
    ppuVar14 = (undefined **)((long)ppuVar14 + 0xc);
  }
  pbStack_d0 = (byte *)0x0;
  pbStack_c8 = (byte *)0x0;
  lStack_c0 = 0;
  ppuVar15 = ppuVar14;
  uVar11 = func_0x0099bcf0();
  uVar17 = SUB81(ppuVar15,0);
  if (0xfffffffffffffff6 < uVar11) goto code_r0x003cd124;
  if (uVar11 < 0x17) {
    uStack_f0._0_4_ = CONCAT31(uStack_f0._1_3_,(char)uVar11 * '\x02');
    lVar12 = (long)&uStack_f0 + 1;
  }
  else {
    lVar20 = 0x1a;
    if ((uVar11 | 7) != 0x17) {
      lVar20 = (uVar11 | 7) + 1;
    }
    lVar12 = _Znwm(lVar20);
    uStack_f0 = lVar20 + 1;
    uStack_e8 = (undefined4)uVar11;
    uStack_e4 = (undefined4)(uVar11 >> 0x20);
    lStack_e0 = lVar12;
  }
  func_0x0099bda0(lVar12,ppuVar14,uVar11);
  *(undefined1 *)(lVar12 + uVar11) = 0;
  bStack_108 = 2;
  uStack_107 = 0x3b;
  uStack_106 = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (&pbStack_d0,&uStack_f0,&bStack_108);
  if ((bStack_108 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_f8,
               CONCAT44(uStack_104,
                        CONCAT13(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,bStack_108)))) &
               0xfffffffffffffffe);
  }
  if (((uint)uStack_f0 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_e0,CONCAT44(uStack_f0._4_4_,(uint)uStack_f0) & 0xfffffffffffffffe);
  }
  if (cVar5 == '\0') {
    if ((long)pbStack_c8 - (long)pbStack_d0 == 0x30) {
      if ((*pbStack_d0 & 1) == 0) {
        uVar11 = (ulong)(*pbStack_d0 >> 1);
      }
      else {
        uVar11 = *(ulong *)(pbStack_d0 + 8);
      }
      if (uVar11 != 0) {
        bVar1 = pbStack_d0[0x18];
        if ((bVar1 & 1) == 0) {
          uVar11 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar11 = *(ulong *)(pbStack_d0 + 0x20);
        }
        if (uVar11 != 0) {
          if ((bVar1 & 1) == 0) {
            pbVar19 = pbStack_d0 + 0x19;
          }
          else {
            pbVar19 = *(byte **)(pbStack_d0 + 0x28);
          }
          if (*pbVar19 != 0x2a) {
            iStack_10c = 0;
            iVar8 = _Z16install_listenerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcP10atransportiPiPS5_
                              (pbStack_d0,pbVar19,lVar9,cVar6,&iStack_10c,auStack_b0);
            goto joined_r0x003cd021;
          }
        }
      }
    }
    puVar16 = &UNK_001705ac;
code_r0x003ccf41:
    _ZN7android4base12StringPrintfEPKcz(&uStack_f0,puVar16,ppuVar14);
    goto code_r0x003ccf52;
  }
  if ((long)pbStack_c8 - (long)pbStack_d0 != 0x18) {
code_r0x003ccea2:
    puVar16 = &UNK_0015fb76;
    goto code_r0x003ccf41;
  }
  if ((*pbStack_d0 & 1) == 0) {
    uVar11 = (ulong)(*pbStack_d0 >> 1);
  }
  else {
    uVar11 = *(ulong *)(pbStack_d0 + 8);
  }
  if (uVar11 == 0) goto code_r0x003ccea2;
  iStack_10c = 0;
  if ((*pbStack_d0 & 1) == 0) {
    pbVar19 = pbStack_d0 + 1;
  }
  else {
    pbVar19 = *(byte **)(pbStack_d0 + 0x10);
  }
  iVar8 = _Z15remove_listenerPKcP10atransport(pbVar19,lVar9);
joined_r0x003cd021:
  if (iVar8 == 0) {
    _Z8SendOkayN7android4base11borrowed_fdE(extraout_RDX & 0xffffffff);
    uVar11 = uVar13;
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar17 = (undefined1)uVar11;
    if (iStack_10c != 0) {
      _ZN7android4base12StringPrintfEPKcz(&uStack_f0,&UNK_0017ba3a);
      bVar21 = ((uint)uStack_f0 & 1) != 0;
      lVar9 = (long)&uStack_f0 + 1;
      if (bVar21) {
        lVar9 = lStack_e0;
      }
      uVar11 = (ulong)((byte)uStack_f0 >> 1);
      if (bVar21) {
        uVar11 = CONCAT44(uStack_e4,uStack_e8);
      }
      _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (uVar13,lVar9,uVar11);
      uVar17 = (undefined1)uVar13;
      if (((uint)uStack_f0 & 1) == 0) goto code_r0x003ccf97;
      goto code_r0x003ccf83;
    }
    goto code_r0x003ccf97;
  }
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  lStack_e0 = 0;
  switch(iVar8) {
  case -4:
    puVar16 = &UNK_00165ee4;
    goto code_r0x003cd0f5;
  case -3:
    _ZN7android4base12StringPrintfEPKcz(&bStack_108,&UNK_001895c5);
    goto code_r0x003cd0fc;
  case -2:
    ppuVar14 = ppuStack_a0;
    if (((ulong)auStack_b0 & 1) == 0) {
      ppuVar14 = (undefined **)(auStack_b0 + 1);
    }
    puVar16 = &UNK_00181a7e;
code_r0x003cd0f5:
    _ZN7android4base12StringPrintfEPKcz(&bStack_108,puVar16,ppuVar14);
code_r0x003cd0fc:
    lStack_e0 = lStack_f8;
    uStack_f0._0_4_ = CONCAT13(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,bStack_108)));
    uStack_f0._4_4_ = uStack_104;
    uStack_e8 = uStack_100;
    uStack_e4 = uStack_fc;
    break;
  case -1:
    uStack_f0._0_4_ = 0x746e691c;
    uStack_f0._4_4_ = 0x616e7265;
    uStack_e8 = 0x7265206c;
    uStack_e4 = 0x726f72;
  }
code_r0x003ccf52:
  bVar21 = ((uint)uStack_f0 & 1) != 0;
  lVar9 = (long)&uStack_f0 + 1;
  if (bVar21) {
    lVar9 = lStack_e0;
  }
  uVar13 = (ulong)((byte)uStack_f0 >> 1);
  if (bVar21) {
    uVar13 = CONCAT44(uStack_e4,uStack_e8);
  }
  uVar11 = extraout_RDX & 0xffffffff;
  _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
            (uVar11,lVar9,uVar13);
  uVar17 = (undefined1)uVar11;
  if (((uint)uStack_f0 & 1) != 0) {
code_r0x003ccf83:
    lVar9 = lStack_e0;
    _ZdaPvSt11align_val_t(lStack_e0,CONCAT44(uStack_f0._4_4_,(uint)uStack_f0) & 0xfffffffffffffffe);
    uVar17 = (undefined1)lVar9;
  }
code_r0x003ccf97:
  pbVar4 = pbStack_d0;
  pbVar19 = pbStack_d0;
  pbVar3 = pbStack_c8;
  if (pbStack_d0 != (byte *)0x0) {
    for (; pbStack_d0 = pbVar19, pbVar4 != pbVar3; pbVar3 = pbVar3 + -0x18) {
      if ((pbVar3[-0x18] & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(pbVar3 + -8),*(ulong *)(pbVar3 + -0x18) & 0xfffffffffffffffe);
      }
      pbVar19 = pbStack_d0;
    }
    pbStack_c8 = pbVar4;
    _ZdaPvSt11align_val_t(pbVar19,lStack_c0 - (long)pbVar19);
    uVar17 = SUB81(pbVar19,0);
  }
code_r0x003ccc25:
  if (((ulong)auStack_b0 & 1) != 0) {
    ppuVar15 = ppuStack_a0;
    _ZdaPvSt11align_val_t(ppuStack_a0,(ulong)auStack_b0 & 0xfffffffffffffffe);
    uVar17 = SUB81(ppuVar15,0);
  }
code_r0x003cccca:
  uVar13 = 1;
code_r0x003ccccc:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return uVar13;
  }
  func_0x0099bd00();
code_r0x003cd11f:
  func_0x00343f00();
code_r0x003cd124:
  uVar13 = func_0x0032e8f0();
  uRam0000000000a005f8 = uVar17;
  return uVar13;
}


