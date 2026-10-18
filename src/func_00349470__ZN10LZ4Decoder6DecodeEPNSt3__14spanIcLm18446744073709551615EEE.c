// Function: _ZN10LZ4Decoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
// Address: 00349470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN10LZ4Decoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
                (long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == *(long *)(param_1 + 0x30)) {
    lStack_40 = 0;
    lVar10 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20) * 0x20;
    lStack_40 = *(long *)(lVar10 + 0x10 + lVar11) - *(long *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 0x18) + *(long *)(lVar10 + lVar11);
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = 0;
  lVar10 = LZ4F_decompress(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x40),
                           &uStack_48,lVar10,&lStack_40,0);
  iVar4 = LZ4F_isError(lVar10);
  if (iVar4 == 0) {
    _ZN8IOVector10drop_frontEm(param_1 + 0x10,lStack_40);
    if (lVar10 == 0) {
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) {
        uVar9 = 0;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 != '\0') {
          puVar5 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar5;
          uVar9 = 0;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_50,&UNK_00170446,0x108,4,0,0xffffffff);
          uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_50);
          func_0x0032eb30(uVar6,&UNK_0017046f,0x2a);
          _ZN7android4base10LogMessageD2Ev(auStack_50);
          *puVar5 = uVar1;
        }
        goto code_r0x0034950b;
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    param_2[1] = uStack_48;
    uVar9 = 2;
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar9 = (ulong)(((byte)(~*(byte *)(param_1 + 0x50) |
                             *(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) & 1) * 2 + 1);
    }
  }
  else {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      uVar9 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_50,&UNK_00170446,0x100,4,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_50);
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015c64c,0x18);
      uVar7 = LZ4F_getErrorName(lVar10);
      uVar8 = func_0x0099bcf0(uVar7);
      func_0x0032eb30(uVar6,uVar7,uVar8);
      _ZN7android4base10LogMessageD2Ev(auStack_50);
      *puVar5 = uVar1;
    }
  }
code_r0x0034950b:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar9;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar9 = (*pcVar2)();
  return uVar9;
}


