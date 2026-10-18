// Function: _ZN11incremental17IncrementalServer5ServeEv
// Address: 003654a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN11incremental17IncrementalServer5ServeEv(undefined4 *param_1)

{
  undefined2 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined *puVar21;
  int extraout_EDX;
  ulong extraout_RDX;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined4 uVar27;
  undefined *puVar28;
  ulong unaff_R12;
  ushort uVar29;
  undefined8 *unaff_R13;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  ulong uStack_260;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  int iStack_214;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined4 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  byte bStack_89;
  uint uStack_88;
  short sStack_82;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_c0 = &UNK_003654cb;
  uVar9 = _Z8SendOkayN7android4base11borrowed_fdE(*param_1);
  uVar23 = (ulong)uVar9;
  if ((byte)uVar9 != 0) {
    auStack_68 = (undefined1  [16])0x0;
    auStack_78 = (undefined1  [16])0x0;
    uStack_58 = 0x3f800000;
    bVar5 = false;
    uStack_a0 = 0;
    uStack_a8 = 0;
    iStack_90 = 0;
    iStack_94 = 0;
    uVar23 = 0;
    bStack_89 = (byte)uVar9;
    do {
      uVar9 = (uint)CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
      if ((uVar23 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
          for (lVar13 = *(long *)(param_1 + 2); lVar13 != *(long *)(param_1 + 4);
              lVar13 = lVar13 + 0x80) {
            if (*(int *)(lVar13 + 0x18) != *(int *)(lVar13 + 8)) {
              uVar9 = 0;
              goto code_r0x0036563a;
            }
          }
          puStack_c0 = &UNK_003655d5;
          func_0x0099bd40(&UNK_0016eacb,0x32,1,_stderr);
          puVar1 = *(undefined2 **)(param_1 + 0x24);
          *puVar1 = 0xffff;
          *(undefined8 *)(puVar1 + 1) = 0;
          *(undefined2 **)(param_1 + 0x24) = puVar1 + 5;
          lVar13 = (long)(puVar1 + 5) - (long)(*(uint **)(param_1 + 0x1e) + 1);
          if (lVar13 != 0) {
            uVar20 = (uint)lVar13;
            **(uint **)(param_1 + 0x1e) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            uVar22 = lVar13 + 4;
            puStack_c0 = &UNK_0036561a;
            cVar8 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                              (*param_1,*(undefined8 *)(param_1 + 0x1e),uVar22);
            if (cVar8 == '\0') {
              puStack_c0 = &UNK_00365aea;
              func_0x0099bd30(_stderr,&UNK_0016793e,uVar22 & 0xffffffff);
            }
            *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar22;
            *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
          }
          goto code_r0x0036563a;
        }
        uVar23 = 0;
        uVar9 = 0;
      }
      else {
code_r0x0036563a:
        if (*(long *)(param_1 + 0x18) == 0) {
          uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
          lVar13 = *(long *)(param_1 + 0x24) - (long)(*(uint **)(param_1 + 0x1e) + 1);
          if (lVar13 != 0) {
            uVar20 = (uint)lVar13;
            **(uint **)(param_1 + 0x1e) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            uVar22 = lVar13 + 4;
            puStack_c0 = &UNK_00365680;
            cVar8 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                              (*param_1,*(undefined8 *)(param_1 + 0x1e),uVar22);
            if (cVar8 == '\0') {
              puStack_c0 = &UNK_00365aaa;
              func_0x0099bd30(_stderr,&UNK_0016793e,uVar22 & 0xffffffff);
            }
            *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar22;
            *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
          }
        }
        else {
          uVar23 = 0;
        }
      }
      uStack_50 = (undefined1 *)0x0;
      uStack_80 = 8;
      puVar25 = &uStack_50;
      puStack_c0 = &UNK_003656c4;
      cVar8 = _ZN11incremental17IncrementalServer13SkipToRequestEPvPmb
                        (param_1,puVar25,&uStack_80,uVar23 & 0xff);
      uVar24 = SUB84(puVar25,0);
      unaff_R15 = CONCAT71((int7)(uVar23 >> 8),1);
      if (cVar8 == '\0') {
        unaff_R13 = (undefined8 *)0x3;
joined_r0x003656fc:
        uVar23 = 0;
      }
      else {
        if (uStack_80 < 8) {
          unaff_R13 = (undefined8 *)0x0;
          unaff_R15 = 0;
          goto joined_r0x003656fc;
        }
        unaff_R13 = (undefined8 *)((ulong)uStack_50 >> 8 & 0xff);
        uVar23 = (ulong)(ushort)((short)uStack_50 << 8) |
                 (ulong)(ushort)(uStack_50._2_2_ >> 8 | uStack_50._2_2_ << 8) << 0x10 |
                 (ulong)(uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
                         (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18) << 0x20;
      }
      uStack_88 = uVar9;
      if (!bVar5) {
        puStack_c0 = &UNK_00365703;
        uStack_a8 = _ZNSt3__16chrono12steady_clock3nowEv();
        uStack_a0 = uStack_a8 >> 8;
      }
      if ((char)unaff_R15 == '\0') goto code_r0x00365559;
      uVar9 = (uint)unaff_R13 | (uint)uVar23;
      unaff_R13 = (undefined8 *)(ulong)uVar9;
      unaff_R12 = uVar23 >> 0x20;
      sStack_82 = (short)(uVar23 >> 0x10);
      uVar29 = (ushort)uVar9;
      iVar11 = (int)(uVar23 >> 0x20);
      if (3 < uVar29) {
        puStack_c0 = &UNK_00365a6b;
        func_0x0099bd30(_stderr,&UNK_0017ec5f,(int)(short)uVar29,(int)sStack_82,unaff_R12);
        goto code_r0x00365559;
      }
      puVar21 = &UNK_00190094 + *(int *)(&UNK_00190094 + ((ulong)unaff_R13 & 0xffff) * 4);
      switch((ulong)unaff_R13 & 0xffff) {
      case 0:
        puStack_c0 = &UNK_00365559;
        _ZN11incremental17IncrementalServer15ServingCompleteENSt3__18optionalINS1_6chrono10time_pointINS3_12steady_clockENS3_8durationIxNS1_5ratioILl1ELl1000000000EEEEEEEEEii
                  (param_1,uStack_a8 & 0xff | uStack_a0 << 8,1,iStack_94);
        break;
      case 1:
        iStack_94 = iStack_94 + 1;
        if ((((sStack_82 < 0) ||
             (lVar13 = *(long *)(param_1 + 2),
             (short)((uint)(param_1[4] - (int)lVar13) >> 7) <= sStack_82)) || ((long)uVar23 < 0)) ||
           (uVar23 = (ulong)(((uint)(uVar23 >> 0x10) & 0x7fff) << 7),
           *(int *)(lVar13 + 8 + uVar23) <= iVar11)) {
          puStack_c0 = &UNK_00365a44;
          func_0x0099bd30(_stderr,&UNK_0017b95d,(int)sStack_82,unaff_R12);
          break;
        }
        if (((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) {
          lVar13 = lVar13 + uVar23;
          lVar26 = *(long *)(lVar13 + 0x58);
          unaff_R13 = *(undefined8 **)(lVar13 + 0x60);
          puStack_c0 = &UNK_003657ce;
          func_0x0099c1c0(lVar26,unaff_R12,(long)unaff_R13 - lVar26 >> 2);
          if (((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) {
            puStack_c0 = &UNK_00365b9b;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar8 != '\0') {
              puStack_c0 = &UNK_00365ba8;
              puStack_b0 = (undefined4 *)func_0x0099bce0();
              uStack_98 = *puStack_b0;
              puStack_c0 = &UNK_00365bdd;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (&uStack_80,&UNK_0016790b,0x26f,1,0,0xffffffff);
              puStack_c0 = &UNK_00365be5;
              unaff_R13 = (undefined8 *)_ZN7android4base10LogMessage6streamEv(&uStack_80);
              puStack_c0 = &UNK_00365c29;
              _ZN7android4base12StringPrintfEPKcz(&uStack_50,&UNK_0018abfa,(int)sStack_82,unaff_R12)
              ;
              puStack_c0 = &UNK_00365c34;
              func_0x0032e5a0(unaff_R13,&uStack_50);
              if (((ulong)uStack_50 & 1) != 0) {
                puStack_c0 = &UNK_00365c4b;
                _ZdaPvSt11align_val_t(uStack_40,(ulong)uStack_50 & 0xfffffffffffffffe);
              }
              puStack_c0 = &UNK_00365c54;
              _ZN7android4base10LogMessageD2Ev(&uStack_80);
              *puStack_b0 = uStack_98;
            }
          }
        }
        puStack_c0 = &UNK_0036580a;
        iVar10 = _ZN11incremental17IncrementalServer13SendDataBlockEsib
                           (param_1,(int)sStack_82,unaff_R12,1);
        uVar23 = (ulong)uStack_88;
        if (iVar10 == 0) {
          lVar13 = (long)sStack_82 * 0x80 + *(long *)(param_1 + 2);
          uVar22 = *(ulong *)(param_1 + 0x16);
          if (uVar22 == 0) {
            puStack_c0 = &UNK_00365991;
            func_0x00367c50(param_1 + 0xe);
            uVar22 = *(ulong *)(param_1 + 0x16);
          }
          lVar26 = *(long *)(param_1 + 0x10);
          lVar2 = *(long *)(lVar26 + (uVar22 / 0xaa) * 8);
          lVar14 = 0;
          if (lVar26 != *(long *)(param_1 + 0x12)) {
            lVar14 = lVar2 + (uVar22 % 0xaa) * 0x18;
          }
          if (lVar14 == lVar2) {
            lVar14 = *(long *)(lVar26 + -8 + (uVar22 / 0xaa) * 8) + 0xff0;
          }
          iStack_90 = iStack_90 + 1;
          *(long *)(lVar14 + -0x18) = lVar13;
          *(int *)(lVar14 + -0x10) = iVar11 + 1;
          iVar10 = *(int *)(lVar13 + 8);
          iVar12 = iVar11 + 8;
          if (iVar10 <= iVar11 + 8) {
            iVar12 = iVar10;
          }
          *(int *)(lVar14 + -0xc) = iVar12;
          *(undefined4 *)(lVar14 + -8) = 0;
          *(long *)(param_1 + 0x16) = *(long *)(param_1 + 0x16) + -1;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        }
        else if (iVar10 == 2) {
          puVar21 = &UNK_0017b999;
          goto code_r0x00365ac4;
        }
        goto code_r0x0036555d;
      case 2:
        if (-1 < sStack_82) {
          uStack_50 = auStack_78;
          puStack_c0 = &UNK_0036589e;
          _ZZNSt3__112__hash_tableIsNS_4hashIsEENS_8equal_toIsEENS_9allocatorIsEEE16__emplace_uniqueB8nn220000IJRKsEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIsPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                    (&uStack_50,&sStack_82);
          uVar23 = (ulong)uStack_88;
          if ((extraout_RDX & 1) == 0) {
            unaff_R12 = (ulong)(uint)(int)sStack_82;
            puVar21 = &UNK_001788a3;
code_r0x00365ac4:
            puStack_c0 = &UNK_00365acb;
            func_0x0099bd30(_stderr,puVar21,unaff_R12);
          }
          else {
            if (((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) {
              puStack_c0 = &UNK_00365afb;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar8 != '\0') {
                puStack_c0 = &UNK_00365b08;
                puVar15 = (undefined4 *)func_0x0099bce0();
                uVar24 = *puVar15;
                puStack_c0 = &UNK_00365b34;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_80,&UNK_0016790b,0x292,1,0);
                puStack_c0 = &UNK_00365b3c;
                uVar18 = _ZN7android4base10LogMessage6streamEv(&uStack_80);
                unaff_R13 = &uStack_50;
                puStack_c0 = &UNK_00365b58;
                _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_00173e49,(int)sStack_82);
                puStack_c0 = &UNK_00365b63;
                func_0x0032e5a0(uVar18,unaff_R13);
                if (((ulong)uStack_50 & 1) != 0) {
                  puStack_c0 = &UNK_00365b7a;
                  _ZdaPvSt11align_val_t(uStack_40,(ulong)uStack_50 & 0xfffffffffffffffe);
                }
                puStack_c0 = &UNK_00365b83;
                _ZN7android4base10LogMessageD2Ev(&uStack_80);
                *puVar15 = uVar24;
                uVar23 = (ulong)uStack_88;
              }
            }
            lVar13 = *(long *)(param_1 + 0x10);
            uVar22 = 0;
            if (*(long *)(param_1 + 0x12) != lVar13) {
              uVar22 = (*(long *)(param_1 + 0x12) - lVar13 >> 3) * 0xaa - 1;
            }
            lVar26 = (long)sStack_82 * 0x80 + *(long *)(param_1 + 2);
            uVar17 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x16);
            if (uVar22 == uVar17) {
              puStack_c0 = &UNK_00365914;
              func_0x003683b0(param_1 + 0xe);
              lVar13 = *(long *)(param_1 + 0x10);
              uVar17 = *(long *)(param_1 + 0x16) + *(long *)(param_1 + 0x18);
            }
            lVar13 = *(long *)(lVar13 + (uVar17 / 0xaa) * 8);
            uVar17 = uVar17 % 0xaa;
            iVar11 = *(int *)(lVar26 + 8);
            *(long *)(lVar13 + uVar17 * 0x18) = lVar26;
            *(undefined4 *)(lVar13 + 8 + uVar17 * 0x18) = 0;
            iVar10 = *(int *)(lVar26 + 8);
            if (iVar11 < *(int *)(lVar26 + 8)) {
              iVar10 = iVar11;
            }
            *(int *)(lVar13 + 0xc + uVar17 * 0x18) = iVar10;
            *(undefined4 *)(lVar13 + 0x10 + uVar17 * 0x18) = 0;
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          }
          goto code_r0x0036555d;
        }
        puStack_c0 = &UNK_00365a8b;
        func_0x0099bd30(_stderr,&UNK_001802e7,(int)sStack_82);
        break;
      case 3:
        goto code_r0x00365c68;
      }
code_r0x00365559:
      uVar23 = (ulong)uStack_88;
code_r0x0036555d:
      puStack_c0 = &UNK_00365565;
      _ZN11incremental17IncrementalServer14RunPrefetchingEv(param_1);
      bVar5 = true;
    } while( true );
  }
  puVar28 = &UNK_00167958;
  uVar24 = 0x1b;
  puStack_c0 = &UNK_00365cfd;
  puVar21 = _stderr;
  func_0x0099bd40(&UNK_00167958,0x1b,1);
code_r0x00365cba:
  uVar27 = SUB84(puVar28,0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar23;
  }
  puStack_c0 = &UNK_00365d04;
  func_0x0099bd00();
  lStack_f0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_e8 = uVar23;
  uStack_e0 = unaff_R12;
  puStack_d8 = unaff_R13;
  puStack_d0 = param_1;
  uStack_c8 = unaff_R15;
  puStack_c0 = &stack0xfffffffffffffff8;
  piVar16 = (int *)func_0x0099bce0();
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  func_0x00366780(&uStack_210,(long)extraout_EDX);
  iStack_214 = 0;
  if (extraout_EDX < 1) {
    iVar11 = *piVar16;
  }
  else {
    uStack_260 = (long)&uStack_190 + 1;
    do {
      uVar23 = *(ulong *)(puVar21 + (long)iStack_214 * 8);
      uStack_230 = 0;
      lStack_228 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      uStack_120 = 0;
      lStack_118 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      lStack_160 = 0;
      uStack_158 = 0;
      lStack_170 = 0;
      lStack_168 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_220 = uVar23;
      iVar11 = func_0x0099bf30(1,uVar23,&uStack_190);
      if (iVar11 != 0) goto code_r0x00366732;
      while (iVar11 = func_0x0099bf40(uVar23,0), iVar11 == -1) {
        if (*piVar16 != 4) goto code_r0x00366721;
      }
      if (iVar11 < 0) {
code_r0x00366721:
        puVar21 = &UNK_0017ec7a;
        do {
          _Z10error_exitPKcz(puVar21,uVar23);
code_r0x00366732:
          puVar21 = &UNK_00189561;
        } while( true );
      }
      uVar9 = func_0x0099bf10(iVar11,1);
      if ((uVar9 & 0x80000001) == 0) {
        func_0x0099bf10(iVar11,2,uVar9 | 1);
      }
      lVar13 = lStack_160;
      uVar23 = uStack_220;
      uStack_230 = CONCAT44(uStack_230._4_4_,iVar11);
      lStack_228 = lStack_160;
      uStack_240 = 0;
      uStack_238 = 0;
      uVar22 = func_0x0099bcf0(uStack_220);
      if (0xfffffffffffffff6 < uVar22) {
        uVar22 = func_0x0032e8f0();
code_r0x00366740:
        if ((uStack_190 & 1) != 0) {
          uStack_260 = uStack_180;
        }
        _Z10error_exitPKcz(&UNK_0015aff2,uStack_260,uVar23,uVar22);
        goto code_r0x00366772;
      }
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      if (uVar22 < 0x17) {
        uStack_190 = (ulong)(byte)((char)uVar22 * '\x02');
        uVar17 = (long)&uStack_190 + 1;
      }
      else {
        lVar26 = (uVar22 | 7) + 1;
        if ((uVar22 | 7) == 0x17) {
          lVar26 = 0x1a;
        }
        uVar17 = _Znwm(lVar26);
        uStack_190 = lVar26 + 1;
        uStack_188 = uVar22;
        uStack_180 = uVar17;
      }
      func_0x0099bda0(uVar17,uVar23,uVar22);
      *(undefined1 *)(uVar17 + uVar22) = 0;
      lVar26 = (uStack_190 & 0xfffffffffffffffe) - 1;
      if ((uStack_190 & 1) == 0) {
        lVar26 = 0x16;
      }
      uVar22 = uStack_188;
      if ((uStack_190 & 1) == 0) {
        uVar22 = (ulong)((uint)(uStack_190 >> 1) & 0x7f);
      }
      if (lVar26 - uVar22 < 6) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (&uStack_190,lVar26,(uVar22 - lVar26) + 6,uVar22,uVar22,0,6,&UNK_0015df2a);
      }
      else {
        uVar17 = (long)&uStack_190 + 1;
        if ((uStack_190 & 1) != 0) {
          uVar17 = uStack_180;
        }
        *(undefined2 *)(uVar17 + 4 + uVar22) = 0x6769;
        *(undefined4 *)(uVar17 + uVar22) = 0x7364692e;
        uVar22 = uVar22 + 6;
        uVar7 = uVar22;
        if ((uStack_190 & 1) == 0) {
          uStack_190 = CONCAT71(uStack_190._1_7_,(char)uVar22 * '\x02');
          uVar7 = uStack_188;
        }
        uStack_188 = uVar7;
        *(undefined1 *)(uVar17 + uVar22) = 0;
      }
      uVar22 = (long)&uStack_190 + 1;
      if ((uStack_190 & 1) != 0) {
        uVar22 = uStack_180;
      }
      do {
        iVar11 = func_0x0099bf40(uVar22,0);
        if (iVar11 != -1) {
          if (-1 < iVar11) {
            uVar9 = func_0x0099bf10(iVar11,1);
            if ((uVar9 & 0x80000001) == 0) {
              func_0x0099bf10(iVar11,2,uVar9 | 1);
            }
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            lStack_1c0 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            _ZN11incremental19skip_id_sig_headersEN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
                      (&uStack_1b0,iVar11,&uStack_1d0);
            uVar17 = uStack_1a8;
            uVar18 = uStack_1b0;
            if ((uStack_1a0 & 1) == 0) {
              if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
                 (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
                iVar10 = *piVar16;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_1d8,&UNK_0016790b,0x2be,1,0,0xffffffff);
                uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_1d8);
                lVar13 = (long)&uStack_1d0 + 1;
                if ((uStack_1d0 & 1) != 0) {
                  lVar13 = lStack_1c0;
                }
                _ZN7android4base12StringPrintfEPKcz(&bStack_1f0,&UNK_00173e73,uVar23,lVar13);
                func_0x0032e5a0(uVar18,&bStack_1f0);
                if ((bStack_1f0 & 1) != 0) {
                  _ZdaPvSt11align_val_t
                            (uStack_1e0,CONCAT71(uStack_1ef,bStack_1f0) & 0xfffffffffffffffe);
                }
                _ZN7android4base10LogMessageD2Ev(auStack_1d8);
                *piVar16 = iVar10;
              }
              uStack_240 = CONCAT44(uStack_240._4_4_,0xffffffff);
              uVar18 = 0;
            }
            else {
              uVar22 = _ZN11incremental25verity_tree_size_for_fileEl(lVar13);
              uVar23 = uVar17;
              if (uVar17 != uVar22) goto code_r0x00366740;
              iVar10 = (int)(lVar13 + 0xfffU >> 0xc);
              iVar12 = iVar10 + 0x7f;
              iVar10 = iVar10 + 0xfe;
              if (-1 < iVar12) {
                iVar10 = iVar12;
              }
              if (((adb_trace_mask._1_1_ & 0x20) == 0) || (1 < (int)adb_trace_severity._52_4_)) {
                iVar12 = *piVar16;
              }
              else {
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                iVar12 = *piVar16;
                if (cVar8 != '\0') {
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (auStack_1d8,&UNK_0016790b,0x2cb,1,0,0xffffffff);
                  uVar19 = _ZN7android4base10LogMessage6streamEv(auStack_1d8);
                  uVar23 = (long)&uStack_190 + 1;
                  if ((uStack_190 & 1) != 0) {
                    uVar23 = uStack_180;
                  }
                  _ZN7android4base12StringPrintfEPKcz
                            (&bStack_1f0,&UNK_001576ed,uVar23,uVar17 & 0xffffffff,
                             uVar17 + 0xfff >> 0xc,iVar10 >> 7);
                  func_0x0032e5a0(uVar19,&bStack_1f0);
                  if ((bStack_1f0 & 1) != 0) {
                    _ZdaPvSt11align_val_t
                              (uStack_1e0,CONCAT71(uStack_1ef,bStack_1f0) & 0xfffffffffffffffe);
                  }
                  _ZN7android4base10LogMessageD2Ev(auStack_1d8);
                }
              }
              uStack_240 = CONCAT44(uStack_240._4_4_,iVar11);
              *piVar16 = iVar12;
              iVar11 = -1;
            }
            uStack_238 = uVar18;
            if ((uStack_1d0 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
            }
            iVar10 = *piVar16;
            if (iVar11 != -1) {
              func_0x0099bd10(iVar11);
            }
            goto code_r0x003661f0;
          }
          break;
        }
      } while (*piVar16 == 4);
      if (((adb_trace_mask._1_1_ & 0x20) == 0) || (1 < (int)adb_trace_severity._52_4_)) {
        iVar10 = *piVar16;
      }
      else {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        iVar10 = *piVar16;
        if (cVar8 != '\0') {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_1b0,&UNK_0016790b,0x2b6,1,0,0xffffffff);
          uVar18 = _ZN7android4base10LogMessage6streamEv(&uStack_1b0);
          uVar22 = (long)&uStack_190 + 1;
          if ((uStack_190 & 1) != 0) {
            uVar22 = uStack_180;
          }
          _ZN7android4base12StringPrintfEPKcz(&uStack_1d0,&UNK_00167974,uVar23,uVar22);
          func_0x0032e5a0(uVar18,&uStack_1d0);
          if ((uStack_1d0 & 1) != 0) {
            _ZdaPvSt11align_val_t(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&uStack_1b0);
        }
      }
      uStack_240 = CONCAT44(uStack_240._4_4_,0xffffffff);
      uStack_238 = 0;
code_r0x003661f0:
      *piVar16 = iVar10;
      if ((uStack_190 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_180,uStack_190 & 0xfffffffffffffffe);
      }
      uVar23 = uStack_208;
      if (uStack_208 < uStack_200) {
        uVar6 = (int)uStack_230;
        uStack_230 = CONCAT44(uStack_230._4_4_,0xffffffff);
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar6);
        uVar6 = (int)uStack_240;
        uStack_240 = CONCAT44(uStack_240._4_4_,0xffffffff);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
        _ZN11incremental4FileC2EPKcslN7android4base14unique_fd_implINS4_13DefaultCloserEEElS7_
                  (uStack_208,uStack_220,(int)(short)iStack_214,lStack_228,&uStack_190,uStack_238,
                   &uStack_1d0);
        iVar11 = *piVar16;
        if ((int)uStack_1d0 != -1) {
          func_0x0099bd10();
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0xffffffff);
        *piVar16 = iVar11;
        if ((int)uStack_190 != -1) {
          func_0x0099bd10();
        }
        *piVar16 = iVar11;
        uStack_208 = uVar23 + 0x80;
      }
      else {
        uStack_208 = _ZNSt3__16vectorIN11incremental4FileENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPKcRiRlN7android4base14unique_fd_implINSD_13DefaultCloserEEESB_SG_EEEPS2_DpOT_
                               (&uStack_210,&uStack_220,&iStack_214,&lStack_228,&uStack_230,
                                &uStack_238,&uStack_240);
      }
      iVar11 = *piVar16;
      if ((int)uStack_240 != -1) {
        func_0x0099bd10();
      }
      *piVar16 = iVar11;
      if ((int)uStack_230 != -1) {
        func_0x0099bd10();
      }
      *piVar16 = iVar11;
      iStack_214 = iStack_214 + 1;
    } while (iStack_214 < extraout_EDX);
  }
  uStack_178 = uStack_200;
  uStack_180 = uStack_208;
  uStack_188 = uStack_210;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_190 = CONCAT44(uVar24,uVar27);
  *piVar16 = iVar11;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_170 = _Znwm(0x20000);
  lStack_160 = lStack_170 + 0x20000;
  lStack_168 = lStack_170;
  lVar13 = _Znwm(0x21000);
  func_0x0099bdb0(lVar13,0,0x21000);
  lStack_100 = lVar13 + 4;
  lStack_118 = lVar13;
  lStack_110 = lVar13 + 0x21000;
  lStack_108 = lVar13 + 0x21000;
  func_0x0099bee0(&UNK_0015b03e);
  func_0x0099c1d0(_stdin);
  func_0x0099c1d0(_stdout);
  uVar9 = _ZN11incremental17IncrementalServer5ServeEv(&uStack_190);
  _ZN11incremental17IncrementalServerD2Ev(&uStack_190);
  uVar22 = uStack_210;
  uVar23 = uStack_208;
  if (uStack_210 != 0) {
    while (uVar22 != uVar23) {
      _ZN11incremental4FileD2Ev(uVar23 - 0x80);
      uVar23 = uVar23 - 0x80;
    }
    uStack_208 = uVar22;
    _ZdaPvSt11align_val_t(uStack_210,uStack_200 - uStack_210);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f0) {
    return (ulong)uVar9;
  }
code_r0x00366772:
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  uVar23 = (*pcVar3)();
  return uVar23;
code_r0x00365c68:
  puVar25 = (undefined8 *)auStack_68._0_8_;
  while (puVar25 != (undefined8 *)0x0) {
    puVar25 = (undefined8 *)*puVar25;
    uVar24 = 0x18;
    puStack_c0 = &UNK_00365c8d;
    _ZdaPvSt11align_val_t();
  }
  puVar28 = (undefined *)auStack_78._0_8_;
  uVar18 = auStack_78._8_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auStack_78._8_8_;
  auStack_78 = auVar4 << 0x40;
  uVar23 = (ulong)bStack_89;
  if (puVar28 != (undefined *)0x0) {
    uVar24 = (undefined4)(uVar18 << 3);
    puStack_c0 = &UNK_00365cba;
    _ZdaPvSt11align_val_t();
  }
  goto code_r0x00365cba;
}


