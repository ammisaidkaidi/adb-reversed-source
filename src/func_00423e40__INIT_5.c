// Function: _INIT_5
// Address: 00423e40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _INIT_5(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long in_RAX;
  undefined8 uVar5;
  ulong uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  uint uVar10;
  long ***ppplVar11;
  long ***ppplVar12;
  undefined1 *puVar13;
  long ****pppplVar14;
  ulong uVar15;
  ulong uVar16;
  long ****unaff_R14;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  long ***ppplVar20;
  long in_FS_OFFSET;
  byte bVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_138 [16];
  undefined *puStack_128;
  long ***ppplStack_120;
  undefined *puStack_118;
  long ***ppplStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long **pplStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  long ***ppplStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long ***ppplStack_60;
  long **pplStack_58;
  long **pplStack_50;
  long ***ppplStack_48;
  long **pplStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  
  if (descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto[0] != '\0') {
    return in_RAX;
  }
  descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto[0] = 1;
  if (_ZN6google8protobuf8internal28init_protobuf_defaults_stateE == '\0') {
    puStack_30 = &UNK_0057251f;
    _ZN6google8protobuf8internal24InitProtobufDefaultsSlowEv();
  }
  lVar17 = (long)(int)descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto
                      ._40_4_;
  if (0 < lVar17) {
    lVar18 = 0;
    do {
      if (*(long *)(descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto.
                    _32_8_ + lVar18 * 8) != 0) {
        puStack_30 = &UNK_005724fa;
        _ZN6google8protobuf8internal14AddDescriptorsEPKNS1_15DescriptorTableE();
      }
      lVar18 = lVar18 + 1;
    } while (lVar17 != lVar18);
  }
  pppplVar7 = (long ****)
              (ulong)(uint)descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto
                           ._4_4_;
  puStack_30 = &UNK_00572508;
  _ZN6google8protobuf14DescriptorPool24InternalAddGeneratedFileEPKvi
            (descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto._8_8_);
  puVar13 = descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto;
  puVar19 = descriptor_table_packages_2fmodules_2fadb_2fproto_2fadb_5fknown_5fhosts_2eproto;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppplVar20 = (long ***)puVar19;
  if (cRam0000000000a036c0 == '\0') goto code_r0x0060d408;
  do {
    pppplVar9 = pppplRam0000000000a036b8;
    pppplVar14 = pppplRam0000000000a036b8 + 1;
    ppplVar11 = pppplRam0000000000a036b8[1];
    pplStack_50 = (long **)ppplVar20;
    if (((ulong)ppplVar11 & 0xfe) != 0) {
      unaff_R14 = (long ****)ppplVar20[2];
      puStack_c0 = &UNK_0060d18e;
      ppplStack_90 = (long ***)pppplVar14;
      uVar5 = func_0x0099bcf0(unaff_R14);
      puStack_c0 = &UNK_0060d1a0;
      uVar6 = _ZN4absl12lts_2026052613hash_internal15MixingHashState18combine_contiguousES2_PKhm
                        (strcmp,unaff_R14,uVar5);
      uVar15 = (ulong)ppplVar11 >> 8 & 0xff ^ uVar6;
      uVar16 = ~(-1L << (*(byte *)(pppplVar9 + 1) & 0x3f));
      ppplVar11 = pppplVar9[2];
      ppplStack_60 = (long ***)pppplVar9;
      ppplVar12 = pppplVar9[3];
      bVar21 = (byte)(uVar6 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar23 = pshuflw(auVar22,auVar22,0);
      auVar22._0_8_ = auVar23._0_8_;
      auVar22._8_4_ = auVar23._0_4_;
      auVar22._12_4_ = auVar23._4_4_;
      lVar17 = 0;
      auVar23 = _UNK_00156c50;
      uStack_88 = uVar15;
      while( true ) {
        uVar15 = uVar15 & uVar16;
        auVar26 = *(undefined1 (*) [16])((long)ppplVar11 + uVar15);
        auVar24[0] = -(auVar22[0] == auVar26[0]);
        auVar24[1] = -(auVar22[1] == auVar26[1]);
        auVar24[2] = -(auVar22[2] == auVar26[2]);
        auVar24[3] = -(auVar22[3] == auVar26[3]);
        auVar24[4] = -(auVar22[4] == auVar26[4]);
        auVar24[5] = -(auVar22[5] == auVar26[5]);
        auVar24[6] = -(auVar22[6] == auVar26[6]);
        auVar24[7] = -(auVar22[7] == auVar26[7]);
        auVar24[8] = -(auVar22[8] == auVar26[8]);
        auVar24[9] = -(auVar22[9] == auVar26[9]);
        auVar24[10] = -(auVar22[10] == auVar26[10]);
        auVar24[0xb] = -(auVar22[0xb] == auVar26[0xb]);
        auVar24[0xc] = -(auVar22[0xc] == auVar26[0xc]);
        auVar24[0xd] = -(auVar22[0xd] == auVar26[0xd]);
        auVar24[0xe] = -(auVar22[0xe] == auVar26[0xe]);
        auVar24[0xf] = -(auVar22[0xf] == auVar26[0xf]);
        uVar1 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
        pppplVar9 = (long ****)(ulong)uVar1;
        if (uVar1 != 0) {
          do {
            pplStack_58 = (long **)ppplVar20;
            pplStack_68 = (long **)ppplVar12;
            pplStack_70 = (long **)ppplVar11;
            lStack_78 = lVar17;
            auStack_a8 = auVar26;
            auStack_b8 = auVar22;
            uVar10 = 0;
            uVar4 = (uint)pppplVar9;
            for (uVar2 = uVar4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            puVar19 = (undefined1 *)pplStack_58;
            if ((long **)pplStack_68[uVar10 + uVar15 & uVar16] == pplStack_58)
            goto code_r0x0060d3c1;
            plStack_80 = (long *)pplStack_68[uVar10 + uVar15 & uVar16][2];
            puStack_c0 = &UNK_0060d24b;
            unaff_R14 = (long ****)func_0x0099bcf0();
            puVar19 = (undefined1 *)pplStack_58[2];
            puStack_c0 = &UNK_0060d25e;
            pppplVar7 = (long ****)func_0x0099bcf0(puVar19);
            if (unaff_R14 == pppplVar7) {
              puStack_c0 = &UNK_0060d272;
              iVar3 = func_0x0099bf90(plStack_80,puVar19,unaff_R14);
              if (iVar3 == 0) goto code_r0x0060d3c1;
            }
            uVar4 = uVar4 - 1 & uVar4;
            pppplVar9 = (long ****)(ulong)uVar4;
            ppplVar11 = (long ***)pplStack_70;
            ppplVar12 = (long ***)pplStack_68;
            lVar17 = lStack_78;
            ppplVar20 = (long ***)pplStack_58;
            auVar22 = auStack_b8;
            auVar23 = _UNK_00156c50;
            auVar26 = auStack_a8;
          } while (uVar4 != 0);
        }
        auVar25[0] = -(auVar26[0] == auVar23[0]);
        auVar25[1] = -(auVar26[1] == auVar23[1]);
        auVar25[2] = -(auVar26[2] == auVar23[2]);
        auVar25[3] = -(auVar26[3] == auVar23[3]);
        auVar25[4] = -(auVar26[4] == auVar23[4]);
        auVar25[5] = -(auVar26[5] == auVar23[5]);
        auVar25[6] = -(auVar26[6] == auVar23[6]);
        auVar25[7] = -(auVar26[7] == auVar23[7]);
        auVar25[8] = -(auVar26[8] == auVar23[8]);
        auVar25[9] = -(auVar26[9] == auVar23[9]);
        auVar25[10] = -(auVar26[10] == auVar23[10]);
        auVar25[0xb] = -(auVar26[0xb] == auVar23[0xb]);
        auVar25[0xc] = -(auVar26[0xc] == auVar23[0xc]);
        auVar25[0xd] = -(auVar26[0xd] == auVar23[0xd]);
        auVar25[0xe] = -(auVar26[0xe] == auVar23[0xe]);
        auVar25[0xf] = -(auVar26[0xf] == auVar23[0xf]);
        uVar1 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
        if (uVar1 != 0) break;
        uVar15 = uVar15 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
      pppplVar7 = (long ****)&UNK_009a3b70;
      puStack_c0 = &UNK_0060d304;
      pppplVar14 = (long ****)ppplStack_90;
      lVar17 = _ZN4absl12lts_2026052618container_internal18PrepareInsertLargeERNS1_12CommonFieldsERKNS1_15PolicyFunctionsEmNS1_18NonIterableBitMaskIjLi16ELi0EEENS1_8FindInfoE
                         (ppplStack_90,&UNK_009a3b70,uStack_88,uVar1,uVar15);
      pppplVar8 = (long ****)(ppplStack_60[3] + lVar17);
      pplStack_c8 = (long **)ppplVar20;
      goto code_r0x0060d399;
    }
    if (ppplVar11 < (long ***)0x20000) {
      pppplRam0000000000a036b8[1] = (long ***)((ulong)ppplVar11 | 0x20100);
      pppplVar8 = pppplVar9 + 2;
      pppplVar9 = pppplVar8;
      pppplVar14 = (long ****)puVar13;
      pplStack_c8 = (long **)ppplVar20;
      goto code_r0x0060d399;
    }
    ppplStack_60 = (long ***)pppplRam0000000000a036b8;
    puVar19 = (undefined1 *)ppplVar20;
    pplStack_58 = (long **)ppplVar20;
    if (pppplRam0000000000a036b8[2] != ppplVar20) {
      puVar19 = (undefined1 *)pppplRam0000000000a036b8[2][2];
      puStack_c0 = &UNK_0060d336;
      lVar17 = func_0x0099bcf0(puVar19);
      unaff_R14 = (long ****)pplStack_58[2];
      puStack_c0 = &UNK_0060d349;
      lVar18 = func_0x0099bcf0(unaff_R14);
      if (lVar17 != lVar18) {
code_r0x0060d360:
        pplStack_40 = (long **)&pplStack_50;
        pppplVar7 = (long ****)&UNK_009a3b70;
        puStack_c0 = &UNK_0060d389;
        ppplStack_48 = (long ***)pppplVar14;
        lVar17 = _ZN4absl12lts_2026052618container_internal42GrowSooTableToNextCapacityAndPrepareInsertILm8ELb1EEEmRNS1_12CommonFieldsERKNS1_15PolicyFunctionsENS0_11FunctionRefIFmmEEEb
                           (pppplVar14,&UNK_009a3b70,&ppplStack_48,&UNK_0060e040,0);
        pppplVar8 = (long ****)(ppplStack_60[3] + lVar17);
        pplStack_c8 = pplStack_50;
code_r0x0060d399:
        *pppplVar8 = (long ***)pplStack_c8;
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
          return *(long *)(in_FS_OFFSET + 0x28);
        }
        puStack_c0 = &UNK_0060d485;
        func_0x0099bd00();
        lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
        ppplStack_d8 = (long ***)pppplVar9;
        ppplStack_d0 = (long ***)unaff_R14;
        puStack_c0 = &stack0xfffffffffffffff8;
        if (cRam0000000000a036c0 == '\0') {
          puStack_118 = &UNK_0060d534;
          puStack_c0 = &stack0xfffffffffffffff8;
          iVar3 = __cxa_guard_acquire(0xa036c0);
          if (iVar3 != 0) {
            puStack_118 = &UNK_0060d549;
            pppplVar9 = (long ****)_Znwm(0x78);
            *pppplVar9 = (long ***)&UNK_009a3af8;
            pppplVar9[1] = (long ***)0x1;
            puStack_118 = &UNK_0060d567;
            _ZN6google8protobuf21DynamicMessageFactoryC1Ev(pppplVar9 + 4);
            pppplVar9[0xb] = (long ***)0x0;
            pppplVar9[0xc] = (long ***)0x1;
            *(undefined1 *)(pppplVar9 + 6) = 1;
            puStack_118 = &UNK_0060d58b;
            _ZN6google8protobuf8internal13OnShutdownRunEPFvPKvES3_(&UNK_0060d710,pppplVar9);
            puStack_118 = &UNK_0060d59e;
            pppplRam0000000000a036b8 = pppplVar9;
            __cxa_guard_release(0xa036c0);
          }
        }
        pppplVar9 = pppplRam0000000000a036b8;
        puStack_118 = &UNK_0060d4cc;
        ppplStack_108 = (long ***)pppplVar14;
        _ZNK4absl12lts_202605265Mutex10AssertHeldEv(pppplRam0000000000a036b8 + 0xb);
        pppplVar9 = pppplVar9 + 0xc;
        uStack_100 = 0;
        puStack_f8 = (undefined8 *)0x0;
        uStack_f0 = 0;
        puStack_118 = &UNK_0060d4ef;
        func_0x0060d9d0(&uStack_100,pppplVar9,&ppplStack_108);
        if ((char)uStack_f0 == '\x01') {
          *puStack_f8 = ppplStack_108;
          puStack_f8[1] = pppplVar7;
        }
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
          return *(long *)(in_FS_OFFSET + 0x28);
        }
        puStack_118 = &UNK_0060d5ab;
        func_0x0099bd00();
        puStack_128 = *(undefined **)(in_FS_OFFSET + 0x28);
        ppplStack_120 = (long ***)pppplVar7;
        if (((ulong)*pppplVar9 & 0x2000) == 0) {
          puVar13 = &UNK_001807f5;
          puVar19 = auStack_138;
          puStack_118 = (undefined *)&puStack_c0;
          _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_
                    (puVar19,&UNK_0015bad9,0x1d5);
          goto code_r0x0060d6a0;
        }
        puVar13 = _ZN6google8protobuf15FieldDescriptor17kTypeToCppTypeMapE;
        puStack_118 = (undefined *)&puStack_c0;
        switch(*(undefined4 *)
                (_ZN6google8protobuf15FieldDescriptor17kTypeToCppTypeMapE +
                (ulong)*(byte *)((long)pppplVar9 + 2) * 4)) {
        case 1:
        case 8:
          lVar17 = 0x9ff728;
          break;
        case 2:
          lVar17 = 0x9ff738;
          break;
        case 3:
          lVar17 = 0x9ff730;
          break;
        case 4:
          lVar17 = 0x9ff740;
          break;
        case 5:
          lVar17 = 0x9ff750;
          break;
        case 6:
          lVar17 = 0x9ff748;
          break;
        case 7:
          lVar17 = 0x9ff758;
          break;
        case 9:
          uVar10 = *(byte *)((long)pppplVar9 + 3) & 7;
          puVar13 = (undefined1 *)(ulong)uVar10;
          lVar17 = 0x9ff760;
          if ((uVar10 != 1) && (puStack_118 = (undefined *)&puStack_c0, uVar10 != 3))
          goto code_r0x0060d6b2;
          break;
        case 10:
          lVar17 = 0x9ff768;
          if (((ulong)*pppplVar9 & 0x10000000) == 0) {
            lVar17 = 0x9ff770;
          }
          break;
        default:
          goto code_r0x0060d6e0;
        }
        puVar13 = *(undefined1 **)(in_FS_OFFSET + 0x28);
        puStack_118 = (undefined *)&puStack_c0;
        if (puVar13 != puStack_128) {
          do {
            func_0x0099bd00();
code_r0x0060d6b2:
            if ((int)puVar13 == 2) {
              _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci
                        (auStack_138,&UNK_0015bad9,0x1e6);
              puVar19 = (undefined1 *)
                        _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc
                                  (auStack_138,&UNK_00171104);
            }
            else {
code_r0x0060d6e0:
              _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci
                        (auStack_138,&UNK_0015bad9,499);
              puVar19 = (undefined1 *)
                        _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc
                                  (auStack_138,&UNK_0017df48);
            }
code_r0x0060d6a0:
            _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(puVar19);
            _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev(auStack_138);
          } while( true );
        }
        return lVar17;
      }
      puStack_c0 = &UNK_0060d35c;
      iVar3 = func_0x0099bf90(puVar19,unaff_R14,lVar17);
      if (iVar3 != 0) goto code_r0x0060d360;
    }
code_r0x0060d3c1:
    unaff_R14 = &ppplStack_48;
    puStack_c0 = &UNK_0060d3d9;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(unaff_R14,&UNK_0015bad9,0x160);
    puStack_c0 = &UNK_0060d3e8;
    uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc
                      (unaff_R14,&UNK_00171126);
    pppplVar7 = (long ****)(pplStack_58 + 2);
    puStack_c0 = &UNK_0060d3f8;
    uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIPKcEERS2_RKT_(uVar5);
    puStack_c0 = &UNK_0060d400;
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar5);
    puStack_c0 = &UNK_0060d408;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev(unaff_R14);
code_r0x0060d408:
    puVar13 = (undefined1 *)0xa036c0;
    puStack_c0 = &UNK_0060d414;
    iVar3 = __cxa_guard_acquire();
    ppplVar20 = (long ***)puVar19;
    if (iVar3 != 0) {
      puStack_c0 = &UNK_0060d426;
      unaff_R14 = (long ****)_Znwm(0x78);
      *unaff_R14 = (long ***)&UNK_009a3af8;
      unaff_R14[1] = (long ***)0x1;
      puStack_c0 = &UNK_0060d444;
      _ZN6google8protobuf21DynamicMessageFactoryC1Ev(unaff_R14 + 4);
      unaff_R14[0xb] = (long ***)0x0;
      unaff_R14[0xc] = (long ***)0x1;
      *(undefined1 *)(unaff_R14 + 6) = 1;
      puStack_c0 = &UNK_0060d468;
      pppplVar7 = unaff_R14;
      _ZN6google8protobuf8internal13OnShutdownRunEPFvPKvES3_(&UNK_0060d710);
      puVar13 = (undefined1 *)0xa036c0;
      puStack_c0 = &UNK_0060d47b;
      pppplRam0000000000a036b8 = unaff_R14;
      __cxa_guard_release();
    }
  } while( true );
}


