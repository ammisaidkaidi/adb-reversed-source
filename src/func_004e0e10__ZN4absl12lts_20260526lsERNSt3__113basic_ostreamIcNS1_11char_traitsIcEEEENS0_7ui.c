// Function: _ZN4absl12lts_20260526lsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS0_7uint128E
// Address: 004e0e10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_20260526lsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS0_7uint128E
                 (long *param_1,undefined1 *param_2,ulong param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long extraout_RDX;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  char *pcStack_e8;
  long lStack_d8;
  long *plStack_d0;
  undefined1 *puStack_c8;
  long *plStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  plVar4 = (long *)(ulong)uVar14;
  auStack_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puStack_70 = &UNK_004e0e5e;
  func_0x004e07b0(auStack_58,param_2,param_3,plVar4);
  uVar17 = *(ulong *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
  *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) = 0;
  uVar8 = (ulong)(auStack_58[0] >> 1);
  if (((ulong)auStack_58 & 1) != 0) {
    uVar8 = uStack_50;
  }
  uVar15 = uVar17 - uVar8;
  if (uVar8 <= uVar17 && uVar15 != 0) {
    if (((byte)uVar14 & 0xb0) == 0x10) {
      plVar4 = (long *)(ulong)(uVar14 & 0x24a);
      if (param_3 == 0 && param_2 == (undefined1 *)0x0 || (uVar14 & 0x24a) != 0x208)
      goto code_r0x004e0fa7;
      param_3 = *(ulong *)(*param_1 + -0x18);
      iVar3 = *(int *)((long)param_1 + param_3 + 0x90);
      if (iVar3 == -1) {
        param_3 = param_3 + (long)param_1;
        param_2 = auStack_40;
        puStack_70 = &UNK_004e106c;
        _ZNKSt3__18ios_base6getlocEv(param_2,param_3);
        puStack_70 = &UNK_004e107b;
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(param_2,_ZNSt3__15ctypeIcE2idE);
        puStack_70 = &UNK_004e1089;
        uVar14 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        plVar4 = (long *)(ulong)uVar14;
        puStack_70 = &UNK_004e1094;
        _ZNSt3__16localeD2Ev(param_2);
        iVar3 = (int)(char)uVar14;
        *(int *)(param_3 + 0x90) = iVar3;
      }
      cVar2 = (char)iVar3;
      uVar12 = 2;
    }
    else {
      plVar4 = (long *)(ulong)(uVar14 & 0xb0);
      if ((uVar14 & 0xb0) == 0x20) {
        uVar14 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90);
        if (uVar14 == 0xffffffff) {
          lVar16 = *(long *)(*param_1 + -0x18) + (long)param_1;
          puStack_70 = &UNK_004e0ed6;
          _ZNKSt3__18ios_base6getlocEv(auStack_40,lVar16);
          puStack_70 = &UNK_004e0ee5;
          plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_40,_ZNSt3__15ctypeIcE2idE);
          puStack_70 = &UNK_004e0ef3;
          cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
          puStack_70 = &UNK_004e0efe;
          _ZNSt3__16localeD2Ev(auStack_40);
          uVar14 = (uint)cVar2;
          *(uint *)(lVar16 + 0x90) = uVar14;
        }
        param_2 = (undefined1 *)(ulong)uVar14;
        lVar16 = 0x16;
        if ((auStack_58[0] & 1) != 0) {
          lVar16 = ((ulong)auStack_58 & 0xfffffffffffffffe) - 1;
        }
        param_3 = (ulong)((uint)((ulong)auStack_58 >> 1) & 0x7f);
        if (((ulong)auStack_58 & 1) != 0) {
          param_3 = uStack_50;
        }
        if (lVar16 - param_3 < uVar15) {
          uStack_68 = 0;
          puStack_70 = &UNK_004e0f6c;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (auStack_58,lVar16,(uVar15 - lVar16) + param_3,param_3,param_3,0);
          uStack_50 = param_3;
        }
        plVar4 = plStack_48;
        if ((auStack_58[0] & 1) == 0) {
          plVar4 = (long *)(auStack_58 + 1);
        }
        puStack_70 = &UNK_004e1022;
        func_0x0099bdb0(param_3 + (long)plVar4,(ulong)param_2 & 0xff,uVar15);
        param_3 = param_3 + uVar15;
        if (((ulong)auStack_58 & 1) == 0) {
          auStack_58[0] = (char)param_3 * '\x02';
          *(undefined1 *)((long)plVar4 + param_3) = 0;
        }
        else {
          uStack_50 = param_3;
          *(undefined1 *)((long)plVar4 + param_3) = 0;
        }
        goto code_r0x004e10b3;
      }
code_r0x004e0fa7:
      param_3 = *(ulong *)(*param_1 + -0x18);
      iVar3 = *(int *)((long)param_1 + param_3 + 0x90);
      if (iVar3 == -1) {
        param_3 = param_3 + (long)param_1;
        param_2 = auStack_40;
        puStack_70 = &UNK_004e0fcd;
        _ZNKSt3__18ios_base6getlocEv(param_2,param_3);
        puStack_70 = &UNK_004e0fdc;
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(param_2,_ZNSt3__15ctypeIcE2idE);
        puStack_70 = &UNK_004e0fea;
        uVar14 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        plVar4 = (long *)(ulong)uVar14;
        puStack_70 = &UNK_004e0ff5;
        _ZNSt3__16localeD2Ev(param_2);
        iVar3 = (int)(char)uVar14;
        *(int *)(param_3 + 0x90) = iVar3;
      }
      cVar2 = (char)iVar3;
      uVar12 = 0;
    }
    puStack_70 = &UNK_004e10b3;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc
              (auStack_58,uVar12,uVar15,(int)cVar2);
  }
code_r0x004e10b3:
  uVar17 = (ulong)auStack_58 >> 1 & 0x7f;
  plVar9 = (long *)(auStack_58 + 1);
  if (((ulong)auStack_58 & 1) != 0) {
    uVar17 = uStack_50;
    plVar9 = plStack_48;
  }
  puStack_70 = &UNK_004e10d3;
  plVar13 = param_1;
  plVar5 = (long *)func_0x0032eb30(param_1,plVar9,uVar17);
  if (((ulong)auStack_58 & 1) != 0) {
    plVar9 = (long *)((ulong)auStack_58 & 0xfffffffffffffffe);
    puStack_70 = &UNK_004e10ed;
    plVar13 = plStack_48;
    _ZdaPvSt11align_val_t();
    param_1 = plVar5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plVar5;
  }
  puStack_70 = &UNK_004e1113;
  func_0x0099bd00();
  puStack_70 = &stack0xfffffffffffffff8;
  uStack_78 = uVar15;
  plStack_80 = param_1;
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  lVar16 = *plVar9;
  lVar7 = plVar9[1];
  if (lVar7 < 0) {
    *(undefined2 *)plVar13 = 0x2d02;
    bVar18 = lVar16 != 0;
    lVar16 = -lVar16;
    lVar7 = -(ulong)bVar18 - lVar7;
  }
  puStack_a8 = &UNK_004e117b;
  func_0x004e07b0(&bStack_a0,lVar16,lVar7,2);
  puStack_a8 = &UNK_004e1186;
  pbVar10 = &bStack_a0;
  plVar9 = plVar13;
  func_0x0032e820();
  if ((bStack_a0 & 1) != 0) {
    pbVar10 = (byte *)(CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
    puStack_a8 = &UNK_004e119d;
    _ZdaPvSt11align_val_t();
    plVar9 = plStack_90;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_88) {
    return plVar13;
  }
  puStack_a8 = &UNK_004e11bd;
  func_0x0099bd00();
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 8);
  uStack_f8 = 0;
  uStack_f0 = 0;
  pcStack_e8 = (char *)0x0;
  lVar16 = extraout_RDX;
  pbVar11 = pbVar10;
  if ((uVar14 & 0x48) == 0) {
    if (extraout_RDX < 0) {
      uStack_f8 = 0x2d02;
      lVar16 = -(ulong)(pbVar10 != (byte *)0x0) - extraout_RDX;
      pbVar11 = (byte *)-(long)pbVar10;
    }
    else if ((uVar14 & 0x800) != 0) {
      uStack_f8 = 0x2b02;
    }
  }
  plStack_d0 = plVar13;
  puStack_c8 = param_2;
  plStack_c0 = plVar4;
  pbStack_b8 = &bStack_a0;
  uStack_b0 = param_3;
  puStack_a8 = (undefined *)&puStack_70;
  func_0x004e07b0(&bStack_110,pbVar11,lVar16,uVar14);
  func_0x0032e820(&uStack_f8,&bStack_110);
  if ((bStack_110 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
  }
  uVar17 = *(ulong *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x18);
  *(undefined8 *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x18) = 0;
  uVar8 = (ulong)((byte)uStack_f8 >> 1);
  if ((uStack_f8 & 1) != 0) {
    uVar8 = uStack_f0;
  }
  uVar15 = uVar17 - uVar8;
  if (uVar17 < uVar8 || uVar15 == 0) goto code_r0x004e14f9;
  if (((byte)uVar14 & 0xb0) == 0x10) {
    if ((uVar14 & 0x48) == 0) {
      pcVar6 = pcStack_e8;
      if ((uStack_f8 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_f8 + 1);
      }
      if ((*pcVar6 != '-') && (*pcVar6 != '+')) goto code_r0x004e1399;
      iVar3 = *(int *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x90);
      if (iVar3 == -1) {
        lVar16 = *(long *)(*plVar9 + -0x18) + (long)plVar9;
        _ZNKSt3__18ios_base6getlocEv(&bStack_110,lVar16);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_110,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_110);
        iVar3 = (int)cVar2;
        *(int *)(lVar16 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar12 = 1;
    }
    else {
code_r0x004e1399:
      lVar16 = (long)plVar9 + *(long *)(*plVar9 + -0x18);
      iVar3 = *(int *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x90);
      if (pbVar10 == (byte *)0x0 && extraout_RDX == 0 || (uVar14 & 0x24a) != 0x208) {
        if (iVar3 == -1) goto code_r0x004e14a6;
        goto code_r0x004e14e8;
      }
      if (iVar3 == -1) {
        _ZNKSt3__18ios_base6getlocEv(&bStack_110,lVar16);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_110,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_110);
        iVar3 = (int)cVar2;
        *(int *)(lVar16 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar12 = 2;
    }
  }
  else {
    if ((uVar14 & 0xb0) == 0x20) {
      uVar14 = *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x90);
      if (uVar14 == 0xffffffff) {
        lVar16 = *(long *)(*plVar9 + -0x18) + (long)plVar9;
        _ZNKSt3__18ios_base6getlocEv(&bStack_110,lVar16);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_110,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_110);
        uVar14 = (uint)cVar2;
        *(uint *)(lVar16 + 0x90) = uVar14;
      }
      lVar16 = 0x16;
      if (((byte)uStack_f8 & 1) != 0) {
        lVar16 = (uStack_f8 & 0xfffffffffffffffe) - 1;
      }
      uVar17 = (ulong)((uint)(uStack_f8 >> 1) & 0x7f);
      if ((uStack_f8 & 1) != 0) {
        uVar17 = uStack_f0;
      }
      if (lVar16 - uVar17 < uVar15) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&uStack_f8,lVar16,(uVar15 - lVar16) + uVar17,uVar17,uVar17,0,0);
        uStack_f0 = uVar17;
      }
      pcVar6 = pcStack_e8;
      if (((byte)uStack_f8 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_f8 + 1);
      }
      func_0x0099bdb0(pcVar6 + uVar17,uVar14 & 0xff,uVar15);
      uVar17 = uVar17 + uVar15;
      if ((uStack_f8 & 1) == 0) {
        uStack_f8 = CONCAT71(uStack_f8._1_7_,(char)uVar17 * '\x02');
        pcVar6[uVar17] = '\0';
      }
      else {
        uStack_f0 = uVar17;
        pcVar6[uVar17] = '\0';
      }
      goto code_r0x004e14f9;
    }
    iVar3 = *(int *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x90);
    if (iVar3 == -1) {
      lVar16 = *(long *)(*plVar9 + -0x18) + (long)plVar9;
code_r0x004e14a6:
      _ZNKSt3__18ios_base6getlocEv(&bStack_110,lVar16);
      plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_110,_ZNSt3__15ctypeIcE2idE);
      cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      _ZNSt3__16localeD2Ev(&bStack_110);
      iVar3 = (int)cVar2;
      *(int *)(lVar16 + 0x90) = iVar3;
    }
code_r0x004e14e8:
    iVar3 = (int)(char)iVar3;
    uVar12 = 0;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc
            (&uStack_f8,uVar12,uVar15,iVar3);
code_r0x004e14f9:
  uVar17 = uStack_f8 >> 1 & 0x7f;
  pcVar6 = (char *)((long)&uStack_f8 + 1);
  if ((uStack_f8 & 1) != 0) {
    uVar17 = uStack_f0;
    pcVar6 = pcStack_e8;
  }
  plVar4 = (long *)func_0x0032eb30(plVar9,pcVar6,uVar17);
  if ((uStack_f8 & 1) != 0) {
    _ZdaPvSt11align_val_t(pcStack_e8,uStack_f8 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) {
    return plVar4;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  plVar4 = (long *)(*pcVar1)();
  return plVar4;
}


