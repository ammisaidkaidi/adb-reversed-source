// Function: _Z10error_exitPKcz
// Address: 0032e5d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0032e65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0032e812: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0032e661) */
/* WARNING: Removing unreachable block (ram,0x0032e817) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Z10error_exitPKcz(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,undefined8 param_11,
                       undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *unaff_R12;
  undefined *unaff_R13;
  undefined1 *unaff_R14;
  undefined8 unaff_R15;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined8 in_XMM2_Qb;
  undefined8 in_XMM3_Qb;
  undefined8 in_XMM4_Qb;
  undefined8 in_XMM5_Qb;
  undefined8 in_XMM6_Qb;
  undefined8 in_XMM7_Qb;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  puVar7 = &stack0xfffffffffffffff8;
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  puStack_18 = auStack_d8;
  uStack_28 = 0x3000000008;
  puStack_20 = &stack0x00000008;
  uVar11 = 0;
  ppuVar8 = &puStack_e0;
  puStack_e0 = &UNK_0032e661;
  uStack_d0 = param_10;
  uStack_c8 = param_11;
  uStack_c0 = param_12;
  uStack_b8 = param_13;
  uStack_b0 = param_14;
  do {
    uVar10 = param_9;
    puVar5 = (undefined1 *)((long)register0x00000020 + -0x28);
    *(undefined1 **)((long)ppuVar8 + -8) = puVar7;
    *(undefined8 *)((long)ppuVar8 + -0x10) = unaff_R15;
    *(undefined1 **)((long)ppuVar8 + -0x18) = unaff_R14;
    *(undefined **)((long)ppuVar8 + -0x20) = unaff_R13;
    *(undefined1 **)((long)ppuVar8 + -0x28) = unaff_R12;
    *(undefined8 *)((long)ppuVar8 + -0x30) = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)((long)ppuVar8 + -0x68);
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e698;
    func_0x0099bd50(_stdout);
    unaff_R12 = _stderr;
    unaff_R13 = &stderr;
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e6ac;
    _ZN7android4base17GetExecutablePathEv((undefined1 *)((long)ppuVar8 + -0x48));
    bVar12 = (*(byte *)((long)ppuVar8 + -0x48) & 1) != 0;
    puVar7 = (undefined1 *)((long)ppuVar8 + -0x47);
    if (bVar12) {
      puVar7 = *(undefined1 **)((long)ppuVar8 + -0x38);
    }
    uVar6 = (ulong)(*(byte *)((long)ppuVar8 + -0x48) >> 1);
    if (bVar12) {
      uVar6 = *(ulong *)((long)ppuVar8 + -0x40);
    }
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e6cd;
    _ZN7android4base8BasenameENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
              ((undefined1 *)((long)ppuVar8 + -0x60),puVar7,uVar6);
    if ((*(byte *)((long)ppuVar8 + -0x60) & 1) == 0) {
      puVar7 = (undefined1 *)((long)ppuVar8 + -0x5f);
    }
    else {
      puVar7 = *(undefined1 **)((long)ppuVar8 + -0x50);
    }
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e6ee;
    func_0x0099bd30(unaff_R12,&UNK_00184702,puVar7);
    if ((*(byte *)((long)ppuVar8 + -0x60) & 1) != 0) {
      *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e705;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)ppuVar8 + -0x50),
                 *(ulong *)((long)ppuVar8 + -0x60) & 0xfffffffffffffffe);
    }
    if ((*(byte *)((long)ppuVar8 + -0x48) & 1) != 0) {
      *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e71c;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)ppuVar8 + -0x38),
                 *(ulong *)((long)ppuVar8 + -0x48) & 0xfffffffffffffffe);
    }
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e730;
    puVar4 = puVar5;
    func_0x0099bd60(_stderr,1,uVar10);
    puVar7 = _stderr;
    unaff_R14 = puVar5;
    if ((int)uVar11 != 0) {
      *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e73f;
      uVar2 = func_0x0099bd20(uVar11);
      *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e753;
      func_0x0099bd30(puVar7,&UNK_00180152,uVar2);
      unaff_R14 = puVar7;
    }
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e761;
    puVar5 = _stderr;
    func_0x0099bd70(10);
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e76a;
    func_0x0099bd50(_stderr);
    unaff_RBX = 1;
    *(undefined **)((long)ppuVar8 + -0x70) = &UNK_0032e774;
    cVar1 = func_0x0099bd80();
    puVar7 = (undefined1 *)((long)ppuVar8 + -0x70);
    *(undefined1 **)((long)ppuVar8 + -0x70) = (undefined1 *)((long)ppuVar8 + -8);
    *(ulong *)((long)ppuVar8 + -0x78) = uVar11;
    *(undefined1 **)((long)ppuVar8 + -0x138) = puVar5;
    *(undefined8 *)((long)ppuVar8 + -0x130) = extraout_RDX;
    *(undefined1 **)((long)ppuVar8 + -0x128) = puVar4;
    *(undefined8 *)((long)ppuVar8 + -0x120) = param_13;
    *(undefined8 *)((long)ppuVar8 + -0x118) = param_14;
    if (cVar1 != '\0') {
      *(undefined4 *)((long)ppuVar8 + -0x110) = extraout_XMM0_Da;
      *(undefined4 *)((long)ppuVar8 + -0x10c) = extraout_XMM0_Db;
      *(undefined4 *)((long)ppuVar8 + -0x108) = extraout_XMM0_Dc;
      *(undefined4 *)((long)ppuVar8 + -0x104) = extraout_XMM0_Dd;
      *(undefined8 *)((long)ppuVar8 + -0x100) = extraout_XMM1_Qa;
      *(undefined8 *)((long)ppuVar8 + -0xf8) = extraout_XMM1_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xf0) = param_3;
      *(undefined8 *)((long)ppuVar8 + -0xe8) = in_XMM2_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xe0) = param_4;
      *(undefined8 *)((long)ppuVar8 + -0xd8) = in_XMM3_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xd0) = param_5;
      *(undefined8 *)((long)ppuVar8 + -200) = in_XMM4_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xc0) = param_6;
      *(undefined8 *)((long)ppuVar8 + -0xb8) = in_XMM5_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xb0) = param_7;
      *(undefined8 *)((long)ppuVar8 + -0xa8) = in_XMM6_Qb;
      *(undefined8 *)((long)ppuVar8 + -0xa0) = param_8;
      *(undefined8 *)((long)ppuVar8 + -0x98) = in_XMM7_Qb;
    }
    *(undefined8 *)((long)ppuVar8 + -0x90) = 0;
    *(undefined8 *)((long)ppuVar8 + -0x88) = 0;
    *(undefined1 **)((long)ppuVar8 + -0x80) = (undefined1 *)((long)ppuVar8 + -0x140);
    *(undefined8 *)((long)ppuVar8 + -0x90) = 0x3000000008;
    *(undefined1 **)((long)ppuVar8 + -0x88) = (undefined1 *)((long)ppuVar8 + -0x60);
    *(undefined **)((long)ppuVar8 + -0x148) = &UNK_0032e809;
    puVar3 = (uint *)func_0x0099bce0();
    uVar11 = (ulong)*puVar3;
    puVar9 = (undefined8 *)((long)ppuVar8 + -0x148);
    ppuVar8 = (undefined **)((long)ppuVar8 + -0x148);
    *puVar9 = &UNK_0032e817;
    param_9 = unaff_RBX;
    unaff_R15 = uVar10;
  } while( true );
}


