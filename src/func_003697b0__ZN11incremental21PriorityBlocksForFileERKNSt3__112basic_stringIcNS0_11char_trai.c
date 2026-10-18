// Function: _ZN11incremental21PriorityBlocksForFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdEl
// Address: 003697b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
_ZN11incremental21PriorityBlocksForFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdEl
          (undefined1 (*param_1) [16],byte *param_2,uint param_3,long *******param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 *puVar14;
  char cVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  int *piVar21;
  long ******pppppplVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  undefined1 (*pauVar28) [16];
  short sVar29;
  undefined1 auVar30 [4];
  int *piVar31;
  long *******ppppppplVar32;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar33;
  long *******ppppppplVar34;
  long *******unaff_R13;
  long *******ppppppplVar35;
  undefined4 uVar36;
  long lVar37;
  undefined4 *puVar38;
  ulong uVar39;
  ulong uVar40;
  long *******ppppppplVar41;
  short sVar42;
  undefined1 auVar43 [4];
  int iVar44;
  long in_FS_OFFSET;
  bool bVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  long *******ppppppplStack_150;
  undefined1 (*pauStack_140) [16];
  undefined1 auStack_138 [16];
  long *******ppppppplStack_128;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  int iStack_fc;
  long *******ppppppplStack_f8;
  int *******pppppppiStack_f0;
  int *piStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  char cStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  ulong uStack_78;
  long ******apppppplStack_68 [2];
  undefined8 uStack_58;
  long *******ppppppplStack_48;
  long lStack_38;
  
  ppppppplVar34 = (long *******)(ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar45 = (*param_2 & 1) != 0;
  pbVar17 = param_2 + 1;
  if (bVar45) {
    pbVar17 = *(byte **)(param_2 + 0x10);
  }
  uVar33 = (ulong)(*param_2 >> 1);
  if (bVar45) {
    uVar33 = *(ulong *)(param_2 + 8);
  }
  cVar15 = _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                     (pbVar17,uVar33,&UNK_0017ebb3,4);
  if (cVar15 == '\0') {
    if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) goto code_r0x0036a3e4;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    return param_1;
  }
  pauStack_140 = param_1;
  if (0 < (long)param_4) {
    lVar37 = 0;
    unaff_R13 = (long *******)auStack_d8;
    sVar42 = 0;
code_r0x00369870:
    lVar37 = (long)param_4 + (-0x16 - lVar37);
    auVar4._12_4_ = 0;
    auVar4._0_12_ = _auStack_d4;
    _auStack_d8 = auVar4 << 0x20;
    do {
      lVar18 = func_0x0099c1b0(ppppppplVar34,unaff_R13,4,lVar37);
      ppppppplStack_150 = param_4;
      if (lVar18 != -1) {
        if (((int)lVar18 == 4) && (auStack_d8 == (undefined1  [4])0x6054b50)) {
          auVar5._14_2_ = 0;
          auVar5._0_14_ = stack0xffffffffffffff2a;
          _auStack_d8 = auVar5 << 0x10;
          goto code_r0x003698e0;
        }
        break;
      }
      piVar19 = (int *)func_0x0099bce0();
    } while (*piVar19 == 4);
    goto code_r0x00369860;
  }
  goto code_r0x00369ba6;
  while (piVar19 = (int *)func_0x0099bce0(), *piVar19 == 4) {
code_r0x003698e0:
    lVar18 = func_0x0099c1b0(param_3,unaff_R13,2,lVar37 + 0x14);
    if (lVar18 != -1) {
      sVar29 = -1;
      if ((int)lVar18 == 2) {
        sVar29 = auStack_d8._0_2_;
      }
      goto code_r0x0036984a;
    }
  }
  sVar29 = -1;
code_r0x0036984a:
  if (sVar29 == sVar42) {
    if (-1 < lVar37) {
      unaff_R13 = (long *******)(lVar37 + 0xc);
      auVar6._12_4_ = 0;
      auVar6._0_12_ = _auStack_d4;
      _auStack_d8 = auVar6 << 0x20;
      goto code_r0x00369970;
    }
    goto code_r0x00369ba6;
  }
code_r0x00369860:
  sVar42 = sVar42 + 1;
  lVar37 = (long)sVar42;
  if ((long)param_4 <= lVar37) goto code_r0x00369ba6;
  goto code_r0x00369870;
  while (piVar19 = (int *)func_0x0099bce0(), *piVar19 == 4) {
code_r0x00369970:
    lVar18 = func_0x0099c1b0(ppppppplVar34,auStack_d8,4,unaff_R13);
    if (lVar18 != -1) {
      lVar20 = -1;
      if ((int)lVar18 == 4) {
        lVar20 = (long)(int)auStack_d8;
      }
      goto code_r0x003699b1;
    }
  }
  lVar20 = -1;
code_r0x003699b1:
  lVar37 = lVar37 - lVar20;
  if (0x1f < lVar37) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = stack0xffffffffffffff30;
    _auStack_d8 = auVar7 << 0x40;
    unaff_R13 = (long *******)auStack_d8;
    do {
      lVar18 = func_0x0099c1b0(param_3,unaff_R13,8,lVar37 + -0x10);
      if (lVar18 != -1) {
        if (((int)lVar18 == 8) && (_auStack_d8 == (long ******)0x20676953204b5041)) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = stack0xffffffffffffff30;
          _auStack_d8 = auVar8 << 0x40;
          unaff_R13 = (long *******)auStack_d8;
          goto code_r0x00369a32;
        }
        break;
      }
      piVar19 = (int *)func_0x0099bce0();
    } while (*piVar19 == 4);
  }
  goto code_r0x00369ba6;
  while (piVar19 = (int *)func_0x0099bce0(), *piVar19 == 4) {
code_r0x00369a32:
    lVar18 = func_0x0099c1b0(param_3,unaff_R13,8,lVar37 + -8);
    if (lVar18 != -1) {
      if (((int)lVar18 == 8) && (_auStack_d8 == (long ******)0x3234206b636f6c42)) {
        unaff_R13 = (long *******)(lVar37 + -0x18);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = _auStack_d4;
        _auStack_d8 = auVar9 << 0x20;
        goto code_r0x00369a8f;
      }
      break;
    }
  }
code_r0x00369ba6:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
                    /* WARNING: Read-only address (ram,0x00155ec0) is written */
      return pauStack_140;
    }
code_r0x0036a3e4:
    func_0x0099bd00();
code_r0x0036a3e9:
    _ZZNSt3__16vectorIiNS_9allocatorIiEEE12emplace_backIJiEEERiDpOT_ENKUlvE0_clEv(auStack_d8);
    pppppplVar22 = apppppplStack_68[0];
code_r0x00369ee4:
    *(long *******)(*pauStack_140 + 8) = pppppplVar22;
    auStack_138 = (undefined1  [16])0x0;
    ppppppplStack_128 = (long *******)0x0;
    auStack_88 = (undefined1  [16])0x0;
    _auStack_98 = (undefined1  [16])0x0;
    uStack_78 = 0;
    auStack_c8 = (undefined1  [16])0x0;
    _auStack_d8 = (undefined1  [16])0x0;
    _ZN7android4base10MappedFile6CreateEilmi
              (auStack_d8,(ulong)ppppppplVar34 & 0xffffffff,0,ppppppplStack_150,1);
    if (auStack_c8[8] == '\0') {
      if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
         (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
        puVar23 = (undefined4 *)func_0x0099bce0();
        uVar36 = *puVar23;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppiStack_f0,&UNK_0017d4f8,0x166,1,0,0xffffffff);
        uVar24 = _ZN7android4base10LogMessage6streamEv(&pppppppiStack_f0);
        _ZN7android4base12StringPrintfEPKcz(apppppplStack_68,&UNK_00164326,&UNK_00157729,*puVar23);
        func_0x0032e5a0(uVar24,apppppplStack_68);
        if (((ulong)apppppplStack_68[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_58,(ulong)apppppplStack_68[0] & 0xfffffffffffffffe);
        }
        ppppppplVar35 = (long *******)&pppppppiStack_f0;
code_r0x0036a499:
        ppppppplVar34 = apppppplStack_68;
        _ZN7android4base10LogMessageD2Ev(ppppppplVar35);
        *puVar23 = uVar36;
      }
code_r0x0036a071:
      _auStack_98 = (unkuint9)0;
      uStack_78 = uStack_78 & 0xffffffffffffff00;
    }
    else {
      pppppppiStack_f0 = (int *******)0x0;
      iVar16 = _Z21OpenArchiveFromMemoryPKvmPKcPP10ZipArchive
                         ((long)_auStack_d8 + auStack_c8._0_8_,stack0xffffffffffffff30,&UNK_00187c38
                          ,&pppppppiStack_f0);
      if (iVar16 != 0) {
        if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
           (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
          puVar23 = (undefined4 *)func_0x0099bce0();
          uVar36 = *puVar23;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_118,&UNK_0017d4f8,0x16c,1,0,0xffffffff);
          uVar24 = _ZN7android4base10LogMessage6streamEv(auStack_118);
          _ZN7android4base12StringPrintfEPKcz(apppppplStack_68,&UNK_0017d52a,&UNK_00157729,*puVar23)
          ;
          func_0x0032e5a0(uVar24,apppppplStack_68);
          if (((ulong)apppppplStack_68[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_58,(ulong)apppppplStack_68[0] & 0xfffffffffffffffe);
          }
          ppppppplVar35 = (long *******)auStack_118;
          goto code_r0x0036a499;
        }
        goto code_r0x0036a071;
      }
      auStack_90[0] = 0;
      auStack_98 = (undefined1  [8])pppppppiStack_f0;
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      if (auStack_c8[8] == '\x01') {
        _ZN7android4base10MappedFileC2EOS1_(auStack_90,auStack_d8);
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
      }
    }
    if (auStack_c8[8] == '\x01') {
      _ZN7android4base10MappedFileD2Ev(auStack_d8);
    }
    if (auStack_98 == (undefined1  [8])0x0) {
code_r0x0036a115:
      auStack_138 = (undefined1  [16])0x0;
      ppppppplStack_128 = (long *******)0x0;
    }
    else {
      uStack_108 = 0;
      apppppplStack_68[0] = (long ******)&UNK_0099e528;
      ppppppplStack_48 = unaff_R13;
      iVar16 = _Z14StartIterationP10ZipArchivePPvNSt3__18functionIFbNS3_17basic_string_viewIcNS3_11char_traitsIcEEEEEEE
                         (auStack_98,&uStack_108,unaff_R13);
      if (ppppppplStack_48 == unaff_R13) {
        lVar37 = 0x20;
code_r0x0036a0ed:
        (**(code **)((long)*ppppppplStack_48 + lVar37))();
      }
      else {
        lVar37 = 0x28;
        if (ppppppplStack_48 != (long *******)0x0) goto code_r0x0036a0ed;
      }
      if (iVar16 != 0) {
        if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
           (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
          puVar23 = (undefined4 *)func_0x0099bce0();
          uVar36 = *puVar23;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pppppppiStack_f0,&UNK_0017d4f8,0x185,1,0,0xffffffff);
          uVar24 = _ZN7android4base10LogMessage6streamEv(&pppppppiStack_f0);
          ppppppplVar34 = (long *******)auStack_d8;
          _ZN7android4base12StringPrintfEPKcz(ppppppplVar34,&UNK_00164306,&UNK_0016eafe,*puVar23);
          func_0x0032e5a0(uVar24,ppppppplVar34);
          if ((auStack_d8[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(auStack_c8._0_8_,(ulong)_auStack_d8 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&pppppppiStack_f0);
          *puVar23 = uVar36;
        }
        goto code_r0x0036a115;
      }
      auStack_138 = (undefined1  [16])0x0;
      ppppppplStack_128 = (long *******)0x0;
      auStack_a8 = (undefined1  [16])0x0;
      auStack_b8 = (undefined1  [16])0x0;
      auStack_c8 = (undefined1  [16])0x0;
      _auStack_d8 = (undefined1  [16])0x0;
      auStack_118 = (undefined1  [16])0x0;
      iVar16 = _Z4NextPvP10ZipEntry64PNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                         (uStack_108,auStack_d8,auStack_118);
      while (iVar16 == 0) {
        uVar24 = auStack_c8._8_8_;
        ppppppplVar34 = (long *******)auStack_138._0_8_;
        ppppppplVar35 = (long *******)auStack_138._8_8_;
        if ((auStack_118._8_8_ == 0xb) &&
           (*(long *)(auStack_118._0_8_ + 3) == 0x7865642e73657373 &&
            *(long ******)auStack_118._0_8_ == (long *****)0x2e73657373616c63)) {
          uVar33 = auStack_138._8_8_ - auStack_138._0_8_;
          if (uVar33 < 0xfffffffffffffff8) {
            if ((ulong)((long)ppppppplStack_128 - auStack_138._8_8_) < 5) {
              uVar39 = ((long)uVar33 >> 2) + 2;
              if (0x3fffffffffffffff < uVar39) {
                func_0x00330ca0();
code_r0x0036ab07:
                func_0x0032fc40();
                pauVar28 = (undefined1 (*) [16])free();
                return pauVar28;
              }
              uVar40 = (long)ppppppplStack_128 - auStack_138._0_8_;
              uVar25 = (long)uVar40 >> 1;
              if ((ulong)((long)uVar40 >> 1) <= uVar39) {
                uVar25 = uVar39;
              }
              if (0x7ffffffffffffffb < uVar40) {
                uVar25 = 0x3fffffffffffffff;
              }
              if (uVar25 == 0) {
                lVar37 = 0;
              }
              else {
                if (0x3fffffffffffffff < uVar25) goto code_r0x0036ab07;
                lVar37 = _Znwm(uVar25 * 4);
              }
              ppppppplStack_150 = (long *******)(lVar37 + uVar25 * 4);
              ppppppplVar41 = (long *******)(lVar37 + uVar33 + 8);
              *(undefined8 *)(lVar37 + uVar33) = 0;
              unaff_R13 = (long *******)(lVar37 + uVar33 + ((long)uVar33 >> 2) * -4);
              func_0x0099bda0(unaff_R13,ppppppplVar34,uVar33);
              auStack_138._8_8_ = ppppppplVar41;
              auStack_138._0_8_ = unaff_R13;
              ppppppplStack_128 = ppppppplStack_150;
              if (ppppppplVar34 != (long *******)0x0) {
                _ZdaPvSt11align_val_t(ppppppplVar34,uVar40);
                ppppppplVar41 = (long *******)auStack_138._8_8_;
              }
            }
            else {
              ppppppplVar41 = (long *******)(auStack_138._8_8_ + 8);
              *(long *******)auStack_138._8_8_ = (long ******)0x0;
              auStack_138._8_8_ = ppppppplVar41;
            }
            ppppppplVar26 = (long *******)auStack_138._0_8_;
          }
          else {
            ppppppplVar41 = (long *******)(auStack_138._0_8_ + uVar33 + 8);
            auStack_138._8_8_ = ppppppplVar41;
            ppppppplVar26 = (long *******)auStack_138._0_8_;
          }
          ppppppplVar27 = (long *******)((long)ppppppplVar26 + uVar33);
          if (ppppppplVar27 != ppppppplVar41) {
            uVar39 = (ulong)uVar24 >> 0xc;
            ppppppplVar34 =
                 (long *******)
                 ((((long)ppppppplVar34 + (long)ppppppplVar41) -
                  ((long)ppppppplVar35 + (long)ppppppplVar26)) + -4);
            if ((long *******)0x1b < ppppppplVar34) {
              ppppppplVar34 = (long *******)(((ulong)ppppppplVar34 >> 2) + 1);
              ppppppplVar35 = (long *******)((ulong)ppppppplVar34 & 0x7ffffffffffffff8);
              ppppppplVar27 = (long *******)((long)ppppppplVar27 + (long)ppppppplVar35 * 4);
              iVar16 = (int)uVar39;
              uVar39 = (ulong)(uint)(iVar16 + (int)ppppppplVar35);
              iVar46 = iVar16 + 1;
              iVar49 = iVar16 + 2;
              iVar50 = iVar16 + 3;
              ppppppplVar32 = (long *******)0x0;
              do {
                piVar19 = (int *)((long)ppppppplVar26 + (long)ppppppplVar32 * 4 + uVar33);
                *piVar19 = iVar16;
                piVar19[1] = iVar46;
                piVar19[2] = iVar49;
                piVar19[3] = iVar50;
                piVar19 = (int *)((long)ppppppplVar26 + (long)ppppppplVar32 * 4 + uVar33 + 0x10);
                *piVar19 = iVar16 + 4;
                piVar19[1] = iVar46 + 4;
                piVar19[2] = iVar49 + 4;
                piVar19[3] = iVar50 + 4;
                ppppppplVar32 = ppppppplVar32 + 1;
                iVar16 = iVar16 + 8;
                iVar46 = iVar46 + 8;
                iVar49 = iVar49 + 8;
                iVar50 = iVar50 + 8;
              } while (ppppppplVar35 != ppppppplVar32);
              if (ppppppplVar34 == ppppppplVar35) goto code_r0x0036aa38;
            }
            do {
              *(int *)ppppppplVar27 = (int)uVar39;
              ppppppplVar27 = (long *******)((long)ppppppplVar27 + 4);
              uVar39 = (ulong)((int)uVar39 + 1);
            } while (ppppppplVar27 != ppppppplVar41);
          }
code_r0x0036aa38:
          if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
             (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
            puVar23 = (undefined4 *)func_0x0099bce0();
            uVar36 = *puVar23;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&ppppppplStack_f8,&UNK_0017d4f8,0x192,1,0,0xffffffff);
            uVar24 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_f8);
            ppppppplVar41 = (long *******)&pppppppiStack_f0;
            _ZN7android4base12StringPrintfEPKcz
                      (ppppppplVar41,&UNK_00165dec,auStack_118._8_4_,auStack_118._0_8_);
code_r0x0036a80e:
            func_0x0032e5a0(uVar24,&pppppppiStack_f0);
            if (((ulong)pppppppiStack_f0 & 1) != 0) {
              _ZdaPvSt11align_val_t(puStack_e0,(ulong)pppppppiStack_f0 & 0xfffffffffffffffe);
            }
            _ZN7android4base10LogMessageD2Ev(&ppppppplStack_f8);
            *puVar23 = uVar36;
            ppppppplVar34 = ppppppplVar41;
          }
        }
        else {
          uVar33 = (ulong)auStack_c8._8_8_ >> 0xc;
          iVar46 = (int)uVar33;
          iVar16 = (int)((ulong)(cStack_cc != '\0') * 0x10 +
                         *(long *)(auStack_a8 + (ulong)(auStack_d8._0_2_ == 0) * 8) +
                         auStack_c8._8_8_ >> 0xc) - iVar46;
          uVar1 = iVar16 + 1;
          ppppppplVar41 = (long *******)(ulong)uVar1;
          iStack_fc = iVar46;
          if (iVar16 == 0) {
            ppppppplStack_f8 = (long *******)auStack_138._8_8_;
            pppppppiStack_f0 = (int *******)&ppppppplStack_f8;
            piStack_e8 = &iStack_fc;
            puStack_e0 = auStack_138;
            ppppppplVar35 = unaff_R13;
            if ((ulong)auStack_138._8_8_ < ppppppplStack_128) {
              *(int *)auStack_138._8_8_ = iVar46;
              auStack_138._8_8_ = auStack_138._8_8_ + 4;
            }
            else {
              _ZZNSt3__16vectorIiNS_9allocatorIiEEE12emplace_backIJiEEERiDpOT_ENKUlvE0_clEv
                        (&pppppppiStack_f0);
              auStack_138._8_8_ = ppppppplStack_f8;
            }
          }
          else {
            lVar37 = auStack_138._8_8_ - auStack_138._0_8_;
            uVar25 = lVar37 >> 2;
            uVar39 = uVar25 + (long)(int)uVar1;
            if (uVar25 < uVar39) {
              func_0x0036ad60(auStack_138);
              ppppppplVar26 = (long *******)auStack_138._8_8_;
              ppppppplVar27 = (long *******)auStack_138._0_8_;
            }
            else {
              ppppppplVar26 = (long *******)auStack_138._8_8_;
              ppppppplVar27 = (long *******)auStack_138._0_8_;
              if (uVar39 < uVar25) {
                ppppppplVar26 = (long *******)(auStack_138._0_8_ + uVar39 * 4);
                auStack_138._8_8_ = ppppppplVar26;
              }
            }
            ppppppplVar32 = (long *******)((long)ppppppplVar27 + lVar37);
            if (ppppppplVar32 != ppppppplVar26) {
              ppppppplVar35 = (long *******)((long)ppppppplVar35 + (long)ppppppplVar27);
              uVar39 = (((long)ppppppplVar34 + (long)ppppppplVar26) - (long)ppppppplVar35) - 4;
              if (0x1b < uVar39) {
                uVar40 = (uVar39 >> 2) + 1;
                uVar39 = uVar40 & 0x7ffffffffffffff8;
                ppppppplVar32 = (long *******)((long)ppppppplVar32 + uVar39 * 4);
                uVar33 = (ulong)(uint)(iVar46 + (int)uVar39);
                iVar16 = iVar46 + 1;
                iVar49 = iVar46 + 2;
                iVar50 = iVar46 + 3;
                uVar25 = 0;
                do {
                  piVar19 = (int *)((long)ppppppplVar27 + uVar25 * 4 + lVar37);
                  *piVar19 = iVar46;
                  piVar19[1] = iVar16;
                  piVar19[2] = iVar49;
                  piVar19[3] = iVar50;
                  piVar19 = (int *)((long)ppppppplVar27 + uVar25 * 4 + lVar37 + 0x10);
                  *piVar19 = iVar46 + 4;
                  piVar19[1] = iVar16 + 4;
                  piVar19[2] = iVar49 + 4;
                  piVar19[3] = iVar50 + 4;
                  uVar25 = uVar25 + 8;
                  iVar46 = iVar46 + 8;
                  iVar16 = iVar16 + 8;
                  iVar49 = iVar49 + 8;
                  iVar50 = iVar50 + 8;
                } while (uVar39 != uVar25);
                if (uVar40 == uVar39) goto code_r0x0036a76b;
              }
              do {
                *(int *)ppppppplVar32 = (int)uVar33;
                ppppppplVar32 = (long *******)((long)ppppppplVar32 + 4);
                uVar33 = (ulong)((int)uVar33 + 1);
              } while (ppppppplVar32 != ppppppplVar26);
            }
          }
code_r0x0036a76b:
          ppppppplVar34 = ppppppplVar41;
          unaff_R13 = ppppppplVar35;
          if ((((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) &&
             (cVar15 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar15 != '\0')) {
            puVar23 = (undefined4 *)func_0x0099bce0();
            uVar36 = *puVar23;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&ppppppplStack_f8,&UNK_0017d4f8,0x1a1,1,0,0xffffffff);
            uVar24 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_f8);
            unaff_R13 = (long *******)&pppppppiStack_f0;
            _ZN7android4base12StringPrintfEPKcz
                      (unaff_R13,&UNK_00165dec,auStack_118._8_4_,auStack_118._0_8_);
            goto code_r0x0036a80e;
          }
        }
        iVar16 = _Z4NextPvP10ZipEntry64PNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                           (uStack_108,auStack_d8,auStack_118);
      }
      _Z12EndIterationPv(uStack_108);
      _Z12CloseArchiveP10ZipArchive(auStack_98);
    }
    if ((char)uStack_78 == '\x01') {
      _ZN7android4base10MappedFileD2Ev(auStack_90);
    }
    _ZNSt3__16vectorIiNS_9allocatorIiEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPiEES7_EES7_NS5_IPKiEET_T0_l
              (pauStack_140,*(undefined8 *)(*pauStack_140 + 8),auStack_138._0_8_,auStack_138._8_8_,
               (long)(auStack_138._8_8_ - auStack_138._0_8_) >> 2);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auStack_b8._8_8_;
    auStack_b8 = auVar12 << 0x40;
    lVar37 = *(long *)(*pauStack_140 + 8) - *(long *)*pauStack_140;
    auStack_c8 = (undefined1  [16])0x0;
    _auStack_d8 = (undefined1  [16])0x0;
    auStack_b8._0_4_ = 0x3f800000;
    uVar33 = 2;
    if (lVar37 == 4) {
code_r0x0036a23c:
      _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
                (auStack_d8,uVar33);
    }
    else {
      uVar33 = lVar37 >> 2;
      if ((uVar33 & uVar33 - 1) != 0) {
        uVar33 = _ZNSt3__112__next_primeEm(uVar33,2);
      }
      if (uVar33 != 0) goto code_r0x0036a23c;
    }
    puVar23 = *(undefined4 **)*pauStack_140;
    puVar2 = *(undefined4 **)(*pauStack_140 + 8);
    if (puVar23 != puVar2) {
      ppppppplVar34 = apppppplStack_68;
      unaff_R13 = (long *******)auStack_98;
      do {
        auStack_98._0_4_ = *puVar23;
        apppppplStack_68[0] = (long ******)auStack_d8;
        _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                  (ppppppplVar34,unaff_R13,unaff_R13);
        if ((extraout_RDX & 1) == 0) break;
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar2);
    }
    if ((puVar23 != puVar2) && (puVar38 = puVar23 + 1, puVar38 != puVar2)) {
      ppppppplVar34 = apppppplStack_68;
      unaff_R13 = (long *******)auStack_98;
      do {
        auStack_98._0_4_ = *puVar38;
        apppppplStack_68[0] = (long ******)auStack_d8;
        _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                  (ppppppplVar34,unaff_R13,unaff_R13);
        if ((extraout_RDX_00 & 1) != 0) {
          *puVar23 = *puVar38;
          puVar23 = puVar23 + 1;
        }
        puVar38 = puVar38 + 1;
      } while (puVar38 != puVar2);
    }
    if (puVar23 != *(undefined4 **)(*pauStack_140 + 8)) {
      func_0x0099bd90(puVar23,*(undefined4 **)(*pauStack_140 + 8),0);
      *(undefined4 **)(*pauStack_140 + 8) = puVar23;
    }
    puVar14 = (undefined8 *)auStack_c8._0_8_;
    while (puVar14 != (undefined8 *)0x0) {
                    /* WARNING: Read-only address (ram,0x00155ec0) is written */
      puVar3 = (undefined8 *)*puVar14;
      _ZdaPvSt11align_val_t(puVar14,0x18);
      puVar14 = puVar3;
    }
                    /* WARNING: Read-only address (ram,0x00155ec0) is written */
    pppppplVar22 = _auStack_d8;
    uVar33 = stack0xffffffffffffff30;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = stack0xffffffffffffff30;
    _auStack_d8 = auVar13 << 0x40;
    if (pppppplVar22 != (long ******)0x0) {
      _ZdaPvSt11align_val_t(pppppplVar22,uVar33 << 3);
    }
    if (auStack_138._0_8_ != 0) {
      auStack_138._8_8_ = auStack_138._0_8_;
      _ZdaPvSt11align_val_t(auStack_138._0_8_,(long)ppppppplStack_128 - auStack_138._0_8_);
    }
  } while( true );
  while (piVar19 = (int *)func_0x0099bce0(), *piVar19 == 4) {
code_r0x00369a8f:
    lVar18 = func_0x0099c1b0(param_3,auStack_d8,4,unaff_R13);
    if (lVar18 != -1) {
      auVar43 = (undefined1  [4])-1;
      if ((int)lVar18 == 4) {
        auVar43 = auStack_d8;
      }
      goto code_r0x00369acc;
    }
  }
  auVar43 = (undefined1  [4])-1;
code_r0x00369acc:
  uVar33 = (lVar37 - (int)auVar43) - 8;
  if (lVar37 - (int)auVar43 < 8) goto code_r0x00369ba6;
  auVar10._12_4_ = 0;
  auVar10._0_12_ = _auStack_d4;
  _auStack_d8 = auVar10 << 0x20;
  do {
    lVar37 = func_0x0099c1b0(ppppppplVar34,auStack_d8,4,uVar33);
    if (lVar37 != -1) {
      auVar30 = (undefined1  [4])-1;
      if ((int)lVar37 == 4) {
        auVar30 = auStack_d8;
      }
      goto code_r0x00369b27;
    }
    piVar19 = (int *)func_0x0099bce0();
  } while (*piVar19 == 4);
  auVar30 = (undefined1  [4])-1;
code_r0x00369b27:
  if (auVar43 != auVar30) goto code_r0x00369ba6;
  uVar33 = uVar33 >> 0xc;
  iVar49 = (int)((ulong)param_4 >> 0xc);
  iVar46 = (int)uVar33;
  iVar16 = iVar49 - iVar46;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  if (iVar16 < 0x11) {
    if (iVar49 == iVar46) {
      piVar19 = (int *)_Znwm(4);
      *piVar19 = iVar46;
      *(int **)*param_1 = piVar19;
      *(int **)param_1[1] = piVar19 + 1;
      *(int **)(*param_1 + 8) = piVar19 + 1;
    }
    else if (iVar16 + 1 != 0) {
      func_0x0036ad60(param_1,(long)(iVar16 + 1));
      auVar4 = _UNK_00155ec0;
      piVar19 = *(int **)*param_1;
      piVar21 = *(int **)(*param_1 + 8);
      if (piVar19 != piVar21) {
        uVar39 = (long)piVar21 + (-4 - (long)piVar19);
        if (0x1b < uVar39) {
          uVar39 = (uVar39 >> 2) + 1;
          uVar25 = uVar39 & 0xfffffffffffffff8;
          iVar16 = iVar46 + 1;
          iVar49 = iVar46 + 2;
          iVar50 = iVar46 + 3;
          uVar33 = (ulong)(uint)(iVar46 + (int)uVar25);
          uVar40 = 0;
          do {
            piVar31 = piVar19 + uVar40;
            *piVar31 = iVar46;
            piVar31[1] = iVar16;
            piVar31[2] = iVar49;
            piVar31[3] = iVar50;
            piVar31 = piVar19 + uVar40 + 4;
            *piVar31 = iVar46 + auVar4._0_4_;
            piVar31[1] = iVar16 + auVar4._4_4_;
            piVar31[2] = iVar49 + auVar4._8_4_;
            piVar31[3] = iVar50 + auVar4._12_4_;
            uVar40 = uVar40 + 8;
            iVar46 = iVar46 + 8;
            iVar16 = iVar16 + 8;
            iVar49 = iVar49 + 8;
            iVar50 = iVar50 + 8;
          } while (uVar25 != uVar40);
          piVar19 = piVar19 + uVar25;
          if (uVar39 == uVar25) goto code_r0x00369e97;
        }
        do {
          *piVar19 = (int)uVar33;
          piVar19 = piVar19 + 1;
          uVar33 = (ulong)((int)uVar33 + 1);
        } while (piVar19 != piVar21);
      }
    }
    goto code_r0x00369e97;
  }
  func_0x0036ad60(param_1,0x11);
  auVar4 = _UNK_00155ec0;
  piVar19 = *(int **)*param_1;
  piVar21 = *(int **)(*param_1 + 8);
  if (piVar19 != piVar21) {
    iVar50 = iVar49 + -0x10;
    uVar39 = (long)piVar21 + (-4 - (long)piVar19);
    if (0x1b < uVar39) {
      uVar39 = (uVar39 >> 2) + 1;
      uVar25 = uVar39 & 0xfffffffffffffff8;
      iVar47 = iVar49 + -0xf;
      iVar48 = iVar49 + -0xe;
      iVar49 = iVar49 + -0xd;
      iVar44 = iVar50 + (int)uVar25;
      uVar40 = 0;
      do {
        piVar31 = piVar19 + uVar40;
        *piVar31 = iVar50;
        piVar31[1] = iVar47;
        piVar31[2] = iVar48;
        piVar31[3] = iVar49;
        piVar31 = piVar19 + uVar40 + 4;
        *piVar31 = iVar50 + auVar4._0_4_;
        piVar31[1] = iVar47 + auVar4._4_4_;
        piVar31[2] = iVar48 + auVar4._8_4_;
        piVar31[3] = iVar49 + auVar4._12_4_;
        uVar40 = uVar40 + 8;
        iVar50 = iVar50 + 8;
        iVar47 = iVar47 + 8;
        iVar48 = iVar48 + 8;
        iVar49 = iVar49 + 8;
      } while (uVar25 != uVar40);
      piVar19 = piVar19 + uVar25;
      iVar50 = iVar44;
      if (uVar39 == uVar25) goto code_r0x00369cc5;
    }
    do {
      *piVar19 = iVar50;
      piVar19 = piVar19 + 1;
      iVar50 = iVar50 + 1;
    } while (piVar19 != piVar21);
  }
code_r0x00369cc5:
  auStack_98._0_4_ = iVar46;
  if (iVar16 - 0x10U == 1) {
    apppppplStack_68[0] = *(long *******)(*param_1 + 8);
    stack0xffffffffffffff30 = (ulong)auStack_98;
    _auStack_d8 = (long ******)apppppplStack_68;
    auStack_c8._0_8_ = param_1;
    if (apppppplStack_68[0] < *(long *******)param_1[1]) {
      *(int *)apppppplStack_68[0] = iVar46;
      apppppplStack_68[0] = (long ******)((long)apppppplStack_68[0] + 4);
    }
    else {
      _ZZNSt3__16vectorIiNS_9allocatorIiEEE12emplace_backIJiEEERiDpOT_ENKUlvE0_clEv(auStack_d8);
    }
    *(long *******)(*param_1 + 8) = apppppplStack_68[0];
  }
  else {
    lVar37 = *(long *)*param_1;
    piVar19 = *(int **)(*param_1 + 8);
    lVar18 = (long)piVar19 - lVar37;
    uVar25 = lVar18 >> 2;
    uVar39 = uVar25 + (iVar16 - 0x10U);
    if (uVar25 < uVar39) {
      func_0x0036ad60(param_1);
      piVar21 = *(int **)(*param_1 + 8);
      lVar20 = *(long *)*param_1;
    }
    else {
      piVar21 = piVar19;
      lVar20 = lVar37;
      if (uVar39 < uVar25) {
        piVar21 = (int *)(lVar37 + uVar39 * 4);
        *(int **)(*param_1 + 8) = piVar21;
      }
    }
    auVar4 = _UNK_00155ec0;
    piVar31 = (int *)(lVar18 + lVar20);
    if (piVar31 != piVar21) {
      uVar39 = (long)piVar21 + (lVar37 - ((long)piVar19 + lVar20)) + -4;
      if (0x1b < uVar39) {
        uVar40 = (uVar39 >> 2) + 1;
        uVar39 = uVar40 & 0xfffffffffffffff8;
        piVar31 = piVar31 + uVar39;
        uVar33 = (ulong)(uint)(iVar46 + (int)uVar39);
        iVar16 = iVar46 + 1;
        iVar49 = iVar46 + 2;
        iVar50 = iVar46 + 3;
        uVar25 = 0;
        do {
          piVar19 = (int *)(lVar20 + lVar18 + uVar25 * 4);
          *piVar19 = iVar46;
          piVar19[1] = iVar16;
          piVar19[2] = iVar49;
          piVar19[3] = iVar50;
          piVar19 = (int *)(lVar20 + lVar18 + 0x10 + uVar25 * 4);
          *piVar19 = iVar46 + auVar4._0_4_;
          piVar19[1] = iVar16 + auVar4._4_4_;
          piVar19[2] = iVar49 + auVar4._8_4_;
          piVar19[3] = iVar50 + auVar4._12_4_;
          uVar25 = uVar25 + 8;
          iVar46 = iVar46 + 8;
          iVar16 = iVar16 + 8;
          iVar49 = iVar49 + 8;
          iVar50 = iVar50 + 8;
        } while (uVar39 != uVar25);
        if (uVar40 == uVar39) goto code_r0x00369e97;
      }
      do {
        *piVar31 = (int)uVar33;
        piVar31 = piVar31 + 1;
        uVar33 = (ulong)((int)uVar33 + 1);
      } while (piVar31 != piVar21);
    }
  }
code_r0x00369e97:
  auVar11._12_4_ = 0;
  auVar11._0_12_ = stack0xffffffffffffff6c;
  _auStack_98 = auVar11 << 0x20;
  apppppplStack_68[0] = *(long *******)(*param_1 + 8);
  unaff_R13 = apppppplStack_68;
  stack0xffffffffffffff30 = (ulong)auStack_98;
  _auStack_d8 = (long ******)unaff_R13;
  auStack_c8._0_8_ = param_1;
  if (*(long *******)param_1[1] <= apppppplStack_68[0]) goto code_r0x0036a3e9;
  *(undefined4 *)apppppplStack_68[0] = 0;
  pppppplVar22 = (long ******)((long)apppppplStack_68[0] + 4);
  goto code_r0x00369ee4;
}


