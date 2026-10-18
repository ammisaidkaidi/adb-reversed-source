// Function: _Z20install_local_socketP7asocket
// Address: 003d7130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z20install_local_socketP7asocket(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long in_FS_OFFSET;
  int *piStack_60;
  undefined8 *puStack_58;
  undefined8 **ppuStack_50;
  int **ppiStack_48;
  long *plStack_40;
  long lStack_38;
  
  lVar13 = lRam0000000000a00690;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  piStack_60 = param_1;
  _ZNSt3__115recursive_mutex4lockEv(lRam0000000000a00690);
  iVar11 = iRam00000000009fa510 + 1;
  iVar5 = iVar11;
  *param_1 = iRam00000000009fa510;
  iRam00000000009fa510 = iVar5;
  if ((iVar11 == 0) &&
     (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar6 != '\0')) {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppuStack_50,&UNK_0015b0ed,0x56,6,0,0xffffffff);
    uVar9 = _ZN7android4base10LogMessage6streamEv(&ppuStack_50);
    func_0x0032eb30(uVar9,&UNK_00167a5e,0x18);
    _ZN7android4base10LogMessageD2Ev(&ppuStack_50);
    *puVar8 = uVar1;
  }
  plVar10 = plRam0000000000a00698;
  puStack_58 = (undefined8 *)plRam0000000000a00698[1];
  ppuStack_50 = &puStack_58;
  ppiStack_48 = &piStack_60;
  plStack_40 = plRam0000000000a00698;
  if (puStack_58 < (undefined8 *)plRam0000000000a00698[2]) {
    *puStack_58 = param_1;
    puVar7 = puStack_58 + 1;
  }
  else {
    _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
              (&ppuStack_50);
    puVar7 = puStack_58;
  }
  plVar10[1] = (long)puVar7;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    lVar2 = lRam0000000000a00690;
    _ZNSt3__115recursive_mutex4lockEv(lRam0000000000a00690);
    plVar4 = plRam0000000000a006a0;
    plVar3 = plRam0000000000a00698;
    plVar12 = (long *)plRam0000000000a00698[1];
    plVar10 = (long *)*plRam0000000000a00698;
    plVar14 = plVar10;
    for (; (plVar10 != plVar12 && (plVar14 = plVar10, *plVar10 != lVar13)); plVar10 = plVar10 + 1) {
      plVar14 = plVar12;
    }
    if ((plVar14 != plVar12) && (plVar10 = plVar14 + 1, plVar10 != plVar12)) {
      do {
        if (*plVar10 != lVar13) {
          *plVar14 = *plVar10;
          plVar14 = plVar14 + 1;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar12);
      plVar12 = (long *)plVar3[1];
    }
    if (plVar14 != plVar12) {
      func_0x0099bd90(plVar14,plVar12,0);
      plVar3[1] = (long)plVar14;
    }
    plVar12 = (long *)plVar4[1];
    plVar10 = (long *)*plVar4;
    plVar14 = plVar10;
    for (; (plVar10 != plVar12 && (plVar14 = plVar10, *plVar10 != lVar13)); plVar10 = plVar10 + 1) {
      plVar14 = plVar12;
    }
    if ((plVar14 != plVar12) && (plVar10 = plVar14 + 1, plVar10 != plVar12)) {
      do {
        if (*plVar10 != lVar13) {
          *plVar14 = *plVar10;
          plVar14 = plVar14 + 1;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar12);
      plVar12 = (long *)plVar4[1];
    }
    if (plVar14 != plVar12) {
      func_0x0099bd90(plVar14,plVar12,0);
      plVar4[1] = (long)plVar14;
    }
    pthread_mutex_unlock(lVar2);
    return;
  }
  return;
}


