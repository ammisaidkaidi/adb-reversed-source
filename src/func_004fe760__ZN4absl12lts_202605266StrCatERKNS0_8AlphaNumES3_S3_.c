// Function: _ZN4absl12lts_202605266StrCatERKNS0_8AlphaNumES3_S3_
// Address: 004fe760
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_202605266StrCatERKNS0_8AlphaNumES3_S3_
                 (byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
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
  lVar3 = param_2[1];
  uVar4 = param_3[1] + lVar3 + param_4[1];
  if (uVar4 == 0) goto code_r0x004fe7f4;
  if (uVar4 < 0x17) {
code_r0x004fe7d7:
    pbVar2 = param_1 + 1;
    *param_1 = (char)uVar4 * '\x02';
  }
  else {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (param_1,0x16,uVar4 - 0x16,0,0,0,0);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((*param_1 & 1) == 0) goto code_r0x004fe7d7;
    pbVar2 = *(byte **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar4;
  }
  pbVar2[uVar4] = 0;
  lVar3 = param_2[1];
code_r0x004fe7f4:
  pbVar2 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    func_0x0099bda0(pbVar2,*param_2,lVar3);
  }
  pbVar5 = param_1 + 1;
  lVar1 = param_3[1];
  if (lVar1 != 0) {
    func_0x0099bda0(pbVar2 + lVar3,*param_3,lVar1);
  }
  if (param_4[1] != 0) {
    func_0x0099bda0(pbVar2 + lVar3 + lVar1,*param_4);
  }
  if ((*param_1 & 1) == 0) {
    *param_1 = (char)uVar4 * '\x02';
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar4;
  }
  pbVar5[uVar4] = 0;
  return param_1;
}


