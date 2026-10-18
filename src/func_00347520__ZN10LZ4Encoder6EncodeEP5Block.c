// Function: _ZN10LZ4Encoder6EncodeEP5Block
// Address: 00347520
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN10LZ4Encoder6EncodeEP5Block(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 != *(long *)(param_1 + 0x38)) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar14 = *(long *)(param_1 + 0x28) * 0x20;
    lVar3 = *(long *)(lVar9 + 0x10 + lVar14);
    lVar9 = *(long *)(lVar9 + lVar14);
    lVar14 = LZ4F_compressBound(0x10000,0);
    uVar15 = lVar3 - lVar2;
    if (uVar15 == 0) goto code_r0x0034760c;
    if (*(char *)(param_1 + 0x48) == '\x01') {
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      uVar15 = 0;
      if (cVar5 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&lStack_88,&UNK_00170446,0x144,4,0,0xffffffff);
        uVar8 = _ZN7android4base10LogMessage6streamEv(&lStack_88);
        func_0x0032eb30(uVar8,&UNK_0017b845,0x26);
        _ZN7android4base10LogMessageD2Ev(&lStack_88);
        uVar15 = 0;
        *puVar7 = uVar1;
      }
      goto code_r0x00347add;
    }
    uVar12 = 0x10000;
    if (uVar15 < 0x10000) {
      uVar12 = uVar15;
    }
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    _ZN5Block8allocateEm(&lStack_88,lVar14);
    lVar3 = lStack_80;
    lVar9 = LZ4F_compressUpdate(*(undefined8 *)(param_1 + 0x50),lStack_88,lStack_80,lVar9 + lVar2,
                                uVar12,0);
    iVar6 = LZ4F_isError(lVar9);
    if (iVar6 == 0) {
      _ZN8IOVector10drop_frontEm(param_1 + 0x18,uVar12);
      _ZN5Block6resizeEm(&lStack_88,(lVar14 - lVar3) + lVar9);
      lVar3 = lStack_70;
      lVar2 = lStack_78;
      lVar9 = lStack_80;
      if (lStack_78 != 0) {
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + lStack_78;
        plVar13 = *(long **)(param_1 + 0x80);
        if (plVar13 < *(long **)(param_1 + 0x88)) {
          *plVar13 = lStack_88;
          lStack_88 = 0;
          lStack_80 = 0;
          plVar13[1] = lVar9;
          lStack_78 = 0;
          plVar13[2] = lVar2;
          lStack_70 = 0;
          plVar13[3] = lVar3;
          plVar13 = plVar13 + 4;
        }
        else {
          plVar13 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                      (param_1 + 0x78,&lStack_88);
        }
        *(long **)(param_1 + 0x80) = plVar13;
      }
    }
    else {
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar5 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&lStack_58,&UNK_00170446,0x151,4,0,0xffffffff);
        uVar8 = _ZN7android4base10LogMessage6streamEv(&lStack_58);
        uVar8 = func_0x0032eb30(uVar8,&UNK_001593fa,0x1c);
        uVar10 = LZ4F_getErrorName(lVar9);
        uVar11 = func_0x0099bcf0(uVar10);
        func_0x0032eb30(uVar8,uVar10,uVar11);
        _ZN7android4base10LogMessageD2Ev(&lStack_58);
        *puVar7 = uVar1;
      }
    }
    lVar9 = lStack_88;
    lStack_88 = 0;
    if (lVar9 != 0) {
      _ZdaPvSt11align_val_t();
    }
    if (iVar6 == 0) goto code_r0x0034760c;
code_r0x00347adb:
    uVar15 = 0;
    goto code_r0x00347add;
  }
  lVar14 = LZ4F_compressBound(0x10000,0);
code_r0x0034760c:
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)(param_1 + 0x48) == '\0')) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    _ZN5Block8allocateEm(&lStack_88,lVar14 + 4);
    uVar8 = LZ4F_compressEnd(*(undefined8 *)(param_1 + 0x50),lStack_88,lStack_78,0);
    iVar6 = LZ4F_isError(uVar8);
    if (iVar6 == 0) {
      _ZN5Block6resizeEm(&lStack_88,uVar8);
      lVar3 = lStack_70;
      lVar2 = lStack_78;
      lVar9 = lStack_80;
      if (lStack_78 != 0) {
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + lStack_78;
        plVar13 = *(long **)(param_1 + 0x80);
        if (plVar13 < *(long **)(param_1 + 0x88)) {
          *plVar13 = lStack_88;
          lStack_88 = 0;
          lStack_80 = 0;
          plVar13[1] = lVar9;
          lStack_78 = 0;
          plVar13[2] = lVar2;
          lStack_70 = 0;
          plVar13[3] = lVar3;
          plVar13 = plVar13 + 4;
        }
        else {
          plVar13 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                      (param_1 + 0x78,&lStack_88);
        }
        *(long **)(param_1 + 0x80) = plVar13;
      }
    }
    else {
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar5 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&lStack_58,&UNK_00170446,0x165,4,0,0xffffffff);
        uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_58);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015f9e5,0x19);
        uVar8 = LZ4F_getErrorName(uVar8);
        uVar11 = func_0x0099bcf0(uVar8);
        func_0x0032eb30(uVar10,uVar8,uVar11);
        _ZN7android4base10LogMessageD2Ev(&lStack_58);
        *puVar7 = uVar1;
      }
    }
    lVar9 = lStack_88;
    lStack_88 = 0;
    if (lVar9 != 0) {
      _ZdaPvSt11align_val_t();
    }
    if (iVar6 != 0) goto code_r0x00347adb;
  }
  uVar12 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x68);
  uVar15 = *(ulong *)(param_1 + 8);
  if ((uVar12 < uVar15) && (*(char *)(param_1 + 0x48) == '\0')) {
    lVar9 = *param_2;
    *param_2 = 0;
    if (lVar9 != 0) {
      _ZdaPvSt11align_val_t();
    }
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    if (uVar12 < uVar15) {
      uVar15 = uVar12;
    }
    _ZN8IOVector10take_frontEm(&lStack_88,param_1 + 0x60,uVar15);
    _ZNO8IOVector8coalesceEv(&lStack_58,&lStack_88);
    lVar9 = *param_2;
    *param_2 = 0;
    if (lVar9 == 0) {
      param_2[1] = 0;
      *param_2 = lStack_58;
code_r0x0034796d:
      lVar9 = 0;
    }
    else {
      _ZdaPvSt11align_val_t();
      lVar2 = lStack_58;
      lVar9 = *param_2;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      lStack_58 = 0;
      *param_2 = lVar2;
      if (lVar9 == 0) goto code_r0x0034796d;
      _ZdaPvSt11align_val_t();
      lVar9 = lStack_58;
    }
    lVar2 = lStack_50;
    lStack_50 = 0;
    param_2[1] = lVar2;
    param_2[2] = lStack_48;
    lStack_48 = 0;
    param_2[3] = 0;
    lStack_58 = 0;
    if (lVar9 != 0) {
      _ZdaPvSt11align_val_t();
    }
    lVar2 = lStack_70;
    lVar9 = lStack_68;
    if (lStack_70 != 0) {
      for (; lVar2 != lVar9; lVar9 = lVar9 + -0x20) {
        lVar3 = *(long *)(lVar9 + -0x20);
        *(undefined8 *)(lVar9 + -0x20) = 0;
        if (lVar3 != 0) {
          _ZdaPvSt11align_val_t();
        }
      }
      lStack_68 = lVar2;
      _ZdaPvSt11align_val_t(lStack_70,lStack_60 - lStack_70);
    }
  }
  uVar15 = 1;
  if ((*(byte *)(param_1 + 0x48) & *(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) == 0) {
    uVar15 = (ulong)((*(ulong *)(param_1 + 8) <=
                      (ulong)(*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x68)) |
                     *(byte *)(param_1 + 0x48)) | 2);
  }
code_r0x00347add:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return uVar15;
  }
  return uVar15;
}


