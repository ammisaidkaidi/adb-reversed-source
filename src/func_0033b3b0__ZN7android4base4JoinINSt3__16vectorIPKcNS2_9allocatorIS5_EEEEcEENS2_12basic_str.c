// Function: _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEOT_T0_
// Address: 0033b3b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEOT_T0_
                  (ulong *param_1,long *param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar11 == puVar1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else if ((long)puVar1 - (long)puVar11 == 8) {
    uVar2 = *puVar11;
    uVar5 = func_0x0099bcf0(uVar2);
    if (0xfffffffffffffff6 < uVar5) {
      func_0x0032e8f0();
      pcVar3 = (code *)swi(3);
      puVar8 = (ulong *)(*pcVar3)();
      return puVar8;
    }
    if (uVar5 < 0x17) {
      *(char *)param_1 = (char)uVar5 * '\x02';
      pbVar9 = (byte *)((long)param_1 + 1);
    }
    else {
      lVar6 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar6 = (uVar5 | 7) + 1;
      }
      pbVar9 = (byte *)_Znwm(lVar6);
      *param_1 = lVar6 + 1;
      param_1[1] = uVar5;
      param_1[2] = (ulong)pbVar9;
    }
    func_0x0099bd90(pbVar9,uVar2,uVar5);
    pbVar9[uVar5] = 0;
  }
  else {
    lVar6 = func_0x0099bcf0(*puVar11);
    while (puVar11 = puVar11 + 1, puVar11 != puVar1) {
      lVar7 = func_0x0099bcf0(*puVar11);
      lVar6 = lVar6 + lVar7 + 1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,lVar6);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,*(undefined8 *)*param_2);
    puVar11 = (undefined8 *)*param_2;
    while (puVar11 = puVar11 + 1, puVar11 != (undefined8 *)param_2[1]) {
      uVar5 = *param_1;
      uVar10 = (uVar5 & 0xfffffffffffffffe) - 1;
      if ((*param_1 & 1) == 0) {
        uVar10 = 0x16;
      }
      bVar4 = (byte)uVar5;
      if ((uVar5 & 1) == 0) {
        uVar5 = (ulong)((uint)uVar5 >> 1 & 0x7f);
      }
      else {
        uVar5 = param_1[1];
      }
      if (uVar10 == uVar5) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,uVar10,1,uVar10,uVar10,0,0);
        param_1[1] = uVar10;
        bVar4 = (byte)*param_1;
      }
      pbVar9 = (byte *)((long)param_1 + 1);
      if ((bVar4 & 1) != 0) {
        pbVar9 = (byte *)param_1[2];
      }
      pbVar9[uVar5] = param_3;
      uVar5 = uVar5 + 1;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)uVar5 * '\x02';
      }
      else {
        param_1[1] = uVar5;
      }
      pbVar9[uVar5] = 0;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,*puVar11);
    }
  }
  return param_1;
}


