// Function: _Z8dump_hexPKvm
// Address: 003d4170
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z8dump_hexPKvm(ulong *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  
  uVar6 = 0x10;
  if (param_3 < 0x10) {
    uVar6 = param_3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    *(undefined2 *)param_1 = 0x2002;
    return param_1;
  }
  uVar8 = 0;
  do {
    _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz
              (param_1,&UNK_00187cdd,*(undefined1 *)(param_2 + uVar8));
    uVar8 = uVar8 + 1;
  } while (uVar6 != uVar8);
  bVar7 = (byte)*param_1;
  if ((bVar7 & 1) == 0) {
    uVar4 = 0x16;
    if (bVar7 != 0x2c) {
      *(byte *)param_1 = bVar7 + 2;
      pbVar3 = (byte *)((long)param_1 + (ulong)(bVar7 >> 1) + 1);
      *(byte *)((long)param_1 + (ulong)(bVar7 >> 1) + 1) = 0x20;
      goto code_r0x003d425d;
    }
code_r0x003d4225:
    uVar8 = uVar4;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (param_1,uVar8,1,uVar8,uVar8,0,0);
  }
  else {
    uVar8 = param_1[1];
    uVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar8 == uVar4) goto code_r0x003d4225;
  }
  param_1[1] = uVar8 + 1;
  pbVar3 = (byte *)(param_1[2] + uVar8);
  *(undefined1 *)(param_1[2] + uVar8) = 0x20;
code_r0x003d425d:
  pbVar3[1] = 0;
  plVar2 = (long *)func_0x0099be00();
  uVar8 = 0;
  do {
    bVar7 = *(byte *)(param_2 + uVar8);
    if ((*(byte *)(*plVar2 + 1 + (ulong)bVar7 * 2) & 0x40) == 0) {
      bVar7 = 0x2e;
    }
    bVar1 = (byte)*param_1;
    if ((bVar1 & 1) == 0) {
      uVar5 = 0x16;
      if (bVar1 == 0x2c) {
code_r0x003d4280:
        uVar4 = uVar5;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,uVar4,1,uVar4,uVar4,0,0);
        goto code_r0x003d42a9;
      }
      uVar4 = (ulong)(bVar1 >> 1);
      *(byte *)param_1 = bVar1 + 2;
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      uVar4 = param_1[1];
      uVar5 = (*param_1 & 0xfffffffffffffffe) - 1;
      if (uVar4 == uVar5) goto code_r0x003d4280;
code_r0x003d42a9:
      pbVar3 = (byte *)param_1[2];
      param_1[1] = uVar4 + 1;
    }
    pbVar3[uVar4] = bVar7;
    pbVar3[uVar4 + 1] = 0;
    uVar8 = uVar8 + 1;
    if (uVar6 == uVar8) {
      if (0x10 < param_3) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_1,&UNK_001705e0);
      }
      return param_1;
    }
  } while( true );
}


