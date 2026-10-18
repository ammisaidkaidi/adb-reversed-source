// Function: _Z11ElideMiddleRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
// Address: 00352f60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0035350d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00353512) */
/* WARNING: Removing unreachable block (ram,0x00353518) */
/* WARNING: Removing unreachable block (ram,0x00353529) */

ulong * _Z11ElideMiddleRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
                  (ulong *param_1,ulong *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong extraout_RDX;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *unaff_R14;
  ulong *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_1b0 [8];
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  ulong *puStack_190;
  ulong *puStack_188;
  undefined *apuStack_180 [2];
  ulong *puStack_170;
  ulong *puStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [4];
  undefined4 uStack_154;
  undefined8 uStack_150;
  ulong *puStack_148;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  byte *pbStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  undefined *apuStack_108 [2];
  undefined1 auStack_f8 [8];
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  byte *pbStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined *apuStack_b0 [2];
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 auStack_70 [8];
  ulong *puStack_68;
  ulong *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar5 = param_1;
  if ((*param_2 & 1) == 0) {
    param_1[2] = param_2[2];
    uVar17 = *(undefined4 *)((long)param_2 + 4);
    uVar14 = param_2[1];
    uVar19 = *(undefined4 *)((long)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((long)param_1 + 4) = uVar17;
    *(int *)(param_1 + 1) = (int)uVar14;
    *(undefined4 *)((long)param_1 + 0xc) = uVar19;
  }
  else {
    puVar4 = param_2 + 1;
    param_2 = (ulong *)param_2[2];
    apuStack_b0[0] = &UNK_00352fb7;
    func_0x00330340(param_1,param_2,*puVar4);
  }
  bVar1 = (byte)*param_1;
  puVar4 = (ulong *)(ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    puVar13 = (ulong *)(ulong)(bVar1 >> 1);
  }
  else {
    puVar13 = (ulong *)param_1[1];
  }
  if (param_3 < (byte *)((long)puVar13 + 3)) {
    param_3 = param_3 + -3;
    uStack_98 = (ulong *)((ulong)param_3 >> 1);
    pbVar12 = (byte *)param_1[2];
    if (uStack_98 <= puVar13) {
      puVar13 = uStack_98;
    }
    if (puVar13 < (ulong *)0x17) {
      auStack_70[0] = (char)puVar13 * '\x02';
      unaff_R14 = (ulong *)(auStack_70 + 1);
    }
    else {
      lVar9 = 0x1a;
      if (((ulong)puVar13 | 7) != 0x17) {
        lVar9 = ((ulong)puVar13 | 7) + 1;
      }
      apuStack_b0[0] = &UNK_00353035;
      pbStack_a0 = param_3;
      unaff_R14 = (ulong *)_Znwm(lVar9,pbVar12);
      auStack_70 = (undefined1  [8])(lVar9 + 1);
      param_3 = pbStack_a0;
      puStack_68 = puVar13;
      puStack_60 = unaff_R14;
    }
    if ((bVar1 & 1) == 0) {
      pbVar12 = (byte *)((long)param_1 + 1);
    }
    apuStack_b0[0] = &UNK_00353068;
    func_0x0099bd90(unaff_R14,pbVar12,puVar13);
    *(byte *)((long)unaff_R14 + (long)puVar13) = 0;
    param_2 = (ulong *)&UNK_001678db;
    puVar5 = (ulong *)auStack_70;
    apuStack_b0[0] = &UNK_0035307d;
    puVar4 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
    puStack_48 = (ulong *)puVar4[2];
    uStack_58 = *puVar4;
    uStack_50 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    bVar1 = (byte)*param_1;
    if ((bVar1 & 1) == 0) {
      puVar7 = (ulong *)(ulong)(bVar1 >> 1);
    }
    else {
      puVar7 = (ulong *)param_1[1];
    }
    puVar15 = (ulong *)((long)puVar7 - (long)uStack_98);
    puVar4 = puVar15;
    if (uStack_98 <= puVar7) {
      pbVar12 = (byte *)param_1[2];
      if (param_3 < (byte *)0x2e) {
        auStack_88[0] = (char)uStack_98 * '\x02';
        puVar5 = (ulong *)(auStack_88 + 1);
      }
      else {
        lVar9 = 0x1a;
        if (((ulong)uStack_98 | 7) != 0x17) {
          lVar9 = ((ulong)uStack_98 | 7) + 1;
        }
        apuStack_b0[0] = &UNK_003530f8;
        puVar5 = (ulong *)_Znwm(lVar9);
        param_3 = (byte *)(lVar9 + 1);
        puStack_80 = uStack_98;
        auStack_88 = (undefined1  [8])param_3;
        puStack_78 = puVar5;
      }
      puVar4 = uStack_98;
      if ((bVar1 & 1) == 0) {
        pbVar12 = (byte *)((long)param_1 + 1);
      }
      puVar13 = (ulong *)(pbVar12 + (long)puVar15);
      apuStack_b0[0] = &UNK_00353133;
      func_0x0099bd90(puVar5,puVar13,uStack_98);
      *(byte *)((long)puVar5 + (long)puVar4) = 0;
      puVar5 = &uStack_58;
      param_2 = (ulong *)auStack_88;
      apuStack_b0[0] = &UNK_00353145;
      puVar6 = (undefined8 *)func_0x0032e820();
      uVar17 = *(undefined4 *)puVar6;
      puVar7 = (ulong *)*puVar6;
      uVar19 = *(undefined4 *)(puVar6 + 1);
      unaff_R14 = (ulong *)puVar6[2];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      uVar18 = *(undefined4 *)((long)puVar6 + 4);
      uVar20 = *(undefined4 *)((long)puVar6 + 0xc);
      if ((*param_1 & 1) != 0) {
        puVar5 = (ulong *)param_1[2];
        param_2 = (ulong *)(*param_1 & 0xfffffffffffffffe);
        apuStack_b0[0] = &UNK_00353176;
        uStack_98 = puVar7;
        uStack_90 = uVar19;
        uStack_8c = *(undefined4 *)((long)puVar6 + 0xc);
        _ZdaPvSt11align_val_t();
        uVar17 = (undefined4)uStack_98;
        uVar18 = uStack_98._4_4_;
        uVar19 = uStack_90;
        uVar20 = uStack_8c;
      }
      *(undefined4 *)param_1 = uVar17;
      *(undefined4 *)((long)param_1 + 4) = uVar18;
      *(undefined4 *)(param_1 + 1) = uVar19;
      *(undefined4 *)((long)param_1 + 0xc) = uVar20;
      param_1[2] = (ulong)unaff_R14;
      puVar7 = puStack_48;
      if (((ulong)auStack_88 & 1) != 0) {
        param_2 = (ulong *)((ulong)auStack_88 & 0xfffffffffffffffe);
        apuStack_b0[0] = &UNK_003531d9;
        puVar5 = puStack_78;
        _ZdaPvSt11align_val_t();
        puVar7 = puStack_48;
      }
      puVar15 = puStack_60;
      puStack_48 = puVar7;
      if ((uStack_58 & 1) != 0) {
        param_2 = (ulong *)(uStack_58 & 0xfffffffffffffffe);
        apuStack_b0[0] = &UNK_003531f0;
        _ZdaPvSt11align_val_t();
        puVar5 = puVar7;
        puVar15 = puStack_60;
      }
      puStack_60 = puVar15;
      if (((ulong)auStack_70 & 1) != 0) {
        param_2 = (ulong *)((ulong)auStack_70 & 0xfffffffffffffffe);
        apuStack_b0[0] = &UNK_003531a7;
        _ZdaPvSt11align_val_t();
        puVar5 = puVar15;
      }
      goto code_r0x003531a7;
    }
  }
  else {
code_r0x003531a7:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    apuStack_b0[0] = &UNK_003531fd;
    func_0x0099bd00();
  }
  apuStack_b0[0] = &UNK_00353202;
  func_0x0032fc60();
  puStack_e0 = *(ulong **)(in_FS_OFFSET + 0x28);
  *(byte *)puVar5 = 0;
  *(byte *)((long)puVar5 + 2) = 1;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  apuStack_108[0] = &UNK_00353253;
  puStack_d8 = param_1;
  puStack_d0 = puVar13;
  pbStack_c8 = param_3;
  puStack_c0 = unaff_R14;
  puStack_b8 = puVar4;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  puVar7 = (ulong *)func_0x0099be70(&UNK_001703c3);
  puVar15 = (ulong *)0x2;
  apuStack_108[0] = &UNK_00353260;
  iVar3 = func_0x0099bf20();
  if ((puVar7 == (ulong *)0x0) || (iVar3 == 0)) {
    *(byte *)((long)puVar5 + 1) = 0;
code_r0x0035332e:
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_e0) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
    apuStack_108[0] = &UNK_00353351;
    func_0x0099bd00();
  }
  else {
    apuStack_108[0] = &UNK_00353271;
    puVar15 = puVar7;
    puVar8 = (ulong *)func_0x0099bcf0();
    if (puVar8 < (ulong *)0xfffffffffffffff7) {
      if (puVar8 < (ulong *)0x17) {
        auStack_f8[0] = (char)puVar8 * '\x02';
        puVar13 = (ulong *)(auStack_f8 + 1);
      }
      else {
        lVar9 = 0x1a;
        if (((ulong)puVar8 | 7) != 0x17) {
          lVar9 = ((ulong)puVar8 | 7) + 1;
        }
        apuStack_108[0] = &UNK_003532bd;
        puVar13 = (ulong *)_Znwm(lVar9);
        param_3 = (byte *)(lVar9 + 1);
        auStack_f8 = (undefined1  [8])param_3;
        puStack_f0 = puVar8;
        puStack_e8 = puVar13;
      }
      apuStack_108[0] = &UNK_003532dd;
      param_2 = puVar7;
      puVar15 = puVar13;
      func_0x0099bd90(puVar13,puVar7,puVar8);
      *(byte *)((long)puVar13 + (long)puVar8) = 0;
      puVar4 = puStack_f0;
      if (((ulong)auStack_f8 & 1) == 0) {
        puVar4 = (ulong *)((ulong)auStack_f8 >> 1 & 0x7f);
      }
      bVar16 = true;
      if (puVar4 == (ulong *)0x4) {
        puVar4 = puStack_e8;
        if (((ulong)auStack_f8 & 1) == 0) {
          puVar4 = (ulong *)(auStack_f8 + 1);
        }
        bVar16 = (int)*puVar4 != 0x626d7564;
      }
      *(bool *)((long)puVar5 + 1) = bVar16;
      puVar4 = puVar8;
      if (((ulong)auStack_f8 & 1) != 0) {
        param_2 = (ulong *)((ulong)auStack_f8 & 0xfffffffffffffffe);
        apuStack_108[0] = &UNK_0035332e;
        puVar15 = puStack_e8;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x0035332e;
    }
  }
  apuStack_108[0] = &UNK_00353356;
  func_0x0032e8f0();
  ppuVar11 = apuStack_108;
  puStack_138 = *(ulong **)(in_FS_OFFSET + 0x28);
  iVar3 = (int)extraout_RDX;
  puStack_130 = puVar5;
  puStack_128 = puVar13;
  pbStack_120 = param_3;
  puStack_118 = puVar7;
  puStack_110 = puVar4;
  if ((iVar3 == 0) &&
     (puVar4 = puVar15, apuStack_108[0] = (undefined *)apuStack_b0, (byte)*puVar15 != 0)) {
code_r0x0035347d:
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_138) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
    apuStack_180[0] = &UNK_00353690;
    func_0x0099bd00();
    puVar13 = param_2;
    puVar15 = puVar4;
  }
  else {
    if (*(byte *)((long)puVar15 + 1) != 0) {
      _auStack_158 = CONCAT53(stack0xfffffffffffffeab,0xd02);
      puVar5 = (ulong *)(extraout_RDX & 0xffffffff);
      apuStack_180[0] = &UNK_003534ba;
      apuStack_108[0] = (undefined *)apuStack_b0;
      func_0x00353780(auStack_158);
      if (iVar3 == 0) {
        uStack_160 = 0;
        apuStack_180[0] = &UNK_003534dc;
        iVar3 = func_0x0099c020(0,0x5413,&uStack_160);
        if (uStack_160._2_2_ != 0 && iVar3 == 0) {
          puVar13 = (ulong *)auStack_158;
          apuStack_180[0] = &UNK_00353507;
          _Z11ElideMiddleRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
                    (puVar13,param_2,uStack_160._2_2_);
          ppuVar10 = apuStack_180;
          apuStack_180[0] = &UNK_00353512;
          puVar7 = param_2;
          goto code_r0x00353730;
        }
        apuStack_180[0] = &UNK_00353534;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0015af83;
        puVar7 = (ulong *)auStack_158;
        apuStack_180[0] = &UNK_00353547;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (puVar7);
        apuStack_180[0] = &UNK_0035354f;
        puVar4 = puVar7;
        func_0x00353780();
        if ((_auStack_158 & 1) != 0) {
          param_2 = (ulong *)(_auStack_158 & 0xfffffffffffffffe);
          apuStack_180[0] = &UNK_00353566;
          puVar4 = puStack_148;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)puVar15 + 2) = 0;
      }
      else {
        apuStack_180[0] = &UNK_00353588;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0017a0d6;
        puVar7 = (ulong *)auStack_158;
        apuStack_180[0] = &UNK_0035359b;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (puVar7);
        apuStack_180[0] = &UNK_003535a3;
        puVar4 = puVar7;
        func_0x00353780();
        if ((_auStack_158 & 1) != 0) {
          param_2 = (ulong *)(_auStack_158 & 0xfffffffffffffffe);
          apuStack_180[0] = &UNK_003535ba;
          puVar4 = puStack_148;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)puVar15 + 2) = 1;
      }
      goto code_r0x0035347d;
    }
    puVar13 = param_2;
    if (iVar3 == 0) {
      bVar1 = (byte)*param_2;
      if ((bVar1 & 1) == 0) {
        puVar7 = (ulong *)(ulong)(bVar1 >> 1);
      }
      else {
        puVar7 = (ulong *)param_2[1];
      }
      puVar4 = (ulong *)param_2[2];
      _auStack_158 = 0;
      uStack_150 = (byte *)0x0;
      puStack_148 = (ulong *)0x0;
      pbVar12 = (byte *)((long)puVar7 + 1);
      puStack_170 = puVar15;
      apuStack_108[0] = (undefined *)apuStack_b0;
      if (pbVar12 < (byte *)0xfffffffffffffff7) {
        if (pbVar12 < (byte *)0x17) {
          uVar14 = 0;
          _auStack_158 = (ulong)(byte)((char)pbVar12 * '\x02');
          puVar5 = param_2;
          apuStack_108[0] = (undefined *)apuStack_b0;
        }
        else {
          lVar9 = 0x1a;
          if (((ulong)pbVar12 | 7) != 0x17) {
            lVar9 = ((ulong)pbVar12 | 7) + 1;
          }
          apuStack_180[0] = &UNK_0035340d;
          puStack_168 = param_2;
          apuStack_108[0] = (undefined *)apuStack_b0;
          puStack_148 = (ulong *)_Znwm(lVar9);
          _auStack_158 = lVar9 + 1;
          uVar14 = _auStack_158 & 0xffffffff;
          puVar5 = puStack_168;
          uStack_150 = pbVar12;
        }
        param_2 = puVar4;
        if ((bVar1 & 1) == 0) {
          param_2 = (ulong *)((long)puVar5 + 1);
        }
        puVar5 = (ulong *)(auStack_158 + 1);
        if ((uVar14 & 1) != 0) {
          puVar5 = puStack_148;
        }
        apuStack_180[0] = &UNK_00353448;
        puVar4 = puVar5;
        func_0x0099bda0(puVar5,param_2,puVar7);
        puVar13 = puStack_170;
        ((byte *)((long)puVar5 + (long)puVar7))[0] = 10;
        ((byte *)((long)puVar5 + (long)puVar7))[1] = 0;
        puVar5 = puStack_170 + 1;
        if ((puStack_170[1] & 1) != 0) {
          puVar4 = (ulong *)puStack_170[3];
          param_2 = (ulong *)(puStack_170[1] & 0xfffffffffffffffe);
          apuStack_180[0] = &UNK_0035346e;
          _ZdaPvSt11align_val_t();
        }
        puVar13[3] = (ulong)puStack_148;
        *(undefined1 (*) [4])puVar5 = auStack_158;
        *(undefined4 *)((long)puVar13 + 0xc) = uStack_154;
        *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_150;
        *(undefined4 *)((long)puVar13 + 0x14) = uStack_150._4_4_;
        goto code_r0x0035347d;
      }
    }
    else {
      bVar1 = (byte)*param_2;
      if ((bVar1 & 1) == 0) {
        puVar5 = (ulong *)(ulong)(bVar1 >> 1);
      }
      else {
        puVar5 = (ulong *)param_2[1];
      }
      puVar7 = (ulong *)param_2[2];
      _auStack_158 = 0;
      uStack_150 = (byte *)0x0;
      puStack_148 = (ulong *)0x0;
      pbVar12 = (byte *)((long)puVar5 + 1);
      apuStack_108[0] = (undefined *)apuStack_b0;
      if (pbVar12 < (byte *)0xfffffffffffffff7) {
        if (pbVar12 < (byte *)0x17) {
          uVar14 = 0;
          _auStack_158 = (ulong)(byte)((char)pbVar12 * '\x02');
          apuStack_108[0] = (undefined *)apuStack_b0;
        }
        else {
          lVar9 = 0x1a;
          if (((ulong)pbVar12 | 7) != 0x17) {
            lVar9 = ((ulong)pbVar12 | 7) + 1;
          }
          apuStack_180[0] = &UNK_00353620;
          puStack_168 = param_2;
          apuStack_108[0] = (undefined *)apuStack_b0;
          puStack_148 = (ulong *)_Znwm(lVar9);
          _auStack_158 = lVar9 + 1;
          uVar14 = _auStack_158 & 0xffffffff;
          param_2 = puStack_168;
          uStack_150 = pbVar12;
        }
        if ((bVar1 & 1) == 0) {
          puVar7 = (ulong *)((long)param_2 + 1);
        }
        puVar4 = (ulong *)(auStack_158 + 1);
        if ((uVar14 & 1) != 0) {
          puVar4 = puStack_148;
        }
        apuStack_180[0] = &UNK_0035365b;
        param_2 = puVar7;
        func_0x0099bda0(puVar4,puVar7,puVar5);
        ((byte *)((long)puVar4 + (long)puVar5))[0] = 10;
        ((byte *)((long)puVar4 + (long)puVar5))[1] = 0;
        puVar4 = (ulong *)auStack_158;
        apuStack_180[0] = &UNK_0035366b;
        func_0x00353780();
        if ((_auStack_158 & 1) != 0) {
          param_2 = (ulong *)(_auStack_158 & 0xfffffffffffffffe);
          apuStack_180[0] = &UNK_00353686;
          puVar4 = puStack_148;
          _ZdaPvSt11align_val_t();
        }
        goto code_r0x0035347d;
      }
    }
  }
  apuStack_180[0] = &UNK_00353695;
  func_0x0032e8f0();
  ppuVar11 = apuStack_180;
  ppuVar10 = (undefined **)auStack_1b0;
  puStack_190 = *(ulong **)(in_FS_OFFSET + 0x28);
  puStack_188 = puVar5;
  if (*(byte *)((long)puVar15 + 1) == 1) {
    apuStack_180[0] = (undefined *)apuStack_108;
    if (*(byte *)((long)puVar15 + 2) == 0) {
      uStack_1a8 = 0xa02;
      uStack_1a6 = 0;
      apuStack_180[0] = (undefined *)apuStack_108;
      func_0x00353780(&uStack_1a8);
      puVar5 = puVar15;
    }
    *(byte *)((long)puVar15 + 2) = 1;
    param_2 = puVar15;
  }
  else {
    param_2 = puVar15 + 1;
    apuStack_180[0] = (undefined *)apuStack_108;
    func_0x00353780();
    if ((puVar15[1] & 1) == 0) {
      *(undefined2 *)(puVar15 + 1) = 0;
      puVar5 = puVar15;
    }
    else {
      *(undefined1 *)puVar15[3] = 0;
      puVar15[2] = 0;
      puVar5 = puVar15;
    }
  }
  if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_190) {
    return *(ulong **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
code_r0x00353730:
  *(undefined ***)((long)ppuVar10 + -8) = ppuVar11;
  *(ulong **)((long)ppuVar10 + -0x10) = puVar7;
  *(ulong **)((long)ppuVar10 + -0x18) = puVar5;
  if ((*param_2 & 1) != 0) {
    uVar14 = *param_2;
    uVar2 = param_2[2];
    *(undefined **)((long)ppuVar10 + -0x20) = &UNK_00353752;
    _ZdaPvSt11align_val_t(uVar2,uVar14 & 0xfffffffffffffffe);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[2] = puVar13[2];
  uVar14 = puVar13[1];
  *param_2 = *puVar13;
  param_2[1] = uVar14;
  *(undefined2 *)puVar13 = 0;
  return param_2;
}


