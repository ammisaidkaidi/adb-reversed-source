// Function: _ZN14SyncConnection9SendRecv2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE15CompressionType
// Address: 00348c70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN14SyncConnection9SendRecv2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE15CompressionType
                (undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auStack_60 [8];
  ulong *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 1) == 0) {
    uVar8 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if (uVar8 < 0x401) {
    uStack_48 = 0;
    uStack_40 = 0;
    puStack_58 = (ulong *)0x0;
    uStack_50 = 0;
    uVar11 = 0x32564352;
    switch(param_3) {
    case 1:
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar4 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_60,&UNK_00189432,0x1b9,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_60);
        func_0x0032eb30(uVar6,&UNK_001611f0,0x1f);
        _ZN7android4base10LogMessageD2Ev(auStack_60);
        *puVar7 = uVar1;
      }
      break;
    case 2:
      uVar11 = 0x132564352;
      break;
    case 3:
      uVar11 = 0x232564352;
      break;
    case 4:
      uVar11 = 0x432564352;
    }
    if ((*param_2 & 1) == 0) {
      uVar9 = (ulong)(*param_2 >> 1);
    }
    else {
      uVar9 = *(ulong *)(param_2 + 8);
    }
    _ZN5Block6resizeEm(&puStack_58,uVar9 + 0x10);
    puVar3 = puStack_58;
    *puStack_58 = uVar8 << 0x20 | 0x32564352;
    bVar12 = (*param_2 & 1) != 0;
    pbVar10 = param_2 + 1;
    if (bVar12) {
      pbVar10 = *(byte **)(param_2 + 0x10);
    }
    uVar8 = (ulong)(*param_2 >> 1);
    if (bVar12) {
      uVar8 = *(ulong *)(param_2 + 8);
    }
    func_0x0099bda0(puStack_58 + 1,pbVar10,uVar8);
    *(undefined8 *)((long)puVar3 + uVar8 + 8) = uVar11;
    uVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(*param_1,puStack_58,uStack_48);
    puVar3 = puStack_58;
    uVar9 = (ulong)uVar5;
    puStack_58 = (ulong *)0x0;
    if (puVar3 != (ulong *)0x0) {
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    uVar9 = 0;
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00172144,uVar8);
    puVar7 = (undefined4 *)func_0x0099bce0();
    *puVar7 = 0x24;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar9;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}


