// Function: _ZNK7android8ResTable9findEntryEPKNS0_12PackageGroupElPKDsmPj
// Address: 00437c50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ushort *******
_ZNK7android8ResTable9findEntryEPKNS0_12PackageGroupElPKDsmPj
          (ushort *******param_1,ushort ******param_2,ulong param_3,long param_4,
          ushort *******param_5,undefined8 *param_6)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  ushort *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ushort *******pppppppuVar13;
  ushort ***pppuVar14;
  long *plVar15;
  ushort *******pppppppuVar16;
  ushort *******pppppppuVar17;
  ulong uVar18;
  ushort *******extraout_RDX;
  long extraout_RDX_00;
  ushort *******unaff_RBX;
  ushort *******pppppppuVar19;
  ushort ******unaff_R12;
  ushort ******ppppppuVar20;
  ushort ****unaff_R13;
  undefined8 *unaff_R14;
  ushort ******ppppppuVar21;
  ushort *******unaff_R15;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 uStack_1e1;
  ushort ******ppppppuStack_188;
  long lStack_180;
  ushort *******pppppppuStack_178;
  ushort ******ppppppuStack_170;
  ushort ****ppppuStack_168;
  undefined8 *puStack_160;
  ushort *******pppppppuStack_158;
  undefined *puStack_150;
  ushort *******pppppppuStack_148;
  long lStack_140;
  ushort ****ppppuStack_138;
  ushort ******ppppppuStack_130;
  ushort *****pppppuStack_128;
  ushort *******pppppppuStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  ushort ******ppppppuStack_108;
  ushort *******pppppppuStack_100;
  ushort *******pppppppuStack_f8;
  ulong uStack_f0;
  ushort ******ppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ushort ******ppppppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  ushort *******pppppppuStack_38;
  
  pppppppuStack_38 = *(ushort ********)(in_FS_OFFSET + 0x28);
  if ((param_3 < 0x100) && (param_2[(param_3 >> 4) + 8] != (ushort *****)0x0)) {
    puVar9 = (undefined1 *)(param_2[(param_3 >> 4) + 8] + (ulong)((uint)param_3 & 0xf) * 5);
  }
  else {
    puVar9 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
  }
  ppppuStack_138 = *(ushort *****)((long)puVar9 + 0x10);
  pppppppuStack_148 = param_5;
  lStack_140 = param_4;
  if (ppppuStack_138 != (ushort ****)0x0) {
    unaff_R13 = (ushort ****)0x0;
    pppppuStack_128 = (ushort *****)puVar9;
    puStack_118 = param_6;
    uStack_110 = param_3;
    ppppppuStack_108 = param_2;
    pppppppuStack_100 = param_1;
    do {
      unaff_R15 = (ushort *******)pppppuStack_128[1][(long)unaff_R13];
      ppppppuStack_58 = (ushort ******)0x0;
      puStack_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      param_2 = unaff_R15[1] + 0x29;
      param_1 = &ppppppuStack_58;
      puStack_150 = &UNK_00437d51;
      _ZNK7android13ResStringPool13indexOfStringEPKDsm(param_1,param_2,lStack_140,pppppppuStack_148)
      ;
      puVar5 = puStack_50;
      unaff_RBX = (ushort *******)&pppppppuStack_f8;
      if (((int)uStack_48 == 0) &&
         (ppppppuStack_130 = unaff_R15[8], ppppppuStack_130 != (ushort ******)0x0)) {
        unaff_R12 = (ushort ******)0x0;
        pppppppuStack_120 = unaff_R15;
        do {
          ppppppuStack_e8 = (ushort ******)0x0;
          uStack_e0 = 0;
          param_2 = (ushort ******)pppppppuStack_120[7][(long)unaff_R12];
          unaff_R15 = &ppppppuStack_e8;
          puStack_150 = &UNK_00437db8;
          param_1 = unaff_R15;
          _ZN7android11TypeVariantC2EPKNS_13ResTable_typeE();
          uStack_f0 = 0;
          pppppppuStack_f8 = unaff_R15;
          if ((int)uStack_e0 != 0) {
            do {
              do {
                puStack_150 = &UNK_00437de8;
                puVar10 = (ushort *)_ZNK7android11TypeVariant8iteratordeEv(&pppppppuStack_f8);
                unaff_R14 = puStack_118;
                if (puVar10 != (ushort *)0x0) {
                  puVar11 = (undefined8 *)(ulong)*(uint *)(puVar10 + 2);
                  if ((puVar10[1] & 8) != 0) {
                    puVar11 = (undefined8 *)(ulong)*puVar10;
                  }
                  if (puVar5 == puVar11) {
                    param_1 = (ushort *******)(ulong)(uint)(*(int *)(ppppppuStack_108 + 2) << 0x18);
                    param_5 = (ushort *******)(uStack_f0 & 0xffff);
                    uVar8 = (int)uStack_110 * 0x10000 + 0x10000U & 0xff0000 |
                            *(int *)(ppppppuStack_108 + 2) << 0x18 | (uint)uStack_f0 & 0xffff;
                    pppppppuVar13 = (ushort *******)(ulong)uVar8;
                    param_2 = ppppppuStack_108;
                    if (puStack_118 == (undefined8 *)0x0) goto code_r0x00437ece;
                    pppppppuVar13 = (ushort *******)(ulong)uVar8;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    param_6 = &uStack_d8;
                    param_5 = (ushort *******)0x0;
                    puStack_150 = &UNK_00437eac;
                    param_1 = pppppppuStack_100;
                    iVar7 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                                      ();
                    unaff_RBX = pppppppuVar13;
                    if (iVar7 == 0) {
                      *(undefined4 *)unaff_R14 = (undefined4)uStack_88;
                      goto code_r0x00437ece;
                    }
                    param_2 = (ushort ******)&UNK_0015b3df;
                    param_1 = (ushort *******)0x5;
                    puStack_150 = &UNK_00437ecc;
                    __android_log_print(5,&UNK_0015b3df,&UNK_00184cbf,pppppppuVar13);
                    goto code_r0x00437ecc;
                  }
                }
                puStack_150 = &UNK_00437e08;
                param_1 = (ushort *******)&pppppppuStack_f8;
                _ZN7android11TypeVariant8iteratorppEv();
              } while (pppppppuStack_f8 != unaff_R15);
            } while ((uint)uStack_f0 != (int)uStack_e0);
          }
          unaff_R12 = (ushort ******)((long)unaff_R12 + 1);
          unaff_R14 = puVar5;
          unaff_R15 = pppppppuStack_120;
        } while (unaff_R12 != ppppppuStack_130);
      }
      unaff_R13 = (ushort ****)((long)unaff_R13 + 1);
    } while (unaff_R13 != ppppuStack_138);
  }
code_r0x00437ecc:
  pppppppuVar13 = (ushort *******)0x0;
code_r0x00437ece:
  pppppppuVar16 = *(ushort ********)(in_FS_OFFSET + 0x28);
  if (pppppppuVar16 == pppppppuStack_38) {
    return pppppppuVar13;
  }
  puStack_150 = &UNK_00437efe;
  func_0x0099bd00();
  lStack_180 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar13 = (ushort *******)((long)param_1 + (long)param_2 * 2);
  if (param_2 == (ushort ******)0x0) {
    pppppppuVar17 = (ushort *******)0x0;
  }
  else {
    pppppppuVar17 = (ushort *******)0x0;
    pppppppuVar19 = param_1;
    do {
      pppppppuVar6 = pppppppuVar19;
      if ((*(ushort *)pppppppuVar19 != 0x3a) &&
         (pppppppuVar6 = pppppppuVar17, *(ushort *)pppppppuVar19 == 0x2f)) goto code_r0x00437f76;
      pppppppuVar17 = pppppppuVar6;
      pppppppuVar19 = (ushort *******)((long)pppppppuVar19 + 2);
    } while (pppppppuVar19 < pppppppuVar13);
  }
  pppppppuVar19 = (ushort *******)0x0;
code_r0x00437f76:
  puVar10 = (ushort *)((long)param_1 + (ulong)(*(ushort *)param_1 == 0x40) * 2);
  if (ppppppuStack_130 == (ushort ******)0x0) {
    puVar10 = puVar10 + (*puVar10 == 0x2a);
  }
  else {
    *(undefined1 *)ppppppuStack_130 = 1;
    if (*puVar10 == 0x2a) {
      puVar10 = puVar10 + 1;
      *(undefined1 *)ppppppuStack_130 = 0;
    }
  }
  pppppppuStack_178 = unaff_RBX;
  ppppppuStack_170 = unaff_R12;
  ppppuStack_168 = unaff_R13;
  puStack_160 = unaff_R14;
  pppppppuStack_158 = unaff_R15;
  if (pppppppuVar17 == (ushort *******)0x0) {
    if (lStack_140 != 0) {
      param_1 = extraout_RDX;
      puStack_150 = &stack0xfffffffffffffff8;
      _ZN7android8String165setToERKS0_();
      goto code_r0x00437ffd;
    }
    ppppppuVar21 = (ushort ******)0x0;
    param_5 = param_1;
    puStack_150 = &stack0xfffffffffffffff8;
    if (ppppuStack_138 == (ushort ****)0x0) goto code_r0x00438102;
    pppuVar14 = (ushort ***)&UNK_0015b51c;
    puStack_150 = &stack0xfffffffffffffff8;
code_r0x004380ff:
    *ppppuStack_138 = pppuVar14;
    param_5 = param_1;
code_r0x00438102:
    pppppppuVar13 = (ushort *******)0x0;
  }
  else {
    param_1 = &ppppppuStack_188;
    puStack_150 = &stack0xfffffffffffffff8;
    _ZN7android8String16C2EPKDsm(param_1,puVar10,(long)pppppppuVar17 - (long)puVar10 >> 1);
    _ZN7android8String16aSEOS0_(extraout_RDX,param_1);
    _ZN7android8String16D2Ev();
    puVar10 = (ushort *)((long)pppppppuVar17 + 2);
code_r0x00437ffd:
    if (pppppppuVar19 == (ushort *******)0x0) {
      if (param_6 != (undefined8 *)0x0) {
        _ZN7android8String165setToERKS0_(pppppppuVar16);
        goto code_r0x0043804f;
      }
      ppppppuVar21 = (ushort ******)0x0;
      param_5 = param_1;
      if (ppppuStack_138 != (ushort ****)0x0) {
        pppuVar14 = (ushort ***)&UNK_0016ef76;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    _ZN7android8String16C2EPKDsm(&ppppppuStack_188,puVar10,(long)pppppppuVar19 - (long)puVar10 >> 1)
    ;
    _ZN7android8String16aSEOS0_(pppppppuVar16,&ppppppuStack_188);
    _ZN7android8String16D2Ev(&ppppppuStack_188);
    puVar10 = (ushort *)((long)pppppppuVar19 + 2);
code_r0x0043804f:
    _ZN7android8String16C2EPKDsm(&ppppppuStack_188,puVar10,(long)pppppppuVar13 - (long)puVar10 >> 1)
    ;
    ppppppuVar21 = (ushort ******)&ppppppuStack_188;
    _ZN7android8String16aSEOS0_(param_5);
    _ZN7android8String16D2Ev(&ppppppuStack_188);
    param_1 = extraout_RDX;
    lVar12 = _ZNK7android8String164sizeEv();
    if (lVar12 == 0) {
      param_5 = param_1;
      if (ppppuStack_138 != (ushort ****)0x0) {
        pppuVar14 = (ushort ***)&UNK_00163162;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar12 = _ZNK7android8String164sizeEv();
    if (lVar12 == 0) {
      param_5 = pppppppuVar16;
      if (ppppuStack_138 != (ushort ****)0x0) {
        pppuVar14 = (ushort ***)&UNK_0016b1bf;
        param_1 = pppppppuVar16;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar12 = _ZNK7android8String164sizeEv();
    pppppppuVar13 = (ushort *******)0x1;
    if (lVar12 == 0) {
      if (ppppuStack_138 != (ushort ****)0x0) {
        pppuVar14 = (ushort ***)&UNK_001881ef;
        param_1 = param_5;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_180) {
    return pppppppuVar13;
  }
  func_0x0099bd00();
  if (ppppppuVar21 == (ushort ******)0x0) {
    return (ushort *******)0x0;
  }
  while( true ) {
    uVar3 = *(ushort *)param_5;
    uVar18 = (ulong)uVar3;
    if ((0x7f < uVar18) ||
       (plVar15 = (long *)func_0x0099be00(), (*(byte *)(*plVar15 + 1 + uVar18 * 2) & 0x20) == 0))
    break;
    param_5 = (ushort *******)((long)param_5 + 2);
    ppppppuVar21 = (ushort ******)((long)ppppppuVar21 + -1);
    if (ppppppuVar21 == (ushort ******)0x0) {
      return (ushort *******)0x0;
    }
  }
  ppppppuVar20 = (ushort ******)(ulong)(uVar18 == 0x2d);
  uVar4 = *(ushort *)((long)param_5 + (long)ppppppuVar20 * 2);
  if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
    return (ushort *******)0x0;
  }
  if (((ppppppuVar21 == (ushort ******)0x1) || (uVar4 != 0x30)) ||
     (*(ushort *)((long)param_5 + ((long)ppppppuVar20 + 1) * 2) != 0x78)) {
    if (ppppppuVar20 < ppppppuVar21) {
      lVar12 = 0;
      do {
        uVar4 = *(ushort *)((long)param_5 + (long)ppppppuVar20 * 2);
        if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
          return (ushort *******)0x0;
        }
        lVar1 = (ulong)uVar4 + lVar12 * 10;
        if (uVar3 == 0x2d) {
          if (0x80000030 < lVar1) {
            return (ushort *******)0x0;
          }
        }
        else if (0x8000002f < lVar1) {
          return (ushort *******)0x0;
        }
        ppppppuVar20 = (ushort ******)((long)ppppppuVar20 + 1);
        lVar12 = (ulong)uVar4 + lVar12 * 10 + -0x30;
      } while (ppppppuVar20 < ppppppuVar21);
      if (uVar3 == 0x2d) {
        lVar12 = 0x30 - lVar1;
      }
      iVar7 = (int)lVar12;
      uStack_1e1 = 0x10;
      goto code_r0x00438315;
    }
    uStack_1e1 = 0x10;
    ppppppuVar20 = (ushort ******)0x1;
    uVar18 = 0;
  }
  else {
    if (uVar3 == 0x2d) {
      return (ushort *******)0x0;
    }
    ppppppuVar20 = (ushort ******)((ulong)ppppppuVar20 | 2);
    if (ppppppuVar21 == ppppppuVar20) {
      return (ushort *******)0x0;
    }
    bVar22 = false;
    uVar18 = 0;
    while ((!bVar22 && (ppppppuVar20 < ppppppuVar21))) {
      cVar2 = (char)*(ushort *)((long)param_5 + (long)ppppppuVar20 * 2);
      iVar7 = (int)cVar2;
      if ((byte)(cVar2 - 0x30U) < 10) {
        uVar8 = iVar7 - 0x30;
code_r0x004381e3:
        bVar22 = false;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          uVar8 = iVar7 - 0x57;
          goto code_r0x004381e3;
        }
        bVar22 = (byte)(cVar2 + 0xb9U) < 0xfa;
        uVar8 = iVar7 - 0x37;
        if (bVar22) {
          uVar8 = 0;
        }
      }
      uVar18 = uVar18 * 0x10 + (ulong)uVar8;
      ppppppuVar20 = (ushort ******)((long)ppppppuVar20 + 1);
      if (uVar18 >> 0x20 != 0) {
        return (ushort *******)0x0;
      }
    }
    uStack_1e1 = 0x11;
    if (bVar22) {
      return (ushort *******)0x0;
    }
  }
  iVar7 = -(int)uVar18;
  if (uVar3 != 0x2d) {
    iVar7 = (int)uVar18;
  }
  if (ppppppuVar20 < ppppppuVar21) {
    do {
      uVar18 = (ulong)*(ushort *)((long)param_5 + (long)ppppppuVar20 * 2);
      if ((0x7f < uVar18) ||
         (plVar15 = (long *)func_0x0099be00(), (*(byte *)(*plVar15 + 1 + uVar18 * 2) & 0x20) == 0))
      goto code_r0x004382f5;
      ppppppuVar20 = (ushort ******)((long)ppppppuVar20 + 1);
    } while (ppppppuVar20 < ppppppuVar21);
  }
  else {
code_r0x004382f5:
    if (ppppppuVar21 != ppppppuVar20) {
      return (ushort *******)0x0;
    }
  }
code_r0x00438315:
  if (extraout_RDX_00 != 0) {
    *(undefined1 *)(extraout_RDX_00 + 3) = uStack_1e1;
    *(int *)(extraout_RDX_00 + 4) = iVar7;
  }
  return (ushort *******)0x1;
}


