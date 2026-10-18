// Function: _ZN4absl12lts_20260526lsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS0_6int128E
// Address: 004e11c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_20260526lsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS0_6int128E
          (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  char *pcStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  uStack_58 = 0;
  uStack_50 = 0;
  pcStack_48 = (char *)0x0;
  lVar11 = param_3;
  lVar8 = param_2;
  if ((uVar9 & 0x48) == 0) {
    if (param_3 < 0) {
      uStack_58 = 0x2d02;
      lVar11 = -(ulong)(param_2 != 0) - param_3;
      lVar8 = -param_2;
    }
    else if ((uVar9 & 0x800) != 0) {
      uStack_58 = 0x2b02;
    }
  }
  func_0x004e07b0(&bStack_70,lVar8,lVar11,uVar9);
  func_0x0032e820(&uStack_58,&bStack_70);
  if ((bStack_70 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  uVar12 = *(ulong *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
  *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) = 0;
  uVar7 = (ulong)((byte)uStack_58 >> 1);
  if ((uStack_58 & 1) != 0) {
    uVar7 = uStack_50;
  }
  uVar10 = uVar12 - uVar7;
  if (uVar12 < uVar7 || uVar10 == 0) goto code_r0x004e14f9;
  if (((byte)uVar9 & 0xb0) == 0x10) {
    if ((uVar9 & 0x48) == 0) {
      pcVar6 = pcStack_48;
      if ((uStack_58 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_58 + 1);
      }
      if ((*pcVar6 != '-') && (*pcVar6 != '+')) goto code_r0x004e1399;
      iVar3 = *(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90);
      if (iVar3 == -1) {
        lVar11 = *(long *)(*param_1 + -0x18) + (long)param_1;
        _ZNKSt3__18ios_base6getlocEv(&bStack_70,lVar11);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_70,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_70);
        iVar3 = (int)cVar2;
        *(int *)(lVar11 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar5 = 1;
    }
    else {
code_r0x004e1399:
      lVar11 = (long)param_1 + *(long *)(*param_1 + -0x18);
      iVar3 = *(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90);
      if (param_2 == 0 && param_3 == 0 || (uVar9 & 0x24a) != 0x208) {
        if (iVar3 == -1) goto code_r0x004e14a6;
        goto code_r0x004e14e8;
      }
      if (iVar3 == -1) {
        _ZNKSt3__18ios_base6getlocEv(&bStack_70,lVar11);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_70,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_70);
        iVar3 = (int)cVar2;
        *(int *)(lVar11 + 0x90) = iVar3;
      }
      iVar3 = (int)(char)iVar3;
      uVar5 = 2;
    }
  }
  else {
    if ((uVar9 & 0xb0) == 0x20) {
      uVar9 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90);
      if (uVar9 == 0xffffffff) {
        lVar11 = *(long *)(*param_1 + -0x18) + (long)param_1;
        _ZNKSt3__18ios_base6getlocEv(&bStack_70,lVar11);
        plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_70,_ZNSt3__15ctypeIcE2idE);
        cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        _ZNSt3__16localeD2Ev(&bStack_70);
        uVar9 = (uint)cVar2;
        *(uint *)(lVar11 + 0x90) = uVar9;
      }
      lVar11 = 0x16;
      if (((byte)uStack_58 & 1) != 0) {
        lVar11 = (uStack_58 & 0xfffffffffffffffe) - 1;
      }
      uVar12 = (ulong)((uint)(uStack_58 >> 1) & 0x7f);
      if ((uStack_58 & 1) != 0) {
        uVar12 = uStack_50;
      }
      if (lVar11 - uVar12 < uVar10) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (&uStack_58,lVar11,(uVar10 - lVar11) + uVar12,uVar12,uVar12,0,0);
        uStack_50 = uVar12;
      }
      pcVar6 = pcStack_48;
      if (((byte)uStack_58 & 1) == 0) {
        pcVar6 = (char *)((long)&uStack_58 + 1);
      }
      func_0x0099bdb0(pcVar6 + uVar12,uVar9 & 0xff,uVar10);
      uVar12 = uVar12 + uVar10;
      if ((uStack_58 & 1) == 0) {
        uStack_58 = CONCAT71(uStack_58._1_7_,(char)uVar12 * '\x02');
        pcVar6[uVar12] = '\0';
      }
      else {
        uStack_50 = uVar12;
        pcVar6[uVar12] = '\0';
      }
      goto code_r0x004e14f9;
    }
    iVar3 = *(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90);
    if (iVar3 == -1) {
      lVar11 = *(long *)(*param_1 + -0x18) + (long)param_1;
code_r0x004e14a6:
      _ZNKSt3__18ios_base6getlocEv(&bStack_70,lVar11);
      plVar4 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(&bStack_70,_ZNSt3__15ctypeIcE2idE);
      cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      _ZNSt3__16localeD2Ev(&bStack_70);
      iVar3 = (int)cVar2;
      *(int *)(lVar11 + 0x90) = iVar3;
    }
code_r0x004e14e8:
    iVar3 = (int)(char)iVar3;
    uVar5 = 0;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc
            (&uStack_58,uVar5,uVar10,iVar3);
code_r0x004e14f9:
  uVar12 = uStack_58 >> 1 & 0x7f;
  pcVar6 = (char *)((long)&uStack_58 + 1);
  if ((uStack_58 & 1) != 0) {
    uVar12 = uStack_50;
    pcVar6 = pcStack_48;
  }
  uVar5 = func_0x0032eb30(param_1,pcVar6,uVar12);
  if ((uStack_58 & 1) != 0) {
    _ZdaPvSt11align_val_t(pcStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar5;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}


