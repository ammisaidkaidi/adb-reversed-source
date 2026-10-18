// Function: _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
// Address: 003df6c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong *******
_Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
          (ulong *******param_1,ulong *******param_2,ulong *******param_3,ulong *******param_4,
          undefined8 param_5,ulong *******param_6)

{
  byte bVar1;
  undefined1 auVar2 [8];
  ulong *******pppppppuVar3;
  char cVar4;
  int iVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong *******extraout_RDX;
  long *plVar11;
  ulong *******unaff_R12;
  undefined8 uVar12;
  ulong *******unaff_R13;
  ulong *******pppppppuVar13;
  ulong ******ppppppuVar14;
  ulong *******pppppppuVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined1 auStack_230 [8];
  ulong uStack_228;
  long *plStack_220;
  undefined8 uStack_210;
  ulong *******pppppppuStack_208;
  long lStack_200;
  long lStack_1f0;
  ulong *******pppppppuStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  long lStack_1d0;
  ulong *******pppppppuStack_1c8;
  undefined *puStack_1c0;
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  undefined1 auStack_198 [8];
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  long lStack_178;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  undefined *apuStack_148 [2];
  ulong *******apppppppuStack_138 [2];
  undefined8 uStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  long lStack_110;
  undefined1 auStack_100 [8];
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  long lStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  undefined8 uStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong ******ppppppuStack_80;
  undefined1 auStack_78 [8];
  ulong *******pppppppuStack_70;
  ulong *******pppppppuStack_68;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong *******pppppppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar8 = param_1;
  pppppppuVar15 = param_6;
  if ((param_2 < (ulong *******)0x4) || (*(int *)param_1 != 0x3a706374)) {
    pppppppuStack_b0 = (ulong *******)&UNK_003df709;
    func_0x0032ea60(param_6,&UNK_00167b1c);
    ppppppuVar14 = *param_6;
    pppppppuVar7 = (ulong *******)0x16;
    if (((ulong)*param_6 & 1) != 0) {
      pppppppuVar7 = (ulong *******)(((ulong)ppppppuVar14 & 0xfffffffffffffffe) - 1);
    }
    if (((ulong)ppppppuVar14 & 1) == 0) {
      unaff_R13 = (ulong *******)(ulong)((uint)((ulong)ppppppuVar14 >> 1) & 0x7f);
    }
    else {
      unaff_R13 = (ulong *******)param_6[1];
    }
    pppppppuVar13 = param_2;
    if ((ulong *******)((long)pppppppuVar7 - (long)unaff_R13) < param_2) {
      unaff_R12 = (ulong *******)0x0;
      pppppppuStack_c0 = (ulong *******)&UNK_003df762;
      pppppppuVar15 = param_6;
      pppppppuStack_b8 = param_2;
      pppppppuStack_b0 = param_1;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_6,pppppppuVar7,
                 (byte *)(((long)param_2 - (long)pppppppuVar7) + (long)unaff_R13),unaff_R13,
                 unaff_R13,0);
    }
    else if (param_2 == (ulong *******)0x0) {
      unaff_R12 = (ulong *******)0x0;
    }
    else {
      if (((ulong)ppppppuVar14 & 1) == 0) {
        ppppppuVar14 = (ulong ******)((long)param_6 + 1);
      }
      else {
        ppppppuVar14 = param_6[2];
      }
      pppppppuVar15 = (ulong *******)((long)ppppppuVar14 + (long)unaff_R13);
      pppppppuStack_b0 = (ulong *******)&UNK_003df7f1;
      pppppppuVar7 = param_1;
      func_0x0099bd90(pppppppuVar15,param_1,param_2);
      unaff_R13 = (ulong *******)((long)unaff_R13 + (long)param_2);
      if (((ulong)*param_6 & 1) == 0) {
        *(char *)param_6 = (char)unaff_R13 * '\x02';
      }
      else {
        param_6[1] = (ulong ******)unaff_R13;
      }
      *(byte *)((long)ppppppuVar14 + (long)unaff_R13) = 0;
      unaff_R12 = (ulong *******)0x0;
    }
code_r0x003df9fa:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return unaff_R12;
    }
    pppppppuStack_b0 = (ulong *******)&UNK_003dfa72;
    func_0x0099bd00();
    param_2 = pppppppuVar7;
    param_1 = pppppppuVar15;
  }
  else {
    uStack_58 = (ulong ******)0x0;
    uStack_50 = 0;
    pppppppuStack_48 = (ulong *******)0x0;
    uStack_5c = 0;
    auStack_78 = (undefined1  [8])0x0;
    pppppppuStack_70 = (ulong *******)0x0;
    pppppppuStack_68 = (ulong *******)0x0;
    pppppppuVar13 = (ulong *******)((long)param_2 + -4);
    if (pppppppuVar13 < (ulong *******)0xfffffffffffffff7) {
      pppppppuVar8 = (ulong *******)((long)param_1 + 4);
      uStack_a8 = param_5;
      pppppppuStack_a0 = param_4;
      pppppppuStack_98 = param_3;
      if (pppppppuVar13 < (ulong *******)0x17) {
        auStack_78._1_7_ = 0;
        auStack_78[0] = (char)pppppppuVar13 * '\x02';
        pppppppuVar7 = (ulong *******)(auStack_78 + 1);
      }
      else {
        lVar18 = 0x1a;
        if (((ulong)pppppppuVar13 | 7) != 0x17) {
          lVar18 = ((ulong)pppppppuVar13 | 7) + 1;
        }
        pppppppuStack_b0 = (ulong *******)&UNK_003df837;
        pppppppuVar7 = (ulong *******)_Znwm(lVar18);
        unaff_R13 = (ulong *******)(lVar18 + 1);
        auStack_78 = (undefined1  [8])unaff_R13;
        pppppppuStack_70 = pppppppuVar13;
        pppppppuStack_68 = pppppppuVar7;
      }
      pppppppuStack_b0 = (ulong *******)&UNK_003df857;
      func_0x0099bda0(pppppppuVar7,pppppppuVar8,pppppppuVar13);
      *(byte *)((long)pppppppuVar7 + (long)pppppppuVar13) = 0;
      if (((ulong)auStack_78 & 1) == 0) {
        if (auStack_78[0] >> 1 != 0) goto code_r0x003df86d;
code_r0x003df880:
        pppppppuVar7 = (ulong *******)&UNK_0016442f;
        pppppppuStack_b0 = (ulong *******)&UNK_003df88f;
        func_0x0032ea60();
code_r0x003df88f:
        unaff_R12 = (ulong *******)0x0;
        pppppppuVar6 = pppppppuStack_68;
      }
      else {
        if (pppppppuStack_70 == (ulong *******)0x0) goto code_r0x003df880;
code_r0x003df86d:
        pppppppuVar15 = pppppppuStack_68;
        if (((ulong)auStack_78 & 1) == 0) {
          pppppppuVar15 = (ulong *******)(auStack_78 + 1);
        }
        pppppppuStack_b0 = (ulong *******)&UNK_003df8aa;
        plVar16 = (long *)func_0x0099be00();
        pppppppuVar13 = (ulong *******)((long)pppppppuVar15 + -1);
        do {
          pppppppuVar15 = pppppppuVar13;
          pppppppuVar13 = (ulong *******)((long)pppppppuVar15 + 1);
        } while ((*(byte *)(*plVar16 + 1 + (long)(char)*(byte *)((long)pppppppuVar15 + 1) * 2) &
                 0x20) != 0);
        uVar12 = 10;
        if (*(byte *)((long)pppppppuVar15 + 1) == 0x30) {
          uVar12 = 0x10;
          if ((*(byte *)((long)pppppppuVar15 + 2) != 0x78) &&
             (uVar12 = 10, *(byte *)((long)pppppppuVar15 + 2) == 0x58)) {
            uVar12 = 0x10;
          }
        }
        pppppppuStack_b0 = (ulong *******)&UNK_003df8ef;
        pppppppuVar8 = (ulong *******)func_0x0099bce0();
        *(undefined4 *)pppppppuVar8 = 0;
        uStack_90 = (ulong *******)0x0;
        pppppppuStack_b0 = (ulong *******)&UNK_003df915;
        pppppppuVar15 = pppppppuVar13;
        pppppppuVar6 = (ulong *******)func_0x0099beb0(pppppppuVar13,&uStack_90,uVar12);
        if (*(int *)pppppppuVar8 == 0) {
          uVar10 = 0x16;
          if ((pppppppuVar13 == uStack_90) || (*(byte *)uStack_90 != 0)) {
code_r0x003df949:
            *(undefined4 *)pppppppuVar8 = uVar10;
            goto code_r0x003df94c;
          }
          uStack_5c = (uint)pppppppuVar6;
          pppppppuVar7 = (ulong *******)(long)(int)uStack_5c;
          uVar10 = 0x22;
          if (pppppppuVar7 != pppppppuVar6) goto code_r0x003df949;
          if (pppppppuVar6 < (ulong *******)0x10000) goto code_r0x003df96b;
          pppppppuVar7 = (ulong *******)&UNK_0015c83e;
          pppppppuVar15 = (ulong *******)&uStack_90;
          pppppppuStack_b0 = (ulong *******)&UNK_003dfa41;
          _ZN7android4base12StringPrintfEPKcz
                    (pppppppuVar15,&UNK_0015c83e,(ulong)pppppppuVar6 & 0xffffffff,uStack_a8);
          if (((ulong)*param_6 & 1) != 0) {
            pppppppuVar15 = (ulong *******)param_6[2];
            pppppppuVar7 = (ulong *******)((ulong)*param_6 & 0xfffffffffffffffe);
            pppppppuStack_b0 = (ulong *******)&UNK_003dfa56;
            _ZdaPvSt11align_val_t();
          }
          param_6[2] = ppppppuStack_80;
          *(undefined4 *)param_6 = (undefined4)uStack_90;
          *(undefined4 *)((long)param_6 + 4) = uStack_90._4_4_;
          *(undefined4 *)(param_6 + 1) = uStack_88;
          *(undefined4 *)((long)param_6 + 0xc) = uStack_84;
          goto code_r0x003df88f;
        }
code_r0x003df94c:
        uStack_5c = 0x15b3;
        pppppppuVar15 = (ulong *******)auStack_78;
        pppppppuVar7 = (ulong *******)&uStack_58;
        pppppppuStack_b0 = (ulong *******)&UNK_003df967;
        cVar4 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                          (pppppppuVar15,pppppppuVar7,&uStack_5c,uStack_a8,param_6);
        if (cVar4 == '\0') {
          unaff_R12 = (ulong *******)0x0;
          pppppppuVar6 = pppppppuStack_68;
        }
        else {
code_r0x003df96b:
          pppppppuVar6 = pppppppuStack_98;
          pppppppuVar3 = pppppppuStack_a0;
          if (pppppppuStack_98 != (ulong *******)0x0) {
            if (((ulong)*pppppppuStack_98 & 1) != 0) {
              pppppppuVar15 = (ulong *******)pppppppuStack_98[2];
              pppppppuVar7 = (ulong *******)((ulong)*pppppppuStack_98 & 0xfffffffffffffffe);
              pppppppuStack_b0 = (ulong *******)&UNK_003df999;
              _ZdaPvSt11align_val_t();
              param_6 = pppppppuVar3;
              pppppppuVar13 = pppppppuVar6;
            }
            pppppppuVar6[2] = (ulong ******)pppppppuStack_48;
            *(undefined4 *)pppppppuVar6 = (undefined4)uStack_58;
            *(undefined4 *)((long)pppppppuVar6 + 4) = uStack_58._4_4_;
            *(undefined4 *)(pppppppuVar6 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((long)pppppppuVar6 + 0xc) = uStack_50._4_4_;
            uStack_58 = (ulong ******)((ulong)uStack_58 & 0xffffffffffff0000);
          }
          unaff_R12 = (ulong *******)0x1;
          pppppppuVar6 = pppppppuStack_68;
          if (pppppppuVar3 != (ulong *******)0x0) {
            *(uint *)pppppppuVar3 = uStack_5c;
          }
        }
      }
      pppppppuStack_68 = pppppppuVar6;
      if (((ulong)auStack_78 & 1) != 0) {
        pppppppuVar7 = (ulong *******)((ulong)auStack_78 & 0xfffffffffffffffe);
        pppppppuStack_b0 = (ulong *******)&UNK_003df9e3;
        _ZdaPvSt11align_val_t();
        pppppppuVar15 = pppppppuVar6;
      }
      if (((ulong)uStack_58 & 1) != 0) {
        pppppppuVar7 = (ulong *******)((ulong)uStack_58 & 0xfffffffffffffffe);
        pppppppuStack_b0 = (ulong *******)&UNK_003df9fa;
        pppppppuVar15 = pppppppuStack_48;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x003df9fa;
    }
  }
  pppppppuStack_b0 = (ulong *******)&UNK_003dfa77;
  func_0x0032e8f0();
  pppppppuStack_b0 = (ulong *******)&stack0xfffffffffffffff8;
  pppppppuStack_b8 = pppppppuVar8;
  pppppppuStack_c0 = pppppppuVar13;
  pppppppuStack_c8 = unaff_R13;
  pppppppuStack_d0 = unaff_R12;
  pppppppuStack_d8 = param_6;
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < (ulong *******)0x4) {
code_r0x003dfac7:
    param_2 = (ulong *******)&UNK_00165f9a;
    apuStack_148[0] = &UNK_003dfad6;
    param_1 = extraout_RDX;
    func_0x0032ea60();
code_r0x003dfad6:
    pppppppuVar7 = (ulong *******)0xffffffff;
  }
  else {
    if (*(int *)param_1 != 0x3a706374) {
      if ((param_2 < (ulong *******)0x6) ||
         (*(short *)((long)param_1 + 4) != 0x3a6b || *(int *)param_1 != 0x636f7376))
      goto code_r0x003dfac7;
      auStack_100 = (undefined1  [8])0x0;
      pppppppuStack_f8 = (ulong *******)0x0;
      pppppppuStack_f0 = (ulong *******)0x0;
      if ((ulong *******)0xfffffffffffffff6 < param_2) goto code_r0x003dfdf7;
      if (param_2 < (ulong *******)0x17) {
        auStack_100._1_7_ = 0;
        auStack_100[0] = (char)param_2 * '\x02';
        pppppppuVar8 = (ulong *******)(auStack_100 + 1);
      }
      else {
        lVar18 = 0x1a;
        if (((ulong)param_2 | 7) != 0x17) {
          lVar18 = ((ulong)param_2 | 7) + 1;
        }
        apuStack_148[0] = &UNK_003dfb7a;
        pppppppuVar8 = (ulong *******)_Znwm(lVar18);
        unaff_R12 = (ulong *******)(lVar18 + 1);
        unaff_R13 = param_2;
        auStack_100 = (undefined1  [8])unaff_R12;
        pppppppuStack_f8 = param_2;
        pppppppuStack_f0 = pppppppuVar8;
      }
      apuStack_148[0] = &UNK_003dfba0;
      func_0x0099bda0(pppppppuVar8,param_1,param_2);
      *(byte *)((long)pppppppuVar8 + (long)param_2) = 0;
      pppppppuStack_120 = (ulong *******)0x0;
      pppppppuStack_118 = (ulong *******)0x0;
      lStack_110 = 0;
      apppppppuStack_138[0] = (ulong *******)CONCAT53(apppppppuStack_138[0]._3_5_,0x3a02);
      apuStack_148[0] = &UNK_003dfbd8;
      _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                (&pppppppuStack_120,auStack_100,apppppppuStack_138);
      if (((ulong)apppppppuStack_138[0] & 1) != 0) {
        apuStack_148[0] = &UNK_003dfbf5;
        _ZdaPvSt11align_val_t(uStack_128,(ulong)apppppppuStack_138[0] & 0xfffffffffffffffe);
      }
      pppppppuVar15 = pppppppuStack_120;
      if ((long)pppppppuStack_118 - (long)pppppppuStack_120 == 0x30) {
        if (((ulong)pppppppuStack_120[3] & 1) == 0) {
          ppppppuVar14 = (ulong ******)((long)pppppppuStack_120 + 0x19);
        }
        else {
          ppppppuVar14 = pppppppuStack_120[5];
        }
        apuStack_148[0] = &UNK_003dfc30;
        plVar16 = (long *)func_0x0099be00();
        pppppppuVar15 = (ulong *******)((long)ppppppuVar14 + -1);
        do {
          pppppppuVar8 = pppppppuVar15;
          pppppppuVar15 = (ulong *******)((long)pppppppuVar8 + 1);
        } while ((*(byte *)(*plVar16 + 1 + (long)(char)*(byte *)((long)pppppppuVar8 + 1) * 2) & 0x20
                 ) != 0);
        unaff_R12 = (ulong *******)0xa;
        if (*(byte *)((long)pppppppuVar8 + 1) == 0x30) {
          unaff_R12 = (ulong *******)0x10;
          if ((*(byte *)((long)pppppppuVar8 + 2) != 0x78) &&
             (unaff_R12 = (ulong *******)0xa, *(byte *)((long)pppppppuVar8 + 2) == 0x58)) {
            unaff_R12 = (ulong *******)0x10;
          }
        }
        apuStack_148[0] = &UNK_003dfc7f;
        pppppppuVar8 = (ulong *******)func_0x0099bce0();
        *(undefined4 *)pppppppuVar8 = 0;
        apppppppuStack_138[0] = (ulong *******)0x0;
        param_2 = (ulong *******)apppppppuStack_138;
        apuStack_148[0] = &UNK_003dfca5;
        param_1 = pppppppuVar15;
        pppppppuVar7 = (ulong *******)func_0x0099beb0(pppppppuVar15,param_2,unaff_R12);
        pppppppuVar13 = pppppppuStack_120;
        if (*(int *)pppppppuVar8 == 0) {
          uVar10 = 0x16;
          if (((pppppppuVar15 == apppppppuStack_138[0]) || (*(byte *)apppppppuStack_138[0] != 0)) ||
             (uVar10 = 0x22, (ulong *******)(long)(int)pppppppuVar7 != pppppppuVar7)) {
            *(undefined4 *)pppppppuVar8 = uVar10;
            goto code_r0x003dfcd5;
          }
          if (-1 < (long)pppppppuVar7) {
            param_6 = extraout_RDX;
            pppppppuVar15 = pppppppuStack_120;
            pppppppuVar6 = pppppppuStack_118;
            if (pppppppuStack_120 != (ulong *******)0x0) {
              while (pppppppuVar8 = pppppppuVar6, param_1 = pppppppuVar15,
                    pppppppuStack_120 = param_1, pppppppuVar13 != pppppppuVar8) {
                if (((ulong)pppppppuVar8[-3] & 1) != 0) {
                  apuStack_148[0] = &UNK_003dfda7;
                  _ZdaPvSt11align_val_t
                            (pppppppuVar8[-1],(ulong)pppppppuVar8[-3] & 0xfffffffffffffffe);
                }
                pppppppuVar15 = pppppppuStack_120;
                pppppppuVar6 = pppppppuVar8 + -3;
              }
              pppppppuStack_118 = pppppppuVar13;
              param_2 = (ulong *******)(lStack_110 - (long)param_1);
              apuStack_148[0] = &UNK_003dfdc9;
              _ZdaPvSt11align_val_t();
              param_6 = pppppppuVar7;
            }
            if (((ulong)auStack_100 & 1) != 0) {
              param_2 = (ulong *******)((ulong)auStack_100 & 0xfffffffffffffffe);
              apuStack_148[0] = &UNK_003dfdea;
              param_1 = pppppppuStack_f0;
              _ZdaPvSt11align_val_t();
              param_6 = pppppppuVar7;
            }
            goto code_r0x003dfadb;
          }
          param_2 = (ulong *******)&UNK_001613ec;
        }
        else {
code_r0x003dfcd5:
          param_2 = (ulong *******)&UNK_001849c3;
        }
        apuStack_148[0] = &UNK_003dfce4;
        param_1 = extraout_RDX;
        func_0x0032ea60();
        *(undefined4 *)pppppppuVar8 = 0x16;
      }
      else {
        param_2 = (ulong *******)&UNK_00186642;
        apuStack_148[0] = &UNK_003dfc22;
        param_1 = extraout_RDX;
        func_0x0032ea60();
      }
      param_6 = pppppppuStack_120;
      pppppppuVar7 = pppppppuStack_120;
      pppppppuVar13 = pppppppuStack_118;
      if (pppppppuStack_120 != (ulong *******)0x0) {
        while (pppppppuVar15 = pppppppuVar13, param_1 = pppppppuVar7, pppppppuStack_120 = param_1,
              param_6 != pppppppuVar15) {
          if (((ulong)pppppppuVar15[-3] & 1) != 0) {
            apuStack_148[0] = &UNK_003dfd31;
            _ZdaPvSt11align_val_t(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
          }
          pppppppuVar7 = pppppppuStack_120;
          pppppppuVar13 = pppppppuVar15 + -3;
        }
        pppppppuStack_118 = param_6;
        param_2 = (ulong *******)(lStack_110 - (long)param_1);
        apuStack_148[0] = &UNK_003dfd47;
        _ZdaPvSt11align_val_t();
      }
      pppppppuVar13 = pppppppuVar15;
      if (((ulong)auStack_100 & 1) != 0) {
        param_2 = (ulong *******)((ulong)auStack_100 & 0xfffffffffffffffe);
        apuStack_148[0] = &UNK_003dfd62;
        param_1 = pppppppuStack_f0;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x003dfad6;
    }
    auStack_100 = (undefined1  [8])((ulong)auStack_100 & 0xffffffff00000000);
    apuStack_148[0] = &UNK_003dfb15;
    cVar4 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                      ();
    pppppppuVar7 = (ulong *******)0xffffffff;
    if (cVar4 != '\0') {
      pppppppuVar7 = (ulong *******)((ulong)auStack_100 & 0xffffffff);
    }
  }
code_r0x003dfadb:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
    return pppppppuVar7;
  }
  apuStack_148[0] = &UNK_003dfdf7;
  func_0x0099bd00();
code_r0x003dfdf7:
  apuStack_148[0] = &UNK_003dfdfc;
  func_0x0032e8f0();
  lStack_178 = *(long *)(in_FS_OFFSET + 0x28);
  plVar16 = (long *)(lRam0000000000a006b0 + 0x10);
  pppppppuVar15 = param_2;
  pppppppuStack_1a8 = param_2;
  pppppppuStack_1a0 = param_1;
  pppppppuStack_170 = param_6;
  pppppppuStack_168 = unaff_R12;
  pppppppuStack_160 = unaff_R13;
  pppppppuStack_158 = pppppppuVar13;
  pppppppuStack_150 = pppppppuVar8;
  apuStack_148[0] = (undefined *)&pppppppuStack_b0;
  do {
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      if (pppppppuVar15 < (ulong *******)0x4) {
code_r0x003dffa1:
        pppppppuVar7 = (ulong *******)0x0;
      }
      else {
        pppppppuVar7 = (ulong *******)0x1;
        param_2 = pppppppuStack_1a0;
        if (*(int *)pppppppuStack_1a0 == 0x3a706374) goto code_r0x003dffa7;
        if (pppppppuVar15 < (ulong *******)0x9) {
          if (pppppppuVar15 < (ulong *******)0x6) goto code_r0x003dffa1;
        }
        else if (*(byte *)(pppppppuStack_1a0 + 1) == 0x3a &&
                 *pppppppuStack_1a0 == (ulong ******)0x6466747065636361) goto code_r0x003dffa7;
        pppppppuVar7 = (ulong *******)
                       (ulong)(*(short *)((long)pppppppuStack_1a0 + 4) == 0x3a6b &&
                              *(int *)pppppppuStack_1a0 == 0x636f7376);
      }
      goto code_r0x003dffa7;
    }
    bVar1 = *(byte *)(plVar16 + 2);
    if ((bVar1 & 1) == 0) {
      pppppppuVar8 = (ulong *******)(ulong)(bVar1 >> 1);
    }
    else {
      pppppppuVar8 = (ulong *******)plVar16[3];
    }
    unaff_R12 = (ulong *******)plVar16[4];
    auStack_198 = (undefined1  [8])0x0;
    pppppppuStack_190 = (ulong *******)0x0;
    pppppppuStack_188 = (ulong *******)0x0;
    param_6 = (ulong *******)((long)pppppppuVar8 + 1);
    if ((ulong *******)0xfffffffffffffff6 < param_6) {
      puStack_1c0 = &UNK_003e0018;
      func_0x0032e8f0();
      goto code_r0x003e0018;
    }
    if (param_6 < (ulong *******)0x17) {
      uVar9 = 0;
      auStack_198._1_7_ = 0;
      auStack_198[0] = (char)param_6 * '\x02';
      pppppppuVar7 = pppppppuVar8;
    }
    else {
      lVar18 = ((ulong)param_6 | 7) + 1;
      if (((ulong)param_6 | 7) == 0x17) {
        lVar18 = 0x1a;
      }
      puStack_1c0 = &UNK_003dfed7;
      pppppppuStack_1b0 = pppppppuVar8;
      pppppppuStack_188 = (ulong *******)_Znwm(lVar18);
      auStack_198 = (undefined1  [8])(lVar18 + 1);
      uVar9 = (ulong)auStack_198 & 0xffffffff;
      pppppppuVar7 = pppppppuStack_1b0;
      pppppppuStack_190 = param_6;
    }
    if ((bVar1 & 1) == 0) {
      unaff_R12 = (ulong *******)((long)plVar16 + 0x11);
    }
    pppppppuVar13 = pppppppuStack_188;
    if ((uVar9 & 1) == 0) {
      pppppppuVar13 = (ulong *******)(auStack_198 + 1);
    }
    puStack_1c0 = &UNK_003dff17;
    param_2 = unaff_R12;
    param_1 = pppppppuVar13;
    func_0x0099bda0(pppppppuVar13,unaff_R12,pppppppuVar7);
    auVar2 = auStack_198;
    pppppppuVar15 = pppppppuStack_1a8;
    ((byte *)((long)pppppppuVar13 + (long)pppppppuVar7))[0] = 0x3a;
    pppppppuVar8 = pppppppuStack_188;
    ((byte *)((long)pppppppuVar13 + (long)pppppppuVar7))[1] = 0;
    param_6 = (ulong *******)((ulong)auStack_198 & 0xff);
    pppppppuVar7 = pppppppuStack_190;
    if (((ulong)auStack_198 & 1) == 0) {
      pppppppuVar7 = (ulong *******)((ulong)auStack_198 >> 1 & 0x7f);
    }
    if (pppppppuStack_1a8 < pppppppuVar7) {
      unaff_R12 = (ulong *******)0x0;
    }
    else {
      param_2 = pppppppuStack_188;
      if (((ulong)auStack_198 & 1) == 0) {
        param_2 = (ulong *******)(auStack_198 + 1);
      }
      puStack_1c0 = &UNK_003dff77;
      param_1 = pppppppuStack_1a0;
      iVar5 = func_0x0099bf90();
      unaff_R12 = (ulong *******)CONCAT71((int7)((ulong)unaff_R12 >> 8),iVar5 == 0);
    }
    if (((ulong)auVar2 & 1) != 0) {
      param_2 = (ulong *******)((ulong)auStack_198 & 0xfffffffffffffffe);
      puStack_1c0 = &UNK_003dff96;
      param_1 = pppppppuVar8;
      _ZdaPvSt11align_val_t();
    }
  } while ((char)unaff_R12 == '\0');
  pppppppuVar7 = (ulong *******)0x1;
code_r0x003dffa7:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_178) {
    return pppppppuVar7;
  }
code_r0x003e0018:
  puStack_1c0 = &UNK_003e001d;
  func_0x0099bd00();
  lStack_1f0 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = (long *)(lRam0000000000a006b0 + 0x10);
  pppppppuStack_1e8 = param_6;
  pppppppuStack_1e0 = unaff_R12;
  pppppppuStack_1d8 = pppppppuVar15;
  lStack_1d0 = (long)plVar16;
  pppppppuStack_1c8 = pppppppuVar8;
  puStack_1c0 = (undefined *)apuStack_148;
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      uStack_210 = 0;
      pppppppuStack_208 = (ulong *******)0x0;
      lStack_200 = 0;
      auStack_230 = (undefined1  [8])0x0;
      uStack_228 = 0;
      plStack_220 = (long *)0x0;
      pppppppuVar15 = (ulong *******)0x0;
      cVar4 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                        (param_1,param_2,auStack_230,0,0,&uStack_210);
      if (cVar4 != '\0') {
        if (((ulong)auStack_230 & 1) == 0) {
          uVar9 = (ulong)(auStack_230[0] >> 1);
          if (auStack_230[0] >> 1 == 0) goto code_r0x003e0241;
        }
        else {
          uVar9 = uStack_228;
          if (uStack_228 == 0) {
code_r0x003e0241:
            pppppppuVar15 = (ulong *******)0x1;
            goto joined_r0x003e0278;
          }
        }
        if (uVar9 == 9) {
          plVar16 = plStack_220;
          if (((ulong)auStack_230 & 1) == 0) {
            plVar16 = (long *)(auStack_230 + 1);
          }
          pppppppuVar15 =
               (ulong *******)(ulong)((char)plVar16[1] == 't' && *plVar16 == 0x736f686c61636f6c);
        }
        else {
          pppppppuVar15 = (ulong *******)0x0;
        }
      }
joined_r0x003e0278:
      if (((ulong)auStack_230 & 1) != 0) {
        _ZdaPvSt11align_val_t(plStack_220,(ulong)auStack_230 & 0xfffffffffffffffe);
      }
      if ((uStack_210 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_200,uStack_210 & 0xfffffffffffffffe);
      }
      goto code_r0x003e02a2;
    }
    bVar1 = *(byte *)(plVar11 + 2);
    if ((bVar1 & 1) == 0) {
      uVar9 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar9 = plVar11[3];
    }
    lVar18 = plVar11[4];
    uStack_210 = 0;
    pppppppuStack_208 = (ulong *******)0x0;
    lStack_200 = 0;
    pppppppuVar15 = (ulong *******)(uVar9 + 1);
    if ((ulong *******)0xfffffffffffffff6 < pppppppuVar15) {
      func_0x0032e8f0();
      goto code_r0x003e02c8;
    }
    if (pppppppuVar15 < (ulong *******)0x17) {
      uVar17 = 0;
      uStack_210 = (ulong)(byte)((char)pppppppuVar15 * '\x02');
    }
    else {
      lVar19 = ((ulong)pppppppuVar15 | 7) + 1;
      if (((ulong)pppppppuVar15 | 7) == 0x17) {
        lVar19 = 0x1a;
      }
      lStack_200 = _Znwm(lVar19);
      uStack_210 = lVar19 + 1;
      uVar17 = uStack_210 & 0xffffffff;
      pppppppuStack_208 = pppppppuVar15;
    }
    if ((bVar1 & 1) == 0) {
      lVar18 = (long)plVar11 + 0x11;
    }
    lVar19 = lStack_200;
    if ((uVar17 & 1) == 0) {
      lVar19 = (long)&uStack_210 + 1;
    }
    func_0x0099bda0(lVar19,lVar18,uVar9);
    uVar17 = uStack_210;
    *(undefined2 *)(lVar19 + uVar9) = 0x3a;
    lVar18 = lStack_200;
    if ((uStack_210 & 1) == 0) {
      if ((ulong *******)(uStack_210 >> 1 & 0x7f) <= param_2) goto code_r0x003e015f;
code_r0x003e019b:
      bVar20 = false;
    }
    else {
      if (param_2 < pppppppuStack_208) goto code_r0x003e019b;
code_r0x003e015f:
      lVar19 = lStack_200;
      if ((uStack_210 & 1) == 0) {
        lVar19 = (long)&uStack_210 + 1;
      }
      iVar5 = func_0x0099bf90(param_1,lVar19);
      bVar20 = iVar5 == 0;
    }
    if ((uVar17 & 1) != 0) {
      _ZdaPvSt11align_val_t(lVar18,uStack_210 & 0xfffffffffffffffe);
    }
  } while (!bVar20);
  pppppppuVar15 = (ulong *******)0x1;
code_r0x003e02a2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1f0) {
    return pppppppuVar15;
  }
code_r0x003e02c8:
  func_0x0099bd00();
  return (ulong *******)0x1;
}


