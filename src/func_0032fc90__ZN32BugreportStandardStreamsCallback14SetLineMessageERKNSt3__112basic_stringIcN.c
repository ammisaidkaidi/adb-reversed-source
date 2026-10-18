// Function: _ZN32BugreportStandardStreamsCallback14SetLineMessageERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 0032fc90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN32BugreportStandardStreamsCallback14SetLineMessageERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *param_2;
  if ((bVar2 & 1) == 0) {
    uVar10 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar10 + 1;
  if (uVar1 < 0xfffffffffffffff7) {
    pbVar11 = *(byte **)(param_2 + 0x10);
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if (uVar1 < 0x17) {
      uVar13 = 0;
      uStack_58 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar12 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar12 = (uVar1 | 7) + 1;
      }
      lStack_48 = _Znwm(lVar12);
      uStack_58 = lVar12 + 1;
      uVar13 = uStack_58 & 0xffffffff;
      uStack_50 = uVar1;
    }
    if ((bVar2 & 1) == 0) {
      pbVar11 = param_2 + 1;
    }
    lVar12 = (long)&uStack_58 + 1;
    if ((uVar13 & 1) != 0) {
      lVar12 = lStack_48;
    }
    func_0x0099bda0(lVar12,pbVar11,uVar10);
    *(undefined2 *)(lVar12 + uVar10) = 0x20;
    bVar14 = (*(byte *)(param_1 + 0x40) & 1) != 0;
    lVar12 = param_1 + 0x41;
    if (bVar14) {
      lVar12 = *(long *)(param_1 + 0x50);
    }
    uVar10 = (ulong)(*(byte *)(param_1 + 0x40) >> 1);
    if (bVar14) {
      uVar10 = *(ulong *)(param_1 + 0x48);
    }
    _ZN7android4base8BasenameENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
              (&bStack_70,lVar12,uVar10);
    puVar9 = (undefined8 *)func_0x0032e820(&uStack_58,&bStack_70);
    uVar5 = *(undefined4 *)puVar9;
    uVar6 = *(undefined4 *)((long)puVar9 + 4);
    uVar7 = *(undefined4 *)(puVar9 + 1);
    uVar8 = *(undefined4 *)((long)puVar9 + 0xc);
    uVar3 = puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      _ZdaPvSt11align_val_t
                (*(undefined8 *)(param_1 + 0x68),*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe);
    }
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = uVar7;
    *(undefined4 *)(param_1 + 100) = uVar8;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    if ((bStack_70 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
    }
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


