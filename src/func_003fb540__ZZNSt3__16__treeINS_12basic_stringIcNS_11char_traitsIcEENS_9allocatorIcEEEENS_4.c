// Function: _ZZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE16__emplace_uniqueB8nn220000IJRKS6_EEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEEDpOT_ENKUlSD_SD_E_clESD_SD_
// Address: 003fb540
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE16__emplace_uniqueB8nn220000IJRKS6_EEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEEDpOT_ENKUlSD_SD_E_clESD_SD_
          (long *param_1,byte *param_2,byte *param_3)

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
          goto code_r0x003fb669;
        }
        if (uVar5 <= uVar9) goto code_r0x003fb580;
code_r0x003fb5db:
        plVar2 = (long *)*plVar8;
        plVar6 = plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto code_r0x003fb5f7;
      }
      if (iVar1 < 0) goto code_r0x003fb5db;
code_r0x003fb580:
      plVar2 = (long *)plVar8[1];
    } while ((long *)plVar8[1] != (long *)0x0);
    plVar6 = plVar8 + 1;
  }
code_r0x003fb5f7:
  plVar2 = (long *)_Znwm(0x38);
  *plVar2 = 0;
  if ((*param_3 & 1) == 0) {
    plVar2[6] = *(long *)(param_3 + 0x10);
    lVar7 = *(long *)(param_3 + 8);
    plVar2[4] = *(long *)param_3;
    plVar2[5] = lVar7;
  }
  else {
    func_0x00330340(plVar2 + 4,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
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
code_r0x003fb669:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar8;
  return auVar12;
}


