// Function: _ZN11ZstdDecoderC2ENSt3__14spanIcLm18446744073709551615EEE
// Address: 003496a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11ZstdDecoderC2ENSt3__14spanIcLm18446744073709551615EEE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = param_3;
  *param_1 = 0x99e3f0;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar4 = ZSTD_createDStream();
  param_1[0xb] = lVar4;
  param_1[0xc] = ZSTD_freeDStream;
  if (lVar4 == 0) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_30,&UNK_00170446,0x186,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_30);
      func_0x0032eb30(uVar6,&UNK_0016e971,0x2f);
      _ZN7android4base10LogMessageD2Ev(auStack_30);
      *puVar5 = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


