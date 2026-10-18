// Function: _ZN7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEED2Ev
// Address: 00440770
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007e2296) */

long * _ZN7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEED2Ev
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *in_R9;
  undefined4 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined4 uStack_f68;
  undefined4 uStack_f64;
  undefined4 uStack_f60;
  undefined4 uStack_f5c;
  undefined5 uStack_f58;
  undefined8 uStack_f53;
  undefined1 auStack_b68 [24];
  long *plStack_b50;
  long *plStack_b48;
  undefined8 *puStack_b40;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  undefined8 uStack_b28;
  undefined8 uStack_b18;
  undefined8 uStack_b08;
  undefined8 uStack_af8;
  undefined8 uStack_ae8;
  undefined8 uStack_ad8;
  undefined8 uStack_ac8;
  undefined8 uStack_ab8;
  undefined1 *puStack_ab0;
  undefined1 *puStack_aa8;
  undefined8 uStack_a98;
  undefined8 *puStack_a90;
  undefined *puStack_a88;
  undefined1 auStack_a80 [8];
  undefined1 auStack_a78 [24];
  long *plStack_a60;
  undefined8 *puStack_a58;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined8 uStack_a40;
  undefined8 uStack_a30;
  undefined8 uStack_a20;
  undefined8 uStack_a10;
  undefined8 uStack_a00;
  undefined8 uStack_9f0;
  undefined8 uStack_9e0;
  long *plStack_9d0;
  undefined4 uStack_9c4;
  undefined8 uStack_9c0;
  undefined4 uStack_9b8;
  uint uStack_9b4;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined1 *puStack_998;
  undefined8 uStack_990;
  undefined1 *puStack_988;
  undefined1 *puStack_980;
  undefined1 auStack_970 [1024];
  long lStack_570;
  undefined *puStack_568;
  ulong uStack_560;
  long *plStack_558;
  undefined8 uStack_550;
  uint *puStack_548;
  undefined *puStack_540;
  undefined1 auStack_538 [8];
  undefined1 auStack_530 [16];
  long *plStack_520;
  long *plStack_518;
  undefined8 *puStack_510;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 *puStack_460;
  undefined8 uStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  undefined1 auStack_438 [1000];
  undefined *puStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  
  *param_9 = 0x99fb38;
  _ZN7android10VectorImpl13finish_vectorEv();
  *param_9 = 0x9b50a0;
  if (param_9[2] == 0) {
    return (long *)0x0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_9[2];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_9[4];
  if (SUB168(auVar2 * auVar3,8) != 0) {
    uStack_30 = func_0x008fcec0();
    if (param_9[4] == param_10[4]) {
      if (param_9 != param_10) {
        if (param_9[1] != 0) {
          lVar9 = param_9[1] + -0x18;
          puStack_38 = &UNK_007d14d9;
          iVar5 = _ZNK7android12SharedBuffer7releaseEj(lVar9,1);
          if (iVar5 == 1) {
            if ((*(byte *)(param_9 + 3) & 2) == 0) {
              puStack_38 = &UNK_007d14f5;
              (**(code **)(*param_9 + 0x18))(param_9,param_9[1],param_9[2]);
            }
            puStack_38 = &UNK_007d14fd;
            _ZN7android12SharedBuffer7deallocEPKS0_(lVar9);
          }
        }
        if (param_10[2] == 0) {
          param_9[1] = 0;
          param_9[2] = 0;
        }
        else {
          lVar9 = param_10[1];
          param_9[1] = lVar9;
          param_9[2] = param_10[2];
          puStack_38 = &UNK_007d151d;
          _ZNK7android12SharedBuffer7acquireEv(lVar9 + -0x18);
        }
      }
      return param_9;
    }
    plVar17 = (long *)&UNK_0016a768;
    puStack_38 = &UNK_007d1559;
    plVar15 = (long *)__android_log_assert
                                (&UNK_0016a768,&UNK_0015a8e2,&UNK_00168cb3,param_9,param_10);
    if (plVar17[1] != 0) {
      lVar9 = plVar17[1] + -0x18;
      puStack_50 = &UNK_007d1584;
      plStack_48 = param_9;
      plStack_40 = param_10;
      puStack_38 = &stack0xfffffffffffffff0;
      plVar15 = (long *)_ZNK7android12SharedBuffer7releaseEj(lVar9,1);
      if ((int)plVar15 == 1) {
        if ((*(byte *)(plVar17 + 3) & 2) == 0) {
          puStack_50 = &UNK_007d15a1;
          (**(code **)(*plVar17 + 0x18))(plVar17,plVar17[1],plVar17[2]);
        }
        plVar15 = (long *)free(lVar9);
        return plVar15;
      }
    }
    return plVar15;
  }
  plVar15 = (long *)(ulong)SUB164(auVar2 * auVar3,0);
  uVar13 = 5;
  puStack_38 = *(undefined **)(in_FS_OFFSET + 0x28);
  puStack_448 = auStack_538;
  uStack_458 = 0x3000000018;
  puStack_450 = &stack0x00000008;
  puStack_540 = &UNK_007e2314;
  plStack_520 = param_9;
  plStack_518 = plVar15;
  puStack_510 = in_R9;
  puVar6 = (uint *)func_0x0099bce0();
  uVar1 = *puVar6;
  uVar11 = 0x15a8e2;
  puStack_540 = &UNK_007e232a;
  iVar5 = __android_log_is_loggable(5,&UNK_0015a8e2,2);
  if (iVar5 == 0) {
    plVar17 = (long *)0xffffffff;
  }
  else {
    plVar15 = (long *)&UNK_0016557e;
    plVar17 = (long *)0x1;
    in_R9 = &uStack_458;
    uVar11 = 0x400;
    param_9 = (long *)0x400;
    puStack_540 = &UNK_007e2359;
    func_0x0099c630(auStack_438,0x400,1);
    uStack_488 = 0x30;
    uStack_480 = 0;
    uStack_47c = 5;
    puStack_478 = &UNK_0015a8e2;
    uStack_470 = 0;
    uStack_468 = 0;
    puStack_460 = auStack_438;
    uVar13 = SUB84(&uStack_488,0);
    puStack_540 = &UNK_007e23a0;
    __android_log_write_log_message();
  }
  *puVar6 = uVar1;
  if ((undefined *)*(long *)(in_FS_OFFSET + 0x28) == puStack_38) {
    return plVar17;
  }
  puStack_540 = &UNK_007e23d4;
  cVar4 = func_0x0099bd00();
  uStack_550 = 5;
  puStack_568 = &UNK_0015a8e2;
  puVar18 = (undefined8 *)(ulong)uVar11;
  if (cVar4 != '\0') {
    uStack_a50 = extraout_XMM0_Da;
    uStack_a4c = extraout_XMM0_Db;
    uStack_a40 = extraout_XMM1_Qa;
    uStack_a30 = param_3;
    uStack_a20 = param_4;
    uStack_a10 = param_5;
    uStack_a00 = param_6;
    uStack_9f0 = param_7;
    uStack_9e0 = param_8;
  }
  lStack_570 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_980 = auStack_a80;
  uStack_990 = 0x3000000020;
  puStack_988 = auStack_530;
  puStack_a88 = &UNK_007e2494;
  plStack_a60 = plVar15;
  puStack_a58 = in_R9;
  plStack_9d0 = param_9;
  uStack_560 = (ulong)uVar1;
  plStack_558 = plVar17;
  puStack_548 = puVar6;
  puStack_540 = &stack0xfffffffffffffff8;
  puVar7 = (undefined4 *)func_0x0099bce0();
  uVar16 = *puVar7;
  puStack_a88 = &UNK_007e24aa;
  uVar12 = extraout_RDX;
  puVar14 = puVar18;
  iVar5 = __android_log_is_loggable(puVar18,extraout_RDX,2);
  if (iVar5 == 0) {
    plVar17 = (long *)0xffffffff;
  }
  else {
    plVar17 = (long *)0x1;
    in_R9 = &uStack_990;
    uVar12 = 0x400;
    param_9 = (long *)0x400;
    puStack_a88 = &UNK_007e24eb;
    plVar15 = plStack_9d0;
    uStack_9c4 = uVar16;
    func_0x0099c630(auStack_970,0x400,1);
    uVar16 = uStack_9c4;
    uStack_9c0 = 0x30;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    puStack_998 = auStack_970;
    puVar14 = &uStack_9c0;
    puStack_a88 = &UNK_007e2536;
    uStack_9b8 = uVar13;
    uStack_9b4 = uVar11;
    uStack_9b0 = extraout_RDX;
    __android_log_write_log_message();
  }
  *puVar7 = uVar16;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_570) {
    return plVar17;
  }
  puStack_a88 = &UNK_007e256a;
  cVar4 = func_0x0099bd00();
  if (cVar4 != '\0') {
    uStack_b38 = extraout_XMM0_Da_00;
    uStack_b34 = extraout_XMM0_Db_00;
    uStack_b28 = extraout_XMM1_Qa_00;
    uStack_b18 = param_3;
    uStack_b08 = param_4;
    uStack_af8 = param_5;
    uStack_ae8 = param_6;
    uStack_ad8 = param_7;
    uStack_ac8 = param_8;
  }
  plStack_b50 = param_9;
  plStack_b48 = plVar15;
  puStack_b40 = in_R9;
  uStack_a98 = extraout_RDX;
  puStack_a90 = puVar18;
  if (extraout_RDX_00 == 0) {
    if (puVar14 == (undefined8 *)0x0) {
      uStack_f58 = 0x6e6f697472;
      uStack_f53 = 0x64656c69616620;
      uStack_f68 = 0x70736e55;
      uStack_f64 = 0x66696365;
      uStack_f60 = 0x20646569;
      uStack_f5c = 0x65737361;
      puStack_a88 = (undefined *)&puStack_540;
    }
    else {
      puStack_a88 = (undefined *)&puStack_540;
      func_0x0099c030(&uStack_f68,0x400,&UNK_00184329,puVar14);
    }
  }
  else {
    puStack_aa8 = auStack_b68;
    uStack_ab8 = 0x3000000018;
    puStack_ab0 = auStack_a78;
    puStack_a88 = (undefined *)&puStack_540;
    func_0x0099c630(&uStack_f68,0x400,1,0x400,extraout_RDX_00,&uStack_ab8);
  }
  do {
    uVar8 = func_0x0099bcf0(&uStack_f68);
    lVar9 = func_0x0099be60(2,&uStack_f68,uVar8);
    if (lVar9 != -1) break;
    piVar10 = (int *)func_0x0099bce0();
  } while (*piVar10 == 4);
  do {
    lVar9 = func_0x0099be60(2,&UNK_0017a0d6,1);
    if (lVar9 != -1) break;
    piVar10 = (int *)func_0x0099bce0();
  } while (*piVar10 == 4);
  __android_log_write(7,uVar12,&uStack_f68);
  (*pcRam00000000009ff948)(&uStack_f68);
  func_0x0099c600();
  return (long *)0x1;
}


