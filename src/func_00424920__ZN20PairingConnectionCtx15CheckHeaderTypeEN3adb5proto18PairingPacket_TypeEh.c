// Function: _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh
// Address: 00424920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh
               (undefined1 *param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (ulong)param_2 & 0xff;
  iVar6 = (int)uVar7;
  if (iVar6 != param_3) {
    param_1 = (undefined1 *)0x4;
    param_2 = (undefined *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar4;
      param_1 = auStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (param_1,&UNK_00161570,0x109,4,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(param_1);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001757eb,0x21);
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,uVar7);
      uVar5 = func_0x0032eb30(uVar5,&UNK_0017086d,8);
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,param_3);
      param_2 = &UNK_001692c7;
      func_0x0032eb30(uVar5,&UNK_001692c7,1);
      _ZN7android4base10LogMessageD2Ev();
      *puVar4 = uVar2;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (uint)(iVar6 == param_3);
  }
  func_0x0099bd00();
  (**(code **)(param_1 + 0x4058))
            (param_2,*(undefined4 *)(param_1 + 0x4078),*(undefined8 *)(param_1 + 0x4060));
  LOCK();
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = 3;
  UNLOCK();
  return uVar1;
}


