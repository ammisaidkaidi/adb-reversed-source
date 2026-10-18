// Function: _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE
// Address: 003c6f70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(undefined8 param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long extraout_RDX;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 auStack_20078 [131088];
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_18;
  long lStack_10;
  undefined8 *puVar10;
  byte *pbVar11;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = &uStack_18;
  pbVar11 = (byte *)(ulong)param_2;
  uStack_18 = param_1;
  _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(pbVar11,puVar10,8);
  uVar8 = SUB84(puVar10,0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return;
  }
  func_0x0099bd00();
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*pbVar11 & 1) == 0) {
    uStack_40 = (ulong)(*pbVar11 >> 1);
  }
  else {
    uStack_40 = *(ulong *)(pbVar11 + 8);
  }
  _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar8,&uStack_40,8);
  _Z14WriteFdExactlyN7android4base11borrowed_fdERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
            (uVar8);
  uVar9 = SUB84(pbVar11,0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_20078,0,0x20000);
  if (extraout_RDX != 0) {
    lVar7 = 0;
    do {
      uVar12 = extraout_RDX - lVar7;
      if (0x1ffff < uVar12) {
        uVar12 = 0x20000;
      }
      while (lVar4 = func_0x0099be20(uVar8,auStack_20078,uVar12), lVar4 == -1) {
        piVar5 = (int *)func_0x0099bce0();
        if (*piVar5 != 4) goto code_r0x003c7125;
      }
      if ((int)(uint)lVar4 < 0) {
        piVar5 = (int *)func_0x0099bce0();
code_r0x003c7125:
        uVar3 = _stderr;
        uVar6 = func_0x0099bd20(*piVar5);
        func_0x0099bd30(uVar3,&UNK_0018958d,uVar6);
        func_0x0099bd80(1);
        goto code_r0x003c7154;
      }
      uVar12 = (ulong)((uint)lVar4 & 0x7fffffff);
      _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar9,auStack_20078,uVar12);
      lVar7 = lVar7 + uVar12;
    } while (lVar7 != extraout_RDX);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar1) {
    return;
  }
code_r0x003c7154:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


