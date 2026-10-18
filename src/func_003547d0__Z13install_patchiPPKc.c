// Function: _Z13install_patchiPPKc
// Address: 003547d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _Z13install_patchiPPKc(int *param_1,uint param_2,long param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  undefined4 uStack_5e8;
  undefined1 auStack_5e4 [1028];
  int *piStack_1e0;
  uint *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined1 uStack_1a1;
  undefined1 auStack_1a0 [8];
  ulong uStack_198;
  undefined1 auStack_168 [8];
  ulong uStack_160;
  ulong uStack_130;
  int *piStack_128;
  ulong uStack_120;
  undefined1 *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  int *piStack_c0;
  long lStack_b8;
  undefined *apuStack_b0 [2];
  int *piStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  puVar20 = (undefined8 *)(ulong)param_2;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_b0[0] = &UNK_003547fc;
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  puVar21 = puVar20;
  if ((int)param_2 < 1) {
code_r0x0035487b:
    apuStack_b0[0] = &UNK_0035488b;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (&uStack_58,&UNK_0018486f);
  }
  else {
    puVar12 = (undefined8 *)0x0;
    puVar21 = &uStack_58;
    unaff_R12 = 0;
    piStack_a0 = param_1;
    do {
      apuStack_b0[0] = &UNK_00354844;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (puVar21,*(undefined8 *)(param_3 + (long)puVar12 * 8));
      apuStack_b0[0] = &UNK_00354853;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (puVar21,&UNK_0015ae05);
      pcVar1 = *(char **)(param_3 + (long)puVar12 * 8);
      if ((*pcVar1 == '-') && (pcVar1[1] == 'r')) {
        unaff_R12 = (ulong)(byte)((byte)unaff_R12 | pcVar1[2] == '\0');
      }
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar20 != puVar12);
    param_1 = piStack_a0;
    unaff_R13 = puVar20;
    if (unaff_R12 == 0) goto code_r0x0035487b;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  lVar11 = lStack_48;
  if ((uStack_58 & 1) == 0) {
    lVar11 = (long)&uStack_58 + 1;
  }
  apuStack_b0[0] = &UNK_003548ce;
  _ZN7android4base12StringPrintfEPKcz(&uStack_98,&UNK_0015fac1,lVar11);
  uVar7 = uStack_98 >> 1 & 0x7f;
  lVar11 = (long)&uStack_98 + 1;
  lVar10 = lVar11;
  if ((uStack_98 & 1) != 0) {
    uVar7 = uStack_90;
    lVar10 = lStack_88;
  }
  apuStack_b0[0] = &UNK_003548fb;
  iVar4 = _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                    (lVar10,uVar7,&uStack_78);
  *param_1 = iVar4;
  if (iVar4 < 0) {
    if ((uStack_98 & 1) != 0) {
      lVar11 = lStack_88;
    }
    lVar10 = lStack_68;
    if ((uStack_78 & 1) == 0) goto code_r0x00354998;
  }
  else {
    if ((uStack_98 & 1) != 0) {
      apuStack_b0[0] = &UNK_0035495f;
      _ZdaPvSt11align_val_t(lStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    if ((uStack_78 & 1) != 0) {
      apuStack_b0[0] = &UNK_00354976;
      _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
    }
    if ((uStack_58 & 1) != 0) {
      apuStack_b0[0] = &UNK_0035492a;
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    apuStack_b0[0] = &UNK_00354998;
    func_0x0099bd00();
code_r0x00354998:
    lVar10 = (long)&uStack_78 + 1;
  }
  piVar16 = (int *)&UNK_001575fc;
  apuStack_b0[0] = &UNK_003549ad;
  lVar13 = lVar11;
  _Z10error_exitPKcz(&UNK_001575fc,lVar11,lVar10);
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_108 = &UNK_003549d3;
  piStack_c0 = param_1;
  lStack_b8 = lVar11;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_f0 = (undefined1 *)0x0;
  puStack_108 = &UNK_00354a03;
  _ZN7android4base12StringPrintfEPKcz(&uStack_100,&UNK_0017d3b9,lVar13);
  uVar7 = uStack_100 >> 1 & 0x7f;
  puVar19 = (undefined1 *)((long)&uStack_100 + 1);
  puVar14 = puVar19;
  if ((uStack_100 & 1) != 0) {
    uVar7 = uStack_f8;
    puVar14 = puStack_f0;
  }
  puStack_108 = &UNK_00354a27;
  iVar4 = _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                    (puVar14,uVar7,&uStack_e0);
  *piVar16 = iVar4;
  if (iVar4 < 0) {
    if ((uStack_100 & 1) != 0) {
      puVar19 = puStack_f0;
    }
    lVar11 = lStack_d0;
    if ((uStack_e0 & 1) != 0) goto code_r0x00354a97;
  }
  else {
    if ((uStack_100 & 1) != 0) {
      puStack_108 = &UNK_00354a47;
      _ZdaPvSt11align_val_t(puStack_f0,uStack_100 & 0xfffffffffffffffe);
    }
    if ((uStack_e0 & 1) != 0) {
      puStack_108 = &UNK_00354a5e;
      _ZdaPvSt11align_val_t(lStack_d0,uStack_e0 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
      return piVar16;
    }
    puStack_108 = &UNK_00354a93;
    func_0x0099bd00();
  }
  lVar11 = (long)&uStack_e0 + 1;
code_r0x00354a97:
  puVar17 = &UNK_001575fc;
  puStack_108 = &UNK_00354aa8;
  puVar14 = puVar19;
  _Z10error_exitPKcz(&UNK_001575fc,puVar19,lVar11);
  uStack_130 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_1b0 = &UNK_00354ae9;
  piStack_128 = piVar16;
  uStack_120 = unaff_R12;
  puStack_118 = puVar19;
  puStack_110 = puVar21;
  puStack_108 = (undefined *)apuStack_b0;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_1a0,0);
  if (auStack_1a0 != puVar14) {
    uVar7 = uStack_198;
    if ((uStack_198 & 1) != 0) {
      uVar7 = *(ulong *)(uStack_198 & 0xfffffffffffffffe);
    }
    uVar9 = *(ulong *)(puVar14 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    if (uVar7 == uVar9) {
      puStack_1b0 = &UNK_00354b25;
      _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_1a0,puVar14);
    }
    else {
      puStack_1b0 = &UNK_00354b1e;
      _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
    }
  }
  uVar5 = *extraout_RDX;
  puStack_1b0 = &UNK_00354b2d;
  _ZNSt3__16chrono12steady_clock3nowEv();
  uStack_1a1 = 0;
  puStack_1b0 = &UNK_00354b3f;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_168,0);
  if ((uStack_160 & 1) != 0) {
    uStack_160 = *(ulong *)(uStack_160 & 0xfffffffffffffffe);
  }
  if ((uStack_198 & 1) != 0) {
    uStack_198 = *(ulong *)(uStack_198 & 0xfffffffffffffffe);
  }
  if (uStack_160 == uStack_198) {
    puStack_1b0 = &UNK_00354b77;
    _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_168,auStack_1a0);
  }
  else {
    puStack_1b0 = &UNK_00354b70;
    _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
  }
  uVar7 = (ulong)uVar5;
  puStack_1b0 = &UNK_00354b90;
  uVar5 = _ZN20DeployPatchGenerator11CreatePatchEPKcN3com7android10fastdeploy11APKMetaDataEN7android4base11borrowed_fdE
                    (&uStack_1a1,puVar17,auStack_168,uVar7);
  puStack_1b0 = &UNK_00354b9b;
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_168);
  if ((char)uVar5 == '\0') {
    puVar18 = &UNK_00161278;
    puStack_1b0 = &UNK_00354c21;
    puVar15 = puVar17;
    _Z10error_exitPKcz(&UNK_00161278,puVar17);
  }
  else {
    puStack_1b0 = &UNK_00354bac;
    _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_1a0);
    puStack_1b0 = &UNK_00354bb1;
    _ZNSt3__16chrono12steady_clock3nowEv();
    puVar18 = (undefined *)(ulong)*extraout_RDX;
    puVar15 = (undefined *)0x0;
    puStack_1b0 = &UNK_00354bc1;
    piVar16 = (int *)_Z13read_and_dumpN7android4base11borrowed_fdEbP32StandardStreamsCallbackInterface
                               (puVar18,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
    uVar7 = *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar7 == uStack_130) {
      return piVar16;
    }
  }
  uVar8 = (undefined4)uVar7;
  puStack_1b0 = &UNK_00354c26;
  func_0x0099bd00();
  piStack_1e0 = *(int **)(in_FS_OFFSET + 0x28);
  puStack_1d8 = extraout_RDX;
  puStack_1d0 = auStack_168;
  puStack_1c8 = unaff_R13;
  puStack_1c0 = puVar17;
  uStack_1b8 = (ulong)uVar5;
  puStack_1b0 = (undefined *)&puStack_108;
  func_0x0099bdb0(&uStack_5e8,0,0x408);
  _ZN13TemporaryFileC2Ev(&uStack_5e8);
  _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm(uStack_5e8,puVar18,puVar15);
  plStack_600 = (long *)_Znwm(8);
  plStack_5f8 = plStack_600 + 1;
  *plStack_600 = (long)auStack_5e4;
  plStack_5f0 = plStack_5f8;
  uVar6 = _ZN13TemporaryFile7releaseEv(&uStack_5e8);
  func_0x0099bd10(uVar6);
  cVar3 = _Z12do_sync_pushRKNSt3__16vectorIPKcNS_9allocatorIS2_EEEES2_b15CompressionTypebb
                    (&plStack_600,extraout_RDX_00,uVar8,1,0,0);
  if (cVar3 == '\0') {
    _Z10error_exitPKcz(&UNK_0017b8f8);
  }
  else {
    _ZN13TemporaryFileD2Ev(&uStack_5e8);
    if (plStack_600 != (long *)0x0) {
      plStack_5f8 = plStack_600;
      _ZdaPvSt11align_val_t(plStack_600,(long)plStack_5f0 - (long)plStack_600);
    }
    if (*(int **)(in_FS_OFFSET + 0x28) == piStack_1e0) {
      return *(int **)(in_FS_OFFSET + 0x28);
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar16 = (int *)(*pcVar2)();
  return piVar16;
}


