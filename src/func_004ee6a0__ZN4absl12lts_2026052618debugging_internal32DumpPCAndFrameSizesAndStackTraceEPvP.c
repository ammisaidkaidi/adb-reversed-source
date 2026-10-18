// Function: _ZN4absl12lts_2026052618debugging_internal32DumpPCAndFrameSizesAndStackTraceEPvPKS2_PiiibPFvPKcS2_ES2_
// Address: 004ee6a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal32DumpPCAndFrameSizesAndStackTraceEPvPKS2_PiiibPFvPKcS2_ES2_
               (undefined8 *param_1,ulong param_2,long param_3,uint param_4,undefined8 param_5,
               undefined4 param_6,code *param_7,ulong param_8)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char extraout_DL;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *unaff_R12;
  undefined8 *unaff_R14;
  long in_FS_OFFSET;
  long lStack_12c0;
  undefined1 auStack_12a0 [512];
  undefined1 auStack_10a0 [1024];
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined4 uStack_c40;
  long lStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  code *pcStack_888;
  undefined8 *puStack_880;
  ulong uStack_878;
  undefined *puStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  ulong uStack_858;
  undefined8 *puStack_850;
  long lStack_848;
  uint uStack_840;
  undefined4 uStack_83c;
  undefined8 auStack_838 [128];
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  long lStack_38;
  
  uStack_840 = (uint)param_5;
  puVar7 = (undefined8 *)(ulong)param_4;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = 0;
  uStack_858 = param_2;
  lStack_848 = param_3;
  uStack_83c = param_6;
  if (param_1 != (undefined8 *)0x0) {
    uStack_83c._0_1_ = (char)param_6;
    if ((char)uStack_83c == '\0') {
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_408 = 0;
      uStack_400 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_428 = 0;
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_3d8 = 0;
      puVar6 = &UNK_0018071b;
      unaff_R12 = &uStack_438;
      uVar9 = 100;
    }
    else {
      puStack_870 = &UNK_004ee712;
      func_0x0099bdb0(&uStack_438,0,0x400);
      puStack_870 = &UNK_004ee722;
      cVar2 = _ZN4absl12lts_202605269SymbolizeEPKvPci(param_1,&uStack_438,0x400);
      puStack_868 = (undefined8 *)&UNK_001743fe;
      if (cVar2 != '\0') {
        puStack_868 = &uStack_438;
      }
      unaff_R12 = auStack_838;
      puStack_870 = &UNK_004ee745;
      func_0x0099bdb0(unaff_R12,0,0x400);
      puVar6 = &UNK_001806f1;
      uVar9 = 0x400;
    }
    param_5 = 0x12;
    puStack_870 = &UNK_004ee7c6;
    func_0x0099c030(unaff_R12,uVar9,puVar6,&UNK_00178f07,0x12,param_1);
    puStack_870 = &UNK_004ee7cf;
    param_2 = param_8;
    puVar11 = unaff_R12;
    (*param_7)();
    iVar10 = (int)puVar11;
    unaff_R14 = param_1;
  }
  if (0 < (int)param_4) {
    puVar7 = (undefined8 *)(ulong)param_4;
    unaff_R14 = (undefined8 *)0x0;
    puStack_850 = puVar7;
    do {
      puVar11 = &uStack_438;
      unaff_R12 = *(undefined8 **)(uStack_858 + (long)unaff_R14 * 8);
      if ((char)uStack_83c == '\0') {
        iVar10 = *(int *)(lStack_848 + (long)unaff_R14 * 4);
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        uStack_408 = 0;
        uStack_400 = 0;
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_428 = 0;
        uStack_420 = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_3d8 = 0;
        if (iVar10 < 1) {
          puVar6 = &UNK_0018071b;
        }
        else {
          puStack_868 = (undefined8 *)CONCAT44(puStack_868._4_4_,iVar10);
          puVar6 = &UNK_0015ff1e;
        }
        param_5 = 0x12;
        puStack_870 = &UNK_004ee961;
        func_0x0099c030(puVar11,100,puVar6,&UNK_00181eb9,0x12,unaff_R12);
        puStack_870 = &UNK_004ee971;
        param_2 = param_8;
        (*param_7)();
        iVar10 = (int)puVar11;
      }
      else {
        iVar10 = *(int *)(lStack_848 + (long)unaff_R14 * 4);
        puStack_870 = &UNK_004ee812;
        func_0x0099bdb0(puVar11,0,0x400);
        puStack_870 = &UNK_004ee822;
        cVar2 = _ZN4absl12lts_202605269SymbolizeEPKvPci((long)unaff_R12 + -1,puVar11,0x400);
        puVar7 = (undefined8 *)&UNK_001743fe;
        if (cVar2 != '\0') {
          puVar7 = puVar11;
        }
        puVar11 = auStack_838;
        puStack_870 = &UNK_004ee845;
        func_0x0099bdb0(puVar11,0,0x400);
        if (iVar10 < 1) {
          puVar6 = &UNK_001806f1;
          puStack_868 = puVar7;
        }
        else {
          puStack_868 = (undefined8 *)CONCAT44(puStack_868._4_4_,iVar10);
          puVar6 = &UNK_00180709;
          puStack_860 = puVar7;
        }
        param_5 = 0x12;
        puStack_870 = &UNK_004ee87d;
        func_0x0099c030(puVar11,0x400,puVar6,&UNK_00181eb9,0x12,unaff_R12);
        puStack_870 = &UNK_004ee88e;
        param_2 = param_8;
        (*param_7)();
        iVar10 = (int)puVar11;
        puVar7 = puStack_850;
      }
      unaff_R14 = (undefined8 *)((long)unaff_R14 + 1);
    } while (puVar7 != unaff_R14);
  }
  pcVar5 = (code *)(ulong)uStack_840;
  if (0 < (int)uStack_840) {
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_3d8 = 0;
    puVar7 = &uStack_438;
    puStack_870 = &UNK_004ee9d4;
    func_0x0099c030(puVar7,100,&UNK_001775ad);
    puStack_870 = &UNK_004ee9dd;
    param_2 = param_8;
    puVar11 = puVar7;
    (*param_7)();
    iVar10 = (int)puVar11;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_870 = &UNK_004eea03;
  func_0x0099bd00();
  uVar8 = param_2 & 0xffffffff;
  lStack_8a0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_898 = puVar7;
  puStack_890 = unaff_R12;
  pcStack_888 = param_7;
  puStack_880 = unaff_R14;
  uStack_878 = param_8;
  if ((int)param_2 < 0x41) {
    lStack_12c0 = 0;
    puVar4 = auStack_12a0;
    puStack_870 = &stack0xfffffffffffffff8;
  }
  else {
    lStack_12c0 = uVar8 << 3;
    puStack_870 = &stack0xfffffffffffffff8;
    puVar4 = (undefined1 *)func_0x0099c720(0,lStack_12c0,3,0x22,0xffffffff,0);
    if (puVar4 == (undefined1 *)0xffffffffffffffff) {
      puVar4 = (undefined1 *)0x0;
    }
    if (puVar4 == (undefined1 *)0x0) {
      lStack_12c0 = 0;
    }
    uVar8 = param_2 & 0xffffffff;
    if (puVar4 == (undefined1 *)0x0) {
      uVar8 = 0x40;
      puVar4 = auStack_12a0;
    }
  }
  func_0x0099bdb0(auStack_12a0,0,0x200);
  uVar3 = _ZN4absl12lts_2026052613GetStackTraceEPPvii(puVar4,uVar8,iVar10 + 1);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar1 = *(long *)(puVar4 + uVar8 * 8);
      if (extraout_DL == '\0') {
        uStack_c50 = 0;
        uStack_c48 = 0;
        uStack_c60 = 0;
        uStack_c58 = 0;
        uStack_c70 = 0;
        uStack_c68 = 0;
        uStack_c80 = 0;
        uStack_c78 = 0;
        uStack_c90 = 0;
        uStack_c88 = 0;
        uStack_ca0 = 0;
        uStack_c98 = 0;
        uStack_c40 = 0;
        func_0x0099c030(&uStack_ca0,100,&UNK_0015b604,&UNK_00181eb9,0x12,lVar1);
        (*pcVar5)(&uStack_ca0,param_5);
      }
      else {
        func_0x0099bdb0(&uStack_ca0,0,0x400);
        cVar2 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar1 + -1,&uStack_ca0,0x400);
        if (cVar2 == '\0') {
          cVar2 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar1,&uStack_ca0,0x400);
          puVar7 = (undefined8 *)&UNK_001743fe;
          if (cVar2 != '\0') goto code_r0x004eebdc;
        }
        else {
code_r0x004eebdc:
          puVar7 = &uStack_ca0;
        }
        func_0x0099bdb0(auStack_10a0,0,0x400);
        func_0x0099c030(auStack_10a0,0x400,&UNK_00169a62,&UNK_00181eb9,0x12,lVar1,puVar7);
        (*pcVar5)(auStack_10a0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  if (pcRam0000000000a02f90 != (code *)0x0) {
    (*pcRam0000000000a02f90)(puVar4,uVar3,0,pcVar5,param_5);
  }
  if (lStack_12c0 != 0) {
    func_0x0099c710(puVar4);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_8a0) {
    return;
  }
  func_0x0099bd00();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


