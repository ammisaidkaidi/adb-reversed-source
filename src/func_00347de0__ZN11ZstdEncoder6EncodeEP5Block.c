// Function: _ZN11ZstdEncoder6EncodeEP5Block
// Address: 00347de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN11ZstdEncoder6EncodeEP5Block(long param_1,undefined8 *param_2)

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
  uint uVar12;
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
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == *(long *)(param_1 + 0x38)) {
    lStack_48 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28) * 0x20;
    lStack_50 = *(long *)(lVar5 + lVar11) + *(long *)(param_1 + 0x20);
    lStack_48 = *(long *)(lVar5 + 0x10 + lVar11) - *(long *)(param_1 + 0x20);
  }
  uStack_40 = 0;
  _ZN5Block6resizeEm(param_2,*(undefined8 *)(param_1 + 8));
  uStack_68 = *param_2;
  uStack_60 = param_2[2];
  uStack_58 = 0;
  lVar5 = ZSTD_compressStream2
                    (*(undefined8 *)(param_1 + 0x48),&uStack_68,&lStack_50,
                     (uint)*(byte *)(param_1 + 0x10) * 2);
  iVar4 = ZSTD_isError(lVar5);
  if (iVar4 == 0) {
    _ZN8IOVector10drop_frontEm(param_1 + 0x18,uStack_40);
    _ZN5Block6resizeEm(param_2,uStack_58);
    uVar12 = 3;
    if (lVar5 == 0) {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        uVar12 = 1;
        if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
          uVar12 = 0;
          cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          if (cVar3 != '\0') {
            puVar6 = (undefined4 *)func_0x0099bce0();
            uVar1 = *puVar6;
            uVar12 = 0;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_70,&UNK_00170446,0x1d8,4,0,0xffffffff);
            uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_70);
            func_0x0032eb30(uVar7,&UNK_001786fe,0x23);
            _ZN7android4base10LogMessageD2Ev(auStack_70);
            *puVar6 = uVar1;
          }
        }
      }
      else {
        uVar12 = *(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20) ^ 3;
      }
    }
  }
  else {
    uVar12 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar6;
      uVar12 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_00170446,0x1cd,4,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0016429d,0x1d);
      uVar8 = ZSTD_getErrorName(lVar5);
      uVar9 = func_0x0099bcf0(uVar8);
      func_0x0032eb30(uVar7,uVar8,uVar9);
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puVar6 = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)uVar12;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar10 = (*pcVar2)();
  return uVar10;
}


