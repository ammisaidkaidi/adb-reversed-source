// Function: _ZN10LZ4EncoderC2Em
// Address: 00347290
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10LZ4EncoderC2Em(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long in_FS_OFFSET;
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0x99e378;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lStack_40 = 0;
  lVar7 = LZ4F_createCompressionContext(&lStack_40,100);
  if (lVar7 != 0) {
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar5 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_68,&UNK_00170446,0x122,6,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(&lStack_68);
      func_0x0032eb30(uVar8,&UNK_0015f99a,0x2c);
      _ZN7android4base10LogMessageD2Ev(&lStack_68);
      *puVar9 = uVar1;
    }
  }
  lVar7 = param_1[10];
  param_1[10] = lStack_40;
  if (lVar7 != 0) {
    (*(code *)param_1[0xb])();
  }
  param_1[0xb] = LZ4F_freeCompressionContext;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  _ZN5Block8allocateEm(&lStack_68,0x13);
  uVar8 = LZ4F_compressBegin(param_1[10],lStack_68,lStack_58,0);
  iVar6 = LZ4F_isError(uVar8);
  if (iVar6 != 0) {
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar5 == '\0') {
      LZ4F_getErrorName(uVar8);
    }
    else {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_00170446,0x129,6,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      func_0x0032eb30(uVar10,&UNK_0015f9c7,0x1d);
      LZ4F_getErrorName(uVar8);
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puVar9 = uVar1;
    }
  }
  _ZN5Block6resizeEm(&lStack_68,uVar8);
  lVar4 = lStack_50;
  lVar3 = lStack_58;
  lVar7 = lStack_60;
  if (lStack_58 != 0) {
    param_1[0xc] = param_1[0xc] + lStack_58;
    plVar11 = (long *)param_1[0x10];
    if (plVar11 < (long *)param_1[0x11]) {
      *plVar11 = lStack_68;
      lStack_68 = 0;
      lStack_60 = 0;
      plVar11[1] = lVar7;
      lStack_58 = 0;
      plVar11[2] = lVar3;
      lStack_50 = 0;
      plVar11[3] = lVar4;
      plVar11 = plVar11 + 4;
    }
    else {
      plVar11 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                  (param_1 + 0xf,&lStack_68);
    }
    param_1[0x10] = plVar11;
  }
  lVar7 = lStack_68;
  lStack_68 = 0;
  if (lVar7 != 0) {
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


