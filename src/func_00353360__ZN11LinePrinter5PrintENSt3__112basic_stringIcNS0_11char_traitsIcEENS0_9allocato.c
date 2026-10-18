// Function: _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
// Address: 00353360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0035350d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00353512) */
/* WARNING: Removing unreachable block (ram,0x00353518) */
/* WARNING: Removing unreachable block (ram,0x00353529) */

ulong * _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
                  (ulong *param_1,ulong *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  ulong *unaff_RBX;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_b0 [8];
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined *apuStack_80 [2];
  ulong *puStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulong *puStack_48;
  ulong *puStack_38;
  
  ppuVar8 = (undefined **)&stack0xfffffffffffffff8;
  puStack_38 = *(ulong **)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) && (puVar10 = param_1, (byte)*param_1 != 0)) {
code_r0x0035347d:
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_38) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
    apuStack_80[0] = &UNK_00353690;
    func_0x0099bd00();
    puVar9 = param_2;
    param_1 = puVar10;
  }
  else {
    if (*(byte *)((long)param_1 + 1) != 0) {
      _auStack_58 = CONCAT53(stack0xffffffffffffffab,0xd02);
      unaff_RBX = (ulong *)(ulong)param_3;
      apuStack_80[0] = &UNK_003534ba;
      func_0x00353780(auStack_58);
      if (param_3 == 0) {
        uStack_60 = 0;
        apuStack_80[0] = &UNK_003534dc;
        iVar5 = func_0x0099c020(0,0x5413,&uStack_60);
        if (uStack_60._2_2_ != 0 && iVar5 == 0) {
          puVar9 = (ulong *)auStack_58;
          apuStack_80[0] = &UNK_00353507;
          _Z11ElideMiddleRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
                    (puVar9,param_2,uStack_60._2_2_);
          ppuVar7 = apuStack_80;
          apuStack_80[0] = &UNK_00353512;
          unaff_R14 = param_2;
          goto code_r0x00353730;
        }
        apuStack_80[0] = &UNK_00353534;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0015af83;
        unaff_R14 = (ulong *)auStack_58;
        apuStack_80[0] = &UNK_00353547;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (unaff_R14);
        apuStack_80[0] = &UNK_0035354f;
        puVar10 = unaff_R14;
        func_0x00353780();
        if ((_auStack_58 & 1) != 0) {
          param_2 = (ulong *)(_auStack_58 & 0xfffffffffffffffe);
          apuStack_80[0] = &UNK_00353566;
          puVar10 = puStack_48;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)param_1 + 2) = 0;
      }
      else {
        apuStack_80[0] = &UNK_00353588;
        func_0x00353780(param_2);
        param_2 = (ulong *)&UNK_0017a0d6;
        unaff_R14 = (ulong *)auStack_58;
        apuStack_80[0] = &UNK_0035359b;
        _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                  (unaff_R14);
        apuStack_80[0] = &UNK_003535a3;
        puVar10 = unaff_R14;
        func_0x00353780();
        if ((_auStack_58 & 1) != 0) {
          param_2 = (ulong *)(_auStack_58 & 0xfffffffffffffffe);
          apuStack_80[0] = &UNK_003535ba;
          puVar10 = puStack_48;
          _ZdaPvSt11align_val_t();
        }
        *(byte *)((long)param_1 + 2) = 1;
      }
      goto code_r0x0035347d;
    }
    puVar9 = param_2;
    if (param_3 == 0) {
      bVar2 = (byte)*param_2;
      if ((bVar2 & 1) == 0) {
        unaff_R14 = (ulong *)(ulong)(bVar2 >> 1);
      }
      else {
        unaff_R14 = (ulong *)param_2[1];
      }
      puVar10 = (ulong *)param_2[2];
      _auStack_58 = 0;
      uStack_50 = (byte *)0x0;
      puStack_48 = (ulong *)0x0;
      pbVar1 = (byte *)((long)unaff_R14 + 1);
      puStack_70 = param_1;
      if (pbVar1 < (byte *)0xfffffffffffffff7) {
        if (pbVar1 < (byte *)0x17) {
          uVar11 = 0;
          _auStack_58 = (ulong)(byte)((char)pbVar1 * '\x02');
        }
        else {
          lVar6 = 0x1a;
          if (((ulong)pbVar1 | 7) != 0x17) {
            lVar6 = ((ulong)pbVar1 | 7) + 1;
          }
          apuStack_80[0] = &UNK_0035340d;
          puStack_68 = param_2;
          puStack_48 = (ulong *)_Znwm(lVar6);
          _auStack_58 = lVar6 + 1;
          uVar11 = _auStack_58 & 0xffffffff;
          param_2 = puStack_68;
          uStack_50 = pbVar1;
        }
        puVar9 = (ulong *)((long)param_2 + 1);
        param_2 = puVar10;
        if ((bVar2 & 1) == 0) {
          param_2 = puVar9;
        }
        puVar9 = (ulong *)(auStack_58 + 1);
        if ((uVar11 & 1) != 0) {
          puVar9 = puStack_48;
        }
        apuStack_80[0] = &UNK_00353448;
        puVar10 = puVar9;
        func_0x0099bda0(puVar9,param_2,unaff_R14);
        puVar4 = puStack_70;
        ((byte *)((long)puVar9 + (long)unaff_R14))[0] = 10;
        ((byte *)((long)puVar9 + (long)unaff_R14))[1] = 0;
        unaff_RBX = puStack_70 + 1;
        if ((puStack_70[1] & 1) != 0) {
          puVar10 = (ulong *)puStack_70[3];
          param_2 = (ulong *)(puStack_70[1] & 0xfffffffffffffffe);
          apuStack_80[0] = &UNK_0035346e;
          _ZdaPvSt11align_val_t();
        }
        puVar4[3] = (ulong)puStack_48;
        *(undefined1 (*) [4])unaff_RBX = auStack_58;
        *(undefined4 *)((long)puVar4 + 0xc) = uStack_54;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_50;
        *(undefined4 *)((long)puVar4 + 0x14) = uStack_50._4_4_;
        goto code_r0x0035347d;
      }
    }
    else {
      bVar2 = (byte)*param_2;
      if ((bVar2 & 1) == 0) {
        unaff_RBX = (ulong *)(ulong)(bVar2 >> 1);
      }
      else {
        unaff_RBX = (ulong *)param_2[1];
      }
      unaff_R14 = (ulong *)param_2[2];
      _auStack_58 = 0;
      uStack_50 = (byte *)0x0;
      puStack_48 = (ulong *)0x0;
      pbVar1 = (byte *)((long)unaff_RBX + 1);
      if (pbVar1 < (byte *)0xfffffffffffffff7) {
        if (pbVar1 < (byte *)0x17) {
          uVar11 = 0;
          _auStack_58 = (ulong)(byte)((char)pbVar1 * '\x02');
        }
        else {
          lVar6 = 0x1a;
          if (((ulong)pbVar1 | 7) != 0x17) {
            lVar6 = ((ulong)pbVar1 | 7) + 1;
          }
          apuStack_80[0] = &UNK_00353620;
          puStack_68 = param_2;
          puStack_48 = (ulong *)_Znwm(lVar6);
          _auStack_58 = lVar6 + 1;
          uVar11 = _auStack_58 & 0xffffffff;
          param_2 = puStack_68;
          uStack_50 = pbVar1;
        }
        if ((bVar2 & 1) == 0) {
          unaff_R14 = (ulong *)((long)param_2 + 1);
        }
        puVar10 = (ulong *)(auStack_58 + 1);
        if ((uVar11 & 1) != 0) {
          puVar10 = puStack_48;
        }
        apuStack_80[0] = &UNK_0035365b;
        param_2 = unaff_R14;
        func_0x0099bda0(puVar10,unaff_R14,unaff_RBX);
        ((byte *)((long)puVar10 + (long)unaff_RBX))[0] = 10;
        ((byte *)((long)puVar10 + (long)unaff_RBX))[1] = 0;
        puVar10 = (ulong *)auStack_58;
        apuStack_80[0] = &UNK_0035366b;
        func_0x00353780();
        if ((_auStack_58 & 1) != 0) {
          param_2 = (ulong *)(_auStack_58 & 0xfffffffffffffffe);
          apuStack_80[0] = &UNK_00353686;
          puVar10 = puStack_48;
          _ZdaPvSt11align_val_t();
        }
        goto code_r0x0035347d;
      }
    }
  }
  apuStack_80[0] = &UNK_00353695;
  func_0x0032e8f0();
  ppuVar8 = apuStack_80;
  ppuVar7 = (undefined **)auStack_b0;
  puStack_90 = *(ulong **)(in_FS_OFFSET + 0x28);
  puStack_88 = unaff_RBX;
  if (*(byte *)((long)param_1 + 1) == 1) {
    apuStack_80[0] = &stack0xfffffffffffffff8;
    if (*(byte *)((long)param_1 + 2) == 0) {
      uStack_a8 = 0xa02;
      uStack_a6 = 0;
      apuStack_80[0] = &stack0xfffffffffffffff8;
      func_0x00353780(&uStack_a8);
      unaff_RBX = param_1;
    }
    *(byte *)((long)param_1 + 2) = 1;
    param_2 = param_1;
  }
  else {
    param_2 = param_1 + 1;
    apuStack_80[0] = &stack0xfffffffffffffff8;
    func_0x00353780();
    if ((param_1[1] & 1) == 0) {
      *(undefined2 *)(param_1 + 1) = 0;
      unaff_RBX = param_1;
    }
    else {
      *(undefined1 *)param_1[3] = 0;
      param_1[2] = 0;
      unaff_RBX = param_1;
    }
  }
  if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_90) {
    return *(ulong **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
code_r0x00353730:
  *(undefined ***)((long)ppuVar7 + -8) = ppuVar8;
  *(ulong **)((long)ppuVar7 + -0x10) = unaff_R14;
  *(ulong **)((long)ppuVar7 + -0x18) = unaff_RBX;
  if ((*param_2 & 1) != 0) {
    uVar11 = *param_2;
    uVar3 = param_2[2];
    *(undefined **)((long)ppuVar7 + -0x20) = &UNK_00353752;
    _ZdaPvSt11align_val_t(uVar3,uVar11 & 0xfffffffffffffffe);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[2] = puVar9[2];
  uVar11 = puVar9[1];
  *param_2 = *puVar9;
  param_2[1] = uVar11;
  *(undefined2 *)puVar9 = 0;
  return param_2;
}


