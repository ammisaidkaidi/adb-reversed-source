// Function: _Z12stream_patchPKcN3com7android10fastdeploy11APKMetaDataEN7android4base14unique_fd_implINS6_13DefaultCloserEEE
// Address: 00354ab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z12stream_patchPKcN3com7android10fastdeploy11APKMetaDataEN7android4base14unique_fd_implINS6_13DefaultCloserEEE
               (undefined8 param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  undefined *puVar8;
  long in_FS_OFFSET;
  long *plStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  undefined4 uStack_4e8;
  undefined1 auStack_4e4 [1028];
  long lStack_e0;
  uint *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 uStack_a1;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  ulong uStack_30;
  
  uStack_30 = *(ulong *)(in_FS_OFFSET + 0x28);
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_a0,0);
  if (auStack_a0 != param_2) {
    uVar5 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      uVar5 = *(ulong *)(uStack_98 & 0xfffffffffffffffe);
    }
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    if (uVar5 == uVar7) {
      _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_a0,param_2);
    }
    else {
      _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
    }
  }
  uVar1 = *param_3;
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_a1 = 0;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_68,0);
  if ((uStack_60 & 1) != 0) {
    uStack_60 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
  }
  if ((uStack_98 & 1) != 0) {
    uStack_98 = *(ulong *)(uStack_98 & 0xfffffffffffffffe);
  }
  if (uStack_60 == uStack_98) {
    _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_68,auStack_a0);
  }
  else {
    _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
  }
  uVar5 = (ulong)uVar1;
  cVar3 = _ZN20DeployPatchGenerator11CreatePatchEPKcN3com7android10fastdeploy11APKMetaDataEN7android4base11borrowed_fdE
                    (&uStack_a1,param_1,auStack_68,uVar5);
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_68);
  if (cVar3 == '\0') {
    puVar8 = &UNK_00161278;
    _Z10error_exitPKcz(&UNK_00161278,param_1);
  }
  else {
    _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_a0);
    _ZNSt3__16chrono12steady_clock3nowEv();
    puVar8 = (undefined *)(ulong)*param_3;
    param_1 = 0;
    _Z13read_and_dumpN7android4base11borrowed_fdEbP32StandardStreamsCallbackInterface
              (puVar8,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
    uVar5 = *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar5 == uStack_30) {
      return;
    }
  }
  uVar6 = (undefined4)uVar5;
  func_0x0099bd00();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_d8 = param_3;
  puStack_d0 = auStack_68;
  func_0x0099bdb0(&uStack_4e8,0,0x408);
  _ZN13TemporaryFileC2Ev(&uStack_4e8);
  _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm(uStack_4e8,puVar8,param_1);
  plStack_500 = (long *)_Znwm(8);
  plStack_4f8 = plStack_500 + 1;
  *plStack_500 = (long)auStack_4e4;
  plStack_4f0 = plStack_4f8;
  uVar4 = _ZN13TemporaryFile7releaseEv(&uStack_4e8);
  func_0x0099bd10(uVar4);
  cVar3 = _Z12do_sync_pushRKNSt3__16vectorIPKcNS_9allocatorIS2_EEEES2_b15CompressionTypebb
                    (&plStack_500,extraout_RDX,uVar6,1,0,0);
  if (cVar3 == '\0') {
    _Z10error_exitPKcz(&UNK_0017b8f8);
  }
  else {
    _ZN13TemporaryFileD2Ev(&uStack_4e8);
    if (plStack_500 != (long *)0x0) {
      plStack_4f8 = plStack_500;
      _ZdaPvSt11align_val_t(plStack_500,(long)plStack_4f0 - (long)plStack_500);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
      return;
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


