// Function: _ZN4mdns18DiscoveredServices12FindInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// Address: 00400d30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZN4mdns18DiscoveredServices12FindInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
          (undefined1 *param_1,undefined **param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *****pppppbVar4;
  code *pcVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long extraout_RDX;
  byte ******ppppppbVar11;
  byte *******pppppppbVar12;
  byte ******ppppppbVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long *plVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte ******ppppppbStack_1c8;
  undefined8 uStack_1c0;
  byte **ppbStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  char cStack_1a0;
  byte *pbStack_198;
  ulong uStack_190;
  byte *pbStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  byte *****pppppbStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  byte ****ppppbStack_140;
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
  byte *****pppppbStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv(param_2);
  uStack_208 = (byte ******)0x0;
  uStack_200 = 0;
  lStack_1f8 = 0;
  bVar17 = (*param_4 & 1) != 0;
  pbStack_198 = param_4 + 1;
  if (bVar17) {
    pbStack_198 = *(byte **)(param_4 + 0x10);
  }
  uStack_190 = (ulong)(*param_4 >> 1);
  if (bVar17) {
    uStack_190 = *(ulong *)(param_4 + 8);
  }
  bVar17 = (*param_3 & 1) != 0;
  pbStack_188 = param_3 + 1;
  if (bVar17) {
    pbStack_188 = *(byte **)(param_3 + 0x10);
  }
  uStack_180 = (ulong)(*param_3 >> 1);
  if (bVar17) {
    uStack_180 = *(ulong *)(param_3 + 8);
  }
  uStack_178 = 0x1ad;
  pppppbStack_168 = &ppppbStack_140;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  ppppbStack_140 = (byte ****)0x0;
  uStack_138 = 0;
  uStack_160 = 0x100;
  uStack_158 = 0;
  puStack_150 = &UNK_00358010;
  uStack_148 = 0;
  puStack_1f0 = &UNK_0015b132;
  puStack_1e8 = &UNK_0015b137;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 2;
  uStack_1c0 = 2;
  ppbStack_1b8 = &pbStack_198;
  uStack_1b0 = 0x1ad;
  ppppppbStack_1c8 = &pppppbStack_168;
  auStack_1a8[0] = 0;
  cStack_1a0 = '\0';
  ppuVar14 = &puStack_1f0;
  pppppppbVar12 = &ppppppbStack_1c8;
  pppppbStack_40 = pppppbStack_168;
  func_0x003580e0();
  if (cStack_1a0 == '\x01') {
    ppuVar14 = (undefined **)auStack_1a8;
    _ZNSt3__16localeD2Ev();
  }
  pppppbVar4 = pppppbStack_40;
  uVar6 = uStack_158;
  if (uStack_158 < 0xfffffffffffffff7) {
    if (uStack_158 < 0x17) {
      uStack_208 = (byte ******)CONCAT71(uStack_208._1_7_,(char)uStack_158 * '\x02');
      lVar9 = (long)&uStack_208 + 1;
    }
    else {
      lVar8 = 0x1a;
      if ((uStack_158 | 7) != 0x17) {
        lVar8 = (uStack_158 | 7) + 1;
      }
      lVar9 = _Znwm(lVar8);
      uStack_208 = (byte ******)(lVar8 + 1);
      uStack_200 = uVar6;
      lStack_1f8 = lVar9;
    }
    func_0x0099bd90(lVar9,pppppbVar4,uVar6);
    *(undefined1 *)(lVar9 + uVar6) = 0;
    if (pppppbVar4 != &ppppbStack_140) {
      _ZdaPvSt11align_val_t(pppppbVar4,uStack_160);
    }
    pppppppbVar12 = (byte *******)&uStack_208;
    lVar8 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                      (param_2 + 5);
    if (lVar8 == 0) {
      *param_1 = 0;
    }
    else {
      ppppppbStack_1c8 = (byte ******)&uStack_208;
      pppppbStack_168 = (byte *****)(param_2 + 5);
      lVar9 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSC_EEENSR_IJEEEEEENSB_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEEDpOT_ENKUlSS_SQ_OST_OSU_E_clESS_SQ_S15_S16_
                        (&pppppbStack_168,&uStack_208,&_ZNSt3__119piecewise_constructE,
                         &ppppppbStack_1c8,&pbStack_198);
      pppppppbVar12 = (byte *******)(lVar9 + 0x28);
      _ZN11ServiceInfoC2ERKS_(param_1);
    }
    param_1[0xa8] = lVar8 != 0;
    if (((ulong)uStack_208 & 1) != 0) {
      pppppppbVar12 = (byte *******)((ulong)uStack_208 & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(lStack_1f8);
    }
    _ZNSt3__115recursive_mutex6unlockEv();
    ppuVar14 = param_2;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv();
  plVar16 = (long *)ppuVar14[7];
  if (plVar16 != (long *)0x0) {
    do {
      bVar1 = *(byte *)(plVar16 + 8);
      if ((bVar1 & 1) == 0) {
        ppppppbVar11 = (byte ******)(ulong)(bVar1 >> 1);
      }
      else {
        ppppppbVar11 = (byte ******)plVar16[9];
      }
      bVar2 = *(byte *)pppppppbVar12;
      if ((bVar2 & 1) == 0) {
        ppppppbVar13 = (byte ******)(ulong)(bVar2 >> 1);
      }
      else {
        ppppppbVar13 = pppppppbVar12[1];
      }
      if (ppppppbVar11 == ppppppbVar13) {
        if ((bVar1 & 1) == 0) {
          lVar8 = (long)plVar16 + 0x41;
        }
        else {
          lVar8 = plVar16[10];
        }
        ppppppbVar11 = (byte ******)((long)pppppppbVar12 + 1);
        if ((bVar2 & 1) != 0) {
          ppppppbVar11 = pppppppbVar12[2];
        }
        iVar7 = func_0x0099bf90(lVar8);
        if (iVar7 == 0) {
          ppuVar15 = *(undefined ***)(extraout_RDX + 0x20);
          if (ppuVar15 == (undefined **)0x0) {
            func_0x00343f00();
            _ZNSt3__15mutex4lockEv();
            for (puVar3 = (undefined8 *)ppuVar15[7]; ppuVar14 = ppuVar15,
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
              pppppbVar4 = ppppppbVar11[4];
              if (pppppbVar4 == (byte *****)0x0) {
                func_0x00343f00();
                pcVar5 = (code *)swi(3);
                puVar10 = (undefined1 *)(*pcVar5)();
                return puVar10;
              }
              (*(code *)(*pppppbVar4)[6])(pppppbVar4,puVar3 + 5);
            }
            break;
          }
          (**(code **)(*ppuVar15 + 0x30))(ppuVar15,plVar16 + 5);
        }
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  puVar10 = (undefined1 *)pthread_mutex_unlock(ppuVar14);
  return puVar10;
}


