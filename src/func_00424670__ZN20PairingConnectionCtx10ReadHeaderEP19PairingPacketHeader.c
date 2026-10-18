// Function: _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader
// Address: 00424670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader
                (long param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 extraout_DL;
  undefined8 unaff_RBX;
  long *plVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_60 [8];
  byte *pbStack_58;
  byte *pbStack_50;
  long lStack_48;
  byte bStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_58 = (byte *)0x0;
  pbStack_50 = (byte *)0x0;
  lStack_48 = 0;
  plVar8 = *(long **)(param_1 + 0x4068);
  (**(code **)(*plVar8 + 0x48))(&pbStack_58,plVar8,6);
  pbVar2 = pbStack_58;
  if (pbStack_58 == pbStack_50) {
    uVar7 = 0;
    goto joined_r0x00424778;
  }
  bVar1 = *pbStack_58;
  *param_2 = bVar1;
  if (bVar1 == 1) {
    if (1 < pbStack_58[1]) {
      uVar7 = 0;
      plVar8 = (long *)0x0;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      if (cVar3 != '\0') {
        puVar5 = (undefined4 *)func_0x0099bce0();
        uVar9 = *puVar5;
        uVar7 = 0;
        param_4 = 4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_60,&UNK_00161570,0xec,4,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_60);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0016307c,0x1b);
        plVar8 = (long *)(ulong)pbVar2[1];
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6);
        _ZN7android4base10LogMessageD2Ev(auStack_60);
        *puVar5 = uVar9;
      }
      goto joined_r0x00424778;
    }
    param_2[1] = pbStack_58[1];
    uVar4 = *(uint *)(pbStack_58 + 2);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(uint *)(param_2 + 2) = uVar4;
    uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (0xffffbfff < uVar4 - 0x4001) goto joined_r0x00424778;
    uVar7 = 0;
    plVar8 = (long *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
    if (cVar3 == '\0') goto joined_r0x00424778;
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar5;
    param_4 = 4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_60,&UNK_00161570,0xf4,4,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_60);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0015ca41,0x34);
    uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,*(undefined4 *)(param_2 + 2));
  }
  else {
    uVar7 = 0;
    plVar8 = (long *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
    if (cVar3 == '\0') goto joined_r0x00424778;
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_60,&UNK_00161570,0xe6,4,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_60);
    uVar6 = func_0x0032eb30(uVar6,&UNK_001897dd,0x29);
    bStack_39 = 1;
    uVar6 = func_0x0032eb30(uVar6,&bStack_39,1);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0018693b,6);
    bStack_39 = *param_2;
    param_4 = (uint)bStack_39;
    uVar6 = func_0x0032eb30(uVar6,&bStack_39,1);
  }
  uVar7 = 0;
  plVar8 = (long *)&UNK_001692c7;
  func_0x0032eb30(uVar6,&UNK_001692c7,1);
  _ZN7android4base10LogMessageD2Ev(auStack_60);
  *puVar5 = uVar9;
joined_r0x00424778:
  if (pbStack_58 != (byte *)0x0) {
    plVar8 = (long *)(lStack_48 - (long)pbStack_58);
    pbStack_50 = pbStack_58;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    uVar7 = func_0x0099bd00();
    *(undefined1 *)plVar8 = 1;
    *(undefined1 *)((long)plVar8 + 1) = extraout_DL;
    *(uint *)((long)plVar8 + 2) = param_4;
    return uVar7;
  }
  return uVar7 & 0xffffffff;
}


