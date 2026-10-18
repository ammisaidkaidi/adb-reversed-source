// Function: _ZN4mdns18DiscoveredServices14ServiceDeletedERK11ServiceInfo
// Address: 00400c10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZN4mdns18DiscoveredServices14ServiceDeletedERK11ServiceInfo
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *****pppppbVar5;
  code *pcVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  byte *extraout_RDX;
  long extraout_RDX_00;
  byte ******ppppppbVar15;
  undefined **ppuVar16;
  byte *******pppppppbVar17;
  byte ******ppppppbVar18;
  undefined **ppuVar19;
  long *plVar20;
  ulong unaff_R13;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 uStack_260;
  ulong uStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte ******ppppppbStack_220;
  undefined8 uStack_218;
  byte **ppbStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  char cStack_1f8;
  byte *pbStack_1f0;
  ulong uStack_1e8;
  byte *pbStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  byte *****pppppbStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  byte ****ppppbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte *****pppppbStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined *apuStack_50 [2];
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puStack_38 = *(undefined1 **)(in_FS_OFFSET + 0x28);
  puStack_60 = &UNK_00400c39;
  _ZNSt3__15mutex4lockEv();
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    puStack_60 = &UNK_00400cbe;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_60 = &UNK_00400cc7;
      puVar10 = (uint *)func_0x0099bce0();
      uVar3 = *puVar10;
      unaff_R13 = (ulong)uVar3;
      param_4 = (byte *)0x1;
      puStack_60 = &UNK_00400cf3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apuStack_50,&UNK_00184b51,0x78,1,0,0xffffffff);
      puStack_60 = &UNK_00400cfb;
      uVar11 = _ZN7android4base10LogMessage6streamEv(apuStack_50);
      puStack_60 = &UNK_00400d0f;
      uVar11 = func_0x0032eb30(uVar11,&UNK_0016aff0,0x10);
      puStack_60 = &UNK_00400d1a;
      _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar11,param_2);
      puStack_60 = &UNK_00400d22;
      _ZN7android4base10LogMessageD2Ev(apuStack_50);
      *puVar10 = uVar3;
    }
  }
  puStack_60 = &UNK_00400c66;
  func_0x004006e0(apuStack_50,param_2);
  puStack_60 = &UNK_00400c71;
  ppuVar16 = apuStack_50;
  _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE14__erase_uniqueIS7_EEmRKT_
            (param_1 + 0x28);
  if (((byte)apuStack_50[0] & 1) != 0) {
    ppuVar16 = (undefined **)
               (CONCAT71(apuStack_50[0]._1_7_,(byte)apuStack_50[0]) & 0xfffffffffffffffe);
    puStack_60 = &UNK_00400c88;
    _ZdaPvSt11align_val_t(uStack_40);
  }
  puStack_60 = &UNK_00400c90;
  puVar14 = param_1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(undefined1 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined1 **)(in_FS_OFFSET + 0x28);
  }
  puStack_60 = &UNK_00400d2f;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_88 = param_1;
  ppuStack_80 = apuStack_50;
  uStack_78 = unaff_R13;
  uStack_70 = param_2;
  puStack_68 = param_1 + 0x28;
  puStack_60 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(ppuVar16);
  uStack_260 = (byte ******)0x0;
  uStack_258 = 0;
  lStack_250 = 0;
  bVar21 = (*param_4 & 1) != 0;
  pbStack_1f0 = param_4 + 1;
  if (bVar21) {
    pbStack_1f0 = *(byte **)(param_4 + 0x10);
  }
  uStack_1e8 = (ulong)(*param_4 >> 1);
  if (bVar21) {
    uStack_1e8 = *(ulong *)(param_4 + 8);
  }
  bVar21 = (*extraout_RDX & 1) != 0;
  pbStack_1e0 = extraout_RDX + 1;
  if (bVar21) {
    pbStack_1e0 = *(byte **)(extraout_RDX + 0x10);
  }
  uStack_1d8 = (ulong)(*extraout_RDX >> 1);
  if (bVar21) {
    uStack_1d8 = *(ulong *)(extraout_RDX + 8);
  }
  uStack_1d0 = 0x1ad;
  pppppbStack_1c0 = &ppppbStack_198;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  ppppbStack_198 = (byte ****)0x0;
  uStack_190 = 0;
  uStack_1b8 = 0x100;
  uStack_1b0 = 0;
  puStack_1a8 = &UNK_00358010;
  uStack_1a0 = 0;
  puStack_248 = &UNK_0015b132;
  puStack_240 = &UNK_0015b137;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 2;
  uStack_218 = 2;
  ppbStack_210 = &pbStack_1f0;
  uStack_208 = 0x1ad;
  ppppppbStack_220 = &pppppbStack_1c0;
  auStack_200[0] = 0;
  cStack_1f8 = '\0';
  ppuVar19 = &puStack_248;
  pppppppbVar17 = &ppppppbStack_220;
  pppppbStack_98 = pppppbStack_1c0;
  func_0x003580e0();
  if (cStack_1f8 == '\x01') {
    ppuVar19 = (undefined **)auStack_200;
    _ZNSt3__16localeD2Ev();
  }
  pppppbVar5 = pppppbStack_98;
  uVar7 = uStack_1b0;
  if (uStack_1b0 < 0xfffffffffffffff7) {
    if (uStack_1b0 < 0x17) {
      uStack_260 = (byte ******)CONCAT71(uStack_260._1_7_,(char)uStack_1b0 * '\x02');
      lVar13 = (long)&uStack_260 + 1;
    }
    else {
      lVar12 = 0x1a;
      if ((uStack_1b0 | 7) != 0x17) {
        lVar12 = (uStack_1b0 | 7) + 1;
      }
      lVar13 = _Znwm(lVar12);
      uStack_260 = (byte ******)(lVar12 + 1);
      uStack_258 = uVar7;
      lStack_250 = lVar13;
    }
    func_0x0099bd90(lVar13,pppppbVar5,uVar7);
    *(undefined1 *)(lVar13 + uVar7) = 0;
    if (pppppbVar5 != &ppppbStack_198) {
      _ZdaPvSt11align_val_t(pppppbVar5,uStack_1b8);
    }
    pppppppbVar17 = (byte *******)&uStack_260;
    lVar12 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                       (ppuVar16 + 5);
    if (lVar12 == 0) {
      *puVar14 = 0;
    }
    else {
      ppppppbStack_220 = (byte ******)&uStack_260;
      pppppbStack_1c0 = (byte *****)(ppuVar16 + 5);
      lVar13 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSC_EEENSR_IJEEEEEENSB_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEEDpOT_ENKUlSS_SQ_OST_OSU_E_clESS_SQ_S15_S16_
                         (&pppppbStack_1c0,&uStack_260,&_ZNSt3__119piecewise_constructE,
                          &ppppppbStack_220,&pbStack_1f0);
      pppppppbVar17 = (byte *******)(lVar13 + 0x28);
      _ZN11ServiceInfoC2ERKS_(puVar14);
    }
    puVar14[0xa8] = lVar12 != 0;
    if (((ulong)uStack_260 & 1) != 0) {
      pppppppbVar17 = (byte *******)((ulong)uStack_260 & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(lStack_250);
    }
    _ZNSt3__115recursive_mutex6unlockEv();
    ppuVar19 = ppuVar16;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
      return puVar14;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv();
  plVar20 = (long *)ppuVar19[7];
  if (plVar20 != (long *)0x0) {
    do {
      bVar1 = *(byte *)(plVar20 + 8);
      if ((bVar1 & 1) == 0) {
        ppppppbVar15 = (byte ******)(ulong)(bVar1 >> 1);
      }
      else {
        ppppppbVar15 = (byte ******)plVar20[9];
      }
      bVar2 = *(byte *)pppppppbVar17;
      if ((bVar2 & 1) == 0) {
        ppppppbVar18 = (byte ******)(ulong)(bVar2 >> 1);
      }
      else {
        ppppppbVar18 = pppppppbVar17[1];
      }
      if (ppppppbVar15 == ppppppbVar18) {
        if ((bVar1 & 1) == 0) {
          lVar12 = (long)plVar20 + 0x41;
        }
        else {
          lVar12 = plVar20[10];
        }
        ppppppbVar15 = (byte ******)((long)pppppppbVar17 + 1);
        if ((bVar2 & 1) != 0) {
          ppppppbVar15 = pppppppbVar17[2];
        }
        iVar9 = func_0x0099bf90(lVar12);
        if (iVar9 == 0) {
          ppuVar16 = *(undefined ***)(extraout_RDX_00 + 0x20);
          if (ppuVar16 == (undefined **)0x0) {
            func_0x00343f00();
            _ZNSt3__15mutex4lockEv();
            for (puVar4 = (undefined8 *)ppuVar16[7]; ppuVar19 = ppuVar16,
                puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
              pppppbVar5 = ppppppbVar15[4];
              if (pppppbVar5 == (byte *****)0x0) {
                func_0x00343f00();
                pcVar6 = (code *)swi(3);
                puVar14 = (undefined1 *)(*pcVar6)();
                return puVar14;
              }
              (*(code *)(*pppppbVar5)[6])(pppppbVar5,puVar4 + 5);
            }
            break;
          }
          (**(code **)(*ppuVar16 + 0x30))(ppuVar16,plVar20 + 5);
        }
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  puVar14 = (undefined1 *)pthread_mutex_unlock(ppuVar19);
  return puVar14;
}


