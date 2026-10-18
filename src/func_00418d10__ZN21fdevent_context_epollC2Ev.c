// Function: _ZN21fdevent_context_epollC2Ev
// Address: 00418d10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN21fdevent_context_epollC2Ev(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  int iStack_b4;
  undefined8 *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  uint *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined4 *puStack_60;
  uint *puStack_58;
  undefined *puStack_50;
  int iStack_44;
  undefined4 auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_1 + 5;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x14;
  *param_1 = 0x99f3d0;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = 0;
  puStack_50 = &UNK_00418daa;
  uVar3 = func_0x0099c420(0x80000);
  puStack_50 = &UNK_00418db2;
  puVar6 = (undefined4 *)func_0x0099bce0();
  uVar15 = *puVar6;
  if (*(int *)(param_1 + 0x16) != -1) {
    puStack_50 = &UNK_00418dc8;
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  *puVar6 = uVar15;
  puStack_50 = &UNK_00418dde;
  iVar4 = func_0x0099c430(0,0x80800);
  if (iVar4 == -1) {
    puStack_50 = &UNK_00418df2;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar2 != '\0') {
      uVar15 = *puVar6;
      puStack_50 = &UNK_00418f45;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00187fcd,0x2c,6,0,uVar15);
      puStack_50 = &UNK_00418f4d;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_50 = &UNK_00418f61;
      func_0x0032eb30(uVar10,&UNK_0017573a,0x2a);
      puStack_50 = &UNK_00418f69;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar6 = uVar15;
    }
  }
  puStack_50 = &UNK_00418e0e;
  iVar5 = func_0x0099bf10(iVar4,0x406,3);
  if (iVar5 == -1) {
    puStack_50 = &UNK_00418e27;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    uVar15 = *puVar6;
    if (cVar2 != '\0') {
      puStack_50 = &UNK_00418f91;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00187fcd,0x31,6,0,uVar15);
      puStack_50 = &UNK_00418f9a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_50 = &UNK_00418fae;
      func_0x0032eb30(uVar10,&UNK_00167d25,0x27);
      puStack_50 = &UNK_00418fb7;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar6 = uVar15;
    }
  }
  else {
    uVar15 = *puVar6;
  }
  if (*(int *)((long)param_1 + 0xb4) != -1) {
    puStack_50 = &UNK_00418e42;
    func_0x0099bd10();
  }
  *(int *)((long)param_1 + 0xb4) = iVar5;
  *puVar6 = uVar15;
  puStack_50 = &UNK_00418e68;
  iStack_44 = iVar4;
  puVar7 = (uint *)_ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
                             (param_1,&iStack_44,&UNK_00418fd0,0,0);
  uVar15 = *puVar6;
  if (iStack_44 != -1) {
    puStack_50 = &UNK_00418e7b;
    func_0x0099bd10();
  }
  iStack_44 = -1;
  *puVar6 = uVar15;
  if (puVar7 == (uint *)0x0) {
    puVar6 = auStack_40;
    puStack_50 = &UNK_00418ee2;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar6,&UNK_00187fcd,0x36,6,0,0xffffffff);
    puStack_50 = &UNK_00418eea;
    uVar10 = _ZN7android4base10LogMessage6streamEv(puVar6);
    puStack_50 = &UNK_00418efe;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001724f0,0x1c);
    puStack_50 = &UNK_00418f12;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_50 = &UNK_00418f1a;
    _ZN7android4base10LogMessageD2Ev(puVar6);
  }
  puStack_50 = &UNK_00418e9a;
  puVar12 = param_1;
  _ZN15fdevent_context3AddEP7fdeventj(param_1,puVar7,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_50 = &UNK_00418fc4;
  func_0x0099bd00();
  uVar11 = (ulong)puVar12 & 0xffffffff;
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_78 = 0;
  puVar16 = &uStack_78;
  puStack_68 = param_1;
  puStack_60 = puVar6;
  puStack_58 = puVar7;
  puStack_50 = &stack0xfffffffffffffff8;
  do {
    puVar13 = (undefined8 *)((ulong)puVar12 & 0xffffffff);
    puStack_88 = &UNK_00419019;
    lVar9 = func_0x0099be20(puVar13,puVar16,8);
    if ((lVar9 != -1) && ((int)lVar9 != -1)) goto code_r0x00419039;
    puStack_88 = &UNK_00419005;
    puVar8 = (uint *)func_0x0099bce0();
  } while (*puVar8 == 4);
  puVar13 = (undefined8 *)0x6;
  puStack_88 = &UNK_00419035;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  puVar7 = puVar8;
  if (cVar2 != '\0') {
    uVar1 = *puVar8;
    uVar11 = (ulong)uVar1;
    puVar16 = &uStack_80;
    puStack_88 = &UNK_00419079;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar16,&UNK_00187fcd,0x23,6,0,uVar1);
    puStack_88 = &UNK_00419081;
    uVar10 = _ZN7android4base10LogMessage6streamEv(puVar16);
    puStack_88 = &UNK_00419095;
    func_0x0032eb30(uVar10,&UNK_0017f04d,0x28);
    puStack_88 = &UNK_0041909d;
    puVar13 = puVar16;
    _ZN7android4base10LogMessageD2Ev();
    *puVar8 = uVar1;
  }
code_r0x00419039:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return;
  }
  puStack_88 = &UNK_004190a7;
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = uVar11;
  puStack_98 = puVar16;
  puStack_90 = puVar7;
  puStack_88 = (undefined *)&puStack_50;
  _ZN15fdevent_context7DestroyEP7fdevent(&iStack_b4,puVar13,puVar13[0x17]);
  puVar6 = (undefined4 *)func_0x0099bce0();
  uVar15 = *puVar6;
  if (iStack_b4 != -1) {
    func_0x0099bd10();
  }
  iStack_b4 = -1;
  *puVar6 = uVar15;
  if (*(int *)((long)puVar13 + 0xb4) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)((long)puVar13 + 0xb4) = 0xffffffff;
  *puVar6 = uVar15;
  if (*(int *)(puVar13 + 0x16) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(puVar13 + 0x16) = 0xffffffff;
  *puVar6 = uVar15;
  *puVar13 = 0x99f420;
  puStack_b0 = puVar13 + 0x14;
  func_0x0041a3e0(&puStack_b0,puVar13[0x14]);
  func_0x0041a210(puVar13 + 0xd);
  puStack_b0 = puVar13 + 5;
  ppuVar14 = &puStack_b0;
  func_0x0041a430(ppuVar14,puVar13[5]);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_a8) {
    func_0x0099bd00();
    _ZN21fdevent_context_epollD1Ev();
    free(ppuVar14,0xc0);
    return;
  }
  return;
}


