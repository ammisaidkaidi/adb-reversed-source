// Function: _ZNSt3__16vectorIN11incremental4FileENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPKcRiRlN7android4base14unique_fd_implINSD_13DefaultCloserEEESB_SG_EEEPS2_DpOT_
// Address: 00367970
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__16vectorIN11incremental4FileENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPKcRiRlN7android4base14unique_fd_implINSD_13DefaultCloserEEESB_SG_EEEPS2_DpOT_
               (long *param_1,undefined8 *param_2,short *param_3,undefined8 *param_4,int *param_5,
               undefined8 *param_6,int *param_7)

{
  long lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = param_1[1] - *param_1;
  uVar10 = (lVar17 >> 7) + 1;
  if (uVar10 >> 0x39 == 0) {
    uVar13 = param_1[2] - *param_1;
    uVar14 = (long)uVar13 >> 6;
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x7fffffffffffff7f < uVar13) {
      uVar14 = 0x1ffffffffffffff;
    }
    if (uVar14 < 0x200000000000000) {
      lVar11 = _Znwm(uVar14 * 0x80);
      lVar17 = lVar17 + lVar11;
      uVar5 = *param_2;
      sVar2 = *param_3;
      uVar6 = *param_4;
      iVar3 = *param_5;
      *param_5 = -1;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar7 = *param_6;
      iStack_40 = *param_7;
      *param_7 = -1;
      iStack_3c = iVar3;
      _ZN11incremental4FileC2EPKcslN7android4base14unique_fd_implINS4_13DefaultCloserEEElS7_
                (lVar17,uVar5,(int)sVar2,uVar6,&iStack_3c,uVar7,&iStack_40);
      uVar4 = *puVar12;
      if (iStack_40 != -1) {
        func_0x0099bd10();
      }
      iStack_40 = -1;
      *puVar12 = uVar4;
      if (iStack_3c != -1) {
        func_0x0099bd10();
      }
      *puVar12 = uVar4;
      lVar16 = *param_1;
      lVar8 = param_1[1];
      lVar1 = lVar17 + (lVar16 - lVar8);
      lVar15 = lVar1;
      lVar18 = lVar16;
      if (lVar16 - lVar8 != 0) {
        do {
          func_0x00366960(lVar15,lVar18);
          lVar18 = lVar18 + 0x80;
          lVar15 = lVar15 + 0x80;
        } while (lVar18 != lVar8);
        do {
          _ZN11incremental4FileD2Ev(lVar16);
          lVar16 = lVar16 + 0x80;
        } while (lVar16 != lVar8);
        lVar16 = *param_1;
      }
      lVar8 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar17 + 0x80;
      param_1[2] = lVar11 + uVar14 * 0x80;
      if (lVar16 != 0) {
        _ZdaPvSt11align_val_t(lVar16,lVar8 - lVar16);
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return lVar17 + 0x80;
      }
      goto code_r0x00367b6a;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
code_r0x00367b6a:
  func_0x0099bd00();
  pcVar9 = (code *)swi(3);
  lVar17 = (*pcVar9)();
  return lVar17;
}


