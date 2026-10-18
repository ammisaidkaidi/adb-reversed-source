// Function: _Z22register_usb_transportP10usb_handlePKcS2_j
// Address: 003ece70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8 *
_Z22register_usb_transportP10usb_handlePKcS2_j
          (uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  ulong uVar23;
  uint *extraout_RDX;
  byte *pbVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  uint *puVar27;
  uint *puVar28;
  long *plVar29;
  long in_FS_OFFSET;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  uint *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  uint *puStack_180;
  uint *puStack_178;
  undefined *puStack_170;
  uint *puStack_168;
  char cStack_159;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined8 uStack_138;
  uint *puStack_130;
  uint *puStack_128;
  undefined1 uStack_119;
  uint *puStack_118;
  uint *puStack_110;
  undefined8 *puStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  undefined *apuStack_d8 [2];
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long *******ppppppplStack_a0;
  uint *puStack_98;
  undefined *puStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  long ******pppppplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *******ppppppplStack_48;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_90 = &UNK_003ecea4;
  lVar11 = _Znwm(0x200);
  pppppplStack_68 = (long ******)0x99ef90;
  puStack_90 = &UNK_003eceda;
  ppppppplStack_48 = &pppppplStack_68;
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (lVar11,0,&pppppplStack_68,(param_4 != 0) * '\x02' + '\x03');
  if (ppppppplStack_48 == &pppppplStack_68) {
    lVar12 = 0x20;
code_r0x003ecef4:
    puStack_90 = &UNK_003ecefa;
    (**(code **)((long)*ppppppplStack_48 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (ppppppplStack_48 != (long *******)0x0) goto code_r0x003ecef4;
  }
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    puStack_90 = &UNK_003ecff8;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_90 = &UNK_003ed005;
      puStack_88 = (undefined4 *)func_0x0099bce0();
      uStack_74 = *puStack_88;
      puStack_90 = &UNK_003ed031;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_0017a1e0,0x692,1,0,0xffffffff);
      puStack_90 = &UNK_003ed03a;
      uStack_80 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      puVar18 = (uint *)&UNK_00162ac9;
      if (param_2 != (uint *)0x0) {
        puVar18 = param_2;
      }
      puStack_90 = &UNK_003ed064;
      _ZN7android4base12StringPrintfEPKcz(&pppppplStack_68,&UNK_0017ee03,lVar11,param_1,puVar18);
      puStack_90 = &UNK_003ed071;
      func_0x0032e5a0(uStack_80,&pppppplStack_68);
      if (((ulong)pppppplStack_68 & 1) != 0) {
        puStack_90 = &UNK_003ed088;
        _ZdaPvSt11align_val_t(uStack_58,(ulong)pppppplStack_68 & 0xfffffffffffffffe);
      }
      puStack_90 = &UNK_003ed091;
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puStack_88 = uStack_74;
    }
  }
  puStack_90 = &UNK_003ecf22;
  puVar18 = param_1;
  _Z18init_usb_transportP10atransportP10usb_handle(lVar11);
  if (param_2 != (uint *)0x0) {
    puStack_90 = &UNK_003ecf33;
    func_0x0032ea60(lVar11 + 0x28);
    puVar18 = param_2;
  }
  if (param_3 != (uint *)0x0) {
    puStack_90 = &UNK_003ecf4a;
    func_0x0032ea60(lVar11 + 0x88);
    puVar18 = param_3;
  }
  puVar15 = puRam0000000000a006c8;
  puStack_90 = &UNK_003ecf59;
  _ZNSt3__115recursive_mutex4lockEv(puRam0000000000a006c8);
  puVar27 = puRam0000000000a006d0;
  puStack_90 = &UNK_003ecf6a;
  puVar13 = (undefined8 *)_Znwm(0x18);
  puVar13[2] = lVar11;
  *puVar13 = puVar27;
  puVar20 = *(undefined8 **)(puVar27 + 2);
  puVar13[1] = puVar20;
  *puVar20 = puVar13;
  *(undefined8 **)(puVar27 + 2) = puVar13;
  *(long *)(puVar27 + 4) = *(long *)(puVar27 + 4) + 1;
  puStack_90 = &UNK_003ecf8f;
  _ZNSt3__115recursive_mutex6unlockEv(puVar15);
  pppppplStack_68 = (long ******)&UNK_0099ee38;
  puStack_90 = &UNK_003ecfaa;
  lStack_60 = lVar11;
  ppppppplStack_48 = &pppppplStack_68;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&pppppplStack_68);
  ppppppplVar26 = ppppppplStack_48;
  if (ppppppplStack_48 == &pppppplStack_68) {
    lVar12 = 0x20;
code_r0x003ecfc4:
    puStack_90 = &UNK_003ecfca;
    (**(code **)((long)*ppppppplStack_48 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (ppppppplStack_48 != (long *******)0x0) goto code_r0x003ecfc4;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_90 = &UNK_003ed0a4;
  func_0x0099bd00();
  puVar14 = puRam0000000000a006c8;
  puStack_98 = puVar15;
  puStack_b0 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  apuStack_d8[0] = &UNK_003ed0dc;
  lStack_a8 = lVar11;
  ppppppplStack_a0 = &pppppplStack_68;
  puStack_90 = &stack0xfffffffffffffff8;
  _ZNSt3__115recursive_mutex4lockEv(puRam0000000000a006c8);
  ppppppplVar7 = ppppppplRam0000000000a006d8;
  lStack_b8 = 0;
  ppppppplVar22 = (long *******)ppppppplRam0000000000a006d8[1];
  ppppppplStack_c8 = (long *******)&ppppppplStack_c8;
  ppppppplStack_c0 = (long *******)&ppppppplStack_c8;
  if (ppppppplVar22 != ppppppplRam0000000000a006d8) {
    do {
      if (((long *******)ppppppplVar22[2][0x2d] == ppppppplVar26) &&
         (*(int *)(ppppppplVar22[2] + 0x22) == 3)) {
        puVar18 = (uint *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
        for (ppppppplVar2 = (long *******)ppppppplVar22[1]; ppppppplVar2 != ppppppplVar7;
            ppppppplVar2 = (long *******)ppppppplVar2[1]) {
          if (((long *******)ppppppplVar2[2][0x2d] != ppppppplVar26) ||
             (*(int *)(ppppppplVar2[2] + 0x22) != 3)) {
            puVar18 = (uint *)0x0;
            break;
          }
        }
        if (ppppppplVar22 != ppppppplVar2) {
          ppppppplVar3 = (long *******)*ppppppplVar2;
          if (&ppppppplStack_c8 != (long ********)ppppppplVar7) {
            lVar11 = 1;
            for (ppppppplVar4 = ppppppplVar22; ppppppplVar4 != ppppppplVar3;
                ppppppplVar4 = (long *******)ppppppplVar4[1]) {
              lVar11 = lVar11 + 1;
            }
            ppppppplVar7[2] = (long ******)((long)ppppppplVar7[2] - lVar11);
            lStack_b8 = lStack_b8 + lVar11;
          }
          pppppplVar5 = ppppppplVar3[1];
          (*ppppppplVar22)[1] = (long *****)pppppplVar5;
          *pppppplVar5 = (long *****)*ppppppplVar22;
          ppppppplStack_c8[1] = (long ******)ppppppplVar22;
          *ppppppplVar22 = (long ******)ppppppplStack_c8;
          ppppppplVar3[1] = (long ******)&ppppppplStack_c8;
          ppppppplStack_c8 = ppppppplVar3;
        }
        ppppppplVar22 = ppppppplVar2;
        if ((char)puVar18 == '\0') goto code_r0x003ed113;
      }
      else {
code_r0x003ed113:
        ppppppplVar22 = (long *******)ppppppplVar22[1];
      }
    } while (ppppppplVar22 != ppppppplVar7);
    if (lStack_b8 != 0) {
      pppppplVar5 = ppppppplStack_c8[1];
      (*ppppppplStack_c0)[1] = (long *****)pppppplVar5;
      *pppppplVar5 = (long *****)*ppppppplStack_c0;
      lStack_b8 = 0;
      ppppppplVar22 = ppppppplStack_c0;
      while ((long ********)ppppppplVar22 != &ppppppplStack_c8) {
        ppppppplVar26 = (long *******)ppppppplVar22[1];
        puVar18 = (uint *)0x18;
        apuStack_d8[0] = &UNK_003ed22e;
        _ZdaPvSt11align_val_t();
        ppppppplVar22 = ppppppplVar26;
      }
    }
  }
  apuStack_d8[0] = &UNK_003ed23e;
  puVar15 = puVar14;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_b0) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  apuStack_d8[0] = &UNK_003ed25d;
  func_0x0099bd00();
  puStack_f8 = puVar27;
  puStack_100 = puVar14;
  puStack_108 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_170 = &UNK_003ed290;
  puStack_168 = puVar15;
  puStack_f0 = param_1;
  ppppppplStack_e8 = ppppppplVar26;
  ppppppplStack_e0 = (long *******)&ppppppplStack_c8;
  apuStack_d8[0] = (undefined *)&puStack_90;
  lVar11 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar11 + 0x10) == '\x01') {
    puStack_170 = &UNK_003ed29b;
    puVar14 = (uint *)_Z19fdevent_get_ambientv();
    puStack_170 = &UNK_003ed2a3;
    puVar15 = (uint *)_ZN7android4base11GetThreadIdEv();
    param_1 = *(uint **)(puVar14 + 2);
    if (param_1 != puVar15) {
      do {
        puStack_170 = &UNK_003ed882;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_138,&UNK_0017a1e0,0x6b5,6,0,0xffffffff);
        puStack_170 = &UNK_003ed88a;
        uVar17 = _ZN7android4base10LogMessage6streamEv(&uStack_138);
        puStack_170 = &UNK_003ed89e;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165d45,0xe);
        puStack_170 = &UNK_003ed8b2;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00162e7f,0x29);
        puStack_170 = &UNK_003ed8c2;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        puStack_170 = &UNK_003ed8d6;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015aef8,2);
        puStack_170 = &UNK_003ed8e6;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        puStack_170 = &UNK_003ed8fa;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00183451,0x1c);
        puStack_170 = &UNK_003ed90e;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0017ed76,0x2c);
        puStack_170 = &UNK_003ed919;
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,param_1);
        puStack_170 = &UNK_003ed92d;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165f20,0x1f);
        puStack_170 = &UNK_003ed938;
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,puVar15);
        puStack_170 = &UNK_003ed948;
        func_0x0032eb30(uVar17,&UNK_0017b788,2);
        puStack_170 = &UNK_003ed950;
        _ZN7android4base10LogMessageD2Ev(&uStack_138);
      } while( true );
    }
  }
  puStack_170 = &UNK_003ed2c7;
  puVar15 = extraout_RDX;
  cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (puVar18,extraout_RDX,&UNK_0018aded,8);
  puVar28 = extraout_RDX;
  if (cVar8 == '\0') {
code_r0x003ed796:
    if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_108) {
      return *(undefined8 **)(in_FS_OFFSET + 0x28);
    }
code_r0x003ed955:
    puStack_170 = &UNK_003ed95a;
    func_0x0099bd00();
  }
  else {
    puVar27 = puVar18 + 2;
    param_1 = extraout_RDX + -2;
    puStack_170 = &UNK_003ed2ee;
    cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (puVar27,param_1,&UNK_0015ae2b,8);
    if (cVar8 == '\0') {
      puStack_170 = &UNK_003ed3ae;
      cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (puVar27,param_1,&UNK_0015f7ad);
      if (cVar8 != '\0') {
        puVar18 = puVar18 + 5;
        puVar28 = extraout_RDX + -5;
        puVar15 = (uint *)0x3b;
        puStack_170 = &UNK_003ed3ca;
        lVar11 = func_0x0099c070(puVar18,0x3b,puVar28);
        if ((lVar11 == 0) || (lVar11 - (long)puVar18 == -1)) {
          if ((uint *)0xfffffffffffffff6 < puVar28) goto code_r0x003ed95a;
          param_1 = puStack_168 + 0x74;
          if (puVar28 < (uint *)0x17) {
            uStack_138 = (uint *)CONCAT71(uStack_138._1_7_,(char)puVar28 * '\x02');
            puVar14 = (uint *)((long)&uStack_138 + 1);
          }
          else {
            lVar11 = 0x1a;
            if (((ulong)puVar28 | 7) != 0x17) {
              lVar11 = ((ulong)puVar28 | 7) + 1;
            }
            puStack_170 = &UNK_003ed702;
            puVar14 = (uint *)_Znwm(lVar11);
            puVar27 = (uint *)(lVar11 + 1);
            uStack_138 = puVar27;
            puStack_130 = puVar28;
            puStack_128 = puVar14;
          }
          puStack_170 = &UNK_003ed722;
          func_0x0099bda0(puVar14,puVar18,puVar28);
          *(byte *)((long)puVar14 + (long)puVar28) = 0;
          puVar15 = (uint *)&uStack_138;
          puStack_170 = &UNK_003ed733;
          puVar16 = (uint *)_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                                      (param_1);
          if (puVar16 != (uint *)0x0) {
            puStack_170 = &UNK_003ed743;
            func_0x003f1b30(param_1);
            puVar15 = puVar16;
          }
code_r0x003ed77f:
          if (((ulong)uStack_138 & 1) != 0) {
            puVar15 = (uint *)((ulong)uStack_138 & 0xfffffffffffffffe);
            puStack_170 = &UNK_003ed796;
            _ZdaPvSt11align_val_t(puStack_128);
          }
        }
        goto code_r0x003ed796;
      }
      if (extraout_RDX == (uint *)0x14) {
        puStack_170 = &UNK_003ed65a;
        iVar10 = func_0x0099bf90(puVar27,&UNK_00187ac9,0xc);
        if (iVar10 != 0) goto code_r0x003ed662;
        puVar15 = (uint *)0x0;
        puStack_170 = &UNK_003ed7c4;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar8 == '\0') goto code_r0x003ed796;
        puStack_170 = &UNK_003ed7cd;
        puVar14 = (uint *)func_0x0099bce0();
        uVar9 = *puVar14;
        puStack_170 = &UNK_003ed7f9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_138,&UNK_0017a1e0,0x6d5,1,0,0xffffffff);
        puStack_170 = &UNK_003ed801;
        uVar17 = _ZN7android4base10LogMessage6streamEv(&uStack_138);
        puStack_170 = &UNK_003ed815;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015c8eb,0x13);
        puVar15 = (uint *)&UNK_0015e122;
        puVar16 = (uint *)0x10;
code_r0x003ed6cc:
        puVar28 = (uint *)&uStack_138;
        puVar18 = (uint *)(ulong)uVar9;
        puStack_170 = &UNK_003ed6d1;
        func_0x0032eb30(uVar17,puVar15,puVar16);
        puStack_170 = &UNK_003ed6d9;
        _ZN7android4base10LogMessageD2Ev(puVar28);
        *puVar14 = uVar9;
        goto code_r0x003ed796;
      }
      if (extraout_RDX != (uint *)0x17) {
code_r0x003ed662:
        puVar15 = (uint *)0x0;
        puStack_170 = &UNK_003ed66e;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
        if (cVar8 == '\0') goto code_r0x003ed796;
        puStack_170 = &UNK_003ed67b;
        puVar14 = (uint *)func_0x0099bce0();
        uVar9 = *puVar14;
        puStack_170 = &UNK_003ed6a7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_138,&UNK_0017a1e0,0x6d7,6,0,0xffffffff);
        puStack_170 = &UNK_003ed6af;
        uVar17 = _ZN7android4base10LogMessage6streamEv(&uStack_138);
        puStack_170 = &UNK_003ed6c3;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0016ec72,0x1b);
        puVar16 = param_1;
        puVar15 = puVar27;
        goto code_r0x003ed6cc;
      }
      puVar15 = (uint *)&UNK_00186199;
      puStack_170 = &UNK_003ed434;
      iVar10 = func_0x0099bf90(puVar27,&UNK_00186199,0xf);
      puVar16 = puStack_168;
      if (iVar10 != 0) goto code_r0x003ed662;
      puVar20 = *(undefined8 **)(in_FS_OFFSET + 0x28);
      if (puVar20 == puStack_108) {
        puVar18 = puStack_168 + 0x74;
        if (*(long *)(puStack_168 + 0x7a) == 0) {
          return puVar20;
        }
        puStack_f8 = (uint *)puVar20;
        puVar13 = *(undefined8 **)(puStack_168 + 0x78);
        puStack_f0 = puStack_100;
        while (puVar13 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar13;
          if ((*(byte *)(puVar13 + 5) & 1) != 0) {
            puStack_100 = (uint *)&UNK_003f1de0;
            _ZdaPvSt11align_val_t(puVar13[7],puVar13[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar13 + 2) & 1) != 0) {
            puStack_100 = (uint *)&UNK_003f1df8;
            _ZdaPvSt11align_val_t(puVar13[4],puVar13[2] & 0xfffffffffffffffe);
          }
          puStack_100 = (uint *)&UNK_003f1dbd;
          puVar20 = (undefined8 *)_ZdaPvSt11align_val_t(puVar13,0x40);
          puVar13 = puVar6;
        }
        puVar16[0x78] = 0;
        puVar16[0x79] = 0;
        uVar25 = *(ulong *)(puVar16 + 0x76);
        if (uVar25 != 0) {
          uVar21 = (ulong)((uint)uVar25 & 3);
          if (uVar25 < 4) {
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            do {
              *(undefined8 *)(*(long *)puVar18 + uVar23 * 8) = 0;
              *(undefined8 *)(*(long *)puVar18 + 8 + uVar23 * 8) = 0;
              *(undefined8 *)(*(long *)puVar18 + 0x10 + uVar23 * 8) = 0;
              *(undefined8 *)(*(long *)puVar18 + 0x18 + uVar23 * 8) = 0;
              uVar23 = uVar23 + 4;
            } while ((uVar25 & 0xfffffffffffffffc) != uVar23);
            puVar20 = (undefined8 *)0x0;
            if (uVar21 == 0) goto code_r0x003f1e53;
          }
          do {
            *(undefined8 *)(*(long *)puVar18 + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
            uVar21 = uVar21 - 1;
            puVar20 = (undefined8 *)0x0;
          } while (uVar21 != 0);
        }
code_r0x003f1e53:
        puVar16[0x7a] = 0;
        puVar16[0x7b] = 0;
        return puVar20;
      }
      goto code_r0x003ed955;
    }
    puVar14 = puVar18 + 4;
    puVar27 = extraout_RDX + -4;
    puStack_170 = &UNK_003ed315;
    uVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (puVar14,puVar27,&UNK_001577e0,9);
    param_1 = (uint *)(ulong)uVar9;
    cVar8 = (char)uVar9;
    puVar28 = (uint *)((long)extraout_RDX + -0x19);
    puVar18 = (uint *)((long)puVar18 + 0x19);
    if (cVar8 == '\0') {
      puVar28 = puVar27;
      puVar18 = puVar14;
    }
    puVar15 = (uint *)0x3b;
    puStack_170 = &UNK_003ed33a;
    lVar11 = func_0x0099c070(puVar18,0x3b,puVar28);
    if ((lVar11 == 0) ||
       (puVar14 = (uint *)(lVar11 - (long)puVar18), puVar14 == (uint *)0xffffffffffffffff))
    goto code_r0x003ed796;
    uStack_138 = (uint *)0x0;
    puStack_130 = (uint *)0x0;
    puStack_128 = (uint *)0x0;
    puVar27 = puVar14;
    if (puVar28 < puVar14) {
      puVar27 = puVar28;
    }
    if (puVar27 < (uint *)0xfffffffffffffff7) {
      cStack_159 = cVar8;
      if (puVar27 < (uint *)0x17) {
        uStack_138 = (uint *)(ulong)(byte)((char)puVar27 * '\x02');
        puVar16 = (uint *)((long)&uStack_138 + 1);
      }
      else {
        lVar11 = 0x1a;
        if (((ulong)puVar27 | 7) != 0x17) {
          lVar11 = ((ulong)puVar27 | 7) + 1;
        }
        puStack_170 = &UNK_003ed491;
        puVar16 = (uint *)_Znwm(lVar11);
        uStack_138 = (uint *)(lVar11 + 1);
        puStack_130 = puVar27;
        puStack_128 = puVar16;
      }
      puStack_170 = &UNK_003ed4b1;
      puVar15 = puVar18;
      func_0x0099bda0(puVar16,puVar18,puVar27);
      param_1 = puStack_168;
      *(byte *)((long)puVar16 + (long)puVar27) = 0;
      if (cStack_159 != '\0') {
        puVar15 = (uint *)&uStack_138;
        puStack_170 = &UNK_003ed4db;
        lVar11 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                           (puStack_168 + 0x74);
        if (lVar11 != 0) {
          puVar15 = (uint *)0x0;
          puStack_170 = &UNK_003ed4ec;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
          if (cVar8 != '\0') {
            puStack_170 = &UNK_003ed4f9;
            puVar14 = (uint *)func_0x0099bce0();
            uVar9 = *puVar14;
            puVar18 = (uint *)(ulong)uVar9;
            puVar28 = (uint *)&uStack_158;
            puStack_170 = &UNK_003ed525;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar28,&UNK_0017a1e0,0x6c5,1,0,0xffffffff);
            puStack_170 = &UNK_003ed52d;
            uVar17 = _ZN7android4base10LogMessage6streamEv(puVar28);
            puVar15 = (uint *)&UNK_0016447f;
            puStack_170 = &UNK_003ed541;
            func_0x0032eb30(uVar17,&UNK_0016447f,0x37);
            puStack_170 = &UNK_003ed549;
            _ZN7android4base10LogMessageD2Ev(puVar28);
            *puVar14 = uVar9;
          }
          goto code_r0x003ed77f;
        }
      }
      uStack_158 = (uint *)0x0;
      uStack_150 = (uint *)0x0;
      puStack_148 = (uint *)0x0;
      if (puVar28 <= puVar14) goto code_r0x003ed95f;
      puVar28 = (uint *)((long)puVar28 - (long)((long)puVar14 + 1));
      if (puVar28 < (uint *)0xfffffffffffffff7) {
        pbVar24 = (byte *)((long)puVar14 + (long)puVar18);
        if (puVar28 < (uint *)0x17) {
          uStack_158 = (uint *)(ulong)(byte)((char)puVar28 * '\x02');
          puVar18 = (uint *)((long)&uStack_158 + 1);
        }
        else {
          lVar11 = 0x1a;
          if (((ulong)puVar28 | 7) != 0x17) {
            lVar11 = ((ulong)puVar28 | 7) + 1;
          }
          puStack_170 = &UNK_003ed5b4;
          puVar18 = (uint *)_Znwm(lVar11);
          puVar27 = (uint *)(lVar11 + 1);
          uStack_158 = puVar27;
          uStack_150 = puVar28;
          puStack_148 = puVar18;
        }
        puStack_170 = &UNK_003ed5d4;
        func_0x0099bd90(puVar18,pbVar24 + 1,puVar28);
        *(byte *)((long)puVar18 + (long)puVar28) = 0;
        param_1 = param_1 + 0x74;
        puVar15 = (uint *)&uStack_138;
        puStack_170 = &UNK_003ed604;
        puStack_118 = puVar15;
        puStack_110 = param_1;
        lVar11 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
                           (&puStack_110,puVar15,&_ZNSt3__119piecewise_constructE,&puStack_118,
                            &uStack_119);
        puVar19 = (uint *)(lVar11 + 0x28);
        puVar14 = (uint *)((ulong)uStack_158 & 0xff);
        puVar16 = puVar14;
        if (puVar19 != (uint *)&uStack_158) {
          if ((*(byte *)puVar19 & 1) == 0) {
            puVar16 = uStack_158;
            if (((ulong)uStack_158 & 1) == 0) {
              *(uint **)(lVar11 + 0x38) = puStack_148;
              *puVar19 = (uint)uStack_158;
              *(undefined4 *)(lVar11 + 0x2c) = uStack_158._4_4_;
              *(undefined4 *)(lVar11 + 0x30) = (undefined4)uStack_150;
              *(undefined4 *)(lVar11 + 0x34) = uStack_150._4_4_;
            }
            else {
              puStack_170 = &UNK_003ed839;
              puVar15 = puStack_148;
              func_0x0032e990(puVar19,puStack_148,uStack_150);
            }
          }
          else {
            puVar14 = (uint *)((ulong)uStack_158 >> 1 & 0x7f);
            puVar15 = (uint *)((long)&uStack_158 + 1);
            if (((ulong)uStack_158 & 1) != 0) {
              puVar14 = uStack_150;
              puVar15 = puStack_148;
            }
            puStack_170 = &UNK_003ed765;
            func_0x0032e920(puVar19,puVar15,puVar14);
            puVar14 = (uint *)((ulong)uStack_158 & 0xff);
            puVar16 = puVar14;
          }
        }
        if (((ulong)puVar16 & 1) != 0) {
          puVar15 = (uint *)((ulong)uStack_158 & 0xfffffffffffffffe);
          puStack_170 = &UNK_003ed77f;
          _ZdaPvSt11align_val_t(puStack_148);
        }
        goto code_r0x003ed77f;
      }
    }
  }
code_r0x003ed95a:
  puStack_170 = &UNK_003ed95f;
  func_0x0032e8f0();
code_r0x003ed95f:
  puVar13 = (undefined8 *)&UNK_001705cc;
  puStack_170 = &UNK_003ed96b;
  func_0x0032fc70();
  lStack_1a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = puVar15;
  puVar20 = puVar13;
  puStack_198 = puVar14;
  puStack_190 = puVar27;
  puStack_188 = param_1;
  puStack_180 = puVar28;
  puStack_178 = puVar18;
  puStack_170 = (undefined *)apuStack_d8;
  lVar11 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar11 + 0x10) == '\x01') {
    lVar11 = _Z19fdevent_get_ambientv();
    lVar12 = _ZN7android4base11GetThreadIdEv();
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 != lVar12) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1a8,&UNK_0017a1e0,0x6dd,6,0,0xffffffff);
        uVar17 = _ZN7android4base10LogMessage6streamEv(auStack_1a8);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165d45,0xe);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00162e7f,0x29);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015aef8,2);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00183451,0x1c);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0017ed76,0x2c);
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,lVar11);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165f20,0x1f);
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,lVar12);
        func_0x0032eb30(uVar17,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_1a8);
      } while( true );
    }
  }
  plVar29 = (long *)puVar13[0x3c];
  if (plVar29 != (long *)0x0) {
    if (((byte)*puVar15 & 1) == 0) {
      uVar25 = (ulong)(byte)((byte)*puVar15 >> 1);
      puVar15 = (uint *)((long)puVar15 + 1);
    }
    else {
      uVar25 = *(ulong *)(puVar15 + 2);
      puVar15 = *(uint **)(puVar15 + 4);
    }
    do {
      bVar1 = *(byte *)(plVar29 + 5);
      if ((bVar1 & 1) == 0) {
        uVar21 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar21 = plVar29[6];
      }
      if (uVar21 == uVar25) {
        if ((bVar1 & 1) == 0) {
          puVar20 = (undefined8 *)((long)plVar29 + 0x29);
        }
        else {
          puVar20 = (undefined8 *)plVar29[7];
        }
        puVar16 = puVar15;
        iVar10 = func_0x0099bf90(puVar20,puVar15,uVar25);
        if (iVar10 == 0) {
          puVar13 = (undefined8 *)0x1;
          goto code_r0x003eda29;
        }
      }
      plVar29 = (long *)*plVar29;
    } while (plVar29 != (long *)0x0);
  }
  puVar13 = (undefined8 *)0x0;
code_r0x003eda29:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1a0) {
    return puVar13;
  }
  func_0x0099bd00();
  if (*(long *)(puVar16 + 0x50) == 0) {
    *puVar20 = 0;
    puVar20[1] = 0;
    return puVar20;
  }
  lVar11 = *(long *)(*(long *)(puVar16 + 0x48) + (*(ulong *)(puVar16 + 0x4e) >> 8) * 8);
  uVar25 = (ulong)(((uint)*(ulong *)(puVar16 + 0x4e) & 0xff) << 4);
  lVar12 = *(long *)(lVar11 + 8 + uVar25);
  puVar13 = (undefined8 *)(lVar11 + uVar25);
  uVar17 = puVar13[1];
  *puVar20 = *puVar13;
  puVar20[1] = uVar17;
  if (lVar12 != 0) {
    LOCK();
    plVar29 = (long *)(lVar12 + 8);
    *plVar29 = *plVar29 + 1;
    UNLOCK();
  }
  return puVar20;
}


