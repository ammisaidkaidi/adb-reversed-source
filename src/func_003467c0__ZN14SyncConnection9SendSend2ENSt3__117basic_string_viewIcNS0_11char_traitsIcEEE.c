// Function: _ZN14SyncConnection9SendSend2ENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEj15CompressionTypeb
// Address: 003467c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN14SyncConnection9SendSend2ENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEj15CompressionTypeb
                (undefined4 *param_1,undefined8 param_2,ulong param_3,undefined4 param_4,
                undefined4 param_5,char param_6)

{
  code *pcVar1;
  ulong *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_60 [8];
  ulong *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0x401) {
    uStack_48 = 0;
    uStack_40 = 0;
    puStack_58 = (ulong *)0x0;
    uStack_50 = 0;
    uVar8 = 0x80000000;
    switch(param_5) {
    case 1:
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar3 != '\0') {
        puVar5 = (undefined4 *)func_0x0099bce0();
        uVar9 = *puVar5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_60,&UNK_00189432,0x186,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_60);
        func_0x0032eb30(uVar6,&UNK_001611f0,0x1f);
        _ZN7android4base10LogMessageD2Ev(auStack_60);
        *puVar5 = uVar9;
      }
      uVar9 = 0;
      break;
    case 2:
      uVar8 = 0x80000001;
      uVar9 = 1;
      break;
    case 3:
      uVar8 = 0x80000002;
      uVar9 = 2;
      break;
    case 4:
      uVar8 = 0x80000004;
      uVar9 = 4;
      break;
    default:
      uVar9 = 0;
    }
    if (param_6 != '\0') {
      uVar9 = uVar8;
    }
    _ZN5Block6resizeEm(&puStack_58,param_3 + 0x14);
    puVar2 = puStack_58;
    *puStack_58 = param_3 << 0x20 | 0x32444e53;
    func_0x0099bda0(puStack_58 + 1,param_2,param_3);
    *(undefined4 *)((long)puVar2 + param_3 + 8) = 0x32444e53;
    *(undefined4 *)((long)puVar2 + param_3 + 0xc) = param_4;
    *(undefined4 *)((long)puVar2 + param_3 + 0x10) = uVar9;
    uVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(*param_1,puStack_58,uStack_48);
    puVar2 = puStack_58;
    uVar7 = (ulong)uVar4;
    puStack_58 = (ulong *)0x0;
    if (puVar2 != (ulong *)0x0) {
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    uVar7 = 0;
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00172144);
    puVar5 = (undefined4 *)func_0x0099bce0();
    *puVar5 = 0x24;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  return uVar7;
}


