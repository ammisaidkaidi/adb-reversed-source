// Function: _Z18delete_device_fileRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 00351f60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * _Z18delete_device_fileRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                  (undefined8 param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  char cVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  char extraout_DL;
  ulong *puVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined **unaff_R12;
  ulong uVar15;
  ulong unaff_R13;
  ulong uVar16;
  ulong unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined4 **ppuStack_198;
  undefined4 **ppuStack_190;
  undefined4 **ppuStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong *puStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  undefined *puStack_138;
  ulong *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  byte bStack_108;
  undefined7 uStack_107;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined *apuStack_80 [2];
  byte bStack_70;
  undefined7 uStack_6f;
  int iStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_80[0] = &UNK_00351f85;
  _Z10escape_argRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(&bStack_70,param_1)
  ;
  apuStack_80[0] = &UNK_00351f9b;
  puVar8 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&bStack_70,0,&UNK_001642ce,3);
  uStack_48 = puVar8[2];
  uStack_58 = *puVar8;
  uStack_50 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  apuStack_80[0] = &UNK_00351fc8;
  puVar8 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (&uStack_58);
  uVar15 = puVar8[2];
  uStack_38 = *puVar8;
  uStack_30 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8 = &uStack_38;
  puVar12 = (ulong *)0x0;
  apuStack_80[0] = &UNK_00351ff7;
  uStack_28 = uVar15;
  uVar7 = _Z18send_shell_commandRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbP32StandardStreamsCallbackInterface
                    (puVar8,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
  iVar13 = (int)puVar8;
  puVar8 = (ulong *)(ulong)uVar7;
  uVar16 = uStack_48;
  if ((uStack_38 & 1) != 0) {
    puVar12 = (ulong *)(uStack_38 & 0xfffffffffffffffe);
    apuStack_80[0] = &UNK_00352045;
    uVar16 = uStack_28;
    _ZdaPvSt11align_val_t();
    iVar13 = (int)uVar16;
    uVar16 = uStack_48;
  }
  uStack_48 = uVar16;
  if ((uStack_58 & 1) != 0) {
    puVar12 = (ulong *)(uStack_58 & 0xfffffffffffffffe);
    apuStack_80[0] = &UNK_0035205c;
    _ZdaPvSt11align_val_t();
    iVar13 = (int)uVar16;
  }
  if ((bStack_70 & 1) != 0) {
    puVar12 = (ulong *)(CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
    apuStack_80[0] = &UNK_0035201c;
    iVar13 = iStack_60;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return puVar8;
  }
  apuStack_80[0] = &UNK_00352069;
  func_0x0099bd00();
  uStack_b0 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  puStack_d0 = &UNK_006d7004;
  puStack_a8 = puVar8;
  apuStack_80[0] = &stack0xfffffffffffffff8;
  if (0 < iVar13) {
    unaff_R14 = (ulong)(iVar13 + 1);
    puVar8 = puVar12;
    uVar16 = unaff_R13;
    apuStack_80[0] = &stack0xfffffffffffffff8;
    do {
      unaff_R12 = (undefined **)*puVar8;
      puStack_138 = &UNK_003520dc;
      ppuVar14 = unaff_R12;
      unaff_R13 = func_0x0099bcf0();
      if (0xfffffffffffffff6 < unaff_R13) {
        puStack_138 = &UNK_0035228a;
        func_0x0032e8f0();
        goto code_r0x0035228a;
      }
      if (unaff_R13 < 0x17) {
        uStack_120 = CONCAT71(uStack_120._1_7_,(char)unaff_R13 * '\x02');
        lVar11 = (long)&uStack_120 + 1;
      }
      else {
        lVar10 = (unaff_R13 | 7) + 1;
        if ((unaff_R13 | 7) == 0x17) {
          lVar10 = 0x1a;
        }
        puStack_138 = &UNK_00352137;
        puStack_128 = puVar8;
        lVar11 = _Znwm(lVar10);
        uStack_120 = lVar10 + 1;
        puVar8 = puStack_128;
        uStack_118 = unaff_R13;
        lStack_110 = lVar11;
      }
      puStack_138 = &UNK_00352167;
      func_0x0099bd90(lVar11,unaff_R12,unaff_R13);
      *(undefined1 *)(lVar11 + unaff_R13) = 0;
      unaff_R15 = &bStack_108;
      puStack_138 = &UNK_00352182;
      _Z10escape_argRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                (unaff_R15,&uStack_120);
      puStack_138 = &UNK_00352198;
      puVar12 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                   (unaff_R15,0,&UNK_0015ae05,1);
      uVar15 = puVar12[2];
      uStack_f0 = *puVar12;
      uStack_e8 = puVar12[1];
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12 = &uStack_f0;
      puStack_138 = &UNK_003521c2;
      uStack_e0 = uVar15;
      func_0x0032e820(&puStack_d0);
      if ((uStack_f0 & 1) != 0) {
        puVar12 = (ulong *)(uStack_f0 & 0xfffffffffffffffe);
        puStack_138 = &UNK_003521f1;
        _ZdaPvSt11align_val_t(uStack_e0);
      }
      if ((bStack_108 & 1) != 0) {
        puVar12 = (ulong *)(CONCAT71(uStack_107,bStack_108) & 0xfffffffffffffffe);
        puStack_138 = &UNK_0035220e;
        _ZdaPvSt11align_val_t(uStack_f8);
      }
      if ((uStack_120 & 1) != 0) {
        puVar12 = (ulong *)(uStack_120 & 0xfffffffffffffffe);
        puStack_138 = &UNK_00352232;
        _ZdaPvSt11align_val_t(lStack_110);
      }
      puVar8 = puVar8 + 1;
      uVar7 = (int)unaff_R14 - 1;
      unaff_R14 = (ulong)uVar7;
      uVar16 = unaff_R13;
    } while (1 < uVar7);
  }
  ppuVar14 = &puStack_d0;
  puVar12 = (ulong *)0x0;
  puStack_138 = &UNK_00352249;
  puVar9 = (ulong *)_Z18send_shell_commandRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbP32StandardStreamsCallbackInterface
                              (ppuVar14,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
  if (((ulong)puStack_d0 & 1) != 0) {
    puVar12 = (ulong *)((ulong)puStack_d0 & 0xfffffffffffffffe);
    puVar9 = (ulong *)((ulong)puVar9 & 0xffffffff);
    puStack_138 = &UNK_00352262;
    ppuVar14 = ppuStack_c0;
    _ZdaPvSt11align_val_t();
    puVar8 = puVar9;
  }
  uVar15 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar16 = unaff_R13;
  if (uVar15 == uStack_b0) {
    return puVar9;
  }
code_r0x0035228a:
  uVar7 = (uint)uVar15;
  puStack_138 = &UNK_0035228f;
  func_0x0099bd00();
  lStack_168 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_160 = puVar8;
  ppuStack_158 = unaff_R12;
  uStack_150 = uVar16;
  uStack_148 = unaff_R14;
  pbStack_140 = unaff_R15;
  puStack_138 = (undefined *)apuStack_80;
  lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
  puStack_1b8 = (undefined4 *)0x0;
  puStack_1b0 = (undefined4 *)0x0;
  puStack_1a8 = (undefined4 *)0x0;
  if (0 < (int)ppuVar14) {
    iVar13 = -1;
    uVar16 = 0;
    uVar15 = 0xffffffff;
    do {
      uStack_170 = 0;
      piVar1 = (int *)puVar12[uVar16];
      uStack_178 = piVar1;
      uStack_170 = func_0x0099bcf0(piVar1);
      cVar6 = _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (piVar1,uStack_170,&UNK_0017ebb3,4);
      if (((cVar6 == '\0') &&
          (cVar6 = _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (uStack_178,uStack_170,&UNK_001694b9,3), cVar6 == '\0')) &&
         (cVar6 = _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (uStack_178,uStack_170,&UNK_00173e15,4), cVar6 == '\0')) {
        if ((uStack_170 < 7) ||
           (*(int *)((long)uStack_178 + 3) != 0x6c6c6174 || *uStack_178 != 0x74736e69)) {
          puStack_1a0 = puStack_1b0;
          ppuStack_198 = &puStack_1a0;
          ppuStack_190 = (undefined4 **)&uStack_178;
          ppuStack_188 = &puStack_1b8;
          if (puStack_1b0 < puStack_1a8) {
            *puStack_1b0 = (int)uStack_178;
            puStack_1b0[1] = uStack_178._4_4_;
            puStack_1b0[2] = (undefined4)uStack_170;
            puStack_1b0[3] = uStack_170._4_4_;
            puStack_1b0 = puStack_1b0 + 4;
          }
          else {
            _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                      (&ppuStack_198);
            puStack_1b0 = puStack_1a0;
          }
        }
      }
      else {
        if (iVar13 == -1) {
          iVar13 = (int)uVar16;
        }
        uVar15 = uVar16 & 0xffffffff;
      }
      uVar16 = uVar16 + 1;
    } while (((ulong)ppuVar14 & 0xffffffff) != uVar16);
    if (iVar13 != -1) {
      ppuStack_198 = (undefined4 **)0x0;
      ppuStack_190 = (undefined4 **)0x0;
      ppuStack_188 = (undefined4 **)0x0;
      _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE16__init_with_sizeB8nn220000IPPKcSC_EEvT_T0_m
                (&ppuStack_198,puVar12 + iVar13,puVar12 + (long)(int)uVar15 + 1,
                 (long)(int)uVar15 * 8 + 8 + (long)iVar13 * -8 >> 3);
      if ((char)uVar7 == '\0') {
code_r0x00352476:
        func_0x0099bee0(&UNK_0018029e);
        uStack_178 = (int *)0x0;
        _ZN11incremental7installERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEERKNS1_INS0_17basic_string_viewIcS4_EENS5_ISD_EEEEb
                  (&uStack_178,&ppuStack_198,&puStack_1b8,uVar7 & 0xff);
        puVar8 = (ulong *)0xffffffff;
        if (uStack_178._4_1_ == '\x01') {
          lVar11 = _ZNSt3__16chrono12steady_clock3nowEv();
          auVar2 = SEXT816(lVar11 - lVar10) * SEXT816(0x431bde82d7b634db);
          puVar8 = (ulong *)0x0;
          func_0x0099be10(&UNK_001819ae,(int)(auVar2._8_8_ >> 0x12) - (auVar2._12_4_ >> 0x1f));
          if (extraout_DL != '\0') {
            if (-1 < (int)uStack_178) {
              puStack_1a0 = (undefined4 *)((ulong)puStack_1a0 & 0xffffffff00000000);
              puVar8 = (ulong *)0x0;
              func_0x0099c170((ulong)uStack_178 & 0xffffffff,&puStack_1a0,0);
            }
          }
        }
      }
      else {
        cVar6 = _ZN11incremental33should_use_incremental_by_defaultERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE
                          (&ppuStack_198);
        puVar8 = (ulong *)0xffffffff;
        if (cVar6 != '\0') goto code_r0x00352476;
      }
      ppuVar5 = ppuStack_198;
      ppuVar4 = ppuStack_190;
      if (ppuStack_198 != (undefined4 **)0x0) {
        for (; ppuVar5 != ppuVar4; ppuVar4 = ppuVar4 + -3) {
          if (((ulong)ppuVar4[-3] & 1) != 0) {
            _ZdaPvSt11align_val_t(ppuVar4[-1],(ulong)ppuVar4[-3] & 0xfffffffffffffffe);
          }
        }
        ppuStack_190 = ppuVar5;
        _ZdaPvSt11align_val_t(ppuStack_198,(long)ppuStack_188 - (long)ppuStack_198);
      }
      goto code_r0x00352583;
    }
  }
  puVar8 = (ulong *)0xffffffff;
  if ((char)uVar7 == '\0') {
    func_0x0099bd40(&UNK_0015def7,0x32,1,_stderr);
  }
code_r0x00352583:
  if (puStack_1b8 != (undefined4 *)0x0) {
    puStack_1b0 = puStack_1b8;
    _ZdaPvSt11align_val_t(puStack_1b8,(long)puStack_1a8 - (long)puStack_1b8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_168) {
    func_0x0099bd00();
    pcVar3 = (code *)swi(3);
    puVar8 = (ulong *)(*pcVar3)();
    return puVar8;
  }
  return puVar8;
}


