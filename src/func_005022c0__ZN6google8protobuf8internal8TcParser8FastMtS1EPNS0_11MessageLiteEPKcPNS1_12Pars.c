// Function: _ZN6google8protobuf8internal8TcParser8FastMtS1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
// Address: 005022c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Instruction at (ram,0x005108b1) overlaps instruction at (ram,0x005108af)
    */
/* WARNING: Type propagation algorithm not settling */

ulong * _ZN6google8protobuf8internal8TcParser8FastMtS1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                  (ulong *param_1,byte *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  ulong *param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  ulong **ppuVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  ushort uVar37;
  undefined1 uVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  char cVar42;
  ushort uVar43;
  uint uVar44;
  byte *pbVar45;
  ulong *puVar46;
  ulong *puVar47;
  ulong *in_RAX;
  undefined8 uVar48;
  ulong *puVar49;
  char *pcVar50;
  long *plVar51;
  ulong *puVar52;
  undefined *puVar53;
  ulong *puVar54;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar55;
  long lVar56;
  undefined1 (*pauVar57) [16];
  long lVar58;
  long *plVar59;
  uint uVar60;
  uint uVar61;
  int iVar62;
  ulong *puVar63;
  int iVar67;
  byte *pbVar64;
  byte *pbVar65;
  byte *extraout_RDX;
  byte *extraout_RDX_00;
  uint uVar66;
  uint uVar68;
  ulong *unaff_RBX;
  ulong **ppuVar69;
  ulong **ppuVar70;
  ulong **ppuVar71;
  ulong **ppuVar72;
  ulong **ppuVar73;
  ulong **ppuVar74;
  ulong **ppuVar75;
  undefined1 *unaff_RBP;
  undefined1 *puVar76;
  undefined1 *puVar77;
  undefined1 *puVar78;
  uint uVar79;
  undefined4 uVar80;
  uint7 uVar83;
  ulong uVar81;
  undefined8 uVar82;
  ulong uVar84;
  ushort uVar85;
  ulong uVar86;
  ushort uVar87;
  byte *pbVar88;
  ushort uVar89;
  ushort uVar90;
  uint uVar91;
  ulong *unaff_R12;
  ushort uVar92;
  ushort uVar93;
  int iVar94;
  ulong *unaff_R13;
  ulong uVar95;
  uint uVar96;
  uint uVar97;
  ulong *unaff_R14;
  ushort uVar98;
  uint uVar99;
  ulong *unaff_R15;
  uint *puVar100;
  long *in_FS_OFFSET;
  undefined1 uVar101;
  bool bVar102;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qb;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [12];
  undefined1 auVar113 [12];
  undefined1 auVar114 [12];
  undefined1 auVar115 [12];
  undefined1 auVar116 [12];
  undefined1 auVar117 [12];
  undefined1 auVar118 [12];
  undefined1 auVar119 [12];
  undefined1 auVar120 [12];
  undefined1 auVar121 [12];
  undefined1 auVar122 [12];
  undefined1 auVar123 [12];
  undefined1 auVar124 [12];
  undefined1 auVar125 [12];
  undefined1 auVar126 [12];
  undefined1 auVar127 [12];
  undefined1 auVar128 [12];
  undefined1 auVar129 [12];
  undefined1 auVar130 [12];
  undefined1 auVar131 [12];
  undefined1 auVar132 [12];
  undefined1 auVar133 [12];
  undefined1 auVar134 [12];
  undefined1 auVar135 [12];
  undefined1 auVar136 [12];
  undefined1 auVar137 [12];
  undefined1 auVar138 [12];
  undefined1 auVar139 [12];
  undefined1 auVar140 [12];
  undefined1 auVar141 [12];
  undefined1 auVar142 [12];
  undefined1 auVar143 [12];
  undefined1 auVar144 [12];
  ulong *puStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  ushort uStack_40;
  undefined1 uStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  undefined8 uStack_38;
  
  bVar41 = bStack_39;
  bVar40 = bStack_3a;
  bVar39 = bStack_3b;
  bVar3 = bStack_3c;
  bVar4 = bStack_3d;
  uVar38 = uStack_3e;
  uVar37 = uStack_40;
  uVar97 = uStack_44;
  uVar36 = uStack_48._2_2_;
  uVar6 = (ushort)uStack_48;
  uVar79 = uStack_4c;
  uVar35 = uStack_50._2_2_;
  uVar43 = (ushort)uStack_50;
  uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
  uVar91 = CONCAT22(uStack_50._2_2_,(ushort)uStack_50);
  uVar99 = (uint)param_6;
  if ((char)param_4 == '\0') {
    if ((ulong)(ushort)*param_5 != 0) {
      puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
      *puVar100 = *puVar100 | uVar99 | (uint)(1L << ((byte)(param_4 >> 0x10) & 0x3f));
    }
    uVar95 = param_4 >> 0x30;
    lVar58 = *(long *)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)(uint)param_5[3]);
    if (*(long *)((long)param_1 + uVar95) == 0) {
      uVar84 = param_1[1];
      if ((uVar84 & 1) != 0) {
        uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
      }
      uVar48 = **(undefined8 **)(lVar58 + 0x20);
      uStack_40 = 0x234f;
      uStack_3e = 0x50;
      bStack_3d = 0;
      bStack_3c = 0;
      bStack_3b = 0;
      bStack_3a = 0;
      bStack_39 = 0;
      uVar48 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                         (*(undefined8 **)(lVar58 + 0x20) + 5,uVar48,uVar48,uVar84);
      *(undefined8 *)((long)param_1 + uVar95) = uVar48;
    }
    bVar4 = param_2[1];
    if ((char)bVar4 < '\0') {
      uStack_40 = 0x2371;
      uStack_3e = 0x50;
      bStack_3d = 0;
      bStack_3c = 0;
      bStack_3b = 0;
      bStack_3a = 0;
      bStack_39 = 0;
      auVar112 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(param_2 + 1,bVar4);
      if (auVar112._0_8_ == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      auVar112[8] = bVar4;
      auVar112._0_8_ = param_2 + 2;
      auVar112._9_3_ = 0;
    }
    puVar49 = auVar112._0_8_;
    if (0 < (int)(uint)param_3[0xb]) {
      uVar66 = auVar112._8_4_ + (auVar112._0_4_ - (int)param_3[1]);
      *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
      uVar91 = *(uint *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar66;
      *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
      uVar48 = *(undefined8 *)((long)param_1 + uVar95);
      do {
        if ((ulong *)*param_3 <= puVar49) {
          uVar79 = (int)puVar49 - (uint)param_3[1];
          if (*(uint *)((long)param_3 + 0x1c) == uVar79) {
            puVar63 = (ulong *)0x0;
            if (param_3[2] != 0) {
              puVar63 = puVar49;
            }
            if (0 < (int)uVar79) {
              puVar49 = puVar63;
            }
            bVar4 = *(byte *)(lVar58 + 9);
            goto joined_r0x0050249a;
          }
          uStack_40 = 0x2415;
          uStack_3e = 0x50;
          bStack_3d = 0;
          bStack_3c = 0;
          bStack_3b = 0;
          bStack_3a = 0;
          bStack_39 = 0;
          auVar103 = _ZN6google8protobuf8internal18EpsCopyInputStream12DoneFallbackILb1EEENSt3__14pairIPKcbEEii
                               (param_3,uVar79,*(uint *)((long)param_3 + 0x5c));
          puVar49 = auVar103._0_8_;
          if ((auVar103._8_8_ & 1) != 0) break;
        }
        uVar95 = (ulong)((uint)*(byte *)(lVar58 + 8) & (uint)(ushort)*puVar49 & 0xfffffff8);
        uStack_40 = 0x23f1;
        uStack_3e = 0x50;
        bStack_3d = 0;
        bStack_3c = 0;
        bStack_3b = 0;
        bStack_3a = 0;
        bStack_39 = 0;
        puVar49 = (ulong *)(**(code **)(lVar58 + 0x38 + uVar95 * 2))
                                     (uVar48,puVar49,param_3,
                                      *(ulong *)(lVar58 + 0x40 + uVar95 * 2) ^
                                      (ulong)(ushort)*puVar49,lVar58,0);
        if (puVar49 == (ulong *)0x0) {
          puVar49 = (ulong *)0x0;
          break;
        }
      } while ((uint)param_3[10] == 0);
      bVar4 = *(byte *)(lVar58 + 9);
joined_r0x0050249a:
      if ((bVar4 & 1) != 0) {
        uStack_40 = 0x24a9;
        uStack_3e = 0x50;
        bStack_3d = 0;
        bStack_3c = 0;
        bStack_3b = 0;
        bStack_3a = 0;
        bStack_39 = 0;
        puVar49 = (ulong *)(**(code **)(lVar58 + 0x28))(uVar48,puVar49,param_3);
      }
      *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
      uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar91;
      if ((uint)param_3[10] == 0) {
        *param_3 = (long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1];
        return puVar49;
      }
    }
    return (ulong *)0x0;
  }
  puVar63 = (ulong *)in_FS_OFFSET[5];
  uVar95 = (ulong)*param_2;
  puVar49 = (ulong *)(param_2 + 1);
  puVar54 = unaff_R14;
  puVar52 = unaff_R15;
  if ((char)*param_2 < '\0') {
    uVar83 = (uint7)((uVar95 << 0x39) >> 8);
    lVar58 = CONCAT71(uVar83,(byte)*puVar49);
    if ((char)(byte)*puVar49 < '\0') {
      uVar83 = uVar83 >> 7 | (uint7)((ulong)(lVar58 << 0x39) >> 8);
      lVar58 = CONCAT71(uVar83,param_2[2]);
      if ((char)param_2[2] < '\0') {
        uVar83 = uVar83 >> 7 | (uint7)((ulong)(lVar58 << 0x39) >> 8);
        lVar58 = CONCAT71(uVar83,param_2[3]);
        if ((char)param_2[3] < '\0') {
          bVar2 = param_2[4];
          puVar47 = (ulong *)(ulong)bVar2;
          uVar83 = uVar83 >> 7 | (uint7)((ulong)(lVar58 << 0x39) >> 8);
          if ((char)bVar2 < '\0') {
            puVar46 = unaff_RBX;
            if ((ulong *)in_FS_OFFSET[5] == puVar63) goto code_r0x005013a0;
            goto code_r0x00501627;
          }
          uVar95 = CONCAT71(uVar83,bVar2) << 0x1c | (ulong)(uVar83 >> 0x1c);
          puVar49 = (ulong *)(param_2 + 5);
        }
        else {
          uVar95 = lVar58 << 0x15 | (ulong)(uVar83 >> 0x23);
          puVar49 = (ulong *)(param_2 + 4);
        }
      }
      else {
        uVar95 = lVar58 << 0xe | (ulong)(uVar83 >> 0x2a);
        puVar49 = (ulong *)(param_2 + 3);
      }
    }
    else {
      uVar95 = lVar58 << 7 | (ulong)(uVar83 >> 0x31);
      puVar49 = (ulong *)(param_2 + 2);
    }
  }
  puVar46 = (ulong *)(uVar95 >> 3 & 0x1fffffff);
  uVar68 = (uint)puVar46;
  uVar60 = uVar68 - 1;
  if (uVar60 < 0x20) {
    uVar68 = 1 << ((byte)uVar60 & 0x1f);
    puVar46 = (ulong *)(ulong)uVar68;
    if ((*(uint *)((long)param_5 + 0xc) >> (uVar60 & 0x1f) & 1) == 0) {
      uVar68 = *(uint *)((long)param_5 + 0xc) & uVar68 - 1;
      uVar68 = uVar68 - (uVar68 >> 1 & 0x55555555);
      uVar68 = (uVar68 >> 2 & 0x33333333) + (uVar68 & 0x33333333);
      uVar60 = uVar60 - (((uVar68 >> 4) + uVar68 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x0050145f:
      pbVar45 = (byte *)((ulong)(uint)param_5[2] + (long)param_5);
      puVar47 = (ulong *)((ulong)uVar60 * 3);
      puVar46 = (ulong *)in_FS_OFFSET[5];
      if ((ulong *)in_FS_OFFSET[5] != puVar63) goto code_r0x00501627;
      uVar44 = ((int)pbVar45 + uVar60 * 0xc) - (int)param_5;
      puVar54 = (ulong *)(ulong)uVar44;
      puVar46 = (ulong *)((long)puVar54 << 0x20);
      uVar84 = uVar95 & 0xffffffff;
      puVar63 = (ulong *)(uVar84 | (ulong)puVar46);
      uVar61 = (uint)uVar95;
      uStack_40 = (ushort)param_1;
      uVar18 = uStack_40;
      uStack_3e = (undefined1)((ulong)param_1 >> 0x10);
      uVar101 = uStack_3e;
      bStack_3d = (byte)((ulong)param_1 >> 0x18);
      bVar2 = bStack_3d;
      bStack_3c = (byte)((ulong)param_1 >> 0x20);
      bVar22 = bStack_3c;
      bStack_3b = (byte)((ulong)param_1 >> 0x28);
      bVar25 = bStack_3b;
      bStack_3a = (byte)((ulong)param_1 >> 0x30);
      bVar28 = bStack_3a;
      bStack_39 = (byte)((ulong)param_1 >> 0x38);
      bVar31 = bStack_39;
      uStack_44 = (uint)((ulong)param_1 >> 0x20);
      uVar16 = uStack_44;
      uStack_48._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
      uVar14 = uStack_48._2_2_;
      uStack_38._0_4_ = SUB84(in_RAX,0);
      uStack_4c = (uint)((ulong)param_5 >> 0x20);
      uVar68 = uStack_4c;
      uStack_3e = (undefined1)((ulong)param_5 >> 0x10);
      uVar19 = uStack_3e;
      bStack_3d = (byte)((ulong)param_5 >> 0x18);
      bVar5 = bStack_3d;
      bStack_3c = (byte)((ulong)param_5 >> 0x20);
      bVar23 = bStack_3c;
      bStack_3b = (byte)((ulong)param_5 >> 0x28);
      bVar26 = bStack_3b;
      bStack_3a = (byte)((ulong)param_5 >> 0x30);
      bVar29 = bStack_3a;
      bStack_39 = (byte)((ulong)param_5 >> 0x38);
      bVar32 = bStack_39;
      uStack_40 = (ushort)param_5;
      uVar93 = uStack_40;
      uStack_50._2_2_ = (undefined2)((ulong)param_5 >> 0x10);
      uVar12 = uStack_50._2_2_;
      uStack_44 = (uint)((ulong)param_6 >> 0x20);
      uVar17 = uStack_44;
      uStack_48._0_2_ = (ushort)param_6;
      uVar87 = (ushort)uStack_48;
      uStack_48._2_2_ = (undefined2)((ulong)param_6 >> 0x10);
      uVar15 = uStack_48._2_2_;
      uStack_4c = (uint)((ulong)param_3 >> 0x20);
      uVar96 = uStack_4c;
      uStack_3e = (undefined1)((ulong)param_3 >> 0x10);
      uVar20 = uStack_3e;
      bStack_3d = (byte)((ulong)param_3 >> 0x18);
      bVar21 = bStack_3d;
      bStack_3c = (byte)((ulong)param_3 >> 0x20);
      bVar24 = bStack_3c;
      bStack_3b = (byte)((ulong)param_3 >> 0x28);
      bVar27 = bStack_3b;
      bStack_3a = (byte)((ulong)param_3 >> 0x30);
      bVar30 = bStack_3a;
      bStack_39 = (byte)((ulong)param_3 >> 0x38);
      bVar33 = bStack_39;
      uStack_48._0_2_ = (ushort)param_3;
      uVar98 = (ushort)uStack_48;
      uStack_50._2_2_ = (undefined2)((ulong)param_3 >> 0x10);
      uVar13 = uStack_50._2_2_;
      uStack_50._0_2_ = (ushort)uVar84;
      uStack_50._2_2_ = (undefined2)(uVar84 >> 0x10);
      uStack_44 = (uint)((ulong)puVar49 >> 0x20);
      uStack_48._0_2_ = (ushort)puVar49;
      uVar89 = (ushort)uStack_48;
      uStack_48._2_2_ = (undefined2)((ulong)puVar49 >> 0x10);
      uStack_48._0_2_ = (ushort)uVar44;
      puVar47 = in_RAX;
      puVar52 = param_3;
      uStack_38 = in_RAX;
      switch(*(ushort *)(pbVar45 + (ulong)uVar60 * 0xc + 10) & 0xf) {
      case 2:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 3:
        uVar98 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar93 = uVar98 & 0x30;
        if (uVar93 == 0x20) {
          uVar91 = 0x20;
          uStack_38 = in_RAX;
          do {
            puVar46 = (ulong *)(ulong)uVar91;
            uVar91 = uVar61 & 7;
            if (uVar91 != 2) {
              uVar66 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
              if (uVar66 != 0xffffffff) {
                puVar100 = (uint *)((long)param_1 + (ulong)(uVar66 >> 5) * 4);
                *puVar100 = *puVar100 | 1 << ((byte)uVar66 & 0x1f);
              }
              uStack_58 = param_3;
              uStack_50._0_2_ = uVar87;
              uStack_50._2_2_ = uVar15;
              uStack_4c = uVar17;
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar54) & 0x1c0) == 0xc0) {
                if (uVar91 == 1) {
                  puVar63 = (ulong *)((long)param_1 +
                                     (ulong)*(uint *)((long)param_5 + (long)puVar54));
                  pbVar45 = (byte *)((long)param_1 +
                                    (ulong)*(uint *)((long)param_5 + (long)puVar54) + 8);
                  uStack_40 = (ushort)pbVar45;
                  uStack_3e = (undefined1)((ulong)pbVar45 >> 0x10);
                  bStack_3d = (byte)((ulong)pbVar45 >> 0x18);
                  bStack_3c = (byte)((ulong)pbVar45 >> 0x20);
                  bStack_3b = (byte)((ulong)pbVar45 >> 0x28);
                  bStack_3a = (byte)((ulong)pbVar45 >> 0x30);
                  bStack_39 = (byte)((ulong)pbVar45 >> 0x38);
                  uStack_48._0_2_ = uVar18;
                  uStack_48._2_2_ = uVar14;
                  uStack_44 = uVar16;
                  uStack_38 = param_5;
                  goto code_r0x00513643;
                }
              }
              else if (uVar91 == 5) {
                puVar63 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar54))
                ;
                pbVar45 = (byte *)((long)param_1 +
                                  (ulong)*(uint *)((long)param_5 + (long)puVar54) + 8);
                uStack_40 = (ushort)pbVar45;
                uStack_3e = (undefined1)((ulong)pbVar45 >> 0x10);
                bStack_3d = (byte)((ulong)pbVar45 >> 0x18);
                bStack_3c = (byte)((ulong)pbVar45 >> 0x20);
                bStack_3b = (byte)((ulong)pbVar45 >> 0x28);
                bStack_3a = (byte)((ulong)pbVar45 >> 0x30);
                bStack_39 = (byte)((ulong)pbVar45 >> 0x38);
                uStack_48._0_2_ = uVar18;
                uStack_48._2_2_ = uVar14;
                uStack_44 = uVar16;
                uStack_38 = param_5;
                goto code_r0x00513763;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_40 = uVar37;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              goto code_r0x0051387a;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
            uVar91 = uVar61 & 7;
            uStack_38 = puVar46;
          } while (uVar91 != 2);
          uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
          uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
          if (uVar91 != 0xffffffff) {
            puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
          }
          bVar4 = (byte)*puVar49;
          if ((char)bVar4 < '\0') {
            uStack_40 = 0xdfc3;
            uStack_3e = 0x50;
            bStack_3d = 0;
            bStack_3c = 0;
            bStack_3b = 0;
            bStack_3a = 0;
            bStack_39 = 0;
            uStack_38 = param_6;
            auVar104 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
            param_6 = uStack_38;
          }
          else {
            auVar104[8] = bVar4;
            auVar104._0_8_ = (byte *)((long)puVar49 + 1);
            auVar104._9_7_ = 0;
          }
          if ((uVar43 & 0x1c0) == 0xc0) {
            uStack_40 = 0xdfec;
            uStack_3e = 0x50;
            bStack_3d = 0;
            bStack_3c = 0;
            bStack_3b = 0;
            bStack_3a = 0;
            bStack_39 = 0;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         ();
          }
          else {
            uStack_40 = 0xdff3;
            uStack_3e = 0x50;
            bStack_3d = 0;
            bStack_3c = 0;
            bStack_3b = 0;
            bStack_3a = 0;
            bStack_39 = 0;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,auVar104._0_8_,auVar104._8_8_,
                                          (byte *)((ulong)*(uint *)((long)param_5 + (long)puVar54) +
                                                  (long)param_1));
          }
          if (puVar49 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar49) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar100 = *puVar100 | (uint)param_6;
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)param_5 + uVar95 * 2 + 0x38))
                                         (param_1,puVar49,param_3,
                                          *(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar49,param_5,param_6);
            return puVar49;
          }
          goto code_r0x005013a0;
        }
        uVar98 = uVar98 & 0x1c0;
        if (uVar98 == 0xc0) {
          if ((uVar61 & 7) == 1) {
code_r0x0050de58:
            puVar100 = (uint *)((long)puVar54 + (long)param_5);
            if (uVar93 == 0x30) {
              uStack_3e = (undefined1)((ulong)puVar49 >> 0x10);
              bStack_3d = (byte)((ulong)puVar49 >> 0x18);
              bStack_3c = (byte)((ulong)puVar49 >> 0x20);
              bStack_3b = (byte)((ulong)puVar49 >> 0x28);
              bStack_3a = (byte)((ulong)puVar49 >> 0x30);
              bStack_39 = (byte)((ulong)puVar49 >> 0x38);
              uStack_50._0_2_ = 0xdea0;
              uStack_50._2_2_ = 0x50;
              uStack_4c = 0;
              uStack_40 = uVar89;
              uStack_38 = param_3;
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar100,uVar61 >> 3,param_5,param_1);
              puVar49 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              param_3 = uStack_38;
            }
            else {
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_40 = uVar37;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (uVar93 == 0x10) {
                puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
              }
            }
            if (uVar98 == 0xc0) {
              *(ulong *)((long)param_1 + (ulong)*puVar100) = *puVar49;
              lVar58 = 8;
            }
            else {
              *(uint *)((long)param_1 + (ulong)*puVar100) = (uint)*puVar49;
              lVar58 = 4;
            }
            puVar49 = (ulong *)((long)puVar49 + lVar58);
            if ((ulong *)*param_3 <= puVar49) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar100 = *puVar100 | uVar99;
              }
              return puVar49;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050defb;
          }
        }
        else if ((uVar61 & 7) == 5) goto code_r0x0050de58;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
        uStack_50._0_2_ = uVar43;
        uStack_50._2_2_ = uVar35;
        uStack_4c = uVar79;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
code_r0x0050defb:
                    /* WARNING: Could not recover jumptable at 0x0050df09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar49;
      case 4:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 5:
        if ((uVar61 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050e0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*(code *)param_5[6])();
          return puVar49;
        }
        uVar6 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar89 = uVar6 & 0x30;
        if (uVar89 == 0x20) {
          uStack_48._0_2_ = (ushort)uVar95;
          uStack_48._2_2_ = (undefined2)(uVar95 >> 0x10);
          if ((uVar61 & 7) == 2) {
            puVar100 = (uint *)((long)param_5 + (long)puVar54);
            uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
            uVar91 = puVar100[1];
            if (uVar91 != 0xffffffff) {
              puVar1 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar91 & 0x1f);
            }
            uVar91 = (uint)uVar43;
            puVar63 = puVar49;
            uStack_58 = param_6;
            uStack_50._0_2_ = uVar18;
            uStack_50._2_2_ = uVar14;
            uStack_4c = uVar16;
            uStack_44 = uVar97;
            uStack_3e = uVar19;
            bStack_3d = bVar5;
            bStack_3c = bVar23;
            bStack_3b = bVar26;
            bStack_3a = bVar29;
            bStack_39 = bVar32;
            if ((uVar91 & 0x1c0) == 0x100) {
              uStack_44 = uVar91 & 0x600;
              puVar52 = (ulong *)((long)param_1 + (ulong)*puVar100);
              puVar63 = *(ulong **)((long)param_1 + (ulong)*puVar100 + 0x10);
              uStack_38 = param_3;
              if ((puVar63 != (ulong *)0x0) &&
                 (uStack_70 = puVar54, puStack_68 = puVar63,
                 *(ulong *)(*in_FS_OFFSET + -0x118) == *puVar63)) {
                uVar95 = *puVar52;
                if ((uVar95 & 1) == 0) {
                  uVar91 = (uint)(uVar95 != 0);
                }
                else {
                  uVar91 = *(uint *)(uVar95 + 3);
                }
                if (uVar91 == (uint)puVar52[1]) {
                  puVar47 = *(ulong **)(*in_FS_OFFSET + -0x110);
                  uStack_60 = puVar47;
code_r0x00514089:
                  uVar95 = (ulong)(byte)*puVar49;
                  if ((char)(byte)*puVar49 < '\0') {
                    puStack_80 = (ulong *)&UNK_005140ab;
                    auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                    pbVar45 = auVar103._0_8_;
                    if (pbVar45 == (byte *)0x0) goto code_r0x0051433e;
                    uVar95 = auVar103._8_8_ & 0xffffffff;
                  }
                  else {
                    pbVar45 = (byte *)((long)puVar49 + 1);
                  }
                  uVar84 = puVar47[9];
                  if (uVar84 == 0) {
                    puStack_80 = (ulong *)&UNK_0051423e;
                    pbVar88 = (byte *)_ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
                                                (puVar47);
                  }
                  else {
                    puVar47[9] = uVar84 - 0x18;
                    pbVar88 = (byte *)(puVar47[7] + uVar84 + -8);
                  }
                  pbVar88[0] = 0;
                  pbVar88[1] = 0;
                  pbVar88[2] = 0;
                  pbVar88[3] = 0;
                  pbVar88[4] = 0;
                  pbVar88[5] = 0;
                  pbVar88[6] = 0;
                  pbVar88[7] = 0;
                  pbVar88[8] = 0;
                  pbVar88[9] = 0;
                  pbVar88[10] = 0;
                  pbVar88[0xb] = 0;
                  pbVar88[0xc] = 0;
                  pbVar88[0xd] = 0;
                  pbVar88[0xe] = 0;
                  pbVar88[0xf] = 0;
                  pbVar88[0x10] = 0;
                  pbVar88[0x11] = 0;
                  pbVar88[0x12] = 0;
                  pbVar88[0x13] = 0;
                  pbVar88[0x14] = 0;
                  pbVar88[0x15] = 0;
                  pbVar88[0x16] = 0;
                  pbVar88[0x17] = 0;
                  iVar67 = (int)puVar52[1];
                  uVar84 = *puVar52;
                  if ((uVar84 & 1) == 0) {
                    if (iVar67 == 1) {
code_r0x0051424a:
                      puStack_80 = (ulong *)&UNK_0051425b;
                      puVar55 = (undefined8 *)
                                _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                          (puVar52,1,puStack_68);
                      *puVar55 = pbVar88;
                      goto code_r0x0051411e;
                    }
                    *puVar52 = (ulong)pbVar88;
                  }
                  else {
                    if (iVar67 == *(int *)(uVar84 - 1)) goto code_r0x0051424a;
                    *(byte **)(uVar84 + 7 + (long)iVar67 * 8) = pbVar88;
code_r0x0051411e:
                    *(int *)(*puVar52 + 3) = *(int *)(*puVar52 + 3) + 1;
                  }
                  puVar49 = uStack_38;
                  *(int *)(puVar52 + 1) = (int)puVar52[1] + 1;
                  puStack_80 = (ulong *)&UNK_0051413a;
                  cVar42 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                     (uStack_38,uVar95,pbVar45);
                  if (cVar42 != '\0') {
                    lVar58 = (long)(int)uVar95;
                    puStack_80 = (ulong *)&UNK_0051414c;
                    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                              (pbVar88,lVar58);
                    puVar47 = uStack_60;
                    if ((*pbVar88 & 1) == 0) {
                      pbVar88 = pbVar88 + 1;
                    }
                    else {
                      pbVar88 = *(byte **)(pbVar88 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141a5;
                    func_0x0099bda0(pbVar88,pbVar45,lVar58);
                    puVar63 = (ulong *)(pbVar45 + lVar58);
                    if (uStack_44 != 0x400) goto code_r0x005141ee;
code_r0x005141b1:
                    puVar49 = (ulong *)((*puVar52 - 1) + (long)(int)puVar52[1] * 8);
                    if ((*puVar52 & 1) == 0) {
                      puVar49 = puVar52;
                    }
                    pbVar45 = (byte *)*puVar49;
                    if ((*pbVar45 & 1) == 0) {
                      uVar95 = (ulong)(*pbVar45 >> 1);
                      pbVar45 = pbVar45 + 1;
                    }
                    else {
                      uVar95 = *(ulong *)(pbVar45 + 8);
                      pbVar45 = *(byte **)(pbVar45 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141ea;
                    iVar67 = utf8_range_IsValid(pbVar45,uVar95);
                    if (iVar67 != 0) goto code_r0x005141ee;
                    lVar58 = CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
                    lVar56 = (ulong)*(uint *)(lVar58 + 0x18) + lVar58;
                    pbVar45 = (byte *)(lVar56 + (ulong)*(ushort *)(lVar58 + 0x16) * 8);
                    uVar95 = (ulong)(*(ushort *)(lVar58 + 0x14) + 8 & 0xfffffff8);
                    pbVar88 = pbVar45 + uVar95;
                    uVar84 = ((long)((long)uStack_70 - (ulong)*(uint *)(lVar58 + 0x10)) >> 2) *
                             -0x5555555555555555;
                    uVar81 = uVar84 + 1;
                    if (uVar81 != 0) {
                      pbVar65 = pbVar45;
                      for (uVar86 = uVar81 & 7; uVar86 != 0; uVar86 = uVar86 - 1) {
                        uVar95 = uVar95 + *pbVar65;
                        pbVar65 = pbVar65 + 1;
                      }
                      if (6 < uVar84) {
                        do {
                          uVar95 = (ulong)pbVar65[7] + (ulong)pbVar65[6] +
                                   (ulong)pbVar65[5] + (ulong)pbVar65[4] + (ulong)pbVar65[3] +
                                   (ulong)pbVar65[2] + (ulong)pbVar65[1] + *pbVar65 + uVar95;
                          pbVar65 = pbVar65 + 8;
                        } while (pbVar65 != pbVar45 + uVar81);
                      }
                    }
                    puStack_80 = (ulong *)&UNK_0051433e;
                    _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                              (pbVar88,(long)*(char *)(lVar56 + (ulong)*(ushort *)(lVar58 + 0x16) *
                                                                8),pbVar45 + uVar95,
                               (long)(char)pbVar45[uVar81],&UNK_00178f3f,0);
                    goto code_r0x0051433e;
                  }
                  puStack_80 = (ulong *)&UNK_00514171;
                  puVar63 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                               (puVar49,pbVar45,uVar95,pbVar88);
                  if (puVar63 != (ulong *)0x0) {
                    puVar47 = uStack_60;
                    if (uStack_44 == 0x400) goto code_r0x005141b1;
code_r0x005141ee:
                    if (puVar63 < (ulong *)*uStack_38) goto code_r0x005141fb;
                    goto code_r0x00514410;
                  }
                  goto code_r0x0051433e;
                }
              }
              do {
                puVar63 = uStack_38;
                puStack_80 = (ulong *)&UNK_0051438c;
                pbVar45 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                            (puVar52,puVar52[2]);
                puStack_80 = (ulong *)&UNK_0051439d;
                puVar63 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                             (pbVar45,puVar49,puVar63);
                if (puVar63 == (ulong *)0x0) goto code_r0x0051433e;
                bVar102 = (*pbVar45 & 1) != 0;
                pbVar88 = pbVar45 + 1;
                if (bVar102) {
                  pbVar88 = *(byte **)(pbVar45 + 0x10);
                }
                uVar95 = (ulong)(*pbVar45 >> 1);
                if (bVar102) {
                  uVar95 = *(ulong *)(pbVar45 + 8);
                }
                puStack_80 = (ulong *)&UNK_005143d2;
                cVar42 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                   (pbVar88,uVar95,
                                    CONCAT17(bStack_39,
                                             CONCAT16(bStack_3a,
                                                      CONCAT15(bStack_3b,
                                                               CONCAT14(bStack_3c,
                                                                        CONCAT13(bStack_3d,
                                                                                 CONCAT12(uStack_3e,
                                                                                          uStack_40)
                                                                                ))))),puVar100,
                                    uStack_44);
                if (cVar42 == '\0') goto code_r0x0051433e;
                if ((ulong *)*uStack_38 <= puVar63) goto code_r0x00514410;
                bVar4 = (byte)*puVar63;
                auVar131[8] = bVar4;
                auVar131._0_8_ = (byte *)((long)puVar63 + 1);
                auVar131._9_3_ = 0;
                if ((char)bVar4 < '\0') {
                  bVar3 = *(byte *)((long)puVar63 + 1);
                  iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                  if ((char)bVar3 < '\0') {
                    puStack_80 = (ulong *)&UNK_0051436d;
                    auVar131 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar63,iVar67);
                  }
                  else {
                    auVar131._8_4_ = iVar67;
                    auVar131._0_8_ = (ushort *)((long)puVar63 + 2);
                  }
                }
                puVar49 = auVar131._0_8_;
                param_3 = uStack_38;
              } while (auVar131._8_4_ == CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            }
code_r0x00514015:
            puVar49 = puVar63;
            puVar63 = puVar49;
            if ((ulong *)*param_3 <= puVar49) {
code_r0x00514410:
              uVar43 = *(ushort *)
                        CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  )));
              if (uVar43 != 0) {
                puVar100 = (uint *)(CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                                   + (ulong)uVar43);
                *puVar100 = *puVar100 | (uint)uStack_58;
              }
              return puVar63;
            }
            param_5 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
            param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            param_6 = uStack_58;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
                    /* WARNING: Could not recover jumptable at 0x00514059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
        puVar100 = (uint *)((long)param_5 + (long)puVar54);
        uVar91 = uVar6 & 0x600;
        if (uVar89 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
          uStack_50._0_2_ = uVar98;
          uStack_50._2_2_ = uVar13;
          uStack_48._0_2_ = uVar87;
          uStack_48._2_2_ = uVar15;
          uStack_44 = uVar17;
          uStack_40 = uVar18;
          uStack_3e = uVar101;
          bStack_3d = bVar2;
          bStack_3c = bVar22;
          bStack_3b = bVar25;
          bStack_3a = bVar28;
          bStack_39 = bVar31;
          uStack_38 = param_5;
        }
        else {
          uStack_50._0_2_ = uVar98;
          uStack_50._2_2_ = uVar13;
          uStack_48._0_2_ = uVar87;
          uStack_48._2_2_ = uVar15;
          uStack_44 = uVar17;
          uStack_40 = uVar18;
          uStack_3e = uVar101;
          bStack_3d = bVar2;
          bStack_3c = bVar22;
          bStack_3b = bVar25;
          bStack_3a = bVar28;
          bStack_39 = bVar31;
          uStack_38 = param_5;
          if (uVar89 == 0x30) {
            uStack_58 = (ulong *)((ulong)CONCAT24(uVar6,(uint)uStack_58) & 0x600ffffffff);
            uStack_60 = (ulong *)&UNK_0050e133;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,0,puVar100,uVar61 >> 3,param_5,param_1);
            param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            param_1 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            uVar91 = uStack_58._4_4_;
          }
        }
        puVar63 = (ulong *)((ulong)*puVar100 + (long)param_1);
        if ((uVar6 & 0x1c0) == 0x140) {
          uVar95 = param_1[1];
          if ((uVar95 & 1) != 0) {
            uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
          }
          bVar4 = (byte)*puVar49;
          if ((char)bVar4 < '\0') {
            uStack_60 = (ulong *)&UNK_0050e278;
            auVar114 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
            if (auVar114._0_8_ != 0) {
              param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              goto code_r0x0050e289;
            }
            puVar49 = (ulong *)0x0;
          }
          else {
            auVar114[8] = bVar4;
            auVar114._0_8_ = (byte *)((long)puVar49 + 1);
            auVar114._9_3_ = 0;
code_r0x0050e289:
            iVar67 = auVar114._8_4_;
            lVar58 = auVar114._0_8_;
            if ((int)(((uint)param_3[1] - auVar114._0_4_) + 0x10) < iVar67) {
              uStack_60 = (ulong *)&UNK_0050e2a5;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar58,iVar67,puVar63,uVar95);
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e2c1;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar63,lVar58,(long)iVar67,uVar95,7);
              puVar49 = (ulong *)(lVar58 + iVar67);
            }
          }
          pbVar45 = (byte *)*puVar63;
          if (((ulong)pbVar45 & 2) == 0) {
            if (((ulong)pbVar45 & 1) == 0) {
              uVar66 = (uint)((ulong)pbVar45 >> 2) & 0x3f;
              pbVar45 = (byte *)((long)puVar63 + 1);
            }
            else {
              uVar66 = *(uint *)(pbVar45 + 7);
              pbVar45 = *(byte **)(pbVar45 + -1);
            }
          }
          else {
            uVar66 = (uint)pbVar45[-2];
          }
          if ((uVar91 & 0xffff) == 0x400) {
            uStack_60 = (ulong *)&UNK_0050e30f;
            iVar67 = utf8_range_IsValid(pbVar45,uVar66);
            if (iVar67 == 0) {
              pbVar45 = (byte *)((long)uStack_38 +
                                (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                (ulong)(uint)uStack_38[3]);
              uVar84 = (ulong)(*(ushort *)((long)uStack_38 + 0x14) + 8 & 0xfffffff8);
              lVar58 = (long)(char)*(byte *)((long)uStack_38 +
                                            (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                            (ulong)(uint)uStack_38[3]);
              pbVar88 = pbVar45 + uVar84;
              uVar81 = ((long)((long)puVar54 - (ulong)(uint)uStack_38[2]) >> 2) *
                       -0x5555555555555555;
              uVar95 = uVar81 + 1;
              pbVar65 = pbVar45 + uVar95;
              if (uVar95 != 0) {
                pbVar64 = pbVar45;
                for (uVar95 = uVar95 & 7; uVar95 != 0; uVar95 = uVar95 - 1) {
                  uVar84 = uVar84 + *pbVar64;
                  pbVar64 = pbVar64 + 1;
                }
                if (6 < uVar81) {
                  do {
                    uVar84 = (ulong)pbVar64[7] + (ulong)pbVar64[6] +
                             (ulong)pbVar64[5] + (ulong)pbVar64[4] + (ulong)pbVar64[3] +
                             (ulong)pbVar64[2] + (ulong)pbVar64[1] + *pbVar64 + uVar84;
                    pbVar64 = pbVar64 + 8;
                  } while (pbVar64 != pbVar65);
                }
              }
              goto code_r0x0050e593;
            }
          }
          uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_6 = (ulong *)CONCAT44(uStack_44,uVar66);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          param_5 = uStack_38;
          if (puVar49 != (ulong *)0x0) {
code_r0x0050e491:
            if ((ulong *)*puVar55 <= puVar49) {
              if ((ulong)(ushort)*uStack_38 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_38);
                *puVar100 = *puVar100 | uVar66;
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)uStack_38[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)uStack_38 + uVar95 * 2 + 0x38))
                                         (param_1,puVar49,puVar55,
                                          *(ulong *)((long)uStack_38 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar49);
            return puVar49;
          }
        }
        else {
          if ((uVar6 & 0x1c0) == 0x80) {
            if (uVar89 == 0x30) {
              puVar63 = (ulong *)*puVar63;
            }
            bVar4 = (byte)*puVar49;
            if ((char)bVar4 < '\0') {
              uStack_60 = (ulong *)&UNK_0050e1c4;
              auVar113 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
              param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              param_5 = uStack_38;
              if (auVar113._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar113[8] = bVar4;
              auVar113._0_8_ = (byte *)((long)puVar49 + 1);
              auVar113._9_3_ = 0;
            }
            iVar94 = auVar113._8_4_;
            lVar58 = auVar113._0_8_;
            iVar62 = ((uint)param_3[1] - auVar113._0_4_) + 0x10;
            iVar67 = 0x200;
            if (iVar62 < 0x200) {
              iVar67 = iVar62;
            }
            uStack_60 = (ulong *)&UNK_0050e209;
            cVar42 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                               (param_3,iVar94,iVar67);
            if (cVar42 == '\0') {
              puVar55 = (undefined8 *)
                        CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              uStack_60 = (ulong *)&UNK_0050e24e;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (puVar55,lVar58,iVar94,puVar63);
              uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              param_6 = (ulong *)CONCAT44(uStack_44,uVar66);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              param_5 = uStack_38;
              if (puVar49 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e21e;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (puVar63,lVar58,(long)iVar94);
              puVar49 = (ulong *)(lVar58 + iVar94);
              uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar55 = (undefined8 *)
                        CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            }
            goto code_r0x0050e491;
          }
          uVar95 = param_1[1];
          if ((uVar95 & 1) == 0) {
            if (uVar95 == 0) goto code_r0x0050e410;
code_r0x0050e1a9:
            uStack_60 = (ulong *)&UNK_0050e1b4;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar49,puVar63);
          }
          else {
            if (*(long *)(uVar95 & 0xfffffffffffffffe) != 0) goto code_r0x0050e1a9;
code_r0x0050e410:
            uStack_60 = (ulong *)&UNK_0050e420;
            uVar48 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar63,0);
            uStack_60 = (ulong *)&UNK_0050e42e;
            puVar49 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar48,puVar49,param_3);
          }
          uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          if (puVar49 == (ulong *)0x0) {
            uStack_60 = (ulong *)&UNK_0050e5d4;
            func_0x0050d360(CONCAT17(bStack_39,
                                     CONCAT16(bStack_3a,
                                              CONCAT15(bStack_3b,
                                                       CONCAT14(bStack_3c,
                                                                CONCAT13(bStack_3d,
                                                                         CONCAT12(uStack_3e,
                                                                                  uStack_40)))))),
                            puVar63);
            param_1 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_5 = uStack_38;
            goto code_r0x005013a0;
          }
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          if ((uVar91 & 0xffff) != 0x400) goto code_r0x0050e491;
          pbVar45 = (byte *)(*puVar63 & 0xfffffffffffffffc);
          if ((*pbVar45 & 1) == 0) {
            uVar95 = (ulong)(*pbVar45 >> 1);
            pbVar45 = pbVar45 + 1;
          }
          else {
            uVar95 = *(ulong *)(pbVar45 + 8);
            pbVar45 = *(byte **)(pbVar45 + 0x10);
          }
          uStack_60 = (ulong *)&UNK_0050e47a;
          iVar67 = utf8_range_IsValid(pbVar45,uVar95);
          uVar66 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          if (iVar67 != 0) goto code_r0x0050e491;
          pbVar45 = (byte *)((long)uStack_38 +
                            (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                            (ulong)(uint)uStack_38[3]);
          uVar84 = (ulong)(*(ushort *)((long)uStack_38 + 0x14) + 8 & 0xfffffff8);
          lVar58 = (long)(char)*(byte *)((long)uStack_38 +
                                        (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                        (ulong)(uint)uStack_38[3]);
          pbVar88 = pbVar45 + uVar84;
          uVar81 = ((long)((long)puVar54 - (ulong)(uint)uStack_38[2]) >> 2) * -0x5555555555555555;
          uVar95 = uVar81 + 1;
          pbVar65 = pbVar45 + uVar95;
          if (uVar95 != 0) {
            pbVar64 = pbVar45;
            for (uVar95 = uVar95 & 7; uVar95 != 0; uVar95 = uVar95 - 1) {
              uVar84 = uVar84 + *pbVar64;
              pbVar64 = pbVar64 + 1;
            }
            if (6 < uVar81) {
              do {
                uVar84 = (ulong)pbVar64[7] + (ulong)pbVar64[6] +
                         (ulong)pbVar64[5] + (ulong)pbVar64[4] + (ulong)pbVar64[3] +
                         (ulong)pbVar64[2] + (ulong)pbVar64[1] + *pbVar64 + uVar84;
                pbVar64 = pbVar64 + 8;
              } while (pbVar64 != pbVar65);
            }
          }
code_r0x0050e593:
          uStack_60 = (ulong *)&UNK_0050e5a9;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar88,lVar58,pbVar45 + uVar84,(long)(char)*pbVar65,&UNK_00178f3f,0);
          param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          param_5 = uStack_38;
        }
        goto code_r0x005013a0;
      case 6:
        uVar93 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar92 = uVar93 & 0x30;
        if (uVar92 != 0x20) {
          if ((uVar93 & 0x1c0) == 0x40) {
            if ((uVar61 & 7) != 3) goto code_r0x0050e6d6;
          }
          else if (((uVar93 & 0x1c0) != 0) || ((uVar61 & 7) != 2)) goto code_r0x0050e6d6;
          puVar100 = (uint *)((long)puVar54 + (long)param_5);
          plVar51 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar100[2] * 8 + (ulong)(uint)param_5[3]);
          if ((uVar93 & 0x600) == 0x400) {
            uStack_40 = (ushort)plVar51;
            uStack_3e = (undefined1)((ulong)plVar51 >> 0x10);
            bStack_3d = (byte)((ulong)plVar51 >> 0x18);
            bStack_3c = (byte)((ulong)plVar51 >> 0x20);
            bStack_3b = (byte)((ulong)plVar51 >> 0x28);
            bStack_3a = (byte)((ulong)plVar51 >> 0x30);
            bStack_39 = (byte)((ulong)plVar51 >> 0x38);
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
          }
          else {
            if ((uVar93 & 0x600) != 0x200) {
              plVar51 = (long *)*plVar51;
            }
            uStack_70 = (ulong *)&UNK_0050e8c8;
            puStack_68 = param_5;
            uStack_60 = param_6;
            uStack_58 = param_1;
            uStack_50._0_2_ = uVar98;
            uStack_50._2_2_ = uVar13;
            uStack_48._0_2_ = uVar89;
            uStack_38 = puVar63;
            lVar56 = (**(code **)(*plVar51 + 0x20))(plVar51);
            lVar58 = *(long *)(lVar56 + 8);
            uStack_40 = (ushort)lVar58;
            uStack_3e = (undefined1)((ulong)lVar58 >> 0x10);
            bStack_3d = (byte)((ulong)lVar58 >> 0x18);
            bStack_3c = (byte)((ulong)lVar58 >> 0x20);
            bStack_3b = (byte)((ulong)lVar58 >> 0x28);
            bStack_3a = (byte)((ulong)lVar58 >> 0x30);
            bStack_39 = (byte)((ulong)lVar58 >> 0x38);
            param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            puVar49 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            puVar63 = uStack_38;
            param_1 = uStack_58;
            param_5 = puStack_68;
            param_6 = uStack_60;
            if (lVar58 == 0) {
              uStack_70 = (ulong *)&UNK_0050e8fb;
              uVar48 = (**(code **)(*(long *)(lVar56 + 0x58) + 0x10))(plVar51);
              puVar49 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              uStack_40 = (ushort)uVar48;
              uStack_3e = (undefined1)((ulong)uVar48 >> 0x10);
              bStack_3d = (byte)((ulong)uVar48 >> 0x18);
              bStack_3c = (byte)((ulong)uVar48 >> 0x20);
              bStack_3b = (byte)((ulong)uVar48 >> 0x28);
              bStack_3a = (byte)((ulong)uVar48 >> 0x30);
              bStack_39 = (byte)((ulong)uVar48 >> 0x38);
              puVar63 = uStack_38;
              param_1 = uStack_58;
              param_5 = puStack_68;
              param_6 = uStack_60;
            }
          }
          if (uVar92 == 0x30) {
            uStack_48._0_2_ = (ushort)puVar49;
            uStack_48._2_2_ = (undefined2)((ulong)puVar49 >> 0x10);
            uStack_44 = (uint)((ulong)puVar49 >> 0x20);
            uStack_50._0_2_ = (ushort)param_3;
            uStack_50._2_2_ = (undefined2)((ulong)param_3 >> 0x10);
            uStack_4c = (uint)((ulong)param_3 >> 0x20);
            uStack_70 = (ulong *)&UNK_0050e718;
            uStack_38 = puVar63;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
                       ,puVar100,(ulong)puVar63 >> 3 & 0x1fffffff,param_5,param_1);
            puVar49 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            puVar63 = uStack_38;
          }
          else if (uVar92 == 0x10) {
            puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar95 = (ulong)*puVar100;
          if (*(long *)((long)param_1 + uVar95) == 0) {
            uVar84 = param_1[1];
            if ((uVar84 & 1) != 0) {
              uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
            }
            puVar55 = *(undefined8 **)
                       (CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  ))) + 0x20);
            uVar48 = *puVar55;
            uStack_70 = (ulong *)&UNK_0050e7d6;
            uStack_38 = puVar63;
            uVar48 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                               (puVar55 + 5,uVar48,uVar48,uVar84);
            *(undefined8 *)((long)param_1 + uVar95) = uVar48;
            puVar63 = uStack_38;
          }
          if ((uVar93 & 0x1c0) == 0x40) {
            uVar84 = param_3[0xb];
            *(uint *)(param_3 + 0xb) = (uint)uVar84 - 1;
            if (0 < (int)(uint)uVar84) {
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0050e778;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar95),puVar49,param_3,
                                            CONCAT17(bStack_39,
                                                     CONCAT16(bStack_3a,
                                                              CONCAT15(bStack_3b,
                                                                       CONCAT14(bStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar95 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((uint)uVar95 == (uint)puVar63) {
                return puVar49;
              }
            }
          }
          else {
            bVar4 = (byte)*puVar49;
            if ((char)bVar4 < '\0') {
              uStack_70 = (ulong *)&UNK_0050e80e;
              auVar115 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
              if (auVar115._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar115[8] = bVar4;
              auVar115._0_8_ = (byte *)((long)puVar49 + 1);
              auVar115._9_3_ = 0;
            }
            if (0 < (int)(uint)param_3[0xb]) {
              uVar66 = auVar115._8_4_ + (auVar115._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
              uVar91 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar66;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0050e864;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar95),auVar115._0_8_,
                                            param_3,CONCAT17(bStack_39,
                                                             CONCAT16(bStack_3a,
                                                                      CONCAT15(bStack_3b,
                                                                               CONCAT14(bStack_3c,
                                                                                        CONCAT13(
                                                  bStack_3d,CONCAT12(uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar91;
              if ((uint)param_3[10] == 0) {
                *param_3 = (long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1];
                return puVar49;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar93 & 0x1c0) == 0x40) {
          if ((uVar61 & 7) == 3) {
            uStack_50._0_2_ = (ushort)*(undefined4 *)((long)param_5 + (long)puVar54);
            uStack_50._2_2_ =
                 (undefined2)((uint)*(undefined4 *)((long)param_5 + (long)puVar54) >> 0x10);
            uStack_4c = 0;
            plVar51 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54) & 0x600;
            plVar59 = plVar51;
            uStack_48._0_2_ = uVar87;
            uStack_48._2_2_ = uVar15;
            uStack_44 = uVar17;
            uStack_40 = uVar18;
            uStack_3e = uVar101;
            bStack_3d = bVar2;
            bStack_3c = bVar22;
            bStack_3b = bVar25;
            bStack_3a = bVar28;
            bStack_39 = bVar31;
            uStack_38 = param_5;
            if (uVar43 != 0x400) {
              if (uVar43 != 0x200) {
                plVar51 = (long *)*plVar51;
              }
              uStack_60 = (ulong *)&UNK_00514925;
              uStack_58 = puVar54;
              lVar58 = (**(code **)(*plVar51 + 0x20))(plVar51);
              puVar54 = uStack_58;
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              plVar59 = *(long **)(lVar58 + 8);
              if (*(long **)(lVar58 + 8) == (long *)0x0) {
                uStack_60 = (ulong *)&UNK_00514947;
                plVar59 = (long *)(**(code **)(*(long *)(lVar58 + 0x58) + 0x10))(plVar51);
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
              }
            }
            uVar91 = *(uint *)((long)((long)uStack_38 + 4) + (long)puVar54);
            if (uVar91 != 0xffffffff) {
              puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
              *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
            }
            pbVar45 = (byte *)(CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)) +
                              (long)param_1);
            uStack_50._0_2_ = (ushort)pbVar45;
            uStack_50._2_2_ = (undefined2)((ulong)pbVar45 >> 0x10);
            uStack_4c = (uint)((ulong)pbVar45 >> 0x20);
            puVar63 = puVar49;
            do {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_005147bd;
              uVar48 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar59,CONCAT44(uStack_4c,
                                                   CONCAT22(uStack_50._2_2_,(ushort)uStack_50)),
                                  uVar95);
              uVar95 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar95 - 1;
              if ((int)(uint)uVar95 < 1) {
code_r0x00514885:
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                param_6 = (ulong *)(ulong)CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
                param_5 = uStack_38;
                goto code_r0x005013a0;
              }
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_60 = (ulong *)&UNK_005147e8;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar48,puVar63,param_3,plVar59);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar95 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((puVar49 == (ulong *)0x0) || ((uint)uVar95 != uVar61)) goto code_r0x00514885;
              if ((ulong *)*param_3 <= puVar49) {
                uVar43 = (ushort)*uStack_38;
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                goto joined_r0x0051490a;
              }
              bVar4 = (byte)*puVar49;
              auVar134[8] = bVar4;
              auVar134._0_8_ = (byte *)((long)puVar49 + 1);
              auVar134._9_3_ = 0;
              if ((char)bVar4 < '\0') {
                bVar3 = *(byte *)((long)puVar49 + 1);
                iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                if ((char)bVar3 < '\0') {
                  uStack_60 = (ulong *)&UNK_00514852;
                  auVar134 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar49,iVar67);
                  if (auVar134._0_8_ == 0) goto code_r0x00514885;
                }
                else {
                  auVar134._8_4_ = iVar67;
                  auVar134._0_8_ = (ushort *)((long)puVar49 + 2);
                }
              }
              puVar63 = auVar134._0_8_;
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
            } while (auVar134._8_4_ == uVar61);
            if ((ulong *)*param_3 <= puVar49) {
              uVar43 = (ushort)*uStack_38;
joined_r0x0051490a:
              if (uVar43 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar43) =
                     *(uint *)((long)param_1 + (ulong)uVar43) |
                     CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)uStack_38[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)uStack_38 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)uStack_38 + uVar95 * 2 + 0x38);
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_5 = uStack_38;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
                    /* WARNING: Could not recover jumptable at 0x00514883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
        if ((uVar93 & 0x1c0) == 0) {
          uStack_4c = uVar61;
          if ((uVar61 & 7) == 2) {
            uStack_58 = (ulong *)(ulong)*(uint *)((long)param_5 + (long)puVar54);
            plVar51 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54) & 0x600;
            uStack_48._0_2_ = uVar87;
            uStack_48._2_2_ = uVar15;
            uStack_44 = uVar17;
            uStack_3e = uVar19;
            bStack_3d = bVar5;
            bStack_3c = bVar23;
            bStack_3b = bVar26;
            bStack_3a = bVar29;
            bStack_39 = bVar32;
            uStack_38 = param_1;
            if (uVar43 != 0x400) {
              plVar59 = plVar51;
              if (uVar43 != 0x200) {
                plVar59 = (long *)*plVar51;
              }
              uStack_60 = (ulong *)&UNK_005146c8;
              lVar58 = (**(code **)(*plVar59 + 0x20))(plVar59);
              plVar51 = *(long **)(lVar58 + 8);
              if (plVar51 == (long *)0x0) {
                uStack_60 = (ulong *)&UNK_005146e5;
                plVar51 = (long *)(**(code **)(*(long *)(lVar58 + 0x58) + 0x10))(plVar59);
              }
            }
            uVar91 = *(uint *)(CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
                               + 4 + (long)puVar54);
            if (uVar91 != 0xffffffff) {
              puVar100 = (uint *)((long)uStack_38 + (ulong)(uVar91 >> 5) * 4);
              *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
            }
            uStack_58 = (ulong *)((long)uStack_58 + (long)uStack_38);
            puVar63 = puVar49;
            do {
              uVar95 = uStack_38[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_0051450d;
              uVar48 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar51,uStack_58,uVar95);
              bVar4 = (byte)*puVar63;
              if ((char)bVar4 < '\0') {
                uStack_60 = (ulong *)&UNK_0051452a;
                auVar132 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar63,bVar4);
                if (auVar132._0_8_ != 0) goto code_r0x00514536;
code_r0x00514628:
                param_5 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                param_6 = (ulong *)(ulong)CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
                param_1 = uStack_38;
                goto code_r0x005013a0;
              }
              auVar132[8] = bVar4;
              auVar132._0_8_ = (byte *)((long)puVar63 + 1);
              auVar132._9_3_ = 0;
code_r0x00514536:
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x00514628;
              uVar66 = auVar132._8_4_ + (auVar132._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
              uVar91 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar66;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_60 = (ulong *)&UNK_00514585;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar48,auVar132._0_8_,param_3,plVar51);
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar91;
              if ((uint)param_3[10] != 0) goto code_r0x00514628;
              puVar63 = (ulong *)((long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1]);
              *param_3 = (ulong)puVar63;
              if (puVar49 == (ulong *)0x0) goto code_r0x00514628;
              if (puVar63 <= puVar49) {
                uVar43 = *(ushort *)
                          CONCAT17(bStack_39,
                                   CONCAT16(bStack_3a,
                                            CONCAT15(bStack_3b,
                                                     CONCAT14(bStack_3c,
                                                              CONCAT13(bStack_3d,
                                                                       CONCAT12(uStack_3e,uStack_40)
                                                                      )))));
                goto joined_r0x005146ae;
              }
              bVar4 = (byte)*puVar49;
              auVar133[8] = bVar4;
              auVar133._0_8_ = (byte *)((long)puVar49 + 1);
              auVar133._9_3_ = 0;
              if ((char)bVar4 < '\0') {
                bVar3 = *(byte *)((long)puVar49 + 1);
                iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                if ((char)bVar3 < '\0') {
                  uStack_60 = (ulong *)&UNK_005145f5;
                  auVar133 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar49,iVar67);
                  if (auVar133._0_8_ == 0) goto code_r0x00514628;
                }
                else {
                  auVar133._8_4_ = iVar67;
                  auVar133._0_8_ = (ushort *)((long)puVar49 + 2);
                }
              }
              puVar63 = auVar133._0_8_;
            } while (auVar133._8_4_ == uStack_4c);
            if ((ulong *)*param_3 <= puVar49) {
              uVar43 = *(ushort *)
                        CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  )));
joined_r0x005146ae:
              if (uVar43 != 0) {
                *(uint *)((long)uStack_38 + (ulong)uVar43) =
                     *(uint *)((long)uStack_38 + (ulong)uVar43) |
                     CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              }
              return puVar49;
            }
            param_5 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_1 = uStack_38;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
                    /* WARNING: Could not recover jumptable at 0x00514626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
code_r0x0050e6d6:
                    /* WARNING: Could not recover jumptable at 0x0050e6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*(code *)param_5[6])();
        return puVar49;
      case 7:
        puVar76 = &stack0xfffffffffffffff8;
        ppuVar70 = &puStack_88;
        ppuVar72 = &puStack_88;
        ppuVar73 = &puStack_88;
        ppuVar74 = &puStack_88;
        ppuVar71 = &puStack_88;
        ppuVar69 = &puStack_88;
        uStack_38 = (ulong *)in_FS_OFFSET[5];
        uVar84 = (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54);
        uVar91 = (uint)param_5[3];
        bStack_3d = *(byte *)((long)param_5 + uVar84 * 8 + (ulong)uVar91 + 4);
        uStack_70 = param_6;
        if (((bStack_3d & 1) == 0) || ((uVar61 & 7) != 2)) {
          uStack_4c = uVar44;
          uStack_48._0_2_ = uVar6;
          uStack_48._2_2_ = uVar36;
          uStack_44 = uVar97;
          bStack_3c = bVar3;
          bStack_3b = bVar39;
          bStack_3a = bVar40;
          bStack_39 = bVar41;
          if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
            puVar63 = (ulong *)CONCAT44(uVar44,uVar61);
            uVar43 = (ushort)uStack_50;
            uVar35 = uStack_50._2_2_;
            uVar79 = uVar44;
            bVar4 = bStack_3d;
            puVar47 = uStack_38;
            goto 
            _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
        }
        else {
          puStack_78 = (ulong *)((long)puVar54 + (long)param_5);
          uVar80 = *(undefined4 *)((long)param_5 + uVar84 * 8 + (ulong)uVar91);
          puVar63 = (ulong *)((ulong)(uint)*puStack_78 + (long)param_1);
          uStack_60 = param_1;
          uStack_4c = uVar44;
          uStack_40 = uVar37;
          uStack_3e = uVar38;
          bStack_3c = bVar3;
          bStack_3b = bVar39;
          bStack_3a = bVar40;
          bStack_39 = bVar41;
          if ((bStack_3d & 2) == 0) {
            if ((*puVar63 & 1) != 0) {
              puStack_68 = (ulong *)CONCAT44(puStack_68._4_4_,uVar80);
              uStack_48._0_2_ = (ushort)puVar63;
              uStack_48._2_2_ = (undefined2)((ulong)puVar63 >> 0x10);
              uStack_44 = (uint)((ulong)puVar63 >> 0x20);
              puStack_90 = &UNK_0050eed7;
              (*_ZN6google8protobuf8internal20MapFieldBaseForParse22sync_map_with_repeatedE)
                        (puVar63,1);
              puVar63 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              uVar80 = puStack_68._0_4_;
            }
            puVar63 = puVar63 + 1;
          }
          uVar66 = *(uint *)((long)puStack_78 + 4);
          if (uVar66 != 0xffffffff) {
            puVar100 = (uint *)((long)uStack_60 + (ulong)(uVar66 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar66 & 0x1f);
          }
          puStack_68 = (ulong *)((long)param_5 + uVar84 * 8 + (ulong)uVar91);
          puStack_80 = (ulong *)(ulong)CONCAT14(bStack_3d,uVar80);
          uStack_48._0_2_ = (ushort)puVar63;
          uStack_48._2_2_ = (undefined2)((ulong)puVar63 >> 0x10);
          uStack_44 = (uint)((ulong)puVar63 >> 0x20);
          uStack_58 = param_5;
code_r0x0050ea10:
          do {
            if (puVar63[3] == 0) {
              puStack_90 = &UNK_0050ea38;
              unaff_RBX = (ulong *)_Znwm(*(ushort *)((long)puVar63 + 0xc));
            }
            else {
              puStack_90 = &UNK_0050ea29;
              unaff_RBX = (ulong *)_ZN6google8protobuf5Arena8AllocateEm
                                             (puVar63[3],
                                              *(ushort *)((long)puVar63 + 0xc) + 7 & 0xfffffff8);
            }
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            uVar43 = *(ushort *)((long)param_6 + 0xc);
            unaff_RBX[1] = 0;
            pbVar45 = (byte *)((long)unaff_RBX + ((ulong)uVar43 - 8));
            pbVar45[0] = 0;
            pbVar45[1] = 0;
            pbVar45[2] = 0;
            pbVar45[3] = 0;
            pbVar45[4] = 0;
            pbVar45[5] = 0;
            pbVar45[6] = 0;
            pbVar45[7] = 0;
            if ((*(byte *)((long)param_6 + 0xf) & 0xf) == 5) {
              uVar84 = param_6[3];
              unaff_RBX[1] = 0;
              unaff_RBX[2] = 0;
              unaff_RBX[3] = 0;
              if (uVar84 != 0) {
                puStack_90 = &UNK_0050ea87;
                _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                          (uVar84,unaff_RBX + 1,
                           _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                          );
                param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              }
            }
            bVar4 = *(byte *)((long)param_6 + 0xf) >> 4;
            if (4 < bVar4) {
              if (bVar4 == 6) {
                puStack_90 = &UNK_0050eaba;
                _ZNK6google8protobuf8internal9ClassData12PlacementNewEPvPNS0_5ArenaE
                          (*(undefined8 *)(puStack_68[1] + 0x20),
                           (byte *)((ulong)*(byte *)((long)param_6 + 0xe) + (long)unaff_RBX),
                           param_6[3]);
              }
              else {
                uVar81 = (ulong)*(byte *)((long)param_6 + 0xe);
                uVar84 = param_6[3];
                pbVar45 = (byte *)((long)unaff_RBX + uVar81);
                pbVar45[0] = 0;
                pbVar45[1] = 0;
                pbVar45[2] = 0;
                pbVar45[3] = 0;
                pbVar45[4] = 0;
                pbVar45[5] = 0;
                pbVar45[6] = 0;
                pbVar45[7] = 0;
                pbVar45[8] = 0;
                pbVar45[9] = 0;
                pbVar45[10] = 0;
                pbVar45[0xb] = 0;
                pbVar45[0xc] = 0;
                pbVar45[0xd] = 0;
                pbVar45[0xe] = 0;
                pbVar45[0xf] = 0;
                pbVar45 = (byte *)((long)unaff_RBX + uVar81 + 0x10);
                pbVar45[0] = 0;
                pbVar45[1] = 0;
                pbVar45[2] = 0;
                pbVar45[3] = 0;
                pbVar45[4] = 0;
                pbVar45[5] = 0;
                pbVar45[6] = 0;
                pbVar45[7] = 0;
                if (uVar84 == 0) goto code_r0x0050eaed;
                puStack_90 = &UNK_0050eae9;
                _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                          (uVar84,(byte *)(uVar81 + (long)unaff_RBX),
                           _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                          );
              }
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            }
code_r0x0050eaed:
            bVar4 = (byte)*puVar49;
            if ((char)bVar4 < '\0') {
              puStack_90 = &UNK_0050eb0a;
              auVar116 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              if (auVar116._0_8_ != 0) goto code_r0x0050eb1a;
code_r0x0050edc0:
              if (param_6[3] == 0) {
                puStack_90 = &UNK_0050edd2;
                _ZN6google8protobuf8internal14UntypedMapBase10DeleteNodeEPNS1_8NodeBaseE
                          (param_6,unaff_RBX);
              }
              param_1 = uStack_60;
              param_5 = uStack_58;
              param_6 = uStack_70;
              if ((ulong *)in_FS_OFFSET[5] != uStack_38) goto code_r0x0050eee3;
              goto code_r0x005013a0;
            }
            auVar116[8] = bVar4;
            auVar116._0_8_ = (byte *)((long)puVar49 + 1);
            auVar116._9_3_ = 0;
code_r0x0050eb1a:
            puVar47 = auVar116._0_8_;
            if ((int)(uint)param_3[0xb] < 1) goto code_r0x0050edc0;
            uVar66 = auVar116._8_4_ + (auVar116._0_4_ - (int)param_3[1]);
            *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
            uVar91 = *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar66;
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
            puStack_90 = &UNK_0050eb76;
            puVar49 = puVar47;
            param_1 = unaff_RBX;
            param_5 = uStack_58;
            puStack_88 = param_6;
            auVar103 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                                 (unaff_RBX,puVar47,param_3,puStack_68,uStack_58,puStack_78);
            unaff_R15 = uStack_58;
            puVar54 = auVar103._8_8_;
            unaff_R13 = auVar103._0_8_;
            uVar99 = (uint)uVar95;
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
            uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar91;
            if (((uint)param_3[10] != 0) ||
               (*param_3 = (long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1],
               unaff_R13 == (ulong *)0x0)) goto code_r0x0050edc0;
            if ((bStack_3d & 8) == 0) {
code_r0x0050ebea:
              auVar11._8_8_ = puVar54;
              auVar11._0_8_ = puVar47;
              auVar105._8_8_ = puVar54;
              auVar105._0_8_ = puVar47;
              uVar91 = *(byte *)((long)param_6 + 0xf) & 0xf;
              puVar63 = (ulong *)&UNK_00204f58;
              pcVar50 = &UNK_00204f58 + *(int *)(&UNK_00204f58 + (ulong)uVar91 * 4);
              uVar101 = pcVar50 == (char *)0x0;
              ppuVar75 = &puStack_88;
              ppuVar34 = &puStack_88;
              puVar77 = &stack0xfffffffffffffff8;
              puVar78 = &stack0xfffffffffffffff8;
              switch(uVar91) {
              case 0:
                puStack_90 = &UNK_0050ec0d;
                _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
                          (param_6,unaff_RBX);
                puVar49 = (ulong *)*param_3;
                break;
              case 1:
                puStack_90 = &UNK_0050ec6b;
                _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
                          (param_6,unaff_RBX);
                puVar49 = (ulong *)*param_3;
                break;
              case 2:
                puStack_90 = &UNK_0050ec2b;
                _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
                          (param_6,unaff_RBX);
                puVar49 = (ulong *)*param_3;
                break;
              default:
                goto code_r0x0050eee8;
              case 5:
                puStack_90 = &UNK_0050ec4b;
                _ZN6google8protobuf8internal10KeyMapBaseINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE19InsertOrReplaceNodeEPNS1_7KeyNodeIS9_EE
                          (param_6,unaff_RBX);
                puVar49 = (ulong *)*param_3;
                break;
              case 6:
                goto code_r0x005104be;
              case 7:
                *pcVar50 = *pcVar50 + (char)pcVar50;
                goto code_r0x00510540;
              case 8:
                pbVar45 = &UNK_00204ee3 + *(int *)(&UNK_00204f58 + (ulong)uVar91 * 4);
                *pbVar45 = *pbVar45 | 0x58;
                if (-1 < (char)*pbVar45) goto code_r0x0051050d;
                goto code_r0x00510520;
              case 9:
              case 10:
                puVar63 = (ulong *)((ulong)unaff_RBX & 0xffffffff);
                goto code_r0x005107d4;
              case 0xb:
                *(byte *)param_5 = (byte)*param_5 + (char)param_5;
                ppuVar71 = &puStack_88;
                goto code_r0x00510520;
              case 0xc:
                puVar63 = (ulong *)&UNK_00204fb0;
                puStack_90 = &UNK_00510881;
                auVar103 = func_0x08318b87();
                puVar54 = auVar103._8_8_;
                pcVar50 = auVar103._0_8_;
                goto code_r0x00510881;
              case 0xd:
                puStack_90 = &UNK_0051089d;
                puVar49 = (ulong *)func_0x15de54a6();
                out(0x46,(int)puVar49);
                return puVar49;
              case 0xe:
                goto code_r0x0051088e;
              case 0xf:
                goto code_r0x00510893;
              }
            }
            else {
              uVar91 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)param_6 + 0xe));
              puVar100 = (uint *)puStack_68[1];
              puVar49 = (ulong *)(long)(short)*puVar100;
              param_1 = (ulong *)(ulong)(*puVar100 >> 0x10);
              puVar54 = (ulong *)(((long)(int)uVar91 - (long)puVar49) - (long)param_1);
              if ((ulong *)((long)(int)uVar91 - (long)puVar49) < param_1) goto code_r0x0050ebea;
              uVar66 = puVar100[1];
              puVar49 = (ulong *)(ulong)uVar66;
              param_1 = (ulong *)(ulong)(ushort)uVar66;
              if (param_1 <= puVar54) {
                puVar54 = (ulong *)(ulong)(uVar66 >> 0x10);
                puVar49 = (ulong *)0x0;
                do {
                  if (puVar54 <= puVar49) goto code_r0x0050ece8;
                  uVar79 = *(uint *)((long)puVar100 +
                                    (long)puVar49 * 4 + (ulong)(uVar66 >> 3 & 0x1ffc) + 8);
                  param_1 = (ulong *)(ulong)uVar79;
                  param_5 = (ulong *)(ulong)((int)uVar91 < (int)uVar79);
                  puVar49 = (ulong *)(((long)puVar49 * 2 - (long)param_5) + 2);
                } while (uVar79 != uVar91);
                goto code_r0x0050ebea;
              }
              if ((puVar100[((ulong)puVar54 >> 5) + 2] >> ((uint)puVar54 & 0x1f) & 1) != 0)
              goto code_r0x0050ebea;
code_r0x0050ece8:
              puStack_90 = &UNK_0050ed02;
              _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                        (uStack_60,uStack_58,param_6,
                         CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)),unaff_RBX,
                         puStack_80);
              puVar49 = (ulong *)*param_3;
            }
            if (puVar49 <= unaff_R13) {
              if ((ulong)(ushort)*unaff_R15 != 0) {
                puVar100 = (uint *)((long)uStack_60 + (ulong)(ushort)*unaff_R15);
                *puVar100 = *puVar100 | (uint)uStack_70;
              }
              if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
                return unaff_R13;
              }
              goto code_r0x0050eee3;
            }
            bVar4 = (byte)*unaff_R13;
            uVar91 = (uint)bVar4;
            puVar49 = (ulong *)((long)unaff_R13 + 1);
            if ((char)bVar4 < '\0') {
              bStack_39 = *(byte *)puVar49;
              uVar83 = (uint7)(((ulong)bVar4 << 0x39) >> 8);
              lVar58 = CONCAT71(uVar83,bStack_39);
              puVar63 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              if (-1 < (char)bStack_39) {
                puVar49 = (ulong *)((long)unaff_R13 + 2);
                if (((int)lVar58 << 7 | (uint)(((ulong)bVar4 << 0x39) >> 0x39)) !=
                    CONCAT22(uStack_50._2_2_,(ushort)uStack_50)) break;
                goto code_r0x0050ea10;
              }
              bStack_3a = *(byte *)((long)unaff_R13 + 2);
              uVar83 = uVar83 >> 7 | (uint7)((ulong)(lVar58 << 0x39) >> 8);
              unaff_R15 = uStack_58;
              if ((char)bStack_3a < '\0') {
                bStack_3b = *(byte *)((long)unaff_R13 + 3);
                uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bStack_3a) << 0x39) >> 8);
                if ((char)bStack_3b < '\0') {
                  bStack_3c = *(byte *)((long)unaff_R13 + 4);
                  uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bStack_3b) << 0x39) >> 8);
                  if ((char)bStack_3c < '\0') {
                    uVar91 = 0;
                    puVar49 = (ulong *)0x0;
                  }
                  else {
                    uVar91 = (int)CONCAT71(uVar83,bStack_3c) << 0x1c | (uint)(uVar83 >> 0x1c);
                    puVar49 = (ulong *)((long)unaff_R13 + 5);
                  }
                }
                else {
                  uVar91 = (int)CONCAT71(uVar83,bStack_3b) << 0x15 | (uint)(uVar83 >> 0x23);
                  puVar49 = (ulong *)((long)unaff_R13 + 4);
                }
              }
              else {
                uVar91 = (int)CONCAT71(uVar83,bStack_3a) << 0xe | (uint)(uVar83 >> 0x2a);
                puVar49 = (ulong *)((long)unaff_R13 + 3);
              }
            }
            puVar63 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          } while (uVar91 == CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          uVar95 = (ulong)((uint)(byte)unaff_R15[1] & (uint)(ushort)*unaff_R13 & 0xfffffff8);
          if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0050ee52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)unaff_R15 + uVar95 * 2 + 0x38))
                                         (uStack_60,unaff_R13,param_3,
                                          *(ulong *)((long)unaff_R15 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*unaff_R13,unaff_R15,uStack_70);
            return puVar49;
          }
        }
code_r0x0050eee3:
        puStack_90 = &UNK_0050eee8;
        func_0x0099bd00();
code_r0x0050eee8:
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
        puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar49;
      case 8:
        goto code_r0x005013a0;
      case 9:
        uVar92 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar90 = uVar92 & 0x30;
        if (uVar90 == 0x20) {
          do {
            if ((uVar95 & 7) == 0) {
              uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
              uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
              if (uVar91 != 0xffffffff) {
                puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
                *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
              }
              uVar43 = uVar43 >> 6;
              uStack_3e = (undefined1)(uVar44 >> 0x10);
              bStack_3d = (byte)(uVar44 >> 0x18);
              uStack_40 = (ushort)uStack_48;
              if ((uVar43 & 7) == 0) {
                puStack_68 = param_6;
                uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
                uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
                uStack_60 = param_1;
                lVar56 = *(long *)((long)param_1 + uVar95);
                uStack_58 = param_5;
                uStack_38 = (ulong *)(ulong)CONCAT24(uVar43,(undefined4)uStack_38);
                uVar91 = (uint)uVar43;
                uStack_48._2_2_ = uVar13;
                uStack_44 = uStack_4c;
                if (lVar56 == lVar58) {
                  bStack_3c = 0;
                  bStack_3b = 0;
                  bStack_3a = 0;
                  bStack_39 = 0;
                  uVar81 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar84 = param_1[1];
                  if ((uVar84 & 1) == 0) {
                    if (uVar84 == 0) goto code_r0x005166f0;
code_r0x005166d5:
                    puStack_80 = (ulong *)&UNK_005166e2;
                    uStack_4c = uVar44;
                    uStack_48._0_2_ = uVar98;
                    uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar84,uVar81 + 7 & 0xfffffffffffffff8);
                  }
                  else {
                    uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                    if (uVar84 != 0) goto code_r0x005166d5;
code_r0x005166f0:
                    puStack_80 = (ulong *)&UNK_005166f8;
                    uStack_4c = uVar44;
                    uStack_48._0_2_ = uVar98;
                    uVar48 = _Znwm(uVar81);
                  }
                  puVar63 = uStack_60;
                  *(undefined8 *)((long)uStack_60 + uVar95) = uVar48;
                  puStack_80 = (ulong *)&UNK_0051670e;
                  func_0x0099bda0(uVar48,lVar58,uVar81);
                  lVar56 = *(long *)((long)puVar63 + uVar95);
                  puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                  ;
                  param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48))
                  ;
                  puVar54 = (ulong *)CONCAT17(bStack_39,
                                              CONCAT16(bStack_3a,
                                                       CONCAT15(bStack_3b,
                                                                CONCAT14(bStack_3c,
                                                                         CONCAT13(bStack_3d,
                                                                                  CONCAT12(uStack_3e
                                                  ,uStack_40))))));
                  uVar91 = uStack_38._4_4_;
                  uVar44 = uStack_4c;
                  uVar98 = (ushort)uStack_48;
                }
                uStack_48._0_2_ = uVar98;
                uStack_4c = uVar44;
                uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_58 + (long)puVar54);
                puVar52 = *(ulong **)(lVar56 + (long)uStack_70);
                if (puVar52 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uStack_40 = (ushort)puVar54;
                  uStack_3e = (undefined1)((ulong)puVar54 >> 0x10);
                  bStack_3d = (byte)((ulong)puVar54 >> 0x18);
                  bStack_3c = (byte)((ulong)puVar54 >> 0x20);
                  bStack_3b = (byte)((ulong)puVar54 >> 0x28);
                  bStack_3a = (byte)((ulong)puVar54 >> 0x30);
                  bStack_39 = (byte)((ulong)puVar54 >> 0x38);
                  uVar95 = uStack_60[1];
                  if ((uVar95 & 1) == 0) {
                    if (uVar95 == 0) goto code_r0x00516aff;
code_r0x00516771:
                    puStack_80 = (ulong *)&UNK_0051677e;
                    puVar52 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                    *puVar52 = uVar95;
                  }
                  else {
                    uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                    if (uVar95 != 0) goto code_r0x00516771;
code_r0x00516aff:
                    puStack_80 = (ulong *)&UNK_00516b09;
                    puVar52 = (ulong *)_Znwm(0x10);
                    *puVar52 = 0;
                  }
                  puVar54 = (ulong *)CONCAT17(bStack_39,
                                              CONCAT16(bStack_3a,
                                                       CONCAT15(bStack_3b,
                                                                CONCAT14(bStack_3c,
                                                                         CONCAT13(bStack_3d,
                                                                                  CONCAT12(uStack_3e
                                                  ,uStack_40))))));
                  *(ulong **)(lVar56 + (long)uStack_70) = puVar52;
                  puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                  ;
                  param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48))
                  ;
                  uVar66 = uStack_38._4_4_;
                  if (((ulong)uStack_38 & 0x40000000000) == 0) goto code_r0x0051674a;
code_r0x005167a9:
                  uVar95 = *(ulong *)((long)uStack_58 +
                                     (ulong)*(ushort *)((long)(uStack_58 + 1) + (long)puVar54) * 8 +
                                     (ulong)(uint)uStack_58[3]);
                }
                else {
                  uVar66 = uVar91;
                  if ((uVar91 & 0x400) != 0) goto code_r0x005167a9;
code_r0x0051674a:
                  uVar95 = 0;
                }
                puVar54 = (ulong *)(uVar95 >> 0x20);
                uStack_70 = puVar54;
                uStack_40 = (ushort)uVar95;
                uStack_3e = (undefined1)(uVar95 >> 0x10);
                bStack_3d = (byte)(uVar95 >> 0x18);
                bStack_3c = (byte)(uVar95 >> 0x20);
                bStack_3b = (byte)(uVar95 >> 0x28);
                bStack_3a = (byte)(uVar95 >> 0x30);
                bStack_39 = (byte)(uVar95 >> 0x38);
                goto code_r0x005167ec;
              }
              if ((uVar43 & 7) != 2) {
                puStack_68 = param_6;
                uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
                uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
                uStack_58 = param_1;
                lVar56 = *(long *)((long)param_1 + uVar95);
                uStack_60 = param_5;
                uStack_38 = (ulong *)(ulong)CONCAT24(uVar43,(undefined4)uStack_38);
                uVar91 = (uint)uVar43;
                uStack_48._2_2_ = uVar13;
                uStack_44 = uStack_4c;
                if (lVar56 == lVar58) {
                  uVar81 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar84 = param_1[1];
                  if ((uVar84 & 1) != 0) {
                    uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                  }
                  bStack_3c = 0;
                  bStack_3b = 0;
                  bStack_3a = 0;
                  bStack_39 = 0;
                  if (uVar84 == 0) {
                    puStack_80 = (ulong *)&UNK_00515db0;
                    uStack_4c = uVar44;
                    uStack_48._0_2_ = uVar98;
                    uVar48 = _Znwm(uVar81);
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515da6;
                    uStack_4c = uVar44;
                    uStack_48._0_2_ = uVar98;
                    uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar84,uVar81 + 7 & 0xfffffffffffffff8);
                  }
                  puVar63 = uStack_58;
                  *(undefined8 *)((long)uStack_58 + uVar95) = uVar48;
                  puStack_80 = (ulong *)&UNK_00515dc6;
                  func_0x0099bda0(uVar48,lVar58,uVar81);
                  lVar56 = *(long *)((long)puVar63 + uVar95);
                  puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                  ;
                  param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48))
                  ;
                  puVar54 = (ulong *)CONCAT17(bStack_39,
                                              CONCAT16(bStack_3a,
                                                       CONCAT15(bStack_3b,
                                                                CONCAT14(bStack_3c,
                                                                         CONCAT13(bStack_3d,
                                                                                  CONCAT12(uStack_3e
                                                  ,uStack_40))))));
                  uVar91 = uStack_38._4_4_;
                  uVar44 = uStack_4c;
                  uVar98 = (ushort)uStack_48;
                }
                uStack_48._0_2_ = uVar98;
                uStack_4c = uVar44;
                uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (long)puVar54);
                puVar52 = *(ulong **)(lVar56 + (long)uStack_70);
                if (puVar52 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar95 = uStack_58[1];
                  if ((uVar95 & 1) != 0) {
                    uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                  }
                  uStack_40 = (ushort)puVar54;
                  uStack_3e = (undefined1)((ulong)puVar54 >> 0x10);
                  bStack_3d = (byte)((ulong)puVar54 >> 0x18);
                  bStack_3c = (byte)((ulong)puVar54 >> 0x20);
                  bStack_3b = (byte)((ulong)puVar54 >> 0x28);
                  bStack_3a = (byte)((ulong)puVar54 >> 0x30);
                  bStack_39 = (byte)((ulong)puVar54 >> 0x38);
                  if (uVar95 == 0) {
                    puStack_80 = (ulong *)&UNK_005161b0;
                    puVar52 = (ulong *)_Znwm(0x10);
                    *puVar52 = 0;
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515e36;
                    puVar52 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                    *puVar52 = uVar95;
                  }
                  *(ulong **)(lVar56 + (long)uStack_70) = puVar52;
                  puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                  ;
                  param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48))
                  ;
                  puVar54 = (ulong *)CONCAT17(bStack_39,
                                              CONCAT16(bStack_3a,
                                                       CONCAT15(bStack_3b,
                                                                CONCAT14(bStack_3c,
                                                                         CONCAT13(bStack_3d,
                                                                                  CONCAT12(uStack_3e
                                                  ,uStack_40))))));
                  uVar66 = uStack_38._4_4_;
                  if (((ulong)uStack_38 & 0x40000000000) == 0) goto code_r0x00515e02;
code_r0x00515e5d:
                  uVar95 = *(ulong *)((long)uStack_60 +
                                     (ulong)*(ushort *)((long)(uStack_60 + 1) + (long)puVar54) * 8 +
                                     (ulong)(uint)uStack_60[3]);
                }
                else {
                  uVar66 = uVar91;
                  if ((uVar91 & 0x400) != 0) goto code_r0x00515e5d;
code_r0x00515e02:
                  uVar95 = 0;
                }
                puVar54 = (ulong *)(uVar95 >> 0x20);
                uStack_70 = puVar54;
                uStack_40 = (ushort)uVar95;
                uStack_3e = (undefined1)(uVar95 >> 0x10);
                bStack_3d = (byte)(uVar95 >> 0x18);
                bStack_3c = (byte)(uVar95 >> 0x20);
                bStack_3b = (byte)(uVar95 >> 0x28);
                bStack_3a = (byte)(uVar95 >> 0x30);
                bStack_39 = (byte)(uVar95 >> 0x38);
                goto code_r0x00515e9c;
              }
              puStack_68 = param_6;
              uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
              uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
              uStack_58 = param_1;
              lVar56 = *(long *)((long)param_1 + uVar95);
              uStack_60 = param_5;
              uStack_38 = (ulong *)(ulong)CONCAT24(uVar43,(undefined4)uStack_38);
              uVar91 = (uint)uVar43;
              uStack_48._2_2_ = uVar13;
              uStack_44 = uStack_4c;
              if (lVar56 == lVar58) {
                uVar81 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                uVar84 = param_1[1];
                if ((uVar84 & 1) != 0) {
                  uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                }
                bStack_3c = 0;
                bStack_3b = 0;
                bStack_3a = 0;
                bStack_39 = 0;
                if (uVar84 == 0) {
                  puStack_80 = (ulong *)&UNK_00516250;
                  uStack_4c = uVar44;
                  uStack_48._0_2_ = uVar98;
                  uVar48 = _Znwm(uVar81);
                }
                else {
                  puStack_80 = (ulong *)&UNK_00516246;
                  uStack_4c = uVar44;
                  uStack_48._0_2_ = uVar98;
                  uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar84,uVar81 + 7 & 0xfffffffffffffff8);
                }
                puVar63 = uStack_58;
                *(undefined8 *)((long)uStack_58 + uVar95) = uVar48;
                puStack_80 = (ulong *)&UNK_00516266;
                func_0x0099bda0(uVar48,lVar58,uVar81);
                lVar56 = *(long *)((long)puVar63 + uVar95);
                puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
                param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                puVar54 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                uVar91 = uStack_38._4_4_;
                uVar44 = uStack_4c;
                uVar98 = (ushort)uStack_48;
              }
              uStack_48._0_2_ = uVar98;
              uStack_4c = uVar44;
              uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (long)puVar54);
              puVar52 = *(ulong **)(lVar56 + (long)uStack_70);
              if (puVar52 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar95 = uStack_58[1];
                if ((uVar95 & 1) != 0) {
                  uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                }
                uStack_40 = (ushort)puVar54;
                uStack_3e = (undefined1)((ulong)puVar54 >> 0x10);
                bStack_3d = (byte)((ulong)puVar54 >> 0x18);
                bStack_3c = (byte)((ulong)puVar54 >> 0x20);
                bStack_3b = (byte)((ulong)puVar54 >> 0x28);
                bStack_3a = (byte)((ulong)puVar54 >> 0x30);
                bStack_39 = (byte)((ulong)puVar54 >> 0x38);
                if (uVar95 == 0) {
                  puStack_80 = (ulong *)&UNK_00516650;
                  puVar52 = (ulong *)_Znwm(0x10);
                  *puVar52 = 0;
                }
                else {
                  puStack_80 = (ulong *)&UNK_005162d6;
                  puVar52 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                  *puVar52 = uVar95;
                }
                *(ulong **)(lVar56 + (long)uStack_70) = puVar52;
                puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
                param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                puVar54 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                uVar66 = uStack_38._4_4_;
                if (((ulong)uStack_38 & 0x40000000000) == 0) goto code_r0x005162a2;
code_r0x005162fd:
                uVar95 = *(ulong *)((long)uStack_60 +
                                   (ulong)*(ushort *)((long)(uStack_60 + 1) + (long)puVar54) * 8 +
                                   (ulong)(uint)uStack_60[3]);
              }
              else {
                uVar66 = uVar91;
                if ((uVar91 & 0x400) != 0) goto code_r0x005162fd;
code_r0x005162a2:
                uVar95 = 0;
              }
              puVar54 = (ulong *)(uVar95 >> 0x20);
              uStack_70 = puVar54;
              uStack_40 = (ushort)uVar95;
              uStack_3e = (undefined1)(uVar95 >> 0x10);
              bStack_3d = (byte)(uVar95 >> 0x18);
              bStack_3c = (byte)(uVar95 >> 0x20);
              bStack_3b = (byte)(uVar95 >> 0x28);
              bStack_3a = (byte)(uVar95 >> 0x30);
              bStack_39 = (byte)(uVar95 >> 0x38);
              goto code_r0x0051633c;
            }
            if ((uVar61 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00515cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar49 = (ulong *)(*(code *)param_5[6])();
              return puVar49;
            }

            _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar61 & 7) != 2);
          uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
          uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
          if (uVar91 != 0xffffffff) {
            puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar100 = *puVar100 | uVar99;
          }
          uVar87 = uVar87 >> 6;
          puStack_98 = puVar63;
          if ((uVar87 & 7) != 0) {
            if ((uVar87 & 7) != 2) {
              uStack_38 = (ulong *)in_FS_OFFSET[5];
              uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
              uVar95 = (ulong)uVar87;
              uVar84 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar58 = *(long *)(*(long *)param_5[4] + uVar84);
              lVar56 = *(long *)((long)param_1 + uVar84);
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_40 = uVar37;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (lVar56 == lVar58) {
                puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 +
                                                      (ulong)(uint)param_5[3] + 0x10);
                uVar95 = param_1[1];
                if ((uVar95 & 1) != 0) {
                  uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)(ulong)CONCAT24(uVar87,(uint)uStack_70);
                if (uVar95 == 0) {
                  puStack_88 = puVar49;
                  puStack_80 = param_3;
                  uVar48 = _Znwm(puStack_78);
                }
                else {
                  puStack_88 = puVar49;
                  puStack_80 = param_3;
                  uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar95,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar84) = uVar48;
                func_0x0099bda0(uVar48,lVar58,puStack_78);
                lVar56 = *(long *)((long)param_1 + uVar84);
                uVar95 = (ulong)uStack_70 >> 0x20;
                puVar49 = puStack_88;
                param_3 = puStack_80;
              }
              uVar91 = (uint)uVar95 & 0x600;
              puVar53 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar54);
              puVar63 = *(ulong **)(puVar53 + lVar56);
              if (puVar63 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar84 = param_1[1];
                if ((uVar84 & 1) != 0) {
                  uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)CONCAT44((uint)uVar95,(uint)uStack_70);
                puStack_90 = puVar53;
                puStack_88 = puVar49;
                puStack_80 = param_3;
                if (uVar84 == 0) {
                  puStack_78 = param_1;
                  puVar63 = (ulong *)_Znwm(0x10);
                  *puVar63 = 0;
                }
                else {
                  puStack_78 = param_1;
                  puVar63 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar84,0x10);
                  *puVar63 = uVar84;
                }
                *(ulong **)(puStack_90 + lVar56) = puVar63;
                uVar95 = (ulong)uStack_70 & 0x40000000000;
                puVar49 = puStack_88;
                param_3 = puStack_80;
                puVar47 = puStack_78;
                puVar52 = uStack_58;
              }
              else {
                uVar95 = uVar95 & 0x400;
                puVar47 = param_1;
                puVar52 = uStack_58;
              }
              uStack_58 = puVar47;
              if (uVar95 != 0) {
                uStack_60 = *(ulong **)
                             ((long)param_5 +
                             (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                             (ulong)(uint)param_5[3]);
                puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
                puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar91);
                uStack_48._0_2_ = (ushort)puStack_98;
                uStack_48._2_2_ = (undefined2)((ulong)puStack_98 >> 0x10);
                uStack_44 = (uint)((ulong)puStack_98 >> 0x20);
                uStack_40 = (ushort)puVar63;
                uStack_3e = (undefined1)((ulong)puVar63 >> 0x10);
                bStack_3d = (byte)((ulong)puVar63 >> 0x18);
                bStack_3c = (byte)((ulong)puVar63 >> 0x20);
                bStack_3b = (byte)((ulong)puVar63 >> 0x28);
                bStack_3a = (byte)((ulong)puVar63 >> 0x30);
                bStack_39 = (byte)((ulong)puVar63 >> 0x38);
                uStack_50._0_2_ = uVar93;
                uStack_50._2_2_ = uVar12;
                uStack_4c = uVar68;
                puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                             (param_3);
                if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
                  return puVar49;
                }
code_r0x00516d58:
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar49;
              }
              bVar102 = uVar91 == 0x200;
              uStack_58 = puVar52;
              if ((ulong *)in_FS_OFFSET[5] != uStack_38) goto code_r0x00516d58;
              uStack_38 = (ulong *)in_FS_OFFSET[5];
              uVar95 = (ulong)(byte)*puVar49;
              uStack_60 = puVar63;
              if ((char)(byte)*puVar49 < '\0') {
                uStack_70 = (ulong *)&UNK_00517503;
                auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                pbVar45 = auVar103._0_8_;
                if (pbVar45 == (byte *)0x0) {
code_r0x0051759d:
                  puVar49 = (ulong *)0x0;
                  goto code_r0x0051759f;
                }
                uVar95 = auVar103._8_8_ & 0xffffffff;
              }
              else {
                pbVar45 = (byte *)((long)puVar49 + 1);
              }
              uVar84 = param_3[1];
              iVar67 = (int)uVar84 - (int)pbVar45;
              uVar91 = (uint)uVar95;
              if (iVar67 < (int)uVar91) {
                do {
                  uStack_70 = (ulong *)&UNK_00517531;
                  lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                     (pbVar45,uVar84,uStack_60,bVar102);
                  if (lVar58 == 0) goto code_r0x0051759d;
                  puVar55 = (undefined8 *)param_3[1];
                  iVar94 = (int)lVar58 - (int)puVar55;
                  iVar62 = (int)uVar95 - iVar67;
                  if (iVar62 < 0x11) {
                    uStack_40 = 0;
                    uStack_48._0_2_ = 0;
                    uStack_48._2_2_ = 0;
                    uStack_44 = 0;
                    uStack_58 = (ulong *)*puVar55;
                    uVar48 = puVar55[1];
                    uStack_50._0_2_ = (ushort)uVar48;
                    uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
                    uStack_4c = (uint)((ulong)uVar48 >> 0x20);
                    lVar58 = (long)&uStack_58 + (long)iVar62;
                    uStack_70 = (ulong *)&UNK_005175f1;
                    lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                       ((long)&uStack_58 + (long)iVar94,lVar58,uStack_60,bVar102);
                    puVar49 = (ulong *)0x0;
                    if (lVar56 == lVar58) {
                      puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
                    }
                    goto code_r0x0051759f;
                  }
                  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051759d;
                  uStack_70 = (ulong *)&UNK_00517559;
                  lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                  if (lVar58 == 0) goto code_r0x0051759d;
                  uVar91 = (int)uVar95 - (iVar67 + iVar94);
                  uVar95 = (ulong)uVar91;
                  pbVar45 = (byte *)(lVar58 + iVar94);
                  uVar84 = param_3[1];
                  iVar67 = (int)uVar84 - (int)pbVar45;
                } while (iVar67 < (int)uVar91);
              }
              uStack_70 = (ulong *)&UNK_0051758f;
              puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                           (pbVar45,pbVar45 + (int)uVar91,uStack_60,bVar102);
              puVar49 = (ulong *)0x0;
              if ((ulong *)(pbVar45 + (int)uVar91) == puVar63) {
                puVar49 = puVar63;
              }
code_r0x0051759f:
              if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
                uStack_70 = (ulong *)&UNK_00517612;
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar49;
              }
              return puVar49;
            }
            uStack_38 = (ulong *)in_FS_OFFSET[5];
            uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
            uVar95 = (ulong)uVar87;
            uVar84 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar58 = *(long *)(*(long *)param_5[4] + uVar84);
            lVar56 = *(long *)((long)param_1 + uVar84);
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
            if (lVar56 == lVar58) {
              puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)(ulong)CONCAT24(uVar87,(uint)uStack_70);
              if (uVar95 == 0) {
                puStack_88 = puVar49;
                puStack_80 = param_3;
                uVar48 = _Znwm(puStack_78);
              }
              else {
                puStack_88 = puVar49;
                puStack_80 = param_3;
                uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar95,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar84) = uVar48;
              func_0x0099bda0(uVar48,lVar58,puStack_78);
              lVar56 = *(long *)((long)param_1 + uVar84);
              uVar95 = (ulong)uStack_70 >> 0x20;
              puVar49 = puStack_88;
              param_3 = puStack_80;
            }
            uVar91 = (uint)uVar95 & 0x600;
            puVar53 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar54);
            puVar63 = *(ulong **)(puVar53 + lVar56);
            if (puVar63 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar84 = param_1[1];
              if ((uVar84 & 1) != 0) {
                uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)CONCAT44((uint)uVar95,(uint)uStack_70);
              puStack_90 = puVar53;
              puStack_88 = puVar49;
              puStack_80 = param_3;
              if (uVar84 == 0) {
                puStack_78 = param_1;
                puVar63 = (ulong *)_Znwm(0x10);
                *puVar63 = 0;
              }
              else {
                puStack_78 = param_1;
                puVar63 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar84,0x10);
                *puVar63 = uVar84;
              }
              *(ulong **)(puStack_90 + lVar56) = puVar63;
              uVar95 = (ulong)uStack_70 & 0x40000000000;
              puVar49 = puStack_88;
              param_3 = puStack_80;
              puVar47 = puStack_78;
              puVar52 = uStack_58;
            }
            else {
              uVar95 = uVar95 & 0x400;
              puVar47 = param_1;
              puVar52 = uStack_58;
            }
            uStack_58 = puVar47;
            if (uVar95 != 0) {
              uStack_60 = *(ulong **)
                           ((long)param_5 +
                           (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                           (ulong)(uint)param_5[3]);
              puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
              puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar91);
              uStack_48._0_2_ = (ushort)puStack_98;
              uStack_48._2_2_ = (undefined2)((ulong)puStack_98 >> 0x10);
              uStack_44 = (uint)((ulong)puStack_98 >> 0x20);
              uStack_40 = (ushort)puVar63;
              uStack_3e = (undefined1)((ulong)puVar63 >> 0x10);
              bStack_3d = (byte)((ulong)puVar63 >> 0x18);
              bStack_3c = (byte)((ulong)puVar63 >> 0x20);
              bStack_3b = (byte)((ulong)puVar63 >> 0x28);
              bStack_3a = (byte)((ulong)puVar63 >> 0x30);
              bStack_39 = (byte)((ulong)puVar63 >> 0x38);
              uStack_50._0_2_ = uVar93;
              uStack_50._2_2_ = uVar12;
              uStack_4c = uVar68;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
              if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
                return puVar49;
              }
code_r0x00516f98:
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar49;
            }
            bVar102 = uVar91 == 0x200;
            uStack_58 = puVar52;
            if ((ulong *)in_FS_OFFSET[5] != uStack_38) goto code_r0x00516f98;
            uStack_38 = (ulong *)in_FS_OFFSET[5];
            uVar95 = (ulong)(byte)*puVar49;
            uStack_60 = puVar63;
            if ((char)(byte)*puVar49 < '\0') {
              uStack_70 = (ulong *)&UNK_00517a63;
              auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
              pbVar45 = auVar103._0_8_;
              if (pbVar45 == (byte *)0x0) {
code_r0x00517afd:
                puVar49 = (ulong *)0x0;
                goto code_r0x00517aff;
              }
              uVar95 = auVar103._8_8_ & 0xffffffff;
            }
            else {
              pbVar45 = (byte *)((long)puVar49 + 1);
            }
            uVar84 = param_3[1];
            iVar67 = (int)uVar84 - (int)pbVar45;
            uVar91 = (uint)uVar95;
            if (iVar67 < (int)uVar91) {
              do {
                uStack_70 = (ulong *)&UNK_00517a91;
                lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                   (pbVar45,uVar84,uStack_60,bVar102);
                if (lVar58 == 0) goto code_r0x00517afd;
                puVar55 = (undefined8 *)param_3[1];
                iVar94 = (int)lVar58 - (int)puVar55;
                iVar62 = (int)uVar95 - iVar67;
                if (iVar62 < 0x11) {
                  uStack_40 = 0;
                  uStack_48._0_2_ = 0;
                  uStack_48._2_2_ = 0;
                  uStack_44 = 0;
                  uStack_58 = (ulong *)*puVar55;
                  uVar48 = puVar55[1];
                  uStack_50._0_2_ = (ushort)uVar48;
                  uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
                  uStack_4c = (uint)((ulong)uVar48 >> 0x20);
                  lVar58 = (long)&uStack_58 + (long)iVar62;
                  uStack_70 = (ulong *)&UNK_00517b51;
                  lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                     ((long)&uStack_58 + (long)iVar94,lVar58,uStack_60,bVar102);
                  puVar49 = (ulong *)0x0;
                  if (lVar56 == lVar58) {
                    puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
                  }
                  goto code_r0x00517aff;
                }
                if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00517afd;
                uStack_70 = (ulong *)&UNK_00517ab9;
                lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                if (lVar58 == 0) goto code_r0x00517afd;
                uVar91 = (int)uVar95 - (iVar67 + iVar94);
                uVar95 = (ulong)uVar91;
                pbVar45 = (byte *)(lVar58 + iVar94);
                uVar84 = param_3[1];
                iVar67 = (int)uVar84 - (int)pbVar45;
              } while (iVar67 < (int)uVar91);
            }
            uStack_70 = (ulong *)&UNK_00517aef;
            puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                         (pbVar45,pbVar45 + (int)uVar91,uStack_60,bVar102);
            puVar49 = (ulong *)0x0;
            if ((ulong *)(pbVar45 + (int)uVar91) == puVar63) {
              puVar49 = puVar63;
            }
code_r0x00517aff:
            if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
              uStack_70 = (ulong *)&UNK_00517b72;
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar49;
            }
            return puVar49;
          }
          uStack_38 = (ulong *)in_FS_OFFSET[5];
          uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
          uVar95 = (ulong)uVar87;
          uVar84 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar58 = *(long *)(*(long *)param_5[4] + uVar84);
          lVar56 = *(long *)((long)param_1 + uVar84);
          uStack_50._0_2_ = uVar43;
          uStack_50._2_2_ = uVar35;
          uStack_4c = uVar79;
          uStack_48._0_2_ = uVar6;
          uStack_48._2_2_ = uVar36;
          uStack_44 = uVar97;
          uStack_40 = uVar37;
          uStack_3e = uVar38;
          bStack_3d = bVar4;
          bStack_3c = bVar3;
          bStack_3b = bVar39;
          bStack_3a = bVar40;
          bStack_39 = bVar41;
          if (lVar56 == lVar58) {
            puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar95 = param_1[1];
            if ((uVar95 & 1) != 0) {
              uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)(ulong)CONCAT24(uVar87,(uint)uStack_70);
            if (uVar95 == 0) {
              puStack_88 = puVar49;
              puStack_80 = param_3;
              uVar48 = _Znwm(puStack_78);
            }
            else {
              puStack_88 = puVar49;
              puStack_80 = param_3;
              uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar95,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar84) = uVar48;
            func_0x0099bda0(uVar48,lVar58,puStack_78);
            lVar56 = *(long *)((long)param_1 + uVar84);
            uVar95 = (ulong)uStack_70 >> 0x20;
            puVar49 = puStack_88;
            param_3 = puStack_80;
          }
          uVar91 = (uint)uVar95 & 0x600;
          puVar53 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar54);
          puVar63 = *(ulong **)(puVar53 + lVar56);
          if (puVar63 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
            uVar84 = param_1[1];
            if ((uVar84 & 1) != 0) {
              uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)CONCAT44((uint)uVar95,(uint)uStack_70);
            puStack_90 = puVar53;
            puStack_88 = puVar49;
            puStack_80 = param_3;
            if (uVar84 == 0) {
              puStack_78 = param_1;
              puVar63 = (ulong *)_Znwm(0x10);
              *puVar63 = 0;
            }
            else {
              puStack_78 = param_1;
              puVar63 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar84,0x10);
              *puVar63 = uVar84;
            }
            *(ulong **)(puStack_90 + lVar56) = puVar63;
            uVar95 = (ulong)uStack_70 & 0x40000000000;
            puVar49 = puStack_88;
            param_3 = puStack_80;
            puVar47 = puStack_78;
            puVar52 = uStack_58;
          }
          else {
            uVar95 = uVar95 & 0x400;
            puVar47 = param_1;
            puVar52 = uStack_58;
          }
          uStack_58 = puVar47;
          if (uVar95 != 0) {
            uStack_60 = *(ulong **)
                         ((long)param_5 +
                         (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                         (ulong)(uint)param_5[3]);
            puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
            puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar91);
            uStack_48._0_2_ = (ushort)puStack_98;
            uStack_48._2_2_ = (undefined2)((ulong)puStack_98 >> 0x10);
            uStack_44 = (uint)((ulong)puStack_98 >> 0x20);
            uStack_40 = (ushort)puVar63;
            uStack_3e = (undefined1)((ulong)puVar63 >> 0x10);
            bStack_3d = (byte)((ulong)puVar63 >> 0x18);
            bStack_3c = (byte)((ulong)puVar63 >> 0x20);
            bStack_3b = (byte)((ulong)puVar63 >> 0x28);
            bStack_3a = (byte)((ulong)puVar63 >> 0x30);
            bStack_39 = (byte)((ulong)puVar63 >> 0x38);
            uStack_50._0_2_ = uVar93;
            uStack_50._2_2_ = uVar12;
            uStack_4c = uVar68;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                         (param_3);
            if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
              return puVar49;
            }
code_r0x005171d8:
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar49;
          }
          bVar102 = uVar91 == 0x200;
          uStack_58 = puVar52;
          if ((ulong *)in_FS_OFFSET[5] != uStack_38) goto code_r0x005171d8;
          uStack_38 = (ulong *)in_FS_OFFSET[5];
          uVar95 = (ulong)(byte)*puVar49;
          uStack_60 = puVar63;
          if ((char)(byte)*puVar49 < '\0') {
            uStack_70 = (ulong *)&UNK_00517fd3;
            auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
            pbVar45 = auVar103._0_8_;
            if (pbVar45 == (byte *)0x0) {
code_r0x0051806d:
              puVar49 = (ulong *)0x0;
              goto code_r0x0051806f;
            }
            uVar95 = auVar103._8_8_ & 0xffffffff;
          }
          else {
            pbVar45 = (byte *)((long)puVar49 + 1);
          }
          uVar84 = param_3[1];
          iVar67 = (int)uVar84 - (int)pbVar45;
          uVar91 = (uint)uVar95;
          if (iVar67 < (int)uVar91) {
            do {
              uStack_70 = (ulong *)&UNK_00518001;
              lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                 (pbVar45,uVar84,uStack_60,bVar102);
              if (lVar58 == 0) goto code_r0x0051806d;
              puVar55 = (undefined8 *)param_3[1];
              iVar94 = (int)lVar58 - (int)puVar55;
              iVar62 = (int)uVar95 - iVar67;
              if (iVar62 < 0x11) {
                uStack_40 = 0;
                uStack_48._0_2_ = 0;
                uStack_48._2_2_ = 0;
                uStack_44 = 0;
                uStack_58 = (ulong *)*puVar55;
                uVar48 = puVar55[1];
                uStack_50._0_2_ = (ushort)uVar48;
                uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
                uStack_4c = (uint)((ulong)uVar48 >> 0x20);
                lVar58 = (long)&uStack_58 + (long)iVar62;
                uStack_70 = (ulong *)&UNK_005180c1;
                lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                   ((long)&uStack_58 + (long)iVar94,lVar58,uStack_60,bVar102);
                puVar49 = (ulong *)0x0;
                if (lVar56 == lVar58) {
                  puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
                }
                goto code_r0x0051806f;
              }
              if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051806d;
              uStack_70 = (ulong *)&UNK_00518029;
              lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
              if (lVar58 == 0) goto code_r0x0051806d;
              uVar91 = (int)uVar95 - (iVar67 + iVar94);
              uVar95 = (ulong)uVar91;
              pbVar45 = (byte *)(lVar58 + iVar94);
              uVar84 = param_3[1];
              iVar67 = (int)uVar84 - (int)pbVar45;
            } while (iVar67 < (int)uVar91);
          }
          uStack_70 = (ulong *)&UNK_0051805f;
          puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                       (pbVar45,pbVar45 + (int)uVar91,uStack_60,bVar102);
          puVar49 = (ulong *)0x0;
          if ((ulong *)(pbVar45 + (int)uVar91) == puVar63) {
            puVar49 = puVar63;
          }
code_r0x0051806f:
          if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
            uStack_70 = (ulong *)&UNK_005180e2;
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar49;
          }
          return puVar49;
        }
        if ((uVar95 & 7) != 0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          uStack_50._0_2_ = uVar43;
          uStack_50._2_2_ = uVar35;
          uStack_4c = uVar79;
          uStack_48._0_2_ = uVar6;
          uStack_48._2_2_ = uVar36;
          uStack_44 = uVar97;
          uStack_40 = uVar37;
          uStack_3e = uVar38;
          bStack_3d = bVar4;
          bStack_3c = bVar3;
          bStack_3b = bVar39;
          bStack_3a = bVar40;
          bStack_39 = bVar41;
          goto code_r0x0050f155;
        }
        puVar52 = (ulong *)(long)(char)(byte)*puVar49;
        if ((long)puVar52 < 0) {
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if ((long)uVar84 < 0) {
            uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
            if ((long)uVar81 < 0) {
              uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
              if ((long)uVar84 < 0) {
                uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
                if ((long)uVar81 < 0) {
                  uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU
                                    );
                  if ((long)uVar84 < 0) {
                    uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a |
                                      0x3ffffffffffU);
                    if ((long)uVar81 < 0) {
                      uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                        0x1ffffffffffffU);
                      if ((long)uVar84 < 0) {
                        uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
                        if ((long)uVar81 < 0) {
                          uStack_38 = (ulong *)((long)puVar49 + 10);
                          bVar2 = *(byte *)((long)puVar49 + 9);
                          if (bVar2 != 1) {
                            if ((char)bVar2 < '\0') goto code_r0x005013a0;
                            if ((bVar2 & 1) == 0) {
                              uVar81 = uVar81 ^ 0x8000000000000000;
                            }
                          }
                        }
                        else {
                          uStack_38 = (ulong *)((long)puVar49 + 9);
                        }
                      }
                      else {
                        uStack_38 = puVar49 + 1;
                      }
                    }
                    else {
                      uStack_38 = (ulong *)((long)puVar49 + 7);
                    }
                  }
                  else {
                    uStack_38 = (ulong *)((long)puVar49 + 6);
                  }
                }
                else {
                  uStack_38 = (ulong *)((long)puVar49 + 5);
                }
              }
              else {
                uStack_38 = (ulong *)((long)puVar49 + 4);
              }
            }
            else {
              uStack_38 = (ulong *)((long)puVar49 + 3);
            }
            uVar84 = uVar84 & uVar81;
          }
          else {
            uStack_38 = (ulong *)((long)puVar49 + 2);
          }
          puVar52 = (ulong *)((ulong)puVar52 & uVar84);
        }
        else {
          uStack_38 = (ulong *)((long)puVar49 + 1);
        }
        puVar100 = (uint *)((long)puVar54 + (long)param_5);
        uVar85 = uVar92 & 0x600;
        uStack_60 = (ulong *)((ulong)CONCAT24(uVar92,(undefined4)uStack_60) & 0x1c0ffffffff);
        uVar91 = (uint)puVar52;
        puVar47 = uStack_38;
        if ((uVar92 & 0x1c0) == 0xc0) {
          uStack_50._0_2_ = uVar43;
          uStack_50._2_2_ = uVar35;
          uStack_4c = uVar79;
          uStack_48._0_2_ = uVar6;
          uStack_40 = uVar37;
          puVar46 = in_RAX;
          if (uVar85 == 0x200) {
            puVar52 = (ulong *)((ulong)puVar52 >> 1 ^ -(ulong)(uVar91 & 1));
            puVar46 = in_RAX;
          }
        }
        else {
          uStack_50._0_2_ = uVar43;
          uStack_50._2_2_ = uVar35;
          uStack_4c = uVar79;
          uStack_48._0_2_ = uVar6;
          uStack_40 = uVar37;
          puVar46 = in_RAX;
          if ((uVar92 & 0x1c0) == 0x80) {
            if ((uVar92 & 0x400) != 0) {
              puVar7 = *(ulong **)
                        ((long)param_5 + (ulong)(ushort)puVar100[2] * 8 + (ulong)(uint)param_5[3]);
              if (uVar85 == 0x600) {
                puVar54 = puVar7;
                uStack_48._2_2_ = uVar36;
                uStack_44 = uVar97;
                uStack_3e = uVar38;
                bStack_3d = bVar4;
                bStack_3c = bVar3;
                bStack_3b = bVar39;
                bStack_3a = bVar40;
                bStack_39 = bVar41;
                uStack_38 = in_RAX;
                if (((int)puVar7 <= (int)uVar91) &&
                   (puVar54 = (ulong *)((ulong)puVar7 >> 0x20), uStack_38 = in_RAX, puVar46 = in_RAX
                   , (int)uVar91 <= (int)((ulong)puVar7 >> 0x20))) goto code_r0x0050eff5;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f18d;
                uStack_58 = puVar52;
                uStack_50._0_2_ = uVar18;
                uStack_50._2_2_ = uVar14;
                uStack_4c = uVar16;
                uStack_48._0_2_ = uVar89;
                uStack_40 = uVar98;
                puVar54 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                             ((ulong)puVar52 & 0xffffffff,puVar7);
                param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
                param_3 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                puVar49 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                puVar52 = uStack_58;
                puVar47 = uStack_38;
                uVar79 = uStack_4c;
                uVar36 = uStack_48._2_2_;
                uVar97 = uStack_44;
                uVar38 = uStack_3e;
                bVar4 = bStack_3d;
                bVar3 = bStack_3c;
                bVar39 = bStack_3b;
                bVar40 = bStack_3a;
                bVar41 = bStack_39;
                puVar46 = uStack_38;
                if ((char)puVar54 != '\0') goto code_r0x0050eff5;
              }
              goto 
              _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
              ;
            }
            puVar46 = in_RAX;
            if (uVar85 == 0x200) {
              puVar52 = (ulong *)(long)(int)(uVar91 >> 1 ^ -(uVar91 & 1));
              puVar46 = in_RAX;
            }
          }
        }
code_r0x0050eff5:
        uStack_38 = puVar46;
        bStack_39 = bVar41;
        bStack_3a = bVar40;
        bStack_3b = bVar39;
        bStack_3c = bVar3;
        bStack_3d = bVar4;
        uStack_3e = uVar38;
        uStack_44 = uVar97;
        uStack_48._2_2_ = uVar36;
        if (uVar90 == 0x30) {
          uStack_40 = (ushort)param_3;
          uStack_3e = (undefined1)((ulong)param_3 >> 0x10);
          bStack_3d = (byte)((ulong)param_3 >> 0x18);
          bStack_3c = (byte)((ulong)param_3 >> 0x20);
          bStack_3b = (byte)((ulong)param_3 >> 0x28);
          bStack_3a = (byte)((ulong)param_3 >> 0x30);
          bStack_39 = (byte)((ulong)param_3 >> 0x38);
          uStack_70 = (ulong *)&UNK_0050f03c;
          uStack_38 = puVar47;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar100,(uVar95 & 0xfffffff8) >> 3,param_5,param_1);
          param_3 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar47 = uStack_38;
        }
        else if (uVar90 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
        }
        uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
        lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
        lVar56 = *(long *)((long)param_1 + uVar95);
        puVar49 = puVar47;
        if (lVar56 == lVar58) {
          uVar81 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
          uVar84 = param_1[1];
          if ((uVar84 & 1) != 0) {
            uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
          }
          uStack_40 = (ushort)param_3;
          uStack_3e = (undefined1)((ulong)param_3 >> 0x10);
          bStack_3d = (byte)((ulong)param_3 >> 0x18);
          bStack_3c = (byte)((ulong)param_3 >> 0x20);
          bStack_3b = (byte)((ulong)param_3 >> 0x28);
          bStack_3a = (byte)((ulong)param_3 >> 0x30);
          bStack_39 = (byte)((ulong)param_3 >> 0x38);
          uStack_58 = puVar52;
          uStack_38 = puVar47;
          if (uVar84 == 0) {
            uStack_70 = (ulong *)&UNK_0050f0b4;
            uStack_50._0_2_ = uVar93;
            uStack_50._2_2_ = uVar12;
            uStack_4c = uVar68;
            uStack_48._0_2_ = uVar87;
            uStack_48._2_2_ = uVar15;
            uStack_44 = uVar17;
            uVar48 = _Znwm(uVar81);
          }
          else {
            uStack_70 = (ulong *)&UNK_0050f0aa;
            uStack_50._0_2_ = uVar93;
            uStack_50._2_2_ = uVar12;
            uStack_4c = uVar68;
            uStack_48._0_2_ = uVar87;
            uStack_48._2_2_ = uVar15;
            uStack_44 = uVar17;
            uVar48 = _ZN6google8protobuf5Arena8AllocateEm(uVar84,uVar81 + 7 & 0xfffffffffffffff8);
          }
          *(undefined8 *)((long)param_1 + uVar95) = uVar48;
          uStack_70 = (ulong *)&UNK_0050f0c6;
          func_0x0099bda0(uVar48,lVar58,uVar81);
          lVar56 = *(long *)((long)param_1 + uVar95);
          param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          param_5 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          param_3 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar52 = uStack_58;
          puVar49 = uStack_38;
        }
        if (uStack_60._4_4_ == 0xc0) {
          *(ulong **)(lVar56 + (ulong)*puVar100) = puVar52;
          puVar63 = (ulong *)*param_3;
        }
        else if (uStack_60._4_4_ == 0x80) {
          *(int *)(lVar56 + (ulong)*puVar100) = (int)puVar52;
          puVar63 = (ulong *)*param_3;
        }
        else {
          *(bool *)(lVar56 + (ulong)*puVar100) = puVar52 != (ulong *)0x0;
          puVar63 = (ulong *)*param_3;
        }
        if (puVar63 <= puVar49) {
          if ((ulong)(ushort)*param_5 != 0) {
            puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar100 = *puVar100 | (uint)param_6;
          }
          return puVar49;
        }
        uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
        puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^ (ulong)(ushort)*puVar49)
        ;
        UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
code_r0x0050f155:
                    /* WARNING: Could not recover jumptable at 0x0050f163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar49,param_3,puVar63);
        return puVar49;
      case 10:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xb:
        uVar89 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar93 = uVar89 & 0x30;
        if (uVar93 == 0x20) {
          do {
            uVar91 = uVar61 & 7;
            if (uVar91 != 2) {
              uVar66 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
              if (uVar66 != 0xffffffff) {
                puVar100 = (uint *)((long)param_1 + (ulong)(uVar66 >> 5) * 4);
                *puVar100 = *puVar100 | 1 << ((byte)uVar66 & 0x1f);
              }
              uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
              lVar56 = *(long *)((long)param_1 + uVar95);
              uStack_58 = param_6;
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_48._0_2_ = uVar98;
              uStack_48._2_2_ = uVar13;
              uStack_44 = uStack_4c;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (lVar56 == lVar58) {
                uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10
                                                     );
                uVar84 = param_1[1];
                if ((uVar84 & 1) != 0) {
                  uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                }
                uStack_50._0_2_ = (ushort)lVar58;
                uStack_50._2_2_ = (undefined2)((ulong)lVar58 >> 0x10);
                uStack_4c = (uint)((ulong)lVar58 >> 0x20);
                uStack_44 = uVar96;
                if (uVar84 == 0) {
                  uStack_70 = (ulong *)&UNK_005182ff;
                  uStack_3e = uVar19;
                  bStack_3d = bVar5;
                  bStack_3c = bVar23;
                  bStack_3b = bVar26;
                  bStack_3a = bVar29;
                  bStack_39 = bVar32;
                  uStack_38 = param_1;
                  uVar48 = _Znwm(uStack_60);
                }
                else {
                  uStack_70 = (ulong *)&UNK_005182f5;
                  uStack_3e = uVar19;
                  bStack_3d = bVar5;
                  bStack_3c = bVar23;
                  bStack_3b = bVar26;
                  bStack_3a = bVar29;
                  bStack_39 = bVar32;
                  uStack_38 = param_1;
                  uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar84,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)uStack_38 + uVar95) = uVar48;
                uStack_70 = (ulong *)&UNK_00518317;
                func_0x0099bda0(uVar48,CONCAT44(uStack_4c,
                                                CONCAT22(uStack_50._2_2_,(ushort)uStack_50)),
                                uStack_60);
                lVar56 = *(long *)((long)uStack_38 + uVar95);
                param_5 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                param_1 = uStack_38;
                uVar79 = uStack_4c;
                uVar37 = uStack_40;
              }
              uStack_40 = uVar37;
              uStack_4c = uVar79;
              bVar41 = bStack_39;
              bVar40 = bStack_3a;
              bVar39 = bStack_3b;
              bVar3 = bStack_3c;
              bVar4 = bStack_3d;
              uVar38 = uStack_3e;
              uVar6 = uStack_40;
              uVar66 = uStack_4c;
              uVar35 = uStack_50._2_2_;
              uVar43 = (ushort)uStack_50;
              uStack_3e = (undefined1)((ulong)param_5 >> 0x10);
              bStack_3d = (byte)((ulong)param_5 >> 0x18);
              bStack_3c = (byte)((ulong)param_5 >> 0x20);
              bStack_3b = (byte)((ulong)param_5 >> 0x28);
              bStack_3a = (byte)((ulong)param_5 >> 0x30);
              bStack_39 = (byte)((ulong)param_5 >> 0x38);
              uStack_40 = (ushort)param_5;
              uStack_50._0_2_ = (ushort)lVar56;
              uStack_50._2_2_ = (undefined2)((ulong)lVar56 >> 0x10);
              uStack_4c = (uint)((ulong)lVar56 >> 0x20);
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar54) & 0x1c0) == 0xc0) {
                if (uVar91 == 1) {
                  uVar91 = *(uint *)((long)param_5 + (long)puVar54);
                  puVar63 = *(ulong **)(lVar56 + (ulong)uVar91);
                  uStack_38 = param_1;
                  if (puVar63 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                    uVar95 = param_1[1];
                    if ((uVar95 & 1) != 0) {
                      uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                    }
                    if (uVar95 == 0) {
                      uStack_70 = (ulong *)&UNK_005186b8;
                      puVar63 = (ulong *)_Znwm(0x10);
                      *puVar63 = 0;
                    }
                    else {
                      uStack_70 = (ulong *)&UNK_00518388;
                      puVar63 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                      *puVar63 = uVar95;
                    }
                    *(ulong **)
                     (CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)) +
                     (ulong)uVar91) = puVar63;
                    param_3 = (ulong *)CONCAT44(uStack_44,
                                                CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                    uVar43 = (ushort)uStack_50;
                    uVar35 = uStack_50._2_2_;
                    uVar66 = uStack_4c;
                  }
                  goto code_r0x005183c3;
                }
              }
              else if (uVar91 == 5) {
                uVar91 = *(uint *)((long)param_5 + (long)puVar54);
                puVar63 = *(ulong **)(lVar56 + (ulong)uVar91);
                uStack_38 = param_1;
                if (puVar63 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar95 = param_1[1];
                  if ((uVar95 & 1) != 0) {
                    uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
                  }
                  if (uVar95 == 0) {
                    uStack_70 = (ulong *)&UNK_005186de;
                    puVar63 = (ulong *)_Znwm(0x10);
                    *puVar63 = 0;
                  }
                  else {
                    uStack_70 = (ulong *)&UNK_005184e4;
                    puVar63 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                    *puVar63 = uVar95;
                  }
                  *(ulong **)
                   (CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)) + (ulong)uVar91)
                       = puVar63;
                  param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48))
                  ;
                  uVar43 = (ushort)uStack_50;
                  uVar35 = uStack_50._2_2_;
                  uVar66 = uStack_4c;
                }
                goto code_r0x00518523;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar66;
              uStack_40 = uVar6;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              goto code_r0x00518636;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar61 & 7) != 2);
          uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
          uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
          if (uVar91 != 0xffffffff) {
            puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
          }
          uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
          lVar56 = *(long *)((long)param_1 + uVar95);
          uStack_50._0_2_ = uVar18;
          uStack_50._2_2_ = uVar14;
          uStack_4c = uVar16;
          uStack_48._0_2_ = uVar87;
          uStack_48._2_2_ = uVar15;
          uStack_44 = uVar17;
          uStack_40 = uVar37;
          uVar91 = (uint)uVar43;
          if (lVar56 == lVar58) {
            uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar84 = param_1[1];
            if ((uVar84 & 1) != 0) {
              uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
            }
            uStack_58 = (ulong *)(ulong)CONCAT24(uVar43,(uint)uStack_58);
            if (uVar84 == 0) {
              uStack_70 = (ulong *)&UNK_0050f625;
              uStack_40 = uVar98;
              uStack_38 = puVar49;
              uVar48 = _Znwm(uStack_60);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050f5ff;
              uStack_40 = uVar98;
              uStack_38 = puVar49;
              uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar84,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
            }
            param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            *(undefined8 *)((long)param_1 + uVar95) = uVar48;
            uStack_70 = (ulong *)&UNK_0050f63c;
            func_0x0099bda0(uVar48,lVar58,uStack_60);
            lVar56 = *(long *)((long)param_1 + uVar95);
            param_3 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            puVar49 = uStack_38;
            uVar38 = uStack_3e;
            bVar4 = bStack_3d;
            bVar3 = bStack_3c;
            bVar39 = bStack_3b;
            bVar40 = bStack_3a;
            bVar41 = bStack_39;
            uVar91 = uStack_58._4_4_;
          }
          bStack_39 = bVar41;
          bStack_3a = bVar40;
          bStack_3b = bVar39;
          bStack_3c = bVar3;
          bStack_3d = bVar4;
          uStack_3e = uVar38;
          bVar4 = (byte)*puVar49;
          if ((char)bVar4 < '\0') {
            uStack_70 = (ulong *)&UNK_0050f66b;
            auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
            param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          }
          else {
            auVar103[8] = bVar4;
            auVar103._0_8_ = (byte *)((long)puVar49 + 1);
            auVar103._9_7_ = 0;
          }
          bVar41 = bStack_39;
          bVar40 = bStack_3a;
          bVar39 = bStack_3b;
          bVar3 = bStack_3c;
          bVar4 = bStack_3d;
          uVar38 = uStack_3e;
          uVar43 = uStack_40;
          uVar95 = auVar103._8_8_;
          uVar48 = auVar103._0_8_;
          param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          uVar84 = (ulong)*(uint *)((long)param_5 + (long)puVar54);
          uStack_3e = (undefined1)((ulong)param_3 >> 0x10);
          bStack_3d = (byte)((ulong)param_3 >> 0x18);
          bStack_3c = (byte)((ulong)param_3 >> 0x20);
          bStack_3b = (byte)((ulong)param_3 >> 0x28);
          bStack_3a = (byte)((ulong)param_3 >> 0x30);
          bStack_39 = (byte)((ulong)param_3 >> 0x38);
          uStack_40 = (ushort)param_3;
          if ((uVar91 & 0x1c0) == 0xc0) {
            if (*(undefined1 **)(lVar56 + uVar84) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_38 = (ulong *)CONCAT44(uStack_38._4_4_,auVar103._8_4_);
              if (uVar95 == 0) {
                uStack_70 = (ulong *)&UNK_0050f7e3;
                puVar49 = (ulong *)_Znwm(0x10);
                *puVar49 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f6cd;
                puVar49 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                *puVar49 = uVar95;
              }
              *(ulong **)(lVar56 + uVar84) = puVar49;
              uVar95 = (ulong)uStack_38 & 0xffffffff;
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              param_3 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              uVar43 = uStack_40;
              uVar38 = uStack_3e;
              bVar4 = bStack_3d;
              bVar3 = bStack_3c;
              bVar39 = bStack_3b;
              bVar40 = bStack_3a;
              bVar41 = bStack_39;
            }
            bStack_39 = bVar41;
            bStack_3a = bVar40;
            bStack_3b = bVar39;
            bStack_3c = bVar3;
            bStack_3d = bVar4;
            uStack_3e = uVar38;
            uStack_40 = uVar43;
            uStack_70 = (ulong *)&UNK_0050f6ed;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar48,uVar95);
          }
          else {
            if (*(undefined1 **)(lVar56 + uVar84) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_38 = (ulong *)CONCAT44(uStack_38._4_4_,auVar103._8_4_);
              if (uVar95 == 0) {
                uStack_70 = (ulong *)&UNK_0050f808;
                puVar49 = (ulong *)_Znwm(0x10,uVar48);
                *puVar49 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f728;
                puVar49 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x10);
                *puVar49 = uVar95;
              }
              *(ulong **)(lVar56 + uVar84) = puVar49;
              uVar95 = (ulong)uStack_38 & 0xffffffff;
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              param_3 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              uVar43 = uStack_40;
              uVar38 = uStack_3e;
              bVar4 = bStack_3d;
              bVar3 = bStack_3c;
              bVar39 = bStack_3b;
              bVar40 = bStack_3a;
              bVar41 = bStack_39;
            }
            bStack_39 = bVar41;
            bStack_3a = bVar40;
            bStack_3b = bVar39;
            bStack_3c = bVar3;
            bStack_3d = bVar4;
            uStack_3e = uVar38;
            uStack_40 = uVar43;
            uStack_70 = (ulong *)&UNK_0050f748;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar48,uVar95);
          }
          param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          if (puVar49 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar49) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar100 = *puVar100 | (uint)param_6;
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050f78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)param_5 + uVar95 * 2 + 0x38))
                                         (param_1,puVar49,param_3,
                                          *(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar49,param_5,param_6);
            return puVar49;
          }
          goto code_r0x005013a0;
        }
        uVar89 = uVar89 & 0x1c0;
        if (uVar89 == 0xc0) {
          if ((uVar61 & 7) == 1) {
code_r0x0050f3d8:
            puVar100 = (uint *)((long)puVar54 + (long)param_5);
            if (uVar93 == 0x30) {
              uStack_70 = (ulong *)&UNK_0050f420;
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_40 = uVar98;
              uStack_38 = puVar49;
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar100,uVar61 >> 3,param_5,param_1);
              param_3 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar49 = uStack_38;
            }
            else {
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_40 = uVar37;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (uVar93 == 0x10) {
                puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
              }
            }
            uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
            lVar56 = *(long *)((long)param_1 + uVar95);
            if (lVar56 == lVar58) {
              uVar91 = *(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
              uVar84 = param_1[1];
              if ((uVar84 & 1) != 0) {
                uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
              }
              uStack_40 = (ushort)param_3;
              uStack_3e = (undefined1)((ulong)param_3 >> 0x10);
              bStack_3d = (byte)((ulong)param_3 >> 0x18);
              bStack_3c = (byte)((ulong)param_3 >> 0x20);
              bStack_3b = (byte)((ulong)param_3 >> 0x28);
              bStack_3a = (byte)((ulong)param_3 >> 0x30);
              bStack_39 = (byte)((ulong)param_3 >> 0x38);
              uStack_48._0_2_ = (ushort)uVar91;
              uStack_48._2_2_ = (undefined2)(uVar91 >> 0x10);
              uStack_44 = 0;
              uStack_38 = puVar49;
              if (uVar84 == 0) {
                uStack_70 = (ulong *)&UNK_0050f496;
                uStack_60 = param_5;
                uStack_58 = param_6;
                uStack_50._0_2_ = uVar18;
                uStack_50._2_2_ = uVar14;
                uStack_4c = uVar16;
                uVar48 = _Znwm((ulong)uVar91);
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f48c;
                uStack_60 = param_5;
                uStack_58 = param_6;
                uStack_50._0_2_ = uVar18;
                uStack_50._2_2_ = uVar14;
                uStack_4c = uVar16;
                uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar84,(ulong)uVar91 + 7 & 0xfffffffffffffff8);
              }
              param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              *(undefined8 *)((long)param_1 + uVar95) = uVar48;
              uStack_70 = (ulong *)&UNK_0050f4ad;
              func_0x0099bda0(uVar48,lVar58,
                              CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)));
              lVar56 = *(long *)((long)param_1 + uVar95);
              param_3 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar49 = uStack_38;
              param_5 = uStack_60;
              param_6 = uStack_58;
            }
            if (uVar89 == 0xc0) {
              *(ulong *)(lVar56 + (ulong)*puVar100) = *puVar49;
              lVar58 = 8;
            }
            else {
              *(uint *)(lVar56 + (ulong)*puVar100) = (uint)*puVar49;
              lVar58 = 4;
            }
            puVar49 = (ulong *)((long)puVar49 + lVar58);
            if ((ulong *)*param_3 <= puVar49) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar100 = *puVar100 | (uint)param_6;
              }
              return puVar49;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050f511;
          }
        }
        else if ((uVar61 & 7) == 5) goto code_r0x0050f3d8;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
        uStack_50._0_2_ = uVar43;
        uStack_50._2_2_ = uVar35;
        uStack_4c = uVar79;
        uStack_48._0_2_ = uVar6;
        uStack_48._2_2_ = uVar36;
        uStack_44 = uVar97;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
code_r0x0050f511:
                    /* WARNING: Could not recover jumptable at 0x0050f51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar49;
      case 0xc:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xd:
        if ((uVar61 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050f87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*(code *)param_5[6])();
          return puVar49;
        }
        uVar89 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar93 = uVar89 & 0x30;
        if (uVar93 == 0x20) {
          uStack_60 = (ulong *)CONCAT44(uVar61,(undefined4)uStack_60);
          if ((uVar61 & 7) == 2) {
            uStack_58 = (ulong *)((long)param_5 + (long)puVar54);
            uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
            uVar91 = *(uint *)((long)uStack_58 + 4);
            if (uVar91 != 0xffffffff) {
              puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
              *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
            }
            uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
            lVar56 = *(long *)((long)param_1 + uVar95);
            uVar91 = (uint)uVar43;
            puStack_78 = puVar54;
            puStack_68 = param_6;
            uStack_50._0_2_ = uVar18;
            uStack_50._2_2_ = uVar14;
            uStack_4c = uVar16;
            uStack_48._0_2_ = uStack_40;
            uStack_48._2_2_ = uVar12;
            uStack_44 = uVar68;
            puVar63 = in_RAX;
            if (lVar56 == lVar58) {
              uStack_70 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
              uVar84 = param_1[1];
              if ((uVar84 & 1) != 0) {
                uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
              }
              uStack_38 = (ulong *)(ulong)CONCAT24(uVar43,(undefined4)uStack_38);
              if (uVar84 == 0) {
                puStack_80 = (ulong *)&UNK_005187cd;
                uStack_40 = uVar98;
                uVar48 = _Znwm(uStack_70);
              }
              else {
                puStack_80 = (ulong *)&UNK_005187b4;
                uStack_40 = uVar98;
                uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar84,(ulong)((long)uStack_70 + 7U) & 0xfffffffffffffff8);
              }
              lVar56 = CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              *(undefined8 *)(lVar56 + uVar95) = uVar48;
              puStack_80 = (ulong *)&UNK_005187e4;
              func_0x0099bda0(uVar48,lVar58,uStack_70);
              lVar56 = *(long *)(lVar56 + uVar95);
              param_3 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              uVar91 = uStack_38._4_4_;
              uVar98 = uStack_40;
              puVar63 = uStack_38;
            }
            uStack_38 = puVar63;
            uStack_40 = uVar98;
            puVar63 = puVar49;
            if ((uVar43 & 0x1c0) == 0x100) {
              uVar95 = *uStack_58;
              puVar54 = *(ulong **)(lVar56 + (ulong)(uint)uVar95);
              uVar66 = uVar91 & 0x600;
              if (puVar54 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar84 = *(ulong *)(CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                                   + 8);
                if ((uVar84 & 1) != 0) {
                  uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
                }
                uStack_38 = (ulong *)(CONCAT44(uVar91,(undefined4)uStack_38) & 0x600ffffffff);
                if (uVar84 == 0) {
                  puStack_80 = (ulong *)&UNK_00518cef;
                  puVar54 = (ulong *)_Znwm(0x18);
                  *puVar54 = 0;
                  puVar54[1] = 0;
                  puVar54[2] = 0;
                }
                else {
                  puStack_80 = (ulong *)&UNK_00518843;
                  puVar54 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar84,0x18);
                  *puVar54 = 0;
                  puVar54[1] = 0;
                  puVar54[2] = uVar84;
                }
                *(ulong **)(lVar56 + (ulong)(uint)uVar95) = puVar54;
                uVar66 = uStack_38._4_4_;
              }
              puVar63 = (ulong *)puVar54[2];
              uStack_38 = (ulong *)(CONCAT44(uVar66,(undefined4)uStack_38) & 0xffffffffffff);
              if ((puVar63 == (ulong *)0x0) || (*(ulong *)(*in_FS_OFFSET + -0x118) != *puVar63)) {
                param_3 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
              }
              else {
                uVar95 = *puVar54;
                param_3 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                if ((uVar95 & 1) == 0) {
                  uVar91 = (uint)(uVar95 != 0);
                }
                else {
                  uVar91 = *(uint *)(uVar95 + 3);
                }
                if (uVar91 == (uint)puVar54[1]) {
                  puVar52 = *(ulong **)(*in_FS_OFFSET + -0x110);
                  uStack_70 = puVar63;
                  uStack_58 = puVar52;
code_r0x00518909:
                  uVar95 = (ulong)(byte)*puVar49;
                  if ((char)(byte)*puVar49 < '\0') {
                    puStack_80 = (ulong *)&UNK_0051892b;
                    auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                    pbVar45 = auVar103._0_8_;
                    if (pbVar45 == (byte *)0x0) goto code_r0x00518bce;
                    uVar95 = auVar103._8_8_ & 0xffffffff;
                    param_3 = (ulong *)CONCAT17(bStack_39,
                                                CONCAT16(bStack_3a,
                                                         CONCAT15(bStack_3b,
                                                                  CONCAT14(bStack_3c,
                                                                           CONCAT13(bStack_3d,
                                                                                    CONCAT12(
                                                  uStack_3e,uStack_40))))));
                  }
                  else {
                    pbVar45 = (byte *)((long)puVar49 + 1);
                  }
                  uVar84 = puVar52[9];
                  if (uVar84 == 0) {
                    puStack_80 = (ulong *)&UNK_00518ac0;
                    pbVar88 = (byte *)_ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
                                                (puVar52);
                    param_3 = (ulong *)CONCAT17(bStack_39,
                                                CONCAT16(bStack_3a,
                                                         CONCAT15(bStack_3b,
                                                                  CONCAT14(bStack_3c,
                                                                           CONCAT13(bStack_3d,
                                                                                    CONCAT12(
                                                  uStack_3e,uStack_40))))));
                  }
                  else {
                    puVar52[9] = uVar84 - 0x18;
                    pbVar88 = (byte *)(puVar52[7] + uVar84 + -8);
                  }
                  pbVar88[0] = 0;
                  pbVar88[1] = 0;
                  pbVar88[2] = 0;
                  pbVar88[3] = 0;
                  pbVar88[4] = 0;
                  pbVar88[5] = 0;
                  pbVar88[6] = 0;
                  pbVar88[7] = 0;
                  pbVar88[8] = 0;
                  pbVar88[9] = 0;
                  pbVar88[10] = 0;
                  pbVar88[0xb] = 0;
                  pbVar88[0xc] = 0;
                  pbVar88[0xd] = 0;
                  pbVar88[0xe] = 0;
                  pbVar88[0xf] = 0;
                  pbVar88[0x10] = 0;
                  pbVar88[0x11] = 0;
                  pbVar88[0x12] = 0;
                  pbVar88[0x13] = 0;
                  pbVar88[0x14] = 0;
                  pbVar88[0x15] = 0;
                  pbVar88[0x16] = 0;
                  pbVar88[0x17] = 0;
                  iVar67 = (int)puVar54[1];
                  uVar84 = *puVar54;
                  if ((uVar84 & 1) == 0) {
                    if (iVar67 == 1) {
code_r0x00518acc:
                      puStack_80 = (ulong *)&UNK_00518add;
                      puVar55 = (undefined8 *)
                                _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                          (puVar54,1,uStack_70);
                      param_3 = (ulong *)CONCAT17(bStack_39,
                                                  CONCAT16(bStack_3a,
                                                           CONCAT15(bStack_3b,
                                                                    CONCAT14(bStack_3c,
                                                                             CONCAT13(bStack_3d,
                                                                                      CONCAT12(
                                                  uStack_3e,uStack_40))))));
                      *puVar55 = pbVar88;
                      goto code_r0x0051899e;
                    }
                    *puVar54 = (ulong)pbVar88;
                  }
                  else {
                    if (iVar67 == *(int *)(uVar84 - 1)) goto code_r0x00518acc;
                    *(byte **)(uVar84 + 7 + (long)iVar67 * 8) = pbVar88;
code_r0x0051899e:
                    *(int *)(*puVar54 + 3) = *(int *)(*puVar54 + 3) + 1;
                  }
                  *(int *)(puVar54 + 1) = (int)puVar54[1] + 1;
                  puStack_80 = (ulong *)&UNK_005189b8;
                  cVar42 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                     (param_3,uVar95,pbVar45);
                  if (cVar42 != '\0') {
                    lVar58 = (long)(int)uVar95;
                    puStack_80 = (ulong *)&UNK_005189ca;
                    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                              (pbVar88,lVar58);
                    puVar52 = uStack_58;
                    if ((*pbVar88 & 1) == 0) {
                      pbVar88 = pbVar88 + 1;
                    }
                    else {
                      pbVar88 = *(byte **)(pbVar88 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_00518a25;
                    func_0x0099bda0(pbVar88,pbVar45,lVar58);
                    puVar63 = (ulong *)(pbVar45 + lVar58);
                    if (uStack_38._4_4_ != 0x400) goto code_r0x00518a6e;
code_r0x00518a31:
                    puVar49 = (ulong *)((*puVar54 - 1) + (long)(int)puVar54[1] * 8);
                    if ((*puVar54 & 1) == 0) {
                      puVar49 = puVar54;
                    }
                    pbVar45 = (byte *)*puVar49;
                    if ((*pbVar45 & 1) == 0) {
                      uVar95 = (ulong)(*pbVar45 >> 1);
                      pbVar45 = pbVar45 + 1;
                    }
                    else {
                      uVar95 = *(ulong *)(pbVar45 + 8);
                      pbVar45 = *(byte **)(pbVar45 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_00518a6a;
                    iVar67 = utf8_range_IsValid(pbVar45,uVar95);
                    if (iVar67 != 0) goto code_r0x00518a6e;
                    lVar58 = CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                    lVar56 = (ulong)*(uint *)(lVar58 + 0x18) + lVar58;
                    pbVar45 = (byte *)(lVar56 + (ulong)*(ushort *)(lVar58 + 0x16) * 8);
                    uVar95 = (ulong)(*(ushort *)(lVar58 + 0x14) + 8 & 0xfffffff8);
                    pbVar88 = pbVar45 + uVar95;
                    uVar84 = ((long)((long)puStack_78 - (ulong)*(uint *)(lVar58 + 0x10)) >> 2) *
                             -0x5555555555555555;
                    uVar81 = uVar84 + 1;
                    if (uVar81 != 0) {
                      pbVar65 = pbVar45;
                      for (uVar86 = uVar81 & 7; uVar86 != 0; uVar86 = uVar86 - 1) {
                        uVar95 = uVar95 + *pbVar65;
                        pbVar65 = pbVar65 + 1;
                      }
                      if (6 < uVar84) {
                        do {
                          uVar95 = (ulong)pbVar65[7] + (ulong)pbVar65[6] +
                                   (ulong)pbVar65[5] + (ulong)pbVar65[4] + (ulong)pbVar65[3] +
                                   (ulong)pbVar65[2] + (ulong)pbVar65[1] + *pbVar65 + uVar95;
                          pbVar65 = pbVar65 + 8;
                        } while (pbVar65 != pbVar45 + uVar81);
                      }
                    }
                    puStack_80 = (ulong *)&UNK_00518bce;
                    _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                              (pbVar88,(long)*(char *)(lVar56 + (ulong)*(ushort *)(lVar58 + 0x16) *
                                                                8),pbVar45 + uVar95,
                               (long)(char)pbVar45[uVar81],&UNK_00178f3f,0);
                    goto code_r0x00518bce;
                  }
                  puStack_80 = (ulong *)&UNK_005189f1;
                  puVar63 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                               (param_3,pbVar45,uVar95,pbVar88);
                  if (puVar63 != (ulong *)0x0) {
                    puVar52 = uStack_58;
                    if (uStack_38._4_4_ == 0x400) goto code_r0x00518a31;
code_r0x00518a6e:
                    param_3 = (ulong *)CONCAT17(bStack_39,
                                                CONCAT16(bStack_3a,
                                                         CONCAT15(bStack_3b,
                                                                  CONCAT14(bStack_3c,
                                                                           CONCAT13(bStack_3d,
                                                                                    CONCAT12(
                                                  uStack_3e,uStack_40))))));
                    if (puVar63 < (ulong *)*param_3) goto code_r0x00518a7b;
                    goto code_r0x00518ca0;
                  }
                  goto code_r0x00518bce;
                }
              }
              do {
                puStack_80 = (ulong *)&UNK_00518c1c;
                pbVar45 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                            (puVar54,puVar54[2]);
                puStack_80 = (ulong *)&UNK_00518c2d;
                puVar63 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                             (pbVar45,puVar49,param_3);
                if (puVar63 == (ulong *)0x0) goto code_r0x00518bce;
                bVar102 = (*pbVar45 & 1) != 0;
                pbVar88 = pbVar45 + 1;
                if (bVar102) {
                  pbVar88 = *(byte **)(pbVar45 + 0x10);
                }
                uVar95 = (ulong)(*pbVar45 >> 1);
                if (bVar102) {
                  uVar95 = *(ulong *)(pbVar45 + 8);
                }
                puStack_80 = (ulong *)&UNK_00518c60;
                cVar42 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                   (pbVar88,uVar95,
                                    CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)),
                                    uStack_58,uStack_38._4_4_);
                if (cVar42 == '\0') goto code_r0x00518bce;
                param_3 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                if ((ulong *)*param_3 <= puVar63) goto code_r0x00518ca0;
                bVar4 = (byte)*puVar63;
                auVar141[8] = bVar4;
                auVar141._0_8_ = (byte *)((long)puVar63 + 1);
                auVar141._9_3_ = 0;
                if ((char)bVar4 < '\0') {
                  bVar3 = *(byte *)((long)puVar63 + 1);
                  iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                  if ((char)bVar3 < '\0') {
                    puStack_80 = (ulong *)&UNK_00518bfd;
                    auVar141 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar63,iVar67);
                    param_3 = (ulong *)CONCAT17(bStack_39,
                                                CONCAT16(bStack_3a,
                                                         CONCAT15(bStack_3b,
                                                                  CONCAT14(bStack_3c,
                                                                           CONCAT13(bStack_3d,
                                                                                    CONCAT12(
                                                  uStack_3e,uStack_40))))));
                  }
                  else {
                    auVar141._8_4_ = iVar67;
                    auVar141._0_8_ = (ushort *)((long)puVar63 + 2);
                  }
                }
                puVar49 = auVar141._0_8_;
              } while (auVar141._8_4_ == uStack_60._4_4_);
            }
code_r0x005188a0:
            puVar49 = puVar63;
            puVar63 = puVar49;
            if ((ulong *)*param_3 <= puVar49) {
code_r0x00518ca0:
              uVar43 = *(ushort *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              if (uVar43 != 0) {
                puVar100 = (uint *)(CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50))
                                   + (ulong)uVar43);
                *puVar100 = *puVar100 | (uint)puStack_68;
              }
              return puVar63;
            }
            param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
            param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            param_6 = puStack_68;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
                    /* WARNING: Could not recover jumptable at 0x005188e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
        puVar63 = (ulong *)((long)param_5 + (long)puVar54);
        if (uVar93 == 0x10) {
          puVar100 = (uint *)((long)param_1 + (ulong)(*(uint *)((long)puVar63 + 4) >> 5) * 4);
          *puVar100 = *puVar100 | 1 << ((byte)*(uint *)((long)puVar63 + 4) & 0x1f);
          uStack_50._0_2_ = uVar98;
          uStack_50._2_2_ = uVar13;
          uStack_48._0_2_ = uVar87;
          uStack_48._2_2_ = uVar15;
          uStack_44 = uVar17;
          uStack_40 = uVar18;
          uStack_3e = uVar101;
          bStack_3d = bVar2;
          bStack_3c = bVar22;
          bStack_3b = bVar25;
          bStack_3a = bVar28;
          bStack_39 = bVar31;
          uStack_38 = param_5;
        }
        else {
          uStack_50._0_2_ = uVar98;
          uStack_50._2_2_ = uVar13;
          uStack_48._0_2_ = uVar87;
          uStack_48._2_2_ = uVar15;
          uStack_44 = uVar17;
          uStack_40 = uVar18;
          uStack_3e = uVar101;
          bStack_3d = bVar2;
          bStack_3c = bVar22;
          bStack_3b = bVar25;
          bStack_3a = bVar28;
          bStack_39 = bVar31;
          uStack_38 = param_5;
          if (uVar93 == 0x30) {
            puStack_80 = (ulong *)&UNK_0050f8d1;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,0,puVar63,uVar61 >> 3,param_5,param_1);
            param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            param_1 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
          }
        }
        uStack_58 = (ulong *)((ulong)CONCAT24(uVar89,(uint)uStack_58) & 0x600ffffffff);
        uVar95 = (ulong)*(uint *)((ulong)(uint)uStack_38[3] + 8 + (long)uStack_38);
        lVar58 = *(long *)(*(long *)uStack_38[4] + uVar95);
        lVar56 = *(long *)((long)param_1 + uVar95);
        if (lVar56 == lVar58) {
          uStack_60 = (ulong *)(ulong)*(uint *)((long)uStack_38 + (ulong)(uint)uStack_38[3] + 0x10);
          uVar84 = param_1[1];
          if ((uVar84 & 1) != 0) {
            uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
          }
          puStack_78 = puVar49;
          puStack_68 = puVar63;
          if (uVar84 == 0) {
            puStack_80 = (ulong *)&UNK_0050f951;
            uStack_70 = puVar54;
            uVar48 = _Znwm(uStack_60);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f947;
            uStack_70 = puVar54;
            uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                               (uVar84,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
          }
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          *(undefined8 *)((long)param_1 + uVar95) = uVar48;
          puStack_80 = (ulong *)&UNK_0050f968;
          func_0x0099bda0(uVar48,lVar58,uStack_60);
          lVar56 = *(long *)((long)param_1 + uVar95);
          param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          puVar54 = uStack_70;
          puVar49 = puStack_78;
          puVar63 = puStack_68;
        }
        uVar95 = (ulong)(uint)*puVar63;
        if ((uVar89 & 0x1c0) == 0x140) {
          uVar84 = param_1[1];
          if ((uVar84 & 1) != 0) {
            uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
          }
          puVar63 = (ulong *)(lVar56 + uVar95);
          bVar4 = (byte)*puVar49;
          if ((char)bVar4 < '\0') {
            puStack_80 = (ulong *)&UNK_0050fac4;
            auVar118 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
            if (auVar118._0_8_ != 0) {
              param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              goto code_r0x0050fad9;
            }
            puVar49 = (ulong *)0x0;
          }
          else {
            auVar118[8] = bVar4;
            auVar118._0_8_ = (byte *)((long)puVar49 + 1);
            auVar118._9_3_ = 0;
code_r0x0050fad9:
            iVar67 = auVar118._8_4_;
            lVar58 = auVar118._0_8_;
            if ((int)(((uint)param_3[1] - auVar118._0_4_) + 0x10) < iVar67) {
              puStack_80 = (ulong *)&UNK_0050faf8;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar58,iVar67,puVar63,uVar84);
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fb1a;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar63,lVar58,(long)iVar67,uVar84,7);
              puVar49 = (ulong *)(lVar58 + iVar67);
            }
          }
          uVar95 = *puVar63;
          if ((uVar95 & 2) == 0) {
            if ((uVar95 & 1) == 0) {
              uVar91 = (uint)(uVar95 >> 2) & 0x3f;
              uVar95 = (long)puVar63 + 1;
            }
            else {
              uVar91 = *(uint *)(uVar95 + 7);
              uVar95 = *(ulong *)(uVar95 - 1);
            }
          }
          else {
            uVar91 = (uint)*(byte *)(uVar95 - 2);
          }
          if (uStack_58._4_2_ == 0x400) {
            puStack_80 = (ulong *)&UNK_0050fcb5;
            iVar67 = utf8_range_IsValid(uVar95,uVar91);
            if (iVar67 == 0) {
              pbVar45 = (byte *)((long)uStack_38 +
                                (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                (ulong)(uint)uStack_38[3]);
              uVar84 = (ulong)(*(ushort *)((long)uStack_38 + 0x14) + 8 & 0xfffffff8);
              lVar58 = (long)(char)*(byte *)((long)uStack_38 +
                                            (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                            (ulong)(uint)uStack_38[3]);
              pbVar88 = pbVar45 + uVar84;
              uVar81 = ((long)((long)puVar54 - (ulong)(uint)uStack_38[2]) >> 2) *
                       -0x5555555555555555;
              uVar95 = uVar81 + 1;
              pbVar65 = pbVar45 + uVar95;
              if (uVar95 != 0) {
                pbVar64 = pbVar45;
                for (uVar95 = uVar95 & 7; uVar95 != 0; uVar95 = uVar95 - 1) {
                  uVar84 = uVar84 + *pbVar64;
                  pbVar64 = pbVar64 + 1;
                }
                if (6 < uVar81) {
                  do {
                    uVar84 = (ulong)pbVar64[7] + (ulong)pbVar64[6] +
                             (ulong)pbVar64[5] + (ulong)pbVar64[4] + (ulong)pbVar64[3] +
                             (ulong)pbVar64[2] + (ulong)pbVar64[1] + *pbVar64 + uVar84;
                    pbVar64 = pbVar64 + 8;
                  } while (pbVar64 != pbVar65);
                }
              }
              goto code_r0x0050fdd9;
            }
          }
          uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_6 = (ulong *)CONCAT44(uStack_44,uVar91);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          param_5 = uStack_38;
          if (puVar49 != (ulong *)0x0) {
code_r0x0050fcd7:
            if ((ulong *)*puVar55 <= puVar49) {
              if ((ulong)(ushort)*uStack_38 != 0) {
                puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_38);
                *puVar100 = *puVar100 | uVar91;
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)uStack_38[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050fd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)uStack_38 + uVar95 * 2 + 0x38))
                                         (param_1,puVar49,puVar55,
                                          *(ulong *)((long)uStack_38 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar49);
            return puVar49;
          }
        }
        else {
          if ((uVar89 & 0x1c0) == 0x80) {
            if (uVar93 == 0x30) {
              lVar56 = *(long *)((long)param_1 + uVar95);
            }
            else {
              lVar56 = lVar56 + uVar95;
            }
            bVar4 = (byte)*puVar49;
            if ((char)bVar4 < '\0') {
              puStack_80 = (ulong *)&UNK_0050fa10;
              auVar117 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              param_3 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              param_5 = uStack_38;
              if (auVar117._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar117[8] = bVar4;
              auVar117._0_8_ = (byte *)((long)puVar49 + 1);
              auVar117._9_3_ = 0;
            }
            iVar94 = auVar117._8_4_;
            lVar58 = auVar117._0_8_;
            iVar62 = ((uint)param_3[1] - auVar117._0_4_) + 0x10;
            iVar67 = 0x200;
            if (iVar62 < 0x200) {
              iVar67 = iVar62;
            }
            puStack_80 = (ulong *)&UNK_0050fa55;
            cVar42 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                               (param_3,iVar94,iVar67);
            if (cVar42 == '\0') {
              puVar55 = (undefined8 *)
                        CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              puStack_80 = (ulong *)&UNK_0050fa9a;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (puVar55,lVar58,iVar94,lVar56);
              uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              param_6 = (ulong *)CONCAT44(uStack_44,uVar91);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              param_5 = uStack_38;
              if (puVar49 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fa6a;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (lVar56,lVar58,(long)iVar94);
              puVar49 = (ulong *)(lVar58 + iVar94);
              uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar55 = (undefined8 *)
                        CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            }
            goto code_r0x0050fcd7;
          }
          uVar84 = param_1[1];
          if ((uVar84 & 1) != 0) {
            uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
          }
          puVar63 = (ulong *)(lVar56 + uVar95);
          if (uVar84 == 0) {
            puStack_80 = (ulong *)&UNK_0050fb38;
            uVar48 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar63,0);
            puStack_80 = (ulong *)&UNK_0050fb46;
            puVar49 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar48,puVar49,param_3);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f9ec;
            puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar49,puVar63);
          }
          uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          if (puVar49 == (ulong *)0x0) {
            puStack_80 = (ulong *)&UNK_0050fe3e;
            func_0x0050d360(CONCAT17(bStack_39,
                                     CONCAT16(bStack_3a,
                                              CONCAT15(bStack_3b,
                                                       CONCAT14(bStack_3c,
                                                                CONCAT13(bStack_3d,
                                                                         CONCAT12(uStack_3e,
                                                                                  uStack_40)))))),
                            puVar63);
            param_1 = (ulong *)CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
            ;
            param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_5 = uStack_38;
            goto code_r0x005013a0;
          }
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          if (uStack_58._4_2_ != 0x400) goto code_r0x0050fcd7;
          pbVar45 = (byte *)(*puVar63 & 0xfffffffffffffffc);
          if ((*pbVar45 & 1) == 0) {
            uVar95 = (ulong)(*pbVar45 >> 1);
            pbVar45 = pbVar45 + 1;
          }
          else {
            uVar95 = *(ulong *)(pbVar45 + 8);
            pbVar45 = *(byte **)(pbVar45 + 0x10);
          }
          puStack_80 = (ulong *)&UNK_0050fb96;
          iVar67 = utf8_range_IsValid(pbVar45,uVar95);
          uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          puVar55 = (undefined8 *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          if (iVar67 != 0) goto code_r0x0050fcd7;
          pbVar45 = (byte *)((long)uStack_38 +
                            (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                            (ulong)(uint)uStack_38[3]);
          uVar84 = (ulong)(*(ushort *)((long)uStack_38 + 0x14) + 8 & 0xfffffff8);
          lVar58 = (long)(char)*(byte *)((long)uStack_38 +
                                        (ulong)*(ushort *)((long)uStack_38 + 0x16) * 8 +
                                        (ulong)(uint)uStack_38[3]);
          pbVar88 = pbVar45 + uVar84;
          uVar81 = ((long)((long)puVar54 - (ulong)(uint)uStack_38[2]) >> 2) * -0x5555555555555555;
          uVar95 = uVar81 + 1;
          pbVar65 = pbVar45 + uVar95;
          if (uVar95 != 0) {
            pbVar64 = pbVar45;
            for (uVar95 = uVar95 & 7; uVar95 != 0; uVar95 = uVar95 - 1) {
              uVar84 = uVar84 + *pbVar64;
              pbVar64 = pbVar64 + 1;
            }
            if (6 < uVar81) {
              do {
                uVar84 = (ulong)pbVar64[7] + (ulong)pbVar64[6] +
                         (ulong)pbVar64[5] + (ulong)pbVar64[4] + (ulong)pbVar64[3] +
                         (ulong)pbVar64[2] + (ulong)pbVar64[1] + *pbVar64 + uVar84;
                pbVar64 = pbVar64 + 8;
              } while (pbVar64 != pbVar65);
            }
          }
code_r0x0050fdd9:
          puStack_80 = (ulong *)&UNK_0050fdef;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar88,lVar58,pbVar45 + uVar84,(long)(char)*pbVar65,&UNK_00178f3f,0);
          param_6 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          param_1 = (ulong *)CONCAT17(bStack_39,
                                      CONCAT16(bStack_3a,
                                               CONCAT15(bStack_3b,
                                                        CONCAT14(bStack_3c,
                                                                 CONCAT13(bStack_3d,
                                                                          CONCAT12(uStack_3e,
                                                                                   uStack_40))))));
          param_5 = uStack_38;
        }
        goto code_r0x005013a0;
      case 0xe:
        uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar98 = uVar87 & 0x30;
        if (uVar98 != 0x20) {
          if ((uVar87 & 0x1c0) == 0x40) {
            if ((uVar61 & 7) != 3) goto code_r0x0050ff3a;
          }
          else if (((uVar87 & 0x1c0) != 0) || ((uVar61 & 7) != 2)) goto code_r0x0050ff3a;
          puVar100 = (uint *)((long)puVar54 + (long)param_5);
          plVar51 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar100[2] * 8 + (ulong)(uint)param_5[3]);
          uStack_48._0_2_ = (ushort)uStack_50;
          uStack_4c = uStack_44;
          uStack_44 = uVar44;
          if ((uVar87 & 0x600) == 0x400) {
            uStack_40 = (ushort)plVar51;
            uStack_3e = (undefined1)((ulong)plVar51 >> 0x10);
            bStack_3d = (byte)((ulong)plVar51 >> 0x18);
            bStack_3c = (byte)((ulong)plVar51 >> 0x20);
            bStack_3b = (byte)((ulong)plVar51 >> 0x28);
            bStack_3a = (byte)((ulong)plVar51 >> 0x30);
            bStack_39 = (byte)((ulong)plVar51 >> 0x38);
            uVar35 = uStack_48._2_2_;
            uStack_48._2_2_ = uStack_50._2_2_;
            uStack_38 = param_3;
          }
          else {
            if ((uVar87 & 0x600) != 0x200) {
              plVar51 = (long *)*plVar51;
            }
            uStack_70 = (ulong *)&UNK_00510176;
            uStack_60 = param_6;
            uStack_58 = param_5;
            uVar35 = uStack_50._2_2_;
            uStack_50._0_2_ = uVar89;
            uStack_50._2_2_ = uStack_48._2_2_;
            uStack_48._2_2_ = uVar35;
            uStack_38 = param_3;
            lVar56 = (**(code **)(*plVar51 + 0x20))(plVar51);
            lVar58 = *(long *)(lVar56 + 8);
            uStack_40 = (ushort)lVar58;
            uStack_3e = (undefined1)((ulong)lVar58 >> 0x10);
            bStack_3d = (byte)((ulong)lVar58 >> 0x18);
            bStack_3c = (byte)((ulong)lVar58 >> 0x20);
            bStack_3b = (byte)((ulong)lVar58 >> 0x28);
            bStack_3a = (byte)((ulong)lVar58 >> 0x30);
            bStack_39 = (byte)((ulong)lVar58 >> 0x38);
            puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            puVar63 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            param_5 = uStack_58;
            param_6 = uStack_60;
            uVar89 = (ushort)uStack_50;
            uVar35 = uStack_50._2_2_;
            if (lVar58 == 0) {
              uStack_70 = (ulong *)&UNK_005101a8;
              uVar48 = (**(code **)(*(long *)(lVar56 + 0x58) + 0x10))(plVar51);
              puVar63 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              uStack_40 = (ushort)uVar48;
              uStack_3e = (undefined1)((ulong)uVar48 >> 0x10);
              bStack_3d = (byte)((ulong)uVar48 >> 0x18);
              bStack_3c = (byte)((ulong)uVar48 >> 0x20);
              bStack_3b = (byte)((ulong)uVar48 >> 0x28);
              bStack_3a = (byte)((ulong)uVar48 >> 0x30);
              bStack_39 = (byte)((ulong)uVar48 >> 0x38);
              param_5 = uStack_58;
              param_6 = uStack_60;
              uVar89 = (ushort)uStack_50;
              uVar35 = uStack_50._2_2_;
            }
          }
          uStack_50._2_2_ = uVar35;
          uStack_50._0_2_ = uVar89;
          uVar91 = (uint)puVar63;
          if (uVar98 == 0x30) {
            uStack_70 = (ulong *)&UNK_0050ff6c;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,CONCAT17(bStack_39,
                                        CONCAT16(bStack_3a,
                                                 CONCAT15(bStack_3b,
                                                          CONCAT14(bStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
                       ,puVar100,(ulong)puVar63 >> 3 & 0x1fffffff,param_5,param_1);
            uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
            puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
          }
          else if (uVar98 == 0x10) {
            uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
            puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
          lVar56 = *(long *)((long)param_1 + uVar95);
          if (lVar56 == lVar58) {
            uStack_58 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar84 = param_1[1];
            if ((uVar84 & 1) != 0) {
              uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
            }
            if (uVar84 == 0) {
              uStack_70 = (ulong *)&UNK_0050ffe3;
              uStack_60 = param_1;
              uVar48 = _Znwm(uStack_58);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050ffd9;
              uStack_60 = param_1;
              uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar84,(ulong)((long)uStack_58 + 7U) & 0xfffffffffffffff8);
            }
            param_1 = uStack_60;
            *(undefined8 *)((long)uStack_60 + uVar95) = uVar48;
            uStack_70 = (ulong *)&UNK_0050fffb;
            func_0x0099bda0(uVar48,lVar58,uStack_58);
            lVar56 = *(long *)((long)param_1 + uVar95);
            puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
          }
          uVar95 = (ulong)*puVar100;
          puVar63 = uStack_38;
          if (*(long *)(lVar56 + uVar95) == 0) {
            uVar84 = param_1[1];
            if ((uVar84 & 1) != 0) {
              uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
            }
            puVar55 = *(undefined8 **)
                       (CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  ))) + 0x20);
            uVar48 = *puVar55;
            uStack_70 = (ulong *)&UNK_00510099;
            uVar48 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                               (puVar55 + 5,uVar48,uVar48,uVar84);
            *(undefined8 *)(lVar56 + uVar95) = uVar48;
            puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            uVar91 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48);
            puVar63 = uStack_38;
          }
          uStack_38 = puVar63;
          if ((uVar87 & 0x1c0) == 0x40) {
            uVar66 = *(uint *)((long)puVar63 + 0x58);
            *(uint *)((long)puVar63 + 0x58) = uVar66 - 1;
            if (0 < (int)uVar66) {
              *(uint *)((long)puVar63 + 0x5c) = *(uint *)((long)puVar63 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0051004d;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar56 + uVar95),puVar49,puVar63,
                                            CONCAT17(bStack_39,
                                                     CONCAT16(bStack_3a,
                                                              CONCAT15(bStack_3b,
                                                                       CONCAT14(bStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(ulong *)((long)puVar63 + 0x58) =
                   CONCAT44((int)(*(ulong *)((long)puVar63 + 0x58) >> 0x20) + -1,
                            (int)*(ulong *)((long)puVar63 + 0x58) + 1);
              uVar66 = *(uint *)((long)puVar63 + 0x50);
              *(uint *)((long)puVar63 + 0x50) = 0;
              if (uVar66 == uVar91) {
                return puVar49;
              }
            }
          }
          else {
            bVar4 = *(byte *)puVar49;
            if ((char)bVar4 < '\0') {
              uStack_70 = (ulong *)&UNK_005100cb;
              auVar119 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,bVar4);
              if (auVar119._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar119[8] = bVar4;
              auVar119._0_8_ = (byte *)((long)puVar49 + 1);
              auVar119._9_3_ = 0;
            }
            if (0 < (int)(uint)uStack_38[0xb]) {
              uVar66 = auVar119._8_4_ + (auVar119._0_4_ - (int)uStack_38[1]);
              *uStack_38 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + uStack_38[1];
              uVar91 = *(uint *)((long)uStack_38 + 0x1c);
              *(uint *)((long)uStack_38 + 0x1c) = uVar66;
              *(uint *)(uStack_38 + 0xb) = (uint)uStack_38[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0051011f;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar56 + uVar95),auVar119._0_8_,
                                            uStack_38,
                                            CONCAT17(bStack_39,
                                                     CONCAT16(bStack_3a,
                                                              CONCAT15(bStack_3b,
                                                                       CONCAT14(bStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(uStack_38 + 0xb) = (uint)uStack_38[0xb] + 1;
              uVar91 = (uVar91 - uVar66) + *(uint *)((long)uStack_38 + 0x1c);
              *(uint *)((long)uStack_38 + 0x1c) = uVar91;
              if ((uint)uStack_38[10] == 0) {
                *uStack_38 = (long)(int)((int)uVar91 >> 0x1f & uVar91) + uStack_38[1];
                return puVar49;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar87 & 0x1c0) == 0x40) {
          if ((uVar61 & 7) == 3) {
            uStack_50._0_2_ = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
            uVar91 = (uint)(ushort)uStack_50;
            uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            puVar63 = *(ulong **)(*(long *)param_5[4] + uVar95);
            puVar52 = *(ulong **)((long)param_1 + uVar95);
            uStack_60 = param_6;
            uStack_44 = uVar97;
            uStack_40 = uVar18;
            uStack_3e = uVar101;
            bStack_3d = bVar2;
            bStack_3c = bVar22;
            bStack_3b = bVar25;
            bStack_3a = bVar28;
            bStack_39 = bVar31;
            uStack_38 = param_5;
            uStack_48 = uVar66;
            if (puVar52 == puVar63) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar84 = param_1[1];
              if ((uVar84 & 1) != 0) {
                uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
              }
              uStack_50._2_2_ = 0;
              uStack_44 = 0;
              uStack_58 = puVar63;
              uStack_48 = uVar44;
              if (uVar84 == 0) {
                uStack_70 = (ulong *)&UNK_005191b3;
                uVar48 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_0051918f;
                uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar84,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              *(undefined8 *)((long)param_1 + uVar95) = uVar48;
              uStack_70 = (ulong *)&UNK_005191cc;
              func_0x0099bda0(uVar48,uStack_58,puStack_68);
              puVar52 = *(ulong **)((long)param_1 + uVar95);
              puVar54 = (ulong *)CONCAT44(uStack_44,uStack_48);
              uVar91 = CONCAT22(uStack_50._2_2_,(ushort)uStack_50);
            }
            puVar63 = (ulong *)(ulong)*(uint *)((long)uStack_38 + (long)puVar54);
            pauVar57 = *(undefined1 (**) [16])((long)puVar52 + (long)puVar63);
            if (pauVar57 == (undefined1 (*) [16])_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_50._0_2_ = (ushort)uVar91;
              uStack_50._2_2_ = (undefined2)(uVar91 >> 0x10);
              uStack_48._0_2_ = (ushort)puVar54;
              uStack_48._2_2_ = (undefined2)((ulong)puVar54 >> 0x10);
              uStack_44 = (uint)((ulong)puVar54 >> 0x20);
              uStack_58 = puVar63;
              if (uVar95 == 0) {
                uStack_70 = (ulong *)&UNK_00519477;
                pauVar57 = (undefined1 (*) [16])_Znwm(0x18);
                *pauVar57 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar57[1] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00519222;
                pauVar57 = (undefined1 (*) [16])_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x18);
                *pauVar57 = (undefined1  [16])0x0;
                *(ulong *)pauVar57[1] = uVar95;
              }
              *(undefined1 (**) [16])((long)puVar52 + (long)uStack_58) = pauVar57;
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar54 = (ulong *)CONCAT44(uStack_44,uStack_48);
              uVar91 = (uint)(ushort)uStack_50;
            }
            plVar51 = *(long **)((long)uStack_38 +
                                (ulong)*(ushort *)((long)(uStack_38 + 1) + (long)puVar54) * 8 +
                                (ulong)(uint)uStack_38[3]);
            uStack_50._0_2_ = (ushort)pauVar57;
            uStack_50._2_2_ = (undefined2)((ulong)pauVar57 >> 0x10);
            uStack_4c = (uint)((ulong)pauVar57 >> 0x20);
            plVar59 = plVar51;
            if ((uVar91 & 0x600) != 0x400) {
              uStack_48._0_2_ = (ushort)puVar54;
              uStack_48._2_2_ = (undefined2)((ulong)puVar54 >> 0x10);
              uStack_44 = (uint)((ulong)puVar54 >> 0x20);
              if ((uVar91 & 0x600) != 0x200) {
                plVar51 = (long *)*plVar51;
              }
              uStack_70 = (ulong *)&UNK_00519424;
              lVar58 = (**(code **)(*plVar51 + 0x20))(plVar51);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar54 = (ulong *)CONCAT44(uStack_44,uStack_48);
              plVar59 = *(long **)(lVar58 + 8);
              if (*(long **)(lVar58 + 8) == (long *)0x0) {
                uStack_70 = (ulong *)&UNK_00519446;
                plVar59 = (long *)(**(code **)(*(long *)(lVar58 + 0x58) + 0x10))(plVar51);
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
              }
            }
            uVar91 = *(uint *)((long)((long)uStack_38 + 4) + (long)puVar54);
            puVar63 = puVar49;
            if (uVar91 != 0xffffffff) {
              puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
              *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
            }
            do {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)&UNK_005192cc;
              uVar48 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar59,CONCAT44(uStack_4c,
                                                   CONCAT22(uStack_50._2_2_,(ushort)uStack_50)),
                                  uVar95);
              uVar95 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar95 - 1;
              if ((int)(uint)uVar95 < 1) {
code_r0x0051937b:
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                param_5 = uStack_38;
                param_6 = uStack_60;
                goto code_r0x005013a0;
              }
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_005192f7;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar48,puVar63,param_3,plVar59);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar95 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((puVar49 == (ulong *)0x0) || ((uint)uVar95 != uVar61)) goto code_r0x0051937b;
              if ((ulong *)*param_3 <= puVar49) {
                uVar43 = (ushort)*uStack_38;
                param_1 = (ulong *)CONCAT17(bStack_39,
                                            CONCAT16(bStack_3a,
                                                     CONCAT15(bStack_3b,
                                                              CONCAT14(bStack_3c,
                                                                       CONCAT13(bStack_3d,
                                                                                CONCAT12(uStack_3e,
                                                                                         uStack_40))
                                                                      ))));
                goto joined_r0x00519405;
              }
              bVar4 = (byte)*puVar49;
              auVar144[8] = bVar4;
              auVar144._0_8_ = (byte *)((long)puVar49 + 1);
              auVar144._9_3_ = 0;
              if ((char)bVar4 < '\0') {
                bVar3 = *(byte *)((long)puVar49 + 1);
                iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                if ((char)bVar3 < '\0') {
                  uStack_70 = (ulong *)&UNK_00519362;
                  auVar144 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar49,iVar67);
                  if (auVar144._0_8_ == 0) goto code_r0x0051937b;
                }
                else {
                  auVar144._8_4_ = iVar67;
                  auVar144._0_8_ = (ushort *)((long)puVar49 + 2);
                }
              }
              puVar63 = auVar144._0_8_;
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
            } while (auVar144._8_4_ == uVar61);
            if ((ulong *)*param_3 <= puVar49) {
              uVar43 = (ushort)*uStack_38;
joined_r0x00519405:
              if (uVar43 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar43) =
                     *(uint *)((long)param_1 + (ulong)uVar43) | (uint)uStack_60;
              }
              return puVar49;
            }
            uVar95 = (ulong)((uint)(byte)uStack_38[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)uStack_38 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)uStack_38 + uVar95 * 2 + 0x38);
            param_5 = uStack_38;
            param_6 = uStack_60;
            uVar66 = uStack_48;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
          uStack_48 = uVar66;
                    /* WARNING: Could not recover jumptable at 0x005191a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
        if ((uVar87 & 0x1c0) == 0) {
          uStack_60 = (ulong *)CONCAT44(uVar61,(undefined4)uStack_60);
          if ((uVar61 & 7) == 2) {
            uVar43 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
            uVar66 = (uint)uVar43;
            uVar95 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar58 = *(long *)(*(long *)param_5[4] + uVar95);
            lVar56 = *(long *)((long)param_1 + uVar95);
            uStack_58 = param_6;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uStack_40;
            uStack_48._2_2_ = uVar12;
            uStack_44 = uVar68;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            uStack_38 = param_1;
            uStack_50 = uVar91;
            if (lVar56 == lVar58) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar84 = param_1[1];
              if ((uVar84 & 1) != 0) {
                uVar84 = *(ulong *)(uVar84 & 0xfffffffffffffffe);
              }
              uStack_3e = 0;
              bStack_3d = 0;
              uStack_4c = 0;
              uStack_50 = uVar44;
              if (uVar84 == 0) {
                uStack_70 = (ulong *)&UNK_00518dc0;
                uStack_40 = uVar43;
                uVar48 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_00518d9c;
                uStack_40 = uVar43;
                uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar84,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              param_1 = uStack_38;
              *(undefined8 *)((long)uStack_38 + uVar95) = uVar48;
              uStack_70 = (ulong *)&UNK_00518dd8;
              func_0x0099bda0(uVar48,lVar58,puStack_68);
              lVar56 = *(long *)((long)param_1 + uVar95);
              param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              puVar54 = (ulong *)CONCAT44(uStack_4c,uStack_50);
              uVar66 = CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40));
              uVar37 = uStack_40;
            }
            uStack_40 = uVar37;
            uVar91 = *(uint *)((long)param_5 + (long)puVar54);
            puVar55 = *(undefined8 **)(lVar56 + (ulong)uVar91);
            if (puVar55 == (undefined8 *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar95 = param_1[1];
              uStack_50._0_2_ = (ushort)uVar91;
              uStack_50._2_2_ = (undefined2)(uVar91 >> 0x10);
              uStack_4c = 0;
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_40 = (ushort)uVar66;
              uStack_3e = (undefined1)(uVar66 >> 0x10);
              bStack_3d = (byte)(uVar66 >> 0x18);
              if (uVar95 == 0) {
                uStack_70 = (ulong *)&UNK_005190e4;
                puVar55 = (undefined8 *)_Znwm(0x18);
                *puVar55 = 0;
                puVar55[1] = 0;
                puVar55[2] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00518e2d;
                puVar55 = (undefined8 *)_ZN6google8protobuf5Arena8AllocateEm(uVar95,0x18);
                *puVar55 = 0;
                puVar55[1] = 0;
                puVar55[2] = uVar95;
              }
              *(undefined8 **)(lVar56 + CONCAT44(uStack_4c,uStack_50)) = puVar55;
              param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              uVar66 = CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40));
              param_1 = uStack_38;
            }
            plVar51 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                                (ulong)(uint)param_5[3]);
            if ((uVar66 & 0x600) == 0x400) {
              uStack_40 = (ushort)plVar51;
              uStack_3e = (undefined1)((ulong)plVar51 >> 0x10);
              bStack_3d = (byte)((ulong)plVar51 >> 0x18);
              bStack_3c = (byte)((ulong)plVar51 >> 0x20);
              bStack_3b = (byte)((ulong)plVar51 >> 0x28);
              bStack_3a = (byte)((ulong)plVar51 >> 0x30);
              bStack_39 = (byte)((ulong)plVar51 >> 0x38);
            }
            else {
              if ((uVar66 & 0x600) != 0x200) {
                plVar51 = (long *)*plVar51;
              }
              uStack_70 = (ulong *)&UNK_00519084;
              lVar56 = (**(code **)(*plVar51 + 0x20))(plVar51);
              lVar58 = *(long *)(lVar56 + 8);
              uStack_40 = (ushort)lVar58;
              uStack_3e = (undefined1)((ulong)lVar58 >> 0x10);
              bStack_3d = (byte)((ulong)lVar58 >> 0x18);
              bStack_3c = (byte)((ulong)lVar58 >> 0x20);
              bStack_3b = (byte)((ulong)lVar58 >> 0x28);
              bStack_3a = (byte)((ulong)lVar58 >> 0x30);
              bStack_39 = (byte)((ulong)lVar58 >> 0x38);
              param_1 = uStack_38;
              if (lVar58 == 0) {
                uStack_70 = (ulong *)&UNK_005190af;
                uVar48 = (**(code **)(*(long *)(lVar56 + 0x58) + 0x10))(plVar51,puVar55);
                uStack_40 = (ushort)uVar48;
                uStack_3e = (undefined1)((ulong)uVar48 >> 0x10);
                bStack_3d = (byte)((ulong)uVar48 >> 0x18);
                bStack_3c = (byte)((ulong)uVar48 >> 0x20);
                bStack_3b = (byte)((ulong)uVar48 >> 0x28);
                bStack_3a = (byte)((ulong)uVar48 >> 0x30);
                bStack_39 = (byte)((ulong)uVar48 >> 0x38);
                param_1 = uStack_38;
              }
            }
            uVar91 = *(uint *)(CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)) + 4 +
                              (long)puVar54);
            puVar63 = puVar49;
            if (uVar91 != 0xffffffff) {
              puVar100 = (uint *)((long)uStack_38 + (ulong)(uVar91 >> 5) * 4);
              *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
              param_1 = uStack_38;
            }
            do {
              uVar95 = param_1[1];
              if ((uVar95 & 1) != 0) {
                uVar95 = *(ulong *)(uVar95 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)&UNK_00518ee0;
              uVar48 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (CONCAT17(bStack_39,
                                           CONCAT16(bStack_3a,
                                                    CONCAT15(bStack_3b,
                                                             CONCAT14(bStack_3c,
                                                                      CONCAT13(bStack_3d,
                                                                               CONCAT12(uStack_3e,
                                                                                        uStack_40)))
                                                            ))),puVar55,uVar95);
              bVar4 = (byte)*puVar63;
              if ((char)bVar4 < '\0') {
                uStack_70 = (ulong *)&UNK_00518efa;
                auVar142 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar63,bVar4);
                if (auVar142._0_8_ != 0) goto code_r0x00518f06;
code_r0x00518fd9:
                param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                param_1 = uStack_38;
                param_6 = uStack_58;
                goto code_r0x005013a0;
              }
              auVar142[8] = bVar4;
              auVar142._0_8_ = (byte *)((long)puVar63 + 1);
              auVar142._9_3_ = 0;
code_r0x00518f06:
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x00518fd9;
              uVar66 = auVar142._8_4_ + (auVar142._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
              uVar91 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar66;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_00518f55;
              puVar49 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar48,auVar142._0_8_,param_3,
                                            CONCAT17(bStack_39,
                                                     CONCAT16(bStack_3a,
                                                              CONCAT15(bStack_3b,
                                                                       CONCAT14(bStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar91;
              if ((uint)param_3[10] != 0) goto code_r0x00518fd9;
              puVar63 = (ulong *)((long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1]);
              *param_3 = (ulong)puVar63;
              if (puVar49 == (ulong *)0x0) goto code_r0x00518fd9;
              if (puVar63 <= puVar49) {
                uVar43 = *(ushort *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
                goto joined_r0x00519063;
              }
              bVar4 = (byte)*puVar49;
              auVar143[8] = bVar4;
              auVar143._0_8_ = (byte *)((long)puVar49 + 1);
              auVar143._9_3_ = 0;
              if ((char)bVar4 < '\0') {
                bVar3 = *(byte *)((long)puVar49 + 1);
                iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                if ((char)bVar3 < '\0') {
                  uStack_70 = (ulong *)&UNK_00518fc0;
                  auVar143 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar49,iVar67);
                  if (auVar143._0_8_ == 0) goto code_r0x00518fd9;
                }
                else {
                  auVar143._8_4_ = iVar67;
                  auVar143._0_8_ = (ushort *)((long)puVar49 + 2);
                }
              }
              puVar63 = auVar143._0_8_;
              param_1 = uStack_38;
            } while (auVar143._8_4_ == uStack_60._4_4_);
            if ((ulong *)*param_3 <= puVar49) {
              uVar43 = *(ushort *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
joined_r0x00519063:
              if (uVar43 != 0) {
                *(uint *)((long)uStack_38 + (ulong)uVar43) =
                     *(uint *)((long)uStack_38 + (ulong)uVar43) | (uint)uStack_58;
              }
              return puVar49;
            }
            param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
            puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar49);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
            param_6 = uStack_58;
            uVar91 = uStack_50;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_40 = uVar37;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
          }
          uStack_50 = uVar91;
                    /* WARNING: Could not recover jumptable at 0x00518db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar49,param_3,puVar63,param_5,param_6);
          return puVar49;
        }
code_r0x0050ff3a:
                    /* WARNING: Could not recover jumptable at 0x0050ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*(code *)param_5[6])();
        return puVar49;
      case 0xf:
        ppuVar69 = &puStack_98;
        ppuVar74 = &puStack_98;
        ppuVar73 = &puStack_98;
        uStack_38 = (ulong *)in_FS_OFFSET[5];
        uStack_50._0_2_ = *(ushort *)((long)(param_5 + 1) + (long)puVar54);
        puVar46 = (ulong *)(ulong)(ushort)uStack_50;
        puVar47 = (ulong *)((ulong)(uint)param_5[3] + (long)param_5);
        bStack_3d = *(byte *)((long)puVar47 + (long)puVar46 * 8 + 4);
        if (((bStack_3d & 1) != 0) && ((uVar61 & 7) == 2)) {
          puStack_78 = (ulong *)((long)puVar54 + (long)param_5);
          uVar84 = (ulong)(uint)puVar47[1];
          lVar58 = *(long *)(*(long *)param_5[4] + uVar84);
          lVar56 = *(long *)((long)param_1 + uVar84);
          unaff_R13 = puVar49;
          uVar91 = (uint)puVar47[(long)puVar46];
          uStack_70 = puVar63;
          puStack_68 = param_6;
          uStack_60 = param_5;
          uStack_48._0_2_ = uVar18;
          uStack_48._2_2_ = uVar14;
          uStack_44 = uVar16;
          uStack_40 = uVar37;
          uStack_3e = uVar38;
          bStack_3c = bVar3;
          bStack_3b = bVar39;
          bStack_3a = bVar40;
          bStack_39 = bVar41;
          if (lVar56 == lVar58) {
            uStack_58 = (ulong *)CONCAT44(uStack_58._4_4_,(uint)puVar47[(long)puVar46]);
            puStack_80 = (ulong *)(ulong)(uint)puVar47[2];
            uVar81 = param_1[1];
            if ((uVar81 & 1) != 0) {
              uVar81 = *(ulong *)(uVar81 & 0xfffffffffffffffe);
            }
            uStack_50._2_2_ = 0;
            uStack_4c = 0;
            if (uVar81 == 0) {
              puStack_88 = puVar49;
              uVar48 = _Znwm(puStack_80);
            }
            else {
              puStack_88 = puVar49;
              uVar48 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar81,(ulong)((long)puStack_80 + 7U) & 0xfffffffffffffff8);
            }
            lVar56 = CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
            *(undefined8 *)(lVar56 + uVar84) = uVar48;
            func_0x0099bda0(uVar48,lVar58,puStack_80);
            lVar56 = *(long *)(lVar56 + uVar84);
            puVar46 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
            unaff_R13 = puStack_88;
            uVar91 = (uint)uStack_58;
          }
          puVar49 = puVar46;
          param_1 = (ulong *)(ulong)uVar91;
          unaff_R15 = (ulong *)((ulong)(uint)*puStack_78 + lVar56);
          puVar63 = puStack_78;
          if ((bStack_3d & 2) == 0) {
            ppuVar74 = &puStack_98;
            if ((*unaff_R15 & 1) != 0) {
code_r0x005107d4:
              uStack_58 = (ulong *)CONCAT44(uStack_58._4_4_,(int)param_1);
              uStack_50._0_2_ = (ushort)puVar49;
              uStack_50._2_2_ = (undefined2)((ulong)puVar49 >> 0x10);
              uStack_4c = (uint)((ulong)puVar49 >> 0x20);
              *(undefined **)((long)ppuVar73 + -8) = &UNK_005107f2;
              (*_ZN6google8protobuf8internal20MapFieldBaseForParse22sync_map_with_repeatedE)
                        (unaff_R15,1);
              param_1 = (ulong *)((ulong)uStack_58 & 0xffffffff);
              puVar49 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              ppuVar74 = ppuVar73;
            }
            unaff_R15 = unaff_R15 + 1;
          }
          uVar91 = *(uint *)((long)puVar63 + 4);
          if (uVar91 != 0xffffffff) {
            puVar100 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)) +
                               (ulong)(uVar91 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
          }
          puVar47 = puVar47 + (long)puVar49;
          uStack_50._0_2_ = (ushort)puVar47;
          uStack_50._2_2_ = (undefined2)((ulong)puVar47 >> 0x10);
          uStack_4c = (uint)((ulong)puVar47 >> 0x20);
          uStack_58 = (ulong *)((ulong)param_1 | (ulong)bStack_3d << 0x20);
          ppuVar70 = ppuVar74;
          goto code_r0x00510340;
        }
        uStack_50._0_2_ = uVar43;
        uStack_50._2_2_ = uVar35;
        uStack_4c = uVar79;
        uStack_48._0_2_ = uVar18;
        uVar6 = uVar18;
        uStack_48._2_2_ = uVar14;
        uVar36 = uVar14;
        uStack_44 = uVar16;
        uVar97 = uVar16;
        bVar4 = bStack_3d;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
        puVar47 = uStack_38;
        if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
code_r0x0051080d:
          *(undefined **)((long)ppuVar69 + -8) = &UNK_00510812;
          func_0x0099bd00();
code_r0x00510812:
          UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
          puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
          return puVar49;
        }
      case 0:

        _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
        uStack_38 = puVar47;
        bStack_3d = bVar4;
        uStack_44 = uVar97;
        uStack_48._2_2_ = uVar36;
        uStack_48._0_2_ = uVar6;
        uStack_4c = uVar79;
        uStack_50._2_2_ = uVar35;
        uStack_50._0_2_ = uVar43;
                    /* WARNING: Could not recover jumptable at 0x005018e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar49 = (ulong *)(*(code *)param_5[6])(param_1,puVar49,param_3,puVar63,param_5,param_6);
        return puVar49;
      }
      uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
      uVar89 = uVar87 & 0x30;
      if (uVar89 == 0x20) {

        _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
        if ((uVar95 & 7) != 0) {
          if ((uVar61 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00510834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(*(code *)param_5[6])();
            return puVar49;
          }

          _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
          :
          lVar58 = in_FS_OFFSET[5];
          if ((uVar61 & 7) != 2) goto code_r0x0050dc60;
          uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
          uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
          if (uVar91 != 0xffffffff) {
            puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
            *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar100 = *puVar100 | uVar99;
          }
          uVar98 = uVar87 >> 6;
          if ((uVar98 & 7) == 0) {
            uStack_50._0_2_ = uVar43;
            uStack_50._2_2_ = uVar35;
            uStack_4c = uVar79;
            uStack_48._0_2_ = uVar6;
            uStack_48._2_2_ = uVar36;
            uStack_44 = uVar97;
            uStack_3e = uVar38;
            bStack_3d = bVar4;
            bStack_3c = bVar3;
            bStack_3b = bVar39;
            bStack_3a = bVar40;
            bStack_39 = bVar41;
            if (in_FS_OFFSET[5] == lVar58) {
              pbVar45 = (byte *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar54));
              uStack_38 = (ulong *)in_FS_OFFSET[5];
              uVar95 = (ulong)(byte)*puVar49;
              if ((char)(byte)*puVar49 < '\0') {
                uStack_60 = (ulong *)&UNK_00513380;
                uStack_40 = uVar37;
                auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                pbVar88 = auVar103._0_8_;
                if (pbVar88 == (byte *)0x0) goto code_r0x00513408;
                uVar95 = auVar103._8_8_ & 0xffffffff;
              }
              else {
                pbVar88 = (byte *)((long)puVar49 + 1);
                uStack_40 = uVar37;
              }
              goto code_r0x00513390;
            }
            goto code_r0x0050dddd;
          }
          uVar87 = uVar87 & 0x600;
          if ((uVar98 & 7) == 2) {
            puVar52 = (ulong *)((ulong)*(uint *)((long)param_5 + (long)puVar54) + (long)param_1);
            switch(uVar87) {
            default:
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (in_FS_OFFSET[5] == lVar58) {
                uStack_38 = (ulong *)in_FS_OFFSET[5];
                uVar95 = (ulong)(byte)*puVar49;
                if ((char)(byte)*puVar49 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512740;
                  uStack_40 = uVar37;
                  auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                  puVar49 = auVar103._0_8_;
                  if (puVar49 == (ulong *)0x0) goto code_r0x0051288a;
                  uVar95 = auVar103._8_8_ & 0xffffffff;
                }
                else {
                  puVar49 = (ulong *)((long)puVar49 + 1);
                  uStack_40 = uVar37;
                }
                puVar63 = (ulong *)param_3[1];
                iVar67 = (int)puVar63 - (int)puVar49;
                uVar91 = (uint)uVar95;
                if ((int)uVar91 <= iVar67) goto code_r0x00512894;
                uStack_70 = param_3;
                goto code_r0x00512769;
              }
              goto code_r0x0050dddd;
            case 0x200:
            case 0x220:
            case 0x240:
            case 0x260:
            case 0x280:
            case 0x2a0:
            case 0x2c0:
            case 0x2e0:
            case 0x300:
            case 800:
            case 0x340:
            case 0x360:
            case 0x380:
            case 0x3a0:
            case 0x3c0:
            case 0x3e0:
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (in_FS_OFFSET[5] == lVar58) {
                uStack_38 = (ulong *)in_FS_OFFSET[5];
                uVar95 = (ulong)(byte)*puVar49;
                if ((char)(byte)*puVar49 < '\0') {
                  uStack_60 = (ulong *)&UNK_00512af0;
                  uStack_40 = uVar37;
                  auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                  pbVar45 = auVar103._0_8_;
                  if (pbVar45 == (byte *)0x0) goto code_r0x00512b78;
                  uVar95 = auVar103._8_8_ & 0xffffffff;
                }
                else {
                  pbVar45 = (byte *)((long)puVar49 + 1);
                  uStack_40 = uVar37;
                }
                goto code_r0x00512b00;
              }
              goto code_r0x0050dddd;
            case 0x400:
            case 0x420:
            case 0x440:
            case 0x460:
            case 0x480:
            case 0x4a0:
            case 0x4c0:
            case 0x4e0:
            case 0x500:
            case 0x520:
            case 0x540:
            case 0x560:
            case 0x580:
            case 0x5a0:
            case 0x5c0:
            case 0x5e0:
              puStack_78 = *(ulong **)
                            ((long)param_5 +
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_50._0_2_ = (ushort)puStack_78;
              uStack_50._2_2_ = (undefined2)((ulong)puStack_78 >> 0x10);
              uStack_4c = (uint)((ulong)puStack_78 >> 0x20);
              uStack_60 = (ulong *)CONCAT44(uVar44,uVar61);
              puStack_80 = (ulong *)&UNK_0050dd5a;
              uStack_70 = param_1;
              puStack_68 = param_5;
              uStack_58 = puVar52;
              uStack_48._0_2_ = uVar18;
              uStack_48._2_2_ = uVar14;
              uStack_44 = uVar16;
              uStack_3e = uVar19;
              bStack_3d = bVar5;
              bStack_3c = bVar23;
              bStack_3b = bVar26;
              bStack_3a = bVar29;
              bStack_39 = bVar32;
              uStack_38 = puVar63;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1024EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
              break;
            case 0x600:
            case 0x620:
            case 0x640:
            case 0x660:
            case 0x680:
            case 0x6a0:
            case 0x6c0:
            case 0x6e0:
            case 0x700:
            case 0x720:
            case 0x740:
            case 0x760:
            case 0x780:
            case 0x7a0:
            case 0x7c0:
            case 0x7e0:
              puStack_78 = *(ulong **)
                            ((long)param_5 +
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar54) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_50._0_2_ = (ushort)puStack_78;
              uStack_50._2_2_ = (undefined2)((ulong)puStack_78 >> 0x10);
              uStack_4c = (uint)((ulong)puStack_78 >> 0x20);
              uStack_60 = (ulong *)CONCAT44(uVar44,uVar61);
              puStack_80 = (ulong *)&UNK_0050dd9f;
              uStack_70 = param_1;
              puStack_68 = param_5;
              uStack_58 = puVar52;
              uStack_48._0_2_ = uVar18;
              uStack_48._2_2_ = uVar14;
              uStack_44 = uVar16;
              uStack_3e = uVar19;
              bStack_3d = bVar5;
              bStack_3c = bVar23;
              bStack_3b = bVar26;
              bStack_3a = bVar29;
              bStack_39 = bVar32;
              uStack_38 = puVar63;
              puVar49 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1536EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
            }
            uVar37 = uStack_40;
            if (in_FS_OFFSET[5] == lVar58) {
              return puVar49;
            }
          }
          else {
            param_1 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar54));
            if (uVar87 == 0) {
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (in_FS_OFFSET[5] == lVar58) {
                uStack_38 = (ulong *)in_FS_OFFSET[5];
                uVar95 = (ulong)(byte)*puVar49;
                if ((char)(byte)*puVar49 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512150;
                  uStack_40 = uVar37;
                  auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                  puVar49 = auVar103._0_8_;
                  if (puVar49 == (ulong *)0x0) goto code_r0x0051229b;
                  uVar95 = auVar103._8_8_ & 0xffffffff;
                }
                else {
                  puVar49 = (ulong *)((long)puVar49 + 1);
                  uStack_40 = uVar37;
                }
                puVar63 = (ulong *)param_3[1];
                iVar67 = (int)puVar63 - (int)puVar49;
                uVar91 = (uint)uVar95;
                if ((int)uVar91 <= iVar67) goto code_r0x005122a5;
                uStack_70 = param_3;
                goto code_r0x00512179;
              }
            }
            else {
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_4c = uVar79;
              uStack_48._0_2_ = uVar6;
              uStack_48._2_2_ = uVar36;
              uStack_44 = uVar97;
              uStack_3e = uVar38;
              bStack_3d = bVar4;
              bStack_3c = bVar3;
              bStack_3b = bVar39;
              bStack_3a = bVar40;
              bStack_39 = bVar41;
              if (in_FS_OFFSET[5] == lVar58) {
                uStack_38 = (ulong *)in_FS_OFFSET[5];
                uVar95 = (ulong)(byte)*puVar49;
                if ((char)(byte)*puVar49 < '\0') {
                  uStack_60 = (ulong *)&UNK_00512500;
                  uStack_40 = uVar37;
                  auVar103 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar49,uVar95);
                  pbVar45 = auVar103._0_8_;
                  if (pbVar45 == (byte *)0x0) goto code_r0x00512588;
                  uVar95 = auVar103._8_8_ & 0xffffffff;
                }
                else {
                  pbVar45 = (byte *)((long)puVar49 + 1);
                  uStack_40 = uVar37;
                }
                goto code_r0x00512510;
              }
            }
          }
          goto code_r0x0050dddd;
        }
        uVar87 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar54);
        uVar99 = (uint)uVar87;
        uVar91 = *(uint *)((long)((long)param_5 + 4) + (long)puVar54);
        if (uVar91 != 0xffffffff) {
          puVar100 = (uint *)((long)param_1 + (ulong)(uVar91 >> 5) * 4);
          *puVar100 = *puVar100 | 1 << ((byte)uVar91 & 0x1f);
        }
        uVar87 = uVar87 >> 6;
        pcVar50 = (char *)(ulong)(uVar87 & 7);
        uVar101 = (uVar87 & 7) == 0;
        puVar54 = param_3;
        ppuVar74 = (ulong **)register0x00000020;
        puVar76 = unaff_RBP;
        param_3 = unaff_R12;
        puVar47 = unaff_R14;
        uStack_50._0_2_ = uVar43;
        uStack_50._2_2_ = uVar35;
        uStack_4c = uVar79;
        uStack_48._0_2_ = uVar6;
        uStack_48._2_2_ = uVar36;
        uStack_44 = uVar97;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
code_r0x00510881:
        if ((bool)uVar101) {
          *(undefined1 **)((long)ppuVar74 + -8) = puVar76;
          *(ulong **)((long)ppuVar74 + -0x10) = unaff_R15;
          *(ulong **)((long)ppuVar74 + -0x18) = puVar47;
          *(ulong **)((long)ppuVar74 + -0x20) = unaff_R13;
          *(ulong **)((long)ppuVar74 + -0x28) = param_3;
          *(ulong **)((long)ppuVar74 + -0x30) = unaff_RBX;
          *(ulong **)((long)ppuVar74 + -0x48) = param_6;
          *(ulong **)((long)ppuVar74 + -0x50) = param_5;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)ppuVar74 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
            puVar52 = (ulong *)((long)puVar49 + 1);
code_r0x00511989:
            uVar84 = *param_1;
            bVar102 = (uVar84 & 4) != 0;
            uVar91 = (uint)param_1[1];
            uVar66 = (uint)uVar84 & 3;
            if (bVar102) {
              uVar66 = uVar91;
            }
            uVar79 = *(uint *)((long)param_1 + 0xc);
            if (!bVar102) {
              uVar79 = 3;
            }
            if (uVar66 == uVar79) {
              *(uint *)((long)ppuVar74 + -0x34) = uVar66 + 1;
              *(undefined **)((long)ppuVar74 + -0x60) = &UNK_00511a51;
              _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(param_1,(uVar84 & 4) == 0);
              uVar81 = *param_1 & 0xfffffffffffffff8;
              uVar91 = (uint)param_1[1];
              uVar66 = *(uint *)((long)ppuVar74 + -0x34);
code_r0x00511a70:
              *(uint *)(param_1 + 1) = uVar66;
              *(bool *)(uVar81 + (long)(int)uVar91) = uVar95 != 0;
            }
            else {
              uVar81 = uVar84 & 0xfffffffffffffff8;
              uVar66 = uVar66 + 1;
              if ((uVar84 & 4) != 0) goto code_r0x00511a70;
              *param_1 = uVar81 | uVar66;
              *(bool *)((long)param_1 + (ulong)((uint)uVar84 & 3) + 8) = uVar95 != 0;
            }
            if ((ulong *)*puVar54 <= puVar52) goto code_r0x00511b67;
            bVar4 = (byte)*puVar52;
            auVar127[8] = bVar4;
            auVar127._0_8_ = (byte *)((long)puVar52 + 1);
            auVar127._9_3_ = 0;
            if ((char)bVar4 < '\0') {
              bVar3 = *(byte *)((long)puVar52 + 1);
              iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
              if ((char)bVar3 < '\0') {
                *(undefined **)((long)ppuVar74 + -0x60) = &UNK_00511ab3;
                auVar127 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar52,iVar67);
                if (auVar127._0_8_ == 0) goto code_r0x00511b90;
              }
              else {
                auVar127._8_4_ = iVar67;
                auVar127._0_8_ = (ushort *)((long)puVar52 + 2);
              }
            }
            puVar49 = auVar127._0_8_;
            if (auVar127._8_4_ != (int)puVar63) {
code_r0x00511b67:
              if ((ulong)**(ushort **)((long)ppuVar74 + -0x50) != 0) {
                puVar100 = (uint *)(*(long *)((long)ppuVar74 + -0x40) +
                                   (ulong)**(ushort **)((long)ppuVar74 + -0x50));
                *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)ppuVar74 + -0x48);
              }
              return puVar52;
            }
          }
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar84) {
            puVar52 = (ulong *)((long)puVar49 + 2);
code_r0x00511a2c:
            uVar95 = uVar95 & uVar84;
            goto code_r0x00511989;
          }
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar81) {
            puVar52 = (ulong *)((long)puVar49 + 3);
code_r0x00511a29:
            uVar84 = uVar84 & uVar81;
            goto code_r0x00511a2c;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar84) {
            puVar52 = (ulong *)((long)puVar49 + 4);
            goto code_r0x00511a29;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar81) {
            puVar52 = (ulong *)((long)puVar49 + 5);
            goto code_r0x00511a29;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar84) {
            puVar52 = (ulong *)((long)puVar49 + 6);
            goto code_r0x00511a29;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar81) {
            puVar52 = (ulong *)((long)puVar49 + 7);
            goto code_r0x00511a29;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar84) {
            puVar52 = puVar49 + 1;
            goto code_r0x00511a29;
          }
          uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar81) {
            puVar52 = (ulong *)((long)puVar49 + 9);
            goto code_r0x00511a29;
          }
          bVar4 = *(byte *)((long)puVar49 + 9);
          puVar52 = (ulong *)((long)puVar49 + 10);
          if (bVar4 == 1) goto code_r0x00511a29;
          if (-1 < (char)bVar4) {
            if ((bVar4 & 1) == 0) {
              uVar81 = uVar81 ^ 0x8000000000000000;
            }
            goto code_r0x00511a29;
          }
code_r0x00511b90:
          param_1 = *(ulong **)((long)ppuVar74 + -0x40);
          param_5 = *(ulong **)((long)ppuVar74 + -0x50);
          param_6 = *(ulong **)((long)ppuVar74 + -0x48);
          unaff_RBP = *(undefined1 **)((long)ppuVar74 + -8);
          register0x00000020 = (BADSPACEBASE *)ppuVar74;
          goto code_r0x005013a0;
        }
        uVar95 = (ulong)(uVar99 & 0x600);
        ppuVar75 = ppuVar74;
        puVar77 = puVar76;
code_r0x0051088e:
        auVar105._8_8_ = puVar54;
        auVar105._0_8_ = puVar47;
        ppuVar34 = ppuVar75;
        puVar78 = puVar77;
        puVar52 = param_3;
        auVar11 = auVar105;
        if ((int)pcVar50 != 2) {
          bVar102 = (short)uVar95 == 0;
          ppuVar69 = ppuVar75;
code_r0x005108b3:
          puVar55 = auVar105._8_8_;
          register0x00000020 = (BADSPACEBASE *)ppuVar69;
          if (bVar102) {
            *(undefined1 **)((long)ppuVar69 + -8) = puVar78;
            *(ulong **)((long)ppuVar69 + -0x10) = unaff_R15;
            *(long *)((long)ppuVar69 + -0x18) = auVar105._0_8_;
            *(ulong **)((long)ppuVar69 + -0x20) = unaff_R13;
            *(ulong **)((long)ppuVar69 + -0x28) = param_3;
            *(ulong **)((long)ppuVar69 + -0x30) = unaff_RBX;
            *(ulong **)((long)ppuVar69 + -0x48) = param_6;
            *(ulong **)((long)ppuVar69 + -0x50) = param_5;
            uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
            *(ulong **)((long)ppuVar69 + -0x40) = param_1;
            param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
            *(undefined8 **)((long)ppuVar69 + -0x38) = puVar55;
            while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
              puVar54 = (ulong *)((long)puVar49 + 1);
code_r0x00510929:
              uVar84 = *param_1;
              bVar102 = (uVar84 & 4) != 0;
              uVar91 = (uint)param_1[1];
              uVar66 = (uint)uVar84 & 3;
              if (bVar102) {
                uVar66 = uVar91;
              }
              uVar79 = *(uint *)((long)param_1 + 0xc);
              if (!bVar102) {
                uVar79 = 1;
              }
              uVar97 = uVar66 + 1;
              if (uVar66 == uVar79) {
                *(undefined **)((long)ppuVar69 + -0x60) = &UNK_005109e2;
                _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                          (param_1,(uVar84 & 4) == 0,uVar66,uVar97);
                puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
                uVar81 = *param_1 & 0xfffffffffffffff8;
                uVar91 = (uint)param_1[1];
code_r0x00510a00:
                *(uint *)(param_1 + 1) = uVar97;
                *(ulong *)(uVar81 + (long)(int)uVar91 * 8) = uVar95;
              }
              else {
                uVar81 = uVar84 & 0xfffffffffffffff8;
                if ((uVar84 & 4) != 0) goto code_r0x00510a00;
                *param_1 = uVar81 | uVar97;
                param_1[(ulong)((uint)uVar84 & 3) + 1] = uVar95;
              }
              if ((ulong *)*puVar55 <= puVar54) goto code_r0x00510afd;
              bVar4 = (byte)*puVar54;
              auVar121[8] = bVar4;
              auVar121._0_8_ = (byte *)((long)puVar54 + 1);
              auVar121._9_3_ = 0;
              if ((char)bVar4 < '\0') {
                bVar3 = *(byte *)((long)puVar54 + 1);
                iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
                if ((char)bVar3 < '\0') {
                  *(undefined **)((long)ppuVar69 + -0x60) = &UNK_00510a43;
                  auVar121 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
                  if (auVar121._0_8_ == 0) goto code_r0x00510b26;
                  puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
                }
                else {
                  auVar121._8_4_ = iVar67;
                  auVar121._0_8_ = (ushort *)((long)puVar54 + 2);
                }
              }
              puVar49 = auVar121._0_8_;
              if (auVar121._8_4_ != (int)puVar63) {
code_r0x00510afd:
                if ((ulong)**(ushort **)((long)ppuVar69 + -0x50) != 0) {
                  puVar100 = (uint *)(*(long *)((long)ppuVar69 + -0x40) +
                                     (ulong)**(ushort **)((long)ppuVar69 + -0x50));
                  *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)ppuVar69 + -0x48);
                }
                return puVar54;
              }
            }
            uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x005109c7:
              uVar95 = uVar95 & uVar84;
              goto code_r0x00510929;
            }
            uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x005109c4:
              uVar84 = uVar84 & uVar81;
              goto code_r0x005109c7;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 4);
              goto code_r0x005109c4;
            }
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 5);
              goto code_r0x005109c4;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00510ac5:
              puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
              goto code_r0x005109c4;
            }
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 7);
              goto code_r0x00510ac5;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar84) {
              puVar54 = puVar49 + 1;
              goto code_r0x00510ac5;
            }
            uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 9);
              goto code_r0x00510ac5;
            }
            bVar4 = *(byte *)((long)puVar49 + 9);
            puVar54 = (ulong *)((long)puVar49 + 10);
            if (bVar4 == 1) goto code_r0x00510ac5;
            if (-1 < (char)bVar4) {
              if ((bVar4 & 1) == 0) {
                uVar81 = uVar81 ^ 0x8000000000000000;
              }
              goto code_r0x00510ac5;
            }
code_r0x00510b26:
            param_1 = *(ulong **)((long)ppuVar69 + -0x40);
            param_5 = *(ulong **)((long)ppuVar69 + -0x50);
            param_6 = *(ulong **)((long)ppuVar69 + -0x48);
            unaff_RBP = *(undefined1 **)((long)ppuVar69 + -8);
            goto code_r0x005013a0;
          }
          *(undefined1 **)((long)ppuVar69 + -8) = puVar78;
          *(ulong **)((long)ppuVar69 + -0x10) = unaff_R15;
          *(long *)((long)ppuVar69 + -0x18) = auVar105._0_8_;
          *(ulong **)((long)ppuVar69 + -0x20) = unaff_R13;
          *(ulong **)((long)ppuVar69 + -0x28) = param_3;
          *(ulong **)((long)ppuVar69 + -0x30) = unaff_RBX;
          *(ulong **)((long)ppuVar69 + -0x48) = param_6;
          *(ulong **)((long)ppuVar69 + -0x50) = param_5;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)ppuVar69 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          *(undefined8 **)((long)ppuVar69 + -0x38) = puVar55;
          while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
            puVar54 = (ulong *)((long)puVar49 + 1);
code_r0x00510ba9:
            uVar84 = uVar95 >> 1 ^ -(ulong)((uint)uVar95 & 1);
            uVar95 = *param_1;
            bVar102 = (uVar95 & 4) != 0;
            uVar91 = (uint)param_1[1];
            uVar66 = (uint)uVar95 & 3;
            if (bVar102) {
              uVar66 = uVar91;
            }
            uVar79 = *(uint *)((long)param_1 + 0xc);
            if (!bVar102) {
              uVar79 = 1;
            }
            uVar97 = uVar66 + 1;
            if (uVar66 == uVar79) {
              *(undefined **)((long)ppuVar69 + -0x60) = &UNK_00510c71;
              _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                        (param_1,(uVar95 & 4) == 0,uVar66,uVar97);
              puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
              uVar81 = *param_1 & 0xfffffffffffffff8;
              uVar91 = (uint)param_1[1];
code_r0x00510c90:
              *(uint *)(param_1 + 1) = uVar97;
              *(ulong *)(uVar81 + (long)(int)uVar91 * 8) = uVar84;
            }
            else {
              uVar81 = uVar95 & 0xfffffffffffffff8;
              if ((uVar95 & 4) != 0) goto code_r0x00510c90;
              *param_1 = uVar81 | uVar97;
              param_1[(ulong)((uint)uVar95 & 3) + 1] = uVar84;
            }
            if ((ulong *)*puVar55 <= puVar54) goto code_r0x00510d8d;
            bVar4 = (byte)*puVar54;
            auVar122[8] = bVar4;
            auVar122._0_8_ = (byte *)((long)puVar54 + 1);
            auVar122._9_3_ = 0;
            if ((char)bVar4 < '\0') {
              bVar3 = *(byte *)((long)puVar54 + 1);
              iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
              if ((char)bVar3 < '\0') {
                *(undefined **)((long)ppuVar69 + -0x60) = &UNK_00510cd3;
                auVar122 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
                if (auVar122._0_8_ == 0) goto code_r0x00510db6;
                puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
              }
              else {
                auVar122._8_4_ = iVar67;
                auVar122._0_8_ = (ushort *)((long)puVar54 + 2);
              }
            }
            puVar49 = auVar122._0_8_;
            if (auVar122._8_4_ != (int)puVar63) {
code_r0x00510d8d:
              if ((ulong)**(ushort **)((long)ppuVar69 + -0x50) != 0) {
                puVar100 = (uint *)(*(long *)((long)ppuVar69 + -0x40) +
                                   (ulong)**(ushort **)((long)ppuVar69 + -0x50));
                *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)ppuVar69 + -0x48);
              }
              return puVar54;
            }
          }
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x00510c56:
            uVar95 = uVar95 & uVar84;
            goto code_r0x00510ba9;
          }
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x00510c53:
            uVar84 = uVar84 & uVar81;
            goto code_r0x00510c56;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 4);
            goto code_r0x00510c53;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 5);
            goto code_r0x00510c53;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00510d55:
            puVar55 = *(undefined8 **)((long)ppuVar69 + -0x38);
            goto code_r0x00510c53;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 7);
            goto code_r0x00510d55;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = puVar49 + 1;
            goto code_r0x00510d55;
          }
          uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 9);
            goto code_r0x00510d55;
          }
          bVar4 = *(byte *)((long)puVar49 + 9);
          puVar54 = (ulong *)((long)puVar49 + 10);
          if (bVar4 == 1) goto code_r0x00510d55;
          if (-1 < (char)bVar4) {
            if ((bVar4 & 1) == 0) {
              uVar81 = uVar81 ^ 0x8000000000000000;
            }
            goto code_r0x00510d55;
          }
code_r0x00510db6:
          param_1 = *(ulong **)((long)ppuVar69 + -0x40);
          param_5 = *(ulong **)((long)ppuVar69 + -0x50);
          param_6 = *(ulong **)((long)ppuVar69 + -0x48);
          unaff_RBP = *(undefined1 **)((long)ppuVar69 + -8);
          goto code_r0x005013a0;
        }
code_r0x00510893:
        register0x00000020 = (BADSPACEBASE *)ppuVar34;
        param_3 = auVar11._8_8_;
        uVar48 = auVar11._0_8_;
        switch(&UNK_00204f88 + *(int *)(&UNK_00204f88 + ((uVar95 & 0xffff) >> 9) * 4)) {
        case (undefined *)0x5108aa:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar78;
          *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar48;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar52;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = param_5;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
            puVar54 = (ulong *)((long)puVar49 + 1);
code_r0x00510e39:
            uVar84 = *param_1;
            bVar102 = (uVar84 & 4) != 0;
            uVar91 = (uint)param_1[1];
            uVar66 = (uint)uVar84 & 3;
            if (bVar102) {
              uVar66 = uVar91;
            }
            uVar79 = *(uint *)((long)param_1 + 0xc);
            if (!bVar102) {
              uVar79 = 2;
            }
            uVar97 = uVar66 + 1;
            if (uVar66 == uVar79) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510ef2;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar84 & 4) == 0,uVar66,uVar97);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar81 = *param_1 & 0xfffffffffffffff8;
              uVar91 = (uint)param_1[1];
code_r0x00510f10:
              *(uint *)(param_1 + 1) = uVar97;
              *(int *)(uVar81 + (long)(int)uVar91 * 4) = (int)uVar95;
            }
            else {
              uVar81 = uVar84 & 0xfffffffffffffff8;
              if ((uVar84 & 4) != 0) goto code_r0x00510f10;
              *param_1 = uVar81 | uVar97;
              *(int *)((long)param_1 + (ulong)((uint)uVar84 & 3) * 4 + 8) = (int)uVar95;
            }
            if ((ulong *)*param_3 <= puVar54) goto code_r0x0051100d;
            bVar4 = (byte)*puVar54;
            auVar123[8] = bVar4;
            auVar123._0_8_ = (byte *)((long)puVar54 + 1);
            auVar123._9_3_ = 0;
            if ((char)bVar4 < '\0') {
              bVar3 = *(byte *)((long)puVar54 + 1);
              iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
              if ((char)bVar3 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510f53;
                auVar123 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
                if (auVar123._0_8_ == 0) goto code_r0x00511036;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar123._8_4_ = iVar67;
                auVar123._0_8_ = (ushort *)((long)puVar54 + 2);
              }
            }
            puVar49 = auVar123._0_8_;
            if (auVar123._8_4_ != (int)puVar63) {
code_r0x0051100d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar100 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                   (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar54;
            }
          }
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x00510ed7:
            uVar95 = uVar95 & uVar84;
            goto code_r0x00510e39;
          }
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x00510ed4:
            uVar84 = uVar84 & uVar81;
            goto code_r0x00510ed7;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 4);
            goto code_r0x00510ed4;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 5);
            goto code_r0x00510ed4;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00510fd5:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00510ed4;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 7);
            goto code_r0x00510fd5;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = puVar49 + 1;
            goto code_r0x00510fd5;
          }
          uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 9);
            goto code_r0x00510fd5;
          }
          puVar54 = (ulong *)((long)puVar49 + 10);
          if ((*(byte *)((long)puVar49 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar49 + 9)))
          goto code_r0x00510fd5;
code_r0x00511036:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        case (undefined *)0x5108be:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar78;
          *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar48;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar52;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          uVar43 = *(ushort *)((long)param_5 + ((ulong)puVar63 >> 0x20) + 8);
          uVar95 = param_5[3];
          *(ulong **)((long)register0x00000020 + -0x50) = param_5;
          puVar100 = *(uint **)((long)param_5 + (ulong)uVar43 * 8 + (ulong)(uint)uVar95);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
            puVar54 = (ulong *)((long)puVar49 + 1);
code_r0x0051135a:
            uVar81 = (ulong)(*puVar100 >> 0x10);
            iVar67 = (int)uVar95;
            uVar95 = (long)iVar67 - (long)(short)*puVar100;
            uVar84 = uVar95 - uVar81;
            if (uVar81 <= uVar95) {
              uVar91 = puVar100[1];
              if (uVar84 < (uVar91 & 0xffff)) {
                if ((puVar100[(uVar84 >> 5) + 2] >> ((uint)uVar84 & 0x1f) & 1) == 0) {
code_r0x00511607:
                  param_1 = *(ulong **)((long)register0x00000020 + -0x40);
                  param_5 = *(ulong **)((long)register0x00000020 + -0x50);
                  param_6 = *(ulong **)((long)register0x00000020 + -0x48);
                  unaff_RBX = *(ulong **)((long)register0x00000020 + -0x30);
                  unaff_R12 = *(ulong **)((long)register0x00000020 + -0x28);
                  unaff_R13 = *(ulong **)((long)register0x00000020 + -0x20);
                  unaff_R14 = *(ulong **)((long)register0x00000020 + -0x18);
                  unaff_R15 = *(ulong **)((long)register0x00000020 + -0x10);
                  unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
                  puVar54 = puVar49;
                  uVar79 = uStack_4c;
                  goto 
                  _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                  ;
                }
              }
              else {
                uVar95 = 0;
                do {
                  if (uVar91 >> 0x10 <= uVar95) goto code_r0x00511607;
                  iVar62 = *(int *)((long)puVar100 + uVar95 * 4 + (ulong)(uVar91 >> 3 & 0x1ffc) + 8)
                  ;
                  uVar95 = (uVar95 * 2 - (ulong)(iVar67 < iVar62)) + 2;
                } while (iVar62 != iVar67);
              }
            }
            uVar95 = *param_1;
            bVar102 = (uVar95 & 4) != 0;
            uVar91 = (uint)param_1[1];
            uVar66 = (uint)uVar95 & 3;
            if (bVar102) {
              uVar66 = uVar91;
            }
            uVar79 = *(uint *)((long)param_1 + 0xc);
            if (!bVar102) {
              uVar79 = 2;
            }
            uVar97 = uVar66 + 1;
            if (uVar66 == uVar79) {
              *(ulong **)((long)register0x00000020 + -0x58) = puVar63;
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511462;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar95 & 4) == 0,uVar66,uVar97);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              puVar63 = *(ulong **)((long)register0x00000020 + -0x58);
              uVar84 = *param_1 & 0xfffffffffffffff8;
              uVar91 = (uint)param_1[1];
code_r0x00511480:
              *(uint *)(param_1 + 1) = uVar97;
              *(int *)(uVar84 + (long)(int)uVar91 * 4) = iVar67;
            }
            else {
              uVar84 = uVar95 & 0xfffffffffffffff8;
              if ((uVar95 & 4) != 0) goto code_r0x00511480;
              *param_1 = uVar84 | uVar97;
              *(int *)((long)param_1 + (ulong)((uint)uVar95 & 3) * 4 + 8) = iVar67;
            }
            if ((ulong *)*param_3 <= puVar54) goto code_r0x005115bf;
            bVar4 = (byte)*puVar54;
            auVar125[8] = bVar4;
            auVar125._0_8_ = (byte *)((long)puVar54 + 1);
            auVar125._9_3_ = 0;
            if ((char)bVar4 < '\0') {
              bVar3 = *(byte *)((long)puVar54 + 1);
              iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
              if ((char)bVar3 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005114c6;
                auVar125 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
                if (auVar125._0_8_ == 0) goto code_r0x005115e8;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar125._8_4_ = iVar67;
                auVar125._0_8_ = (ushort *)((long)puVar54 + 2);
              }
            }
            puVar49 = auVar125._0_8_;
            if (auVar125._8_4_ != (int)puVar63) {
code_r0x005115bf:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar100 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                   (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar54;
            }
          }
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x00511419:
            uVar95 = uVar95 & uVar84;
            goto code_r0x0051135a;
          }
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x00511416:
            uVar84 = uVar84 & uVar81;
            goto code_r0x00511419;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 4);
            goto code_r0x00511416;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 5);
            goto code_r0x00511416;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00511586:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511416;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 7);
            goto code_r0x00511586;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = puVar49 + 1;
            goto code_r0x00511586;
          }
          uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 9);
            goto code_r0x00511586;
          }
          puVar54 = (ulong *)((long)puVar49 + 10);
          if ((*(byte *)((long)puVar49 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar49 + 9)))
          goto code_r0x00511586;
code_r0x005115e8:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        case (undefined *)0x5108c3:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar78;
          *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar48;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar52;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x50) = param_6;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x48) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          uVar43 = *(ushort *)((long)param_5 + ((ulong)puVar63 >> 0x20) + 8);
          uVar95 = param_5[3];
          *(ulong **)((long)register0x00000020 + -0x58) = param_5;
          uVar48 = *(undefined8 *)((long)param_5 + (ulong)uVar43 * 8 + (ulong)(uint)uVar95);
          *(ulong **)((long)register0x00000020 + -0x40) = param_3;
          *(undefined8 *)((long)register0x00000020 + -0x38) = uVar48;
          uVar82 = uVar48;
          break;
        case (undefined *)0x5108c8:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar78;
          *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar48;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar52;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = param_5;
          uVar91 = *(uint *)((long)param_5 + ((ulong)puVar63 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar91 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar95 = (ulong)(char)(byte)*puVar49, -1 < (long)uVar95) {
            puVar54 = (ulong *)((long)puVar49 + 1);
code_r0x005110b9:
            uVar79 = (uint)uVar95 >> 1 ^ -((uint)uVar95 & 1);
            uVar95 = *param_1;
            bVar102 = (uVar95 & 4) != 0;
            uVar91 = (uint)param_1[1];
            uVar66 = (uint)uVar95 & 3;
            if (bVar102) {
              uVar66 = uVar91;
            }
            uVar97 = *(uint *)((long)param_1 + 0xc);
            if (!bVar102) {
              uVar97 = 2;
            }
            uVar99 = uVar66 + 1;
            if (uVar66 == uVar97) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511180;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar95 & 4) == 0,uVar66,uVar99);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar84 = *param_1 & 0xfffffffffffffff8;
              uVar91 = (uint)param_1[1];
code_r0x005111a0:
              *(uint *)(param_1 + 1) = uVar99;
              *(uint *)(uVar84 + (long)(int)uVar91 * 4) = uVar79;
            }
            else {
              uVar84 = uVar95 & 0xfffffffffffffff8;
              if ((uVar95 & 4) != 0) goto code_r0x005111a0;
              *param_1 = uVar84 | uVar99;
              *(uint *)((long)param_1 + (ulong)((uint)uVar95 & 3) * 4 + 8) = uVar79;
            }
            if ((ulong *)*param_3 <= puVar54) goto code_r0x0051129d;
            bVar4 = (byte)*puVar54;
            auVar124[8] = bVar4;
            auVar124._0_8_ = (byte *)((long)puVar54 + 1);
            auVar124._9_3_ = 0;
            if ((char)bVar4 < '\0') {
              bVar3 = *(byte *)((long)puVar54 + 1);
              iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
              if ((char)bVar3 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005111e3;
                auVar124 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
                if (auVar124._0_8_ == 0) goto code_r0x005112c6;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar124._8_4_ = iVar67;
                auVar124._0_8_ = (ushort *)((long)puVar54 + 2);
              }
            }
            puVar49 = auVar124._0_8_;
            if (auVar124._8_4_ != (int)puVar63) {
code_r0x0051129d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar100 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                   (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar54;
            }
          }
          uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x00511165:
            uVar95 = uVar95 & uVar84;
            goto code_r0x005110b9;
          }
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x00511162:
            uVar84 = uVar84 & uVar81;
            goto code_r0x00511165;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 4);
            goto code_r0x00511162;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 5);
            goto code_r0x00511162;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00511265:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511162;
          }
          uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 7);
            goto code_r0x00511265;
          }
          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar84) {
            puVar54 = puVar49 + 1;
            goto code_r0x00511265;
          }
          uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar81) {
            puVar54 = (ulong *)((long)puVar49 + 9);
            goto code_r0x00511265;
          }
          puVar54 = (ulong *)((long)puVar49 + 10);
          if ((*(byte *)((long)puVar49 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar49 + 9)))
          goto code_r0x00511265;
code_r0x005112c6:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        }
        do {
          uVar95 = (ulong)(char)(byte)*puVar49;
          if ((long)uVar95 < 0) {
            uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 2);
code_r0x0051175f:
              uVar95 = uVar95 & uVar84;
              if ((int)uVar82 <= (int)uVar95) goto code_r0x005116b3;
              goto code_r0x005118b6;
            }
            uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 3);
code_r0x0051175c:
              uVar84 = uVar84 & uVar81;
              goto code_r0x0051175f;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 4);
              goto code_r0x0051175c;
            }
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 5);
              goto code_r0x0051175c;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar84) {
              puVar54 = (ulong *)((long)puVar49 + 6);
code_r0x00511879:
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar82 = *(undefined8 *)((long)register0x00000020 + -0x38);
              goto code_r0x0051175c;
            }
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 7);
              goto code_r0x00511879;
            }
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar84) {
              puVar54 = puVar49 + 1;
              goto code_r0x00511879;
            }
            uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar81) {
              puVar54 = (ulong *)((long)puVar49 + 9);
              goto code_r0x00511879;
            }
            puVar54 = (ulong *)((long)puVar49 + 10);
            if ((*(byte *)((long)puVar49 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar49 + 9)))
            goto code_r0x00511879;
code_r0x00511907:
            param_1 = *(ulong **)((long)register0x00000020 + -0x48);
            param_5 = *(ulong **)((long)register0x00000020 + -0x58);
            param_6 = *(ulong **)((long)register0x00000020 + -0x50);
            unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
            goto code_r0x005013a0;
          }
          puVar54 = (ulong *)((long)puVar49 + 1);
          if ((int)(char)(byte)*puVar49 < (int)uVar82) {
code_r0x005118b6:
            param_1 = *(ulong **)((long)register0x00000020 + -0x48);
            param_5 = *(ulong **)((long)register0x00000020 + -0x58);
            param_6 = *(ulong **)((long)register0x00000020 + -0x50);
            unaff_RBX = *(ulong **)((long)register0x00000020 + -0x30);
            unaff_R12 = *(ulong **)((long)register0x00000020 + -0x28);
            unaff_R13 = *(ulong **)((long)register0x00000020 + -0x20);
            unaff_R14 = *(ulong **)((long)register0x00000020 + -0x18);
            unaff_R15 = *(ulong **)((long)register0x00000020 + -0x10);
            unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
            puVar54 = puVar49;
            uVar79 = uStack_4c;
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
code_r0x005116b3:
          iVar67 = (int)uVar95;
          if ((int)((ulong)uVar48 >> 0x20) < iVar67) goto code_r0x005118b6;
          uVar95 = *param_1;
          bVar102 = (uVar95 & 4) != 0;
          uVar91 = (uint)param_1[1];
          uVar66 = (uint)uVar95 & 3;
          if (bVar102) {
            uVar66 = uVar91;
          }
          uVar79 = *(uint *)((long)param_1 + 0xc);
          if (!bVar102) {
            uVar79 = 2;
          }
          uVar97 = uVar66 + 1;
          if (uVar66 == uVar79) {
            *(ulong **)((long)register0x00000020 + -0x60) = puVar63;
            *(undefined **)((long)register0x00000020 + -0x70) = &UNK_00511787;
            _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(param_1,(uVar95 & 4) == 0,uVar66,uVar97);
            uVar82 = *(undefined8 *)((long)register0x00000020 + -0x38);
            param_3 = *(ulong **)((long)register0x00000020 + -0x40);
            puVar63 = *(ulong **)((long)register0x00000020 + -0x60);
            uVar84 = *param_1 & 0xfffffffffffffff8;
            uVar91 = (uint)param_1[1];
code_r0x005117b0:
            *(uint *)(param_1 + 1) = uVar97;
            *(int *)(uVar84 + (long)(int)uVar91 * 4) = iVar67;
          }
          else {
            uVar84 = uVar95 & 0xfffffffffffffff8;
            if ((uVar95 & 4) != 0) goto code_r0x005117b0;
            *param_1 = uVar84 | uVar97;
            *(int *)((long)param_1 + (ulong)((uint)uVar95 & 3) * 4 + 8) = iVar67;
          }
          if ((ulong *)*param_3 <= puVar54) goto code_r0x005118de;
          bVar4 = (byte)*puVar54;
          auVar126[8] = bVar4;
          auVar126._0_8_ = (byte *)((long)puVar54 + 1);
          auVar126._9_3_ = 0;
          if ((char)bVar4 < '\0') {
            bVar3 = *(byte *)((long)puVar54 + 1);
            iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
            if ((char)bVar3 < '\0') {
              *(undefined **)((long)register0x00000020 + -0x70) = &UNK_005117f6;
              auVar126 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
              if (auVar126._0_8_ == 0) goto code_r0x00511907;
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar82 = *(undefined8 *)((long)register0x00000020 + -0x38);
            }
            else {
              auVar126._8_4_ = iVar67;
              auVar126._0_8_ = (ushort *)((long)puVar54 + 2);
            }
          }
          puVar49 = auVar126._0_8_;
          if (auVar126._8_4_ != (int)puVar63) {
code_r0x005118de:
            if ((ulong)**(ushort **)((long)register0x00000020 + -0x58) != 0) {
              puVar100 = (uint *)(*(long *)((long)register0x00000020 + -0x48) +
                                 (ulong)**(ushort **)((long)register0x00000020 + -0x58));
              *puVar100 = *puVar100 | (uint)*(undefined8 *)((long)register0x00000020 + -0x50);
            }
            return puVar54;
          }
        } while( true );
      }
      if ((uVar95 & 7) != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
        uStack_4c = uVar79;
        uStack_48._0_2_ = uVar6;
        uStack_48._2_2_ = uVar36;
        uStack_44 = uVar97;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
        goto code_r0x0050da01;
      }
      puVar52 = (ulong *)(long)(char)(byte)*puVar49;
      if ((long)puVar52 < 0) {
        uStack_38 = puVar52;
        uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
        if ((long)uVar84 < 0) {
          uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
          if ((long)uVar81 < 0) {
            uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU);
            if ((long)uVar84 < 0) {
              uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
              if ((long)uVar81 < 0) {
                uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU);
                if ((long)uVar84 < 0) {
                  uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a |
                                    0x3ffffffffffU);
                  if ((long)uVar81 < 0) {
                    uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                      0x1ffffffffffffU);
                    if ((long)uVar84 < 0) {
                      uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
                      if ((long)uVar81 < 0) {
                        puVar47 = (ulong *)((long)puVar49 + 10);
                        bVar5 = *(byte *)((long)puVar49 + 9);
                        if (bVar5 != 1) {
                          if ((char)bVar5 < '\0') goto code_r0x005013a0;
                          if ((bVar5 & 1) == 0) {
                            uVar81 = uVar81 ^ 0x8000000000000000;
                          }
                        }
                      }
                      else {
                        puVar47 = (ulong *)((long)puVar49 + 9);
                      }
                    }
                    else {
                      puVar47 = puVar49 + 1;
                    }
                  }
                  else {
                    puVar47 = (ulong *)((long)puVar49 + 7);
                  }
                }
                else {
                  puVar47 = (ulong *)((long)puVar49 + 6);
                }
              }
              else {
                puVar47 = (ulong *)((long)puVar49 + 5);
              }
            }
            else {
              puVar47 = (ulong *)((long)puVar49 + 4);
            }
          }
          else {
            puVar47 = (ulong *)((long)puVar49 + 3);
          }
          uVar84 = uVar84 & uVar81;
        }
        else {
          puVar47 = (ulong *)((long)puVar49 + 2);
        }
        puVar52 = (ulong *)((ulong)puVar52 & uVar84);
      }
      else {
        puVar47 = (ulong *)((long)puVar49 + 1);
      }
      puVar100 = (uint *)((long)puVar54 + (long)param_5);
      uVar93 = uVar87 & 0x600;
      uStack_4c = uVar87 & 0x1c0;
      uVar66 = (uint)puVar52;
      uVar91 = uStack_4c;
      if (uStack_4c == 0xc0) {
        uStack_48._0_2_ = uVar6;
        uStack_48._2_2_ = uVar36;
        uStack_44 = uVar97;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
        if (uVar93 == 0x200) {
          puVar52 = (ulong *)((ulong)puVar52 >> 1 ^ -(ulong)(uVar66 & 1));
        }
      }
      else {
        uStack_48._0_2_ = uVar6;
        uStack_48._2_2_ = uVar36;
        uStack_44 = uVar97;
        uStack_40 = uVar37;
        uStack_3e = uVar38;
        bStack_3d = bVar4;
        bStack_3c = bVar3;
        bStack_3b = bVar39;
        bStack_3a = bVar40;
        bStack_39 = bVar41;
        if (uStack_4c == 0x80) {
          if ((uVar87 & 0x400) == 0) {
            if (uVar93 == 0x200) {
              puVar52 = (ulong *)(long)(int)(uVar66 >> 1 ^ -(uVar66 & 1));
            }
          }
          else {
            puVar46 = *(ulong **)
                       ((long)param_5 + (ulong)(ushort)puVar100[2] * 8 + (ulong)(uint)param_5[3]);
            if (uVar93 == 0x600) {
              puVar54 = puVar46;
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              if (((int)uVar66 < (int)puVar46) ||
                 (puVar54 = (ulong *)((ulong)puVar46 >> 0x20),
                 (int)((ulong)puVar46 >> 0x20) < (int)uVar66)) {

                _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                :
                uStack_4c = uVar79;
                *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
                *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
                *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
                *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
                *(ulong **)((long)register0x00000020 + -0x28) = unaff_R12;
                *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
                *(ulong **)((long)register0x00000020 + -0x38) = puVar54;
                uVar95 = (ulong)(char)(byte)*puVar49;
                if ((long)uVar95 < 0) {
                  uVar84 = (long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f;
                  if ((long)uVar84 < 0) {
                    uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
                    if ((long)uVar81 < 0) {
                      uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 |
                                        0x1fffffU);
                      if ((long)uVar84 < 0) {
                        uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c |
                                          0xfffffffU);
                        if ((long)uVar81 < 0) {
                          uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 |
                                            0x7ffffffffU);
                          if ((long)uVar84 < 0) {
                            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a |
                                              0x3ffffffffffU);
                            if ((long)uVar81 < 0) {
                              uVar84 = uVar84 & ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                                0x1ffffffffffffU);
                              if ((long)uVar84 < 0) {
                                uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 |
                                                  0xffffffffffffff);
                                if ((long)uVar81 < 0) {
                                  puVar54 = (ulong *)((long)puVar49 + 10);
                                  if ((*(byte *)((long)puVar49 + 9) != 1) &&
                                     ((char)*(byte *)((long)puVar49 + 9) < '\0')) {
                                    unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
                                    goto code_r0x005013a0;
                                  }
                                }
                                else {
                                  puVar54 = (ulong *)((long)puVar49 + 9);
                                }
                              }
                              else {
                                puVar54 = puVar49 + 1;
                              }
                            }
                            else {
                              puVar54 = (ulong *)((long)puVar49 + 7);
                            }
                          }
                          else {
                            puVar54 = (ulong *)((long)puVar49 + 6);
                          }
                        }
                        else {
                          puVar54 = (ulong *)((long)puVar49 + 5);
                        }
                      }
                      else {
                        puVar54 = (ulong *)((long)puVar49 + 4);
                      }
                    }
                    else {
                      puVar54 = (ulong *)((long)puVar49 + 3);
                    }
                    uVar84 = uVar84 & uVar81;
                  }
                  else {
                    puVar54 = (ulong *)((long)puVar49 + 2);
                  }
                  uVar95 = uVar95 & uVar84;
                }
                else {
                  puVar54 = (ulong *)((long)puVar49 + 1);
                }
                *(undefined **)((long)register0x00000020 + -0x40) = &UNK_00507b88;
                _ZN6google8protobuf8internal8TcParser14AddUnknownEnumEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseEji
                          (param_1,param_5,(ulong)puVar63 & 0xffffffff,uVar95 & 0xffffffff);
                if ((ulong *)*param_3 <= puVar54) {
                  if ((ulong)(ushort)*param_5 != 0) {
                    puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                    *puVar100 = *puVar100 | (uint)param_6;
                  }
                  return puVar54;
                }
                uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar54 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x00507bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar49 = (ulong *)(**(code **)((long)param_5 + uVar95 * 2 + 0x38))
                                             (param_1,puVar54,param_3,
                                              *(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^
                                              (ulong)(ushort)*puVar54,param_5,param_6);
                return puVar49;
              }
            }
            else {
              uStack_48._0_2_ = (ushort)puVar47;
              uStack_48._2_2_ = (undefined2)((ulong)puVar47 >> 0x10);
              uStack_44 = (uint)((ulong)puVar47 >> 0x20);
              uStack_70 = (ulong *)&UNK_0050da3d;
              uStack_60 = puVar49;
              uStack_58 = param_6;
              uStack_50._0_2_ = uVar43;
              uStack_50._2_2_ = uVar35;
              uStack_40 = uVar18;
              uStack_3e = uVar101;
              bStack_3d = bVar2;
              bStack_3c = bVar22;
              bStack_3b = bVar25;
              bStack_3a = bVar28;
              bStack_39 = bVar31;
              uStack_38 = puVar52;
              puVar54 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                           ((ulong)puVar52 & 0xffffffff,puVar46);
              param_1 = (ulong *)CONCAT17(bStack_39,
                                          CONCAT16(bStack_3a,
                                                   CONCAT15(bStack_3b,
                                                            CONCAT14(bStack_3c,
                                                                     CONCAT13(bStack_3d,
                                                                              CONCAT12(uStack_3e,
                                                                                       uStack_40))))
                                                  ));
              puVar47 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              puVar49 = uStack_60;
              param_6 = uStack_58;
              puVar52 = uStack_38;
              uVar91 = uStack_4c;
              uVar79 = uStack_4c;
              if ((char)puVar54 == '\0')
              goto 
              _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
              ;
            }
          }
        }
      }
      uStack_4c = uVar79;
      if (uVar89 == 0x30) {
        uStack_48._0_2_ = (ushort)puVar47;
        uStack_48._2_2_ = (undefined2)((ulong)puVar47 >> 0x10);
        uStack_44 = (uint)((ulong)puVar47 >> 0x20);
        uStack_70 = (ulong *)&UNK_0050d983;
        uStack_40 = uVar98;
        uStack_3e = uVar20;
        bStack_3d = bVar21;
        bStack_3c = bVar24;
        bStack_3b = bVar27;
        bStack_3a = bVar30;
        bStack_39 = bVar33;
        uStack_38 = puVar52;
        _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                  (param_5,0,puVar100,(uVar95 & 0xfffffff8) >> 3,param_5,param_1);
        param_3 = (ulong *)CONCAT17(bStack_39,
                                    CONCAT16(bStack_3a,
                                             CONCAT15(bStack_3b,
                                                      CONCAT14(bStack_3c,
                                                               CONCAT13(bStack_3d,
                                                                        CONCAT12(uStack_3e,uStack_40
                                                                                ))))));
        puVar47 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        puVar52 = uStack_38;
        if (uVar91 == 0xc0) goto code_r0x0050d948;
code_r0x0050d9a4:
        if (uVar91 == 0x80) {
          *(int *)((long)param_1 + (ulong)*puVar100) = (int)puVar52;
          puVar63 = (ulong *)*param_3;
        }
        else {
          *(bool *)((long)param_1 + (ulong)*puVar100) = puVar52 != (ulong *)0x0;
          puVar63 = (ulong *)*param_3;
        }
        puVar49 = puVar47;
        if (puVar63 <= puVar47) {
code_r0x0050d9b8:
          if ((ulong)(ushort)*param_5 != 0) {
            puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar100 = *puVar100 | (uint)param_6;
          }
          return puVar47;
        }
      }
      else {
        if (uVar89 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar100[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar100[1] & 0x1f);
        }
        if (uVar91 != 0xc0) goto code_r0x0050d9a4;
code_r0x0050d948:
        *(ulong **)((long)param_1 + (ulong)*puVar100) = puVar52;
        puVar49 = puVar47;
        if ((ulong *)*param_3 <= puVar47) goto code_r0x0050d9b8;
      }
      uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
      puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^ (ulong)(ushort)*puVar49);
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
code_r0x0050da01:
                    /* WARNING: Could not recover jumptable at 0x0050da0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar49,param_3,puVar63);
      return puVar49;
    }
  }
  else {
    uVar60 = *(uint *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
    puVar54 = (ulong *)(ulong)uVar60;
    if (uVar60 <= uVar68) {
      pbVar45 = (byte *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
      do {
        puVar52 = (ulong *)(ulong)*(ushort *)(pbVar45 + 4);
        uVar60 = uVar68 - (int)puVar54;
        uVar96 = uVar60 >> 4;
        puVar54 = (ulong *)(ulong)uVar96;
        if (uVar96 < *(ushort *)(pbVar45 + 4)) {
          uVar87 = *(ushort *)(pbVar45 + (ulong)uVar96 * 4 + 6);
          puVar52 = (ulong *)(ulong)uVar87;
          uVar60 = uVar60 & 0xf;
          uVar68 = 1 << (sbyte)uVar60;
          puVar46 = (ulong *)(ulong)uVar68;
          if ((uVar87 >> uVar60 & 1) == 0) {
            uVar68 = uVar68 - 1 & (uint)uVar87;
            uVar68 = uVar68 - (uVar68 >> 1 & 0x5555);
            uVar68 = (uVar68 >> 2 & 0x33333333) + (uVar68 & 0x33333333);
            uVar68 = (uVar68 >> 4) + uVar68 & 0xf0f0f0f;
            puVar54 = (ulong *)(ulong)uVar68;
            uVar60 = (uVar60 - (uVar68 * 0x1010101 >> 0x18)) +
                     (uint)*(ushort *)(pbVar45 + (ulong)(uVar96 * 2) * 2 + 8);
            goto code_r0x0050145f;
          }
          break;
        }
        puVar100 = (uint *)(pbVar45 + (long)puVar52 * 4 + 6);
        puVar54 = (ulong *)(ulong)*puVar100;
        pbVar45 = pbVar45 + (long)puVar52 * 4 + 6;
      } while (*puVar100 <= uVar68);
    }
  }
  puVar47 = (ulong *)in_FS_OFFSET[5];
  if (puVar47 == puVar63) {
                    /* WARNING: Could not recover jumptable at 0x00501507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar49 = (ulong *)(*(code *)param_5[6])();
    return puVar49;
  }
code_r0x00501627:
  uStack_40 = 0x162c;
  uStack_3e = 0x50;
  bStack_3d = 0;
  bStack_3c = 0;
  bStack_3b = 0;
  bStack_3a = 0;
  bStack_39 = 0;
  func_0x0099bd00();
  uStack_40 = (ushort)&stack0xfffffffffffffff8;
  uStack_3e = (undefined1)((ulong)&stack0xfffffffffffffff8 >> 0x10);
  bStack_3d = (byte)((ulong)&stack0xfffffffffffffff8 >> 0x18);
  bStack_3c = (byte)((ulong)&stack0xfffffffffffffff8 >> 0x20);
  bStack_3b = (byte)((ulong)&stack0xfffffffffffffff8 >> 0x28);
  bStack_3a = (byte)((ulong)&stack0xfffffffffffffff8 >> 0x30);
  bStack_39 = (byte)((ulong)&stack0xfffffffffffffff8 >> 0x38);
  uStack_48._0_2_ = (ushort)puVar52;
  uStack_48._2_2_ = (undefined2)((ulong)puVar52 >> 0x10);
  uStack_44 = (uint)((ulong)puVar52 >> 0x20);
  uStack_50._0_2_ = (ushort)puVar54;
  uStack_50._2_2_ = (undefined2)((ulong)puVar54 >> 0x10);
  uStack_4c = (uint)((ulong)puVar54 >> 0x20);
  puStack_68 = (ulong *)in_FS_OFFSET[5];
  uVar95 = 0;
  uVar84 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar81 = (ulong)*extraout_RDX;
  pbVar45 = extraout_RDX + 1;
  uStack_60 = puVar46;
  if ((char)*extraout_RDX < '\0') {
    bVar4 = *pbVar45;
    uStack_70 = (ulong *)CONCAT17(bVar4,(undefined7)uStack_70);
    uVar83 = (uint7)((uVar81 << 0x39) >> 8);
    puVar63 = (ulong *)CONCAT71(uVar83,bVar4);
    pbVar45 = extraout_RDX;
    if ((char)bVar4 < '\0') goto code_r0x00501856;
    uVar81 = (long)puVar63 << 7 | (ulong)(uVar83 >> 0x31);
    pbVar45 = extraout_RDX + 2;
  }
code_r0x00501676:
  do {
    uVar91 = (uint)(uVar81 >> 3) & 0x1fffffff;
    uVar66 = uVar91 - 1;
    puVar54 = puVar49;
    if (uVar66 < 0x20) {
      if ((*(uint *)((long)param_6 + 0xc) >> (uVar66 & 0x1f) & 1) != 0) goto code_r0x0050178d;
      uVar91 = *(uint *)((long)param_6 + 0xc) & (1 << ((byte)uVar66 & 0x1f)) - 1U;
      uVar91 = uVar91 - (uVar91 >> 1 & 0x55555555);
      uVar91 = (uVar91 >> 2 & 0x33333333) + (uVar91 & 0x33333333);
      uVar66 = uVar66 - (((uVar91 >> 4) + uVar91 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x005016f2:
      pbVar88 = (byte *)((long)param_6 + (ulong)uVar66 * 0xc + (ulong)(uint)param_6[2]);
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(
                     _ZZN6google8protobuf8internal8TcParser9MiniParseILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmE15kMiniParseTable
                     + (ulong)(*(ushort *)
                                ((long)param_6 + (ulong)uVar66 * 0xc + (ulong)(uint)param_6[2] + 10)
                              & 0xf) * 8);
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar81;
      param_1[2] = (ulong)pbVar88;
      puStack_78 = (ulong *)&UNK_00501731;
      uVar95 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar49,pbVar45,puVar47,
                          uVar81 & 0xffffffff | (ulong)(uint)((int)pbVar88 - (int)param_6) << 0x20);
    }
    else {
      uVar66 = *(uint *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
      if (uVar66 <= uVar91) {
        pbVar88 = (byte *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
        do {
          uVar43 = *(ushort *)(pbVar88 + 4);
          uVar79 = uVar91 - uVar66 >> 4;
          if (uVar79 < uVar43) {
            uVar91 = uVar91 - uVar66 & 0xf;
            if ((*(ushort *)(pbVar88 + (ulong)uVar79 * 4 + 6) >> uVar91 & 1) == 0) {
              uVar66 = (1 << (sbyte)uVar91) - 1U &
                       (uint)*(ushort *)(pbVar88 + (ulong)uVar79 * 4 + 6);
              uVar66 = uVar66 - (uVar66 >> 1 & 0x5555);
              uVar66 = (uVar66 >> 2 & 0x33333333) + (uVar66 & 0x33333333);
              uVar66 = (uVar91 - (((uVar66 >> 4) + uVar66 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                       (uint)*(ushort *)(pbVar88 + (ulong)(uVar79 * 2) * 2 + 8);
              goto code_r0x005016f2;
            }
            break;
          }
          uVar66 = *(uint *)(pbVar88 + (ulong)uVar43 * 4 + 6);
          pbVar88 = pbVar88 + (ulong)uVar43 * 4 + 6;
        } while (uVar66 <= uVar91);
      }
code_r0x0050178d:
      UNRECOVERED_JUMPTABLE_00 = (code *)param_6[6];
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar81;
      param_1[2] = 0;
      puStack_78 = (ulong *)&UNK_005017aa;
      uVar95 = (*UNRECOVERED_JUMPTABLE_00)(puVar49,pbVar45,puVar47,uVar81 & 0xffffffff);
    }
    while( true ) {
      param_1[3] = uVar95;
      if ((ulong *)in_FS_OFFSET[5] == puStack_68) {
        return param_1;
      }
      puStack_78 = (ulong *)&UNK_00501856;
      puVar47 = (ulong *)func_0x0099bd00();
      pbVar45 = extraout_RDX_00;
      puVar63 = puVar49;
      puVar49 = puVar54;
      uVar95 = extraout_XMM0_Qa;
      uVar84 = extraout_XMM0_Qb;
code_r0x00501856:
      puVar54 = uStack_70;
      bVar4 = pbVar45[2];
      uStack_70._0_7_ = CONCAT16(bVar4,(undefined6)uStack_70);
      uVar83 = (uint7)((ulong)puVar63 >> 0xf) | (uint7)((ulong)((long)puVar63 << 0x39) >> 8);
      if (-1 < (char)bVar4) {
        uVar81 = CONCAT71(uVar83,bVar4) << 0xe | (ulong)(uVar83 >> 0x2a);
        pbVar45 = pbVar45 + 3;
        goto code_r0x00501676;
      }
      bVar3 = pbVar45[3];
      uStack_70._0_5_ = SUB85(puVar54,0);
      uStack_70._0_6_ = CONCAT15(bVar3,(undefined5)uStack_70);
      uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bVar4) << 0x39) >> 8);
      if (-1 < (char)bVar3) {
        uVar81 = CONCAT71(uVar83,bVar3) << 0x15 | (ulong)(uVar83 >> 0x23);
        pbVar45 = pbVar45 + 4;
        goto code_r0x00501676;
      }
      bVar4 = pbVar45[4];
      uStack_70._0_4_ = (uint)puVar54;
      uStack_70._0_5_ = CONCAT14(bVar4,(uint)uStack_70);
      uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bVar3) << 0x39) >> 8);
      if (-1 < (char)bVar4) break;
      param_1[1] = uVar95;
      param_1[2] = uVar84;
      *param_1 = (ulong)
                 _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
      ;
      puStack_78 = (ulong *)&UNK_005018cf;
      puVar54 = puVar49;
      uVar95 = _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                         (puVar49);
    }
    uVar81 = CONCAT71(uVar83,bVar4) << 0x1c | (ulong)(uVar83 >> 0x1c);
    pbVar45 = pbVar45 + 5;
  } while( true );
code_r0x00518a7b:
  bVar4 = (byte)*puVar63;
  auVar140[8] = bVar4;
  auVar140._0_8_ = (byte *)((long)puVar63 + 1);
  auVar140._9_3_ = 0;
  if ((char)bVar4 < '\0') {
    bVar3 = *(byte *)((long)puVar63 + 1);
    iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
    if ((char)bVar3 < '\0') {
      puStack_80 = (ulong *)&UNK_00518aac;
      auVar140 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar63,iVar67);
      param_3 = (ulong *)CONCAT17(bStack_39,
                                  CONCAT16(bStack_3a,
                                           CONCAT15(bStack_3b,
                                                    CONCAT14(bStack_3c,
                                                             CONCAT13(bStack_3d,
                                                                      CONCAT12(uStack_3e,uStack_40))
                                                            ))));
    }
    else {
      auVar140._8_4_ = iVar67;
      auVar140._0_8_ = (ushort *)((long)puVar63 + 2);
    }
  }
  puVar49 = auVar140._0_8_;
  if (auVar140._8_4_ != uStack_60._4_4_) goto code_r0x005188a0;
  goto code_r0x00518909;
code_r0x00518bce:
  param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
  param_5 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
  param_6 = puStack_68;
  goto code_r0x005013a0;
  while (puVar49 = auVar139._0_8_, uVar43 = (ushort)uStack_50, uVar35 = uStack_50._2_2_,
        uVar66 = uStack_4c, auVar139._8_4_ == uVar61) {
code_r0x00518523:
    uStack_4c = uVar66;
    uStack_50._2_2_ = uVar35;
    uStack_50._0_2_ = uVar43;
    uVar84 = *puVar49;
    uVar95 = *puVar63;
    uVar66 = (uint)uVar95 & 3;
    bVar102 = (uVar95 & 4) == 0;
    puVar54 = puVar63 + 1;
    uVar91 = (uint)*puVar54;
    uVar79 = uVar91;
    if (bVar102) {
      uVar79 = uVar66;
    }
    uVar97 = *(uint *)((long)puVar63 + 0xc);
    if (bVar102) {
      uVar97 = 2;
    }
    if (uVar79 == uVar97) {
      iVar67 = uVar79 + 1;
      uStack_70 = (ulong *)&UNK_005185db;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar63,(uVar95 & 4) == 0,uVar79,iVar67);
      param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      puVar54 = (ulong *)(*puVar63 & 0xfffffffffffffff8);
      uVar66 = (uint)puVar63[1];
code_r0x00518564:
      *(int *)(puVar63 + 1) = iVar67;
    }
    else {
      if ((uVar95 & 4) != 0) {
        iVar67 = uVar91 + 1;
        puVar54 = (ulong *)(uVar95 & 0xfffffffffffffff8);
        uVar66 = uVar91;
        goto code_r0x00518564;
      }
      *puVar63 = (long)(uVar95 & 0xfffffffffffffff8) + (ulong)uVar66 + 1;
    }
    *(uint *)((long)puVar54 + (long)(int)uVar66 * 4) = (uint)uVar84;
    puVar54 = (ulong *)((long)puVar49 + 4);
    if ((ulong *)*param_3 <= puVar54) goto code_r0x0051864a;
    bVar4 = *(byte *)((long)puVar49 + 4);
    auVar139[8] = bVar4;
    auVar139._0_8_ = (byte *)((long)puVar49 + 5);
    auVar139._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)((long)puVar49 + 5);
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        uStack_70 = (ulong *)&UNK_005185a8;
        auVar139 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
        if (auVar139._0_8_ == 0) goto code_r0x00518676;
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      }
      else {
        auVar139._8_4_ = iVar67;
        auVar139._0_8_ = (ushort *)((long)puVar49 + 6);
      }
    }
  }
  goto code_r0x00518608;
code_r0x00518676:
  param_5 = (ulong *)CONCAT17(bStack_39,
                              CONCAT16(bStack_3a,
                                       CONCAT15(bStack_3b,
                                                CONCAT14(bStack_3c,
                                                         CONCAT13(bStack_3d,
                                                                  CONCAT12(uStack_3e,uStack_40))))))
  ;
  param_1 = uStack_38;
  param_6 = uStack_58;
  goto code_r0x005013a0;
code_r0x005104be:
  puVar47 = auVar105._0_8_;
  puVar78 = &stack0xfffffffffffffff8;
  uVar91 = *(byte *)((long)unaff_R15 + 0xf) & 0xf;
  puVar63 = (ulong *)&UNK_00204f70;
  ppuVar72 = ppuVar69;
  ppuVar71 = ppuVar69;
  ppuVar34 = ppuVar69;
  auVar11 = auVar105;
  switch(uVar91) {
  case 0:
    *(undefined **)((long)ppuVar69 + -8) = &UNK_005104e1;
    _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
              (unaff_R15,unaff_RBX);
    puVar49 = (ulong *)*param_3;
    goto joined_r0x0051056f;
  case 1:
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051056b;
    _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
              (unaff_R15,unaff_RBX);
    puVar49 = (ulong *)*param_3;
joined_r0x0051056f:
    if (puVar47 < puVar49) {
code_r0x00510575:
      do {
        bVar4 = (byte)*puVar47;
        uVar91 = (uint)bVar4;
        unaff_R13 = (ulong *)((long)puVar47 + 1);
        if ((char)bVar4 < '\0') {
          bStack_39 = *(byte *)unaff_R13;
          uVar83 = (uint7)(((ulong)bVar4 << 0x39) >> 8);
          lVar58 = CONCAT71(uVar83,bStack_39);
          if ((char)bStack_39 < '\0') {
            bStack_3a = *(byte *)((long)puVar47 + 2);
            uVar83 = uVar83 >> 7 | (uint7)((ulong)(lVar58 << 0x39) >> 8);
            if ((char)bStack_3a < '\0') {
              bStack_3b = *(byte *)((long)puVar47 + 3);
              uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bStack_3a) << 0x39) >> 8);
              if ((char)bStack_3b < '\0') {
                bStack_3c = *(byte *)((long)puVar47 + 4);
                uVar83 = uVar83 >> 7 | (uint7)((ulong)(CONCAT71(uVar83,bStack_3b) << 0x39) >> 8);
                if ((char)bStack_3c < '\0') {
                  uVar91 = 0;
                  unaff_R13 = (ulong *)0x0;
                }
                else {
                  uVar91 = (int)CONCAT71(uVar83,bStack_3c) << 0x1c | (uint)(uVar83 >> 0x1c);
                  unaff_R13 = (ulong *)((long)puVar47 + 5);
                }
              }
              else {
                uVar91 = (int)CONCAT71(uVar83,bStack_3b) << 0x15 | (uint)(uVar83 >> 0x23);
                unaff_R13 = (ulong *)((long)puVar47 + 4);
              }
            }
            else {
              uVar91 = (int)CONCAT71(uVar83,bStack_3a) << 0xe | (uint)(uVar83 >> 0x2a);
              unaff_R13 = (ulong *)((long)puVar47 + 3);
            }
          }
          else {
            uVar91 = (int)lVar58 << 7 | (uint)(((ulong)bVar4 << 0x39) >> 0x39);
            unaff_R13 = (ulong *)((long)puVar47 + 2);
          }
        }
        ppuVar70 = ppuVar69;
        if (uVar91 != (uint)uStack_70) {
          uVar95 = (ulong)((uint)(byte)uStack_60[1] & (uint)(ushort)*puVar47 & 0xfffffff8);
          if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0051076e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar49 = (ulong *)(**(code **)((long)uStack_60 + uVar95 * 2 + 0x38))
                                         (CONCAT44(uStack_44,
                                                   CONCAT22(uStack_48._2_2_,(ushort)uStack_48)),
                                          puVar47,param_3,
                                          *(ulong *)((long)uStack_60 + uVar95 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar47,uStack_60,puStack_68);
            return puVar49;
          }
          goto code_r0x0051080d;
        }
code_r0x00510340:
        uVar43 = *(ushort *)((long)unaff_R15 + 0xc);
        uVar84 = unaff_R15[3];
        if (uVar84 == 0) {
          *(undefined **)((long)ppuVar70 + -8) = &UNK_00510368;
          unaff_RBX = (ulong *)_Znwm(uVar43);
        }
        else {
          *(undefined **)((long)ppuVar70 + -8) = &UNK_00510359;
          unaff_RBX = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar84,uVar43 + 7 & 0xfffffff8);
        }
        uVar43 = *(ushort *)((long)unaff_R15 + 0xc);
        unaff_RBX[1] = 0;
        pbVar45 = (byte *)((long)unaff_RBX + ((ulong)uVar43 - 8));
        pbVar45[0] = 0;
        pbVar45[1] = 0;
        pbVar45[2] = 0;
        pbVar45[3] = 0;
        pbVar45[4] = 0;
        pbVar45[5] = 0;
        pbVar45[6] = 0;
        pbVar45[7] = 0;
        if ((*(byte *)((long)unaff_R15 + 0xf) & 0xf) == 5) {
          uVar84 = unaff_R15[3];
          unaff_RBX[1] = 0;
          unaff_RBX[2] = 0;
          unaff_RBX[3] = 0;
          if (uVar84 != 0) {
            *(undefined **)((long)ppuVar70 + -8) = &UNK_005103b3;
            _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                      (uVar84,unaff_RBX + 1,
                       _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                      );
          }
        }
        bVar4 = *(byte *)((long)unaff_R15 + 0xf) >> 4;
        ppuVar69 = ppuVar70;
        if (4 < bVar4) {
          if (bVar4 == 6) {
code_r0x0051050d:
            *(undefined **)((long)ppuVar70 + -8) = &UNK_00510516;
            _ZNK6google8protobuf8internal9ClassData12PlacementNewEPvPNS0_5ArenaE();
            ppuVar69 = ppuVar70;
          }
          else {
            uVar81 = (ulong)*(byte *)((long)unaff_R15 + 0xe);
            uVar84 = unaff_R15[3];
            pbVar45 = (byte *)((long)unaff_RBX + uVar81);
            pbVar45[0] = 0;
            pbVar45[1] = 0;
            pbVar45[2] = 0;
            pbVar45[3] = 0;
            pbVar45[4] = 0;
            pbVar45[5] = 0;
            pbVar45[6] = 0;
            pbVar45[7] = 0;
            pbVar45[8] = 0;
            pbVar45[9] = 0;
            pbVar45[10] = 0;
            pbVar45[0xb] = 0;
            pbVar45[0xc] = 0;
            pbVar45[0xd] = 0;
            pbVar45[0xe] = 0;
            pbVar45[0xf] = 0;
            pbVar45 = (byte *)((long)unaff_RBX + uVar81 + 0x10);
            pbVar45[0] = 0;
            pbVar45[1] = 0;
            pbVar45[2] = 0;
            pbVar45[3] = 0;
            pbVar45[4] = 0;
            pbVar45[5] = 0;
            pbVar45[6] = 0;
            pbVar45[7] = 0;
            if (uVar84 != 0) {
              *(undefined **)((long)ppuVar70 + -8) = &UNK_005105c0;
              _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                        (uVar84,(byte *)(uVar81 + (long)unaff_RBX),
                         _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                        );
            }
          }
        }
        bVar4 = (byte)*unaff_R13;
        if ((char)bVar4 < '\0') {
          ppuVar69[-1] = (ulong *)&UNK_005103ea;
          auVar120 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(unaff_R13,bVar4);
          if (auVar120._0_8_ != 0) goto code_r0x005103f6;
code_r0x005106dc:
          if (unaff_R15[3] == 0) {
            ppuVar69[-1] = (ulong *)&UNK_005106ee;
            _ZN6google8protobuf8internal14UntypedMapBase10DeleteNodeEPNS1_8NodeBaseE
                      (unaff_R15,unaff_RBX);
          }
          if ((ulong *)in_FS_OFFSET[5] != uStack_38) goto code_r0x0051080d;
          param_1 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
          unaff_RBP = (undefined1 *)ppuVar69[0x12];
          register0x00000020 = (BADSPACEBASE *)(ppuVar69 + 0x13);
          param_5 = uStack_60;
          param_6 = puStack_68;
          goto code_r0x005013a0;
        }
        auVar120[8] = bVar4;
        auVar120._0_8_ = (byte *)((long)unaff_R13 + 1);
        auVar120._9_3_ = 0;
code_r0x005103f6:
        puVar49 = auVar120._0_8_;
        if ((int)(uint)param_3[0xb] < 1) goto code_r0x005106dc;
        uVar66 = auVar120._8_4_ + (auVar120._0_4_ - (int)param_3[1]);
        *param_3 = (long)(int)((int)uVar66 >> 0x1f & uVar66) + param_3[1];
        uVar91 = *(uint *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar66;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
        *ppuVar69 = unaff_R15;
        ppuVar69[-1] = (ulong *)&UNK_00510452;
        param_1 = unaff_RBX;
        param_5 = uStack_60;
        param_6 = puStack_78;
        auVar105 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                             (unaff_RBX,puVar49,param_3,
                              CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)));
        puVar47 = auVar105._0_8_;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
        uVar91 = (uVar91 - uVar66) + *(uint *)((long)param_3 + 0x1c);
        unaff_R13 = (ulong *)(ulong)uVar91;
        *(uint *)((long)param_3 + 0x1c) = uVar91;
        if (((uint)param_3[10] != 0) ||
           (*param_3 = (long)(int)((int)uVar91 >> 0x1f & uVar91) + param_3[1],
           puVar47 == (ulong *)0x0)) goto code_r0x005106dc;
        if ((bStack_3d & 8) == 0) goto code_r0x005104be;
        uVar91 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)unaff_R15 + 0xe));
        puVar100 = *(uint **)(CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50)) + 8);
        puVar49 = (ulong *)(long)(short)*puVar100;
        param_1 = (ulong *)(ulong)(*puVar100 >> 0x10);
        puVar63 = (ulong *)(((long)(int)uVar91 - (long)puVar49) - (long)param_1);
        auVar8._8_8_ = puVar63;
        auVar8._0_8_ = puVar47;
        auVar105._8_8_ = puVar63;
        auVar105._0_8_ = puVar47;
        if ((ulong *)((long)(int)uVar91 - (long)puVar49) < param_1) goto code_r0x005104be;
        uVar66 = puVar100[1];
        puVar49 = (ulong *)(ulong)uVar66;
        param_1 = (ulong *)(ulong)(ushort)uVar66;
        if (puVar63 < param_1) {
          auVar105 = auVar8;
          if ((puVar100[((ulong)puVar63 >> 5) + 2] >> ((uint)puVar63 & 0x1f) & 1) != 0)
          goto code_r0x005104be;
        }
        else {
          auVar105._8_4_ = uVar66 >> 0x10;
          auVar105._12_4_ = 0;
          puVar49 = (ulong *)0x0;
          while (puVar49 < (ulong *)(ulong)(uVar66 >> 0x10)) {
            uVar79 = *(uint *)((long)puVar100 +
                              (long)puVar49 * 4 + (ulong)(uVar66 >> 3 & 0x1ffc) + 8);
            param_1 = (ulong *)(ulong)uVar79;
            param_5 = (ulong *)(ulong)((int)uVar91 < (int)uVar79);
            puVar49 = (ulong *)(((long)puVar49 * 2 - (long)param_5) + 2);
            if (uVar79 == uVar91) goto code_r0x005104be;
          }
        }
        ppuVar69[-1] = (ulong *)&UNK_0051061f;
        _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                  (CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)),uStack_60,
                   unaff_R15,uStack_70,unaff_RBX,uStack_58);
        if ((ulong *)*param_3 <= puVar47) break;
      } while( true );
    }
    break;
  case 2:
code_r0x00510520:
    *(undefined **)((long)ppuVar71 + -8) = &UNK_0051052b;
    _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
              (unaff_R15,unaff_RBX);
    ppuVar69 = ppuVar71;
    if (puVar47 < (ulong *)*param_3) goto code_r0x00510575;
    break;
  case 3:
  case 4:
    goto code_r0x00510812;
  case 5:
code_r0x00510540:
    *(undefined **)((long)ppuVar72 + -8) = &UNK_0051054b;
    _ZN6google8protobuf8internal10KeyMapBaseINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE19InsertOrReplaceNodeEPNS1_7KeyNodeIS9_EE
              (unaff_R15,unaff_RBX);
    ppuVar69 = ppuVar72;
    if (puVar47 < (ulong *)*param_3) goto code_r0x00510575;
    break;
  case 6:
    goto code_r0x00510893;
  case 7:
    bVar102 = (int)uVar95 == 0;
    goto code_r0x005108b3;
  case 8:
    goto code_r0x00510893;
  case 9:
    uRam0000000045b708b1 =
         uRam0000000045b708b1 ^ *(int *)(&UNK_00204f70 + (ulong)uVar91 * 4) + 0x204f70U;
    bVar102 = auVar105._8_4_ == 0;
    goto code_r0x005108b3;
  default:
    switch(*(undefined4 *)
            (_ZN6google8protobuf8internal14WireFormatLite22kFieldTypeToCppTypeMapE +
            (ulong)(byte)param_1[1] * 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar95 = *(ulong *)*param_1;
      if ((uVar95 & 4) == 0) {
        puVar49 = (ulong *)(ulong)((uint)uVar95 & 3);
      }
      else {
        puVar49 = (ulong *)(ulong)(uint)((ulong *)*param_1)[1];
      }
      break;
    case 9:
    case 10:
      puVar49 = (ulong *)(ulong)*(uint *)(*param_1 + 8);
      break;
    default:
      goto code_r0x0051e680;
    }
    if (in_FS_OFFSET[5] ==
        CONCAT44((int)((ulong)unaff_R14 >> 0x20),
                 *(int *)(&UNK_00204f70 + (ulong)uVar91 * 4) + 0x204f70U)) {
      return puVar49;
    }
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051e680;
    func_0x0099bd00();
code_r0x0051e680:
    puVar76 = &stack0xffffffffffffffd8;
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051e698;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(puVar76,&UNK_0017bf02,0x5ad);
    iVar67 = 0x17a6b5;
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051e6a7;
    uVar48 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(puVar76);
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051e6af;
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar48);
    *(undefined **)((long)ppuVar69 + -8) = &UNK_0051e6b7;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
    uVar43 = *(ushort *)(puVar76 + 10);
    if (uVar43 == 0) {
      return (ulong *)0x0;
    }
    *(undefined1 **)((long)ppuVar69 + -8) = puVar78;
    if ((short)uVar43 < 0) {
      *(undefined **)((long)ppuVar69 + -0x10) = &UNK_0051e6fd;
      lVar58 = _ZNK6google8protobuf8internal12ExtensionSet20FindOrNullInLargeMapEi();
      if (lVar58 == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      lVar56 = (ulong)uVar43 << 5;
      lVar58 = *(long *)(puVar76 + 0x10) + 8;
      while( true ) {
        iVar62 = *(int *)(lVar58 + -8);
        if (iVar62 != iVar67 && iVar67 <= iVar62) {
          return (ulong *)0x0;
        }
        if (iVar62 == iVar67) break;
        lVar58 = lVar58 + 0x20;
        lVar56 = lVar56 + -0x20;
        if (lVar56 == 0) {
          return (ulong *)0x0;
        }
      }
    }
    return (ulong *)(ulong)*(byte *)(lVar58 + 8);
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar100 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)) +
                       (ulong)(ushort)*uStack_60);
    *puVar100 = *puVar100 | (uint)puStack_68;
  }
  if ((ulong *)in_FS_OFFSET[5] == uStack_38) {
    return puVar47;
  }
  goto code_r0x0051080d;
code_r0x005141fb:
  bVar4 = (byte)*puVar63;
  auVar130[8] = bVar4;
  auVar130._0_8_ = (byte *)((long)puVar63 + 1);
  auVar130._9_3_ = 0;
  if ((char)bVar4 < '\0') {
    bVar3 = *(byte *)((long)puVar63 + 1);
    iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
    if ((char)bVar3 < '\0') {
      puStack_80 = (ulong *)&UNK_0051422a;
      auVar130 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar63,iVar67);
    }
    else {
      auVar130._8_4_ = iVar67;
      auVar130._0_8_ = (ushort *)((long)puVar63 + 2);
    }
  }
  puVar49 = auVar130._0_8_;
  param_3 = uStack_38;
  if (auVar130._8_4_ != CONCAT22(uStack_48._2_2_,(ushort)uStack_48)) goto code_r0x00514015;
  goto code_r0x00514089;
code_r0x0051433e:
  param_1 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
  param_5 = (ulong *)CONCAT17(bStack_39,
                              CONCAT16(bStack_3a,
                                       CONCAT15(bStack_3b,
                                                CONCAT14(bStack_3c,
                                                         CONCAT13(bStack_3d,
                                                                  CONCAT12(uStack_3e,uStack_40))))))
  ;
  param_6 = uStack_58;
  goto code_r0x005013a0;
  while (puVar49 = auVar129._0_8_, pbVar45 = pbVar88, auVar129._8_4_ == uVar61) {
code_r0x00513763:
    uVar84 = *puVar49;
    uVar95 = *puVar63;
    uVar66 = (uint)uVar95 & 3;
    bVar102 = (uVar95 & 4) == 0;
    uVar91 = (uint)puVar63[1];
    uVar79 = uVar91;
    if (bVar102) {
      uVar79 = uVar66;
    }
    uVar97 = *(uint *)((long)puVar63 + 0xc);
    if (bVar102) {
      uVar97 = 2;
    }
    if (uVar79 == uVar97) {
      iVar67 = uVar79 + 1;
      uStack_60 = (ulong *)&UNK_0051381b;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar63,(uVar95 & 4) == 0,uVar79,iVar67);
      pbVar88 = (byte *)CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  )));
      uVar66 = (uint)puVar63[1];
      pbVar45 = (byte *)(*puVar63 & 0xfffffffffffffff8);
      param_3 = uStack_58;
code_r0x005137a4:
      *(int *)pbVar88 = iVar67;
    }
    else {
      pbVar88 = pbVar45;
      if ((uVar95 & 4) != 0) {
        iVar67 = uVar91 + 1;
        pbVar45 = (byte *)(uVar95 & 0xfffffffffffffff8);
        uVar66 = uVar91;
        goto code_r0x005137a4;
      }
      *puVar63 = (ulong)((byte *)(uVar95 & 0xfffffffffffffff8) + (ulong)uVar66 + 1);
    }
    *(uint *)(pbVar45 + (long)(int)uVar66 * 4) = (uint)uVar84;
    puVar54 = (ulong *)((long)puVar49 + 4);
    if ((ulong *)*param_3 <= puVar54) goto code_r0x0051388a;
    bVar4 = *(byte *)((long)puVar49 + 4);
    auVar129[8] = bVar4;
    auVar129._0_8_ = (byte *)((long)puVar49 + 5);
    auVar129._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)((long)puVar49 + 5);
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        uStack_60 = (ulong *)&UNK_005137e8;
        auVar129 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
        if (auVar129._0_8_ == 0) goto code_r0x005138b6;
        pbVar88 = (byte *)CONCAT17(bStack_39,
                                   CONCAT16(bStack_3a,
                                            CONCAT15(bStack_3b,
                                                     CONCAT14(bStack_3c,
                                                              CONCAT13(bStack_3d,
                                                                       CONCAT12(uStack_3e,uStack_40)
                                                                      )))));
        param_3 = uStack_58;
      }
      else {
        auVar129._8_4_ = iVar67;
        auVar129._0_8_ = (ushort *)((long)puVar49 + 6);
      }
    }
  }
  goto code_r0x00513848;
code_r0x0050dc60:
  uStack_50._0_2_ = uVar43;
  uStack_50._2_2_ = uVar35;
  uStack_4c = uVar79;
  uStack_48._0_2_ = uVar6;
  uStack_48._2_2_ = uVar36;
  uStack_44 = uVar97;
  uStack_3e = uVar38;
  bStack_3d = bVar4;
  bStack_3c = bVar3;
  bStack_3b = bVar39;
  bStack_3a = bVar40;
  bStack_39 = bVar41;
  if (in_FS_OFFSET[5] != lVar58) {
code_r0x0050dddd:
    uStack_40 = uVar37;
    puStack_80 = (ulong *)&UNK_0050dde2;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  goto 
  _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
  ;
code_r0x00513390:
  iVar67 = (int)param_3[1] - (int)pbVar88;
  iVar62 = (int)uVar95;
  if (iVar62 <= iVar67) goto code_r0x005133e6;
  uStack_60 = (ulong *)&UNK_005133aa;
  lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar88,param_3[1],pbVar45);
  if (lVar58 == 0) goto code_r0x00513408;
  puVar55 = (undefined8 *)param_3[1];
  iVar94 = (int)lVar58 - (int)puVar55;
  if (iVar62 - iVar67 < 0x11) {
    uStack_40 = 0;
    uStack_48._0_2_ = 0;
    uStack_48._2_2_ = 0;
    uStack_44 = 0;
    uStack_58 = (ulong *)*puVar55;
    uVar48 = puVar55[1];
    uStack_50._0_2_ = (ushort)uVar48;
    uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
    uStack_4c = (uint)((ulong)uVar48 >> 0x20);
    lVar58 = (long)&uStack_58 + (long)(iVar62 - iVar67);
    uStack_60 = (ulong *)&UNK_0051345b;
    lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                       ((long)&uStack_58 + (long)iVar94,lVar58,pbVar45);
    puVar49 = (ulong *)0x0;
    if (lVar56 == lVar58) {
      puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
    }
    goto code_r0x0051340a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00513408;
  uStack_60 = (ulong *)&UNK_005133d3;
  lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar58 == 0) goto code_r0x00513408;
  uVar95 = (ulong)(uint)(iVar62 - (iVar67 + iVar94));
  pbVar88 = (byte *)(lVar58 + iVar94);
  goto code_r0x00513390;
code_r0x00513408:
  puVar49 = (ulong *)0x0;
  goto code_r0x0051340a;
code_r0x00512420:
  do {
    bVar4 = (byte)*puVar49;
    if ((long)(char)bVar4 < 0) {
      puStack_80 = (ulong *)&UNK_0051243b;
      auVar108 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
      if (auVar108._0_8_ == 0) {
        puVar49 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar108._8_8_ = (long)(char)bVar4;
      auVar108._0_8_ = (byte *)((long)puVar49 + 1);
    }
    puVar49 = auVar108._0_8_;
    uVar95 = *param_1;
    bVar102 = (uVar95 & 4) != 0;
    uVar91 = (uint)param_1[1];
    uVar66 = (uint)uVar95 & 3;
    if (bVar102) {
      uVar66 = uVar91;
    }
    uVar79 = *(uint *)((long)param_1 + 0xc);
    if (!bVar102) {
      uVar79 = 1;
    }
    uVar97 = uVar66 + 1;
    if (uVar66 == uVar79) {
      puStack_80 = (ulong *)&UNK_005123fb;
      puStack_68 = auVar108._8_8_;
      uStack_60 = puVar49;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar95 & 4) == 0,uVar66,uVar97);
      auVar108._8_8_ = puStack_68;
      auVar108._0_8_ = uStack_60;
      uVar84 = *param_1 & 0xfffffffffffffff8;
      uVar91 = (uint)param_1[1];
code_r0x00512410:
      puVar49 = auVar108._0_8_;
      *(uint *)(param_1 + 1) = uVar97;
      *(long *)(uVar84 + (long)(int)uVar91 * 8) = auVar108._8_8_;
    }
    else {
      uVar84 = uVar95 & 0xfffffffffffffff8;
      if ((uVar95 & 4) != 0) goto code_r0x00512410;
      *param_1 = uVar84 | uVar97;
      param_1[(ulong)((uint)uVar95 & 3) + 1] = (ulong)auVar108._8_8_;
    }
  } while (puVar49 < puVar54);
  puVar63 = (ulong *)param_3[1];
code_r0x00512492:
  puVar52 = (ulong *)0x0;
  if (puVar49 == puVar54) {
    puVar52 = (ulong *)(((long)puVar49 - (long)&uStack_58) + (long)puVar63);
  }
  goto code_r0x005123b7;
code_r0x0051229b:
  puVar52 = (ulong *)0x0;
  goto code_r0x005123b7;
code_r0x00512510:
  iVar67 = (int)param_3[1] - (int)pbVar45;
  iVar62 = (int)uVar95;
  if (iVar62 <= iVar67) goto code_r0x00512566;
  uStack_60 = (ulong *)&UNK_0051252a;
  lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar45,param_3[1],param_1);
  if (lVar58 == 0) goto code_r0x00512588;
  puVar55 = (undefined8 *)param_3[1];
  iVar94 = (int)lVar58 - (int)puVar55;
  if (iVar62 - iVar67 < 0x11) {
    uStack_40 = 0;
    uStack_48._0_2_ = 0;
    uStack_48._2_2_ = 0;
    uStack_44 = 0;
    uStack_58 = (ulong *)*puVar55;
    uVar48 = puVar55[1];
    uStack_50._0_2_ = (ushort)uVar48;
    uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
    uStack_4c = (uint)((ulong)uVar48 >> 0x20);
    lVar58 = (long)&uStack_58 + (long)(iVar62 - iVar67);
    uStack_60 = (ulong *)&UNK_005125db;
    lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                       ((long)&uStack_58 + (long)iVar94,lVar58,param_1);
    puVar49 = (ulong *)0x0;
    if (lVar56 == lVar58) {
      puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
    }
    goto code_r0x0051258a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512588;
  uStack_60 = (ulong *)&UNK_00512553;
  lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar58 == 0) goto code_r0x00512588;
  uVar95 = (ulong)(uint)(iVar62 - (iVar67 + iVar94));
  pbVar45 = (byte *)(lVar58 + iVar94);
  goto code_r0x00512510;
code_r0x00512588:
  puVar49 = (ulong *)0x0;
  goto code_r0x0051258a;
code_r0x00512b00:
  iVar67 = (int)param_3[1] - (int)pbVar45;
  iVar62 = (int)uVar95;
  if (iVar62 <= iVar67) goto code_r0x00512b56;
  uStack_60 = (ulong *)&UNK_00512b1a;
  lVar58 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar45,param_3[1],puVar52);
  if (lVar58 == 0) goto code_r0x00512b78;
  puVar55 = (undefined8 *)param_3[1];
  iVar94 = (int)lVar58 - (int)puVar55;
  if (iVar62 - iVar67 < 0x11) {
    uStack_40 = 0;
    uStack_48._0_2_ = 0;
    uStack_48._2_2_ = 0;
    uStack_44 = 0;
    uStack_58 = (ulong *)*puVar55;
    uVar48 = puVar55[1];
    uStack_50._0_2_ = (ushort)uVar48;
    uStack_50._2_2_ = (undefined2)((ulong)uVar48 >> 0x10);
    uStack_4c = (uint)((ulong)uVar48 >> 0x20);
    lVar58 = (long)&uStack_58 + (long)(iVar62 - iVar67);
    uStack_60 = (ulong *)&UNK_00512bcb;
    lVar56 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                       ((long)&uStack_58 + (long)iVar94,lVar58,puVar52);
    puVar49 = (ulong *)0x0;
    if (lVar56 == lVar58) {
      puVar49 = (ulong *)((lVar56 - (long)&uStack_58) + param_3[1]);
    }
    goto code_r0x00512b7a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512b78;
  uStack_60 = (ulong *)&UNK_00512b43;
  lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar58 == 0) goto code_r0x00512b78;
  uVar95 = (ulong)(uint)(iVar62 - (iVar67 + iVar94));
  pbVar45 = (byte *)(lVar58 + iVar94);
  goto code_r0x00512b00;
code_r0x00512b78:
  puVar49 = (ulong *)0x0;
  goto code_r0x00512b7a;
code_r0x00512a0f:
  do {
    bVar4 = (byte)*puVar49;
    if ((long)(char)bVar4 < 0) {
      puStack_80 = (ulong *)&UNK_00512a2b;
      auVar111 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
      if (auVar111._0_8_ == 0) {
        puVar49 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar111._8_8_ = (long)(char)bVar4;
      auVar111._0_8_ = (byte *)((long)puVar49 + 1);
    }
    auVar112 = auVar111._0_12_;
    puVar49 = auVar111._0_8_;
    uVar95 = *puVar52;
    bVar102 = (uVar95 & 4) != 0;
    uVar91 = (uint)puVar52[1];
    uVar66 = (uint)uVar95 & 3;
    if (bVar102) {
      uVar66 = uVar91;
    }
    uVar79 = *(uint *)((long)puVar52 + 0xc);
    if (!bVar102) {
      uVar79 = 2;
    }
    uVar97 = uVar66 + 1;
    if (uVar66 == uVar79) {
      puStack_80 = (ulong *)&UNK_005129ea;
      puStack_68 = auVar111._8_8_;
      uStack_60 = puVar49;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar52,(uVar95 & 4) == 0,uVar66,uVar97);
      auVar10._8_8_ = puStack_68;
      auVar10._0_8_ = uStack_60;
      auVar112 = auVar10._0_12_;
      uVar84 = *puVar52 & 0xfffffffffffffff8;
      uVar91 = (uint)puVar52[1];
code_r0x00512a00:
      puVar49 = auVar112._0_8_;
      *(uint *)(puVar52 + 1) = uVar97;
      *(int *)(uVar84 + (long)(int)uVar91 * 4) = auVar112._8_4_;
    }
    else {
      uVar84 = uVar95 & 0xfffffffffffffff8;
      if ((uVar95 & 4) != 0) goto code_r0x00512a00;
      *puVar52 = uVar84 | uVar97;
      *(int *)((long)puVar52 + (ulong)((uint)uVar95 & 3) * 4 + 8) = auVar111._8_4_;
    }
  } while (puVar49 < puVar54);
  puVar63 = (ulong *)param_3[1];
code_r0x00512a81:
  puVar52 = (ulong *)0x0;
  if (puVar49 == puVar54) {
    puVar52 = (ulong *)(((long)puVar49 - (long)&uStack_58) + (long)puVar63);
  }
  goto code_r0x005129a6;
code_r0x0051288a:
  puVar52 = (ulong *)0x0;
  goto code_r0x005129a6;
code_r0x005138b6:
  param_1 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
  param_6 = (ulong *)(ulong)CONCAT22(uStack_50._2_2_,(ushort)uStack_50);
  param_5 = uStack_38;
code_r0x005013a0:
  *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
  if ((ulong)(ushort)*param_5 != 0) {
    puVar100 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
    *puVar100 = *puVar100 | (uint)param_6;
  }
  return (ulong *)0x0;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051288a;
    puStack_80 = (ulong *)&UNK_0051285b;
    lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar58 == 0) goto code_r0x0051288a;
    uVar91 = (int)uVar95 - (iVar67 + iVar62);
    uVar95 = (ulong)uVar91;
    puVar49 = (ulong *)(lVar58 + iVar62);
    puVar63 = (ulong *)param_3[1];
    iVar67 = (int)puVar63 - (int)puVar49;
    if ((int)uVar91 <= iVar67) break;
code_r0x00512769:
    if (puVar49 < puVar63) {
      do {
        while( true ) {
          bVar4 = (byte)*puVar49;
          if ((long)(char)bVar4 < 0) {
            puStack_80 = (ulong *)&UNK_005127db;
            auVar109 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
            if (auVar109._0_8_ == 0) goto code_r0x0051288a;
          }
          else {
            auVar109._8_8_ = (long)(char)bVar4;
            auVar109._0_8_ = (byte *)((long)puVar49 + 1);
          }
          auVar112 = auVar109._0_12_;
          puVar49 = auVar109._0_8_;
          uVar84 = *puVar52;
          bVar102 = (uVar84 & 4) != 0;
          uVar91 = (uint)puVar52[1];
          uVar66 = (uint)uVar84 & 3;
          if (bVar102) {
            uVar66 = uVar91;
          }
          uVar79 = *(uint *)((long)puVar52 + 0xc);
          if (!bVar102) {
            uVar79 = 2;
          }
          uVar97 = uVar66 + 1;
          if (uVar66 != uVar79) break;
          puStack_80 = (ulong *)&UNK_00512792;
          puStack_68 = auVar109._8_8_;
          uStack_60 = puVar49;
          _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar52,(uVar84 & 4) == 0,uVar66,uVar97);
          auVar9._8_8_ = puStack_68;
          auVar9._0_8_ = uStack_60;
          auVar112 = auVar9._0_12_;
          uVar81 = *puVar52 & 0xfffffffffffffff8;
          uVar91 = (uint)puVar52[1];
code_r0x005127b0:
          puVar49 = auVar112._0_8_;
          *(uint *)(puVar52 + 1) = uVar97;
          *(int *)(uVar81 + (long)(int)uVar91 * 4) = auVar112._8_4_;
          if (puVar63 <= puVar49) goto code_r0x00512833;
        }
        uVar81 = uVar84 & 0xfffffffffffffff8;
        if ((uVar84 & 4) != 0) goto code_r0x005127b0;
        *puVar52 = uVar81 | uVar97;
        *(int *)((long)puVar52 + (ulong)((uint)uVar84 & 3) * 4 + 8) = auVar109._8_4_;
      } while (puVar49 < puVar63);
code_r0x00512833:
      puVar63 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar62 = (int)puVar49 - (int)puVar63;
    iVar94 = (int)uVar95 - iVar67;
    if (iVar94 < 0x11) {
      uStack_48._0_2_ = 0;
      uStack_48._2_2_ = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar95 = puVar63[1];
      uStack_58 = (ulong *)*puVar63;
      uStack_50._0_2_ = (ushort)uVar95;
      uStack_50._2_2_ = (undefined2)(uVar95 >> 0x10);
      uStack_4c = (uint)(uVar95 >> 0x20);
      puVar54 = (ulong *)((long)&uStack_58 + (long)iVar94);
      puVar49 = (ulong *)((long)&uStack_58 + (long)iVar62);
      if ((long)iVar94 <= (long)iVar62) goto code_r0x00512a81;
      goto code_r0x00512a0f;
    }
  }
code_r0x00512894:
  puVar63 = (ulong *)((long)puVar49 + (long)(int)uVar91);
  if (0 < (int)uVar91) {
    do {
      while( true ) {
        bVar4 = (byte)*puVar49;
        if ((long)(char)bVar4 < 0) {
          puStack_80 = (ulong *)&UNK_0051294b;
          auVar110 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
          if (auVar110._0_8_ == 0) {
            puVar49 = (ulong *)0x0;
            goto code_r0x0051299d;
          }
        }
        else {
          auVar110._8_8_ = (long)(char)bVar4;
          auVar110._0_8_ = (byte *)((long)puVar49 + 1);
        }
        puVar49 = auVar110._0_8_;
        uVar95 = *puVar52;
        bVar102 = (uVar95 & 4) != 0;
        uVar91 = (uint)puVar52[1];
        uVar66 = (uint)uVar95 & 3;
        if (bVar102) {
          uVar66 = uVar91;
        }
        uVar79 = *(uint *)((long)puVar52 + 0xc);
        if (!bVar102) {
          uVar79 = 2;
        }
        uVar97 = uVar66 + 1;
        if (uVar66 != uVar79) break;
        puStack_80 = (ulong *)&UNK_0051290d;
        uStack_70 = auVar110._8_8_;
        _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar52,(uVar95 & 4) == 0,uVar66,uVar97);
        uVar84 = *puVar52 & 0xfffffffffffffff8;
        uVar91 = (uint)puVar52[1];
        puVar54 = uStack_70;
code_r0x00512920:
        *(uint *)(puVar52 + 1) = uVar97;
        *(int *)(uVar84 + (long)(int)uVar91 * 4) = (int)puVar54;
        if (puVar63 <= puVar49) goto code_r0x0051299d;
      }
      uVar84 = uVar95 & 0xfffffffffffffff8;
      puVar54 = auVar110._8_8_;
      if ((uVar95 & 4) != 0) goto code_r0x00512920;
      *puVar52 = uVar84 | uVar97;
      *(int *)((long)puVar52 + (ulong)((uint)uVar95 & 3) * 4 + 8) = auVar110._8_4_;
    } while (puVar49 < puVar63);
  }
code_r0x0051299d:
  puVar52 = (ulong *)0x0;
  if (puVar63 == puVar49) {
    puVar52 = puVar49;
  }
code_r0x005129a6:
  if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
    puStack_80 = (ulong *)&UNK_00512aa1;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  return puVar52;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051229b;
    puStack_80 = (ulong *)&UNK_0051226c;
    lVar58 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar58 == 0) goto code_r0x0051229b;
    uVar91 = (int)uVar95 - (iVar67 + iVar62);
    uVar95 = (ulong)uVar91;
    puVar49 = (ulong *)(lVar58 + iVar62);
    puVar63 = (ulong *)param_3[1];
    iVar67 = (int)puVar63 - (int)puVar49;
    if ((int)uVar91 <= iVar67) break;
code_r0x00512179:
    if (puVar49 < puVar63) {
      do {
        while( true ) {
          bVar4 = (byte)*puVar49;
          if ((long)(char)bVar4 < 0) {
            puStack_80 = (ulong *)&UNK_005121eb;
            auVar106 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
            if (auVar106._0_8_ == 0) goto code_r0x0051229b;
          }
          else {
            auVar106._8_8_ = (long)(char)bVar4;
            auVar106._0_8_ = (byte *)((long)puVar49 + 1);
          }
          puVar49 = auVar106._0_8_;
          uVar84 = *param_1;
          bVar102 = (uVar84 & 4) != 0;
          uVar91 = (uint)param_1[1];
          uVar66 = (uint)uVar84 & 3;
          if (bVar102) {
            uVar66 = uVar91;
          }
          uVar79 = *(uint *)((long)param_1 + 0xc);
          if (!bVar102) {
            uVar79 = 1;
          }
          uVar97 = uVar66 + 1;
          if (uVar66 != uVar79) break;
          puStack_80 = (ulong *)&UNK_005121a2;
          puStack_68 = auVar106._8_8_;
          uStack_60 = puVar49;
          _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar84 & 4) == 0,uVar66,uVar97);
          auVar106._8_8_ = puStack_68;
          auVar106._0_8_ = uStack_60;
          uVar81 = *param_1 & 0xfffffffffffffff8;
          uVar91 = (uint)param_1[1];
code_r0x005121c0:
          puVar49 = auVar106._0_8_;
          *(uint *)(param_1 + 1) = uVar97;
          *(long *)(uVar81 + (long)(int)uVar91 * 8) = auVar106._8_8_;
          if (puVar63 <= puVar49) goto code_r0x00512244;
        }
        uVar81 = uVar84 & 0xfffffffffffffff8;
        if ((uVar84 & 4) != 0) goto code_r0x005121c0;
        *param_1 = uVar81 | uVar97;
        param_1[(ulong)((uint)uVar84 & 3) + 1] = (ulong)auVar106._8_8_;
      } while (puVar49 < puVar63);
code_r0x00512244:
      puVar63 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar62 = (int)puVar49 - (int)puVar63;
    iVar94 = (int)uVar95 - iVar67;
    if (iVar94 < 0x11) {
      uStack_48._0_2_ = 0;
      uStack_48._2_2_ = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar95 = puVar63[1];
      uStack_58 = (ulong *)*puVar63;
      uStack_50._0_2_ = (ushort)uVar95;
      uStack_50._2_2_ = (undefined2)(uVar95 >> 0x10);
      uStack_4c = (uint)(uVar95 >> 0x20);
      puVar54 = (ulong *)((long)&uStack_58 + (long)iVar94);
      puVar49 = (ulong *)((long)&uStack_58 + (long)iVar62);
      if ((long)iVar94 <= (long)iVar62) goto code_r0x00512492;
      goto code_r0x00512420;
    }
  }
code_r0x005122a5:
  puVar63 = (ulong *)((long)puVar49 + (long)(int)uVar91);
  if (0 < (int)uVar91) {
    do {
      while( true ) {
        bVar4 = (byte)*puVar49;
        if ((long)(char)bVar4 < 0) {
          puStack_80 = (ulong *)&UNK_0051235b;
          auVar107 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar49,bVar4);
          if (auVar107._0_8_ == 0) {
            puVar49 = (ulong *)0x0;
            goto code_r0x005123ae;
          }
        }
        else {
          auVar107._8_8_ = (long)(char)bVar4;
          auVar107._0_8_ = (byte *)((long)puVar49 + 1);
        }
        puVar54 = auVar107._8_8_;
        puVar49 = auVar107._0_8_;
        uVar95 = *param_1;
        bVar102 = (uVar95 & 4) != 0;
        uVar91 = (uint)param_1[1];
        uVar66 = (uint)uVar95 & 3;
        if (bVar102) {
          uVar66 = uVar91;
        }
        uVar79 = *(uint *)((long)param_1 + 0xc);
        if (!bVar102) {
          uVar79 = 1;
        }
        uVar97 = uVar66 + 1;
        if (uVar66 != uVar79) break;
        puStack_80 = (ulong *)&UNK_0051231e;
        uStack_70 = puVar54;
        _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar95 & 4) == 0,uVar66,uVar97);
        uVar84 = *param_1 & 0xfffffffffffffff8;
        uVar91 = (uint)param_1[1];
        puVar54 = uStack_70;
code_r0x00512330:
        *(uint *)(param_1 + 1) = uVar97;
        *(ulong **)(uVar84 + (long)(int)uVar91 * 8) = puVar54;
        if (puVar63 <= puVar49) goto code_r0x005123ae;
      }
      uVar84 = uVar95 & 0xfffffffffffffff8;
      if ((uVar95 & 4) != 0) goto code_r0x00512330;
      *param_1 = uVar84 | uVar97;
      param_1[(ulong)((uint)uVar95 & 3) + 1] = (ulong)puVar54;
    } while (puVar49 < puVar63);
  }
code_r0x005123ae:
  puVar52 = (ulong *)0x0;
  if (puVar63 == puVar49) {
    puVar52 = puVar49;
  }
code_r0x005123b7:
  if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
    puStack_80 = (ulong *)&UNK_005124b2;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  return puVar52;
code_r0x00512b56:
  uStack_60 = (ulong *)&UNK_00512b6a;
  puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar45,pbVar45 + iVar62,puVar52);
  puVar49 = (ulong *)0x0;
  if ((ulong *)(pbVar45 + iVar62) == puVar63) {
    puVar49 = puVar63;
  }
code_r0x00512b7a:
  if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
    uStack_60 = (ulong *)&UNK_00512bec;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  return puVar49;
code_r0x00512566:
  uStack_60 = (ulong *)&UNK_0051257a;
  puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar45,pbVar45 + iVar62,param_1);
  puVar49 = (ulong *)0x0;
  if ((ulong *)(pbVar45 + iVar62) == puVar63) {
    puVar49 = puVar63;
  }
code_r0x0051258a:
  if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
    uStack_60 = (ulong *)&UNK_005125fc;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  return puVar49;
code_r0x005133e6:
  uStack_60 = (ulong *)&UNK_005133fa;
  puVar63 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar88,pbVar88 + iVar62,pbVar45);
  puVar49 = (ulong *)0x0;
  if ((ulong *)(pbVar88 + iVar62) == puVar63) {
    puVar49 = puVar63;
  }
code_r0x0051340a:
  if ((ulong *)in_FS_OFFSET[5] != uStack_38) {
    uStack_60 = (ulong *)&UNK_0051347c;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar49;
  }
  return puVar49;
  while (puVar49 = auVar128._0_8_, pbVar45 = pbVar88, auVar128._8_4_ == uVar61) {
code_r0x00513643:
    uVar95 = *puVar49;
    uVar84 = *puVar63;
    uVar66 = (uint)uVar84 & 3;
    bVar102 = (uVar84 & 4) == 0;
    uVar91 = (uint)puVar63[1];
    uVar79 = uVar91;
    if (bVar102) {
      uVar79 = uVar66;
    }
    uVar97 = *(uint *)((long)puVar63 + 0xc);
    if (bVar102) {
      uVar97 = 1;
    }
    if (uVar79 == uVar97) {
      iVar67 = uVar79 + 1;
      uStack_60 = (ulong *)&UNK_005136fb;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar63,(uVar84 & 4) == 0,uVar79,iVar67);
      pbVar88 = (byte *)CONCAT17(bStack_39,
                                 CONCAT16(bStack_3a,
                                          CONCAT15(bStack_3b,
                                                   CONCAT14(bStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  )));
      uVar66 = (uint)puVar63[1];
      pbVar45 = (byte *)(*puVar63 & 0xfffffffffffffff8);
      param_3 = uStack_58;
code_r0x00513684:
      *(int *)pbVar88 = iVar67;
    }
    else {
      pbVar88 = pbVar45;
      if ((uVar84 & 4) != 0) {
        iVar67 = uVar91 + 1;
        pbVar45 = (byte *)(uVar84 & 0xfffffffffffffff8);
        uVar66 = uVar91;
        goto code_r0x00513684;
      }
      *puVar63 = (ulong)((byte *)(uVar84 & 0xfffffffffffffff8) + (ulong)uVar66 + 1);
    }
    *(ulong *)(pbVar45 + (long)(int)uVar66 * 8) = uVar95;
    puVar54 = puVar49 + 1;
    if ((ulong *)*param_3 <= puVar54) goto code_r0x0051388a;
    bVar4 = (byte)puVar49[1];
    auVar128[8] = bVar4;
    auVar128._0_8_ = (byte *)((long)puVar49 + 9);
    auVar128._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)((long)puVar49 + 9);
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        uStack_60 = (ulong *)&UNK_005136c8;
        auVar128 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
        if (auVar128._0_8_ == 0) goto code_r0x005138b6;
        pbVar88 = (byte *)CONCAT17(bStack_39,
                                   CONCAT16(bStack_3a,
                                            CONCAT15(bStack_3b,
                                                     CONCAT14(bStack_3c,
                                                              CONCAT13(bStack_3d,
                                                                       CONCAT12(uStack_3e,uStack_40)
                                                                      )))));
        param_3 = uStack_58;
      }
      else {
        auVar128._8_4_ = iVar67;
        auVar128._0_8_ = (ushort *)((long)puVar49 + 10);
      }
    }
  }
code_r0x00513848:
  puVar49 = puVar54;
  puVar54 = puVar49;
  if (puVar49 < (ulong *)*param_3) {
    uVar95 = (ulong)((uint)(byte)uStack_38[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
    puVar63 = (ulong *)(*(ulong *)((long)uStack_38 + uVar95 * 2 + 0x40) ^ (ulong)(ushort)*puVar49);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)uStack_38 + uVar95 * 2 + 0x38);
    param_1 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
    param_6 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
    param_5 = uStack_38;
code_r0x0051387a:
                    /* WARNING: Could not recover jumptable at 0x00513888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar49,param_3,puVar63,param_5,param_6);
    return puVar49;
  }
code_r0x0051388a:
  if ((ushort)*uStack_38 != 0) {
    puVar100 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48)) +
                       (ulong)(ushort)*uStack_38);
    *puVar100 = *puVar100 | CONCAT22(uStack_50._2_2_,(ushort)uStack_50);
  }
  return puVar54;
  while (puVar49 = auVar138._0_8_, uVar43 = (ushort)uStack_50, uVar35 = uStack_50._2_2_,
        uVar66 = uStack_4c, auVar138._8_4_ == uVar61) {
code_r0x005183c3:
    uStack_4c = uVar66;
    uStack_50._2_2_ = uVar35;
    uStack_50._0_2_ = uVar43;
    uVar95 = *puVar49;
    uVar84 = *puVar63;
    uVar66 = (uint)uVar84 & 3;
    bVar102 = (uVar84 & 4) == 0;
    puVar54 = puVar63 + 1;
    uVar91 = (uint)*puVar54;
    uVar79 = uVar91;
    if (bVar102) {
      uVar79 = uVar66;
    }
    uVar97 = *(uint *)((long)puVar63 + 0xc);
    if (bVar102) {
      uVar97 = 1;
    }
    if (uVar79 == uVar97) {
      iVar67 = uVar79 + 1;
      uStack_70 = (ulong *)&UNK_0051847b;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar63,(uVar84 & 4) == 0,uVar79,iVar67);
      param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      puVar54 = (ulong *)(*puVar63 & 0xfffffffffffffff8);
      uVar66 = (uint)puVar63[1];
code_r0x00518404:
      *(int *)(puVar63 + 1) = iVar67;
    }
    else {
      if ((uVar84 & 4) != 0) {
        iVar67 = uVar91 + 1;
        puVar54 = (ulong *)(uVar84 & 0xfffffffffffffff8);
        uVar66 = uVar91;
        goto code_r0x00518404;
      }
      *puVar63 = (long)(uVar84 & 0xfffffffffffffff8) + (ulong)uVar66 + 1;
    }
    puVar54[(int)uVar66] = uVar95;
    puVar54 = puVar49 + 1;
    if ((ulong *)*param_3 <= puVar54) goto code_r0x0051864a;
    bVar4 = (byte)puVar49[1];
    auVar138[8] = bVar4;
    auVar138._0_8_ = (byte *)((long)puVar49 + 9);
    auVar138._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)((long)puVar49 + 9);
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      if ((char)bVar3 < '\0') {
        uStack_70 = (ulong *)&UNK_00518448;
        auVar138 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar54,iVar67);
        if (auVar138._0_8_ == 0) goto code_r0x00518676;
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      }
      else {
        auVar138._8_4_ = iVar67;
        auVar138._0_8_ = (ushort *)((long)puVar49 + 10);
      }
    }
  }
code_r0x00518608:
  puVar49 = puVar54;
  puVar54 = puVar49;
  if (puVar49 < (ulong *)*param_3) {
    param_5 = (ulong *)CONCAT17(bStack_39,
                                CONCAT16(bStack_3a,
                                         CONCAT15(bStack_3b,
                                                  CONCAT14(bStack_3c,
                                                           CONCAT13(bStack_3d,
                                                                    CONCAT12(uStack_3e,uStack_40))))
                                        ));
    uVar95 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar49 & 0xfffffff8);
    puVar63 = (ulong *)(*(ulong *)((long)param_5 + uVar95 * 2 + 0x40) ^ (ulong)(ushort)*puVar49);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar95 * 2 + 0x38);
    param_1 = uStack_38;
code_r0x00518636:
                    /* WARNING: Could not recover jumptable at 0x00518648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar49 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                 (param_1,puVar49,param_3,puVar63,param_5,uStack_58);
    return puVar49;
  }
code_r0x0051864a:
  uVar43 = *(ushort *)
            CONCAT17(bStack_39,
                     CONCAT16(bStack_3a,
                              CONCAT15(bStack_3b,
                                       CONCAT14(bStack_3c,
                                                CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40)))))
                    );
  if (uVar43 != 0) {
    puVar100 = (uint *)((long)uStack_38 + (ulong)uVar43);
    *puVar100 = *puVar100 | (uint)uStack_58;
  }
  return puVar54;
  while( true ) {
    bVar4 = (byte)*puVar47;
    auVar135[8] = bVar4;
    auVar135._0_8_ = uVar81;
    auVar135._9_3_ = 0;
    puVar49 = (ulong *)((long)puVar47 + 1);
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)puVar49;
      auVar135._1_7_ = 0;
      auVar135[0] = bVar3;
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      auVar135._8_4_ = iVar67;
      if ((char)bVar3 < '\0') {
        puStack_80 = (ulong *)&UNK_00516054;
        auVar135 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar47,iVar67);
        puVar49 = auVar135._0_8_;
        param_1 = uStack_58;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar49 == (ulong *)0x0) goto code_r0x005013a0;
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        uVar66 = uStack_38._4_4_;
      }
      else {
        puVar49 = (ulong *)((long)puVar47 + 2);
      }
    }
    puVar54 = auVar135._0_8_;
    if (auVar135._8_4_ != (int)puVar63) break;
code_r0x00515e9c:
    uVar84 = (ulong)(char)(byte)*puVar49;
    param_1 = uStack_58;
    param_6 = puStack_68;
    param_5 = uStack_60;
    if ((long)uVar84 < 0) {
      puVar54 = (ulong *)((long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f);
      if ((long)puVar54 < 0) {
        uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
        if ((long)uVar81 < 0) {
          puVar54 = (ulong *)((ulong)puVar54 &
                             ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar54 < 0) {
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar81 < 0) {
              puVar54 = (ulong *)((ulong)puVar54 &
                                 ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar54 < 0) {
                uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar81 < 0) {
                  puVar54 = (ulong *)((ulong)puVar54 &
                                     ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar54 < 0) {
                    uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar81 < 0) {
                      puVar47 = (ulong *)((long)puVar49 + 10);
                      bVar4 = *(byte *)((long)puVar49 + 9);
                      if (bVar4 != 1) {
                        if ((char)bVar4 < '\0') goto code_r0x005013a0;
                        if ((bVar4 & 1) == 0) {
                          uVar81 = uVar81 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar47 = (ulong *)((long)puVar49 + 9);
                    }
                  }
                  else {
                    puVar47 = puVar49 + 1;
                  }
                }
                else {
                  puVar47 = (ulong *)((long)puVar49 + 7);
                }
              }
              else {
                puVar47 = (ulong *)((long)puVar49 + 6);
              }
              puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              uVar95 = CONCAT17(bStack_39,
                                CONCAT16(bStack_3a,
                                         CONCAT15(bStack_3b,
                                                  CONCAT14(bStack_3c,
                                                           CONCAT13(bStack_3d,
                                                                    CONCAT12(uStack_3e,uStack_40))))
                                        ));
              uVar66 = uStack_38._4_4_;
            }
            else {
              puVar47 = (ulong *)((long)puVar49 + 5);
            }
          }
          else {
            puVar47 = (ulong *)((long)puVar49 + 4);
          }
        }
        else {
          puVar47 = (ulong *)((long)puVar49 + 3);
        }
        puVar54 = (ulong *)((ulong)puVar54 & uVar81);
      }
      else {
        puVar47 = (ulong *)((long)puVar49 + 2);
      }
      uVar84 = uVar84 & (ulong)puVar54;
      if ((uVar66 & 0x400) == 0) goto code_r0x00515eb6;
code_r0x00515f50:
      if ((uVar91 & 0x600) == 0x600) {
        uVar79 = uStack_4c;
        if (((int)uVar84 < (int)uVar95) || ((int)(uint)uStack_70 < (int)uVar84))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00515f78;
        puVar54 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar84 & 0xffffffff);
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_1 = uStack_58;
        param_5 = uStack_60;
        param_6 = puStack_68;
        uVar66 = uStack_38._4_4_;
        uVar79 = uStack_4c;
        if ((char)puVar54 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar47 = (ulong *)((long)puVar49 + 1);
      if ((uVar66 & 0x400) != 0) goto code_r0x00515f50;
code_r0x00515eb6:
      if ((uVar91 & 0x600) == 0x200) {
        uVar84 = uVar84 >> 1 ^ -(ulong)((uint)uVar84 & 1);
      }
    }
    uVar81 = *puVar52;
    bVar102 = (uVar81 & 4) != 0;
    uVar79 = (uint)puVar52[1];
    uVar97 = (uint)uVar81 & 3;
    if (bVar102) {
      uVar97 = uVar79;
    }
    uVar99 = *(uint *)((long)puVar52 + 0xc);
    if (!bVar102) {
      uVar99 = 1;
    }
    uVar68 = uVar97 + 1;
    if (uVar97 == uVar99) {
      puStack_80 = (ulong *)&UNK_00515fe6;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar52,(uVar81 & 4) == 0,uVar97,uVar68);
      uVar95 = CONCAT17(bStack_39,
                        CONCAT16(bStack_3a,
                                 CONCAT15(bStack_3b,
                                          CONCAT14(bStack_3c,
                                                   CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40))
                                                  ))));
      param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
      uVar86 = *puVar52 & 0xfffffffffffffff8;
      uVar79 = (uint)puVar52[1];
      uVar66 = uStack_38._4_4_;
code_r0x00516010:
      *(uint *)(puVar52 + 1) = uVar68;
      uVar81 = (ulong)(int)uVar79;
      *(ulong *)(uVar86 + uVar81 * 8) = uVar84;
    }
    else {
      uVar86 = uVar81 & 0xfffffffffffffff8;
      if ((uVar81 & 4) != 0) goto code_r0x00516010;
      *puVar52 = uVar86 | uVar68;
      uVar81 = (ulong)((uint)uVar81 & 3);
      puVar52[uVar81 + 1] = uVar84;
    }
    if ((ulong *)*param_3 <= puVar47) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar100 = (uint *)((long)uStack_58 + (ulong)(ushort)*uStack_60);
    *puVar100 = *puVar100 | (uint)puStack_68;
  }
  return puVar47;
  while( true ) {
    bVar4 = (byte)*puVar47;
    auVar136[8] = bVar4;
    auVar136._0_8_ = uVar84;
    auVar136._9_3_ = 0;
    puVar49 = (ulong *)((long)puVar47 + 1);
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)puVar49;
      auVar136._1_7_ = 0;
      auVar136[0] = bVar3;
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      auVar136._8_4_ = iVar67;
      if ((char)bVar3 < '\0') {
        puStack_80 = (ulong *)&UNK_005164f4;
        auVar136 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar47,iVar67);
        puVar49 = auVar136._0_8_;
        param_1 = uStack_58;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar49 == (ulong *)0x0) goto code_r0x005013a0;
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        uVar66 = uStack_38._4_4_;
      }
      else {
        puVar49 = (ulong *)((long)puVar47 + 2);
      }
    }
    puVar54 = auVar136._0_8_;
    if (auVar136._8_4_ != (int)puVar63) break;
code_r0x0051633c:
    uVar84 = (ulong)(char)(byte)*puVar49;
    param_1 = uStack_58;
    param_6 = puStack_68;
    param_5 = uStack_60;
    if ((long)uVar84 < 0) {
      puVar54 = (ulong *)((long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f);
      if ((long)puVar54 < 0) {
        uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
        if ((long)uVar81 < 0) {
          puVar54 = (ulong *)((ulong)puVar54 &
                             ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar54 < 0) {
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar81 < 0) {
              puVar54 = (ulong *)((ulong)puVar54 &
                                 ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar54 < 0) {
                uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar81 < 0) {
                  puVar54 = (ulong *)((ulong)puVar54 &
                                     ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar54 < 0) {
                    uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar81 < 0) {
                      puVar47 = (ulong *)((long)puVar49 + 10);
                      bVar4 = *(byte *)((long)puVar49 + 9);
                      if (bVar4 != 1) {
                        if ((char)bVar4 < '\0') goto code_r0x005013a0;
                        if ((bVar4 & 1) == 0) {
                          uVar81 = uVar81 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar47 = (ulong *)((long)puVar49 + 9);
                    }
                  }
                  else {
                    puVar47 = puVar49 + 1;
                  }
                }
                else {
                  puVar47 = (ulong *)((long)puVar49 + 7);
                }
              }
              else {
                puVar47 = (ulong *)((long)puVar49 + 6);
              }
              puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              uVar95 = CONCAT17(bStack_39,
                                CONCAT16(bStack_3a,
                                         CONCAT15(bStack_3b,
                                                  CONCAT14(bStack_3c,
                                                           CONCAT13(bStack_3d,
                                                                    CONCAT12(uStack_3e,uStack_40))))
                                        ));
              uVar66 = uStack_38._4_4_;
            }
            else {
              puVar47 = (ulong *)((long)puVar49 + 5);
            }
          }
          else {
            puVar47 = (ulong *)((long)puVar49 + 4);
          }
        }
        else {
          puVar47 = (ulong *)((long)puVar49 + 3);
        }
        puVar54 = (ulong *)((ulong)puVar54 & uVar81);
      }
      else {
        puVar47 = (ulong *)((long)puVar49 + 2);
      }
      uVar84 = uVar84 & (ulong)puVar54;
      if ((uVar66 & 0x400) == 0) goto code_r0x00516356;
code_r0x005163f0:
      uVar97 = (uint)uVar84;
      if ((uVar91 & 0x600) == 0x600) {
        uVar79 = uStack_4c;
        if (((int)uVar97 < (int)uVar95) || ((int)(uint)uStack_70 < (int)uVar97))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00516418;
        puVar54 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar84 & 0xffffffff);
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_1 = uStack_58;
        param_5 = uStack_60;
        param_6 = puStack_68;
        uVar66 = uStack_38._4_4_;
        uVar79 = uStack_4c;
        if ((char)puVar54 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar47 = (ulong *)((long)puVar49 + 1);
      if ((uVar66 & 0x400) != 0) goto code_r0x005163f0;
code_r0x00516356:
      uVar97 = (uint)uVar84;
      if ((uVar91 & 0x600) == 0x200) {
        uVar97 = uVar97 >> 1 ^ -(uVar97 & 1);
      }
    }
    uVar84 = *puVar52;
    bVar102 = (uVar84 & 4) != 0;
    uVar79 = (uint)puVar52[1];
    uVar99 = (uint)uVar84 & 3;
    if (bVar102) {
      uVar99 = uVar79;
    }
    uVar68 = *(uint *)((long)puVar52 + 0xc);
    if (!bVar102) {
      uVar68 = 2;
    }
    uVar60 = uVar99 + 1;
    if (uVar99 == uVar68) {
      puStack_80 = (ulong *)&UNK_00516486;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar52,(uVar84 & 4) == 0,uVar99,uVar60);
      uVar95 = CONCAT17(bStack_39,
                        CONCAT16(bStack_3a,
                                 CONCAT15(bStack_3b,
                                          CONCAT14(bStack_3c,
                                                   CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40))
                                                  ))));
      param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
      uVar81 = *puVar52 & 0xfffffffffffffff8;
      uVar79 = (uint)puVar52[1];
      uVar66 = uStack_38._4_4_;
code_r0x005164b0:
      *(uint *)(puVar52 + 1) = uVar60;
      uVar84 = (ulong)(int)uVar79;
      *(uint *)(uVar81 + uVar84 * 4) = uVar97;
    }
    else {
      uVar81 = uVar84 & 0xfffffffffffffff8;
      if ((uVar84 & 4) != 0) goto code_r0x005164b0;
      *puVar52 = uVar81 | uVar60;
      uVar84 = (ulong)((uint)uVar84 & 3);
      *(uint *)((long)puVar52 + uVar84 * 4 + 8) = uVar97;
    }
    if ((ulong *)*param_3 <= puVar47) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar100 = (uint *)((long)uStack_58 + (ulong)(ushort)*uStack_60);
    *puVar100 = *puVar100 | (uint)puStack_68;
  }
  return puVar47;
  while( true ) {
    bVar4 = (byte)*puVar47;
    auVar137[8] = bVar4;
    auVar137._0_8_ = uVar81;
    auVar137._9_3_ = 0;
    puVar49 = (ulong *)((long)puVar47 + 1);
    if ((char)bVar4 < '\0') {
      bVar3 = *(byte *)puVar49;
      auVar137._1_7_ = 0;
      auVar137[0] = bVar3;
      iVar67 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
      auVar137._8_4_ = iVar67;
      if ((char)bVar3 < '\0') {
        puStack_80 = (ulong *)&UNK_005169b3;
        auVar137 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar47,iVar67);
        puVar49 = auVar137._0_8_;
        param_1 = uStack_60;
        param_5 = uStack_58;
        param_6 = puStack_68;
        if (puVar49 == (ulong *)0x0) goto code_r0x005013a0;
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        uVar66 = uStack_38._4_4_;
      }
      else {
        puVar49 = (ulong *)((long)puVar47 + 2);
      }
    }
    puVar54 = auVar137._0_8_;
    if (auVar137._8_4_ != (int)puVar63) break;
code_r0x005167ec:
    uVar84 = (ulong)(char)(byte)*puVar49;
    param_1 = uStack_60;
    param_6 = puStack_68;
    param_5 = uStack_58;
    if ((long)uVar84 < 0) {
      puVar54 = (ulong *)((long)(char)*(byte *)((long)puVar49 + 1) << 7 | 0x7f);
      if ((long)puVar54 < 0) {
        uVar81 = (long)(char)*(byte *)((long)puVar49 + 2) << 0xe | 0x3fff;
        if ((long)uVar81 < 0) {
          puVar54 = (ulong *)((ulong)puVar54 &
                             ((long)(char)*(byte *)((long)puVar49 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar54 < 0) {
            uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar81 < 0) {
              puVar54 = (ulong *)((ulong)puVar54 &
                                 ((long)(char)*(byte *)((long)puVar49 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar54 < 0) {
                uVar81 = uVar81 & ((long)(char)*(byte *)((long)puVar49 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar81 < 0) {
                  puVar54 = (ulong *)((ulong)puVar54 &
                                     ((long)(char)*(byte *)((long)puVar49 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar54 < 0) {
                    uVar81 = uVar81 & ((ulong)(byte)puVar49[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar81 < 0) {
                      puVar47 = (ulong *)((long)puVar49 + 10);
                      bVar4 = *(byte *)((long)puVar49 + 9);
                      if (bVar4 != 1) {
                        if ((char)bVar4 < '\0') goto code_r0x005013a0;
                        if ((bVar4 & 1) == 0) {
                          uVar81 = uVar81 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar47 = (ulong *)((long)puVar49 + 9);
                    }
                  }
                  else {
                    puVar47 = puVar49 + 1;
                  }
                }
                else {
                  puVar47 = (ulong *)((long)puVar49 + 7);
                }
              }
              else {
                puVar47 = (ulong *)((long)puVar49 + 6);
              }
              puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
              param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
              uVar95 = CONCAT17(bStack_39,
                                CONCAT16(bStack_3a,
                                         CONCAT15(bStack_3b,
                                                  CONCAT14(bStack_3c,
                                                           CONCAT13(bStack_3d,
                                                                    CONCAT12(uStack_3e,uStack_40))))
                                        ));
              uVar66 = uStack_38._4_4_;
            }
            else {
              puVar47 = (ulong *)((long)puVar49 + 5);
            }
          }
          else {
            puVar47 = (ulong *)((long)puVar49 + 4);
          }
        }
        else {
          puVar47 = (ulong *)((long)puVar49 + 3);
        }
        puVar54 = (ulong *)((ulong)puVar54 & uVar81);
      }
      else {
        puVar47 = (ulong *)((long)puVar49 + 2);
      }
      uVar84 = uVar84 & (ulong)puVar54;
      if ((uVar66 & 0x400) == 0) goto code_r0x00516806;
code_r0x005168a0:
      if ((uVar91 & 0x600) == 0x600) {
        uVar79 = uStack_4c;
        if (((int)uVar84 < (int)uVar95) || ((int)(uint)uStack_70 < (int)uVar84))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_005168c8;
        puVar54 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar84 & 0xffffffff);
        uVar95 = CONCAT17(bStack_39,
                          CONCAT16(bStack_3a,
                                   CONCAT15(bStack_3b,
                                            CONCAT14(bStack_3c,
                                                     CONCAT13(bStack_3d,
                                                              CONCAT12(uStack_3e,uStack_40))))));
        param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
        puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
        param_1 = uStack_60;
        param_5 = uStack_58;
        param_6 = puStack_68;
        uVar66 = uStack_38._4_4_;
        uVar79 = uStack_4c;
        if ((char)puVar54 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar47 = (ulong *)((long)puVar49 + 1);
      if ((uVar66 & 0x400) != 0) goto code_r0x005168a0;
code_r0x00516806:
      if ((uVar91 & 0x600) == 0x200) {
        uVar84 = (ulong)(int)((uint)uVar84 >> 1 ^ -((uint)uVar84 & 1));
      }
    }
    uVar81 = *puVar52;
    bVar102 = (uVar81 & 4) != 0;
    uVar79 = (uint)puVar52[1];
    uVar97 = (uint)uVar81 & 3;
    if (bVar102) {
      uVar97 = uVar79;
    }
    uVar99 = *(uint *)((long)puVar52 + 0xc);
    if (!bVar102) {
      uVar99 = 3;
    }
    if (uVar97 == uVar99) {
      puStack_80 = (ulong *)&UNK_00516947;
      _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(puVar52,(uVar81 & 4) == 0,uVar97,uVar97 + 1);
      uVar95 = CONCAT17(bStack_39,
                        CONCAT16(bStack_3a,
                                 CONCAT15(bStack_3b,
                                          CONCAT14(bStack_3c,
                                                   CONCAT13(bStack_3d,CONCAT12(uStack_3e,uStack_40))
                                                  ))));
      param_3 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_48._2_2_,(ushort)uStack_48));
      puVar63 = (ulong *)CONCAT44(uStack_4c,CONCAT22(uStack_50._2_2_,(ushort)uStack_50));
      uVar86 = *puVar52 & 0xfffffffffffffff8;
      uVar79 = (uint)puVar52[1];
      uVar66 = uStack_38._4_4_;
code_r0x00516970:
      *(uint *)(puVar52 + 1) = uVar97 + 1;
      uVar81 = (ulong)(int)uVar79;
      *(bool *)(uVar86 + uVar81) = uVar84 != 0;
    }
    else {
      uVar86 = uVar81 & 0xfffffffffffffff8;
      if ((uVar81 & 4) != 0) goto code_r0x00516970;
      *puVar52 = uVar86 | uVar97 + 1;
      uVar81 = (ulong)((uint)uVar81 & 3);
      *(bool *)((long)(puVar52 + 1) + uVar81) = uVar84 != 0;
    }
    if ((ulong *)*param_3 <= puVar47) break;
  }
  if ((ulong)(ushort)*uStack_58 != 0) {
    puVar100 = (uint *)((long)uStack_60 + (ulong)(ushort)*uStack_58);
    *puVar100 = *puVar100 | (uint)puStack_68;
  }
  return puVar47;
}


