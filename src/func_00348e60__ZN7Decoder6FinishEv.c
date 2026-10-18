// Function: _ZN7Decoder6FinishEv
// Address: 00348e60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7Decoder6FinishEv(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = 1;
  if (bVar1 == 1) {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar4 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_00170446,0x33,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      func_0x0032eb30(uVar6,&UNK_00161210,0x2e);
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar5 = uVar2;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (ulong)(bVar1 ^ 1);
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}


