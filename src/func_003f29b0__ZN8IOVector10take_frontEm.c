// Function: _ZN8IOVector10take_frontEm
// Address: 003f29b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN8IOVector10take_frontEm(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar10 = param_1;
  if (param_3 == 0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x003f2f2d;
  }
  uVar9 = param_2[1];
  uVar12 = *param_2 - uVar9;
  if (param_3 == uVar12) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      _ZN8IOVectoraSEOS_(param_1);
      return param_1;
    }
    goto code_r0x003f2f2d;
  }
  if (uVar12 < param_3) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&plStack_58,&UNK_0015b1c1,0x49,6,0,0xffffffff);
      uVar3 = _ZN7android4base10LogMessage6streamEv(&plStack_58);
      uVar3 = func_0x0032eb30(uVar3,&UNK_00165d45,0xe);
      uVar3 = func_0x0032eb30(uVar3,&UNK_00167ba2,6);
      uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
      uVar3 = func_0x0032eb30(uVar3,&UNK_00181913,2);
      uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
      uVar3 = func_0x0032eb30(uVar3,&UNK_001596b0,3);
      uVar3 = func_0x0032eb30(uVar3,&UNK_0016600c,9);
      uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,uVar12);
      uVar3 = func_0x0032eb30(uVar3,&UNK_00181bc4,6);
      uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,param_3);
      func_0x0032eb30(uVar3,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(&plStack_58);
    } while( true );
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = param_2[2];
  plVar10 = (long *)param_2[3];
  plVar5 = plVar10 + lVar7 * 4;
  uVar12 = plVar10[lVar7 * 4 + 2];
  if (param_3 < uVar12 - uVar9) {
code_r0x003f2afb:
    if ((uVar9 == 0) && (uVar12 >> 1 <= param_3)) {
      lVar7 = plVar10[lVar7 * 4];
      lStack_48 = 0;
      uStack_40 = 0;
      plStack_58 = (long *)0x0;
      lStack_50 = 0;
      _ZN5Block8allocateEm(&plStack_58,uVar12 - param_3);
      func_0x0099bd90(plStack_58,lVar7 + param_3,uVar12 - param_3);
      *param_2 = *param_2 - *(long *)(param_2[3] + 0x10 + param_2[2] * 0x20);
      _ZN5Block6resizeEm(param_2[3] + param_2[2] * 0x20,param_3);
      lVar7 = param_2[2];
      lVar6 = param_2[3];
      lVar1 = *(long *)(lVar6 + 0x10 + lVar7 * 0x20);
      if (lVar1 != 0) {
        *param_1 = *param_1 + lVar1;
        puVar8 = (undefined8 *)(lVar6 + lVar7 * 0x20);
        puVar4 = (undefined8 *)param_1[4];
        if (puVar4 < (undefined8 *)param_1[5]) {
          *puVar4 = *puVar8;
          uVar3 = puVar8[1];
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar4[1] = uVar3;
          uVar3 = puVar8[2];
          puVar8[2] = 0;
          puVar4[2] = uVar3;
          uVar3 = puVar8[3];
          puVar8[3] = 0;
          puVar4[3] = uVar3;
          puVar4 = puVar4 + 4;
        }
        else {
          puVar4 = (undefined8 *)
                   _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                             (param_1 + 3);
        }
        param_1[4] = (long)puVar4;
        lVar7 = param_2[2];
        lVar6 = param_2[3];
      }
      *param_2 = *param_2 + lStack_48;
      lVar7 = lVar7 * 0x20;
      plVar10 = (long *)(lVar6 + lVar7);
      lVar1 = *(long *)(lVar6 + lVar7);
      *(undefined8 *)(lVar6 + lVar7) = 0;
      if (lVar1 != 0) {
        _ZdaPvSt11align_val_t();
      }
      plVar5 = plStack_58;
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar10[3] = 0;
      plStack_58 = (long *)0x0;
      lVar7 = *plVar10;
      *plVar10 = (long)plVar5;
      if (lVar7 != 0) {
        _ZdaPvSt11align_val_t();
      }
      lVar7 = lStack_50;
      lStack_50 = 0;
      plVar10[1] = lVar7;
      plVar10[2] = lStack_48;
      lStack_48 = 0;
      plVar10[3] = 0;
    }
    else {
      lVar7 = *plVar5;
      lStack_48 = 0;
      uStack_40 = 0;
      plStack_58 = (long *)0x0;
      lStack_50 = 0;
      _ZN5Block8allocateEm(&plStack_58,param_3);
      func_0x0099bd90(plStack_58,uVar9 + lVar7,param_3);
      uVar3 = uStack_40;
      lVar6 = lStack_48;
      lVar7 = lStack_50;
      if (lStack_48 != 0) {
        *param_1 = *param_1 + lStack_48;
        puVar4 = (undefined8 *)param_1[4];
        if (puVar4 < (undefined8 *)param_1[5]) {
          *puVar4 = plStack_58;
          plStack_58 = (long *)0x0;
          lStack_50 = 0;
          puVar4[1] = lVar7;
          lStack_48 = 0;
          puVar4[2] = lVar6;
          uStack_40 = 0;
          puVar4[3] = uVar3;
          puVar4 = puVar4 + 4;
        }
        else {
          puVar4 = (undefined8 *)
                   _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                             (param_1 + 3,&plStack_58);
        }
        param_1[4] = (long)puVar4;
      }
      param_2[1] = param_2[1] + param_3;
    }
    plVar10 = plStack_58;
    plStack_58 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    *param_2 = *param_2 - uVar12;
    uVar12 = plVar5[2];
    param_3 = (param_3 + uVar9) - uVar12;
    if (uVar9 < uVar12) {
      *param_1 = *param_1 + uVar12;
      plVar2 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                 (param_1 + 3,plVar5);
      param_1[4] = (long)plVar2;
      lVar7 = param_2[1];
      if (lVar7 != 0) {
        param_2[1] = 0;
        param_1[1] = lVar7;
      }
    }
    else {
      param_2[1] = 0;
      plVar2 = (long *)0x0;
    }
    plVar10 = (long *)param_2[3];
    lVar7 = param_2[2] + 1;
    param_2[2] = lVar7;
    plVar5 = plVar10 + lVar7 * 4;
    uVar12 = plVar10[lVar7 * 4 + 2];
    if (uVar12 <= param_3) {
      plVar11 = plVar10 + lVar7 * 4;
      do {
        *param_2 = *param_2 - uVar12;
        lVar7 = plVar5[2];
        if (lVar7 == 0) {
          param_2[1] = 0;
        }
        else {
          *param_1 = *param_1 + lVar7;
          if (plVar2 < (long *)param_1[5]) {
            *plVar2 = *plVar5;
            lVar6 = plVar5[1];
            *plVar5 = 0;
            plVar5[1] = 0;
            plVar2[1] = lVar6;
            lVar6 = plVar11[2];
            plVar11[2] = 0;
            plVar2[2] = lVar6;
            lVar6 = plVar5[3];
            plVar5[3] = 0;
            plVar2[3] = lVar6;
            plVar2 = plVar2 + 4;
          }
          else {
            plVar2 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                       (param_1 + 3,plVar5);
          }
          param_1[4] = (long)plVar2;
          lVar6 = param_2[1];
          if (lVar6 != 0) {
            param_2[1] = 0;
            param_1[1] = lVar6;
          }
        }
        param_3 = param_3 - lVar7;
        plVar10 = (long *)param_2[3];
        lVar7 = param_2[2] + 1;
        param_2[2] = lVar7;
        plVar5 = plVar10 + lVar7 * 4;
        plVar11 = plVar10 + lVar7 * 4;
        uVar12 = plVar10[lVar7 * 4 + 2];
      } while (uVar12 <= param_3);
    }
    if (param_3 != 0) {
      uVar9 = 0;
      goto code_r0x003f2afb;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
code_r0x003f2f2d:
  func_0x0099bd00();
  uVar9 = plVar10[1];
  uVar12 = plVar10[2];
  plVar5 = (long *)(uVar9 | uVar12);
  if ((plVar5 != (long *)0x0) && (lVar7 = plVar10[3], lVar7 != plVar10[4])) {
    lVar6 = *(long *)(lVar7 + 0x10 + uVar12 * 0x20) - uVar9;
    if (lVar6 == 0) {
      lVar7 = uVar12 + 1;
      plVar10[2] = lVar7;
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(lVar7 + uVar12 * 0x20);
      func_0x0099bd90(*plVar5,uVar9 + *plVar5,lVar6);
      plVar5 = (long *)_ZN5Block6resizeEm(plVar5,plVar5[2] - plVar10[1]);
      uVar9 = plVar10[1];
      lVar7 = plVar10[2];
    }
    *plVar10 = *plVar10 - uVar9;
    plVar10[1] = 0;
    if (lVar7 != 0) {
      plVar5 = (long *)func_0x003f3580(plVar10 + 3,plVar10[3],lVar7 * 0x20 + plVar10[3]);
      plVar10[2] = 0;
    }
  }
  return plVar5;
}


