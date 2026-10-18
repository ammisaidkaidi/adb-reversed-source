// Function: _ZN11incremental5serveEiiiPPKc
// Address: 00365d10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN11incremental5serveEiiiPPKc(undefined4 param_1,undefined4 param_2,int param_3,long param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  long in_FS_OFFSET;
  ulong uStack_1a8;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  int iStack_15c;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  byte bStack_138;
  undefined7 uStack_137;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = (int *)func_0x0099bce0();
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  func_0x00366780(&uStack_158,(long)param_3);
  iStack_15c = 0;
  if (param_3 < 1) {
    iVar5 = *piVar8;
  }
  else {
    uStack_1a8 = (long)&uStack_d8 + 1;
    do {
      uVar14 = *(ulong *)(param_4 + (long)iStack_15c * 8);
      uStack_178 = 0;
      lStack_170 = 0;
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_68 = 0;
      lStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      lStack_a8 = 0;
      uStack_a0 = 0;
      lStack_b8 = 0;
      lStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_168 = uVar14;
      iVar5 = func_0x0099bf30(1,uVar14,&uStack_d8);
      if (iVar5 != 0) goto code_r0x00366732;
      while (iVar5 = func_0x0099bf40(uVar14,0), iVar5 == -1) {
        if (*piVar8 != 4) goto code_r0x00366721;
      }
      if (iVar5 < 0) {
code_r0x00366721:
        puVar16 = &UNK_0017ec7a;
        do {
          _Z10error_exitPKcz(puVar16,uVar14);
code_r0x00366732:
          puVar16 = &UNK_00189561;
        } while( true );
      }
      uVar6 = func_0x0099bf10(iVar5,1);
      if ((uVar6 & 0x80000001) == 0) {
        func_0x0099bf10(iVar5,2,uVar6 | 1);
      }
      lVar13 = lStack_a8;
      uVar14 = uStack_168;
      uStack_178 = CONCAT44(uStack_178._4_4_,iVar5);
      lStack_170 = lStack_a8;
      uStack_188 = 0;
      uStack_180 = 0;
      uVar9 = func_0x0099bcf0(uStack_168);
      if (0xfffffffffffffff6 < uVar9) {
        uVar9 = func_0x0032e8f0();
code_r0x00366740:
        if ((uStack_d8 & 1) != 0) {
          uStack_1a8 = uStack_c8;
        }
        _Z10error_exitPKcz(&UNK_0015aff2,uStack_1a8,uVar14,uVar9);
        goto code_r0x00366772;
      }
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      if (uVar9 < 0x17) {
        uStack_d8 = (ulong)(byte)((char)uVar9 * '\x02');
        uVar10 = (long)&uStack_d8 + 1;
      }
      else {
        lVar15 = (uVar9 | 7) + 1;
        if ((uVar9 | 7) == 0x17) {
          lVar15 = 0x1a;
        }
        uVar10 = _Znwm(lVar15);
        uStack_d8 = lVar15 + 1;
        uStack_d0 = uVar9;
        uStack_c8 = uVar10;
      }
      func_0x0099bda0(uVar10,uVar14,uVar9);
      *(undefined1 *)(uVar10 + uVar9) = 0;
      lVar15 = (uStack_d8 & 0xfffffffffffffffe) - 1;
      if ((uStack_d8 & 1) == 0) {
        lVar15 = 0x16;
      }
      uVar9 = uStack_d0;
      if ((uStack_d8 & 1) == 0) {
        uVar9 = (ulong)((uint)(uStack_d8 >> 1) & 0x7f);
      }
      if (lVar15 - uVar9 < 6) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (&uStack_d8,lVar15,(uVar9 - lVar15) + 6,uVar9,uVar9,0,6,&UNK_0015df2a);
      }
      else {
        uVar10 = (long)&uStack_d8 + 1;
        if ((uStack_d8 & 1) != 0) {
          uVar10 = uStack_c8;
        }
        *(undefined2 *)(uVar10 + 4 + uVar9) = 0x6769;
        *(undefined4 *)(uVar10 + uVar9) = 0x7364692e;
        uVar9 = uVar9 + 6;
        uVar3 = uVar9;
        if ((uStack_d8 & 1) == 0) {
          uStack_d8 = CONCAT71(uStack_d8._1_7_,(char)uVar9 * '\x02');
          uVar3 = uStack_d0;
        }
        uStack_d0 = uVar3;
        *(undefined1 *)(uVar10 + uVar9) = 0;
      }
      uVar9 = (long)&uStack_d8 + 1;
      if ((uStack_d8 & 1) != 0) {
        uVar9 = uStack_c8;
      }
      do {
        iVar5 = func_0x0099bf40(uVar9,0);
        if (iVar5 != -1) {
          if (-1 < iVar5) {
            uVar6 = func_0x0099bf10(iVar5,1);
            if ((uVar6 & 0x80000001) == 0) {
              func_0x0099bf10(iVar5,2,uVar6 | 1);
            }
            uStack_118 = 0;
            uStack_110 = 0;
            lStack_108 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            _ZN11incremental19skip_id_sig_headersEN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
                      (&uStack_f8,iVar5,&uStack_118);
            uVar10 = uStack_f0;
            uVar11 = uStack_f8;
            if ((uStack_e8 & 1) == 0) {
              if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
                 (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
                iVar17 = *piVar8;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_120,&UNK_0016790b,0x2be,1,0,0xffffffff);
                uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_120);
                lVar13 = (long)&uStack_118 + 1;
                if ((uStack_118 & 1) != 0) {
                  lVar13 = lStack_108;
                }
                _ZN7android4base12StringPrintfEPKcz(&bStack_138,&UNK_00173e73,uVar14,lVar13);
                func_0x0032e5a0(uVar11,&bStack_138);
                if ((bStack_138 & 1) != 0) {
                  _ZdaPvSt11align_val_t
                            (uStack_128,CONCAT71(uStack_137,bStack_138) & 0xfffffffffffffffe);
                }
                _ZN7android4base10LogMessageD2Ev(auStack_120);
                *piVar8 = iVar17;
              }
              uStack_188 = CONCAT44(uStack_188._4_4_,0xffffffff);
              uVar11 = 0;
            }
            else {
              uVar9 = _ZN11incremental25verity_tree_size_for_fileEl(lVar13);
              uVar14 = uVar10;
              if (uVar10 != uVar9) goto code_r0x00366740;
              iVar17 = (int)(lVar13 + 0xfffU >> 0xc);
              iVar7 = iVar17 + 0x7f;
              iVar17 = iVar17 + 0xfe;
              if (-1 < iVar7) {
                iVar17 = iVar7;
              }
              if (((adb_trace_mask._1_1_ & 0x20) == 0) || (1 < (int)adb_trace_severity._52_4_)) {
                iVar7 = *piVar8;
              }
              else {
                cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                iVar7 = *piVar8;
                if (cVar4 != '\0') {
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (auStack_120,&UNK_0016790b,0x2cb,1,0,0xffffffff);
                  uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_120);
                  uVar14 = (long)&uStack_d8 + 1;
                  if ((uStack_d8 & 1) != 0) {
                    uVar14 = uStack_c8;
                  }
                  _ZN7android4base12StringPrintfEPKcz
                            (&bStack_138,&UNK_001576ed,uVar14,uVar10 & 0xffffffff,
                             uVar10 + 0xfff >> 0xc,iVar17 >> 7);
                  func_0x0032e5a0(uVar12,&bStack_138);
                  if ((bStack_138 & 1) != 0) {
                    _ZdaPvSt11align_val_t
                              (uStack_128,CONCAT71(uStack_137,bStack_138) & 0xfffffffffffffffe);
                  }
                  _ZN7android4base10LogMessageD2Ev(auStack_120);
                }
              }
              uStack_188 = CONCAT44(uStack_188._4_4_,iVar5);
              *piVar8 = iVar7;
              iVar5 = -1;
            }
            uStack_180 = uVar11;
            if ((uStack_118 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_108,uStack_118 & 0xfffffffffffffffe);
            }
            iVar17 = *piVar8;
            if (iVar5 != -1) {
              func_0x0099bd10(iVar5);
            }
            goto code_r0x003661f0;
          }
          break;
        }
      } while (*piVar8 == 4);
      if (((adb_trace_mask._1_1_ & 0x20) == 0) || (1 < (int)adb_trace_severity._52_4_)) {
        iVar17 = *piVar8;
      }
      else {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        iVar17 = *piVar8;
        if (cVar4 != '\0') {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_f8,&UNK_0016790b,0x2b6,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_f8);
          uVar9 = (long)&uStack_d8 + 1;
          if ((uStack_d8 & 1) != 0) {
            uVar9 = uStack_c8;
          }
          _ZN7android4base12StringPrintfEPKcz(&uStack_118,&UNK_00167974,uVar14,uVar9);
          func_0x0032e5a0(uVar11,&uStack_118);
          if ((uStack_118 & 1) != 0) {
            _ZdaPvSt11align_val_t(lStack_108,uStack_118 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&uStack_f8);
        }
      }
      uStack_188 = CONCAT44(uStack_188._4_4_,0xffffffff);
      uStack_180 = 0;
code_r0x003661f0:
      *piVar8 = iVar17;
      if ((uStack_d8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_c8,uStack_d8 & 0xfffffffffffffffe);
      }
      uVar14 = uStack_150;
      if (uStack_150 < uStack_148) {
        uVar2 = (int)uStack_178;
        uStack_178 = CONCAT44(uStack_178._4_4_,0xffffffff);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar2);
        uVar2 = (int)uStack_188;
        uStack_188 = CONCAT44(uStack_188._4_4_,0xffffffff);
        uStack_118 = CONCAT44(uStack_118._4_4_,uVar2);
        _ZN11incremental4FileC2EPKcslN7android4base14unique_fd_implINS4_13DefaultCloserEEElS7_
                  (uStack_150,uStack_168,(int)(short)iStack_15c,lStack_170,&uStack_d8,uStack_180,
                   &uStack_118);
        iVar5 = *piVar8;
        if ((int)uStack_118 != -1) {
          func_0x0099bd10();
        }
        uStack_118 = CONCAT44(uStack_118._4_4_,0xffffffff);
        *piVar8 = iVar5;
        if ((int)uStack_d8 != -1) {
          func_0x0099bd10();
        }
        *piVar8 = iVar5;
        uStack_150 = uVar14 + 0x80;
      }
      else {
        uStack_150 = _ZNSt3__16vectorIN11incremental4FileENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPKcRiRlN7android4base14unique_fd_implINSD_13DefaultCloserEEESB_SG_EEEPS2_DpOT_
                               (&uStack_158,&uStack_168,&iStack_15c,&lStack_170,&uStack_178,
                                &uStack_180,&uStack_188);
      }
      iVar5 = *piVar8;
      if ((int)uStack_188 != -1) {
        func_0x0099bd10();
      }
      *piVar8 = iVar5;
      if ((int)uStack_178 != -1) {
        func_0x0099bd10();
      }
      *piVar8 = iVar5;
      iStack_15c = iStack_15c + 1;
    } while (iStack_15c < param_3);
  }
  uStack_c0 = uStack_148;
  uStack_c8 = uStack_150;
  uStack_d0 = uStack_158;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_d8 = CONCAT44(param_2,param_1);
  *piVar8 = iVar5;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_b8 = _Znwm(0x20000);
  lStack_a8 = lStack_b8 + 0x20000;
  lStack_b0 = lStack_b8;
  lVar13 = _Znwm(0x21000);
  func_0x0099bdb0(lVar13,0,0x21000);
  lStack_48 = lVar13 + 4;
  lStack_60 = lVar13;
  lStack_58 = lVar13 + 0x21000;
  lStack_50 = lVar13 + 0x21000;
  func_0x0099bee0(&UNK_0015b03e);
  func_0x0099c1d0(_stdin);
  func_0x0099c1d0(_stdout);
  uVar6 = _ZN11incremental17IncrementalServer5ServeEv(&uStack_d8);
  _ZN11incremental17IncrementalServerD2Ev(&uStack_d8);
  uVar9 = uStack_158;
  uVar14 = uStack_150;
  if (uStack_158 != 0) {
    while (uVar9 != uVar14) {
      _ZN11incremental4FileD2Ev(uVar14 - 0x80);
      uVar14 = uVar14 - 0x80;
    }
    uStack_150 = uVar9;
    _ZdaPvSt11align_val_t(uStack_158,uStack_148 - uStack_158);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)uVar6;
  }
code_r0x00366772:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar14 = (*pcVar1)();
  return uVar14;
}


