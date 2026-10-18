// Function: _ZN20PairingConnectionCtx11WriteHeaderEPK19PairingPacketHeaderNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
// Address: 00424560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN20PairingConnectionCtx11WriteHeaderEPK19PairingPacketHeaderNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
          (long param_1,undefined4 *param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined1 extraout_DL;
  long *plVar14;
  ulong unaff_R12;
  undefined4 uVar15;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [8];
  byte *pbStack_a0;
  byte *pbStack_98;
  long lStack_90;
  byte bStack_81;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_40;
  undefined2 uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)(param_2 + 1);
  uStack_38 = (undefined2)*param_2;
  uStack_36 = (ushort)((uint)*param_2 >> 0x10);
  uVar5 = uStack_36;
  iVar3 = CONCAT22(uVar2,uStack_36);
  uStack_36 = uVar2 >> 8 | uVar2 << 8;
  uStack_34 = uVar5 >> 8 | (ushort)((uint)(iVar3 << 0x18) >> 0x10);
  cVar6 = (**(code **)(**(long **)(param_1 + 0x4068) + 0x58))
                    (*(long **)(param_1 + 0x4068),&uStack_38,6);
  if (cVar6 == '\0') {
code_r0x004245cf:
    plVar14 = (long *)0x4;
    param_3 = (byte *)0x0;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar6 != '\0') {
      puVar8 = (uint *)func_0x0099bce0();
      uVar12 = *puVar8;
      unaff_R12 = (ulong)uVar12;
      plVar14 = &lStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar14,&UNK_00161570,0xd3,4,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(plVar14);
      param_3 = &UNK_00170845;
      func_0x0032eb30(uVar10,&UNK_00170845,0x27);
      _ZN7android4base10LogMessageD2Ev();
      *puVar8 = uVar12;
    }
    LOCK();
    *(undefined4 *)(param_1 + 8) = 3;
    UNLOCK();
    uVar10 = 0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0x4068);
    cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,param_3,param_4);
    uVar10 = 1;
    if (cVar6 == '\0') goto code_r0x004245cf;
  }
  lVar13 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar13 == lStack_30) {
    return uVar10;
  }
  func_0x0099bd00();
  uVar12 = (uint)lVar13;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_a0 = (byte *)0x0;
  pbStack_98 = (byte *)0x0;
  lStack_90 = 0;
  plVar14 = (long *)plVar14[0x80d];
  lStack_78 = param_1;
  uStack_70 = unaff_R12;
  (**(code **)(*plVar14 + 0x48))(&pbStack_a0,plVar14,6);
  pbVar4 = pbStack_a0;
  if (pbStack_a0 == pbStack_98) {
    uVar10 = 0;
    goto joined_r0x00424778;
  }
  bVar1 = *pbStack_a0;
  *param_3 = bVar1;
  if (bVar1 == 1) {
    if (1 < pbStack_a0[1]) {
      uVar10 = 0;
      plVar14 = (long *)0x0;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      if (cVar6 != '\0') {
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar15 = *puVar9;
        uVar10 = 0;
        uVar12 = 4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_a8,&UNK_00161570,0xec,4,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0016307c,0x1b);
        plVar14 = (long *)(ulong)pbVar4[1];
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar11);
        _ZN7android4base10LogMessageD2Ev(auStack_a8);
        *puVar9 = uVar15;
      }
      goto joined_r0x00424778;
    }
    param_3[1] = pbStack_a0[1];
    uVar7 = *(uint *)(pbStack_a0 + 2);
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    *(uint *)(param_3 + 2) = uVar7;
    uVar10 = 1;
    if (0xffffbfff < uVar7 - 0x4001) goto joined_r0x00424778;
    uVar10 = 0;
    plVar14 = (long *)0x0;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
    if (cVar6 == '\0') goto joined_r0x00424778;
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar15 = *puVar9;
    uVar12 = 4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_a8,&UNK_00161570,0xf4,4,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015ca41,0x34);
    uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj
                       (uVar10,*(undefined4 *)(param_3 + 2));
  }
  else {
    uVar10 = 0;
    plVar14 = (long *)0x0;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
    if (cVar6 == '\0') goto joined_r0x00424778;
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar15 = *puVar9;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_a8,&UNK_00161570,0xe6,4,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
    uVar10 = func_0x0032eb30(uVar10,&UNK_001897dd,0x29);
    bStack_81 = 1;
    uVar10 = func_0x0032eb30(uVar10,&bStack_81,1);
    uVar10 = func_0x0032eb30(uVar10,&UNK_0018693b,6);
    bStack_81 = *param_3;
    uVar12 = (uint)bStack_81;
    uVar11 = func_0x0032eb30(uVar10,&bStack_81,1);
  }
  uVar10 = 0;
  plVar14 = (long *)&UNK_001692c7;
  func_0x0032eb30(uVar11,&UNK_001692c7,1);
  _ZN7android4base10LogMessageD2Ev(auStack_a8);
  *puVar9 = uVar15;
joined_r0x00424778:
  if (pbStack_a0 != (byte *)0x0) {
    plVar14 = (long *)(lStack_90 - (long)pbStack_a0);
    pbStack_98 = pbStack_a0;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    uVar10 = func_0x0099bd00();
    *(undefined1 *)plVar14 = 1;
    *(undefined1 *)((long)plVar14 + 1) = extraout_DL;
    *(uint *)((long)plVar14 + 2) = uVar12;
    return uVar10;
  }
  return uVar10;
}


