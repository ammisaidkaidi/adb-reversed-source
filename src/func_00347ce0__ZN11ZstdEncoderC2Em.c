// Function: _ZN11ZstdEncoderC2Em
// Address: 00347ce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11ZstdEncoderC2Em(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0x99e390;
  lVar4 = ZSTD_createCStream();
  param_1[9] = lVar4;
  param_1[10] = ZSTD_freeCStream;
  if (lVar4 == 0) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_00170446,0x1b8,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      func_0x0032eb30(uVar6,&UNK_0017546b,0x2d);
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar5 = uVar1;
    }
  }
  ZSTD_CCtx_setParameter(param_1[9],100,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


