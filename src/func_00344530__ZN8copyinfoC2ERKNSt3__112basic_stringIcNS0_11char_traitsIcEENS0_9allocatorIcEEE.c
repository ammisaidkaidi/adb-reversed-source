// Function: _ZN8copyinfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_j
// Address: 00344530
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003445bd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003445c2) */
/* WARNING: Removing unreachable block (ram,0x00344601) */
/* WARNING: Removing unreachable block (ram,0x003445e8) */

void _ZN8copyinfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_j
               (ulong *param_1,byte *param_2,byte *param_3,undefined8 param_4,uint param_5)

{
  ulong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  
  puVar13 = &stack0xfffffffffffffff8;
  puVar14 = &stack0xfffffffffffffff8;
  uVar11 = (ulong)param_5;
  if ((*param_2 & 1) == 0) {
    param_1[2] = *(ulong *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((long)param_1 + 0xc) = uVar5;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  puVar1 = param_1 + 3;
  if ((*param_3 & 1) == 0) {
    param_1[5] = *(ulong *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 4);
    uVar4 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)puVar1 = *(undefined4 *)param_3;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)((long)param_1 + 0x24) = uVar5;
  }
  else {
    func_0x00330340(puVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  param_1[6] = 0;
  *(uint *)(param_1 + 7) = param_5;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = 0;
  puVar16 = &UNK_003445c2;
  bVar2 = (byte)*param_1;
  pbVar8 = (byte *)((long)param_1 + 1);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar10 = param_1[1];
  uVar9 = uVar10;
  pbVar6 = (byte *)param_1[2];
  if ((bVar2 & 1) == 0) {
    uVar9 = uVar7;
    pbVar6 = pbVar8;
  }
  puVar12 = param_1;
  puVar15 = &stack0xfffffffffffffff8;
  if (pbVar6[uVar9 - 1] != 0x2f) {
    if ((bVar2 & 1) == 0) {
      uVar10 = 0x16;
      if (bVar2 == 0x2c) {
code_r0x00341222:
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,uVar10,1,uVar10,uVar10,0,0,param_1,uVar11,param_4,
                   &stack0xfffffffffffffff8,&UNK_003445c2);
        pbVar8 = (byte *)param_1[2];
        uVar7 = uVar10;
        puVar14 = puVar13;
        goto code_r0x0034124a;
      }
      *(byte *)param_1 = bVar2 + 2;
      puVar14 = &stack0xfffffffffffffff8;
    }
    else {
      pbVar8 = (byte *)param_1[2];
      uVar7 = uVar10;
      if (uVar10 == (*param_1 & 0xfffffffffffffffe) - 1) goto code_r0x00341222;
code_r0x0034124a:
      param_1[1] = uVar7 + 1;
    }
    (pbVar8 + uVar7)[0] = 0x2f;
    (pbVar8 + uVar7)[1] = 0;
    puVar15 = puVar14;
  }
  bVar2 = (byte)*puVar1;
  pbVar8 = (byte *)((long)param_1 + 0x19);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar10 = param_1[4];
  uVar9 = uVar10;
  pbVar6 = (byte *)param_1[5];
  if ((bVar2 & 1) == 0) {
    uVar9 = uVar7;
    pbVar6 = pbVar8;
  }
  if (pbVar6[uVar9 - 1] == 0x2f) {
    return;
  }
  if ((bVar2 & 1) == 0) {
    uVar10 = 0x16;
    if (bVar2 != 0x2c) {
      *(byte *)puVar1 = bVar2 + 2;
      goto code_r0x003412e6;
    }
code_r0x003412b3:
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (puVar1,uVar10,1,uVar10,uVar10,0,0,puVar12,uVar11,param_4,puVar15,puVar16);
    pbVar8 = (byte *)param_1[5];
    uVar7 = uVar10;
  }
  else {
    pbVar8 = (byte *)param_1[5];
    uVar7 = uVar10;
    if (uVar10 == (*puVar1 & 0xfffffffffffffffe) - 1) goto code_r0x003412b3;
  }
  param_1[4] = uVar7 + 1;
code_r0x003412e6:
  (pbVar8 + uVar7)[0] = 0x2f;
  (pbVar8 + uVar7)[1] = 0;
  return;
}


