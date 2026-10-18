// Function: _ZN32BugreportStandardStreamsCallback10SetSrcFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00330a10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN32BugreportStandardStreamsCallback10SetSrcFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (long param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  bool bVar9;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar8 = (byte *)(param_1 + 0x10);
  if (pbVar8 != param_2) {
    bVar1 = *param_2;
    if ((*pbVar8 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x10);
        uVar3 = *(undefined4 *)(param_2 + 4);
        uVar4 = *(undefined4 *)(param_2 + 8);
        uVar5 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)pbVar8 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar3;
        *(undefined4 *)(param_1 + 0x18) = uVar4;
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
      else {
        func_0x0032e990(pbVar8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      bVar9 = (bVar1 & 1) != 0;
      pbVar7 = param_2 + 1;
      if (bVar9) {
        pbVar7 = *(byte **)(param_2 + 0x10);
      }
      uVar6 = (ulong)(bVar1 >> 1);
      if (bVar9) {
        uVar6 = *(ulong *)(param_2 + 8);
      }
      func_0x0032e920(pbVar8,pbVar7,uVar6);
    }
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if (*(byte *)(param_1 + 0x28) >> 1 == 0) goto code_r0x00330b29;
  }
  else if (*(long *)(param_1 + 0x30) == 0) goto code_r0x00330b29;
  bVar9 = (*param_2 & 1) != 0;
  pbVar8 = param_2 + 1;
  if (bVar9) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  uVar6 = (ulong)(*param_2 >> 1);
  if (bVar9) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  _ZN7android4base8BasenameENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
            (&uStack_38,pbVar8,uVar6);
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_1 + 0x50),*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x50) = uStack_28;
  *(uint *)(param_1 + 0x40) = uStack_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  *(uint *)(param_1 + 0x48) = CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30));
  *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
  uStack_38 = 0x6e656714;
  uStack_34 = 0x74617265;
  uStack_30 = 0x69;
  uStack_2f = 0x676e;
  uStack_2d = 0;
  _ZN32BugreportStandardStreamsCallback14SetLineMessageERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_28,CONCAT44(uStack_34,uStack_38) & 0xfffffffffffffffe);
  }
code_r0x00330b29:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


