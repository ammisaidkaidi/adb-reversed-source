// Function: _ZN29AdbServerStateStreamsCallback16OnStdoutReceivedEPKcm
// Address: 0033c680
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN29AdbServerStateStreamsCallback16OnStdoutReceivedEPKcm
          (long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  lVar2 = 0x16;
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar2 = (uVar1 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x28);
  }
  if (lVar2 - uVar3 < param_3) {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              ((char *)(param_1 + 0x20),lVar2,(param_3 - lVar2) + uVar3,uVar3,uVar3,0,param_3,
               param_2);
  }
  else if (param_3 != 0) {
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1 + 0x21;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x30);
    }
    func_0x0099bd90(lVar2 + uVar3,param_2,param_3);
    lVar4 = uVar3 + param_3;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(char *)(param_1 + 0x20) = (char)lVar4 * '\x02';
    }
    else {
      *(long *)(param_1 + 0x28) = lVar4;
    }
    *(undefined1 *)(lVar2 + lVar4) = 0;
  }
  return 1;
}


