// Function: _ZN6google8protobuf8internal8TcParser9FastZ32S1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
// Address: 00504d20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Instruction at (ram,0x005108b1) overlaps instruction at (ram,0x005108af)
    */
/* WARNING: Type propagation algorithm not settling */

ulong * _ZN6google8protobuf8internal8TcParser9FastZ32S1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                  (ulong *param_1,byte *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  ulong *param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong **ppuVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  ulong *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *puVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  ulong *puVar27;
  int iVar31;
  byte *pbVar28;
  ulong *puVar29;
  byte *pbVar30;
  byte *extraout_RDX;
  byte *extraout_RDX_00;
  uint uVar32;
  uint uVar33;
  ulong *unaff_RBX;
  ulong **ppuVar34;
  ulong **ppuVar35;
  ulong **ppuVar36;
  ulong **ppuVar37;
  ulong **ppuVar38;
  ulong **ppuVar39;
  ulong **ppuVar40;
  undefined1 *unaff_RBP;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined4 uVar43;
  uint uVar44;
  ulong *puVar45;
  uint7 uVar48;
  ulong uVar46;
  undefined8 uVar47;
  ulong *puVar49;
  ushort uVar50;
  ulong uVar51;
  ushort uVar52;
  byte *pbVar53;
  ulong uVar54;
  ulong *unaff_R12;
  ushort uVar55;
  int iVar56;
  ulong *unaff_R13;
  long lVar57;
  ulong *unaff_R14;
  ulong *puVar58;
  ushort uVar59;
  uint uVar60;
  ulong *unaff_R15;
  uint *puVar61;
  long *in_FS_OFFSET;
  undefined1 uVar62;
  bool bVar63;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qb;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  undefined1 auVar78 [12];
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  undefined1 auVar81 [12];
  undefined1 auVar82 [12];
  undefined1 auVar83 [12];
  undefined1 auVar84 [12];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  undefined1 auVar90 [12];
  undefined1 auVar91 [12];
  undefined1 auVar92 [12];
  undefined1 auVar93 [12];
  undefined1 auVar94 [12];
  undefined1 auVar95 [12];
  undefined1 auVar96 [12];
  undefined1 auVar97 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [12];
  undefined1 auVar100 [12];
  undefined1 auVar101 [12];
  undefined1 auVar102 [12];
  undefined1 auVar103 [12];
  undefined1 auVar104 [12];
  ulong *puStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  uint uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  byte bStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  long lStack_38;
  
  if ((char)param_4 == '\0') {
    param_6 = (ulong *)((ulong)param_6 | 1L << (param_4 >> 0x10 & 0x3f));
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) {
      puVar45 = (ulong *)(param_2 + 2);
      *(uint *)((long)param_1 + (param_4 >> 0x30)) =
           (uint)(int)(char)bVar3 >> 1 ^ -((int)(char)bVar3 & 1U);
      if ((ulong *)*param_3 <= puVar45) {
        if ((ulong)(ushort)*param_5 != 0) {
          puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
          *puVar61 = *puVar61 | (uint)param_6;
        }
        return puVar45;
      }
                    /* WARNING: Could not recover jumptable at 0x00504d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar45 = (ulong *)(**(code **)((long)param_5 +
                                     (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 &
                                            0xfffffff8) * 2 + 0x38))();
      return puVar45;
    }
    uVar24 = (long)(char)param_2[2] << 7 | 0x7f;
    if ((long)uVar24 < 0) {
      uVar54 = (long)(char)param_2[3] << 0xe | 0x3fff;
      if ((long)uVar54 < 0) {
        uVar24 = uVar24 & ((long)(char)param_2[4] << 0x15 | 0x1fffffU);
        if ((long)uVar24 < 0) {
          uVar54 = uVar54 & ((long)(char)param_2[5] << 0x1c | 0xfffffffU);
          if ((long)uVar54 < 0) {
            uVar24 = uVar24 & ((long)(char)param_2[6] << 0x23 | 0x7ffffffffU);
            if ((long)uVar24 < 0) {
              uVar54 = uVar54 & ((long)(char)param_2[7] << 0x2a | 0x3ffffffffffU);
              if ((long)uVar54 < 0) {
                uVar24 = uVar24 & ((long)(char)param_2[8] << 0x31 | 0x1ffffffffffffU);
                if ((long)uVar24 < 0) {
                  uVar54 = uVar54 & ((ulong)param_2[9] << 0x38 | 0xffffffffffffff);
                  if ((long)uVar54 < 0) {
                    puVar45 = (ulong *)(param_2 + 0xb);
                    if ((param_2[10] != 1) && ((char)param_2[10] < '\0')) goto code_r0x005013a0;
                  }
                  else {
                    puVar45 = (ulong *)(param_2 + 10);
                  }
                }
                else {
                  puVar45 = (ulong *)(param_2 + 9);
                }
              }
              else {
                puVar45 = (ulong *)(param_2 + 8);
              }
            }
            else {
              puVar45 = (ulong *)(param_2 + 7);
            }
          }
          else {
            puVar45 = (ulong *)(param_2 + 6);
          }
        }
        else {
          puVar45 = (ulong *)(param_2 + 5);
        }
      }
      else {
        puVar45 = (ulong *)(param_2 + 4);
      }
      uVar24 = uVar24 & uVar54;
    }
    else {
      puVar45 = (ulong *)(param_2 + 3);
    }
    uVar10 = (uint)uVar24 & (int)(char)param_2[1];
    *(uint *)((long)param_1 + (param_4 >> 0x30)) = uVar10 >> 1 ^ -(uVar10 & 1);
    if ((ulong *)*param_3 <= puVar45) {
      if ((ulong)(ushort)*param_5 != 0) {
        puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
        *puVar61 = *puVar61 | (uint)param_6;
      }
      return puVar45;
    }
                    /* WARNING: Could not recover jumptable at 0x005198e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar45 = (ulong *)(**(code **)((long)param_5 +
                                   (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 &
                                          0xfffffff8) * 2 + 0x38))();
    return puVar45;
  }
  puVar27 = (ulong *)in_FS_OFFSET[5];
  uVar24 = (ulong)*param_2;
  puVar45 = (ulong *)(param_2 + 1);
  if ((char)*param_2 < '\0') {
    uVar48 = (uint7)((uVar24 << 0x39) >> 8);
    lVar22 = CONCAT71(uVar48,(byte)*puVar45);
    if ((char)(byte)*puVar45 < '\0') {
      uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
      lVar22 = CONCAT71(uVar48,param_2[2]);
      if ((char)param_2[2] < '\0') {
        uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
        lVar22 = CONCAT71(uVar48,param_2[3]);
        if ((char)param_2[3] < '\0') {
          bVar3 = param_2[4];
          puVar12 = (ulong *)(ulong)bVar3;
          uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
          if ((char)bVar3 < '\0') {
            puVar16 = unaff_RBX;
            if ((ulong *)in_FS_OFFSET[5] == puVar27) goto code_r0x005013a0;
            goto code_r0x00501627;
          }
          uVar24 = CONCAT71(uVar48,bVar3) << 0x1c | (ulong)(uVar48 >> 0x1c);
          puVar45 = (ulong *)(param_2 + 5);
        }
        else {
          uVar24 = lVar22 << 0x15 | (ulong)(uVar48 >> 0x23);
          puVar45 = (ulong *)(param_2 + 4);
        }
      }
      else {
        uVar24 = lVar22 << 0xe | (ulong)(uVar48 >> 0x2a);
        puVar45 = (ulong *)(param_2 + 3);
      }
    }
    else {
      uVar24 = lVar22 << 7 | (ulong)(uVar48 >> 0x31);
      puVar45 = (ulong *)(param_2 + 2);
    }
  }
  puVar16 = (ulong *)(uVar24 >> 3 & 0x1fffffff);
  uVar10 = (uint)puVar16;
  uVar25 = uVar10 - 1;
  if (uVar25 < 0x20) {
    uVar10 = 1 << ((byte)uVar25 & 0x1f);
    puVar16 = (ulong *)(ulong)uVar10;
    if ((*(uint *)((long)param_5 + 0xc) >> (uVar25 & 0x1f) & 1) == 0) {
      uVar10 = *(uint *)((long)param_5 + 0xc) & uVar10 - 1;
      uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar25 = uVar25 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x0050145f:
      pbVar11 = (byte *)((ulong)(uint)param_5[2] + (long)param_5);
      puVar12 = (ulong *)((ulong)uVar25 * 3);
      puVar16 = (ulong *)in_FS_OFFSET[5];
      if ((ulong *)in_FS_OFFSET[5] != puVar27) goto code_r0x00501627;
      uStack_4c = ((int)pbVar11 + uVar25 * 0xc) - (int)param_5;
      puVar12 = (ulong *)(ulong)uStack_4c;
      uVar54 = uVar24 & 0xffffffff;
      puVar27 = (ulong *)(uVar54 | (long)puVar12 << 0x20);
      uVar10 = (uint)uVar24;
      uVar60 = (uint)param_6;
      uStack_40 = SUB82(param_1,0);
      uStack_44 = (undefined4)((ulong)param_1 >> 0x20);
      uStack_46 = (undefined2)((ulong)param_1 >> 0x10);
      uStack_50 = (undefined2)uVar54;
      uStack_4e = (undefined2)(uVar54 >> 0x10);
      puVar16 = param_3;
      switch(*(ushort *)(pbVar11 + (ulong)uVar25 * 0xc + 10) & 0xf) {
      case 2:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 3:
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 == 0x20) {
          do {
            uVar25 = uVar10 & 7;
            if (uVar25 != 2) {
              uVar44 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
              if (uVar44 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar44 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar44 & 0x1f);
              }
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar12) & 0x1c0) == 0xc0) {
                if (uVar25 == 1) {
                  puVar27 = (ulong *)((long)param_1 +
                                     (ulong)*(uint *)((long)param_5 + (long)puVar12));
                  pbVar11 = (byte *)((long)param_1 +
                                    (ulong)*(uint *)((long)param_5 + (long)puVar12) + 8);
                  goto code_r0x00513643;
                }
              }
              else if (uVar25 == 5) {
                puVar27 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar12))
                ;
                pbVar11 = (byte *)((long)param_1 +
                                  (ulong)*(uint *)((long)param_5 + (long)puVar12) + 8);
                goto code_r0x00513763;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              goto code_r0x0051387a;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar10 & 7) != 2);
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar10 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
          if (uVar10 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
          }
          bVar3 = (byte)*puVar45;
          if ((char)bVar3 < '\0') {
            auVar64 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
          }
          else {
            auVar64[8] = bVar3;
            auVar64._0_8_ = (byte *)((long)puVar45 + 1);
            auVar64._9_7_ = 0;
          }
          if ((uVar59 & 0x1c0) == 0xc0) {
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         ();
          }
          else {
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,auVar64._0_8_,auVar64._8_8_,
                                          (byte *)((ulong)*(uint *)((long)param_5 + (long)puVar12) +
                                                  (long)param_1));
          }
          if (puVar45 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                         (param_1,puVar45,param_3,
                                          *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar45,param_5,param_6);
            return puVar45;
          }
          goto code_r0x005013a0;
        }
        uVar59 = uVar59 & 0x1c0;
        if (uVar59 == 0xc0) {
          if ((uVar10 & 7) == 1) {
code_r0x0050de58:
            puVar61 = (uint *)((long)puVar12 + (long)param_5);
            if (uVar55 == 0x30) {
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar61,uVar10 >> 3,param_5,param_1);
            }
            else if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
            }
            if (uVar59 == 0xc0) {
              *(ulong *)((long)param_1 + (ulong)*puVar61) = *puVar45;
              lVar22 = 8;
            }
            else {
              *(uint *)((long)param_1 + (ulong)*puVar61) = (uint)*puVar45;
              lVar22 = 4;
            }
            puVar45 = (ulong *)((long)puVar45 + lVar22);
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050defb;
          }
        }
        else if ((uVar10 & 7) == 5) goto code_r0x0050de58;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
code_r0x0050defb:
                    /* WARNING: Could not recover jumptable at 0x0050df09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar45;
      case 4:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 5:
        if ((uVar10 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050e0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*(code *)param_5[6])();
          return puVar45;
        }
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 == 0x20) {
          if ((uVar10 & 7) != 2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            goto code_r0x0051404b;
          }
          puVar61 = (uint *)((long)param_5 + (long)puVar12);
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar25 = puVar61[1];
          if (uVar25 != 0xffffffff) {
            puVar1 = (uint *)((long)param_1 + (ulong)(uVar25 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar25 & 0x1f);
          }
          puVar27 = puVar45;
          if ((uVar59 & 0x1c0) == 0x100) {
            uVar59 = uVar59 & 0x600;
            puVar16 = (ulong *)((long)param_1 + (ulong)*puVar61);
            puVar27 = *(ulong **)((long)param_1 + (ulong)*puVar61 + 0x10);
            if ((puVar27 != (ulong *)0x0) &&
               (uStack_70 = puVar12, puStack_68 = puVar27,
               *(ulong *)(*in_FS_OFFSET + -0x118) == *puVar27)) {
              uVar24 = *puVar16;
              if ((uVar24 & 1) == 0) {
                uVar25 = (uint)(uVar24 != 0);
              }
              else {
                uVar25 = *(uint *)(uVar24 + 3);
              }
              if (uVar25 == (uint)puVar16[1]) {
                puVar58 = *(ulong **)(*in_FS_OFFSET + -0x110);
                uStack_60 = puVar58;
                do {
                  uVar24 = (ulong)(byte)*puVar45;
                  if ((char)(byte)*puVar45 < '\0') {
                    puStack_80 = (ulong *)&UNK_005140ab;
                    auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                    pbVar11 = auVar72._0_8_;
                    if (pbVar11 == (byte *)0x0) goto code_r0x005013a0;
                    uVar24 = auVar72._8_8_ & 0xffffffff;
                  }
                  else {
                    pbVar11 = (byte *)((long)puVar45 + 1);
                  }
                  uVar54 = puVar58[9];
                  if (uVar54 == 0) {
                    puStack_80 = (ulong *)&UNK_0051423e;
                    pbVar53 = (byte *)_ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
                                                (puVar58);
                  }
                  else {
                    puVar58[9] = uVar54 - 0x18;
                    pbVar53 = (byte *)(puVar58[7] + uVar54 + -8);
                  }
                  pbVar53[0] = 0;
                  pbVar53[1] = 0;
                  pbVar53[2] = 0;
                  pbVar53[3] = 0;
                  pbVar53[4] = 0;
                  pbVar53[5] = 0;
                  pbVar53[6] = 0;
                  pbVar53[7] = 0;
                  pbVar53[8] = 0;
                  pbVar53[9] = 0;
                  pbVar53[10] = 0;
                  pbVar53[0xb] = 0;
                  pbVar53[0xc] = 0;
                  pbVar53[0xd] = 0;
                  pbVar53[0xe] = 0;
                  pbVar53[0xf] = 0;
                  pbVar53[0x10] = 0;
                  pbVar53[0x11] = 0;
                  pbVar53[0x12] = 0;
                  pbVar53[0x13] = 0;
                  pbVar53[0x14] = 0;
                  pbVar53[0x15] = 0;
                  pbVar53[0x16] = 0;
                  pbVar53[0x17] = 0;
                  iVar31 = (int)puVar16[1];
                  uVar54 = *puVar16;
                  if ((uVar54 & 1) == 0) {
                    if (iVar31 == 1) {
code_r0x0051424a:
                      puStack_80 = (ulong *)&UNK_0051425b;
                      puVar19 = (undefined8 *)
                                _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                          (puVar16,1,puStack_68);
                      *puVar19 = pbVar53;
                      goto code_r0x0051411e;
                    }
                    *puVar16 = (ulong)pbVar53;
                  }
                  else {
                    if (iVar31 == *(int *)(uVar54 - 1)) goto code_r0x0051424a;
                    *(byte **)(uVar54 + 7 + (long)iVar31 * 8) = pbVar53;
code_r0x0051411e:
                    *(int *)(*puVar16 + 3) = *(int *)(*puVar16 + 3) + 1;
                  }
                  *(int *)(puVar16 + 1) = (int)puVar16[1] + 1;
                  puStack_80 = (ulong *)&UNK_0051413a;
                  cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                    (param_3,uVar24,pbVar11);
                  if (cVar9 == '\0') {
                    puStack_80 = (ulong *)&UNK_00514171;
                    puVar27 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                                 (param_3,pbVar11,uVar24,pbVar53);
                    puVar58 = uStack_60;
                    if (puVar27 == (ulong *)0x0) goto code_r0x005013a0;
                  }
                  else {
                    lVar22 = (long)(int)uVar24;
                    puStack_80 = (ulong *)&UNK_0051414c;
                    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                              (pbVar53,lVar22);
                    puVar58 = uStack_60;
                    if ((*pbVar53 & 1) == 0) {
                      pbVar53 = pbVar53 + 1;
                    }
                    else {
                      pbVar53 = *(byte **)(pbVar53 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141a5;
                    func_0x0099bda0(pbVar53,pbVar11,lVar22);
                    puVar27 = (ulong *)(pbVar11 + lVar22);
                  }
                  if (uVar59 == 0x400) {
                    puVar45 = (ulong *)((*puVar16 - 1) + (long)(int)puVar16[1] * 8);
                    if ((*puVar16 & 1) == 0) {
                      puVar45 = puVar16;
                    }
                    pbVar11 = (byte *)*puVar45;
                    if ((*pbVar11 & 1) == 0) {
                      uVar24 = (ulong)(*pbVar11 >> 1);
                      pbVar11 = pbVar11 + 1;
                    }
                    else {
                      uVar24 = *(ulong *)(pbVar11 + 8);
                      pbVar11 = *(byte **)(pbVar11 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141ea;
                    iVar31 = utf8_range_IsValid(pbVar11,uVar24);
                    if (iVar31 == 0) {
                      pbVar11 = (byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
                      uVar24 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
                      pbVar53 = pbVar11 + uVar24;
                      uVar54 = ((long)((long)uStack_70 - (ulong)(uint)param_5[2]) >> 2) *
                               -0x5555555555555555;
                      uVar46 = uVar54 + 1;
                      if (uVar46 != 0) {
                        pbVar30 = pbVar11;
                        for (uVar51 = uVar46 & 7; uVar51 != 0; uVar51 = uVar51 - 1) {
                          uVar24 = uVar24 + *pbVar30;
                          pbVar30 = pbVar30 + 1;
                        }
                        if (6 < uVar54) {
                          do {
                            uVar24 = (ulong)pbVar30[7] + (ulong)pbVar30[6] +
                                     (ulong)pbVar30[5] + (ulong)pbVar30[4] + (ulong)pbVar30[3] +
                                     (ulong)pbVar30[2] + (ulong)pbVar30[1] + *pbVar30 + uVar24;
                            pbVar30 = pbVar30 + 8;
                          } while (pbVar30 != pbVar11 + uVar46);
                        }
                      }
                      puStack_80 = (ulong *)&UNK_0051433e;
                      _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                                (pbVar53,(long)(char)*(byte *)((long)param_5 +
                                                              (ulong)*(ushort *)
                                                                      ((long)param_5 + 0x16) * 8 +
                                                              (ulong)(uint)param_5[3]),
                                 pbVar11 + uVar24,(long)(char)pbVar11[uVar46],&UNK_00178f3f,0);
                      goto code_r0x005013a0;
                    }
                  }
                  if ((ulong *)*param_3 <= puVar27) goto code_r0x00514410;
                  bVar3 = (byte)*puVar27;
                  auVar90[8] = bVar3;
                  auVar90._0_8_ = (byte *)((long)puVar27 + 1);
                  auVar90._9_3_ = 0;
                  if ((char)bVar3 < '\0') {
                    bVar2 = *(byte *)((long)puVar27 + 1);
                    iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                    if ((char)bVar2 < '\0') {
                      puStack_80 = (ulong *)&UNK_0051422a;
                      auVar90 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar27,iVar31);
                    }
                    else {
                      auVar90._8_4_ = iVar31;
                      auVar90._0_8_ = (ushort *)((long)puVar27 + 2);
                    }
                  }
                  puVar45 = auVar90._0_8_;
                } while (auVar90._8_4_ == uVar10);
                goto code_r0x00514015;
              }
            }
            do {
              puStack_80 = (ulong *)&UNK_0051438c;
              pbVar11 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                          (puVar16,puVar16[2]);
              puStack_80 = (ulong *)&UNK_0051439d;
              puVar27 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                           (pbVar11,puVar45,param_3);
              if (puVar27 == (ulong *)0x0) goto code_r0x005013a0;
              bVar63 = (*pbVar11 & 1) != 0;
              pbVar53 = pbVar11 + 1;
              if (bVar63) {
                pbVar53 = *(byte **)(pbVar11 + 0x10);
              }
              uVar24 = (ulong)(*pbVar11 >> 1);
              if (bVar63) {
                uVar24 = *(ulong *)(pbVar11 + 8);
              }
              puStack_80 = (ulong *)&UNK_005143d2;
              cVar9 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                (pbVar53,uVar24,param_5,puVar61,uVar59);
              if (cVar9 == '\0') goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar27) goto code_r0x00514410;
              bVar3 = (byte)*puVar27;
              auVar91[8] = bVar3;
              auVar91._0_8_ = (byte *)((long)puVar27 + 1);
              auVar91._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar27 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  puStack_80 = (ulong *)&UNK_0051436d;
                  auVar91 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar27,iVar31);
                }
                else {
                  auVar91._8_4_ = iVar31;
                  auVar91._0_8_ = (ushort *)((long)puVar27 + 2);
                }
              }
              puVar45 = auVar91._0_8_;
            } while (auVar91._8_4_ == uVar10);
          }
code_r0x00514015:
          puVar45 = puVar27;
          puVar27 = puVar45;
          if ((ulong *)*param_3 <= puVar45) {
code_r0x00514410:
            if ((ushort)*param_5 != 0) {
              puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
              *puVar61 = *puVar61 | uVar60;
            }
            return puVar27;
          }
          uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
          puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                             (ulong)(ushort)*puVar45);
          UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
code_r0x0051404b:
                    /* WARNING: Could not recover jumptable at 0x00514059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
        puVar61 = (uint *)((long)param_5 + (long)puVar12);
        if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        else if (uVar55 == 0x30) {
          uStack_60 = (ulong *)&UNK_0050e133;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar61,uVar10 >> 3,param_5,param_1);
        }
        puVar27 = (ulong *)((ulong)*puVar61 + (long)param_1);
        if ((uVar59 & 0x1c0) == 0x140) {
          uVar24 = param_1[1];
          if ((uVar24 & 1) != 0) {
            uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
          }
          bVar3 = (byte)*puVar45;
          if ((char)bVar3 < '\0') {
            uStack_60 = (ulong *)&UNK_0050e278;
            auVar74 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
            if (auVar74._0_8_ != 0) goto code_r0x0050e289;
            puVar45 = (ulong *)0x0;
          }
          else {
            auVar74[8] = bVar3;
            auVar74._0_8_ = (byte *)((long)puVar45 + 1);
            auVar74._9_3_ = 0;
code_r0x0050e289:
            iVar31 = auVar74._8_4_;
            lVar22 = auVar74._0_8_;
            if ((int)(((uint)param_3[1] - auVar74._0_4_) + 0x10) < iVar31) {
              uStack_60 = (ulong *)&UNK_0050e2a5;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar22,iVar31,puVar27,uVar24);
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e2c1;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar27,lVar22,(long)iVar31,uVar24,7);
              puVar45 = (ulong *)(lVar22 + iVar31);
            }
          }
          pbVar11 = (byte *)*puVar27;
          if (((ulong)pbVar11 & 2) == 0) {
            if (((ulong)pbVar11 & 1) == 0) {
              uVar10 = (uint)((ulong)pbVar11 >> 2) & 0x3f;
              pbVar11 = (byte *)((long)puVar27 + 1);
            }
            else {
              uVar10 = *(uint *)(pbVar11 + 7);
              pbVar11 = *(byte **)(pbVar11 + -1);
            }
          }
          else {
            uVar10 = (uint)pbVar11[-2];
          }
          if ((uVar59 & 0x600) == 0x400) {
            uStack_60 = (ulong *)&UNK_0050e30f;
            iVar31 = utf8_range_IsValid(pbVar11,uVar10);
            if (iVar31 == 0) {
              pbVar11 = (byte *)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                (ulong)(uint)param_5[3]);
              uVar54 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
              lVar22 = (long)(char)*(byte *)((long)param_5 +
                                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                            (ulong)(uint)param_5[3]);
              pbVar53 = pbVar11 + uVar54;
              uVar46 = ((long)((long)puVar12 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
              uVar24 = uVar46 + 1;
              pbVar30 = pbVar11 + uVar24;
              if (uVar24 != 0) {
                pbVar28 = pbVar11;
                for (uVar24 = uVar24 & 7; uVar24 != 0; uVar24 = uVar24 - 1) {
                  uVar54 = uVar54 + *pbVar28;
                  pbVar28 = pbVar28 + 1;
                }
                if (6 < uVar46) {
                  do {
                    uVar54 = (ulong)pbVar28[7] + (ulong)pbVar28[6] +
                             (ulong)pbVar28[5] + (ulong)pbVar28[4] + (ulong)pbVar28[3] +
                             (ulong)pbVar28[2] + (ulong)pbVar28[1] + *pbVar28 + uVar54;
                    pbVar28 = pbVar28 + 8;
                  } while (pbVar28 != pbVar30);
                }
              }
              goto code_r0x0050e593;
            }
          }
          if (puVar45 != (ulong *)0x0) {
code_r0x0050e491:
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                         (param_1,puVar45,param_3,
                                          *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar45);
            return puVar45;
          }
        }
        else {
          if ((uVar59 & 0x1c0) == 0x80) {
            if (uVar55 == 0x30) {
              puVar27 = (ulong *)*puVar27;
            }
            bVar3 = (byte)*puVar45;
            if ((char)bVar3 < '\0') {
              uStack_60 = (ulong *)&UNK_0050e1c4;
              auVar73 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
              if (auVar73._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar73[8] = bVar3;
              auVar73._0_8_ = (byte *)((long)puVar45 + 1);
              auVar73._9_3_ = 0;
            }
            iVar56 = auVar73._8_4_;
            lVar22 = auVar73._0_8_;
            iVar26 = ((uint)param_3[1] - auVar73._0_4_) + 0x10;
            iVar31 = 0x200;
            if (iVar26 < 0x200) {
              iVar31 = iVar26;
            }
            uStack_60 = (ulong *)&UNK_0050e209;
            cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                              (param_3,iVar56,iVar31);
            if (cVar9 == '\0') {
              uStack_60 = (ulong *)&UNK_0050e24e;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (param_3,lVar22,iVar56,puVar27);
              if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e21e;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (puVar27,lVar22,(long)iVar56);
              puVar45 = (ulong *)(lVar22 + iVar56);
            }
            goto code_r0x0050e491;
          }
          uVar24 = param_1[1];
          if ((uVar24 & 1) == 0) {
            if (uVar24 == 0) goto code_r0x0050e410;
code_r0x0050e1a9:
            uStack_60 = (ulong *)&UNK_0050e1b4;
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar45,puVar27);
          }
          else {
            if (*(long *)(uVar24 & 0xfffffffffffffffe) != 0) goto code_r0x0050e1a9;
code_r0x0050e410:
            uStack_60 = (ulong *)&UNK_0050e420;
            uVar14 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar27,0);
            uStack_60 = (ulong *)&UNK_0050e42e;
            puVar45 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar14,puVar45,param_3);
          }
          if (puVar45 == (ulong *)0x0) {
            uStack_60 = (ulong *)&UNK_0050e5d4;
            func_0x0050d360(param_1,puVar27);
            goto code_r0x005013a0;
          }
          if ((uVar59 & 0x600) != 0x400) goto code_r0x0050e491;
          pbVar11 = (byte *)(*puVar27 & 0xfffffffffffffffc);
          if ((*pbVar11 & 1) == 0) {
            uVar24 = (ulong)(*pbVar11 >> 1);
            pbVar11 = pbVar11 + 1;
          }
          else {
            uVar24 = *(ulong *)(pbVar11 + 8);
            pbVar11 = *(byte **)(pbVar11 + 0x10);
          }
          uStack_60 = (ulong *)&UNK_0050e47a;
          iVar31 = utf8_range_IsValid(pbVar11,uVar24);
          if (iVar31 != 0) goto code_r0x0050e491;
          pbVar11 = (byte *)((long)param_5 +
                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 + (ulong)(uint)param_5[3]);
          uVar54 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
          lVar22 = (long)(char)*(byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
          pbVar53 = pbVar11 + uVar54;
          uVar46 = ((long)((long)puVar12 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
          uVar24 = uVar46 + 1;
          pbVar30 = pbVar11 + uVar24;
          if (uVar24 != 0) {
            pbVar28 = pbVar11;
            for (uVar24 = uVar24 & 7; uVar24 != 0; uVar24 = uVar24 - 1) {
              uVar54 = uVar54 + *pbVar28;
              pbVar28 = pbVar28 + 1;
            }
            if (6 < uVar46) {
              do {
                uVar54 = (ulong)pbVar28[7] + (ulong)pbVar28[6] +
                         (ulong)pbVar28[5] + (ulong)pbVar28[4] + (ulong)pbVar28[3] +
                         (ulong)pbVar28[2] + (ulong)pbVar28[1] + *pbVar28 + uVar54;
                pbVar28 = pbVar28 + 8;
              } while (pbVar28 != pbVar30);
            }
          }
code_r0x0050e593:
          uStack_60 = (ulong *)&UNK_0050e5a9;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar53,lVar22,pbVar11 + uVar54,(long)(char)*pbVar30,&UNK_00178f3f,0);
        }
code_r0x005013a0:
        *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
        if ((ulong)(ushort)*param_5 != 0) {
          puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
          *puVar61 = *puVar61 | (uint)param_6;
        }
        return (ulong *)0x0;
      case 6:
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 != 0x20) {
          if ((uVar59 & 0x1c0) == 0x40) {
            if ((uVar10 & 7) != 3) goto code_r0x0050e6d6;
          }
          else if (((uVar59 & 0x1c0) != 0) || ((uVar10 & 7) != 2)) goto code_r0x0050e6d6;
          puVar61 = (uint *)((long)puVar12 + (long)param_5);
          plVar15 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if ((uVar59 & 0x600) == 0x400) {
            uStack_40 = SUB82(plVar15,0);
            uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
            bStack_3d = (byte)((ulong)plVar15 >> 0x18);
            uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
            uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
            uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
            uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
          }
          else {
            if ((uVar59 & 0x600) != 0x200) {
              plVar15 = (long *)*plVar15;
            }
            uStack_70 = (ulong *)&UNK_0050e8c8;
            puStack_68 = param_5;
            uStack_60 = param_6;
            lVar20 = (**(code **)(*plVar15 + 0x20))(plVar15);
            lVar22 = *(long *)(lVar20 + 8);
            uStack_40 = (undefined2)lVar22;
            uStack_3e = (undefined1)((ulong)lVar22 >> 0x10);
            bStack_3d = (byte)((ulong)lVar22 >> 0x18);
            uStack_3c = (undefined1)((ulong)lVar22 >> 0x20);
            uStack_3b = (undefined1)((ulong)lVar22 >> 0x28);
            uStack_3a = (undefined1)((ulong)lVar22 >> 0x30);
            uStack_39 = (undefined1)((ulong)lVar22 >> 0x38);
            param_5 = puStack_68;
            param_6 = uStack_60;
            if (lVar22 == 0) {
              uStack_70 = (ulong *)&UNK_0050e8fb;
              uVar14 = (**(code **)(*(long *)(lVar20 + 0x58) + 0x10))(plVar15);
              uStack_40 = (undefined2)uVar14;
              uStack_3e = (undefined1)((ulong)uVar14 >> 0x10);
              bStack_3d = (byte)((ulong)uVar14 >> 0x18);
              uStack_3c = (undefined1)((ulong)uVar14 >> 0x20);
              uStack_3b = (undefined1)((ulong)uVar14 >> 0x28);
              uStack_3a = (undefined1)((ulong)uVar14 >> 0x30);
              uStack_39 = (undefined1)((ulong)uVar14 >> 0x38);
              param_5 = puStack_68;
              param_6 = uStack_60;
            }
          }
          if (uVar55 == 0x30) {
            uStack_70 = (ulong *)&UNK_0050e718;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,CONCAT17(uStack_39,
                                        CONCAT16(uStack_3a,
                                                 CONCAT15(uStack_3b,
                                                          CONCAT14(uStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
                       ,puVar61,(uVar24 & 0xfffffff8) >> 3,param_5,param_1);
          }
          else if (uVar55 == 0x10) {
            puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar24 = (ulong)*puVar61;
          if (*(long *)((long)param_1 + uVar24) == 0) {
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            puVar19 = *(undefined8 **)
                       (CONCAT17(uStack_39,
                                 CONCAT16(uStack_3a,
                                          CONCAT15(uStack_3b,
                                                   CONCAT14(uStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  ))) + 0x20);
            uVar14 = *puVar19;
            uStack_70 = (ulong *)&UNK_0050e7d6;
            uVar14 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                               (puVar19 + 5,uVar14,uVar14,uVar54);
            *(undefined8 *)((long)param_1 + uVar24) = uVar14;
          }
          if ((uVar59 & 0x1c0) == 0x40) {
            uVar54 = param_3[0xb];
            *(uint *)(param_3 + 0xb) = (uint)uVar54 - 1;
            if (0 < (int)(uint)uVar54) {
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0050e778;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar24),puVar45,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar24 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((uint)uVar24 == uVar10) {
                return puVar45;
              }
            }
          }
          else {
            bVar3 = (byte)*puVar45;
            if ((char)bVar3 < '\0') {
              uStack_70 = (ulong *)&UNK_0050e80e;
              auVar75 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
              if (auVar75._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar75[8] = bVar3;
              auVar75._0_8_ = (byte *)((long)puVar45 + 1);
              auVar75._9_3_ = 0;
            }
            if (0 < (int)(uint)param_3[0xb]) {
              uVar25 = auVar75._8_4_ + (auVar75._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar25 >> 0x1f & uVar25) + param_3[1];
              uVar10 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar25;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0050e864;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar24),auVar75._0_8_,
                                            param_3,CONCAT17(uStack_39,
                                                             CONCAT16(uStack_3a,
                                                                      CONCAT15(uStack_3b,
                                                                               CONCAT14(uStack_3c,
                                                                                        CONCAT13(
                                                  bStack_3d,CONCAT12(uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar10 = (uVar10 - uVar25) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar10;
              if ((uint)param_3[10] == 0) {
                *param_3 = (long)(int)((int)uVar10 >> 0x1f & uVar10) + param_3[1];
                return puVar45;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar59 & 0x1c0) == 0x40) {
          if ((uVar10 & 7) == 3) {
            uVar25 = *(uint *)((long)param_5 + (long)puVar12);
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12) & 0x600;
            plVar23 = plVar15;
            if (uVar59 != 0x400) {
              if (uVar59 != 0x200) {
                plVar15 = (long *)*plVar15;
              }
              uStack_60 = (ulong *)&UNK_00514925;
              lVar22 = (**(code **)(*plVar15 + 0x20))(plVar15);
              plVar23 = *(long **)(lVar22 + 8);
              if (*(long **)(lVar22 + 8) == (long *)0x0) {
                uStack_60 = (ulong *)&UNK_00514947;
                plVar23 = (long *)(**(code **)(*(long *)(lVar22 + 0x58) + 0x10))(plVar15);
              }
            }
            uVar44 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
            if (uVar44 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar44 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar44 & 0x1f);
            }
            puVar27 = puVar45;
            do {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_005147bd;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar23,(byte *)((ulong)uVar25 + (long)param_1),uVar24);
              uVar24 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar24 - 1;
              if ((int)(uint)uVar24 < 1) {
code_r0x00514885:
                param_6 = (ulong *)((ulong)param_6 & 0xffffffff);
                goto code_r0x005013a0;
              }
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_60 = (ulong *)&UNK_005147e8;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,puVar27,param_3,plVar23);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar24 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((puVar45 == (ulong *)0x0) || ((uint)uVar24 != uVar10)) goto code_r0x00514885;
              if ((ulong *)*param_3 <= puVar45) {
                uVar59 = (ushort)*param_5;
                goto joined_r0x0051490a;
              }
              bVar3 = (byte)*puVar45;
              auVar94[8] = bVar3;
              auVar94._0_8_ = (byte *)((long)puVar45 + 1);
              auVar94._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar45 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_60 = (ulong *)&UNK_00514852;
                  auVar94 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar45,iVar31);
                  if (auVar94._0_8_ == 0) goto code_r0x00514885;
                }
                else {
                  auVar94._8_4_ = iVar31;
                  auVar94._0_8_ = (ushort *)((long)puVar45 + 2);
                }
              }
              puVar27 = auVar94._0_8_;
            } while (auVar94._8_4_ == uVar10);
            if ((ulong *)*param_3 <= puVar45) {
              uVar59 = (ushort)*param_5;
joined_r0x0051490a:
              if (uVar59 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar59) =
                     *(uint *)((long)param_1 + (ulong)uVar59) | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
            puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar45);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00514883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
        if ((uVar59 & 0x1c0) == 0) {
          if ((uVar10 & 7) == 2) {
            uVar25 = *(uint *)((long)param_5 + (long)puVar12);
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12) & 0x600;
            if (uVar59 != 0x400) {
              plVar23 = plVar15;
              if (uVar59 != 0x200) {
                plVar23 = (long *)*plVar15;
              }
              uStack_60 = (ulong *)&UNK_005146c8;
              lVar22 = (**(code **)(*plVar23 + 0x20))(plVar23);
              plVar15 = *(long **)(lVar22 + 8);
              if (plVar15 == (long *)0x0) {
                uStack_60 = (ulong *)&UNK_005146e5;
                plVar15 = (long *)(**(code **)(*(long *)(lVar22 + 0x58) + 0x10))(plVar23);
              }
            }
            uVar44 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
            if (uVar44 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar44 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar44 & 0x1f);
            }
            puVar27 = puVar45;
            do {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_0051450d;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar15,(byte *)((ulong)uVar25 + (long)param_1),uVar24);
              bVar3 = (byte)*puVar27;
              if ((char)bVar3 < '\0') {
                uStack_60 = (ulong *)&UNK_0051452a;
                auVar92 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar27,bVar3);
                if (auVar92._0_8_ != 0) goto code_r0x00514536;
code_r0x00514628:
                param_6 = (ulong *)((ulong)param_6 & 0xffffffff);
                goto code_r0x005013a0;
              }
              auVar92[8] = bVar3;
              auVar92._0_8_ = (byte *)((long)puVar27 + 1);
              auVar92._9_3_ = 0;
code_r0x00514536:
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x00514628;
              uVar32 = auVar92._8_4_ + (auVar92._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar32 >> 0x1f & uVar32) + param_3[1];
              uVar44 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar32;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_60 = (ulong *)&UNK_00514585;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,auVar92._0_8_,param_3,plVar15);
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar44 = (uVar44 - uVar32) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar44;
              if ((uint)param_3[10] != 0) goto code_r0x00514628;
              puVar27 = (ulong *)((long)(int)((int)uVar44 >> 0x1f & uVar44) + param_3[1]);
              *param_3 = (ulong)puVar27;
              if (puVar45 == (ulong *)0x0) goto code_r0x00514628;
              if (puVar27 <= puVar45) {
                uVar59 = (ushort)*param_5;
                goto joined_r0x005146ae;
              }
              bVar3 = (byte)*puVar45;
              auVar93[8] = bVar3;
              auVar93._0_8_ = (byte *)((long)puVar45 + 1);
              auVar93._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar45 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_60 = (ulong *)&UNK_005145f5;
                  auVar93 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar45,iVar31);
                  if (auVar93._0_8_ == 0) goto code_r0x00514628;
                }
                else {
                  auVar93._8_4_ = iVar31;
                  auVar93._0_8_ = (ushort *)((long)puVar45 + 2);
                }
              }
              puVar27 = auVar93._0_8_;
            } while (auVar93._8_4_ == uVar10);
            if ((ulong *)*param_3 <= puVar45) {
              uVar59 = (ushort)*param_5;
joined_r0x005146ae:
              if (uVar59 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar59) =
                     *(uint *)((long)param_1 + (ulong)uVar59) | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
            puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar45);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00514626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
code_r0x0050e6d6:
                    /* WARNING: Could not recover jumptable at 0x0050e6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*(code *)param_5[6])();
        return puVar45;
      case 7:
        puVar18 = &stack0xfffffffffffffff8;
        ppuVar35 = &puStack_88;
        ppuVar37 = &puStack_88;
        ppuVar38 = &puStack_88;
        ppuVar39 = &puStack_88;
        ppuVar36 = &puStack_88;
        ppuVar34 = &puStack_88;
        lStack_38 = in_FS_OFFSET[5];
        uVar54 = (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12);
        uVar25 = (uint)param_5[3];
        bStack_3d = *(byte *)((long)param_5 + uVar54 * 8 + (ulong)uVar25 + 4);
        uStack_70 = param_6;
        if (((bStack_3d & 1) == 0) || ((uVar10 & 7) != 2)) {
          if (in_FS_OFFSET[5] == lStack_38) {
            puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
            goto 
            _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
        }
        else {
          puStack_78 = (ulong *)((long)puVar12 + (long)param_5);
          uVar43 = *(undefined4 *)((long)param_5 + uVar54 * 8 + (ulong)uVar25);
          param_6 = (ulong *)((ulong)(uint)*puStack_78 + (long)param_1);
          uStack_60 = param_1;
          if ((bStack_3d & 2) == 0) {
            if ((*param_6 & 1) != 0) {
              puStack_68 = (ulong *)CONCAT44(puStack_68._4_4_,uVar43);
              puStack_90 = &UNK_0050eed7;
              (*_ZN6google8protobuf8internal20MapFieldBaseForParse22sync_map_with_repeatedE)
                        (param_6,1);
              uVar43 = puStack_68._0_4_;
            }
            param_6 = param_6 + 1;
          }
          uVar60 = *(uint *)((long)puStack_78 + 4);
          if (uVar60 != 0xffffffff) {
            puVar61 = (uint *)((long)uStack_60 + (ulong)(uVar60 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar60 & 0x1f);
          }
          puStack_68 = (ulong *)((long)param_5 + uVar54 * 8 + (ulong)uVar25);
          puStack_80 = (ulong *)(ulong)CONCAT14(bStack_3d,uVar43);
          uStack_48 = SUB82(param_6,0);
          uStack_46 = (undefined2)((ulong)param_6 >> 0x10);
          uStack_44 = (undefined4)((ulong)param_6 >> 0x20);
code_r0x0050ea10:
          do {
            if (param_6[3] == 0) {
              puStack_90 = &UNK_0050ea38;
              unaff_RBX = (ulong *)_Znwm(*(ushort *)((long)param_6 + 0xc));
            }
            else {
              puStack_90 = &UNK_0050ea29;
              unaff_RBX = (ulong *)_ZN6google8protobuf5Arena8AllocateEm
                                             (param_6[3],
                                              *(ushort *)((long)param_6 + 0xc) + 7 & 0xfffffff8);
            }
            uVar59 = *(ushort *)((long)param_6 + 0xc);
            unaff_RBX[1] = 0;
            pbVar11 = (byte *)((long)unaff_RBX + ((ulong)uVar59 - 8));
            pbVar11[0] = 0;
            pbVar11[1] = 0;
            pbVar11[2] = 0;
            pbVar11[3] = 0;
            pbVar11[4] = 0;
            pbVar11[5] = 0;
            pbVar11[6] = 0;
            pbVar11[7] = 0;
            if ((*(byte *)((long)param_6 + 0xf) & 0xf) == 5) {
              uVar54 = param_6[3];
              unaff_RBX[1] = 0;
              unaff_RBX[2] = 0;
              unaff_RBX[3] = 0;
              if (uVar54 != 0) {
                puStack_90 = &UNK_0050ea87;
                _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                          (uVar54,unaff_RBX + 1,
                           _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                          );
              }
            }
            bVar3 = *(byte *)((long)param_6 + 0xf) >> 4;
            if (4 < bVar3) {
              if (bVar3 == 6) {
                puStack_90 = &UNK_0050eaba;
                _ZNK6google8protobuf8internal9ClassData12PlacementNewEPvPNS0_5ArenaE
                          (*(undefined8 *)(puStack_68[1] + 0x20),
                           (byte *)((ulong)*(byte *)((long)param_6 + 0xe) + (long)unaff_RBX),
                           param_6[3]);
              }
              else {
                uVar46 = (ulong)*(byte *)((long)param_6 + 0xe);
                uVar54 = param_6[3];
                pbVar11 = (byte *)((long)unaff_RBX + uVar46);
                pbVar11[0] = 0;
                pbVar11[1] = 0;
                pbVar11[2] = 0;
                pbVar11[3] = 0;
                pbVar11[4] = 0;
                pbVar11[5] = 0;
                pbVar11[6] = 0;
                pbVar11[7] = 0;
                pbVar11[8] = 0;
                pbVar11[9] = 0;
                pbVar11[10] = 0;
                pbVar11[0xb] = 0;
                pbVar11[0xc] = 0;
                pbVar11[0xd] = 0;
                pbVar11[0xe] = 0;
                pbVar11[0xf] = 0;
                pbVar11 = (byte *)((long)unaff_RBX + uVar46 + 0x10);
                pbVar11[0] = 0;
                pbVar11[1] = 0;
                pbVar11[2] = 0;
                pbVar11[3] = 0;
                pbVar11[4] = 0;
                pbVar11[5] = 0;
                pbVar11[6] = 0;
                pbVar11[7] = 0;
                if (uVar54 != 0) {
                  puStack_90 = &UNK_0050eae9;
                  _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                            (uVar54,(byte *)(uVar46 + (long)unaff_RBX),
                             _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                            );
                }
              }
            }
            bVar3 = (byte)*puVar45;
            if ((char)bVar3 < '\0') {
              puStack_90 = &UNK_0050eb0a;
              auVar76 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
              if (auVar76._0_8_ != 0) goto code_r0x0050eb1a;
code_r0x0050edc0:
              if (param_6[3] == 0) {
                puStack_90 = &UNK_0050edd2;
                _ZN6google8protobuf8internal14UntypedMapBase10DeleteNodeEPNS1_8NodeBaseE
                          (param_6,unaff_RBX);
              }
              param_1 = uStack_60;
              param_6 = uStack_70;
              if (in_FS_OFFSET[5] != lStack_38) goto code_r0x0050eee3;
              goto code_r0x005013a0;
            }
            auVar76[8] = bVar3;
            auVar76._0_8_ = (byte *)((long)puVar45 + 1);
            auVar76._9_3_ = 0;
code_r0x0050eb1a:
            puVar58 = auVar76._0_8_;
            if ((int)(uint)param_3[0xb] < 1) goto code_r0x0050edc0;
            uVar60 = auVar76._8_4_ + (auVar76._0_4_ - (int)param_3[1]);
            *param_3 = (long)(int)((int)uVar60 >> 0x1f & uVar60) + param_3[1];
            uVar25 = *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar60;
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
            puStack_90 = &UNK_0050eb76;
            puVar45 = puVar58;
            param_1 = unaff_RBX;
            puVar49 = param_5;
            puStack_88 = param_6;
            auVar72 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                                (unaff_RBX,puVar58,param_3,puStack_68,param_5,puStack_78);
            puVar12 = auVar72._8_8_;
            unaff_R13 = auVar72._0_8_;
            uVar44 = (uint)uVar24;
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
            uVar25 = (uVar25 - uVar60) + *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar25;
            if (((uint)param_3[10] != 0) ||
               (*param_3 = (long)(int)((int)uVar25 >> 0x1f & uVar25) + param_3[1],
               unaff_R13 == (ulong *)0x0)) goto code_r0x0050edc0;
            if ((bStack_3d & 8) == 0) {
code_r0x0050ebea:
              auVar7._8_8_ = puVar12;
              auVar7._0_8_ = puVar58;
              auVar65._8_8_ = puVar12;
              auVar65._0_8_ = puVar58;
              uVar25 = *(byte *)((long)param_6 + 0xf) & 0xf;
              puVar27 = (ulong *)&UNK_00204f58;
              pcVar13 = &UNK_00204f58 + *(int *)(&UNK_00204f58 + (ulong)uVar25 * 4);
              uVar62 = pcVar13 == (char *)0x0;
              ppuVar40 = &puStack_88;
              ppuVar8 = &puStack_88;
              puVar41 = &stack0xfffffffffffffff8;
              puVar42 = &stack0xfffffffffffffff8;
              puVar29 = param_5;
              switch(uVar25) {
              case 0:
                puStack_90 = &UNK_0050ec0d;
                _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
                          (param_6,unaff_RBX);
                puVar45 = (ulong *)*param_3;
                break;
              case 1:
                puStack_90 = &UNK_0050ec6b;
                _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
                          (param_6,unaff_RBX);
                puVar45 = (ulong *)*param_3;
                break;
              case 2:
                puStack_90 = &UNK_0050ec2b;
                _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
                          (param_6,unaff_RBX);
                puVar45 = (ulong *)*param_3;
                break;
              default:
                goto code_r0x0050eee8;
              case 5:
                puStack_90 = &UNK_0050ec4b;
                _ZN6google8protobuf8internal10KeyMapBaseINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE19InsertOrReplaceNodeEPNS1_7KeyNodeIS9_EE
                          (param_6,unaff_RBX);
                puVar45 = (ulong *)*param_3;
                break;
              case 6:
                goto code_r0x005104be;
              case 7:
                *pcVar13 = *pcVar13 + (char)pcVar13;
                goto code_r0x00510540;
              case 8:
                pbVar11 = &UNK_00204ee3 + *(int *)(&UNK_00204f58 + (ulong)uVar25 * 4);
                *pbVar11 = *pbVar11 | 0x58;
                if (-1 < (char)*pbVar11) goto code_r0x0051050d;
                goto code_r0x00510520;
              case 9:
              case 10:
                puVar27 = (ulong *)((ulong)unaff_RBX & 0xffffffff);
                goto code_r0x005107d4;
              case 0xb:
                *(byte *)puVar49 = (byte)*puVar49 + (char)puVar49;
                ppuVar36 = &puStack_88;
                goto code_r0x00510520;
              case 0xc:
                puVar27 = (ulong *)&UNK_00204fb0;
                puStack_90 = &UNK_00510881;
                auVar72 = func_0x08318b87();
                puVar12 = auVar72._8_8_;
                pcVar13 = auVar72._0_8_;
                goto code_r0x00510881;
              case 0xd:
                puStack_90 = &UNK_0051089d;
                puVar45 = (ulong *)func_0x15de54a6();
                out(0x46,(int)puVar45);
                return puVar45;
              case 0xe:
                goto code_r0x0051088e;
              case 0xf:
                goto code_r0x00510893;
              }
            }
            else {
              uVar25 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)param_6 + 0xe));
              puVar61 = (uint *)puStack_68[1];
              puVar45 = (ulong *)(long)(short)*puVar61;
              param_1 = (ulong *)(ulong)(*puVar61 >> 0x10);
              puVar12 = (ulong *)(((long)(int)uVar25 - (long)puVar45) - (long)param_1);
              if ((ulong *)((long)(int)uVar25 - (long)puVar45) < param_1) goto code_r0x0050ebea;
              uVar60 = puVar61[1];
              puVar45 = (ulong *)(ulong)uVar60;
              param_1 = (ulong *)(ulong)(ushort)uVar60;
              if (param_1 <= puVar12) {
                puVar12 = (ulong *)(ulong)(uVar60 >> 0x10);
                puVar45 = (ulong *)0x0;
                do {
                  if (puVar12 <= puVar45) goto code_r0x0050ece8;
                  uVar32 = *(uint *)((long)puVar61 +
                                    (long)puVar45 * 4 + (ulong)(uVar60 >> 3 & 0x1ffc) + 8);
                  param_1 = (ulong *)(ulong)uVar32;
                  puVar49 = (ulong *)(ulong)((int)uVar25 < (int)uVar32);
                  puVar45 = (ulong *)(((long)puVar45 * 2 - (long)puVar49) + 2);
                } while (uVar32 != uVar25);
                goto code_r0x0050ebea;
              }
              if ((puVar61[((ulong)puVar12 >> 5) + 2] >> ((uint)puVar12 & 0x1f) & 1) != 0)
              goto code_r0x0050ebea;
code_r0x0050ece8:
              puStack_90 = &UNK_0050ed02;
              _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                        (uStack_60,param_5,param_6,CONCAT44(uStack_4c,uVar10),unaff_RBX,puStack_80);
              puVar45 = (ulong *)*param_3;
            }
            if (puVar45 <= unaff_R13) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)uStack_60 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | (uint)uStack_70;
              }
              if (in_FS_OFFSET[5] == lStack_38) {
                return unaff_R13;
              }
              goto code_r0x0050eee3;
            }
            bVar3 = (byte)*unaff_R13;
            uVar25 = (uint)bVar3;
            puVar45 = (ulong *)((long)unaff_R13 + 1);
            if ((char)bVar3 < '\0') {
              uVar48 = (uint7)(((ulong)bVar3 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar48,*(byte *)puVar45);
              if (-1 < (char)*(byte *)puVar45) {
                puVar45 = (ulong *)((long)unaff_R13 + 2);
                if (((int)lVar22 << 7 | (uint)(((ulong)bVar3 << 0x39) >> 0x39)) != uVar10) break;
                goto code_r0x0050ea10;
              }
              uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar48,*(byte *)((long)unaff_R13 + 2));
              if ((char)*(byte *)((long)unaff_R13 + 2) < '\0') {
                uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                lVar22 = CONCAT71(uVar48,*(byte *)((long)unaff_R13 + 3));
                if ((char)*(byte *)((long)unaff_R13 + 3) < '\0') {
                  uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                  if ((char)*(byte *)((long)unaff_R13 + 4) < '\0') {
                    uVar25 = 0;
                    puVar45 = (ulong *)0x0;
                  }
                  else {
                    uVar25 = (int)CONCAT71(uVar48,*(byte *)((long)unaff_R13 + 4)) << 0x1c |
                             (uint)(uVar48 >> 0x1c);
                    puVar45 = (ulong *)((long)unaff_R13 + 5);
                  }
                }
                else {
                  uVar25 = (int)lVar22 << 0x15 | (uint)(uVar48 >> 0x23);
                  puVar45 = (ulong *)((long)unaff_R13 + 4);
                }
              }
              else {
                uVar25 = (int)lVar22 << 0xe | (uint)(uVar48 >> 0x2a);
                puVar45 = (ulong *)((long)unaff_R13 + 3);
              }
            }
          } while (uVar25 == uVar10);
          uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*unaff_R13 & 0xfffffff8);
          if (in_FS_OFFSET[5] == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0050ee52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                         (uStack_60,unaff_R13,param_3,
                                          *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                          (ulong)(ushort)*unaff_R13,param_5,uStack_70);
            return puVar45;
          }
        }
code_r0x0050eee3:
        puStack_90 = &UNK_0050eee8;
        func_0x0099bd00();
code_r0x0050eee8:
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
        puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar45;
      case 8:
        goto code_r0x005013a0;
      case 9:
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 == 0x20) {
          do {
            if ((uVar24 & 7) == 0) {
              uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
              uVar25 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
              if (uVar25 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar25 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar25 & 0x1f);
              }
              uVar59 = uVar59 >> 6;
              if ((uVar59 & 7) == 0) {
                puStack_68 = param_6;
                uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
                uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
                uStack_60 = param_1;
                lVar20 = *(long *)((long)param_1 + uVar24);
                if (lVar20 == lVar22) {
                  uVar46 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar54 = param_1[1];
                  if ((uVar54 & 1) == 0) {
                    if (uVar54 == 0) goto code_r0x005166f0;
code_r0x005166d5:
                    puStack_80 = (ulong *)&UNK_005166e2;
                    uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar54,uVar46 + 7 & 0xfffffffffffffff8);
                  }
                  else {
                    uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
                    if (uVar54 != 0) goto code_r0x005166d5;
code_r0x005166f0:
                    puStack_80 = (ulong *)&UNK_005166f8;
                    uVar14 = _Znwm(uVar46);
                  }
                  puVar27 = uStack_60;
                  *(undefined8 *)((long)uStack_60 + uVar24) = uVar14;
                  puStack_80 = (ulong *)&UNK_0051670e;
                  func_0x0099bda0(uVar14,lVar22,uVar46);
                  lVar20 = *(long *)((long)puVar27 + uVar24);
                  puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
                }
                uStack_70 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)uStack_4c);
                puVar12 = *(ulong **)(lVar20 + (long)uStack_70);
                if (puVar12 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar24 = uStack_60[1];
                  if ((uVar24 & 1) == 0) {
                    if (uVar24 == 0) goto code_r0x00516aff;
code_r0x00516771:
                    puStack_80 = (ulong *)&UNK_0051677e;
                    puVar12 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x10);
                    *puVar12 = uVar24;
                  }
                  else {
                    uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                    if (uVar24 != 0) goto code_r0x00516771;
code_r0x00516aff:
                    puStack_80 = (ulong *)&UNK_00516b09;
                    puVar12 = (ulong *)_Znwm(0x10);
                    *puVar12 = 0;
                  }
                  *(ulong **)(lVar20 + (long)uStack_70) = puVar12;
                  puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
                  if ((uVar59 & 0x400) == 0) goto code_r0x0051674a;
code_r0x005167a9:
                  uVar24 = *(ulong *)((long)param_5 +
                                     (ulong)*(ushort *)((long)param_5 + (ulong)uStack_4c + 8) * 8 +
                                     (ulong)(uint)param_5[3]);
                }
                else {
                  if ((uVar59 & 0x400) != 0) goto code_r0x005167a9;
code_r0x0051674a:
                  uVar24 = 0;
                }
                puVar16 = (ulong *)(uVar24 >> 0x20);
                uStack_70 = puVar16;
                goto code_r0x005167ec;
              }
              if ((uVar59 & 7) != 2) {
                puStack_68 = param_6;
                uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
                uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
                lVar20 = *(long *)((long)param_1 + uVar24);
                uStack_60 = param_5;
                if (lVar20 == lVar22) {
                  uVar46 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar54 = param_1[1];
                  if ((uVar54 & 1) != 0) {
                    uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
                  }
                  if (uVar54 == 0) {
                    puStack_80 = (ulong *)&UNK_00515db0;
                    uVar14 = _Znwm(uVar46);
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515da6;
                    uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar54,uVar46 + 7 & 0xfffffffffffffff8);
                  }
                  *(undefined8 *)((long)param_1 + uVar24) = uVar14;
                  puStack_80 = (ulong *)&UNK_00515dc6;
                  func_0x0099bda0(uVar14,lVar22,uVar46);
                  lVar20 = *(long *)((long)param_1 + uVar24);
                  puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
                }
                uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (ulong)uStack_4c);
                puVar12 = *(ulong **)(lVar20 + (long)uStack_70);
                if (puVar12 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar24 = param_1[1];
                  if ((uVar24 & 1) != 0) {
                    uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                  }
                  if (uVar24 == 0) {
                    puStack_80 = (ulong *)&UNK_005161b0;
                    puVar12 = (ulong *)_Znwm(0x10);
                    *puVar12 = 0;
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515e36;
                    puVar12 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x10);
                    *puVar12 = uVar24;
                  }
                  *(ulong **)(lVar20 + (long)uStack_70) = puVar12;
                  puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
                  if ((uVar59 & 0x400) == 0) goto code_r0x00515e02;
code_r0x00515e5d:
                  uVar24 = *(ulong *)((long)uStack_60 +
                                     (ulong)*(ushort *)((long)uStack_60 + (ulong)uStack_4c + 8) * 8
                                     + (ulong)(uint)uStack_60[3]);
                }
                else {
                  if ((uVar59 & 0x400) != 0) goto code_r0x00515e5d;
code_r0x00515e02:
                  uVar24 = 0;
                }
                puVar16 = (ulong *)(uVar24 >> 0x20);
                uStack_70 = puVar16;
                goto code_r0x00515e9c;
              }
              puStack_68 = param_6;
              uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
              uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
              lVar20 = *(long *)((long)param_1 + uVar24);
              uStack_60 = param_5;
              if (lVar20 == lVar22) {
                uVar46 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                uVar54 = param_1[1];
                if ((uVar54 & 1) != 0) {
                  uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
                }
                if (uVar54 == 0) {
                  puStack_80 = (ulong *)&UNK_00516250;
                  uVar14 = _Znwm(uVar46);
                }
                else {
                  puStack_80 = (ulong *)&UNK_00516246;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar54,uVar46 + 7 & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar24) = uVar14;
                puStack_80 = (ulong *)&UNK_00516266;
                func_0x0099bda0(uVar14,lVar22,uVar46);
                lVar20 = *(long *)((long)param_1 + uVar24);
                puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
              }
              uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (ulong)uStack_4c);
              puVar12 = *(ulong **)(lVar20 + (long)uStack_70);
              if (puVar12 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar24 = param_1[1];
                if ((uVar24 & 1) != 0) {
                  uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                }
                if (uVar24 == 0) {
                  puStack_80 = (ulong *)&UNK_00516650;
                  puVar12 = (ulong *)_Znwm(0x10);
                  *puVar12 = 0;
                }
                else {
                  puStack_80 = (ulong *)&UNK_005162d6;
                  puVar12 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x10);
                  *puVar12 = uVar24;
                }
                *(ulong **)(lVar20 + (long)uStack_70) = puVar12;
                puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
                if ((uVar59 & 0x400) == 0) goto code_r0x005162a2;
code_r0x005162fd:
                uVar24 = *(ulong *)((long)uStack_60 +
                                   (ulong)*(ushort *)((long)uStack_60 + (ulong)uStack_4c + 8) * 8 +
                                   (ulong)(uint)uStack_60[3]);
              }
              else {
                if ((uVar59 & 0x400) != 0) goto code_r0x005162fd;
code_r0x005162a2:
                uVar24 = 0;
              }
              puVar16 = (ulong *)(uVar24 >> 0x20);
              uStack_70 = puVar16;
              goto code_r0x0051633c;
            }
            if ((uVar10 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00515cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar45 = (ulong *)(*(code *)param_5[6])();
              return puVar45;
            }

            _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar10 & 7) != 2);
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar10 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
          if (uVar10 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar60;
          }
          uVar59 = uVar59 >> 6;
          puStack_98 = puVar27;
          if ((uVar59 & 7) != 0) {
            if ((uVar59 & 7) != 2) {
              lVar22 = in_FS_OFFSET[5];
              uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
              uVar24 = (ulong)uVar59;
              uVar54 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar20 = *(long *)(*(long *)param_5[4] + uVar54);
              lVar57 = *(long *)((long)param_1 + uVar54);
              if (lVar57 == lVar20) {
                puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 +
                                                      (ulong)(uint)param_5[3] + 0x10);
                uVar24 = param_1[1];
                if ((uVar24 & 1) != 0) {
                  uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)(ulong)CONCAT24(uVar59,(uint)uStack_70);
                if (uVar24 == 0) {
                  puStack_88 = puVar45;
                  puStack_80 = param_3;
                  uVar14 = _Znwm(puStack_78);
                }
                else {
                  puStack_88 = puVar45;
                  puStack_80 = param_3;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar24,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar54) = uVar14;
                func_0x0099bda0(uVar14,lVar20,puStack_78);
                lVar57 = *(long *)((long)param_1 + uVar54);
                uVar24 = (ulong)uStack_70 >> 0x20;
                puVar45 = puStack_88;
                param_3 = puStack_80;
              }
              uVar10 = (uint)uVar24 & 0x600;
              puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar12);
              if (*(ulong **)(puVar17 + lVar57) ==
                  (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar54 = param_1[1];
                if ((uVar54 & 1) != 0) {
                  uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)CONCAT44((uint)uVar24,(uint)uStack_70);
                puStack_90 = puVar17;
                puStack_88 = puVar45;
                puStack_80 = param_3;
                if (uVar54 == 0) {
                  puStack_78 = param_1;
                  puVar27 = (ulong *)_Znwm(0x10);
                  *puVar27 = 0;
                }
                else {
                  puStack_78 = param_1;
                  puVar27 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x10);
                  *puVar27 = uVar54;
                }
                *(ulong **)(puStack_90 + lVar57) = puVar27;
                uVar24 = (ulong)uStack_70 & 0x40000000000;
                puVar45 = puStack_88;
                param_3 = puStack_80;
                puVar16 = uStack_60;
              }
              else {
                uVar24 = uVar24 & 0x400;
                puVar27 = *(ulong **)(puVar17 + lVar57);
                puVar16 = uStack_60;
              }
              uStack_60 = puVar27;
              if (uVar24 != 0) {
                uStack_60 = *(ulong **)
                             ((long)param_5 +
                             (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                             (ulong)(uint)param_5[3]);
                puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
                puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar10);
                puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                             (param_3);
                puVar16 = uStack_60;
                if (in_FS_OFFSET[5] == lVar22) {
                  return puVar45;
                }
code_r0x00516d58:
                uStack_60 = puVar16;
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar45;
              }
              bVar63 = uVar10 == 0x200;
              if (in_FS_OFFSET[5] != lVar22) goto code_r0x00516d58;
              lVar22 = in_FS_OFFSET[5];
              uVar24 = (ulong)(byte)*puVar45;
              if ((char)(byte)*puVar45 < '\0') {
                uStack_70 = (ulong *)&UNK_00517503;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                pbVar11 = auVar72._0_8_;
                if (pbVar11 == (byte *)0x0) {
code_r0x0051759d:
                  puVar45 = (ulong *)0x0;
                  goto code_r0x0051759f;
                }
                uVar24 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar11 = (byte *)((long)puVar45 + 1);
              }
              uVar54 = param_3[1];
              iVar31 = (int)uVar54 - (int)pbVar11;
              uVar10 = (uint)uVar24;
              if (iVar31 < (int)uVar10) {
                do {
                  uStack_70 = (ulong *)&UNK_00517531;
                  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                     (pbVar11,uVar54,uStack_60,bVar63);
                  if (lVar20 == 0) goto code_r0x0051759d;
                  iVar56 = (int)lVar20 - (int)param_3[1];
                  iVar26 = (int)uVar24 - iVar31;
                  if (iVar26 < 0x11) {
                    uStack_70 = (ulong *)&UNK_005175f1;
                    puVar18 = (undefined1 *)
                              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                        (&stack0xffffffffffffffa8 + iVar56,
                                         &stack0xffffffffffffffa8 + iVar26,uStack_60,bVar63);
                    puVar45 = (ulong *)0x0;
                    if (puVar18 == &stack0xffffffffffffffa8 + iVar26) {
                      puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                    }
                    goto code_r0x0051759f;
                  }
                  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051759d;
                  uStack_70 = (ulong *)&UNK_00517559;
                  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                  if (lVar20 == 0) goto code_r0x0051759d;
                  uVar10 = (int)uVar24 - (iVar31 + iVar56);
                  uVar24 = (ulong)uVar10;
                  pbVar11 = (byte *)(lVar20 + iVar56);
                  uVar54 = param_3[1];
                  iVar31 = (int)uVar54 - (int)pbVar11;
                } while (iVar31 < (int)uVar10);
              }
              uStack_70 = (ulong *)&UNK_0051758f;
              puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                           (pbVar11,pbVar11 + (int)uVar10,uStack_60,bVar63);
              puVar45 = (ulong *)0x0;
              if ((ulong *)(pbVar11 + (int)uVar10) == puVar27) {
                puVar45 = puVar27;
              }
code_r0x0051759f:
              if (in_FS_OFFSET[5] != lVar22) {
                uStack_70 = (ulong *)&UNK_00517612;
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar45;
              }
              return puVar45;
            }
            lVar22 = in_FS_OFFSET[5];
            uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
            uVar24 = (ulong)uVar59;
            uVar54 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar20 = *(long *)(*(long *)param_5[4] + uVar54);
            lVar57 = *(long *)((long)param_1 + uVar54);
            if (lVar57 == lVar20) {
              puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)(ulong)CONCAT24(uVar59,(uint)uStack_70);
              if (uVar24 == 0) {
                puStack_88 = puVar45;
                puStack_80 = param_3;
                uVar14 = _Znwm(puStack_78);
              }
              else {
                puStack_88 = puVar45;
                puStack_80 = param_3;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar24,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar54) = uVar14;
              func_0x0099bda0(uVar14,lVar20,puStack_78);
              lVar57 = *(long *)((long)param_1 + uVar54);
              uVar24 = (ulong)uStack_70 >> 0x20;
              puVar45 = puStack_88;
              param_3 = puStack_80;
            }
            uVar10 = (uint)uVar24 & 0x600;
            puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar12);
            if (*(ulong **)(puVar17 + lVar57) == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE
               ) {
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)CONCAT44((uint)uVar24,(uint)uStack_70);
              puStack_90 = puVar17;
              puStack_88 = puVar45;
              puStack_80 = param_3;
              if (uVar54 == 0) {
                puStack_78 = param_1;
                puVar27 = (ulong *)_Znwm(0x10);
                *puVar27 = 0;
              }
              else {
                puStack_78 = param_1;
                puVar27 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x10);
                *puVar27 = uVar54;
              }
              *(ulong **)(puStack_90 + lVar57) = puVar27;
              uVar24 = (ulong)uStack_70 & 0x40000000000;
              puVar45 = puStack_88;
              param_3 = puStack_80;
              puVar16 = uStack_60;
            }
            else {
              uVar24 = uVar24 & 0x400;
              puVar27 = *(ulong **)(puVar17 + lVar57);
              puVar16 = uStack_60;
            }
            uStack_60 = puVar27;
            if (uVar24 != 0) {
              uStack_60 = *(ulong **)
                           ((long)param_5 +
                           (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                           (ulong)(uint)param_5[3]);
              puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
              puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar10);
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
              puVar16 = uStack_60;
              if (in_FS_OFFSET[5] == lVar22) {
                return puVar45;
              }
code_r0x00516f98:
              uStack_60 = puVar16;
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar45;
            }
            bVar63 = uVar10 == 0x200;
            if (in_FS_OFFSET[5] != lVar22) goto code_r0x00516f98;
            lVar22 = in_FS_OFFSET[5];
            uVar24 = (ulong)(byte)*puVar45;
            if ((char)(byte)*puVar45 < '\0') {
              uStack_70 = (ulong *)&UNK_00517a63;
              auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
              pbVar11 = auVar72._0_8_;
              if (pbVar11 == (byte *)0x0) {
code_r0x00517afd:
                puVar45 = (ulong *)0x0;
                goto code_r0x00517aff;
              }
              uVar24 = auVar72._8_8_ & 0xffffffff;
            }
            else {
              pbVar11 = (byte *)((long)puVar45 + 1);
            }
            uVar54 = param_3[1];
            iVar31 = (int)uVar54 - (int)pbVar11;
            uVar10 = (uint)uVar24;
            if (iVar31 < (int)uVar10) {
              do {
                uStack_70 = (ulong *)&UNK_00517a91;
                lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                   (pbVar11,uVar54,uStack_60,bVar63);
                if (lVar20 == 0) goto code_r0x00517afd;
                iVar56 = (int)lVar20 - (int)param_3[1];
                iVar26 = (int)uVar24 - iVar31;
                if (iVar26 < 0x11) {
                  uStack_70 = (ulong *)&UNK_00517b51;
                  puVar18 = (undefined1 *)
                            _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                      (&stack0xffffffffffffffa8 + iVar56,
                                       &stack0xffffffffffffffa8 + iVar26,uStack_60,bVar63);
                  puVar45 = (ulong *)0x0;
                  if (puVar18 == &stack0xffffffffffffffa8 + iVar26) {
                    puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                  }
                  goto code_r0x00517aff;
                }
                if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00517afd;
                uStack_70 = (ulong *)&UNK_00517ab9;
                lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                if (lVar20 == 0) goto code_r0x00517afd;
                uVar10 = (int)uVar24 - (iVar31 + iVar56);
                uVar24 = (ulong)uVar10;
                pbVar11 = (byte *)(lVar20 + iVar56);
                uVar54 = param_3[1];
                iVar31 = (int)uVar54 - (int)pbVar11;
              } while (iVar31 < (int)uVar10);
            }
            uStack_70 = (ulong *)&UNK_00517aef;
            puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                         (pbVar11,pbVar11 + (int)uVar10,uStack_60,bVar63);
            puVar45 = (ulong *)0x0;
            if ((ulong *)(pbVar11 + (int)uVar10) == puVar27) {
              puVar45 = puVar27;
            }
code_r0x00517aff:
            if (in_FS_OFFSET[5] != lVar22) {
              uStack_70 = (ulong *)&UNK_00517b72;
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar45;
            }
            return puVar45;
          }
          lVar22 = in_FS_OFFSET[5];
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar24 = (ulong)uVar59;
          uVar54 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar20 = *(long *)(*(long *)param_5[4] + uVar54);
          lVar57 = *(long *)((long)param_1 + uVar54);
          if (lVar57 == lVar20) {
            puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar24 = param_1[1];
            if ((uVar24 & 1) != 0) {
              uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)(ulong)CONCAT24(uVar59,(uint)uStack_70);
            if (uVar24 == 0) {
              puStack_88 = puVar45;
              puStack_80 = param_3;
              uVar14 = _Znwm(puStack_78);
            }
            else {
              puStack_88 = puVar45;
              puStack_80 = param_3;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar24,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar54) = uVar14;
            func_0x0099bda0(uVar14,lVar20,puStack_78);
            lVar57 = *(long *)((long)param_1 + uVar54);
            uVar24 = (ulong)uStack_70 >> 0x20;
            puVar45 = puStack_88;
            param_3 = puStack_80;
          }
          uVar10 = (uint)uVar24 & 0x600;
          puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar12);
          if (*(ulong **)(puVar17 + lVar57) == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE)
          {
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)CONCAT44((uint)uVar24,(uint)uStack_70);
            puStack_90 = puVar17;
            puStack_88 = puVar45;
            puStack_80 = param_3;
            if (uVar54 == 0) {
              puStack_78 = param_1;
              puVar27 = (ulong *)_Znwm(0x10);
              *puVar27 = 0;
            }
            else {
              puStack_78 = param_1;
              puVar27 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x10);
              *puVar27 = uVar54;
            }
            *(ulong **)(puStack_90 + lVar57) = puVar27;
            uVar24 = (ulong)uStack_70 & 0x40000000000;
            puVar45 = puStack_88;
            param_3 = puStack_80;
            puVar16 = uStack_60;
          }
          else {
            uVar24 = uVar24 & 0x400;
            puVar27 = *(ulong **)(puVar17 + lVar57);
            puVar16 = uStack_60;
          }
          uStack_60 = puVar27;
          if (uVar24 != 0) {
            uStack_60 = *(ulong **)
                         ((long)param_5 +
                         (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                         (ulong)(uint)param_5[3]);
            puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
            puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar10);
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                         (param_3);
            puVar16 = uStack_60;
            if (in_FS_OFFSET[5] == lVar22) {
              return puVar45;
            }
code_r0x005171d8:
            uStack_60 = puVar16;
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar45;
          }
          bVar63 = uVar10 == 0x200;
          if (in_FS_OFFSET[5] != lVar22) goto code_r0x005171d8;
          lVar22 = in_FS_OFFSET[5];
          uVar24 = (ulong)(byte)*puVar45;
          if ((char)(byte)*puVar45 < '\0') {
            uStack_70 = (ulong *)&UNK_00517fd3;
            auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
            pbVar11 = auVar72._0_8_;
            if (pbVar11 == (byte *)0x0) {
code_r0x0051806d:
              puVar45 = (ulong *)0x0;
              goto code_r0x0051806f;
            }
            uVar24 = auVar72._8_8_ & 0xffffffff;
          }
          else {
            pbVar11 = (byte *)((long)puVar45 + 1);
          }
          uVar54 = param_3[1];
          iVar31 = (int)uVar54 - (int)pbVar11;
          uVar10 = (uint)uVar24;
          if (iVar31 < (int)uVar10) {
            do {
              uStack_70 = (ulong *)&UNK_00518001;
              lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                 (pbVar11,uVar54,uStack_60,bVar63);
              if (lVar20 == 0) goto code_r0x0051806d;
              iVar56 = (int)lVar20 - (int)param_3[1];
              iVar26 = (int)uVar24 - iVar31;
              if (iVar26 < 0x11) {
                uStack_70 = (ulong *)&UNK_005180c1;
                puVar18 = (undefined1 *)
                          _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                    (&stack0xffffffffffffffa8 + iVar56,
                                     &stack0xffffffffffffffa8 + iVar26,uStack_60,bVar63);
                puVar45 = (ulong *)0x0;
                if (puVar18 == &stack0xffffffffffffffa8 + iVar26) {
                  puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                }
                goto code_r0x0051806f;
              }
              if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051806d;
              uStack_70 = (ulong *)&UNK_00518029;
              lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
              if (lVar20 == 0) goto code_r0x0051806d;
              uVar10 = (int)uVar24 - (iVar31 + iVar56);
              uVar24 = (ulong)uVar10;
              pbVar11 = (byte *)(lVar20 + iVar56);
              uVar54 = param_3[1];
              iVar31 = (int)uVar54 - (int)pbVar11;
            } while (iVar31 < (int)uVar10);
          }
          uStack_70 = (ulong *)&UNK_0051805f;
          puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                       (pbVar11,pbVar11 + (int)uVar10,uStack_60,bVar63);
          puVar45 = (ulong *)0x0;
          if ((ulong *)(pbVar11 + (int)uVar10) == puVar27) {
            puVar45 = puVar27;
          }
code_r0x0051806f:
          if (in_FS_OFFSET[5] != lVar22) {
            uStack_70 = (ulong *)&UNK_005180e2;
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar45;
          }
          return puVar45;
        }
        if ((uVar24 & 7) != 0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          puVar58 = puVar45;
          goto code_r0x0050f155;
        }
        uVar54 = (ulong)(char)(byte)*puVar45;
        if ((long)uVar54 < 0) {
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if ((long)uVar46 < 0) {
            uVar51 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
            if ((long)uVar51 < 0) {
              uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
              if ((long)uVar46 < 0) {
                uVar51 = uVar51 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
                if ((long)uVar51 < 0) {
                  uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU
                                    );
                  if ((long)uVar46 < 0) {
                    uVar51 = uVar51 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a |
                                      0x3ffffffffffU);
                    if ((long)uVar51 < 0) {
                      uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                        0x1ffffffffffffU);
                      if ((long)uVar46 < 0) {
                        uVar51 = uVar51 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
                        if ((long)uVar51 < 0) {
                          puVar58 = (ulong *)((long)puVar45 + 10);
                          bVar3 = *(byte *)((long)puVar45 + 9);
                          if (bVar3 != 1) {
                            if ((char)bVar3 < '\0') goto code_r0x005013a0;
                            if ((bVar3 & 1) == 0) {
                              uVar51 = uVar51 ^ 0x8000000000000000;
                            }
                          }
                        }
                        else {
                          puVar58 = (ulong *)((long)puVar45 + 9);
                        }
                      }
                      else {
                        puVar58 = puVar45 + 1;
                      }
                    }
                    else {
                      puVar58 = (ulong *)((long)puVar45 + 7);
                    }
                  }
                  else {
                    puVar58 = (ulong *)((long)puVar45 + 6);
                  }
                }
                else {
                  puVar58 = (ulong *)((long)puVar45 + 5);
                }
              }
              else {
                puVar58 = (ulong *)((long)puVar45 + 4);
              }
            }
            else {
              puVar58 = (ulong *)((long)puVar45 + 3);
            }
            uVar46 = uVar46 & uVar51;
          }
          else {
            puVar58 = (ulong *)((long)puVar45 + 2);
          }
          uVar54 = uVar54 & uVar46;
        }
        else {
          puVar58 = (ulong *)((long)puVar45 + 1);
        }
        puVar61 = (uint *)((long)puVar12 + (long)param_5);
        uVar50 = uVar59 & 0x600;
        uStack_60 = (ulong *)((ulong)CONCAT24(uVar59,(undefined4)uStack_60) & 0x1c0ffffffff);
        uVar10 = (uint)uVar54;
        if ((uVar59 & 0x1c0) == 0xc0) {
          if (uVar50 == 0x200) {
            uVar54 = uVar54 >> 1 ^ -(ulong)(uVar10 & 1);
          }
        }
        else if ((uVar59 & 0x1c0) == 0x80) {
          if ((uVar59 & 0x400) != 0) {
            puVar12 = *(ulong **)
                       ((long)param_5 + (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
            if (uVar50 == 0x600) {
              puVar16 = puVar12;
              if (((int)puVar12 <= (int)uVar10) &&
                 (puVar16 = (ulong *)((ulong)puVar12 >> 0x20),
                 (int)uVar10 <= (int)((ulong)puVar12 >> 0x20))) goto code_r0x0050eff5;
            }
            else {
              uStack_70 = (ulong *)&UNK_0050f18d;
              puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                           (uVar54 & 0xffffffff,puVar12);
              if ((char)puVar16 != '\0') goto code_r0x0050eff5;
            }
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
          if (uVar50 == 0x200) {
            uVar54 = (ulong)(int)(uVar10 >> 1 ^ -(uVar10 & 1));
          }
        }
code_r0x0050eff5:
        if (uVar55 == 0x30) {
          uStack_70 = (ulong *)&UNK_0050f03c;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar61,(uVar24 & 0xfffffff8) >> 3,param_5,param_1);
        }
        else if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
        lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
        lVar20 = *(long *)((long)param_1 + uVar24);
        if (lVar20 == lVar22) {
          uVar51 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
          uVar46 = param_1[1];
          if ((uVar46 & 1) != 0) {
            uVar46 = *(ulong *)(uVar46 & 0xfffffffffffffffe);
          }
          if (uVar46 == 0) {
            uStack_70 = (ulong *)&UNK_0050f0b4;
            uVar14 = _Znwm(uVar51);
          }
          else {
            uStack_70 = (ulong *)&UNK_0050f0aa;
            uVar14 = _ZN6google8protobuf5Arena8AllocateEm(uVar46,uVar51 + 7 & 0xfffffffffffffff8);
          }
          *(undefined8 *)((long)param_1 + uVar24) = uVar14;
          uStack_70 = (ulong *)&UNK_0050f0c6;
          func_0x0099bda0(uVar14,lVar22,uVar51);
          lVar20 = *(long *)((long)param_1 + uVar24);
        }
        if (uStack_60._4_4_ == 0xc0) {
          *(ulong *)(lVar20 + (ulong)*puVar61) = uVar54;
          puVar45 = (ulong *)*param_3;
        }
        else if (uStack_60._4_4_ == 0x80) {
          *(int *)(lVar20 + (ulong)*puVar61) = (int)uVar54;
          puVar45 = (ulong *)*param_3;
        }
        else {
          *(bool *)(lVar20 + (ulong)*puVar61) = uVar54 != 0;
          puVar45 = (ulong *)*param_3;
        }
        if (puVar45 <= puVar58) {
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar60;
          }
          return puVar58;
        }
        uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar58 & 0xfffffff8);
        puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^ (ulong)(ushort)*puVar58)
        ;
        UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
code_r0x0050f155:
                    /* WARNING: Could not recover jumptable at 0x0050f163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar58,param_3,puVar27);
        return puVar45;
      case 10:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xb:
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 == 0x20) {
          do {
            uVar25 = uVar10 & 7;
            if (uVar25 != 2) {
              uVar44 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
              if (uVar44 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar44 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar44 & 0x1f);
              }
              uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
              lVar20 = *(long *)((long)param_1 + uVar24);
              if (lVar20 == lVar22) {
                uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10
                                                     );
                uVar54 = param_1[1];
                if ((uVar54 & 1) != 0) {
                  uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
                }
                if (uVar54 == 0) {
                  uStack_70 = (ulong *)&UNK_005182ff;
                  uVar14 = _Znwm(uStack_60);
                }
                else {
                  uStack_70 = (ulong *)&UNK_005182f5;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar54,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar24) = uVar14;
                uStack_70 = (ulong *)&UNK_00518317;
                func_0x0099bda0(uVar14,lVar22,uStack_60);
                lVar20 = *(long *)((long)param_1 + uVar24);
              }
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar12) & 0x1c0) == 0xc0) {
                if (uVar25 == 1) {
                  uVar25 = *(uint *)((long)param_5 + (long)puVar12);
                  puVar27 = *(ulong **)(lVar20 + (ulong)uVar25);
                  if (puVar27 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                    uVar24 = param_1[1];
                    if ((uVar24 & 1) != 0) {
                      uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                    }
                    if (uVar24 == 0) {
                      uStack_70 = (ulong *)&UNK_005186b8;
                      puVar27 = (ulong *)_Znwm(0x10);
                      *puVar27 = 0;
                    }
                    else {
                      uStack_70 = (ulong *)&UNK_00518388;
                      puVar27 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x10);
                      *puVar27 = uVar24;
                    }
                    *(ulong **)(lVar20 + (ulong)uVar25) = puVar27;
                  }
                  goto code_r0x005183c3;
                }
              }
              else if (uVar25 == 5) {
                uVar25 = *(uint *)((long)param_5 + (long)puVar12);
                puVar27 = *(ulong **)(lVar20 + (ulong)uVar25);
                if (puVar27 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar24 = param_1[1];
                  if ((uVar24 & 1) != 0) {
                    uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                  }
                  if (uVar24 == 0) {
                    uStack_70 = (ulong *)&UNK_005186de;
                    puVar27 = (ulong *)_Znwm(0x10);
                    *puVar27 = 0;
                  }
                  else {
                    uStack_70 = (ulong *)&UNK_005184e4;
                    puVar27 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x10);
                    *puVar27 = uVar24;
                  }
                  *(ulong **)(lVar20 + (ulong)uVar25) = puVar27;
                }
                goto code_r0x00518523;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              goto code_r0x00518636;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar10 & 7) != 2);
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar10 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
          if (uVar10 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
          }
          uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
          lVar20 = *(long *)((long)param_1 + uVar24);
          if (lVar20 == lVar22) {
            uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            if (uVar54 == 0) {
              uStack_70 = (ulong *)&UNK_0050f625;
              uVar14 = _Znwm(uStack_60);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050f5ff;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar54,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar24) = uVar14;
            uStack_70 = (ulong *)&UNK_0050f63c;
            func_0x0099bda0(uVar14,lVar22,uStack_60);
            lVar20 = *(long *)((long)param_1 + uVar24);
          }
          bVar3 = (byte)*puVar45;
          if ((char)bVar3 < '\0') {
            uStack_70 = (ulong *)&UNK_0050f66b;
            auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
          }
          else {
            auVar72[8] = bVar3;
            auVar72._0_8_ = (byte *)((long)puVar45 + 1);
            auVar72._9_7_ = 0;
          }
          uVar24 = auVar72._8_8_;
          uVar14 = auVar72._0_8_;
          uVar54 = (ulong)*(uint *)((long)param_5 + (long)puVar12);
          if ((uVar59 & 0x1c0) == 0xc0) {
            if (*(undefined1 **)(lVar20 + uVar54) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar46 = param_1[1];
              if ((uVar46 & 1) != 0) {
                uVar46 = *(ulong *)(uVar46 & 0xfffffffffffffffe);
              }
              if (uVar46 == 0) {
                uStack_70 = (ulong *)&UNK_0050f7e3;
                puVar45 = (ulong *)_Znwm(0x10);
                *puVar45 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f6cd;
                puVar45 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar46,0x10);
                *puVar45 = uVar46;
              }
              *(ulong **)(lVar20 + uVar54) = puVar45;
              uVar24 = uVar24 & 0xffffffff;
            }
            uStack_70 = (ulong *)&UNK_0050f6ed;
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar14,uVar24);
          }
          else {
            if (*(undefined1 **)(lVar20 + uVar54) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar46 = param_1[1];
              if ((uVar46 & 1) != 0) {
                uVar46 = *(ulong *)(uVar46 & 0xfffffffffffffffe);
              }
              if (uVar46 == 0) {
                uStack_70 = (ulong *)&UNK_0050f808;
                puVar45 = (ulong *)_Znwm(0x10,uVar14);
                *puVar45 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f728;
                puVar45 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar46,0x10);
                *puVar45 = uVar46;
              }
              *(ulong **)(lVar20 + uVar54) = puVar45;
              uVar24 = uVar24 & 0xffffffff;
            }
            uStack_70 = (ulong *)&UNK_0050f748;
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar14,uVar24);
          }
          if (puVar45 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050f78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                         (param_1,puVar45,param_3,
                                          *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar45,param_5,param_6);
            return puVar45;
          }
          goto code_r0x005013a0;
        }
        uVar59 = uVar59 & 0x1c0;
        if (uVar59 == 0xc0) {
          if ((uVar10 & 7) == 1) {
code_r0x0050f3d8:
            puVar61 = (uint *)((long)puVar12 + (long)param_5);
            if (uVar55 == 0x30) {
              uStack_70 = (ulong *)&UNK_0050f420;
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar61,uVar10 >> 3,param_5,param_1);
            }
            else if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
            }
            uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
            lVar20 = *(long *)((long)param_1 + uVar24);
            if (lVar20 == lVar22) {
              uVar10 = *(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_0050f496;
                uStack_60 = param_5;
                uVar14 = _Znwm((ulong)uVar10);
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f48c;
                uStack_60 = param_5;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar54,(ulong)uVar10 + 7 & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar24) = uVar14;
              uStack_70 = (ulong *)&UNK_0050f4ad;
              func_0x0099bda0(uVar14,lVar22,uVar10);
              lVar20 = *(long *)((long)param_1 + uVar24);
              param_5 = uStack_60;
            }
            if (uVar59 == 0xc0) {
              *(ulong *)(lVar20 + (ulong)*puVar61) = *puVar45;
              lVar22 = 8;
            }
            else {
              *(uint *)(lVar20 + (ulong)*puVar61) = (uint)*puVar45;
              lVar22 = 4;
            }
            puVar45 = (ulong *)((long)puVar45 + lVar22);
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050f511;
          }
        }
        else if ((uVar10 & 7) == 5) goto code_r0x0050f3d8;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
code_r0x0050f511:
                    /* WARNING: Could not recover jumptable at 0x0050f51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar45;
      case 0xc:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xd:
        if ((uVar10 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050f87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*(code *)param_5[6])();
          return puVar45;
        }
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 == 0x20) {
          uStack_60 = (ulong *)CONCAT44(uVar10,(undefined4)uStack_60);
          if ((uVar10 & 7) != 2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            goto code_r0x005188d6;
          }
          puVar61 = (uint *)((long)param_5 + (long)puVar12);
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar10 = puVar61[1];
          if (uVar10 != 0xffffffff) {
            puVar1 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
          }
          uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
          lVar20 = *(long *)((long)param_1 + uVar24);
          puStack_78 = puVar12;
          puStack_68 = param_6;
          if (lVar20 == lVar22) {
            uStack_70 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            if (uVar54 == 0) {
              puStack_80 = (ulong *)&UNK_005187cd;
              uVar14 = _Znwm(uStack_70);
            }
            else {
              puStack_80 = (ulong *)&UNK_005187b4;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar54,(ulong)((long)uStack_70 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar24) = uVar14;
            puStack_80 = (ulong *)&UNK_005187e4;
            func_0x0099bda0(uVar14,lVar22,uStack_70);
            lVar20 = *(long *)((long)param_1 + uVar24);
          }
          puVar27 = puVar45;
          if ((uVar59 & 0x1c0) == 0x100) {
            uVar10 = *puVar61;
            puVar12 = *(ulong **)(lVar20 + (ulong)uVar10);
            if (puVar12 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              if (uVar24 == 0) {
                puStack_80 = (ulong *)&UNK_00518cef;
                puVar12 = (ulong *)_Znwm(0x18);
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
              }
              else {
                puStack_80 = (ulong *)&UNK_00518843;
                puVar12 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x18);
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = uVar24;
              }
              *(ulong **)(lVar20 + (ulong)uVar10) = puVar12;
            }
            puVar27 = (ulong *)puVar12[2];
            uVar59 = uVar59 & 0x600;
            if ((puVar27 != (ulong *)0x0) && (*(ulong *)(*in_FS_OFFSET + -0x118) == *puVar27)) {
              uVar24 = *puVar12;
              if ((uVar24 & 1) == 0) {
                uVar10 = (uint)(uVar24 != 0);
              }
              else {
                uVar10 = *(uint *)(uVar24 + 3);
              }
              if (uVar10 == (uint)puVar12[1]) {
                lVar22 = *(long *)(*in_FS_OFFSET + -0x110);
                uStack_70 = puVar27;
                do {
                  uVar24 = (ulong)(byte)*puVar45;
                  if ((char)(byte)*puVar45 < '\0') {
                    puStack_80 = (ulong *)&UNK_0051892b;
                    auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                    pbVar11 = auVar72._0_8_;
                    param_6 = puStack_68;
                    if (pbVar11 == (byte *)0x0) goto code_r0x005013a0;
                    uVar24 = auVar72._8_8_ & 0xffffffff;
                  }
                  else {
                    pbVar11 = (byte *)((long)puVar45 + 1);
                  }
                  lVar20 = *(long *)(lVar22 + 0x48);
                  if (lVar20 == 0) {
                    puStack_80 = (ulong *)&UNK_00518ac0;
                    pbVar53 = (byte *)_ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
                                                (lVar22);
                  }
                  else {
                    *(long *)(lVar22 + 0x48) = lVar20 + -0x18;
                    pbVar53 = (byte *)(*(long *)(lVar22 + 0x38) + lVar20 + -8);
                  }
                  pbVar53[0] = 0;
                  pbVar53[1] = 0;
                  pbVar53[2] = 0;
                  pbVar53[3] = 0;
                  pbVar53[4] = 0;
                  pbVar53[5] = 0;
                  pbVar53[6] = 0;
                  pbVar53[7] = 0;
                  pbVar53[8] = 0;
                  pbVar53[9] = 0;
                  pbVar53[10] = 0;
                  pbVar53[0xb] = 0;
                  pbVar53[0xc] = 0;
                  pbVar53[0xd] = 0;
                  pbVar53[0xe] = 0;
                  pbVar53[0xf] = 0;
                  pbVar53[0x10] = 0;
                  pbVar53[0x11] = 0;
                  pbVar53[0x12] = 0;
                  pbVar53[0x13] = 0;
                  pbVar53[0x14] = 0;
                  pbVar53[0x15] = 0;
                  pbVar53[0x16] = 0;
                  pbVar53[0x17] = 0;
                  iVar31 = (int)puVar12[1];
                  uVar54 = *puVar12;
                  if ((uVar54 & 1) == 0) {
                    if (iVar31 == 1) {
code_r0x00518acc:
                      puStack_80 = (ulong *)&UNK_00518add;
                      puVar19 = (undefined8 *)
                                _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                          (puVar12,1,uStack_70);
                      *puVar19 = pbVar53;
                      goto code_r0x0051899e;
                    }
                    *puVar12 = (ulong)pbVar53;
                  }
                  else {
                    if (iVar31 == *(int *)(uVar54 - 1)) goto code_r0x00518acc;
                    *(byte **)(uVar54 + 7 + (long)iVar31 * 8) = pbVar53;
code_r0x0051899e:
                    *(int *)(*puVar12 + 3) = *(int *)(*puVar12 + 3) + 1;
                  }
                  *(int *)(puVar12 + 1) = (int)puVar12[1] + 1;
                  puStack_80 = (ulong *)&UNK_005189b8;
                  cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                    (param_3,uVar24,pbVar11);
                  if (cVar9 == '\0') {
                    puStack_80 = (ulong *)&UNK_005189f1;
                    puVar27 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                                 (param_3,pbVar11,uVar24,pbVar53);
                    param_6 = puStack_68;
                    if (puVar27 == (ulong *)0x0) goto code_r0x005013a0;
                  }
                  else {
                    lVar20 = (long)(int)uVar24;
                    puStack_80 = (ulong *)&UNK_005189ca;
                    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                              (pbVar53,lVar20);
                    if ((*pbVar53 & 1) == 0) {
                      pbVar53 = pbVar53 + 1;
                    }
                    else {
                      pbVar53 = *(byte **)(pbVar53 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_00518a25;
                    func_0x0099bda0(pbVar53,pbVar11,lVar20);
                    puVar27 = (ulong *)(pbVar11 + lVar20);
                  }
                  if (uVar59 == 0x400) {
                    puVar45 = (ulong *)((*puVar12 - 1) + (long)(int)puVar12[1] * 8);
                    if ((*puVar12 & 1) == 0) {
                      puVar45 = puVar12;
                    }
                    pbVar11 = (byte *)*puVar45;
                    if ((*pbVar11 & 1) == 0) {
                      uVar24 = (ulong)(*pbVar11 >> 1);
                      pbVar11 = pbVar11 + 1;
                    }
                    else {
                      uVar24 = *(ulong *)(pbVar11 + 8);
                      pbVar11 = *(byte **)(pbVar11 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_00518a6a;
                    iVar31 = utf8_range_IsValid(pbVar11,uVar24);
                    if (iVar31 == 0) {
                      pbVar11 = (byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
                      uVar24 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
                      pbVar53 = pbVar11 + uVar24;
                      uVar54 = ((long)((long)puStack_78 - (ulong)(uint)param_5[2]) >> 2) *
                               -0x5555555555555555;
                      uVar46 = uVar54 + 1;
                      if (uVar46 != 0) {
                        pbVar30 = pbVar11;
                        for (uVar51 = uVar46 & 7; uVar51 != 0; uVar51 = uVar51 - 1) {
                          uVar24 = uVar24 + *pbVar30;
                          pbVar30 = pbVar30 + 1;
                        }
                        if (6 < uVar54) {
                          do {
                            uVar24 = (ulong)pbVar30[7] + (ulong)pbVar30[6] +
                                     (ulong)pbVar30[5] + (ulong)pbVar30[4] + (ulong)pbVar30[3] +
                                     (ulong)pbVar30[2] + (ulong)pbVar30[1] + *pbVar30 + uVar24;
                            pbVar30 = pbVar30 + 8;
                          } while (pbVar30 != pbVar11 + uVar46);
                        }
                      }
                      puStack_80 = (ulong *)&UNK_00518bce;
                      _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                                (pbVar53,(long)(char)*(byte *)((long)param_5 +
                                                              (ulong)*(ushort *)
                                                                      ((long)param_5 + 0x16) * 8 +
                                                              (ulong)(uint)param_5[3]),
                                 pbVar11 + uVar24,(long)(char)pbVar11[uVar46],&UNK_00178f3f,0);
                      param_6 = puStack_68;
                      goto code_r0x005013a0;
                    }
                  }
                  if ((ulong *)*param_3 <= puVar27) goto code_r0x00518ca0;
                  bVar3 = (byte)*puVar27;
                  auVar100[8] = bVar3;
                  auVar100._0_8_ = (byte *)((long)puVar27 + 1);
                  auVar100._9_3_ = 0;
                  if ((char)bVar3 < '\0') {
                    bVar2 = *(byte *)((long)puVar27 + 1);
                    iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                    if ((char)bVar2 < '\0') {
                      puStack_80 = (ulong *)&UNK_00518aac;
                      auVar100 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar27,iVar31);
                    }
                    else {
                      auVar100._8_4_ = iVar31;
                      auVar100._0_8_ = (ushort *)((long)puVar27 + 2);
                    }
                  }
                  puVar45 = auVar100._0_8_;
                } while (auVar100._8_4_ == uStack_60._4_4_);
                goto code_r0x005188a0;
              }
            }
            do {
              puStack_80 = (ulong *)&UNK_00518c1c;
              pbVar11 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                          (puVar12,puVar12[2]);
              puStack_80 = (ulong *)&UNK_00518c2d;
              puVar27 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                           (pbVar11,puVar45,param_3);
              param_6 = puStack_68;
              if (puVar27 == (ulong *)0x0) goto code_r0x005013a0;
              bVar63 = (*pbVar11 & 1) != 0;
              pbVar53 = pbVar11 + 1;
              if (bVar63) {
                pbVar53 = *(byte **)(pbVar11 + 0x10);
              }
              uVar24 = (ulong)(*pbVar11 >> 1);
              if (bVar63) {
                uVar24 = *(ulong *)(pbVar11 + 8);
              }
              puStack_80 = (ulong *)&UNK_00518c60;
              cVar9 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                (pbVar53,uVar24,param_5,puVar61,uVar59);
              param_6 = puStack_68;
              if (cVar9 == '\0') goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar27) goto code_r0x00518ca0;
              bVar3 = (byte)*puVar27;
              auVar101[8] = bVar3;
              auVar101._0_8_ = (byte *)((long)puVar27 + 1);
              auVar101._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar27 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  puStack_80 = (ulong *)&UNK_00518bfd;
                  auVar101 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar27,iVar31);
                }
                else {
                  auVar101._8_4_ = iVar31;
                  auVar101._0_8_ = (ushort *)((long)puVar27 + 2);
                }
              }
              puVar45 = auVar101._0_8_;
            } while (auVar101._8_4_ == uStack_60._4_4_);
          }
code_r0x005188a0:
          puVar45 = puVar27;
          puVar27 = puVar45;
          if ((ulong *)*param_3 <= puVar45) {
code_r0x00518ca0:
            if ((ushort)*param_5 != 0) {
              puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
              *puVar61 = *puVar61 | (uint)puStack_68;
            }
            return puVar27;
          }
          uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
          puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                             (ulong)(ushort)*puVar45);
          UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
          param_6 = puStack_68;
code_r0x005188d6:
                    /* WARNING: Could not recover jumptable at 0x005188e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
        puVar27 = (ulong *)((long)param_5 + (long)puVar12);
        if (uVar55 == 0x10) {
          puVar61 = (uint *)((long)param_1 + (ulong)(*(uint *)((long)puVar27 + 4) >> 5) * 4);
          *puVar61 = *puVar61 | 1 << ((byte)*(uint *)((long)puVar27 + 4) & 0x1f);
        }
        else if (uVar55 == 0x30) {
          puStack_80 = (ulong *)&UNK_0050f8d1;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar27,uVar10 >> 3,param_5,param_1);
        }
        uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
        lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
        lVar20 = *(long *)((long)param_1 + uVar24);
        if (lVar20 == lVar22) {
          uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
          uVar54 = param_1[1];
          if ((uVar54 & 1) != 0) {
            uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
          }
          puStack_78 = puVar45;
          puStack_68 = puVar27;
          if (uVar54 == 0) {
            puStack_80 = (ulong *)&UNK_0050f951;
            uStack_70 = puVar12;
            uVar14 = _Znwm(uStack_60);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f947;
            uStack_70 = puVar12;
            uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                               (uVar54,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
          }
          *(undefined8 *)((long)param_1 + uVar24) = uVar14;
          puStack_80 = (ulong *)&UNK_0050f968;
          func_0x0099bda0(uVar14,lVar22,uStack_60);
          lVar20 = *(long *)((long)param_1 + uVar24);
          puVar12 = uStack_70;
          puVar45 = puStack_78;
          puVar27 = puStack_68;
        }
        uVar24 = (ulong)(uint)*puVar27;
        if ((uVar59 & 0x1c0) == 0x140) {
          uVar54 = param_1[1];
          if ((uVar54 & 1) != 0) {
            uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
          }
          puVar27 = (ulong *)(lVar20 + uVar24);
          bVar3 = (byte)*puVar45;
          if ((char)bVar3 < '\0') {
            puStack_80 = (ulong *)&UNK_0050fac4;
            auVar78 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
            if (auVar78._0_8_ != 0) goto code_r0x0050fad9;
            puVar45 = (ulong *)0x0;
          }
          else {
            auVar78[8] = bVar3;
            auVar78._0_8_ = (byte *)((long)puVar45 + 1);
            auVar78._9_3_ = 0;
code_r0x0050fad9:
            iVar31 = auVar78._8_4_;
            lVar22 = auVar78._0_8_;
            if ((int)(((uint)param_3[1] - auVar78._0_4_) + 0x10) < iVar31) {
              puStack_80 = (ulong *)&UNK_0050faf8;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar22,iVar31,puVar27,uVar54);
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fb1a;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar27,lVar22,(long)iVar31,uVar54,7);
              puVar45 = (ulong *)(lVar22 + iVar31);
            }
          }
          uVar24 = *puVar27;
          if ((uVar24 & 2) == 0) {
            if ((uVar24 & 1) == 0) {
              uVar10 = (uint)(uVar24 >> 2) & 0x3f;
              uVar24 = (long)puVar27 + 1;
            }
            else {
              uVar10 = *(uint *)(uVar24 + 7);
              uVar24 = *(ulong *)(uVar24 - 1);
            }
          }
          else {
            uVar10 = (uint)*(byte *)(uVar24 - 2);
          }
          if ((uVar59 & 0x600) == 0x400) {
            puStack_80 = (ulong *)&UNK_0050fcb5;
            iVar31 = utf8_range_IsValid(uVar24,uVar10);
            if (iVar31 == 0) {
              pbVar11 = (byte *)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                (ulong)(uint)param_5[3]);
              uVar54 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
              lVar22 = (long)(char)*(byte *)((long)param_5 +
                                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                            (ulong)(uint)param_5[3]);
              pbVar53 = pbVar11 + uVar54;
              uVar46 = ((long)((long)puVar12 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
              uVar24 = uVar46 + 1;
              pbVar30 = pbVar11 + uVar24;
              if (uVar24 != 0) {
                pbVar28 = pbVar11;
                for (uVar24 = uVar24 & 7; uVar24 != 0; uVar24 = uVar24 - 1) {
                  uVar54 = uVar54 + *pbVar28;
                  pbVar28 = pbVar28 + 1;
                }
                if (6 < uVar46) {
                  do {
                    uVar54 = (ulong)pbVar28[7] + (ulong)pbVar28[6] +
                             (ulong)pbVar28[5] + (ulong)pbVar28[4] + (ulong)pbVar28[3] +
                             (ulong)pbVar28[2] + (ulong)pbVar28[1] + *pbVar28 + uVar54;
                    pbVar28 = pbVar28 + 8;
                  } while (pbVar28 != pbVar30);
                }
              }
              goto code_r0x0050fdd9;
            }
          }
          if (puVar45 != (ulong *)0x0) {
code_r0x0050fcd7:
            if ((ulong *)*param_3 <= puVar45) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050fd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                         (param_1,puVar45,param_3,
                                          *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar45);
            return puVar45;
          }
        }
        else {
          if ((uVar59 & 0x1c0) == 0x80) {
            if (uVar55 == 0x30) {
              lVar20 = *(long *)((long)param_1 + uVar24);
            }
            else {
              lVar20 = lVar20 + uVar24;
            }
            bVar3 = (byte)*puVar45;
            if ((char)bVar3 < '\0') {
              puStack_80 = (ulong *)&UNK_0050fa10;
              auVar77 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
              if (auVar77._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar77[8] = bVar3;
              auVar77._0_8_ = (byte *)((long)puVar45 + 1);
              auVar77._9_3_ = 0;
            }
            iVar56 = auVar77._8_4_;
            lVar22 = auVar77._0_8_;
            iVar26 = ((uint)param_3[1] - auVar77._0_4_) + 0x10;
            iVar31 = 0x200;
            if (iVar26 < 0x200) {
              iVar31 = iVar26;
            }
            puStack_80 = (ulong *)&UNK_0050fa55;
            cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                              (param_3,iVar56,iVar31);
            if (cVar9 == '\0') {
              puStack_80 = (ulong *)&UNK_0050fa9a;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (param_3,lVar22,iVar56,lVar20);
              if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fa6a;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (lVar20,lVar22,(long)iVar56);
              puVar45 = (ulong *)(lVar22 + iVar56);
            }
            goto code_r0x0050fcd7;
          }
          uVar54 = param_1[1];
          if ((uVar54 & 1) != 0) {
            uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
          }
          puVar27 = (ulong *)(lVar20 + uVar24);
          if (uVar54 == 0) {
            puStack_80 = (ulong *)&UNK_0050fb38;
            uVar14 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar27,0);
            puStack_80 = (ulong *)&UNK_0050fb46;
            puVar45 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar14,puVar45,param_3);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f9ec;
            puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar45,puVar27);
          }
          if (puVar45 == (ulong *)0x0) {
            puStack_80 = (ulong *)&UNK_0050fe3e;
            func_0x0050d360(param_1,puVar27);
            goto code_r0x005013a0;
          }
          if ((uVar59 & 0x600) != 0x400) goto code_r0x0050fcd7;
          pbVar11 = (byte *)(*puVar27 & 0xfffffffffffffffc);
          if ((*pbVar11 & 1) == 0) {
            uVar24 = (ulong)(*pbVar11 >> 1);
            pbVar11 = pbVar11 + 1;
          }
          else {
            uVar24 = *(ulong *)(pbVar11 + 8);
            pbVar11 = *(byte **)(pbVar11 + 0x10);
          }
          puStack_80 = (ulong *)&UNK_0050fb96;
          iVar31 = utf8_range_IsValid(pbVar11,uVar24);
          if (iVar31 != 0) goto code_r0x0050fcd7;
          pbVar11 = (byte *)((long)param_5 +
                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 + (ulong)(uint)param_5[3]);
          uVar54 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
          lVar22 = (long)(char)*(byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
          pbVar53 = pbVar11 + uVar54;
          uVar46 = ((long)((long)puVar12 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
          uVar24 = uVar46 + 1;
          pbVar30 = pbVar11 + uVar24;
          if (uVar24 != 0) {
            pbVar28 = pbVar11;
            for (uVar24 = uVar24 & 7; uVar24 != 0; uVar24 = uVar24 - 1) {
              uVar54 = uVar54 + *pbVar28;
              pbVar28 = pbVar28 + 1;
            }
            if (6 < uVar46) {
              do {
                uVar54 = (ulong)pbVar28[7] + (ulong)pbVar28[6] +
                         (ulong)pbVar28[5] + (ulong)pbVar28[4] + (ulong)pbVar28[3] +
                         (ulong)pbVar28[2] + (ulong)pbVar28[1] + *pbVar28 + uVar54;
                pbVar28 = pbVar28 + 8;
              } while (pbVar28 != pbVar30);
            }
          }
code_r0x0050fdd9:
          puStack_80 = (ulong *)&UNK_0050fdef;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar53,lVar22,pbVar11 + uVar54,(long)(char)*pbVar30,&UNK_00178f3f,0);
        }
        goto code_r0x005013a0;
      case 0xe:
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar55 = uVar59 & 0x30;
        if (uVar55 != 0x20) {
          if ((uVar59 & 0x1c0) == 0x40) {
            if ((uVar10 & 7) != 3) goto code_r0x0050ff3a;
          }
          else if (((uVar59 & 0x1c0) != 0) || ((uVar10 & 7) != 2)) goto code_r0x0050ff3a;
          puVar61 = (uint *)((long)puVar12 + (long)param_5);
          plVar15 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if ((uVar59 & 0x600) == 0x400) {
            uStack_40 = SUB82(plVar15,0);
            uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
            bStack_3d = (byte)((ulong)plVar15 >> 0x18);
            uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
            uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
            uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
            uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
          }
          else {
            if ((uVar59 & 0x600) != 0x200) {
              plVar15 = (long *)*plVar15;
            }
            uStack_70 = (ulong *)&UNK_00510176;
            uStack_60 = param_6;
            lVar20 = (**(code **)(*plVar15 + 0x20))(plVar15);
            lVar22 = *(long *)(lVar20 + 8);
            uStack_40 = (undefined2)lVar22;
            uStack_3e = (undefined1)((ulong)lVar22 >> 0x10);
            bStack_3d = (byte)((ulong)lVar22 >> 0x18);
            uStack_3c = (undefined1)((ulong)lVar22 >> 0x20);
            uStack_3b = (undefined1)((ulong)lVar22 >> 0x28);
            uStack_3a = (undefined1)((ulong)lVar22 >> 0x30);
            uStack_39 = (undefined1)((ulong)lVar22 >> 0x38);
            puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
            param_6 = uStack_60;
            if (lVar22 == 0) {
              uStack_70 = (ulong *)&UNK_005101a8;
              uVar14 = (**(code **)(*(long *)(lVar20 + 0x58) + 0x10))(plVar15);
              puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
              uStack_40 = (undefined2)uVar14;
              uStack_3e = (undefined1)((ulong)uVar14 >> 0x10);
              bStack_3d = (byte)((ulong)uVar14 >> 0x18);
              uStack_3c = (undefined1)((ulong)uVar14 >> 0x20);
              uStack_3b = (undefined1)((ulong)uVar14 >> 0x28);
              uStack_3a = (undefined1)((ulong)uVar14 >> 0x30);
              uStack_39 = (undefined1)((ulong)uVar14 >> 0x38);
              param_6 = uStack_60;
            }
          }
          if (uVar55 == 0x30) {
            uStack_70 = (ulong *)&UNK_0050ff6c;
            _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                      (param_5,CONCAT17(uStack_39,
                                        CONCAT16(uStack_3a,
                                                 CONCAT15(uStack_3b,
                                                          CONCAT14(uStack_3c,
                                                                   CONCAT13(bStack_3d,
                                                                            CONCAT12(uStack_3e,
                                                                                     uStack_40))))))
                       ,puVar61,(ulong)puVar27 >> 3 & 0x1fffffff,param_5,param_1);
            uVar25 = uVar10;
          }
          else {
            uVar25 = (uint)puVar27;
            if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
              uVar25 = uVar10;
            }
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
          lVar20 = *(long *)((long)param_1 + uVar24);
          if (lVar20 == lVar22) {
            uVar46 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            if (uVar54 == 0) {
              uStack_70 = (ulong *)&UNK_0050ffe3;
              uStack_60 = param_1;
              uVar14 = _Znwm(uVar46);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050ffd9;
              uStack_60 = param_1;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm(uVar54,uVar46 + 7 & 0xfffffffffffffff8);
            }
            param_1 = uStack_60;
            *(undefined8 *)((long)uStack_60 + uVar24) = uVar14;
            uStack_70 = (ulong *)&UNK_0050fffb;
            func_0x0099bda0(uVar14,lVar22,uVar46);
            lVar20 = *(long *)((long)param_1 + uVar24);
            uVar25 = uVar10;
          }
          uVar24 = (ulong)*puVar61;
          if (*(long *)(lVar20 + uVar24) == 0) {
            uVar54 = param_1[1];
            if ((uVar54 & 1) != 0) {
              uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
            }
            puVar19 = *(undefined8 **)
                       (CONCAT17(uStack_39,
                                 CONCAT16(uStack_3a,
                                          CONCAT15(uStack_3b,
                                                   CONCAT14(uStack_3c,
                                                            CONCAT13(bStack_3d,
                                                                     CONCAT12(uStack_3e,uStack_40)))
                                                  ))) + 0x20);
            uVar14 = *puVar19;
            uStack_70 = (ulong *)&UNK_00510099;
            uVar14 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                               (puVar19 + 5,uVar14,uVar14,uVar54);
            *(undefined8 *)(lVar20 + uVar24) = uVar14;
            uVar25 = uVar10;
          }
          if ((uVar59 & 0x1c0) == 0x40) {
            uVar54 = param_3[0xb];
            *(uint *)(param_3 + 0xb) = (uint)uVar54 - 1;
            if (0 < (int)(uint)uVar54) {
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0051004d;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar20 + uVar24),puVar45,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar24 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((uint)uVar24 == uVar25) {
                return puVar45;
              }
            }
          }
          else {
            bVar3 = (byte)*puVar45;
            if ((char)bVar3 < '\0') {
              uStack_70 = (ulong *)&UNK_005100cb;
              auVar79 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,bVar3);
              if (auVar79._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar79[8] = bVar3;
              auVar79._0_8_ = (byte *)((long)puVar45 + 1);
              auVar79._9_3_ = 0;
            }
            if (0 < (int)(uint)param_3[0xb]) {
              uVar25 = auVar79._8_4_ + (auVar79._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar25 >> 0x1f & uVar25) + param_3[1];
              uVar10 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar25;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0051011f;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar20 + uVar24),auVar79._0_8_,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar10 = (uVar10 - uVar25) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar10;
              if ((uint)param_3[10] == 0) {
                *param_3 = (long)(int)((int)uVar10 >> 0x1f & uVar10) + param_3[1];
                return puVar45;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar59 & 0x1c0) == 0x40) {
          if ((uVar10 & 7) == 3) {
            uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
            uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
            lVar20 = *(long *)((long)param_1 + uVar24);
            uStack_60 = param_6;
            if (lVar20 == lVar22) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_005191b3;
                uVar14 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_0051918f;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar54,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar24) = uVar14;
              uStack_70 = (ulong *)&UNK_005191cc;
              func_0x0099bda0(uVar14,lVar22,puStack_68);
              lVar20 = *(long *)((long)param_1 + uVar24);
            }
            uVar25 = *(uint *)((long)param_5 + (ulong)uStack_4c);
            pauVar21 = *(undefined1 (**) [16])(lVar20 + (ulong)uVar25);
            if (pauVar21 == (undefined1 (*) [16])_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              if (uVar24 == 0) {
                uStack_70 = (ulong *)&UNK_00519477;
                pauVar21 = (undefined1 (*) [16])_Znwm(0x18);
                *pauVar21 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar21[1] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00519222;
                pauVar21 = (undefined1 (*) [16])_ZN6google8protobuf5Arena8AllocateEm(uVar24,0x18);
                *pauVar21 = (undefined1  [16])0x0;
                *(ulong *)pauVar21[1] = uVar24;
              }
              *(undefined1 (**) [16])(lVar20 + (ulong)uVar25) = pauVar21;
            }
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + (ulong)uStack_4c + 8) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar59 = uVar59 & 0x600;
            plVar23 = plVar15;
            if (uVar59 != 0x400) {
              if (uVar59 != 0x200) {
                plVar15 = (long *)*plVar15;
              }
              uStack_70 = (ulong *)&UNK_00519424;
              lVar22 = (**(code **)(*plVar15 + 0x20))(plVar15);
              plVar23 = *(long **)(lVar22 + 8);
              if (*(long **)(lVar22 + 8) == (long *)0x0) {
                uStack_70 = (ulong *)&UNK_00519446;
                plVar23 = (long *)(**(code **)(*(long *)(lVar22 + 0x58) + 0x10))(plVar15);
              }
            }
            uVar25 = *(uint *)((long)param_5 + (ulong)uStack_4c + 4);
            puVar27 = puVar45;
            if (uVar25 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar25 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar25 & 0x1f);
            }
            do {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)&UNK_005192cc;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar23,pauVar21,uVar24);
              uVar24 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar24 - 1;
              param_6 = uStack_60;
              if ((int)(uint)uVar24 < 1) goto code_r0x005013a0;
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_005192f7;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,puVar27,param_3,plVar23);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar24 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              param_6 = uStack_60;
              if ((puVar45 == (ulong *)0x0) || ((uint)uVar24 != uVar10)) goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar45) {
                uVar59 = (ushort)*param_5;
                goto joined_r0x00519405;
              }
              bVar3 = (byte)*puVar45;
              auVar104[8] = bVar3;
              auVar104._0_8_ = (byte *)((long)puVar45 + 1);
              auVar104._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar45 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_70 = (ulong *)&UNK_00519362;
                  auVar104 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar45,iVar31);
                  param_6 = uStack_60;
                  if (auVar104._0_8_ == 0) goto code_r0x005013a0;
                }
                else {
                  auVar104._8_4_ = iVar31;
                  auVar104._0_8_ = (ushort *)((long)puVar45 + 2);
                }
              }
              puVar27 = auVar104._0_8_;
            } while (auVar104._8_4_ == uVar10);
            if ((ulong *)*param_3 <= puVar45) {
              uVar59 = (ushort)*param_5;
joined_r0x00519405:
              if (uVar59 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar59) =
                     *(uint *)((long)param_1 + (ulong)uVar59) | (uint)uStack_60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
            puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar45);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
            param_6 = uStack_60;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x005191a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
        if ((uVar59 & 0x1c0) == 0) {
          uStack_60 = (ulong *)CONCAT44(uVar10,(undefined4)uStack_60);
          if ((uVar10 & 7) == 2) {
            uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
            uVar24 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar24);
            lVar20 = *(long *)((long)param_1 + uVar24);
            if (lVar20 == lVar22) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_00518dc0;
                uVar14 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_00518d9c;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar54,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar24) = uVar14;
              uStack_70 = (ulong *)&UNK_00518dd8;
              func_0x0099bda0(uVar14,lVar22,puStack_68);
              lVar20 = *(long *)((long)param_1 + uVar24);
            }
            uVar24 = (ulong)uStack_4c;
            uVar10 = *(uint *)((long)param_5 + uVar24);
            puVar19 = *(undefined8 **)(lVar20 + (ulong)uVar10);
            if (puVar19 == (undefined8 *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_005190e4;
                puVar19 = (undefined8 *)_Znwm(0x18);
                *puVar19 = 0;
                puVar19[1] = 0;
                puVar19[2] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00518e2d;
                puVar19 = (undefined8 *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x18);
                *puVar19 = 0;
                puVar19[1] = 0;
                puVar19[2] = uVar54;
              }
              *(undefined8 **)(lVar20 + (ulong)uVar10) = puVar19;
            }
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + uVar24 + 8) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar59 = uVar59 & 0x600;
            if (uVar59 == 0x400) {
              uStack_40 = SUB82(plVar15,0);
              uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
              bStack_3d = (byte)((ulong)plVar15 >> 0x18);
              uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
              uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
              uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
              uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
            }
            else {
              if (uVar59 != 0x200) {
                plVar15 = (long *)*plVar15;
              }
              uStack_70 = (ulong *)&UNK_00519084;
              lVar20 = (**(code **)(*plVar15 + 0x20))(plVar15);
              lVar22 = *(long *)(lVar20 + 8);
              uStack_40 = (undefined2)lVar22;
              uStack_3e = (undefined1)((ulong)lVar22 >> 0x10);
              bStack_3d = (byte)((ulong)lVar22 >> 0x18);
              uStack_3c = (undefined1)((ulong)lVar22 >> 0x20);
              uStack_3b = (undefined1)((ulong)lVar22 >> 0x28);
              uStack_3a = (undefined1)((ulong)lVar22 >> 0x30);
              uStack_39 = (undefined1)((ulong)lVar22 >> 0x38);
              if (lVar22 == 0) {
                uStack_70 = (ulong *)&UNK_005190af;
                uVar14 = (**(code **)(*(long *)(lVar20 + 0x58) + 0x10))(plVar15,puVar19);
                uStack_40 = (undefined2)uVar14;
                uStack_3e = (undefined1)((ulong)uVar14 >> 0x10);
                bStack_3d = (byte)((ulong)uVar14 >> 0x18);
                uStack_3c = (undefined1)((ulong)uVar14 >> 0x20);
                uStack_3b = (undefined1)((ulong)uVar14 >> 0x28);
                uStack_3a = (undefined1)((ulong)uVar14 >> 0x30);
                uStack_39 = (undefined1)((ulong)uVar14 >> 0x38);
              }
            }
            uVar10 = *(uint *)((long)param_5 + uVar24 + 4);
            puVar27 = puVar45;
            if (uVar10 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
            }
            do {
              uVar24 = param_1[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)&UNK_00518ee0;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (CONCAT17(uStack_39,
                                           CONCAT16(uStack_3a,
                                                    CONCAT15(uStack_3b,
                                                             CONCAT14(uStack_3c,
                                                                      CONCAT13(bStack_3d,
                                                                               CONCAT12(uStack_3e,
                                                                                        uStack_40)))
                                                            ))),puVar19,uVar24);
              bVar3 = (byte)*puVar27;
              if ((char)bVar3 < '\0') {
                uStack_70 = (ulong *)&UNK_00518efa;
                auVar102 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar27,bVar3);
                if (auVar102._0_8_ == 0) goto code_r0x005013a0;
              }
              else {
                auVar102[8] = bVar3;
                auVar102._0_8_ = (byte *)((long)puVar27 + 1);
                auVar102._9_3_ = 0;
              }
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x005013a0;
              uVar25 = auVar102._8_4_ + (auVar102._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar25 >> 0x1f & uVar25) + param_3[1];
              uVar10 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar25;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_00518f55;
              puVar45 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,auVar102._0_8_,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar10 = (uVar10 - uVar25) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar10;
              if ((uint)param_3[10] != 0) goto code_r0x005013a0;
              puVar27 = (ulong *)((long)(int)((int)uVar10 >> 0x1f & uVar10) + param_3[1]);
              *param_3 = (ulong)puVar27;
              if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
              if (puVar27 <= puVar45) {
                uVar59 = (ushort)*param_5;
                goto joined_r0x00519063;
              }
              bVar3 = (byte)*puVar45;
              auVar103[8] = bVar3;
              auVar103._0_8_ = (byte *)((long)puVar45 + 1);
              auVar103._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar45 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_70 = (ulong *)&UNK_00518fc0;
                  auVar103 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar45,iVar31);
                  if (auVar103._0_8_ == 0) goto code_r0x005013a0;
                }
                else {
                  auVar103._8_4_ = iVar31;
                  auVar103._0_8_ = (ushort *)((long)puVar45 + 2);
                }
              }
              puVar27 = auVar103._0_8_;
            } while (auVar103._8_4_ == uStack_60._4_4_);
            if ((ulong *)*param_3 <= puVar45) {
              uVar59 = (ushort)*param_5;
joined_r0x00519063:
              if (uVar59 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar59) =
                     *(uint *)((long)param_1 + (ulong)uVar59) | uVar60;
              }
              return puVar45;
            }
            uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
            puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar45);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00518db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar45,param_3,puVar27,param_5,param_6);
          return puVar45;
        }
code_r0x0050ff3a:
                    /* WARNING: Could not recover jumptable at 0x0050ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*(code *)param_5[6])();
        return puVar45;
      case 0xf:
        ppuVar34 = &puStack_98;
        ppuVar39 = &puStack_98;
        ppuVar38 = &puStack_98;
        lStack_38 = in_FS_OFFSET[5];
        uVar59 = *(ushort *)((long)(param_5 + 1) + (long)puVar12);
        puVar58 = (ulong *)((ulong)(uint)param_5[3] + (long)param_5);
        bStack_3d = *(byte *)((long)puVar58 + (ulong)uVar59 * 8 + 4);
        if (((bStack_3d & 1) != 0) && ((uVar10 & 7) == 2)) {
          puStack_78 = (ulong *)((long)puVar12 + (long)param_5);
          uVar54 = puVar58[uVar59];
          uVar46 = (ulong)(uint)puVar58[1];
          lVar22 = *(long *)(*(long *)param_5[4] + uVar46);
          lVar20 = *(long *)((long)param_1 + uVar46);
          unaff_R13 = puVar45;
          uStack_70 = puVar27;
          puStack_68 = param_6;
          uStack_60 = param_5;
          if (lVar20 == lVar22) {
            puStack_80 = (ulong *)(ulong)(uint)puVar58[2];
            uVar51 = param_1[1];
            if ((uVar51 & 1) != 0) {
              uVar51 = *(ulong *)(uVar51 & 0xfffffffffffffffe);
            }
            if (uVar51 == 0) {
              puStack_88 = puVar45;
              uVar14 = _Znwm(puStack_80);
            }
            else {
              puStack_88 = puVar45;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar51,(ulong)((long)puStack_80 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar46) = uVar14;
            func_0x0099bda0(uVar14,lVar22,puStack_80);
            lVar20 = *(long *)((long)param_1 + uVar46);
            unaff_R13 = puStack_88;
          }
          puVar45 = (ulong *)(ulong)uVar59;
          param_1 = (ulong *)(ulong)(uint)uVar54;
          param_5 = (ulong *)((ulong)(uint)*puStack_78 + lVar20);
          puVar27 = puStack_78;
          uStack_48 = uStack_40;
          if ((bStack_3d & 2) == 0) {
            ppuVar39 = &puStack_98;
            if ((*param_5 & 1) != 0) {
code_r0x005107d4:
              *(undefined **)((long)ppuVar38 + -8) = &UNK_005107f2;
              (*_ZN6google8protobuf8internal20MapFieldBaseForParse22sync_map_with_repeatedE)
                        (param_5,1);
              param_1 = (ulong *)((ulong)param_1 & 0xffffffff);
              ppuVar39 = ppuVar38;
            }
            param_5 = param_5 + 1;
          }
          uVar10 = *(uint *)((long)puVar27 + 4);
          if (uVar10 != 0xffffffff) {
            puVar61 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)) +
                              (ulong)(uVar10 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
          }
          puVar58 = puVar58 + (long)puVar45;
          uStack_50 = SUB82(puVar58,0);
          uStack_4e = (undefined2)((ulong)puVar58 >> 0x10);
          uStack_4c = (uint)((ulong)puVar58 >> 0x20);
          puVar29 = (ulong *)((ulong)param_1 | (ulong)bStack_3d << 0x20);
          ppuVar35 = ppuVar39;
          goto code_r0x00510340;
        }
        if (in_FS_OFFSET[5] != lStack_38) {
code_r0x0051080d:
          *(undefined **)((long)ppuVar34 + -8) = &UNK_00510812;
          func_0x0099bd00();
code_r0x00510812:
          UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
          puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
          return puVar45;
        }
      case 0:

        _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
                    /* WARNING: Could not recover jumptable at 0x005018e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar45 = (ulong *)(*(code *)param_5[6])(param_1,puVar45,param_3,puVar27,param_5,param_6);
        return puVar45;
      }
      uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
      uVar55 = uVar59 & 0x30;
      if (uVar55 == 0x20) {

        _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
        if ((uVar24 & 7) != 0) {
          if ((uVar10 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00510834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(*(code *)param_5[6])();
            return puVar45;
          }

          _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
          :
          lVar22 = in_FS_OFFSET[5];
          if ((uVar10 & 7) != 2) goto code_r0x0050dc60;
          uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
          uVar25 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
          if (uVar25 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar25 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar25 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar60;
          }
          uVar55 = uVar59 >> 6;
          if ((uVar55 & 7) == 0) {
            if (in_FS_OFFSET[5] == lVar22) {
              pbVar11 = (byte *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar12));
              lVar22 = in_FS_OFFSET[5];
              uVar24 = (ulong)(byte)*puVar45;
              if ((char)(byte)*puVar45 < '\0') {
                uStack_60 = (ulong *)&UNK_00513380;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                pbVar53 = auVar72._0_8_;
                if (pbVar53 == (byte *)0x0) goto code_r0x00513408;
                uVar24 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar53 = (byte *)((long)puVar45 + 1);
              }
              goto code_r0x00513390;
            }
            goto code_r0x0050dddd;
          }
          uVar59 = uVar59 & 0x600;
          if ((uVar55 & 7) == 2) {
            puVar27 = (ulong *)((ulong)*(uint *)((long)param_5 + (long)puVar12) + (long)param_1);
            switch(uVar59) {
            default:
              if (in_FS_OFFSET[5] == lVar22) {
                lVar22 = in_FS_OFFSET[5];
                uVar24 = (ulong)(byte)*puVar45;
                if ((char)(byte)*puVar45 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512740;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                  puVar45 = auVar72._0_8_;
                  if (puVar45 == (ulong *)0x0) goto code_r0x0051288a;
                  uVar24 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  puVar45 = (ulong *)((long)puVar45 + 1);
                }
                puVar12 = (ulong *)param_3[1];
                iVar31 = (int)puVar12 - (int)puVar45;
                uVar10 = (uint)uVar24;
                if ((int)uVar10 <= iVar31) goto code_r0x00512894;
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
              if (in_FS_OFFSET[5] == lVar22) {
                lVar22 = in_FS_OFFSET[5];
                uVar24 = (ulong)(byte)*puVar45;
                if ((char)(byte)*puVar45 < '\0') {
                  uStack_60 = (ulong *)&UNK_00512af0;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                  pbVar11 = auVar72._0_8_;
                  if (pbVar11 == (byte *)0x0) goto code_r0x00512b78;
                  uVar24 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  pbVar11 = (byte *)((long)puVar45 + 1);
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
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_60 = (ulong *)CONCAT44(uStack_4c,uVar10);
              puStack_80 = (ulong *)&UNK_0050dd5a;
              uStack_70 = param_1;
              puStack_68 = param_5;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1024EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
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
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar12) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_60 = (ulong *)CONCAT44(uStack_4c,uVar10);
              puStack_80 = (ulong *)&UNK_0050dd9f;
              uStack_70 = param_1;
              puStack_68 = param_5;
              puVar45 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1536EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
            }
            if (in_FS_OFFSET[5] == lVar22) {
              return puVar45;
            }
          }
          else {
            param_1 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar12));
            if (uVar59 == 0) {
              if (in_FS_OFFSET[5] == lVar22) {
                lVar22 = in_FS_OFFSET[5];
                uVar24 = (ulong)(byte)*puVar45;
                if ((char)(byte)*puVar45 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512150;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                  puVar45 = auVar72._0_8_;
                  if (puVar45 == (ulong *)0x0) goto code_r0x0051229b;
                  uVar24 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  puVar45 = (ulong *)((long)puVar45 + 1);
                }
                puVar27 = (ulong *)param_3[1];
                iVar31 = (int)puVar27 - (int)puVar45;
                uVar10 = (uint)uVar24;
                if ((int)uVar10 <= iVar31) goto code_r0x005122a5;
                uStack_70 = param_3;
                goto code_r0x00512179;
              }
            }
            else if (in_FS_OFFSET[5] == lVar22) {
              lVar22 = in_FS_OFFSET[5];
              uVar24 = (ulong)(byte)*puVar45;
              if ((char)(byte)*puVar45 < '\0') {
                uStack_60 = (ulong *)&UNK_00512500;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar45,uVar24);
                pbVar11 = auVar72._0_8_;
                if (pbVar11 == (byte *)0x0) goto code_r0x00512588;
                uVar24 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar11 = (byte *)((long)puVar45 + 1);
              }
              goto code_r0x00512510;
            }
          }
          goto code_r0x0050dddd;
        }
        uVar59 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar12);
        uVar44 = (uint)uVar59;
        uVar10 = *(uint *)((long)((long)param_5 + 4) + (long)puVar12);
        if (uVar10 != 0xffffffff) {
          puVar61 = (uint *)((long)param_1 + (ulong)(uVar10 >> 5) * 4);
          *puVar61 = *puVar61 | 1 << ((byte)uVar10 & 0x1f);
        }
        uVar59 = uVar59 >> 6;
        pcVar13 = (char *)(ulong)(uVar59 & 7);
        uVar62 = (uVar59 & 7) == 0;
        puVar12 = param_3;
        ppuVar39 = (ulong **)register0x00000020;
        puVar18 = unaff_RBP;
        puVar49 = param_5;
        param_3 = unaff_R12;
        puVar58 = unaff_R14;
        param_5 = unaff_R15;
code_r0x00510881:
        if ((bool)uVar62) {
          *(undefined1 **)((long)ppuVar39 + -8) = puVar18;
          *(ulong **)((long)ppuVar39 + -0x10) = param_5;
          *(ulong **)((long)ppuVar39 + -0x18) = puVar58;
          *(ulong **)((long)ppuVar39 + -0x20) = unaff_R13;
          *(ulong **)((long)ppuVar39 + -0x28) = param_3;
          *(ulong **)((long)ppuVar39 + -0x30) = unaff_RBX;
          *(ulong **)((long)ppuVar39 + -0x48) = param_6;
          *(ulong **)((long)ppuVar39 + -0x50) = puVar49;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)ppuVar39 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
            puVar16 = (ulong *)((long)puVar45 + 1);
code_r0x00511989:
            uVar54 = *param_1;
            bVar63 = (uVar54 & 4) != 0;
            uVar10 = (uint)param_1[1];
            uVar25 = (uint)uVar54 & 3;
            if (bVar63) {
              uVar25 = uVar10;
            }
            uVar60 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar60 = 3;
            }
            if (uVar25 == uVar60) {
              *(uint *)((long)ppuVar39 + -0x34) = uVar25 + 1;
              *(undefined **)((long)ppuVar39 + -0x60) = &UNK_00511a51;
              _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(param_1,(uVar54 & 4) == 0);
              uVar46 = *param_1 & 0xfffffffffffffff8;
              uVar10 = (uint)param_1[1];
              uVar25 = *(uint *)((long)ppuVar39 + -0x34);
code_r0x00511a70:
              *(uint *)(param_1 + 1) = uVar25;
              *(bool *)(uVar46 + (long)(int)uVar10) = uVar24 != 0;
            }
            else {
              uVar46 = uVar54 & 0xfffffffffffffff8;
              uVar25 = uVar25 + 1;
              if ((uVar54 & 4) != 0) goto code_r0x00511a70;
              *param_1 = uVar46 | uVar25;
              *(bool *)((long)param_1 + (ulong)((uint)uVar54 & 3) + 8) = uVar24 != 0;
            }
            if ((ulong *)*puVar12 <= puVar16) goto code_r0x00511b67;
            bVar3 = (byte)*puVar16;
            auVar87[8] = bVar3;
            auVar87._0_8_ = (byte *)((long)puVar16 + 1);
            auVar87._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar16 + 1);
              iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)ppuVar39 + -0x60) = &UNK_00511ab3;
                auVar87 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar16,iVar31);
                if (auVar87._0_8_ == 0) goto code_r0x00511b90;
              }
              else {
                auVar87._8_4_ = iVar31;
                auVar87._0_8_ = (ushort *)((long)puVar16 + 2);
              }
            }
            puVar45 = auVar87._0_8_;
            if (auVar87._8_4_ != (int)puVar27) {
code_r0x00511b67:
              if ((ulong)**(ushort **)((long)ppuVar39 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)ppuVar39 + -0x40) +
                                  (ulong)**(ushort **)((long)ppuVar39 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar39 + -0x48);
              }
              return puVar16;
            }
          }
          uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar45 + 2);
code_r0x00511a2c:
            uVar24 = uVar24 & uVar54;
            goto code_r0x00511989;
          }
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar46) {
            puVar16 = (ulong *)((long)puVar45 + 3);
code_r0x00511a29:
            uVar54 = uVar54 & uVar46;
            goto code_r0x00511a2c;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar45 + 4);
            goto code_r0x00511a29;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar46) {
            puVar16 = (ulong *)((long)puVar45 + 5);
            goto code_r0x00511a29;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar45 + 6);
            goto code_r0x00511a29;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar46) {
            puVar16 = (ulong *)((long)puVar45 + 7);
            goto code_r0x00511a29;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar54) {
            puVar16 = puVar45 + 1;
            goto code_r0x00511a29;
          }
          uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar46) {
            puVar16 = (ulong *)((long)puVar45 + 9);
            goto code_r0x00511a29;
          }
          bVar3 = *(byte *)((long)puVar45 + 9);
          puVar16 = (ulong *)((long)puVar45 + 10);
          if (bVar3 == 1) goto code_r0x00511a29;
          if (-1 < (char)bVar3) {
            if ((bVar3 & 1) == 0) {
              uVar46 = uVar46 ^ 0x8000000000000000;
            }
            goto code_r0x00511a29;
          }
code_r0x00511b90:
          param_1 = *(ulong **)((long)ppuVar39 + -0x40);
          param_5 = *(ulong **)((long)ppuVar39 + -0x50);
          param_6 = *(ulong **)((long)ppuVar39 + -0x48);
          unaff_RBP = *(undefined1 **)((long)ppuVar39 + -8);
          register0x00000020 = (BADSPACEBASE *)ppuVar39;
          goto code_r0x005013a0;
        }
        uVar24 = (ulong)(uVar44 & 0x600);
        ppuVar40 = ppuVar39;
        puVar41 = puVar18;
code_r0x0051088e:
        auVar65._8_8_ = puVar12;
        auVar65._0_8_ = puVar58;
        ppuVar8 = ppuVar40;
        puVar42 = puVar41;
        puVar16 = param_3;
        auVar7 = auVar65;
        if ((int)pcVar13 != 2) {
          bVar63 = (short)uVar24 == 0;
          ppuVar34 = ppuVar40;
code_r0x005108b3:
          puVar19 = auVar65._8_8_;
          register0x00000020 = (BADSPACEBASE *)ppuVar34;
          if (bVar63) {
            *(undefined1 **)((long)ppuVar34 + -8) = puVar42;
            *(ulong **)((long)ppuVar34 + -0x10) = param_5;
            *(long *)((long)ppuVar34 + -0x18) = auVar65._0_8_;
            *(ulong **)((long)ppuVar34 + -0x20) = unaff_R13;
            *(ulong **)((long)ppuVar34 + -0x28) = param_3;
            *(ulong **)((long)ppuVar34 + -0x30) = unaff_RBX;
            *(ulong **)((long)ppuVar34 + -0x48) = param_6;
            *(ulong **)((long)ppuVar34 + -0x50) = puVar49;
            uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
            *(ulong **)((long)ppuVar34 + -0x40) = param_1;
            param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
            *(undefined8 **)((long)ppuVar34 + -0x38) = puVar19;
            while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
              puVar12 = (ulong *)((long)puVar45 + 1);
code_r0x00510929:
              uVar54 = *param_1;
              bVar63 = (uVar54 & 4) != 0;
              uVar10 = (uint)param_1[1];
              uVar25 = (uint)uVar54 & 3;
              if (bVar63) {
                uVar25 = uVar10;
              }
              uVar60 = *(uint *)((long)param_1 + 0xc);
              if (!bVar63) {
                uVar60 = 1;
              }
              uVar44 = uVar25 + 1;
              if (uVar25 == uVar60) {
                *(undefined **)((long)ppuVar34 + -0x60) = &UNK_005109e2;
                _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                          (param_1,(uVar54 & 4) == 0,uVar25,uVar44);
                puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
                uVar46 = *param_1 & 0xfffffffffffffff8;
                uVar10 = (uint)param_1[1];
code_r0x00510a00:
                *(uint *)(param_1 + 1) = uVar44;
                *(ulong *)(uVar46 + (long)(int)uVar10 * 8) = uVar24;
              }
              else {
                uVar46 = uVar54 & 0xfffffffffffffff8;
                if ((uVar54 & 4) != 0) goto code_r0x00510a00;
                *param_1 = uVar46 | uVar44;
                param_1[(ulong)((uint)uVar54 & 3) + 1] = uVar24;
              }
              if ((ulong *)*puVar19 <= puVar12) goto code_r0x00510afd;
              bVar3 = (byte)*puVar12;
              auVar81[8] = bVar3;
              auVar81._0_8_ = (byte *)((long)puVar12 + 1);
              auVar81._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar12 + 1);
                iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510a43;
                  auVar81 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
                  if (auVar81._0_8_ == 0) goto code_r0x00510b26;
                  puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
                }
                else {
                  auVar81._8_4_ = iVar31;
                  auVar81._0_8_ = (ushort *)((long)puVar12 + 2);
                }
              }
              puVar45 = auVar81._0_8_;
              if (auVar81._8_4_ != (int)puVar27) {
code_r0x00510afd:
                if ((ulong)**(ushort **)((long)ppuVar34 + -0x50) != 0) {
                  puVar61 = (uint *)(*(long *)((long)ppuVar34 + -0x40) +
                                    (ulong)**(ushort **)((long)ppuVar34 + -0x50));
                  *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar34 + -0x48);
                }
                return puVar12;
              }
            }
            uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x005109c7:
              uVar24 = uVar24 & uVar54;
              goto code_r0x00510929;
            }
            uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x005109c4:
              uVar54 = uVar54 & uVar46;
              goto code_r0x005109c7;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 4);
              goto code_r0x005109c4;
            }
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 5);
              goto code_r0x005109c4;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00510ac5:
              puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              goto code_r0x005109c4;
            }
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 7);
              goto code_r0x00510ac5;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar54) {
              puVar12 = puVar45 + 1;
              goto code_r0x00510ac5;
            }
            uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 9);
              goto code_r0x00510ac5;
            }
            bVar3 = *(byte *)((long)puVar45 + 9);
            puVar12 = (ulong *)((long)puVar45 + 10);
            if (bVar3 == 1) goto code_r0x00510ac5;
            if (-1 < (char)bVar3) {
              if ((bVar3 & 1) == 0) {
                uVar46 = uVar46 ^ 0x8000000000000000;
              }
              goto code_r0x00510ac5;
            }
code_r0x00510b26:
            param_1 = *(ulong **)((long)ppuVar34 + -0x40);
            param_5 = *(ulong **)((long)ppuVar34 + -0x50);
            param_6 = *(ulong **)((long)ppuVar34 + -0x48);
            unaff_RBP = *(undefined1 **)((long)ppuVar34 + -8);
            goto code_r0x005013a0;
          }
          *(undefined1 **)((long)ppuVar34 + -8) = puVar42;
          *(ulong **)((long)ppuVar34 + -0x10) = param_5;
          *(long *)((long)ppuVar34 + -0x18) = auVar65._0_8_;
          *(ulong **)((long)ppuVar34 + -0x20) = unaff_R13;
          *(ulong **)((long)ppuVar34 + -0x28) = param_3;
          *(ulong **)((long)ppuVar34 + -0x30) = unaff_RBX;
          *(ulong **)((long)ppuVar34 + -0x48) = param_6;
          *(ulong **)((long)ppuVar34 + -0x50) = puVar49;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)ppuVar34 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          *(undefined8 **)((long)ppuVar34 + -0x38) = puVar19;
          while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
            puVar12 = (ulong *)((long)puVar45 + 1);
code_r0x00510ba9:
            uVar54 = uVar24 >> 1 ^ -(ulong)((uint)uVar24 & 1);
            uVar24 = *param_1;
            bVar63 = (uVar24 & 4) != 0;
            uVar10 = (uint)param_1[1];
            uVar25 = (uint)uVar24 & 3;
            if (bVar63) {
              uVar25 = uVar10;
            }
            uVar60 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar60 = 1;
            }
            uVar44 = uVar25 + 1;
            if (uVar25 == uVar60) {
              *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510c71;
              _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                        (param_1,(uVar24 & 4) == 0,uVar25,uVar44);
              puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              uVar46 = *param_1 & 0xfffffffffffffff8;
              uVar10 = (uint)param_1[1];
code_r0x00510c90:
              *(uint *)(param_1 + 1) = uVar44;
              *(ulong *)(uVar46 + (long)(int)uVar10 * 8) = uVar54;
            }
            else {
              uVar46 = uVar24 & 0xfffffffffffffff8;
              if ((uVar24 & 4) != 0) goto code_r0x00510c90;
              *param_1 = uVar46 | uVar44;
              param_1[(ulong)((uint)uVar24 & 3) + 1] = uVar54;
            }
            if ((ulong *)*puVar19 <= puVar12) goto code_r0x00510d8d;
            bVar3 = (byte)*puVar12;
            auVar82[8] = bVar3;
            auVar82._0_8_ = (byte *)((long)puVar12 + 1);
            auVar82._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar12 + 1);
              iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510cd3;
                auVar82 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
                if (auVar82._0_8_ == 0) goto code_r0x00510db6;
                puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              }
              else {
                auVar82._8_4_ = iVar31;
                auVar82._0_8_ = (ushort *)((long)puVar12 + 2);
              }
            }
            puVar45 = auVar82._0_8_;
            if (auVar82._8_4_ != (int)puVar27) {
code_r0x00510d8d:
              if ((ulong)**(ushort **)((long)ppuVar34 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)ppuVar34 + -0x40) +
                                  (ulong)**(ushort **)((long)ppuVar34 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar34 + -0x48);
              }
              return puVar12;
            }
          }
          uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x00510c56:
            uVar24 = uVar24 & uVar54;
            goto code_r0x00510ba9;
          }
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x00510c53:
            uVar54 = uVar54 & uVar46;
            goto code_r0x00510c56;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 4);
            goto code_r0x00510c53;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 5);
            goto code_r0x00510c53;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00510d55:
            puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
            goto code_r0x00510c53;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 7);
            goto code_r0x00510d55;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = puVar45 + 1;
            goto code_r0x00510d55;
          }
          uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 9);
            goto code_r0x00510d55;
          }
          bVar3 = *(byte *)((long)puVar45 + 9);
          puVar12 = (ulong *)((long)puVar45 + 10);
          if (bVar3 == 1) goto code_r0x00510d55;
          if (-1 < (char)bVar3) {
            if ((bVar3 & 1) == 0) {
              uVar46 = uVar46 ^ 0x8000000000000000;
            }
            goto code_r0x00510d55;
          }
code_r0x00510db6:
          param_1 = *(ulong **)((long)ppuVar34 + -0x40);
          param_5 = *(ulong **)((long)ppuVar34 + -0x50);
          param_6 = *(ulong **)((long)ppuVar34 + -0x48);
          unaff_RBP = *(undefined1 **)((long)ppuVar34 + -8);
          goto code_r0x005013a0;
        }
code_r0x00510893:
        register0x00000020 = (BADSPACEBASE *)ppuVar8;
        param_3 = auVar7._8_8_;
        uVar14 = auVar7._0_8_;
        switch(&UNK_00204f88 + *(int *)(&UNK_00204f88 + ((uVar24 & 0xffff) >> 9) * 4)) {
        case (undefined *)0x5108aa:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = puVar49;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
            puVar12 = (ulong *)((long)puVar45 + 1);
code_r0x00510e39:
            uVar54 = *param_1;
            bVar63 = (uVar54 & 4) != 0;
            uVar10 = (uint)param_1[1];
            uVar25 = (uint)uVar54 & 3;
            if (bVar63) {
              uVar25 = uVar10;
            }
            uVar60 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar60 = 2;
            }
            uVar44 = uVar25 + 1;
            if (uVar25 == uVar60) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510ef2;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar54 & 4) == 0,uVar25,uVar44);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar46 = *param_1 & 0xfffffffffffffff8;
              uVar10 = (uint)param_1[1];
code_r0x00510f10:
              *(uint *)(param_1 + 1) = uVar44;
              *(int *)(uVar46 + (long)(int)uVar10 * 4) = (int)uVar24;
            }
            else {
              uVar46 = uVar54 & 0xfffffffffffffff8;
              if ((uVar54 & 4) != 0) goto code_r0x00510f10;
              *param_1 = uVar46 | uVar44;
              *(int *)((long)param_1 + (ulong)((uint)uVar54 & 3) * 4 + 8) = (int)uVar24;
            }
            if ((ulong *)*param_3 <= puVar12) goto code_r0x0051100d;
            bVar3 = (byte)*puVar12;
            auVar83[8] = bVar3;
            auVar83._0_8_ = (byte *)((long)puVar12 + 1);
            auVar83._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar12 + 1);
              iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510f53;
                auVar83 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
                if (auVar83._0_8_ == 0) goto code_r0x00511036;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar83._8_4_ = iVar31;
                auVar83._0_8_ = (ushort *)((long)puVar12 + 2);
              }
            }
            puVar45 = auVar83._0_8_;
            if (auVar83._8_4_ != (int)puVar27) {
code_r0x0051100d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar12;
            }
          }
          uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x00510ed7:
            uVar24 = uVar24 & uVar54;
            goto code_r0x00510e39;
          }
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x00510ed4:
            uVar54 = uVar54 & uVar46;
            goto code_r0x00510ed7;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 4);
            goto code_r0x00510ed4;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 5);
            goto code_r0x00510ed4;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00510fd5:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00510ed4;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 7);
            goto code_r0x00510fd5;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = puVar45 + 1;
            goto code_r0x00510fd5;
          }
          uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 9);
            goto code_r0x00510fd5;
          }
          puVar12 = (ulong *)((long)puVar45 + 10);
          if ((*(byte *)((long)puVar45 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar45 + 9)))
          goto code_r0x00510fd5;
code_r0x00511036:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        case (undefined *)0x5108be:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          uVar59 = *(ushort *)((long)puVar49 + ((ulong)puVar27 >> 0x20) + 8);
          uVar24 = puVar49[3];
          *(ulong **)((long)register0x00000020 + -0x50) = puVar49;
          puVar61 = *(uint **)((long)puVar49 + (ulong)uVar59 * 8 + (ulong)(uint)uVar24);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
            puVar12 = (ulong *)((long)puVar45 + 1);
code_r0x0051135a:
            uVar46 = (ulong)(*puVar61 >> 0x10);
            iVar31 = (int)uVar24;
            uVar24 = (long)iVar31 - (long)(short)*puVar61;
            uVar54 = uVar24 - uVar46;
            if (uVar46 <= uVar24) {
              uVar10 = puVar61[1];
              if (uVar54 < (uVar10 & 0xffff)) {
                if ((puVar61[(uVar54 >> 5) + 2] >> ((uint)uVar54 & 0x1f) & 1) == 0) {
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
                  puVar16 = puVar45;
                  goto 
                  _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                  ;
                }
              }
              else {
                uVar24 = 0;
                do {
                  if (uVar10 >> 0x10 <= uVar24) goto code_r0x00511607;
                  iVar26 = *(int *)((long)puVar61 + uVar24 * 4 + (ulong)(uVar10 >> 3 & 0x1ffc) + 8);
                  uVar24 = (uVar24 * 2 - (ulong)(iVar31 < iVar26)) + 2;
                } while (iVar26 != iVar31);
              }
            }
            uVar24 = *param_1;
            bVar63 = (uVar24 & 4) != 0;
            uVar10 = (uint)param_1[1];
            uVar25 = (uint)uVar24 & 3;
            if (bVar63) {
              uVar25 = uVar10;
            }
            uVar60 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar60 = 2;
            }
            uVar44 = uVar25 + 1;
            if (uVar25 == uVar60) {
              *(ulong **)((long)register0x00000020 + -0x58) = puVar27;
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511462;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar24 & 4) == 0,uVar25,uVar44);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              puVar27 = *(ulong **)((long)register0x00000020 + -0x58);
              uVar54 = *param_1 & 0xfffffffffffffff8;
              uVar10 = (uint)param_1[1];
code_r0x00511480:
              *(uint *)(param_1 + 1) = uVar44;
              *(int *)(uVar54 + (long)(int)uVar10 * 4) = iVar31;
            }
            else {
              uVar54 = uVar24 & 0xfffffffffffffff8;
              if ((uVar24 & 4) != 0) goto code_r0x00511480;
              *param_1 = uVar54 | uVar44;
              *(int *)((long)param_1 + (ulong)((uint)uVar24 & 3) * 4 + 8) = iVar31;
            }
            if ((ulong *)*param_3 <= puVar12) goto code_r0x005115bf;
            bVar3 = (byte)*puVar12;
            auVar85[8] = bVar3;
            auVar85._0_8_ = (byte *)((long)puVar12 + 1);
            auVar85._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar12 + 1);
              iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005114c6;
                auVar85 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
                if (auVar85._0_8_ == 0) goto code_r0x005115e8;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar85._8_4_ = iVar31;
                auVar85._0_8_ = (ushort *)((long)puVar12 + 2);
              }
            }
            puVar45 = auVar85._0_8_;
            if (auVar85._8_4_ != (int)puVar27) {
code_r0x005115bf:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar12;
            }
          }
          uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x00511419:
            uVar24 = uVar24 & uVar54;
            goto code_r0x0051135a;
          }
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x00511416:
            uVar54 = uVar54 & uVar46;
            goto code_r0x00511419;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 4);
            goto code_r0x00511416;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 5);
            goto code_r0x00511416;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00511586:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511416;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 7);
            goto code_r0x00511586;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = puVar45 + 1;
            goto code_r0x00511586;
          }
          uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 9);
            goto code_r0x00511586;
          }
          puVar12 = (ulong *)((long)puVar45 + 10);
          if ((*(byte *)((long)puVar45 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar45 + 9)))
          goto code_r0x00511586;
code_r0x005115e8:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        case (undefined *)0x5108c3:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x50) = param_6;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x48) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          uVar59 = *(ushort *)((long)puVar49 + ((ulong)puVar27 >> 0x20) + 8);
          uVar24 = puVar49[3];
          *(ulong **)((long)register0x00000020 + -0x58) = puVar49;
          uVar14 = *(undefined8 *)((long)puVar49 + (ulong)uVar59 * 8 + (ulong)(uint)uVar24);
          *(ulong **)((long)register0x00000020 + -0x40) = param_3;
          *(undefined8 *)((long)register0x00000020 + -0x38) = uVar14;
          uVar47 = uVar14;
          break;
        case (undefined *)0x5108c8:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = puVar49;
          uVar10 = *(uint *)((long)puVar49 + ((ulong)puVar27 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar10 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar24 = (ulong)(char)(byte)*puVar45, -1 < (long)uVar24) {
            puVar12 = (ulong *)((long)puVar45 + 1);
code_r0x005110b9:
            uVar60 = (uint)uVar24 >> 1 ^ -((uint)uVar24 & 1);
            uVar24 = *param_1;
            bVar63 = (uVar24 & 4) != 0;
            uVar10 = (uint)param_1[1];
            uVar25 = (uint)uVar24 & 3;
            if (bVar63) {
              uVar25 = uVar10;
            }
            uVar44 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar44 = 2;
            }
            uVar32 = uVar25 + 1;
            if (uVar25 == uVar44) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511180;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar24 & 4) == 0,uVar25,uVar32);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar54 = *param_1 & 0xfffffffffffffff8;
              uVar10 = (uint)param_1[1];
code_r0x005111a0:
              *(uint *)(param_1 + 1) = uVar32;
              *(uint *)(uVar54 + (long)(int)uVar10 * 4) = uVar60;
            }
            else {
              uVar54 = uVar24 & 0xfffffffffffffff8;
              if ((uVar24 & 4) != 0) goto code_r0x005111a0;
              *param_1 = uVar54 | uVar32;
              *(uint *)((long)param_1 + (ulong)((uint)uVar24 & 3) * 4 + 8) = uVar60;
            }
            if ((ulong *)*param_3 <= puVar12) goto code_r0x0051129d;
            bVar3 = (byte)*puVar12;
            auVar84[8] = bVar3;
            auVar84._0_8_ = (byte *)((long)puVar12 + 1);
            auVar84._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar12 + 1);
              iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005111e3;
                auVar84 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
                if (auVar84._0_8_ == 0) goto code_r0x005112c6;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar84._8_4_ = iVar31;
                auVar84._0_8_ = (ushort *)((long)puVar12 + 2);
              }
            }
            puVar45 = auVar84._0_8_;
            if (auVar84._8_4_ != (int)puVar27) {
code_r0x0051129d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar12;
            }
          }
          uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x00511165:
            uVar24 = uVar24 & uVar54;
            goto code_r0x005110b9;
          }
          uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x00511162:
            uVar54 = uVar54 & uVar46;
            goto code_r0x00511165;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 4);
            goto code_r0x00511162;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 5);
            goto code_r0x00511162;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00511265:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511162;
          }
          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 7);
            goto code_r0x00511265;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar54) {
            puVar12 = puVar45 + 1;
            goto code_r0x00511265;
          }
          uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar46) {
            puVar12 = (ulong *)((long)puVar45 + 9);
            goto code_r0x00511265;
          }
          puVar12 = (ulong *)((long)puVar45 + 10);
          if ((*(byte *)((long)puVar45 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar45 + 9)))
          goto code_r0x00511265;
code_r0x005112c6:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        }
        do {
          uVar24 = (ulong)(char)(byte)*puVar45;
          if ((long)uVar24 < 0) {
            uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 2);
code_r0x0051175f:
              uVar24 = uVar24 & uVar54;
              if ((int)uVar47 <= (int)uVar24) goto code_r0x005116b3;
              goto code_r0x005118b6;
            }
            uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 3);
code_r0x0051175c:
              uVar54 = uVar54 & uVar46;
              goto code_r0x0051175f;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 4);
              goto code_r0x0051175c;
            }
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 5);
              goto code_r0x0051175c;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar54) {
              puVar12 = (ulong *)((long)puVar45 + 6);
code_r0x00511879:
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar47 = *(undefined8 *)((long)register0x00000020 + -0x38);
              goto code_r0x0051175c;
            }
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 7);
              goto code_r0x00511879;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar54) {
              puVar12 = puVar45 + 1;
              goto code_r0x00511879;
            }
            uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar46) {
              puVar12 = (ulong *)((long)puVar45 + 9);
              goto code_r0x00511879;
            }
            puVar12 = (ulong *)((long)puVar45 + 10);
            if ((*(byte *)((long)puVar45 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar45 + 9)))
            goto code_r0x00511879;
code_r0x00511907:
            param_1 = *(ulong **)((long)register0x00000020 + -0x48);
            param_5 = *(ulong **)((long)register0x00000020 + -0x58);
            param_6 = *(ulong **)((long)register0x00000020 + -0x50);
            unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
            goto code_r0x005013a0;
          }
          puVar12 = (ulong *)((long)puVar45 + 1);
          if ((int)(char)(byte)*puVar45 < (int)uVar47) {
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
            puVar16 = puVar45;
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
code_r0x005116b3:
          iVar31 = (int)uVar24;
          if ((int)((ulong)uVar14 >> 0x20) < iVar31) goto code_r0x005118b6;
          uVar24 = *param_1;
          bVar63 = (uVar24 & 4) != 0;
          uVar10 = (uint)param_1[1];
          uVar25 = (uint)uVar24 & 3;
          if (bVar63) {
            uVar25 = uVar10;
          }
          uVar60 = *(uint *)((long)param_1 + 0xc);
          if (!bVar63) {
            uVar60 = 2;
          }
          uVar44 = uVar25 + 1;
          if (uVar25 == uVar60) {
            *(ulong **)((long)register0x00000020 + -0x60) = puVar27;
            *(undefined **)((long)register0x00000020 + -0x70) = &UNK_00511787;
            _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(param_1,(uVar24 & 4) == 0,uVar25,uVar44);
            uVar47 = *(undefined8 *)((long)register0x00000020 + -0x38);
            param_3 = *(ulong **)((long)register0x00000020 + -0x40);
            puVar27 = *(ulong **)((long)register0x00000020 + -0x60);
            uVar54 = *param_1 & 0xfffffffffffffff8;
            uVar10 = (uint)param_1[1];
code_r0x005117b0:
            *(uint *)(param_1 + 1) = uVar44;
            *(int *)(uVar54 + (long)(int)uVar10 * 4) = iVar31;
          }
          else {
            uVar54 = uVar24 & 0xfffffffffffffff8;
            if ((uVar24 & 4) != 0) goto code_r0x005117b0;
            *param_1 = uVar54 | uVar44;
            *(int *)((long)param_1 + (ulong)((uint)uVar24 & 3) * 4 + 8) = iVar31;
          }
          if ((ulong *)*param_3 <= puVar12) goto code_r0x005118de;
          bVar3 = (byte)*puVar12;
          auVar86[8] = bVar3;
          auVar86._0_8_ = (byte *)((long)puVar12 + 1);
          auVar86._9_3_ = 0;
          if ((char)bVar3 < '\0') {
            bVar2 = *(byte *)((long)puVar12 + 1);
            iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
            if ((char)bVar2 < '\0') {
              *(undefined **)((long)register0x00000020 + -0x70) = &UNK_005117f6;
              auVar86 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
              if (auVar86._0_8_ == 0) goto code_r0x00511907;
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar47 = *(undefined8 *)((long)register0x00000020 + -0x38);
            }
            else {
              auVar86._8_4_ = iVar31;
              auVar86._0_8_ = (ushort *)((long)puVar12 + 2);
            }
          }
          puVar45 = auVar86._0_8_;
          if (auVar86._8_4_ != (int)puVar27) {
code_r0x005118de:
            if ((ulong)**(ushort **)((long)register0x00000020 + -0x58) != 0) {
              puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x48) +
                                (ulong)**(ushort **)((long)register0x00000020 + -0x58));
              *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x50);
            }
            return puVar12;
          }
        } while( true );
      }
      if ((uVar24 & 7) != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
        puVar58 = puVar45;
        goto code_r0x0050da01;
      }
      uVar54 = (ulong)(char)(byte)*puVar45;
      if ((long)uVar54 < 0) {
        uVar46 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
        if ((long)uVar46 < 0) {
          uVar51 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
          if ((long)uVar51 < 0) {
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU);
            if ((long)uVar46 < 0) {
              uVar51 = uVar51 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
              if ((long)uVar51 < 0) {
                uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU);
                if ((long)uVar46 < 0) {
                  uVar51 = uVar51 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a |
                                    0x3ffffffffffU);
                  if ((long)uVar51 < 0) {
                    uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                      0x1ffffffffffffU);
                    if ((long)uVar46 < 0) {
                      uVar51 = uVar51 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
                      if ((long)uVar51 < 0) {
                        puVar58 = (ulong *)((long)puVar45 + 10);
                        bVar3 = *(byte *)((long)puVar45 + 9);
                        if (bVar3 != 1) {
                          if ((char)bVar3 < '\0') goto code_r0x005013a0;
                          if ((bVar3 & 1) == 0) {
                            uVar51 = uVar51 ^ 0x8000000000000000;
                          }
                        }
                      }
                      else {
                        puVar58 = (ulong *)((long)puVar45 + 9);
                      }
                    }
                    else {
                      puVar58 = puVar45 + 1;
                    }
                  }
                  else {
                    puVar58 = (ulong *)((long)puVar45 + 7);
                  }
                }
                else {
                  puVar58 = (ulong *)((long)puVar45 + 6);
                }
              }
              else {
                puVar58 = (ulong *)((long)puVar45 + 5);
              }
            }
            else {
              puVar58 = (ulong *)((long)puVar45 + 4);
            }
          }
          else {
            puVar58 = (ulong *)((long)puVar45 + 3);
          }
          uVar46 = uVar46 & uVar51;
        }
        else {
          puVar58 = (ulong *)((long)puVar45 + 2);
        }
        uVar54 = uVar54 & uVar46;
      }
      else {
        puVar58 = (ulong *)((long)puVar45 + 1);
      }
      puVar61 = (uint *)((long)puVar12 + (long)param_5);
      uVar50 = uVar59 & 0x600;
      uVar52 = uVar59 & 0x1c0;
      uVar10 = (uint)uVar54;
      if (uVar52 == 0xc0) {
        if (uVar50 == 0x200) {
          uVar54 = uVar54 >> 1 ^ -(ulong)(uVar10 & 1);
        }
      }
      else if (uVar52 == 0x80) {
        if ((uVar59 & 0x400) == 0) {
          if (uVar50 == 0x200) {
            uVar54 = (ulong)(int)(uVar10 >> 1 ^ -(uVar10 & 1));
          }
        }
        else {
          puVar12 = *(ulong **)
                     ((long)param_5 + (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if (uVar50 == 0x600) {
            puVar16 = puVar12;
            if (((int)uVar10 < (int)puVar12) ||
               (puVar16 = (ulong *)((ulong)puVar12 >> 0x20),
               (int)((ulong)puVar12 >> 0x20) < (int)uVar10)) {

              _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
              :
              *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
              *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
              *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
              *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
              *(ulong **)((long)register0x00000020 + -0x28) = unaff_R12;
              *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
              *(ulong **)((long)register0x00000020 + -0x38) = puVar16;
              uVar24 = (ulong)(char)(byte)*puVar45;
              if ((long)uVar24 < 0) {
                uVar54 = (long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f;
                if ((long)uVar54 < 0) {
                  uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
                  if ((long)uVar46 < 0) {
                    uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU)
                    ;
                    if ((long)uVar54 < 0) {
                      uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c |
                                        0xfffffffU);
                      if ((long)uVar46 < 0) {
                        uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 |
                                          0x7ffffffffU);
                        if ((long)uVar54 < 0) {
                          uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a |
                                            0x3ffffffffffU);
                          if ((long)uVar46 < 0) {
                            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                              0x1ffffffffffffU);
                            if ((long)uVar54 < 0) {
                              uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff)
                              ;
                              if ((long)uVar46 < 0) {
                                puVar12 = (ulong *)((long)puVar45 + 10);
                                if ((*(byte *)((long)puVar45 + 9) != 1) &&
                                   ((char)*(byte *)((long)puVar45 + 9) < '\0')) {
                                  unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
                                  goto code_r0x005013a0;
                                }
                              }
                              else {
                                puVar12 = (ulong *)((long)puVar45 + 9);
                              }
                            }
                            else {
                              puVar12 = puVar45 + 1;
                            }
                          }
                          else {
                            puVar12 = (ulong *)((long)puVar45 + 7);
                          }
                        }
                        else {
                          puVar12 = (ulong *)((long)puVar45 + 6);
                        }
                      }
                      else {
                        puVar12 = (ulong *)((long)puVar45 + 5);
                      }
                    }
                    else {
                      puVar12 = (ulong *)((long)puVar45 + 4);
                    }
                  }
                  else {
                    puVar12 = (ulong *)((long)puVar45 + 3);
                  }
                  uVar54 = uVar54 & uVar46;
                }
                else {
                  puVar12 = (ulong *)((long)puVar45 + 2);
                }
                uVar24 = uVar24 & uVar54;
              }
              else {
                puVar12 = (ulong *)((long)puVar45 + 1);
              }
              *(undefined **)((long)register0x00000020 + -0x40) = &UNK_00507b88;
              _ZN6google8protobuf8internal8TcParser14AddUnknownEnumEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseEji
                        (param_1,param_5,(ulong)puVar27 & 0xffffffff,uVar24 & 0xffffffff);
              if ((ulong *)*param_3 <= puVar12) {
                if ((ulong)(ushort)*param_5 != 0) {
                  puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                  *puVar61 = *puVar61 | (uint)param_6;
                }
                return puVar12;
              }
              uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar12 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x00507bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar45 = (ulong *)(**(code **)((long)param_5 + uVar24 * 2 + 0x38))
                                           (param_1,puVar12,param_3,
                                            *(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^
                                            (ulong)(ushort)*puVar12,param_5,param_6);
              return puVar45;
            }
          }
          else {
            uStack_70 = (ulong *)&UNK_0050da3d;
            uStack_60 = puVar45;
            puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                         (uVar54 & 0xffffffff,puVar12);
            puVar45 = uStack_60;
            if ((char)puVar16 == '\0')
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
        }
      }
      if (uVar55 == 0x30) {
        uStack_70 = (ulong *)&UNK_0050d983;
        _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                  (param_5,0,puVar61,(uVar24 & 0xfffffff8) >> 3,param_5,param_1);
        if (uVar52 == 0xc0) goto code_r0x0050d948;
code_r0x0050d9a4:
        if (uVar52 == 0x80) {
          *(int *)((long)param_1 + (ulong)*puVar61) = (int)uVar54;
          puVar45 = (ulong *)*param_3;
        }
        else {
          *(bool *)((long)param_1 + (ulong)*puVar61) = uVar54 != 0;
          puVar45 = (ulong *)*param_3;
        }
      }
      else {
        if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        if (uVar52 != 0xc0) goto code_r0x0050d9a4;
code_r0x0050d948:
        *(ulong *)((long)param_1 + (ulong)*puVar61) = uVar54;
        puVar45 = (ulong *)*param_3;
      }
      if (puVar45 <= puVar58) {
        if ((ulong)(ushort)*param_5 != 0) {
          puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
          *puVar61 = *puVar61 | uVar60;
        }
        return puVar58;
      }
      uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar58 & 0xfffffff8);
      puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^ (ulong)(ushort)*puVar58);
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
code_r0x0050da01:
                    /* WARNING: Could not recover jumptable at 0x0050da0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar58,param_3,puVar27);
      return puVar45;
    }
  }
  else {
    uVar25 = *(uint *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
    if (uVar25 <= uVar10) {
      pbVar11 = (byte *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
      do {
        uVar59 = *(ushort *)(pbVar11 + 4);
        uVar60 = uVar10 - uVar25 >> 4;
        if (uVar60 < uVar59) {
          uVar10 = uVar10 - uVar25 & 0xf;
          uVar25 = 1 << (sbyte)uVar10;
          puVar16 = (ulong *)(ulong)uVar25;
          if ((*(ushort *)(pbVar11 + (ulong)uVar60 * 4 + 6) >> uVar10 & 1) == 0) {
            uVar25 = uVar25 - 1 & (uint)*(ushort *)(pbVar11 + (ulong)uVar60 * 4 + 6);
            uVar25 = uVar25 - (uVar25 >> 1 & 0x5555);
            uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
            uVar25 = (uVar10 - (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                     (uint)*(ushort *)(pbVar11 + (ulong)(uVar60 * 2) * 2 + 8);
            goto code_r0x0050145f;
          }
          break;
        }
        uVar25 = *(uint *)(pbVar11 + (ulong)uVar59 * 4 + 6);
        pbVar11 = pbVar11 + (ulong)uVar59 * 4 + 6;
      } while (uVar25 <= uVar10);
    }
  }
  puVar12 = (ulong *)in_FS_OFFSET[5];
  if (puVar12 == puVar27) {
                    /* WARNING: Could not recover jumptable at 0x00501507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar45 = (ulong *)(*(code *)param_5[6])();
    return puVar45;
  }
code_r0x00501627:
  func_0x0099bd00();
  puStack_68 = (ulong *)in_FS_OFFSET[5];
  uVar24 = 0;
  uVar54 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar46 = (ulong)*extraout_RDX;
  pbVar11 = extraout_RDX + 1;
  uStack_60 = puVar16;
  if ((char)*extraout_RDX < '\0') {
    bVar3 = *pbVar11;
    uStack_70 = (ulong *)CONCAT17(bVar3,(undefined7)uStack_70);
    uVar48 = (uint7)((uVar46 << 0x39) >> 8);
    puVar27 = (ulong *)CONCAT71(uVar48,bVar3);
    pbVar11 = extraout_RDX;
    if ((char)bVar3 < '\0') goto code_r0x00501856;
    uVar46 = (long)puVar27 << 7 | (ulong)(uVar48 >> 0x31);
    pbVar11 = extraout_RDX + 2;
  }
code_r0x00501676:
  do {
    uVar10 = (uint)(uVar46 >> 3) & 0x1fffffff;
    uVar25 = uVar10 - 1;
    puVar16 = puVar45;
    if (uVar25 < 0x20) {
      if ((*(uint *)((long)param_6 + 0xc) >> (uVar25 & 0x1f) & 1) != 0) goto code_r0x0050178d;
      uVar10 = *(uint *)((long)param_6 + 0xc) & (1 << ((byte)uVar25 & 0x1f)) - 1U;
      uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar25 = uVar25 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x005016f2:
      pbVar53 = (byte *)((long)param_6 + (ulong)uVar25 * 0xc + (ulong)(uint)param_6[2]);
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(
                     _ZZN6google8protobuf8internal8TcParser9MiniParseILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmE15kMiniParseTable
                     + (ulong)(*(ushort *)
                                ((long)param_6 + (ulong)uVar25 * 0xc + (ulong)(uint)param_6[2] + 10)
                              & 0xf) * 8);
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar46;
      param_1[2] = (ulong)pbVar53;
      puStack_78 = (ulong *)&UNK_00501731;
      uVar24 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar45,pbVar11,puVar12,
                          uVar46 & 0xffffffff | (ulong)(uint)((int)pbVar53 - (int)param_6) << 0x20);
    }
    else {
      uVar25 = *(uint *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
      if (uVar25 <= uVar10) {
        pbVar53 = (byte *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
        do {
          uVar59 = *(ushort *)(pbVar53 + 4);
          uVar60 = uVar10 - uVar25 >> 4;
          if (uVar60 < uVar59) {
            uVar10 = uVar10 - uVar25 & 0xf;
            if ((*(ushort *)(pbVar53 + (ulong)uVar60 * 4 + 6) >> uVar10 & 1) == 0) {
              uVar25 = (1 << (sbyte)uVar10) - 1U &
                       (uint)*(ushort *)(pbVar53 + (ulong)uVar60 * 4 + 6);
              uVar25 = uVar25 - (uVar25 >> 1 & 0x5555);
              uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
              uVar25 = (uVar10 - (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                       (uint)*(ushort *)(pbVar53 + (ulong)(uVar60 * 2) * 2 + 8);
              goto code_r0x005016f2;
            }
            break;
          }
          uVar25 = *(uint *)(pbVar53 + (ulong)uVar59 * 4 + 6);
          pbVar53 = pbVar53 + (ulong)uVar59 * 4 + 6;
        } while (uVar25 <= uVar10);
      }
code_r0x0050178d:
      UNRECOVERED_JUMPTABLE_00 = (code *)param_6[6];
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar46;
      param_1[2] = 0;
      puStack_78 = (ulong *)&UNK_005017aa;
      uVar24 = (*UNRECOVERED_JUMPTABLE_00)(puVar45,pbVar11,puVar12,uVar46 & 0xffffffff);
    }
    while( true ) {
      param_1[3] = uVar24;
      if ((ulong *)in_FS_OFFSET[5] == puStack_68) {
        return param_1;
      }
      puStack_78 = (ulong *)&UNK_00501856;
      puVar12 = (ulong *)func_0x0099bd00();
      pbVar11 = extraout_RDX_00;
      puVar27 = puVar45;
      puVar45 = puVar16;
      uVar24 = extraout_XMM0_Qa;
      uVar54 = extraout_XMM0_Qb;
code_r0x00501856:
      puVar16 = uStack_70;
      bVar3 = pbVar11[2];
      uStack_70._0_7_ = CONCAT16(bVar3,(undefined6)uStack_70);
      uVar48 = (uint7)((ulong)puVar27 >> 0xf) | (uint7)((ulong)((long)puVar27 << 0x39) >> 8);
      if (-1 < (char)bVar3) {
        uVar46 = CONCAT71(uVar48,bVar3) << 0xe | (ulong)(uVar48 >> 0x2a);
        pbVar11 = pbVar11 + 3;
        goto code_r0x00501676;
      }
      bVar2 = pbVar11[3];
      uStack_70._0_5_ = SUB85(puVar16,0);
      uStack_70._0_6_ = CONCAT15(bVar2,(undefined5)uStack_70);
      uVar48 = uVar48 >> 7 | (uint7)((ulong)(CONCAT71(uVar48,bVar3) << 0x39) >> 8);
      if (-1 < (char)bVar2) {
        uVar46 = CONCAT71(uVar48,bVar2) << 0x15 | (ulong)(uVar48 >> 0x23);
        pbVar11 = pbVar11 + 4;
        goto code_r0x00501676;
      }
      bVar3 = pbVar11[4];
      uStack_70._0_4_ = (uint)puVar16;
      uStack_70._0_5_ = CONCAT14(bVar3,(uint)uStack_70);
      uVar48 = uVar48 >> 7 | (uint7)((ulong)(CONCAT71(uVar48,bVar2) << 0x39) >> 8);
      if (-1 < (char)bVar3) break;
      param_1[1] = uVar24;
      param_1[2] = uVar54;
      *param_1 = (ulong)
                 _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
      ;
      puStack_78 = (ulong *)&UNK_005018cf;
      puVar16 = puVar45;
      uVar24 = _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                         (puVar45);
    }
    uVar46 = CONCAT71(uVar48,bVar3) << 0x1c | (ulong)(uVar48 >> 0x1c);
    pbVar11 = pbVar11 + 5;
  } while( true );
  while( true ) {
    bVar3 = *(byte *)((long)puVar45 + 4);
    auVar99[8] = bVar3;
    auVar99._0_8_ = (byte *)((long)puVar45 + 5);
    auVar99._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar45 + 5);
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_70 = (ulong *)&UNK_005185a8;
        auVar99 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
        if (auVar99._0_8_ == 0) goto code_r0x005013a0;
      }
      else {
        auVar99._8_4_ = iVar31;
        auVar99._0_8_ = (ushort *)((long)puVar45 + 6);
      }
    }
    puVar45 = auVar99._0_8_;
    if (auVar99._8_4_ != uVar10) break;
code_r0x00518523:
    uVar54 = *puVar45;
    uVar24 = *puVar27;
    uVar44 = (uint)uVar24 & 3;
    bVar63 = (uVar24 & 4) == 0;
    puVar12 = puVar27 + 1;
    uVar25 = (uint)*puVar12;
    uVar32 = uVar25;
    if (bVar63) {
      uVar32 = uVar44;
    }
    uVar33 = *(uint *)((long)puVar27 + 0xc);
    if (bVar63) {
      uVar33 = 2;
    }
    if (uVar32 == uVar33) {
      iVar31 = uVar32 + 1;
      uStack_70 = (ulong *)&UNK_005185db;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar27,(uVar24 & 4) == 0,uVar32,iVar31);
      puVar12 = (ulong *)(*puVar27 & 0xfffffffffffffff8);
      uVar44 = (uint)puVar27[1];
code_r0x00518564:
      *(int *)(puVar27 + 1) = iVar31;
    }
    else {
      if ((uVar24 & 4) != 0) {
        iVar31 = uVar25 + 1;
        puVar12 = (ulong *)(uVar24 & 0xfffffffffffffff8);
        uVar44 = uVar25;
        goto code_r0x00518564;
      }
      *puVar27 = (long)(uVar24 & 0xfffffffffffffff8) + (ulong)uVar44 + 1;
    }
    *(uint *)((long)puVar12 + (long)(int)uVar44 * 4) = (uint)uVar54;
    puVar12 = (ulong *)((long)puVar45 + 4);
    if ((ulong *)*param_3 <= puVar12) goto code_r0x0051864a;
  }
  goto code_r0x00518608;
code_r0x005104be:
  puVar58 = auVar65._0_8_;
  puVar42 = &stack0xfffffffffffffff8;
  uVar10 = *(byte *)((long)param_5 + 0xf) & 0xf;
  puVar27 = (ulong *)&UNK_00204f70;
  ppuVar37 = ppuVar34;
  ppuVar36 = ppuVar34;
  ppuVar8 = ppuVar34;
  auVar7 = auVar65;
  switch(uVar10) {
  case 0:
    *(undefined **)((long)ppuVar34 + -8) = &UNK_005104e1;
    _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
              (param_5,unaff_RBX);
    puVar45 = (ulong *)*param_3;
    goto joined_r0x0051056f;
  case 1:
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051056b;
    _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
              (param_5,unaff_RBX);
    puVar45 = (ulong *)*param_3;
joined_r0x0051056f:
    if (puVar58 < puVar45) {
code_r0x00510575:
      do {
        bVar3 = (byte)*puVar58;
        uVar10 = (uint)bVar3;
        unaff_R13 = (ulong *)((long)puVar58 + 1);
        if ((char)bVar3 < '\0') {
          uVar48 = (uint7)(((ulong)bVar3 << 0x39) >> 8);
          lVar22 = CONCAT71(uVar48,*(byte *)unaff_R13);
          if ((char)*(byte *)unaff_R13 < '\0') {
            uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
            lVar22 = CONCAT71(uVar48,*(byte *)((long)puVar58 + 2));
            if ((char)*(byte *)((long)puVar58 + 2) < '\0') {
              uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar48,*(byte *)((long)puVar58 + 3));
              if ((char)*(byte *)((long)puVar58 + 3) < '\0') {
                uVar48 = uVar48 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                if ((char)*(byte *)((long)puVar58 + 4) < '\0') {
                  uVar10 = 0;
                  unaff_R13 = (ulong *)0x0;
                }
                else {
                  uVar10 = (int)CONCAT71(uVar48,*(byte *)((long)puVar58 + 4)) << 0x1c |
                           (uint)(uVar48 >> 0x1c);
                  unaff_R13 = (ulong *)((long)puVar58 + 5);
                }
              }
              else {
                uVar10 = (int)lVar22 << 0x15 | (uint)(uVar48 >> 0x23);
                unaff_R13 = (ulong *)((long)puVar58 + 4);
              }
            }
            else {
              uVar10 = (int)lVar22 << 0xe | (uint)(uVar48 >> 0x2a);
              unaff_R13 = (ulong *)((long)puVar58 + 3);
            }
          }
          else {
            uVar10 = (int)lVar22 << 7 | (uint)(((ulong)bVar3 << 0x39) >> 0x39);
            unaff_R13 = (ulong *)((long)puVar58 + 2);
          }
        }
        ppuVar35 = ppuVar34;
        if (uVar10 != (uint)uStack_70) {
          uVar24 = (ulong)((uint)(byte)uStack_60[1] & (uint)(ushort)*puVar58 & 0xfffffff8);
          if (in_FS_OFFSET[5] == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0051076e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar45 = (ulong *)(**(code **)((long)uStack_60 + uVar24 * 2 + 0x38))
                                         (CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)),puVar58,
                                          param_3,*(ulong *)((long)uStack_60 + uVar24 * 2 + 0x40) ^
                                                  (ulong)(ushort)*puVar58,uStack_60,puStack_68);
            return puVar45;
          }
          goto code_r0x0051080d;
        }
code_r0x00510340:
        uVar59 = *(ushort *)((long)param_5 + 0xc);
        uVar54 = param_5[3];
        if (uVar54 == 0) {
          *(undefined **)((long)ppuVar35 + -8) = &UNK_00510368;
          unaff_RBX = (ulong *)_Znwm(uVar59);
        }
        else {
          *(undefined **)((long)ppuVar35 + -8) = &UNK_00510359;
          unaff_RBX = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,uVar59 + 7 & 0xfffffff8);
        }
        uVar59 = *(ushort *)((long)param_5 + 0xc);
        unaff_RBX[1] = 0;
        pbVar11 = (byte *)((long)unaff_RBX + ((ulong)uVar59 - 8));
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        if ((*(byte *)((long)param_5 + 0xf) & 0xf) == 5) {
          uVar54 = param_5[3];
          unaff_RBX[1] = 0;
          unaff_RBX[2] = 0;
          unaff_RBX[3] = 0;
          if (uVar54 != 0) {
            *(undefined **)((long)ppuVar35 + -8) = &UNK_005103b3;
            _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                      (uVar54,unaff_RBX + 1,
                       _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                      );
          }
        }
        bVar3 = *(byte *)((long)param_5 + 0xf) >> 4;
        ppuVar34 = ppuVar35;
        if (4 < bVar3) {
          if (bVar3 == 6) {
code_r0x0051050d:
            *(undefined **)((long)ppuVar35 + -8) = &UNK_00510516;
            _ZNK6google8protobuf8internal9ClassData12PlacementNewEPvPNS0_5ArenaE();
            ppuVar34 = ppuVar35;
          }
          else {
            uVar46 = (ulong)*(byte *)((long)param_5 + 0xe);
            uVar54 = param_5[3];
            pbVar11 = (byte *)((long)unaff_RBX + uVar46);
            pbVar11[0] = 0;
            pbVar11[1] = 0;
            pbVar11[2] = 0;
            pbVar11[3] = 0;
            pbVar11[4] = 0;
            pbVar11[5] = 0;
            pbVar11[6] = 0;
            pbVar11[7] = 0;
            pbVar11[8] = 0;
            pbVar11[9] = 0;
            pbVar11[10] = 0;
            pbVar11[0xb] = 0;
            pbVar11[0xc] = 0;
            pbVar11[0xd] = 0;
            pbVar11[0xe] = 0;
            pbVar11[0xf] = 0;
            pbVar11 = (byte *)((long)unaff_RBX + uVar46 + 0x10);
            pbVar11[0] = 0;
            pbVar11[1] = 0;
            pbVar11[2] = 0;
            pbVar11[3] = 0;
            pbVar11[4] = 0;
            pbVar11[5] = 0;
            pbVar11[6] = 0;
            pbVar11[7] = 0;
            if (uVar54 != 0) {
              *(undefined **)((long)ppuVar35 + -8) = &UNK_005105c0;
              _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                        (uVar54,(byte *)(uVar46 + (long)unaff_RBX),
                         _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                        );
            }
          }
        }
        bVar3 = (byte)*unaff_R13;
        if ((char)bVar3 < '\0') {
          ppuVar34[-1] = (ulong *)&UNK_005103ea;
          auVar80 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(unaff_R13,bVar3);
          if (auVar80._0_8_ != 0) goto code_r0x005103f6;
code_r0x005106dc:
          if (param_5[3] == 0) {
            ppuVar34[-1] = (ulong *)&UNK_005106ee;
            _ZN6google8protobuf8internal14UntypedMapBase10DeleteNodeEPNS1_8NodeBaseE
                      (param_5,unaff_RBX);
          }
          if (in_FS_OFFSET[5] != lStack_38) goto code_r0x0051080d;
          param_1 = (ulong *)CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
          unaff_RBP = (undefined1 *)ppuVar34[0x12];
          register0x00000020 = (BADSPACEBASE *)(ppuVar34 + 0x13);
          param_5 = uStack_60;
          param_6 = puStack_68;
          goto code_r0x005013a0;
        }
        auVar80[8] = bVar3;
        auVar80._0_8_ = (byte *)((long)unaff_R13 + 1);
        auVar80._9_3_ = 0;
code_r0x005103f6:
        puVar45 = auVar80._0_8_;
        if ((int)(uint)param_3[0xb] < 1) goto code_r0x005106dc;
        uVar25 = auVar80._8_4_ + (auVar80._0_4_ - (int)param_3[1]);
        *param_3 = (long)(int)((int)uVar25 >> 0x1f & uVar25) + param_3[1];
        uVar10 = *(uint *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar25;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
        *ppuVar34 = param_5;
        ppuVar34[-1] = (ulong *)&UNK_00510452;
        param_1 = unaff_RBX;
        puVar49 = uStack_60;
        param_6 = puStack_78;
        auVar65 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                            (unaff_RBX,puVar45,param_3,
                             CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50)));
        puVar58 = auVar65._0_8_;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
        uVar10 = (uVar10 - uVar25) + *(uint *)((long)param_3 + 0x1c);
        unaff_R13 = (ulong *)(ulong)uVar10;
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        if (((uint)param_3[10] != 0) ||
           (*param_3 = (long)(int)((int)uVar10 >> 0x1f & uVar10) + param_3[1],
           puVar58 == (ulong *)0x0)) goto code_r0x005106dc;
        if ((bStack_3d & 8) == 0) goto code_r0x005104be;
        uVar10 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)param_5 + 0xe));
        puVar61 = *(uint **)(CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50)) + 8);
        puVar45 = (ulong *)(long)(short)*puVar61;
        param_1 = (ulong *)(ulong)(*puVar61 >> 0x10);
        puVar27 = (ulong *)(((long)(int)uVar10 - (long)puVar45) - (long)param_1);
        auVar4._8_8_ = puVar27;
        auVar4._0_8_ = puVar58;
        auVar65._8_8_ = puVar27;
        auVar65._0_8_ = puVar58;
        if ((ulong *)((long)(int)uVar10 - (long)puVar45) < param_1) goto code_r0x005104be;
        uVar25 = puVar61[1];
        puVar45 = (ulong *)(ulong)uVar25;
        param_1 = (ulong *)(ulong)(ushort)uVar25;
        if (puVar27 < param_1) {
          auVar65 = auVar4;
          if ((puVar61[((ulong)puVar27 >> 5) + 2] >> ((uint)puVar27 & 0x1f) & 1) != 0)
          goto code_r0x005104be;
        }
        else {
          auVar65._8_4_ = uVar25 >> 0x10;
          auVar65._12_4_ = 0;
          puVar45 = (ulong *)0x0;
          while (puVar45 < (ulong *)(ulong)(uVar25 >> 0x10)) {
            uVar60 = *(uint *)((long)puVar61 + (long)puVar45 * 4 + (ulong)(uVar25 >> 3 & 0x1ffc) + 8
                              );
            param_1 = (ulong *)(ulong)uVar60;
            puVar49 = (ulong *)(ulong)((int)uVar10 < (int)uVar60);
            puVar45 = (ulong *)(((long)puVar45 * 2 - (long)puVar49) + 2);
            if (uVar60 == uVar10) goto code_r0x005104be;
          }
        }
        ppuVar34[-1] = (ulong *)&UNK_0051061f;
        _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                  (CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)),uStack_60,param_5,uStack_70,
                   unaff_RBX,puVar29);
        if ((ulong *)*param_3 <= puVar58) break;
      } while( true );
    }
    break;
  case 2:
code_r0x00510520:
    *(undefined **)((long)ppuVar36 + -8) = &UNK_0051052b;
    _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
              (param_5,unaff_RBX);
    ppuVar34 = ppuVar36;
    if (puVar58 < (ulong *)*param_3) goto code_r0x00510575;
    break;
  case 3:
  case 4:
    goto code_r0x00510812;
  case 5:
code_r0x00510540:
    *(undefined **)((long)ppuVar37 + -8) = &UNK_0051054b;
    _ZN6google8protobuf8internal10KeyMapBaseINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE19InsertOrReplaceNodeEPNS1_7KeyNodeIS9_EE
              (param_5,unaff_RBX);
    ppuVar34 = ppuVar37;
    if (puVar58 < (ulong *)*param_3) goto code_r0x00510575;
    break;
  case 6:
    goto code_r0x00510893;
  case 7:
    bVar63 = (int)uVar24 == 0;
    goto code_r0x005108b3;
  case 8:
    goto code_r0x00510893;
  case 9:
    uRam0000000045b708b1 =
         uRam0000000045b708b1 ^ *(int *)(&UNK_00204f70 + (ulong)uVar10 * 4) + 0x204f70U;
    bVar63 = auVar65._8_4_ == 0;
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
      uVar24 = *(ulong *)*param_1;
      if ((uVar24 & 4) == 0) {
        puVar45 = (ulong *)(ulong)((uint)uVar24 & 3);
      }
      else {
        puVar45 = (ulong *)(ulong)(uint)((ulong *)*param_1)[1];
      }
      break;
    case 9:
    case 10:
      puVar45 = (ulong *)(ulong)*(uint *)(*param_1 + 8);
      break;
    default:
      goto code_r0x0051e680;
    }
    if (in_FS_OFFSET[5] ==
        CONCAT44((int)((ulong)unaff_R14 >> 0x20),
                 *(int *)(&UNK_00204f70 + (ulong)uVar10 * 4) + 0x204f70U)) {
      return puVar45;
    }
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e680;
    func_0x0099bd00();
code_r0x0051e680:
    puVar18 = &stack0xffffffffffffffd8;
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e698;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(puVar18,&UNK_0017bf02,0x5ad);
    iVar31 = 0x17a6b5;
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6a7;
    uVar14 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(puVar18);
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6af;
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar14);
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6b7;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
    uVar59 = *(ushort *)(puVar18 + 10);
    if (uVar59 == 0) {
      return (ulong *)0x0;
    }
    *(undefined1 **)((long)ppuVar34 + -8) = puVar42;
    if ((short)uVar59 < 0) {
      *(undefined **)((long)ppuVar34 + -0x10) = &UNK_0051e6fd;
      lVar22 = _ZNK6google8protobuf8internal12ExtensionSet20FindOrNullInLargeMapEi();
      if (lVar22 == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      lVar20 = (ulong)uVar59 << 5;
      lVar22 = *(long *)(puVar18 + 0x10) + 8;
      while( true ) {
        iVar26 = *(int *)(lVar22 + -8);
        if (iVar26 != iVar31 && iVar31 <= iVar26) {
          return (ulong *)0x0;
        }
        if (iVar26 == iVar31) break;
        lVar22 = lVar22 + 0x20;
        lVar20 = lVar20 + -0x20;
        if (lVar20 == 0) {
          return (ulong *)0x0;
        }
      }
    }
    return (ulong *)(ulong)*(byte *)(lVar22 + 8);
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar61 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)) + (ulong)(ushort)*uStack_60
                      );
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  if (in_FS_OFFSET[5] == lStack_38) {
    return puVar58;
  }
  goto code_r0x0051080d;
  while( true ) {
    bVar3 = *(byte *)((long)puVar45 + 4);
    auVar89[8] = bVar3;
    auVar89._0_8_ = (byte *)((long)puVar45 + 5);
    auVar89._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar45 + 5);
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_60 = (ulong *)&UNK_005137e8;
        auVar89 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
        if (auVar89._0_8_ == 0) goto code_r0x005138b6;
      }
      else {
        auVar89._8_4_ = iVar31;
        auVar89._0_8_ = (ushort *)((long)puVar45 + 6);
      }
    }
    puVar45 = auVar89._0_8_;
    if (auVar89._8_4_ != uVar10) break;
code_r0x00513763:
    uVar54 = *puVar45;
    uVar24 = *puVar27;
    uVar44 = (uint)uVar24 & 3;
    bVar63 = (uVar24 & 4) == 0;
    uVar25 = (uint)puVar27[1];
    uVar32 = uVar25;
    if (bVar63) {
      uVar32 = uVar44;
    }
    uVar33 = *(uint *)((long)puVar27 + 0xc);
    if (bVar63) {
      uVar33 = 2;
    }
    if (uVar32 == uVar33) {
      iVar31 = uVar32 + 1;
      uStack_60 = (ulong *)&UNK_0051381b;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar27,(uVar24 & 4) == 0,uVar32,iVar31);
      pbVar53 = (byte *)(*puVar27 & 0xfffffffffffffff8);
      uVar44 = (uint)puVar27[1];
code_r0x005137a4:
      *(int *)pbVar11 = iVar31;
    }
    else {
      pbVar53 = (byte *)(uVar24 & 0xfffffffffffffff8);
      if ((uVar24 & 4) != 0) {
        iVar31 = uVar25 + 1;
        uVar44 = uVar25;
        goto code_r0x005137a4;
      }
      *puVar27 = (ulong)(pbVar53 + (ulong)uVar44 + 1);
      pbVar53 = pbVar11;
    }
    *(uint *)(pbVar53 + (long)(int)uVar44 * 4) = (uint)uVar54;
    puVar12 = (ulong *)((long)puVar45 + 4);
    if ((ulong *)*param_3 <= puVar12) goto code_r0x0051388a;
  }
  goto code_r0x00513848;
code_r0x005138b6:
  param_6 = (ulong *)((ulong)param_6 & 0xffffffff);
  goto code_r0x005013a0;
code_r0x0050dc60:
  if (in_FS_OFFSET[5] != lVar22) {
code_r0x0050dddd:
    puStack_80 = (ulong *)&UNK_0050dde2;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  goto 
  _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
  ;
code_r0x00513390:
  iVar31 = (int)param_3[1] - (int)pbVar53;
  iVar26 = (int)uVar24;
  if (iVar26 <= iVar31) goto code_r0x005133e6;
  uStack_60 = (ulong *)&UNK_005133aa;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar53,param_3[1],pbVar11);
  if (lVar20 == 0) goto code_r0x00513408;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar26 - iVar31 < 0x11) {
    uStack_60 = (ulong *)&UNK_0051345b;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar26 - iVar31),pbVar11);
    puVar45 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar26 - iVar31)) {
      puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x0051340a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00513408;
  uStack_60 = (ulong *)&UNK_005133d3;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00513408;
  uVar24 = (ulong)(uint)(iVar26 - (iVar31 + iVar56));
  pbVar53 = (byte *)(lVar20 + iVar56);
  goto code_r0x00513390;
code_r0x00513408:
  puVar45 = (ulong *)0x0;
  goto code_r0x0051340a;
code_r0x00512420:
  do {
    bVar3 = (byte)*puVar45;
    if ((long)(char)bVar3 < 0) {
      puStack_80 = (ulong *)&UNK_0051243b;
      auVar68 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
      if (auVar68._0_8_ == 0) {
        puVar45 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar68._8_8_ = (long)(char)bVar3;
      auVar68._0_8_ = (byte *)((long)puVar45 + 1);
    }
    puVar45 = auVar68._0_8_;
    uVar24 = *param_1;
    bVar63 = (uVar24 & 4) != 0;
    uVar10 = (uint)param_1[1];
    uVar25 = (uint)uVar24 & 3;
    if (bVar63) {
      uVar25 = uVar10;
    }
    uVar60 = *(uint *)((long)param_1 + 0xc);
    if (!bVar63) {
      uVar60 = 1;
    }
    uVar44 = uVar25 + 1;
    if (uVar25 == uVar60) {
      puStack_80 = (ulong *)&UNK_005123fb;
      puStack_68 = auVar68._8_8_;
      uStack_60 = puVar45;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar24 & 4) == 0,uVar25,uVar44);
      auVar68._8_8_ = puStack_68;
      auVar68._0_8_ = uStack_60;
      uVar54 = *param_1 & 0xfffffffffffffff8;
      uVar10 = (uint)param_1[1];
code_r0x00512410:
      puVar45 = auVar68._0_8_;
      *(uint *)(param_1 + 1) = uVar44;
      *(long *)(uVar54 + (long)(int)uVar10 * 8) = auVar68._8_8_;
    }
    else {
      uVar54 = uVar24 & 0xfffffffffffffff8;
      if ((uVar24 & 4) != 0) goto code_r0x00512410;
      *param_1 = uVar54 | uVar44;
      param_1[(ulong)((uint)uVar24 & 3) + 1] = (ulong)auVar68._8_8_;
    }
  } while (puVar45 < &stack0xffffffffffffffa8 + iVar56);
  puVar27 = (ulong *)param_3[1];
code_r0x00512492:
  puVar12 = (ulong *)0x0;
  if (puVar45 == (ulong *)(&stack0xffffffffffffffa8 + iVar56)) {
    puVar12 = (ulong *)(((long)puVar45 - (long)&stack0xffffffffffffffa8) + (long)puVar27);
  }
  goto code_r0x005123b7;
code_r0x0051229b:
  puVar12 = (ulong *)0x0;
  goto code_r0x005123b7;
code_r0x00512510:
  iVar31 = (int)param_3[1] - (int)pbVar11;
  iVar26 = (int)uVar24;
  if (iVar26 <= iVar31) goto code_r0x00512566;
  uStack_60 = (ulong *)&UNK_0051252a;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar11,param_3[1],param_1);
  if (lVar20 == 0) goto code_r0x00512588;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar26 - iVar31 < 0x11) {
    uStack_60 = (ulong *)&UNK_005125db;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar26 - iVar31),param_1);
    puVar45 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar26 - iVar31)) {
      puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x0051258a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512588;
  uStack_60 = (ulong *)&UNK_00512553;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00512588;
  uVar24 = (ulong)(uint)(iVar26 - (iVar31 + iVar56));
  pbVar11 = (byte *)(lVar20 + iVar56);
  goto code_r0x00512510;
code_r0x00512588:
  puVar45 = (ulong *)0x0;
  goto code_r0x0051258a;
code_r0x00512b00:
  iVar31 = (int)param_3[1] - (int)pbVar11;
  iVar26 = (int)uVar24;
  if (iVar26 <= iVar31) goto code_r0x00512b56;
  uStack_60 = (ulong *)&UNK_00512b1a;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar11,param_3[1],puVar27);
  if (lVar20 == 0) goto code_r0x00512b78;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar26 - iVar31 < 0x11) {
    uStack_60 = (ulong *)&UNK_00512bcb;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar26 - iVar31),puVar27);
    puVar45 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar26 - iVar31)) {
      puVar45 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x00512b7a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512b78;
  uStack_60 = (ulong *)&UNK_00512b43;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00512b78;
  uVar24 = (ulong)(uint)(iVar26 - (iVar31 + iVar56));
  pbVar11 = (byte *)(lVar20 + iVar56);
  goto code_r0x00512b00;
code_r0x00512b78:
  puVar45 = (ulong *)0x0;
  goto code_r0x00512b7a;
code_r0x00512a0f:
  do {
    bVar3 = (byte)*puVar45;
    if ((long)(char)bVar3 < 0) {
      puStack_80 = (ulong *)&UNK_00512a2b;
      auVar71 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
      if (auVar71._0_8_ == 0) {
        puVar45 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar71._8_8_ = (long)(char)bVar3;
      auVar71._0_8_ = (byte *)((long)puVar45 + 1);
    }
    auVar104 = auVar71._0_12_;
    puVar45 = auVar71._0_8_;
    uVar24 = *puVar27;
    bVar63 = (uVar24 & 4) != 0;
    uVar10 = (uint)puVar27[1];
    uVar25 = (uint)uVar24 & 3;
    if (bVar63) {
      uVar25 = uVar10;
    }
    uVar60 = *(uint *)((long)puVar27 + 0xc);
    if (!bVar63) {
      uVar60 = 2;
    }
    uVar44 = uVar25 + 1;
    if (uVar25 == uVar60) {
      puStack_80 = (ulong *)&UNK_005129ea;
      puStack_68 = auVar71._8_8_;
      uStack_60 = puVar45;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar27,(uVar24 & 4) == 0,uVar25,uVar44);
      auVar6._8_8_ = puStack_68;
      auVar6._0_8_ = uStack_60;
      auVar104 = auVar6._0_12_;
      uVar54 = *puVar27 & 0xfffffffffffffff8;
      uVar10 = (uint)puVar27[1];
code_r0x00512a00:
      puVar45 = auVar104._0_8_;
      *(uint *)(puVar27 + 1) = uVar44;
      *(int *)(uVar54 + (long)(int)uVar10 * 4) = auVar104._8_4_;
    }
    else {
      uVar54 = uVar24 & 0xfffffffffffffff8;
      if ((uVar24 & 4) != 0) goto code_r0x00512a00;
      *puVar27 = uVar54 | uVar44;
      *(int *)((long)puVar27 + (ulong)((uint)uVar24 & 3) * 4 + 8) = auVar71._8_4_;
    }
  } while (puVar45 < &stack0xffffffffffffffa8 + iVar56);
  puVar12 = (ulong *)param_3[1];
code_r0x00512a81:
  puVar27 = (ulong *)0x0;
  if (puVar45 == (ulong *)(&stack0xffffffffffffffa8 + iVar56)) {
    puVar27 = (ulong *)(((long)puVar45 - (long)&stack0xffffffffffffffa8) + (long)puVar12);
  }
  goto code_r0x005129a6;
code_r0x0051288a:
  puVar27 = (ulong *)0x0;
  goto code_r0x005129a6;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051229b;
    puStack_80 = (ulong *)&UNK_0051226c;
    lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar20 == 0) goto code_r0x0051229b;
    uVar10 = (int)uVar24 - (iVar31 + iVar26);
    uVar24 = (ulong)uVar10;
    puVar45 = (ulong *)(lVar20 + iVar26);
    puVar27 = (ulong *)param_3[1];
    iVar31 = (int)puVar27 - (int)puVar45;
    if ((int)uVar10 <= iVar31) break;
code_r0x00512179:
    if (puVar45 < puVar27) {
      do {
        while( true ) {
          bVar3 = (byte)*puVar45;
          if ((long)(char)bVar3 < 0) {
            puStack_80 = (ulong *)&UNK_005121eb;
            auVar66 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
            if (auVar66._0_8_ == 0) goto code_r0x0051229b;
          }
          else {
            auVar66._8_8_ = (long)(char)bVar3;
            auVar66._0_8_ = (byte *)((long)puVar45 + 1);
          }
          puVar45 = auVar66._0_8_;
          uVar54 = *param_1;
          bVar63 = (uVar54 & 4) != 0;
          uVar10 = (uint)param_1[1];
          uVar25 = (uint)uVar54 & 3;
          if (bVar63) {
            uVar25 = uVar10;
          }
          uVar60 = *(uint *)((long)param_1 + 0xc);
          if (!bVar63) {
            uVar60 = 1;
          }
          uVar44 = uVar25 + 1;
          if (uVar25 != uVar60) break;
          puStack_80 = (ulong *)&UNK_005121a2;
          puStack_68 = auVar66._8_8_;
          uStack_60 = puVar45;
          _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar54 & 4) == 0,uVar25,uVar44);
          auVar66._8_8_ = puStack_68;
          auVar66._0_8_ = uStack_60;
          uVar46 = *param_1 & 0xfffffffffffffff8;
          uVar10 = (uint)param_1[1];
code_r0x005121c0:
          puVar45 = auVar66._0_8_;
          *(uint *)(param_1 + 1) = uVar44;
          *(long *)(uVar46 + (long)(int)uVar10 * 8) = auVar66._8_8_;
          if (puVar27 <= puVar45) goto code_r0x00512244;
        }
        uVar46 = uVar54 & 0xfffffffffffffff8;
        if ((uVar54 & 4) != 0) goto code_r0x005121c0;
        *param_1 = uVar46 | uVar44;
        param_1[(ulong)((uint)uVar54 & 3) + 1] = (ulong)auVar66._8_8_;
      } while (puVar45 < puVar27);
code_r0x00512244:
      puVar27 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar26 = (int)puVar45 - (int)puVar27;
    iVar56 = (int)uVar24 - iVar31;
    if (iVar56 < 0x11) {
      puVar45 = (ulong *)(&stack0xffffffffffffffa8 + iVar26);
      if ((long)iVar56 <= (long)iVar26) goto code_r0x00512492;
      goto code_r0x00512420;
    }
  }
code_r0x005122a5:
  puVar27 = (ulong *)((long)puVar45 + (long)(int)uVar10);
  if (0 < (int)uVar10) {
    do {
      while( true ) {
        bVar3 = (byte)*puVar45;
        if ((long)(char)bVar3 < 0) {
          puStack_80 = (ulong *)&UNK_0051235b;
          auVar67 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
          if (auVar67._0_8_ == 0) {
            puVar45 = (ulong *)0x0;
            goto code_r0x005123ae;
          }
        }
        else {
          auVar67._8_8_ = (long)(char)bVar3;
          auVar67._0_8_ = (byte *)((long)puVar45 + 1);
        }
        puVar12 = auVar67._8_8_;
        puVar45 = auVar67._0_8_;
        uVar24 = *param_1;
        bVar63 = (uVar24 & 4) != 0;
        uVar10 = (uint)param_1[1];
        uVar25 = (uint)uVar24 & 3;
        if (bVar63) {
          uVar25 = uVar10;
        }
        uVar60 = *(uint *)((long)param_1 + 0xc);
        if (!bVar63) {
          uVar60 = 1;
        }
        uVar44 = uVar25 + 1;
        if (uVar25 != uVar60) break;
        puStack_80 = (ulong *)&UNK_0051231e;
        uStack_70 = puVar12;
        _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar24 & 4) == 0,uVar25,uVar44);
        uVar54 = *param_1 & 0xfffffffffffffff8;
        uVar10 = (uint)param_1[1];
        puVar12 = uStack_70;
code_r0x00512330:
        *(uint *)(param_1 + 1) = uVar44;
        *(ulong **)(uVar54 + (long)(int)uVar10 * 8) = puVar12;
        if (puVar27 <= puVar45) goto code_r0x005123ae;
      }
      uVar54 = uVar24 & 0xfffffffffffffff8;
      if ((uVar24 & 4) != 0) goto code_r0x00512330;
      *param_1 = uVar54 | uVar44;
      param_1[(ulong)((uint)uVar24 & 3) + 1] = (ulong)puVar12;
    } while (puVar45 < puVar27);
  }
code_r0x005123ae:
  puVar12 = (ulong *)0x0;
  if (puVar27 == puVar45) {
    puVar12 = puVar45;
  }
code_r0x005123b7:
  if (in_FS_OFFSET[5] != lVar22) {
    puStack_80 = (ulong *)&UNK_005124b2;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  return puVar12;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051288a;
    puStack_80 = (ulong *)&UNK_0051285b;
    lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar20 == 0) goto code_r0x0051288a;
    uVar10 = (int)uVar24 - (iVar31 + iVar26);
    uVar24 = (ulong)uVar10;
    puVar45 = (ulong *)(lVar20 + iVar26);
    puVar12 = (ulong *)param_3[1];
    iVar31 = (int)puVar12 - (int)puVar45;
    if ((int)uVar10 <= iVar31) break;
code_r0x00512769:
    if (puVar45 < puVar12) {
      do {
        while( true ) {
          bVar3 = (byte)*puVar45;
          if ((long)(char)bVar3 < 0) {
            puStack_80 = (ulong *)&UNK_005127db;
            auVar69 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
            if (auVar69._0_8_ == 0) goto code_r0x0051288a;
          }
          else {
            auVar69._8_8_ = (long)(char)bVar3;
            auVar69._0_8_ = (byte *)((long)puVar45 + 1);
          }
          auVar104 = auVar69._0_12_;
          puVar45 = auVar69._0_8_;
          uVar54 = *puVar27;
          bVar63 = (uVar54 & 4) != 0;
          uVar10 = (uint)puVar27[1];
          uVar25 = (uint)uVar54 & 3;
          if (bVar63) {
            uVar25 = uVar10;
          }
          uVar60 = *(uint *)((long)puVar27 + 0xc);
          if (!bVar63) {
            uVar60 = 2;
          }
          uVar44 = uVar25 + 1;
          if (uVar25 != uVar60) break;
          puStack_80 = (ulong *)&UNK_00512792;
          puStack_68 = auVar69._8_8_;
          uStack_60 = puVar45;
          _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar27,(uVar54 & 4) == 0,uVar25,uVar44);
          auVar5._8_8_ = puStack_68;
          auVar5._0_8_ = uStack_60;
          auVar104 = auVar5._0_12_;
          uVar46 = *puVar27 & 0xfffffffffffffff8;
          uVar10 = (uint)puVar27[1];
code_r0x005127b0:
          puVar45 = auVar104._0_8_;
          *(uint *)(puVar27 + 1) = uVar44;
          *(int *)(uVar46 + (long)(int)uVar10 * 4) = auVar104._8_4_;
          if (puVar12 <= puVar45) goto code_r0x00512833;
        }
        uVar46 = uVar54 & 0xfffffffffffffff8;
        if ((uVar54 & 4) != 0) goto code_r0x005127b0;
        *puVar27 = uVar46 | uVar44;
        *(int *)((long)puVar27 + (ulong)((uint)uVar54 & 3) * 4 + 8) = auVar69._8_4_;
      } while (puVar45 < puVar12);
code_r0x00512833:
      puVar12 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar26 = (int)puVar45 - (int)puVar12;
    iVar56 = (int)uVar24 - iVar31;
    if (iVar56 < 0x11) {
      puVar45 = (ulong *)(&stack0xffffffffffffffa8 + iVar26);
      if ((long)iVar56 <= (long)iVar26) goto code_r0x00512a81;
      goto code_r0x00512a0f;
    }
  }
code_r0x00512894:
  puVar12 = (ulong *)((long)puVar45 + (long)(int)uVar10);
  if (0 < (int)uVar10) {
    do {
      while( true ) {
        bVar3 = (byte)*puVar45;
        if ((long)(char)bVar3 < 0) {
          puStack_80 = (ulong *)&UNK_0051294b;
          auVar70 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar45,bVar3);
          if (auVar70._0_8_ == 0) {
            puVar45 = (ulong *)0x0;
            goto code_r0x0051299d;
          }
        }
        else {
          auVar70._8_8_ = (long)(char)bVar3;
          auVar70._0_8_ = (byte *)((long)puVar45 + 1);
        }
        puVar45 = auVar70._0_8_;
        uVar24 = *puVar27;
        bVar63 = (uVar24 & 4) != 0;
        uVar10 = (uint)puVar27[1];
        uVar25 = (uint)uVar24 & 3;
        if (bVar63) {
          uVar25 = uVar10;
        }
        uVar60 = *(uint *)((long)puVar27 + 0xc);
        if (!bVar63) {
          uVar60 = 2;
        }
        uVar44 = uVar25 + 1;
        if (uVar25 != uVar60) break;
        puStack_80 = (ulong *)&UNK_0051290d;
        uStack_70 = auVar70._8_8_;
        _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar27,(uVar24 & 4) == 0,uVar25,uVar44);
        uVar54 = *puVar27 & 0xfffffffffffffff8;
        uVar10 = (uint)puVar27[1];
        puVar16 = uStack_70;
code_r0x00512920:
        *(uint *)(puVar27 + 1) = uVar44;
        *(int *)(uVar54 + (long)(int)uVar10 * 4) = (int)puVar16;
        if (puVar12 <= puVar45) goto code_r0x0051299d;
      }
      uVar54 = uVar24 & 0xfffffffffffffff8;
      puVar16 = auVar70._8_8_;
      if ((uVar24 & 4) != 0) goto code_r0x00512920;
      *puVar27 = uVar54 | uVar44;
      *(int *)((long)puVar27 + (ulong)((uint)uVar24 & 3) * 4 + 8) = auVar70._8_4_;
    } while (puVar45 < puVar12);
  }
code_r0x0051299d:
  puVar27 = (ulong *)0x0;
  if (puVar12 == puVar45) {
    puVar27 = puVar45;
  }
code_r0x005129a6:
  if (in_FS_OFFSET[5] != lVar22) {
    puStack_80 = (ulong *)&UNK_00512aa1;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  return puVar27;
  while( true ) {
    bVar3 = (byte)puVar45[1];
    auVar88[8] = bVar3;
    auVar88._0_8_ = (byte *)((long)puVar45 + 9);
    auVar88._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar45 + 9);
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_60 = (ulong *)&UNK_005136c8;
        auVar88 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
        if (auVar88._0_8_ == 0) goto code_r0x005138b6;
      }
      else {
        auVar88._8_4_ = iVar31;
        auVar88._0_8_ = (ushort *)((long)puVar45 + 10);
      }
    }
    puVar45 = auVar88._0_8_;
    if (auVar88._8_4_ != uVar10) break;
code_r0x00513643:
    uVar24 = *puVar45;
    uVar54 = *puVar27;
    uVar44 = (uint)uVar54 & 3;
    bVar63 = (uVar54 & 4) == 0;
    uVar25 = (uint)puVar27[1];
    uVar32 = uVar25;
    if (bVar63) {
      uVar32 = uVar44;
    }
    uVar33 = *(uint *)((long)puVar27 + 0xc);
    if (bVar63) {
      uVar33 = 1;
    }
    if (uVar32 == uVar33) {
      iVar31 = uVar32 + 1;
      uStack_60 = (ulong *)&UNK_005136fb;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar27,(uVar54 & 4) == 0,uVar32,iVar31);
      pbVar53 = (byte *)(*puVar27 & 0xfffffffffffffff8);
      uVar44 = (uint)puVar27[1];
code_r0x00513684:
      *(int *)pbVar11 = iVar31;
    }
    else {
      pbVar53 = (byte *)(uVar54 & 0xfffffffffffffff8);
      if ((uVar54 & 4) != 0) {
        iVar31 = uVar25 + 1;
        uVar44 = uVar25;
        goto code_r0x00513684;
      }
      *puVar27 = (ulong)(pbVar53 + (ulong)uVar44 + 1);
      pbVar53 = pbVar11;
    }
    *(ulong *)(pbVar53 + (long)(int)uVar44 * 8) = uVar24;
    puVar12 = puVar45 + 1;
    if ((ulong *)*param_3 <= puVar12) goto code_r0x0051388a;
  }
code_r0x00513848:
  puVar45 = puVar12;
  puVar12 = puVar45;
  if (puVar45 < (ulong *)*param_3) {
    uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
    puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^ (ulong)(ushort)*puVar45);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
code_r0x0051387a:
                    /* WARNING: Could not recover jumptable at 0x00513888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar45,param_3,puVar27,param_5,param_6);
    return puVar45;
  }
code_r0x0051388a:
  if ((ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | uVar60;
  }
  return puVar12;
code_r0x00512b56:
  uStack_60 = (ulong *)&UNK_00512b6a;
  puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar11,pbVar11 + iVar26,puVar27);
  puVar45 = (ulong *)0x0;
  if ((ulong *)(pbVar11 + iVar26) == puVar27) {
    puVar45 = puVar27;
  }
code_r0x00512b7a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_00512bec;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  return puVar45;
code_r0x00512566:
  uStack_60 = (ulong *)&UNK_0051257a;
  puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar11,pbVar11 + iVar26,param_1);
  puVar45 = (ulong *)0x0;
  if ((ulong *)(pbVar11 + iVar26) == puVar27) {
    puVar45 = puVar27;
  }
code_r0x0051258a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_005125fc;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  return puVar45;
code_r0x005133e6:
  uStack_60 = (ulong *)&UNK_005133fa;
  puVar27 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar53,pbVar53 + iVar26,pbVar11);
  puVar45 = (ulong *)0x0;
  if ((ulong *)(pbVar53 + iVar26) == puVar27) {
    puVar45 = puVar27;
  }
code_r0x0051340a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_0051347c;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar45;
  }
  return puVar45;
  while( true ) {
    bVar3 = (byte)*puVar58;
    auVar97[8] = bVar3;
    auVar97._0_8_ = uVar46;
    auVar97._9_3_ = 0;
    puVar45 = (ulong *)((long)puVar58 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar45;
      auVar97._1_7_ = 0;
      auVar97[0] = bVar2;
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar97._8_4_ = iVar31;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_005169b3;
        auVar97 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar58,iVar31);
        puVar45 = auVar97._0_8_;
        param_1 = uStack_60;
        param_6 = puStack_68;
        if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      }
      else {
        puVar45 = (ulong *)((long)puVar58 + 2);
      }
    }
    puVar16 = auVar97._0_8_;
    if (auVar97._8_4_ != (int)puVar27) break;
code_r0x005167ec:
    uVar54 = (ulong)(char)(byte)*puVar45;
    param_1 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar54 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
        if ((long)uVar46 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar46 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar46 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar46 < 0) {
                      puVar58 = (ulong *)((long)puVar45 + 10);
                      bVar3 = *(byte *)((long)puVar45 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar46 = uVar46 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar58 = (ulong *)((long)puVar45 + 9);
                    }
                  }
                  else {
                    puVar58 = puVar45 + 1;
                  }
                }
                else {
                  puVar58 = (ulong *)((long)puVar45 + 7);
                }
              }
              else {
                puVar58 = (ulong *)((long)puVar45 + 6);
              }
              puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
            }
            else {
              puVar58 = (ulong *)((long)puVar45 + 5);
            }
          }
          else {
            puVar58 = (ulong *)((long)puVar45 + 4);
          }
        }
        else {
          puVar58 = (ulong *)((long)puVar45 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar46);
      }
      else {
        puVar58 = (ulong *)((long)puVar45 + 2);
      }
      uVar54 = uVar54 & (ulong)puVar16;
      if ((uVar59 & 0x400) == 0) goto code_r0x00516806;
code_r0x005168a0:
      if ((uVar59 & 0x600) == 0x600) {
        if (((int)uVar54 < (int)uVar24) || ((int)(uint)uStack_70 < (int)uVar54))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_005168c8;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar54 & 0xffffffff);
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
        param_1 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar58 = (ulong *)((long)puVar45 + 1);
      if ((uVar59 & 0x400) != 0) goto code_r0x005168a0;
code_r0x00516806:
      if ((uVar59 & 0x600) == 0x200) {
        uVar54 = (ulong)(int)((uint)uVar54 >> 1 ^ -((uint)uVar54 & 1));
      }
    }
    uVar46 = *puVar12;
    bVar63 = (uVar46 & 4) != 0;
    uVar25 = (uint)puVar12[1];
    uVar60 = (uint)uVar46 & 3;
    if (bVar63) {
      uVar60 = uVar25;
    }
    uVar44 = *(uint *)((long)puVar12 + 0xc);
    if (!bVar63) {
      uVar44 = 3;
    }
    if (uVar60 == uVar44) {
      puStack_80 = (ulong *)&UNK_00516947;
      _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(puVar12,(uVar46 & 4) == 0,uVar60,uVar60 + 1);
      puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      uVar51 = *puVar12 & 0xfffffffffffffff8;
      uVar25 = (uint)puVar12[1];
code_r0x00516970:
      *(uint *)(puVar12 + 1) = uVar60 + 1;
      uVar46 = (ulong)(int)uVar25;
      *(bool *)(uVar51 + uVar46) = uVar54 != 0;
    }
    else {
      uVar51 = uVar46 & 0xfffffffffffffff8;
      if ((uVar46 & 4) != 0) goto code_r0x00516970;
      *puVar12 = uVar51 | uVar60 + 1;
      uVar46 = (ulong)((uint)uVar46 & 3);
      *(bool *)((long)(puVar12 + 1) + uVar46) = uVar54 != 0;
    }
    if ((ulong *)*param_3 <= puVar58) break;
  }
  if ((ulong)(ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)uStack_60 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar58;
  while( true ) {
    bVar3 = (byte)puVar45[1];
    auVar98[8] = bVar3;
    auVar98._0_8_ = (byte *)((long)puVar45 + 9);
    auVar98._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar45 + 9);
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_70 = (ulong *)&UNK_00518448;
        auVar98 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar12,iVar31);
        if (auVar98._0_8_ == 0) goto code_r0x005013a0;
      }
      else {
        auVar98._8_4_ = iVar31;
        auVar98._0_8_ = (ushort *)((long)puVar45 + 10);
      }
    }
    puVar45 = auVar98._0_8_;
    if (auVar98._8_4_ != uVar10) break;
code_r0x005183c3:
    uVar24 = *puVar45;
    uVar54 = *puVar27;
    uVar44 = (uint)uVar54 & 3;
    bVar63 = (uVar54 & 4) == 0;
    puVar12 = puVar27 + 1;
    uVar25 = (uint)*puVar12;
    uVar32 = uVar25;
    if (bVar63) {
      uVar32 = uVar44;
    }
    uVar33 = *(uint *)((long)puVar27 + 0xc);
    if (bVar63) {
      uVar33 = 1;
    }
    if (uVar32 == uVar33) {
      iVar31 = uVar32 + 1;
      uStack_70 = (ulong *)&UNK_0051847b;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar27,(uVar54 & 4) == 0,uVar32,iVar31);
      puVar12 = (ulong *)(*puVar27 & 0xfffffffffffffff8);
      uVar44 = (uint)puVar27[1];
code_r0x00518404:
      *(int *)(puVar27 + 1) = iVar31;
    }
    else {
      if ((uVar54 & 4) != 0) {
        iVar31 = uVar25 + 1;
        puVar12 = (ulong *)(uVar54 & 0xfffffffffffffff8);
        uVar44 = uVar25;
        goto code_r0x00518404;
      }
      *puVar27 = (long)(uVar54 & 0xfffffffffffffff8) + (ulong)uVar44 + 1;
    }
    puVar12[(int)uVar44] = uVar24;
    puVar12 = puVar45 + 1;
    if ((ulong *)*param_3 <= puVar12) goto code_r0x0051864a;
  }
code_r0x00518608:
  puVar45 = puVar12;
  puVar12 = puVar45;
  if (puVar45 < (ulong *)*param_3) {
    uVar24 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar45 & 0xfffffff8);
    puVar27 = (ulong *)(*(ulong *)((long)param_5 + uVar24 * 2 + 0x40) ^ (ulong)(ushort)*puVar45);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar24 * 2 + 0x38);
code_r0x00518636:
                    /* WARNING: Could not recover jumptable at 0x00518648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar45 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar45,param_3,puVar27,param_5,param_6);
    return puVar45;
  }
code_r0x0051864a:
  if ((ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | uVar60;
  }
  return puVar12;
  while( true ) {
    bVar3 = (byte)*puVar58;
    auVar95[8] = bVar3;
    auVar95._0_8_ = uVar46;
    auVar95._9_3_ = 0;
    puVar45 = (ulong *)((long)puVar58 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar45;
      auVar95._1_7_ = 0;
      auVar95[0] = bVar2;
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar95._8_4_ = iVar31;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_00516054;
        auVar95 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar58,iVar31);
        puVar45 = auVar95._0_8_;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      }
      else {
        puVar45 = (ulong *)((long)puVar58 + 2);
      }
    }
    puVar16 = auVar95._0_8_;
    if (auVar95._8_4_ != (int)puVar27) break;
code_r0x00515e9c:
    uVar54 = (ulong)(char)(byte)*puVar45;
    param_5 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar54 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
        if ((long)uVar46 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar46 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar46 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar46 < 0) {
                      puVar58 = (ulong *)((long)puVar45 + 10);
                      bVar3 = *(byte *)((long)puVar45 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar46 = uVar46 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar58 = (ulong *)((long)puVar45 + 9);
                    }
                  }
                  else {
                    puVar58 = puVar45 + 1;
                  }
                }
                else {
                  puVar58 = (ulong *)((long)puVar45 + 7);
                }
              }
              else {
                puVar58 = (ulong *)((long)puVar45 + 6);
              }
              puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
            }
            else {
              puVar58 = (ulong *)((long)puVar45 + 5);
            }
          }
          else {
            puVar58 = (ulong *)((long)puVar45 + 4);
          }
        }
        else {
          puVar58 = (ulong *)((long)puVar45 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar46);
      }
      else {
        puVar58 = (ulong *)((long)puVar45 + 2);
      }
      uVar54 = uVar54 & (ulong)puVar16;
      if ((uVar59 & 0x400) == 0) goto code_r0x00515eb6;
code_r0x00515f50:
      if ((uVar59 & 0x600) == 0x600) {
        if (((int)uVar54 < (int)uVar24) || ((int)(uint)uStack_70 < (int)uVar54))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00515f78;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar54 & 0xffffffff);
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
        param_5 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar58 = (ulong *)((long)puVar45 + 1);
      if ((uVar59 & 0x400) != 0) goto code_r0x00515f50;
code_r0x00515eb6:
      if ((uVar59 & 0x600) == 0x200) {
        uVar54 = uVar54 >> 1 ^ -(ulong)((uint)uVar54 & 1);
      }
    }
    uVar46 = *puVar12;
    bVar63 = (uVar46 & 4) != 0;
    uVar25 = (uint)puVar12[1];
    uVar60 = (uint)uVar46 & 3;
    if (bVar63) {
      uVar60 = uVar25;
    }
    uVar44 = *(uint *)((long)puVar12 + 0xc);
    if (!bVar63) {
      uVar44 = 1;
    }
    uVar32 = uVar60 + 1;
    if (uVar60 == uVar44) {
      puStack_80 = (ulong *)&UNK_00515fe6;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar12,(uVar46 & 4) == 0,uVar60,uVar32);
      puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      uVar51 = *puVar12 & 0xfffffffffffffff8;
      uVar25 = (uint)puVar12[1];
code_r0x00516010:
      *(uint *)(puVar12 + 1) = uVar32;
      uVar46 = (ulong)(int)uVar25;
      *(ulong *)(uVar51 + uVar46 * 8) = uVar54;
    }
    else {
      uVar51 = uVar46 & 0xfffffffffffffff8;
      if ((uVar46 & 4) != 0) goto code_r0x00516010;
      *puVar12 = uVar51 | uVar32;
      uVar46 = (ulong)((uint)uVar46 & 3);
      puVar12[uVar46 + 1] = uVar54;
    }
    if ((ulong *)*param_3 <= puVar58) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_60);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar58;
  while( true ) {
    bVar3 = (byte)*puVar58;
    auVar96[8] = bVar3;
    auVar96._0_8_ = uVar54;
    auVar96._9_3_ = 0;
    puVar45 = (ulong *)((long)puVar58 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar45;
      auVar96._1_7_ = 0;
      auVar96[0] = bVar2;
      iVar31 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar96._8_4_ = iVar31;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_005164f4;
        auVar96 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar58,iVar31);
        puVar45 = auVar96._0_8_;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar45 == (ulong *)0x0) goto code_r0x005013a0;
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      }
      else {
        puVar45 = (ulong *)((long)puVar58 + 2);
      }
    }
    puVar16 = auVar96._0_8_;
    if (auVar96._8_4_ != (int)puVar27) break;
code_r0x0051633c:
    uVar54 = (ulong)(char)(byte)*puVar45;
    param_5 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar54 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar45 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar46 = (long)(char)*(byte *)((long)puVar45 + 2) << 0xe | 0x3fff;
        if ((long)uVar46 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar45 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar46 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar45 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar46 = uVar46 & ((long)(char)*(byte *)((long)puVar45 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar46 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar45 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar46 = uVar46 & ((ulong)(byte)puVar45[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar46 < 0) {
                      puVar58 = (ulong *)((long)puVar45 + 10);
                      bVar3 = *(byte *)((long)puVar45 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar46 = uVar46 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar58 = (ulong *)((long)puVar45 + 9);
                    }
                  }
                  else {
                    puVar58 = puVar45 + 1;
                  }
                }
                else {
                  puVar58 = (ulong *)((long)puVar45 + 7);
                }
              }
              else {
                puVar58 = (ulong *)((long)puVar45 + 6);
              }
              puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
            }
            else {
              puVar58 = (ulong *)((long)puVar45 + 5);
            }
          }
          else {
            puVar58 = (ulong *)((long)puVar45 + 4);
          }
        }
        else {
          puVar58 = (ulong *)((long)puVar45 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar46);
      }
      else {
        puVar58 = (ulong *)((long)puVar45 + 2);
      }
      uVar54 = uVar54 & (ulong)puVar16;
      if ((uVar59 & 0x400) == 0) goto code_r0x00516356;
code_r0x005163f0:
      uVar25 = (uint)uVar54;
      if ((uVar59 & 0x600) == 0x600) {
        if (((int)uVar25 < (int)uVar24) || ((int)(uint)uStack_70 < (int)uVar25))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00516418;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar54 & 0xffffffff);
        puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
        param_5 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar58 = (ulong *)((long)puVar45 + 1);
      if ((uVar59 & 0x400) != 0) goto code_r0x005163f0;
code_r0x00516356:
      uVar25 = (uint)uVar54;
      if ((uVar59 & 0x600) == 0x200) {
        uVar25 = uVar25 >> 1 ^ -(uVar25 & 1);
      }
    }
    uVar54 = *puVar12;
    bVar63 = (uVar54 & 4) != 0;
    uVar60 = (uint)puVar12[1];
    uVar44 = (uint)uVar54 & 3;
    if (bVar63) {
      uVar44 = uVar60;
    }
    uVar32 = *(uint *)((long)puVar12 + 0xc);
    if (!bVar63) {
      uVar32 = 2;
    }
    uVar33 = uVar44 + 1;
    if (uVar44 == uVar32) {
      puStack_80 = (ulong *)&UNK_00516486;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar12,(uVar54 & 4) == 0,uVar44,uVar33);
      puVar27 = (ulong *)CONCAT44(uStack_4c,uVar10);
      uVar46 = *puVar12 & 0xfffffffffffffff8;
      uVar60 = (uint)puVar12[1];
code_r0x005164b0:
      *(uint *)(puVar12 + 1) = uVar33;
      uVar54 = (ulong)(int)uVar60;
      *(uint *)(uVar46 + uVar54 * 4) = uVar25;
    }
    else {
      uVar46 = uVar54 & 0xfffffffffffffff8;
      if ((uVar54 & 4) != 0) goto code_r0x005164b0;
      *puVar12 = uVar46 | uVar33;
      uVar54 = (ulong)((uint)uVar54 & 3);
      *(uint *)((long)puVar12 + uVar54 * 4 + 8) = uVar25;
    }
    if ((ulong *)*param_3 <= puVar58) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_60);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar58;
}


