// Function: _ZNO8IOVector8coalesceEv
// Address: 003f3030
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNO8IOVector8coalesceEv(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong uVar15;
  undefined8 **unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined4 **ppuStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  long lStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  undefined8 **ppuStack_68;
  undefined *puStack_60;
  undefined8 *puStack_50;
  ulong *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *param_2;
  ppuVar14 = (undefined8 **)(uVar15 - (long)param_2[1]);
  puVar8 = param_1;
  if (ppuVar14 == (undefined8 **)0x0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
  }
  else {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    unaff_R15 = *(undefined8 ***)(uVar2 + 0x10 + uVar1 * 0x20);
    uVar3 = param_2[4];
    lVar10 = (long)(uVar3 - uVar2) >> 5;
    if (((undefined8 **)param_2[1] == unaff_R15) && (lVar10 == uVar1 + 2)) {
      *param_2 = uVar15 - *(long *)(uVar3 - 0x10);
      *param_1 = *(ulong *)(uVar3 - 0x20);
      uVar15 = *(ulong *)(uVar3 - 0x18);
      *(undefined8 *)(uVar3 - 0x20) = 0;
      *(undefined8 *)(uVar3 - 0x18) = 0;
      param_1[1] = uVar15;
      uVar15 = *(ulong *)(uVar3 - 0x10);
      *(undefined8 *)(uVar3 - 0x10) = 0;
      param_1[2] = uVar15;
      uVar15 = *(ulong *)(uVar3 - 8);
      *(undefined8 *)(uVar3 - 8) = 0;
      param_1[3] = uVar15;
      uVar15 = param_2[4];
      unaff_R15 = (undefined8 **)(uVar15 - 0x20);
      puVar8 = *(ulong **)(uVar15 - 0x20);
      *(undefined8 *)(uVar15 - 0x20) = 0;
      if (puVar8 != (ulong *)0x0) {
        puStack_60 = &UNK_003f3110;
        _ZdaPvSt11align_val_t();
      }
      param_2[4] = (ulong)unaff_R15;
    }
    else if (lVar10 == uVar1 + 1) {
      *param_2 = uVar15 - *(long *)(uVar3 - 0x10);
      *param_1 = *(ulong *)(uVar3 - 0x20);
      uVar15 = *(ulong *)(uVar3 - 0x18);
      *(undefined8 *)(uVar3 - 0x20) = 0;
      *(undefined8 *)(uVar3 - 0x18) = 0;
      param_1[1] = uVar15;
      uVar15 = *(ulong *)(uVar3 - 0x10);
      *(undefined8 *)(uVar3 - 0x10) = 0;
      param_1[2] = uVar15;
      uVar15 = *(ulong *)(uVar3 - 8);
      *(undefined8 *)(uVar3 - 8) = 0;
      param_1[3] = uVar15;
      uVar15 = param_2[4];
      unaff_R15 = (undefined8 **)(uVar15 - 0x20);
      puVar8 = *(ulong **)(uVar15 - 0x20);
      *(undefined8 *)(uVar15 - 0x20) = 0;
      if (puVar8 != (ulong *)0x0) {
        puStack_60 = &UNK_003f3180;
        _ZdaPvSt11align_val_t();
      }
      param_2[4] = (ulong)unaff_R15;
      uVar15 = param_2[1];
      if (uVar15 != 0) {
        puStack_60 = &UNK_003f31a4;
        func_0x0099bd90(*param_1,*param_1 + uVar15,param_1[2] - uVar15);
        ppuVar14 = (undefined8 **)(param_1[2] - param_2[1]);
        puStack_60 = &UNK_003f31b4;
        puVar8 = param_1;
        _ZN5Block6resizeEm();
        param_2[1] = 0;
      }
    }
    else {
      puVar9 = (ulong *)(uVar2 + uVar1 * 0x20);
      ppuVar4 = (undefined8 **)puVar9[1];
      if (ppuVar4 < ppuVar14) {
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        puStack_60 = &UNK_003f31df;
        _ZN5Block6resizeEm(param_1);
        uStack_40 = 0;
        puStack_50 = &uStack_40;
        ppuVar14 = &puStack_50;
        puStack_60 = &UNK_003f31ff;
        puVar8 = param_2;
        puStack_48 = param_1;
        _ZNK8IOVector14iterate_blocksIZNKRS_8coalesceI5BlockEET_vEUlPKcmE_EEvOS3_();
      }
      else {
        uVar15 = *puVar9;
        *param_1 = uVar15;
        *puVar9 = 0;
        puVar9[1] = 0;
        param_1[1] = (ulong)ppuVar4;
        puVar9[2] = 0;
        param_1[2] = (ulong)unaff_R15;
        uVar1 = puVar9[3];
        puVar9[3] = 0;
        param_1[3] = uVar1;
        *param_2 = *param_2 - (long)unaff_R15;
        uVar1 = param_2[1];
        if (uVar1 != 0) {
          puStack_60 = &UNK_003f324b;
          func_0x0099bd90(uVar15,uVar15 + uVar1,(long)unaff_R15 - uVar1);
          unaff_R15 = (undefined8 **)((long)unaff_R15 - param_2[1]);
          param_2[1] = 0;
        }
        unaff_R12 = param_2[2];
        uVar15 = param_2[3];
        unaff_R13 = unaff_R12 + 1;
        if (unaff_R13 < (ulong)((long)(param_2[4] - uVar15) >> 5)) {
          unaff_R12 = unaff_R12 * 0x20 + 0x30;
          do {
            puStack_60 = &UNK_003f3294;
            func_0x0099bda0(*param_1 + (long)unaff_R15,*(undefined8 *)((uVar15 - 0x10) + unaff_R12),
                            *(undefined8 *)(uVar15 + unaff_R12));
            uVar15 = param_2[3];
            unaff_R15 = (undefined8 **)((long)unaff_R15 + *(long *)(uVar15 + unaff_R12));
            unaff_R13 = unaff_R13 + 1;
            unaff_R12 = unaff_R12 + 0x20;
          } while (unaff_R13 < (ulong)((long)(param_2[4] - uVar15) >> 5));
        }
        puStack_60 = &UNK_003f32be;
        ppuVar14 = unaff_R15;
        _ZN5Block6resizeEm();
        param_2[2] = param_2[2] + 1;
      }
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  puStack_60 = &UNK_003f32e8;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar13 = ppuVar14[2];
  puVar12 = ppuVar14[3];
  puVar11 = (undefined8 *)((long)ppuVar14[4] - (long)puVar12 >> 5);
  uVar15 = (long)puVar11 - (long)puVar13;
  puStack_88 = param_1;
  uStack_80 = unaff_R12;
  uStack_78 = unaff_R13;
  puStack_70 = param_2;
  ppuStack_68 = unaff_R15;
  if (uVar15 == 0) {
    puVar6 = (undefined4 *)0x0;
    puStack_60 = &stack0xfffffffffffffff8;
  }
  else {
    puStack_60 = &stack0xfffffffffffffff8;
    if (uVar15 >> 0x3c != 0) goto code_r0x003f357a;
    puStack_60 = &stack0xfffffffffffffff8;
    puVar6 = (undefined4 *)_Znwm(uVar15 * 0x10);
    *puVar8 = (ulong)puVar6;
    puVar8[1] = (ulong)puVar6;
    puVar8[2] = (ulong)(puVar6 + uVar15 * 4);
  }
  if ((*ppuVar14 != ppuVar14[1]) && (puVar13 < puVar11)) {
    uVar15 = (long)puVar13 << 5 | 0x10;
    do {
      lVar10 = *(long *)((long)puVar12 + (uVar15 - 0x10));
      puVar12 = *(undefined8 **)((long)puVar12 + uVar15);
      if (puVar13 == ppuVar14[2]) {
        puVar11 = ppuVar14[1];
        if (puVar12 < puVar11) {
          do {
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&ppuStack_a8,&UNK_00180212,0xed,6,0,0xffffffff);
            uVar7 = _ZN7android4base10LogMessage6streamEv(&ppuStack_a8);
            uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
            uVar7 = func_0x0032eb30(uVar7,&UNK_00161431,0xc);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
            uVar7 = func_0x0032eb30(uVar7,&UNK_00181913,2);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
            uVar7 = func_0x0032eb30(uVar7,&UNK_00181bcb,0xd);
            uVar7 = func_0x0032eb30(uVar7,&UNK_001866e1,0xf);
            uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,puVar12);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0018352a,0x10);
            uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,puVar11);
            func_0x0032eb30(uVar7,&UNK_0017b788,2);
            _ZN7android4base10LogMessageD2Ev(&ppuStack_a8);
          } while( true );
        }
        lVar10 = lVar10 + (long)puVar11;
        puVar12 = (undefined8 *)((long)puVar12 - (long)puVar11);
      }
      uStack_c0 = lVar10;
      uStack_b8 = puVar12;
      puStack_b0 = puVar6;
      ppuStack_a8 = &puStack_b0;
      puStack_a0 = &uStack_c0;
      puStack_98 = puVar8;
      if (puVar6 < (undefined4 *)puVar8[2]) {
        uStack_c0._0_4_ = (undefined4)lVar10;
        uStack_c0._4_4_ = (undefined4)((ulong)lVar10 >> 0x20);
        uStack_b8._0_4_ = SUB84(puVar12,0);
        uStack_b8._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
        *puVar6 = (undefined4)uStack_c0;
        puVar6[1] = uStack_c0._4_4_;
        puVar6[2] = (undefined4)uStack_b8;
        puVar6[3] = uStack_b8._4_4_;
        puVar6 = puVar6 + 4;
      }
      else {
        _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                  (&ppuStack_a8);
        puVar6 = puStack_b0;
      }
      puVar8[1] = (ulong)puVar6;
      puVar13 = (undefined8 *)((long)puVar13 + 1);
      puVar12 = ppuVar14[3];
      uVar15 = uVar15 + 0x20;
    } while (puVar13 < (undefined8 *)((long)ppuVar14[4] - (long)puVar12 >> 5));
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return puVar8;
  }
  func_0x0099bd00();
code_r0x003f357a:
  func_0x00330ca0();
  pcVar5 = (code *)swi(3);
  puVar8 = (ulong *)(*pcVar5)();
  return puVar8;
}


