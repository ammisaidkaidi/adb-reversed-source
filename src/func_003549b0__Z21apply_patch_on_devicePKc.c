// Function: _Z21apply_patch_on_devicePKc
// Address: 003549b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _Z21apply_patch_on_devicePKc(int *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  uint *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long in_FS_OFFSET;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined4 uStack_540;
  undefined1 auStack_53c [1028];
  int *piStack_138;
  uint *puStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_f9;
  undefined1 auStack_f8 [8];
  ulong uStack_f0;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_88;
  int *piStack_80;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_48 = (undefined1 *)0x0;
  _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_0017d3b9,param_2);
  uVar7 = uStack_58 >> 1 & 0x7f;
  puVar12 = (undefined1 *)((long)&uStack_58 + 1);
  puVar3 = puVar12;
  if ((uStack_58 & 1) != 0) {
    uVar7 = uStack_50;
    puVar3 = puStack_48;
  }
  iVar5 = _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                    (puVar3,uVar7,&uStack_38);
  *param_1 = iVar5;
  if (iVar5 < 0) {
    if ((uStack_58 & 1) != 0) {
      puVar12 = puStack_48;
    }
    lVar11 = lStack_28;
    if ((uStack_38 & 1) != 0) goto code_r0x00354a97;
  }
  else {
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if ((uStack_38 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_28,uStack_38 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return param_1;
    }
    func_0x0099bd00();
  }
  lVar11 = (long)&uStack_38 + 1;
code_r0x00354a97:
  puVar13 = &UNK_001575fc;
  _Z10error_exitPKcz(&UNK_001575fc,puVar12,lVar11);
  uStack_88 = *(ulong *)(in_FS_OFFSET + 0x28);
  piStack_80 = param_1;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_f8,0);
  if (auStack_f8 != puVar12) {
    uVar7 = uStack_f0;
    if ((uStack_f0 & 1) != 0) {
      uVar7 = *(ulong *)(uStack_f0 & 0xfffffffffffffffe);
    }
    uVar10 = *(ulong *)(puVar12 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    if (uVar7 == uVar10) {
      _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_f8,puVar12);
    }
    else {
      _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
    }
  }
  uVar1 = *extraout_RDX;
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_f9 = 0;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_c0,0);
  if ((uStack_b8 & 1) != 0) {
    uStack_b8 = *(ulong *)(uStack_b8 & 0xfffffffffffffffe);
  }
  if ((uStack_f0 & 1) != 0) {
    uStack_f0 = *(ulong *)(uStack_f0 & 0xfffffffffffffffe);
  }
  if (uStack_b8 == uStack_f0) {
    _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_c0,auStack_f8);
  }
  else {
    _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
  }
  uVar7 = (ulong)uVar1;
  cVar4 = _ZN20DeployPatchGenerator11CreatePatchEPKcN3com7android10fastdeploy11APKMetaDataEN7android4base11borrowed_fdE
                    (&uStack_f9,puVar13,auStack_c0,uVar7);
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_c0);
  if (cVar4 == '\0') {
    puVar14 = &UNK_00161278;
    _Z10error_exitPKcz(&UNK_00161278,puVar13);
  }
  else {
    _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_f8);
    _ZNSt3__16chrono12steady_clock3nowEv();
    puVar14 = (undefined *)(ulong)*extraout_RDX;
    puVar13 = (undefined *)0x0;
    piVar8 = (int *)_Z13read_and_dumpN7android4base11borrowed_fdEbP32StandardStreamsCallbackInterface
                              (puVar14,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
    uVar7 = *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar7 == uStack_88) {
      return piVar8;
    }
  }
  uVar9 = (undefined4)uVar7;
  func_0x0099bd00();
  piStack_138 = *(int **)(in_FS_OFFSET + 0x28);
  puStack_130 = extraout_RDX;
  puStack_128 = auStack_c0;
  func_0x0099bdb0(&uStack_540,0,0x408);
  _ZN13TemporaryFileC2Ev(&uStack_540);
  _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm(uStack_540,puVar14,puVar13);
  plStack_558 = (long *)_Znwm(8);
  plStack_550 = plStack_558 + 1;
  *plStack_558 = (long)auStack_53c;
  plStack_548 = plStack_550;
  uVar6 = _ZN13TemporaryFile7releaseEv(&uStack_540);
  func_0x0099bd10(uVar6);
  cVar4 = _Z12do_sync_pushRKNSt3__16vectorIPKcNS_9allocatorIS2_EEEES2_b15CompressionTypebb
                    (&plStack_558,extraout_RDX_00,uVar9,1,0,0);
  if (cVar4 == '\0') {
    _Z10error_exitPKcz(&UNK_0017b8f8);
  }
  else {
    _ZN13TemporaryFileD2Ev(&uStack_540);
    if (plStack_558 != (long *)0x0) {
      plStack_550 = plStack_558;
      _ZdaPvSt11align_val_t(plStack_558,(long)plStack_548 - (long)plStack_558);
    }
    if (*(int **)(in_FS_OFFSET + 0x28) == piStack_138) {
      return *(int **)(in_FS_OFFSET + 0x28);
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar8 = (int *)(*pcVar2)();
  return piVar8;
}


