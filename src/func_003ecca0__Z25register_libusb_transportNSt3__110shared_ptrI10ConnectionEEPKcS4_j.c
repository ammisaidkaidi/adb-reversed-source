// Function: _Z25register_libusb_transportNSt3__110shared_ptrI10ConnectionEEPKcS4_j
// Address: 003ecca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8 *
_Z25register_libusb_transportNSt3__110shared_ptrI10ConnectionEEPKcS4_j
          (undefined8 *param_1,undefined **param_2,undefined **param_3,int param_4)

{
  long *plVar1;
  byte bVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long ******pppppplVar6;
  undefined8 *puVar7;
  long *******ppppppplVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined *puVar22;
  long *******ppppppplVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined **extraout_RDX;
  undefined **extraout_RDX_00;
  byte *pbVar26;
  undefined **ppuVar27;
  long *******ppppppplVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  long *plVar31;
  long in_FS_OFFSET;
  undefined1 auStack_220 [8];
  long lStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  char cStack_1d1;
  undefined1 auStack_1d0 [4];
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_1b0 [8];
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined *apuStack_150 [2];
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  long *******ppppppplStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [8];
  long ******pppppplStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *******ppppppplStack_c0;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_48;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_80 = &UNK_003eccd4;
  lVar12 = _Znwm(0x200);
  puStack_68 = (undefined *)0x99ef90;
  ppuVar29 = (undefined **)0x0;
  puStack_80 = &UNK_003ecd0a;
  ppuStack_48 = &puStack_68;
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (lVar12,0,&puStack_68,(param_4 != 0) * '\x02' + '\x03');
  if (ppuStack_48 == &puStack_68) {
    lVar13 = 0x20;
code_r0x003ece27:
    puStack_80 = &UNK_003ece2d;
    (**(code **)(*ppuStack_48 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto code_r0x003ece27;
  }
  if (param_2 != (undefined **)0x0) {
    puStack_80 = &UNK_003ecd36;
    ppuVar29 = param_2;
    func_0x0032ea60(lVar12 + 0x28);
  }
  if (param_3 != (undefined **)0x0) {
    puStack_80 = &UNK_003ecd4a;
    func_0x0032ea60(lVar12 + 0x88);
    ppuVar29 = param_3;
  }
  uStack_78 = *param_1;
  uStack_70 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  puStack_80 = &UNK_003ecd6b;
  _ZNSt3__15mutex4lockEv(lVar12 + 0x1a0);
  plVar31 = *(long **)(lVar12 + 0x160);
  *(undefined4 *)(lVar12 + 0x158) = (undefined4)uStack_78;
  *(undefined4 *)(lVar12 + 0x15c) = uStack_78._4_4_;
  *(undefined4 *)(lVar12 + 0x160) = (undefined4)uStack_70;
  *(undefined4 *)(lVar12 + 0x164) = uStack_70._4_4_;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar1 = plVar31 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      puStack_80 = &UNK_003ecd9d;
      (**(code **)(*plVar31 + 0x10))(plVar31);
      puStack_80 = &UNK_003ecda5;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  puStack_80 = &UNK_003ecdad;
  _ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x1a0);
  ppuVar19 = ppuRam0000000000a006c8;
  puStack_80 = &UNK_003ecdbc;
  _ZNSt3__115recursive_mutex4lockEv(ppuRam0000000000a006c8);
  ppuVar16 = ppuRam0000000000a006d0;
  puStack_80 = &UNK_003ecdcd;
  puVar14 = (undefined8 *)_Znwm(0x18);
  puVar14[2] = lVar12;
  *puVar14 = ppuVar16;
  puVar20 = (undefined8 *)ppuVar16[1];
  puVar14[1] = puVar20;
  *puVar20 = puVar14;
  ppuVar16[1] = (undefined *)puVar14;
  ppuVar16[2] = ppuVar16[2] + 1;
  puStack_80 = &UNK_003ecdf2;
  _ZNSt3__115recursive_mutex6unlockEv(ppuVar19);
  iVar11 = (int)puVar20;
  puStack_68 = &UNK_0099ee38;
  puStack_80 = &UNK_003ece0d;
  lStack_60 = lVar12;
  ppuStack_48 = &puStack_68;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_68);
  ppuVar27 = ppuStack_48;
  if (ppuStack_48 == &puStack_68) {
    lVar13 = 0x20;
code_r0x003ece40:
    puVar22 = *ppuStack_48;
    puStack_80 = &UNK_003ece46;
    (**(code **)(puVar22 + lVar13))();
    iVar11 = (int)puVar22;
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto code_r0x003ece40;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_80 = &UNK_003ece69;
  func_0x0099bd00();
  ppuStack_88 = ppuVar19;
  ppuStack_a0 = ppuVar16;
  puStack_b0 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_108 = &UNK_003ecea4;
  lStack_a8 = lVar12;
  ppuStack_98 = param_2;
  ppuStack_90 = &puStack_68;
  puStack_80 = &stack0xfffffffffffffff8;
  lVar12 = _Znwm(0x200);
  pppppplStack_e0 = (long ******)0x99ef90;
  puStack_108 = &UNK_003eceda;
  ppppppplStack_c0 = &pppppplStack_e0;
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (lVar12,0,&pppppplStack_e0,(iVar11 != 0) * '\x02' + '\x03');
  if (ppppppplStack_c0 == &pppppplStack_e0) {
    lVar13 = 0x20;
code_r0x003ecef4:
    puStack_108 = &UNK_003ecefa;
    (**(code **)((long)*ppppppplStack_c0 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppppppplStack_c0 != (long *******)0x0) goto code_r0x003ecef4;
  }
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    puStack_108 = &UNK_003ecff8;
    cVar9 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar9 != '\0') {
      puStack_108 = &UNK_003ed005;
      puStack_100 = (undefined4 *)func_0x0099bce0();
      uStack_ec = *puStack_100;
      puStack_108 = &UNK_003ed031;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_e8,&UNK_0017a1e0,0x692,1,0,0xffffffff);
      puStack_108 = &UNK_003ed03a;
      uStack_f8 = _ZN7android4base10LogMessage6streamEv(auStack_e8);
      ppuVar19 = (undefined **)&UNK_00162ac9;
      if (ppuVar29 != (undefined **)0x0) {
        ppuVar19 = ppuVar29;
      }
      puStack_108 = &UNK_003ed064;
      _ZN7android4base12StringPrintfEPKcz(&pppppplStack_e0,&UNK_0017ee03,lVar12,ppuVar27,ppuVar19);
      puStack_108 = &UNK_003ed071;
      func_0x0032e5a0(uStack_f8,&pppppplStack_e0);
      if (((ulong)pppppplStack_e0 & 1) != 0) {
        puStack_108 = &UNK_003ed088;
        _ZdaPvSt11align_val_t(uStack_d0,(ulong)pppppplStack_e0 & 0xfffffffffffffffe);
      }
      puStack_108 = &UNK_003ed091;
      _ZN7android4base10LogMessageD2Ev(auStack_e8);
      *puStack_100 = uStack_ec;
    }
  }
  puStack_108 = &UNK_003ecf22;
  ppuVar19 = ppuVar27;
  _Z18init_usb_transportP10atransportP10usb_handle(lVar12);
  if (ppuVar29 != (undefined **)0x0) {
    puStack_108 = &UNK_003ecf33;
    func_0x0032ea60(lVar12 + 0x28);
    ppuVar19 = ppuVar29;
  }
  if (extraout_RDX != (undefined **)0x0) {
    puStack_108 = &UNK_003ecf4a;
    ppuVar19 = extraout_RDX;
    func_0x0032ea60(lVar12 + 0x88);
  }
  ppuVar16 = ppuRam0000000000a006c8;
  puStack_108 = &UNK_003ecf59;
  _ZNSt3__115recursive_mutex4lockEv(ppuRam0000000000a006c8);
  ppuVar29 = ppuRam0000000000a006d0;
  puStack_108 = &UNK_003ecf6a;
  puVar14 = (undefined8 *)_Znwm(0x18);
  puVar14[2] = lVar12;
  *puVar14 = ppuVar29;
  puVar20 = (undefined8 *)ppuVar29[1];
  puVar14[1] = puVar20;
  *puVar20 = puVar14;
  ppuVar29[1] = (undefined *)puVar14;
  ppuVar29[2] = ppuVar29[2] + 1;
  puStack_108 = &UNK_003ecf8f;
  _ZNSt3__115recursive_mutex6unlockEv(ppuVar16);
  pppppplStack_e0 = (long ******)&UNK_0099ee38;
  puStack_108 = &UNK_003ecfaa;
  lStack_d8 = lVar12;
  ppppppplStack_c0 = &pppppplStack_e0;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&pppppplStack_e0);
  ppppppplVar28 = ppppppplStack_c0;
  if (ppppppplStack_c0 == &pppppplStack_e0) {
    lVar13 = 0x20;
code_r0x003ecfc4:
    puStack_108 = &UNK_003ecfca;
    (**(code **)((long)*ppppppplStack_c0 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppppppplStack_c0 != (long *******)0x0) goto code_r0x003ecfc4;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_b0) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_108 = &UNK_003ed0a4;
  func_0x0099bd00();
  ppuVar15 = ppuRam0000000000a006c8;
  ppuStack_110 = ppuVar16;
  puStack_128 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  apuStack_150[0] = &UNK_003ed0dc;
  lStack_120 = lVar12;
  ppppppplStack_118 = &pppppplStack_e0;
  puStack_108 = (undefined *)&puStack_80;
  _ZNSt3__115recursive_mutex4lockEv(ppuRam0000000000a006c8);
  ppppppplVar8 = ppppppplRam0000000000a006d8;
  lStack_130 = 0;
  ppppppplVar23 = (long *******)ppppppplRam0000000000a006d8[1];
  ppppppplStack_140 = (long *******)&ppppppplStack_140;
  ppppppplStack_138 = (long *******)&ppppppplStack_140;
  if (ppppppplVar23 != ppppppplRam0000000000a006d8) {
    do {
      if (((long *******)ppppppplVar23[2][0x2d] == ppppppplVar28) &&
         (*(int *)(ppppppplVar23[2] + 0x22) == 3)) {
        ppuVar19 = (undefined **)CONCAT71((int7)((ulong)ppuVar19 >> 8),1);
        for (ppppppplVar3 = (long *******)ppppppplVar23[1]; ppppppplVar3 != ppppppplVar8;
            ppppppplVar3 = (long *******)ppppppplVar3[1]) {
          if (((long *******)ppppppplVar3[2][0x2d] != ppppppplVar28) ||
             (*(int *)(ppppppplVar3[2] + 0x22) != 3)) {
            ppuVar19 = (undefined **)0x0;
            break;
          }
        }
        if (ppppppplVar23 != ppppppplVar3) {
          ppppppplVar4 = (long *******)*ppppppplVar3;
          if (&ppppppplStack_140 != (long ********)ppppppplVar8) {
            lVar12 = 1;
            for (ppppppplVar5 = ppppppplVar23; ppppppplVar5 != ppppppplVar4;
                ppppppplVar5 = (long *******)ppppppplVar5[1]) {
              lVar12 = lVar12 + 1;
            }
            ppppppplVar8[2] = (long ******)((long)ppppppplVar8[2] - lVar12);
            lStack_130 = lStack_130 + lVar12;
          }
          pppppplVar6 = ppppppplVar4[1];
          (*ppppppplVar23)[1] = (long *****)pppppplVar6;
          *pppppplVar6 = (long *****)*ppppppplVar23;
          ppppppplStack_140[1] = (long ******)ppppppplVar23;
          *ppppppplVar23 = (long ******)ppppppplStack_140;
          ppppppplVar4[1] = (long ******)&ppppppplStack_140;
          ppppppplStack_140 = ppppppplVar4;
        }
        ppppppplVar23 = ppppppplVar3;
        if ((char)ppuVar19 == '\0') goto code_r0x003ed113;
      }
      else {
code_r0x003ed113:
        ppppppplVar23 = (long *******)ppppppplVar23[1];
      }
    } while (ppppppplVar23 != ppppppplVar8);
    if (lStack_130 != 0) {
      pppppplVar6 = ppppppplStack_140[1];
      (*ppppppplStack_138)[1] = (long *****)pppppplVar6;
      *pppppplVar6 = (long *****)*ppppppplStack_138;
      lStack_130 = 0;
      ppppppplVar23 = ppppppplStack_138;
      while ((long ********)ppppppplVar23 != &ppppppplStack_140) {
        ppppppplVar28 = (long *******)ppppppplVar23[1];
        ppuVar19 = (undefined **)0x18;
        apuStack_150[0] = &UNK_003ed22e;
        _ZdaPvSt11align_val_t();
        ppppppplVar23 = ppppppplVar28;
      }
    }
  }
  apuStack_150[0] = &UNK_003ed23e;
  ppuVar16 = ppuVar15;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_128) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  apuStack_150[0] = &UNK_003ed25d;
  func_0x0099bd00();
  ppuStack_170 = ppuVar29;
  ppuStack_178 = ppuVar15;
  puStack_180 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_1e8 = &UNK_003ed290;
  ppuStack_1e0 = ppuVar16;
  ppuStack_168 = ppuVar27;
  ppppppplStack_160 = ppppppplVar28;
  ppppppplStack_158 = (long *******)&ppppppplStack_140;
  apuStack_150[0] = (undefined *)&puStack_108;
  lVar12 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    puStack_1e8 = &UNK_003ed29b;
    ppuVar15 = (undefined **)_Z19fdevent_get_ambientv();
    puStack_1e8 = &UNK_003ed2a3;
    ppuVar16 = (undefined **)_ZN7android4base11GetThreadIdEv();
    ppuVar27 = (undefined **)ppuVar15[1];
    if (ppuVar27 != ppuVar16) {
      do {
        puStack_1e8 = &UNK_003ed882;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1b0,&UNK_0017a1e0,0x6b5,6,0,0xffffffff);
        puStack_1e8 = &UNK_003ed88a;
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_1b0);
        puStack_1e8 = &UNK_003ed89e;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        puStack_1e8 = &UNK_003ed8b2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        puStack_1e8 = &UNK_003ed8c2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_1e8 = &UNK_003ed8d6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015aef8,2);
        puStack_1e8 = &UNK_003ed8e6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_1e8 = &UNK_003ed8fa;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        puStack_1e8 = &UNK_003ed90e;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        puStack_1e8 = &UNK_003ed919;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,ppuVar27);
        puStack_1e8 = &UNK_003ed92d;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        puStack_1e8 = &UNK_003ed938;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,ppuVar16);
        puStack_1e8 = &UNK_003ed948;
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        puStack_1e8 = &UNK_003ed950;
        _ZN7android4base10LogMessageD2Ev(auStack_1b0);
      } while( true );
    }
  }
  puStack_1e8 = &UNK_003ed2c7;
  ppuVar16 = extraout_RDX_00;
  cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (ppuVar19,extraout_RDX_00,&UNK_0018aded,8);
  ppuVar30 = extraout_RDX_00;
  if (cVar9 == '\0') {
code_r0x003ed796:
    if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_180) {
      return *(undefined8 **)(in_FS_OFFSET + 0x28);
    }
code_r0x003ed955:
    puStack_1e8 = &UNK_003ed95a;
    func_0x0099bd00();
  }
  else {
    ppuVar29 = ppuVar19 + 1;
    ppuVar27 = extraout_RDX_00 + -1;
    puStack_1e8 = &UNK_003ed2ee;
    cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (ppuVar29,ppuVar27,&UNK_0015ae2b,8);
    if (cVar9 == '\0') {
      puStack_1e8 = &UNK_003ed3ae;
      cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (ppuVar29,ppuVar27,&UNK_0015f7ad);
      if (cVar9 != '\0') {
        ppuVar19 = (undefined **)((long)ppuVar19 + 0x14);
        ppuVar30 = (undefined **)((long)extraout_RDX_00 + -0x14);
        ppuVar16 = (undefined **)0x3b;
        puStack_1e8 = &UNK_003ed3ca;
        lVar12 = func_0x0099c070(ppuVar19,0x3b,ppuVar30);
        if ((lVar12 == 0) || (lVar12 - (long)ppuVar19 == -1)) {
          if ((undefined **)0xfffffffffffffff6 < ppuVar30) goto code_r0x003ed95a;
          ppuVar27 = ppuStack_1e0 + 0x3a;
          if (ppuVar30 < (undefined **)0x17) {
            auStack_1b0[0] = (char)ppuVar30 * '\x02';
            ppuVar15 = (undefined **)(auStack_1b0 + 1);
          }
          else {
            lVar12 = 0x1a;
            if (((ulong)ppuVar30 | 7) != 0x17) {
              lVar12 = ((ulong)ppuVar30 | 7) + 1;
            }
            puStack_1e8 = &UNK_003ed702;
            ppuVar15 = (undefined **)_Znwm(lVar12);
            ppuVar29 = (undefined **)(lVar12 + 1);
            auStack_1b0 = (undefined1  [8])ppuVar29;
            ppuStack_1a8 = ppuVar30;
            ppuStack_1a0 = ppuVar15;
          }
          puStack_1e8 = &UNK_003ed722;
          func_0x0099bda0(ppuVar15,ppuVar19,ppuVar30);
          *(byte *)((long)ppuVar15 + (long)ppuVar30) = 0;
          ppuVar16 = (undefined **)auStack_1b0;
          puStack_1e8 = &UNK_003ed733;
          ppuVar17 = (undefined **)
                     _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                               (ppuVar27);
          if (ppuVar17 != (undefined **)0x0) {
            puStack_1e8 = &UNK_003ed743;
            func_0x003f1b30(ppuVar27);
            ppuVar16 = ppuVar17;
          }
code_r0x003ed77f:
          if (((ulong)auStack_1b0 & 1) != 0) {
            ppuVar16 = (undefined **)((ulong)auStack_1b0 & 0xfffffffffffffffe);
            puStack_1e8 = &UNK_003ed796;
            _ZdaPvSt11align_val_t(ppuStack_1a0);
          }
        }
        goto code_r0x003ed796;
      }
      if (extraout_RDX_00 == (undefined **)0x14) {
        puStack_1e8 = &UNK_003ed65a;
        iVar11 = func_0x0099bf90(ppuVar29,&UNK_00187ac9,0xc);
        if (iVar11 != 0) goto code_r0x003ed662;
        ppuVar16 = (undefined **)0x0;
        puStack_1e8 = &UNK_003ed7c4;
        cVar9 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar9 == '\0') goto code_r0x003ed796;
        puStack_1e8 = &UNK_003ed7cd;
        ppuVar15 = (undefined **)func_0x0099bce0();
        uVar10 = *(uint *)ppuVar15;
        puStack_1e8 = &UNK_003ed7f9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1b0,&UNK_0017a1e0,0x6d5,1,0,0xffffffff);
        puStack_1e8 = &UNK_003ed801;
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_1b0);
        puStack_1e8 = &UNK_003ed815;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015c8eb,0x13);
        ppuVar16 = (undefined **)&UNK_0015e122;
        ppuVar17 = (undefined **)0x10;
code_r0x003ed6cc:
        ppuVar30 = (undefined **)auStack_1b0;
        ppuVar19 = (undefined **)(ulong)uVar10;
        puStack_1e8 = &UNK_003ed6d1;
        func_0x0032eb30(uVar18,ppuVar16,ppuVar17);
        puStack_1e8 = &UNK_003ed6d9;
        _ZN7android4base10LogMessageD2Ev(ppuVar30);
        *(uint *)ppuVar15 = uVar10;
        goto code_r0x003ed796;
      }
      if (extraout_RDX_00 != (undefined **)0x17) {
code_r0x003ed662:
        ppuVar16 = (undefined **)0x0;
        puStack_1e8 = &UNK_003ed66e;
        cVar9 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
        if (cVar9 == '\0') goto code_r0x003ed796;
        puStack_1e8 = &UNK_003ed67b;
        ppuVar15 = (undefined **)func_0x0099bce0();
        uVar10 = *(uint *)ppuVar15;
        puStack_1e8 = &UNK_003ed6a7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1b0,&UNK_0017a1e0,0x6d7,6,0,0xffffffff);
        puStack_1e8 = &UNK_003ed6af;
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_1b0);
        puStack_1e8 = &UNK_003ed6c3;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016ec72,0x1b);
        ppuVar17 = ppuVar27;
        ppuVar16 = ppuVar29;
        goto code_r0x003ed6cc;
      }
      ppuVar16 = (undefined **)&UNK_00186199;
      puStack_1e8 = &UNK_003ed434;
      iVar11 = func_0x0099bf90(ppuVar29,&UNK_00186199,0xf);
      ppuVar17 = ppuStack_1e0;
      if (iVar11 != 0) goto code_r0x003ed662;
      puVar20 = *(undefined8 **)(in_FS_OFFSET + 0x28);
      if (puVar20 == puStack_180) {
        ppuVar29 = ppuStack_1e0 + 0x3a;
        if (ppuStack_1e0[0x3d] == (undefined *)0x0) {
          return puVar20;
        }
        ppuStack_170 = (undefined **)puVar20;
        puVar14 = (undefined8 *)ppuStack_1e0[0x3c];
        ppuStack_168 = ppuStack_178;
        while (puVar14 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar14;
          if ((*(byte *)(puVar14 + 5) & 1) != 0) {
            ppuStack_178 = (undefined **)&UNK_003f1de0;
            _ZdaPvSt11align_val_t(puVar14[7],puVar14[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar14 + 2) & 1) != 0) {
            ppuStack_178 = (undefined **)&UNK_003f1df8;
            _ZdaPvSt11align_val_t(puVar14[4],puVar14[2] & 0xfffffffffffffffe);
          }
          ppuStack_178 = (undefined **)&UNK_003f1dbd;
          puVar20 = (undefined8 *)_ZdaPvSt11align_val_t(puVar14,0x40);
          puVar14 = puVar7;
        }
        ppuVar17[0x3c] = (undefined *)0x0;
        puVar22 = ppuVar17[0x3b];
        if (puVar22 != (undefined *)0x0) {
          uVar21 = (ulong)((uint)puVar22 & 3);
          if (puVar22 < (undefined *)0x4) {
            uVar25 = 0;
          }
          else {
            uVar25 = 0;
            do {
              *(undefined8 *)(*ppuVar29 + uVar25 * 8) = 0;
              *(undefined8 *)(*ppuVar29 + uVar25 * 8 + 8) = 0;
              *(undefined8 *)(*ppuVar29 + uVar25 * 8 + 0x10) = 0;
              *(undefined8 *)(*ppuVar29 + uVar25 * 8 + 0x18) = 0;
              uVar25 = uVar25 + 4;
            } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar25);
            puVar20 = (undefined8 *)0x0;
            if (uVar21 == 0) goto code_r0x003f1e53;
          }
          do {
            *(undefined8 *)(*ppuVar29 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
            uVar21 = uVar21 - 1;
            puVar20 = (undefined8 *)0x0;
          } while (uVar21 != 0);
        }
code_r0x003f1e53:
        ppuVar17[0x3d] = (undefined *)0x0;
        return puVar20;
      }
      goto code_r0x003ed955;
    }
    ppuVar15 = ppuVar19 + 2;
    ppuVar29 = extraout_RDX_00 + -2;
    puStack_1e8 = &UNK_003ed315;
    uVar10 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                       (ppuVar15,ppuVar29,&UNK_001577e0,9);
    ppuVar27 = (undefined **)(ulong)uVar10;
    cVar9 = (char)uVar10;
    ppuVar30 = (undefined **)((long)extraout_RDX_00 + -0x19);
    ppuVar19 = (undefined **)((long)ppuVar19 + 0x19);
    if (cVar9 == '\0') {
      ppuVar30 = ppuVar29;
      ppuVar19 = ppuVar15;
    }
    ppuVar16 = (undefined **)0x3b;
    puStack_1e8 = &UNK_003ed33a;
    lVar12 = func_0x0099c070(ppuVar19,0x3b,ppuVar30);
    if ((lVar12 == 0) ||
       (ppuVar15 = (undefined **)(lVar12 - (long)ppuVar19),
       ppuVar15 == (undefined **)0xffffffffffffffff)) goto code_r0x003ed796;
    auStack_1b0 = (undefined1  [8])0x0;
    ppuStack_1a8 = (undefined **)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    ppuVar29 = ppuVar15;
    if (ppuVar30 < ppuVar15) {
      ppuVar29 = ppuVar30;
    }
    if (ppuVar29 < (undefined **)0xfffffffffffffff7) {
      cStack_1d1 = cVar9;
      if (ppuVar29 < (undefined **)0x17) {
        auStack_1b0._1_7_ = 0;
        auStack_1b0[0] = (char)ppuVar29 * '\x02';
        ppuVar17 = (undefined **)(auStack_1b0 + 1);
      }
      else {
        lVar12 = 0x1a;
        if (((ulong)ppuVar29 | 7) != 0x17) {
          lVar12 = ((ulong)ppuVar29 | 7) + 1;
        }
        puStack_1e8 = &UNK_003ed491;
        ppuVar17 = (undefined **)_Znwm(lVar12);
        auStack_1b0 = (undefined1  [8])(lVar12 + 1);
        ppuStack_1a8 = ppuVar29;
        ppuStack_1a0 = ppuVar17;
      }
      puStack_1e8 = &UNK_003ed4b1;
      ppuVar16 = ppuVar19;
      func_0x0099bda0(ppuVar17,ppuVar19,ppuVar29);
      ppuVar27 = ppuStack_1e0;
      *(byte *)((long)ppuVar17 + (long)ppuVar29) = 0;
      if (cStack_1d1 != '\0') {
        ppuVar16 = (undefined **)auStack_1b0;
        puStack_1e8 = &UNK_003ed4db;
        lVar12 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                           (ppuStack_1e0 + 0x3a);
        if (lVar12 != 0) {
          ppuVar16 = (undefined **)0x0;
          puStack_1e8 = &UNK_003ed4ec;
          cVar9 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
          if (cVar9 != '\0') {
            puStack_1e8 = &UNK_003ed4f9;
            ppuVar15 = (undefined **)func_0x0099bce0();
            uVar10 = *(uint *)ppuVar15;
            ppuVar19 = (undefined **)(ulong)uVar10;
            ppuVar30 = (undefined **)auStack_1d0;
            puStack_1e8 = &UNK_003ed525;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (ppuVar30,&UNK_0017a1e0,0x6c5,1,0,0xffffffff);
            puStack_1e8 = &UNK_003ed52d;
            uVar18 = _ZN7android4base10LogMessage6streamEv(ppuVar30);
            ppuVar16 = (undefined **)&UNK_0016447f;
            puStack_1e8 = &UNK_003ed541;
            func_0x0032eb30(uVar18,&UNK_0016447f,0x37);
            puStack_1e8 = &UNK_003ed549;
            _ZN7android4base10LogMessageD2Ev(ppuVar30);
            *(uint *)ppuVar15 = uVar10;
          }
          goto code_r0x003ed77f;
        }
      }
      _auStack_1d0 = (undefined **)0x0;
      uStack_1c8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      if (ppuVar30 <= ppuVar15) goto code_r0x003ed95f;
      ppuVar30 = (undefined **)((long)ppuVar30 - (long)((long)ppuVar15 + 1));
      if (ppuVar30 < (undefined **)0xfffffffffffffff7) {
        pbVar26 = (byte *)((long)ppuVar15 + (long)ppuVar19);
        if (ppuVar30 < (undefined **)0x17) {
          _auStack_1d0 = (undefined **)(ulong)(byte)((char)ppuVar30 * '\x02');
          ppuVar19 = (undefined **)(auStack_1d0 + 1);
        }
        else {
          lVar12 = 0x1a;
          if (((ulong)ppuVar30 | 7) != 0x17) {
            lVar12 = ((ulong)ppuVar30 | 7) + 1;
          }
          puStack_1e8 = &UNK_003ed5b4;
          ppuVar19 = (undefined **)_Znwm(lVar12);
          ppuVar29 = (undefined **)(lVar12 + 1);
          _auStack_1d0 = ppuVar29;
          uStack_1c8 = ppuVar30;
          ppuStack_1c0 = ppuVar19;
        }
        puStack_1e8 = &UNK_003ed5d4;
        func_0x0099bd90(ppuVar19,pbVar26 + 1,ppuVar30);
        *(byte *)((long)ppuVar19 + (long)ppuVar30) = 0;
        ppuVar27 = ppuVar27 + 0x3a;
        ppuVar16 = (undefined **)auStack_1b0;
        puStack_1e8 = &UNK_003ed604;
        ppuStack_190 = ppuVar16;
        ppuStack_188 = ppuVar27;
        lVar12 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
                           (&ppuStack_188,ppuVar16,&_ZNSt3__119piecewise_constructE,&ppuStack_190,
                            &uStack_191);
        pbVar26 = (byte *)(lVar12 + 0x28);
        ppuVar15 = (undefined **)((ulong)_auStack_1d0 & 0xff);
        ppuVar17 = ppuVar15;
        if (pbVar26 != auStack_1d0) {
          if ((*pbVar26 & 1) == 0) {
            ppuVar17 = _auStack_1d0;
            if (((ulong)_auStack_1d0 & 1) == 0) {
              *(undefined ***)(lVar12 + 0x38) = ppuStack_1c0;
              *(undefined1 (*) [4])pbVar26 = auStack_1d0;
              *(undefined4 *)(lVar12 + 0x2c) = uStack_1cc;
              *(undefined4 *)(lVar12 + 0x30) = (undefined4)uStack_1c8;
              *(undefined4 *)(lVar12 + 0x34) = uStack_1c8._4_4_;
            }
            else {
              puStack_1e8 = &UNK_003ed839;
              ppuVar16 = ppuStack_1c0;
              func_0x0032e990(pbVar26,ppuStack_1c0,uStack_1c8);
            }
          }
          else {
            ppuVar15 = (undefined **)((ulong)_auStack_1d0 >> 1 & 0x7f);
            ppuVar16 = (undefined **)(auStack_1d0 + 1);
            if (((ulong)_auStack_1d0 & 1) != 0) {
              ppuVar15 = uStack_1c8;
              ppuVar16 = ppuStack_1c0;
            }
            puStack_1e8 = &UNK_003ed765;
            func_0x0032e920(pbVar26,ppuVar16,ppuVar15);
            ppuVar15 = (undefined **)((ulong)_auStack_1d0 & 0xff);
            ppuVar17 = ppuVar15;
          }
        }
        if (((ulong)ppuVar17 & 1) != 0) {
          ppuVar16 = (undefined **)((ulong)_auStack_1d0 & 0xfffffffffffffffe);
          puStack_1e8 = &UNK_003ed77f;
          _ZdaPvSt11align_val_t(ppuStack_1c0);
        }
        goto code_r0x003ed77f;
      }
    }
  }
code_r0x003ed95a:
  puStack_1e8 = &UNK_003ed95f;
  func_0x0032e8f0();
code_r0x003ed95f:
  puVar14 = (undefined8 *)&UNK_001705cc;
  puStack_1e8 = &UNK_003ed96b;
  func_0x0032fc70();
  lStack_218 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar17 = ppuVar16;
  puVar20 = puVar14;
  ppuStack_210 = ppuVar15;
  ppuStack_208 = ppuVar29;
  ppuStack_200 = ppuVar27;
  ppuStack_1f8 = ppuVar30;
  ppuStack_1f0 = ppuVar19;
  puStack_1e8 = (undefined *)apuStack_150;
  lVar12 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    lVar12 = _Z19fdevent_get_ambientv();
    lVar13 = _ZN7android4base11GetThreadIdEv();
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 != lVar13) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_220,&UNK_0017a1e0,0x6dd,6,0,0xffffffff);
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_220);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015aef8,2);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar12);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar13);
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_220);
      } while( true );
    }
  }
  plVar31 = (long *)puVar14[0x3c];
  if (plVar31 != (long *)0x0) {
    if ((*(byte *)ppuVar16 & 1) == 0) {
      puVar22 = (undefined *)(ulong)(*(byte *)ppuVar16 >> 1);
      ppuVar16 = (undefined **)((long)ppuVar16 + 1);
    }
    else {
      puVar22 = ppuVar16[1];
      ppuVar16 = (undefined **)ppuVar16[2];
    }
    do {
      bVar2 = *(byte *)(plVar31 + 5);
      if ((bVar2 & 1) == 0) {
        puVar24 = (undefined *)(ulong)(bVar2 >> 1);
      }
      else {
        puVar24 = (undefined *)plVar31[6];
      }
      if (puVar24 == puVar22) {
        if ((bVar2 & 1) == 0) {
          puVar20 = (undefined8 *)((long)plVar31 + 0x29);
        }
        else {
          puVar20 = (undefined8 *)plVar31[7];
        }
        ppuVar17 = ppuVar16;
        iVar11 = func_0x0099bf90(puVar20,ppuVar16,puVar22);
        if (iVar11 == 0) {
          puVar14 = (undefined8 *)0x1;
          goto code_r0x003eda29;
        }
      }
      plVar31 = (long *)*plVar31;
    } while (plVar31 != (long *)0x0);
  }
  puVar14 = (undefined8 *)0x0;
code_r0x003eda29:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_218) {
    return puVar14;
  }
  func_0x0099bd00();
  if (ppuVar17[0x28] == (undefined *)0x0) {
    *puVar20 = 0;
    puVar20[1] = 0;
    return puVar20;
  }
  uVar21 = (ulong)(((uint)ppuVar17[0x27] & 0xff) << 4);
  lVar12 = *(long *)(*(long *)(ppuVar17[0x24] + ((ulong)ppuVar17[0x27] >> 8) * 8) + 8 + uVar21);
  puVar14 = (undefined8 *)(*(long *)(ppuVar17[0x24] + ((ulong)ppuVar17[0x27] >> 8) * 8) + uVar21);
  uVar18 = puVar14[1];
  *puVar20 = *puVar14;
  puVar20[1] = uVar18;
  if (lVar12 != 0) {
    LOCK();
    plVar31 = (long *)(lVar12 + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  return puVar20;
}


