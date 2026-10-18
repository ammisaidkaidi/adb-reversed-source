// Function: _Z10escape_argRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003d3de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z10escape_argRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                  (ulong *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0x2702;
  bVar7 = (*param_2 & 1) == 0;
  if (bVar7) {
    uVar3 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  uVar6 = 0;
  do {
    pbVar4 = param_2 + 1;
    if (!bVar7) {
      pbVar4 = *(byte **)(param_2 + 0x10);
    }
    lVar2 = func_0x0099c070(pbVar4 + uVar6,0x27,uVar3 - uVar6);
    if (lVar2 == 0) break;
    uVar5 = lVar2 - (long)pbVar4;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
              (param_1,param_2,uVar6,uVar5 - uVar6);
    if (uVar5 == 0xffffffffffffffff) goto code_r0x003d3ea2;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_0017710c);
    bVar7 = (*param_2 & 1) == 0;
    if (bVar7) {
      uVar3 = (ulong)(*param_2 >> 1);
    }
    else {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    uVar6 = uVar5 + 1;
  } while (uVar5 < uVar3);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
            (param_1,param_2,uVar6,~uVar6);
code_r0x003d3ea2:
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar6 = 0x16;
    if (bVar1 != 0x2c) {
      uVar3 = (ulong)(bVar1 >> 1);
      *(byte *)param_1 = bVar1 + 2;
      pbVar4 = (byte *)((long)param_1 + 1);
      goto code_r0x003d3f07;
    }
code_r0x003d3ed7:
    uVar3 = uVar6;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  else {
    uVar3 = param_1[1];
    uVar6 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar3 == uVar6) goto code_r0x003d3ed7;
  }
  pbVar4 = (byte *)param_1[2];
  param_1[1] = uVar3 + 1;
code_r0x003d3f07:
  (pbVar4 + uVar3)[0] = 0x27;
  (pbVar4 + uVar3)[1] = 0;
  return param_1;
}


