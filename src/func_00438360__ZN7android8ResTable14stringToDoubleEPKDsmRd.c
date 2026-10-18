// Function: _ZN7android8ResTable14stringToDoubleEPKDsmRd
// Address: 00438360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

uint _ZN7android8ResTable14stringToDoubleEPKDsmRd
               (byte **param_1,byte **param_2,byte *param_3,undefined8 param_4,byte **param_5,
               undefined8 param_6)

{
  byte **ppbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  sbyte sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  byte *extraout_RDX;
  byte *pbVar27;
  long extraout_RDX_00;
  undefined *puVar28;
  byte **ppbVar29;
  bool bVar30;
  byte *unaff_RBX;
  byte **ppbVar31;
  long lVar32;
  byte **ppbVar33;
  byte bVar34;
  bool bVar35;
  ulong unaff_R12;
  byte **unaff_R14;
  byte **ppbVar36;
  byte *pbVar37;
  byte **ppbVar38;
  byte **unaff_R15;
  byte **ppbVar39;
  ushort *puVar40;
  byte **ppbVar41;
  long in_FS_OFFSET;
  bool bVar42;
  bool bVar43;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar44;
  undefined4 extraout_XMM0_Db;
  byte extraout_XMM0_Bi;
  float fVar45;
  byte **ppbStack_268;
  byte **ppbStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint uStack_1fc;
  byte *pbStack_1f8;
  byte **ppbStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined *puStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  ulong uStack_1c8;
  byte bStack_198;
  uint uStack_190;
  byte *pbStack_188;
  undefined8 uStack_180;
  byte **ppbStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte **ppbStack_f8;
  byte *pbStack_f0;
  ulong uStack_e8;
  byte **ppbStack_e0;
  byte **ppbStack_d8;
  undefined *puStack_d0;
  byte *pbStack_c0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
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
    uStack_b0 = 0;
    unaff_R14 = param_2;
    unaff_R15 = param_1;
    do {
      unaff_R12 = (ulong)*(ushort *)unaff_R15;
      if (0x7f < unaff_R12) {
code_r0x0043841b:
        ppbVar36 = (byte **)0x0;
        goto code_r0x00438420;
      }
      puStack_d0 = &UNK_004383e2;
      plVar10 = (long *)func_0x0099be00();
      if ((*(byte *)(*plVar10 + 1 + unaff_R12 * 2) & 0x20) == 0) goto code_r0x0043841b;
      unaff_R15 = (byte **)((long)unaff_R15 + 2);
      unaff_R14 = (byte **)((long)unaff_R14 + -1);
      unaff_RBX = param_3;
    } while (unaff_R14 != (byte **)0x0);
  }
  param_3 = unaff_RBX;
  uVar8 = 0;
  goto code_r0x004383f8;
  while( true ) {
    *(char *)((long)&uStack_b8 + (long)ppbVar36) = (char)uVar5;
    ppbVar36 = (byte **)((long)ppbVar36 + 1);
    if (unaff_R14 == ppbVar36) break;
code_r0x00438420:
    uVar5 = *(ushort *)((long)unaff_R15 + (long)ppbVar36 * 2);
    uVar6 = uVar5 - 0x100 & 0xffff;
    param_2 = (byte **)(ulong)uVar6;
    uVar8 = 0;
    if ((uVar6 < 0xff01) || ((byte **)0x7d < ppbVar36)) goto code_r0x004383f8;
  }
  if ((byte)((byte)uStack_b8 - 0x3a) < 0xf6) {
    uVar8 = 0;
    if ((0x2e < (byte)uStack_b8) ||
       (param_2 = (byte **)0x680000000000,
       (0x680000000000U >> ((ulong)(uint)(byte)uStack_b8 & 0x3f) & 1) == 0)) goto code_r0x004383f8;
  }
  *(undefined1 *)((long)&uStack_b8 + (long)ppbVar36) = 0;
  param_1 = (byte **)&uStack_b8;
  param_2 = &pbStack_c0;
  puStack_d0 = &UNK_0043848f;
  func_0x0099c560();
  pbVar37 = pbStack_c0;
  *(ulong *)param_3 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  unaff_R14 = (byte **)(ulong)*pbStack_c0;
  if (*pbStack_c0 == 0) {
    uVar8 = 1;
    param_3 = pbStack_c0;
  }
  else {
    puStack_d0 = &UNK_004384a8;
    plVar10 = (long *)func_0x0099be00();
    param_3 = pbVar37 + 1;
    do {
      uVar5 = *(ushort *)(*plVar10 + (long)unaff_R14 * 2);
      uVar8 = (uVar5 & 0x2000) >> 0xd;
      if ((uVar5 & 0x2000) == 0) break;
      bVar2 = *param_3;
      unaff_R14 = (byte **)(ulong)bVar2;
      param_3 = param_3 + 1;
    } while (bVar2 != 0);
  }
code_r0x004383f8:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar8;
  }
  puStack_d0 = &UNK_004384e8;
  func_0x0099bd00();
  cVar4 = (char)param_6;
  puStack_d0 = &stack0xfffffffffffffff8;
  ppbStack_d8 = unaff_R15;
  ppbStack_e0 = unaff_R14;
  uStack_e8 = unaff_R12;
  pbStack_f0 = param_3;
  ppbStack_f8 = *(byte ***)(in_FS_OFFSET + 0x28);
  pbStack_188 = (byte *)0x0;
  if (param_2 != (byte **)0x0) {
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = (byte *)0x0;
    ppbStack_178 = (byte **)0x0;
    ppbVar36 = param_2;
    ppbVar39 = param_1;
    do {
      cVar4 = (char)param_6;
      unaff_R12 = (ulong)*(ushort *)ppbVar39;
      param_3 = extraout_RDX;
      if (0x7f < unaff_R12) {
code_r0x004385ab:
        ppbVar31 = (byte **)0x0;
        goto code_r0x004385b0;
      }
      plVar10 = (long *)func_0x0099be00();
      cVar4 = (char)param_6;
      if ((*(byte *)(*plVar10 + 1 + unaff_R12 * 2) & 0x20) == 0) goto code_r0x004385ab;
      ppbVar39 = (byte **)((long)ppbVar39 + 2);
      ppbVar36 = (byte **)((long)ppbVar36 + -1);
    } while (ppbVar36 != (byte **)0x0);
  }
code_r0x00438586:
  uVar8 = 0;
code_r0x00438588:
  ppbVar36 = *(byte ***)(in_FS_OFFSET + 0x28);
  if (ppbVar36 == ppbStack_f8) {
    return uVar8;
  }
  func_0x0099bd00();
  ppbVar39 = ppbStack_178;
  uStack_1c8 = unaff_R12;
  pbStack_1d0 = param_3;
  uVar8 = (uint)uStack_168;
  lStack_1d8 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppbStack_178 == (byte **)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*ppbStack_178 + 0x60))();
  }
  puStack_1e0 = (undefined *)0x0;
  *(ushort *)param_2 = 8;
  *(undefined1 *)((long)param_2 + 2) = 0;
  ppbVar31 = ppbVar36;
  ppbVar41 = param_5;
  if (cVar4 == '\0') {
    if (param_5 == (byte **)0x0) {
      ppbStack_268 = (byte **)0x0;
      ppbVar41 = ppbStack_268;
    }
    else {
      ppbVar38 = param_5;
      do {
        uVar5 = *(ushort *)ppbVar31;
        if ((0x7f < (ulong)uVar5) ||
           (plVar10 = (long *)func_0x0099be00(),
           (*(byte *)(*plVar10 + 1 + (ulong)uVar5 * 2) & 0x20) == 0)) {
          puVar40 = (ushort *)((long)ppbVar36 + (long)param_5 * 2);
          ppbStack_268 = (byte **)0x0;
          goto code_r0x00438a20;
        }
        ppbVar31 = (byte **)((long)ppbVar31 + 2);
        ppbVar38 = (byte **)((long)ppbVar38 + -1);
      } while (ppbVar38 != (byte **)0x0);
      ppbStack_268 = (byte **)0x0;
      ppbVar31 = (byte **)((long)ppbVar36 + (long)param_5 * 2);
      ppbVar39 = ppbStack_178;
      ppbVar41 = ppbStack_268;
    }
  }
code_r0x00438a7b:
  ppbStack_268 = ppbVar41;
  uStack_1e4 = 0x80000000;
  uStack_1e8 = 0x7fffffff;
  if ((uStack_190 == 0) || (0xffff < uStack_190 && (uStack_190 & 0xff0000) == 0)) {
    bVar35 = false;
    bVar30 = false;
  }
  else {
    ppbStack_248 = (byte **)0x0;
    if (*(char *)((long)param_1 + (ulong)(uStack_190 >> 0x18) + 0xe8) == '\0') {
code_r0x00438b7d:
      if (ppbVar39 == (byte **)0x0) {
        bVar35 = false;
        uVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*ppbVar39 + 0x30))(ppbVar39,uStack_190,&uStack_168);
        uVar6 = 0;
        uVar8 = 0;
        if (cVar3 == '\0') goto code_r0x00438bef;
        if ((((uint)uStack_168 == 4) || ((uint)uStack_168 == 0x20000)) ||
           ((uint)uStack_168 == 0x10000)) {
          (**(code **)(*ppbVar39 + 0x38))(ppbVar39,uStack_190,&uStack_1e4);
          (**(code **)(*ppbVar39 + 0x40))(ppbVar39,uStack_190,&uStack_1e8);
        }
        bVar35 = true;
        if (bVar2 != 0) {
          uVar6 = (**(code **)(*ppbVar39 + 0x58))(ppbVar39,uStack_190);
        }
      }
    }
    else {
      func_0x0099c500(param_1);
      uVar8 = 0;
      lVar21 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                         (param_1,uStack_190,&ppbStack_248,0);
      if (lVar21 < 0) {
        func_0x0099c510();
        goto code_r0x00438b7d;
      }
      if (lVar21 != 0) {
        lVar21 = lVar21 + 1;
        ppbVar36 = ppbStack_248 + 2;
        uVar8 = 0;
        do {
          switch(*(uint *)(ppbVar36 + -1)) {
          case 0x1000000:
            uStack_168 = CONCAT44(uStack_168._4_4_,*(uint *)ppbVar36);
            break;
          case 0x1000001:
            uStack_1e4 = *(uint *)ppbVar36;
            break;
          case 0x1000002:
            uStack_1e8 = *(uint *)ppbVar36;
            break;
          case 0x1000003:
            uVar8 = *(uint *)ppbVar36;
          }
          lVar21 = lVar21 + -1;
          ppbVar36 = ppbVar36 + 3;
        } while (1 < lVar21);
      }
      func_0x0099c510();
code_r0x00438bef:
      uVar6 = uVar8;
      bVar35 = false;
    }
    bVar30 = uVar6 == 1;
    uVar8 = (uint)uStack_168;
  }
  uVar5 = *(ushort *)ppbVar31;
  if (uVar5 == 0x40) {
    *(undefined1 *)((long)param_2 + 3) = 1;
    ppbVar36 = ppbStack_268;
    cVar4 = (char)uStack_160;
    if (ppbStack_268 != (byte **)0x6) {
      if (ppbStack_268 != (byte **)0x5) {
        if (ppbStack_268 < (byte **)0x3) goto code_r0x00438d95;
        uVar5 = *(ushort *)((long)ppbVar31 + 2);
code_r0x00438d65:
        iVar9 = -2;
        lVar21 = 4;
        if (uVar5 == 0x2b) {
          uVar23 = 1;
        }
        else {
          if (uVar5 != 0x2a) goto code_r0x00438d95;
          uVar23 = 0;
          cVar4 = '\0';
        }
        goto code_r0x00438dc1;
      }
      uVar5 = *(ushort *)((long)ppbVar31 + 2);
      if (uVar5 != 0x6e) goto code_r0x00438d65;
      if (((*(ushort *)((long)ppbVar31 + 4) != 0x75) || (*(ushort *)((long)ppbVar31 + 6) != 0x6c))
         || (*(ushort *)(ppbVar31 + 1) != 0x6c)) goto code_r0x00438d95;
code_r0x00438c74:
      *(uint *)((long)param_2 + 4) = 0;
      uVar8 = 1;
      goto code_r0x0043a0f4;
    }
    uVar5 = *(ushort *)((long)ppbVar31 + 2);
    if (uVar5 != 0x65) goto code_r0x00438d65;
    if (((*(ushort *)((long)ppbVar31 + 4) == 0x6d) && (*(ushort *)((long)ppbVar31 + 6) == 0x70)) &&
       ((*(ushort *)(ppbVar31 + 1) == 0x74 && (*(ushort *)((long)ppbVar31 + 10) == 0x79)))) {
      *(undefined1 *)((long)param_2 + 3) = 0;
      *(uint *)((long)param_2 + 4) = 1;
      uVar8 = 1;
      goto code_r0x0043a0f4;
    }
code_r0x00438d95:
    iVar9 = -1;
    lVar21 = 2;
    uVar23 = 0;
code_r0x00438dc1:
    ppbStack_248 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_248);
    ppbStack_1f0 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_1f0);
    pbStack_1f8 = (byte *)0x0;
    ppbVar41 = &pbStack_1f8;
    _ZN7android8String16C2Ev(ppbVar41);
    cVar3 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((long)ppbVar31 + lVar21,(long)((int)ppbStack_268 + iVar9),&ppbStack_248,
                       &ppbStack_1f0,ppbVar41,pbStack_188,uStack_180,&puStack_1e0,0);
    pbVar37 = pbStack_1f8;
    if (cVar3 == '\0') {
      ppbVar39 = ppbStack_178;
      if (ppbStack_178 == (byte **)0x0) {
code_r0x00438f5f:
        bVar34 = 1;
        bVar2 = 0;
      }
      else {
        pbVar37 = *ppbStack_178;
        puVar28 = puStack_1e0;
code_r0x00438f4c:
        bVar34 = 1;
        bVar2 = 0;
        (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_170,puVar28);
      }
    }
    else {
      uStack_1fc = 0;
      uVar12 = _ZNK7android8String164sizeEv(&pbStack_1f8);
      ppbVar41 = ppbStack_1f0;
      uVar13 = _ZNK7android8String164sizeEv(&ppbStack_1f0);
      ppbVar36 = ppbStack_248;
      uVar14 = _ZNK7android8String164sizeEv(&ppbStack_248);
      uVar8 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                        (param_1,pbVar37,uVar12,ppbVar41,uVar13,ppbVar36,uVar14,&uStack_1fc);
      ppbVar39 = ppbStack_178;
      if (uVar8 == 0) {
        bVar2 = 1;
        if ((ppbStack_178 == (byte **)0x0) ||
           (uVar8 = (**(code **)(*ppbStack_178 + 0x20))
                              (ppbStack_178,&ppbStack_248,&ppbStack_1f0,&pbStack_1f8,uVar23),
           uVar8 == 0)) {
code_r0x0043911a:
          bVar34 = 0;
          goto code_r0x0043911d;
        }
        if (uVar8 < 0x1000000) {
          *(uint *)((long)param_2 + 4) = uVar8;
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        else {
          if ((uVar8 >> 0x18 != 0x7f) && (uVar8 >> 0x18 != 1)) goto code_r0x0043911a;
          *(uint *)((long)param_2 + 4) = uVar8;
        }
      }
      else {
        if (cVar4 == '\0') {
code_r0x00438f66:
          if (ppbVar39 != (byte **)0x0) goto code_r0x00438f6b;
        }
        else {
          if (ppbStack_178 == (byte **)0x0) {
code_r0x00438f1d:
            if ((uStack_1fc & 0x40000000) == 0) {
              if (ppbVar39 == (byte **)0x0) goto code_r0x00438f5f;
              pbVar37 = *ppbVar39;
              puVar28 = &UNK_0015fe9b;
              goto code_r0x00438f4c;
            }
            goto code_r0x00438f66;
          }
          puVar11 = (undefined8 *)(**(code **)(*ppbStack_178 + 0x10))(ppbStack_178);
          ppbVar41 = (byte **)*puVar11;
          if (ppbVar41 != ppbStack_248) {
            uVar12 = _ZNK7android8String164sizeEv(puVar11);
            ppbVar36 = ppbStack_248;
            uVar13 = _ZNK7android8String164sizeEv(&ppbStack_248);
            iVar9 = strzcmp16(ppbVar41,uVar12,ppbVar36,uVar13);
            if (iVar9 != 0) goto code_r0x00438f1d;
          }
code_r0x00438f6b:
          iVar9 = (**(code **)(*ppbVar39 + 0x28))(ppbVar39,(uVar8 >> 0x18) - 1);
          uVar8 = (uVar8 & 0xffffff) + iVar9 * 0x1000000 + 0x1000000;
        }
        if ((uVar8 >> 0x18 != 1) && (uVar8 >> 0x18 != 0x7f)) {
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        *(uint *)((long)param_2 + 4) = uVar8;
      }
      bVar34 = 1;
      bVar2 = 1;
    }
code_r0x0043911d:
    _ZN7android8String16D2Ev(&pbStack_1f8);
    _ZN7android8String16D2Ev(&ppbStack_1f0);
    _ZN7android8String16D2Ev(&ppbStack_248);
    ppbVar36 = ppbVar39;
    if (ppbVar39 == (byte **)0x0 || bVar34 != 0) {
      uVar8 = (uint)(bVar34 & bVar2);
      ppbVar39 = ppbVar41;
      goto code_r0x0043a0f4;
    }
    pbVar37 = *ppbVar39;
    uVar8 = 0;
    puVar28 = &UNK_0016b1e7;
  }
  else {
    uVar8 = (uVar8 & 2) >> 1;
    ppbVar36 = (byte **)(ulong)uVar8;
    if ((ppbVar39 != (byte **)0x0) && ((bVar2 & bVar30) != 0)) {
      (**(code **)(*ppbVar39 + 0x68))(ppbVar39,uStack_170,&UNK_00184ce4);
      uVar5 = *(ushort *)ppbVar31;
    }
    bVar30 = (bool)(bStack_198 & (byte)uVar8);
    ppbVar41 = ppbVar39;
    if (uVar5 == 0x23) {
      switch(ppbStack_268) {
      case (byte **)0x4:
        *(undefined1 *)((long)param_2 + 3) = 0x1f;
        cVar3 = *(char *)((long)ppbVar31 + 2);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar9 * 0x100000 + -0x3000000;
          iVar16 = iVar9 + -0x30;
          bVar43 = false;
        }
        else {
          bVar43 = (byte)(cVar3 + 0x99U) < 0xfa;
          if (bVar43) {
            bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
            if (bVar42) {
              iVar24 = 0;
              if ((byte)(cVar3 + 0x9fU) < 6) {
                iVar16 = iVar9 + -0x57;
              }
              else {
                iVar24 = 0;
                iVar16 = 0;
                bVar43 = true;
                if ((byte)(cVar3 + 0xbfU) < 6) goto code_r0x0043957b;
              }
            }
            else {
              iVar24 = iVar9 * 0x100000 + -0x3700000;
code_r0x0043957b:
              iVar16 = iVar9 + -0x37;
              bVar43 = bVar42;
            }
          }
          else {
            iVar24 = iVar9 * 0x100000 + -0x5700000;
            iVar16 = iVar9 + -0x57;
          }
        }
        iVar24 = iVar16 * 0x10000 + iVar24;
        cVar3 = *(char *)((long)ppbVar31 + 4);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x30000;
          iVar9 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x57000;
          iVar9 = iVar9 + -0x57;
        }
        else if ((byte)(cVar3 + 0xbfU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x37000;
          iVar9 = iVar9 + -0x37;
        }
        else {
          iVar9 = 0;
          bVar43 = true;
        }
        iVar24 = iVar9 * 0x100 + iVar24;
        cVar3 = *(char *)((long)ppbVar31 + 6);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          if (bVar43) break;
          uVar6 = iVar9 * 0x10 + iVar24 + 0xfffd00;
          uVar8 = iVar9 + 0xffffd0;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          if (bVar43) break;
          uVar6 = iVar9 * 0x10 + iVar24 + 0xfffa90;
          uVar8 = iVar9 + 0xffffa9;
        }
        else {
          if (5 < (byte)(cVar3 + 0xbfU)) goto code_r0x004397f1;
          if (bVar43) break;
          uVar6 = iVar9 * 0x10 + iVar24 + 0xfffc90;
          uVar8 = iVar9 + 0xffffc9;
        }
        uVar8 = uVar8 | uVar6;
joined_r0x0043931f:
        uVar8 = uVar8 | 0xff000000;
joined_r0x004392e5:
        if ((uStack_168 & 0x10) != 0) {
          *(uint *)((long)param_2 + 4) = uVar8;
          uVar8 = 1;
          goto code_r0x0043a0f4;
        }
        bVar43 = bVar30;
        if (ppbVar39 == (byte **)0x0 || bVar30 != false) goto code_r0x00439808;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_0016318d;
        goto code_r0x00439a12;
      case (byte **)0x5:
        *(undefined1 *)((long)param_2 + 3) = 0x1e;
        cVar3 = *(char *)((long)ppbVar31 + 2);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar9 << 0x1c;
          iVar16 = iVar9 + -0x30;
          bVar43 = false;
        }
        else {
          bVar43 = (byte)(cVar3 + 0x99U) < 0xfa;
          if (bVar43) {
            bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
            if (bVar42) {
              iVar24 = 0;
              if ((byte)(cVar3 + 0x9fU) < 6) {
                iVar16 = iVar9 + -0x57;
              }
              else {
                iVar24 = 0;
                iVar16 = 0;
                bVar43 = true;
                if ((byte)(cVar3 + 0xbfU) < 6) goto code_r0x00439693;
              }
            }
            else {
              iVar24 = iVar9 * 0x10000000 + -0x70000000;
code_r0x00439693:
              iVar16 = iVar9 + -0x37;
              bVar43 = bVar42;
            }
          }
          else {
            iVar24 = iVar9 * 0x10000000 + -0x70000000;
            iVar16 = iVar9 + -0x57;
          }
        }
        iVar24 = iVar16 * 0x1000000 + iVar24;
        cVar3 = *(char *)((long)ppbVar31 + 4);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar24 + iVar9 * 0x100000 + -0x3000000;
          iVar9 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x100000 + -0x5700000;
          iVar9 = iVar9 + -0x57;
        }
        else if ((byte)(cVar3 + 0xbfU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x100000 + -0x3700000;
          iVar9 = iVar9 + -0x37;
        }
        else {
          iVar9 = 0;
          bVar43 = true;
        }
        iVar24 = iVar9 * 0x10000 + iVar24;
        cVar3 = *(char *)((long)ppbVar31 + 6);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x30000;
          iVar9 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x57000;
          iVar9 = iVar9 + -0x57;
        }
        else if ((byte)(cVar3 + 0xbfU) < 6) {
          iVar24 = iVar24 + iVar9 * 0x1000 + -0x37000;
          iVar9 = iVar9 + -0x37;
        }
        else {
          iVar9 = 0;
          bVar43 = true;
        }
        uVar6 = iVar9 * 0x100 + iVar24;
        cVar3 = *(char *)(ppbVar31 + 1);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          if (!bVar43) {
            uVar8 = iVar9 * 0x11 - 0x330;
code_r0x004397cb:
            uVar8 = uVar8 | uVar6;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          if (!bVar43) {
            uVar7 = iVar9 * 0x10 - 0x570;
            uVar8 = iVar9 - 0x57;
code_r0x004397c9:
            uVar8 = uVar8 | uVar7;
            goto code_r0x004397cb;
          }
        }
        else {
          if (5 < (byte)(cVar3 + 0xbfU)) goto code_r0x004397f1;
          if (!bVar43) {
            uVar7 = iVar9 * 0x10 - 0x370;
            uVar8 = iVar9 - 0x37;
            goto code_r0x004397c9;
          }
        }
        break;
      default:
code_r0x004397f1:
        break;
      case (byte **)0x7:
        *(undefined1 *)((long)param_2 + 3) = 0x1d;
        cVar3 = *(char *)((long)ppbVar31 + 2);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          bVar43 = false;
          iVar16 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          bVar43 = false;
          iVar16 = iVar9 + -0x57;
        }
        else {
          bVar43 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar16 = 0;
          if (!bVar43) {
            iVar16 = iVar9 + -0x37;
          }
        }
        cVar3 = *(char *)((long)ppbVar31 + 4);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar24 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar24 = 0;
          if (!bVar42) {
            iVar24 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 6);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar17 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar17 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar17 = 0;
          if (!bVar42) {
            iVar17 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)(ppbVar31 + 1);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar25 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar25 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar42) {
            iVar25 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 10);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar18 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar18 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar42) {
            iVar18 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        uVar8 = iVar18 * 0x10 +
                iVar25 * 0x100 + iVar17 * 0x1000 + iVar24 * 0x10000 + iVar16 * 0x100000;
        cVar3 = *(char *)((long)ppbVar31 + 0xc);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          if (!bVar43) {
            uVar8 = iVar9 + 0xffffd0U | uVar8 | 0xff000000;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          if (!bVar43) {
            uVar8 = iVar9 + uVar8 + 0xffffa9 | 0xff000000;
            goto joined_r0x004392e5;
          }
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar16 = 0;
          if (!bVar42) {
            iVar16 = iVar9 + 0xffffc9;
          }
          if (!(bool)(bVar42 | bVar43)) {
            uVar8 = iVar16 + uVar8;
            goto joined_r0x0043931f;
          }
        }
        break;
      case (byte **)0x9:
        *(undefined1 *)((long)param_2 + 3) = 0x1c;
        cVar3 = *(char *)((long)ppbVar31 + 2);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          bVar43 = false;
          iVar16 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          bVar43 = false;
          iVar16 = iVar9 + -0x57;
        }
        else {
          bVar43 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar16 = 0;
          if (!bVar43) {
            iVar16 = iVar9 + -0x37;
          }
        }
        cVar3 = *(char *)((long)ppbVar31 + 4);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar24 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar24 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar24 = 0;
          if (!bVar42) {
            iVar24 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 6);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar17 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar17 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar17 = 0;
          if (!bVar42) {
            iVar17 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)(ppbVar31 + 1);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar25 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar25 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar42) {
            iVar25 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 10);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar18 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar18 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar42) {
            iVar18 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 0xc);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar26 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar26 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar26 = 0;
          if (!bVar42) {
            iVar26 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        cVar3 = *(char *)((long)ppbVar31 + 0xe);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          iVar19 = iVar9 + -0x30;
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          iVar19 = iVar9 + -0x57;
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          iVar19 = 0;
          if (!bVar42) {
            iVar19 = iVar9 + -0x37;
          }
          bVar43 = (bool)(bVar42 | bVar43);
        }
        uVar8 = iVar19 << 4 |
                iVar26 * 0x100 +
                iVar18 * 0x1000 +
                iVar25 * 0x10000 + iVar17 * 0x100000 + iVar24 * 0x1000000 + iVar16 * 0x10000000;
        cVar3 = *(char *)(ppbVar31 + 2);
        iVar9 = (int)cVar3;
        if ((byte)(cVar3 - 0x30U) < 10) {
          if (!bVar43) {
            uVar6 = iVar9 - 0x30;
            goto code_r0x004397cb;
          }
        }
        else if ((byte)(cVar3 + 0x9fU) < 6) {
          if (!bVar43) {
            uVar6 = iVar9 - 0x57;
            goto code_r0x004397cb;
          }
        }
        else {
          bVar42 = (byte)(cVar3 + 0xb9U) < 0xfa;
          uVar6 = 0;
          if (!bVar42) {
            uVar6 = iVar9 - 0x37;
          }
          if (!(bool)(bVar42 | bVar43)) {
            uVar8 = uVar8 | uVar6;
            goto joined_r0x004392e5;
          }
        }
      }
      bVar43 = (uStack_168 & 0x10) == 0;
      if (ppbVar39 != (byte **)0x0 && !bVar43) {
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_00164825;
        goto code_r0x00439a12;
      }
code_r0x00439808:
      if (bVar43 != false) {
        uVar5 = *(ushort *)ppbVar31;
        goto code_r0x0043981a;
      }
code_r0x0043a0f1:
      uVar8 = 0;
      goto code_r0x0043a0f4;
    }
code_r0x0043981a:
    if (uVar5 == 0x3f) {
      *(undefined1 *)((long)param_2 + 3) = 2;
      if (cRam0000000000a008e0 == '\0') goto code_r0x0043a127;
      goto code_r0x0043983b;
    }
    cVar3 = _ZN7android14U16StringToIntEPKDsmPNS_9Res_valueE(ppbVar31,ppbStack_268,param_2);
    if (cVar3 == '\0') {
code_r0x004399a0:
      cVar3 = _ZN7android8ResTable13stringToFloatEPKDsmPNS_9Res_valueE
                        (ppbVar31,ppbStack_268,param_2);
      ppbVar36 = (byte **)(ulong)uStack_190;
      uVar6 = (uint)uStack_168;
      if (cVar3 == '\0') {
code_r0x00439b97:
        if (ppbStack_268 == (byte **)0x5) {
          if (((((*(ushort *)ppbVar31 | 0x20) == 0x66) &&
               ((*(ushort *)((long)ppbVar31 + 2) | 0x20) == 0x61)) &&
              ((*(ushort *)((long)ppbVar31 + 4) | 0x20) == 0x6c)) &&
             (((*(ushort *)((long)ppbVar31 + 6) | 0x20) == 0x73 &&
              ((*(ushort *)(ppbVar31 + 1) | 0x20) == 0x65)))) {
            if ((uStack_168 & 8) != 0) {
              *(undefined1 *)((long)param_2 + 3) = 0x12;
              goto code_r0x00438c74;
            }
            goto joined_r0x00439c90;
          }
        }
        else if (((ppbStack_268 == (byte **)0x4) && ((*(ushort *)ppbVar31 | 0x20) == 0x74)) &&
                (((*(ushort *)((long)ppbVar31 + 2) | 0x20) == 0x72 &&
                 (((*(ushort *)((long)ppbVar31 + 4) | 0x20) == 0x75 &&
                  ((*(ushort *)((long)ppbVar31 + 6) | 0x20) == 0x65)))))) {
          if ((uStack_168 & 8) != 0) {
            *(undefined1 *)((long)param_2 + 3) = 0x12;
            *(uint *)((long)param_2 + 4) = 0xffffffff;
            uVar8 = 1;
            goto code_r0x0043a0f4;
          }
joined_r0x00439c90:
          if (bVar30 == false) {
            if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
            pbVar37 = *ppbVar39;
            puVar28 = &UNK_001773fd;
            goto code_r0x00439a12;
          }
        }
        uStack_168._0_4_ = uVar6;
        if ((uStack_168 & 0x10000) == 0) {
code_r0x00439e1f:
          ppbVar36 = (byte **)(ulong)uStack_190;
          uVar8 = (uint)uStack_168;
          if (((uint)uStack_168 & 0x20000) == 0) {
code_r0x00439fea:
            ppbVar36 = (byte **)(ulong)uStack_190;
            if ((uVar8 & 2) == 0) {
              if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
              pbVar37 = *ppbVar39;
              puVar28 = &UNK_001726a5;
              goto code_r0x00439a12;
            }
            *(undefined1 *)((long)param_2 + 3) = 3;
            if (extraout_RDX_00 != 0) {
              uVar8 = _ZN7android8ResTable13collectStringEPNS_8String16EPKDsmbPPKcb
                                (extraout_RDX_00,ppbVar31,ppbStack_268,cVar4,&puStack_1e0,0);
              if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f4;
              pbVar37 = *ppbVar39;
              puVar28 = puStack_1e0;
              goto code_r0x00439a18;
            }
          }
          else {
            ppbStack_1f0 = (byte **)0x0;
            if ((*(char *)((long)param_1 + (ulong)(uStack_190 >> 0x18) + 0xe8) == '\0') ||
               (lVar21 = _ZNK7android8ResTable7lockBagEjPPKNS0_9bag_entryE
                                   (param_1,ppbVar36,&ppbStack_1f0), lVar21 < 0)) {
code_r0x00439fbf:
              ppbVar36 = (byte **)(ulong)uStack_190;
              if ((!bVar35) ||
                 (cVar3 = (**(code **)(*ppbVar39 + 0x50))
                                    (ppbVar39,ppbVar36,ppbVar31,ppbStack_268,param_2), cVar3 == '\0'
                 )) {
                uVar8 = (uint)uStack_168;
                goto code_r0x00439fea;
              }
            }
            else {
              uStack_218 = 0;
              uStack_210 = 0;
              uStack_228 = 0;
              uStack_220 = 0;
              uStack_238 = 0;
              uStack_230 = 0;
              ppbStack_248 = (byte **)0x0;
              uStack_240 = 0;
              *(undefined1 *)((long)param_2 + 3) = 0x11;
              *(uint *)((long)param_2 + 4) = 0;
              if (ppbStack_268 != (byte **)0x0) {
                ppbVar38 = (byte **)((long)ppbVar31 + (long)ppbStack_268 * 2);
                ppbVar33 = ppbVar31;
                do {
                  lVar32 = 2;
                  ppbVar29 = ppbVar33;
                  do {
                    ppbVar1 = ppbVar29;
                    lVar22 = lVar32;
                    ppbVar29 = (byte **)((long)ppbVar1 + 2);
                    if (ppbVar38 <= ppbVar29) break;
                    lVar32 = lVar22 + 2;
                  } while (*(ushort *)ppbVar29 != 0x7c);
                  if (lVar21 == 0) {
code_r0x00439f9a:
                    func_0x0099c510(param_1);
                    goto code_r0x00439fbf;
                  }
                  ppbVar36 = ppbStack_1f0 + 2;
                  lVar32 = lVar21;
                  while (((uVar8 = *(uint *)(ppbVar36 + -1),
                          0xffff < uVar8 && (uVar8 & 0xff0000) == 0 ||
                          (cVar3 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                             (param_1,uVar8,0,&ppbStack_248), cVar3 == '\0')) ||
                         (iVar9 = strzcmp16(ppbVar33,lVar22 >> 1,uStack_220,uStack_210), iVar9 != 0)
                         )) {
                    ppbVar36 = ppbVar36 + 3;
                    lVar32 = lVar32 + -1;
                    if (lVar32 == 0) goto code_r0x00439f9a;
                  }
                  *(uint *)((long)param_2 + 4) = *(uint *)((long)param_2 + 4) | *(uint *)ppbVar36;
                  ppbVar33 = (byte **)((long)ppbVar1 + 4);
                  if (ppbVar38 <= ppbVar29) {
                    ppbVar33 = ppbVar29;
                  }
                } while (ppbVar33 < ppbVar38);
              }
              func_0x0099c510(param_1);
            }
          }
        }
        else {
          ppbStack_1f0 = (byte **)0x0;
          if (*(char *)((long)param_1 + (ulong)(uStack_190 >> 0x18) + 0xe8) != '\0') {
            func_0x0099c500(param_1);
            lVar21 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                               (param_1,uStack_190,&ppbStack_1f0,0);
            if (lVar21 < 0) {
              func_0x0099c510(param_1);
            }
            else {
              uStack_218 = 0;
              uStack_210 = 0;
              uStack_228 = 0;
              uStack_220 = 0;
              uStack_238 = 0;
              uStack_230 = 0;
              ppbStack_248 = (byte **)0x0;
              uStack_240 = 0;
              if (lVar21 != 0) {
                do {
                  ppbVar36 = ppbStack_1f0;
                  uVar8 = *(uint *)(ppbStack_1f0 + 1);
                  if (((uVar8 < 0x10000 || (uVar8 & 0xff0000) != 0) &&
                      (cVar3 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                         (param_1,uVar8,0,&ppbStack_248), cVar3 != '\0')) &&
                     (iVar9 = strzcmp16(ppbVar31,ppbStack_268,uStack_220,uStack_210),
                     ppbVar36 = ppbStack_1f0, iVar9 == 0)) {
                    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)ppbStack_1f0 + 0xf);
                    *(uint *)((long)param_2 + 4) = *(uint *)(ppbStack_1f0 + 2);
                    func_0x0099c510(param_1);
                    uVar8 = 1;
                    ppbVar36 = param_2;
                    goto code_r0x0043a0f4;
                  }
                  ppbStack_1f0 = ppbVar36 + 3;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              func_0x0099c510(param_1);
            }
          }
          ppbVar36 = (byte **)(ulong)uStack_190;
          if ((!bVar35) ||
             (cVar3 = (**(code **)(*ppbVar39 + 0x48))
                                (ppbVar39,ppbVar36,ppbVar31,ppbStack_268,param_2), cVar3 == '\0')) {
            goto code_r0x00439e1f;
          }
        }
        uVar8 = 1;
        goto code_r0x0043a0f4;
      }
      uVar8 = 1;
      if (*(char *)((long)param_2 + 3) == '\x06') {
        if ((char)uStack_168 < '\0') goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_0015e412;
      }
      else if (*(char *)((long)param_2 + 3) == '\x05') {
        if ((uStack_168 & 0x40) != 0) goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_00180663;
      }
      else {
        if ((uStack_168 & 0x20) != 0) goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_0017bd71;
      }
    }
    else {
      ppbVar36 = ppbVar31;
      if ((uStack_168 & 4) == 0) {
        if ((char)(((uint)uStack_168 & 0x20) >> 5) != '\0' || bVar30 != false)
        goto code_r0x004399a0;
        if (ppbVar39 == (byte **)0x0) goto code_r0x0043a0f1;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_0017594b;
      }
      else {
        bVar35 = (int)*(uint *)((long)param_2 + 4) <= (int)uStack_1e8 &&
                 (int)uStack_1e4 <= (int)*(uint *)((long)param_2 + 4);
        uVar8 = (uint)bVar35;
        if (ppbVar39 == (byte **)0x0 || bVar35) goto code_r0x0043a0f4;
        pbVar37 = *ppbVar39;
        puVar28 = &UNK_0017424d;
      }
    }
code_r0x00439a12:
    uVar8 = 0;
  }
code_r0x00439a18:
  (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_170,puVar28);
  ppbVar39 = ppbVar41;
code_r0x0043a0f4:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1d8) {
      return uVar8;
    }
    func_0x0099bd00();
    ppbStack_268 = ppbVar36;
code_r0x0043a127:
    iVar9 = __cxa_guard_acquire(0xa008e0);
    if (iVar9 != 0) {
      _ZN7android8String16C2EPKc(0xa008d8,&UNK_0015b517);
      func_0x0099c580(_ZN7android8String16D2Ev,0xa008d8,&DAT_009c55b8);
      __cxa_guard_release(0xa008e0);
    }
code_r0x0043983b:
    ppbStack_248 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_248);
    ppbStack_1f0 = (byte **)0x0;
    _ZN7android8String16C2Ev(&ppbStack_1f0);
    pbStack_1f8 = (byte *)0x0;
    _ZN7android8String16C2Ev(&pbStack_1f8);
    cVar4 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((ushort *)((long)ppbVar31 + 2),(long)ppbStack_268 + -1,&ppbStack_248,
                       &ppbStack_1f0,&pbStack_1f8,0xa008d8,uStack_180,&puStack_1e0,0);
    pbVar37 = pbStack_1f8;
    if (cVar4 == '\0') {
      ppbVar41 = ppbVar39;
      if (ppbVar39 == (byte **)0x0) goto code_r0x00439b0d;
      pbVar37 = *ppbVar39;
      puVar28 = puStack_1e0;
code_r0x00439a3c:
      uVar8 = 0;
      (**(code **)(pbVar37 + 0x68))(ppbVar39,uStack_170,puVar28);
    }
    else {
      uStack_1fc = 0;
      uVar12 = _ZNK7android8String164sizeEv(&pbStack_1f8);
      ppbVar41 = ppbStack_1f0;
      uVar13 = _ZNK7android8String164sizeEv(&ppbStack_1f0);
      ppbStack_268 = ppbStack_248;
      uVar14 = _ZNK7android8String164sizeEv(&ppbStack_248);
      uVar12 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                         (param_1,pbVar37,uVar12,ppbVar41,uVar13,ppbStack_268,uVar14,&uStack_1fc);
      ppbVar39 = ppbStack_178;
      uVar8 = (uint)uVar12;
      if (uVar8 == 0) {
        if (ppbStack_178 != (byte **)0x0) {
          uVar8 = (**(code **)(*ppbStack_178 + 0x18))
                            (ppbStack_178,&ppbStack_248,&ppbStack_1f0,&pbStack_1f8);
          if (uVar8 == 0) {
code_r0x0043a06a:
            pbVar37 = *ppbVar39;
            puVar28 = &UNK_0016b1e7;
            goto code_r0x00439a3c;
          }
          if (uVar8 < 0x1000000) {
            *(uint *)((long)param_2 + 4) = uVar8;
            *(undefined1 *)((long)param_2 + 3) = 8;
            uVar8 = 1;
          }
          else {
            if ((uVar8 >> 0x18 != 0x7f) && (uVar8 >> 0x18 != 1)) goto code_r0x0043a06a;
            *(uint *)((long)param_2 + 4) = uVar8;
            uVar8 = 1;
          }
          goto code_r0x00439b10;
        }
      }
      else {
        if (((char)uStack_160 == '\0') || ((uStack_1fc & 0x40000000) != 0)) {
          if (ppbStack_178 != (byte **)0x0) {
            iVar9 = (**(code **)(*ppbStack_178 + 0x28))
                              (ppbStack_178,((uint)((ulong)uVar12 >> 0x18) & 0xff) - 1);
            uVar8 = (uVar8 & 0xffffff) + iVar9 * 0x1000000 + 0x1000000;
          }
          if ((uVar8 >> 0x18 != 1) && (uVar8 >> 0x18 != 0x7f)) {
            *(undefined1 *)((long)param_2 + 3) = 8;
          }
          *(uint *)((long)param_2 + 4) = uVar8;
          uVar8 = 1;
          goto code_r0x00439b10;
        }
        if (ppbStack_178 != (byte **)0x0) {
          pbVar37 = *ppbStack_178;
          puVar28 = &UNK_00189946;
          goto code_r0x00439a3c;
        }
      }
code_r0x00439b0d:
      uVar8 = 0;
    }
code_r0x00439b10:
    _ZN7android8String16D2Ev(&pbStack_1f8);
    _ZN7android8String16D2Ev(&ppbStack_1f0);
    _ZN7android8String16D2Ev(&ppbStack_248);
    ppbVar36 = ppbStack_268;
    ppbVar39 = ppbVar41;
  } while( true );
  while( true ) {
    *(char *)((long)&uStack_180 + (long)ppbVar31) = (char)uVar5;
    ppbVar31 = (byte **)((long)ppbVar31 + 1);
    if (ppbVar36 == ppbVar31) break;
code_r0x004385b0:
    uVar5 = *(ushort *)((long)ppbVar39 + (long)ppbVar31 * 2);
    uVar6 = uVar5 - 0x100 & 0xffff;
    param_2 = (byte **)(ulong)uVar6;
    uVar8 = 0;
    if ((uVar6 < 0xff01) || ((byte **)0x7d < ppbVar31)) goto code_r0x00438588;
  }
  if ((byte)((byte)uStack_180 - 0x3a) < 0xf6) {
    uVar8 = 0;
    if (((byte)uStack_180 < 0x2f) &&
       (param_2 = (byte **)0x680000000000,
       (0x680000000000U >> ((ulong)(uint)(byte)uStack_180 & 0x3f) & 1) != 0)) goto code_r0x00438604;
  }
  else {
code_r0x00438604:
    *(undefined1 *)((long)&uStack_180 + (long)ppbVar31) = 0;
    param_1 = (byte **)&uStack_180;
    param_2 = &pbStack_188;
    func_0x0099c570();
    pbVar37 = pbStack_188;
    bVar2 = *pbStack_188;
    ppbVar36 = (byte **)(ulong)bVar2;
    if (ppbVar36 != (byte **)0x0) {
      plVar10 = (long *)func_0x0099be00();
      lVar21 = *plVar10;
      bStack_198 = extraout_XMM0_Bi;
      if ((*(byte *)(lVar21 + 1 + (long)ppbVar36 * 2) & 0x20) == 0) {
        lVar32 = 0;
        do {
          param_1 = ppbVar36;
          if ((*(byte *)(lVar21 + 1 + (long)param_1 * 2) & 0x20) != 0) {
            pbVar27 = pbVar37 + lVar32 + 1;
            param_2 = param_1;
            goto code_r0x004386d0;
          }
          lVar22 = lVar32 + 1;
          param_2 = (byte **)(ulong)pbVar37[lVar22];
          lVar32 = lVar32 + 1;
          ppbVar36 = param_2;
        } while (pbVar37[lVar22] != 0);
        goto code_r0x004386ea;
      }
      plVar10 = (long *)func_0x0099be00();
      do {
        pbVar37 = pbVar37 + 1;
        if ((*(byte *)(*plVar10 + 1 + (long)ppbVar36 * 2) & 0x20) == 0) goto code_r0x00438586;
        ppbVar36 = (byte **)(ulong)*pbVar37;
      } while (*pbVar37 != 0);
    }
    if (extraout_RDX == (byte *)0x0) goto code_r0x00438586;
    extraout_RDX[3] = 4;
    *(float *)(extraout_RDX + 4) = extraout_XMM0_Da_00;
code_r0x004388f5:
    uVar8 = 1;
  }
  goto code_r0x00438588;
  while( true ) {
    bVar34 = *pbVar27;
    param_2 = (byte **)(ulong)bVar34;
    pbVar27 = pbVar27 + 1;
    if (bVar34 == 0) break;
code_r0x004386d0:
    if ((*(byte *)(lVar21 + 1 + (long)param_2 * 2) & 0x20) == 0) goto code_r0x00438586;
  }
code_r0x004386ea:
  if (lVar32 == 1) {
    if (bVar2 == 0x25) {
      puVar28 = &UNK_0099f970;
      goto code_r0x00438836;
    }
  }
  else {
    uVar8 = (uint)bVar2;
    if (lVar32 == 2) {
      if (bVar2 == 100) {
        iVar9 = 1;
        if (pbVar37[1] != 0x70) goto code_r0x004387c1;
        puVar28 = &UNK_0099f8d0;
      }
      else if (uVar8 == 0x70) {
        if (pbVar37[1] == 0x78) {
          puVar28 = &UNK_0099f890;
        }
        else {
          iVar9 = 0x74 - (uint)pbVar37[1];
code_r0x004387c1:
          if (iVar9 == 0) {
            puVar28 = &UNK_0099f910;
          }
          else {
            if (uVar8 != 0x6d) {
              if (uVar8 == 0x69) {
                if (pbVar37[1] == 0x6e) {
                  puVar28 = &UNK_0099f930;
                  goto code_r0x00438836;
                }
              }
              else {
                if (bVar2 == 0x25) {
                  iVar9 = 0x70 - (uint)pbVar37[1];
                }
                else {
                  iVar9 = 0x25 - uVar8;
                }
                if (iVar9 == 0) {
                  puVar28 = &UNK_0099f990;
                  goto code_r0x00438836;
                }
              }
              goto code_r0x00438586;
            }
            if (pbVar37[1] != 0x6d) goto code_r0x00438586;
            puVar28 = &UNK_0099f950;
          }
        }
      }
      else {
        if (bVar2 == 0x73) {
          iVar9 = 0x70 - (uint)pbVar37[1];
        }
        else {
          iVar9 = 0x73 - uVar8;
        }
        if (iVar9 != 0) {
          iVar9 = 0x70 - uVar8;
          goto code_r0x004387c1;
        }
        puVar28 = &UNK_0099f8f0;
      }
code_r0x00438836:
      extraout_RDX[3] = puVar28[0x10];
      uVar8 = *(uint *)(puVar28 + 0x14);
      *(uint *)(extraout_RDX + 4) = uVar8;
      fVar45 = extraout_XMM0_Da_00 * *(float *)(puVar28 + 0x18);
      fVar44 = -fVar45;
      if (-fVar45 <= fVar45) {
        fVar44 = fVar45;
      }
      fVar44 = fVar44 * 8388608.0 + 0.5;
      uVar20 = (ulong)fVar44;
      uVar20 = (long)(fVar44 - 9.223372e+18) & (long)uVar20 >> 0x3f | uVar20;
      if ((uVar20 & 0x7fffff) == 0) {
        sVar15 = 0x17;
        param_2 = (byte **)0x0;
      }
      else if (uVar20 < 0x800000) {
        param_2 = (byte **)0x30;
        sVar15 = 0;
      }
      else if (uVar20 >> 0x1f == 0) {
        sVar15 = 8;
        param_2 = (byte **)0x20;
      }
      else {
        bVar35 = uVar20 >> 0x27 == 0;
        param_1 = (byte **)0x10;
        sVar15 = 0x17;
        if (bVar35) {
          sVar15 = 0x10;
        }
        param_2 = (byte **)((ulong)bVar35 << 4);
      }
      iVar16 = (int)(uVar20 >> sVar15);
      iVar9 = -iVar16;
      if (0.0 <= fVar45) {
        iVar9 = iVar16;
      }
      *(uint *)(extraout_RDX + 4) = iVar9 << 8 | (uint)param_2 | uVar8;
      goto code_r0x004388f5;
    }
    if (lVar32 == 3) {
      if (bVar2 == 100) {
        if (pbVar37[1] - 0x69 == 0) {
          iVar9 = 0x70 - (uint)pbVar37[2];
        }
        else {
          iVar9 = -(pbVar37[1] - 0x69);
        }
      }
      else {
        iVar9 = 100 - uVar8;
      }
      if (iVar9 == 0) {
        puVar28 = &UNK_0099f8b0;
        goto code_r0x00438836;
      }
    }
  }
  goto code_r0x00438586;
code_r0x00438a20:
  uVar5 = puVar40[-1];
  ppbVar39 = ppbStack_178;
  ppbVar41 = ppbVar38;
  if (0x7f < (ulong)uVar5) goto code_r0x00438a7b;
  plVar10 = (long *)func_0x0099be00();
  ppbVar39 = ppbStack_178;
  if ((*(byte *)(*plVar10 + 1 + (ulong)uVar5 * 2) & 0x20) == 0) {
    if (uVar5 == 0x5c) {
      ppbVar41 = (byte **)((long)ppbVar38 + (ulong)(*puVar40 != 0));
    }
    goto code_r0x00438a7b;
  }
  puVar40 = puVar40 + -1;
  ppbVar38 = (byte **)((long)ppbVar38 + -1);
  ppbVar41 = ppbStack_268;
  if (ppbVar38 == (byte **)0x0) goto code_r0x00438a7b;
  goto code_r0x00438a20;
}


