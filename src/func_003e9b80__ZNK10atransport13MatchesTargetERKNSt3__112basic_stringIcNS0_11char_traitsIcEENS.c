// Function: _ZNK10atransport13MatchesTargetERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003e9b80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZNK10atransport13MatchesTargetERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (byte *******param_1,byte *******param_2)

{
  byte *****pppppbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  byte ******ppppppbVar8;
  byte *******pppppppbVar9;
  byte ******ppppppbVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  byte ******ppppppbVar19;
  byte ******unaff_R12;
  byte *******pppppppbVar20;
  byte bVar21;
  undefined7 uVar22;
  byte ******unaff_R15;
  byte *pbVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  byte *******pppppppbStack_1a8;
  long *plStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte *pbStack_188;
  undefined *puStack_180;
  undefined4 uStack_16c;
  byte bStack_168;
  undefined7 uStack_167;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  ulong uStack_148;
  ulong uStack_140;
  long *plStack_138;
  byte *******pppppppbStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  byte *******pppppppbStack_120;
  undefined *puStack_118;
  long lStack_110;
  byte *******pppppppbStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  byte *******pppppppbStack_f0;
  byte ******ppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte ******ppppppbStack_d8;
  undefined *puStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  undefined1 auStack_b8 [8];
  byte ******ppppppbStack_b0;
  byte *******pppppppbStack_a8;
  uint uStack_9c;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte *******pppppppbStack_88;
  uint uStack_7c;
  ulong uStack_78;
  undefined8 uStack_70;
  byte *******pppppppbStack_68;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte *******pppppppbStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = *(byte *)(param_1 + 5);
  if ((bVar21 & 1) == 0) {
    ppppppbVar8 = (byte ******)(ulong)(bVar21 >> 1);
  }
  else {
    ppppppbVar8 = param_1[6];
  }
  bVar2 = *(byte *)param_2;
  pppppppbVar16 = (byte *******)(ulong)bVar2;
  pppppppbVar17 = param_2;
  pppppppbVar18 = param_1;
  if (ppppppbVar8 == (byte ******)0x0) {
code_r0x003e9e7a:
    if (((ulong)pppppppbVar16 & 1) == 0) {
      unaff_R15 = (byte ******)((ulong)pppppppbVar16 >> 1);
    }
    else {
      unaff_R15 = param_2[1];
    }
    bVar21 = *(byte *)(param_1 + 0x11);
    if ((bVar21 & 1) == 0) {
      ppppppbVar8 = (byte ******)(ulong)(bVar21 >> 1);
    }
    else {
      ppppppbVar8 = param_1[0x12];
    }
    if (unaff_R15 == ppppppbVar8) {
      if (((ulong)pppppppbVar16 & 1) == 0) {
        pppppppbVar18 = (byte *******)((long)param_2 + 1);
        if ((bVar21 & 1) != 0) goto code_r0x003e9ece;
code_r0x003e9ebd:
        pppppppbVar17 = (byte *******)((long)param_1 + 0x89);
      }
      else {
        pppppppbVar18 = (byte *******)param_2[2];
        if ((bVar21 & 1) == 0) goto code_r0x003e9ebd;
code_r0x003e9ece:
        pppppppbVar17 = (byte *******)param_1[0x13];
      }
      puStack_d0 = &UNK_003e9edd;
      iVar7 = func_0x0099bf90(pppppppbVar18,pppppppbVar17,unaff_R15);
      if (iVar7 == 0) goto code_r0x003ea0ea;
    }
    bVar21 = *(byte *)(param_1 + 8);
    if ((bVar21 & 1) == 0) {
      pppppppbVar9 = (byte *******)(ulong)(bVar21 >> 1);
    }
    else {
      pppppppbVar9 = (byte *******)param_1[9];
    }
    pppppppbStack_c0 = param_2;
    if ((unaff_R15 == (byte ******)0x0) || (pppppppbVar9 == (byte *******)0x0)) {
      uVar15 = 1;
      if (pppppppbVar9 != (byte *******)0x0 || unaff_R15 != (byte ******)0x0) goto code_r0x003ea00d;
    }
    else {
      if (((ulong)pppppppbVar16 & 1) == 0) {
        ppppppbVar8 = (byte ******)((long)param_2 + 1);
        bVar2 = *(byte *)ppppppbVar8;
      }
      else {
        ppppppbVar8 = param_2[2];
        bVar2 = *(byte *)ppppppbVar8;
      }
      if ((((((bVar2 == 0x70) && (*(byte *)((long)ppppppbVar8 + 1) == 0x72)) &&
            (*(byte *)((long)ppppppbVar8 + 2) == 0x6f)) &&
           ((*(byte *)((long)ppppppbVar8 + 3) == 100 && (*(byte *)((long)ppppppbVar8 + 4) == 0x75)))
           ) && (*(byte *)((long)ppppppbVar8 + 5) == 99)) &&
         ((*(byte *)((long)ppppppbVar8 + 6) == 0x74 && (*(byte *)((long)ppppppbVar8 + 7) == 0x3a))))
      {
        if ((bVar21 & 1) == 0) {
          ppppppbVar10 = (byte ******)((long)param_1 + 0x41);
        }
        else {
          ppppppbVar10 = param_1[10];
        }
        pppppppbVar17 = (byte *******)0x0;
        do {
          pppppppbVar18 = (byte *******)(ulong)*(byte *)((long)ppppppbVar10 + (long)pppppppbVar17);
          if (*(byte *)((long)ppppppbVar10 + (long)pppppppbVar17) !=
              *(byte *)((long)(ppppppbVar8 + 1) + (long)pppppppbVar17)) goto code_r0x003ea00d;
          pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
        } while (pppppppbVar9 != pppppppbVar17);
        if (*(byte *)((long)(ppppppbVar8 + 1) + (long)pppppppbVar9) == 0) goto code_r0x003ea0ea;
      }
code_r0x003ea00d:
      bVar21 = *(byte *)(param_1 + 0xb);
      if ((bVar21 & 1) == 0) {
        unaff_R12 = (byte ******)(ulong)(bVar21 >> 1);
        ppppppbVar8 = unaff_R12;
        if (unaff_R15 != (byte ******)0x0) goto code_r0x003ea02c;
code_r0x003ea04d:
        uVar15 = 1;
        unaff_R12 = (byte ******)((ulong)ppppppbVar8 | (ulong)unaff_R15);
        if (unaff_R12 == (byte ******)0x0) goto code_r0x003ea189;
      }
      else {
        unaff_R12 = param_1[0xc];
        ppppppbVar8 = unaff_R12;
        if (unaff_R15 == (byte ******)0x0) goto code_r0x003ea04d;
code_r0x003ea02c:
        ppppppbVar8 = (byte ******)0x0;
        if (unaff_R12 == (byte ******)0x0) goto code_r0x003ea04d;
        if (((ulong)pppppppbVar16 & 1) == 0) {
          param_2 = (byte *******)((long)param_2 + 1);
          bVar2 = *(byte *)param_2;
        }
        else {
          param_2 = (byte *******)param_2[2];
          bVar2 = *(byte *)param_2;
        }
        if ((((bVar2 == 0x6d) && (*(byte *)((long)param_2 + 1) == 0x6f)) &&
            (*(byte *)((long)param_2 + 2) == 100)) &&
           (((*(byte *)((long)param_2 + 3) == 0x65 && (*(byte *)((long)param_2 + 4) == 0x6c)) &&
            (*(byte *)((long)param_2 + 5) == 0x3a)))) {
          if ((bVar21 & 1) == 0) {
            pppppppbStack_c8 = (byte *******)((long)param_1 + 0x59);
          }
          else {
            pppppppbStack_c8 = (byte *******)param_1[0xd];
          }
          puStack_d0 = &UNK_003ea0a5;
          plVar11 = (long *)func_0x0099be00();
          ppppppbVar8 = (byte ******)0x0;
          do {
            pppppppbVar17 = (byte *******)0x5f;
            if ((*(byte *)(*plVar11 +
                          (long)(char)*(byte *)((long)pppppppbStack_c8 + (long)ppppppbVar8) * 2) & 8
                ) != 0) {
              pppppppbVar17 =
                   (byte *******)
                   (ulong)(uint)(int)(char)*(byte *)((long)pppppppbStack_c8 + (long)ppppppbVar8);
            }
            pppppppbVar18 = pppppppbStack_c8;
            if ((byte)pppppppbVar17 != *(byte *)((long)param_2 + (long)ppppppbVar8 + 6U))
            goto code_r0x003ea0da;
            ppppppbVar8 = (byte ******)((long)ppppppbVar8 + 1);
          } while (unaff_R12 != ppppppbVar8);
          if (*(byte *)((long)param_2 + (long)unaff_R12 + 6U) == 0) goto code_r0x003ea0ea;
        }
      }
code_r0x003ea0da:
      bVar21 = *(byte *)(param_1 + 0xe);
      if ((bVar21 & 1) == 0) {
        ppppppbVar8 = (byte ******)(ulong)(bVar21 >> 1);
      }
      else {
        ppppppbVar8 = param_1[0xf];
      }
      uVar15 = (ulong)(unaff_R15 == (byte ******)0x0 && ppppppbVar8 == (byte ******)0x0);
      if ((unaff_R15 != (byte ******)0x0) && (ppppppbVar8 != (byte ******)0x0)) {
        if (((ulong)pppppppbVar16 & 1) == 0) {
          pppppppbVar17 = (byte *******)((long)pppppppbStack_c0 + 1);
          bVar2 = *(byte *)pppppppbVar17;
        }
        else {
          pppppppbVar17 = (byte *******)pppppppbStack_c0[2];
          bVar2 = *(byte *)pppppppbVar17;
        }
        if ((((bVar2 == 100) && (*(byte *)((long)pppppppbVar17 + 1) == 0x65)) &&
            (*(byte *)((long)pppppppbVar17 + 2) == 0x76)) &&
           (((*(byte *)((long)pppppppbVar17 + 3) == 0x69 &&
             (*(byte *)((long)pppppppbVar17 + 4) == 99)) &&
            ((*(byte *)((long)pppppppbVar17 + 5) == 0x65 &&
             (*(byte *)((long)pppppppbVar17 + 6) == 0x3a)))))) {
          if ((bVar21 & 1) == 0) {
            param_1 = (byte *******)((long)param_1 + 0x71);
          }
          else {
            param_1 = (byte *******)param_1[0x10];
          }
          ppppppbVar10 = (byte ******)0x0;
          do {
            if (*(byte *)((long)param_1 + (long)ppppppbVar10) !=
                *(byte *)((long)pppppppbVar17 + (long)ppppppbVar10 + 7U)) goto code_r0x003ea187;
            ppppppbVar10 = (byte ******)((long)ppppppbVar10 + 1);
          } while (ppppppbVar8 != ppppppbVar10);
          uVar15 = (ulong)(*(byte *)((long)pppppppbVar17 + (long)ppppppbVar8 + 7U) == 0);
        }
        else {
code_r0x003ea187:
          uVar15 = 0;
        }
      }
    }
code_r0x003ea189:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar15;
    }
    puStack_d0 = &UNK_003ea1af;
    func_0x0099bd00();
  }
  else {
    if ((bVar2 & 1) != 0) {
      unaff_R12 = param_2[1];
      if (unaff_R12 != ppppppbVar8) goto code_r0x003e9c0f;
code_r0x003e9be3:
      if ((bVar2 & 1) == 0) {
        pppppppbVar18 = (byte *******)((long)param_2 + 1);
        if ((bVar21 & 1) != 0) goto code_r0x003e9bfe;
code_r0x003e9bf0:
        pppppppbVar17 = (byte *******)((long)param_1 + 0x29);
      }
      else {
        pppppppbVar18 = (byte *******)param_2[2];
        if ((bVar21 & 1) == 0) goto code_r0x003e9bf0;
code_r0x003e9bfe:
        pppppppbVar17 = (byte *******)param_1[7];
      }
      puStack_d0 = &UNK_003e9c07;
      iVar7 = func_0x0099bf90();
      if (iVar7 != 0) goto code_r0x003e9c0f;
code_r0x003ea0ea:
      uVar15 = 1;
      goto code_r0x003ea189;
    }
    unaff_R12 = (byte ******)(ulong)(bVar2 >> 1);
    if (unaff_R12 == ppppppbVar8) goto code_r0x003e9be3;
code_r0x003e9c0f:
    if (*(int *)((long)param_1 + 0x24) != 1) goto code_r0x003e9e7a;
    pppppppbVar9 = (byte *******)((long)param_2 + 1);
    pppppppbVar20 = pppppppbVar9;
    if ((bVar2 & 1) != 0) {
      pppppppbVar20 = (byte *******)param_2[2];
    }
    pppppppbVar16 = param_1 + 5;
    puStack_d0 = &UNK_003e9c53;
    pppppppbStack_c0 = param_2;
    cVar6 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (pppppppbVar20,unaff_R12,&UNK_00162e1d,4);
    if (cVar6 == '\0') {
      bVar24 = (*(byte *)pppppppbStack_c0 & 1) != 0;
      if (bVar24) {
        pppppppbVar9 = (byte *******)pppppppbStack_c0[2];
      }
      ppppppbVar8 = (byte ******)(ulong)(*(byte *)pppppppbStack_c0 >> 1);
      if (bVar24) {
        ppppppbVar8 = pppppppbStack_c0[1];
      }
      puStack_d0 = &UNK_003e9c85;
      cVar6 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (pppppppbVar9,ppppppbVar8,&UNK_001865b7,4);
      if (cVar6 != '\0') goto code_r0x003e9c89;
    }
    else {
code_r0x003e9c89:
      pppppppbVar20 = (byte *******)((long)pppppppbVar20 + 4);
    }
    auStack_58 = (undefined1  [8])0x0;
    uStack_50 = 0;
    pppppppbStack_48 = (byte *******)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    pppppppbStack_68 = (byte *******)0x0;
    uStack_7c = 0xffffffff;
    pppppppbVar17 = (byte *******)auStack_58;
    puStack_d0 = &UNK_003e9cc5;
    pppppppbVar18 = pppppppbVar16;
    cVar6 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                      (pppppppbVar16,pppppppbVar17,&uStack_7c,0,&uStack_78);
    unaff_R15 = (byte ******)CONCAT71((int7)((ulong)pppppppbVar9 >> 8),1);
    pppppppbVar9 = pppppppbStack_68;
    param_2 = pppppppbVar20;
    if (cVar6 == '\0') {
joined_r0x003e9e39:
      pppppppbStack_68 = pppppppbVar9;
      if ((uStack_78 & 1) != 0) {
        pppppppbVar17 = (byte *******)(uStack_78 & 0xfffffffffffffffe);
        puStack_d0 = &UNK_003e9e4c;
        _ZdaPvSt11align_val_t();
        pppppppbVar18 = pppppppbVar9;
      }
      if (((ulong)auStack_58 & 1) != 0) {
        pppppppbVar17 = (byte *******)((ulong)auStack_58 & 0xfffffffffffffffe);
        puStack_d0 = &UNK_003e9e63;
        pppppppbVar18 = pppppppbStack_48;
        _ZdaPvSt11align_val_t();
      }
      uVar15 = 1;
      if ((char)unaff_R15 != '\0') {
        pppppppbVar16 = (byte *******)(ulong)*(byte *)pppppppbStack_c0;
        param_2 = pppppppbStack_c0;
        goto code_r0x003e9e7a;
      }
      goto code_r0x003ea189;
    }
    auStack_98 = (undefined1  [8])0x0;
    uStack_90 = 0;
    pppppppbStack_88 = (byte *******)0x0;
    uStack_9c = uStack_7c;
    puStack_d0 = &UNK_003e9cf3;
    pppppppbVar18 = pppppppbVar20;
    ppppppbVar8 = (byte ******)func_0x0099bcf0();
    if (ppppppbVar8 < (byte ******)0xfffffffffffffff7) {
      if (ppppppbVar8 < (byte ******)0x17) {
        auStack_b8[0] = (char)ppppppbVar8 * '\x02';
        pppppppbVar9 = (byte *******)(auStack_b8 + 1);
      }
      else {
        lVar12 = 0x1a;
        if (((ulong)ppppppbVar8 | 7) != 0x17) {
          lVar12 = ((ulong)ppppppbVar8 | 7) + 1;
        }
        puStack_d0 = &UNK_003e9d3b;
        pppppppbVar9 = (byte *******)_Znwm(lVar12);
        auStack_b8 = (undefined1  [8])(lVar12 + 1);
        ppppppbStack_b0 = ppppppbVar8;
        pppppppbStack_a8 = pppppppbVar9;
      }
      puStack_d0 = &UNK_003e9d64;
      func_0x0099bd90(pppppppbVar9,pppppppbVar20,ppppppbVar8);
      *(byte *)((long)pppppppbVar9 + (long)ppppppbVar8) = 0;
      pppppppbVar18 = (byte *******)auStack_b8;
      pppppppbVar17 = (byte *******)auStack_98;
      puStack_d0 = &UNK_003e9d89;
      cVar6 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                        (pppppppbVar18,pppppppbVar17,&uStack_9c,0,&uStack_78);
      if (cVar6 == '\0') {
code_r0x003e9def:
        if (((ulong)auStack_b8 & 1) != 0) {
          pppppppbVar17 = (byte *******)((ulong)auStack_b8 & 0xfffffffffffffffe);
          puStack_d0 = &UNK_003e9e0f;
          pppppppbVar18 = pppppppbStack_a8;
          _ZdaPvSt11align_val_t();
        }
        pppppppbVar16 = (byte *******)((ulong)auStack_98 & 0xff);
code_r0x003e9e16:
        uVar22 = (undefined7)((ulong)pppppppbVar9 >> 8);
        unaff_R15 = (byte ******)CONCAT71(uVar22,1);
        unaff_R12 = ppppppbVar8;
        pppppppbVar9 = pppppppbStack_68;
        if (((ulong)pppppppbVar16 & 1) == 0) goto joined_r0x003e9e39;
        unaff_R15 = (byte ******)CONCAT71(uVar22,1);
      }
      else {
        uVar15 = uStack_50;
        if (((ulong)auStack_58 & 1) == 0) {
          uVar15 = (ulong)auStack_58 >> 1 & 0x7f;
        }
        bVar21 = auStack_98[0];
        if (((ulong)auStack_98 & 1) == 0) {
          if (uVar15 == auStack_98[0] >> 1) goto code_r0x003e9dc2;
          goto code_r0x003e9def;
        }
        if (uVar15 != uStack_90) goto code_r0x003e9def;
code_r0x003e9dc2:
        pppppppbVar18 = pppppppbStack_48;
        if (((ulong)auStack_58 & 1) == 0) {
          pppppppbVar18 = (byte *******)(auStack_58 + 1);
        }
        pppppppbVar17 = pppppppbStack_88;
        if (((ulong)auStack_98 & 1) == 0) {
          pppppppbVar17 = (byte *******)(auStack_98 + 1);
        }
        puStack_d0 = &UNK_003e9de7;
        iVar7 = func_0x0099bf90();
        uVar5 = uStack_7c;
        uVar4 = uStack_9c;
        if (iVar7 != 0) goto code_r0x003e9def;
        pppppppbVar9 = (byte *******)(ulong)uStack_7c;
        ppppppbVar8 = (byte ******)(ulong)uStack_9c;
        if (((ulong)auStack_b8 & 1) != 0) {
          pppppppbVar17 = (byte *******)((ulong)auStack_b8 & 0xfffffffffffffffe);
          puStack_d0 = &UNK_003e9fb6;
          pppppppbVar18 = pppppppbStack_a8;
          _ZdaPvSt11align_val_t();
          bVar21 = auStack_98[0];
        }
        pppppppbVar16 = (byte *******)(ulong)bVar21;
        if (uVar5 != uVar4) goto code_r0x003e9e16;
        if ((bVar21 & 1) == 0) {
          unaff_R15 = (byte ******)0x0;
          unaff_R12 = ppppppbVar8;
          pppppppbVar9 = pppppppbStack_68;
          goto joined_r0x003e9e39;
        }
        unaff_R15 = (byte ******)0x0;
      }
      pppppppbVar17 = (byte *******)((ulong)auStack_98 & 0xfffffffffffffffe);
      puStack_d0 = &UNK_003e9e35;
      pppppppbVar18 = pppppppbStack_88;
      _ZdaPvSt11align_val_t();
      unaff_R12 = ppppppbVar8;
      pppppppbVar9 = pppppppbStack_68;
      goto joined_r0x003e9e39;
    }
  }
  puStack_d0 = &UNK_003ea1b4;
  func_0x0032e8f0();
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppbVar20 = pppppppbVar18 + 1;
  uStack_100 = 1;
  puStack_118 = &UNK_003ea1fb;
  pppppppbVar9 = pppppppbVar17;
  pppppppbStack_108 = pppppppbVar20;
  pppppppbStack_f0 = pppppppbVar16;
  ppppppbStack_e8 = unaff_R12;
  pppppppbStack_e0 = param_1;
  ppppppbStack_d8 = unaff_R15;
  puStack_d0 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv();
  pppppppbVar16 = pppppppbVar18 + 6;
  puStack_118 = &UNK_003ea204;
  lStack_110 = _ZNSt3__16chrono12steady_clock3nowEv();
  lStack_110 = (long)pppppppbVar17 * 1000000 + lStack_110;
  plVar11 = &lStack_110;
  do {
    if (*(byte *)((long)pppppppbVar18 + 1) != 0) {
      uVar22 = (undefined7)((ulong)pppppppbVar16 >> 8);
      bVar21 = 1;
      goto code_r0x003ea243;
    }
    puStack_118 = &UNK_003ea234;
    pppppppbVar9 = (byte *******)&pppppppbStack_108;
    pppppppbVar20 = pppppppbVar16;
    iVar7 = func_0x003d06b0(pppppppbVar16,&pppppppbStack_108,plVar11);
  } while (iVar7 != 1);
  bVar21 = *(byte *)((long)pppppppbVar18 + 1);
  uVar22 = 0;
code_r0x003ea243:
  bVar2 = *(byte *)pppppppbVar18;
  if ((char)uStack_100 == '\x01') {
    puStack_118 = &UNK_003ea255;
    pppppppbVar20 = pppppppbStack_108;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return CONCAT71(uVar22,bVar21 & bVar2) & 0xffffffff;
  }
  puStack_118 = &UNK_003ea27c;
  func_0x0099bd00();
  pbVar23 = (byte *)((ulong)pppppppbVar9 & 0xffffffff);
  uStack_148 = *(ulong *)(in_FS_OFFSET + 0x28);
  pppppppbVar16 = pppppppbVar20 + 1;
  puStack_180 = &UNK_003ea2b0;
  pppppppbVar17 = pppppppbVar16;
  uStack_140 = (ulong)bVar2;
  plStack_138 = plVar11;
  pppppppbStack_130 = param_2;
  pppppppbStack_120 = (byte *******)&pppppppbStack_108;
  puStack_118 = (undefined *)&puStack_d0;
  bStack_128 = bVar21;
  uStack_127 = uVar22;
  _ZNSt3__15mutex4lockEv();
  if (*(byte *)((long)pppppppbVar20 + 1) == 0) {
    *(byte *)((long)pppppppbVar20 + 1) = 1;
    *(byte *)pppppppbVar20 = (byte)pbVar23;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      puStack_180 = &UNK_003ea341;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar6 != '\0') {
        puStack_180 = &UNK_003ea34a;
        plVar11 = (long *)func_0x0099bce0();
        uStack_16c = (undefined4)*plVar11;
        puStack_180 = &UNK_003ea378;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_150,&UNK_0017a1e0,0x449,1,0,0xffffffff);
        puStack_180 = &UNK_003ea380;
        param_2 = (byte *******)_ZN7android4base10LogMessage6streamEv(auStack_150);
        pbVar23 = &bStack_168;
        puStack_180 = &UNK_003ea39c;
        _ZN7android4base12StringPrintfEPKcz(pbVar23,&UNK_0015c8b0,(ulong)pppppppbVar9 & 0xff);
        puStack_180 = &UNK_003ea3a7;
        func_0x0032e5a0(param_2,pbVar23);
        if ((bStack_168 & 1) != 0) {
          puStack_180 = &UNK_003ea3be;
          _ZdaPvSt11align_val_t(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
        }
        puStack_180 = &UNK_003ea3c7;
        _ZN7android4base10LogMessageD2Ev(auStack_150);
        *(undefined4 *)plVar11 = uStack_16c;
      }
    }
    puStack_180 = &UNK_003ea307;
    _ZNSt3__115recursive_mutex6unlockEv(pppppppbVar16);
    pppppppbVar20 = pppppppbVar20 + 6;
    puStack_180 = &UNK_003ea313;
    pppppppbVar17 = pppppppbVar20;
    _ZNSt3__118condition_variable10notify_oneEv();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_148) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_148) {
    uVar15 = pthread_mutex_unlock(pppppppbVar16);
    return uVar15;
  }
  puStack_180 = &UNK_003ea3d8;
  plStack_1a0 = (long *)func_0x0099bd00();
  pppppppbStack_1a8 = (byte *******)&UNK_003ea3fb;
  pppppppbStack_198 = pppppppbVar20;
  pppppppbStack_190 = pppppppbVar16;
  pbStack_188 = pbVar23;
  puStack_180 = (undefined *)&puStack_118;
  _ZN18ConnectionWaitable24SetConnectionEstablishedEb(pppppppbVar17[0x29],0);
  pppppppbStack_1a8 = (byte *******)&UNK_003ea407;
  func_0x003e26d0(pppppppbVar17 + 0x3a);
  pppppppbVar16 = (byte *******)pppppppbVar17[0x32];
  if (pppppppbVar16 == pppppppbVar17 + 0x2e) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    if (pppppppbVar16 == (byte *******)0x0) goto code_r0x003ea431;
  }
  pppppppbStack_1a8 = (byte *******)&UNK_003ea431;
  (**(code **)((long)*pppppppbVar16 + lVar12))();
code_r0x003ea431:
  ppppppbVar8 = pppppppbVar17[0x2c];
  if (ppppppbVar8 != (byte ******)0x0) {
    LOCK();
    ppppppbVar10 = ppppppbVar8 + 1;
    pppppbVar1 = *ppppppbVar10;
    *ppppppbVar10 = (byte *****)((long)*ppppppbVar10 + -1);
    UNLOCK();
    if (pppppbVar1 == (byte *****)0x0) {
      pppppppbStack_1a8 = (byte *******)&UNK_003ea458;
      (*(code *)(*ppppppbVar8)[2])(ppppppbVar8);
      pppppppbStack_1a8 = (byte *******)&UNK_003ea460;
      _ZNSt3__119__shared_weak_count14__release_weakEv(ppppppbVar8);
    }
  }
  ppppppbVar8 = pppppppbVar17[0x2a];
  if (ppppppbVar8 != (byte ******)0x0) {
    LOCK();
    ppppppbVar10 = ppppppbVar8 + 1;
    pppppbVar1 = *ppppppbVar10;
    *ppppppbVar10 = (byte *****)((long)*ppppppbVar10 + -1);
    UNLOCK();
    if (pppppbVar1 == (byte *****)0x0) {
      pppppppbStack_1a8 = (byte *******)&UNK_003ea487;
      (*(code *)(*ppppppbVar8)[2])(ppppppbVar8);
      pppppppbStack_1a8 = (byte *******)&UNK_003ea48f;
      _ZNSt3__119__shared_weak_count14__release_weakEv(ppppppbVar8);
    }
  }
  pppppppbStack_1a8 = (byte *******)&UNK_003ea49b;
  func_0x003f08a0(pppppppbVar17 + 0x23);
  if (pppppppbVar17[0x21] != (byte ******)0x0) {
    pppppppbVar16 = (byte *******)pppppppbVar17[0x20];
    pppppbVar1 = pppppppbVar17[0x1f][1];
    (*pppppppbVar16)[1] = pppppbVar1;
    *pppppbVar1 = (byte ****)*pppppppbVar16;
    pppppppbVar17[0x21] = (byte ******)0x0;
    while (pppppppbVar16 != pppppppbVar17 + 0x1f) {
      pppppppbVar18 = (byte *******)pppppppbVar16[1];
      pppppppbStack_1a8 = (byte *******)&UNK_003ea4ee;
      _ZdaPvSt11align_val_t(pppppppbVar16,0x18);
      pppppppbVar16 = pppppppbVar18;
    }
  }
  ppppppbVar8 = pppppppbVar17[0x1a];
  if (ppppppbVar8 != (byte ******)0x0) {
    ppppppbVar10 = pppppppbVar17[0x1b];
    ppppppbVar19 = ppppppbVar8;
    if (ppppppbVar8 != ppppppbVar10) {
      do {
        if (((ulong)ppppppbVar10[-3] & 1) != 0) {
          pppppppbStack_1a8 = (byte *******)&UNK_003ea541;
          _ZdaPvSt11align_val_t(ppppppbVar10[-1],(ulong)ppppppbVar10[-3] & 0xfffffffffffffffe);
        }
        ppppppbVar10 = ppppppbVar10 + -3;
      } while (ppppppbVar10 != ppppppbVar8);
      ppppppbVar19 = pppppppbVar17[0x1a];
    }
    pppppppbVar17[0x1b] = ppppppbVar8;
    pppppppbStack_1a8 = (byte *******)&UNK_003ea560;
    _ZdaPvSt11align_val_t(ppppppbVar19,(long)pppppppbVar17[0x1c] - (long)ppppppbVar19);
  }
  if (((ulong)pppppppbVar17[0x11] & 1) == 0) {
    bVar21 = *(byte *)(pppppppbVar17 + 0xe);
  }
  else {
    pppppppbStack_1a8 = (byte *******)&UNK_003ea5bb;
    _ZdaPvSt11align_val_t(pppppppbVar17[0x13],(ulong)pppppppbVar17[0x11] & 0xfffffffffffffffe);
    bVar21 = *(byte *)(pppppppbVar17 + 0xe);
  }
  if ((bVar21 & 1) == 0) {
    bVar21 = *(byte *)(pppppppbVar17 + 0xb);
  }
  else {
    pppppppbStack_1a8 = (byte *******)&UNK_003ea5d5;
    _ZdaPvSt11align_val_t(pppppppbVar17[0x10],(ulong)pppppppbVar17[0xe] & 0xfffffffffffffffe);
    bVar21 = *(byte *)(pppppppbVar17 + 0xb);
  }
  if ((bVar21 & 1) == 0) {
    bVar21 = *(byte *)(pppppppbVar17 + 8);
  }
  else {
    pppppppbStack_1a8 = (byte *******)&UNK_003ea5ec;
    _ZdaPvSt11align_val_t(pppppppbVar17[0xd],(ulong)pppppppbVar17[0xb] & 0xfffffffffffffffe);
    bVar21 = *(byte *)(pppppppbVar17 + 8);
  }
  if ((bVar21 & 1) == 0) {
    bVar21 = *(byte *)(pppppppbVar17 + 5);
  }
  else {
    pppppppbStack_1a8 = (byte *******)&UNK_003ea603;
    _ZdaPvSt11align_val_t(pppppppbVar17[10],(ulong)pppppppbVar17[8] & 0xfffffffffffffffe);
    bVar21 = *(byte *)(pppppppbVar17 + 5);
  }
  if ((bVar21 & 1) != 0) {
    pppppppbStack_1a8 = (byte *******)&UNK_003ea592;
    _ZdaPvSt11align_val_t(pppppppbVar17[7],(ulong)pppppppbVar17[5] & 0xfffffffffffffffe);
  }
  pppppppbStack_1a8 = pppppppbStack_198;
  uStack_1b0 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppppbVar8 = *pppppppbVar17;
  plStack_1a0 = plVar11;
  pppppppbStack_198 = param_2;
  if (ppppppbVar8 != pppppppbVar17[1]) {
    lVar12 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar12 + 0x10) == '\x01') {
      lVar12 = _Z19fdevent_get_ambientv();
      lVar13 = _ZN7android4base11GetThreadIdEv();
      lVar12 = *(long *)(lVar12 + 8);
      if (lVar12 != lVar13) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_1b8,&UNK_00180212,0x16f,6,0,0xffffffff);
          uVar14 = _ZN7android4base10LogMessage6streamEv(auStack_1b8);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00165d45,0xe);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00162e7f,0x29);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0015aef8,2);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00183451,0x1c);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0017ed76,0x2c);
          uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,lVar12);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00165f20,0x1f);
          uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,lVar13);
          func_0x0032eb30(uVar14,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_1b8);
        } while( true );
      }
    }
    ppppppbVar8 = *pppppppbVar17;
    ppppppbVar10 = pppppppbVar17[1];
    if (ppppppbVar8 != ppppppbVar10) {
      do {
        **ppppppbVar8 = (byte ****)0x0;
        ppppppbVar8 = ppppppbVar8 + 1;
      } while (ppppppbVar8 != ppppppbVar10);
      ppppppbVar8 = *pppppppbVar17;
    }
    pppppppbVar17[1] = ppppppbVar8;
  }
  if (ppppppbVar8 == (byte ******)0x0) {
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_1b0) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppppbVar17[1] = ppppppbVar8;
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_1b0) {
      uVar15 = free(ppppppbVar8,(long)pppppppbVar17[2] - (long)ppppppbVar8);
      return uVar15;
    }
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  uVar15 = (*pcVar3)();
  return uVar15;
}


