// Function: _ZN19libadbusbconnection4initEv
// Address: 00418c60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN19libadbusbconnection4initEv(void)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar3 != '\0') {
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_30,&UNK_001868c7,0x15,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_30);
    func_0x0032eb30(uVar5,&UNK_001707c7,0x29);
    _ZN7android4base10LogMessageD2Ev(auStack_30);
    *puVar4 = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


