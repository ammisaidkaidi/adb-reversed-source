// Function: _ZN11LinePrinterC2Ev
// Address: 00353210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0035350d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00353512) */
/* WARNING: Removing unreachable block (ram,0x00353518) */
/* WARNING: Removing unreachable block (ram,0x00353529) */

ulong * _ZN11LinePrinterC2Ev(ulong *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong extraout_RDX;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *unaff_R12;
  ulong unaff_R13;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 auStack_108 [8];
  undefined2 uStack_100;
  undefined1 uStack_fe;
  ulong *puStack_e8;
  ulong *puStack_e0;
  undefined *apuStack_d8 [2];
  ulong *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  undefined *apuStack_60 [2];
  undefined1 auStack_50 [8];
  ulong uStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puStack_38 = *(ulong **)(in_FS_OFFSET + 0x28);
  *(byte *)param_1 = 0;
  *(byte *)((long)param_1 + 2) = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  apuStack_60[0] = &UNK_00353253;
  puVar4 = (ulong *)func_0x0099be70(&UNK_001703c3);
  puVar12 = (ulong *)0x2;
  apuStack_60[0] = &UNK_00353260;
  iVar3 = func_0x0099bf20();
  if ((puVar4 == (ulong *)0x0) || (iVar3 == 0)) {
    *(byte *)((long)param_1 + 1) = 0;
code_r0x0035332e:
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_38) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
    apuStack_60[0] = &UNK_00353351;
    func_0x0099bd00();
  }
  else {
    apuStack_60[0] = &UNK_00353271;
    puVar12 = puVar4;
    uVar5 = func_0x0099bcf0();
    if (uVar5 < 0xfffffffffffffff7) {
      if (uVar5 < 0x17) {
        auStack_50[0] = (char)uVar5 * '\x02';
        unaff_R12 = (ulong *)(auStack_50 + 1);
      }
      else {
        lVar8 = 0x1a;
        if ((uVar5 | 7) != 0x17) {
          lVar8 = (uVar5 | 7) + 1;
        }
        apuStack_60[0] = &UNK_003532bd;
        unaff_R12 = (ulong *)_Znwm(lVar8);
        unaff_R13 = lVar8 + 1;
        auStack_50 = (undefined1  [8])unaff_R13;
        uStack_48 = uVar5;
        puStack_40 = unaff_R12;
      }
      apuStack_60[0] = &UNK_003532dd;
      param_2 = puVar4;
      puVar12 = unaff_R12;
      func_0x0099bd90(unaff_R12,puVar4,uVar5);
      *(byte *)((long)unaff_R12 + uVar5) = 0;
      uVar7 = uStack_48;
      if (((ulong)auStack_50 & 1) == 0) {
        uVar7 = (ulong)auStack_50 >> 1 & 0x7f;
      }
      bVar13 = true;
      if (uVar7 == 4) {
        puVar6 = puStack_40;
        if (((ulong)auStack_50 & 1) == 0) {
          puVar6 = (ulong *)(auStack_50 + 1);
        }
        bVar13 = (int)*puVar6 != 0x626d7564;
      }
      *(bool *)((long)param_1 + 1) = bVar13;
      unaff_R15 = uVar5;
      if (((ulong)auStack_50 & 1) != 0) {
        param_2 = (ulong *)((ulong)auStack_50 & 0xfffffffffffffffe);
        apuStack_60[0] = &UNK_0035332e;
        puVar12 = puStack_40;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x0035332e;
    }
  }
  apuStack_60[0] = &UNK_00353356;
  func_0x0032e8f0();
  ppuVar10 = apuStack_60;
  apuStack_60[0] = &stack0xfffffffffffffff8;
  uStack_68 = unaff_R15;
  puStack_70 = puVar4;
  uStack_78 = unaff_R13;
  puStack_80 = unaff_R12;
  puStack_88 = param_1;
  puStack_90 = *(ulong **)(in_FS_OFFSET + 0x28);
  iVar3 = (int)extraout_RDX;
  if ((iVar3 == 0) && (puVar6 = puVar12, (byte)*puVar12 != 0)) {
code_r0x0035347d:
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_90) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
    apuStack_d8[0] = &UNK_00353690;
    func_0x0099bd00();
    puVar11 = param_2;
    puVar12 = puVar6;
  }
  else {
    if (*(byte *)((long)puVar12 + 1) != 0) {
      _auStack_b0 = CONCAT53(stack0xffffffffffffff53,0xd02);
      param_1 = (ulong *)(extraout_RDX & 0xffffffff);
      apuStack_d8[0] = &UNK_003534ba;
      func_0x00353780(auStack_b0);
      if (iVar3 == 0) {
        uStack_b8 = 0;
        apuStack_d8[0] = &UNK_003534dc;
        iVar3 = func_0x0099c020(0,0x5413,&uStack_b8);
        if (uStack_b8._2_2_ != 0 && iVar3 == 0) {
          puVar11 = (ulong *)auStack_b0;
          apuStack_d8[0] = &UNK_00353507;
          _Z11ElideMiddleRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
                    (puVar11,param_2,uStack_b8._2_2_);
          ppuVar9 = apuStack_d8;
          apuStack_d8[0] = &UNK_00353512;
          puVar4 = param_2;
          goto code_r0x00353730;
        }
        apuStack_d8[0] = &UNK_00353534;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0015af83;
        puVar4 = (ulong *)auStack_b0;
        apuStack_d8[0] = &UNK_00353547;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (puVar4);
        apuStack_d8[0] = &UNK_0035354f;
        puVar6 = puVar4;
        func_0x00353780();
        if ((_auStack_b0 & 1) != 0) {
          param_2 = (ulong *)(_auStack_b0 & 0xfffffffffffffffe);
          apuStack_d8[0] = &UNK_00353566;
          puVar6 = puStack_a0;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)puVar12 + 2) = 0;
      }
      else {
        apuStack_d8[0] = &UNK_00353588;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0017a0d6;
        puVar4 = (ulong *)auStack_b0;
        apuStack_d8[0] = &UNK_0035359b;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (puVar4);
        apuStack_d8[0] = &UNK_003535a3;
        puVar6 = puVar4;
        func_0x00353780();
        if ((_auStack_b0 & 1) != 0) {
          param_2 = (ulong *)(_auStack_b0 & 0xfffffffffffffffe);
          apuStack_d8[0] = &UNK_003535ba;
          puVar6 = puStack_a0;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)puVar12 + 2) = 1;
      }
      goto code_r0x0035347d;
    }
    puVar11 = param_2;
    if (iVar3 == 0) {
      bVar2 = (byte)*param_2;
      if ((bVar2 & 1) == 0) {
        puVar4 = (ulong *)(ulong)(bVar2 >> 1);
      }
      else {
        puVar4 = (ulong *)param_2[1];
      }
      puVar6 = (ulong *)param_2[2];
      _auStack_b0 = 0;
      uStack_a8 = (byte *)0x0;
      puStack_a0 = (ulong *)0x0;
      pbVar1 = (byte *)((long)puVar4 + 1);
      puStack_c8 = puVar12;
      if (pbVar1 < (byte *)0xfffffffffffffff7) {
        if (pbVar1 < (byte *)0x17) {
          uVar5 = 0;
          _auStack_b0 = (ulong)(byte)((char)pbVar1 * '\x02');
          puVar12 = param_2;
        }
        else {
          lVar8 = 0x1a;
          if (((ulong)pbVar1 | 7) != 0x17) {
            lVar8 = ((ulong)pbVar1 | 7) + 1;
          }
          apuStack_d8[0] = &UNK_0035340d;
          puStack_c0 = param_2;
          puStack_a0 = (ulong *)_Znwm(lVar8);
          _auStack_b0 = lVar8 + 1;
          uVar5 = _auStack_b0 & 0xffffffff;
          puVar12 = puStack_c0;
          uStack_a8 = pbVar1;
        }
        param_2 = puVar6;
        if ((bVar2 & 1) == 0) {
          param_2 = (ulong *)((long)puVar12 + 1);
        }
        puVar12 = (ulong *)(auStack_b0 + 1);
        if ((uVar5 & 1) != 0) {
          puVar12 = puStack_a0;
        }
        apuStack_d8[0] = &UNK_00353448;
        puVar6 = puVar12;
        func_0x0099bda0(puVar12,param_2,puVar4);
        puVar11 = puStack_c8;
        ((byte *)((long)puVar12 + (long)puVar4))[0] = 10;
        ((byte *)((long)puVar12 + (long)puVar4))[1] = 0;
        param_1 = puStack_c8 + 1;
        if ((puStack_c8[1] & 1) != 0) {
          puVar6 = (ulong *)puStack_c8[3];
          param_2 = (ulong *)(puStack_c8[1] & 0xfffffffffffffffe);
          apuStack_d8[0] = &UNK_0035346e;
          _ZdaPvSt11align_val_t();
        }
        puVar11[3] = (ulong)puStack_a0;
        *(undefined1 (*) [4])param_1 = auStack_b0;
        *(undefined4 *)((long)puVar11 + 0xc) = uStack_ac;
        *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_a8;
        *(undefined4 *)((long)puVar11 + 0x14) = uStack_a8._4_4_;
        goto code_r0x0035347d;
      }
    }
    else {
      bVar2 = (byte)*param_2;
      if ((bVar2 & 1) == 0) {
        param_1 = (ulong *)(ulong)(bVar2 >> 1);
      }
      else {
        param_1 = (ulong *)param_2[1];
      }
      puVar4 = (ulong *)param_2[2];
      _auStack_b0 = 0;
      uStack_a8 = (byte *)0x0;
      puStack_a0 = (ulong *)0x0;
      pbVar1 = (byte *)((long)param_1 + 1);
      if (pbVar1 < (byte *)0xfffffffffffffff7) {
        if (pbVar1 < (byte *)0x17) {
          uVar5 = 0;
          _auStack_b0 = (ulong)(byte)((char)pbVar1 * '\x02');
        }
        else {
          lVar8 = 0x1a;
          if (((ulong)pbVar1 | 7) != 0x17) {
            lVar8 = ((ulong)pbVar1 | 7) + 1;
          }
          apuStack_d8[0] = &UNK_00353620;
          puStack_c0 = param_2;
          puStack_a0 = (ulong *)_Znwm(lVar8);
          _auStack_b0 = lVar8 + 1;
          uVar5 = _auStack_b0 & 0xffffffff;
          param_2 = puStack_c0;
          uStack_a8 = pbVar1;
        }
        if ((bVar2 & 1) == 0) {
          puVar4 = (ulong *)((long)param_2 + 1);
        }
        puVar12 = (ulong *)(auStack_b0 + 1);
        if ((uVar5 & 1) != 0) {
          puVar12 = puStack_a0;
        }
        apuStack_d8[0] = &UNK_0035365b;
        param_2 = puVar4;
        func_0x0099bda0(puVar12,puVar4,param_1);
        ((byte *)((long)puVar12 + (long)param_1))[0] = 10;
        ((byte *)((long)puVar12 + (long)param_1))[1] = 0;
        puVar6 = (ulong *)auStack_b0;
        apuStack_d8[0] = &UNK_0035366b;
        func_0x00353780();
        if ((_auStack_b0 & 1) != 0) {
          param_2 = (ulong *)(_auStack_b0 & 0xfffffffffffffffe);
          apuStack_d8[0] = &UNK_00353686;
          puVar6 = puStack_a0;
          _ZdaPvSt11align_val_t();
        }
        goto code_r0x0035347d;
      }
    }
  }
  apuStack_d8[0] = &UNK_00353695;
  func_0x0032e8f0();
  ppuVar10 = apuStack_d8;
  ppuVar9 = (undefined **)auStack_108;
  puStack_e8 = *(ulong **)(in_FS_OFFSET + 0x28);
  puStack_e0 = param_1;
  if (*(byte *)((long)puVar12 + 1) == 1) {
    apuStack_d8[0] = (undefined *)apuStack_60;
    if (*(byte *)((long)puVar12 + 2) == 0) {
      uStack_100 = 0xa02;
      uStack_fe = 0;
      apuStack_d8[0] = (undefined *)apuStack_60;
      func_0x00353780(&uStack_100);
      param_1 = puVar12;
    }
    *(byte *)((long)puVar12 + 2) = 1;
    param_2 = puVar12;
  }
  else {
    param_2 = puVar12 + 1;
    apuStack_d8[0] = (undefined *)apuStack_60;
    func_0x00353780();
    if ((puVar12[1] & 1) == 0) {
      *(undefined2 *)(puVar12 + 1) = 0;
      param_1 = puVar12;
    }
    else {
      *(undefined1 *)puVar12[3] = 0;
      puVar12[2] = 0;
      param_1 = puVar12;
    }
  }
  if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_e8) {
    return *(ulong **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
code_r0x00353730:
  *(undefined ***)((long)ppuVar9 + -8) = ppuVar10;
  *(ulong **)((long)ppuVar9 + -0x10) = puVar4;
  *(ulong **)((long)ppuVar9 + -0x18) = param_1;
  if ((*param_2 & 1) != 0) {
    uVar5 = *param_2;
    uVar7 = param_2[2];
    *(undefined **)((long)ppuVar9 + -0x20) = &UNK_00353752;
    _ZdaPvSt11align_val_t(uVar7,uVar5 & 0xfffffffffffffffe);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[2] = puVar11[2];
  uVar5 = puVar11[1];
  *param_2 = *puVar11;
  param_2[1] = uVar5;
  *(undefined2 *)puVar11 = 0;
  return param_2;
}


