// Function: _ZN10PatchUtils11WriteStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdE
// Address: 003c6fc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN10PatchUtils11WriteStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdE
               (byte *param_1,undefined4 param_2)

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
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_20060 [131088];
  ulong uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 1) == 0) {
    uStack_28 = (ulong)(*param_1 >> 1);
  }
  else {
    uStack_28 = *(ulong *)(param_1 + 8);
  }
  _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(param_2,&uStack_28,8);
  _Z14WriteFdExactlyN7android4base11borrowed_fdERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
            (param_2);
  uVar8 = SUB84(param_1,0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  func_0x0099bd00();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_20060,0,0x20000);
  if (extraout_RDX != 0) {
    lVar7 = 0;
    do {
      uVar9 = extraout_RDX - lVar7;
      if (0x1ffff < uVar9) {
        uVar9 = 0x20000;
      }
      while (lVar4 = func_0x0099be20(param_2,auStack_20060,uVar9), lVar4 == -1) {
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
      uVar9 = (ulong)((uint)lVar4 & 0x7fffffff);
      _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar8,auStack_20060,uVar9);
      lVar7 = lVar7 + uVar9;
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


