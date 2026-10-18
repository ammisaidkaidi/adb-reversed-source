// Function: _ZN14SyncConnectionD2Ev
// Address: 00342e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14SyncConnectionD2Ev
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               uint *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined1 *puStack_70;
  long lStack_60;
  uint *puStack_58;
  code *pcStack_50;
  byte bStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < (int)*param_9) {
    bStack_40 = 0;
    uStack_3f = 0;
    pcStack_50 = (code *)&UNK_00342e89;
    cVar5 = _ZN14SyncConnection11SendRequestEiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (param_9,0x54495551,&bStack_40);
    if ((bStack_40 & 1) != 0) {
      pcStack_50 = (code *)&UNK_00342ea3;
      _ZdaPvSt11align_val_t
                (uStack_30,CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
    }
    if (cVar5 != '\0') {
      pcStack_50 = (code *)&UNK_00342eaf;
      _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(*param_9);
    }
    pcStack_50 = (code *)&UNK_00342ebb;
    _ZN11LinePrinter12KeepInfoLineEv(param_9 + 0x44);
  }
  if ((param_9[0x46] & 1) == 0) {
    bVar1 = (byte)param_9[0x3c];
  }
  else {
    pcStack_50 = (code *)&UNK_00342fc5;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_9 + 0x4a),*(ulong *)(param_9 + 0x46) & 0xfffffffffffffffe);
    bVar1 = (byte)param_9[0x3c];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_9[0x28];
  }
  else {
    pcStack_50 = (code *)&UNK_00342fe9;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_9 + 0x40),*(ulong *)(param_9 + 0x3c) & 0xfffffffffffffffe);
    bVar1 = (byte)param_9[0x28];
  }
  if ((bVar1 & 1) != 0) {
    pcStack_50 = (code *)&UNK_00342ef5;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_9 + 0x2c),*(ulong *)(param_9 + 0x28) & 0xfffffffffffffffe);
  }
  lVar3 = *(long *)(param_9 + 0x10);
  param_9[0x10] = 0;
  param_9[0x11] = 0;
  if (lVar3 != 0) {
    pcStack_50 = (code *)&UNK_00342f0b;
    _ZdaPvSt11align_val_t();
  }
  pcStack_50 = (code *)&UNK_00342f14;
  func_0x00343f20(param_9 + 4);
  puVar9 = *(undefined8 **)(param_9 + 6);
  puVar8 = *(undefined8 **)(param_9 + 8);
  if (puVar9 != puVar8) {
    do {
      pcStack_50 = (code *)&UNK_00342f3d;
      _ZdaPvSt11align_val_t(*puVar9,0xff0);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar8);
    puVar9 = *(undefined8 **)(param_9 + 6);
    puVar8 = *(undefined8 **)(param_9 + 8);
  }
  *(ulong *)(param_9 + 8) = (long)puVar8 - ((long)puVar8 - (long)puVar9 & 0xfffffffffffffff8U);
  lVar3 = *(long *)(param_9 + 4);
  if (lVar3 != 0) {
    pcStack_50 = (code *)&UNK_00342f74;
    _ZdaPvSt11align_val_t(lVar3,*(long *)(param_9 + 10) - lVar3);
  }
  pcStack_50 = (code *)&UNK_00342f79;
  puVar6 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar6;
  uVar7 = (ulong)*param_9;
  if (*param_9 != 0xffffffff) {
    pcStack_50 = (code *)&UNK_00342f8b;
    func_0x0099bd10();
  }
  *param_9 = 0xffffffff;
  *puVar6 = uVar2;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    pcStack_50 = _ZN14SyncConnection5ErrorEPKcz;
    cVar5 = func_0x0099bd00();
    if (cVar5 != '\0') {
      uStack_130 = extraout_XMM0_Da;
      uStack_12c = extraout_XMM0_Db;
      uStack_120 = extraout_XMM1_Qa;
      uStack_110 = param_3;
      uStack_100 = param_4;
      uStack_f0 = param_5;
      uStack_e0 = param_6;
      uStack_d0 = param_7;
      uStack_c0 = param_8;
    }
    lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
    uStack_88 = 0;
    uStack_98 = 0x62646118;
    uStack_94 = 0x7265203a;
    uStack_90 = 0x3a726f72;
    uStack_8c = 0x20;
    puStack_70 = auStack_160;
    uStack_80 = 0x3000000010;
    pbStack_78 = &bStack_40;
    uStack_150 = extraout_RDX;
    uStack_148 = param_12;
    uStack_140 = param_13;
    uStack_138 = param_14;
    puStack_58 = param_9;
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
              (&uStack_98);
    if ((uStack_98 & 1) == 0) {
      uStack_a0 = uStack_88;
      uStack_b0 = uStack_98;
      uStack_ac = uStack_94;
      uStack_a8 = uStack_90;
      uStack_a4 = uStack_8c;
    }
    else {
      func_0x00330340(&uStack_b0,uStack_88,CONCAT44(uStack_8c,uStack_90));
    }
    _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
              (uVar7 + 0x110,&uStack_b0,2);
    if ((uStack_b0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_a0,CONCAT44(uStack_ac,uStack_b0) & 0xfffffffffffffffe);
    }
    if ((uStack_98 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_88,CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) != lStack_60) {
      func_0x0099bd00();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    return;
  }
  return;
}


