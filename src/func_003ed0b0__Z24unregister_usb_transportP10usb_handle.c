// Function: _Z24unregister_usb_transportP10usb_handle
// Address: 003ed0b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8 * _Z24unregister_usb_transportP10usb_handle(long *****param_1,uint *param_2)

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
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  ulong uVar21;
  uint *extraout_RDX;
  byte *pbVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint *unaff_R12;
  uint *unaff_R13;
  uint *puVar25;
  long *plVar26;
  long in_FS_OFFSET;
  undefined1 auStack_120 [8];
  long lStack_118;
  uint *puStack_110;
  uint *puStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  undefined *puStack_e8;
  uint *puStack_e0;
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint *puStack_c0;
  undefined8 uStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined1 uStack_91;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  undefined *apuStack_50 [2];
  long *******ppppppplStack_40;
  long *******ppppppplStack_38;
  long lStack_30;
  undefined8 *puStack_28;
  
  puVar12 = puRam0000000000a006c8;
  puStack_28 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  apuStack_50[0] = &UNK_003ed0dc;
  _ZNSt3__115recursive_mutex4lockEv(puRam0000000000a006c8);
  ppppppplVar7 = ppppppplRam0000000000a006d8;
  lStack_30 = 0;
  ppppppplVar20 = (long *******)ppppppplRam0000000000a006d8[1];
  ppppppplStack_40 = (long *******)&ppppppplStack_40;
  ppppppplStack_38 = (long *******)&ppppppplStack_40;
  if (ppppppplVar20 != ppppppplRam0000000000a006d8) {
    do {
      if ((ppppppplVar20[2][0x2d] == param_1) && (*(int *)(ppppppplVar20[2] + 0x22) == 3)) {
        param_2 = (uint *)CONCAT71((int7)((ulong)param_2 >> 8),1);
        for (ppppppplVar2 = (long *******)ppppppplVar20[1]; ppppppplVar2 != ppppppplVar7;
            ppppppplVar2 = (long *******)ppppppplVar2[1]) {
          if ((ppppppplVar2[2][0x2d] != param_1) || (*(int *)(ppppppplVar2[2] + 0x22) != 3)) {
            param_2 = (uint *)0x0;
            break;
          }
        }
        if (ppppppplVar20 != ppppppplVar2) {
          ppppppplVar3 = (long *******)*ppppppplVar2;
          if (&ppppppplStack_40 != (long ********)ppppppplVar7) {
            lVar11 = 1;
            for (ppppppplVar4 = ppppppplVar20; ppppppplVar4 != ppppppplVar3;
                ppppppplVar4 = (long *******)ppppppplVar4[1]) {
              lVar11 = lVar11 + 1;
            }
            ppppppplVar7[2] = (long ******)((long)ppppppplVar7[2] - lVar11);
            lStack_30 = lStack_30 + lVar11;
          }
          pppppplVar5 = ppppppplVar3[1];
          (*ppppppplVar20)[1] = (long *****)pppppplVar5;
          *pppppplVar5 = (long *****)*ppppppplVar20;
          ppppppplStack_40[1] = (long ******)ppppppplVar20;
          *ppppppplVar20 = (long ******)ppppppplStack_40;
          ppppppplVar3[1] = (long ******)&ppppppplStack_40;
          ppppppplStack_40 = ppppppplVar3;
        }
        ppppppplVar20 = ppppppplVar2;
        if ((char)param_2 == '\0') goto code_r0x003ed113;
      }
      else {
code_r0x003ed113:
        ppppppplVar20 = (long *******)ppppppplVar20[1];
      }
    } while (ppppppplVar20 != ppppppplVar7);
    if (lStack_30 != 0) {
      pppppplVar5 = ppppppplStack_40[1];
      (*ppppppplStack_38)[1] = (long *****)pppppplVar5;
      *pppppplVar5 = (long *****)*ppppppplStack_38;
      lStack_30 = 0;
      ppppppplVar20 = ppppppplStack_38;
      while ((long ********)ppppppplVar20 != &ppppppplStack_40) {
        ppppppplVar20 = (long *******)ppppppplVar20[1];
        param_2 = (uint *)0x18;
        apuStack_50[0] = &UNK_003ed22e;
        _ZdaPvSt11align_val_t();
      }
    }
  }
  apuStack_50[0] = &UNK_003ed23e;
  puVar13 = puVar12;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_28) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  apuStack_50[0] = &UNK_003ed25d;
  func_0x0099bd00();
  puStack_78 = puVar12;
  puStack_80 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_e8 = &UNK_003ed290;
  puStack_e0 = puVar13;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  lVar11 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar11 + 0x10) == '\x01') {
    puStack_e8 = &UNK_003ed29b;
    puVar12 = (uint *)_Z19fdevent_get_ambientv();
    puStack_e8 = &UNK_003ed2a3;
    puVar13 = (uint *)_ZN7android4base11GetThreadIdEv();
    unaff_R13 = *(uint **)(puVar12 + 2);
    if (unaff_R13 != puVar13) {
      do {
        puStack_e8 = &UNK_003ed882;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_b0,&UNK_0017a1e0,0x6b5,6,0,0xffffffff);
        puStack_e8 = &UNK_003ed88a;
        uVar15 = _ZN7android4base10LogMessage6streamEv(&uStack_b0);
        puStack_e8 = &UNK_003ed89e;
        uVar15 = func_0x0032eb30(uVar15,&UNK_00165d45,0xe);
        puStack_e8 = &UNK_003ed8b2;
        uVar15 = func_0x0032eb30(uVar15,&UNK_00162e7f,0x29);
        puStack_e8 = &UNK_003ed8c2;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015ae05,1);
        puStack_e8 = &UNK_003ed8d6;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015aef8,2);
        puStack_e8 = &UNK_003ed8e6;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015ae05,1);
        puStack_e8 = &UNK_003ed8fa;
        uVar15 = func_0x0032eb30(uVar15,&UNK_00183451,0x1c);
        puStack_e8 = &UNK_003ed90e;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0017ed76,0x2c);
        puStack_e8 = &UNK_003ed919;
        uVar15 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,unaff_R13);
        puStack_e8 = &UNK_003ed92d;
        uVar15 = func_0x0032eb30(uVar15,&UNK_00165f20,0x1f);
        puStack_e8 = &UNK_003ed938;
        uVar15 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,puVar13);
        puStack_e8 = &UNK_003ed948;
        func_0x0032eb30(uVar15,&UNK_0017b788,2);
        puStack_e8 = &UNK_003ed950;
        _ZN7android4base10LogMessageD2Ev(&uStack_b0);
      } while( true );
    }
  }
  puStack_e8 = &UNK_003ed2c7;
  puVar13 = extraout_RDX;
  cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_2,extraout_RDX,&UNK_0018aded,8);
  puVar25 = extraout_RDX;
  if (cVar8 == '\0') {
code_r0x003ed796:
    if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_80) {
      return *(undefined8 **)(in_FS_OFFSET + 0x28);
    }
code_r0x003ed955:
    puStack_e8 = &UNK_003ed95a;
    func_0x0099bd00();
  }
  else {
    unaff_R12 = param_2 + 2;
    unaff_R13 = extraout_RDX + -2;
    puStack_e8 = &UNK_003ed2ee;
    cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (unaff_R12,unaff_R13,&UNK_0015ae2b,8);
    if (cVar8 == '\0') {
      puStack_e8 = &UNK_003ed3ae;
      cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (unaff_R12,unaff_R13,&UNK_0015f7ad);
      if (cVar8 != '\0') {
        param_2 = param_2 + 5;
        puVar25 = extraout_RDX + -5;
        puVar13 = (uint *)0x3b;
        puStack_e8 = &UNK_003ed3ca;
        lVar11 = func_0x0099c070(param_2,0x3b,puVar25);
        if ((lVar11 == 0) || (lVar11 - (long)param_2 == -1)) {
          if ((uint *)0xfffffffffffffff6 < puVar25) goto code_r0x003ed95a;
          unaff_R13 = puStack_e0 + 0x74;
          if (puVar25 < (uint *)0x17) {
            uStack_b0 = (uint *)CONCAT71(uStack_b0._1_7_,(char)puVar25 * '\x02');
            puVar12 = (uint *)((long)&uStack_b0 + 1);
          }
          else {
            lVar11 = 0x1a;
            if (((ulong)puVar25 | 7) != 0x17) {
              lVar11 = ((ulong)puVar25 | 7) + 1;
            }
            puStack_e8 = &UNK_003ed702;
            puVar12 = (uint *)_Znwm(lVar11);
            unaff_R12 = (uint *)(lVar11 + 1);
            uStack_b0 = unaff_R12;
            puStack_a8 = puVar25;
            puStack_a0 = puVar12;
          }
          puStack_e8 = &UNK_003ed722;
          func_0x0099bda0(puVar12,param_2,puVar25);
          *(byte *)((long)puVar12 + (long)puVar25) = 0;
          puVar13 = (uint *)&uStack_b0;
          puStack_e8 = &UNK_003ed733;
          puVar14 = (uint *)_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                                      (unaff_R13);
          if (puVar14 != (uint *)0x0) {
            puStack_e8 = &UNK_003ed743;
            func_0x003f1b30(unaff_R13);
            puVar13 = puVar14;
          }
code_r0x003ed77f:
          if (((ulong)uStack_b0 & 1) != 0) {
            puVar13 = (uint *)((ulong)uStack_b0 & 0xfffffffffffffffe);
            puStack_e8 = &UNK_003ed796;
            _ZdaPvSt11align_val_t(puStack_a0);
          }
        }
        goto code_r0x003ed796;
      }
      if (extraout_RDX == (uint *)0x14) {
        puStack_e8 = &UNK_003ed65a;
        iVar10 = func_0x0099bf90(unaff_R12,&UNK_00187ac9,0xc);
        if (iVar10 != 0) goto code_r0x003ed662;
        puVar13 = (uint *)0x0;
        puStack_e8 = &UNK_003ed7c4;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar8 == '\0') goto code_r0x003ed796;
        puStack_e8 = &UNK_003ed7cd;
        puVar12 = (uint *)func_0x0099bce0();
        uVar9 = *puVar12;
        puStack_e8 = &UNK_003ed7f9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_b0,&UNK_0017a1e0,0x6d5,1,0,0xffffffff);
        puStack_e8 = &UNK_003ed801;
        uVar15 = _ZN7android4base10LogMessage6streamEv(&uStack_b0);
        puStack_e8 = &UNK_003ed815;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015c8eb,0x13);
        puVar13 = (uint *)&UNK_0015e122;
        puVar14 = (uint *)0x10;
code_r0x003ed6cc:
        puVar25 = (uint *)&uStack_b0;
        param_2 = (uint *)(ulong)uVar9;
        puStack_e8 = &UNK_003ed6d1;
        func_0x0032eb30(uVar15,puVar13,puVar14);
        puStack_e8 = &UNK_003ed6d9;
        _ZN7android4base10LogMessageD2Ev(puVar25);
        *puVar12 = uVar9;
        goto code_r0x003ed796;
      }
      if (extraout_RDX != (uint *)0x17) {
code_r0x003ed662:
        puVar13 = (uint *)0x0;
        puStack_e8 = &UNK_003ed66e;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
        if (cVar8 == '\0') goto code_r0x003ed796;
        puStack_e8 = &UNK_003ed67b;
        puVar12 = (uint *)func_0x0099bce0();
        uVar9 = *puVar12;
        puStack_e8 = &UNK_003ed6a7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_b0,&UNK_0017a1e0,0x6d7,6,0,0xffffffff);
        puStack_e8 = &UNK_003ed6af;
        uVar15 = _ZN7android4base10LogMessage6streamEv(&uStack_b0);
        puStack_e8 = &UNK_003ed6c3;
        uVar15 = func_0x0032eb30(uVar15,&UNK_0016ec72,0x1b);
        puVar14 = unaff_R13;
        puVar13 = unaff_R12;
        goto code_r0x003ed6cc;
      }
      puVar13 = (uint *)&UNK_00186199;
      puStack_e8 = &UNK_003ed434;
      iVar10 = func_0x0099bf90(unaff_R12,&UNK_00186199,0xf);
      puVar14 = puStack_e0;
      if (iVar10 != 0) goto code_r0x003ed662;
      puVar18 = *(undefined8 **)(in_FS_OFFSET + 0x28);
      if (puVar18 == puStack_80) {
        puVar12 = puStack_e0 + 0x74;
        if (*(long *)(puStack_e0 + 0x7a) == 0) {
          return puVar18;
        }
        puVar24 = *(undefined8 **)(puStack_e0 + 0x78);
        while (puVar24 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar24;
          if ((*(byte *)(puVar24 + 5) & 1) != 0) {
            puStack_78 = (uint *)&UNK_003f1de0;
            _ZdaPvSt11align_val_t(puVar24[7],puVar24[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar24 + 2) & 1) != 0) {
            puStack_78 = (uint *)&UNK_003f1df8;
            _ZdaPvSt11align_val_t(puVar24[4],puVar24[2] & 0xfffffffffffffffe);
          }
          puStack_78 = (uint *)&UNK_003f1dbd;
          puVar18 = (undefined8 *)_ZdaPvSt11align_val_t(puVar24,0x40);
          puVar24 = puVar6;
        }
        puVar14[0x78] = 0;
        puVar14[0x79] = 0;
        uVar23 = *(ulong *)(puVar14 + 0x76);
        if (uVar23 != 0) {
          uVar19 = (ulong)((uint)uVar23 & 3);
          if (uVar23 < 4) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            do {
              *(undefined8 *)(*(long *)puVar12 + uVar21 * 8) = 0;
              *(undefined8 *)(*(long *)puVar12 + 8 + uVar21 * 8) = 0;
              *(undefined8 *)(*(long *)puVar12 + 0x10 + uVar21 * 8) = 0;
              *(undefined8 *)(*(long *)puVar12 + 0x18 + uVar21 * 8) = 0;
              uVar21 = uVar21 + 4;
            } while ((uVar23 & 0xfffffffffffffffc) != uVar21);
            puVar18 = (undefined8 *)0x0;
            if (uVar19 == 0) goto code_r0x003f1e53;
          }
          do {
            *(undefined8 *)(*(long *)puVar12 + uVar21 * 8) = 0;
            uVar21 = uVar21 + 1;
            uVar19 = uVar19 - 1;
            puVar18 = (undefined8 *)0x0;
          } while (uVar19 != 0);
        }
code_r0x003f1e53:
        puVar14[0x7a] = 0;
        puVar14[0x7b] = 0;
        return puVar18;
      }
      goto code_r0x003ed955;
    }
    puVar12 = param_2 + 4;
    unaff_R12 = extraout_RDX + -4;
    puStack_e8 = &UNK_003ed315;
    uVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (puVar12,unaff_R12,&UNK_001577e0,9);
    unaff_R13 = (uint *)(ulong)uVar9;
    cVar8 = (char)uVar9;
    puVar25 = (uint *)((long)extraout_RDX + -0x19);
    param_2 = (uint *)((long)param_2 + 0x19);
    if (cVar8 == '\0') {
      puVar25 = unaff_R12;
      param_2 = puVar12;
    }
    puVar13 = (uint *)0x3b;
    puStack_e8 = &UNK_003ed33a;
    lVar11 = func_0x0099c070(param_2,0x3b,puVar25);
    if ((lVar11 == 0) ||
       (puVar12 = (uint *)(lVar11 - (long)param_2), puVar12 == (uint *)0xffffffffffffffff))
    goto code_r0x003ed796;
    uStack_b0 = (uint *)0x0;
    puStack_a8 = (uint *)0x0;
    puStack_a0 = (uint *)0x0;
    unaff_R12 = puVar12;
    if (puVar25 < puVar12) {
      unaff_R12 = puVar25;
    }
    if (unaff_R12 < (uint *)0xfffffffffffffff7) {
      cStack_d1 = cVar8;
      if (unaff_R12 < (uint *)0x17) {
        uStack_b0 = (uint *)(ulong)(byte)((char)unaff_R12 * '\x02');
        puVar14 = (uint *)((long)&uStack_b0 + 1);
      }
      else {
        lVar11 = 0x1a;
        if (((ulong)unaff_R12 | 7) != 0x17) {
          lVar11 = ((ulong)unaff_R12 | 7) + 1;
        }
        puStack_e8 = &UNK_003ed491;
        puVar14 = (uint *)_Znwm(lVar11);
        uStack_b0 = (uint *)(lVar11 + 1);
        puStack_a8 = unaff_R12;
        puStack_a0 = puVar14;
      }
      puStack_e8 = &UNK_003ed4b1;
      puVar13 = param_2;
      func_0x0099bda0(puVar14,param_2,unaff_R12);
      unaff_R13 = puStack_e0;
      *(byte *)((long)puVar14 + (long)unaff_R12) = 0;
      if (cStack_d1 != '\0') {
        puVar13 = (uint *)&uStack_b0;
        puStack_e8 = &UNK_003ed4db;
        lVar11 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                           (puStack_e0 + 0x74);
        if (lVar11 != 0) {
          puVar13 = (uint *)0x0;
          puStack_e8 = &UNK_003ed4ec;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
          if (cVar8 != '\0') {
            puStack_e8 = &UNK_003ed4f9;
            puVar12 = (uint *)func_0x0099bce0();
            uVar9 = *puVar12;
            param_2 = (uint *)(ulong)uVar9;
            puVar25 = (uint *)&uStack_d0;
            puStack_e8 = &UNK_003ed525;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar25,&UNK_0017a1e0,0x6c5,1,0,0xffffffff);
            puStack_e8 = &UNK_003ed52d;
            uVar15 = _ZN7android4base10LogMessage6streamEv(puVar25);
            puVar13 = (uint *)&UNK_0016447f;
            puStack_e8 = &UNK_003ed541;
            func_0x0032eb30(uVar15,&UNK_0016447f,0x37);
            puStack_e8 = &UNK_003ed549;
            _ZN7android4base10LogMessageD2Ev(puVar25);
            *puVar12 = uVar9;
          }
          goto code_r0x003ed77f;
        }
      }
      uStack_d0 = (uint *)0x0;
      uStack_c8 = (uint *)0x0;
      puStack_c0 = (uint *)0x0;
      if (puVar25 <= puVar12) goto code_r0x003ed95f;
      puVar25 = (uint *)((long)puVar25 - (long)((long)puVar12 + 1));
      if (puVar25 < (uint *)0xfffffffffffffff7) {
        pbVar22 = (byte *)((long)puVar12 + (long)param_2);
        if (puVar25 < (uint *)0x17) {
          uStack_d0 = (uint *)(ulong)(byte)((char)puVar25 * '\x02');
          param_2 = (uint *)((long)&uStack_d0 + 1);
        }
        else {
          lVar11 = 0x1a;
          if (((ulong)puVar25 | 7) != 0x17) {
            lVar11 = ((ulong)puVar25 | 7) + 1;
          }
          puStack_e8 = &UNK_003ed5b4;
          param_2 = (uint *)_Znwm(lVar11);
          unaff_R12 = (uint *)(lVar11 + 1);
          uStack_d0 = unaff_R12;
          uStack_c8 = puVar25;
          puStack_c0 = param_2;
        }
        puStack_e8 = &UNK_003ed5d4;
        func_0x0099bd90(param_2,pbVar22 + 1,puVar25);
        *(byte *)((long)param_2 + (long)puVar25) = 0;
        unaff_R13 = unaff_R13 + 0x74;
        puVar13 = (uint *)&uStack_b0;
        puStack_e8 = &UNK_003ed604;
        puStack_90 = puVar13;
        puStack_88 = unaff_R13;
        lVar11 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
                           (&puStack_88,puVar13,&_ZNSt3__119piecewise_constructE,&puStack_90,
                            &uStack_91);
        puVar16 = (uint *)(lVar11 + 0x28);
        puVar12 = (uint *)((ulong)uStack_d0 & 0xff);
        puVar14 = puVar12;
        if (puVar16 != (uint *)&uStack_d0) {
          if ((*(byte *)puVar16 & 1) == 0) {
            puVar14 = uStack_d0;
            if (((ulong)uStack_d0 & 1) == 0) {
              *(uint **)(lVar11 + 0x38) = puStack_c0;
              *puVar16 = (uint)uStack_d0;
              *(undefined4 *)(lVar11 + 0x2c) = uStack_d0._4_4_;
              *(undefined4 *)(lVar11 + 0x30) = (undefined4)uStack_c8;
              *(undefined4 *)(lVar11 + 0x34) = uStack_c8._4_4_;
            }
            else {
              puStack_e8 = &UNK_003ed839;
              puVar13 = puStack_c0;
              func_0x0032e990(puVar16,puStack_c0,uStack_c8);
            }
          }
          else {
            puVar12 = (uint *)((ulong)uStack_d0 >> 1 & 0x7f);
            puVar13 = (uint *)((long)&uStack_d0 + 1);
            if (((ulong)uStack_d0 & 1) != 0) {
              puVar12 = uStack_c8;
              puVar13 = puStack_c0;
            }
            puStack_e8 = &UNK_003ed765;
            func_0x0032e920(puVar16,puVar13,puVar12);
            puVar12 = (uint *)((ulong)uStack_d0 & 0xff);
            puVar14 = puVar12;
          }
        }
        if (((ulong)puVar14 & 1) != 0) {
          puVar13 = (uint *)((ulong)uStack_d0 & 0xfffffffffffffffe);
          puStack_e8 = &UNK_003ed77f;
          _ZdaPvSt11align_val_t(puStack_c0);
        }
        goto code_r0x003ed77f;
      }
    }
  }
code_r0x003ed95a:
  puStack_e8 = &UNK_003ed95f;
  func_0x0032e8f0();
code_r0x003ed95f:
  puVar24 = (undefined8 *)&UNK_001705cc;
  puStack_e8 = &UNK_003ed96b;
  func_0x0032fc70();
  lStack_118 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = puVar13;
  puVar18 = puVar24;
  puStack_110 = puVar12;
  puStack_108 = unaff_R12;
  puStack_100 = unaff_R13;
  puStack_f8 = puVar25;
  puStack_f0 = param_2;
  puStack_e8 = (undefined *)apuStack_50;
  lVar11 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar11 + 0x10) == '\x01') {
    lVar11 = _Z19fdevent_get_ambientv();
    lVar17 = _ZN7android4base11GetThreadIdEv();
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 != lVar17) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_120,&UNK_0017a1e0,0x6dd,6,0,0xffffffff);
        uVar15 = _ZN7android4base10LogMessage6streamEv(auStack_120);
        uVar15 = func_0x0032eb30(uVar15,&UNK_00165d45,0xe);
        uVar15 = func_0x0032eb30(uVar15,&UNK_00162e7f,0x29);
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015ae05,1);
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015aef8,2);
        uVar15 = func_0x0032eb30(uVar15,&UNK_0015ae05,1);
        uVar15 = func_0x0032eb30(uVar15,&UNK_00183451,0x1c);
        uVar15 = func_0x0032eb30(uVar15,&UNK_0017ed76,0x2c);
        uVar15 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,lVar11);
        uVar15 = func_0x0032eb30(uVar15,&UNK_00165f20,0x1f);
        uVar15 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,lVar17);
        func_0x0032eb30(uVar15,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_120);
      } while( true );
    }
  }
  plVar26 = (long *)puVar24[0x3c];
  if (plVar26 != (long *)0x0) {
    if (((byte)*puVar13 & 1) == 0) {
      uVar23 = (ulong)(byte)((byte)*puVar13 >> 1);
      puVar13 = (uint *)((long)puVar13 + 1);
    }
    else {
      uVar23 = *(ulong *)(puVar13 + 2);
      puVar13 = *(uint **)(puVar13 + 4);
    }
    do {
      bVar1 = *(byte *)(plVar26 + 5);
      if ((bVar1 & 1) == 0) {
        uVar19 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar19 = plVar26[6];
      }
      if (uVar19 == uVar23) {
        if ((bVar1 & 1) == 0) {
          puVar18 = (undefined8 *)((long)plVar26 + 0x29);
        }
        else {
          puVar18 = (undefined8 *)plVar26[7];
        }
        puVar14 = puVar13;
        iVar10 = func_0x0099bf90(puVar18,puVar13,uVar23);
        if (iVar10 == 0) {
          puVar24 = (undefined8 *)0x1;
          goto code_r0x003eda29;
        }
      }
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
  }
  puVar24 = (undefined8 *)0x0;
code_r0x003eda29:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_118) {
    return puVar24;
  }
  func_0x0099bd00();
  if (*(long *)(puVar14 + 0x50) == 0) {
    *puVar18 = 0;
    puVar18[1] = 0;
    return puVar18;
  }
  lVar11 = *(long *)(*(long *)(puVar14 + 0x48) + (*(ulong *)(puVar14 + 0x4e) >> 8) * 8);
  uVar23 = (ulong)(((uint)*(ulong *)(puVar14 + 0x4e) & 0xff) << 4);
  lVar17 = *(long *)(lVar11 + 8 + uVar23);
  puVar24 = (undefined8 *)(lVar11 + uVar23);
  uVar15 = puVar24[1];
  *puVar18 = *puVar24;
  puVar18[1] = uVar15;
  if (lVar17 != 0) {
    LOCK();
    plVar26 = (long *)(lVar17 + 8);
    *plVar26 = *plVar26 + 1;
    UNLOCK();
  }
  return puVar18;
}


