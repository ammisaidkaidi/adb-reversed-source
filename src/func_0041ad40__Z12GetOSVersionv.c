// Function: _Z12GetOSVersionv
// Address: 0041ad40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z12GetOSVersionv(ulong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1a6 [130];
  undefined1 auStack_124 [130];
  undefined1 auStack_a2 [130];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_1a6,0,0x186);
  func_0x0099c460(auStack_1a6);
  _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_0018371e,auStack_1a6,auStack_124,auStack_a2);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  func_0x0099bd00();
  lStack_1d8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1d0 = param_1;
  uVar4 = func_0x0099c410();
  if (uVar4 == 0xffffffffffffffff) {
    uVar4 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    uVar5 = 0;
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar6;
      uVar4 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1e0,&UNK_00175765,0x7d,4,0,uVar1);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_1e0);
      func_0x0032eb30(uVar7,&UNK_0017578b,0x12);
      _ZN7android4base10LogMessageD2Ev(auStack_1e0);
      *puVar6 = uVar1;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xff;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1d8) {
    return uVar5 | uVar4;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


