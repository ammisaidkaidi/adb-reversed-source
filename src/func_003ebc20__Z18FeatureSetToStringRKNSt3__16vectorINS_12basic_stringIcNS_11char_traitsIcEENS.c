// Function: _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
// Address: 003ebc20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
                  (ulong *param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  pbVar12 = (byte *)*param_2;
  pbVar11 = (byte *)param_2[1];
  if (pbVar12 != pbVar11) {
    if ((long)pbVar11 - (long)pbVar12 != 0x18) {
      if ((*pbVar12 & 1) == 0) {
        uVar10 = (ulong)(*pbVar12 >> 1);
      }
      else {
        uVar10 = *(ulong *)(pbVar12 + 8);
      }
      while( true ) {
        pbVar5 = pbVar12 + 0x18;
        if (pbVar5 == pbVar11) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1);
          pbVar12 = (byte *)*param_2;
          bVar13 = (*pbVar12 & 1) != 0;
          pbVar11 = pbVar12 + 1;
          if (bVar13) {
            pbVar11 = *(byte **)(pbVar12 + 0x10);
          }
          uVar10 = (ulong)(*pbVar12 >> 1);
          if (bVar13) {
            uVar10 = *(ulong *)(pbVar12 + 8);
          }
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,pbVar11,uVar10);
          pbVar12 = (byte *)(*param_2 + 0x18);
          if (pbVar12 == (byte *)param_2[1]) {
            return param_1;
          }
          do {
            uVar6 = _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                              (param_1,1,0x2c);
            bVar13 = (*pbVar12 & 1) != 0;
            pbVar11 = pbVar12 + 1;
            if (bVar13) {
              pbVar11 = *(byte **)(pbVar12 + 0x10);
            }
            uVar10 = (ulong)(*pbVar12 >> 1);
            if (bVar13) {
              uVar10 = *(ulong *)(pbVar12 + 8);
            }
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (uVar6,pbVar11,uVar10);
            pbVar12 = pbVar12 + 0x18;
          } while (pbVar12 != (byte *)param_2[1]);
          return param_1;
        }
        uVar9 = uVar10 + 1;
        if (uVar9 == 0) break;
        if ((*pbVar5 & 1) == 0) {
          uVar8 = (ulong)(*pbVar5 >> 1);
        }
        else {
          uVar8 = *(ulong *)(pbVar12 + 0x20);
        }
        uVar10 = uVar9 + uVar8;
        pbVar12 = pbVar5;
        if (CARRY8(uVar9,uVar8)) {
code_r0x007e0980:
          func_0x008fce60();
          pcVar1 = (code *)swi(3);
          puVar7 = (ulong *)(*pcVar1)();
          return puVar7;
        }
      }
      func_0x008fce60();
      goto code_r0x007e0980;
    }
    if ((*pbVar12 & 1) != 0) {
      func_0x00330340(param_1,*(undefined8 *)(pbVar12 + 0x10),*(undefined8 *)(pbVar12 + 8));
      return param_1;
    }
    uVar2 = *(undefined4 *)(pbVar12 + 4);
    uVar3 = *(undefined4 *)(pbVar12 + 8);
    uVar4 = *(undefined4 *)(pbVar12 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)pbVar12;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    param_1[2] = *(ulong *)(pbVar12 + 0x10);
    if ((*param_1 & 1) == 0) {
      return param_1;
    }
    if (1 < *param_1) {
      return param_1;
    }
    func_0x008fce90();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


