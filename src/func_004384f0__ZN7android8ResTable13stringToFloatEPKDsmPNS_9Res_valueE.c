// Function: _ZN7android8ResTable13stringToFloatEPKDsmPNS_9Res_valueE
// Address: 004384f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

byte _ZN7android8ResTable13stringToFloatEPKDsmPNS_9Res_valueE
               (byte **param_1,byte **param_2,long param_3,undefined8 param_4,byte **param_5,
               undefined8 param_6)

{
  bool bVar1;
  byte **ppbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  sbyte sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  long extraout_RDX;
  undefined *puVar29;
  byte **ppbVar30;
  bool bVar31;
  byte bVar32;
  long unaff_RBX;
  byte **ppbVar33;
  long lVar34;
  byte **ppbVar35;
  ulong unaff_R12;
  byte **ppbVar36;
  byte *pbVar37;
  byte **ppbVar38;
  byte **ppbVar39;
  ushort *puVar40;
  byte **ppbVar41;
  long in_FS_OFFSET;
  bool bVar42;
  bool bVar43;
  float extraout_XMM0_Da;
  float fVar44;
  byte extraout_XMM0_Bi;
  float fVar45;
  byte **ppbStack_1a0;
  byte **ppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_134;
  byte *pbStack_130;
  byte **ppbStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  byte bStack_d0;
  uint uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  byte **ppbStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte **ppbStack_30;
  
  cVar4 = (char)param_6;
  ppbStack_30 = *(byte ***)(in_FS_OFFSET + 0x28);
  pbStack_c0 = (byte *)0x0;
  if (param_2 != (byte **)0x0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
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
    uStack_b8 = (byte *)0x0;
    ppbStack_b0 = (byte **)0x0;
    ppbVar36 = param_2;
    ppbVar39 = param_1;
    do {
      cVar4 = (char)param_6;
      unaff_R12 = (ulong)*(ushort *)ppbVar39;
      unaff_RBX = param_3;
      if (0x7f < unaff_R12) {
code_r0x004385ab:
        ppbVar33 = (byte **)0x0;
        goto code_r0x004385b0;
      }
      plVar11 = (long *)func_0x0099be00();
      cVar4 = (char)param_6;
      if ((*(byte *)(*plVar11 + 1 + unaff_R12 * 2) & 0x20) == 0) goto code_r0x004385ab;
      ppbVar39 = (byte **)((long)ppbVar39 + 2);
      ppbVar36 = (byte **)((long)ppbVar36 + -1);
    } while (ppbVar36 != (byte **)0x0);
  }
  goto code_r0x00438586;
  while( true ) {
    *(char *)((long)&uStack_b8 + (long)ppbVar33) = (char)uVar6;
    ppbVar33 = (byte **)((long)ppbVar33 + 1);
    if (ppbVar36 == ppbVar33) break;
code_r0x004385b0:
    uVar6 = *(ushort *)((long)ppbVar39 + (long)ppbVar33 * 2);
    uVar9 = uVar6 - 0x100 & 0xffff;
    param_2 = (byte **)(ulong)uVar9;
    bVar3 = 0;
    if ((uVar9 < 0xff01) || ((byte **)0x7d < ppbVar33)) goto code_r0x00438588;
  }
  if ((byte)((byte)uStack_b8 - 0x3a) < 0xf6) {
    bVar3 = 0;
    if (((byte)uStack_b8 < 0x2f) &&
       (param_2 = (byte **)0x680000000000,
       (0x680000000000U >> ((ulong)(uint)(byte)uStack_b8 & 0x3f) & 1) != 0)) goto code_r0x00438604;
  }
  else {
code_r0x00438604:
    *(undefined1 *)((long)&uStack_b8 + (long)ppbVar33) = 0;
    param_1 = (byte **)&uStack_b8;
    param_2 = &pbStack_c0;
    func_0x0099c570();
    pbVar37 = pbStack_c0;
    bVar3 = *pbStack_c0;
    ppbVar36 = (byte **)(ulong)bVar3;
    if (ppbVar36 != (byte **)0x0) {
      plVar11 = (long *)func_0x0099be00();
      lVar22 = *plVar11;
      bStack_d0 = extraout_XMM0_Bi;
      if ((*(byte *)(lVar22 + 1 + (long)ppbVar36 * 2) & 0x20) == 0) {
        lVar34 = 0;
        do {
          param_1 = ppbVar36;
          if ((*(byte *)(lVar22 + 1 + (long)param_1 * 2) & 0x20) != 0) {
            pbVar28 = pbVar37 + lVar34 + 1;
            param_2 = param_1;
            goto code_r0x004386d0;
          }
          lVar23 = lVar34 + 1;
          param_2 = (byte **)(ulong)pbVar37[lVar23];
          lVar34 = lVar34 + 1;
          ppbVar36 = param_2;
        } while (pbVar37[lVar23] != 0);
        goto code_r0x004386ea;
      }
      plVar11 = (long *)func_0x0099be00();
      do {
        pbVar37 = pbVar37 + 1;
        if ((*(byte *)(*plVar11 + 1 + (long)ppbVar36 * 2) & 0x20) == 0) goto code_r0x00438586;
        ppbVar36 = (byte **)(ulong)*pbVar37;
      } while (*pbVar37 != 0);
    }
    if (param_3 == 0) goto code_r0x00438586;
    *(undefined1 *)(param_3 + 3) = 4;
    *(float *)(param_3 + 4) = extraout_XMM0_Da;
code_r0x004388f5:
    bVar3 = 1;
  }
  goto code_r0x00438588;
  while( true ) {
    bVar32 = *pbVar28;
    param_2 = (byte **)(ulong)bVar32;
    pbVar28 = pbVar28 + 1;
    if (bVar32 == 0) break;
code_r0x004386d0:
    if ((*(byte *)(lVar22 + 1 + (long)param_2 * 2) & 0x20) == 0) goto code_r0x00438586;
  }
code_r0x004386ea:
  if (lVar34 == 1) {
    if (bVar3 == 0x25) {
      puVar29 = &UNK_0099f970;
      goto code_r0x00438836;
    }
  }
  else {
    uVar9 = (uint)bVar3;
    if (lVar34 == 2) {
      if (bVar3 == 100) {
        iVar10 = 1;
        if (pbVar37[1] != 0x70) goto code_r0x004387c1;
        puVar29 = &UNK_0099f8d0;
      }
      else if (uVar9 == 0x70) {
        if (pbVar37[1] == 0x78) {
          puVar29 = &UNK_0099f890;
        }
        else {
          iVar10 = 0x74 - (uint)pbVar37[1];
code_r0x004387c1:
          if (iVar10 == 0) {
            puVar29 = &UNK_0099f910;
          }
          else {
            if (uVar9 != 0x6d) {
              if (uVar9 == 0x69) {
                if (pbVar37[1] == 0x6e) {
                  puVar29 = &UNK_0099f930;
                  goto code_r0x00438836;
                }
              }
              else {
                if (bVar3 == 0x25) {
                  iVar10 = 0x70 - (uint)pbVar37[1];
                }
                else {
                  iVar10 = 0x25 - uVar9;
                }
                if (iVar10 == 0) {
                  puVar29 = &UNK_0099f990;
                  goto code_r0x00438836;
                }
              }
              goto code_r0x00438586;
            }
            if (pbVar37[1] != 0x6d) goto code_r0x00438586;
            puVar29 = &UNK_0099f950;
          }
        }
      }
      else {
        if (bVar3 == 0x73) {
          iVar10 = 0x70 - (uint)pbVar37[1];
        }
        else {
          iVar10 = 0x73 - uVar9;
        }
        if (iVar10 != 0) {
          iVar10 = 0x70 - uVar9;
          goto code_r0x004387c1;
        }
        puVar29 = &UNK_0099f8f0;
      }
code_r0x00438836:
      *(undefined *)(param_3 + 3) = puVar29[0x10];
      uVar9 = *(uint *)(puVar29 + 0x14);
      *(uint *)(param_3 + 4) = uVar9;
      fVar45 = extraout_XMM0_Da * *(float *)(puVar29 + 0x18);
      fVar44 = -fVar45;
      if (-fVar45 <= fVar45) {
        fVar44 = fVar45;
      }
      fVar44 = fVar44 * 8388608.0 + 0.5;
      uVar21 = (ulong)fVar44;
      uVar21 = (long)(fVar44 - 9.223372e+18) & (long)uVar21 >> 0x3f | uVar21;
      if ((uVar21 & 0x7fffff) == 0) {
        sVar16 = 0x17;
        param_2 = (byte **)0x0;
      }
      else if (uVar21 < 0x800000) {
        param_2 = (byte **)0x30;
        sVar16 = 0;
      }
      else if (uVar21 >> 0x1f == 0) {
        sVar16 = 8;
        param_2 = (byte **)0x20;
      }
      else {
        bVar1 = uVar21 >> 0x27 == 0;
        param_1 = (byte **)0x10;
        sVar16 = 0x17;
        if (bVar1) {
          sVar16 = 0x10;
        }
        param_2 = (byte **)((ulong)bVar1 << 4);
      }
      iVar17 = (int)(uVar21 >> sVar16);
      iVar10 = -iVar17;
      if (0.0 <= fVar45) {
        iVar10 = iVar17;
      }
      *(uint *)(param_3 + 4) = iVar10 << 8 | (uint)param_2 | uVar9;
      goto code_r0x004388f5;
    }
    if (lVar34 == 3) {
      if (bVar3 == 100) {
        if (pbVar37[1] - 0x69 == 0) {
          iVar10 = 0x70 - (uint)pbVar37[2];
        }
        else {
          iVar10 = -(pbVar37[1] - 0x69);
        }
      }
      else {
        iVar10 = 100 - uVar9;
      }
      if (iVar10 == 0) {
        puVar29 = &UNK_0099f8b0;
        goto code_r0x00438836;
      }
    }
  }
code_r0x00438586:
  bVar3 = 0;
  param_3 = unaff_RBX;
code_r0x00438588:
  ppbVar36 = *(byte ***)(in_FS_OFFSET + 0x28);
  if (ppbVar36 == ppbStack_30) {
    return bVar3;
  }
  func_0x0099bd00();
  ppbVar39 = ppbStack_b0;
  uStack_100 = unaff_R12;
  lStack_108 = param_3;
  uVar9 = (uint)uStack_a0;
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppbStack_b0 == (byte **)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*ppbStack_b0 + 0x60))();
  }
  puStack_118 = (undefined *)0x0;
  *(ushort *)param_2 = 8;
  *(undefined1 *)((long)param_2 + 2) = 0;
  ppbVar33 = ppbVar36;
  ppbVar41 = param_5;
  if (cVar4 == '\0') {
    if (param_5 == (byte **)0x0) {
      ppbStack_1a0 = (byte **)0x0;
      ppbVar41 = ppbStack_1a0;
    }
    else {
      ppbVar38 = param_5;
      do {
        uVar6 = *(ushort *)ppbVar33;
        if ((0x7f < (ulong)uVar6) ||
           (plVar11 = (long *)func_0x0099be00(),
           (*(byte *)(*plVar11 + 1 + (ulong)uVar6 * 2) & 0x20) == 0)) {
          puVar40 = (ushort *)((long)ppbVar36 + (long)param_5 * 2);
          ppbStack_1a0 = (byte **)0x0;
          goto code_r0x00438a20;
        }
        ppbVar33 = (byte **)((long)ppbVar33 + 2);
        ppbVar38 = (byte **)((long)ppbVar38 + -1);
      } while (ppbVar38 != (byte **)0x0);
      ppbStack_1a0 = (byte **)0x0;
      ppbVar33 = (byte **)((long)ppbVar36 + (long)param_5 * 2);
      ppbVar39 = ppbStack_b0;
      ppbVar41 = ppbStack_1a0;
    }
  }
code_r0x00438a7b:
  ppbStack_1a0 = ppbVar41;
  uStack_11c = 0x80000000;
  uStack_120 = 0x7fffffff;
  if ((uStack_c8 == 0) || (0xffff < uStack_c8 && (uStack_c8 & 0xff0000) == 0)) {
    bVar1 = false;
    bVar31 = false;
  }
  else {
    ppbStack_180 = (byte **)0x0;
    if (*(char *)((long)param_1 + (ulong)(uStack_c8 >> 0x18) + 0xe8) == '\0') {
code_r0x00438b7d:
      if (ppbVar39 == (byte **)0x0) {
        bVar1 = false;
        uVar7 = 0;
      }
      else {
        cVar5 = (**(code **)(*ppbVar39 + 0x30))(ppbVar39,uStack_c8,&uStack_a0);
        uVar7 = 0;
        uVar9 = 0;
        if (cVar5 == '\0') goto code_r0x00438bef;
        if ((((uint)uStack_a0 == 4) || ((uint)uStack_a0 == 0x20000)) || ((uint)uStack_a0 == 0x10000)
           ) {
          (**(code **)(*ppbVar39 + 0x38))(ppbVar39,uStack_c8,&uStack_11c);
          (**(code **)(*ppbVar39 + 0x40))(ppbVar39,uStack_c8,&uStack_120);
        }
        bVar1 = true;
        if (bVar3 != 0) {
          uVar7 = (**(code **)(*ppbVar39 + 0x58))(ppbVar39,uStack_c8);
        }
      }
    }
    else {
      func_0x0099c500(param_1);
      uVar9 = 0;
      lVar22 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                         (param_1,uStack_c8,&ppbStack_180,0);
      if (lVar22 < 0) {
        func_0x0099c510();
        goto code_r0x00438b7d;
      }
      if (lVar22 != 0) {
        lVar22 = lVar22 + 1;
        ppbVar36 = ppbStack_180 + 2;
        uVar9 = 0;
        do {
          switch(*(uint *)(ppbVar36 + -1)) {
          case 0x1000000:
            uStack_a0 = CONCAT44(uStack_a0._4_4_,*(uint *)ppbVar36);
            break;
          case 0x1000001:
            uStack_11c = *(uint *)ppbVar36;
            break;
          case 0x1000002:
            uStack_120 = *(uint *)ppbVar36;
            break;
          case 0x1000003:
            uVar9 = *(uint *)ppbVar36;
          }
          lVar22 = lVar22 + -1;
          ppbVar36 = ppbVar36 + 3;
        } while (1 < lVar22);
      }
      func_0x0099c510();
code_r0x00438bef:
      uVar7 = uVar9;
      bVar1 = false;
    }
    bVar31 = uVar7 == 1;
    uVar9 = (uint)uStack_a0;
  }
  cVar5 = (char)uStack_98;
  uVar6 = *(ushort *)ppbVar33;
  if (uVar6 == 0x40) {
    *(undefined1 *)((long)param_2 + 3) = 1;
    ppbVar36 = ppbStack_1a0;
    if (ppbStack_1a0 != (byte **)0x6) {
      if (ppbStack_1a0 != (byte **)0x5) {
        if (ppbStack_1a0 < (byte **)0x3) goto code_r0x00438d95;
        uVar6 = *(ushort *)((long)ppbVar33 + 2);
code_r0x00438d65:
        iVar10 = -2;
        lVar22 = 4;
        if (uVar6 == 0x2b) {
          uVar24 = 1;
        }
        else {
          if (uVar6 != 0x2a) goto code_r0x00438d95;
          uVar24 = 0;
          cVar5 = '\0';
        }
        goto code_r0x00438dc1;
      }
      uVar6 = *(ushort *)((long)ppbVar33 + 2);
      if (uVar6 != 0x6e) goto code_r0x00438d65;
      if (((*(ushort *)((long)ppbVar33 + 4) != 0x75) || (*(ushort *)((long)ppbVar33 + 6) != 0x6c))
         || (*(ushort *)(ppbVar33 + 1) != 0x6c)) goto code_r0x00438d95;
code_r0x00438c74:
      *(uint *)((long)param_2 + 4) = 0;
      bVar3 = 1;
      goto code_r0x0043a0f4;
    }
    uVar6 = *(ushort *)((long)ppbVar33 + 2);
    if (uVar6 != 0x65) goto code_r0x00438d65;
    if (((*(ushort *)((long)ppbVar33 + 4) == 0x6d) && (*(ushort *)((long)ppbVar33 + 6) == 0x70)) &&
       ((*(ushort *)(ppbVar33 + 1) == 0x74 && (*(ushort *)((long)ppbVar33 + 10) == 0x79)))) {
      *(undefined1 *)((long)param_2 + 3) = 0;
      *(uint *)((long)param_2 + 4) = 1;
      bVar3 = 1;
      goto code_r0x0043a0f4;
    }
code_r0x00438d95:
    iVar10 = -1;
    lVar22 = 2;
    uVar24 = 0;
code_r0x00438dc1:
    ppbStack_180 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_180);
    ppbStack_128 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_128);
    pbStack_130 = (byte *)0x0;
    ppbVar41 = &pbStack_130;
    _ZN7android8String16C2Ev(ppbVar41);
    cVar4 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((long)ppbVar33 + lVar22,(long)((int)ppbStack_1a0 + iVar10),&ppbStack_180,
                       &ppbStack_128,ppbVar41,pbStack_c0,uStack_b8,&puStack_118,0);
    pbVar37 = pbStack_130;
    if (cVar4 == '\0') {
      ppbVar39 = ppbStack_b0;
      if (ppbStack_b0 == (byte **)0x0) {
code_r0x00438f5f:
        bVar3 = 1;
        bVar32 = 0;
      }
      else {
        pbVar37 = *ppbStack_b0;
        puVar29 = puStack_118;
code_r0x00438f4c:
        bVar3 = 1;
        bVar32 = 0;
        (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_a8,puVar29);
      }
    }
    else {
      uStack_134 = 0;
      uVar13 = _ZNK7android8String164sizeEv(&pbStack_130);
      ppbVar41 = ppbStack_128;
      uVar14 = _ZNK7android8String164sizeEv(&ppbStack_128);
      ppbVar36 = ppbStack_180;
      uVar15 = _ZNK7android8String164sizeEv(&ppbStack_180);
      uVar9 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                        (param_1,pbVar37,uVar13,ppbVar41,uVar14,ppbVar36,uVar15,&uStack_134);
      ppbVar39 = ppbStack_b0;
      if (uVar9 == 0) {
        bVar32 = 1;
        if ((ppbStack_b0 == (byte **)0x0) ||
           (uVar9 = (**(code **)(*ppbStack_b0 + 0x20))
                              (ppbStack_b0,&ppbStack_180,&ppbStack_128,&pbStack_130,uVar24),
           uVar9 == 0)) {
code_r0x0043911a:
          bVar3 = 0;
          goto code_r0x0043911d;
        }
        if (uVar9 < 0x1000000) {
          *(uint *)((long)param_2 + 4) = uVar9;
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        else {
          if ((uVar9 >> 0x18 != 0x7f) && (uVar9 >> 0x18 != 1)) goto code_r0x0043911a;
          *(uint *)((long)param_2 + 4) = uVar9;
        }
      }
      else {
        if (cVar5 == '\0') {
code_r0x00438f66:
          if (ppbVar39 != (byte **)0x0) goto code_r0x00438f6b;
        }
        else {
          if (ppbStack_b0 == (byte **)0x0) {
code_r0x00438f1d:
            if ((uStack_134 & 0x40000000) == 0) {
              if (ppbVar39 == (byte **)0x0) goto code_r0x00438f5f;
              pbVar37 = *ppbVar39;
              puVar29 = &UNK_0015fe9b;
              goto code_r0x00438f4c;
            }
            goto code_r0x00438f66;
          }
          puVar12 = (undefined8 *)(**(code **)(*ppbStack_b0 + 0x10))(ppbStack_b0);
          ppbVar41 = (byte **)*puVar12;
          if (ppbVar41 != ppbStack_180) {
            uVar13 = _ZNK7android8String164sizeEv(puVar12);
            ppbVar36 = ppbStack_180;
            uVar14 = _ZNK7android8String164sizeEv(&ppbStack_180);
            iVar10 = strzcmp16(ppbVar41,uVar13,ppbVar36,uVar14);
            if (iVar10 != 0) goto code_r0x00438f1d;
          }
code_r0x00438f6b:
          iVar10 = (**(code **)(*ppbVar39 + 0x28))(ppbVar39,(uVar9 >> 0x18) - 1);
          uVar9 = (uVar9 & 0xffffff) + iVar10 * 0x1000000 + 0x1000000;
        }
        if ((uVar9 >> 0x18 != 1) && (uVar9 >> 0x18 != 0x7f)) {
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        *(uint *)((long)param_2 + 4) = uVar9;
      }
      bVar3 = 1;
      bVar32 = 1;
    }
code_r0x0043911d:
    _ZN7android8String16D2Ev(&pbStack_130);
    _ZN7android8String16D2Ev(&ppbStack_128);
    _ZN7android8String16D2Ev(&ppbStack_180);
    ppbVar36 = ppbVar39;
    if (ppbVar39 == (byte **)0x0 || bVar3 != 0) {
      bVar3 = bVar3 & bVar32;
      ppbVar39 = ppbVar41;
      goto code_r0x0043a0f4;
    }
    pbVar37 = *ppbVar39;
    bVar3 = 0;
    puVar29 = &UNK_0016b1e7;
  }
  else {
    uVar9 = (uVar9 & 2) >> 1;
    ppbVar36 = (byte **)(ulong)uVar9;
    if ((ppbVar39 != (byte **)0x0) && ((bVar3 & bVar31) != 0)) {
      (**(code **)(*ppbVar39 + 0x68))(ppbVar39,uStack_a8,&UNK_00184ce4);
      uVar6 = *(ushort *)ppbVar33;
    }
    bVar31 = (bool)(bStack_d0 & (byte)uVar9);
    ppbVar41 = ppbVar39;
    if (uVar6 == 0x23) {
      switch(ppbStack_1a0) {
      case (byte **)0x4:
        *(undefined1 *)((long)param_2 + 3) = 0x1f;
        cVar5 = *(char *)((long)ppbVar33 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 * 0x100000 + -0x3000000;
          iVar17 = iVar10 + -0x30;
          bVar43 = false;
        }
        else {
          bVar43 = (byte)(cVar5 + 0x99U) < 0xfa;
          if (bVar43) {
            bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
            if (bVar42) {
              iVar25 = 0;
              if ((byte)(cVar5 + 0x9fU) < 6) {
                iVar17 = iVar10 + -0x57;
              }
              else {
                iVar25 = 0;
                iVar17 = 0;
                bVar43 = true;
                if ((byte)(cVar5 + 0xbfU) < 6) goto code_r0x0043957b;
              }
            }
            else {
              iVar25 = iVar10 * 0x100000 + -0x3700000;
code_r0x0043957b:
              iVar17 = iVar10 + -0x37;
              bVar43 = bVar42;
            }
          }
          else {
            iVar25 = iVar10 * 0x100000 + -0x5700000;
            iVar17 = iVar10 + -0x57;
          }
        }
        iVar25 = iVar17 * 0x10000 + iVar25;
        cVar5 = *(char *)((long)ppbVar33 + 4);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x30000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x57000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x37000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar43 = true;
        }
        iVar25 = iVar10 * 0x100 + iVar25;
        cVar5 = *(char *)((long)ppbVar33 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (bVar43) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffd00;
          uVar9 = iVar10 + 0xffffd0;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (bVar43) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffa90;
          uVar9 = iVar10 + 0xffffa9;
        }
        else {
          if (5 < (byte)(cVar5 + 0xbfU)) goto code_r0x004397f1;
          uVar21 = uStack_a0 & 0xffffffff;
          if (bVar43) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffc90;
          uVar9 = iVar10 + 0xffffc9;
        }
        uVar9 = uVar9 | uVar7;
joined_r0x0043931f:
        uVar9 = uVar9 | 0xff000000;
        uVar21 = uStack_a0;
joined_r0x004392e5:
        if ((uVar21 & 0x10) != 0) {
          *(uint *)((long)param_2 + 4) = uVar9;
          bVar3 = 1;
          goto code_r0x0043a0f4;
        }
        bVar43 = bVar31;
        if (ppbVar39 == (byte **)0x0 || bVar31 != false) goto code_r0x00439808;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_0016318d;
        goto code_r0x00439a12;
      case (byte **)0x5:
        *(undefined1 *)((long)param_2 + 3) = 0x1e;
        cVar5 = *(char *)((long)ppbVar33 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 << 0x1c;
          iVar17 = iVar10 + -0x30;
          bVar43 = false;
        }
        else {
          bVar43 = (byte)(cVar5 + 0x99U) < 0xfa;
          if (bVar43) {
            bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
            if (bVar42) {
              iVar25 = 0;
              if ((byte)(cVar5 + 0x9fU) < 6) {
                iVar17 = iVar10 + -0x57;
              }
              else {
                iVar25 = 0;
                iVar17 = 0;
                bVar43 = true;
                if ((byte)(cVar5 + 0xbfU) < 6) goto code_r0x00439693;
              }
            }
            else {
              iVar25 = iVar10 * 0x10000000 + -0x70000000;
code_r0x00439693:
              iVar17 = iVar10 + -0x37;
              bVar43 = bVar42;
            }
          }
          else {
            iVar25 = iVar10 * 0x10000000 + -0x70000000;
            iVar17 = iVar10 + -0x57;
          }
        }
        iVar25 = iVar17 * 0x1000000 + iVar25;
        cVar5 = *(char *)((long)ppbVar33 + 4);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x3000000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x5700000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x3700000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar43 = true;
        }
        iVar25 = iVar10 * 0x10000 + iVar25;
        cVar5 = *(char *)((long)ppbVar33 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x30000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x57000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x37000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar43 = true;
        }
        uVar7 = iVar10 * 0x100 + iVar25;
        cVar5 = *(char *)(ppbVar33 + 1);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar9 = iVar10 * 0x11 - 0x330;
code_r0x004397cb:
            uVar9 = uVar9 | uVar7;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar8 = iVar10 * 0x10 - 0x570;
            uVar9 = iVar10 - 0x57;
code_r0x004397c9:
            uVar21 = uStack_a0 & 0xffffffff;
            uVar9 = uVar9 | uVar8;
            goto code_r0x004397cb;
          }
        }
        else {
          if (5 < (byte)(cVar5 + 0xbfU)) goto code_r0x004397f1;
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar8 = iVar10 * 0x10 - 0x370;
            uVar9 = iVar10 - 0x37;
            goto code_r0x004397c9;
          }
        }
        break;
      default:
code_r0x004397f1:
        uVar21 = uStack_a0 & 0xffffffff;
        break;
      case (byte **)0x7:
        *(undefined1 *)((long)param_2 + 3) = 0x1d;
        cVar5 = *(char *)((long)ppbVar33 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          bVar43 = false;
          iVar17 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          bVar43 = false;
          iVar17 = iVar10 + -0x57;
        }
        else {
          bVar43 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar17 = 0;
          if (!bVar43) {
            iVar17 = iVar10 + -0x37;
          }
        }
        cVar5 = *(char *)((long)ppbVar33 + 4);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar42) {
            iVar25 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar18 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar18 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar42) {
            iVar18 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)(ppbVar33 + 1);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar26 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar26 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar26 = 0;
          if (!bVar42) {
            iVar26 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 10);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar19 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar19 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar19 = 0;
          if (!bVar42) {
            iVar19 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        uVar9 = iVar19 * 0x10 +
                iVar26 * 0x100 + iVar18 * 0x1000 + iVar25 * 0x10000 + iVar17 * 0x100000;
        cVar5 = *(char *)((long)ppbVar33 + 0xc);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar9 = iVar10 + 0xffffd0U | uVar9 | 0xff000000;
            uVar21 = uStack_a0;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar9 = iVar10 + uVar9 + 0xffffa9 | 0xff000000;
            uVar21 = uStack_a0;
            goto joined_r0x004392e5;
          }
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar17 = 0;
          if (!bVar42) {
            iVar17 = iVar10 + 0xffffc9;
          }
          uVar21 = uStack_a0 & 0xffffffff;
          if (!(bool)(bVar42 | bVar43)) {
            uVar9 = iVar17 + uVar9;
            goto joined_r0x0043931f;
          }
        }
        break;
      case (byte **)0x9:
        *(undefined1 *)((long)param_2 + 3) = 0x1c;
        cVar5 = *(char *)((long)ppbVar33 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          bVar43 = false;
          iVar17 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          bVar43 = false;
          iVar17 = iVar10 + -0x57;
        }
        else {
          bVar43 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar17 = 0;
          if (!bVar43) {
            iVar17 = iVar10 + -0x37;
          }
        }
        cVar5 = *(char *)((long)ppbVar33 + 4);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar42) {
            iVar25 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar18 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar18 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar42) {
            iVar18 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)(ppbVar33 + 1);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar26 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar26 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar26 = 0;
          if (!bVar42) {
            iVar26 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 10);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar19 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar19 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar19 = 0;
          if (!bVar42) {
            iVar19 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 0xc);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar27 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar27 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar27 = 0;
          if (!bVar42) {
            iVar27 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar5 = *(char *)((long)ppbVar33 + 0xe);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar20 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar20 = iVar10 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar20 = 0;
          if (!bVar42) {
            iVar20 = iVar10 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        uVar9 = iVar20 << 4 |
                iVar27 * 0x100 +
                iVar19 * 0x1000 +
                iVar26 * 0x10000 + iVar18 * 0x100000 + iVar25 * 0x1000000 + iVar17 * 0x10000000;
        cVar5 = *(char *)(ppbVar33 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar7 = iVar10 - 0x30;
            goto code_r0x004397cb;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          uVar21 = uStack_a0 & 0xffffffff;
          if (!bVar43) {
            uVar7 = iVar10 - 0x57;
            goto code_r0x004397cb;
          }
        }
        else {
          bVar42 = (byte)(cVar5 + 0xb9U) < 0xfa;
          uVar7 = 0;
          if (!bVar42) {
            uVar7 = iVar10 - 0x37;
          }
          uVar21 = uStack_a0 & 0xffffffff;
          if (!(bool)(bVar42 | bVar43)) {
            uVar9 = uVar9 | uVar7;
            uVar21 = uStack_a0;
            goto joined_r0x004392e5;
          }
        }
      }
      bVar43 = (uVar21 & 0x10) == 0;
      if (ppbVar39 != (byte **)0x0 && !bVar43) {
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_00164825;
        goto code_r0x00439a12;
      }
code_r0x00439808:
      if (bVar43 != false) {
        uVar6 = *(ushort *)ppbVar33;
        goto code_r0x0043981a;
      }
code_r0x0043a0f1:
      bVar3 = 0;
      goto code_r0x0043a0f4;
    }
code_r0x0043981a:
    if (uVar6 == 0x3f) {
      *(undefined1 *)((long)param_2 + 3) = 2;
      if (cRam0000000000a008e0 == '\0') goto code_r0x0043a127;
      goto code_r0x0043983b;
    }
    cVar5 = _ZN7android14U16StringToIntEPKDsmPNS_9Res_valueE(ppbVar33,ppbStack_1a0,param_2);
    if (cVar5 == '\0') {
code_r0x004399a0:
      cVar5 = _ZN7android8ResTable13stringToFloatEPKDsmPNS_9Res_valueE
                        (ppbVar33,ppbStack_1a0,param_2);
      ppbVar36 = (byte **)(ulong)uStack_c8;
      uVar9 = (uint)uStack_a0;
      if (cVar5 == '\0') {
code_r0x00439b97:
        if (ppbStack_1a0 == (byte **)0x5) {
          if (((((*(ushort *)ppbVar33 | 0x20) == 0x66) &&
               ((*(ushort *)((long)ppbVar33 + 2) | 0x20) == 0x61)) &&
              ((*(ushort *)((long)ppbVar33 + 4) | 0x20) == 0x6c)) &&
             (((*(ushort *)((long)ppbVar33 + 6) | 0x20) == 0x73 &&
              ((*(ushort *)(ppbVar33 + 1) | 0x20) == 0x65)))) {
            if ((uStack_a0 & 8) != 0) {
              *(undefined1 *)((long)param_2 + 3) = 0x12;
              goto code_r0x00438c74;
            }
            goto joined_r0x00439c90;
          }
        }
        else if (((ppbStack_1a0 == (byte **)0x4) && ((*(ushort *)ppbVar33 | 0x20) == 0x74)) &&
                (((*(ushort *)((long)ppbVar33 + 2) | 0x20) == 0x72 &&
                 (((*(ushort *)((long)ppbVar33 + 4) | 0x20) == 0x75 &&
                  ((*(ushort *)((long)ppbVar33 + 6) | 0x20) == 0x65)))))) {
          if ((uStack_a0 & 8) != 0) {
            *(undefined1 *)((long)param_2 + 3) = 0x12;
            *(uint *)((long)param_2 + 4) = 0xffffffff;
            bVar3 = 1;
            goto code_r0x0043a0f4;
          }
joined_r0x00439c90:
          if (bVar31 == false) {
            if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
            pbVar37 = *ppbVar39;
            puVar29 = &UNK_001773fd;
            goto code_r0x00439a12;
          }
        }
        uStack_a0._0_4_ = uVar9;
        if ((uStack_a0 & 0x10000) == 0) {
code_r0x00439e1f:
          ppbVar36 = (byte **)(ulong)uStack_c8;
          uVar9 = (uint)uStack_a0;
          if (((uint)uStack_a0 & 0x20000) == 0) {
code_r0x00439fea:
            ppbVar36 = (byte **)(ulong)uStack_c8;
            if ((uVar9 & 2) == 0) {
              if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
              pbVar37 = *ppbVar39;
              puVar29 = &UNK_001726a5;
              goto code_r0x00439a12;
            }
            *(undefined1 *)((long)param_2 + 3) = 3;
            if (extraout_RDX != 0) {
              bVar3 = _ZN7android8ResTable13collectStringEPNS_8String16EPKDsmbPPKcb
                                (extraout_RDX,ppbVar33,ppbStack_1a0,cVar4,&puStack_118,0);
              if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f4;
              pbVar37 = *ppbVar39;
              puVar29 = puStack_118;
              goto code_r0x00439a18;
            }
          }
          else {
            ppbStack_128 = (byte **)0x0;
            if ((*(char *)((long)param_1 + (ulong)(uStack_c8 >> 0x18) + 0xe8) == '\0') ||
               (lVar22 = _ZNK7android8ResTable7lockBagEjPPKNS0_9bag_entryE
                                   (param_1,ppbVar36,&ppbStack_128), lVar22 < 0)) {
code_r0x00439fbf:
              ppbVar36 = (byte **)(ulong)uStack_c8;
              if ((!bVar1) ||
                 (cVar5 = (**(code **)(*ppbVar39 + 0x50))
                                    (ppbVar39,ppbVar36,ppbVar33,ppbStack_1a0,param_2), cVar5 == '\0'
                 )) {
                uVar9 = (uint)uStack_a0;
                goto code_r0x00439fea;
              }
            }
            else {
              uStack_150 = 0;
              uStack_148 = 0;
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_170 = 0;
              uStack_168 = 0;
              ppbStack_180 = (byte **)0x0;
              uStack_178 = 0;
              *(undefined1 *)((long)param_2 + 3) = 0x11;
              *(uint *)((long)param_2 + 4) = 0;
              if (ppbStack_1a0 != (byte **)0x0) {
                ppbVar38 = (byte **)((long)ppbVar33 + (long)ppbStack_1a0 * 2);
                ppbVar35 = ppbVar33;
                do {
                  lVar34 = 2;
                  ppbVar30 = ppbVar35;
                  do {
                    ppbVar2 = ppbVar30;
                    lVar23 = lVar34;
                    ppbVar30 = (byte **)((long)ppbVar2 + 2);
                    if (ppbVar38 <= ppbVar30) break;
                    lVar34 = lVar23 + 2;
                  } while (*(ushort *)ppbVar30 != 0x7c);
                  if (lVar22 == 0) {
code_r0x00439f9a:
                    func_0x0099c510(param_1);
                    goto code_r0x00439fbf;
                  }
                  ppbVar36 = ppbStack_128 + 2;
                  lVar34 = lVar22;
                  while (((uVar9 = *(uint *)(ppbVar36 + -1),
                          0xffff < uVar9 && (uVar9 & 0xff0000) == 0 ||
                          (cVar5 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                             (param_1,uVar9,0,&ppbStack_180), cVar5 == '\0')) ||
                         (iVar10 = strzcmp16(ppbVar35,lVar23 >> 1,uStack_158,uStack_148),
                         iVar10 != 0))) {
                    ppbVar36 = ppbVar36 + 3;
                    lVar34 = lVar34 + -1;
                    if (lVar34 == 0) goto code_r0x00439f9a;
                  }
                  *(uint *)((long)param_2 + 4) = *(uint *)((long)param_2 + 4) | *(uint *)ppbVar36;
                  ppbVar35 = (byte **)((long)ppbVar2 + 4);
                  if (ppbVar38 <= ppbVar30) {
                    ppbVar35 = ppbVar30;
                  }
                } while (ppbVar35 < ppbVar38);
              }
              func_0x0099c510(param_1);
            }
          }
        }
        else {
          ppbStack_128 = (byte **)0x0;
          if (*(char *)((long)param_1 + (ulong)(uStack_c8 >> 0x18) + 0xe8) != '\0') {
            func_0x0099c500(param_1);
            lVar22 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                               (param_1,uStack_c8,&ppbStack_128,0);
            if (lVar22 < 0) {
              func_0x0099c510(param_1);
            }
            else {
              uStack_150 = 0;
              uStack_148 = 0;
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_170 = 0;
              uStack_168 = 0;
              ppbStack_180 = (byte **)0x0;
              uStack_178 = 0;
              if (lVar22 != 0) {
                do {
                  ppbVar36 = ppbStack_128;
                  uVar9 = *(uint *)(ppbStack_128 + 1);
                  if (((uVar9 < 0x10000 || (uVar9 & 0xff0000) != 0) &&
                      (cVar5 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                         (param_1,uVar9,0,&ppbStack_180), cVar5 != '\0')) &&
                     (iVar10 = strzcmp16(ppbVar33,ppbStack_1a0,uStack_158,uStack_148),
                     ppbVar36 = ppbStack_128, iVar10 == 0)) {
                    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)ppbStack_128 + 0xf);
                    *(uint *)((long)param_2 + 4) = *(uint *)(ppbStack_128 + 2);
                    func_0x0099c510(param_1);
                    bVar3 = 1;
                    ppbVar36 = param_2;
                    goto code_r0x0043a0f4;
                  }
                  ppbStack_128 = ppbVar36 + 3;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              func_0x0099c510(param_1);
            }
          }
          ppbVar36 = (byte **)(ulong)uStack_c8;
          if ((!bVar1) ||
             (cVar5 = (**(code **)(*ppbVar39 + 0x48))
                                (ppbVar39,ppbVar36,ppbVar33,ppbStack_1a0,param_2), cVar5 == '\0')) {
            goto code_r0x00439e1f;
          }
        }
        bVar3 = 1;
        goto code_r0x0043a0f4;
      }
      bVar3 = 1;
      if (*(char *)((long)param_2 + 3) == '\x06') {
        if ((char)uStack_a0 < '\0') goto code_r0x0043a0f4;
        if (bVar31 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_0015e412;
      }
      else if (*(char *)((long)param_2 + 3) == '\x05') {
        if ((uStack_a0 & 0x40) != 0) goto code_r0x0043a0f4;
        if (bVar31 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_00180663;
      }
      else {
        if ((uStack_a0 & 0x20) != 0) goto code_r0x0043a0f4;
        if (bVar31 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_0017bd71;
      }
    }
    else {
      ppbVar36 = ppbVar33;
      if ((uStack_a0 & 4) == 0) {
        if ((char)(((uint)uStack_a0 & 0x20) >> 5) != '\0' || bVar31 != false) goto code_r0x004399a0;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_0017594b;
      }
      else {
        bVar3 = (int)*(uint *)((long)param_2 + 4) <= (int)uStack_120 &&
                (int)uStack_11c <= (int)*(uint *)((long)param_2 + 4);
        if (ppbVar39 == (byte **)0x0 || (bool)bVar3) goto code_r0x0043a0f4;
        pbVar37 = *ppbVar39;
        puVar29 = &UNK_0017424d;
      }
    }
code_r0x00439a12:
    bVar3 = 0;
  }
code_r0x00439a18:
  (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_a8,puVar29);
  ppbVar39 = ppbVar41;
code_r0x0043a0f4:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
      return bVar3;
    }
    func_0x0099bd00();
    ppbStack_1a0 = ppbVar36;
code_r0x0043a127:
    iVar10 = __cxa_guard_acquire(0xa008e0);
    if (iVar10 != 0) {
      _ZN7android8String16C2EPKc(0xa008d8,&UNK_0015b517);
      func_0x0099c580(_ZN7android8String16D2Ev,0xa008d8,&DAT_009c55b8);
      __cxa_guard_release(0xa008e0);
    }
code_r0x0043983b:
    ppbStack_180 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_180);
    ppbStack_128 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_128);
    pbStack_130 = (byte *)0x0;
    _ZN7android8String16C2Ev(&pbStack_130);
    cVar4 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((ushort *)((long)ppbVar33 + 2),(long)ppbStack_1a0 + -1,&ppbStack_180,
                       &ppbStack_128,&pbStack_130,0xa008d8,uStack_b8,&puStack_118,0);
    pbVar37 = pbStack_130;
    if (cVar4 == '\0') {
      ppbVar41 = ppbVar39;
      if (ppbVar39 == (byte **)0x0) goto code_r0x00439b0d;
      pbVar37 = *ppbVar39;
      puVar29 = puStack_118;
code_r0x00439a3c:
      bVar3 = 0;
      (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_a8,puVar29);
    }
    else {
      uStack_134 = 0;
      uVar13 = _ZNK7android8String164sizeEv(&pbStack_130);
      ppbVar41 = ppbStack_128;
      uVar14 = _ZNK7android8String164sizeEv(&ppbStack_128);
      ppbStack_1a0 = ppbStack_180;
      uVar15 = _ZNK7android8String164sizeEv(&ppbStack_180);
      uVar13 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                         (param_1,pbVar37,uVar13,ppbVar41,uVar14,ppbStack_1a0,uVar15,&uStack_134);
      ppbVar39 = ppbStack_b0;
      uVar9 = (uint)uVar13;
      if (uVar9 == 0) {
        if (ppbStack_b0 != (byte **)0x0) {
          uVar9 = (**(code **)(*ppbStack_b0 + 0x18))
                            (ppbStack_b0,&ppbStack_180,&ppbStack_128,&pbStack_130);
          if (uVar9 == 0) {
code_r0x0043a06a:
            pbVar37 = *ppbVar39;
            puVar29 = &UNK_0016b1e7;
            goto code_r0x00439a3c;
          }
          if (uVar9 < 0x1000000) {
            *(uint *)((long)param_2 + 4) = uVar9;
            *(undefined1 *)((long)param_2 + 3) = 8;
            bVar3 = 1;
          }
          else {
            if ((uVar9 >> 0x18 != 0x7f) && (uVar9 >> 0x18 != 1)) goto code_r0x0043a06a;
            *(uint *)((long)param_2 + 4) = uVar9;
            bVar3 = 1;
          }
          goto code_r0x00439b10;
        }
      }
      else {
        if (((char)uStack_98 == '\0') || ((uStack_134 & 0x40000000) != 0)) {
          if (ppbStack_b0 != (byte **)0x0) {
            iVar10 = (**(code **)(*ppbStack_b0 + 0x28))
                               (ppbStack_b0,((uint)((ulong)uVar13 >> 0x18) & 0xff) - 1);
            uVar9 = (uVar9 & 0xffffff) + iVar10 * 0x1000000 + 0x1000000;
          }
          if ((uVar9 >> 0x18 != 1) && (uVar9 >> 0x18 != 0x7f)) {
            *(undefined1 *)((long)param_2 + 3) = 8;
          }
          *(uint *)((long)param_2 + 4) = uVar9;
          bVar3 = 1;
          goto code_r0x00439b10;
        }
        if (ppbStack_b0 != (byte **)0x0) {
          pbVar37 = *ppbStack_b0;
          puVar29 = &UNK_00189946;
          goto code_r0x00439a3c;
        }
      }
code_r0x00439b0d:
      bVar3 = 0;
    }
code_r0x00439b10:
    _ZN7android8String16D2Ev(&pbStack_130);
    _ZN7android8String16D2Ev(&ppbStack_128);
    _ZN7android8String16D2Ev(&ppbStack_180);
    ppbVar36 = ppbStack_1a0;
    ppbVar39 = ppbVar41;
  } while( true );
code_r0x00438a20:
  uVar6 = puVar40[-1];
  ppbVar39 = ppbStack_b0;
  ppbVar41 = ppbVar38;
  if (0x7f < (ulong)uVar6) goto code_r0x00438a7b;
  plVar11 = (long *)func_0x0099be00();
  ppbVar39 = ppbStack_b0;
  if ((*(byte *)(*plVar11 + 1 + (ulong)uVar6 * 2) & 0x20) == 0) {
    if (uVar6 == 0x5c) {
      ppbVar41 = (byte **)((long)ppbVar38 + (ulong)(*puVar40 != 0));
    }
    goto code_r0x00438a7b;
  }
  puVar40 = puVar40 + -1;
  ppbVar38 = (byte **)((long)ppbVar38 + -1);
  ppbVar41 = ppbStack_1a0;
  if (ppbVar38 == (byte **)0x0) goto code_r0x00438a7b;
  goto code_r0x00438a20;
}


