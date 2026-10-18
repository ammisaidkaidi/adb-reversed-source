// Function: _Z12network_peekN7android4base11borrowed_fdE
// Address: 0041add0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z12network_peekN7android4base11borrowed_fdE(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = func_0x0099c410(param_1,0,0,0x22);
  if (uVar4 == 0xffffffffffffffff) {
    uVar4 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    uVar5 = 0;
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar6;
      uVar4 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_00175765,0x7d,4,0,uVar1);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      func_0x0032eb30(uVar7,&UNK_0017578b,0x12);
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar6 = uVar1;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xff;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar5 | uVar4;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


