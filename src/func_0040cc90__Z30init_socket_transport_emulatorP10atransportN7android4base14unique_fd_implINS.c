// Function: _Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
// Address: 0040cc90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined *
_Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
          (undefined8 param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  uint *******pppppppuVar8;
  uint *puVar9;
  long lVar10;
  uint *******pppppppuVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  int iVar14;
  uint *******pppppppuVar15;
  ulong extraout_RDX;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint *******pppppppuVar18;
  long in_FS_OFFSET;
  uint uStack_c8;
  uint uStack_c4;
  long lStack_c0;
  uint *puStack_b8;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_80;
  uint uStack_74;
  uint *******apppppppuStack_70 [2];
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  uint uStack_48;
  undefined1 uStack_41;
  uint *******pppppppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = &UNK_0040ccc4;
  uStack_48 = param_3;
  pppppppuVar8 = (uint *******)_Znwm(0x20);
  uVar3 = *param_2;
  *param_2 = 0xffffffff;
  puStack_90 = &UNK_0040ccd5;
  puVar9 = (uint *)func_0x0099bce0();
  apppppppuStack_70[0] = (uint *******)CONCAT44(apppppppuStack_70[0]._4_4_,uVar3);
  puStack_90 = &UNK_0040cce8;
  _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE
            (pppppppuVar8,apppppppuStack_70);
  uVar7 = *puVar9;
  pppppppuVar18 = (uint *******)(ulong)uVar7;
  if ((int)apppppppuStack_70[0] != -1) {
    puStack_90 = &UNK_0040ccf8;
    func_0x0099bd10();
  }
  *puVar9 = uVar7;
  *pppppppuVar8 = (uint ******)0x99f1e8;
  *(uint *)(pppppppuVar8 + 3) = param_3;
  puStack_90 = &UNK_0040cd19;
  lVar10 = _Znwm(0xc0);
  puStack_90 = &UNK_0040cd2c;
  apppppppuStack_70[0] = pppppppuVar8;
  _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
            (lVar10,apppppppuStack_70);
  pppppppuVar15 = apppppppuStack_70[0];
  apppppppuStack_70[0] = (uint *******)0x0;
  if (pppppppuVar15 != (uint *******)0x0) {
    puStack_90 = &UNK_0040cd43;
    (*(code *)(*pppppppuVar15)[1])();
  }
  puStack_90 = &UNK_0040cd51;
  lStack_58 = lVar10;
  plStack_50 = (long *)_Znwm(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = 0x99f240;
  plStack_50[3] = lVar10;
  puStack_90 = &UNK_0040cd7a;
  _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE(param_1,&lStack_58);
  plVar5 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      puStack_90 = &UNK_0040cd9e;
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      puStack_90 = &UNK_0040cda6;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar4 = uRam0000000000a00850;
  puStack_90 = &UNK_0040cdb5;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
  uVar7 = uStack_48;
  if ((pppppppuRam0000000000a00860 != (uint *******)0x0) && (lRam0000000000a00870 != 0)) {
    pppppppuVar8 = (uint *******)(long)(int)uStack_48;
    uVar2 = (long)pppppppuRam0000000000a00860 - 1;
    if (((ulong)pppppppuRam0000000000a00860 & uVar2) == 0) {
      pppppppuVar15 = (uint *******)(uVar2 & (ulong)pppppppuVar8);
    }
    else {
      pppppppuVar15 = pppppppuVar8;
      if (pppppppuRam0000000000a00860 <= pppppppuVar8) {
        if (((ulong)pppppppuVar8 | (ulong)pppppppuRam0000000000a00860) >> 0x20 == 0) {
          pppppppuVar15 =
               (uint *******)((ulong)uStack_48 % ((ulong)pppppppuRam0000000000a00860 & 0xffffffff));
        }
        else {
          pppppppuVar15 = (uint *******)((ulong)pppppppuVar8 % (ulong)pppppppuRam0000000000a00860);
        }
      }
    }
    puVar17 = *(undefined8 **)(lRam0000000000a00858 + (long)pppppppuVar15 * 8);
    if (puVar17 != (undefined8 *)0x0) {
      for (puVar17 = (undefined8 *)*puVar17; puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)*puVar17) {
        pppppppuVar11 = (uint *******)puVar17[1];
        if (pppppppuVar11 == pppppppuVar8) {
          if (*(uint *)(puVar17 + 2) == uStack_48) {
            pppppppuVar18 = (uint *******)puVar17[3];
            if (pppppppuVar18 != (uint *******)0x0) {
              puVar13 = (undefined *)0xffffffff;
              pppppppuVar11 = pppppppuRam0000000000a00860;
              if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
                pppppppuVar11 = (uint *******)0x0;
                puStack_90 = &UNK_0040ced0;
                cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
                if (cVar6 != '\0') {
                  uStack_74 = *puVar9;
                  puStack_90 = &UNK_0040cf00;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (&pppppppuStack_40,&UNK_0015b284,0x133,1,0,0xffffffff);
                  puStack_90 = &UNK_0040cf09;
                  uStack_80 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_40);
                  puStack_90 = &UNK_0040cf25;
                  pppppppuVar15 = pppppppuVar18;
                  _ZN7android4base12StringPrintfEPKcz(apppppppuStack_70,&UNK_0017a294,uVar7);
                  pppppppuVar11 = (uint *******)apppppppuStack_70;
                  puStack_90 = &UNK_0040cf32;
                  func_0x0032e5a0(uStack_80);
                  if (((ulong)apppppppuStack_70[0] & 1) != 0) {
                    pppppppuVar11 = (uint *******)((ulong)apppppppuStack_70[0] & 0xfffffffffffffffe)
                    ;
                    puStack_90 = &UNK_0040cf49;
                    _ZdaPvSt11align_val_t(uStack_60);
                  }
                  puStack_90 = &UNK_0040cf52;
                  _ZN7android4base10LogMessageD2Ev(&pppppppuStack_40);
                  *puVar9 = uStack_74;
                }
              }
              goto code_r0x0040cf8b;
            }
            break;
          }
        }
        else {
          if (((ulong)pppppppuRam0000000000a00860 & uVar2) == 0) {
            pppppppuVar11 = (uint *******)((ulong)pppppppuVar11 & uVar2);
          }
          else if (pppppppuRam0000000000a00860 <= pppppppuVar11) {
            if (((ulong)pppppppuVar11 | (ulong)pppppppuRam0000000000a00860) >> 0x20 != 0) {
              if ((uint *******)((ulong)pppppppuVar11 % (ulong)pppppppuRam0000000000a00860) ==
                  pppppppuVar15) goto code_r0x0040ce36;
              break;
            }
            pppppppuVar11 =
                 (uint *******)
                 (((ulong)pppppppuVar11 & 0xffffffff) %
                 ((ulong)pppppppuRam0000000000a00860 & 0xffffffff));
          }
          if (pppppppuVar11 != pppppppuVar15) break;
        }
code_r0x0040ce36:
      }
    }
  }
  pppppppuVar11 = (uint *******)&uStack_48;
  apppppppuStack_70[0] = (uint *******)0xa00858;
  pppppppuVar15 = (uint *******)&pppppppuStack_40;
  puStack_90 = &UNK_0040cf84;
  pppppppuStack_40 = pppppppuVar11;
  lVar10 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
                     (apppppppuStack_70,pppppppuVar11,&_ZNSt3__119piecewise_constructE,pppppppuVar15
                      ,&uStack_41);
  *(undefined8 *)(lVar10 + 0x18) = param_1;
  puVar13 = (undefined *)0x0;
code_r0x0040cf8b:
  iVar14 = (int)pppppppuVar15;
  puStack_90 = &UNK_0040cf93;
  uVar16 = uVar4;
  _ZNSt3__115recursive_mutex6unlockEv(uVar4);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar13;
  }
  puStack_90 = &UNK_0040cfb9;
  func_0x0099bd00();
  uStack_98 = uVar4;
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)pppppppuVar11;
  *(uint *)pppppppuVar11 = 0xffffffff;
  puStack_b8 = puVar9;
  pppppppuStack_b0 = pppppppuVar8;
  pppppppuStack_a8 = pppppppuVar18;
  puStack_a0 = puVar13;
  puStack_90 = &stack0xfffffffffffffff8;
  puVar12 = (undefined4 *)func_0x0099bce0();
  if (iVar14 == 0) {
    uStack_c8 = uVar7;
    _Z25init_socket_transport_tcpP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEE
              (uVar16,&uStack_c8);
    uVar3 = *puVar12;
    puVar13 = (undefined *)0x0;
    uVar7 = uStack_c8;
  }
  else {
    uStack_c4 = uVar7;
    uVar7 = _Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
                      (uVar16,&uStack_c4,extraout_RDX & 0xffffffff);
    puVar13 = (undefined *)(ulong)uVar7;
    uVar3 = *puVar12;
    uVar7 = uStack_c4;
  }
  puVar17 = (undefined8 *)(ulong)uVar7;
  if (uVar7 != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar12 = uVar3;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_c0) {
    func_0x0099bd00();
    *puVar17 = &UNK_0099f278;
    if ((*(byte *)(puVar17 + 1) & 1) == 0) {
      return &UNK_0099f278;
    }
    puVar13 = (undefined *)free(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
    return puVar13;
  }
  return puVar13;
}


