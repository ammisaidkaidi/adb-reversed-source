// Function: _ZN4absl12lts_202605269StrAppendEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS0_8AlphaNumESB_SB_SB_
// Address: 004ff510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605269StrAppendEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS0_8AlphaNumESB_SB_SB_
               (ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  
  uVar7 = param_3[1] + param_2[1] + param_4[1] + param_5[1];
  bVar1 = (byte)*param_1;
  uVar10 = param_1[1];
  uVar12 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar12 = uVar10;
  }
  if (-uVar12 - 10 < uVar7) {
    _ZN4absl12lts_2026052619ThrowStdLengthErrorEPKc(&UNK_00157dda);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = uVar7 + uVar12;
  uVar4 = *param_1;
  uVar6 = (uVar4 & 0xfffffffffffffffe) - 1;
  uVar8 = uVar6;
  if ((bVar1 & 1) == 0) {
    uVar8 = 0x16;
  }
  if (uVar8 < uVar7) {
    if ((uVar4 & 1) == 0) {
      uVar6 = 0x16;
    }
    uVar8 = 0xfffffffffffffff6;
    if ((-uVar6 - 10 < uVar6) || (uVar8 = uVar6 * 2, uVar7 < uVar8)) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar8);
      uVar4 = (ulong)(byte)*param_1;
      uVar10 = param_1[1];
    }
  }
  uVar8 = (ulong)((byte)((uVar4 & 0xffffffff) >> 1) & 0x7f);
  if ((uVar4 & 1) != 0) {
    uVar8 = uVar10;
  }
  uVar6 = uVar7 - uVar8;
  if (uVar7 < uVar8 || uVar6 == 0) {
    if ((uVar4 & 1) == 0) {
      pbVar5 = (byte *)((long)param_1 + 1);
      *(char *)param_1 = (char)uVar7 * '\x02';
    }
    else {
      pbVar5 = (byte *)param_1[2];
      param_1[1] = uVar7;
    }
    pbVar5[uVar7] = 0;
  }
  else {
    uVar8 = *param_1;
    lVar9 = 0x16;
    if ((uVar4 & 1) != 0) {
      lVar9 = (uVar8 & 0xfffffffffffffffe) - 1;
    }
    if ((uVar8 & 1) == 0) {
      uVar10 = (ulong)((uint)(uVar8 >> 1) & 0x7f);
    }
    if (lVar9 - uVar10 < uVar6) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar9,(uVar6 - lVar9) + uVar10,uVar10,uVar10,0,0);
      param_1[1] = uVar10;
      uVar8 = (ulong)(byte)*param_1;
    }
    uVar10 = uVar10 + uVar6;
    if ((uVar8 & 1) == 0) {
      *(char *)param_1 = (char)uVar10 * '\x02';
      *(byte *)((long)param_1 + uVar10 + 1) = 0;
    }
    else {
      param_1[1] = uVar10;
      *(undefined1 *)(param_1[2] + uVar10) = 0;
    }
  }
  pbVar5 = (byte *)((long)param_1 + 1);
  pbVar11 = pbVar5;
  if ((*param_1 & 1) != 0) {
    pbVar11 = (byte *)param_1[2];
  }
  pbVar11 = pbVar11 + uVar12;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    func_0x0099bda0(pbVar11,*param_2,lVar9);
  }
  pbVar11 = pbVar11 + lVar9;
  lVar9 = param_3[1];
  if (lVar9 != 0) {
    func_0x0099bda0(pbVar11,*param_3,lVar9);
  }
  lVar2 = param_4[1];
  if (lVar2 != 0) {
    func_0x0099bda0(pbVar11 + lVar9,*param_4,lVar2);
  }
  if (param_5[1] != 0) {
    func_0x0099bda0(pbVar11 + lVar9 + lVar2,*param_5);
  }
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)uVar7 * '\x02';
  }
  else {
    pbVar5 = (byte *)param_1[2];
    param_1[1] = uVar7;
  }
  pbVar5[uVar7] = 0;
  return;
}


