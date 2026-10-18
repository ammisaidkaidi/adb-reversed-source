// Function: _Z16directory_existsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003d3d30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z16directory_existsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                  (byte *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  puVar6 = (ulong *)0x1;
  iVar2 = func_0x0099bf30(1,param_1,&uStack_a8);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return (ulong *)(ulong)(iVar2 != -1 && ((uint)uStack_90 & 0xf000) == 0x4000);
  }
  func_0x0099bd00();
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined2 *)puVar6 = 0x2702;
  bVar9 = (*param_1 & 1) == 0;
  if (bVar9) {
    uVar4 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  uVar8 = 0;
  do {
    pbVar5 = param_1 + 1;
    if (!bVar9) {
      pbVar5 = *(byte **)(param_1 + 0x10);
    }
    lVar3 = func_0x0099c070(pbVar5 + uVar8,0x27,uVar4 - uVar8);
    if (lVar3 == 0) break;
    uVar7 = lVar3 - (long)pbVar5;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
              (puVar6,param_1,uVar8,uVar7 - uVar8);
    if (uVar7 == 0xffffffffffffffff) goto code_r0x003d3ea2;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puVar6,&UNK_0017710c)
    ;
    bVar9 = (*param_1 & 1) == 0;
    if (bVar9) {
      uVar4 = (ulong)(*param_1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    uVar8 = uVar7 + 1;
  } while (uVar7 < uVar4);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
            (puVar6,param_1,uVar8,~uVar8);
code_r0x003d3ea2:
  bVar1 = (byte)*puVar6;
  if ((bVar1 & 1) == 0) {
    uVar8 = 0x16;
    if (bVar1 != 0x2c) {
      uVar4 = (ulong)(bVar1 >> 1);
      *(byte *)puVar6 = bVar1 + 2;
      pbVar5 = (byte *)((long)puVar6 + 1);
      goto code_r0x003d3f07;
    }
code_r0x003d3ed7:
    uVar4 = uVar8;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (puVar6,uVar4,1,uVar4,uVar4,0,0);
  }
  else {
    uVar4 = puVar6[1];
    uVar8 = (*puVar6 & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar8) goto code_r0x003d3ed7;
  }
  pbVar5 = (byte *)puVar6[2];
  puVar6[1] = uVar4 + 1;
code_r0x003d3f07:
  (pbVar5 + uVar4)[0] = 0x27;
  (pbVar5 + uVar4)[1] = 0;
  return puVar6;
}


