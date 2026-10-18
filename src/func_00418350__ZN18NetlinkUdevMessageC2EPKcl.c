// Function: _ZN18NetlinkUdevMessageC2EPKcl
// Address: 00418350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long **** _ZN18NetlinkUdevMessageC2EPKcl(long ****param_1,long ****param_2,ulong param_3)

{
  undefined4 uVar1;
  long ***ppplVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long ****pppplVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  long ****pppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  ulong uVar12;
  long ****pppplVar13;
  long in_FS_OFFSET;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined8 uStack_80;
  long ***ppplStack_78;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  long ***ppplStack_58;
  long ***ppplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  ppplStack_38 = *(long ****)(in_FS_OFFSET + 0x28);
  param_1[2] = (long ***)0x0;
  param_1[3] = (long ***)0x0;
  *param_1 = (long ***)0x0;
  param_1[1] = (long ***)0x0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  pppplVar9 = param_2;
  pppplVar10 = param_1;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    pppplVar10 = (long ****)0x1;
    pppplVar9 = (long ****)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar7;
      pppplVar10 = (long ****)auStack_68;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppplVar10,&UNK_0015b377,0x16,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(pppplVar10);
      pppplVar9 = (long ****)&UNK_00178c86;
      func_0x0032eb30(uVar8,&UNK_00178c86,0x15);
      _ZN7android4base10LogMessageD2Ev();
      *puVar7 = uVar1;
    }
  }
  if (0 < (long)param_3) {
    pppplVar13 = param_2;
    if ((8 < param_3) && (*param_2 == (long ***)0x7665647562696c)) {
      if (param_3 < 0x29) goto code_r0x004186e8;
      pppplVar13 = param_2 + 5;
    }
    for (; pppplVar13 < (long ****)((long)param_2 + param_3);
        pppplVar13 = (long ****)((long)pppplVar13 + uVar4 + 1)) {
      uVar4 = func_0x0099bcf0(pppplVar13);
      pppplVar9 = (long ****)0x3d;
      pppplVar10 = pppplVar13;
      lVar5 = func_0x0099c070(pppplVar13,0x3d,uVar4);
      if ((lVar5 != 0) && (uVar11 = lVar5 - (long)pppplVar13, uVar11 != 0xffffffffffffffff)) {
        auStack_68 = (undefined1  [8])0x0;
        uStack_60 = 0;
        ppplStack_58 = (long ***)0x0;
        uVar12 = uVar11;
        if (uVar4 < uVar11) {
          uVar12 = uVar4;
        }
        if (uVar12 < 0xfffffffffffffff7) {
          if (uVar12 < 0x17) {
            auStack_68._1_7_ = 0;
            auStack_68[0] = (char)uVar12 * '\x02';
            pppplVar10 = (long ****)(auStack_68 + 1);
          }
          else {
            lVar5 = (uVar12 | 7) + 1;
            if ((uVar12 | 7) == 0x17) {
              lVar5 = 0x1a;
            }
            pppplVar10 = (long ****)_Znwm(lVar5);
            auStack_68 = (undefined1  [8])(lVar5 + 1);
            uStack_60 = uVar12;
            ppplStack_58 = (long ***)pppplVar10;
          }
          pppplVar9 = pppplVar13;
          func_0x0099bda0(pppplVar10,pppplVar13,uVar12);
          *(undefined1 *)((long)pppplVar10 + uVar12) = 0;
          _auStack_88 = 0;
          uStack_80 = 0;
          ppplStack_78 = (long ***)0x0;
          if (uVar11 < uVar4) {
            uVar12 = uVar4 - (uVar11 + 1);
            if (uVar12 < 0xfffffffffffffff7) {
              if (uVar12 < 0x17) {
                _auStack_88 = (ulong)(byte)((char)uVar12 * '\x02');
                pppplVar6 = (long ****)(auStack_88 + 1);
              }
              else {
                lVar5 = (uVar12 | 7) + 1;
                if ((uVar12 | 7) == 0x17) {
                  lVar5 = 0x1a;
                }
                pppplVar6 = (long ****)_Znwm(lVar5);
                _auStack_88 = lVar5 + 1;
                uStack_80 = uVar12;
                ppplStack_78 = (long ***)pppplVar6;
              }
              pppplVar9 = (long ****)((long)pppplVar13 + uVar11 + 1);
              pppplVar10 = pppplVar6;
              func_0x0099bd90(pppplVar6,pppplVar9,uVar12);
              *(undefined1 *)((long)pppplVar6 + uVar12) = 0;
              uVar11 = uStack_60;
              if (((ulong)auStack_68 & 1) == 0) {
                uVar11 = (ulong)auStack_68 >> 1 & 0x7f;
              }
              if (uVar11 == 0) {
                if ((_auStack_88 & 1) != 0) {
                  pppplVar9 = (long ****)(_auStack_88 & 0xfffffffffffffffe);
                  pppplVar10 = (long ****)ppplStack_78;
                  _ZdaPvSt11align_val_t(ppplStack_78,pppplVar9);
                }
              }
              else {
                if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2))
                   && (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')
                   ) {
                  puVar7 = (undefined4 *)func_0x0099bce0();
                  uVar1 = *puVar7;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (&ppplStack_40,&UNK_0015b377,0x3e,1,0,0xffffffff);
                  uVar8 = _ZN7android4base10LogMessage6streamEv(&ppplStack_40);
                  uVar8 = func_0x0032eb30(uVar8,&UNK_00157a4b,10);
                  uVar8 = func_0x0032e5a0(uVar8,auStack_68);
                  uVar8 = func_0x0032eb30(uVar8,&UNK_0016153d,5);
                  uVar8 = func_0x0032e5a0(uVar8,auStack_88);
                  func_0x0032eb30(uVar8,&UNK_00162c6d,1);
                  _ZN7android4base10LogMessageD2Ev(&ppplStack_40);
                  *puVar7 = uVar1;
                }
                pppplVar9 = (long ****)auStack_68;
                pppplVar10 = &ppplStack_40;
                ppplStack_48 = (long ***)pppplVar9;
                ppplStack_40 = (long ***)param_1;
                lVar5 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SP_OSS_OST_E_clES14_SP_S15_S16_
                                  (pppplVar10,pppplVar9,&_ZNSt3__119piecewise_constructE,
                                   &ppplStack_48);
                if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
                  pppplVar10 = *(long *****)(lVar5 + 0x38);
                  pppplVar9 = (long ****)(*(ulong *)(lVar5 + 0x28) & 0xfffffffffffffffe);
                  _ZdaPvSt11align_val_t(pppplVar10,pppplVar9);
                }
                *(long ****)(lVar5 + 0x38) = ppplStack_78;
                *(undefined1 (*) [4])(lVar5 + 0x28) = auStack_88;
                *(undefined4 *)(lVar5 + 0x2c) = uStack_84;
                *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_80;
                *(undefined4 *)(lVar5 + 0x34) = uStack_80._4_4_;
              }
              if (((ulong)auStack_68 & 1) != 0) {
                pppplVar9 = (long ****)((ulong)auStack_68 & 0xfffffffffffffffe);
                pppplVar10 = (long ****)ppplStack_58;
                _ZdaPvSt11align_val_t(ppplStack_58,pppplVar9);
              }
              goto code_r0x004183f0;
            }
            goto code_r0x0041878a;
          }
        }
        else {
code_r0x0041878a:
          func_0x0032e8f0();
        }
        pppplVar10 = (long ****)&UNK_001705cc;
        func_0x0032fc70();
        goto code_r0x0041879b;
      }
code_r0x004183f0:
    }
  }
code_r0x004186e8:
  if (*(long *****)(in_FS_OFFSET + 0x28) == (long ****)ppplStack_38) {
    return *(long *****)(in_FS_OFFSET + 0x28);
  }
code_r0x0041879b:
  func_0x0099bd00();
  lVar5 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    (pppplVar9,extraout_RDX);
  if (lVar5 == 0) {
    *(undefined2 *)pppplVar10 = 0;
  }
  else if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
    pppplVar10[2] = *(long ****)(lVar5 + 0x38);
    ppplVar2 = *(long ****)(lVar5 + 0x30);
    *pppplVar10 = *(long ****)(lVar5 + 0x28);
    pppplVar10[1] = ppplVar2;
  }
  else {
    func_0x00330340(pppplVar10,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(lVar5 + 0x30));
  }
  return pppplVar10;
}


