// Function: _ZNK7android12ResXMLParser16indexOfAttributeEPKcS2_
// Address: 0042f550
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser16indexOfAttributeEPKcS2_
                (undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long ****pppplVar8;
  long extraout_RDX;
  ulong uVar9;
  undefined *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long in_FS_OFFSET;
  undefined8 uStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  long lStack_98;
  long lStack_90;
  int iStack_88;
  long lStack_80;
  ulong uStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long ***ppplStack_48;
  long ***ppplStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppplStack_40 = (long ***)0x0;
  puVar10 = &UNK_00162ac9;
  if (param_2 != (undefined *)0x0) {
    puVar10 = param_2;
  }
  puStack_50 = &UNK_0042f596;
  _ZN7android8String16C2EPKc(&ppplStack_40,puVar10);
  ppplStack_48 = (long ***)0x0;
  puStack_50 = &UNK_0042f5aa;
  _ZN7android8String16C2EPKc(&ppplStack_48,param_3);
  pppplVar14 = (long ****)ppplStack_40;
  if (param_2 == (undefined *)0x0) {
    pppplVar14 = (long ****)0x0;
    uVar5 = 0;
  }
  else {
    puStack_50 = &UNK_0042f5bc;
    uVar5 = _ZNK7android8String164sizeEv(&ppplStack_40);
  }
  ppplVar1 = ppplStack_48;
  puStack_50 = &UNK_0042f5d7;
  lVar6 = _ZNK7android8String164sizeEv(&ppplStack_48);
  puStack_50 = &UNK_0042f5eb;
  pppplVar8 = (long ****)ppplVar1;
  pppplVar11 = pppplVar14;
  uVar7 = _ZNK7android12ResXMLParser16indexOfAttributeEPKDsmS2_m(param_1,pppplVar14,uVar5);
  puStack_50 = &UNK_0042f5f6;
  _ZN7android8String16D2Ev(&ppplStack_48);
  pppplVar12 = &ppplStack_40;
  puStack_50 = &UNK_0042f5ff;
  _ZN7android8String16D2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar7;
  }
  puStack_50 = &UNK_0042f625;
  func_0x0099bd00();
  ppplStack_70 = ppplVar1;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = 0xfffffffffffffffe;
  pppplVar13 = pppplVar12;
  uStack_78 = uVar7;
  ppplStack_68 = (long ***)&ppplStack_48;
  ppplStack_60 = (long ***)pppplVar14;
  uStack_58 = uVar5;
  puStack_50 = &stack0xfffffffffffffff8;
  if (pppplVar8 != (long ****)0x0 && *(int *)(pppplVar12 + 1) == 0x102) {
    uVar7 = (ulong)*(ushort *)((long)pppplVar12[3] + 0xc);
    if ((*(byte *)((long)(*pppplVar12)[0x13] + 0x11) & 1) == 0) {
      puStack_50 = &stack0xfffffffffffffff8;
      if (uVar7 != 0) {
        uVar9 = 0;
        puStack_50 = &stack0xfffffffffffffff8;
        do {
          if (((*(int *)(pppplVar12 + 1) == 0x102) &&
              (ppplVar1 = pppplVar12[3], uVar9 < *(ushort *)((long)ppplVar1 + 0xc))) &&
             (-1 < *(int *)((long)ppplVar1 +
                           *(ushort *)((long)ppplVar1 + 10) * uVar9 +
                           (ulong)*(ushort *)(ppplVar1 + 1)))) {
            pppplVar13 = (long ****)&pplStack_a0;
            _ZNK7android13ResStringPool8stringAtEm(pppplVar13,*pppplVar12 + 0x10);
            if (iStack_88 != 0) goto code_r0x0042f7c0;
            iVar4 = *(int *)(pppplVar12 + 1);
            lVar2 = lStack_98;
            lVar3 = lStack_90;
          }
          else {
code_r0x0042f7c0:
            iVar4 = *(int *)(pppplVar12 + 1);
            lVar2 = 0;
            lVar3 = 0;
          }
          if (((iVar4 == 0x102) &&
              (ppplVar1 = pppplVar12[3], uVar9 < *(ushort *)((long)ppplVar1 + 0xc))) &&
             (-1 < *(int *)((long)ppplVar1 +
                           *(ushort *)((long)ppplVar1 + 10) * uVar9 + 4 +
                           (ulong)*(ushort *)(ppplVar1 + 1)))) {
            pppplVar13 = (long ****)&pplStack_a0;
            _ZNK7android13ResStringPool8stringAtEm(pppplVar13,*pppplVar12 + 0x10);
            if (((iStack_88 == 0) && (lStack_98 != 0)) &&
               ((lVar3 == extraout_RDX &&
                ((lStack_90 == lVar6 &&
                 (pppplVar13 = pppplVar8, iVar4 = func_0x0099bf90(pppplVar8,lStack_98,lVar6 * 2),
                 iVar4 == 0)))))) {
              if (pppplVar11 == (long ****)0x0) {
                if (lVar2 == 0) goto code_r0x0042fa14;
              }
              else if ((lVar2 != 0) &&
                      (pppplVar13 = pppplVar11,
                      iVar4 = func_0x0099bf90(pppplVar11,lVar2,extraout_RDX * 2), iVar4 == 0))
              goto code_r0x0042fa14;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
        uVar9 = 0xfffffffffffffffe;
      }
    }
    else {
      pplStack_a8 = (long **)0x0;
      puStack_50 = &stack0xfffffffffffffff8;
      _ZN7android7String8C2Ev(&pplStack_a8);
      uStack_b0 = 0;
      _ZN7android7String8C2Ev(&uStack_b0);
      if (pppplVar11 != (long ****)0x0) {
        _ZN7android7String8C2EPKDsm(&pplStack_a0,pppplVar11,extraout_RDX);
        _ZN7android7String85setToERKS0_(&pplStack_a8,&pplStack_a0);
        _ZN7android7String8D2Ev(&pplStack_a0);
      }
      _ZN7android7String8C2EPKDsm(&pplStack_a0,pppplVar8,lVar6);
      _ZN7android7String85setToERKS0_(&uStack_b0,&pplStack_a0);
      _ZN7android7String8D2Ev(&pplStack_a0);
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          if ((((*(int *)(pppplVar12 + 1) == 0x102) &&
               (ppplVar1 = pppplVar12[3], uVar9 < *(ushort *)((long)ppplVar1 + 0xc))) &&
              (-1 < *(int *)((long)ppplVar1 +
                            *(ushort *)((long)ppplVar1 + 10) * uVar9 +
                            (ulong)*(ushort *)(ppplVar1 + 1)))) &&
             (_ZNK7android13ResStringPool9string8AtEm(&pplStack_a0,*pppplVar12 + 0x10),
             iStack_88 == 0)) {
            iVar4 = *(int *)(pppplVar12 + 1);
            lVar2 = lStack_98;
            lVar3 = lStack_90;
          }
          else {
            iVar4 = *(int *)(pppplVar12 + 1);
            lVar2 = 0;
            lVar3 = 0;
          }
          if (((((iVar4 == 0x102) &&
                (ppplVar1 = pppplVar12[3], uVar9 < *(ushort *)((long)ppplVar1 + 0xc))) &&
               ((-1 < *(int *)((long)ppplVar1 +
                              *(ushort *)((long)ppplVar1 + 10) * uVar9 + 4 +
                              (ulong)*(ushort *)(ppplVar1 + 1)) &&
                ((_ZNK7android13ResStringPool9string8AtEm(&pplStack_a0,*pppplVar12 + 0x10),
                 iStack_88 == 0 && (lStack_98 != 0)))))) && (lVar3 == extraout_RDX)) &&
             ((lStack_90 == lVar6 &&
              (iVar4 = func_0x0099bf90(uStack_b0,lStack_98,lVar6), iVar4 == 0)))) {
            if (pppplVar11 == (long ****)0x0) {
              if (lVar2 == 0) goto code_r0x0042fa02;
            }
            else if ((lVar2 != 0) &&
                    (iVar4 = func_0x0099bf90(pplStack_a8,lVar2,extraout_RDX), iVar4 == 0))
            goto code_r0x0042fa02;
          }
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
      }
      uVar9 = 0xfffffffffffffffe;
code_r0x0042fa02:
      _ZN7android7String8D2Ev(&uStack_b0);
      pppplVar13 = (long ****)&pplStack_a8;
      _ZN7android7String8D2Ev();
    }
  }
code_r0x0042fa14:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uVar9;
  }
  func_0x0099bd00();
  if ((*(int *)(pppplVar13 + 1) == 0x102) && ((ulong)*(ushort *)((long)pppplVar13[3] + 0xe) != 0)) {
    return (ulong)*(ushort *)((long)pppplVar13[3] + 0xe) - 1;
  }
  return 0xfffffffffffffffe;
}


