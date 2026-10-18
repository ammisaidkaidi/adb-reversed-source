// Function: _ZN10atransport19UpdateReverseConfigENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
// Address: 003ed260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8 *
_ZN10atransport19UpdateReverseConfigENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
          (uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *unaff_RBX;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint *unaff_R12;
  uint *unaff_R13;
  long *plVar18;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [8];
  long lStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  undefined *puStack_a0;
  uint *puStack_98;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined1 uStack_49;
  uint *puStack_48;
  uint *puStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_a0 = &UNK_003ed290;
  puStack_98 = param_1;
  lVar6 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar6 + 0x10) == '\x01') {
    puStack_a0 = &UNK_003ed29b;
    unaff_RBX = (uint *)_Z19fdevent_get_ambientv();
    puStack_a0 = &UNK_003ed2a3;
    puVar7 = (uint *)_ZN7android4base11GetThreadIdEv();
    unaff_R13 = *(uint **)(unaff_RBX + 2);
    if (unaff_R13 != puVar7) {
      do {
        puStack_a0 = &UNK_003ed882;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_68,&UNK_0017a1e0,0x6b5,6,0,0xffffffff);
        puStack_a0 = &UNK_003ed88a;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_68);
        puStack_a0 = &UNK_003ed89e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        puStack_a0 = &UNK_003ed8b2;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        puStack_a0 = &UNK_003ed8c2;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_a0 = &UNK_003ed8d6;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        puStack_a0 = &UNK_003ed8e6;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_a0 = &UNK_003ed8fa;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        puStack_a0 = &UNK_003ed90e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        puStack_a0 = &UNK_003ed919;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,unaff_R13);
        puStack_a0 = &UNK_003ed92d;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        puStack_a0 = &UNK_003ed938;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,puVar7);
        puStack_a0 = &UNK_003ed948;
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        puStack_a0 = &UNK_003ed950;
        _ZN7android4base10LogMessageD2Ev(&uStack_68);
      } while( true );
    }
  }
  puStack_a0 = &UNK_003ed2c7;
  puVar7 = param_3;
  cVar3 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_2,param_3,&UNK_0018aded,8);
  if (cVar3 == '\0') {
code_r0x003ed796:
    if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
      return *(undefined8 **)(in_FS_OFFSET + 0x28);
    }
code_r0x003ed955:
    puStack_a0 = &UNK_003ed95a;
    func_0x0099bd00();
  }
  else {
    unaff_R12 = param_2 + 2;
    unaff_R13 = param_3 + -2;
    puStack_a0 = &UNK_003ed2ee;
    cVar3 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (unaff_R12,unaff_R13,&UNK_0015ae2b,8);
    if (cVar3 == '\0') {
      puStack_a0 = &UNK_003ed3ae;
      cVar3 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (unaff_R12,unaff_R13,&UNK_0015f7ad);
      if (cVar3 != '\0') {
        param_2 = param_2 + 5;
        param_3 = param_3 + -5;
        puVar7 = (uint *)0x3b;
        puStack_a0 = &UNK_003ed3ca;
        lVar6 = func_0x0099c070(param_2,0x3b,param_3);
        if ((lVar6 == 0) || (lVar6 - (long)param_2 == -1)) {
          if ((uint *)0xfffffffffffffff6 < param_3) goto code_r0x003ed95a;
          unaff_R13 = puStack_98 + 0x74;
          if (param_3 < (uint *)0x17) {
            uStack_68 = (uint *)CONCAT71(uStack_68._1_7_,(char)param_3 * '\x02');
            unaff_RBX = (uint *)((long)&uStack_68 + 1);
          }
          else {
            lVar6 = 0x1a;
            if (((ulong)param_3 | 7) != 0x17) {
              lVar6 = ((ulong)param_3 | 7) + 1;
            }
            puStack_a0 = &UNK_003ed702;
            unaff_RBX = (uint *)_Znwm(lVar6);
            unaff_R12 = (uint *)(lVar6 + 1);
            uStack_68 = unaff_R12;
            puStack_60 = param_3;
            puStack_58 = unaff_RBX;
          }
          puStack_a0 = &UNK_003ed722;
          func_0x0099bda0(unaff_RBX,param_2,param_3);
          *(byte *)((long)unaff_RBX + (long)param_3) = 0;
          puVar7 = (uint *)&uStack_68;
          puStack_a0 = &UNK_003ed733;
          puVar8 = (uint *)_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                                     (unaff_R13);
          if (puVar8 != (uint *)0x0) {
            puStack_a0 = &UNK_003ed743;
            func_0x003f1b30(unaff_R13);
            puVar7 = puVar8;
          }
code_r0x003ed77f:
          if (((ulong)uStack_68 & 1) != 0) {
            puVar7 = (uint *)((ulong)uStack_68 & 0xfffffffffffffffe);
            puStack_a0 = &UNK_003ed796;
            _ZdaPvSt11align_val_t(puStack_58);
          }
        }
        goto code_r0x003ed796;
      }
      if (param_3 == (uint *)0x14) {
        puStack_a0 = &UNK_003ed65a;
        iVar5 = func_0x0099bf90(unaff_R12,&UNK_00187ac9,0xc);
        if (iVar5 != 0) goto code_r0x003ed662;
        puVar7 = (uint *)0x0;
        puStack_a0 = &UNK_003ed7c4;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar3 == '\0') goto code_r0x003ed796;
        puStack_a0 = &UNK_003ed7cd;
        unaff_RBX = (uint *)func_0x0099bce0();
        uVar4 = *unaff_RBX;
        puStack_a0 = &UNK_003ed7f9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_68,&UNK_0017a1e0,0x6d5,1,0,0xffffffff);
        puStack_a0 = &UNK_003ed801;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_68);
        puStack_a0 = &UNK_003ed815;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015c8eb,0x13);
        puVar7 = (uint *)&UNK_0015e122;
        puVar8 = (uint *)0x10;
code_r0x003ed6cc:
        param_2 = (uint *)(ulong)uVar4;
        param_3 = (uint *)&uStack_68;
        puStack_a0 = &UNK_003ed6d1;
        func_0x0032eb30(uVar9,puVar7,puVar8);
        puStack_a0 = &UNK_003ed6d9;
        _ZN7android4base10LogMessageD2Ev(param_3);
        *unaff_RBX = uVar4;
        goto code_r0x003ed796;
      }
      if (param_3 != (uint *)0x17) {
code_r0x003ed662:
        puVar7 = (uint *)0x0;
        puStack_a0 = &UNK_003ed66e;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
        if (cVar3 == '\0') goto code_r0x003ed796;
        puStack_a0 = &UNK_003ed67b;
        unaff_RBX = (uint *)func_0x0099bce0();
        uVar4 = *unaff_RBX;
        puStack_a0 = &UNK_003ed6a7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_68,&UNK_0017a1e0,0x6d7,6,0,0xffffffff);
        puStack_a0 = &UNK_003ed6af;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_68);
        puStack_a0 = &UNK_003ed6c3;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0016ec72,0x1b);
        puVar8 = unaff_R13;
        puVar7 = unaff_R12;
        goto code_r0x003ed6cc;
      }
      puVar7 = (uint *)&UNK_00186199;
      puStack_a0 = &UNK_003ed434;
      iVar5 = func_0x0099bf90(unaff_R12,&UNK_00186199,0xf);
      puVar8 = puStack_98;
      if (iVar5 != 0) goto code_r0x003ed662;
      puVar12 = *(undefined8 **)(in_FS_OFFSET + 0x28);
      if (puVar12 == puStack_38) {
        puVar7 = puStack_98 + 0x74;
        if (*(long *)(puStack_98 + 0x7a) == 0) {
          return puVar12;
        }
        puVar17 = *(undefined8 **)(puStack_98 + 0x78);
        while (puVar17 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)*puVar17;
          if ((*(byte *)(puVar17 + 5) & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar17[7],puVar17[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar17 + 2) & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
          }
          puVar12 = (undefined8 *)_ZdaPvSt11align_val_t(puVar17,0x40);
          puVar17 = puVar2;
        }
        puVar8[0x78] = 0;
        puVar8[0x79] = 0;
        uVar16 = *(ulong *)(puVar8 + 0x76);
        if (uVar16 != 0) {
          uVar13 = (ulong)((uint)uVar16 & 3);
          if (uVar16 < 4) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            do {
              *(undefined8 *)(*(long *)puVar7 + uVar14 * 8) = 0;
              *(undefined8 *)(*(long *)puVar7 + 8 + uVar14 * 8) = 0;
              *(undefined8 *)(*(long *)puVar7 + 0x10 + uVar14 * 8) = 0;
              *(undefined8 *)(*(long *)puVar7 + 0x18 + uVar14 * 8) = 0;
              uVar14 = uVar14 + 4;
            } while ((uVar16 & 0xfffffffffffffffc) != uVar14);
            puVar12 = (undefined8 *)0x0;
            if (uVar13 == 0) goto code_r0x003f1e53;
          }
          do {
            *(undefined8 *)(*(long *)puVar7 + uVar14 * 8) = 0;
            uVar14 = uVar14 + 1;
            uVar13 = uVar13 - 1;
            puVar12 = (undefined8 *)0x0;
          } while (uVar13 != 0);
        }
code_r0x003f1e53:
        puVar8[0x7a] = 0;
        puVar8[0x7b] = 0;
        return puVar12;
      }
      goto code_r0x003ed955;
    }
    unaff_RBX = param_2 + 4;
    unaff_R12 = param_3 + -4;
    puStack_a0 = &UNK_003ed315;
    uVar4 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (unaff_RBX,unaff_R12,&UNK_001577e0,9);
    unaff_R13 = (uint *)(ulong)uVar4;
    cVar3 = (char)uVar4;
    param_3 = (uint *)((long)param_3 + -0x19);
    param_2 = (uint *)((long)param_2 + 0x19);
    if (cVar3 == '\0') {
      param_3 = unaff_R12;
      param_2 = unaff_RBX;
    }
    puVar7 = (uint *)0x3b;
    puStack_a0 = &UNK_003ed33a;
    lVar6 = func_0x0099c070(param_2,0x3b,param_3);
    if ((lVar6 == 0) ||
       (unaff_RBX = (uint *)(lVar6 - (long)param_2), unaff_RBX == (uint *)0xffffffffffffffff))
    goto code_r0x003ed796;
    uStack_68 = (uint *)0x0;
    puStack_60 = (uint *)0x0;
    puStack_58 = (uint *)0x0;
    unaff_R12 = unaff_RBX;
    if (param_3 < unaff_RBX) {
      unaff_R12 = param_3;
    }
    if (unaff_R12 < (uint *)0xfffffffffffffff7) {
      cStack_89 = cVar3;
      if (unaff_R12 < (uint *)0x17) {
        uStack_68 = (uint *)(ulong)(byte)((char)unaff_R12 * '\x02');
        puVar8 = (uint *)((long)&uStack_68 + 1);
      }
      else {
        lVar6 = 0x1a;
        if (((ulong)unaff_R12 | 7) != 0x17) {
          lVar6 = ((ulong)unaff_R12 | 7) + 1;
        }
        puStack_a0 = &UNK_003ed491;
        puVar8 = (uint *)_Znwm(lVar6);
        uStack_68 = (uint *)(lVar6 + 1);
        puStack_60 = unaff_R12;
        puStack_58 = puVar8;
      }
      puStack_a0 = &UNK_003ed4b1;
      puVar7 = param_2;
      func_0x0099bda0(puVar8,param_2,unaff_R12);
      unaff_R13 = puStack_98;
      *(byte *)((long)puVar8 + (long)unaff_R12) = 0;
      if (cStack_89 != '\0') {
        puVar7 = (uint *)&uStack_68;
        puStack_a0 = &UNK_003ed4db;
        lVar6 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                          (puStack_98 + 0x74);
        if (lVar6 != 0) {
          puVar7 = (uint *)0x0;
          puStack_a0 = &UNK_003ed4ec;
          cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
          if (cVar3 != '\0') {
            puStack_a0 = &UNK_003ed4f9;
            unaff_RBX = (uint *)func_0x0099bce0();
            uVar4 = *unaff_RBX;
            param_2 = (uint *)(ulong)uVar4;
            param_3 = (uint *)&uStack_88;
            puStack_a0 = &UNK_003ed525;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (param_3,&UNK_0017a1e0,0x6c5,1,0,0xffffffff);
            puStack_a0 = &UNK_003ed52d;
            uVar9 = _ZN7android4base10LogMessage6streamEv(param_3);
            puVar7 = (uint *)&UNK_0016447f;
            puStack_a0 = &UNK_003ed541;
            func_0x0032eb30(uVar9,&UNK_0016447f,0x37);
            puStack_a0 = &UNK_003ed549;
            _ZN7android4base10LogMessageD2Ev(param_3);
            *unaff_RBX = uVar4;
          }
          goto code_r0x003ed77f;
        }
      }
      uStack_88 = (uint *)0x0;
      uStack_80 = (uint *)0x0;
      puStack_78 = (uint *)0x0;
      if (param_3 <= unaff_RBX) goto code_r0x003ed95f;
      param_3 = (uint *)((long)param_3 - (long)((long)unaff_RBX + 1));
      if (param_3 < (uint *)0xfffffffffffffff7) {
        pbVar15 = (byte *)((long)unaff_RBX + (long)param_2);
        if (param_3 < (uint *)0x17) {
          uStack_88 = (uint *)(ulong)(byte)((char)param_3 * '\x02');
          param_2 = (uint *)((long)&uStack_88 + 1);
        }
        else {
          lVar6 = 0x1a;
          if (((ulong)param_3 | 7) != 0x17) {
            lVar6 = ((ulong)param_3 | 7) + 1;
          }
          puStack_a0 = &UNK_003ed5b4;
          param_2 = (uint *)_Znwm(lVar6);
          unaff_R12 = (uint *)(lVar6 + 1);
          uStack_88 = unaff_R12;
          uStack_80 = param_3;
          puStack_78 = param_2;
        }
        puStack_a0 = &UNK_003ed5d4;
        func_0x0099bd90(param_2,pbVar15 + 1,param_3);
        *(byte *)((long)param_2 + (long)param_3) = 0;
        unaff_R13 = unaff_R13 + 0x74;
        puVar7 = (uint *)&uStack_68;
        puStack_a0 = &UNK_003ed604;
        puStack_48 = puVar7;
        puStack_40 = unaff_R13;
        lVar6 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
                          (&puStack_40,puVar7,&_ZNSt3__119piecewise_constructE,&puStack_48,
                           &uStack_49);
        puVar10 = (uint *)(lVar6 + 0x28);
        unaff_RBX = (uint *)((ulong)uStack_88 & 0xff);
        puVar8 = unaff_RBX;
        if (puVar10 != (uint *)&uStack_88) {
          if ((*(byte *)puVar10 & 1) == 0) {
            puVar8 = uStack_88;
            if (((ulong)uStack_88 & 1) == 0) {
              *(uint **)(lVar6 + 0x38) = puStack_78;
              *puVar10 = (uint)uStack_88;
              *(undefined4 *)(lVar6 + 0x2c) = uStack_88._4_4_;
              *(undefined4 *)(lVar6 + 0x30) = (undefined4)uStack_80;
              *(undefined4 *)(lVar6 + 0x34) = uStack_80._4_4_;
            }
            else {
              puStack_a0 = &UNK_003ed839;
              puVar7 = puStack_78;
              func_0x0032e990(puVar10,puStack_78,uStack_80);
            }
          }
          else {
            puVar8 = (uint *)((ulong)uStack_88 >> 1 & 0x7f);
            puVar7 = (uint *)((long)&uStack_88 + 1);
            if (((ulong)uStack_88 & 1) != 0) {
              puVar8 = uStack_80;
              puVar7 = puStack_78;
            }
            puStack_a0 = &UNK_003ed765;
            func_0x0032e920(puVar10,puVar7,puVar8);
            unaff_RBX = (uint *)((ulong)uStack_88 & 0xff);
            puVar8 = unaff_RBX;
          }
        }
        if (((ulong)puVar8 & 1) != 0) {
          puVar7 = (uint *)((ulong)uStack_88 & 0xfffffffffffffffe);
          puStack_a0 = &UNK_003ed77f;
          _ZdaPvSt11align_val_t(puStack_78);
        }
        goto code_r0x003ed77f;
      }
    }
  }
code_r0x003ed95a:
  puStack_a0 = &UNK_003ed95f;
  func_0x0032e8f0();
code_r0x003ed95f:
  puVar17 = (undefined8 *)&UNK_001705cc;
  puStack_a0 = &UNK_003ed96b;
  func_0x0032fc70();
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = puVar7;
  puVar12 = puVar17;
  puStack_c8 = unaff_RBX;
  puStack_c0 = unaff_R12;
  puStack_b8 = unaff_R13;
  puStack_b0 = param_3;
  puStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff8;
  lVar6 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar6 + 0x10) == '\x01') {
    lVar6 = _Z19fdevent_get_ambientv();
    lVar11 = _ZN7android4base11GetThreadIdEv();
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 != lVar11) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_d8,&UNK_0017a1e0,0x6dd,6,0,0xffffffff);
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_d8);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar6);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar11);
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_d8);
      } while( true );
    }
  }
  plVar18 = (long *)puVar17[0x3c];
  if (plVar18 != (long *)0x0) {
    if (((byte)*puVar7 & 1) == 0) {
      uVar16 = (ulong)(byte)((byte)*puVar7 >> 1);
      puVar7 = (uint *)((long)puVar7 + 1);
    }
    else {
      uVar16 = *(ulong *)(puVar7 + 2);
      puVar7 = *(uint **)(puVar7 + 4);
    }
    do {
      bVar1 = *(byte *)(plVar18 + 5);
      if ((bVar1 & 1) == 0) {
        uVar13 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar13 = plVar18[6];
      }
      if (uVar13 == uVar16) {
        if ((bVar1 & 1) == 0) {
          puVar12 = (undefined8 *)((long)plVar18 + 0x29);
        }
        else {
          puVar12 = (undefined8 *)plVar18[7];
        }
        puVar8 = puVar7;
        iVar5 = func_0x0099bf90(puVar12,puVar7,uVar16);
        if (iVar5 == 0) {
          puVar17 = (undefined8 *)0x1;
          goto code_r0x003eda29;
        }
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  puVar17 = (undefined8 *)0x0;
code_r0x003eda29:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d0) {
    return puVar17;
  }
  func_0x0099bd00();
  if (*(long *)(puVar8 + 0x50) != 0) {
    lVar6 = *(long *)(*(long *)(puVar8 + 0x48) + (*(ulong *)(puVar8 + 0x4e) >> 8) * 8);
    uVar16 = (ulong)(((uint)*(ulong *)(puVar8 + 0x4e) & 0xff) << 4);
    lVar11 = *(long *)(lVar6 + 8 + uVar16);
    puVar17 = (undefined8 *)(lVar6 + uVar16);
    uVar9 = puVar17[1];
    *puVar12 = *puVar17;
    puVar12[1] = uVar9;
    if (lVar11 != 0) {
      LOCK();
      plVar18 = (long *)(lVar11 + 8);
      *plVar18 = *plVar18 + 1;
      UNLOCK();
    }
    return puVar12;
  }
  *puVar12 = 0;
  puVar12[1] = 0;
  return puVar12;
}


