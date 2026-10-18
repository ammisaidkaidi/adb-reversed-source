// Function: _ZN6google8protobuf8internal8TcParser9FastV64S1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
// Address: 00504b50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Instruction at (ram,0x005108b1) overlaps instruction at (ram,0x005108af)
    */
/* WARNING: Type propagation algorithm not settling */

ulong * _ZN6google8protobuf8internal8TcParser9FastV64S1EPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
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
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
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
  uint uVar24;
  int iVar25;
  ulong *puVar26;
  int iVar30;
  byte *pbVar27;
  ulong *puVar28;
  byte *pbVar29;
  byte *extraout_RDX;
  byte *extraout_RDX_00;
  uint uVar31;
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
  ulong *puVar44;
  uint7 uVar46;
  undefined8 uVar45;
  ulong *puVar47;
  ushort uVar48;
  ulong uVar49;
  ulong uVar50;
  ushort uVar51;
  uint uVar52;
  byte *pbVar53;
  ulong uVar54;
  ulong *unaff_R12;
  ushort uVar55;
  int iVar56;
  ulong *unaff_R13;
  long lVar57;
  uint uVar58;
  ulong *unaff_R14;
  ulong *puVar59;
  ushort uVar60;
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
  
  uVar52 = (uint)param_6;
  if ((char)param_4 == '\0') {
    uVar12 = (ulong)(char)param_2[1];
    if ((long)uVar12 < 0) {
      uVar49 = (long)(char)param_2[2] << 7 | 0x7f;
      if ((long)uVar49 < 0) {
        uVar54 = (long)(char)param_2[3] << 0xe | 0x3fff;
        if ((long)uVar54 < 0) {
          uVar49 = uVar49 & ((long)(char)param_2[4] << 0x15 | 0x1fffffU);
          if ((long)uVar49 < 0) {
            uVar54 = uVar54 & ((long)(char)param_2[5] << 0x1c | 0xfffffffU);
            if ((long)uVar54 < 0) {
              uVar49 = uVar49 & ((long)(char)param_2[6] << 0x23 | 0x7ffffffffU);
              if ((long)uVar49 < 0) {
                uVar54 = uVar54 & ((long)(char)param_2[7] << 0x2a | 0x3ffffffffffU);
                if ((long)uVar54 < 0) {
                  uVar49 = uVar49 & ((long)(char)param_2[8] << 0x31 | 0x1ffffffffffffU);
                  if ((long)uVar49 < 0) {
                    uVar54 = uVar54 & ((ulong)param_2[9] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar54 < 0) {
                      bVar3 = param_2[10];
                      puVar44 = (ulong *)(param_2 + 0xb);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar54 = uVar54 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar44 = (ulong *)(param_2 + 10);
                    }
                  }
                  else {
                    puVar44 = (ulong *)(param_2 + 9);
                  }
                }
                else {
                  puVar44 = (ulong *)(param_2 + 8);
                }
              }
              else {
                puVar44 = (ulong *)(param_2 + 7);
              }
            }
            else {
              puVar44 = (ulong *)(param_2 + 6);
            }
          }
          else {
            puVar44 = (ulong *)(param_2 + 5);
          }
        }
        else {
          puVar44 = (ulong *)(param_2 + 4);
        }
        uVar49 = uVar49 & uVar54;
      }
      else {
        puVar44 = (ulong *)(param_2 + 3);
      }
      uVar12 = uVar12 & uVar49;
    }
    else {
      puVar44 = (ulong *)(param_2 + 2);
    }
    *(ulong *)((long)param_1 + (param_4 >> 0x30)) = uVar12;
    if ((ulong *)*param_3 <= puVar44) {
      if ((ulong)(ushort)*param_5 != 0) {
        puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
        *puVar61 = *puVar61 | uVar52 | (uint)(1L << (param_4 >> 0x10 & 0x3f));
      }
      return puVar44;
    }
                    /* WARNING: Could not recover jumptable at 0x00504ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar44 = (ulong *)(**(code **)((long)param_5 +
                                   (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 &
                                          0xfffffff8) * 2 + 0x38))();
    return puVar44;
  }
  puVar26 = (ulong *)in_FS_OFFSET[5];
  uVar12 = (ulong)*param_2;
  puVar44 = (ulong *)(param_2 + 1);
  if ((char)*param_2 < '\0') {
    uVar46 = (uint7)((uVar12 << 0x39) >> 8);
    lVar22 = CONCAT71(uVar46,(byte)*puVar44);
    if ((char)(byte)*puVar44 < '\0') {
      uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
      lVar22 = CONCAT71(uVar46,param_2[2]);
      if ((char)param_2[2] < '\0') {
        uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
        lVar22 = CONCAT71(uVar46,param_2[3]);
        if ((char)param_2[3] < '\0') {
          bVar3 = param_2[4];
          puVar11 = (ulong *)(ulong)bVar3;
          uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
          if ((char)bVar3 < '\0') {
            puVar16 = unaff_RBX;
            if ((ulong *)in_FS_OFFSET[5] == puVar26) goto code_r0x005013a0;
            goto code_r0x00501627;
          }
          uVar12 = CONCAT71(uVar46,bVar3) << 0x1c | (ulong)(uVar46 >> 0x1c);
          puVar44 = (ulong *)(param_2 + 5);
        }
        else {
          uVar12 = lVar22 << 0x15 | (ulong)(uVar46 >> 0x23);
          puVar44 = (ulong *)(param_2 + 4);
        }
      }
      else {
        uVar12 = lVar22 << 0xe | (ulong)(uVar46 >> 0x2a);
        puVar44 = (ulong *)(param_2 + 3);
      }
    }
    else {
      uVar12 = lVar22 << 7 | (ulong)(uVar46 >> 0x31);
      puVar44 = (ulong *)(param_2 + 2);
    }
  }
  puVar16 = (ulong *)(uVar12 >> 3 & 0x1fffffff);
  uVar31 = (uint)puVar16;
  uVar24 = uVar31 - 1;
  if (uVar24 < 0x20) {
    uVar31 = 1 << ((byte)uVar24 & 0x1f);
    puVar16 = (ulong *)(ulong)uVar31;
    if ((*(uint *)((long)param_5 + 0xc) >> (uVar24 & 0x1f) & 1) == 0) {
      uVar31 = *(uint *)((long)param_5 + 0xc) & uVar31 - 1;
      uVar31 = uVar31 - (uVar31 >> 1 & 0x55555555);
      uVar31 = (uVar31 >> 2 & 0x33333333) + (uVar31 & 0x33333333);
      uVar24 = uVar24 - (((uVar31 >> 4) + uVar31 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x0050145f:
      pbVar10 = (byte *)((ulong)(uint)param_5[2] + (long)param_5);
      puVar11 = (ulong *)((ulong)uVar24 * 3);
      puVar16 = (ulong *)in_FS_OFFSET[5];
      if ((ulong *)in_FS_OFFSET[5] != puVar26) goto code_r0x00501627;
      uStack_4c = ((int)pbVar10 + uVar24 * 0xc) - (int)param_5;
      puVar11 = (ulong *)(ulong)uStack_4c;
      uVar49 = uVar12 & 0xffffffff;
      puVar26 = (ulong *)(uVar49 | (long)puVar11 << 0x20);
      uVar31 = (uint)uVar12;
      uStack_40 = SUB82(param_1,0);
      uStack_44 = (undefined4)((ulong)param_1 >> 0x20);
      uStack_46 = (undefined2)((ulong)param_1 >> 0x10);
      uStack_50 = (undefined2)uVar49;
      uStack_4e = (undefined2)(uVar49 >> 0x10);
      puVar16 = param_3;
      switch(*(ushort *)(pbVar10 + (ulong)uVar24 * 0xc + 10) & 0xf) {
      case 2:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 3:
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 == 0x20) {
          do {
            uVar24 = uVar31 & 7;
            if (uVar24 != 2) {
              uVar58 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
              if (uVar58 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar58 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar58 & 0x1f);
              }
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar11) & 0x1c0) == 0xc0) {
                if (uVar24 == 1) {
                  puVar26 = (ulong *)((long)param_1 +
                                     (ulong)*(uint *)((long)param_5 + (long)puVar11));
                  pbVar10 = (byte *)((long)param_1 +
                                    (ulong)*(uint *)((long)param_5 + (long)puVar11) + 8);
                  goto code_r0x00513643;
                }
              }
              else if (uVar24 == 5) {
                puVar26 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar11))
                ;
                pbVar10 = (byte *)((long)param_1 +
                                  (ulong)*(uint *)((long)param_5 + (long)puVar11) + 8);
                goto code_r0x00513763;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              goto code_r0x0051387a;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar31 & 7) != 2);
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar31 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
          if (uVar31 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar31 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar31 & 0x1f);
          }
          bVar3 = (byte)*puVar44;
          if ((char)bVar3 < '\0') {
            auVar64 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
          }
          else {
            auVar64[8] = bVar3;
            auVar64._0_8_ = (byte *)((long)puVar44 + 1);
            auVar64._9_7_ = 0;
          }
          if ((uVar60 & 0x1c0) == 0xc0) {
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         ();
          }
          else {
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,auVar64._0_8_,auVar64._8_8_,
                                          (byte *)((ulong)*(uint *)((long)param_5 + (long)puVar11) +
                                                  (long)param_1));
          }
          if (puVar44 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                         (param_1,puVar44,param_3,
                                          *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar44,param_5,param_6);
            return puVar44;
          }
          goto code_r0x005013a0;
        }
        uVar60 = uVar60 & 0x1c0;
        if (uVar60 == 0xc0) {
          if ((uVar31 & 7) == 1) {
code_r0x0050de58:
            puVar61 = (uint *)((long)puVar11 + (long)param_5);
            if (uVar55 == 0x30) {
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar61,uVar31 >> 3,param_5,param_1);
            }
            else if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
            }
            if (uVar60 == 0xc0) {
              *(ulong *)((long)param_1 + (ulong)*puVar61) = *puVar44;
              lVar22 = 8;
            }
            else {
              *(uint *)((long)param_1 + (ulong)*puVar61) = (uint)*puVar44;
              lVar22 = 4;
            }
            puVar44 = (ulong *)((long)puVar44 + lVar22);
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050defb;
          }
        }
        else if ((uVar31 & 7) == 5) goto code_r0x0050de58;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
code_r0x0050defb:
                    /* WARNING: Could not recover jumptable at 0x0050df09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar44;
      case 4:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 5:
        if ((uVar31 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050e0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*(code *)param_5[6])();
          return puVar44;
        }
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 == 0x20) {
          if ((uVar31 & 7) != 2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            goto code_r0x0051404b;
          }
          puVar61 = (uint *)((long)param_5 + (long)puVar11);
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar24 = puVar61[1];
          if (uVar24 != 0xffffffff) {
            puVar1 = (uint *)((long)param_1 + (ulong)(uVar24 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar24 & 0x1f);
          }
          puVar26 = puVar44;
          if ((uVar60 & 0x1c0) == 0x100) {
            uVar60 = uVar60 & 0x600;
            puVar16 = (ulong *)((long)param_1 + (ulong)*puVar61);
            puVar26 = *(ulong **)((long)param_1 + (ulong)*puVar61 + 0x10);
            if ((puVar26 != (ulong *)0x0) &&
               (uStack_70 = puVar11, puStack_68 = puVar26,
               *(ulong *)(*in_FS_OFFSET + -0x118) == *puVar26)) {
              uVar12 = *puVar16;
              if ((uVar12 & 1) == 0) {
                uVar24 = (uint)(uVar12 != 0);
              }
              else {
                uVar24 = *(uint *)(uVar12 + 3);
              }
              if (uVar24 == (uint)puVar16[1]) {
                puVar59 = *(ulong **)(*in_FS_OFFSET + -0x110);
                uStack_60 = puVar59;
                do {
                  uVar12 = (ulong)(byte)*puVar44;
                  if ((char)(byte)*puVar44 < '\0') {
                    puStack_80 = (ulong *)&UNK_005140ab;
                    auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                    pbVar10 = auVar72._0_8_;
                    if (pbVar10 == (byte *)0x0) goto code_r0x005013a0;
                    uVar12 = auVar72._8_8_ & 0xffffffff;
                  }
                  else {
                    pbVar10 = (byte *)((long)puVar44 + 1);
                  }
                  uVar49 = puVar59[9];
                  if (uVar49 == 0) {
                    puStack_80 = (ulong *)&UNK_0051423e;
                    pbVar53 = (byte *)_ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
                                                (puVar59);
                  }
                  else {
                    puVar59[9] = uVar49 - 0x18;
                    pbVar53 = (byte *)(puVar59[7] + uVar49 + -8);
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
                  iVar30 = (int)puVar16[1];
                  uVar49 = *puVar16;
                  if ((uVar49 & 1) == 0) {
                    if (iVar30 == 1) {
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
                    if (iVar30 == *(int *)(uVar49 - 1)) goto code_r0x0051424a;
                    *(byte **)(uVar49 + 7 + (long)iVar30 * 8) = pbVar53;
code_r0x0051411e:
                    *(int *)(*puVar16 + 3) = *(int *)(*puVar16 + 3) + 1;
                  }
                  *(int *)(puVar16 + 1) = (int)puVar16[1] + 1;
                  puStack_80 = (ulong *)&UNK_0051413a;
                  cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                    (param_3,uVar12,pbVar10);
                  if (cVar9 == '\0') {
                    puStack_80 = (ulong *)&UNK_00514171;
                    puVar26 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                                 (param_3,pbVar10,uVar12,pbVar53);
                    puVar59 = uStack_60;
                    if (puVar26 == (ulong *)0x0) goto code_r0x005013a0;
                  }
                  else {
                    lVar22 = (long)(int)uVar12;
                    puStack_80 = (ulong *)&UNK_0051414c;
                    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                              (pbVar53,lVar22);
                    puVar59 = uStack_60;
                    if ((*pbVar53 & 1) == 0) {
                      pbVar53 = pbVar53 + 1;
                    }
                    else {
                      pbVar53 = *(byte **)(pbVar53 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141a5;
                    func_0x0099bda0(pbVar53,pbVar10,lVar22);
                    puVar26 = (ulong *)(pbVar10 + lVar22);
                  }
                  if (uVar60 == 0x400) {
                    puVar44 = (ulong *)((*puVar16 - 1) + (long)(int)puVar16[1] * 8);
                    if ((*puVar16 & 1) == 0) {
                      puVar44 = puVar16;
                    }
                    pbVar10 = (byte *)*puVar44;
                    if ((*pbVar10 & 1) == 0) {
                      uVar12 = (ulong)(*pbVar10 >> 1);
                      pbVar10 = pbVar10 + 1;
                    }
                    else {
                      uVar12 = *(ulong *)(pbVar10 + 8);
                      pbVar10 = *(byte **)(pbVar10 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_005141ea;
                    iVar30 = utf8_range_IsValid(pbVar10,uVar12);
                    if (iVar30 == 0) {
                      pbVar10 = (byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
                      uVar12 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
                      pbVar53 = pbVar10 + uVar12;
                      uVar49 = ((long)((long)uStack_70 - (ulong)(uint)param_5[2]) >> 2) *
                               -0x5555555555555555;
                      uVar54 = uVar49 + 1;
                      if (uVar54 != 0) {
                        pbVar29 = pbVar10;
                        for (uVar50 = uVar54 & 7; uVar50 != 0; uVar50 = uVar50 - 1) {
                          uVar12 = uVar12 + *pbVar29;
                          pbVar29 = pbVar29 + 1;
                        }
                        if (6 < uVar49) {
                          do {
                            uVar12 = (ulong)pbVar29[7] + (ulong)pbVar29[6] +
                                     (ulong)pbVar29[5] + (ulong)pbVar29[4] + (ulong)pbVar29[3] +
                                     (ulong)pbVar29[2] + (ulong)pbVar29[1] + *pbVar29 + uVar12;
                            pbVar29 = pbVar29 + 8;
                          } while (pbVar29 != pbVar10 + uVar54);
                        }
                      }
                      puStack_80 = (ulong *)&UNK_0051433e;
                      _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                                (pbVar53,(long)(char)*(byte *)((long)param_5 +
                                                              (ulong)*(ushort *)
                                                                      ((long)param_5 + 0x16) * 8 +
                                                              (ulong)(uint)param_5[3]),
                                 pbVar10 + uVar12,(long)(char)pbVar10[uVar54],&UNK_00178f3f,0);
                      goto code_r0x005013a0;
                    }
                  }
                  if ((ulong *)*param_3 <= puVar26) goto code_r0x00514410;
                  bVar3 = (byte)*puVar26;
                  auVar90[8] = bVar3;
                  auVar90._0_8_ = (byte *)((long)puVar26 + 1);
                  auVar90._9_3_ = 0;
                  if ((char)bVar3 < '\0') {
                    bVar2 = *(byte *)((long)puVar26 + 1);
                    iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                    if ((char)bVar2 < '\0') {
                      puStack_80 = (ulong *)&UNK_0051422a;
                      auVar90 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar26,iVar30);
                    }
                    else {
                      auVar90._8_4_ = iVar30;
                      auVar90._0_8_ = (ushort *)((long)puVar26 + 2);
                    }
                  }
                  puVar44 = auVar90._0_8_;
                } while (auVar90._8_4_ == uVar31);
                goto code_r0x00514015;
              }
            }
            do {
              puStack_80 = (ulong *)&UNK_0051438c;
              pbVar10 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                          (puVar16,puVar16[2]);
              puStack_80 = (ulong *)&UNK_0051439d;
              puVar26 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                           (pbVar10,puVar44,param_3);
              if (puVar26 == (ulong *)0x0) goto code_r0x005013a0;
              bVar63 = (*pbVar10 & 1) != 0;
              pbVar53 = pbVar10 + 1;
              if (bVar63) {
                pbVar53 = *(byte **)(pbVar10 + 0x10);
              }
              uVar12 = (ulong)(*pbVar10 >> 1);
              if (bVar63) {
                uVar12 = *(ulong *)(pbVar10 + 8);
              }
              puStack_80 = (ulong *)&UNK_005143d2;
              cVar9 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                (pbVar53,uVar12,param_5,puVar61,uVar60);
              if (cVar9 == '\0') goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar26) goto code_r0x00514410;
              bVar3 = (byte)*puVar26;
              auVar91[8] = bVar3;
              auVar91._0_8_ = (byte *)((long)puVar26 + 1);
              auVar91._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar26 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  puStack_80 = (ulong *)&UNK_0051436d;
                  auVar91 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar26,iVar30);
                }
                else {
                  auVar91._8_4_ = iVar30;
                  auVar91._0_8_ = (ushort *)((long)puVar26 + 2);
                }
              }
              puVar44 = auVar91._0_8_;
            } while (auVar91._8_4_ == uVar31);
          }
code_r0x00514015:
          puVar44 = puVar26;
          puVar26 = puVar44;
          if ((ulong *)*param_3 <= puVar44) {
code_r0x00514410:
            if ((ushort)*param_5 != 0) {
              puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
              *puVar61 = *puVar61 | uVar52;
            }
            return puVar26;
          }
          uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
          puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                             (ulong)(ushort)*puVar44);
          UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
code_r0x0051404b:
                    /* WARNING: Could not recover jumptable at 0x00514059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
        puVar61 = (uint *)((long)param_5 + (long)puVar11);
        if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        else if (uVar55 == 0x30) {
          uStack_60 = (ulong *)&UNK_0050e133;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar61,uVar31 >> 3,param_5,param_1);
        }
        puVar26 = (ulong *)((ulong)*puVar61 + (long)param_1);
        if ((uVar60 & 0x1c0) == 0x140) {
          uVar12 = param_1[1];
          if ((uVar12 & 1) != 0) {
            uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
          }
          bVar3 = (byte)*puVar44;
          if ((char)bVar3 < '\0') {
            uStack_60 = (ulong *)&UNK_0050e278;
            auVar74 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
            if (auVar74._0_8_ != 0) goto code_r0x0050e289;
            puVar44 = (ulong *)0x0;
          }
          else {
            auVar74[8] = bVar3;
            auVar74._0_8_ = (byte *)((long)puVar44 + 1);
            auVar74._9_3_ = 0;
code_r0x0050e289:
            iVar30 = auVar74._8_4_;
            lVar22 = auVar74._0_8_;
            if ((int)(((uint)param_3[1] - auVar74._0_4_) + 0x10) < iVar30) {
              uStack_60 = (ulong *)&UNK_0050e2a5;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar22,iVar30,puVar26,uVar12);
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e2c1;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar26,lVar22,(long)iVar30,uVar12,7);
              puVar44 = (ulong *)(lVar22 + iVar30);
            }
          }
          pbVar10 = (byte *)*puVar26;
          if (((ulong)pbVar10 & 2) == 0) {
            if (((ulong)pbVar10 & 1) == 0) {
              uVar31 = (uint)((ulong)pbVar10 >> 2) & 0x3f;
              pbVar10 = (byte *)((long)puVar26 + 1);
            }
            else {
              uVar31 = *(uint *)(pbVar10 + 7);
              pbVar10 = *(byte **)(pbVar10 + -1);
            }
          }
          else {
            uVar31 = (uint)pbVar10[-2];
          }
          if ((uVar60 & 0x600) == 0x400) {
            uStack_60 = (ulong *)&UNK_0050e30f;
            iVar30 = utf8_range_IsValid(pbVar10,uVar31);
            if (iVar30 == 0) {
              pbVar10 = (byte *)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                (ulong)(uint)param_5[3]);
              uVar49 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
              lVar22 = (long)(char)*(byte *)((long)param_5 +
                                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                            (ulong)(uint)param_5[3]);
              pbVar53 = pbVar10 + uVar49;
              uVar54 = ((long)((long)puVar11 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
              uVar12 = uVar54 + 1;
              pbVar29 = pbVar10 + uVar12;
              if (uVar12 != 0) {
                pbVar27 = pbVar10;
                for (uVar12 = uVar12 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                  uVar49 = uVar49 + *pbVar27;
                  pbVar27 = pbVar27 + 1;
                }
                if (6 < uVar54) {
                  do {
                    uVar49 = (ulong)pbVar27[7] + (ulong)pbVar27[6] +
                             (ulong)pbVar27[5] + (ulong)pbVar27[4] + (ulong)pbVar27[3] +
                             (ulong)pbVar27[2] + (ulong)pbVar27[1] + *pbVar27 + uVar49;
                    pbVar27 = pbVar27 + 8;
                  } while (pbVar27 != pbVar29);
                }
              }
              goto code_r0x0050e593;
            }
          }
          if (puVar44 != (ulong *)0x0) {
code_r0x0050e491:
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050e4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                         (param_1,puVar44,param_3,
                                          *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar44);
            return puVar44;
          }
        }
        else {
          if ((uVar60 & 0x1c0) == 0x80) {
            if (uVar55 == 0x30) {
              puVar26 = (ulong *)*puVar26;
            }
            bVar3 = (byte)*puVar44;
            if ((char)bVar3 < '\0') {
              uStack_60 = (ulong *)&UNK_0050e1c4;
              auVar73 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
              if (auVar73._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar73[8] = bVar3;
              auVar73._0_8_ = (byte *)((long)puVar44 + 1);
              auVar73._9_3_ = 0;
            }
            iVar56 = auVar73._8_4_;
            lVar22 = auVar73._0_8_;
            iVar25 = ((uint)param_3[1] - auVar73._0_4_) + 0x10;
            iVar30 = 0x200;
            if (iVar25 < 0x200) {
              iVar30 = iVar25;
            }
            uStack_60 = (ulong *)&UNK_0050e209;
            cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                              (param_3,iVar56,iVar30);
            if (cVar9 == '\0') {
              uStack_60 = (ulong *)&UNK_0050e24e;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (param_3,lVar22,iVar56,puVar26);
              if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              uStack_60 = (ulong *)&UNK_0050e21e;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (puVar26,lVar22,(long)iVar56);
              puVar44 = (ulong *)(lVar22 + iVar56);
            }
            goto code_r0x0050e491;
          }
          uVar12 = param_1[1];
          if ((uVar12 & 1) == 0) {
            if (uVar12 == 0) goto code_r0x0050e410;
code_r0x0050e1a9:
            uStack_60 = (ulong *)&UNK_0050e1b4;
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar44,puVar26);
          }
          else {
            if (*(long *)(uVar12 & 0xfffffffffffffffe) != 0) goto code_r0x0050e1a9;
code_r0x0050e410:
            uStack_60 = (ulong *)&UNK_0050e420;
            uVar14 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar26,0);
            uStack_60 = (ulong *)&UNK_0050e42e;
            puVar44 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar14,puVar44,param_3);
          }
          if (puVar44 == (ulong *)0x0) {
            uStack_60 = (ulong *)&UNK_0050e5d4;
            func_0x0050d360(param_1,puVar26);
            goto code_r0x005013a0;
          }
          if ((uVar60 & 0x600) != 0x400) goto code_r0x0050e491;
          pbVar10 = (byte *)(*puVar26 & 0xfffffffffffffffc);
          if ((*pbVar10 & 1) == 0) {
            uVar12 = (ulong)(*pbVar10 >> 1);
            pbVar10 = pbVar10 + 1;
          }
          else {
            uVar12 = *(ulong *)(pbVar10 + 8);
            pbVar10 = *(byte **)(pbVar10 + 0x10);
          }
          uStack_60 = (ulong *)&UNK_0050e47a;
          iVar30 = utf8_range_IsValid(pbVar10,uVar12);
          if (iVar30 != 0) goto code_r0x0050e491;
          pbVar10 = (byte *)((long)param_5 +
                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 + (ulong)(uint)param_5[3]);
          uVar49 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
          lVar22 = (long)(char)*(byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
          pbVar53 = pbVar10 + uVar49;
          uVar54 = ((long)((long)puVar11 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
          uVar12 = uVar54 + 1;
          pbVar29 = pbVar10 + uVar12;
          if (uVar12 != 0) {
            pbVar27 = pbVar10;
            for (uVar12 = uVar12 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
              uVar49 = uVar49 + *pbVar27;
              pbVar27 = pbVar27 + 1;
            }
            if (6 < uVar54) {
              do {
                uVar49 = (ulong)pbVar27[7] + (ulong)pbVar27[6] +
                         (ulong)pbVar27[5] + (ulong)pbVar27[4] + (ulong)pbVar27[3] +
                         (ulong)pbVar27[2] + (ulong)pbVar27[1] + *pbVar27 + uVar49;
                pbVar27 = pbVar27 + 8;
              } while (pbVar27 != pbVar29);
            }
          }
code_r0x0050e593:
          uStack_60 = (ulong *)&UNK_0050e5a9;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar53,lVar22,pbVar10 + uVar49,(long)(char)*pbVar29,&UNK_00178f3f,0);
        }
code_r0x005013a0:
        *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
        if ((ulong)(ushort)*param_5 != 0) {
          puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
          *puVar61 = *puVar61 | (uint)param_6;
        }
        return (ulong *)0x0;
      case 6:
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 != 0x20) {
          if ((uVar60 & 0x1c0) == 0x40) {
            if ((uVar31 & 7) != 3) goto code_r0x0050e6d6;
          }
          else if (((uVar60 & 0x1c0) != 0) || ((uVar31 & 7) != 2)) goto code_r0x0050e6d6;
          puVar61 = (uint *)((long)puVar11 + (long)param_5);
          plVar15 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if ((uVar60 & 0x600) == 0x400) {
            uStack_40 = SUB82(plVar15,0);
            uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
            bStack_3d = (byte)((ulong)plVar15 >> 0x18);
            uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
            uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
            uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
            uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
          }
          else {
            if ((uVar60 & 0x600) != 0x200) {
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
                       ,puVar61,(uVar12 & 0xfffffff8) >> 3,param_5,param_1);
          }
          else if (uVar55 == 0x10) {
            puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar12 = (ulong)*puVar61;
          if (*(long *)((long)param_1 + uVar12) == 0) {
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
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
                               (puVar19 + 5,uVar14,uVar14,uVar49);
            *(undefined8 *)((long)param_1 + uVar12) = uVar14;
          }
          if ((uVar60 & 0x1c0) == 0x40) {
            uVar49 = param_3[0xb];
            *(uint *)(param_3 + 0xb) = (uint)uVar49 - 1;
            if (0 < (int)(uint)uVar49) {
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0050e778;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar12),puVar44,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar12 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((uint)uVar12 == uVar31) {
                return puVar44;
              }
            }
          }
          else {
            bVar3 = (byte)*puVar44;
            if ((char)bVar3 < '\0') {
              uStack_70 = (ulong *)&UNK_0050e80e;
              auVar75 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
              if (auVar75._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar75[8] = bVar3;
              auVar75._0_8_ = (byte *)((long)puVar44 + 1);
              auVar75._9_3_ = 0;
            }
            if (0 < (int)(uint)param_3[0xb]) {
              uVar31 = auVar75._8_4_ + (auVar75._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar31 >> 0x1f & uVar31) + param_3[1];
              uVar52 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar31;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0050e864;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)((long)param_1 + uVar12),auVar75._0_8_,
                                            param_3,CONCAT17(uStack_39,
                                                             CONCAT16(uStack_3a,
                                                                      CONCAT15(uStack_3b,
                                                                               CONCAT14(uStack_3c,
                                                                                        CONCAT13(
                                                  bStack_3d,CONCAT12(uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar52 = (uVar52 - uVar31) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar52;
              if ((uint)param_3[10] == 0) {
                *param_3 = (long)(int)((int)uVar52 >> 0x1f & uVar52) + param_3[1];
                return puVar44;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar60 & 0x1c0) == 0x40) {
          if ((uVar31 & 7) == 3) {
            uVar24 = *(uint *)((long)param_5 + (long)puVar11);
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11) & 0x600;
            plVar23 = plVar15;
            if (uVar60 != 0x400) {
              if (uVar60 != 0x200) {
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
            uVar58 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
            if (uVar58 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar58 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar58 & 0x1f);
            }
            puVar26 = puVar44;
            do {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_005147bd;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar23,(byte *)((ulong)uVar24 + (long)param_1),uVar12);
              uVar12 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar12 - 1;
              if ((int)(uint)uVar12 < 1) {
code_r0x00514885:
                param_6 = (ulong *)((ulong)param_6 & 0xffffffff);
                goto code_r0x005013a0;
              }
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_60 = (ulong *)&UNK_005147e8;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,puVar26,param_3,plVar23);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar12 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((puVar44 == (ulong *)0x0) || ((uint)uVar12 != uVar31)) goto code_r0x00514885;
              if ((ulong *)*param_3 <= puVar44) {
                uVar60 = (ushort)*param_5;
                goto joined_r0x0051490a;
              }
              bVar3 = (byte)*puVar44;
              auVar94[8] = bVar3;
              auVar94._0_8_ = (byte *)((long)puVar44 + 1);
              auVar94._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar44 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_60 = (ulong *)&UNK_00514852;
                  auVar94 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar44,iVar30);
                  if (auVar94._0_8_ == 0) goto code_r0x00514885;
                }
                else {
                  auVar94._8_4_ = iVar30;
                  auVar94._0_8_ = (ushort *)((long)puVar44 + 2);
                }
              }
              puVar26 = auVar94._0_8_;
            } while (auVar94._8_4_ == uVar31);
            if ((ulong *)*param_3 <= puVar44) {
              uVar60 = (ushort)*param_5;
joined_r0x0051490a:
              if (uVar60 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar60) =
                     *(uint *)((long)param_1 + (ulong)uVar60) | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
            puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar44);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00514883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
        if ((uVar60 & 0x1c0) == 0) {
          if ((uVar31 & 7) == 2) {
            uVar24 = *(uint *)((long)param_5 + (long)puVar11);
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11) & 0x600;
            if (uVar60 != 0x400) {
              plVar23 = plVar15;
              if (uVar60 != 0x200) {
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
            uVar58 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
            if (uVar58 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar58 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar58 & 0x1f);
            }
            puVar26 = puVar44;
            do {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              uStack_60 = (ulong *)&UNK_0051450d;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar15,(byte *)((ulong)uVar24 + (long)param_1),uVar12);
              bVar3 = (byte)*puVar26;
              if ((char)bVar3 < '\0') {
                uStack_60 = (ulong *)&UNK_0051452a;
                auVar92 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar26,bVar3);
                if (auVar92._0_8_ != 0) goto code_r0x00514536;
code_r0x00514628:
                param_6 = (ulong *)((ulong)param_6 & 0xffffffff);
                goto code_r0x005013a0;
              }
              auVar92[8] = bVar3;
              auVar92._0_8_ = (byte *)((long)puVar26 + 1);
              auVar92._9_3_ = 0;
code_r0x00514536:
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x00514628;
              uVar32 = auVar92._8_4_ + (auVar92._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar32 >> 0x1f & uVar32) + param_3[1];
              uVar58 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar32;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_60 = (ulong *)&UNK_00514585;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,auVar92._0_8_,param_3,plVar15);
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar58 = (uVar58 - uVar32) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar58;
              if ((uint)param_3[10] != 0) goto code_r0x00514628;
              puVar26 = (ulong *)((long)(int)((int)uVar58 >> 0x1f & uVar58) + param_3[1]);
              *param_3 = (ulong)puVar26;
              if (puVar44 == (ulong *)0x0) goto code_r0x00514628;
              if (puVar26 <= puVar44) {
                uVar60 = (ushort)*param_5;
                goto joined_r0x005146ae;
              }
              bVar3 = (byte)*puVar44;
              auVar93[8] = bVar3;
              auVar93._0_8_ = (byte *)((long)puVar44 + 1);
              auVar93._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar44 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_60 = (ulong *)&UNK_005145f5;
                  auVar93 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar44,iVar30);
                  if (auVar93._0_8_ == 0) goto code_r0x00514628;
                }
                else {
                  auVar93._8_4_ = iVar30;
                  auVar93._0_8_ = (ushort *)((long)puVar44 + 2);
                }
              }
              puVar26 = auVar93._0_8_;
            } while (auVar93._8_4_ == uVar31);
            if ((ulong *)*param_3 <= puVar44) {
              uVar60 = (ushort)*param_5;
joined_r0x005146ae:
              if (uVar60 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar60) =
                     *(uint *)((long)param_1 + (ulong)uVar60) | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
            puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar44);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00514626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
code_r0x0050e6d6:
                    /* WARNING: Could not recover jumptable at 0x0050e6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*(code *)param_5[6])();
        return puVar44;
      case 7:
        puVar18 = &stack0xfffffffffffffff8;
        ppuVar35 = &puStack_88;
        ppuVar37 = &puStack_88;
        ppuVar38 = &puStack_88;
        ppuVar39 = &puStack_88;
        ppuVar36 = &puStack_88;
        ppuVar34 = &puStack_88;
        lStack_38 = in_FS_OFFSET[5];
        uVar49 = (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11);
        uVar52 = (uint)param_5[3];
        bStack_3d = *(byte *)((long)param_5 + uVar49 * 8 + (ulong)uVar52 + 4);
        uStack_70 = param_6;
        if (((bStack_3d & 1) == 0) || ((uVar31 & 7) != 2)) {
          if (in_FS_OFFSET[5] == lStack_38) {
            puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
            goto 
            _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
        }
        else {
          puStack_78 = (ulong *)((long)puVar11 + (long)param_5);
          uVar43 = *(undefined4 *)((long)param_5 + uVar49 * 8 + (ulong)uVar52);
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
          uVar24 = *(uint *)((long)puStack_78 + 4);
          if (uVar24 != 0xffffffff) {
            puVar61 = (uint *)((long)uStack_60 + (ulong)(uVar24 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar24 & 0x1f);
          }
          puStack_68 = (ulong *)((long)param_5 + uVar49 * 8 + (ulong)uVar52);
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
            uVar60 = *(ushort *)((long)param_6 + 0xc);
            unaff_RBX[1] = 0;
            pbVar10 = (byte *)((long)unaff_RBX + ((ulong)uVar60 - 8));
            pbVar10[0] = 0;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            pbVar10[4] = 0;
            pbVar10[5] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            if ((*(byte *)((long)param_6 + 0xf) & 0xf) == 5) {
              uVar49 = param_6[3];
              unaff_RBX[1] = 0;
              unaff_RBX[2] = 0;
              unaff_RBX[3] = 0;
              if (uVar49 != 0) {
                puStack_90 = &UNK_0050ea87;
                _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                          (uVar49,unaff_RBX + 1,
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
                uVar54 = (ulong)*(byte *)((long)param_6 + 0xe);
                uVar49 = param_6[3];
                pbVar10 = (byte *)((long)unaff_RBX + uVar54);
                pbVar10[0] = 0;
                pbVar10[1] = 0;
                pbVar10[2] = 0;
                pbVar10[3] = 0;
                pbVar10[4] = 0;
                pbVar10[5] = 0;
                pbVar10[6] = 0;
                pbVar10[7] = 0;
                pbVar10[8] = 0;
                pbVar10[9] = 0;
                pbVar10[10] = 0;
                pbVar10[0xb] = 0;
                pbVar10[0xc] = 0;
                pbVar10[0xd] = 0;
                pbVar10[0xe] = 0;
                pbVar10[0xf] = 0;
                pbVar10 = (byte *)((long)unaff_RBX + uVar54 + 0x10);
                pbVar10[0] = 0;
                pbVar10[1] = 0;
                pbVar10[2] = 0;
                pbVar10[3] = 0;
                pbVar10[4] = 0;
                pbVar10[5] = 0;
                pbVar10[6] = 0;
                pbVar10[7] = 0;
                if (uVar49 != 0) {
                  puStack_90 = &UNK_0050eae9;
                  _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                            (uVar49,(byte *)(uVar54 + (long)unaff_RBX),
                             _ZN6google8protobuf8internal7cleanup21arena_destruct_objectINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPv
                            );
                }
              }
            }
            bVar3 = (byte)*puVar44;
            if ((char)bVar3 < '\0') {
              puStack_90 = &UNK_0050eb0a;
              auVar76 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
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
            auVar76._0_8_ = (byte *)((long)puVar44 + 1);
            auVar76._9_3_ = 0;
code_r0x0050eb1a:
            puVar59 = auVar76._0_8_;
            if ((int)(uint)param_3[0xb] < 1) goto code_r0x0050edc0;
            uVar24 = auVar76._8_4_ + (auVar76._0_4_ - (int)param_3[1]);
            *param_3 = (long)(int)((int)uVar24 >> 0x1f & uVar24) + param_3[1];
            uVar52 = *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar24;
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
            puStack_90 = &UNK_0050eb76;
            puVar44 = puVar59;
            param_1 = unaff_RBX;
            puVar47 = param_5;
            puStack_88 = param_6;
            auVar72 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                                (unaff_RBX,puVar59,param_3,puStack_68,param_5,puStack_78);
            puVar11 = auVar72._8_8_;
            unaff_R13 = auVar72._0_8_;
            uVar58 = (uint)uVar12;
            *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
            uVar52 = (uVar52 - uVar24) + *(uint *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar52;
            if (((uint)param_3[10] != 0) ||
               (*param_3 = (long)(int)((int)uVar52 >> 0x1f & uVar52) + param_3[1],
               unaff_R13 == (ulong *)0x0)) goto code_r0x0050edc0;
            if ((bStack_3d & 8) == 0) {
code_r0x0050ebea:
              auVar7._8_8_ = puVar11;
              auVar7._0_8_ = puVar59;
              auVar65._8_8_ = puVar11;
              auVar65._0_8_ = puVar59;
              uVar52 = *(byte *)((long)param_6 + 0xf) & 0xf;
              puVar26 = (ulong *)&UNK_00204f58;
              pcVar13 = &UNK_00204f58 + *(int *)(&UNK_00204f58 + (ulong)uVar52 * 4);
              uVar62 = pcVar13 == (char *)0x0;
              ppuVar40 = &puStack_88;
              ppuVar8 = &puStack_88;
              puVar41 = &stack0xfffffffffffffff8;
              puVar42 = &stack0xfffffffffffffff8;
              puVar28 = param_5;
              switch(uVar52) {
              case 0:
                puStack_90 = &UNK_0050ec0d;
                _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
                          (param_6,unaff_RBX);
                puVar44 = (ulong *)*param_3;
                break;
              case 1:
                puStack_90 = &UNK_0050ec6b;
                _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
                          (param_6,unaff_RBX);
                puVar44 = (ulong *)*param_3;
                break;
              case 2:
                puStack_90 = &UNK_0050ec2b;
                _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
                          (param_6,unaff_RBX);
                puVar44 = (ulong *)*param_3;
                break;
              default:
                goto code_r0x0050eee8;
              case 5:
                puStack_90 = &UNK_0050ec4b;
                _ZN6google8protobuf8internal10KeyMapBaseINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE19InsertOrReplaceNodeEPNS1_7KeyNodeIS9_EE
                          (param_6,unaff_RBX);
                puVar44 = (ulong *)*param_3;
                break;
              case 6:
                goto code_r0x005104be;
              case 7:
                *pcVar13 = *pcVar13 + (char)pcVar13;
                goto code_r0x00510540;
              case 8:
                pbVar10 = &UNK_00204ee3 + *(int *)(&UNK_00204f58 + (ulong)uVar52 * 4);
                *pbVar10 = *pbVar10 | 0x58;
                if (-1 < (char)*pbVar10) goto code_r0x0051050d;
                goto code_r0x00510520;
              case 9:
              case 10:
                puVar26 = (ulong *)((ulong)unaff_RBX & 0xffffffff);
                goto code_r0x005107d4;
              case 0xb:
                *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
                ppuVar36 = &puStack_88;
                goto code_r0x00510520;
              case 0xc:
                puVar26 = (ulong *)&UNK_00204fb0;
                puStack_90 = &UNK_00510881;
                auVar72 = func_0x08318b87();
                puVar11 = auVar72._8_8_;
                pcVar13 = auVar72._0_8_;
                goto code_r0x00510881;
              case 0xd:
                puStack_90 = &UNK_0051089d;
                puVar44 = (ulong *)func_0x15de54a6();
                out(0x46,(int)puVar44);
                return puVar44;
              case 0xe:
                goto code_r0x0051088e;
              case 0xf:
                goto code_r0x00510893;
              }
            }
            else {
              uVar52 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)param_6 + 0xe));
              puVar61 = (uint *)puStack_68[1];
              puVar44 = (ulong *)(long)(short)*puVar61;
              param_1 = (ulong *)(ulong)(*puVar61 >> 0x10);
              puVar11 = (ulong *)(((long)(int)uVar52 - (long)puVar44) - (long)param_1);
              if ((ulong *)((long)(int)uVar52 - (long)puVar44) < param_1) goto code_r0x0050ebea;
              uVar24 = puVar61[1];
              puVar44 = (ulong *)(ulong)uVar24;
              param_1 = (ulong *)(ulong)(ushort)uVar24;
              if (param_1 <= puVar11) {
                puVar11 = (ulong *)(ulong)(uVar24 >> 0x10);
                puVar44 = (ulong *)0x0;
                do {
                  if (puVar11 <= puVar44) goto code_r0x0050ece8;
                  uVar32 = *(uint *)((long)puVar61 +
                                    (long)puVar44 * 4 + (ulong)(uVar24 >> 3 & 0x1ffc) + 8);
                  param_1 = (ulong *)(ulong)uVar32;
                  puVar47 = (ulong *)(ulong)((int)uVar52 < (int)uVar32);
                  puVar44 = (ulong *)(((long)puVar44 * 2 - (long)puVar47) + 2);
                } while (uVar32 != uVar52);
                goto code_r0x0050ebea;
              }
              if ((puVar61[((ulong)puVar11 >> 5) + 2] >> ((uint)puVar11 & 0x1f) & 1) != 0)
              goto code_r0x0050ebea;
code_r0x0050ece8:
              puStack_90 = &UNK_0050ed02;
              _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                        (uStack_60,param_5,param_6,CONCAT44(uStack_4c,uVar31),unaff_RBX,puStack_80);
              puVar44 = (ulong *)*param_3;
            }
            if (puVar44 <= unaff_R13) {
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
            uVar52 = (uint)bVar3;
            puVar44 = (ulong *)((long)unaff_R13 + 1);
            if ((char)bVar3 < '\0') {
              uVar46 = (uint7)(((ulong)bVar3 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar46,*(byte *)puVar44);
              if (-1 < (char)*(byte *)puVar44) {
                puVar44 = (ulong *)((long)unaff_R13 + 2);
                if (((int)lVar22 << 7 | (uint)(((ulong)bVar3 << 0x39) >> 0x39)) != uVar31) break;
                goto code_r0x0050ea10;
              }
              uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar46,*(byte *)((long)unaff_R13 + 2));
              if ((char)*(byte *)((long)unaff_R13 + 2) < '\0') {
                uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                lVar22 = CONCAT71(uVar46,*(byte *)((long)unaff_R13 + 3));
                if ((char)*(byte *)((long)unaff_R13 + 3) < '\0') {
                  uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                  if ((char)*(byte *)((long)unaff_R13 + 4) < '\0') {
                    uVar52 = 0;
                    puVar44 = (ulong *)0x0;
                  }
                  else {
                    uVar52 = (int)CONCAT71(uVar46,*(byte *)((long)unaff_R13 + 4)) << 0x1c |
                             (uint)(uVar46 >> 0x1c);
                    puVar44 = (ulong *)((long)unaff_R13 + 5);
                  }
                }
                else {
                  uVar52 = (int)lVar22 << 0x15 | (uint)(uVar46 >> 0x23);
                  puVar44 = (ulong *)((long)unaff_R13 + 4);
                }
              }
              else {
                uVar52 = (int)lVar22 << 0xe | (uint)(uVar46 >> 0x2a);
                puVar44 = (ulong *)((long)unaff_R13 + 3);
              }
            }
          } while (uVar52 == uVar31);
          uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*unaff_R13 & 0xfffffff8);
          if (in_FS_OFFSET[5] == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0050ee52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                         (uStack_60,unaff_R13,param_3,
                                          *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                          (ulong)(ushort)*unaff_R13,param_5,uStack_70);
            return puVar44;
          }
        }
code_r0x0050eee3:
        puStack_90 = &UNK_0050eee8;
        func_0x0099bd00();
code_r0x0050eee8:
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
        puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar44;
      case 8:
        goto code_r0x005013a0;
      case 9:
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 == 0x20) {
          do {
            if ((uVar12 & 7) == 0) {
              uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
              uVar52 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
              if (uVar52 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar52 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar52 & 0x1f);
              }
              uVar60 = uVar60 >> 6;
              if ((uVar60 & 7) == 0) {
                puStack_68 = param_6;
                uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
                uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
                uStack_60 = param_1;
                lVar20 = *(long *)((long)param_1 + uVar12);
                if (lVar20 == lVar22) {
                  uVar54 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar49 = param_1[1];
                  if ((uVar49 & 1) == 0) {
                    if (uVar49 == 0) goto code_r0x005166f0;
code_r0x005166d5:
                    puStack_80 = (ulong *)&UNK_005166e2;
                    uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar49,uVar54 + 7 & 0xfffffffffffffff8);
                  }
                  else {
                    uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
                    if (uVar49 != 0) goto code_r0x005166d5;
code_r0x005166f0:
                    puStack_80 = (ulong *)&UNK_005166f8;
                    uVar14 = _Znwm(uVar54);
                  }
                  puVar26 = uStack_60;
                  *(undefined8 *)((long)uStack_60 + uVar12) = uVar14;
                  puStack_80 = (ulong *)&UNK_0051670e;
                  func_0x0099bda0(uVar14,lVar22,uVar54);
                  lVar20 = *(long *)((long)puVar26 + uVar12);
                  puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
                }
                uStack_70 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)uStack_4c);
                puVar11 = *(ulong **)(lVar20 + (long)uStack_70);
                if (puVar11 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar12 = uStack_60[1];
                  if ((uVar12 & 1) == 0) {
                    if (uVar12 == 0) goto code_r0x00516aff;
code_r0x00516771:
                    puStack_80 = (ulong *)&UNK_0051677e;
                    puVar11 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x10);
                    *puVar11 = uVar12;
                  }
                  else {
                    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                    if (uVar12 != 0) goto code_r0x00516771;
code_r0x00516aff:
                    puStack_80 = (ulong *)&UNK_00516b09;
                    puVar11 = (ulong *)_Znwm(0x10);
                    *puVar11 = 0;
                  }
                  *(ulong **)(lVar20 + (long)uStack_70) = puVar11;
                  puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
                  if ((uVar60 & 0x400) == 0) goto code_r0x0051674a;
code_r0x005167a9:
                  uVar12 = *(ulong *)((long)param_5 +
                                     (ulong)*(ushort *)((long)param_5 + (ulong)uStack_4c + 8) * 8 +
                                     (ulong)(uint)param_5[3]);
                }
                else {
                  if ((uVar60 & 0x400) != 0) goto code_r0x005167a9;
code_r0x0051674a:
                  uVar12 = 0;
                }
                puVar16 = (ulong *)(uVar12 >> 0x20);
                uStack_70 = puVar16;
                goto code_r0x005167ec;
              }
              if ((uVar60 & 7) != 2) {
                puStack_68 = param_6;
                uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
                uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
                lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
                lVar20 = *(long *)((long)param_1 + uVar12);
                uStack_60 = param_5;
                if (lVar20 == lVar22) {
                  uVar54 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                  uVar49 = param_1[1];
                  if ((uVar49 & 1) != 0) {
                    uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
                  }
                  if (uVar49 == 0) {
                    puStack_80 = (ulong *)&UNK_00515db0;
                    uVar14 = _Znwm(uVar54);
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515da6;
                    uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                       (uVar49,uVar54 + 7 & 0xfffffffffffffff8);
                  }
                  *(undefined8 *)((long)param_1 + uVar12) = uVar14;
                  puStack_80 = (ulong *)&UNK_00515dc6;
                  func_0x0099bda0(uVar14,lVar22,uVar54);
                  lVar20 = *(long *)((long)param_1 + uVar12);
                  puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
                }
                uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (ulong)uStack_4c);
                puVar11 = *(ulong **)(lVar20 + (long)uStack_70);
                if (puVar11 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar12 = param_1[1];
                  if ((uVar12 & 1) != 0) {
                    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                  }
                  if (uVar12 == 0) {
                    puStack_80 = (ulong *)&UNK_005161b0;
                    puVar11 = (ulong *)_Znwm(0x10);
                    *puVar11 = 0;
                  }
                  else {
                    puStack_80 = (ulong *)&UNK_00515e36;
                    puVar11 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x10);
                    *puVar11 = uVar12;
                  }
                  *(ulong **)(lVar20 + (long)uStack_70) = puVar11;
                  puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
                  if ((uVar60 & 0x400) == 0) goto code_r0x00515e02;
code_r0x00515e5d:
                  uVar12 = *(ulong *)((long)uStack_60 +
                                     (ulong)*(ushort *)((long)uStack_60 + (ulong)uStack_4c + 8) * 8
                                     + (ulong)(uint)uStack_60[3]);
                }
                else {
                  if ((uVar60 & 0x400) != 0) goto code_r0x00515e5d;
code_r0x00515e02:
                  uVar12 = 0;
                }
                puVar16 = (ulong *)(uVar12 >> 0x20);
                uStack_70 = puVar16;
                goto code_r0x00515e9c;
              }
              puStack_68 = param_6;
              uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
              uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
              lVar20 = *(long *)((long)param_1 + uVar12);
              uStack_60 = param_5;
              if (lVar20 == lVar22) {
                uVar54 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
                uVar49 = param_1[1];
                if ((uVar49 & 1) != 0) {
                  uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
                }
                if (uVar49 == 0) {
                  puStack_80 = (ulong *)&UNK_00516250;
                  uVar14 = _Znwm(uVar54);
                }
                else {
                  puStack_80 = (ulong *)&UNK_00516246;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar49,uVar54 + 7 & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar12) = uVar14;
                puStack_80 = (ulong *)&UNK_00516266;
                func_0x0099bda0(uVar14,lVar22,uVar54);
                lVar20 = *(long *)((long)param_1 + uVar12);
                puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
              }
              uStack_70 = (ulong *)(ulong)*(uint *)((long)uStack_60 + (ulong)uStack_4c);
              puVar11 = *(ulong **)(lVar20 + (long)uStack_70);
              if (puVar11 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar12 = param_1[1];
                if ((uVar12 & 1) != 0) {
                  uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                }
                if (uVar12 == 0) {
                  puStack_80 = (ulong *)&UNK_00516650;
                  puVar11 = (ulong *)_Znwm(0x10);
                  *puVar11 = 0;
                }
                else {
                  puStack_80 = (ulong *)&UNK_005162d6;
                  puVar11 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x10);
                  *puVar11 = uVar12;
                }
                *(ulong **)(lVar20 + (long)uStack_70) = puVar11;
                puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
                if ((uVar60 & 0x400) == 0) goto code_r0x005162a2;
code_r0x005162fd:
                uVar12 = *(ulong *)((long)uStack_60 +
                                   (ulong)*(ushort *)((long)uStack_60 + (ulong)uStack_4c + 8) * 8 +
                                   (ulong)(uint)uStack_60[3]);
              }
              else {
                if ((uVar60 & 0x400) != 0) goto code_r0x005162fd;
code_r0x005162a2:
                uVar12 = 0;
              }
              puVar16 = (ulong *)(uVar12 >> 0x20);
              uStack_70 = puVar16;
              goto code_r0x0051633c;
            }
            if ((uVar31 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00515cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar44 = (ulong *)(*(code *)param_5[6])();
              return puVar44;
            }

            _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar31 & 7) != 2);
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar31 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
          if (uVar31 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar31 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar31 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar52;
          }
          uVar60 = uVar60 >> 6;
          puStack_98 = puVar26;
          if ((uVar60 & 7) != 0) {
            if ((uVar60 & 7) != 2) {
              lVar22 = in_FS_OFFSET[5];
              uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
              uVar12 = (ulong)uVar60;
              uVar49 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar20 = *(long *)(*(long *)param_5[4] + uVar49);
              lVar57 = *(long *)((long)param_1 + uVar49);
              if (lVar57 == lVar20) {
                puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 +
                                                      (ulong)(uint)param_5[3] + 0x10);
                uVar12 = param_1[1];
                if ((uVar12 & 1) != 0) {
                  uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)(ulong)CONCAT24(uVar60,(uint)uStack_70);
                if (uVar12 == 0) {
                  puStack_88 = puVar44;
                  puStack_80 = param_3;
                  uVar14 = _Znwm(puStack_78);
                }
                else {
                  puStack_88 = puVar44;
                  puStack_80 = param_3;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar12,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar49) = uVar14;
                func_0x0099bda0(uVar14,lVar20,puStack_78);
                lVar57 = *(long *)((long)param_1 + uVar49);
                uVar12 = (ulong)uStack_70 >> 0x20;
                puVar44 = puStack_88;
                param_3 = puStack_80;
              }
              uVar52 = (uint)uVar12 & 0x600;
              puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar11);
              if (*(ulong **)(puVar17 + lVar57) ==
                  (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                uVar49 = param_1[1];
                if ((uVar49 & 1) != 0) {
                  uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
                }
                uStack_70 = (ulong *)CONCAT44((uint)uVar12,(uint)uStack_70);
                puStack_90 = puVar17;
                puStack_88 = puVar44;
                puStack_80 = param_3;
                if (uVar49 == 0) {
                  puStack_78 = param_1;
                  puVar26 = (ulong *)_Znwm(0x10);
                  *puVar26 = 0;
                }
                else {
                  puStack_78 = param_1;
                  puVar26 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar49,0x10);
                  *puVar26 = uVar49;
                }
                *(ulong **)(puStack_90 + lVar57) = puVar26;
                uVar12 = (ulong)uStack_70 & 0x40000000000;
                puVar44 = puStack_88;
                param_3 = puStack_80;
                puVar16 = uStack_60;
              }
              else {
                uVar12 = uVar12 & 0x400;
                puVar26 = *(ulong **)(puVar17 + lVar57);
                puVar16 = uStack_60;
              }
              uStack_60 = puVar26;
              if (uVar12 != 0) {
                uStack_60 = *(ulong **)
                             ((long)param_5 +
                             (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                             (ulong)(uint)param_5[3]);
                puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
                puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar52);
                puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                             (param_3);
                puVar16 = uStack_60;
                if (in_FS_OFFSET[5] == lVar22) {
                  return puVar44;
                }
code_r0x00516d58:
                uStack_60 = puVar16;
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar44;
              }
              bVar63 = uVar52 == 0x200;
              if (in_FS_OFFSET[5] != lVar22) goto code_r0x00516d58;
              lVar22 = in_FS_OFFSET[5];
              uVar12 = (ulong)(byte)*puVar44;
              if ((char)(byte)*puVar44 < '\0') {
                uStack_70 = (ulong *)&UNK_00517503;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                pbVar10 = auVar72._0_8_;
                if (pbVar10 == (byte *)0x0) {
code_r0x0051759d:
                  puVar44 = (ulong *)0x0;
                  goto code_r0x0051759f;
                }
                uVar12 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar10 = (byte *)((long)puVar44 + 1);
              }
              uVar49 = param_3[1];
              iVar30 = (int)uVar49 - (int)pbVar10;
              uVar52 = (uint)uVar12;
              if (iVar30 < (int)uVar52) {
                do {
                  uStack_70 = (ulong *)&UNK_00517531;
                  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                     (pbVar10,uVar49,uStack_60,bVar63);
                  if (lVar20 == 0) goto code_r0x0051759d;
                  iVar56 = (int)lVar20 - (int)param_3[1];
                  iVar25 = (int)uVar12 - iVar30;
                  if (iVar25 < 0x11) {
                    uStack_70 = (ulong *)&UNK_005175f1;
                    puVar18 = (undefined1 *)
                              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                        (&stack0xffffffffffffffa8 + iVar56,
                                         &stack0xffffffffffffffa8 + iVar25,uStack_60,bVar63);
                    puVar44 = (ulong *)0x0;
                    if (puVar18 == &stack0xffffffffffffffa8 + iVar25) {
                      puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                    }
                    goto code_r0x0051759f;
                  }
                  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051759d;
                  uStack_70 = (ulong *)&UNK_00517559;
                  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                  if (lVar20 == 0) goto code_r0x0051759d;
                  uVar52 = (int)uVar12 - (iVar30 + iVar56);
                  uVar12 = (ulong)uVar52;
                  pbVar10 = (byte *)(lVar20 + iVar56);
                  uVar49 = param_3[1];
                  iVar30 = (int)uVar49 - (int)pbVar10;
                } while (iVar30 < (int)uVar52);
              }
              uStack_70 = (ulong *)&UNK_0051758f;
              puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EmLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                           (pbVar10,pbVar10 + (int)uVar52,uStack_60,bVar63);
              puVar44 = (ulong *)0x0;
              if ((ulong *)(pbVar10 + (int)uVar52) == puVar26) {
                puVar44 = puVar26;
              }
code_r0x0051759f:
              if (in_FS_OFFSET[5] != lVar22) {
                uStack_70 = (ulong *)&UNK_00517612;
                func_0x0099bd00();
                UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
                puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
                return puVar44;
              }
              return puVar44;
            }
            lVar22 = in_FS_OFFSET[5];
            uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
            uVar12 = (ulong)uVar60;
            uVar49 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar20 = *(long *)(*(long *)param_5[4] + uVar49);
            lVar57 = *(long *)((long)param_1 + uVar49);
            if (lVar57 == lVar20) {
              puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)(ulong)CONCAT24(uVar60,(uint)uStack_70);
              if (uVar12 == 0) {
                puStack_88 = puVar44;
                puStack_80 = param_3;
                uVar14 = _Znwm(puStack_78);
              }
              else {
                puStack_88 = puVar44;
                puStack_80 = param_3;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar12,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar49) = uVar14;
              func_0x0099bda0(uVar14,lVar20,puStack_78);
              lVar57 = *(long *)((long)param_1 + uVar49);
              uVar12 = (ulong)uStack_70 >> 0x20;
              puVar44 = puStack_88;
              param_3 = puStack_80;
            }
            uVar52 = (uint)uVar12 & 0x600;
            puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar11);
            if (*(ulong **)(puVar17 + lVar57) == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE
               ) {
              uVar49 = param_1[1];
              if ((uVar49 & 1) != 0) {
                uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)CONCAT44((uint)uVar12,(uint)uStack_70);
              puStack_90 = puVar17;
              puStack_88 = puVar44;
              puStack_80 = param_3;
              if (uVar49 == 0) {
                puStack_78 = param_1;
                puVar26 = (ulong *)_Znwm(0x10);
                *puVar26 = 0;
              }
              else {
                puStack_78 = param_1;
                puVar26 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar49,0x10);
                *puVar26 = uVar49;
              }
              *(ulong **)(puStack_90 + lVar57) = puVar26;
              uVar12 = (ulong)uStack_70 & 0x40000000000;
              puVar44 = puStack_88;
              param_3 = puStack_80;
              puVar16 = uStack_60;
            }
            else {
              uVar12 = uVar12 & 0x400;
              puVar26 = *(ulong **)(puVar17 + lVar57);
              puVar16 = uStack_60;
            }
            uStack_60 = puVar26;
            if (uVar12 != 0) {
              uStack_60 = *(ulong **)
                           ((long)param_5 +
                           (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                           (ulong)(uint)param_5[3]);
              puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
              puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar52);
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
              puVar16 = uStack_60;
              if (in_FS_OFFSET[5] == lVar22) {
                return puVar44;
              }
code_r0x00516f98:
              uStack_60 = puVar16;
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar44;
            }
            bVar63 = uVar52 == 0x200;
            if (in_FS_OFFSET[5] != lVar22) goto code_r0x00516f98;
            lVar22 = in_FS_OFFSET[5];
            uVar12 = (ulong)(byte)*puVar44;
            if ((char)(byte)*puVar44 < '\0') {
              uStack_70 = (ulong *)&UNK_00517a63;
              auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
              pbVar10 = auVar72._0_8_;
              if (pbVar10 == (byte *)0x0) {
code_r0x00517afd:
                puVar44 = (ulong *)0x0;
                goto code_r0x00517aff;
              }
              uVar12 = auVar72._8_8_ & 0xffffffff;
            }
            else {
              pbVar10 = (byte *)((long)puVar44 + 1);
            }
            uVar49 = param_3[1];
            iVar30 = (int)uVar49 - (int)pbVar10;
            uVar52 = (uint)uVar12;
            if (iVar30 < (int)uVar52) {
              do {
                uStack_70 = (ulong *)&UNK_00517a91;
                lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                   (pbVar10,uVar49,uStack_60,bVar63);
                if (lVar20 == 0) goto code_r0x00517afd;
                iVar56 = (int)lVar20 - (int)param_3[1];
                iVar25 = (int)uVar12 - iVar30;
                if (iVar25 < 0x11) {
                  uStack_70 = (ulong *)&UNK_00517b51;
                  puVar18 = (undefined1 *)
                            _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                      (&stack0xffffffffffffffa8 + iVar56,
                                       &stack0xffffffffffffffa8 + iVar25,uStack_60,bVar63);
                  puVar44 = (ulong *)0x0;
                  if (puVar18 == &stack0xffffffffffffffa8 + iVar25) {
                    puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                  }
                  goto code_r0x00517aff;
                }
                if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00517afd;
                uStack_70 = (ulong *)&UNK_00517ab9;
                lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
                if (lVar20 == 0) goto code_r0x00517afd;
                uVar52 = (int)uVar12 - (iVar30 + iVar56);
                uVar12 = (ulong)uVar52;
                pbVar10 = (byte *)(lVar20 + iVar56);
                uVar49 = param_3[1];
                iVar30 = (int)uVar49 - (int)pbVar10;
              } while (iVar30 < (int)uVar52);
            }
            uStack_70 = (ulong *)&UNK_00517aef;
            puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EjLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                         (pbVar10,pbVar10 + (int)uVar52,uStack_60,bVar63);
            puVar44 = (ulong *)0x0;
            if ((ulong *)(pbVar10 + (int)uVar52) == puVar26) {
              puVar44 = puVar26;
            }
code_r0x00517aff:
            if (in_FS_OFFSET[5] != lVar22) {
              uStack_70 = (ulong *)&UNK_00517b72;
              func_0x0099bd00();
              UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
              puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar44;
            }
            return puVar44;
          }
          lVar22 = in_FS_OFFSET[5];
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar12 = (ulong)uVar60;
          uVar49 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar20 = *(long *)(*(long *)param_5[4] + uVar49);
          lVar57 = *(long *)((long)param_1 + uVar49);
          if (lVar57 == lVar20) {
            puStack_78 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar12 = param_1[1];
            if ((uVar12 & 1) != 0) {
              uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)(ulong)CONCAT24(uVar60,(uint)uStack_70);
            if (uVar12 == 0) {
              puStack_88 = puVar44;
              puStack_80 = param_3;
              uVar14 = _Znwm(puStack_78);
            }
            else {
              puStack_88 = puVar44;
              puStack_80 = param_3;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar12,(ulong)((long)puStack_78 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar49) = uVar14;
            func_0x0099bda0(uVar14,lVar20,puStack_78);
            lVar57 = *(long *)((long)param_1 + uVar49);
            uVar12 = (ulong)uStack_70 >> 0x20;
            puVar44 = puStack_88;
            param_3 = puStack_80;
          }
          uVar52 = (uint)uVar12 & 0x600;
          puVar17 = (undefined *)(ulong)*(uint *)((long)param_5 + (long)puVar11);
          if (*(ulong **)(puVar17 + lVar57) == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE)
          {
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
            }
            uStack_70 = (ulong *)CONCAT44((uint)uVar12,(uint)uStack_70);
            puStack_90 = puVar17;
            puStack_88 = puVar44;
            puStack_80 = param_3;
            if (uVar49 == 0) {
              puStack_78 = param_1;
              puVar26 = (ulong *)_Znwm(0x10);
              *puVar26 = 0;
            }
            else {
              puStack_78 = param_1;
              puVar26 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar49,0x10);
              *puVar26 = uVar49;
            }
            *(ulong **)(puStack_90 + lVar57) = puVar26;
            uVar12 = (ulong)uStack_70 & 0x40000000000;
            puVar44 = puStack_88;
            param_3 = puStack_80;
            puVar16 = uStack_60;
          }
          else {
            uVar12 = uVar12 & 0x400;
            puVar26 = *(ulong **)(puVar17 + lVar57);
            puVar16 = uStack_60;
          }
          uStack_60 = puVar26;
          if (uVar12 != 0) {
            uStack_60 = *(ulong **)
                         ((long)param_5 +
                         (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                         (ulong)(uint)param_5[3]);
            puStack_68._2_6_ = (undefined6)((ulong)puStack_68 >> 0x10);
            puStack_68 = (ulong *)CONCAT62(puStack_68._2_6_,(short)uVar52);
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                         (param_3);
            puVar16 = uStack_60;
            if (in_FS_OFFSET[5] == lVar22) {
              return puVar44;
            }
code_r0x005171d8:
            uStack_60 = puVar16;
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar44;
          }
          bVar63 = uVar52 == 0x200;
          if (in_FS_OFFSET[5] != lVar22) goto code_r0x005171d8;
          lVar22 = in_FS_OFFSET[5];
          uVar12 = (ulong)(byte)*puVar44;
          if ((char)(byte)*puVar44 < '\0') {
            uStack_70 = (ulong *)&UNK_00517fd3;
            auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
            pbVar10 = auVar72._0_8_;
            if (pbVar10 == (byte *)0x0) {
code_r0x0051806d:
              puVar44 = (ulong *)0x0;
              goto code_r0x0051806f;
            }
            uVar12 = auVar72._8_8_ & 0xffffffff;
          }
          else {
            pbVar10 = (byte *)((long)puVar44 + 1);
          }
          uVar49 = param_3[1];
          iVar30 = (int)uVar49 - (int)pbVar10;
          uVar52 = (uint)uVar12;
          if (iVar30 < (int)uVar52) {
            do {
              uStack_70 = (ulong *)&UNK_00518001;
              lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                 (pbVar10,uVar49,uStack_60,bVar63);
              if (lVar20 == 0) goto code_r0x0051806d;
              iVar56 = (int)lVar20 - (int)param_3[1];
              iVar25 = (int)uVar12 - iVar30;
              if (iVar25 < 0x11) {
                uStack_70 = (ulong *)&UNK_005180c1;
                puVar18 = (undefined1 *)
                          _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                    (&stack0xffffffffffffffa8 + iVar56,
                                     &stack0xffffffffffffffa8 + iVar25,uStack_60,bVar63);
                puVar44 = (ulong *)0x0;
                if (puVar18 == &stack0xffffffffffffffa8 + iVar25) {
                  puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
                }
                goto code_r0x0051806f;
              }
              if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051806d;
              uStack_70 = (ulong *)&UNK_00518029;
              lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
              if (lVar20 == 0) goto code_r0x0051806d;
              uVar52 = (int)uVar12 - (iVar30 + iVar56);
              uVar12 = (ulong)uVar52;
              pbVar10 = (byte *)(lVar20 + iVar56);
              uVar49 = param_3[1];
              iVar30 = (int)uVar49 - (int)pbVar10;
            } while (iVar30 < (int)uVar52);
          }
          uStack_70 = (ulong *)&UNK_0051805f;
          puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_8TcParser15MpPackedVarintTILb1EbLt0EEEPKcPNS0_11MessageLiteES6_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUlmE_EES6_S6_S6_T_
                                       (pbVar10,pbVar10 + (int)uVar52,uStack_60,bVar63);
          puVar44 = (ulong *)0x0;
          if ((ulong *)(pbVar10 + (int)uVar52) == puVar26) {
            puVar44 = puVar26;
          }
code_r0x0051806f:
          if (in_FS_OFFSET[5] != lVar22) {
            uStack_70 = (ulong *)&UNK_005180e2;
            func_0x0099bd00();
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar44;
          }
          return puVar44;
        }
        if ((uVar12 & 7) != 0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          puVar59 = puVar44;
          goto code_r0x0050f155;
        }
        uVar49 = (ulong)(char)(byte)*puVar44;
        if ((long)uVar49 < 0) {
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if ((long)uVar54 < 0) {
            uVar50 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
            if ((long)uVar50 < 0) {
              uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
              if ((long)uVar54 < 0) {
                uVar50 = uVar50 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
                if ((long)uVar50 < 0) {
                  uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU
                                    );
                  if ((long)uVar54 < 0) {
                    uVar50 = uVar50 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a |
                                      0x3ffffffffffU);
                    if ((long)uVar50 < 0) {
                      uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                        0x1ffffffffffffU);
                      if ((long)uVar54 < 0) {
                        uVar50 = uVar50 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
                        if ((long)uVar50 < 0) {
                          puVar59 = (ulong *)((long)puVar44 + 10);
                          bVar3 = *(byte *)((long)puVar44 + 9);
                          if (bVar3 != 1) {
                            if ((char)bVar3 < '\0') goto code_r0x005013a0;
                            if ((bVar3 & 1) == 0) {
                              uVar50 = uVar50 ^ 0x8000000000000000;
                            }
                          }
                        }
                        else {
                          puVar59 = (ulong *)((long)puVar44 + 9);
                        }
                      }
                      else {
                        puVar59 = puVar44 + 1;
                      }
                    }
                    else {
                      puVar59 = (ulong *)((long)puVar44 + 7);
                    }
                  }
                  else {
                    puVar59 = (ulong *)((long)puVar44 + 6);
                  }
                }
                else {
                  puVar59 = (ulong *)((long)puVar44 + 5);
                }
              }
              else {
                puVar59 = (ulong *)((long)puVar44 + 4);
              }
            }
            else {
              puVar59 = (ulong *)((long)puVar44 + 3);
            }
            uVar54 = uVar54 & uVar50;
          }
          else {
            puVar59 = (ulong *)((long)puVar44 + 2);
          }
          uVar49 = uVar49 & uVar54;
        }
        else {
          puVar59 = (ulong *)((long)puVar44 + 1);
        }
        puVar61 = (uint *)((long)puVar11 + (long)param_5);
        uVar48 = uVar60 & 0x600;
        uStack_60 = (ulong *)((ulong)CONCAT24(uVar60,(undefined4)uStack_60) & 0x1c0ffffffff);
        uVar31 = (uint)uVar49;
        if ((uVar60 & 0x1c0) == 0xc0) {
          if (uVar48 == 0x200) {
            uVar49 = uVar49 >> 1 ^ -(ulong)(uVar31 & 1);
          }
        }
        else if ((uVar60 & 0x1c0) == 0x80) {
          if ((uVar60 & 0x400) != 0) {
            puVar11 = *(ulong **)
                       ((long)param_5 + (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
            if (uVar48 == 0x600) {
              puVar16 = puVar11;
              if (((int)puVar11 <= (int)uVar31) &&
                 (puVar16 = (ulong *)((ulong)puVar11 >> 0x20),
                 (int)uVar31 <= (int)((ulong)puVar11 >> 0x20))) goto code_r0x0050eff5;
            }
            else {
              uStack_70 = (ulong *)&UNK_0050f18d;
              puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                           (uVar49 & 0xffffffff,puVar11);
              if ((char)puVar16 != '\0') goto code_r0x0050eff5;
            }
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
          if (uVar48 == 0x200) {
            uVar49 = (ulong)(int)(uVar31 >> 1 ^ -(uVar31 & 1));
          }
        }
code_r0x0050eff5:
        if (uVar55 == 0x30) {
          uStack_70 = (ulong *)&UNK_0050f03c;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar61,(uVar12 & 0xfffffff8) >> 3,param_5,param_1);
        }
        else if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
        lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
        lVar20 = *(long *)((long)param_1 + uVar12);
        if (lVar20 == lVar22) {
          uVar50 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
          uVar54 = param_1[1];
          if ((uVar54 & 1) != 0) {
            uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
          }
          if (uVar54 == 0) {
            uStack_70 = (ulong *)&UNK_0050f0b4;
            uVar14 = _Znwm(uVar50);
          }
          else {
            uStack_70 = (ulong *)&UNK_0050f0aa;
            uVar14 = _ZN6google8protobuf5Arena8AllocateEm(uVar54,uVar50 + 7 & 0xfffffffffffffff8);
          }
          *(undefined8 *)((long)param_1 + uVar12) = uVar14;
          uStack_70 = (ulong *)&UNK_0050f0c6;
          func_0x0099bda0(uVar14,lVar22,uVar50);
          lVar20 = *(long *)((long)param_1 + uVar12);
        }
        if (uStack_60._4_4_ == 0xc0) {
          *(ulong *)(lVar20 + (ulong)*puVar61) = uVar49;
          puVar44 = (ulong *)*param_3;
        }
        else if (uStack_60._4_4_ == 0x80) {
          *(int *)(lVar20 + (ulong)*puVar61) = (int)uVar49;
          puVar44 = (ulong *)*param_3;
        }
        else {
          *(bool *)(lVar20 + (ulong)*puVar61) = uVar49 != 0;
          puVar44 = (ulong *)*param_3;
        }
        if (puVar44 <= puVar59) {
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar52;
          }
          return puVar59;
        }
        uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar59 & 0xfffffff8);
        puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^ (ulong)(ushort)*puVar59)
        ;
        UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
code_r0x0050f155:
                    /* WARNING: Could not recover jumptable at 0x0050f163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar59,param_3,puVar26);
        return puVar44;
      case 10:
        goto 
        _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xb:
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 == 0x20) {
          do {
            uVar24 = uVar31 & 7;
            if (uVar24 != 2) {
              uVar58 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
              if (uVar58 != 0xffffffff) {
                puVar61 = (uint *)((long)param_1 + (ulong)(uVar58 >> 5) * 4);
                *puVar61 = *puVar61 | 1 << ((byte)uVar58 & 0x1f);
              }
              uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
              lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
              lVar20 = *(long *)((long)param_1 + uVar12);
              if (lVar20 == lVar22) {
                uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10
                                                     );
                uVar49 = param_1[1];
                if ((uVar49 & 1) != 0) {
                  uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
                }
                if (uVar49 == 0) {
                  uStack_70 = (ulong *)&UNK_005182ff;
                  uVar14 = _Znwm(uStack_60);
                }
                else {
                  uStack_70 = (ulong *)&UNK_005182f5;
                  uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                     (uVar49,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
                }
                *(undefined8 *)((long)param_1 + uVar12) = uVar14;
                uStack_70 = (ulong *)&UNK_00518317;
                func_0x0099bda0(uVar14,lVar22,uStack_60);
                lVar20 = *(long *)((long)param_1 + uVar12);
              }
              if ((*(ushort *)((long)((long)param_5 + 10) + (long)puVar11) & 0x1c0) == 0xc0) {
                if (uVar24 == 1) {
                  uVar24 = *(uint *)((long)param_5 + (long)puVar11);
                  puVar26 = *(ulong **)(lVar20 + (ulong)uVar24);
                  if (puVar26 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                    uVar12 = param_1[1];
                    if ((uVar12 & 1) != 0) {
                      uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                    }
                    if (uVar12 == 0) {
                      uStack_70 = (ulong *)&UNK_005186b8;
                      puVar26 = (ulong *)_Znwm(0x10);
                      *puVar26 = 0;
                    }
                    else {
                      uStack_70 = (ulong *)&UNK_00518388;
                      puVar26 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x10);
                      *puVar26 = uVar12;
                    }
                    *(ulong **)(lVar20 + (ulong)uVar24) = puVar26;
                  }
                  goto code_r0x005183c3;
                }
              }
              else if (uVar24 == 5) {
                uVar24 = *(uint *)((long)param_5 + (long)puVar11);
                puVar26 = *(ulong **)(lVar20 + (ulong)uVar24);
                if (puVar26 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
                  uVar12 = param_1[1];
                  if ((uVar12 & 1) != 0) {
                    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
                  }
                  if (uVar12 == 0) {
                    uStack_70 = (ulong *)&UNK_005186de;
                    puVar26 = (ulong *)_Znwm(0x10);
                    *puVar26 = 0;
                  }
                  else {
                    uStack_70 = (ulong *)&UNK_005184e4;
                    puVar26 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x10);
                    *puVar26 = uVar12;
                  }
                  *(ulong **)(lVar20 + (ulong)uVar24) = puVar26;
                }
                goto code_r0x00518523;
              }
              UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
              goto code_r0x00518636;
            }

            _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            :
          } while ((uVar31 & 7) != 2);
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar31 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
          if (uVar31 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar31 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar31 & 0x1f);
          }
          uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
          lVar20 = *(long *)((long)param_1 + uVar12);
          if (lVar20 == lVar22) {
            uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
            }
            if (uVar49 == 0) {
              uStack_70 = (ulong *)&UNK_0050f625;
              uVar14 = _Znwm(uStack_60);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050f5ff;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar49,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar12) = uVar14;
            uStack_70 = (ulong *)&UNK_0050f63c;
            func_0x0099bda0(uVar14,lVar22,uStack_60);
            lVar20 = *(long *)((long)param_1 + uVar12);
          }
          bVar3 = (byte)*puVar44;
          if ((char)bVar3 < '\0') {
            uStack_70 = (ulong *)&UNK_0050f66b;
            auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
          }
          else {
            auVar72[8] = bVar3;
            auVar72._0_8_ = (byte *)((long)puVar44 + 1);
            auVar72._9_7_ = 0;
          }
          uVar12 = auVar72._8_8_;
          uVar14 = auVar72._0_8_;
          uVar49 = (ulong)*(uint *)((long)param_5 + (long)puVar11);
          if ((uVar60 & 0x1c0) == 0xc0) {
            if (*(undefined1 **)(lVar20 + uVar49) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_0050f7e3;
                puVar44 = (ulong *)_Znwm(0x10);
                *puVar44 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f6cd;
                puVar44 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x10);
                *puVar44 = uVar54;
              }
              *(ulong **)(lVar20 + uVar49) = puVar44;
              uVar12 = uVar12 & 0xffffffff;
            }
            uStack_70 = (ulong *)&UNK_0050f6ed;
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedImEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar14,uVar12);
          }
          else {
            if (*(undefined1 **)(lVar20 + uVar49) == _ZN6google8protobuf8internal11kZeroBufferE) {
              uVar54 = param_1[1];
              if ((uVar54 & 1) != 0) {
                uVar54 = *(ulong *)(uVar54 & 0xfffffffffffffffe);
              }
              if (uVar54 == 0) {
                uStack_70 = (ulong *)&UNK_0050f808;
                puVar44 = (ulong *)_Znwm(0x10,uVar14);
                *puVar44 = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f728;
                puVar44 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar54,0x10);
                *puVar44 = uVar54;
              }
              *(ulong **)(lVar20 + uVar49) = puVar44;
              uVar12 = uVar12 & 0xffffffff;
            }
            uStack_70 = (ulong *)&UNK_0050f748;
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadPackedFixedIjEEPKcS5_iPNS0_13RepeatedFieldIT_EE
                                         (param_3,uVar14,uVar12);
          }
          if (puVar44 != (ulong *)0x0) {
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050f78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                         (param_1,puVar44,param_3,
                                          *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar44,param_5,param_6);
            return puVar44;
          }
          goto code_r0x005013a0;
        }
        uVar60 = uVar60 & 0x1c0;
        if (uVar60 == 0xc0) {
          if ((uVar31 & 7) == 1) {
code_r0x0050f3d8:
            puVar61 = (uint *)((long)puVar11 + (long)param_5);
            if (uVar55 == 0x30) {
              uStack_70 = (ulong *)&UNK_0050f420;
              _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                        (param_5,0,puVar61,uVar31 >> 3,param_5,param_1);
            }
            else if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
            }
            uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
            lVar20 = *(long *)((long)param_1 + uVar12);
            if (lVar20 == lVar22) {
              uVar31 = *(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
              uVar49 = param_1[1];
              if ((uVar49 & 1) != 0) {
                uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
              }
              if (uVar49 == 0) {
                uStack_70 = (ulong *)&UNK_0050f496;
                uStack_60 = param_5;
                uVar14 = _Znwm((ulong)uVar31);
              }
              else {
                uStack_70 = (ulong *)&UNK_0050f48c;
                uStack_60 = param_5;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar49,(ulong)uVar31 + 7 & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar12) = uVar14;
              uStack_70 = (ulong *)&UNK_0050f4ad;
              func_0x0099bda0(uVar14,lVar22,uVar31);
              lVar20 = *(long *)((long)param_1 + uVar12);
              param_5 = uStack_60;
            }
            if (uVar60 == 0xc0) {
              *(ulong *)(lVar20 + (ulong)*puVar61) = *puVar44;
              lVar22 = 8;
            }
            else {
              *(uint *)(lVar20 + (ulong)*puVar61) = (uint)*puVar44;
              lVar22 = 4;
            }
            puVar44 = (ulong *)((long)puVar44 + lVar22);
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)param_5 +
                           (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8) * 2
                           + 0x38);
            goto code_r0x0050f511;
          }
        }
        else if ((uVar31 & 7) == 5) goto code_r0x0050f3d8;
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
code_r0x0050f511:
                    /* WARNING: Could not recover jumptable at 0x0050f51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar44;
      case 0xc:
        goto 
        _ZN6google8protobuf8internal8TcParser13MpPackedFixedILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      case 0xd:
        if ((uVar31 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0050f87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*(code *)param_5[6])();
          return puVar44;
        }
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 == 0x20) {
          uStack_60 = (ulong *)CONCAT44(uVar31,(undefined4)uStack_60);
          if ((uVar31 & 7) != 2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
            goto code_r0x005188d6;
          }
          puVar61 = (uint *)((long)param_5 + (long)puVar11);
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar52 = puVar61[1];
          if (uVar52 != 0xffffffff) {
            puVar1 = (uint *)((long)param_1 + (ulong)(uVar52 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar52 & 0x1f);
          }
          uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
          lVar20 = *(long *)((long)param_1 + uVar12);
          puStack_78 = puVar11;
          puStack_68 = param_6;
          if (lVar20 == lVar22) {
            uStack_70 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
            }
            if (uVar49 == 0) {
              puStack_80 = (ulong *)&UNK_005187cd;
              uVar14 = _Znwm(uStack_70);
            }
            else {
              puStack_80 = (ulong *)&UNK_005187b4;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar49,(ulong)((long)uStack_70 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar12) = uVar14;
            puStack_80 = (ulong *)&UNK_005187e4;
            func_0x0099bda0(uVar14,lVar22,uStack_70);
            lVar20 = *(long *)((long)param_1 + uVar12);
          }
          puVar26 = puVar44;
          if ((uVar60 & 0x1c0) == 0x100) {
            uVar52 = *puVar61;
            puVar11 = *(ulong **)(lVar20 + (ulong)uVar52);
            if (puVar11 == (ulong *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              if (uVar12 == 0) {
                puStack_80 = (ulong *)&UNK_00518cef;
                puVar11 = (ulong *)_Znwm(0x18);
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
              }
              else {
                puStack_80 = (ulong *)&UNK_00518843;
                puVar11 = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x18);
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = uVar12;
              }
              *(ulong **)(lVar20 + (ulong)uVar52) = puVar11;
            }
            puVar26 = (ulong *)puVar11[2];
            uVar60 = uVar60 & 0x600;
            if ((puVar26 != (ulong *)0x0) && (*(ulong *)(*in_FS_OFFSET + -0x118) == *puVar26)) {
              uVar12 = *puVar11;
              if ((uVar12 & 1) == 0) {
                uVar52 = (uint)(uVar12 != 0);
              }
              else {
                uVar52 = *(uint *)(uVar12 + 3);
              }
              if (uVar52 == (uint)puVar11[1]) {
                lVar22 = *(long *)(*in_FS_OFFSET + -0x110);
                uStack_70 = puVar26;
                do {
                  uVar12 = (ulong)(byte)*puVar44;
                  if ((char)(byte)*puVar44 < '\0') {
                    puStack_80 = (ulong *)&UNK_0051892b;
                    auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                    pbVar10 = auVar72._0_8_;
                    param_6 = puStack_68;
                    if (pbVar10 == (byte *)0x0) goto code_r0x005013a0;
                    uVar12 = auVar72._8_8_ & 0xffffffff;
                  }
                  else {
                    pbVar10 = (byte *)((long)puVar44 + 1);
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
                  iVar30 = (int)puVar11[1];
                  uVar49 = *puVar11;
                  if ((uVar49 & 1) == 0) {
                    if (iVar30 == 1) {
code_r0x00518acc:
                      puStack_80 = (ulong *)&UNK_00518add;
                      puVar19 = (undefined8 *)
                                _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                          (puVar11,1,uStack_70);
                      *puVar19 = pbVar53;
                      goto code_r0x0051899e;
                    }
                    *puVar11 = (ulong)pbVar53;
                  }
                  else {
                    if (iVar30 == *(int *)(uVar49 - 1)) goto code_r0x00518acc;
                    *(byte **)(uVar49 + 7 + (long)iVar30 * 8) = pbVar53;
code_r0x0051899e:
                    *(int *)(*puVar11 + 3) = *(int *)(*puVar11 + 3) + 1;
                  }
                  *(int *)(puVar11 + 1) = (int)puVar11[1] + 1;
                  puStack_80 = (ulong *)&UNK_005189b8;
                  cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                    (param_3,uVar12,pbVar10);
                  if (cVar9 == '\0') {
                    puStack_80 = (ulong *)&UNK_005189f1;
                    puVar26 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                                 (param_3,pbVar10,uVar12,pbVar53);
                    param_6 = puStack_68;
                    if (puVar26 == (ulong *)0x0) goto code_r0x005013a0;
                  }
                  else {
                    lVar20 = (long)(int)uVar12;
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
                    func_0x0099bda0(pbVar53,pbVar10,lVar20);
                    puVar26 = (ulong *)(pbVar10 + lVar20);
                  }
                  if (uVar60 == 0x400) {
                    puVar44 = (ulong *)((*puVar11 - 1) + (long)(int)puVar11[1] * 8);
                    if ((*puVar11 & 1) == 0) {
                      puVar44 = puVar11;
                    }
                    pbVar10 = (byte *)*puVar44;
                    if ((*pbVar10 & 1) == 0) {
                      uVar12 = (ulong)(*pbVar10 >> 1);
                      pbVar10 = pbVar10 + 1;
                    }
                    else {
                      uVar12 = *(ulong *)(pbVar10 + 8);
                      pbVar10 = *(byte **)(pbVar10 + 0x10);
                    }
                    puStack_80 = (ulong *)&UNK_00518a6a;
                    iVar30 = utf8_range_IsValid(pbVar10,uVar12);
                    if (iVar30 == 0) {
                      pbVar10 = (byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
                      uVar12 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
                      pbVar53 = pbVar10 + uVar12;
                      uVar49 = ((long)((long)puStack_78 - (ulong)(uint)param_5[2]) >> 2) *
                               -0x5555555555555555;
                      uVar54 = uVar49 + 1;
                      if (uVar54 != 0) {
                        pbVar29 = pbVar10;
                        for (uVar50 = uVar54 & 7; uVar50 != 0; uVar50 = uVar50 - 1) {
                          uVar12 = uVar12 + *pbVar29;
                          pbVar29 = pbVar29 + 1;
                        }
                        if (6 < uVar49) {
                          do {
                            uVar12 = (ulong)pbVar29[7] + (ulong)pbVar29[6] +
                                     (ulong)pbVar29[5] + (ulong)pbVar29[4] + (ulong)pbVar29[3] +
                                     (ulong)pbVar29[2] + (ulong)pbVar29[1] + *pbVar29 + uVar12;
                            pbVar29 = pbVar29 + 8;
                          } while (pbVar29 != pbVar10 + uVar54);
                        }
                      }
                      puStack_80 = (ulong *)&UNK_00518bce;
                      _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                                (pbVar53,(long)(char)*(byte *)((long)param_5 +
                                                              (ulong)*(ushort *)
                                                                      ((long)param_5 + 0x16) * 8 +
                                                              (ulong)(uint)param_5[3]),
                                 pbVar10 + uVar12,(long)(char)pbVar10[uVar54],&UNK_00178f3f,0);
                      param_6 = puStack_68;
                      goto code_r0x005013a0;
                    }
                  }
                  if ((ulong *)*param_3 <= puVar26) goto code_r0x00518ca0;
                  bVar3 = (byte)*puVar26;
                  auVar100[8] = bVar3;
                  auVar100._0_8_ = (byte *)((long)puVar26 + 1);
                  auVar100._9_3_ = 0;
                  if ((char)bVar3 < '\0') {
                    bVar2 = *(byte *)((long)puVar26 + 1);
                    iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                    if ((char)bVar2 < '\0') {
                      puStack_80 = (ulong *)&UNK_00518aac;
                      auVar100 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar26,iVar30);
                    }
                    else {
                      auVar100._8_4_ = iVar30;
                      auVar100._0_8_ = (ushort *)((long)puVar26 + 2);
                    }
                  }
                  puVar44 = auVar100._0_8_;
                } while (auVar100._8_4_ == uStack_60._4_4_);
                goto code_r0x005188a0;
              }
            }
            do {
              puStack_80 = (ulong *)&UNK_00518c1c;
              pbVar10 = (byte *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEPNT_4TypeEPNS0_5ArenaE
                                          (puVar11,puVar11[2]);
              puStack_80 = (ulong *)&UNK_00518c2d;
              puVar26 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                           (pbVar10,puVar44,param_3);
              param_6 = puStack_68;
              if (puVar26 == (ulong *)0x0) goto code_r0x005013a0;
              bVar63 = (*pbVar10 & 1) != 0;
              pbVar53 = pbVar10 + 1;
              if (bVar63) {
                pbVar53 = *(byte **)(pbVar10 + 0x10);
              }
              uVar12 = (ulong)(*pbVar10 >> 1);
              if (bVar63) {
                uVar12 = *(ulong *)(pbVar10 + 8);
              }
              puStack_80 = (ulong *)&UNK_00518c60;
              cVar9 = _ZN6google8protobuf8internal8TcParser12MpVerifyUtf8ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPKNS1_16TcParseTableBaseERKNS8_10FieldEntryEt
                                (pbVar53,uVar12,param_5,puVar61,uVar60);
              param_6 = puStack_68;
              if (cVar9 == '\0') goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar26) goto code_r0x00518ca0;
              bVar3 = (byte)*puVar26;
              auVar101[8] = bVar3;
              auVar101._0_8_ = (byte *)((long)puVar26 + 1);
              auVar101._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar26 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  puStack_80 = (ulong *)&UNK_00518bfd;
                  auVar101 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar26,iVar30);
                }
                else {
                  auVar101._8_4_ = iVar30;
                  auVar101._0_8_ = (ushort *)((long)puVar26 + 2);
                }
              }
              puVar44 = auVar101._0_8_;
            } while (auVar101._8_4_ == uStack_60._4_4_);
          }
code_r0x005188a0:
          puVar44 = puVar26;
          puVar26 = puVar44;
          if ((ulong *)*param_3 <= puVar44) {
code_r0x00518ca0:
            if ((ushort)*param_5 != 0) {
              puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
              *puVar61 = *puVar61 | (uint)puStack_68;
            }
            return puVar26;
          }
          uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
          puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                             (ulong)(ushort)*puVar44);
          UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
          param_6 = puStack_68;
code_r0x005188d6:
                    /* WARNING: Could not recover jumptable at 0x005188e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
        puVar26 = (ulong *)((long)param_5 + (long)puVar11);
        if (uVar55 == 0x10) {
          puVar61 = (uint *)((long)param_1 + (ulong)(*(uint *)((long)puVar26 + 4) >> 5) * 4);
          *puVar61 = *puVar61 | 1 << ((byte)*(uint *)((long)puVar26 + 4) & 0x1f);
        }
        else if (uVar55 == 0x30) {
          puStack_80 = (ulong *)&UNK_0050f8d1;
          _ZN6google8protobuf8internal8TcParser11ChangeOneofEPKNS1_16TcParseTableBaseES5_RKNS3_10FieldEntryEjPNS1_12ParseContextEPNS0_11MessageLiteE
                    (param_5,0,puVar26,uVar31 >> 3,param_5,param_1);
        }
        uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
        lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
        lVar20 = *(long *)((long)param_1 + uVar12);
        if (lVar20 == lVar22) {
          uStack_60 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
          uVar49 = param_1[1];
          if ((uVar49 & 1) != 0) {
            uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
          }
          puStack_78 = puVar44;
          puStack_68 = puVar26;
          if (uVar49 == 0) {
            puStack_80 = (ulong *)&UNK_0050f951;
            uStack_70 = puVar11;
            uVar14 = _Znwm(uStack_60);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f947;
            uStack_70 = puVar11;
            uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                               (uVar49,(ulong)((long)uStack_60 + 7U) & 0xfffffffffffffff8);
          }
          *(undefined8 *)((long)param_1 + uVar12) = uVar14;
          puStack_80 = (ulong *)&UNK_0050f968;
          func_0x0099bda0(uVar14,lVar22,uStack_60);
          lVar20 = *(long *)((long)param_1 + uVar12);
          puVar11 = uStack_70;
          puVar44 = puStack_78;
          puVar26 = puStack_68;
        }
        uVar12 = (ulong)(uint)*puVar26;
        if ((uVar60 & 0x1c0) == 0x140) {
          uVar49 = param_1[1];
          if ((uVar49 & 1) != 0) {
            uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
          }
          puVar26 = (ulong *)(lVar20 + uVar12);
          bVar3 = (byte)*puVar44;
          if ((char)bVar3 < '\0') {
            puStack_80 = (ulong *)&UNK_0050fac4;
            auVar78 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
            if (auVar78._0_8_ != 0) goto code_r0x0050fad9;
            puVar44 = (ulong *)0x0;
          }
          else {
            auVar78[8] = bVar3;
            auVar78._0_8_ = (byte *)((long)puVar44 + 1);
            auVar78._9_3_ = 0;
code_r0x0050fad9:
            iVar30 = auVar78._8_4_;
            lVar22 = auVar78._0_8_;
            if ((int)(((uint)param_3[1] - auVar78._0_4_) + 0x10) < iVar30) {
              puStack_80 = (ulong *)&UNK_0050faf8;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream23ReadMicroStringFallbackEPKciRNS1_11MicroStringEPNS0_5ArenaE
                                           (param_3,lVar22,iVar30,puVar26,uVar49);
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fb1a;
              _ZN6google8protobuf8internal11MicroString7SetImplENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaEm
                        (puVar26,lVar22,(long)iVar30,uVar49,7);
              puVar44 = (ulong *)(lVar22 + iVar30);
            }
          }
          uVar12 = *puVar26;
          if ((uVar12 & 2) == 0) {
            if ((uVar12 & 1) == 0) {
              uVar31 = (uint)(uVar12 >> 2) & 0x3f;
              uVar12 = (long)puVar26 + 1;
            }
            else {
              uVar31 = *(uint *)(uVar12 + 7);
              uVar12 = *(ulong *)(uVar12 - 1);
            }
          }
          else {
            uVar31 = (uint)*(byte *)(uVar12 - 2);
          }
          if ((uVar60 & 0x600) == 0x400) {
            puStack_80 = (ulong *)&UNK_0050fcb5;
            iVar30 = utf8_range_IsValid(uVar12,uVar31);
            if (iVar30 == 0) {
              pbVar10 = (byte *)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                (ulong)(uint)param_5[3]);
              uVar49 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
              lVar22 = (long)(char)*(byte *)((long)param_5 +
                                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                            (ulong)(uint)param_5[3]);
              pbVar53 = pbVar10 + uVar49;
              uVar54 = ((long)((long)puVar11 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
              uVar12 = uVar54 + 1;
              pbVar29 = pbVar10 + uVar12;
              if (uVar12 != 0) {
                pbVar27 = pbVar10;
                for (uVar12 = uVar12 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                  uVar49 = uVar49 + *pbVar27;
                  pbVar27 = pbVar27 + 1;
                }
                if (6 < uVar54) {
                  do {
                    uVar49 = (ulong)pbVar27[7] + (ulong)pbVar27[6] +
                             (ulong)pbVar27[5] + (ulong)pbVar27[4] + (ulong)pbVar27[3] +
                             (ulong)pbVar27[2] + (ulong)pbVar27[1] + *pbVar27 + uVar49;
                    pbVar27 = pbVar27 + 8;
                  } while (pbVar27 != pbVar29);
                }
              }
              goto code_r0x0050fdd9;
            }
          }
          if (puVar44 != (ulong *)0x0) {
code_r0x0050fcd7:
            if ((ulong *)*param_3 <= puVar44) {
              if ((ulong)(ushort)*param_5 != 0) {
                puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                *puVar61 = *puVar61 | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x0050fd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                         (param_1,puVar44,param_3,
                                          *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                          (ulong)(ushort)*puVar44);
            return puVar44;
          }
        }
        else {
          if ((uVar60 & 0x1c0) == 0x80) {
            if (uVar55 == 0x30) {
              lVar20 = *(long *)((long)param_1 + uVar12);
            }
            else {
              lVar20 = lVar20 + uVar12;
            }
            bVar3 = (byte)*puVar44;
            if ((char)bVar3 < '\0') {
              puStack_80 = (ulong *)&UNK_0050fa10;
              auVar77 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
              if (auVar77._0_8_ == 0) goto code_r0x005013a0;
            }
            else {
              auVar77[8] = bVar3;
              auVar77._0_8_ = (byte *)((long)puVar44 + 1);
              auVar77._9_3_ = 0;
            }
            iVar56 = auVar77._8_4_;
            lVar22 = auVar77._0_8_;
            iVar25 = ((uint)param_3[1] - auVar77._0_4_) + 0x10;
            iVar30 = 0x200;
            if (iVar25 < 0x200) {
              iVar30 = iVar25;
            }
            puStack_80 = (ulong *)&UNK_0050fa55;
            cVar9 = _ZN6google8protobuf8internal18EpsCopyInputStream28IsRequestedLessThanOrEqualToEii
                              (param_3,iVar56,iVar30);
            if (cVar9 == '\0') {
              puStack_80 = (ulong *)&UNK_0050fa9a;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadCordFallbackEPKciPN4absl12lts_202605264CordE
                                           (param_3,lVar22,iVar56,lVar20);
              if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
            }
            else {
              puStack_80 = (ulong *)&UNK_0050fa6a;
              _ZN4absl12lts_202605264CordaSENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (lVar20,lVar22,(long)iVar56);
              puVar44 = (ulong *)(lVar22 + iVar56);
            }
            goto code_r0x0050fcd7;
          }
          uVar49 = param_1[1];
          if ((uVar49 & 1) != 0) {
            uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
          }
          puVar26 = (ulong *)(lVar20 + uVar12);
          if (uVar49 == 0) {
            puStack_80 = (ulong *)&UNK_0050fb38;
            uVar14 = _ZN6google8protobuf8internal14ArenaStringPtr13MutableNoCopyEPNS0_5ArenaE
                               (puVar26,0);
            puStack_80 = (ulong *)&UNK_0050fb46;
            puVar44 = (ulong *)_ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
                                         (uVar14,puVar44,param_3);
          }
          else {
            puStack_80 = (ulong *)&UNK_0050f9ec;
            puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                                         (param_3,puVar44,puVar26);
          }
          if (puVar44 == (ulong *)0x0) {
            puStack_80 = (ulong *)&UNK_0050fe3e;
            func_0x0050d360(param_1,puVar26);
            goto code_r0x005013a0;
          }
          if ((uVar60 & 0x600) != 0x400) goto code_r0x0050fcd7;
          pbVar10 = (byte *)(*puVar26 & 0xfffffffffffffffc);
          if ((*pbVar10 & 1) == 0) {
            uVar12 = (ulong)(*pbVar10 >> 1);
            pbVar10 = pbVar10 + 1;
          }
          else {
            uVar12 = *(ulong *)(pbVar10 + 8);
            pbVar10 = *(byte **)(pbVar10 + 0x10);
          }
          puStack_80 = (ulong *)&UNK_0050fb96;
          iVar30 = utf8_range_IsValid(pbVar10,uVar12);
          if (iVar30 != 0) goto code_r0x0050fcd7;
          pbVar10 = (byte *)((long)param_5 +
                            (ulong)*(ushort *)((long)param_5 + 0x16) * 8 + (ulong)(uint)param_5[3]);
          uVar49 = (ulong)(*(ushort *)((long)param_5 + 0x14) + 8 & 0xfffffff8);
          lVar22 = (long)(char)*(byte *)((long)param_5 +
                                        (ulong)*(ushort *)((long)param_5 + 0x16) * 8 +
                                        (ulong)(uint)param_5[3]);
          pbVar53 = pbVar10 + uVar49;
          uVar54 = ((long)((long)puVar11 - (ulong)(uint)param_5[2]) >> 2) * -0x5555555555555555;
          uVar12 = uVar54 + 1;
          pbVar29 = pbVar10 + uVar12;
          if (uVar12 != 0) {
            pbVar27 = pbVar10;
            for (uVar12 = uVar12 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
              uVar49 = uVar49 + *pbVar27;
              pbVar27 = pbVar27 + 1;
            }
            if (6 < uVar54) {
              do {
                uVar49 = (ulong)pbVar27[7] + (ulong)pbVar27[6] +
                         (ulong)pbVar27[5] + (ulong)pbVar27[4] + (ulong)pbVar27[3] +
                         (ulong)pbVar27[2] + (ulong)pbVar27[1] + *pbVar27 + uVar49;
                pbVar27 = pbVar27 + 8;
              } while (pbVar27 != pbVar29);
            }
          }
code_r0x0050fdd9:
          puStack_80 = (ulong *)&UNK_0050fdef;
          _ZN6google8protobuf8internal17PrintUTF8ErrorLogENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEES6_PKcb
                    (pbVar53,lVar22,pbVar10 + uVar49,(long)(char)*pbVar29,&UNK_00178f3f,0);
        }
        goto code_r0x005013a0;
      case 0xe:
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar55 = uVar60 & 0x30;
        if (uVar55 != 0x20) {
          if ((uVar60 & 0x1c0) == 0x40) {
            if ((uVar31 & 7) != 3) goto code_r0x0050ff3a;
          }
          else if (((uVar60 & 0x1c0) != 0) || ((uVar31 & 7) != 2)) goto code_r0x0050ff3a;
          puVar61 = (uint *)((long)puVar11 + (long)param_5);
          plVar15 = *(long **)((long)param_5 +
                              (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if ((uVar60 & 0x600) == 0x400) {
            uStack_40 = SUB82(plVar15,0);
            uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
            bStack_3d = (byte)((ulong)plVar15 >> 0x18);
            uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
            uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
            uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
            uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
          }
          else {
            if ((uVar60 & 0x600) != 0x200) {
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
            puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
            param_6 = uStack_60;
            if (lVar22 == 0) {
              uStack_70 = (ulong *)&UNK_005101a8;
              uVar14 = (**(code **)(*(long *)(lVar20 + 0x58) + 0x10))(plVar15);
              puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
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
                       ,puVar61,(ulong)puVar26 >> 3 & 0x1fffffff,param_5,param_1);
            uVar52 = uVar31;
          }
          else {
            uVar52 = (uint)puVar26;
            if (uVar55 == 0x10) {
              puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
              uVar52 = uVar31;
            }
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar1 = *puVar1 | (uint)param_6;
          }
          uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
          lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
          lVar20 = *(long *)((long)param_1 + uVar12);
          if (lVar20 == lVar22) {
            uVar54 = (ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10);
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
            }
            if (uVar49 == 0) {
              uStack_70 = (ulong *)&UNK_0050ffe3;
              uStack_60 = param_1;
              uVar14 = _Znwm(uVar54);
            }
            else {
              uStack_70 = (ulong *)&UNK_0050ffd9;
              uStack_60 = param_1;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm(uVar49,uVar54 + 7 & 0xfffffffffffffff8);
            }
            param_1 = uStack_60;
            *(undefined8 *)((long)uStack_60 + uVar12) = uVar14;
            uStack_70 = (ulong *)&UNK_0050fffb;
            func_0x0099bda0(uVar14,lVar22,uVar54);
            lVar20 = *(long *)((long)param_1 + uVar12);
            uVar52 = uVar31;
          }
          uVar12 = (ulong)*puVar61;
          if (*(long *)(lVar20 + uVar12) == 0) {
            uVar49 = param_1[1];
            if ((uVar49 & 1) != 0) {
              uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
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
                               (puVar19 + 5,uVar14,uVar14,uVar49);
            *(undefined8 *)(lVar20 + uVar12) = uVar14;
            uVar52 = uVar31;
          }
          if ((uVar60 & 0x1c0) == 0x40) {
            uVar49 = param_3[0xb];
            *(uint *)(param_3 + 0xb) = (uint)uVar49 - 1;
            if (0 < (int)(uint)uVar49) {
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_0051004d;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar20 + uVar12),puVar44,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar12 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              if ((uint)uVar12 == uVar52) {
                return puVar44;
              }
            }
          }
          else {
            bVar3 = (byte)*puVar44;
            if ((char)bVar3 < '\0') {
              uStack_70 = (ulong *)&UNK_005100cb;
              auVar79 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,bVar3);
              if (auVar79._0_8_ == 0) {
                return (ulong *)0x0;
              }
            }
            else {
              auVar79[8] = bVar3;
              auVar79._0_8_ = (byte *)((long)puVar44 + 1);
              auVar79._9_3_ = 0;
            }
            if (0 < (int)(uint)param_3[0xb]) {
              uVar31 = auVar79._8_4_ + (auVar79._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar31 >> 0x1f & uVar31) + param_3[1];
              uVar52 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar31;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_0051011f;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (*(undefined8 *)(lVar20 + uVar12),auVar79._0_8_,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar52 = (uVar52 - uVar31) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar52;
              if ((uint)param_3[10] == 0) {
                *param_3 = (long)(int)((int)uVar52 >> 0x1f & uVar52) + param_3[1];
                return puVar44;
              }
            }
          }
          return (ulong *)0x0;
        }
        if ((uVar60 & 0x1c0) == 0x40) {
          if ((uVar31 & 7) == 3) {
            uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
            uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
            lVar20 = *(long *)((long)param_1 + uVar12);
            uStack_60 = param_6;
            if (lVar20 == lVar22) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar49 = param_1[1];
              if ((uVar49 & 1) != 0) {
                uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
              }
              if (uVar49 == 0) {
                uStack_70 = (ulong *)&UNK_005191b3;
                uVar14 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_0051918f;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar49,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar12) = uVar14;
              uStack_70 = (ulong *)&UNK_005191cc;
              func_0x0099bda0(uVar14,lVar22,puStack_68);
              lVar20 = *(long *)((long)param_1 + uVar12);
            }
            uVar52 = *(uint *)((long)param_5 + (ulong)uStack_4c);
            pauVar21 = *(undefined1 (**) [16])(lVar20 + (ulong)uVar52);
            if (pauVar21 == (undefined1 (*) [16])_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              if (uVar12 == 0) {
                uStack_70 = (ulong *)&UNK_00519477;
                pauVar21 = (undefined1 (*) [16])_Znwm(0x18);
                *pauVar21 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar21[1] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00519222;
                pauVar21 = (undefined1 (*) [16])_ZN6google8protobuf5Arena8AllocateEm(uVar12,0x18);
                *pauVar21 = (undefined1  [16])0x0;
                *(ulong *)pauVar21[1] = uVar12;
              }
              *(undefined1 (**) [16])(lVar20 + (ulong)uVar52) = pauVar21;
            }
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + (ulong)uStack_4c + 8) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar60 = uVar60 & 0x600;
            plVar23 = plVar15;
            if (uVar60 != 0x400) {
              if (uVar60 != 0x200) {
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
            uVar52 = *(uint *)((long)param_5 + (ulong)uStack_4c + 4);
            puVar26 = puVar44;
            if (uVar52 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar52 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar52 & 0x1f);
            }
            do {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
              }
              uStack_70 = (ulong *)&UNK_005192cc;
              uVar14 = _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                                 (plVar23,pauVar21,uVar12);
              uVar12 = param_3[0xb];
              *(uint *)(param_3 + 0xb) = (uint)uVar12 - 1;
              param_6 = uStack_60;
              if ((int)(uint)uVar12 < 1) goto code_r0x005013a0;
              *(uint *)((long)param_3 + 0x5c) = *(uint *)((long)param_3 + 0x5c) + 1;
              uStack_70 = (ulong *)&UNK_005192f7;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,puVar26,param_3,plVar23);
              param_3[0xb] = CONCAT44((int)(param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
              uVar12 = param_3[10];
              *(uint *)(param_3 + 10) = 0;
              param_6 = uStack_60;
              if ((puVar44 == (ulong *)0x0) || ((uint)uVar12 != uVar31)) goto code_r0x005013a0;
              if ((ulong *)*param_3 <= puVar44) {
                uVar60 = (ushort)*param_5;
                goto joined_r0x00519405;
              }
              bVar3 = (byte)*puVar44;
              auVar104[8] = bVar3;
              auVar104._0_8_ = (byte *)((long)puVar44 + 1);
              auVar104._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar44 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_70 = (ulong *)&UNK_00519362;
                  auVar104 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar44,iVar30);
                  param_6 = uStack_60;
                  if (auVar104._0_8_ == 0) goto code_r0x005013a0;
                }
                else {
                  auVar104._8_4_ = iVar30;
                  auVar104._0_8_ = (ushort *)((long)puVar44 + 2);
                }
              }
              puVar26 = auVar104._0_8_;
            } while (auVar104._8_4_ == uVar31);
            if ((ulong *)*param_3 <= puVar44) {
              uVar60 = (ushort)*param_5;
joined_r0x00519405:
              if (uVar60 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar60) =
                     *(uint *)((long)param_1 + (ulong)uVar60) | (uint)uStack_60;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
            puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar44);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
            param_6 = uStack_60;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x005191a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
        if ((uVar60 & 0x1c0) == 0) {
          uStack_60 = (ulong *)CONCAT44(uVar31,(undefined4)uStack_60);
          if ((uVar31 & 7) == 2) {
            uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
            uVar12 = (ulong)*(uint *)((ulong)(uint)param_5[3] + 8 + (long)param_5);
            lVar22 = *(long *)(*(long *)param_5[4] + uVar12);
            lVar20 = *(long *)((long)param_1 + uVar12);
            if (lVar20 == lVar22) {
              puStack_68 = (ulong *)(ulong)*(uint *)((long)param_5 + (ulong)(uint)param_5[3] + 0x10)
              ;
              uVar49 = param_1[1];
              if ((uVar49 & 1) != 0) {
                uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
              }
              if (uVar49 == 0) {
                uStack_70 = (ulong *)&UNK_00518dc0;
                uVar14 = _Znwm(puStack_68);
              }
              else {
                uStack_70 = (ulong *)&UNK_00518d9c;
                uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                   (uVar49,(ulong)((long)puStack_68 + 7U) & 0xfffffffffffffff8);
              }
              *(undefined8 *)((long)param_1 + uVar12) = uVar14;
              uStack_70 = (ulong *)&UNK_00518dd8;
              func_0x0099bda0(uVar14,lVar22,puStack_68);
              lVar20 = *(long *)((long)param_1 + uVar12);
            }
            uVar12 = (ulong)uStack_4c;
            uVar31 = *(uint *)((long)param_5 + uVar12);
            puVar19 = *(undefined8 **)(lVar20 + (ulong)uVar31);
            if (puVar19 == (undefined8 *)_ZN6google8protobuf8internal11kZeroBufferE) {
              uVar49 = param_1[1];
              if ((uVar49 & 1) != 0) {
                uVar49 = *(ulong *)(uVar49 & 0xfffffffffffffffe);
              }
              if (uVar49 == 0) {
                uStack_70 = (ulong *)&UNK_005190e4;
                puVar19 = (undefined8 *)_Znwm(0x18);
                *puVar19 = 0;
                puVar19[1] = 0;
                puVar19[2] = 0;
              }
              else {
                uStack_70 = (ulong *)&UNK_00518e2d;
                puVar19 = (undefined8 *)_ZN6google8protobuf5Arena8AllocateEm(uVar49,0x18);
                *puVar19 = 0;
                puVar19[1] = 0;
                puVar19[2] = uVar49;
              }
              *(undefined8 **)(lVar20 + (ulong)uVar31) = puVar19;
            }
            plVar15 = *(long **)((long)param_5 +
                                (ulong)*(ushort *)((long)param_5 + uVar12 + 8) * 8 +
                                (ulong)(uint)param_5[3]);
            uVar60 = uVar60 & 0x600;
            if (uVar60 == 0x400) {
              uStack_40 = SUB82(plVar15,0);
              uStack_3e = (undefined1)((ulong)plVar15 >> 0x10);
              bStack_3d = (byte)((ulong)plVar15 >> 0x18);
              uStack_3c = (undefined1)((ulong)plVar15 >> 0x20);
              uStack_3b = (undefined1)((ulong)plVar15 >> 0x28);
              uStack_3a = (undefined1)((ulong)plVar15 >> 0x30);
              uStack_39 = (undefined1)((ulong)plVar15 >> 0x38);
            }
            else {
              if (uVar60 != 0x200) {
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
            uVar31 = *(uint *)((long)param_5 + uVar12 + 4);
            puVar26 = puVar44;
            if (uVar31 != 0xffffffff) {
              puVar61 = (uint *)((long)param_1 + (ulong)(uVar31 >> 5) * 4);
              *puVar61 = *puVar61 | 1 << ((byte)uVar31 & 0x1f);
            }
            do {
              uVar12 = param_1[1];
              if ((uVar12 & 1) != 0) {
                uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
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
                                                            ))),puVar19,uVar12);
              bVar3 = (byte)*puVar26;
              if ((char)bVar3 < '\0') {
                uStack_70 = (ulong *)&UNK_00518efa;
                auVar102 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar26,bVar3);
                if (auVar102._0_8_ == 0) goto code_r0x005013a0;
              }
              else {
                auVar102[8] = bVar3;
                auVar102._0_8_ = (byte *)((long)puVar26 + 1);
                auVar102._9_3_ = 0;
              }
              if ((int)(uint)param_3[0xb] < 1) goto code_r0x005013a0;
              uVar24 = auVar102._8_4_ + (auVar102._0_4_ - (int)param_3[1]);
              *param_3 = (long)(int)((int)uVar24 >> 0x1f & uVar24) + param_3[1];
              uVar31 = *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar24;
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
              uStack_70 = (ulong *)&UNK_00518f55;
              puVar44 = (ulong *)_ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
                                           (uVar14,auVar102._0_8_,param_3,
                                            CONCAT17(uStack_39,
                                                     CONCAT16(uStack_3a,
                                                              CONCAT15(uStack_3b,
                                                                       CONCAT14(uStack_3c,
                                                                                CONCAT13(bStack_3d,
                                                                                         CONCAT12(
                                                  uStack_3e,uStack_40)))))));
              *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
              uVar31 = (uVar31 - uVar24) + *(uint *)((long)param_3 + 0x1c);
              *(uint *)((long)param_3 + 0x1c) = uVar31;
              if ((uint)param_3[10] != 0) goto code_r0x005013a0;
              puVar26 = (ulong *)((long)(int)((int)uVar31 >> 0x1f & uVar31) + param_3[1]);
              *param_3 = (ulong)puVar26;
              if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
              if (puVar26 <= puVar44) {
                uVar60 = (ushort)*param_5;
                goto joined_r0x00519063;
              }
              bVar3 = (byte)*puVar44;
              auVar103[8] = bVar3;
              auVar103._0_8_ = (byte *)((long)puVar44 + 1);
              auVar103._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar44 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  uStack_70 = (ulong *)&UNK_00518fc0;
                  auVar103 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar44,iVar30);
                  if (auVar103._0_8_ == 0) goto code_r0x005013a0;
                }
                else {
                  auVar103._8_4_ = iVar30;
                  auVar103._0_8_ = (ushort *)((long)puVar44 + 2);
                }
              }
              puVar26 = auVar103._0_8_;
            } while (auVar103._8_4_ == uStack_60._4_4_);
            if ((ulong *)*param_3 <= puVar44) {
              uVar60 = (ushort)*param_5;
joined_r0x00519063:
              if (uVar60 != 0) {
                *(uint *)((long)param_1 + (ulong)uVar60) =
                     *(uint *)((long)param_1 + (ulong)uVar60) | uVar52;
              }
              return puVar44;
            }
            uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
            puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                               (ulong)(ushort)*puVar44);
            UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
          }
                    /* WARNING: Could not recover jumptable at 0x00518db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)
                                       (param_1,puVar44,param_3,puVar26,param_5,param_6);
          return puVar44;
        }
code_r0x0050ff3a:
                    /* WARNING: Could not recover jumptable at 0x0050ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*(code *)param_5[6])();
        return puVar44;
      case 0xf:
        ppuVar34 = &puStack_98;
        ppuVar39 = &puStack_98;
        ppuVar38 = &puStack_98;
        lStack_38 = in_FS_OFFSET[5];
        uVar60 = *(ushort *)((long)(param_5 + 1) + (long)puVar11);
        puVar59 = (ulong *)((ulong)(uint)param_5[3] + (long)param_5);
        bStack_3d = *(byte *)((long)puVar59 + (ulong)uVar60 * 8 + 4);
        if (((bStack_3d & 1) != 0) && ((uVar31 & 7) == 2)) {
          puStack_78 = (ulong *)((long)puVar11 + (long)param_5);
          uVar49 = puVar59[uVar60];
          uVar54 = (ulong)(uint)puVar59[1];
          lVar22 = *(long *)(*(long *)param_5[4] + uVar54);
          lVar20 = *(long *)((long)param_1 + uVar54);
          unaff_R13 = puVar44;
          uStack_70 = puVar26;
          puStack_68 = param_6;
          uStack_60 = param_5;
          if (lVar20 == lVar22) {
            puStack_80 = (ulong *)(ulong)(uint)puVar59[2];
            uVar50 = param_1[1];
            if ((uVar50 & 1) != 0) {
              uVar50 = *(ulong *)(uVar50 & 0xfffffffffffffffe);
            }
            if (uVar50 == 0) {
              puStack_88 = puVar44;
              uVar14 = _Znwm(puStack_80);
            }
            else {
              puStack_88 = puVar44;
              uVar14 = _ZN6google8protobuf5Arena8AllocateEm
                                 (uVar50,(ulong)((long)puStack_80 + 7U) & 0xfffffffffffffff8);
            }
            *(undefined8 *)((long)param_1 + uVar54) = uVar14;
            func_0x0099bda0(uVar14,lVar22,puStack_80);
            lVar20 = *(long *)((long)param_1 + uVar54);
            unaff_R13 = puStack_88;
          }
          puVar44 = (ulong *)(ulong)uVar60;
          param_1 = (ulong *)(ulong)(uint)uVar49;
          param_5 = (ulong *)((ulong)(uint)*puStack_78 + lVar20);
          puVar26 = puStack_78;
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
          uVar52 = *(uint *)((long)puVar26 + 4);
          if (uVar52 != 0xffffffff) {
            puVar61 = (uint *)(CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)) +
                              (ulong)(uVar52 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar52 & 0x1f);
          }
          puVar59 = puVar59 + (long)puVar44;
          uStack_50 = SUB82(puVar59,0);
          uStack_4e = (undefined2)((ulong)puVar59 >> 0x10);
          uStack_4c = (uint)((ulong)puVar59 >> 0x20);
          puVar28 = (ulong *)((ulong)param_1 | (ulong)bStack_3d << 0x20);
          ppuVar35 = ppuVar39;
          goto code_r0x00510340;
        }
        if (in_FS_OFFSET[5] != lStack_38) {
code_r0x0051080d:
          *(undefined **)((long)ppuVar34 + -8) = &UNK_00510812;
          func_0x0099bd00();
code_r0x00510812:
          UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
          puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
          return puVar44;
        }
      case 0:

        _ZN6google8protobuf8internal8TcParser10MpFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
                    /* WARNING: Could not recover jumptable at 0x005018e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar44 = (ulong *)(*(code *)param_5[6])(param_1,puVar44,param_3,puVar26,param_5,param_6);
        return puVar44;
      }
      uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
      uVar55 = uVar60 & 0x30;
      if (uVar55 == 0x20) {

        _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        :
        if ((uVar12 & 7) != 0) {
          if ((uVar31 & 7) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00510834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(*(code *)param_5[6])();
            return puVar44;
          }

          _ZN6google8protobuf8internal8TcParser14MpPackedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
          :
          lVar22 = in_FS_OFFSET[5];
          if ((uVar31 & 7) != 2) goto code_r0x0050dc60;
          uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
          uVar24 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
          if (uVar24 != 0xffffffff) {
            puVar61 = (uint *)((long)param_1 + (ulong)(uVar24 >> 5) * 4);
            *puVar61 = *puVar61 | 1 << ((byte)uVar24 & 0x1f);
          }
          if ((ulong)(ushort)*param_5 != 0) {
            puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
            *puVar61 = *puVar61 | uVar52;
          }
          uVar55 = uVar60 >> 6;
          if ((uVar55 & 7) == 0) {
            if (in_FS_OFFSET[5] == lVar22) {
              pbVar10 = (byte *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar11));
              lVar22 = in_FS_OFFSET[5];
              uVar12 = (ulong)(byte)*puVar44;
              if ((char)(byte)*puVar44 < '\0') {
                uStack_60 = (ulong *)&UNK_00513380;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                pbVar53 = auVar72._0_8_;
                if (pbVar53 == (byte *)0x0) goto code_r0x00513408;
                uVar12 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar53 = (byte *)((long)puVar44 + 1);
              }
              goto code_r0x00513390;
            }
            goto code_r0x0050dddd;
          }
          uVar60 = uVar60 & 0x600;
          if ((uVar55 & 7) == 2) {
            puVar26 = (ulong *)((ulong)*(uint *)((long)param_5 + (long)puVar11) + (long)param_1);
            switch(uVar60) {
            default:
              if (in_FS_OFFSET[5] == lVar22) {
                lVar22 = in_FS_OFFSET[5];
                uVar12 = (ulong)(byte)*puVar44;
                if ((char)(byte)*puVar44 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512740;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                  puVar44 = auVar72._0_8_;
                  if (puVar44 == (ulong *)0x0) goto code_r0x0051288a;
                  uVar12 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  puVar44 = (ulong *)((long)puVar44 + 1);
                }
                puVar11 = (ulong *)param_3[1];
                iVar30 = (int)puVar11 - (int)puVar44;
                uVar52 = (uint)uVar12;
                if ((int)uVar52 <= iVar30) goto code_r0x00512894;
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
                uVar12 = (ulong)(byte)*puVar44;
                if ((char)(byte)*puVar44 < '\0') {
                  uStack_60 = (ulong *)&UNK_00512af0;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                  pbVar10 = auVar72._0_8_;
                  if (pbVar10 == (byte *)0x0) goto code_r0x00512b78;
                  uVar12 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  pbVar10 = (byte *)((long)puVar44 + 1);
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
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_60 = (ulong *)CONCAT44(uStack_4c,uVar31);
              puStack_80 = (ulong *)&UNK_0050dd5a;
              uStack_70 = param_1;
              puStack_68 = param_5;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1024EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
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
                            (ulong)*(ushort *)((long)(param_5 + 1) + (long)puVar11) * 8 +
                            (ulong)(uint)param_5[3]);
              uStack_60 = (ulong *)CONCAT44(uStack_4c,uVar31);
              puStack_80 = (ulong *)&UNK_0050dd9f;
              uStack_70 = param_1;
              puStack_68 = param_5;
              puVar44 = (ulong *)_ZN6google8protobuf8internal18EpsCopyInputStream16ReadPackedVarintIZNS1_8TcParser15MpPackedVarintTILb0EjLt1536EEEPKcPNS0_11MessageLiteES7_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmEUliE_ZNS2_16ReadPackedVarintISG_EES7_S7_T_EUliE_EES7_S7_SI_T0_
                                           (param_3);
            }
            if (in_FS_OFFSET[5] == lVar22) {
              return puVar44;
            }
          }
          else {
            param_1 = (ulong *)((long)param_1 + (ulong)*(uint *)((long)param_5 + (long)puVar11));
            if (uVar60 == 0) {
              if (in_FS_OFFSET[5] == lVar22) {
                lVar22 = in_FS_OFFSET[5];
                uVar12 = (ulong)(byte)*puVar44;
                if ((char)(byte)*puVar44 < '\0') {
                  puStack_80 = (ulong *)&UNK_00512150;
                  auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                  puVar44 = auVar72._0_8_;
                  if (puVar44 == (ulong *)0x0) goto code_r0x0051229b;
                  uVar12 = auVar72._8_8_ & 0xffffffff;
                }
                else {
                  puVar44 = (ulong *)((long)puVar44 + 1);
                }
                puVar26 = (ulong *)param_3[1];
                iVar30 = (int)puVar26 - (int)puVar44;
                uVar52 = (uint)uVar12;
                if ((int)uVar52 <= iVar30) goto code_r0x005122a5;
                uStack_70 = param_3;
                goto code_r0x00512179;
              }
            }
            else if (in_FS_OFFSET[5] == lVar22) {
              lVar22 = in_FS_OFFSET[5];
              uVar12 = (ulong)(byte)*puVar44;
              if ((char)(byte)*puVar44 < '\0') {
                uStack_60 = (ulong *)&UNK_00512500;
                auVar72 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(puVar44,uVar12);
                pbVar10 = auVar72._0_8_;
                if (pbVar10 == (byte *)0x0) goto code_r0x00512588;
                uVar12 = auVar72._8_8_ & 0xffffffff;
              }
              else {
                pbVar10 = (byte *)((long)puVar44 + 1);
              }
              goto code_r0x00512510;
            }
          }
          goto code_r0x0050dddd;
        }
        uVar60 = *(ushort *)((long)((long)param_5 + 10) + (long)puVar11);
        uVar58 = (uint)uVar60;
        uVar52 = *(uint *)((long)((long)param_5 + 4) + (long)puVar11);
        if (uVar52 != 0xffffffff) {
          puVar61 = (uint *)((long)param_1 + (ulong)(uVar52 >> 5) * 4);
          *puVar61 = *puVar61 | 1 << ((byte)uVar52 & 0x1f);
        }
        uVar60 = uVar60 >> 6;
        pcVar13 = (char *)(ulong)(uVar60 & 7);
        uVar62 = (uVar60 & 7) == 0;
        puVar11 = param_3;
        ppuVar39 = (ulong **)register0x00000020;
        puVar18 = unaff_RBP;
        puVar47 = param_5;
        param_3 = unaff_R12;
        puVar59 = unaff_R14;
        param_5 = unaff_R15;
code_r0x00510881:
        if ((bool)uVar62) {
          *(undefined1 **)((long)ppuVar39 + -8) = puVar18;
          *(ulong **)((long)ppuVar39 + -0x10) = param_5;
          *(ulong **)((long)ppuVar39 + -0x18) = puVar59;
          *(ulong **)((long)ppuVar39 + -0x20) = unaff_R13;
          *(ulong **)((long)ppuVar39 + -0x28) = param_3;
          *(ulong **)((long)ppuVar39 + -0x30) = unaff_RBX;
          *(ulong **)((long)ppuVar39 + -0x48) = param_6;
          *(ulong **)((long)ppuVar39 + -0x50) = puVar47;
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)ppuVar39 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
            puVar16 = (ulong *)((long)puVar44 + 1);
code_r0x00511989:
            uVar49 = *param_1;
            bVar63 = (uVar49 & 4) != 0;
            uVar52 = (uint)param_1[1];
            uVar31 = (uint)uVar49 & 3;
            if (bVar63) {
              uVar31 = uVar52;
            }
            uVar24 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar24 = 3;
            }
            if (uVar31 == uVar24) {
              *(uint *)((long)ppuVar39 + -0x34) = uVar31 + 1;
              *(undefined **)((long)ppuVar39 + -0x60) = &UNK_00511a51;
              _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(param_1,(uVar49 & 4) == 0);
              uVar54 = *param_1 & 0xfffffffffffffff8;
              uVar52 = (uint)param_1[1];
              uVar31 = *(uint *)((long)ppuVar39 + -0x34);
code_r0x00511a70:
              *(uint *)(param_1 + 1) = uVar31;
              *(bool *)(uVar54 + (long)(int)uVar52) = uVar12 != 0;
            }
            else {
              uVar54 = uVar49 & 0xfffffffffffffff8;
              uVar31 = uVar31 + 1;
              if ((uVar49 & 4) != 0) goto code_r0x00511a70;
              *param_1 = uVar54 | uVar31;
              *(bool *)((long)param_1 + (ulong)((uint)uVar49 & 3) + 8) = uVar12 != 0;
            }
            if ((ulong *)*puVar11 <= puVar16) goto code_r0x00511b67;
            bVar3 = (byte)*puVar16;
            auVar87[8] = bVar3;
            auVar87._0_8_ = (byte *)((long)puVar16 + 1);
            auVar87._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar16 + 1);
              iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)ppuVar39 + -0x60) = &UNK_00511ab3;
                auVar87 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar16,iVar30);
                if (auVar87._0_8_ == 0) goto code_r0x00511b90;
              }
              else {
                auVar87._8_4_ = iVar30;
                auVar87._0_8_ = (ushort *)((long)puVar16 + 2);
              }
            }
            puVar44 = auVar87._0_8_;
            if (auVar87._8_4_ != (int)puVar26) {
code_r0x00511b67:
              if ((ulong)**(ushort **)((long)ppuVar39 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)ppuVar39 + -0x40) +
                                  (ulong)**(ushort **)((long)ppuVar39 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar39 + -0x48);
              }
              return puVar16;
            }
          }
          uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar49) {
            puVar16 = (ulong *)((long)puVar44 + 2);
code_r0x00511a2c:
            uVar12 = uVar12 & uVar49;
            goto code_r0x00511989;
          }
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar44 + 3);
code_r0x00511a29:
            uVar49 = uVar49 & uVar54;
            goto code_r0x00511a2c;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar49) {
            puVar16 = (ulong *)((long)puVar44 + 4);
            goto code_r0x00511a29;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar44 + 5);
            goto code_r0x00511a29;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar49) {
            puVar16 = (ulong *)((long)puVar44 + 6);
            goto code_r0x00511a29;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar44 + 7);
            goto code_r0x00511a29;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar49) {
            puVar16 = puVar44 + 1;
            goto code_r0x00511a29;
          }
          uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar54) {
            puVar16 = (ulong *)((long)puVar44 + 9);
            goto code_r0x00511a29;
          }
          bVar3 = *(byte *)((long)puVar44 + 9);
          puVar16 = (ulong *)((long)puVar44 + 10);
          if (bVar3 == 1) goto code_r0x00511a29;
          if (-1 < (char)bVar3) {
            if ((bVar3 & 1) == 0) {
              uVar54 = uVar54 ^ 0x8000000000000000;
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
        uVar12 = (ulong)(uVar58 & 0x600);
        ppuVar40 = ppuVar39;
        puVar41 = puVar18;
code_r0x0051088e:
        auVar65._8_8_ = puVar11;
        auVar65._0_8_ = puVar59;
        ppuVar8 = ppuVar40;
        puVar42 = puVar41;
        puVar16 = param_3;
        auVar7 = auVar65;
        if ((int)pcVar13 != 2) {
          bVar63 = (short)uVar12 == 0;
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
            *(ulong **)((long)ppuVar34 + -0x50) = puVar47;
            uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
            *(ulong **)((long)ppuVar34 + -0x40) = param_1;
            param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
            *(undefined8 **)((long)ppuVar34 + -0x38) = puVar19;
            while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
              puVar11 = (ulong *)((long)puVar44 + 1);
code_r0x00510929:
              uVar49 = *param_1;
              bVar63 = (uVar49 & 4) != 0;
              uVar52 = (uint)param_1[1];
              uVar31 = (uint)uVar49 & 3;
              if (bVar63) {
                uVar31 = uVar52;
              }
              uVar24 = *(uint *)((long)param_1 + 0xc);
              if (!bVar63) {
                uVar24 = 1;
              }
              uVar58 = uVar31 + 1;
              if (uVar31 == uVar24) {
                *(undefined **)((long)ppuVar34 + -0x60) = &UNK_005109e2;
                _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                          (param_1,(uVar49 & 4) == 0,uVar31,uVar58);
                puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
                uVar54 = *param_1 & 0xfffffffffffffff8;
                uVar52 = (uint)param_1[1];
code_r0x00510a00:
                *(uint *)(param_1 + 1) = uVar58;
                *(ulong *)(uVar54 + (long)(int)uVar52 * 8) = uVar12;
              }
              else {
                uVar54 = uVar49 & 0xfffffffffffffff8;
                if ((uVar49 & 4) != 0) goto code_r0x00510a00;
                *param_1 = uVar54 | uVar58;
                param_1[(ulong)((uint)uVar49 & 3) + 1] = uVar12;
              }
              if ((ulong *)*puVar19 <= puVar11) goto code_r0x00510afd;
              bVar3 = (byte)*puVar11;
              auVar81[8] = bVar3;
              auVar81._0_8_ = (byte *)((long)puVar11 + 1);
              auVar81._9_3_ = 0;
              if ((char)bVar3 < '\0') {
                bVar2 = *(byte *)((long)puVar11 + 1);
                iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
                if ((char)bVar2 < '\0') {
                  *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510a43;
                  auVar81 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
                  if (auVar81._0_8_ == 0) goto code_r0x00510b26;
                  puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
                }
                else {
                  auVar81._8_4_ = iVar30;
                  auVar81._0_8_ = (ushort *)((long)puVar11 + 2);
                }
              }
              puVar44 = auVar81._0_8_;
              if (auVar81._8_4_ != (int)puVar26) {
code_r0x00510afd:
                if ((ulong)**(ushort **)((long)ppuVar34 + -0x50) != 0) {
                  puVar61 = (uint *)(*(long *)((long)ppuVar34 + -0x40) +
                                    (ulong)**(ushort **)((long)ppuVar34 + -0x50));
                  *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar34 + -0x48);
                }
                return puVar11;
              }
            }
            uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x005109c7:
              uVar12 = uVar12 & uVar49;
              goto code_r0x00510929;
            }
            uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x005109c4:
              uVar49 = uVar49 & uVar54;
              goto code_r0x005109c7;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 4);
              goto code_r0x005109c4;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 5);
              goto code_r0x005109c4;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00510ac5:
              puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              goto code_r0x005109c4;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 7);
              goto code_r0x00510ac5;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar49) {
              puVar11 = puVar44 + 1;
              goto code_r0x00510ac5;
            }
            uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 9);
              goto code_r0x00510ac5;
            }
            bVar3 = *(byte *)((long)puVar44 + 9);
            puVar11 = (ulong *)((long)puVar44 + 10);
            if (bVar3 == 1) goto code_r0x00510ac5;
            if (-1 < (char)bVar3) {
              if ((bVar3 & 1) == 0) {
                uVar54 = uVar54 ^ 0x8000000000000000;
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
          *(ulong **)((long)ppuVar34 + -0x50) = puVar47;
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)ppuVar34 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          *(undefined8 **)((long)ppuVar34 + -0x38) = puVar19;
          while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
            puVar11 = (ulong *)((long)puVar44 + 1);
code_r0x00510ba9:
            uVar49 = uVar12 >> 1 ^ -(ulong)((uint)uVar12 & 1);
            uVar12 = *param_1;
            bVar63 = (uVar12 & 4) != 0;
            uVar52 = (uint)param_1[1];
            uVar31 = (uint)uVar12 & 3;
            if (bVar63) {
              uVar31 = uVar52;
            }
            uVar24 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar24 = 1;
            }
            uVar58 = uVar31 + 1;
            if (uVar31 == uVar24) {
              *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510c71;
              _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii
                        (param_1,(uVar12 & 4) == 0,uVar31,uVar58);
              puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              uVar54 = *param_1 & 0xfffffffffffffff8;
              uVar52 = (uint)param_1[1];
code_r0x00510c90:
              *(uint *)(param_1 + 1) = uVar58;
              *(ulong *)(uVar54 + (long)(int)uVar52 * 8) = uVar49;
            }
            else {
              uVar54 = uVar12 & 0xfffffffffffffff8;
              if ((uVar12 & 4) != 0) goto code_r0x00510c90;
              *param_1 = uVar54 | uVar58;
              param_1[(ulong)((uint)uVar12 & 3) + 1] = uVar49;
            }
            if ((ulong *)*puVar19 <= puVar11) goto code_r0x00510d8d;
            bVar3 = (byte)*puVar11;
            auVar82[8] = bVar3;
            auVar82._0_8_ = (byte *)((long)puVar11 + 1);
            auVar82._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar11 + 1);
              iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)ppuVar34 + -0x60) = &UNK_00510cd3;
                auVar82 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
                if (auVar82._0_8_ == 0) goto code_r0x00510db6;
                puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
              }
              else {
                auVar82._8_4_ = iVar30;
                auVar82._0_8_ = (ushort *)((long)puVar11 + 2);
              }
            }
            puVar44 = auVar82._0_8_;
            if (auVar82._8_4_ != (int)puVar26) {
code_r0x00510d8d:
              if ((ulong)**(ushort **)((long)ppuVar34 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)ppuVar34 + -0x40) +
                                  (ulong)**(ushort **)((long)ppuVar34 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)ppuVar34 + -0x48);
              }
              return puVar11;
            }
          }
          uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x00510c56:
            uVar12 = uVar12 & uVar49;
            goto code_r0x00510ba9;
          }
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x00510c53:
            uVar49 = uVar49 & uVar54;
            goto code_r0x00510c56;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 4);
            goto code_r0x00510c53;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 5);
            goto code_r0x00510c53;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00510d55:
            puVar19 = *(undefined8 **)((long)ppuVar34 + -0x38);
            goto code_r0x00510c53;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 7);
            goto code_r0x00510d55;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = puVar44 + 1;
            goto code_r0x00510d55;
          }
          uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 9);
            goto code_r0x00510d55;
          }
          bVar3 = *(byte *)((long)puVar44 + 9);
          puVar11 = (ulong *)((long)puVar44 + 10);
          if (bVar3 == 1) goto code_r0x00510d55;
          if (-1 < (char)bVar3) {
            if ((bVar3 & 1) == 0) {
              uVar54 = uVar54 ^ 0x8000000000000000;
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
        switch(&UNK_00204f88 + *(int *)(&UNK_00204f88 + ((uVar12 & 0xffff) >> 9) * 4)) {
        case (undefined *)0x5108aa:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = puVar47;
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
            puVar11 = (ulong *)((long)puVar44 + 1);
code_r0x00510e39:
            uVar49 = *param_1;
            bVar63 = (uVar49 & 4) != 0;
            uVar52 = (uint)param_1[1];
            uVar31 = (uint)uVar49 & 3;
            if (bVar63) {
              uVar31 = uVar52;
            }
            uVar24 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar24 = 2;
            }
            uVar58 = uVar31 + 1;
            if (uVar31 == uVar24) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510ef2;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar49 & 4) == 0,uVar31,uVar58);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar54 = *param_1 & 0xfffffffffffffff8;
              uVar52 = (uint)param_1[1];
code_r0x00510f10:
              *(uint *)(param_1 + 1) = uVar58;
              *(int *)(uVar54 + (long)(int)uVar52 * 4) = (int)uVar12;
            }
            else {
              uVar54 = uVar49 & 0xfffffffffffffff8;
              if ((uVar49 & 4) != 0) goto code_r0x00510f10;
              *param_1 = uVar54 | uVar58;
              *(int *)((long)param_1 + (ulong)((uint)uVar49 & 3) * 4 + 8) = (int)uVar12;
            }
            if ((ulong *)*param_3 <= puVar11) goto code_r0x0051100d;
            bVar3 = (byte)*puVar11;
            auVar83[8] = bVar3;
            auVar83._0_8_ = (byte *)((long)puVar11 + 1);
            auVar83._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar11 + 1);
              iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00510f53;
                auVar83 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
                if (auVar83._0_8_ == 0) goto code_r0x00511036;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar83._8_4_ = iVar30;
                auVar83._0_8_ = (ushort *)((long)puVar11 + 2);
              }
            }
            puVar44 = auVar83._0_8_;
            if (auVar83._8_4_ != (int)puVar26) {
code_r0x0051100d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar11;
            }
          }
          uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x00510ed7:
            uVar12 = uVar12 & uVar49;
            goto code_r0x00510e39;
          }
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x00510ed4:
            uVar49 = uVar49 & uVar54;
            goto code_r0x00510ed7;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 4);
            goto code_r0x00510ed4;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 5);
            goto code_r0x00510ed4;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00510fd5:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00510ed4;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 7);
            goto code_r0x00510fd5;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = puVar44 + 1;
            goto code_r0x00510fd5;
          }
          uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 9);
            goto code_r0x00510fd5;
          }
          puVar11 = (ulong *)((long)puVar44 + 10);
          if ((*(byte *)((long)puVar44 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar44 + 9)))
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
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          uVar60 = *(ushort *)((long)puVar47 + ((ulong)puVar26 >> 0x20) + 8);
          uVar12 = puVar47[3];
          *(ulong **)((long)register0x00000020 + -0x50) = puVar47;
          puVar61 = *(uint **)((long)puVar47 + (ulong)uVar60 * 8 + (ulong)(uint)uVar12);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
            puVar11 = (ulong *)((long)puVar44 + 1);
code_r0x0051135a:
            uVar54 = (ulong)(*puVar61 >> 0x10);
            iVar30 = (int)uVar12;
            uVar12 = (long)iVar30 - (long)(short)*puVar61;
            uVar49 = uVar12 - uVar54;
            if (uVar54 <= uVar12) {
              uVar52 = puVar61[1];
              if (uVar49 < (uVar52 & 0xffff)) {
                if ((puVar61[(uVar49 >> 5) + 2] >> ((uint)uVar49 & 0x1f) & 1) == 0) {
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
                  puVar16 = puVar44;
                  goto 
                  _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                  ;
                }
              }
              else {
                uVar12 = 0;
                do {
                  if (uVar52 >> 0x10 <= uVar12) goto code_r0x00511607;
                  iVar25 = *(int *)((long)puVar61 + uVar12 * 4 + (ulong)(uVar52 >> 3 & 0x1ffc) + 8);
                  uVar12 = (uVar12 * 2 - (ulong)(iVar30 < iVar25)) + 2;
                } while (iVar25 != iVar30);
              }
            }
            uVar12 = *param_1;
            bVar63 = (uVar12 & 4) != 0;
            uVar52 = (uint)param_1[1];
            uVar31 = (uint)uVar12 & 3;
            if (bVar63) {
              uVar31 = uVar52;
            }
            uVar24 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar24 = 2;
            }
            uVar58 = uVar31 + 1;
            if (uVar31 == uVar24) {
              *(ulong **)((long)register0x00000020 + -0x58) = puVar26;
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511462;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar12 & 4) == 0,uVar31,uVar58);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              puVar26 = *(ulong **)((long)register0x00000020 + -0x58);
              uVar49 = *param_1 & 0xfffffffffffffff8;
              uVar52 = (uint)param_1[1];
code_r0x00511480:
              *(uint *)(param_1 + 1) = uVar58;
              *(int *)(uVar49 + (long)(int)uVar52 * 4) = iVar30;
            }
            else {
              uVar49 = uVar12 & 0xfffffffffffffff8;
              if ((uVar12 & 4) != 0) goto code_r0x00511480;
              *param_1 = uVar49 | uVar58;
              *(int *)((long)param_1 + (ulong)((uint)uVar12 & 3) * 4 + 8) = iVar30;
            }
            if ((ulong *)*param_3 <= puVar11) goto code_r0x005115bf;
            bVar3 = (byte)*puVar11;
            auVar85[8] = bVar3;
            auVar85._0_8_ = (byte *)((long)puVar11 + 1);
            auVar85._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar11 + 1);
              iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005114c6;
                auVar85 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
                if (auVar85._0_8_ == 0) goto code_r0x005115e8;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar85._8_4_ = iVar30;
                auVar85._0_8_ = (ushort *)((long)puVar11 + 2);
              }
            }
            puVar44 = auVar85._0_8_;
            if (auVar85._8_4_ != (int)puVar26) {
code_r0x005115bf:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar11;
            }
          }
          uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x00511419:
            uVar12 = uVar12 & uVar49;
            goto code_r0x0051135a;
          }
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x00511416:
            uVar49 = uVar49 & uVar54;
            goto code_r0x00511419;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 4);
            goto code_r0x00511416;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 5);
            goto code_r0x00511416;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00511586:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511416;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 7);
            goto code_r0x00511586;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = puVar44 + 1;
            goto code_r0x00511586;
          }
          uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 9);
            goto code_r0x00511586;
          }
          puVar11 = (ulong *)((long)puVar44 + 10);
          if ((*(byte *)((long)puVar44 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar44 + 9)))
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
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x48) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          uVar60 = *(ushort *)((long)puVar47 + ((ulong)puVar26 >> 0x20) + 8);
          uVar12 = puVar47[3];
          *(ulong **)((long)register0x00000020 + -0x58) = puVar47;
          uVar14 = *(undefined8 *)((long)puVar47 + (ulong)uVar60 * 8 + (ulong)(uint)uVar12);
          *(ulong **)((long)register0x00000020 + -0x40) = param_3;
          *(undefined8 *)((long)register0x00000020 + -0x38) = uVar14;
          uVar45 = uVar14;
          break;
        case (undefined *)0x5108c8:
          *(undefined1 **)((long)register0x00000020 + -8) = puVar42;
          *(ulong **)((long)register0x00000020 + -0x10) = param_5;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar14;
          *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
          *(ulong **)((long)register0x00000020 + -0x28) = puVar16;
          *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
          *(ulong **)((long)register0x00000020 + -0x48) = param_6;
          *(ulong **)((long)register0x00000020 + -0x50) = puVar47;
          uVar52 = *(uint *)((long)puVar47 + ((ulong)puVar26 >> 0x20));
          *(ulong **)((long)register0x00000020 + -0x40) = param_1;
          param_1 = (ulong *)((ulong)uVar52 + (long)param_1);
          *(ulong **)((long)register0x00000020 + -0x38) = param_3;
          while (uVar12 = (ulong)(char)(byte)*puVar44, -1 < (long)uVar12) {
            puVar11 = (ulong *)((long)puVar44 + 1);
code_r0x005110b9:
            uVar24 = (uint)uVar12 >> 1 ^ -((uint)uVar12 & 1);
            uVar12 = *param_1;
            bVar63 = (uVar12 & 4) != 0;
            uVar52 = (uint)param_1[1];
            uVar31 = (uint)uVar12 & 3;
            if (bVar63) {
              uVar31 = uVar52;
            }
            uVar58 = *(uint *)((long)param_1 + 0xc);
            if (!bVar63) {
              uVar58 = 2;
            }
            uVar32 = uVar31 + 1;
            if (uVar31 == uVar58) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_00511180;
              _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii
                        (param_1,(uVar12 & 4) == 0,uVar31,uVar32);
              param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              uVar49 = *param_1 & 0xfffffffffffffff8;
              uVar52 = (uint)param_1[1];
code_r0x005111a0:
              *(uint *)(param_1 + 1) = uVar32;
              *(uint *)(uVar49 + (long)(int)uVar52 * 4) = uVar24;
            }
            else {
              uVar49 = uVar12 & 0xfffffffffffffff8;
              if ((uVar12 & 4) != 0) goto code_r0x005111a0;
              *param_1 = uVar49 | uVar32;
              *(uint *)((long)param_1 + (ulong)((uint)uVar12 & 3) * 4 + 8) = uVar24;
            }
            if ((ulong *)*param_3 <= puVar11) goto code_r0x0051129d;
            bVar3 = (byte)*puVar11;
            auVar84[8] = bVar3;
            auVar84._0_8_ = (byte *)((long)puVar11 + 1);
            auVar84._9_3_ = 0;
            if ((char)bVar3 < '\0') {
              bVar2 = *(byte *)((long)puVar11 + 1);
              iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
              if ((char)bVar2 < '\0') {
                *(undefined **)((long)register0x00000020 + -0x60) = &UNK_005111e3;
                auVar84 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
                if (auVar84._0_8_ == 0) goto code_r0x005112c6;
                param_3 = *(ulong **)((long)register0x00000020 + -0x38);
              }
              else {
                auVar84._8_4_ = iVar30;
                auVar84._0_8_ = (ushort *)((long)puVar11 + 2);
              }
            }
            puVar44 = auVar84._0_8_;
            if (auVar84._8_4_ != (int)puVar26) {
code_r0x0051129d:
              if ((ulong)**(ushort **)((long)register0x00000020 + -0x50) != 0) {
                puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x40) +
                                  (ulong)**(ushort **)((long)register0x00000020 + -0x50));
                *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x48);
              }
              return puVar11;
            }
          }
          uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x00511165:
            uVar12 = uVar12 & uVar49;
            goto code_r0x005110b9;
          }
          uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x00511162:
            uVar49 = uVar49 & uVar54;
            goto code_r0x00511165;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 4);
            goto code_r0x00511162;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 5);
            goto code_r0x00511162;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00511265:
            param_3 = *(ulong **)((long)register0x00000020 + -0x38);
            goto code_r0x00511162;
          }
          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 7);
            goto code_r0x00511265;
          }
          uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
          if (-1 < (long)uVar49) {
            puVar11 = puVar44 + 1;
            goto code_r0x00511265;
          }
          uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
          if (-1 < (long)uVar54) {
            puVar11 = (ulong *)((long)puVar44 + 9);
            goto code_r0x00511265;
          }
          puVar11 = (ulong *)((long)puVar44 + 10);
          if ((*(byte *)((long)puVar44 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar44 + 9)))
          goto code_r0x00511265;
code_r0x005112c6:
          param_1 = *(ulong **)((long)register0x00000020 + -0x40);
          param_5 = *(ulong **)((long)register0x00000020 + -0x50);
          param_6 = *(ulong **)((long)register0x00000020 + -0x48);
          unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
          goto code_r0x005013a0;
        }
        do {
          uVar12 = (ulong)(char)(byte)*puVar44;
          if ((long)uVar12 < 0) {
            uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 2);
code_r0x0051175f:
              uVar12 = uVar12 & uVar49;
              if ((int)uVar45 <= (int)uVar12) goto code_r0x005116b3;
              goto code_r0x005118b6;
            }
            uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 3);
code_r0x0051175c:
              uVar49 = uVar49 & uVar54;
              goto code_r0x0051175f;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 4);
              goto code_r0x0051175c;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 5);
              goto code_r0x0051175c;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
            if (-1 < (long)uVar49) {
              puVar11 = (ulong *)((long)puVar44 + 6);
code_r0x00511879:
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar45 = *(undefined8 *)((long)register0x00000020 + -0x38);
              goto code_r0x0051175c;
            }
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 7);
              goto code_r0x00511879;
            }
            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 | 0x1ffffffffffffU);
            if (-1 < (long)uVar49) {
              puVar11 = puVar44 + 1;
              goto code_r0x00511879;
            }
            uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
            if (-1 < (long)uVar54) {
              puVar11 = (ulong *)((long)puVar44 + 9);
              goto code_r0x00511879;
            }
            puVar11 = (ulong *)((long)puVar44 + 10);
            if ((*(byte *)((long)puVar44 + 9) == 1) || (-1 < (char)*(byte *)((long)puVar44 + 9)))
            goto code_r0x00511879;
code_r0x00511907:
            param_1 = *(ulong **)((long)register0x00000020 + -0x48);
            param_5 = *(ulong **)((long)register0x00000020 + -0x58);
            param_6 = *(ulong **)((long)register0x00000020 + -0x50);
            unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
            goto code_r0x005013a0;
          }
          puVar11 = (ulong *)((long)puVar44 + 1);
          if ((int)(char)(byte)*puVar44 < (int)uVar45) {
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
            puVar16 = puVar44;
            goto 
            _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
            ;
          }
code_r0x005116b3:
          iVar30 = (int)uVar12;
          if ((int)((ulong)uVar14 >> 0x20) < iVar30) goto code_r0x005118b6;
          uVar12 = *param_1;
          bVar63 = (uVar12 & 4) != 0;
          uVar52 = (uint)param_1[1];
          uVar31 = (uint)uVar12 & 3;
          if (bVar63) {
            uVar31 = uVar52;
          }
          uVar24 = *(uint *)((long)param_1 + 0xc);
          if (!bVar63) {
            uVar24 = 2;
          }
          uVar58 = uVar31 + 1;
          if (uVar31 == uVar24) {
            *(ulong **)((long)register0x00000020 + -0x60) = puVar26;
            *(undefined **)((long)register0x00000020 + -0x70) = &UNK_00511787;
            _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(param_1,(uVar12 & 4) == 0,uVar31,uVar58);
            uVar45 = *(undefined8 *)((long)register0x00000020 + -0x38);
            param_3 = *(ulong **)((long)register0x00000020 + -0x40);
            puVar26 = *(ulong **)((long)register0x00000020 + -0x60);
            uVar49 = *param_1 & 0xfffffffffffffff8;
            uVar52 = (uint)param_1[1];
code_r0x005117b0:
            *(uint *)(param_1 + 1) = uVar58;
            *(int *)(uVar49 + (long)(int)uVar52 * 4) = iVar30;
          }
          else {
            uVar49 = uVar12 & 0xfffffffffffffff8;
            if ((uVar12 & 4) != 0) goto code_r0x005117b0;
            *param_1 = uVar49 | uVar58;
            *(int *)((long)param_1 + (ulong)((uint)uVar12 & 3) * 4 + 8) = iVar30;
          }
          if ((ulong *)*param_3 <= puVar11) goto code_r0x005118de;
          bVar3 = (byte)*puVar11;
          auVar86[8] = bVar3;
          auVar86._0_8_ = (byte *)((long)puVar11 + 1);
          auVar86._9_3_ = 0;
          if ((char)bVar3 < '\0') {
            bVar2 = *(byte *)((long)puVar11 + 1);
            iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
            if ((char)bVar2 < '\0') {
              *(undefined **)((long)register0x00000020 + -0x70) = &UNK_005117f6;
              auVar86 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
              if (auVar86._0_8_ == 0) goto code_r0x00511907;
              param_3 = *(ulong **)((long)register0x00000020 + -0x40);
              uVar45 = *(undefined8 *)((long)register0x00000020 + -0x38);
            }
            else {
              auVar86._8_4_ = iVar30;
              auVar86._0_8_ = (ushort *)((long)puVar11 + 2);
            }
          }
          puVar44 = auVar86._0_8_;
          if (auVar86._8_4_ != (int)puVar26) {
code_r0x005118de:
            if ((ulong)**(ushort **)((long)register0x00000020 + -0x58) != 0) {
              puVar61 = (uint *)(*(long *)((long)register0x00000020 + -0x48) +
                                (ulong)**(ushort **)((long)register0x00000020 + -0x58));
              *puVar61 = *puVar61 | (uint)*(undefined8 *)((long)register0x00000020 + -0x50);
            }
            return puVar11;
          }
        } while( true );
      }
      if ((uVar12 & 7) != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)param_5[6];
        puVar59 = puVar44;
        goto code_r0x0050da01;
      }
      uVar49 = (ulong)(char)(byte)*puVar44;
      if ((long)uVar49 < 0) {
        uVar54 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
        if ((long)uVar54 < 0) {
          uVar50 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
          if ((long)uVar50 < 0) {
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU);
            if ((long)uVar54 < 0) {
              uVar50 = uVar50 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
              if ((long)uVar50 < 0) {
                uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU);
                if ((long)uVar54 < 0) {
                  uVar50 = uVar50 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a |
                                    0x3ffffffffffU);
                  if ((long)uVar50 < 0) {
                    uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                      0x1ffffffffffffU);
                    if ((long)uVar54 < 0) {
                      uVar50 = uVar50 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
                      if ((long)uVar50 < 0) {
                        puVar59 = (ulong *)((long)puVar44 + 10);
                        bVar3 = *(byte *)((long)puVar44 + 9);
                        if (bVar3 != 1) {
                          if ((char)bVar3 < '\0') goto code_r0x005013a0;
                          if ((bVar3 & 1) == 0) {
                            uVar50 = uVar50 ^ 0x8000000000000000;
                          }
                        }
                      }
                      else {
                        puVar59 = (ulong *)((long)puVar44 + 9);
                      }
                    }
                    else {
                      puVar59 = puVar44 + 1;
                    }
                  }
                  else {
                    puVar59 = (ulong *)((long)puVar44 + 7);
                  }
                }
                else {
                  puVar59 = (ulong *)((long)puVar44 + 6);
                }
              }
              else {
                puVar59 = (ulong *)((long)puVar44 + 5);
              }
            }
            else {
              puVar59 = (ulong *)((long)puVar44 + 4);
            }
          }
          else {
            puVar59 = (ulong *)((long)puVar44 + 3);
          }
          uVar54 = uVar54 & uVar50;
        }
        else {
          puVar59 = (ulong *)((long)puVar44 + 2);
        }
        uVar49 = uVar49 & uVar54;
      }
      else {
        puVar59 = (ulong *)((long)puVar44 + 1);
      }
      puVar61 = (uint *)((long)puVar11 + (long)param_5);
      uVar48 = uVar60 & 0x600;
      uVar51 = uVar60 & 0x1c0;
      uVar31 = (uint)uVar49;
      if (uVar51 == 0xc0) {
        if (uVar48 == 0x200) {
          uVar49 = uVar49 >> 1 ^ -(ulong)(uVar31 & 1);
        }
      }
      else if (uVar51 == 0x80) {
        if ((uVar60 & 0x400) == 0) {
          if (uVar48 == 0x200) {
            uVar49 = (ulong)(int)(uVar31 >> 1 ^ -(uVar31 & 1));
          }
        }
        else {
          puVar11 = *(ulong **)
                     ((long)param_5 + (ulong)(ushort)puVar61[2] * 8 + (ulong)(uint)param_5[3]);
          if (uVar48 == 0x600) {
            puVar16 = puVar11;
            if (((int)uVar31 < (int)puVar11) ||
               (puVar16 = (ulong *)((ulong)puVar11 >> 0x20),
               (int)((ulong)puVar11 >> 0x20) < (int)uVar31)) {

              _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
              :
              *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
              *(ulong **)((long)register0x00000020 + -0x10) = unaff_R15;
              *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
              *(ulong **)((long)register0x00000020 + -0x20) = unaff_R13;
              *(ulong **)((long)register0x00000020 + -0x28) = unaff_R12;
              *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
              *(ulong **)((long)register0x00000020 + -0x38) = puVar16;
              uVar12 = (ulong)(char)(byte)*puVar44;
              if ((long)uVar12 < 0) {
                uVar49 = (long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f;
                if ((long)uVar49 < 0) {
                  uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
                  if ((long)uVar54 < 0) {
                    uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU)
                    ;
                    if ((long)uVar49 < 0) {
                      uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c |
                                        0xfffffffU);
                      if ((long)uVar54 < 0) {
                        uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 |
                                          0x7ffffffffU);
                        if ((long)uVar49 < 0) {
                          uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a |
                                            0x3ffffffffffU);
                          if ((long)uVar54 < 0) {
                            uVar49 = uVar49 & ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                              0x1ffffffffffffU);
                            if ((long)uVar49 < 0) {
                              uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff)
                              ;
                              if ((long)uVar54 < 0) {
                                puVar11 = (ulong *)((long)puVar44 + 10);
                                if ((*(byte *)((long)puVar44 + 9) != 1) &&
                                   ((char)*(byte *)((long)puVar44 + 9) < '\0')) {
                                  unaff_RBP = *(undefined1 **)((long)register0x00000020 + -8);
                                  goto code_r0x005013a0;
                                }
                              }
                              else {
                                puVar11 = (ulong *)((long)puVar44 + 9);
                              }
                            }
                            else {
                              puVar11 = puVar44 + 1;
                            }
                          }
                          else {
                            puVar11 = (ulong *)((long)puVar44 + 7);
                          }
                        }
                        else {
                          puVar11 = (ulong *)((long)puVar44 + 6);
                        }
                      }
                      else {
                        puVar11 = (ulong *)((long)puVar44 + 5);
                      }
                    }
                    else {
                      puVar11 = (ulong *)((long)puVar44 + 4);
                    }
                  }
                  else {
                    puVar11 = (ulong *)((long)puVar44 + 3);
                  }
                  uVar49 = uVar49 & uVar54;
                }
                else {
                  puVar11 = (ulong *)((long)puVar44 + 2);
                }
                uVar12 = uVar12 & uVar49;
              }
              else {
                puVar11 = (ulong *)((long)puVar44 + 1);
              }
              *(undefined **)((long)register0x00000020 + -0x40) = &UNK_00507b88;
              _ZN6google8protobuf8internal8TcParser14AddUnknownEnumEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseEji
                        (param_1,param_5,(ulong)puVar26 & 0xffffffff,uVar12 & 0xffffffff);
              if ((ulong *)*param_3 <= puVar11) {
                if ((ulong)(ushort)*param_5 != 0) {
                  puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
                  *puVar61 = *puVar61 | (uint)param_6;
                }
                return puVar11;
              }
              uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar11 & 0xfffffff8);
                    /* WARNING: Could not recover jumptable at 0x00507bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar44 = (ulong *)(**(code **)((long)param_5 + uVar12 * 2 + 0x38))
                                           (param_1,puVar11,param_3,
                                            *(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^
                                            (ulong)(ushort)*puVar11,param_5,param_6);
              return puVar44;
            }
          }
          else {
            uStack_70 = (ulong *)&UNK_0050da3d;
            uStack_60 = puVar44;
            puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj
                                         (uVar49 & 0xffffffff,puVar11);
            puVar44 = uStack_60;
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
                  (param_5,0,puVar61,(uVar12 & 0xfffffff8) >> 3,param_5,param_1);
        if (uVar51 == 0xc0) goto code_r0x0050d948;
code_r0x0050d9a4:
        if (uVar51 == 0x80) {
          *(int *)((long)param_1 + (ulong)*puVar61) = (int)uVar49;
          puVar44 = (ulong *)*param_3;
        }
        else {
          *(bool *)((long)param_1 + (ulong)*puVar61) = uVar49 != 0;
          puVar44 = (ulong *)*param_3;
        }
      }
      else {
        if (uVar55 == 0x10) {
          puVar1 = (uint *)((long)param_1 + (ulong)(puVar61[1] >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)puVar61[1] & 0x1f);
        }
        if (uVar51 != 0xc0) goto code_r0x0050d9a4;
code_r0x0050d948:
        *(ulong *)((long)param_1 + (ulong)*puVar61) = uVar49;
        puVar44 = (ulong *)*param_3;
      }
      if (puVar44 <= puVar59) {
        if ((ulong)(ushort)*param_5 != 0) {
          puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
          *puVar61 = *puVar61 | uVar52;
        }
        return puVar59;
      }
      uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar59 & 0xfffffff8);
      puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^ (ulong)(ushort)*puVar59);
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
code_r0x0050da01:
                    /* WARNING: Could not recover jumptable at 0x0050da0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar59,param_3,puVar26);
      return puVar44;
    }
  }
  else {
    uVar24 = *(uint *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
    if (uVar24 <= uVar31) {
      pbVar10 = (byte *)((ulong)*(ushort *)((long)param_5 + 10) + (long)param_5);
      do {
        uVar60 = *(ushort *)(pbVar10 + 4);
        uVar58 = uVar31 - uVar24 >> 4;
        if (uVar58 < uVar60) {
          uVar31 = uVar31 - uVar24 & 0xf;
          uVar24 = 1 << (sbyte)uVar31;
          puVar16 = (ulong *)(ulong)uVar24;
          if ((*(ushort *)(pbVar10 + (ulong)uVar58 * 4 + 6) >> uVar31 & 1) == 0) {
            uVar24 = uVar24 - 1 & (uint)*(ushort *)(pbVar10 + (ulong)uVar58 * 4 + 6);
            uVar24 = uVar24 - (uVar24 >> 1 & 0x5555);
            uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
            uVar24 = (uVar31 - (((uVar24 >> 4) + uVar24 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                     (uint)*(ushort *)(pbVar10 + (ulong)(uVar58 * 2) * 2 + 8);
            goto code_r0x0050145f;
          }
          break;
        }
        uVar24 = *(uint *)(pbVar10 + (ulong)uVar60 * 4 + 6);
        pbVar10 = pbVar10 + (ulong)uVar60 * 4 + 6;
      } while (uVar24 <= uVar31);
    }
  }
  puVar11 = (ulong *)in_FS_OFFSET[5];
  if (puVar11 == puVar26) {
                    /* WARNING: Could not recover jumptable at 0x00501507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar44 = (ulong *)(*(code *)param_5[6])();
    return puVar44;
  }
code_r0x00501627:
  func_0x0099bd00();
  puStack_68 = (ulong *)in_FS_OFFSET[5];
  uVar12 = 0;
  uVar49 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar54 = (ulong)*extraout_RDX;
  pbVar10 = extraout_RDX + 1;
  uStack_60 = puVar16;
  if ((char)*extraout_RDX < '\0') {
    bVar3 = *pbVar10;
    uStack_70 = (ulong *)CONCAT17(bVar3,(undefined7)uStack_70);
    uVar46 = (uint7)((uVar54 << 0x39) >> 8);
    puVar26 = (ulong *)CONCAT71(uVar46,bVar3);
    pbVar10 = extraout_RDX;
    if ((char)bVar3 < '\0') goto code_r0x00501856;
    uVar54 = (long)puVar26 << 7 | (ulong)(uVar46 >> 0x31);
    pbVar10 = extraout_RDX + 2;
  }
code_r0x00501676:
  do {
    uVar52 = (uint)(uVar54 >> 3) & 0x1fffffff;
    uVar31 = uVar52 - 1;
    puVar16 = puVar44;
    if (uVar31 < 0x20) {
      if ((*(uint *)((long)param_6 + 0xc) >> (uVar31 & 0x1f) & 1) != 0) goto code_r0x0050178d;
      uVar52 = *(uint *)((long)param_6 + 0xc) & (1 << ((byte)uVar31 & 0x1f)) - 1U;
      uVar52 = uVar52 - (uVar52 >> 1 & 0x55555555);
      uVar52 = (uVar52 >> 2 & 0x33333333) + (uVar52 & 0x33333333);
      uVar31 = uVar31 - (((uVar52 >> 4) + uVar52 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x005016f2:
      pbVar53 = (byte *)((long)param_6 + (ulong)uVar31 * 0xc + (ulong)(uint)param_6[2]);
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(
                     _ZZN6google8protobuf8internal8TcParser9MiniParseILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmE15kMiniParseTable
                     + (ulong)(*(ushort *)
                                ((long)param_6 + (ulong)uVar31 * 0xc + (ulong)(uint)param_6[2] + 10)
                              & 0xf) * 8);
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar54;
      param_1[2] = (ulong)pbVar53;
      puStack_78 = (ulong *)&UNK_00501731;
      uVar12 = (*UNRECOVERED_JUMPTABLE_00)
                         (puVar44,pbVar10,puVar11,
                          uVar54 & 0xffffffff | (ulong)(uint)((int)pbVar53 - (int)param_6) << 0x20);
    }
    else {
      uVar31 = *(uint *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
      if (uVar31 <= uVar52) {
        pbVar53 = (byte *)((ulong)*(ushort *)((long)param_6 + 10) + (long)param_6);
        do {
          uVar60 = *(ushort *)(pbVar53 + 4);
          uVar24 = uVar52 - uVar31 >> 4;
          if (uVar24 < uVar60) {
            uVar52 = uVar52 - uVar31 & 0xf;
            if ((*(ushort *)(pbVar53 + (ulong)uVar24 * 4 + 6) >> uVar52 & 1) == 0) {
              uVar31 = (1 << (sbyte)uVar52) - 1U &
                       (uint)*(ushort *)(pbVar53 + (ulong)uVar24 * 4 + 6);
              uVar31 = uVar31 - (uVar31 >> 1 & 0x5555);
              uVar31 = (uVar31 >> 2 & 0x33333333) + (uVar31 & 0x33333333);
              uVar31 = (uVar52 - (((uVar31 >> 4) + uVar31 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                       (uint)*(ushort *)(pbVar53 + (ulong)(uVar24 * 2) * 2 + 8);
              goto code_r0x005016f2;
            }
            break;
          }
          uVar31 = *(uint *)(pbVar53 + (ulong)uVar60 * 4 + 6);
          pbVar53 = pbVar53 + (ulong)uVar60 * 4 + 6;
        } while (uVar31 <= uVar52);
      }
code_r0x0050178d:
      UNRECOVERED_JUMPTABLE_00 = (code *)param_6[6];
      *param_1 = (ulong)UNRECOVERED_JUMPTABLE_00;
      *(uint *)(param_1 + 1) = (uint)uVar54;
      param_1[2] = 0;
      puStack_78 = (ulong *)&UNK_005017aa;
      uVar12 = (*UNRECOVERED_JUMPTABLE_00)(puVar44,pbVar10,puVar11,uVar54 & 0xffffffff);
    }
    while( true ) {
      param_1[3] = uVar12;
      if ((ulong *)in_FS_OFFSET[5] == puStack_68) {
        return param_1;
      }
      puStack_78 = (ulong *)&UNK_00501856;
      puVar11 = (ulong *)func_0x0099bd00();
      pbVar10 = extraout_RDX_00;
      puVar26 = puVar44;
      puVar44 = puVar16;
      uVar12 = extraout_XMM0_Qa;
      uVar49 = extraout_XMM0_Qb;
code_r0x00501856:
      puVar16 = uStack_70;
      bVar3 = pbVar10[2];
      uStack_70._0_7_ = CONCAT16(bVar3,(undefined6)uStack_70);
      uVar46 = (uint7)((ulong)puVar26 >> 0xf) | (uint7)((ulong)((long)puVar26 << 0x39) >> 8);
      if (-1 < (char)bVar3) {
        uVar54 = CONCAT71(uVar46,bVar3) << 0xe | (ulong)(uVar46 >> 0x2a);
        pbVar10 = pbVar10 + 3;
        goto code_r0x00501676;
      }
      bVar2 = pbVar10[3];
      uStack_70._0_5_ = SUB85(puVar16,0);
      uStack_70._0_6_ = CONCAT15(bVar2,(undefined5)uStack_70);
      uVar46 = uVar46 >> 7 | (uint7)((ulong)(CONCAT71(uVar46,bVar3) << 0x39) >> 8);
      if (-1 < (char)bVar2) {
        uVar54 = CONCAT71(uVar46,bVar2) << 0x15 | (ulong)(uVar46 >> 0x23);
        pbVar10 = pbVar10 + 4;
        goto code_r0x00501676;
      }
      bVar3 = pbVar10[4];
      uStack_70._0_4_ = (uint)puVar16;
      uStack_70._0_5_ = CONCAT14(bVar3,(uint)uStack_70);
      uVar46 = uVar46 >> 7 | (uint7)((ulong)(CONCAT71(uVar46,bVar2) << 0x39) >> 8);
      if (-1 < (char)bVar3) break;
      param_1[1] = uVar12;
      param_1[2] = uVar49;
      *param_1 = (ulong)
                 _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
      ;
      puStack_78 = (ulong *)&UNK_005018cf;
      puVar16 = puVar44;
      uVar12 = _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                         (puVar44);
    }
    uVar54 = CONCAT71(uVar46,bVar3) << 0x1c | (ulong)(uVar46 >> 0x1c);
    pbVar10 = pbVar10 + 5;
  } while( true );
  while( true ) {
    bVar3 = *(byte *)((long)puVar44 + 4);
    auVar99[8] = bVar3;
    auVar99._0_8_ = (byte *)((long)puVar44 + 5);
    auVar99._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar44 + 5);
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_70 = (ulong *)&UNK_005185a8;
        auVar99 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
        if (auVar99._0_8_ == 0) goto code_r0x005013a0;
      }
      else {
        auVar99._8_4_ = iVar30;
        auVar99._0_8_ = (ushort *)((long)puVar44 + 6);
      }
    }
    puVar44 = auVar99._0_8_;
    if (auVar99._8_4_ != uVar31) break;
code_r0x00518523:
    uVar49 = *puVar44;
    uVar12 = *puVar26;
    uVar58 = (uint)uVar12 & 3;
    bVar63 = (uVar12 & 4) == 0;
    puVar11 = puVar26 + 1;
    uVar24 = (uint)*puVar11;
    uVar32 = uVar24;
    if (bVar63) {
      uVar32 = uVar58;
    }
    uVar33 = *(uint *)((long)puVar26 + 0xc);
    if (bVar63) {
      uVar33 = 2;
    }
    if (uVar32 == uVar33) {
      iVar30 = uVar32 + 1;
      uStack_70 = (ulong *)&UNK_005185db;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar26,(uVar12 & 4) == 0,uVar32,iVar30);
      puVar11 = (ulong *)(*puVar26 & 0xfffffffffffffff8);
      uVar58 = (uint)puVar26[1];
code_r0x00518564:
      *(int *)(puVar26 + 1) = iVar30;
    }
    else {
      if ((uVar12 & 4) != 0) {
        iVar30 = uVar24 + 1;
        puVar11 = (ulong *)(uVar12 & 0xfffffffffffffff8);
        uVar58 = uVar24;
        goto code_r0x00518564;
      }
      *puVar26 = (long)(uVar12 & 0xfffffffffffffff8) + (ulong)uVar58 + 1;
    }
    *(uint *)((long)puVar11 + (long)(int)uVar58 * 4) = (uint)uVar49;
    puVar11 = (ulong *)((long)puVar44 + 4);
    if ((ulong *)*param_3 <= puVar11) goto code_r0x0051864a;
  }
  goto code_r0x00518608;
code_r0x005104be:
  puVar59 = auVar65._0_8_;
  puVar42 = &stack0xfffffffffffffff8;
  uVar52 = *(byte *)((long)param_5 + 0xf) & 0xf;
  puVar26 = (ulong *)&UNK_00204f70;
  ppuVar37 = ppuVar34;
  ppuVar36 = ppuVar34;
  ppuVar8 = ppuVar34;
  auVar7 = auVar65;
  switch(uVar52) {
  case 0:
    *(undefined **)((long)ppuVar34 + -8) = &UNK_005104e1;
    _ZN6google8protobuf8internal10KeyMapBaseIbE19InsertOrReplaceNodeEPNS1_7KeyNodeIbEE
              (param_5,unaff_RBX);
    puVar44 = (ulong *)*param_3;
    goto joined_r0x0051056f;
  case 1:
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051056b;
    _ZN6google8protobuf8internal10KeyMapBaseIjE19InsertOrReplaceNodeEPNS1_7KeyNodeIjEE
              (param_5,unaff_RBX);
    puVar44 = (ulong *)*param_3;
joined_r0x0051056f:
    if (puVar59 < puVar44) {
code_r0x00510575:
      do {
        bVar3 = (byte)*puVar59;
        uVar52 = (uint)bVar3;
        unaff_R13 = (ulong *)((long)puVar59 + 1);
        if ((char)bVar3 < '\0') {
          uVar46 = (uint7)(((ulong)bVar3 << 0x39) >> 8);
          lVar22 = CONCAT71(uVar46,*(byte *)unaff_R13);
          if ((char)*(byte *)unaff_R13 < '\0') {
            uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
            lVar22 = CONCAT71(uVar46,*(byte *)((long)puVar59 + 2));
            if ((char)*(byte *)((long)puVar59 + 2) < '\0') {
              uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
              lVar22 = CONCAT71(uVar46,*(byte *)((long)puVar59 + 3));
              if ((char)*(byte *)((long)puVar59 + 3) < '\0') {
                uVar46 = uVar46 >> 7 | (uint7)((ulong)(lVar22 << 0x39) >> 8);
                if ((char)*(byte *)((long)puVar59 + 4) < '\0') {
                  uVar52 = 0;
                  unaff_R13 = (ulong *)0x0;
                }
                else {
                  uVar52 = (int)CONCAT71(uVar46,*(byte *)((long)puVar59 + 4)) << 0x1c |
                           (uint)(uVar46 >> 0x1c);
                  unaff_R13 = (ulong *)((long)puVar59 + 5);
                }
              }
              else {
                uVar52 = (int)lVar22 << 0x15 | (uint)(uVar46 >> 0x23);
                unaff_R13 = (ulong *)((long)puVar59 + 4);
              }
            }
            else {
              uVar52 = (int)lVar22 << 0xe | (uint)(uVar46 >> 0x2a);
              unaff_R13 = (ulong *)((long)puVar59 + 3);
            }
          }
          else {
            uVar52 = (int)lVar22 << 7 | (uint)(((ulong)bVar3 << 0x39) >> 0x39);
            unaff_R13 = (ulong *)((long)puVar59 + 2);
          }
        }
        ppuVar35 = ppuVar34;
        if (uVar52 != (uint)uStack_70) {
          uVar12 = (ulong)((uint)(byte)uStack_60[1] & (uint)(ushort)*puVar59 & 0xfffffff8);
          if (in_FS_OFFSET[5] == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0051076e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar44 = (ulong *)(**(code **)((long)uStack_60 + uVar12 * 2 + 0x38))
                                         (CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)),puVar59,
                                          param_3,*(ulong *)((long)uStack_60 + uVar12 * 2 + 0x40) ^
                                                  (ulong)(ushort)*puVar59,uStack_60,puStack_68);
            return puVar44;
          }
          goto code_r0x0051080d;
        }
code_r0x00510340:
        uVar60 = *(ushort *)((long)param_5 + 0xc);
        uVar49 = param_5[3];
        if (uVar49 == 0) {
          *(undefined **)((long)ppuVar35 + -8) = &UNK_00510368;
          unaff_RBX = (ulong *)_Znwm(uVar60);
        }
        else {
          *(undefined **)((long)ppuVar35 + -8) = &UNK_00510359;
          unaff_RBX = (ulong *)_ZN6google8protobuf5Arena8AllocateEm(uVar49,uVar60 + 7 & 0xfffffff8);
        }
        uVar60 = *(ushort *)((long)param_5 + 0xc);
        unaff_RBX[1] = 0;
        pbVar10 = (byte *)((long)unaff_RBX + ((ulong)uVar60 - 8));
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10[4] = 0;
        pbVar10[5] = 0;
        pbVar10[6] = 0;
        pbVar10[7] = 0;
        if ((*(byte *)((long)param_5 + 0xf) & 0xf) == 5) {
          uVar49 = param_5[3];
          unaff_RBX[1] = 0;
          unaff_RBX[2] = 0;
          unaff_RBX[3] = 0;
          if (uVar49 != 0) {
            *(undefined **)((long)ppuVar35 + -8) = &UNK_005103b3;
            _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                      (uVar49,unaff_RBX + 1,
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
            uVar54 = (ulong)*(byte *)((long)param_5 + 0xe);
            uVar49 = param_5[3];
            pbVar10 = (byte *)((long)unaff_RBX + uVar54);
            pbVar10[0] = 0;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            pbVar10[4] = 0;
            pbVar10[5] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            pbVar10[8] = 0;
            pbVar10[9] = 0;
            pbVar10[10] = 0;
            pbVar10[0xb] = 0;
            pbVar10[0xc] = 0;
            pbVar10[0xd] = 0;
            pbVar10[0xe] = 0;
            pbVar10[0xf] = 0;
            pbVar10 = (byte *)((long)unaff_RBX + uVar54 + 0x10);
            pbVar10[0] = 0;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            pbVar10[4] = 0;
            pbVar10[5] = 0;
            pbVar10[6] = 0;
            pbVar10[7] = 0;
            if (uVar49 != 0) {
              *(undefined **)((long)ppuVar35 + -8) = &UNK_005105c0;
              _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
                        (uVar49,(byte *)(uVar54 + (long)unaff_RBX),
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
        puVar44 = auVar80._0_8_;
        if ((int)(uint)param_3[0xb] < 1) goto code_r0x005106dc;
        uVar31 = auVar80._8_4_ + (auVar80._0_4_ - (int)param_3[1]);
        *param_3 = (long)(int)((int)uVar31 >> 0x1f & uVar31) + param_3[1];
        uVar52 = *(uint *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar31;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] - 1;
        *ppuVar34 = param_5;
        ppuVar34[-1] = (ulong *)&UNK_00510452;
        param_1 = unaff_RBX;
        puVar47 = uStack_60;
        param_6 = puStack_78;
        auVar65 = _ZN6google8protobuf8internal8TcParser16ParseOneMapEntryEPNS1_8NodeBaseEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBase8FieldAuxEPKS9_RKNS9_10FieldEntryERNS1_14UntypedMapBaseE
                            (unaff_RBX,puVar44,param_3,
                             CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50)));
        puVar59 = auVar65._0_8_;
        *(uint *)(param_3 + 0xb) = (uint)param_3[0xb] + 1;
        uVar52 = (uVar52 - uVar31) + *(uint *)((long)param_3 + 0x1c);
        unaff_R13 = (ulong *)(ulong)uVar52;
        *(uint *)((long)param_3 + 0x1c) = uVar52;
        if (((uint)param_3[10] != 0) ||
           (*param_3 = (long)(int)((int)uVar52 >> 0x1f & uVar52) + param_3[1],
           puVar59 == (ulong *)0x0)) goto code_r0x005106dc;
        if ((bStack_3d & 8) == 0) goto code_r0x005104be;
        uVar52 = *(uint *)((long)unaff_RBX + (ulong)*(byte *)((long)param_5 + 0xe));
        puVar61 = *(uint **)(CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50)) + 8);
        puVar44 = (ulong *)(long)(short)*puVar61;
        param_1 = (ulong *)(ulong)(*puVar61 >> 0x10);
        puVar26 = (ulong *)(((long)(int)uVar52 - (long)puVar44) - (long)param_1);
        auVar4._8_8_ = puVar26;
        auVar4._0_8_ = puVar59;
        auVar65._8_8_ = puVar26;
        auVar65._0_8_ = puVar59;
        if ((ulong *)((long)(int)uVar52 - (long)puVar44) < param_1) goto code_r0x005104be;
        uVar31 = puVar61[1];
        puVar44 = (ulong *)(ulong)uVar31;
        param_1 = (ulong *)(ulong)(ushort)uVar31;
        if (puVar26 < param_1) {
          auVar65 = auVar4;
          if ((puVar61[((ulong)puVar26 >> 5) + 2] >> ((uint)puVar26 & 0x1f) & 1) != 0)
          goto code_r0x005104be;
        }
        else {
          auVar65._8_4_ = uVar31 >> 0x10;
          auVar65._12_4_ = 0;
          puVar44 = (ulong *)0x0;
          while (puVar44 < (ulong *)(ulong)(uVar31 >> 0x10)) {
            uVar24 = *(uint *)((long)puVar61 + (long)puVar44 * 4 + (ulong)(uVar31 >> 3 & 0x1ffc) + 8
                              );
            param_1 = (ulong *)(ulong)uVar24;
            puVar47 = (ulong *)(ulong)((int)uVar52 < (int)uVar24);
            puVar44 = (ulong *)(((long)puVar44 * 2 - (long)puVar47) + 2);
            if (uVar24 == uVar52) goto code_r0x005104be;
          }
        }
        ppuVar34[-1] = (ulong *)&UNK_0051061f;
        _ZN6google8protobuf8internal8TcParser22WriteMapEntryAsUnknownEPNS0_11MessageLiteEPKNS1_16TcParseTableBaseERNS1_14UntypedMapBaseEjPNS1_8NodeBaseENS1_10MapAuxInfoE
                  (CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48)),uStack_60,param_5,uStack_70,
                   unaff_RBX,puVar28);
        if ((ulong *)*param_3 <= puVar59) break;
      } while( true );
    }
    break;
  case 2:
code_r0x00510520:
    *(undefined **)((long)ppuVar36 + -8) = &UNK_0051052b;
    _ZN6google8protobuf8internal10KeyMapBaseImE19InsertOrReplaceNodeEPNS1_7KeyNodeImEE
              (param_5,unaff_RBX);
    ppuVar34 = ppuVar36;
    if (puVar59 < (ulong *)*param_3) goto code_r0x00510575;
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
    if (puVar59 < (ulong *)*param_3) goto code_r0x00510575;
    break;
  case 6:
    goto code_r0x00510893;
  case 7:
    bVar63 = (int)uVar12 == 0;
    goto code_r0x005108b3;
  case 8:
    goto code_r0x00510893;
  case 9:
    uRam0000000045b708b1 =
         uRam0000000045b708b1 ^ *(int *)(&UNK_00204f70 + (ulong)uVar52 * 4) + 0x204f70U;
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
      uVar12 = *(ulong *)*param_1;
      if ((uVar12 & 4) == 0) {
        puVar44 = (ulong *)(ulong)((uint)uVar12 & 3);
      }
      else {
        puVar44 = (ulong *)(ulong)(uint)((ulong *)*param_1)[1];
      }
      break;
    case 9:
    case 10:
      puVar44 = (ulong *)(ulong)*(uint *)(*param_1 + 8);
      break;
    default:
      goto code_r0x0051e680;
    }
    if (in_FS_OFFSET[5] ==
        CONCAT44((int)((ulong)unaff_R14 >> 0x20),
                 *(int *)(&UNK_00204f70 + (ulong)uVar52 * 4) + 0x204f70U)) {
      return puVar44;
    }
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e680;
    func_0x0099bd00();
code_r0x0051e680:
    puVar18 = &stack0xffffffffffffffd8;
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e698;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKci(puVar18,&UNK_0017bf02,0x5ad);
    iVar30 = 0x17a6b5;
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6a7;
    uVar14 = _ZN4absl12lts_2026052612log_internal10LogMessagelsILi19EEERS2_RAT__Kc(puVar18);
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6af;
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(uVar14);
    *(undefined **)((long)ppuVar34 + -8) = &UNK_0051e6b7;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev();
    uVar60 = *(ushort *)(puVar18 + 10);
    if (uVar60 == 0) {
      return (ulong *)0x0;
    }
    *(undefined1 **)((long)ppuVar34 + -8) = puVar42;
    if ((short)uVar60 < 0) {
      *(undefined **)((long)ppuVar34 + -0x10) = &UNK_0051e6fd;
      lVar22 = _ZNK6google8protobuf8internal12ExtensionSet20FindOrNullInLargeMapEi();
      if (lVar22 == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      lVar20 = (ulong)uVar60 << 5;
      lVar22 = *(long *)(puVar18 + 0x10) + 8;
      while( true ) {
        iVar25 = *(int *)(lVar22 + -8);
        if (iVar25 != iVar30 && iVar30 <= iVar25) {
          return (ulong *)0x0;
        }
        if (iVar25 == iVar30) break;
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
    return puVar59;
  }
  goto code_r0x0051080d;
  while( true ) {
    bVar3 = *(byte *)((long)puVar44 + 4);
    auVar89[8] = bVar3;
    auVar89._0_8_ = (byte *)((long)puVar44 + 5);
    auVar89._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar44 + 5);
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_60 = (ulong *)&UNK_005137e8;
        auVar89 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
        if (auVar89._0_8_ == 0) goto code_r0x005138b6;
      }
      else {
        auVar89._8_4_ = iVar30;
        auVar89._0_8_ = (ushort *)((long)puVar44 + 6);
      }
    }
    puVar44 = auVar89._0_8_;
    if (auVar89._8_4_ != uVar31) break;
code_r0x00513763:
    uVar49 = *puVar44;
    uVar12 = *puVar26;
    uVar58 = (uint)uVar12 & 3;
    bVar63 = (uVar12 & 4) == 0;
    uVar24 = (uint)puVar26[1];
    uVar32 = uVar24;
    if (bVar63) {
      uVar32 = uVar58;
    }
    uVar33 = *(uint *)((long)puVar26 + 0xc);
    if (bVar63) {
      uVar33 = 2;
    }
    if (uVar32 == uVar33) {
      iVar30 = uVar32 + 1;
      uStack_60 = (ulong *)&UNK_0051381b;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar26,(uVar12 & 4) == 0,uVar32,iVar30);
      pbVar53 = (byte *)(*puVar26 & 0xfffffffffffffff8);
      uVar58 = (uint)puVar26[1];
code_r0x005137a4:
      *(int *)pbVar10 = iVar30;
    }
    else {
      pbVar53 = (byte *)(uVar12 & 0xfffffffffffffff8);
      if ((uVar12 & 4) != 0) {
        iVar30 = uVar24 + 1;
        uVar58 = uVar24;
        goto code_r0x005137a4;
      }
      *puVar26 = (ulong)(pbVar53 + (ulong)uVar58 + 1);
      pbVar53 = pbVar10;
    }
    *(uint *)(pbVar53 + (long)(int)uVar58 * 4) = (uint)uVar49;
    puVar11 = (ulong *)((long)puVar44 + 4);
    if ((ulong *)*param_3 <= puVar11) goto code_r0x0051388a;
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
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  goto 
  _ZN6google8protobuf8internal8TcParser16MpRepeatedVarintILb0EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
  ;
code_r0x00513390:
  iVar30 = (int)param_3[1] - (int)pbVar53;
  iVar25 = (int)uVar12;
  if (iVar25 <= iVar30) goto code_r0x005133e6;
  uStack_60 = (ulong *)&UNK_005133aa;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar53,param_3[1],pbVar10);
  if (lVar20 == 0) goto code_r0x00513408;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar25 - iVar30 < 0x11) {
    uStack_60 = (ulong *)&UNK_0051345b;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar25 - iVar30),pbVar10);
    puVar44 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar25 - iVar30)) {
      puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x0051340a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00513408;
  uStack_60 = (ulong *)&UNK_005133d3;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00513408;
  uVar12 = (ulong)(uint)(iVar25 - (iVar30 + iVar56));
  pbVar53 = (byte *)(lVar20 + iVar56);
  goto code_r0x00513390;
code_r0x00513408:
  puVar44 = (ulong *)0x0;
  goto code_r0x0051340a;
code_r0x00512420:
  do {
    bVar3 = (byte)*puVar44;
    if ((long)(char)bVar3 < 0) {
      puStack_80 = (ulong *)&UNK_0051243b;
      auVar68 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
      if (auVar68._0_8_ == 0) {
        puVar44 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar68._8_8_ = (long)(char)bVar3;
      auVar68._0_8_ = (byte *)((long)puVar44 + 1);
    }
    puVar44 = auVar68._0_8_;
    uVar12 = *param_1;
    bVar63 = (uVar12 & 4) != 0;
    uVar52 = (uint)param_1[1];
    uVar31 = (uint)uVar12 & 3;
    if (bVar63) {
      uVar31 = uVar52;
    }
    uVar24 = *(uint *)((long)param_1 + 0xc);
    if (!bVar63) {
      uVar24 = 1;
    }
    uVar58 = uVar31 + 1;
    if (uVar31 == uVar24) {
      puStack_80 = (ulong *)&UNK_005123fb;
      puStack_68 = auVar68._8_8_;
      uStack_60 = puVar44;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar12 & 4) == 0,uVar31,uVar58);
      auVar68._8_8_ = puStack_68;
      auVar68._0_8_ = uStack_60;
      uVar49 = *param_1 & 0xfffffffffffffff8;
      uVar52 = (uint)param_1[1];
code_r0x00512410:
      puVar44 = auVar68._0_8_;
      *(uint *)(param_1 + 1) = uVar58;
      *(long *)(uVar49 + (long)(int)uVar52 * 8) = auVar68._8_8_;
    }
    else {
      uVar49 = uVar12 & 0xfffffffffffffff8;
      if ((uVar12 & 4) != 0) goto code_r0x00512410;
      *param_1 = uVar49 | uVar58;
      param_1[(ulong)((uint)uVar12 & 3) + 1] = (ulong)auVar68._8_8_;
    }
  } while (puVar44 < &stack0xffffffffffffffa8 + iVar56);
  puVar26 = (ulong *)param_3[1];
code_r0x00512492:
  puVar11 = (ulong *)0x0;
  if (puVar44 == (ulong *)(&stack0xffffffffffffffa8 + iVar56)) {
    puVar11 = (ulong *)(((long)puVar44 - (long)&stack0xffffffffffffffa8) + (long)puVar26);
  }
  goto code_r0x005123b7;
code_r0x0051229b:
  puVar11 = (ulong *)0x0;
  goto code_r0x005123b7;
code_r0x00512510:
  iVar30 = (int)param_3[1] - (int)pbVar10;
  iVar25 = (int)uVar12;
  if (iVar25 <= iVar30) goto code_r0x00512566;
  uStack_60 = (ulong *)&UNK_0051252a;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar10,param_3[1],param_1);
  if (lVar20 == 0) goto code_r0x00512588;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar25 - iVar30 < 0x11) {
    uStack_60 = (ulong *)&UNK_005125db;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar25 - iVar30),param_1);
    puVar44 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar25 - iVar30)) {
      puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x0051258a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512588;
  uStack_60 = (ulong *)&UNK_00512553;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00512588;
  uVar12 = (ulong)(uint)(iVar25 - (iVar30 + iVar56));
  pbVar10 = (byte *)(lVar20 + iVar56);
  goto code_r0x00512510;
code_r0x00512588:
  puVar44 = (ulong *)0x0;
  goto code_r0x0051258a;
code_r0x00512b00:
  iVar30 = (int)param_3[1] - (int)pbVar10;
  iVar25 = (int)uVar12;
  if (iVar25 <= iVar30) goto code_r0x00512b56;
  uStack_60 = (ulong *)&UNK_00512b1a;
  lVar20 = _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                     (pbVar10,param_3[1],puVar26);
  if (lVar20 == 0) goto code_r0x00512b78;
  iVar56 = (int)lVar20 - (int)param_3[1];
  if (iVar25 - iVar30 < 0x11) {
    uStack_60 = (ulong *)&UNK_00512bcb;
    puVar18 = (undefined1 *)
              _ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                        (&stack0xffffffffffffffa8 + iVar56,
                         &stack0xffffffffffffffa8 + (iVar25 - iVar30),puVar26);
    puVar44 = (ulong *)0x0;
    if (puVar18 == &stack0xffffffffffffffa8 + (iVar25 - iVar30)) {
      puVar44 = (ulong *)(puVar18 + (param_3[1] - (long)&stack0xffffffffffffffa8));
    }
    goto code_r0x00512b7a;
  }
  if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x00512b78;
  uStack_60 = (ulong *)&UNK_00512b43;
  lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
  if (lVar20 == 0) goto code_r0x00512b78;
  uVar12 = (ulong)(uint)(iVar25 - (iVar30 + iVar56));
  pbVar10 = (byte *)(lVar20 + iVar56);
  goto code_r0x00512b00;
code_r0x00512b78:
  puVar44 = (ulong *)0x0;
  goto code_r0x00512b7a;
code_r0x00512a0f:
  do {
    bVar3 = (byte)*puVar44;
    if ((long)(char)bVar3 < 0) {
      puStack_80 = (ulong *)&UNK_00512a2b;
      auVar71 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
      if (auVar71._0_8_ == 0) {
        puVar44 = (ulong *)0x0;
        break;
      }
    }
    else {
      auVar71._8_8_ = (long)(char)bVar3;
      auVar71._0_8_ = (byte *)((long)puVar44 + 1);
    }
    auVar104 = auVar71._0_12_;
    puVar44 = auVar71._0_8_;
    uVar12 = *puVar26;
    bVar63 = (uVar12 & 4) != 0;
    uVar52 = (uint)puVar26[1];
    uVar31 = (uint)uVar12 & 3;
    if (bVar63) {
      uVar31 = uVar52;
    }
    uVar24 = *(uint *)((long)puVar26 + 0xc);
    if (!bVar63) {
      uVar24 = 2;
    }
    uVar58 = uVar31 + 1;
    if (uVar31 == uVar24) {
      puStack_80 = (ulong *)&UNK_005129ea;
      puStack_68 = auVar71._8_8_;
      uStack_60 = puVar44;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar26,(uVar12 & 4) == 0,uVar31,uVar58);
      auVar6._8_8_ = puStack_68;
      auVar6._0_8_ = uStack_60;
      auVar104 = auVar6._0_12_;
      uVar49 = *puVar26 & 0xfffffffffffffff8;
      uVar52 = (uint)puVar26[1];
code_r0x00512a00:
      puVar44 = auVar104._0_8_;
      *(uint *)(puVar26 + 1) = uVar58;
      *(int *)(uVar49 + (long)(int)uVar52 * 4) = auVar104._8_4_;
    }
    else {
      uVar49 = uVar12 & 0xfffffffffffffff8;
      if ((uVar12 & 4) != 0) goto code_r0x00512a00;
      *puVar26 = uVar49 | uVar58;
      *(int *)((long)puVar26 + (ulong)((uint)uVar12 & 3) * 4 + 8) = auVar71._8_4_;
    }
  } while (puVar44 < &stack0xffffffffffffffa8 + iVar56);
  puVar11 = (ulong *)param_3[1];
code_r0x00512a81:
  puVar26 = (ulong *)0x0;
  if (puVar44 == (ulong *)(&stack0xffffffffffffffa8 + iVar56)) {
    puVar26 = (ulong *)(((long)puVar44 - (long)&stack0xffffffffffffffa8) + (long)puVar11);
  }
  goto code_r0x005129a6;
code_r0x0051288a:
  puVar26 = (ulong *)0x0;
  goto code_r0x005129a6;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051229b;
    puStack_80 = (ulong *)&UNK_0051226c;
    lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar20 == 0) goto code_r0x0051229b;
    uVar52 = (int)uVar12 - (iVar30 + iVar25);
    uVar12 = (ulong)uVar52;
    puVar44 = (ulong *)(lVar20 + iVar25);
    puVar26 = (ulong *)param_3[1];
    iVar30 = (int)puVar26 - (int)puVar44;
    if ((int)uVar52 <= iVar30) break;
code_r0x00512179:
    if (puVar44 < puVar26) {
      do {
        while( true ) {
          bVar3 = (byte)*puVar44;
          if ((long)(char)bVar3 < 0) {
            puStack_80 = (ulong *)&UNK_005121eb;
            auVar66 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
            if (auVar66._0_8_ == 0) goto code_r0x0051229b;
          }
          else {
            auVar66._8_8_ = (long)(char)bVar3;
            auVar66._0_8_ = (byte *)((long)puVar44 + 1);
          }
          puVar44 = auVar66._0_8_;
          uVar49 = *param_1;
          bVar63 = (uVar49 & 4) != 0;
          uVar52 = (uint)param_1[1];
          uVar31 = (uint)uVar49 & 3;
          if (bVar63) {
            uVar31 = uVar52;
          }
          uVar24 = *(uint *)((long)param_1 + 0xc);
          if (!bVar63) {
            uVar24 = 1;
          }
          uVar58 = uVar31 + 1;
          if (uVar31 != uVar24) break;
          puStack_80 = (ulong *)&UNK_005121a2;
          puStack_68 = auVar66._8_8_;
          uStack_60 = puVar44;
          _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar49 & 4) == 0,uVar31,uVar58);
          auVar66._8_8_ = puStack_68;
          auVar66._0_8_ = uStack_60;
          uVar54 = *param_1 & 0xfffffffffffffff8;
          uVar52 = (uint)param_1[1];
code_r0x005121c0:
          puVar44 = auVar66._0_8_;
          *(uint *)(param_1 + 1) = uVar58;
          *(long *)(uVar54 + (long)(int)uVar52 * 8) = auVar66._8_8_;
          if (puVar26 <= puVar44) goto code_r0x00512244;
        }
        uVar54 = uVar49 & 0xfffffffffffffff8;
        if ((uVar49 & 4) != 0) goto code_r0x005121c0;
        *param_1 = uVar54 | uVar58;
        param_1[(ulong)((uint)uVar49 & 3) + 1] = (ulong)auVar66._8_8_;
      } while (puVar44 < puVar26);
code_r0x00512244:
      puVar26 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar25 = (int)puVar44 - (int)puVar26;
    iVar56 = (int)uVar12 - iVar30;
    if (iVar56 < 0x11) {
      puVar44 = (ulong *)(&stack0xffffffffffffffa8 + iVar25);
      if ((long)iVar56 <= (long)iVar25) goto code_r0x00512492;
      goto code_r0x00512420;
    }
  }
code_r0x005122a5:
  puVar26 = (ulong *)((long)puVar44 + (long)(int)uVar52);
  if (0 < (int)uVar52) {
    do {
      while( true ) {
        bVar3 = (byte)*puVar44;
        if ((long)(char)bVar3 < 0) {
          puStack_80 = (ulong *)&UNK_0051235b;
          auVar67 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
          if (auVar67._0_8_ == 0) {
            puVar44 = (ulong *)0x0;
            goto code_r0x005123ae;
          }
        }
        else {
          auVar67._8_8_ = (long)(char)bVar3;
          auVar67._0_8_ = (byte *)((long)puVar44 + 1);
        }
        puVar11 = auVar67._8_8_;
        puVar44 = auVar67._0_8_;
        uVar12 = *param_1;
        bVar63 = (uVar12 & 4) != 0;
        uVar52 = (uint)param_1[1];
        uVar31 = (uint)uVar12 & 3;
        if (bVar63) {
          uVar31 = uVar52;
        }
        uVar24 = *(uint *)((long)param_1 + 0xc);
        if (!bVar63) {
          uVar24 = 1;
        }
        uVar58 = uVar31 + 1;
        if (uVar31 != uVar24) break;
        puStack_80 = (ulong *)&UNK_0051231e;
        uStack_70 = puVar11;
        _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(param_1,(uVar12 & 4) == 0,uVar31,uVar58);
        uVar49 = *param_1 & 0xfffffffffffffff8;
        uVar52 = (uint)param_1[1];
        puVar11 = uStack_70;
code_r0x00512330:
        *(uint *)(param_1 + 1) = uVar58;
        *(ulong **)(uVar49 + (long)(int)uVar52 * 8) = puVar11;
        if (puVar26 <= puVar44) goto code_r0x005123ae;
      }
      uVar49 = uVar12 & 0xfffffffffffffff8;
      if ((uVar12 & 4) != 0) goto code_r0x00512330;
      *param_1 = uVar49 | uVar58;
      param_1[(ulong)((uint)uVar12 & 3) + 1] = (ulong)puVar11;
    } while (puVar44 < puVar26);
  }
code_r0x005123ae:
  puVar11 = (ulong *)0x0;
  if (puVar26 == puVar44) {
    puVar11 = puVar44;
  }
code_r0x005123b7:
  if (in_FS_OFFSET[5] != lVar22) {
    puStack_80 = (ulong *)&UNK_005124b2;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  return puVar11;
  while( true ) {
    if ((int)*(uint *)((long)param_3 + 0x1c) < 0x11) goto code_r0x0051288a;
    puStack_80 = (ulong *)&UNK_0051285b;
    lVar20 = _ZN6google8protobuf8internal18EpsCopyInputStream4NextEv(param_3);
    if (lVar20 == 0) goto code_r0x0051288a;
    uVar52 = (int)uVar12 - (iVar30 + iVar25);
    uVar12 = (ulong)uVar52;
    puVar44 = (ulong *)(lVar20 + iVar25);
    puVar11 = (ulong *)param_3[1];
    iVar30 = (int)puVar11 - (int)puVar44;
    if ((int)uVar52 <= iVar30) break;
code_r0x00512769:
    if (puVar44 < puVar11) {
      do {
        while( true ) {
          bVar3 = (byte)*puVar44;
          if ((long)(char)bVar3 < 0) {
            puStack_80 = (ulong *)&UNK_005127db;
            auVar69 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
            if (auVar69._0_8_ == 0) goto code_r0x0051288a;
          }
          else {
            auVar69._8_8_ = (long)(char)bVar3;
            auVar69._0_8_ = (byte *)((long)puVar44 + 1);
          }
          auVar104 = auVar69._0_12_;
          puVar44 = auVar69._0_8_;
          uVar49 = *puVar26;
          bVar63 = (uVar49 & 4) != 0;
          uVar52 = (uint)puVar26[1];
          uVar31 = (uint)uVar49 & 3;
          if (bVar63) {
            uVar31 = uVar52;
          }
          uVar24 = *(uint *)((long)puVar26 + 0xc);
          if (!bVar63) {
            uVar24 = 2;
          }
          uVar58 = uVar31 + 1;
          if (uVar31 != uVar24) break;
          puStack_80 = (ulong *)&UNK_00512792;
          puStack_68 = auVar69._8_8_;
          uStack_60 = puVar44;
          _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar26,(uVar49 & 4) == 0,uVar31,uVar58);
          auVar5._8_8_ = puStack_68;
          auVar5._0_8_ = uStack_60;
          auVar104 = auVar5._0_12_;
          uVar54 = *puVar26 & 0xfffffffffffffff8;
          uVar52 = (uint)puVar26[1];
code_r0x005127b0:
          puVar44 = auVar104._0_8_;
          *(uint *)(puVar26 + 1) = uVar58;
          *(int *)(uVar54 + (long)(int)uVar52 * 4) = auVar104._8_4_;
          if (puVar11 <= puVar44) goto code_r0x00512833;
        }
        uVar54 = uVar49 & 0xfffffffffffffff8;
        if ((uVar49 & 4) != 0) goto code_r0x005127b0;
        *puVar26 = uVar54 | uVar58;
        *(int *)((long)puVar26 + (ulong)((uint)uVar49 & 3) * 4 + 8) = auVar69._8_4_;
      } while (puVar44 < puVar11);
code_r0x00512833:
      puVar11 = (ulong *)uStack_70[1];
      param_3 = uStack_70;
    }
    iVar25 = (int)puVar44 - (int)puVar11;
    iVar56 = (int)uVar12 - iVar30;
    if (iVar56 < 0x11) {
      puVar44 = (ulong *)(&stack0xffffffffffffffa8 + iVar25);
      if ((long)iVar56 <= (long)iVar25) goto code_r0x00512a81;
      goto code_r0x00512a0f;
    }
  }
code_r0x00512894:
  puVar11 = (ulong *)((long)puVar44 + (long)(int)uVar52);
  if (0 < (int)uVar52) {
    do {
      while( true ) {
        bVar3 = (byte)*puVar44;
        if ((long)(char)bVar3 < 0) {
          puStack_80 = (ulong *)&UNK_0051294b;
          auVar70 = _ZN6google8protobuf8internal17VarintParseSlow64EPKcj(puVar44,bVar3);
          if (auVar70._0_8_ == 0) {
            puVar44 = (ulong *)0x0;
            goto code_r0x0051299d;
          }
        }
        else {
          auVar70._8_8_ = (long)(char)bVar3;
          auVar70._0_8_ = (byte *)((long)puVar44 + 1);
        }
        puVar44 = auVar70._0_8_;
        uVar12 = *puVar26;
        bVar63 = (uVar12 & 4) != 0;
        uVar52 = (uint)puVar26[1];
        uVar31 = (uint)uVar12 & 3;
        if (bVar63) {
          uVar31 = uVar52;
        }
        uVar24 = *(uint *)((long)puVar26 + 0xc);
        if (!bVar63) {
          uVar24 = 2;
        }
        uVar58 = uVar31 + 1;
        if (uVar31 != uVar24) break;
        puStack_80 = (ulong *)&UNK_0051290d;
        uStack_70 = auVar70._8_8_;
        _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar26,(uVar12 & 4) == 0,uVar31,uVar58);
        uVar49 = *puVar26 & 0xfffffffffffffff8;
        uVar52 = (uint)puVar26[1];
        puVar16 = uStack_70;
code_r0x00512920:
        *(uint *)(puVar26 + 1) = uVar58;
        *(int *)(uVar49 + (long)(int)uVar52 * 4) = (int)puVar16;
        if (puVar11 <= puVar44) goto code_r0x0051299d;
      }
      uVar49 = uVar12 & 0xfffffffffffffff8;
      puVar16 = auVar70._8_8_;
      if ((uVar12 & 4) != 0) goto code_r0x00512920;
      *puVar26 = uVar49 | uVar58;
      *(int *)((long)puVar26 + (ulong)((uint)uVar12 & 3) * 4 + 8) = auVar70._8_4_;
    } while (puVar44 < puVar11);
  }
code_r0x0051299d:
  puVar26 = (ulong *)0x0;
  if (puVar11 == puVar44) {
    puVar26 = puVar44;
  }
code_r0x005129a6:
  if (in_FS_OFFSET[5] != lVar22) {
    puStack_80 = (ulong *)&UNK_00512aa1;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  return puVar26;
  while( true ) {
    bVar3 = (byte)puVar44[1];
    auVar88[8] = bVar3;
    auVar88._0_8_ = (byte *)((long)puVar44 + 9);
    auVar88._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar44 + 9);
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_60 = (ulong *)&UNK_005136c8;
        auVar88 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
        if (auVar88._0_8_ == 0) goto code_r0x005138b6;
      }
      else {
        auVar88._8_4_ = iVar30;
        auVar88._0_8_ = (ushort *)((long)puVar44 + 10);
      }
    }
    puVar44 = auVar88._0_8_;
    if (auVar88._8_4_ != uVar31) break;
code_r0x00513643:
    uVar12 = *puVar44;
    uVar49 = *puVar26;
    uVar58 = (uint)uVar49 & 3;
    bVar63 = (uVar49 & 4) == 0;
    uVar24 = (uint)puVar26[1];
    uVar32 = uVar24;
    if (bVar63) {
      uVar32 = uVar58;
    }
    uVar33 = *(uint *)((long)puVar26 + 0xc);
    if (bVar63) {
      uVar33 = 1;
    }
    if (uVar32 == uVar33) {
      iVar30 = uVar32 + 1;
      uStack_60 = (ulong *)&UNK_005136fb;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar26,(uVar49 & 4) == 0,uVar32,iVar30);
      pbVar53 = (byte *)(*puVar26 & 0xfffffffffffffff8);
      uVar58 = (uint)puVar26[1];
code_r0x00513684:
      *(int *)pbVar10 = iVar30;
    }
    else {
      pbVar53 = (byte *)(uVar49 & 0xfffffffffffffff8);
      if ((uVar49 & 4) != 0) {
        iVar30 = uVar24 + 1;
        uVar58 = uVar24;
        goto code_r0x00513684;
      }
      *puVar26 = (ulong)(pbVar53 + (ulong)uVar58 + 1);
      pbVar53 = pbVar10;
    }
    *(ulong *)(pbVar53 + (long)(int)uVar58 * 8) = uVar12;
    puVar11 = puVar44 + 1;
    if ((ulong *)*param_3 <= puVar11) goto code_r0x0051388a;
  }
code_r0x00513848:
  puVar44 = puVar11;
  puVar11 = puVar44;
  if (puVar44 < (ulong *)*param_3) {
    uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
    puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^ (ulong)(ushort)*puVar44);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
code_r0x0051387a:
                    /* WARNING: Could not recover jumptable at 0x00513888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar44,param_3,puVar26,param_5,param_6);
    return puVar44;
  }
code_r0x0051388a:
  if ((ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | uVar52;
  }
  return puVar11;
code_r0x00512b56:
  uStack_60 = (ulong *)&UNK_00512b6a;
  puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIiLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar10,pbVar10 + iVar25,puVar26);
  puVar44 = (ulong *)0x0;
  if ((ulong *)(pbVar10 + iVar25) == puVar26) {
    puVar44 = puVar26;
  }
code_r0x00512b7a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_00512bec;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  return puVar44;
code_r0x00512566:
  uStack_60 = (ulong *)&UNK_0051257a;
  puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIlLb1EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar10,pbVar10 + iVar25,param_1);
  puVar44 = (ulong *)0x0;
  if ((ulong *)(pbVar10 + iVar25) == puVar26) {
    puVar44 = puVar26;
  }
code_r0x0051258a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_005125fc;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  return puVar44;
code_r0x005133e6:
  uStack_60 = (ulong *)&UNK_005133fa;
  puVar26 = (ulong *)_ZN6google8protobuf8internal21ReadPackedVarintArrayIZNS1_12VarintParserIbLb0EEEPKcPvS5_PNS1_12ParseContextEEUlmE_EES5_S5_S5_T_
                               (pbVar53,pbVar53 + iVar25,pbVar10);
  puVar44 = (ulong *)0x0;
  if ((ulong *)(pbVar53 + iVar25) == puVar26) {
    puVar44 = puVar26;
  }
code_r0x0051340a:
  if (in_FS_OFFSET[5] != lVar22) {
    uStack_60 = (ulong *)&UNK_0051347c;
    func_0x0099bd00();
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar44;
  }
  return puVar44;
  while( true ) {
    bVar3 = (byte)*puVar59;
    auVar97[8] = bVar3;
    auVar97._0_8_ = uVar54;
    auVar97._9_3_ = 0;
    puVar44 = (ulong *)((long)puVar59 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar44;
      auVar97._1_7_ = 0;
      auVar97[0] = bVar2;
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar97._8_4_ = iVar30;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_005169b3;
        auVar97 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar59,iVar30);
        puVar44 = auVar97._0_8_;
        param_1 = uStack_60;
        param_6 = puStack_68;
        if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      }
      else {
        puVar44 = (ulong *)((long)puVar59 + 2);
      }
    }
    puVar16 = auVar97._0_8_;
    if (auVar97._8_4_ != (int)puVar26) break;
code_r0x005167ec:
    uVar49 = (ulong)(char)(byte)*puVar44;
    param_1 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar49 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
        if ((long)uVar54 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar54 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar54 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar54 < 0) {
                      puVar59 = (ulong *)((long)puVar44 + 10);
                      bVar3 = *(byte *)((long)puVar44 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar54 = uVar54 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar59 = (ulong *)((long)puVar44 + 9);
                    }
                  }
                  else {
                    puVar59 = puVar44 + 1;
                  }
                }
                else {
                  puVar59 = (ulong *)((long)puVar44 + 7);
                }
              }
              else {
                puVar59 = (ulong *)((long)puVar44 + 6);
              }
              puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
            }
            else {
              puVar59 = (ulong *)((long)puVar44 + 5);
            }
          }
          else {
            puVar59 = (ulong *)((long)puVar44 + 4);
          }
        }
        else {
          puVar59 = (ulong *)((long)puVar44 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar54);
      }
      else {
        puVar59 = (ulong *)((long)puVar44 + 2);
      }
      uVar49 = uVar49 & (ulong)puVar16;
      if ((uVar60 & 0x400) == 0) goto code_r0x00516806;
code_r0x005168a0:
      if ((uVar60 & 0x600) == 0x600) {
        if (((int)uVar49 < (int)uVar12) || ((int)(uint)uStack_70 < (int)uVar49))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_005168c8;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar49 & 0xffffffff);
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
        param_1 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar59 = (ulong *)((long)puVar44 + 1);
      if ((uVar60 & 0x400) != 0) goto code_r0x005168a0;
code_r0x00516806:
      if ((uVar60 & 0x600) == 0x200) {
        uVar49 = (ulong)(int)((uint)uVar49 >> 1 ^ -((uint)uVar49 & 1));
      }
    }
    uVar54 = *puVar11;
    bVar63 = (uVar54 & 4) != 0;
    uVar52 = (uint)puVar11[1];
    uVar24 = (uint)uVar54 & 3;
    if (bVar63) {
      uVar24 = uVar52;
    }
    uVar58 = *(uint *)((long)puVar11 + 0xc);
    if (!bVar63) {
      uVar58 = 3;
    }
    if (uVar24 == uVar58) {
      puStack_80 = (ulong *)&UNK_00516947;
      _ZN6google8protobuf13RepeatedFieldIbE4GrowEbii(puVar11,(uVar54 & 4) == 0,uVar24,uVar24 + 1);
      puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      uVar50 = *puVar11 & 0xfffffffffffffff8;
      uVar52 = (uint)puVar11[1];
code_r0x00516970:
      *(uint *)(puVar11 + 1) = uVar24 + 1;
      uVar54 = (ulong)(int)uVar52;
      *(bool *)(uVar50 + uVar54) = uVar49 != 0;
    }
    else {
      uVar50 = uVar54 & 0xfffffffffffffff8;
      if ((uVar54 & 4) != 0) goto code_r0x00516970;
      *puVar11 = uVar50 | uVar24 + 1;
      uVar54 = (ulong)((uint)uVar54 & 3);
      *(bool *)((long)(puVar11 + 1) + uVar54) = uVar49 != 0;
    }
    if ((ulong *)*param_3 <= puVar59) break;
  }
  if ((ulong)(ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)uStack_60 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar59;
  while( true ) {
    bVar3 = (byte)puVar44[1];
    auVar98[8] = bVar3;
    auVar98._0_8_ = (byte *)((long)puVar44 + 9);
    auVar98._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)((long)puVar44 + 9);
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      if ((char)bVar2 < '\0') {
        uStack_70 = (ulong *)&UNK_00518448;
        auVar98 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar11,iVar30);
        if (auVar98._0_8_ == 0) goto code_r0x005013a0;
      }
      else {
        auVar98._8_4_ = iVar30;
        auVar98._0_8_ = (ushort *)((long)puVar44 + 10);
      }
    }
    puVar44 = auVar98._0_8_;
    if (auVar98._8_4_ != uVar31) break;
code_r0x005183c3:
    uVar12 = *puVar44;
    uVar49 = *puVar26;
    uVar58 = (uint)uVar49 & 3;
    bVar63 = (uVar49 & 4) == 0;
    puVar11 = puVar26 + 1;
    uVar24 = (uint)*puVar11;
    uVar32 = uVar24;
    if (bVar63) {
      uVar32 = uVar58;
    }
    uVar33 = *(uint *)((long)puVar26 + 0xc);
    if (bVar63) {
      uVar33 = 1;
    }
    if (uVar32 == uVar33) {
      iVar30 = uVar32 + 1;
      uStack_70 = (ulong *)&UNK_0051847b;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar26,(uVar49 & 4) == 0,uVar32,iVar30);
      puVar11 = (ulong *)(*puVar26 & 0xfffffffffffffff8);
      uVar58 = (uint)puVar26[1];
code_r0x00518404:
      *(int *)(puVar26 + 1) = iVar30;
    }
    else {
      if ((uVar49 & 4) != 0) {
        iVar30 = uVar24 + 1;
        puVar11 = (ulong *)(uVar49 & 0xfffffffffffffff8);
        uVar58 = uVar24;
        goto code_r0x00518404;
      }
      *puVar26 = (long)(uVar49 & 0xfffffffffffffff8) + (ulong)uVar58 + 1;
    }
    puVar11[(int)uVar58] = uVar12;
    puVar11 = puVar44 + 1;
    if ((ulong *)*param_3 <= puVar11) goto code_r0x0051864a;
  }
code_r0x00518608:
  puVar44 = puVar11;
  puVar11 = puVar44;
  if (puVar44 < (ulong *)*param_3) {
    uVar12 = (ulong)((uint)(byte)param_5[1] & (uint)(ushort)*puVar44 & 0xfffffff8);
    puVar26 = (ulong *)(*(ulong *)((long)param_5 + uVar12 * 2 + 0x40) ^ (ulong)(ushort)*puVar44);
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)param_5 + uVar12 * 2 + 0x38);
code_r0x00518636:
                    /* WARNING: Could not recover jumptable at 0x00518648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar44 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar44,param_3,puVar26,param_5,param_6);
    return puVar44;
  }
code_r0x0051864a:
  if ((ushort)*param_5 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*param_5);
    *puVar61 = *puVar61 | uVar52;
  }
  return puVar11;
  while( true ) {
    bVar3 = (byte)*puVar59;
    auVar95[8] = bVar3;
    auVar95._0_8_ = uVar54;
    auVar95._9_3_ = 0;
    puVar44 = (ulong *)((long)puVar59 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar44;
      auVar95._1_7_ = 0;
      auVar95[0] = bVar2;
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar95._8_4_ = iVar30;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_00516054;
        auVar95 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar59,iVar30);
        puVar44 = auVar95._0_8_;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      }
      else {
        puVar44 = (ulong *)((long)puVar59 + 2);
      }
    }
    puVar16 = auVar95._0_8_;
    if (auVar95._8_4_ != (int)puVar26) break;
code_r0x00515e9c:
    uVar49 = (ulong)(char)(byte)*puVar44;
    param_5 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar49 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
        if ((long)uVar54 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar54 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar54 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar54 < 0) {
                      puVar59 = (ulong *)((long)puVar44 + 10);
                      bVar3 = *(byte *)((long)puVar44 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar54 = uVar54 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar59 = (ulong *)((long)puVar44 + 9);
                    }
                  }
                  else {
                    puVar59 = puVar44 + 1;
                  }
                }
                else {
                  puVar59 = (ulong *)((long)puVar44 + 7);
                }
              }
              else {
                puVar59 = (ulong *)((long)puVar44 + 6);
              }
              puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
            }
            else {
              puVar59 = (ulong *)((long)puVar44 + 5);
            }
          }
          else {
            puVar59 = (ulong *)((long)puVar44 + 4);
          }
        }
        else {
          puVar59 = (ulong *)((long)puVar44 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar54);
      }
      else {
        puVar59 = (ulong *)((long)puVar44 + 2);
      }
      uVar49 = uVar49 & (ulong)puVar16;
      if ((uVar60 & 0x400) == 0) goto code_r0x00515eb6;
code_r0x00515f50:
      if ((uVar60 & 0x600) == 0x600) {
        if (((int)uVar49 < (int)uVar12) || ((int)(uint)uStack_70 < (int)uVar49))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00515f78;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar49 & 0xffffffff);
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
        param_5 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar59 = (ulong *)((long)puVar44 + 1);
      if ((uVar60 & 0x400) != 0) goto code_r0x00515f50;
code_r0x00515eb6:
      if ((uVar60 & 0x600) == 0x200) {
        uVar49 = uVar49 >> 1 ^ -(ulong)((uint)uVar49 & 1);
      }
    }
    uVar54 = *puVar11;
    bVar63 = (uVar54 & 4) != 0;
    uVar52 = (uint)puVar11[1];
    uVar24 = (uint)uVar54 & 3;
    if (bVar63) {
      uVar24 = uVar52;
    }
    uVar58 = *(uint *)((long)puVar11 + 0xc);
    if (!bVar63) {
      uVar58 = 1;
    }
    uVar32 = uVar24 + 1;
    if (uVar24 == uVar58) {
      puStack_80 = (ulong *)&UNK_00515fe6;
      _ZN6google8protobuf13RepeatedFieldIdE4GrowEbii(puVar11,(uVar54 & 4) == 0,uVar24,uVar32);
      puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      uVar50 = *puVar11 & 0xfffffffffffffff8;
      uVar52 = (uint)puVar11[1];
code_r0x00516010:
      *(uint *)(puVar11 + 1) = uVar32;
      uVar54 = (ulong)(int)uVar52;
      *(ulong *)(uVar50 + uVar54 * 8) = uVar49;
    }
    else {
      uVar50 = uVar54 & 0xfffffffffffffff8;
      if ((uVar54 & 4) != 0) goto code_r0x00516010;
      *puVar11 = uVar50 | uVar32;
      uVar54 = (ulong)((uint)uVar54 & 3);
      puVar11[uVar54 + 1] = uVar49;
    }
    if ((ulong *)*param_3 <= puVar59) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_60);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar59;
  while( true ) {
    bVar3 = (byte)*puVar59;
    auVar96[8] = bVar3;
    auVar96._0_8_ = uVar49;
    auVar96._9_3_ = 0;
    puVar44 = (ulong *)((long)puVar59 + 1);
    if ((char)bVar3 < '\0') {
      bVar2 = *(byte *)puVar44;
      auVar96._1_7_ = 0;
      auVar96[0] = bVar2;
      iVar30 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
      auVar96._8_4_ = iVar30;
      if ((char)bVar2 < '\0') {
        puStack_80 = (ulong *)&UNK_005164f4;
        auVar96 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(puVar59,iVar30);
        puVar44 = auVar96._0_8_;
        param_5 = uStack_60;
        param_6 = puStack_68;
        if (puVar44 == (ulong *)0x0) goto code_r0x005013a0;
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      }
      else {
        puVar44 = (ulong *)((long)puVar59 + 2);
      }
    }
    puVar16 = auVar96._0_8_;
    if (auVar96._8_4_ != (int)puVar26) break;
code_r0x0051633c:
    uVar49 = (ulong)(char)(byte)*puVar44;
    param_5 = uStack_60;
    param_6 = puStack_68;
    if ((long)uVar49 < 0) {
      puVar16 = (ulong *)((long)(char)*(byte *)((long)puVar44 + 1) << 7 | 0x7f);
      if ((long)puVar16 < 0) {
        uVar54 = (long)(char)*(byte *)((long)puVar44 + 2) << 0xe | 0x3fff;
        if ((long)uVar54 < 0) {
          puVar16 = (ulong *)((ulong)puVar16 &
                             ((long)(char)*(byte *)((long)puVar44 + 3) << 0x15 | 0x1fffffU));
          if ((long)puVar16 < 0) {
            uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 4) << 0x1c | 0xfffffffU);
            if ((long)uVar54 < 0) {
              puVar16 = (ulong *)((ulong)puVar16 &
                                 ((long)(char)*(byte *)((long)puVar44 + 5) << 0x23 | 0x7ffffffffU));
              if ((long)puVar16 < 0) {
                uVar54 = uVar54 & ((long)(char)*(byte *)((long)puVar44 + 6) << 0x2a | 0x3ffffffffffU
                                  );
                if ((long)uVar54 < 0) {
                  puVar16 = (ulong *)((ulong)puVar16 &
                                     ((long)(char)*(byte *)((long)puVar44 + 7) << 0x31 |
                                     0x1ffffffffffffU));
                  if ((long)puVar16 < 0) {
                    uVar54 = uVar54 & ((ulong)(byte)puVar44[1] << 0x38 | 0xffffffffffffff);
                    if ((long)uVar54 < 0) {
                      puVar59 = (ulong *)((long)puVar44 + 10);
                      bVar3 = *(byte *)((long)puVar44 + 9);
                      if (bVar3 != 1) {
                        if ((char)bVar3 < '\0') goto code_r0x005013a0;
                        if ((bVar3 & 1) == 0) {
                          uVar54 = uVar54 ^ 0x8000000000000000;
                        }
                      }
                    }
                    else {
                      puVar59 = (ulong *)((long)puVar44 + 9);
                    }
                  }
                  else {
                    puVar59 = puVar44 + 1;
                  }
                }
                else {
                  puVar59 = (ulong *)((long)puVar44 + 7);
                }
              }
              else {
                puVar59 = (ulong *)((long)puVar44 + 6);
              }
              puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
            }
            else {
              puVar59 = (ulong *)((long)puVar44 + 5);
            }
          }
          else {
            puVar59 = (ulong *)((long)puVar44 + 4);
          }
        }
        else {
          puVar59 = (ulong *)((long)puVar44 + 3);
        }
        puVar16 = (ulong *)((ulong)puVar16 & uVar54);
      }
      else {
        puVar59 = (ulong *)((long)puVar44 + 2);
      }
      uVar49 = uVar49 & (ulong)puVar16;
      if ((uVar60 & 0x400) == 0) goto code_r0x00516356;
code_r0x005163f0:
      uVar52 = (uint)uVar49;
      if ((uVar60 & 0x600) == 0x600) {
        if (((int)uVar52 < (int)uVar12) || ((int)(uint)uStack_70 < (int)uVar52))
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
      else {
        puStack_80 = (ulong *)&UNK_00516418;
        puVar16 = (ulong *)_ZN6google8protobuf8internal12ValidateEnumEiPKj(uVar49 & 0xffffffff);
        puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
        param_5 = uStack_60;
        param_6 = puStack_68;
        if ((char)puVar16 == '\0')
        goto 
        _ZN6google8protobuf8internal8TcParser21MpUnknownEnumFallbackEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
        ;
      }
    }
    else {
      puVar59 = (ulong *)((long)puVar44 + 1);
      if ((uVar60 & 0x400) != 0) goto code_r0x005163f0;
code_r0x00516356:
      uVar52 = (uint)uVar49;
      if ((uVar60 & 0x600) == 0x200) {
        uVar52 = uVar52 >> 1 ^ -(uVar52 & 1);
      }
    }
    uVar49 = *puVar11;
    bVar63 = (uVar49 & 4) != 0;
    uVar24 = (uint)puVar11[1];
    uVar58 = (uint)uVar49 & 3;
    if (bVar63) {
      uVar58 = uVar24;
    }
    uVar32 = *(uint *)((long)puVar11 + 0xc);
    if (!bVar63) {
      uVar32 = 2;
    }
    uVar33 = uVar58 + 1;
    if (uVar58 == uVar32) {
      puStack_80 = (ulong *)&UNK_00516486;
      _ZN6google8protobuf13RepeatedFieldIfE4GrowEbii(puVar11,(uVar49 & 4) == 0,uVar58,uVar33);
      puVar26 = (ulong *)CONCAT44(uStack_4c,uVar31);
      uVar54 = *puVar11 & 0xfffffffffffffff8;
      uVar24 = (uint)puVar11[1];
code_r0x005164b0:
      *(uint *)(puVar11 + 1) = uVar33;
      uVar49 = (ulong)(int)uVar24;
      *(uint *)(uVar54 + uVar49 * 4) = uVar52;
    }
    else {
      uVar54 = uVar49 & 0xfffffffffffffff8;
      if ((uVar49 & 4) != 0) goto code_r0x005164b0;
      *puVar11 = uVar54 | uVar33;
      uVar49 = (ulong)((uint)uVar49 & 3);
      *(uint *)((long)puVar11 + uVar49 * 4 + 8) = uVar52;
    }
    if ((ulong *)*param_3 <= puVar59) break;
  }
  if ((ulong)(ushort)*uStack_60 != 0) {
    puVar61 = (uint *)((long)param_1 + (ulong)(ushort)*uStack_60);
    *puVar61 = *puVar61 | (uint)puStack_68;
  }
  return puVar59;
}


