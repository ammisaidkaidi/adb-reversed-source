// Function: _ZN11incremental4FileC2EPKcslN7android4base14unique_fd_implINS4_13DefaultCloserEEElS7_
// Address: 00366b30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental4FileC2EPKcslN7android4base14unique_fd_implINS4_13DefaultCloserEEElS7_
               (undefined8 *param_1,undefined8 param_2,undefined2 param_3,long param_4,
               undefined4 *param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[7] = param_2;
  *(undefined2 *)(param_1 + 8) = param_3;
  param_1[9] = param_4;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = param_6;
  func_0x00366d20(param_1,param_4 * 0x100000 + 0xfff00000 >> 0x20,0);
  uVar4 = _ZN11incremental27verity_tree_blocks_for_fileEl(param_4);
  func_0x00366d20(param_1 + 4,uVar4,0);
  uVar1 = *param_5;
  *param_5 = 0xffffffff;
  puVar5 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar5;
  if (*(int *)(param_1 + 10) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 10) = uVar1;
  *puVar5 = uVar2;
  uVar1 = *param_7;
  *param_7 = 0xffffffff;
  uVar2 = *puVar5;
  if (*(int *)(param_1 + 0xe) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *puVar5 = uVar2;
  uVar6 = func_0x0099bcf0(param_2);
  if (uVar6 < 0xfffffffffffffff7) {
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT71(uStack_70._1_7_,(char)uVar6 * '\x02');
      lVar7 = (long)&uStack_70 + 1;
    }
    else {
      lVar8 = 0x1a;
      if ((uVar6 | 7) != 0x17) {
        lVar8 = (uVar6 | 7) + 1;
      }
      lVar7 = _Znwm(lVar8);
      uStack_70 = lVar8 + 1;
      uStack_68 = uVar6;
      lStack_60 = lVar7;
    }
    func_0x0099bda0(lVar7,param_2,uVar6);
    *(undefined1 *)(lVar7 + uVar6) = 0;
    _ZN11incremental21PriorityBlocksForFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdEl
              (&uStack_58,&uStack_70,*(undefined4 *)(param_1 + 10),param_4);
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      param_1[0xc] = lVar8;
      _ZdaPvSt11align_val_t(lVar8,param_1[0xd] - lVar8);
    }
    param_1[0xb] = uStack_58;
    param_1[0xc] = uStack_50;
    param_1[0xd] = uStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if ((uStack_70 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_60,uStack_70 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


