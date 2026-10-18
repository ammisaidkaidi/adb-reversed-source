// Function: _ZNK4absl12lts_202605266int1288ToStringEv
// Address: 004e1120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK4absl12lts_202605266int1288ToStringEv(long *param_1,long *param_2)

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
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  char *pcStack_80;
  long lStack_70;
  long *plStack_68;
  byte bStack_38;
  undefined7 uStack_37;
  long *plStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar14 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 < 0) {
    *(undefined2 *)param_1 = 0x2d02;
    bVar16 = lVar14 != 0;
    lVar14 = -lVar14;
    lVar7 = -(ulong)bVar16 - lVar7;
  }
  pbVar9 = &bStack_38;
  func_0x004e07b0(pbVar9,lVar14,lVar7,2);
  plVar5 = param_1;
  func_0x0032e820();
  if ((bStack_38 & 1) != 0) {
    pbVar9 = (byte *)(CONCAT71(uStack_37,bStack_38) & 0xfffffffffffffffe);
    _ZdaPvSt11align_val_t();
    plVar5 = plStack_28;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(uint *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 8);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_80 = (char *)0x0;
  lVar14 = extraout_RDX;
  pbVar10 = pbVar9;
  if ((uVar12 & 0x48) == 0) {
    if (extraout_RDX < 0) {
      uStack_90 = 0x2d02;
      lVar14 = -(ulong)(pbVar9 != (byte *)0x0) - extraout_RDX;
      pbVar10 = (byte *)-(long)pbVar9;
    }
    else if ((uVar12 & 0x800) != 0) {
      uStack_90 = 0x2b02;
    }
  }
  plStack_68 = param_1;
  func_0x004e07b0(&bStack_a8,pbVar10,lVar14,uVar12);
  func_0x0032e820(&uStack_90,&bStack_a8);
  if ((bStack_a8 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
  }
  uVar15 = *(ulong *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x18);
  *(undefined8 *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x18) = 0;
  uVar8 = (ulong)((byte)uStack_90 >> 1);
  if ((uStack_90 & 1) != 0) {
    uVar8 = uStack_88;
  }
  uVar13 = uVar15 - uVar8;
  if (uVar15 < uVar8 || uVar13 == 0) goto code_r0x004e14f9;
  if (((byte)uVar12 & 0xb0) == 0x10) {
    if ((uVar12 & 0x48) == 0) {
      pcVar6 = pcStack_80;
      if ((uStack_90 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_90 + 1);
      }
      if ((*pcVar6 != '-') && (*pcVar6 != '+')) goto code_r0x004e1399;
      iVar3 = *(int *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x90);
      if (iVar3 == -1) {
        lVar14 = *(long *)(*plVar5 + -0x18) + (long)plVar5;
        _ZNKSt3__18ios_base6getlocEv(&bStack_a8,lVar14);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_a8,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_a8);
        iVar3 = (int)cVar2;
        *(int *)(lVar14 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar11 = 1;
    }
    else {
code_r0x004e1399:
      lVar14 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
      iVar3 = *(int *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x90);
      if (pbVar9 == (byte *)0x0 && extraout_RDX == 0 || (uVar12 & 0x24a) != 0x208) {
        if (iVar3 == -1) goto code_r0x004e14a6;
        goto code_r0x004e14e8;
      }
      if (iVar3 == -1) {
        _ZNKSt3__18ios_base6getlocEv(&bStack_a8,lVar14);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_a8,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_a8);
        iVar3 = (int)cVar2;
        *(int *)(lVar14 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar11 = 2;
    }
  }
  else {
    if ((uVar12 & 0xb0) == 0x20) {
      uVar12 = *(uint *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x90);
      if (uVar12 == 0xffffffff) {
        lVar14 = *(long *)(*plVar5 + -0x18) + (long)plVar5;
        _ZNKSt3__18ios_base6getlocEv(&bStack_a8,lVar14);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_a8,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_a8);
        uVar12 = (uint)cVar2;
        *(uint *)(lVar14 + 0x90) = uVar12;
      }
      lVar14 = 0x16;
      if (((byte)uStack_90 & 1) != 0) {
        lVar14 = (uStack_90 & 0xfffffffffffffffe) - 1;
      }
      uVar15 = (ulong)((uint)(uStack_90 >> 1) & 0x7f);
      if ((uStack_90 & 1) != 0) {
        uVar15 = uStack_88;
      }
      if (lVar14 - uVar15 < uVar13) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&uStack_90,lVar14,(uVar13 - lVar14) + uVar15,uVar15,uVar15,0,0);
        uStack_88 = uVar15;
      }
      pcVar6 = pcStack_80;
      if (((byte)uStack_90 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_90 + 1);
      }
      func_0x0099bdb0(pcVar6 + uVar15,uVar12 & 0xff,uVar13);
      uVar15 = uVar15 + uVar13;
      if ((uStack_90 & 1) == 0) {
        uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar15 * '\x02');
        pcVar6[uVar15] = '\0';
      }
      else {
        uStack_88 = uVar15;
        pcVar6[uVar15] = '\0';
      }
      goto code_r0x004e14f9;
    }
    iVar3 = *(int *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x90);
    if (iVar3 == -1) {
      lVar14 = *(long *)(*plVar5 + -0x18) + (long)plVar5;
code_r0x004e14a6:
      _ZNKSt3__18ios_base6getlocEv(&bStack_a8,lVar14);
      plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_a8,_ZNSt3__15ctypeIcE2idE);
      cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      _ZNSt3__16localeD2Ev(&bStack_a8);
      iVar3 = (int)cVar2;
      *(int *)(lVar14 + 0x90) = iVar3;
    }
code_r0x004e14e8:
    iVar3 = (int)(char)iVar3;
    uVar11 = 0;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc
            (&uStack_90,uVar11,uVar13,iVar3);
code_r0x004e14f9:
  uVar15 = uStack_90 >> 1 & 0x7f;
  pcVar6 = (char *)((long)&uStack_90 + 1);
  if ((uStack_90 & 1) != 0) {
    uVar15 = uStack_88;
    pcVar6 = pcStack_80;
  }
  plVar5 = (long *)func_0x0032eb30(plVar5,pcVar6,uVar15);
  if ((uStack_90 & 1) != 0) {
    _ZdaPvSt11align_val_t(pcStack_80,uStack_90 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return plVar5;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  plVar5 = (long *)(*pcVar1)();
  return plVar5;
}


