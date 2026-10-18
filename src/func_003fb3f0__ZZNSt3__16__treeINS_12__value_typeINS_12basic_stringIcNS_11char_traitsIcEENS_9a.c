// Function: _ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
// Address: 003fb3f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
          (long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  param_1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    plVar8 = param_1 + 1;
    plVar6 = plVar8;
  }
  else {
    bVar11 = (*param_2 & 1) != 0;
    pbVar10 = param_2 + 1;
    if (bVar11) {
      pbVar10 = *(byte **)(param_2 + 0x10);
    }
    uVar9 = (ulong)(*param_2 >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        plVar8 = plVar2;
        bVar11 = (*(byte *)(plVar8 + 4) & 1) != 0;
        lVar7 = (long)plVar8 + 0x21;
        if (bVar11) {
          lVar7 = plVar8[6];
        }
        uVar5 = (ulong)(*(byte *)(plVar8 + 4) >> 1);
        if (bVar11) {
          uVar5 = plVar8[5];
        }
        uVar3 = uVar9;
        if (uVar5 < uVar9) {
          uVar3 = uVar5;
        }
        iVar1 = func_0x0099c3a0(pbVar10,lVar7,uVar3);
        if (iVar1 != 0) break;
        if (uVar9 == uVar5) {
          uVar4 = 0;
          goto code_r0x003fb521;
        }
        if (uVar5 <= uVar9) goto code_r0x003fb430;
code_r0x003fb48b:
        plVar2 = (long *)*plVar8;
        plVar6 = plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto code_r0x003fb4a7;
      }
      if (iVar1 < 0) goto code_r0x003fb48b;
code_r0x003fb430:
      plVar2 = (long *)plVar8[1];
    } while ((long *)plVar8[1] != (long *)0x0);
    plVar6 = plVar8 + 1;
  }
code_r0x003fb4a7:
  plVar2 = (long *)_Znwm(0x48);
  *plVar2 = 0;
  pbVar10 = (byte *)*param_4;
  if ((*pbVar10 & 1) == 0) {
    plVar2[6] = *(long *)(pbVar10 + 0x10);
    lVar7 = *(long *)(pbVar10 + 8);
    plVar2[4] = *(long *)pbVar10;
    plVar2[5] = lVar7;
  }
  else {
    func_0x00330340(plVar2 + 4,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  plVar2[7] = 0;
  plVar2[8] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar8;
  *plVar6 = (long)plVar2;
  plVar8 = plVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar8 = (long *)*plVar6;
  }
  func_0x003d6af0(param_1[1],plVar8);
  param_1[2] = param_1[2] + 1;
  uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  plVar8 = plVar2;
code_r0x003fb521:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar8;
  return auVar12;
}


