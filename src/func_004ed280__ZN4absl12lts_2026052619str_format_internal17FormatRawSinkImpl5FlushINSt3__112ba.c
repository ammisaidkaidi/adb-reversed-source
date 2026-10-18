// Function: _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
// Address: 004ed280
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
               (ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar1 = *param_1;
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar1 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
  }
  else {
    uVar3 = param_1[1];
  }
  if (lVar2 - uVar3 < param_3) {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (param_1,lVar2,(param_3 - lVar2) + uVar3,uVar3,uVar3,0,param_3,param_2);
  }
  else if (param_3 != 0) {
    if ((uVar1 & 1) == 0) {
      pbVar4 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar4 = (byte *)param_1[2];
    }
    func_0x0099bd90(pbVar4 + uVar3,param_2,param_3);
    uVar3 = uVar3 + param_3;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar3 * '\x02';
    }
    else {
      param_1[1] = uVar3;
    }
    pbVar4[uVar3] = 0;
  }
  return;
}


