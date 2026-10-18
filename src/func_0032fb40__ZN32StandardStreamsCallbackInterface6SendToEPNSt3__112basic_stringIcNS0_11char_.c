// Function: _ZN32StandardStreamsCallbackInterface6SendToEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEP8_IO_FILEPKcmb
// Address: 0032fb40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN32StandardStreamsCallbackInterface6SendToEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEP8_IO_FILEPKcmb
                (ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulong uVar6;
  
  if (param_1 == (ulong *)0x0) {
    uVar2 = func_0x0099bd40(param_3,1,param_4,param_2);
    func_0x0099bd50(param_2);
    uVar2 = CONCAT71((int7)((param_5 & 0xffffffff) >> 8),
                     (byte)(param_5 & 0xffffffff) ^ 1 | uVar2 == param_4);
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0x16;
    if ((*param_1 & 1) != 0) {
      lVar3 = (uVar1 & 0xfffffffffffffffe) - 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar6 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
    }
    else {
      uVar6 = param_1[1];
    }
    uVar5 = (undefined7)((ulong)unaff_R14 >> 8);
    if (lVar3 - uVar6 < param_4) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar3,(param_4 - lVar3) + uVar6,uVar6,uVar6,0,param_4,param_3);
      uVar2 = CONCAT71(uVar5,1);
    }
    else {
      uVar2 = CONCAT71(uVar5,1);
      if (param_4 != 0) {
        if ((uVar1 & 1) == 0) {
          pbVar4 = (byte *)((long)param_1 + 1);
        }
        else {
          pbVar4 = (byte *)param_1[2];
        }
        func_0x0099bd90(pbVar4 + uVar6,param_3,param_4);
        uVar6 = uVar6 + param_4;
        if ((*param_1 & 1) == 0) {
          *(char *)param_1 = (char)uVar6 * '\x02';
        }
        else {
          param_1[1] = uVar6;
        }
        pbVar4[uVar6] = 0;
      }
    }
  }
  return uVar2 & 0xffffffff;
}


