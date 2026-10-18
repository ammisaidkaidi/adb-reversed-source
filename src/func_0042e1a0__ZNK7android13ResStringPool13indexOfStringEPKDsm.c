// Function: _ZNK7android13ResStringPool13indexOfStringEPKDsm
// Address: 0042e1a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long ** _ZNK7android13ResStringPool13indexOfStringEPKDsm
                  (long **param_1,long *param_2,long *param_3,long **param_4)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long in_FS_OFFSET;
  long lStack_b8;
  long **pplStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2[1] == 0) {
    lVar14 = param_2[3];
    uVar16 = *(uint *)(lVar14 + 0x10);
    if ((uVar16 & 0x100) == 0) {
      uVar8 = *(int *)(lVar14 + 8) - 1;
      if ((uVar16 & 1) == 0) {
        lVar14 = param_2[0x25];
        if ((char)lVar14 == '\x01') {
          pplVar11 = (long **)(param_2 + 7);
          func_0x0099c500();
          pplVar10 = (long **)(param_2 + 0x20);
          plStack_58 = param_3;
          uStack_50 = param_4;
          lVar6 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
                            (pplVar10,&plStack_58);
          if (lVar6 != 0) {
            param_1[1] = (long *)(long)*(int *)(lVar6 + 0x20);
            *(undefined4 *)(param_1 + 2) = 0;
            func_0x0099c510();
            goto code_r0x0042e7af;
          }
          uVar8 = uVar8 - (int)param_2[0x23];
          pplVar12 = (long **)(param_2 + 7);
          if (-1 < (int)uVar8) goto code_r0x0042e44c;
code_r0x0042e787:
          bVar1 = false;
          pplVar11 = pplVar10;
        }
        else {
          pplVar12 = (long **)0x0;
          pplVar10 = param_1;
          if ((int)uVar8 < 0) goto code_r0x0042e787;
code_r0x0042e44c:
          pplVar10 = (long **)(ulong)uVar8;
          do {
            uStack_48 = (long **)0x0;
            uStack_40 = 0;
            plStack_58 = (long *)0x0;
            uStack_50 = (long **)0x0;
            pplVar11 = &plStack_58;
            (**(code **)(*param_2 + 0x10))(&plStack_58,param_2,pplVar10);
            iVar3 = (int)uStack_40;
            if ((int)uStack_40 == 0) {
              if ((char)param_2[0x25] == '\x01') {
                uStack_78 = (undefined4)uStack_50;
                iStack_74 = uStack_50._4_4_;
                uStack_70 = (undefined4)uStack_48;
                uStack_6c = uStack_48._4_4_;
                uStack_68 = SUB84(pplVar10,0);
                plStack_80 = param_2 + 0x20;
                pplVar11 = &plStack_80;
                _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
                          (pplVar11,&uStack_78);
                if ((int)uStack_40 != 0) goto code_r0x0042e80f;
              }
              if ((param_4 == uStack_48) &&
                 (pplVar11 = uStack_50, iVar5 = strzcmp16(uStack_50,param_4,param_3,param_4),
                 pplVar9 = pplVar10, iVar5 == 0)) goto code_r0x0042e515;
            }
            else {
              if ((int)uStack_40 != 1) goto code_r0x0042e80f;
              pplVar9 = uStack_50;
              if (uStack_50._4_4_ == 1) {
code_r0x0042e515:
                param_1[1] = (long *)pplVar9;
                *(int *)(param_1 + 2) = iVar3;
                bVar1 = true;
                pplVar11 = param_1;
                goto code_r0x0042e789;
              }
            }
            bVar1 = 0 < (long)pplVar10;
            pplVar10 = (long **)((long)pplVar10 + -1);
          } while (bVar1);
          bVar1 = false;
        }
code_r0x0042e789:
        pplStack_90 = pplVar11;
        if ((char)lVar14 != '\0') {
          func_0x0099c510();
          pplStack_90 = pplVar12;
        }
        goto code_r0x0042e796;
      }
      uVar13 = (ulong)uVar8;
      lVar14 = 0;
      do {
        pplVar12 = (long **)((uVar13 - lVar14 >> 1) + lVar14);
        uStack_48 = (long **)0x0;
        uStack_40 = 0;
        plStack_58 = (long *)0x0;
        uStack_50 = (long **)0x0;
        pplVar11 = &plStack_58;
        (**(code **)(*param_2 + 0x10))(pplVar11,param_2,pplVar12);
        iVar3 = (int)uStack_40;
        if ((int)uStack_40 == 0) {
          pplStack_90 = uStack_50;
          iVar5 = strzcmp16(uStack_50,uStack_48,param_3,param_4);
          pplVar11 = pplStack_90;
          pplVar10 = pplVar12;
          if (iVar5 == 0) goto code_r0x0042e3d0;
        }
        else {
          if ((int)uStack_40 != 1) goto code_r0x0042e80f;
          iVar5 = -1;
          pplStack_90 = pplVar11;
          pplVar10 = uStack_50;
          if (uStack_50._4_4_ == 1) {
code_r0x0042e3d0:
            param_1[1] = (long *)pplVar10;
            *(int *)(param_1 + 2) = iVar3;
            goto code_r0x0042e7af;
          }
        }
        lVar6 = (long)pplVar12 + 1;
        if (-1 < iVar5) {
          uVar13 = (long)pplVar12 - 1;
          lVar6 = lVar14;
        }
        lVar14 = lVar6;
      } while (lVar14 <= (long)uVar13);
    }
    else {
      if ((uVar16 & 1) != 0) {
        lVar6 = (long)param_4 + 4;
        if (lVar6 == 0) {
          lStack_b8 = 0;
          pplStack_90 = (long **)0x0;
        }
        else {
          if (lVar6 < 0) goto code_r0x0042e819;
          pplStack_90 = (long **)_Znwm(lVar6 * 2);
          lStack_b8 = (long)pplStack_90 + lVar6 * 2;
          func_0x0099bdb0(pplStack_90,0,lVar6 * 2);
        }
        uVar13 = (ulong)(*(int *)(lVar14 + 8) - 1);
        lVar14 = 0;
        do {
          pplVar12 = (long **)((uVar13 - lVar14 >> 1) + lVar14);
          uStack_48 = (long **)0x0;
          uStack_40 = 0;
          plStack_58 = (long *)0x0;
          uStack_50 = (long **)0x0;
          pplVar11 = &plStack_58;
          (**(code **)(*param_2 + 0x18))(pplVar11,param_2,pplVar12);
          iVar3 = (int)uStack_40;
          if ((int)uStack_40 == 0) {
            lVar7 = utf8_to_utf16(uStack_50,uStack_48,pplStack_90,lVar6);
            iVar5 = strzcmp16(pplStack_90,lVar7 - (long)pplStack_90 >> 1,param_3,param_4);
            pplVar11 = pplVar12;
            if (iVar5 == 0) goto code_r0x0042e6fb;
          }
          else {
            if ((int)uStack_40 != 1) goto code_r0x0042e80f;
            iVar5 = -1;
            pplVar11 = uStack_50;
            if (uStack_50._4_4_ == 1) {
code_r0x0042e6fb:
              param_1[1] = (long *)pplVar11;
              *(int *)(param_1 + 2) = iVar3;
              bVar1 = false;
              goto code_r0x0042e710;
            }
          }
          uVar4 = (long)pplVar12 - 1;
          if (iVar5 < 0) {
            lVar14 = (long)pplVar12 + 1;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
        } while (lVar14 <= (long)uVar13);
        bVar1 = true;
code_r0x0042e710:
        if (pplStack_90 != (long **)0x0) {
          _ZdaPvSt11align_val_t(pplStack_90,lStack_b8 - (long)pplStack_90);
        }
        pplVar11 = pplStack_90;
        if (bVar1) goto code_r0x0042e79a;
        goto code_r0x0042e7af;
      }
      uVar16 = *(int *)(lVar14 + 8) - 1;
      plStack_88 = (long *)0x0;
      _ZN7android7String8C2EPKDsm(&plStack_88,param_3,param_4);
      pplVar12 = (long **)_ZNK7android7String86lengthEv(&plStack_88);
      lVar14 = param_2[0x25];
      if ((char)lVar14 == '\x01') {
        plVar15 = param_2 + 7;
        func_0x0099c500(plVar15);
        plVar2 = plStack_88;
        uStack_50 = (long **)_ZNK7android7String86lengthEv(&plStack_88);
        plStack_58 = plVar2;
        lVar6 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
                          (param_2 + 0x1b,&plStack_58);
        if (lVar6 != 0) {
          param_1[1] = (long *)(long)*(int *)(lVar6 + 0x20);
          *(undefined4 *)(param_1 + 2) = 0;
          func_0x0099c510(plVar15);
          pplVar11 = &plStack_88;
          _ZN7android7String8D2Ev();
          goto code_r0x0042e7af;
        }
        uVar16 = uVar16 - (int)param_2[0x1e];
        if (-1 < (int)uVar16) goto code_r0x0042e545;
code_r0x0042e7ee:
        bVar1 = false;
      }
      else {
        plVar15 = (long *)0x0;
        if ((int)uVar16 < 0) goto code_r0x0042e7ee;
code_r0x0042e545:
        pplVar10 = (long **)(ulong)uVar16;
        do {
          uStack_48 = (long **)0x0;
          uStack_40 = 0;
          plStack_58 = (long *)0x0;
          uStack_50 = (long **)0x0;
          pplVar11 = &plStack_58;
          (**(code **)(*param_2 + 0x18))(&plStack_58,param_2,pplVar10);
          iVar3 = (int)uStack_40;
          if ((int)uStack_40 == 0) {
            if ((char)param_2[0x25] == '\x01') {
              uStack_78 = (undefined4)uStack_50;
              iStack_74 = uStack_50._4_4_;
              uStack_70 = (undefined4)uStack_48;
              uStack_6c = uStack_48._4_4_;
              uStack_68 = SUB84(pplVar10,0);
              plStack_80 = param_2 + 0x1b;
              pplVar11 = &plStack_80;
              _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
                        (pplVar11,&uStack_78);
              if ((int)uStack_40 != 0) goto code_r0x0042e80f;
            }
            if ((pplVar12 == uStack_48) &&
               (iVar5 = func_0x0099bf90(uStack_50,plStack_88,pplVar12), pplVar11 = pplVar10,
               iVar5 == 0)) goto code_r0x0042e60f;
          }
          else {
            if ((int)uStack_40 != 1) goto code_r0x0042e80f;
            pplVar11 = uStack_50;
            if (uStack_50._4_4_ == 1) {
code_r0x0042e60f:
              param_1[1] = (long *)pplVar11;
              *(int *)(param_1 + 2) = iVar3;
              bVar1 = true;
              goto joined_r0x0042e755;
            }
          }
          bVar1 = 0 < (long)pplVar10;
          pplVar10 = (long **)((long)pplVar10 + -1);
        } while (bVar1);
        bVar1 = false;
      }
joined_r0x0042e755:
      if ((char)lVar14 != '\0') {
        func_0x0099c510(plVar15);
      }
      pplStack_90 = &plStack_88;
      _ZN7android7String8D2Ev();
code_r0x0042e796:
      pplVar11 = pplStack_90;
      if (bVar1) goto code_r0x0042e7af;
    }
code_r0x0042e79a:
    *(undefined8 *)((long)param_1 + 0xc) = 0x100000000;
    pplVar11 = pplStack_90;
  }
  else {
    *(undefined8 *)((long)param_1 + 0xc) = 0x100000000;
    pplVar11 = param_1;
  }
code_r0x0042e7af:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  goto code_r0x0042e814;
code_r0x0042e80f:
  func_0x0043f2f0();
code_r0x0042e814:
  func_0x0099bd00();
  param_1 = pplVar11;
code_r0x0042e819:
  func_0x00330ca0();
  if (*(int *)(param_1 + 1) != 0) {
    return (long **)0x0;
  }
  return (long **)(ulong)*(uint *)(param_1[3] + 1);
}


