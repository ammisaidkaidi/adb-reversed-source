// Function: _ZN30DefaultStandardStreamsCallback16OnStdoutReceivedEPKcm
// Address: 0032fad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN30DefaultStandardStreamsCallback16OnStdoutReceivedEPKcm
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 unaff_R14;
  undefined7 uVar8;
  ulong uVar9;
  
  uVar4 = _stdout;
  puVar2 = *(ulong **)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 0x18);
  if (puVar2 == (ulong *)0x0) {
    uVar5 = func_0x0099bd40(param_2,1,param_3,_stdout,bVar1,param_6,0);
    func_0x0099bd50(uVar4);
    uVar5 = (ulong)(byte)(bVar1 ^ 1 | uVar5 == param_3);
  }
  else {
    uVar3 = *puVar2;
    lVar6 = 0x16;
    if ((*puVar2 & 1) != 0) {
      lVar6 = (uVar3 & 0xfffffffffffffffe) - 1;
    }
    if ((uVar3 & 1) == 0) {
      uVar9 = (ulong)((uint)(uVar3 >> 1) & 0x7f);
    }
    else {
      uVar9 = puVar2[1];
    }
    uVar8 = (undefined7)((ulong)unaff_R14 >> 8);
    if (lVar6 - uVar9 < param_3) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (puVar2,lVar6,(param_3 - lVar6) + uVar9,uVar9,uVar9,0,param_3,param_2);
      uVar5 = CONCAT71(uVar8,1);
    }
    else {
      uVar5 = CONCAT71(uVar8,1);
      if (param_3 != 0) {
        if ((uVar3 & 1) == 0) {
          pbVar7 = (byte *)((long)puVar2 + 1);
        }
        else {
          pbVar7 = (byte *)puVar2[2];
        }
        func_0x0099bd90(pbVar7 + uVar9,param_2,param_3);
        uVar9 = uVar9 + param_3;
        if ((*puVar2 & 1) == 0) {
          *(char *)puVar2 = (char)uVar9 * '\x02';
        }
        else {
          puVar2[1] = uVar9;
        }
        pbVar7[uVar9] = 0;
      }
    }
  }
  return uVar5 & 0xffffffff;
}


