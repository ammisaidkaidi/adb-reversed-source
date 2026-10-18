// Function: _ZNK7android12ResXMLParser16indexOfAttributeEPKDsmS2_m
// Address: 0042f630
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser16indexOfAttributeEPKDsmS2_m
                (long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  int iStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0xfffffffffffffffe;
  plVar6 = param_1;
  if (param_4 != (long *)0x0 && (int)param_1[1] == 0x102) {
    uVar7 = (ulong)*(ushort *)(param_1[3] + 0xc);
    if ((*(byte *)(*(long *)(*param_1 + 0x98) + 0x11) & 1) == 0) {
      if (uVar7 != 0) {
        uVar5 = 0;
        do {
          if ((((int)param_1[1] == 0x102) && (lVar1 = param_1[3], uVar5 < *(ushort *)(lVar1 + 0xc)))
             && (-1 < *(int *)(*(ushort *)(lVar1 + 10) * uVar5 +
                              (ulong)*(ushort *)(lVar1 + 8) + lVar1))) {
            plVar6 = &lStack_58;
            _ZNK7android13ResStringPool8stringAtEm(plVar6,*param_1 + 0x80);
            if (iStack_40 != 0) goto code_r0x0042f7c0;
            iVar4 = (int)param_1[1];
            lVar1 = lStack_50;
            lVar3 = lStack_48;
          }
          else {
code_r0x0042f7c0:
            iVar4 = (int)param_1[1];
            lVar1 = 0;
            lVar3 = 0;
          }
          if (((iVar4 == 0x102) && (lVar2 = param_1[3], uVar5 < *(ushort *)(lVar2 + 0xc))) &&
             (-1 < *(int *)(*(ushort *)(lVar2 + 10) * uVar5 + 4 +
                           (ulong)*(ushort *)(lVar2 + 8) + lVar2))) {
            plVar6 = &lStack_58;
            _ZNK7android13ResStringPool8stringAtEm(plVar6,*param_1 + 0x80);
            if (((iStack_40 == 0) && (lStack_50 != 0)) &&
               ((lVar3 == param_3 &&
                ((lStack_48 == param_5 &&
                 (plVar6 = param_4, iVar4 = func_0x0099bf90(param_4,lStack_50,param_5 * 2),
                 iVar4 == 0)))))) {
              if (param_2 == (long *)0x0) {
                if (lVar1 == 0) goto code_r0x0042fa14;
              }
              else if ((lVar1 != 0) &&
                      (plVar6 = param_2, iVar4 = func_0x0099bf90(param_2,lVar1,param_3 * 2),
                      iVar4 == 0)) goto code_r0x0042fa14;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
        uVar5 = 0xfffffffffffffffe;
      }
    }
    else {
      lStack_60 = 0;
      _ZN7android7String8C2Ev(&lStack_60);
      uStack_68 = 0;
      _ZN7android7String8C2Ev(&uStack_68);
      if (param_2 != (long *)0x0) {
        _ZN7android7String8C2EPKDsm(&lStack_58,param_2,param_3);
        _ZN7android7String85setToERKS0_(&lStack_60,&lStack_58);
        _ZN7android7String8D2Ev(&lStack_58);
      }
      _ZN7android7String8C2EPKDsm(&lStack_58,param_4,param_5);
      _ZN7android7String85setToERKS0_(&uStack_68,&lStack_58);
      _ZN7android7String8D2Ev(&lStack_58);
      if (uVar7 != 0) {
        uVar5 = 0;
        do {
          if (((((int)param_1[1] == 0x102) && (lVar1 = param_1[3], uVar5 < *(ushort *)(lVar1 + 0xc))
               ) && (-1 < *(int *)(*(ushort *)(lVar1 + 10) * uVar5 +
                                  (ulong)*(ushort *)(lVar1 + 8) + lVar1))) &&
             (_ZNK7android13ResStringPool9string8AtEm(&lStack_58,*param_1 + 0x80), iStack_40 == 0))
          {
            iVar4 = (int)param_1[1];
            lVar1 = lStack_50;
            lVar3 = lStack_48;
          }
          else {
            iVar4 = (int)param_1[1];
            lVar1 = 0;
            lVar3 = 0;
          }
          if (((((iVar4 == 0x102) && (lVar2 = param_1[3], uVar5 < *(ushort *)(lVar2 + 0xc))) &&
               ((-1 < *(int *)(*(ushort *)(lVar2 + 10) * uVar5 + 4 +
                              (ulong)*(ushort *)(lVar2 + 8) + lVar2) &&
                ((_ZNK7android13ResStringPool9string8AtEm(&lStack_58,*param_1 + 0x80),
                 iStack_40 == 0 && (lStack_50 != 0)))))) && (lVar3 == param_3)) &&
             ((lStack_48 == param_5 &&
              (iVar4 = func_0x0099bf90(uStack_68,lStack_50,param_5), iVar4 == 0)))) {
            if (param_2 == (long *)0x0) {
              if (lVar1 == 0) goto code_r0x0042fa02;
            }
            else if ((lVar1 != 0) && (iVar4 = func_0x0099bf90(lStack_60,lVar1,param_3), iVar4 == 0))
            goto code_r0x0042fa02;
          }
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
      }
      uVar5 = 0xfffffffffffffffe;
code_r0x0042fa02:
      _ZN7android7String8D2Ev(&uStack_68);
      plVar6 = &lStack_60;
      _ZN7android7String8D2Ev();
    }
  }
code_r0x0042fa14:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar5;
  }
  func_0x0099bd00();
  if (((int)plVar6[1] == 0x102) && ((ulong)*(ushort *)(plVar6[3] + 0xe) != 0)) {
    return (ulong)*(ushort *)(plVar6[3] + 0xe) - 1;
  }
  return 0xfffffffffffffffe;
}


