// Function: _ZN4absl12lts_202605266StrCatERKNS0_8AlphaNumES3_
// Address: 004fe640
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_202605266StrCatERKNS0_8AlphaNumES3_
                 (byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar1 = param_2[1];
  uVar3 = param_3[1] + lVar1;
  if (uVar3 == 0) {
    pbVar2 = param_1 + 1;
    goto joined_r0x004fe6cc;
  }
  if (uVar3 < 0x17) {
code_r0x004fe6b2:
    pbVar2 = param_1 + 1;
    *param_1 = (char)uVar3 * '\x02';
  }
  else {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (param_1,0x16,uVar3 - 0x16,0,0,0,0);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((*param_1 & 1) == 0) goto code_r0x004fe6b2;
    pbVar2 = *(byte **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar3;
  }
  pbVar2[uVar3] = 0;
  pbVar2 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x10);
  }
  lVar1 = param_2[1];
joined_r0x004fe6cc:
  if (lVar1 != 0) {
    func_0x0099bda0(pbVar2,*param_2,lVar1);
  }
  pbVar4 = param_1 + 1;
  if (param_3[1] != 0) {
    func_0x0099bda0(pbVar2 + lVar1,*param_3);
  }
  if ((*param_1 & 1) == 0) {
    *param_1 = (char)uVar3 * '\x02';
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar3;
  }
  pbVar4[uVar3] = 0;
  return param_1;
}


