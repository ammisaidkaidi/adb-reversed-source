// Function: _ZN11ZstdDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
// Address: 00349790
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN11ZstdDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
                (long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_50 = 0;
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == *(long *)(param_1 + 0x30)) {
    lStack_48 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20) * 0x20;
    lStack_50 = *(long *)(lVar5 + lVar11) + *(long *)(param_1 + 0x18);
    lStack_48 = *(long *)(lVar5 + 0x10 + lVar11) - *(long *)(param_1 + 0x18);
  }
  uStack_40 = 0;
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = 0;
  lVar5 = ZSTD_decompressStream(*(undefined8 *)(param_1 + 0x58),&uStack_68,&lStack_50);
  iVar4 = ZSTD_isError(lVar5);
  if (iVar4 == 0) {
    _ZN8IOVector10drop_frontEm(param_1 + 0x10,uStack_40);
    if (lVar5 == 0) {
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) {
        uVar10 = 0;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 != '\0') {
          puVar6 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar6;
          uVar10 = 0;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_70,&UNK_00170446,0x1a0,4,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_70);
          func_0x0032eb30(uVar7,&UNK_0016789d,0x2b);
          _ZN7android4base10LogMessageD2Ev(auStack_70);
          *puVar6 = uVar1;
        }
        goto code_r0x00349843;
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    param_2[1] = uStack_58;
    uVar10 = 2;
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar10 = (ulong)(((byte)(~*(byte *)(param_1 + 0x50) |
                              *(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) & 1) * 2 + 1);
    }
  }
  else {
    uVar10 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar6;
      uVar10 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_00170446,0x199,4,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      uVar7 = func_0x0032eb30(uVar7,&UNK_00186284,0x1e);
      uVar8 = ZSTD_getErrorName(lVar5);
      uVar9 = func_0x0099bcf0(uVar8);
      func_0x0032eb30(uVar7,uVar8,uVar9);
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puVar6 = uVar1;
    }
  }
code_r0x00349843:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar10;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar10 = (*pcVar2)();
  return uVar10;
}


