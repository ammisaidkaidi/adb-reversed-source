// Function: _ZN13BrotliEncoder6EncodeEP5Block
// Address: 00347000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN13BrotliEncoder6EncodeEP5Block(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *param_2;
  *param_2 = 0;
  if (lVar6 != 0) {
    _ZdaPvSt11align_val_t();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      lStack_40 = 0;
      lStack_48 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x28) * 0x20;
      lStack_40 = *(long *)(lVar6 + 0x10 + lVar5) - *(long *)(param_1 + 0x20);
      lStack_48 = *(long *)(param_1 + 0x20) + *(long *)(lVar6 + lVar5);
    }
    lStack_50 = *(long *)(param_1 + 0x68);
    lStack_58 = (*(long *)(param_1 + 8) - lStack_50) + *(long *)(param_1 + 0x48);
    iVar3 = BrotliEncoderCompressStream
                      (*(undefined8 *)(param_1 + 0x70),(uint)*(byte *)(param_1 + 0x10) * 2,
                       &lStack_40,&lStack_48,&lStack_50,&lStack_58,0);
    if (iVar3 == 0) {
      uVar4 = 0;
      goto code_r0x00347269;
    }
    if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x38)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10 + *(long *)(param_1 + 0x28) * 0x20) -
              *(long *)(param_1 + 0x20);
    }
    _ZN8IOVector10drop_frontEm(param_1 + 0x18,lVar6 - lStack_40);
    *(long *)(param_1 + 0x68) = lStack_50;
    iVar3 = BrotliEncoderIsFinished(*(undefined8 *)(param_1 + 0x70));
    if (iVar3 != 0) {
      plVar1 = (long *)(param_1 + 0x48);
      _ZN5Block6resizeEm(plVar1,*(long *)(param_1 + 8) - *(long *)(param_1 + 0x68));
      lVar6 = *param_2;
      *param_2 = 0;
      if (lVar6 != 0) {
        _ZdaPvSt11align_val_t();
      }
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      lVar6 = *plVar1;
      *plVar1 = 0;
      lVar5 = *param_2;
      *param_2 = lVar6;
      if (lVar5 != 0) {
        _ZdaPvSt11align_val_t();
      }
      lVar6 = *(long *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      param_2[1] = lVar6;
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      param_2[2] = lVar6;
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      param_2[3] = lVar6;
      uVar4 = 1;
      goto code_r0x00347269;
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      lVar6 = *param_2;
      *param_2 = 0;
      if (lVar6 != 0) {
        _ZdaPvSt11align_val_t();
      }
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      plVar1 = (long *)(param_1 + 0x48);
      lVar6 = *plVar1;
      *plVar1 = 0;
      lVar5 = *param_2;
      *param_2 = lVar6;
      if (lVar5 != 0) {
        _ZdaPvSt11align_val_t();
      }
      lVar6 = *(long *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      param_2[1] = lVar6;
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      param_2[2] = lVar6;
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      param_2[3] = lVar6;
      _ZN5Block6resizeEm(plVar1,*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 8);
      uVar4 = 3;
      goto code_r0x00347269;
    }
  } while (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20));
  uVar4 = 2;
code_r0x00347269:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar4;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


