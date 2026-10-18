// Function: _ZNK3adb5proto12MdnsServices11GetMetadataEv
// Address: 00420ec0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x0054d266) */
/* WARNING: Removing unreachable block (ram,0x0054d268) */
/* WARNING: Removing unreachable block (ram,0x0054d286) */
/* WARNING: Type propagation algorithm not settling */

uint ******* _ZNK3adb5proto12MdnsServices11GetMetadataEv(undefined8 param_1,uint *******param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  undefined8 uVar10;
  uint *******pppppppuVar11;
  uint *****pppppuVar12;
  ulong uVar13;
  uint ******ppppppuVar14;
  uint uVar15;
  uint uVar16;
  uint *******pppppppuVar17;
  uint uVar18;
  uint *******extraout_RDX;
  undefined8 extraout_RDX_00;
  uint *******extraout_RDX_01;
  uint *******extraout_RDX_02;
  ulong uVar19;
  uint *******extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long lVar20;
  uint ******ppppppuVar21;
  code **ppcVar22;
  uint *******pppppppuVar23;
  uint *******pppppppuVar24;
  uint *******pppppppuVar25;
  byte *pbVar26;
  long lVar27;
  uint *******pppppppuVar28;
  uint *******pppppppuVar29;
  byte *pbVar30;
  uint *******pppppppuVar31;
  long in_FS_OFFSET;
  undefined1 auVar32 [16];
  uint ******ppppppuStack_210;
  uint *******pppppppuStack_208;
  uint *******pppppppuStack_200;
  uint *******pppppppuStack_1f8;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  code *pcStack_1e0;
  uint *******pppppppuStack_1d8;
  long lStack_1d0;
  uint *******pppppppuStack_1c8;
  uint ******ppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint ******ppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint *******pppppppuStack_1a0;
  uint ******ppppppuStack_198;
  undefined8 uStack_190;
  uint ******ppppppuStack_148;
  uint ******ppppppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  uint *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_b0;
  uint ******ppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_90;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_78;
  uint ******ppppppuStack_70;
  uint *******pppppppuStack_68;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_58;
  undefined *puStack_30;
  uint *******pppppppuStack_28;
  long lStack_20;
  
  pppppppuVar7 = (uint *******)_ZNK3adb5proto12MdnsServices12GetClassDataEv();
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_58 = (uint *******)pppppppuVar7[10];
  if (pppppppuStack_58 != (uint *******)0x0) {
    if (pppppppuVar7[0xc] != (uint ******)0x0) {
      puStack_30 = &UNK_0060c9e1;
      (*(code *)pppppppuVar7[0xc])();
    }
    pppppppuStack_28 = pppppppuStack_58;
    if (*(int *)pppppppuStack_58[3] != 0xdd) {
      param_2 = (uint *******)&pppppppuStack_28;
      puStack_30 = &UNK_0060c9f5;
      func_0x0060e080(pppppppuStack_58[3]);
      pppppppuStack_58 = pppppppuVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return (uint *******)pppppppuVar7[9];
  }
  puStack_30 = &UNK_0060c9ff;
  func_0x0099bd00();
  ppppppuVar21 = (uint ******)&uStack_c0;
  pppppppuStack_60 = *(uint ********)(in_FS_OFFSET + 0x28);
  puStack_c8 = &UNK_00627e5d;
  pppppppuStack_b0 = param_2;
  puStack_30 = &stack0xfffffffffffffff8;
  pppppppuVar8 = (uint *******)_ZNK6google8protobuf7Message11GetMetadataEv();
  puStack_c8 = &UNK_00627e68;
  _ZNK6google8protobuf7Message11GetMetadataEv(pppppppuVar7);
  pppppppuStack_a0 = (uint *******)0x0;
  pppppppuStack_98 = (uint *******)0x0;
  pppppppuStack_90 = (uint *******)0x0;
  uStack_c0 = extraout_RDX_00;
  pppppppuStack_b8 = extraout_RDX;
  if (*(char *)((long)pppppppuVar8[5] + 0x3b) == '\x01') {
    pppppppuVar9 = pppppppuStack_b0;
    pppppppuVar23 = extraout_RDX;
    pppppppuVar11 = pppppppuStack_a0;
    pppppppuVar25 = pppppppuStack_98;
    if (0 < (int)*(uint *)(pppppppuVar8 + 1)) {
      lVar27 = 0;
      lVar20 = 0;
      do {
        pppppppuStack_68 = (uint *******)&pppppppuStack_a0;
        ppppppuStack_a8 = (uint ******)((long)pppppppuVar8[8] + lVar27);
        ppppppuStack_70 = (uint ******)&ppppppuStack_a8;
        pppppppuStack_80 = pppppppuStack_98;
        pppppppuStack_78 = (uint *******)&pppppppuStack_80;
        if (pppppppuStack_98 < pppppppuStack_90) {
          *pppppppuStack_98 = ppppppuStack_a8;
          pppppppuVar25 = pppppppuStack_98 + 1;
        }
        else {
          puStack_c8 = &UNK_00627f0a;
          _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&pppppppuStack_78);
          pppppppuVar9 = pppppppuStack_b0;
          pppppppuVar25 = pppppppuStack_80;
        }
        lVar20 = lVar20 + 1;
        lVar27 = lVar27 + 0x58;
        pppppppuStack_98 = pppppppuVar25;
        pppppppuVar23 = pppppppuStack_b8;
        pppppppuVar11 = pppppppuStack_a0;
      } while (lVar20 < (int)*(uint *)(pppppppuVar8 + 1));
    }
  }
  else {
    puStack_c8 = &UNK_00627f35;
    _ZNK6google8protobuf10Reflection10ListFieldsERKNS0_7MessageEPNSt3__16vectorIPKNS0_15FieldDescriptorENS5_9allocatorIS9_EEEE
              (extraout_RDX_00,pppppppuVar7,&pppppppuStack_a0);
    pppppppuVar9 = pppppppuStack_b0;
    pppppppuVar23 = pppppppuStack_b8;
    pppppppuVar11 = pppppppuStack_a0;
    pppppppuVar25 = pppppppuStack_98;
  }
  for (; pppppppuVar17 = pppppppuStack_98, pppppppuVar24 = pppppppuStack_b8,
      pppppppuStack_b8 = pppppppuVar23, pppppppuVar11 != pppppppuStack_98;
      pppppppuVar11 = pppppppuVar11 + 1) {
    puStack_c8 = &UNK_00627f71;
    pppppppuStack_98 = pppppppuVar25;
    pppppppuVar9 = (uint *******)
                   _ZN6google8protobuf8internal10WireFormat22InternalSerializeFieldEPKNS0_15FieldDescriptorERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
                             (*pppppppuVar11,pppppppuVar7,pppppppuVar9,pppppppuVar24);
    pppppppuVar23 = pppppppuStack_b8;
    pppppppuVar25 = pppppppuStack_98;
    pppppppuStack_98 = pppppppuVar17;
    pppppppuStack_b8 = pppppppuVar24;
  }
  bVar3 = *(byte *)(pppppppuVar8[5] + 7);
  puStack_c8 = &UNK_00627f9d;
  pppppppuStack_98 = pppppppuVar25;
  uVar10 = _ZNK6google8protobuf10Reflection16GetUnknownFieldsERKNS0_7MessageE
                     (uStack_c0,pppppppuVar7);
  pppppppuVar23 = pppppppuVar9;
  if (bVar3 == 0) {
    puStack_c8 = &UNK_00627fb6;
    pppppppuVar11 =
         (uint *******)
         _ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                   (uVar10,pppppppuVar9,pppppppuVar24);
  }
  else {
    puStack_c8 = &UNK_00627faf;
    pppppppuVar11 =
         (uint *******)
         _ZN6google8protobuf8internal10WireFormat46InternalSerializeUnknownMessageSetItemsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                   ();
  }
  pppppppuStack_f0 = (uint *******)(ulong)bVar3;
  pppppppuVar25 = pppppppuStack_a0;
  if (pppppppuStack_a0 != (uint *******)0x0) {
    pppppppuStack_98 = pppppppuStack_a0;
    pppppppuVar23 = (uint *******)((long)pppppppuStack_90 - (long)pppppppuStack_a0);
    puStack_c8 = &UNK_00627fd2;
    _ZdaPvSt11align_val_t();
    pppppppuStack_f0 = pppppppuVar11;
  }
  pppppppuVar17 = *(uint ********)(in_FS_OFFSET + 0x28);
  if (pppppppuVar17 == pppppppuStack_60) {
    return pppppppuVar11;
  }
  puStack_c8 = &UNK_00627ff8;
  func_0x0099bd00();
  pppppppuStack_e8 = pppppppuVar24;
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_1e0 = (code *)&UNK_00628035;
  pppppppuVar11 = pppppppuVar17;
  pppppppuStack_e0 = pppppppuVar9;
  pppppppuStack_d8 = pppppppuVar7;
  pppppppuStack_d0 = pppppppuVar8;
  puStack_c8 = (undefined *)&puStack_30;
  _ZNK6google8protobuf7Message11GetMetadataEv(pppppppuVar23);
  bVar3 = *(byte *)((long)pppppppuVar25 + 1);
  pppppppuVar7 = extraout_RDX_01;
  if (((((bVar3 & 8) != 0) &&
       (pppppppuVar11 = (uint *******)pppppppuVar25[4][5], *(char *)(pppppppuVar11 + 7) == '\x01'))
      && ((bVar3 & 0x20) == 0)) &&
     (pppppppuVar11 = (uint *******)(ulong)*(byte *)((long)pppppppuVar25 + 2),
     *(int *)(_ZN6google8protobuf15FieldDescriptor17kTypeToCppTypeMapE + (long)pppppppuVar11 * 4) ==
     10)) {
    auVar32._8_8_ = extraout_RDX_01;
    auVar32._0_8_ = *(long *)(in_FS_OFFSET + 0x28);
    pppppppuVar8 = pppppppuStack_f0;
    ppcVar22 = (code **)puStack_c8;
    pppppppuVar24 = pppppppuStack_e8;
    pppppppuVar28 = pppppppuStack_e0;
    pppppppuVar29 = pppppppuStack_d8;
    pppppppuVar31 = pppppppuStack_d0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8)
    goto 
    _ZN6google8protobuf8internal10WireFormat31InternalSerializeMessageSetItemEPKNS0_15FieldDescriptorERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
    ;
    goto code_r0x0062a4b4;
  }
  pppppppuStack_1c8 = pppppppuVar23;
  pppppppuStack_1a8 = pppppppuVar25;
  pppppppuStack_1a0 = extraout_RDX_02;
  if (((ulong)*pppppppuVar25 & 0x10000000) != 0) {
    pcStack_1e0 = (code *)&UNK_006280c2;
    uVar10 = _ZNK6google8protobuf10Reflection10GetMapDataERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (extraout_RDX_02,pppppppuVar23,pppppppuVar25);
    pcStack_1e0 = (code *)&UNK_006280ca;
    cVar2 = _ZNK6google8protobuf8internal12MapFieldBase10IsMapValidEv(uVar10);
    pppppppuVar24 = pppppppuStack_1a0;
    pppppppuVar8 = pppppppuStack_1a8;
    if (cVar2 == '\0') {
      bVar3 = *(byte *)((long)pppppppuVar25 + 1);
      goto code_r0x006281a9;
    }
    if (*(char *)((long)pppppppuVar17 + 0x3a) == '\x01') {
      ppppppuStack_148 = (uint ******)0x0;
      ppppppuStack_140 = (uint ******)0x0;
      lStack_138 = 0;
      pcStack_1e0 = (code *)&UNK_00628106;
      pppppppuVar11 = pppppppuStack_1a8;
      _ZN6google8protobuf8internal12MapKeySorter7SortKeyERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorE
                (&ppppppuStack_148,pppppppuVar23,pppppppuStack_1a0);
      pppppppuVar25 = pppppppuStack_1a0;
      pppppppuVar8 = pppppppuStack_1a8;
      ppppppuVar14 = ppppppuStack_148;
      pppppppuVar24 = pppppppuVar17;
      if (ppppppuStack_148 != ppppppuStack_140) {
        do {
          pppppppuStack_1b8 = pppppppuVar24;
          pppppppuVar11 = pppppppuVar7;
          ppppppuStack_198 = (uint ******)0x0;
          uStack_190 = 0;
          pppppppuVar23 = &ppppppuStack_198;
          pcStack_1e0 = (code *)&UNK_00628159;
          _ZNK6google8protobuf10Reflection14LookupMapValueERKNS0_7MessageEPKNS0_15FieldDescriptorERKNS0_6MapKeyEPNS0_16MapValueConstRefE
                    (pppppppuVar25,pppppppuStack_1c8,pppppppuVar8,ppppppuVar14,pppppppuVar23);
          pcStack_1e0 = (code *)&UNK_00628171;
          pppppppuVar7 = (uint *******)
                         func_0x0062a900(pppppppuVar8,ppppppuVar14,pppppppuVar23,pppppppuVar11,
                                         pppppppuStack_1b8);
          ppppppuVar14 = ppppppuVar14 + 3;
          pppppppuVar9 = pppppppuVar25;
          pppppppuVar17 = pppppppuVar8;
          pppppppuVar24 = pppppppuStack_1b8;
        } while (ppppppuVar14 != ppppppuStack_140);
      }
      pppppppuVar8 = pppppppuStack_1b8;
      if (ppppppuStack_148 == (uint ******)0x0) goto code_r0x00629f8d;
      ppppppuStack_140 = ppppppuStack_148;
      lVar20 = lStack_138 - (long)ppppppuStack_148;
      ppppppuVar14 = ppppppuStack_148;
      goto code_r0x00629f88;
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    lStack_138 = 0;
    uStack_130 = 0;
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    uStack_108 = 0;
    pcStack_1e0 = (code *)&UNK_006292b2;
    pppppppuStack_1d8 = extraout_RDX_01;
    _ZNK6google8protobuf10Reflection13ConstMapBeginEPKNS0_7MessageEPKNS0_15FieldDescriptorE
              (&ppppppuStack_148,pppppppuStack_1a0,pppppppuVar23,pppppppuStack_1a8);
    pcStack_1e0 = (code *)&UNK_006292ca;
    _ZNK6google8protobuf10Reflection11ConstMapEndEPKNS0_7MessageEPKNS0_15FieldDescriptorE
              (&ppppppuStack_198,pppppppuVar24,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_006292d5;
    cVar2 = _ZNK6google8protobuf15MapIteratorBaseILb1EEeqERKS2_(&ppppppuStack_148,&ppppppuStack_198)
    ;
    pppppppuVar28 = pppppppuStack_1a0;
    pppppppuVar25 = pppppppuStack_1a8;
    pppppppuVar23 = &ppppppuStack_198;
    pppppppuVar29 = pppppppuVar17;
    pppppppuVar11 = pppppppuVar8;
    pppppppuVar7 = pppppppuStack_1d8;
    pppppppuVar8 = pppppppuStack_1b8;
    pppppppuVar9 = pppppppuVar24;
    while (pppppppuStack_1b8 = pppppppuVar29, cVar2 == '\0') {
      pcStack_1e0 = (code *)&UNK_0062937a;
      pppppppuVar7 = (uint *******)
                     func_0x0062a900(pppppppuVar25,&uStack_128,&uStack_110,pppppppuVar7,
                                     pppppppuStack_1b8);
      pcStack_1e0 = (code *)&UNK_00629389;
      _ZN6google8protobuf15MapIteratorBaseILb1EEppEv(&ppppppuStack_148);
      pppppppuVar9 = &ppppppuStack_198;
      pcStack_1e0 = (code *)&UNK_006293a5;
      pppppppuVar11 = pppppppuVar25;
      _ZNK6google8protobuf10Reflection11ConstMapEndEPKNS0_7MessageEPKNS0_15FieldDescriptorE
                (pppppppuVar9,pppppppuVar28,pppppppuStack_1c8);
      pcStack_1e0 = (code *)&UNK_006293b0;
      cVar2 = _ZNK6google8protobuf15MapIteratorBaseILb1EEeqERKS2_(&ppppppuStack_148,pppppppuVar9);
      pppppppuVar23 = pppppppuVar25;
      pppppppuVar29 = pppppppuStack_1b8;
      pppppppuVar17 = pppppppuVar28;
      pppppppuVar8 = pppppppuStack_1b8;
    }
    goto code_r0x00629f8d;
  }
code_r0x006281a9:
  if ((bVar3 & 0x20) != 0) {
    pcStack_1e0 = (code *)&UNK_00628210;
    uVar16 = _ZNK6google8protobuf10Reflection9FieldSizeERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
    pppppppuVar8 = (uint *******)(ulong)uVar16;
    if (((int)uVar16 < 2) || (((ulong)*pppppppuVar25 & 0x10000000) == 0)) {
      ppppppuStack_1b0 = (uint ******)0x0;
      ppppppuStack_1c0 = (uint ******)0x0;
      lStack_1d0 = 0;
      pppppppuVar9 = pppppppuVar17;
    }
    else if (*(char *)((long)pppppppuVar17 + 0x3a) == '\x01') {
      pcStack_1e0 = (code *)&UNK_00629308;
      pppppppuVar11 = pppppppuStack_1a0;
      _ZN6google8protobuf16DynamicMapSorter4SortERKNS0_7MessageEiPKNS0_10ReflectionEPKNS0_15FieldDescriptorE
                (&ppppppuStack_148,pppppppuVar23,pppppppuVar8);
      ppppppuStack_1b0 = ppppppuStack_148;
      ppppppuStack_1c0 = ppppppuStack_140;
      lStack_1d0 = lStack_138;
      pppppppuVar25 = pppppppuStack_1a8;
      pppppppuVar9 = pppppppuVar17;
    }
    else {
      ppppppuStack_1b0 = (uint ******)0x0;
      ppppppuStack_1c0 = (uint ******)0x0;
      lStack_1d0 = 0;
      pppppppuVar9 = pppppppuVar17;
    }
code_r0x006282ab:
    pcStack_1e0 = (code *)&UNK_006282b3;
    cVar2 = _ZNK6google8protobuf15FieldDescriptor9is_packedEv(pppppppuVar25);
    if (cVar2 == '\0') {
      if (0 < (int)pppppppuVar8) goto code_r0x0062833c;
    }
    else if ((int)pppppppuVar8 != 0) goto code_r0x006282bf;
    goto code_r0x00629f72;
  }
  if (*(char *)((long)pppppppuVar25[4][5] + 0x3b) == '\0') {
    pcStack_1e0 = (code *)&UNK_00628254;
    bVar3 = _ZNK6google8protobuf10Reflection8HasFieldERKNS0_7MessageEPKNS0_15FieldDescriptorE
                      (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
    pppppppuVar8 = (uint *******)(ulong)bVar3;
    ppppppuStack_1b0 = (uint ******)0x0;
    ppppppuStack_1c0 = (uint ******)0x0;
    lStack_1d0 = 0;
    pppppppuVar25 = pppppppuStack_1a8;
    goto code_r0x006282ab;
  }
  pcStack_1e0 = (code *)&UNK_006281c7;
  cVar2 = _ZNK6google8protobuf15FieldDescriptor9is_packedEv(pppppppuVar25);
  pppppppuVar8 = (uint *******)0x1;
  ppppppuStack_1b0 = (uint ******)0x0;
  lStack_1d0 = 0;
  pppppppuVar11 = (uint *******)0x0;
  ppppppuStack_1c0 = (uint ******)0x0;
  if (cVar2 == '\0') {
code_r0x0062833c:
    pppppppuVar24 = (uint *******)0x0;
    pppppppuVar25 = pppppppuStack_1a8;
    pppppppuStack_1d8 = pppppppuVar8;
    pppppppuStack_1b8 = pppppppuVar17;
    do {
      pppppppuVar8 = pppppppuVar7;
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00628f64;
        pppppppuVar8 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
        pppppppuVar25 = pppppppuStack_1a8;
      }
      pppppppuVar7 = pppppppuVar8;
      switch(*(undefined1 *)((long)pppppppuVar25 + 2)) {
      case 1:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006283bb;
          uVar10 = _ZNK6google8protobuf10Reflection9GetDoubleERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628a63;
          uVar10 = _ZNK6google8protobuf10Reflection17GetRepeatedDoubleERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        pppppppuVar11 = (uint *******)(ulong)(*(uint *)((long)pppppppuVar25 + 4) * 8 + 1);
        if (0x7f < *(uint *)((long)pppppppuVar25 + 4) << 3) {
          do {
            uVar16 = (uint)pppppppuVar11;
            *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
          } while (0x3fff < uVar16);
        }
        *(char *)pppppppuVar8 = (char)pppppppuVar11;
        *(undefined8 *)((long)pppppppuVar8 + 1) = uVar10;
        goto code_r0x00628b9b;
      case 2:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006285f5;
          uVar6 = _ZNK6google8protobuf10Reflection8GetFloatERKNS0_7MessageEPKNS0_15FieldDescriptorE
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628aad;
          uVar6 = _ZNK6google8protobuf10Reflection16GetRepeatedFloatERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                             (ulong)pppppppuVar24 & 0xffffffff);
        }
        pppppppuVar11 = (uint *******)(ulong)(*(uint *)((long)pppppppuVar25 + 4) * 8 + 5);
        if (0x7f < *(uint *)((long)pppppppuVar25 + 4) << 3) {
          do {
            uVar16 = (uint)pppppppuVar11;
            *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
          } while (0x3fff < uVar16);
        }
        *(char *)pppppppuVar8 = (char)pppppppuVar11;
        *(undefined4 *)((long)pppppppuVar8 + 1) = uVar6;
        goto code_r0x00628c42;
      case 3:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628549;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection8GetInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_006288e7;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection16GetRepeatedInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                          (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          uVar13 = (ulong)uVar16;
        }
        else {
          uVar13 = (ulong)uVar16;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar16 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar16;
            uVar16 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        pppppppuVar7 = pppppppuVar11;
        if ((uint *******)0x7f < pppppppuVar11) {
          do {
            *pbVar30 = (byte)pppppppuVar7 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            bVar1 = (uint *******)0x3fff < pppppppuVar7;
            pppppppuVar7 = pppppppuVar11;
          } while (bVar1);
        }
        goto code_r0x00628bf6;
      case 4:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_0062859f;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection9GetUInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_006289ae;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection17GetRepeatedUInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                          (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          uVar13 = (ulong)uVar16;
        }
        else {
          uVar13 = (ulong)uVar16;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar16 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar16;
            uVar16 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        pppppppuVar7 = pppppppuVar11;
        if ((uint *******)0x7f < pppppppuVar11) {
          do {
            *pbVar30 = (byte)pppppppuVar7 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            bVar1 = (uint *******)0x3fff < pppppppuVar7;
            pppppppuVar7 = pppppppuVar11;
          } while (bVar1);
        }
        goto code_r0x00628bf6;
      case 5:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006284cf;
          uVar16 = _ZNK6google8protobuf10Reflection8GetInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628823;
          uVar16 = _ZNK6google8protobuf10Reflection16GetRepeatedInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar15 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar15 < 0x80) {
          uVar13 = (ulong)uVar15;
        }
        else {
          uVar13 = (ulong)uVar15;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar15 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar15;
            uVar15 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        pppppppuVar11 = (uint *******)(long)(int)uVar16;
        pppppppuVar7 = pppppppuVar11;
        if (0x7f < uVar16) {
          do {
            *pbVar30 = (byte)pppppppuVar7 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            bVar1 = (uint *******)0x3fff < pppppppuVar7;
            pppppppuVar7 = pppppppuVar11;
          } while (bVar1);
        }
        *pbVar30 = (byte)pppppppuVar11;
        goto code_r0x0062835d;
      case 6:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_0062864b;
          uVar10 = _ZNK6google8protobuf10Reflection9GetUInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628b6f;
          uVar10 = _ZNK6google8protobuf10Reflection17GetRepeatedUInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) * 8 + 1;
        if (*(uint *)((long)pppppppuVar25 + 4) << 3 < 0x80) {
code_r0x00628b8d:
          pppppppuVar11 = (uint *******)(ulong)uVar16;
        }
        else {
          pppppppuVar11 = (uint *******)(ulong)uVar16;
          do {
            uVar16 = (uint)pppppppuVar11;
            *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
          } while (0x3fff < uVar16);
        }
        goto code_r0x00628b92;
      case 7:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006286a1;
          uVar6 = _ZNK6google8protobuf10Reflection9GetUInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628c16;
          uVar6 = _ZNK6google8protobuf10Reflection17GetRepeatedUInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                             (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) * 8 + 5;
        if (*(uint *)((long)pppppppuVar25 + 4) << 3 < 0x80) {
code_r0x00628c34:
          pppppppuVar11 = (uint *******)(ulong)uVar16;
        }
        else {
          pppppppuVar11 = (uint *******)(ulong)uVar16;
          do {
            uVar16 = (uint)pppppppuVar11;
            *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
          } while (0x3fff < uVar16);
        }
        goto code_r0x00628c39;
      case 8:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006285ca;
          uVar4 = _ZNK6google8protobuf10Reflection7GetBoolERKNS0_7MessageEPKNS0_15FieldDescriptorE
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628a1b;
          uVar4 = _ZNK6google8protobuf10Reflection15GetRepeatedBoolERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                             (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          pppppppuVar11 = (uint *******)(ulong)uVar16;
        }
        else {
          pppppppuVar11 = (uint *******)(ulong)uVar16;
          do {
            uVar16 = (uint)pppppppuVar11;
            *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
          } while (0x3fff < uVar16);
        }
        *(char *)pppppppuVar8 = (char)pppppppuVar11;
        *(undefined1 *)((long)pppppppuVar8 + 1) = uVar4;
        pppppppuVar7 = (uint *******)((long)pppppppuVar8 + 2);
        pppppppuVar9 = pppppppuVar17;
        break;
      case 9:
        pcStack_1e0 = (code *)&UNK_006286d2;
        cVar2 = _ZNK6google8protobuf15FieldDescriptor24requires_utf8_validationEv(pppppppuVar25);
        ppppppuStack_148 = (uint ******)0x0;
        ppppppuStack_140 = (uint ******)0x0;
        lStack_138 = 0;
        if (((ulong)*pppppppuStack_1a8 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628708;
          pbVar30 = (byte *)_ZNK6google8protobuf10Reflection18GetStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
                                      (pppppppuStack_1a0,pppppppuVar23,pppppppuStack_1a8,
                                       &ppppppuStack_148);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628c80;
          pbVar30 = (byte *)_ZNK6google8protobuf10Reflection26GetRepeatedStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEiPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
                                      (pppppppuStack_1a0,pppppppuVar23,pppppppuStack_1a8,
                                       (ulong)pppppppuVar24 & 0xffffffff,&ppppppuStack_148);
        }
        if (cVar2 != '\0') {
          if ((*pbVar30 & 1) == 0) {
            pbVar26 = pbVar30 + 1;
            uVar16 = (uint)(*pbVar30 >> 1);
          }
          else {
            pbVar26 = *(byte **)(pbVar30 + 0x10);
            uVar16 = *(uint *)(pbVar30 + 8);
          }
          pcStack_1e0 = (code *)&UNK_00628d91;
          _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                    (pbVar26,uVar16,1,
                     ~(ulong)*(ushort *)((long)pppppppuStack_1a8[1] + 2) +
                     (long)pppppppuStack_1a8[1]);
        }
        bVar3 = *pbVar30;
        if ((bVar3 & 1) == 0) {
          pppppppuVar11 = (uint *******)(ulong)(bVar3 >> 1);
        }
        else {
          pppppppuVar11 = *(uint ********)(pbVar30 + 8);
        }
        if ((long)pppppppuVar11 < 0x80) {
          uVar16 = *(uint *)((long)pppppppuStack_1a8 + 4) * 8;
          pppppppuVar23 = (uint *******)(ulong)uVar16;
          lVar20 = 1;
          if (((0x7f < uVar16) && (lVar20 = 2, 0x3fff < uVar16)) && (lVar20 = 3, 0x1fffff < uVar16))
          {
            lVar20 = 5 - (ulong)(uVar16 < 0x10000000);
          }
          if ((long)((long)*pppppppuStack_1b8 + ~(lVar20 + (long)pppppppuVar8) + 0x10U) <
              (long)pppppppuVar11) goto code_r0x00628f73;
          uVar18 = uVar16 | 2;
          uVar15 = uVar18;
          if (0x7f < uVar16) {
            do {
              pppppppuVar23 = (uint *******)((ulong)uVar15 | 0x80);
              *(char *)pppppppuVar8 = (char)pppppppuVar23;
              uVar18 = uVar15 >> 7;
              pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
              bVar1 = 0x3fff < uVar15;
              uVar15 = uVar18;
            } while (bVar1);
          }
          *(char *)pppppppuVar8 = (char)uVar18;
          *(char *)((long)pppppppuVar8 + 1) = (char)pppppppuVar11;
          if ((*pbVar30 & 1) == 0) {
            pbVar30 = pbVar30 + 1;
          }
          else {
            pbVar30 = *(byte **)(pbVar30 + 0x10);
          }
          pcStack_1e0 = (code *)&UNK_00628e51;
          func_0x0099bda0((long)pppppppuVar8 + 2,pbVar30,pppppppuVar11);
          pppppppuVar7 = (uint *******)((long)pppppppuVar8 + (long)pppppppuVar11 + 2);
          pppppppuVar11 = pppppppuVar23;
        }
        else {
code_r0x00628f73:
          if ((bVar3 & 1) == 0) {
            pbVar30 = pbVar30 + 1;
          }
          else {
            pbVar30 = *(byte **)(pbVar30 + 0x10);
          }
          pcStack_1e0 = (code *)&UNK_006291cc;
          pppppppuVar7 = (uint *******)
                         _ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (pppppppuStack_1b8,*(uint *)((long)pppppppuStack_1a8 + 4),pbVar30
                                    ,pppppppuVar11,pppppppuVar8);
        }
        pppppppuVar23 = pppppppuStack_1c8;
        pppppppuVar25 = pppppppuStack_1a8;
        pppppppuVar17 = pppppppuStack_1b8;
        if (((ulong)ppppppuStack_148 & 1) != 0) {
          pcStack_1e0 = (code *)&UNK_00628e76;
          _ZdaPvSt11align_val_t(lStack_138,(ulong)ppppppuStack_148 & 0xfffffffffffffffe);
          pppppppuVar25 = pppppppuStack_1a8;
          pppppppuVar17 = pppppppuStack_1b8;
        }
        break;
      case 10:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_0062851e;
          pppppuVar12 = (uint *****)
                        _ZNK6google8protobuf10Reflection10GetMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
                                  (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,0);
          pppppppuVar25 = pppppppuStack_1a8;
        }
        else if (ppppppuStack_1b0 == ppppppuStack_1c0) {
          pcStack_1e0 = (code *)&UNK_00628ed7;
          pppppuVar12 = (uint *****)
                        _ZNK6google8protobuf10Reflection18GetRepeatedMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                                  (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                                   (ulong)pppppppuVar24 & 0xffffffff);
          pppppppuVar25 = pppppppuStack_1a8;
        }
        else {
          pppppuVar12 = ppppppuStack_1b0[(long)pppppppuVar24];
        }
        pcStack_1e0 = (code *)&UNK_00628ef0;
        pppppppuVar11 = pppppppuVar17;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf8internal14WireFormatLite18InternalWriteGroupEiRKNS0_11MessageLiteEPhPNS0_2io19EpsCopyOutputStreamE
                                 (*(uint *)((long)pppppppuVar25 + 4),pppppuVar12,pppppppuVar8);
        pppppppuVar25 = pppppppuStack_1a8;
        break;
      case 0xb:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006286c5;
          pppppuVar12 = (uint *****)
                        _ZNK6google8protobuf10Reflection10GetMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
                                  (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,0);
          pppppppuVar25 = pppppppuStack_1a8;
        }
        else if (ppppppuStack_1b0 == ppppppuStack_1c0) {
          pcStack_1e0 = (code *)&UNK_00628f13;
          pppppuVar12 = (uint *****)
                        _ZNK6google8protobuf10Reflection18GetRepeatedMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                                  (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                                   (ulong)pppppppuVar24 & 0xffffffff);
          pppppppuVar25 = pppppppuStack_1a8;
        }
        else {
          pppppuVar12 = ppppppuStack_1b0[(long)pppppppuVar24];
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4);
        pcStack_1e0 = (code *)&UNK_00628f29;
        uVar6 = _ZNK6google8protobuf11MessageLite13GetCachedSizeEv(pppppuVar12);
        pppppppuVar17 = pppppppuStack_1b8;
        pcStack_1e0 = (code *)&UNK_00628f43;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                 (uVar16,pppppuVar12,uVar6,pppppppuVar8,pppppppuStack_1b8);
        pppppppuVar11 = pppppppuVar8;
        pppppppuVar25 = pppppppuStack_1a8;
        pppppppuVar23 = pppppppuStack_1c8;
        break;
      case 0xc:
        if (((ulong)*pppppppuVar25 & 0x7000000) == 0x2000000) {
          ppppppuStack_148 = (uint ******)0x0;
          ppppppuStack_140 = (uint ******)0x0;
          pcStack_1e0 = (code *)&UNK_00628442;
          _ZNK6google8protobuf10Reflection7GetCordERKNS0_7MessageEPKNS0_15FieldDescriptorE
                    (&ppppppuStack_148,pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
          uVar16 = *(uint *)((long)pppppppuStack_1a8 + 4);
          if (*pppppppuVar17 <= pppppppuVar8) {
            pcStack_1e0 = (code *)&UNK_00629228;
            pppppppuVar8 = (uint *******)
                           _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                     (pppppppuVar17,pppppppuVar8);
          }
          pppppppuVar23 = pppppppuStack_1c8;
          pppppppuVar11 = (uint *******)(ulong)(uVar16 * 8 + 2);
          if (0x7f < uVar16 << 3) {
            do {
              uVar16 = (uint)pppppppuVar11;
              *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
              pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
              pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            } while (0x3fff < uVar16);
          }
          *(char *)pppppppuVar8 = (char)pppppppuVar11;
          pcStack_1e0 = (code *)&UNK_0062848e;
          pppppppuVar7 = (uint *******)
                         _ZN6google8protobuf2io19EpsCopyOutputStream16WriteCordOutlineERKN4absl12lts_202605264CordEPh
                                   (pppppppuVar17,&ppppppuStack_148,(long)pppppppuVar8 + 1);
          pppppppuVar25 = pppppppuStack_1a8;
          if (((ulong)ppppppuStack_148 & 1) != 0) {
            pcStack_1e0 = (code *)&UNK_006284a4;
            _ZN4absl12lts_202605264Cord15DestroyCordSlowEv(&ppppppuStack_148);
            pppppppuVar25 = pppppppuStack_1a8;
          }
        }
        else {
          ppppppuStack_148 = (uint ******)0x0;
          ppppppuStack_140 = (uint ******)0x0;
          lStack_138 = 0;
          if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
            pcStack_1e0 = (code *)&UNK_00628807;
            pbVar30 = (byte *)_ZNK6google8protobuf10Reflection18GetStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
                                        (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                                         &ppppppuStack_148);
          }
          else {
            pcStack_1e0 = (code *)&UNK_00628cc9;
            pbVar30 = (byte *)_ZNK6google8protobuf10Reflection26GetRepeatedStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEiPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
                                        (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                                         (ulong)pppppppuVar24 & 0xffffffff,&ppppppuStack_148);
          }
          bVar3 = *pbVar30;
          if ((bVar3 & 1) == 0) {
            pppppppuVar11 = (uint *******)(ulong)(bVar3 >> 1);
          }
          else {
            pppppppuVar11 = *(uint ********)(pbVar30 + 8);
          }
          if ((long)pppppppuVar11 < 0x80) {
            uVar16 = *(uint *)((long)pppppppuVar25 + 4) * 8;
            lVar20 = 1;
            if (((0x7f < uVar16) && (lVar20 = 2, 0x3fff < uVar16)) &&
               (lVar20 = 3, 0x1fffff < uVar16)) {
              lVar20 = 5 - (ulong)(uVar16 < 0x10000000);
            }
            if ((long)((long)*pppppppuVar17 + ~(lVar20 + (long)pppppppuVar8) + 0x10U) <
                (long)pppppppuVar11) goto code_r0x006291a5;
            uVar15 = uVar16 | 2;
            if (uVar16 < 0x80) {
              pppppppuVar23 = (uint *******)(ulong)uVar15;
            }
            else {
              pppppppuVar23 = (uint *******)(ulong)uVar15;
              do {
                *(byte *)pppppppuVar8 = (byte)uVar15 | 0x80;
                pppppppuVar23 = (uint *******)((ulong)pppppppuVar23 >> 7);
                pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
                bVar1 = 0x3fff < uVar15;
                uVar15 = (uint)pppppppuVar23;
              } while (bVar1);
            }
            *(char *)pppppppuVar8 = (char)pppppppuVar23;
            *(char *)((long)pppppppuVar8 + 1) = (char)pppppppuVar11;
            if ((*pbVar30 & 1) == 0) {
              pbVar30 = pbVar30 + 1;
            }
            else {
              pbVar30 = *(byte **)(pbVar30 + 0x10);
            }
            pcStack_1e0 = (code *)&UNK_00628e92;
            func_0x0099bda0((long)pppppppuVar8 + 2,pbVar30,pppppppuVar11);
            pppppppuVar7 = (uint *******)((long)pppppppuVar8 + (long)pppppppuVar11 + 2);
            pppppppuVar11 = pppppppuVar23;
          }
          else {
code_r0x006291a5:
            if ((bVar3 & 1) == 0) {
              pbVar30 = pbVar30 + 1;
            }
            else {
              pbVar30 = *(byte **)(pbVar30 + 0x10);
            }
            pcStack_1e0 = (code *)&UNK_00629244;
            pppppppuVar7 = (uint *******)
                           _ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                     (pppppppuVar17,*(uint *)((long)pppppppuVar25 + 4),pbVar30,
                                      pppppppuVar11,pppppppuVar8);
          }
          pppppppuVar23 = pppppppuStack_1c8;
          pppppppuVar25 = pppppppuStack_1a8;
          if (((ulong)ppppppuStack_148 & 1) != 0) {
            pcStack_1e0 = (code *)&UNK_00628eb7;
            _ZdaPvSt11align_val_t(lStack_138,(ulong)ppppppuStack_148 & 0xfffffffffffffffe);
            pppppppuVar25 = pppppppuStack_1a8;
          }
        }
        break;
      case 0xd:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006284fa;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection9GetUInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_0062887b;
          pppppppuVar11 =
               (uint *******)
               _ZNK6google8protobuf10Reflection17GetRepeatedUInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                         (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                          (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          uVar13 = (ulong)uVar16;
        }
        else {
          uVar13 = (ulong)uVar16;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar16 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar16;
            uVar16 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        if ((uint)pppppppuVar11 < 0x80) {
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
        }
        else {
          pppppppuVar7 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
          do {
            uVar16 = (uint)pppppppuVar11;
            *pbVar30 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            pppppppuVar7 = pppppppuVar11;
          } while (0x3fff < uVar16);
        }
        goto code_r0x00628359;
      case 0xe:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628676;
          lVar20 = _ZNK6google8protobuf10Reflection7GetEnumERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628bbe;
          lVar20 = _ZNK6google8protobuf10Reflection15GetRepeatedEnumERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)(lVar20 + 4);
        pppppppuVar11 = (uint *******)(long)(int)uVar16;
        uVar15 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar15 < 0x80) {
          uVar13 = (ulong)uVar15;
        }
        else {
          uVar13 = (ulong)uVar15;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar15 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar15;
            uVar15 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        pppppppuVar7 = pppppppuVar11;
        if (0x7f < uVar16) {
          do {
            *pbVar30 = (byte)pppppppuVar7 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            bVar1 = (uint *******)0x3fff < pppppppuVar7;
            pppppppuVar7 = pppppppuVar11;
          } while (bVar1);
        }
        goto code_r0x00628bf6;
      case 0xf:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628411;
          uVar6 = _ZNK6google8protobuf10Reflection8GetInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628794;
          uVar6 = _ZNK6google8protobuf10Reflection16GetRepeatedInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                             (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) * 8 + 5;
        if (*(uint *)((long)pppppppuVar25 + 4) << 3 < 0x80) goto code_r0x00628c34;
        pppppppuVar11 = (uint *******)(ulong)uVar16;
        do {
          uVar16 = (uint)pppppppuVar11;
          *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
          pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
        } while (0x3fff < uVar16);
code_r0x00628c39:
        *(char *)pppppppuVar8 = (char)pppppppuVar11;
        *(undefined4 *)((long)pppppppuVar8 + 1) = uVar6;
code_r0x00628c42:
        pppppppuVar7 = (uint *******)((long)pppppppuVar8 + 5);
        pppppppuVar9 = pppppppuVar17;
        break;
      case 0x10:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628574;
          uVar10 = _ZNK6google8protobuf10Reflection8GetInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628954;
          uVar10 = _ZNK6google8protobuf10Reflection16GetRepeatedInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) * 8 + 1;
        if (*(uint *)((long)pppppppuVar25 + 4) << 3 < 0x80) goto code_r0x00628b8d;
        pppppppuVar11 = (uint *******)(ulong)uVar16;
        do {
          uVar16 = (uint)pppppppuVar11;
          *(byte *)pppppppuVar8 = (byte)pppppppuVar11 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
          pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
        } while (0x3fff < uVar16);
code_r0x00628b92:
        *(char *)pppppppuVar8 = (char)pppppppuVar11;
        *(undefined8 *)((long)pppppppuVar8 + 1) = uVar10;
code_r0x00628b9b:
        pppppppuVar7 = (uint *******)((long)pppppppuVar8 + 9);
        pppppppuVar9 = pppppppuVar17;
        break;
      case 0x11:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_006283e6;
          iVar5 = _ZNK6google8protobuf10Reflection8GetInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628724;
          iVar5 = _ZNK6google8protobuf10Reflection16GetRepeatedInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                            (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                             (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          uVar13 = (ulong)uVar16;
        }
        else {
          uVar13 = (ulong)uVar16;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar16 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar16;
            uVar16 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        uVar16 = iVar5 >> 0x1f ^ iVar5 * 2;
        pppppppuVar11 = (uint *******)(ulong)uVar16;
        if (0x7f < uVar16) {
          pppppppuVar11 = (uint *******)(ulong)uVar16;
          do {
            uVar16 = (uint)pppppppuVar11;
            *pbVar30 = (byte)pppppppuVar11 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
            pbVar30 = pbVar30 + 1;
          } while (0x3fff < uVar16);
        }
code_r0x00628359:
        *pbVar30 = (byte)pppppppuVar11;
        goto code_r0x0062835d;
      case 0x12:
        if (((ulong)*pppppppuVar25 & 0x2000) == 0) {
          pcStack_1e0 = (code *)&UNK_00628620;
          lVar20 = _ZNK6google8protobuf10Reflection8GetInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorE
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25);
        }
        else {
          pcStack_1e0 = (code *)&UNK_00628af7;
          lVar20 = _ZNK6google8protobuf10Reflection16GetRepeatedInt64ERKNS0_7MessageEPKNS0_15FieldDescriptorEi
                             (pppppppuStack_1a0,pppppppuVar23,pppppppuVar25,
                              (ulong)pppppppuVar24 & 0xffffffff);
        }
        uVar16 = *(uint *)((long)pppppppuVar25 + 4) << 3;
        if (uVar16 < 0x80) {
          uVar13 = (ulong)uVar16;
        }
        else {
          uVar13 = (ulong)uVar16;
          do {
            *(byte *)pppppppuVar8 = (byte)uVar16 | 0x80;
            uVar13 = uVar13 >> 7;
            pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 1);
            bVar1 = 0x3fff < uVar16;
            uVar16 = (uint)uVar13;
          } while (bVar1);
        }
        *(char *)pppppppuVar8 = (char)uVar13;
        pbVar30 = (byte *)((long)pppppppuVar8 + 1);
        pppppppuVar11 = (uint *******)(lVar20 >> 0x3f ^ lVar20 * 2);
        pppppppuVar7 = pppppppuVar11;
        if ((uint *******)0x7f < pppppppuVar11) {
          do {
            *pbVar30 = (byte)pppppppuVar7 | 0x80;
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar7 >> 7);
            pbVar30 = pbVar30 + 1;
            bVar1 = (uint *******)0x3fff < pppppppuVar7;
            pppppppuVar7 = pppppppuVar11;
          } while (bVar1);
        }
code_r0x00628bf6:
        *pbVar30 = (byte)pppppppuVar11;
code_r0x0062835d:
        pppppppuVar7 = (uint *******)(pbVar30 + 1);
        pppppppuVar9 = pppppppuVar17;
      }
      pppppppuVar24 = (uint *******)((long)pppppppuVar24 + 1);
    } while (pppppppuVar24 != pppppppuStack_1d8);
    goto code_r0x00629f72;
  }
code_r0x006282bf:
  if (*pppppppuVar17 <= extraout_RDX_01) {
    pcStack_1e0 = (code *)&UNK_00629fc0;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                             (pppppppuVar17,extraout_RDX_01);
  }
  pppppppuVar8 = pppppppuStack_1a8;
  pppppppuVar11 = (uint *******)&UNK_00209308;
  switch(*(undefined1 *)((long)pppppppuStack_1a8 + 2)) {
  case 1:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00628307;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIdEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00628313;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a499;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 3;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629ef9;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    pcStack_1e0 = (code *)&UNK_00629f05;
    _ZN6google8protobuf13RepeatedFieldIdED2Ev(&ppppppuStack_148);
    break;
  case 2:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_0062973a;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIfEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629746;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a42e;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 2;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629cc9;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    pcStack_1e0 = (code *)&UNK_00629cd5;
    _ZN6google8protobuf13RepeatedFieldIjED2Ev(&ppppppuStack_148);
    break;
  case 3:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_006297be;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIlEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_006297ca;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_006297e0;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a457;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = pppppppuVar8 + (int)uVar16;
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629db5;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)*pppppppuVar8;
      pppppppuVar9 = pppppppuVar11;
      if ((uint *******)0x7f < pppppppuVar11) {
        do {
          *(byte *)pppppppuVar7 = (byte)pppppppuVar9 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar9 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = (uint *******)0x3fff < pppppppuVar9;
          pppppppuVar9 = pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = pppppppuVar8 + 1;
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
    goto code_r0x006299a4;
  case 4:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_0062988c;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalImEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629898;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_006298ae;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a483;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = pppppppuVar8 + (int)uVar16;
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629e95;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)*pppppppuVar8;
      pppppppuVar9 = pppppppuVar11;
      if ((uint *******)0x7f < pppppppuVar11) {
        do {
          *(byte *)pppppppuVar7 = (byte)pppppppuVar9 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar9 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = (uint *******)0x3fff < pppppppuVar9;
          pppppppuVar9 = pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = pppppppuVar8 + 1;
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
    goto code_r0x00629d3c;
  case 5:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_006296b1;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIiEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_006296bd;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_006296d3;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a418;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = (uint *******)((long)pppppppuVar8 + (long)(int)uVar16 * 4);
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629c65;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)(long)(int)*(uint *)pppppppuVar8;
      pppppppuVar9 = pppppppuVar11;
      if ((uint *******)0x7f < pppppppuVar11) {
        do {
          *(byte *)pppppppuVar7 = (byte)pppppppuVar9 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar9 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = (uint *******)0x3fff < pppppppuVar9;
          pppppppuVar9 = pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 4);
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
    goto code_r0x00629afb;
  case 6:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629779;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalImEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629785;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a441;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 3;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629d39;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
code_r0x00629d3c:
    pcStack_1e0 = (code *)&UNK_00629d45;
    _ZN6google8protobuf13RepeatedFieldIdED2Ev(&ppppppuStack_148);
    break;
  case 7:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629915;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIjEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629921;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a4ac;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 2;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629f66;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    goto code_r0x00629f69;
  case 8:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629847;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIbEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629853;
    _ZN6google8protobuf13RepeatedFieldIbEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a46d;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar19 = (ulong)uVar15;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        uVar16 = (uint)uVar19;
        *(byte *)pppppppuVar7 = (byte)uVar19 | 0x80;
        uVar19 = uVar19 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar19;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629e16;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    pcStack_1e0 = (code *)&UNK_00629e22;
    _ZN6google8protobuf13RepeatedFieldIbED2Ev(&ppppppuStack_148);
    break;
  default:
    goto code_r0x0062a4b9;
  case 0xd:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629593;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIjEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_0062959f;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_006295b5;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a3e6;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = (uint *******)((long)pppppppuVar8 + (long)(int)uVar16 * 4);
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629b6e;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)(ulong)*(uint *)pppppppuVar8;
      if (0x7f < *(uint *)pppppppuVar8) {
        do {
          uVar16 = (uint)pppppppuVar11;
          *(byte *)pppppppuVar7 = (byte)pppppppuVar11 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
        } while (0x3fff < uVar16);
      }
      pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 4);
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
code_r0x00629f69:
    pcStack_1e0 = (code *)&UNK_00629f72;
    _ZN6google8protobuf13RepeatedFieldIjED2Ev(&ppppppuStack_148);
    break;
  case 0xe:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629436;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIiEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_00629442;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_00629458;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a3a1;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = (uint *******)((long)pppppppuVar8 + (long)(int)uVar16 * 4);
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629a25;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)(long)(int)*(uint *)pppppppuVar8;
      pppppppuVar9 = pppppppuVar11;
      if ((uint *******)0x7f < pppppppuVar11) {
        do {
          *(byte *)pppppppuVar7 = (byte)pppppppuVar9 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar9 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = (uint *******)0x3fff < pppppppuVar9;
          pppppppuVar9 = pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 4);
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
    goto code_r0x00629afb;
  case 0xf:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_0062954e;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIiEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_0062955a;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a3d0;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 2;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_00629af8;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    goto code_r0x00629afb;
  case 0x10:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_006293f1;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIlEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_006293fd;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a38b;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar15 = (uint)ppppppuStack_148 & 3;
    }
    else {
      uVar15 = (uint)ppppppuStack_140;
    }
    uVar15 = uVar15 << 3;
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    pppppppuVar11 = (uint *******)((long)pppppppuVar7 + 2);
    *(char *)pppppppuVar8 = (char)uVar15;
    ppppppuVar14 = (uint ******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      ppppppuVar14 = (uint ******)&ppppppuStack_140;
    }
    pcStack_1e0 = (code *)&UNK_006299a1;
    pppppppuVar7 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream20WriteRawLittleEndianILi1EEEPhPKviS4_
                             (pppppppuVar17,ppppppuVar14);
    goto code_r0x006299a4;
  case 0x11:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_006294c5;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIiEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_006294d1;
    _ZN6google8protobuf13RepeatedFieldIfEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_006294e7;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a3ba;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = (uint *******)((long)pppppppuVar8 + (long)(int)uVar16 * 4);
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629a94;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      uVar16 = (int)*(uint *)pppppppuVar8 >> 0x1f ^ *(uint *)pppppppuVar8 * 2;
      if (uVar16 < 0x80) {
        pppppppuVar11 = (uint *******)(ulong)uVar16;
      }
      else {
        pppppppuVar11 = (uint *******)(ulong)uVar16;
        do {
          *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = 0x3fff < uVar16;
          uVar16 = (uint)pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 4);
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
code_r0x00629afb:
    pcStack_1e0 = (code *)&UNK_00629b04;
    _ZN6google8protobuf13RepeatedFieldIjED2Ev(&ppppppuStack_148);
    break;
  case 0x12:
    ppppppuStack_148 = (uint ******)0x0;
    ppppppuStack_140 = (uint ******)0x0;
    pcStack_1e0 = (code *)&UNK_00629622;
    uVar10 = _ZNK6google8protobuf10Reflection24GetRepeatedFieldInternalIlEERKNS0_13RepeatedFieldIT_EERKNS0_7MessageEPKNS0_15FieldDescriptorE
                       (pppppppuStack_1a0,pppppppuVar23);
    pcStack_1e0 = (code *)&UNK_0062962e;
    _ZN6google8protobuf13RepeatedFieldImEC2ERKS2_(&ppppppuStack_148,uVar10);
    uVar16 = *(uint *)((long)pppppppuVar8 + 4);
    pcStack_1e0 = (code *)&UNK_00629644;
    uVar15 = _ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
                       (pppppppuVar8,pppppppuVar23);
    if (*pppppppuVar17 <= pppppppuVar7) {
      pcStack_1e0 = (code *)&UNK_0062a3ff;
      pppppppuVar7 = (uint *******)
                     _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                               (pppppppuVar17,pppppppuVar7);
    }
    uVar13 = (ulong)(uVar16 * 8 + 2);
    if (0x7f < uVar16 << 3) {
      do {
        uVar16 = (uint)uVar13;
        *(byte *)pppppppuVar7 = (byte)uVar13 | 0x80;
        uVar13 = uVar13 >> 7;
        pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      } while (0x3fff < uVar16);
    }
    *(char *)pppppppuVar7 = (char)uVar13;
    pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
    uVar16 = uVar15;
    if (0x7f < uVar15) {
      do {
        pppppppuVar7 = pppppppuVar8;
        *(byte *)pppppppuVar7 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        pppppppuVar8 = (uint *******)((long)pppppppuVar7 + 1);
        bVar1 = 0x3fff < uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    *(char *)pppppppuVar8 = (char)uVar15;
    if (((ulong)ppppppuStack_148 & 4) == 0) {
      uVar16 = (uint)ppppppuStack_148 & 3;
      pppppppuVar8 = &ppppppuStack_140;
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)ppppppuStack_148 & 0xfffffffffffffff8);
      uVar16 = (uint)ppppppuStack_140;
    }
    pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 2);
    pppppppuVar23 = pppppppuVar8 + (int)uVar16;
    do {
      if (*pppppppuVar17 <= pppppppuVar7) {
        pcStack_1e0 = (code *)&UNK_00629bee;
        pppppppuVar7 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar17,pppppppuVar7);
      }
      pppppppuVar11 = (uint *******)((long)*pppppppuVar8 >> 0x3f ^ (long)*pppppppuVar8 * 2);
      pppppppuVar9 = pppppppuVar11;
      if ((uint *******)0x7f < pppppppuVar11) {
        do {
          *(byte *)pppppppuVar7 = (byte)pppppppuVar9 | 0x80;
          pppppppuVar11 = (uint *******)((ulong)pppppppuVar9 >> 7);
          pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
          bVar1 = (uint *******)0x3fff < pppppppuVar9;
          pppppppuVar9 = pppppppuVar11;
        } while (bVar1);
      }
      pppppppuVar8 = pppppppuVar8 + 1;
      *(char *)pppppppuVar7 = (char)pppppppuVar11;
      pppppppuVar7 = (uint *******)((long)pppppppuVar7 + 1);
      pppppppuVar9 = pppppppuVar17;
    } while (pppppppuVar8 < pppppppuVar23);
code_r0x006299a4:
    pcStack_1e0 = (code *)&UNK_006299ad;
    _ZN6google8protobuf13RepeatedFieldIdED2Ev(&ppppppuStack_148);
  }
code_r0x00629f72:
  pppppppuVar8 = pppppppuStack_1b8;
  if (ppppppuStack_1b0 != (uint ******)0x0) {
    lVar20 = lStack_1d0 - (long)ppppppuStack_1b0;
    ppppppuVar14 = ppppppuStack_1b0;
code_r0x00629f88:
    pcStack_1e0 = (code *)&UNK_00629f8d;
    _ZdaPvSt11align_val_t(ppppppuVar14,lVar20);
    pppppppuVar8 = pppppppuStack_1b8;
  }
code_r0x00629f8d:
  pppppppuStack_1b8 = pppppppuVar8;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return pppppppuVar7;
  }
code_r0x0062a4b4:
  pcStack_1e0 = (code *)&UNK_0062a4b9;
  func_0x0099bd00();
code_r0x0062a4b9:
  pcStack_1e0 = (code *)&UNK_0062a4d1;
  _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci
            (&ppppppuStack_148,&UNK_0017f6cd,0x51c);
  pppppppuVar24 = (uint *******)&UNK_0017f702;
  pcStack_1e0 = (code *)&UNK_0062a4e0;
  uVar10 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(&ppppppuStack_148);
  pcStack_1e0 = (code *)&UNK_0062a4e8;
  _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar10);
  pcStack_1e0 = 
  _ZN6google8protobuf8internal30SerializeMapKeyWithCachedSizesEPKNS0_15FieldDescriptorERKNS0_6MapKeyEPhPNS0_2io19EpsCopyOutputStreamE
  ;
  pppppppuVar25 = &ppppppuStack_148;
  _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
  ppppppuVar21 = (uint ******)&ppppppuStack_210;
  pppppppuStack_200 = *(uint ********)(in_FS_OFFSET + 0x28);
  pppppppuVar8 = extraout_RDX_03;
  pppppppuVar29 = pppppppuVar23;
  pppppppuVar31 = pppppppuVar17;
  pppppppuStack_1f8 = &ppppppuStack_148;
  pppppppuStack_1f0 = pppppppuVar23;
  pppppppuStack_1e8 = pppppppuVar17;
  pcStack_1e0 = (code *)&puStack_c8;
  if (*pppppppuVar11 <= extraout_RDX_03) {
    pcStack_1e0 = (code *)&puStack_c8;
    pppppppuVar8 = (uint *******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                             (pppppppuVar11,extraout_RDX_03);
    pppppppuVar29 = pppppppuVar25;
    pppppppuVar31 = pppppppuVar24;
  }
  pppppppuVar17 = pppppppuVar11;
  switch(*(undefined *)((long)pppppppuVar25 + 2)) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    goto code_r0x0062a7e0;
  case 3:
    pppppppuVar11 = (uint *******)_ZNK6google8protobuf6MapKey13GetInt64ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    pppppppuVar23 = pppppppuVar11;
    if (pppppppuVar11 < (uint *******)0x80) {
code_r0x0062a674:
      pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    }
    else {
      do {
        *pbVar30 = (byte)pppppppuVar23 | 0x80;
        pppppppuVar11 = (uint *******)((ulong)pppppppuVar23 >> 7);
        pbVar30 = pbVar30 + 1;
        bVar1 = (uint *******)0x3fff < pppppppuVar23;
        pppppppuVar23 = pppppppuVar11;
      } while (bVar1);
    }
    goto code_r0x0062a677;
  case 4:
    pppppppuVar11 = (uint *******)_ZNK6google8protobuf6MapKey14GetUInt64ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    pppppppuVar23 = pppppppuVar11;
    if (pppppppuVar11 < (uint *******)0x80) goto code_r0x0062a674;
    do {
      *pbVar30 = (byte)pppppppuVar23 | 0x80;
      pppppppuVar11 = (uint *******)((ulong)pppppppuVar23 >> 7);
      pbVar30 = pbVar30 + 1;
      bVar1 = (uint *******)0x3fff < pppppppuVar23;
      pppppppuVar23 = pppppppuVar11;
    } while (bVar1);
    goto code_r0x0062a677;
  case 5:
    uVar16 = _ZNK6google8protobuf6MapKey13GetInt32ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    pppppppuVar11 = (uint *******)(long)(int)uVar16;
    pppppppuVar8 = pppppppuVar11;
    if (0x7f < uVar16) {
      do {
        *pbVar30 = (byte)pppppppuVar8 | 0x80;
        pppppppuVar11 = (uint *******)((ulong)pppppppuVar8 >> 7);
        pbVar30 = pbVar30 + 1;
        bVar1 = (uint *******)0x3fff < pppppppuVar8;
        pppppppuVar8 = pppppppuVar11;
      } while (bVar1);
    }
    *pbVar30 = (byte)pppppppuVar11;
    goto code_r0x0062a6e1;
  case 6:
    uVar10 = _ZNK6google8protobuf6MapKey14GetUInt64ValueEv(pppppppuVar24);
    goto code_r0x0062a5dd;
  case 7:
    uVar6 = _ZNK6google8protobuf6MapKey14GetUInt32ValueEv(pppppppuVar24);
    goto code_r0x0062a640;
  case 8:
    bVar3 = _ZNK6google8protobuf6MapKey12GetBoolValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    *(byte *)((long)pppppppuVar8 + 1) = bVar3;
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 2);
    break;
  case 9:
    auVar32 = _ZNK6google8protobuf6MapKey14GetStringValueEv(pppppppuVar24);
    pppppppuVar29 = auVar32._8_8_;
    lVar20 = auVar32._0_8_;
    if (((long)pppppppuVar29 < 0x80) &&
       (pppppppuVar23 = (uint *******)((long)*pppppppuVar11 + (0xe - (long)pppppppuVar8)),
       (long)pppppppuVar29 <= (long)pppppppuVar23)) {
      *(byte *)pppppppuVar8 = 10;
      *(byte *)((long)pppppppuVar8 + 1) = auVar32[8];
      func_0x0099bda0((byte *)((long)pppppppuVar8 + 2),lVar20,pppppppuVar29);
      pppppppuVar8 = (uint *******)((byte *)((long)pppppppuVar8 + (long)pppppppuVar29) + 2);
      pppppppuVar11 = pppppppuVar23;
      break;
    }
    pppppppuVar17 = *(uint ********)(in_FS_OFFSET + 0x28);
    if (pppppppuVar17 == pppppppuStack_200) {
      pppppppuStack_200 = pppppppuStack_1f8;
      pppppppuStack_1f8 = pppppppuVar7;
      if (*pppppppuVar11 <= pppppppuVar8) {
        pppppppuStack_208 = (uint *******)&UNK_0054d29c;
        pppppppuVar8 = (uint *******)
                       _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                 (pppppppuVar11,pppppppuVar8);
      }
      pppppppuStack_208 = pppppppuStack_200;
      *(byte *)pppppppuVar8 = 10;
      pppppppuVar7 = (uint *******)((long)pppppppuVar8 + 1);
      uVar16 = auVar32._8_4_;
      uVar13 = (ulong)pppppppuVar29 & 0xffffffff;
      if (0x7f < uVar16) {
        do {
          pppppppuVar8 = pppppppuVar7;
          uVar15 = (uint)uVar13;
          *(byte *)pppppppuVar8 = (byte)uVar13 | 0x80;
          uVar13 = uVar13 >> 7;
          pppppppuVar7 = (uint *******)((long)pppppppuVar8 + 1);
        } while (0x3fff < uVar15);
      }
      pbVar30 = (byte *)((long)pppppppuVar8 + 2);
      *(byte *)pppppppuVar7 = (byte)uVar13;
      ppppppuStack_210 = (uint ******)((long)*pppppppuVar11 - (long)pbVar30);
      if ((long)ppppppuStack_210 < (long)(int)uVar16) {
        pppppppuStack_200 = pppppppuStack_1f8;
        lVar27 = (long)*pppppppuVar11 + (0x10 - (long)pbVar30);
        pppppppuStack_1f8 = pppppppuVar9;
        if ((int)lVar27 < (int)uVar16) {
          do {
            uVar16 = uVar16 - (int)lVar27;
            lVar27 = (long)(int)lVar27;
            func_0x0099bda0(pbVar30,lVar20,lVar27);
            lVar20 = lVar20 + lVar27;
            pbVar30 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                        (pppppppuVar11,pbVar30 + lVar27);
            lVar27 = (long)*pppppppuVar11 + (0x10 - (long)pbVar30);
          } while ((int)lVar27 < (int)uVar16);
        }
        func_0x0099bda0(pbVar30,lVar20,(long)(int)uVar16);
        return (uint *******)(pbVar30 + (int)uVar16);
      }
      pppppppuStack_208 = (uint *******)&UNK_0054d235;
      func_0x0099bda0(pbVar30,lVar20,(ulong)pppppppuVar29 & 0xffffffff);
      return (uint *******)(pbVar30 + (int)uVar16);
    }
    goto code_r0x0062a7db;
  case 0xd:
    pppppppuVar11 = (uint *******)_ZNK6google8protobuf6MapKey14GetUInt32ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    if ((uint)pppppppuVar11 < 0x80) {
      pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
    }
    else {
      pppppppuVar8 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
      do {
        uVar16 = (uint)pppppppuVar11;
        *pbVar30 = (byte)pppppppuVar11 | 0x80;
        pppppppuVar11 = (uint *******)((ulong)pppppppuVar8 >> 7);
        pbVar30 = pbVar30 + 1;
        pppppppuVar8 = pppppppuVar11;
      } while (0x3fff < uVar16);
    }
    goto code_r0x0062a6df;
  case 0xf:
    uVar6 = _ZNK6google8protobuf6MapKey13GetInt32ValueEv(pppppppuVar24);
code_r0x0062a640:
    *(byte *)pppppppuVar8 = 0xd;
    *(undefined4 *)((long)pppppppuVar8 + 1) = uVar6;
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 5);
    break;
  case 0x10:
    uVar10 = _ZNK6google8protobuf6MapKey13GetInt64ValueEv(pppppppuVar24);
code_r0x0062a5dd:
    *(byte *)pppppppuVar8 = 9;
    *(undefined8 *)((long)pppppppuVar8 + 1) = uVar10;
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 9);
    break;
  case 0x11:
    iVar5 = _ZNK6google8protobuf6MapKey13GetInt32ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    uVar16 = iVar5 >> 0x1f ^ iVar5 * 2;
    if (uVar16 < 0x80) {
      pppppppuVar11 = (uint *******)(ulong)uVar16;
    }
    else {
      pppppppuVar11 = (uint *******)(ulong)uVar16;
      do {
        *pbVar30 = (byte)uVar16 | 0x80;
        pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 >> 7);
        pbVar30 = pbVar30 + 1;
        bVar1 = 0x3fff < uVar16;
        uVar16 = (uint)pppppppuVar11;
      } while (bVar1);
    }
code_r0x0062a6df:
    *pbVar30 = (byte)pppppppuVar11;
    goto code_r0x0062a6e1;
  case 0x12:
    lVar20 = _ZNK6google8protobuf6MapKey13GetInt64ValueEv(pppppppuVar24);
    *(byte *)pppppppuVar8 = 8;
    pbVar30 = (byte *)((long)pppppppuVar8 + 1);
    pppppppuVar11 = (uint *******)(lVar20 >> 0x3f ^ lVar20 * 2);
    pppppppuVar23 = pppppppuVar11;
    if (pppppppuVar11 < (uint *******)0x80) goto code_r0x0062a674;
    do {
      *pbVar30 = (byte)pppppppuVar23 | 0x80;
      pppppppuVar11 = (uint *******)((ulong)pppppppuVar23 >> 7);
      pbVar30 = pbVar30 + 1;
      bVar1 = (uint *******)0x3fff < pppppppuVar23;
      pppppppuVar23 = pppppppuVar11;
    } while (bVar1);
code_r0x0062a677:
    *pbVar30 = (byte)pppppppuVar11;
code_r0x0062a6e1:
    pppppppuVar8 = (uint *******)(pbVar30 + 1);
  }
  pppppppuVar17 = pppppppuVar11;
  if (*(uint ********)(in_FS_OFFSET + 0x28) == pppppppuStack_200) {
    return pppppppuVar8;
  }
code_r0x0062a7db:
  func_0x0099bd00();
code_r0x0062a7e0:
  _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci
            (&ppppppuStack_210,&UNK_0017f6cd,0x429);
  pppppppuVar23 = (uint *******)&UNK_001669d0;
  uVar10 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc
                     (&ppppppuStack_210,&UNK_001669d0);
  _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar10);
  pppppppuVar25 = &ppppppuStack_210;
  auVar32 = _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
  pppppppuVar8 = &ppppppuStack_210;
  ppcVar22 = &pcStack_1e0;
  pppppppuVar24 = pppppppuVar7;
  pppppppuVar28 = pppppppuVar9;

  _ZN6google8protobuf8internal10WireFormat31InternalSerializeMessageSetItemEPKNS0_15FieldDescriptorERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
  :
  ppppppuVar14 = auVar32._8_8_;
  *(code ***)((long)ppppppuVar21 + -8) = ppcVar22;
  *(uint ********)((long)ppppppuVar21 + -0x10) = pppppppuVar31;
  *(uint ********)((long)ppppppuVar21 + -0x18) = pppppppuVar29;
  *(uint ********)((long)ppppppuVar21 + -0x20) = pppppppuVar28;
  *(uint ********)((long)ppppppuVar21 + -0x28) = pppppppuVar24;
  *(uint ********)((long)ppppppuVar21 + -0x30) = pppppppuVar8;
  *(long *)((long)ppppppuVar21 + -0x38) = auVar32._0_8_;
  *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a842;
  _ZNK6google8protobuf7Message11GetMetadataEv(pppppppuVar23);
  if (*pppppppuVar17 <= ppppppuVar14) {
    *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a8de;
    ppppppuVar14 = (uint ******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                             (pppppppuVar17,ppppppuVar14);
  }
  *(undefined1 *)ppppppuVar14 = 0xb;
  uVar16 = *(uint *)((long)pppppppuVar25 + 4);
  *(undefined1 *)((long)ppppppuVar14 + 1) = 0x10;
  pbVar30 = (byte *)((long)ppppppuVar14 + 2);
  uVar15 = uVar16;
  if (0x7f < uVar16) {
    do {
      *pbVar30 = (byte)uVar15 | 0x80;
      uVar16 = uVar15 >> 7;
      pbVar30 = pbVar30 + 1;
      bVar1 = 0x3fff < uVar15;
      uVar15 = uVar16;
    } while (bVar1);
  }
  *pbVar30 = (byte)uVar16;
  *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a87b;
  uVar10 = _ZNK6google8protobuf10Reflection10GetMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
                     (extraout_RDX_04,pppppppuVar23,pppppppuVar25,0);
  *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a886;
  uVar6 = _ZNK6google8protobuf11MessageLite13GetCachedSizeEv(uVar10);
  *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a89b;
  ppppppuVar14 = (uint ******)
                 _ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                           (3,uVar10,uVar6,pbVar30 + 1,pppppppuVar17);
  if (*pppppppuVar17 <= ppppppuVar14) {
    *(undefined **)((long)ppppppuVar21 + -0x40) = &UNK_0062a8f4;
    ppppppuVar14 = (uint ******)
                   _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                             (pppppppuVar17,ppppppuVar14);
  }
  *(undefined1 *)ppppppuVar14 = 0xc;
  return (uint *******)((long)ppppppuVar14 + 1);
}


