// Function: _ZN32BugreportStandardStreamsCallback16OnStdoutReceivedEPKcm
// Address: 0032fe30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN32BugreportStandardStreamsCallback16OnStdoutReceivedEPKcm(long param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      cVar1 = *(char *)(param_2 + lVar4);
      if (cVar1 == '\n') {
        _ZN32BugreportStandardStreamsCallback11ProcessLineERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (param_1);
        if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x91) = 0;
          *(undefined1 *)(param_1 + 0x90) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
        }
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x90);
        uVar5 = (uVar7 & 0xfffffffffffffffe) - 1;
        if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
          uVar5 = 0x16;
        }
        bVar2 = (byte)uVar7;
        if ((uVar7 & 1) == 0) {
          uVar7 = (ulong)((uint)uVar7 >> 1 & 0x7f);
        }
        else {
          uVar7 = *(ulong *)(param_1 + 0x98);
        }
        if (uVar5 == uVar7) {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    ((undefined1 *)(param_1 + 0x90),uVar5,1,uVar5,uVar5,0,0);
          *(ulong *)(param_1 + 0x98) = uVar5;
          bVar2 = *(byte *)(param_1 + 0x90);
        }
        lVar3 = param_1 + 0x91;
        if ((bVar2 & 1) != 0) {
          lVar3 = *(long *)(param_1 + 0xa0);
        }
        *(char *)(lVar3 + uVar7) = cVar1;
        lVar6 = uVar7 + 1;
        if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
          *(char *)(param_1 + 0x90) = (char)lVar6 * '\x02';
        }
        else {
          *(long *)(param_1 + 0x98) = lVar6;
        }
        *(undefined1 *)(lVar3 + lVar6) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (param_3 != lVar4);
  }
  return 1;
}


