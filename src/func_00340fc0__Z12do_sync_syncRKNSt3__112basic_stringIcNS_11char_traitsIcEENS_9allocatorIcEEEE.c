// Function: _Z12do_sync_syncRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_b15CompressionTypebb
// Address: 00340fc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _Z12do_sync_syncRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_b15CompressionTypebb
                (uint *param_1,uint *param_2,uint param_3,undefined4 param_4,undefined1 param_5,
                undefined1 param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  ulong auStack_180 [14];
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_70 [32];
  byte bStack_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar12 = &stack0xfffffffffffffff8;
  puVar13 = &stack0xfffffffffffffff8;
  uVar10 = (ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (ulong *)0x0;
  func_0x0099bdb0(auStack_180,0,0x130);
  _ZN14SyncConnectionC2Ev(auStack_180);
  if ((int)auStack_180[0] < 0) {
    uVar6 = 0;
  }
  else {
    auStack_70[0] = param_6;
    if ((*param_1 & 1) == 0) {
      uStack_188 = *(undefined8 *)(param_1 + 4);
      uStack_198._0_4_ = *param_1;
      uStack_198._4_4_ = param_1[1];
      uStack_190 = param_1[2];
      uStack_18c = param_1[3];
      if ((*param_2 & 1) == 0) goto code_r0x0034107f;
code_r0x00341047:
      func_0x00330340(&uStack_1b8,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
    }
    else {
      func_0x00330340(&uStack_198,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2));
      if ((*param_2 & 1) != 0) goto code_r0x00341047;
code_r0x0034107f:
      uStack_1a8 = *(undefined8 *)(param_2 + 4);
      uStack_1b8 = *param_2;
      uStack_1b4 = param_2[1];
      uStack_1b0 = param_2[2];
      uStack_1ac = param_2[3];
    }
    puVar7 = &uStack_198;
    uVar3 = func_0x0033e010(auStack_180,puVar7,&uStack_1b8,1,uVar10 & 0xff,param_4,param_5);
    uVar6 = (ulong)uVar3;
    if ((uStack_1b8 & 1) != 0) {
      puVar7 = (ulong *)(CONCAT44(uStack_1b4,uStack_1b8) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_1a8);
    }
    if (((uint)uStack_198 & 1) != 0) {
      puVar7 = (ulong *)(CONCAT44(uStack_198._4_4_,(uint)uStack_198) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_188);
    }
    if (((char)param_3 == '\0') &&
       (((lStack_b8 != lStack_108 || (lStack_b0 != lStack_100)) || (lStack_a8 != lStack_f8)))) {
      puVar7 = (ulong *)auStack_70;
      bStack_50 = 0;
      uStack_4f = 0;
      _ZN14TransferLedger18ReportTransferRateER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE17TransferDirection
                (auStack_110,puVar7,&bStack_50,0);
      if ((bStack_50 & 1) != 0) {
        puVar7 = (ulong *)(CONCAT62(uStack_4e,CONCAT11(uStack_4f,bStack_50)) & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_40);
      }
    }
  }
  puVar8 = auStack_180;
  _ZN14SyncConnectionD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  func_0x0099bd00();
  bVar1 = (byte)*puVar8;
  pbVar5 = (byte *)((long)puVar8 + 1);
  uVar4 = (ulong)(bVar1 >> 1);
  uVar11 = puVar8[1];
  uVar9 = uVar11;
  pbVar2 = (byte *)puVar8[2];
  if ((bVar1 & 1) == 0) {
    uVar9 = uVar4;
    pbVar2 = pbVar5;
  }
  puVar14 = &stack0xfffffffffffffff8;
  if (pbVar2[uVar9 - 1] != 0x2f) {
    if ((bVar1 & 1) == 0) {
      uVar11 = 0x16;
      if (bVar1 == 0x2c) {
code_r0x00341222:
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm();
        pbVar5 = (byte *)puVar8[2];
        uVar4 = uVar11;
        puVar12 = puVar13;
        goto code_r0x0034124a;
      }
      *(byte *)puVar8 = bVar1 + 2;
    }
    else {
      pbVar5 = (byte *)puVar8[2];
      uVar4 = uVar11;
      puVar12 = &stack0xfffffffffffffff8;
      if (uVar11 == (*puVar8 & 0xfffffffffffffffe) - 1) goto code_r0x00341222;
code_r0x0034124a:
      puVar8[1] = uVar4 + 1;
    }
    (pbVar5 + uVar4)[0] = 0x2f;
    (pbVar5 + uVar4)[1] = 0;
    puVar14 = puVar12;
  }
  bVar1 = (byte)*puVar7;
  pbVar5 = (byte *)((long)puVar7 + 1);
  uVar4 = (ulong)(bVar1 >> 1);
  uVar11 = puVar7[1];
  uVar9 = uVar11;
  pbVar2 = (byte *)puVar7[2];
  if ((bVar1 & 1) == 0) {
    uVar9 = uVar4;
    pbVar2 = pbVar5;
  }
  if (pbVar2[uVar9 - 1] == 0x2f) {
    return uVar4;
  }
  if ((bVar1 & 1) == 0) {
    uVar11 = 0x16;
    if (bVar1 != 0x2c) {
      *(byte *)puVar7 = bVar1 + 2;
      goto code_r0x003412e6;
    }
code_r0x003412b3:
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (puVar7,uVar11,1,uVar11,uVar11,0,0,uVar6,uVar10,param_1,puVar14);
    pbVar5 = (byte *)puVar7[2];
    uVar4 = uVar11;
  }
  else {
    pbVar5 = (byte *)puVar7[2];
    uVar4 = uVar11;
    if (uVar11 == (*puVar7 & 0xfffffffffffffffe) - 1) goto code_r0x003412b3;
  }
  puVar7[1] = uVar4 + 1;
code_r0x003412e6:
  (pbVar5 + uVar4)[0] = 0x2f;
  (pbVar5 + uVar4)[1] = 0;
  return uVar4;
}


