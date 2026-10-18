// Function: _ZN10PatchUtils4PipeEN7android4base11borrowed_fdES2_m
// Address: 003c7030
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN10PatchUtils4PipeEN7android4base11borrowed_fdES2_m
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_20038 [131080];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_20038,0,0x20000);
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      uVar8 = param_3 - lVar7;
      if (0x1ffff < uVar8) {
        uVar8 = 0x20000;
      }
      while (lVar4 = func_0x0099be20(param_1,auStack_20038,uVar8), lVar4 == -1) {
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
      uVar8 = (ulong)((uint)lVar4 & 0x7fffffff);
      _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(param_2,auStack_20038,uVar8);
      lVar7 = lVar7 + uVar8;
    } while (lVar7 != param_3);
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


