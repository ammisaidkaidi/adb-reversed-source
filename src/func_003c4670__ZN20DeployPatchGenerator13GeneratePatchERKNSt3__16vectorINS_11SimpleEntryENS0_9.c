// Function: _ZN20DeployPatchGenerator13GeneratePatchERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESE_N7android4base11borrowed_fdE
// Address: 003c4670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c559a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c5ea6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c5ee2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c6865: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c5ee7) */
/* WARNING: Removing unreachable block (ram,0x003c5eab) */
/* WARNING: Removing unreachable block (ram,0x003c5fc5) */
/* WARNING: Removing unreachable block (ram,0x003c5fd9) */
/* WARNING: Removing unreachable block (ram,0x003c5ec1) */
/* WARNING: Removing unreachable block (ram,0x003c686a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long *******
_ZN20DeployPatchGenerator13GeneratePatchERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESE_N7android4base11borrowed_fdE
          (undefined8 param_1,long *param_2,byte *param_3,undefined8 param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long ******pppppplVar5;
  long *****ppppplVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long ******pppppplVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  char *pcVar18;
  ulong *puVar19;
  long ******pppppplVar20;
  byte *pbVar21;
  long *******ppppppplVar22;
  undefined7 uVar23;
  byte bVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  long *****ppppplVar27;
  long *plVar28;
  undefined1 *extraout_RDX;
  long extraout_RDX_00;
  ulong extraout_RDX_01;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  long *******extraout_RDX_02;
  long *******extraout_RDX_03;
  long *******ppppppplVar31;
  byte **ppbVar32;
  undefined8 *puVar34;
  undefined1 *puVar35;
  undefined **ppuVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  char *pcVar39;
  long *******ppppppplVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  char *pcVar44;
  byte *pbVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long *******ppppppplVar49;
  ulong uVar50;
  long lVar51;
  long *******ppppppplVar52;
  long *******ppppppplVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  long *******ppppppplVar57;
  long in_FS_OFFSET;
  bool bVar58;
  bool bVar59;
  float fVar60;
  undefined *puStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  long *******ppppppplStack_2a0;
  ulong uStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_200;
  undefined *puStack_1f8;
  char *pcStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  double dStack_1c8;
  uint uStack_1bc;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long lStack_1a8;
  long ******pppppplStack_198;
  ulong uStack_190;
  long *******ppppppplStack_188;
  ulong uStack_178;
  ulong uStack_170;
  long *******ppppppplStack_168;
  long lStack_158;
  ulong uStack_150;
  undefined1 *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined *apuStack_128 [2];
  undefined1 auStack_118 [8];
  ulong uStack_110;
  char acStack_e0 [56];
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 *puStack_68;
  ulong uStack_60;
  long *plStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined1 *puVar33;
  
  plStack_58 = param_2;
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  do {
    puStack_80 = &UNK_003c46af;
    uVar11 = func_0x0099bf40(param_3,0x80000);
    if (uVar11 != 0xffffffff) {
      if (-1 < (int)uVar11) {
        puStack_80 = &UNK_003c46d5;
        uVar12 = func_0x0099bf10(uVar11,1);
        if ((uVar12 & 0x80000001) == 0) {
          puStack_80 = &UNK_003c46f0;
          func_0x0099bf10(uVar11,2,uVar12 | 1);
        }
        goto code_r0x003c46f8;
      }
      break;
    }
    puStack_80 = &UNK_003c46b9;
    piVar14 = (int *)func_0x0099bce0();
  } while (*piVar14 == 4);
  uVar11 = 0xffffffff;
code_r0x003c46f8:
  puStack_80 = &UNK_003c46fd;
  puStack_68 = (undefined4 *)func_0x0099bce0();
  puStack_80 = &UNK_003c4710;
  uVar15 = func_0x0099bf60(uVar11,0,2);
  puStack_80 = &UNK_003c4723;
  uStack_34 = uVar11;
  func_0x0099bf60(uVar11,0,0);
  puStack_80 = &UNK_003c472b;
  _ZN10PatchUtils14WriteSignatureEN7android4base11borrowed_fdE(param_5);
  puStack_80 = &UNK_003c473a;
  uStack_60 = uVar15;
  _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(uVar15,param_5);
  puStack_80 = &UNK_003c4749;
  uStack_38 = param_5;
  _ZN10PatchUtils11WriteStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7android4base11borrowed_fdE
            (param_4);
  lVar55 = 0;
  lVar46 = 0;
  lVar41 = 0;
  uVar25 = 0;
  uVar50 = 0;
  if (plStack_58[1] - *plStack_58 != 0) {
    lVar54 = plStack_58[1] - *plStack_58 >> 4;
    uVar15 = 8;
    uVar50 = 0;
    uVar25 = 0;
    lVar41 = 0;
    plVar28 = plStack_58;
    lVar47 = 0;
    lVar51 = 0;
    do {
      lVar55 = *(long *)(*plVar28 + -8 + uVar15);
      lVar48 = *(long *)(lVar55 + 0x20);
      lVar42 = lVar48 - uVar50;
      lVar4 = *(long *)(lVar55 + 0x28);
      if (lVar42 < 1) {
        lVar55 = lVar51;
        lVar42 = lVar41;
        lVar46 = lVar47 + lVar4;
      }
      else {
        lVar55 = *(long *)(*(long *)(*plVar28 + uVar15) + 0x20);
        lVar46 = lVar4;
        if ((lVar47 != 0 || lVar51 != 0) || lVar41 != 0) {
          puStack_80 = &UNK_003c4800;
          lStack_78 = lVar42;
          lStack_70 = lVar48;
          lStack_50 = lVar47;
          uStack_48 = uVar25;
          lStack_40 = lVar55;
          _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lVar41,uStack_38);
          if (0 < lVar41) {
            puStack_80 = &UNK_003c4816;
            _ZN10PatchUtils4PipeEN7android4base11borrowed_fdES2_m(uStack_34,uStack_38,lVar41);
          }
          puStack_80 = &UNK_003c4827;
          func_0x0099bf60(uStack_34,lStack_50,1);
          uVar11 = uStack_38;
          puStack_80 = &UNK_003c4836;
          _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lVar51,uStack_38);
          puStack_80 = &UNK_003c4842;
          _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lStack_50,uVar11);
          uVar25 = uStack_48 + lVar41 + lStack_50;
          plVar28 = plStack_58;
          lVar55 = lStack_40;
          lVar42 = lStack_78;
          lVar48 = lStack_70;
        }
      }
      lVar41 = lVar42;
      uVar50 = lVar4 + lVar48;
      uVar15 = uVar15 + 0x10;
      lVar54 = lVar54 + -1;
      lVar47 = lVar46;
      lVar51 = lVar55;
    } while (lVar54 != 0);
  }
  uVar11 = uStack_38;
  if ((lVar46 == 0 && lVar55 == 0) && lVar41 == 0) {
    uVar56 = (ulong)uStack_34;
    ppppppplVar16 = (long *******)0x0;
    lVar46 = 0;
  }
  else {
    puStack_80 = &UNK_003c489f;
    uStack_48 = uVar25;
    lStack_40 = lVar55;
    _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lVar41,uStack_38);
    uVar56 = (ulong)uStack_34;
    if (0 < lVar41) {
      puStack_80 = &UNK_003c48b5;
      _ZN10PatchUtils4PipeEN7android4base11borrowed_fdES2_m(uVar56,uVar11,lVar41);
    }
    puStack_80 = &UNK_003c48c5;
    func_0x0099bf60(uVar56,lVar46,1);
    puStack_80 = &UNK_003c48d0;
    _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lStack_40,uVar11);
    puStack_80 = &UNK_003c48da;
    ppppppplVar16 =
         (long *******)_ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lVar46,uVar11);
    uVar15 = lVar41 + lVar46;
    uVar25 = uStack_48 + uVar15;
  }
  if (uVar25 == uVar50) {
    lVar55 = uStack_60 - uVar50;
    if (uVar50 <= uStack_60 && lVar55 != 0) {
      puStack_80 = &UNK_003c48fc;
      _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(lVar55,uVar11);
      puStack_80 = &UNK_003c4909;
      _ZN10PatchUtils4PipeEN7android4base11borrowed_fdES2_m(uVar56,uVar11,lVar55);
      puStack_80 = &UNK_003c4912;
      _ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(0,uVar11);
      puStack_80 = &UNK_003c491b;
      ppppppplVar16 =
           (long *******)_ZN10PatchUtils9WriteLongElN7android4base11borrowed_fdE(0,uVar11);
    }
    puVar1 = puStack_68;
    uVar3 = *puStack_68;
    if ((int)uVar56 != -1) {
      puStack_80 = &UNK_003c4930;
      ppppppplVar16 = (long *******)func_0x0099bd10(uVar56);
    }
    *puVar1 = uVar3;
    return ppppppplVar16;
  }
  uVar12 = (uint)uVar25;
  puStack_80 = &UNK_003c4969;
  func_0x0099bd30(_stderr,&UNK_00159531,uVar50);
  uVar43 = 1;
  puStack_80 = &UNK_003c4973;
  func_0x0099bd80();
  uVar25 = (ulong)uVar12;
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_128[0] = &UNK_003c49b0;
  uStack_a0 = (ulong)uVar11;
  uStack_98 = uVar15;
  uStack_90 = uVar56;
  lStack_88 = lVar46;
  puStack_80 = &stack0xfffffffffffffff8;
  _ZN10PatchUtils18GetHostAPKMetaDataEPKc(acStack_e0);
  apuStack_128[0] = &UNK_003c49c1;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_118,0);
  if (auStack_118 != extraout_RDX) {
    if ((uStack_110 & 1) != 0) {
      uStack_110 = *(ulong *)(uStack_110 & 0xfffffffffffffffe);
    }
    uVar15 = *(ulong *)(extraout_RDX + 8);
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    if (uStack_110 == uVar15) {
      apuStack_128[0] = &UNK_003c49f5;
      _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_118,extraout_RDX);
    }
    else {
      apuStack_128[0] = &UNK_003c49ee;
      _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
    }
  }
  apuStack_128[0] = &UNK_003c4a09;
  pcVar39 = acStack_e0;
  _ZN20DeployPatchGenerator11CreatePatchEN3com7android10fastdeploy11APKMetaDataES3_N7android4base11borrowed_fdE
            (uVar43,acStack_e0,auStack_118);
  apuStack_128[0] = &UNK_003c4a11;
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_118);
  apuStack_128[0] = &UNK_003c4a19;
  pcVar44 = acStack_e0;
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
    return (long *******)CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  apuStack_128[0] = &UNK_003c4a51;
  func_0x0099bd00();
  lStack_158 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1bc = uVar12;
  uStack_150 = uVar25;
  puStack_148 = auStack_118;
  uStack_140 = uVar50;
  uStack_138 = uVar43;
  pcStack_130 = acStack_e0;
  apuStack_128[0] = (undefined *)&puStack_80;
  if (*pcVar44 == '\x01') {
    puStack_1d0 = &UNK_003c4ab6;
    apuStack_128[0] = (undefined *)&puStack_80;
    _ZN20DeployPatchGenerator3LogEPKcz();
    if (0 < *(int *)(extraout_RDX_00 + 0x20)) {
      lVar55 = 8;
      uVar50 = 0;
      do {
        puVar17 = (undefined8 *)((*(ulong *)(extraout_RDX_00 + 0x18) - 1) + lVar55);
        if ((*(ulong *)(extraout_RDX_00 + 0x18) & 1) == 0) {
          puVar17 = (undefined8 *)(extraout_RDX_00 + 0x18);
        }
        puStack_1d0 = &UNK_003c4aee;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (pcVar44,*puVar17);
        uVar50 = uVar50 + 1;
        lVar55 = lVar55 + 8;
      } while ((long)uVar50 < (long)*(int *)(extraout_RDX_00 + 0x20));
    }
  }
  if (*pcVar44 == '\x01') {
    puStack_1d0 = &UNK_003c4b29;
    _ZN20DeployPatchGenerator3LogEPKcz();
    if (0 < *(int *)(pcVar39 + 0x20)) {
      lVar55 = 8;
      uVar50 = 0;
      do {
        pcVar18 = (char *)((*(ulong *)(pcVar39 + 0x18) - 1) + lVar55);
        if ((*(ulong *)(pcVar39 + 0x18) & 1) == 0) {
          pcVar18 = pcVar39 + 0x18;
        }
        puStack_1d0 = &UNK_003c4b5e;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (pcVar44,*(undefined8 *)pcVar18);
        uVar50 = uVar50 + 1;
        lVar55 = lVar55 + 8;
      } while ((long)uVar50 < (long)*(int *)(pcVar39 + 0x20));
    }
  }
  uStack_178 = 0;
  uStack_170 = 0;
  ppppppplStack_168 = (long *******)0x0;
  puVar19 = (ulong *)(*(ulong *)(pcVar39 + 0x30) & 0xfffffffffffffffc);
  if ((*puVar19 & 1) == 0) {
    ppppppplStack_168 = (long *******)puVar19[2];
    uStack_178 = *puVar19;
    uStack_170 = puVar19[1];
  }
  else {
    puStack_1d0 = &UNK_003c4bac;
    func_0x00330340(&uStack_178,puVar19[2],puVar19[1]);
  }
  pppppplStack_198 = (long ******)0x0;
  uStack_190 = 0;
  ppppppplStack_188 = (long *******)0x0;
  puVar19 = (ulong *)(*(ulong *)(extraout_RDX_00 + 0x30) & 0xfffffffffffffffc);
  if ((*puVar19 & 1) == 0) {
    ppppppplStack_188 = (long *******)puVar19[2];
    pppppplStack_198 = (long ******)*puVar19;
    uStack_190 = puVar19[1];
  }
  else {
    puStack_1d0 = &UNK_003c4bea;
    func_0x00330340(&pppppplStack_198,puVar19[2],puVar19[1]);
  }
  ppppppplStack_1b8 = (long *******)0x0;
  ppppppplStack_1b0 = (long *******)0x0;
  lStack_1a8 = 0;
  puStack_1d0 = &UNK_003c4c11;
  uVar25 = _ZN20DeployPatchGenerator21BuildIdenticalEntriesERNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKN3com7android10fastdeploy11APKMetaDataESC_
                     (pcVar44,&ppppppplStack_1b8,pcVar39);
  lVar55 = (long)ppppppplStack_1b0 - (long)ppppppplStack_1b8;
  if (lVar55 == 0) {
    lVar46 = 0;
    uVar56 = 0;
  }
  else {
    if (lVar55 == 0x10) {
      uVar56 = 0;
      uVar15 = 0;
      lVar46 = 0;
    }
    else {
      ppppppplVar16 = ppppppplStack_1b8 + 3;
      uVar56 = 0;
      uVar15 = 0;
      lVar46 = 0;
      do {
        if (ppppppplVar16[-2] != (long ******)0x0) {
          uVar56 = uVar56 + (long)ppppppplVar16[-3][5];
          lVar46 = lVar46 + 1;
        }
        if (*ppppppplVar16 != (long ******)0x0) {
          uVar56 = uVar56 + (long)ppppppplVar16[-1][5];
          lVar46 = lVar46 + 1;
        }
        uVar15 = uVar15 + 2;
        ppppppplVar16 = ppppppplVar16 + 4;
      } while ((lVar55 >> 4 & 0xfffffffffffffffeU) != uVar15);
      if ((lVar55 >> 4 & 1U) == 0) goto code_r0x003c4cb1;
    }
    if (ppppppplStack_1b8[uVar15 * 2 + 1] != (long ******)0x0) {
      uVar56 = uVar56 + (long)ppppppplStack_1b8[uVar15 * 2][5];
      lVar46 = lVar46 + 1;
    }
  }
code_r0x003c4cb1:
  dStack_1c8 = (double)(((float)uVar56 * 100.0) / (float)uVar25);
  ppppppplVar31 = (long *******)&stderr;
  puStack_1d0 = &UNK_003c4d2f;
  func_0x0099bd30(_stderr,&UNK_00162d78,lVar46);
  puStack_1d0 = &UNK_003c4d4e;
  func_0x0099bd30(SUB84(dStack_1c8,0),_stderr,&UNK_00165e38,uVar56,uVar25);
  ppppppplVar40 = (long *******)&ppppppplStack_1b8;
  ppppppplVar16 = &pppppplStack_198;
  ppppppplVar22 = (long *******)(ulong)uStack_1bc;
  puStack_1d0 = &UNK_003c4d69;
  _ZN20DeployPatchGenerator13GeneratePatchERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESE_N7android4base11borrowed_fdE
            ();
  ppppppplVar29 = ppppppplStack_1b8;
  if (ppppppplStack_1b8 != (long *******)0x0) {
    ppppppplStack_1b0 = ppppppplStack_1b8;
    ppppppplVar40 = (long *******)(lStack_1a8 - (long)ppppppplStack_1b8);
    puStack_1d0 = &UNK_003c4d88;
    _ZdaPvSt11align_val_t();
  }
  if (((ulong)pppppplStack_198 & 1) != 0) {
    ppppppplVar40 = (long *******)((ulong)pppppplStack_198 & 0xfffffffffffffffe);
    puStack_1d0 = &UNK_003c4d9f;
    ppppppplVar29 = ppppppplStack_188;
    _ZdaPvSt11align_val_t();
  }
  if ((uStack_178 & 1) != 0) {
    ppppppplVar40 = (long *******)(uStack_178 & 0xfffffffffffffffe);
    puStack_1d0 = &UNK_003c4db6;
    ppppppplVar29 = ppppppplStack_168;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_158) {
    return (long *******)CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  puStack_1d0 = &UNK_003c4ddb;
  func_0x0099bd00();
  puStack_1d0 = (undefined *)apuStack_128;
  uStack_1d8 = uVar56;
  puStack_1f8 = &stderr;
  ppbVar32 = &pbStack_2b0;
  lStack_200 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = *(int *)(extraout_RDX_01 + 0x20);
  if (*(int *)(ppppppplVar16 + 4) < *(int *)(extraout_RDX_01 + 0x20)) {
    iVar13 = *(int *)(ppppppplVar16 + 4);
  }
  ppppppplVar49 = (long *******)(long)iVar13;
  ppppppplVar52 = (long *******)*ppppppplVar40;
  ppppppplVar57 = (long *******)((long)ppppppplVar40[2] - (long)ppppppplVar52);
  ppppppplVar26 = (long *******)((long)ppppppplVar57 >> 4);
  ppppppplStack_2a0 = ppppppplVar29;
  uStack_298 = extraout_RDX_01;
  ppppppplStack_288 = ppppppplVar40;
  pcStack_1f0 = pcVar44;
  uStack_1e8 = uVar50;
  uStack_1e0 = uVar25;
  if (ppppppplVar26 < ppppppplVar49) {
    ppppppplStack_280 = ppppppplVar16;
    if (-1 < iVar13) {
      pppppplVar5 = ppppppplVar40[1];
      puStack_2b8 = &UNK_003c4e66;
      pppppplVar20 = (long ******)_Znwm((long)ppppppplVar49 * 0x10);
      ppppppplStack_278 =
           (long *******)((long)pppppplVar20 + ((long)pppppplVar5 - (long)ppppppplVar52));
      puStack_2b8 = &UNK_003c4e84;
      func_0x0099bda0(pppppplVar20,ppppppplVar52,(long)pppppplVar5 - (long)ppppppplVar52);
      ppppppplVar16 = ppppppplStack_280;
      *ppppppplStack_288 = pppppplVar20;
      ppppppplStack_288[1] = (long ******)ppppppplStack_278;
      ppppppplStack_288[2] = pppppplVar20 + (long)ppppppplVar49 * 2;
      if (ppppppplVar52 != (long *******)0x0) {
        puStack_2b8 = &UNK_003c4eb4;
        _ZdaPvSt11align_val_t(ppppppplVar52,ppppppplVar57);
      }
      goto code_r0x003c4eb4;
    }
  }
  else {
code_r0x003c4eb4:
    ppppppplStack_220 = (long *******)0x0;
    uStack_218 = 0;
    ppppppplStack_230 = (long *******)0x0;
    ppppppplStack_228 = (long *******)0x0;
    uStack_210 = 0x3f800000;
    ppppppplVar31 = (long *******)((long)ppppppplVar16[3] + 7);
    if (((ulong)ppppppplVar16[3] & 1) == 0) {
      ppppppplVar31 = ppppppplVar16 + 3;
    }
    if ((long)*(int *)(ppppppplVar16 + 4) != 0) {
      ppppppplStack_278 = ppppppplVar31 + *(int *)(ppppppplVar16 + 4);
      do {
        ppppppplVar16 = (long *******)*ppppppplVar31;
        ppppppplStack_260 = (long *******)0x0;
        ppppppplStack_258 = (long *******)0x0;
        pbVar21 = (byte *)((ulong)ppppppplVar16[3] & 0xfffffffffffffffc);
        bVar58 = (*pbVar21 & 1) != 0;
        pbVar45 = pbVar21 + 1;
        if (bVar58) {
          pbVar45 = *(byte **)(pbVar21 + 0x10);
        }
        uVar25 = (ulong)(*pbVar21 >> 1);
        if (bVar58) {
          uVar25 = *(ulong *)(pbVar21 + 8);
        }
        puStack_2b8 = &UNK_003c4f3e;
        func_0x0099c110(&ppppppplStack_260,pbVar45,uVar25,0x10);
        ppppppplVar49 = ppppppplStack_228;
        uVar25 = (long)ppppppplStack_260 + 0x9e3779b9;
        ppppppplVar52 =
             (long *******)
             ((long)ppppppplStack_258 + (uVar25 >> 2) + uVar25 * 0x40 + 0x9e3779b9 ^ uVar25);
        ppppppplStack_280 = ppppppplVar16;
        if (ppppppplStack_228 == (long *******)0x0) {
          ppppppplVar29 = (long *******)0x0;
        }
        else {
          uVar25 = (long)ppppppplStack_228 - 1;
          if (((ulong)ppppppplStack_228 & uVar25) == 0) {
            ppppppplVar29 = (long *******)((ulong)ppppppplVar52 & uVar25);
          }
          else {
            ppppppplVar29 = ppppppplVar52;
            if (ppppppplStack_228 <= ppppppplVar52) {
              ppppppplVar29 = (long *******)((ulong)ppppppplVar52 % (ulong)ppppppplStack_228);
            }
          }
          if (ppppppplStack_230[(long)ppppppplVar29] != (long ******)0x0) {
            for (ppppppplVar16 = (long *******)*ppppppplStack_230[(long)ppppppplVar29];
                ppppppplVar16 != (long *******)0x0; ppppppplVar16 = (long *******)*ppppppplVar16) {
              ppppppplVar40 = (long *******)ppppppplVar16[1];
              if (ppppppplVar40 == ppppppplVar52) {
                if (((long *******)ppppppplVar16[2] == ppppppplStack_260) &&
                   ((long *******)ppppppplVar16[3] == ppppppplStack_258)) goto code_r0x003c54cc;
              }
              else {
                if (((ulong)ppppppplStack_228 & uVar25) == 0) {
                  ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & uVar25);
                }
                else if (ppppppplStack_228 <= ppppppplVar40) {
                  if (((ulong)ppppppplVar40 | (ulong)ppppppplStack_228) >> 0x20 == 0) {
                    ppppppplVar40 =
                         (long *******)
                         (((ulong)ppppppplVar40 & 0xffffffff) %
                         ((ulong)ppppppplStack_228 & 0xffffffff));
                  }
                  else {
                    ppppppplVar40 = (long *******)((ulong)ppppppplVar40 % (ulong)ppppppplStack_228);
                  }
                }
                if (ppppppplVar40 != ppppppplVar29) break;
              }
            }
          }
        }
        puStack_2b8 = &UNK_003c502a;
        ppppppplVar40 = ppppppplStack_258;
        ppppppplVar16 = (long *******)_Znwm(0x38);
        *ppppppplVar16 = (long ******)0x0;
        ppppppplVar16[1] = (long ******)ppppppplVar52;
        ppppppplVar16[2] = (long ******)ppppppplStack_260;
        ppppppplVar16[3] = (long ******)ppppppplStack_258;
        ppppppplVar16[4] = (long ******)0x0;
        ppppppplVar16[5] = (long ******)0x0;
        ppppppplVar16[6] = (long ******)0x0;
        if ((float)ppppppplVar49 * (float)uStack_210 < (float)(uStack_218 + 1)) {
          uVar25 = 1;
          if ((long *******)0x2 < ppppppplVar49) {
            uVar25 = (ulong)(((ulong)ppppppplVar49 & (long)ppppppplVar49 - 1U) != 0);
          }
          ppppppplVar29 = (long *******)((long)ppppppplVar49 * 2 | uVar25);
          puStack_2b8 = &UNK_003c50f3;
          ppppppplStack_290 = ppppppplVar31;
          fVar60 = (float)func_0x009992a0((float)(uStack_218 + 1) / (float)uStack_210);
          ppppppplVar26 = (long *******)((long)fVar60 >> 0x3f);
          ppppppplVar31 =
               (long *******)((long)(fVar60 - 9.223372e+18) & (ulong)ppppppplVar26 | (long)fVar60);
          if (ppppppplVar31 < ppppppplVar29) {
            ppppppplVar31 = ppppppplVar29;
          }
          ppppppplVar57 = (long *******)0x2;
          ppppppplVar29 = ppppppplVar31;
          if (ppppppplVar31 == (long *******)0x1) {
code_r0x003c5139:
            ppppppplVar31 = ppppppplVar57;
            bVar58 = ppppppplVar31 < ppppppplVar49;
            ppppppplVar57 = ppppppplVar31;
            if (ppppppplVar49 < ppppppplVar31) goto code_r0x003c5141;
code_r0x003c51b0:
            if (bVar58) {
              puStack_2b8 = &UNK_003c52c5;
              fVar60 = (float)func_0x009992a0((float)uStack_218 / (float)uStack_210);
              ppppppplVar26 = (long *******)((long)fVar60 >> 0x3f);
              ppppppplVar30 =
                   (long *******)
                   ((long)(fVar60 - 9.223372e+18) & (ulong)ppppppplVar26 | (long)fVar60);
              if ((ppppppplVar49 < (long *******)0x3) ||
                 (((long)ppppppplVar49 - 1U & (ulong)ppppppplVar49) != 0)) {
                puStack_2b8 = &UNK_003c531e;
                ppppppplVar57 = (long *******)_ZNSt3__112__next_primeEm();
                ppppppplVar29 = ppppppplVar30;
              }
              else {
                ppppppplVar57 = ppppppplVar30;
                if ((long *******)0x1 < ppppppplVar30) {
                  lVar55 = 0x3f;
                  if ((long)ppppppplVar30 - 1U != 0) {
                    for (; (long)ppppppplVar30 - 1U >> lVar55 == 0; lVar55 = lVar55 + -1) {
                    }
                  }
                  bVar24 = -((byte)lVar55 ^ 0x3f);
                  ppppppplVar26 = (long *******)(ulong)CONCAT31((int3)((ulong)lVar55 >> 8),bVar24);
                  ppppppplVar57 = (long *******)(1L << (bVar24 & 0x3f));
                }
              }
              if (ppppppplVar57 < ppppppplVar31) {
                ppppppplVar57 = ppppppplVar31;
              }
              if (ppppppplVar49 <= ppppppplVar57) goto code_r0x003c5400;
              if (ppppppplVar57 != (long *******)0x0) goto code_r0x003c5141;
              bVar58 = true;
              ppppppplVar57 = (long *******)0x0;
              ppppppplVar40 = (long *******)0x0;
              goto code_r0x003c5167;
            }
          }
          else {
            if (((ulong)ppppppplVar31 & (long)ppppppplVar31 - 1U) != 0) {
              puStack_2b8 = &UNK_003c5132;
              ppppppplVar57 = (long *******)_ZNSt3__112__next_primeEm();
              ppppppplVar29 = ppppppplVar31;
              ppppppplVar49 = ppppppplStack_228;
              goto code_r0x003c5139;
            }
            bVar58 = ppppppplVar31 < ppppppplVar49;
            ppppppplVar57 = ppppppplVar31;
            if (ppppppplVar31 <= ppppppplVar49) goto code_r0x003c51b0;
code_r0x003c5141:
            if ((long *******)0x1fffffffffffffff < ppppppplVar57) {
              puStack_2b8 = &UNK_003c58cb;
              func_0x0032fc40();
              goto code_r0x003c58cb;
            }
            puStack_2b8 = &UNK_003c5165;
            ppppppplVar40 = (long *******)_Znwm((long)ppppppplVar57 * 8);
            bVar58 = false;
code_r0x003c5167:
            ppppppplVar31 = ppppppplStack_230;
            bVar59 = ppppppplStack_230 != (long *******)0x0;
            ppppppplStack_230 = ppppppplVar40;
            if (bVar59) {
              puStack_2b8 = &UNK_003c5181;
              _ZdaPvSt11align_val_t(ppppppplVar31,(long)ppppppplStack_228 << 3);
            }
            ppppppplStack_228 = ppppppplVar57;
            if (!bVar58) {
              uVar25 = (long)ppppppplVar57 - 1;
              uVar15 = (ulong)((uint)ppppppplVar57 & 3);
              if (2 < uVar25) {
                uVar50 = 0;
                do {
                  ppppppplStack_230[uVar50] = (long ******)0x0;
                  ppppppplStack_230[uVar50 + 1] = (long ******)0x0;
                  ppppppplStack_230[uVar50 + 2] = (long ******)0x0;
                  ppppppplStack_230[uVar50 + 3] = (long ******)0x0;
                  uVar50 = uVar50 + 4;
                  if (((ulong)ppppppplVar57 & 0x1ffffffffffffffc) == uVar50)
                  goto joined_r0x003c522f;
                } while( true );
              }
              uVar50 = 0;
              do {
                ppppppplStack_230[uVar50] = (long ******)0x0;
                uVar50 = uVar50 + 1;
                uVar15 = uVar15 - 1;
joined_r0x003c522f:
              } while (uVar15 != 0);
              if (ppppppplStack_220 != (long *******)0x0) {
                ppppppplVar40 = (long *******)ppppppplStack_220[1];
                if (((ulong)ppppppplVar57 & uVar25) == 0) {
                  ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & uVar25);
                }
                else if (ppppppplVar57 <= ppppppplVar40) {
                  if (((ulong)ppppppplVar40 | (ulong)ppppppplVar57) >> 0x20 == 0) {
                    ppppppplVar40 =
                         (long *******)
                         (((ulong)ppppppplVar40 & 0xffffffff) % ((ulong)ppppppplVar57 & 0xffffffff))
                    ;
                  }
                  else {
                    ppppppplVar40 = (long *******)((ulong)ppppppplVar40 % (ulong)ppppppplVar57);
                  }
                }
                ppppppplStack_230[(long)ppppppplVar40] = (long ******)&ppppppplStack_220;
                ppppppplVar31 = (long *******)*ppppppplStack_220;
                ppppppplVar29 = ppppppplStack_220;
                while (ppppppplVar22 = (long *******)0x0, ppppppplVar31 != (long *******)0x0) {
                  ppppppplVar22 = (long *******)ppppppplVar31[1];
                  if (((ulong)ppppppplVar57 & uVar25) == 0) {
                    ppppppplVar22 = (long *******)((ulong)ppppppplVar22 & uVar25);
                  }
                  else if (ppppppplVar57 <= ppppppplVar22) {
                    if (((ulong)ppppppplVar22 | (ulong)ppppppplVar57) >> 0x20 == 0) {
                      ppppppplVar22 =
                           (long *******)
                           (((ulong)ppppppplVar22 & 0xffffffff) %
                           ((ulong)ppppppplVar57 & 0xffffffff));
                    }
                    else {
                      ppppppplVar22 = (long *******)((ulong)ppppppplVar22 % (ulong)ppppppplVar57);
                    }
                  }
                  if (ppppppplVar22 != ppppppplVar40) {
                    if (ppppppplStack_230[(long)ppppppplVar22] == (long ******)0x0) {
                      ppppppplStack_230[(long)ppppppplVar22] = (long ******)ppppppplVar29;
                      ppppppplVar40 = ppppppplVar22;
                    }
                    else {
                      *ppppppplVar29 = *ppppppplVar31;
                      *ppppppplVar31 = (long ******)*ppppppplStack_230[(long)ppppppplVar22];
                      *ppppppplStack_230[(long)ppppppplVar22] = (long *****)ppppppplVar31;
                      ppppppplVar31 = ppppppplVar29;
                    }
                  }
                  ppppppplVar29 = ppppppplVar31;
                  ppppppplVar31 = (long *******)*ppppppplVar29;
                }
              }
            }
          }
code_r0x003c5400:
          ppppppplVar49 = ppppppplStack_228;
          ppppppplVar31 = ppppppplStack_290;
          if (((ulong)ppppppplStack_228 & (long)ppppppplStack_228 - 1U) == 0) {
            ppppppplVar29 = (long *******)((long)ppppppplStack_228 - 1U & (ulong)ppppppplVar52);
          }
          else {
            ppppppplVar29 = ppppppplVar52;
            if (ppppppplStack_228 <= ppppppplVar52) {
              ppppppplVar29 = (long *******)((ulong)ppppppplVar52 % (ulong)ppppppplStack_228);
            }
          }
        }
        pppppplVar5 = ppppppplStack_230[(long)ppppppplVar29];
        if (pppppplVar5 == (long ******)0x0) {
          *ppppppplVar16 = (long ******)ppppppplStack_220;
          ppppppplStack_230[(long)ppppppplVar29] = (long ******)&ppppppplStack_220;
          ppppppplVar40 = ppppppplVar16;
          if (ppppppplStack_220 != (long *******)0x0) {
            ppppppplVar29 = (long *******)ppppppplStack_220[1];
            if (((ulong)ppppppplVar49 & (long)ppppppplVar49 - 1U) == 0) {
              ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & (long)ppppppplVar49 - 1U);
            }
            else if (ppppppplVar49 <= ppppppplVar29) {
              if (((ulong)ppppppplVar29 | (ulong)ppppppplVar49) >> 0x20 == 0) {
                ppppppplVar29 =
                     (long *******)
                     (((ulong)ppppppplVar29 & 0xffffffff) % ((ulong)ppppppplVar49 & 0xffffffff));
              }
              else {
                ppppppplVar29 = (long *******)((ulong)ppppppplVar29 % (ulong)ppppppplVar49);
              }
            }
            ppppppplStack_230[(long)ppppppplVar29] = (long ******)ppppppplVar16;
          }
        }
        else {
          *ppppppplVar16 = (long ******)*pppppplVar5;
          *pppppplVar5 = (long *****)ppppppplVar16;
          ppppppplVar40 = ppppppplStack_220;
        }
        ppppppplStack_220 = ppppppplVar40;
        uStack_218 = uStack_218 + 1;
code_r0x003c54cc:
        uStack_270 = (long *******)ppppppplVar16[5];
        ppppppplStack_238 = ppppppplVar16 + 4;
        ppppppplStack_248 = (long *******)&uStack_270;
        ppppppplStack_240 = (long *******)&ppppppplStack_250;
        ppppppplStack_250 = ppppppplStack_280;
        if (uStack_270 < ppppppplVar16[6]) {
          *uStack_270 = (long ******)ppppppplStack_280;
          ppppppplVar40 = uStack_270 + 1;
        }
        else {
          puStack_2b8 = &UNK_003c5523;
          _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_248);
          ppppppplVar40 = uStack_270;
        }
        ppppppplVar16[5] = (long ******)ppppppplVar40;
        ppppppplVar31 = ppppppplVar31 + 1;
      } while (ppppppplVar31 != ppppppplStack_278);
    }
    ppppppplVar26 = *(long ********)(uStack_298 + 0x18);
    ppppppplVar49 = (long *******)((long)ppppppplVar26 + 7);
    if (((ulong)ppppppplVar26 & 1) == 0) {
      ppppppplVar49 = (long *******)(uStack_298 + 0x18);
    }
    if ((long)*(int *)(uStack_298 + 0x20) != 0) {
      ppppppplStack_280 = ppppppplVar49 + *(int *)(uStack_298 + 0x20);
      ppppppplVar57 = (long *******)0x0;
code_r0x003c56a1:
      ppppppplVar31 = (long *******)*ppppppplVar49;
      ppppppplVar57 = (long *******)((long)ppppppplVar57 + (long)ppppppplVar31[5]);
      ppppppplStack_260 = (long *******)0x0;
      ppppppplStack_258 = (long *******)0x0;
      pbVar21 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
      bVar58 = (*pbVar21 & 1) != 0;
      pbVar45 = pbVar21 + 1;
      if (bVar58) {
        pbVar45 = *(byte **)(pbVar21 + 0x10);
      }
      uVar25 = (ulong)(*pbVar21 >> 1);
      if (bVar58) {
        uVar25 = *(ulong *)(pbVar21 + 8);
      }
      ppppppplVar26 = (long *******)0x10;
      puStack_2b8 = &UNK_003c56e4;
      func_0x0099c110(&ppppppplStack_260,pbVar45,uVar25);
      if ((ppppppplStack_228 != (long *******)0x0) && (uStack_218 != 0)) {
        uVar25 = (long)ppppppplStack_260 + 0x9e3779b9;
        ppppppplVar26 =
             (long *******)
             ((long)ppppppplStack_258 + (uVar25 >> 2) + uVar25 * 0x40 + 0x9e3779b9 ^ uVar25);
        uVar25 = (long)ppppppplStack_228 - 1;
        if (((ulong)ppppppplStack_228 & uVar25) == 0) {
          ppppppplVar40 = (long *******)((ulong)ppppppplVar26 & uVar25);
        }
        else {
          ppppppplVar40 = ppppppplVar26;
          if (ppppppplStack_228 <= ppppppplVar26) {
            ppppppplVar40 = (long *******)((ulong)ppppppplVar26 % (ulong)ppppppplStack_228);
          }
        }
        ppppppplVar22 = ppppppplStack_260;
        if (ppppppplStack_230[(long)ppppppplVar40] != (long ******)0x0) {
          for (ppppplVar27 = *ppppppplStack_230[(long)ppppppplVar40]; ppppplVar27 != (long *****)0x0
              ; ppppplVar27 = (long *****)*ppppplVar27) {
            ppppppplVar29 = (long *******)ppppplVar27[1];
            if (ppppppplVar29 == ppppppplVar26) {
              if (((long *******)ppppplVar27[2] == ppppppplStack_260) &&
                 ((long *******)ppppplVar27[3] == ppppppplStack_258)) {
                ppppppplVar40 = (long *******)ppppplVar27[4];
                ppppppplVar16 = (long *******)ppppplVar27[5];
                if (ppppppplVar40 != ppppppplVar16) {
                  pbStack_2a8 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
                  bVar24 = *pbStack_2a8;
                  ppppppplVar22 = (long *******)(ulong)bVar24;
                  if ((bVar24 & 1) == 0) {
                    ppppppplVar29 = (long *******)(ulong)(bVar24 >> 1);
                  }
                  else {
                    ppppppplVar29 = *(long ********)(pbStack_2a8 + 8);
                  }
                  pbStack_2b0 = pbStack_2a8 + 1;
                  uStack_298 = CONCAT44(uStack_298._4_4_,(uint)bVar24);
                  ppppppplStack_290 = ppppppplVar31;
                  ppppppplStack_278 = ppppppplVar57;
                  goto code_r0x003c5845;
                }
                break;
              }
            }
            else {
              if (((ulong)ppppppplStack_228 & uVar25) == 0) {
                ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & uVar25);
              }
              else if (ppppppplStack_228 <= ppppppplVar29) {
                if (((ulong)ppppppplVar29 | (ulong)ppppppplStack_228) >> 0x20 == 0) {
                  ppppppplVar29 =
                       (long *******)
                       (((ulong)ppppppplVar29 & 0xffffffff) %
                       ((ulong)ppppppplStack_228 & 0xffffffff));
                }
                else {
                  ppppppplVar29 = (long *******)((ulong)ppppppplVar29 % (ulong)ppppppplStack_228);
                }
              }
              if (ppppppplVar29 != ppppppplVar40) break;
            }
          }
        }
      }
      goto code_r0x003c5690;
    }
    ppppppplVar57 = (long *******)0x0;
code_r0x003c5568:
    ppppppplVar29 = (long *******)*ppppppplStack_288;
    ppppppplVar40 = (long *******)ppppppplStack_288[1];
    ppppppplVar52 = ppppppplVar57;
    ppppppplVar30 = ppppppplStack_220;
    if (ppppppplVar29 != ppppppplVar40) {
      uVar25 = (long)ppppppplVar40 - (long)ppppppplVar29 >> 4;
      lVar55 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar55 == 0; lVar55 = lVar55 + -1) {
        }
      }
      ppppppplVar30 = (long *******)((ulong)(((uint)lVar55 ^ 0x3f) * 2) ^ 0x7e);
      ppppppplVar26 = (long *******)0x1;
      ppbVar32 = &puStack_2b8;
      puStack_2b8 = &UNK_003c559f;
      ppuVar36 = &puStack_1d0;
      goto code_r0x003c58e0;
    }
    while (ppppppplVar29 = ppppppplStack_230, ppppppplVar30 != (long *******)0x0) {
      ppppppplVar52 = (long *******)*ppppppplVar30;
      pppppplVar5 = ppppppplVar30[4];
      ppppppplStack_230 = ppppppplVar29;
      if (pppppplVar5 != (long ******)0x0) {
        ppppppplVar30[5] = pppppplVar5;
        puStack_2b8 = &UNK_003c5621;
        _ZdaPvSt11align_val_t(pppppplVar5,(long)ppppppplVar30[6] - (long)pppppplVar5);
      }
      ppppppplVar40 = (long *******)0x38;
      puStack_2b8 = &UNK_003c55fd;
      _ZdaPvSt11align_val_t(ppppppplVar30);
      ppppppplVar30 = ppppppplVar52;
    }
    ppppppplStack_230 = (long *******)0x0;
    if (ppppppplVar29 != (long *******)0x0) {
      ppppppplVar40 = (long *******)((long)ppppppplStack_228 << 3);
      puStack_2b8 = &UNK_003c55c6;
      _ZdaPvSt11align_val_t();
    }
    ppppppplVar31 = (long *******)0x0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_200) {
      return ppppppplVar57;
    }
code_r0x003c58cb:
    puStack_2b8 = &UNK_003c58d0;
    func_0x0099bd00();
  }
  puStack_2b8 = &UNK_003c58d5;
  func_0x00330ca0();
  ppppppplVar30 = extraout_RDX_02;
  ppuVar36 = &puStack_1d0;
code_r0x003c58e0:
  do {
    ppppppplVar53 = ppppppplVar40;
    puVar37 = (undefined1 *)((long)ppbVar32 + -8);
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    puVar33 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined ***)((long)ppbVar32 + -8) = ppuVar36;
    *(long ********)((long)ppbVar32 + -0x10) = ppppppplVar57;
    *(long ********)((long)ppbVar32 + -0x18) = ppppppplVar52;
    *(long ********)((long)ppbVar32 + -0x20) = ppppppplVar16;
    *(long ********)((long)ppbVar32 + -0x28) = ppppppplVar49;
    *(long ********)((long)ppbVar32 + -0x30) = ppppppplVar31;
    *(int *)((long)ppbVar32 + -0x4c) = (int)ppppppplVar26;
    *(undefined8 *)((long)ppbVar32 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppppplVar49 = ppppppplVar53 + -2;
    *(long ********)((long)ppbVar32 + -0x60) = ppppppplVar53 + -4;
    *(long ********)((long)ppbVar32 + -0x58) = ppppppplVar53 + -6;
    ppppppplVar16 = ppppppplVar29;
    ppppppplVar40 = ppppppplVar53;
code_r0x003c591e:
    ppppppplVar26 = (long *******)((long)ppppppplVar53 - (long)ppppppplVar16 >> 4);
    ppppppplVar31 = ppppppplVar16;
    if (ppppppplVar26 < (long *******)0x6) {
      ppppppplVar52 =
           (long *******)(&UNK_001fdcb4 + *(int *)(&UNK_001fdcb4 + (long)ppppppplVar26 * 4));
      switch(ppppppplVar26) {
      default:
        goto code_r0x003c6596;
      case (long *******)0x2:
        ppppppplVar52 = (long *******)*ppppppplVar16;
        if ((long)ppppppplVar52[4] <= (long)ppppppplVar53[-2][4]) goto code_r0x003c6596;
code_r0x003c6030:
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        pppppplVar5 = ppppppplVar53[-1];
        *ppppppplVar16 = *ppppppplVar49;
        ppppppplVar16[1] = pppppplVar5;
        break;
      case (long *******)0x3:
        ppppppplVar26 = ppppppplVar16 + 2;
        ppppppplVar40 = (long *******)*ppppppplVar16;
        ppppppplVar52 = (long *******)ppppppplVar16[2][4];
        if ((long)ppppppplVar40[4] <= (long)ppppppplVar52) {
          if ((long)ppppppplVar53[-2][4] < (long)ppppppplVar52) {
            pppppplVar5 = ppppppplVar16[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            pppppplVar5 = ppppppplVar53[-1];
            *ppppppplVar26 = *ppppppplVar49;
            ppppppplVar16[3] = pppppplVar5;
            uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
            *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
            *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
            goto code_r0x003c656c;
          }
          goto code_r0x003c6596;
        }
        if ((long)ppppppplVar53[-2][4] < (long)ppppppplVar52) goto code_r0x003c6030;
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar26;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar26 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
        ppppppplVar52 = (long *******)(*ppppppplVar49)[4];
        if ((long)ppppppplVar16[2][4] <= (long)ppppppplVar52) goto code_r0x003c6596;
        pppppplVar5 = ppppppplVar16[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        pppppplVar5 = ppppppplVar53[-1];
        *ppppppplVar26 = *ppppppplVar49;
        ppppppplVar16[3] = pppppplVar5;
        break;
      case (long *******)0x4:
        ppppppplVar26 = ppppppplVar16 + 2;
        ppppppplVar52 = ppppppplVar16 + 4;
        ppppppplVar22 = (long *******)*ppppppplVar16;
        ppppplVar27 = ppppppplVar16[2][4];
        pppppplVar5 = ppppppplVar16[4];
        ppppppplVar29 = (long *******)pppppplVar5[4];
        if ((long)ppppplVar27 < (long)ppppppplVar22[4]) {
          if ((long)ppppppplVar29 < (long)ppppplVar27) {
            pppppplVar5 = ppppppplVar16[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            *ppppppplVar16 = *ppppppplVar52;
            ppppppplVar16[1] = ppppppplVar16[5];
          }
          else {
            pppppplVar20 = ppppppplVar16[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar20;
            *ppppppplVar16 = *ppppppplVar26;
            ppppppplVar16[1] = ppppppplVar16[3];
            uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar26 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
            *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
            *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
            if ((long)ppppppplVar16[2][4] <= (long)pppppplVar5[4]) goto code_r0x003c651f;
            pppppplVar5 = ppppppplVar16[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            *ppppppplVar26 = *ppppppplVar52;
            ppppppplVar16[3] = ppppppplVar16[5];
          }
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar52 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
          *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
          *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
        }
        else if ((long)ppppppplVar29 < (long)ppppplVar27) {
          pppppplVar5 = ppppppplVar16[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          *ppppppplVar26 = *ppppppplVar52;
          ppppppplVar16[3] = ppppppplVar16[5];
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar52 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
          *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
          *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
          if ((long)ppppppplVar16[2][4] < (long)(*ppppppplVar16)[4]) {
            pppppplVar5 = ppppppplVar16[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            *ppppppplVar16 = *ppppppplVar26;
            ppppppplVar16[1] = ppppppplVar16[3];
            uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar26 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
            *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
            *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
          }
        }
code_r0x003c651f:
        ppppppplVar40 = (long *******)*ppppppplVar52;
        if ((long)(*ppppppplVar49)[4] < (long)ppppppplVar40[4]) {
          pppppplVar5 = ppppppplVar16[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar52;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar53[-1];
          *ppppppplVar52 = *ppppppplVar49;
          ppppppplVar16[5] = pppppplVar5;
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
          *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
          *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
          ppppppplVar40 = (long *******)*ppppppplVar26;
          if ((long)(*ppppppplVar52)[4] < (long)ppppppplVar40[4]) {
            pppppplVar5 = ppppppplVar16[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            *ppppppplVar26 = *ppppppplVar52;
            ppppppplVar16[3] = ppppppplVar16[5];
            uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar52 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
            *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
            *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
code_r0x003c656c:
            ppppppplVar52 = (long *******)*ppppppplVar16;
            ppppppplVar49 = ppppppplVar16 + 2;
            if ((long)(*ppppppplVar49)[4] < (long)ppppppplVar52[4]) {
              pppppplVar5 = ppppppplVar16[1];
              *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
              *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
              *ppppppplVar16 = *ppppppplVar49;
              ppppppplVar16[1] = ppppppplVar16[3];
              uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
              uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
              uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
              *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
              *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
              *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
              *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
            }
          }
        }
        goto code_r0x003c6596;
      case (long *******)0x5:
        ppppppplVar53 = ppppppplVar30;
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar32 + -0x38)) {
          ppppppplVar40 = ppppppplVar16 + 2;
          ppppppplVar22 = ppppppplVar16 + 4;
          ppppppplVar52 = ppppppplVar16 + 6;
          ppppppplVar31 = *(long ********)((long)ppbVar32 + -0x30);
          ppppppplVar53 = *(long ********)((long)ppbVar32 + -0x18);
          puVar37 = *(undefined1 **)((long)ppbVar32 + -8);
          goto code_r0x003c65c0;
        }
        goto code_r0x003c65b4;
      }
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
      *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
      *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
      goto code_r0x003c6596;
    }
    if ((long)ppppppplVar26 < 0x18) {
      ppppppplVar52 = ppppppplVar16 + 2;
      if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
        if (ppppppplVar52 != ppppppplVar53 && ppppppplVar16 != ppppppplVar53) {
          ppppppplVar49 = ppppppplVar16 + 3;
          do {
            ppppppplVar26 = ppppppplVar52;
            ppppppplVar40 = (long *******)*ppppppplVar16;
            pppppplVar5 = ppppppplVar16[2];
            ppppppplVar29 = (long *******)pppppplVar5[4];
            if ((long)ppppppplVar29 < (long)ppppppplVar40[4]) {
              ppppppplVar40 = (long *******)ppppppplVar16[3];
              ppppppplVar29 = ppppppplVar49;
              do {
                ppppppplVar16 = ppppppplVar29;
                *(undefined4 *)(ppppppplVar16 + -1) = *(undefined4 *)(ppppppplVar16 + -3);
                *(undefined4 *)((long)ppppppplVar16 + -4) =
                     *(undefined4 *)((long)ppppppplVar16 + -0x14);
                *(undefined4 *)ppppppplVar16 = *(undefined4 *)(ppppppplVar16 + -2);
                *(undefined4 *)((long)ppppppplVar16 + 4) =
                     *(undefined4 *)((long)ppppppplVar16 + -0xc);
                ppppppplVar22 = (long *******)pppppplVar5[4];
                ppppppplVar29 = ppppppplVar16 + -2;
              } while ((long)ppppppplVar22 < (long)ppppppplVar16[-5][4]);
              ppppppplVar16[-3] = pppppplVar5;
              *ppppppplVar29 = (long ******)ppppppplVar40;
            }
            ppppppplVar52 = ppppppplVar26 + 2;
            ppppppplVar49 = ppppppplVar49 + 2;
            ppppppplVar16 = ppppppplVar26;
          } while (ppppppplVar52 != ppppppplVar53);
        }
        goto code_r0x003c6596;
      }
      if (ppppppplVar52 == ppppppplVar53 || ppppppplVar16 == ppppppplVar53) goto code_r0x003c6596;
      lVar55 = 0x10;
      ppppppplVar49 = ppppppplVar16;
      goto code_r0x003c611e;
    }
    if (ppppppplVar30 == (long *******)0x0) {
      ppppppplVar52 = ppppppplVar26;
      if (ppppppplVar16 == ppppppplVar53) goto code_r0x003c6596;
      ppppppplVar22 = (long *******)((long)ppppppplVar26 - 2U >> 1);
      ppppppplVar40 = ppppppplVar22;
      goto code_r0x003c6197;
    }
    ppppppplVar31 = ppppppplVar16 + ((ulong)ppppppplVar26 & 0xfffffffffffffffe);
    ppppplVar27 = (*ppppppplVar49)[4];
    if (ppppppplVar26 < (long *******)0x81) {
      ppppplVar6 = (*ppppppplVar16)[4];
      ppppppplVar40 = (long *******)*ppppppplVar31;
      if ((long)ppppplVar6 < (long)ppppppplVar40[4]) {
        if ((long)ppppplVar27 < (long)ppppplVar6) {
          pppppplVar5 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar53[-1];
          *ppppppplVar31 = *ppppppplVar49;
          ppppppplVar31[1] = pppppplVar5;
        }
        else {
          pppppplVar5 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar16[1];
          *ppppppplVar31 = *ppppppplVar16;
          ppppppplVar31[1] = pppppplVar5;
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar16 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar16 + 4) = uVar3;
          *(undefined4 *)(ppppppplVar16 + 1) = uVar8;
          *(undefined4 *)((long)ppppppplVar16 + 0xc) = uVar9;
          if ((long)(*ppppppplVar16)[4] <= (long)(*ppppppplVar49)[4]) goto code_r0x003c5d7e;
          pppppplVar5 = ppppppplVar16[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar53[-1];
          *ppppppplVar16 = *ppppppplVar49;
          ppppppplVar16[1] = pppppplVar5;
        }
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
        *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
        *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
      }
      else if ((long)ppppplVar27 < (long)ppppplVar6) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        pppppplVar5 = ppppppplVar53[-1];
        *ppppppplVar16 = *ppppppplVar49;
        ppppppplVar16[1] = pppppplVar5;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
        *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
        *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
        if ((long)(*ppppppplVar16)[4] < (long)(*ppppppplVar31)[4]) {
          pppppplVar5 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar16[1];
          *ppppppplVar31 = *ppppppplVar16;
          ppppppplVar31[1] = pppppplVar5;
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar16 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar16 + 4) = uVar3;
          *(undefined4 *)(ppppppplVar16 + 1) = uVar8;
          *(undefined4 *)((long)ppppppplVar16 + 0xc) = uVar9;
        }
      }
    }
    else {
      ppppplVar6 = (*ppppppplVar31)[4];
      if ((long)ppppplVar6 < (long)(*ppppppplVar16)[4]) {
        if ((long)ppppplVar27 < (long)ppppplVar6) {
          pppppplVar5 = ppppppplVar16[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar53[-1];
          *ppppppplVar16 = *ppppppplVar49;
          ppppppplVar16[1] = pppppplVar5;
        }
        else {
          pppppplVar5 = ppppppplVar16[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[1];
          *ppppppplVar16 = *ppppppplVar31;
          ppppppplVar16[1] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar5;
          if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar49)[4]) goto code_r0x003c5ab9;
          pppppplVar5 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar53[-1];
          *ppppppplVar31 = *ppppppplVar49;
          ppppppplVar31[1] = pppppplVar5;
        }
        pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar49 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar53[-1] = pppppplVar5;
      }
      else if ((long)ppppplVar27 < (long)ppppplVar6) {
        pppppplVar5 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        pppppplVar5 = ppppppplVar53[-1];
        *ppppppplVar31 = *ppppppplVar49;
        ppppppplVar31[1] = pppppplVar5;
        pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar49 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar53[-1] = pppppplVar5;
        if ((long)(*ppppppplVar31)[4] < (long)(*ppppppplVar16)[4]) {
          pppppplVar5 = ppppppplVar16[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[1];
          *ppppppplVar16 = *ppppppplVar31;
          ppppppplVar16[1] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar5;
        }
      }
code_r0x003c5ab9:
      ppppppplVar40 = ppppppplVar16 + 2;
      ppppppplVar26 = ppppppplVar31 + -2;
      ppppplVar27 = ppppppplVar31[-2][4];
      if ((long)ppppplVar27 < (long)ppppppplVar16[2][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar27) {
          pppppplVar5 = ppppppplVar16[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          plVar28 = *(long **)((long)ppbVar32 + -0x60);
          pppppplVar5 = (long ******)plVar28[1];
          *ppppppplVar40 = (long ******)*plVar28;
          ppppppplVar16[3] = pppppplVar5;
          lVar55 = *(long *)((long)ppbVar32 + -0x40);
          *plVar28 = *(long *)((long)ppbVar32 + -0x48);
          plVar28[1] = lVar55;
        }
        else {
          pppppplVar5 = ppppppplVar16[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[-1];
          *ppppppplVar40 = *ppppppplVar26;
          ppppppplVar16[3] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar26 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar5;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)(*ppppppplVar26)[4]) {
            pppppplVar5 = ppppppplVar31[-1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            plVar28 = *(long **)((long)ppbVar32 + -0x60);
            pppppplVar5 = (long ******)plVar28[1];
            *ppppppplVar26 = (long ******)*plVar28;
            ppppppplVar31[-1] = pppppplVar5;
            lVar55 = *(long *)((long)ppbVar32 + -0x40);
            *plVar28 = *(long *)((long)ppbVar32 + -0x48);
            plVar28[1] = lVar55;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar31[-1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        plVar28 = *(long **)((long)ppbVar32 + -0x60);
        pppppplVar5 = (long ******)plVar28[1];
        *ppppppplVar26 = (long ******)*plVar28;
        ppppppplVar31[-1] = pppppplVar5;
        lVar55 = *(long *)((long)ppbVar32 + -0x40);
        *plVar28 = *(long *)((long)ppbVar32 + -0x48);
        plVar28[1] = lVar55;
        if ((long)(*ppppppplVar26)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar5 = ppppppplVar16[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[-1];
          *ppppppplVar40 = *ppppppplVar26;
          ppppppplVar16[3] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar26 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar5;
        }
      }
      ppppppplVar40 = ppppppplVar16 + 4;
      ppppppplVar52 = ppppppplVar31 + 2;
      ppppplVar27 = ppppppplVar31[2][4];
      if ((long)ppppplVar27 < (long)ppppppplVar16[4][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar27) {
          pppppplVar5 = ppppppplVar16[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          plVar28 = *(long **)((long)ppbVar32 + -0x58);
          pppppplVar5 = (long ******)plVar28[1];
          *ppppppplVar40 = (long ******)*plVar28;
          ppppppplVar16[5] = pppppplVar5;
          lVar55 = *(long *)((long)ppbVar32 + -0x40);
          *plVar28 = *(long *)((long)ppbVar32 + -0x48);
          plVar28[1] = lVar55;
        }
        else {
          pppppplVar5 = ppppppplVar16[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[3];
          *ppppppplVar40 = *ppppppplVar52;
          ppppppplVar16[5] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar52 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar5;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)(*ppppppplVar52)[4]) {
            pppppplVar5 = ppppppplVar31[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar52;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
            plVar28 = *(long **)((long)ppbVar32 + -0x58);
            pppppplVar5 = (long ******)plVar28[1];
            *ppppppplVar52 = (long ******)*plVar28;
            ppppppplVar31[3] = pppppplVar5;
            lVar55 = *(long *)((long)ppbVar32 + -0x40);
            *plVar28 = *(long *)((long)ppbVar32 + -0x48);
            plVar28[1] = lVar55;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar31[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar52;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        plVar28 = *(long **)((long)ppbVar32 + -0x58);
        pppppplVar5 = (long ******)plVar28[1];
        *ppppppplVar52 = (long ******)*plVar28;
        ppppppplVar31[3] = pppppplVar5;
        lVar55 = *(long *)((long)ppbVar32 + -0x40);
        *plVar28 = *(long *)((long)ppbVar32 + -0x48);
        plVar28[1] = lVar55;
        if ((long)(*ppppppplVar52)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar5 = ppppppplVar16[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          pppppplVar5 = ppppppplVar31[3];
          *ppppppplVar40 = *ppppppplVar52;
          ppppppplVar16[5] = pppppplVar5;
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar52 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar5;
        }
      }
      ppppppplVar22 = (long *******)ppppppplVar31[-2];
      ppppppplVar40 = (long *******)(*ppppppplVar31)[4];
      ppppppplVar29 = (long *******)ppppppplVar31[2][4];
      if ((long)ppppppplVar40 < (long)ppppppplVar22[4]) {
        if ((long)ppppppplVar29 < (long)ppppppplVar40) {
          pppppplVar5 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          *ppppppplVar26 = *ppppppplVar52;
          ppppppplVar31[-1] = ppppppplVar31[3];
        }
        else {
          pppppplVar5 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          *ppppppplVar26 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar5;
          ppppppplVar40 = (long *******)ppppppplVar31[2][4];
          if ((long)(*ppppppplVar31)[4] <= (long)ppppppplVar40) goto code_r0x003c5d66;
          pppppplVar5 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          *ppppppplVar31 = *ppppppplVar52;
          ppppppplVar31[1] = ppppppplVar31[3];
        }
        pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar52 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar5;
      }
      else if ((long)ppppppplVar29 < (long)ppppppplVar40) {
        pppppplVar5 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
        *ppppppplVar31 = *ppppppplVar52;
        ppppppplVar31[1] = ppppppplVar31[3];
        pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar52 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar5;
        ppppppplVar40 = (long *******)(*ppppppplVar31)[4];
        if ((long)ppppppplVar40 < (long)ppppppplVar31[-2][4]) {
          pppppplVar5 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar26;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
          *ppppppplVar26 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar5 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar5;
        }
      }
code_r0x003c5d66:
      pppppplVar5 = ppppppplVar16[1];
      *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
      *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
      pppppplVar5 = ppppppplVar31[1];
      *ppppppplVar16 = *ppppppplVar31;
      ppppppplVar16[1] = pppppplVar5;
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar31 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar31 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar31 + 0xc) = uVar9;
    }
code_r0x003c5d7e:
    ppppppplVar30 = (long *******)((long)ppppppplVar30 + -1);
    pppppplVar5 = *ppppppplVar16;
    if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
      ppppplVar27 = pppppplVar5[4];
      if ((long)ppppppplVar16[-2][4] < (long)ppppplVar27) goto code_r0x003c5db2;
      ppppppplVar31 = ppppppplVar16;
      if ((long)ppppplVar27 < (long)ppppppplVar53[-2][4]) {
        do {
          ppppppplVar26 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar26)[4] <= (long)ppppplVar27);
      }
      else {
        do {
          ppppppplVar31 = ppppppplVar31 + 2;
          if (ppppppplVar53 <= ppppppplVar31) break;
          ppppppplVar40 = (long *******)*ppppppplVar31;
        } while ((long)ppppppplVar40[4] <= (long)ppppplVar27);
      }
      ppppppplVar26 = ppppppplVar53;
      if (ppppppplVar31 < ppppppplVar53) {
        do {
          ppppppplVar40 = (long *******)ppppppplVar26[-2];
          ppppppplVar26 = ppppppplVar26 + -2;
        } while ((long)ppppplVar27 < (long)ppppppplVar40[4]);
      }
      pppppplVar20 = ppppppplVar16[1];
      while (ppppppplVar31 < ppppppplVar26) {
        pppppplVar10 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar10;
        pppppplVar10 = ppppppplVar26[1];
        *ppppppplVar31 = *ppppppplVar26;
        ppppppplVar31[1] = pppppplVar10;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar26 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar26 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar26 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar26 + 0xc) = uVar9;
        ppppppplVar40 = (long *******)pppppplVar5[4];
        do {
          ppppppplVar29 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar29)[4] <= (long)ppppppplVar40);
        do {
          ppppppplVar29 = (long *******)ppppppplVar26[-2];
          ppppppplVar26 = ppppppplVar26 + -2;
        } while ((long)ppppppplVar40 < (long)ppppppplVar29[4]);
      }
      if (ppppppplVar16 != ppppppplVar31 + -2) {
        uVar3 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
        uVar8 = *(undefined4 *)(ppppppplVar31 + -1);
        uVar9 = *(undefined4 *)((long)ppppppplVar31 + -4);
        *(undefined4 *)ppppppplVar16 = *(undefined4 *)(ppppppplVar31 + -2);
        *(undefined4 *)((long)ppppppplVar16 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0xc) = uVar9;
      }
      ppppppplVar31[-2] = pppppplVar5;
      ppppppplVar31[-1] = pppppplVar20;
      *(undefined4 *)((long)ppbVar32 + -0x4c) = 0;
      ppppppplVar16 = ppppppplVar31;
      goto code_r0x003c591e;
    }
    ppppplVar27 = pppppplVar5[4];
code_r0x003c5db2:
    pppppplVar20 = ppppppplVar16[1];
    lVar55 = 0;
    do {
      lVar46 = lVar55 + 0x10;
      lVar55 = lVar55 + 0x10;
    } while (*(long *)(*(long *)((long)ppppppplVar16 + lVar46) + 0x20) < (long)ppppplVar27);
    ppppppplVar29 = (long *******)(lVar55 + (long)ppppppplVar16);
    ppppppplVar26 = ppppppplVar53;
    if (lVar55 == 0x10) {
      ppppppplVar22 = (long *******)0x10;
      do {
        if (ppppppplVar26 <= ppppppplVar29) break;
        ppppppplVar22 = (long *******)ppppppplVar26[-2];
        ppppppplVar26 = ppppppplVar26 + -2;
      } while ((long)ppppplVar27 <= (long)ppppppplVar22[4]);
    }
    else {
      do {
        ppppppplVar22 = (long *******)ppppppplVar26[-2];
        ppppppplVar26 = ppppppplVar26 + -2;
      } while ((long)ppppplVar27 <= (long)ppppppplVar22[4]);
    }
    ppppppplVar40 = ppppppplVar26;
    ppppppplVar31 = ppppppplVar29;
    if (ppppppplVar29 < ppppppplVar26) {
      do {
        pppppplVar10 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar10;
        pppppplVar10 = ppppppplVar40[1];
        *ppppppplVar31 = *ppppppplVar40;
        ppppppplVar31[1] = pppppplVar10;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar9;
        ppppppplVar22 = (long *******)pppppplVar5[4];
        do {
          ppppppplVar52 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar52)[4] < (long)ppppppplVar22);
        do {
          ppppppplVar52 = ppppppplVar40 + -2;
          ppppppplVar40 = ppppppplVar40 + -2;
        } while ((long)ppppppplVar22 <= (long)(*ppppppplVar52)[4]);
      } while (ppppppplVar31 < ppppppplVar40);
    }
    ppppppplVar40 = ppppppplVar31 + -2;
    if (ppppppplVar16 != ppppppplVar40) {
      uVar3 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
      uVar8 = *(undefined4 *)(ppppppplVar31 + -1);
      uVar9 = *(undefined4 *)((long)ppppppplVar31 + -4);
      *(undefined4 *)ppppppplVar16 = *(undefined4 *)ppppppplVar40;
      *(undefined4 *)((long)ppppppplVar16 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar16 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar16 + 0xc) = uVar9;
    }
    *(long ********)((long)ppbVar32 + -0x68) = ppppppplVar16;
    ppppppplVar31[-2] = pppppplVar5;
    ppppppplVar31[-1] = pppppplVar20;
    if (ppppppplVar26 <= ppppppplVar29) goto code_r0x003c5e95;
    ppppppplVar26 = (long *******)(ulong)*(byte *)((long)ppbVar32 + -0x4c);
    ppppppplVar29 = *(long ********)((long)ppbVar32 + -0x68);
    puVar34 = (undefined8 *)((long)ppbVar32 + -0x80);
    ppbVar32 = (byte **)((long)ppbVar32 + -0x80);
    *puVar34 = &UNK_003c5ee7;
    ppuVar36 = (undefined **)puVar33;
    ppppppplVar52 = ppppppplVar30;
    ppppppplVar57 = ppppppplVar53;
  } while( true );
code_r0x003c5845:
  do {
    pppppplVar5 = *ppppppplVar40;
    pbVar45 = (byte *)((ulong)pppppplVar5[3] & 0xfffffffffffffffc);
    bVar24 = *pbVar45;
    if ((bVar24 & 1) == 0) {
      ppppppplVar26 = (long *******)(ulong)(bVar24 >> 1);
    }
    else {
      ppppppplVar26 = *(long ********)(pbVar45 + 8);
    }
    if (ppppppplVar26 == ppppppplVar29) {
      if ((bVar24 & 1) == 0) {
        pbVar45 = pbVar45 + 1;
      }
      else {
        pbVar45 = *(byte **)(pbVar45 + 0x10);
      }
      pbVar21 = pbStack_2b0;
      if (((ulong)ppppppplVar22 & 1) != 0) {
        pbVar21 = *(byte **)(pbStack_2a8 + 0x10);
      }
      puStack_2b8 = &UNK_003c5818;
      iVar13 = func_0x0099bf90(pbVar45,pbVar21);
      ppppppplVar22 = (long *******)(uStack_298 & 0xffffffff);
      ppppppplVar31 = ppppppplVar29;
      if (iVar13 == 0) {
        uStack_270 = ppppppplStack_290;
        puStack_2b8 = &UNK_003c563d;
        uStack_268 = pppppplVar5;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (ppppppplStack_2a0);
        ppppppplVar40 = ppppppplStack_288;
        ppppppplStack_250 = (long *******)ppppppplStack_288[1];
        ppppppplStack_248 = (long *******)&ppppppplStack_250;
        ppppppplVar26 = (long *******)&uStack_270;
        ppppppplStack_238 = ppppppplStack_288;
        ppppppplStack_240 = ppppppplVar26;
        if (ppppppplStack_250 < ppppppplStack_288[2]) {
          *(undefined4 *)ppppppplStack_250 = (undefined4)uStack_270;
          *(undefined4 *)((long)ppppppplStack_250 + 4) = uStack_270._4_4_;
          *(undefined4 *)(ppppppplStack_250 + 1) = (undefined4)uStack_268;
          *(undefined4 *)((long)ppppppplStack_250 + 0xc) = uStack_268._4_4_;
          ppppppplVar29 = ppppppplStack_250 + 2;
        }
        else {
          puStack_2b8 = &UNK_003c58bd;
          _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_248);
          ppppppplVar29 = ppppppplStack_250;
        }
        ppppppplVar40[1] = (long ******)ppppppplVar29;
        ppppppplVar57 = ppppppplStack_278;
        break;
      }
    }
    ppppppplVar40 = ppppppplVar40 + 1;
    ppppppplVar57 = ppppppplStack_278;
  } while (ppppppplVar40 != ppppppplVar16);
code_r0x003c5690:
  ppppppplVar49 = ppppppplVar49 + 1;
  if (ppppppplVar49 == ppppppplStack_280) goto code_r0x003c5568;
  goto code_r0x003c56a1;
code_r0x003c611e:
  do {
    ppppppplVar40 = ppppppplVar52;
    ppppppplVar29 = (long *******)*ppppppplVar49;
    pppppplVar5 = ppppppplVar49[2];
    ppppppplVar22 = (long *******)pppppplVar5[4];
    if ((long)ppppppplVar22 < (long)ppppppplVar29[4]) {
      pppppplVar20 = ppppppplVar49[3];
      lVar46 = lVar55;
      do {
        puVar1 = (undefined4 *)((long)ppppppplVar16 + lVar46 + -0x10);
        uVar3 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)((long)ppppppplVar16 + lVar46);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        ppppppplVar29 = ppppppplVar16;
        if (lVar46 == 0x10) goto code_r0x003c6103;
        ppppppplVar22 = (long *******)pppppplVar5[4];
        lVar41 = lVar46 + -0x20;
        lVar46 = lVar46 + -0x10;
      } while ((long)ppppppplVar22 < *(long *)(*(long *)((long)ppppppplVar16 + lVar41) + 0x20));
      ppppppplVar29 = (long *******)(lVar46 + (long)ppppppplVar16);
code_r0x003c6103:
      *ppppppplVar29 = pppppplVar5;
      ppppppplVar29[1] = pppppplVar20;
    }
    ppppppplVar52 = ppppppplVar40 + 2;
    lVar55 = lVar55 + 0x10;
    ppppppplVar49 = ppppppplVar40;
  } while (ppppppplVar52 != ppppppplVar53);
  goto code_r0x003c6596;
code_r0x003c6197:
  do {
    if (ppppppplVar40 <= ppppppplVar22) {
      ppppppplVar29 = (long *******)((long)ppppppplVar40 * 2 + 1);
      ppppppplVar49 = (long *******)((long)ppppppplVar40 * 2 + 2);
      if ((ppppppplVar49 < ppppppplVar26) &&
         ((long)ppppppplVar16[(long)ppppppplVar29 * 2][4] <
          (long)ppppppplVar16[(long)ppppppplVar49 * 2][4])) {
        ppppppplVar29 = ppppppplVar49;
      }
      pppppplVar5 = ppppppplVar16[(long)ppppppplVar40 * 2];
      if ((long)pppppplVar5[4] <= (long)ppppppplVar16[(long)ppppppplVar29 * 2][4]) {
        pppppplVar20 = ppppppplVar16[(long)ppppppplVar40 * 2 + 1];
        ppppppplVar49 = ppppppplVar40;
        do {
          ppppppplVar52 = ppppppplVar29;
          pppppplVar10 = (ppppppplVar16 + (long)ppppppplVar52 * 2)[1];
          ppppppplVar16[(long)ppppppplVar49 * 2] = ppppppplVar16[(long)ppppppplVar52 * 2];
          (ppppppplVar16 + (long)ppppppplVar49 * 2)[1] = pppppplVar10;
          if ((long)ppppppplVar22 < (long)ppppppplVar52) break;
          ppppppplVar31 = (long *******)((long)ppppppplVar52 * 2 + 1);
          ppppppplVar49 = (long *******)((long)ppppppplVar52 * 2 + 2);
          ppppppplVar29 = ppppppplVar31;
          if (((long)ppppppplVar49 < (long)ppppppplVar26) &&
             (ppppppplVar30 = (long *******)ppppppplVar16[(long)ppppppplVar49 * 2],
             ppppppplVar29 = ppppppplVar49,
             (long)ppppppplVar30[4] <= (long)ppppppplVar16[(long)ppppppplVar31 * 2][4])) {
            ppppppplVar29 = ppppppplVar31;
          }
          ppppppplVar31 = (long *******)ppppppplVar16[(long)ppppppplVar29 * 2][4];
          ppppppplVar49 = ppppppplVar52;
        } while ((long)pppppplVar5[4] <= (long)ppppppplVar31);
        ppppppplVar16[(long)ppppppplVar52 * 2] = pppppplVar5;
        (ppppppplVar16 + (long)ppppppplVar52 * 2)[1] = pppppplVar20;
      }
    }
    bVar58 = 0 < (long)ppppppplVar40;
    ppppppplVar40 = (long *******)((long)ppppppplVar40 + -1);
  } while (bVar58);
  do {
    pppppplVar5 = ppppppplVar16[1];
    *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar16;
    *(long *******)((long)ppbVar32 + -0x40) = pppppplVar5;
    ppppppplVar29 = (long *******)0x0;
    ppppppplVar40 = ppppppplVar16;
    do {
      ppppppplVar22 = (long *******)((long)ppppppplVar29 * 0x10);
      ppppppplVar57 = ppppppplVar40 + (long)ppppppplVar29 * 2 + 2;
      ppppppplVar49 = (long *******)((long)ppppppplVar29 * 2 + 1);
      ppppppplVar52 = (long *******)((long)ppppppplVar29 * 2 + 2);
      ppppppplVar29 = ppppppplVar49;
      if (((long)ppppppplVar52 < (long)ppppppplVar26) &&
         (ppppppplVar22 = (long *******)((long)ppppppplVar22 + (long)ppppppplVar40),
         (long)ppppppplVar22[2][4] < (long)ppppppplVar22[4][4])) {
        ppppppplVar57 = ppppppplVar22 + 4;
        ppppppplVar29 = ppppppplVar52;
        ppppppplVar22 = ppppppplVar57;
      }
      pppppplVar5 = ppppppplVar57[1];
      *ppppppplVar40 = *ppppppplVar57;
      ppppppplVar40[1] = pppppplVar5;
      ppppppplVar40 = ppppppplVar57;
    } while ((long)ppppppplVar29 <= (long)((long)ppppppplVar26 - 2U >> 1));
    ppppppplVar49 = ppppppplVar53 + -2;
    if (ppppppplVar57 == ppppppplVar49) {
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar57 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar57 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar57 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar57 + 0xc) = uVar9;
    }
    else {
      pppppplVar5 = ppppppplVar53[-1];
      *ppppppplVar57 = *ppppppplVar49;
      ppppppplVar57[1] = pppppplVar5;
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar53 + -0xc) = uVar3;
      *(undefined4 *)(ppppppplVar53 + -1) = uVar8;
      *(undefined4 *)((long)ppppppplVar53 + -4) = uVar9;
      lVar55 = (long)ppppppplVar57 + (0x10 - (long)ppppppplVar16) >> 4;
      if (1 < lVar55) {
        uVar25 = lVar55 - 2U >> 1;
        ppppppplVar22 = (long *******)(uVar25 * 0x10);
        ppppppplVar29 = (long *******)ppppppplVar16[uVar25 * 2][4];
        ppppppplVar40 = (long *******)*ppppppplVar57;
        if ((long)ppppppplVar29 < (long)ppppppplVar40[4]) {
          ppppppplVar29 = (long *******)ppppppplVar57[1];
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + (long)ppppppplVar16);
          do {
            ppppppplVar52 = ppppppplVar22;
            uVar3 = *(undefined4 *)((long)ppppppplVar52 + 4);
            uVar8 = *(undefined4 *)(ppppppplVar52 + 1);
            uVar9 = *(undefined4 *)((long)ppppppplVar52 + 0xc);
            *(undefined4 *)ppppppplVar57 = *(undefined4 *)ppppppplVar52;
            *(undefined4 *)((long)ppppppplVar57 + 4) = uVar3;
            *(undefined4 *)(ppppppplVar57 + 1) = uVar8;
            *(undefined4 *)((long)ppppppplVar57 + 0xc) = uVar9;
            ppppppplVar22 = ppppppplVar52;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1 >> 1;
            ppppppplVar22 = ppppppplVar16 + uVar25 * 2;
            ppppppplVar57 = ppppppplVar52;
          } while ((long)ppppppplVar16[uVar25 * 2][4] < (long)ppppppplVar40[4]);
          *ppppppplVar52 = (long ******)ppppppplVar40;
          ppppppplVar52[1] = (long ******)ppppppplVar29;
        }
      }
    }
    ppppppplVar52 = (long *******)((long)ppppppplVar26 + -1);
    bVar58 = 2 < (long)ppppppplVar26;
    ppppppplVar26 = ppppppplVar52;
    ppppppplVar53 = ppppppplVar49;
  } while (bVar58);
code_r0x003c6596:
  ppppppplVar53 = ppppppplVar30;
  if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar32 + -0x38)) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
code_r0x003c65b4:
  ppppppplVar49 = ppppppplVar22;
  ppppppplVar16 = ppppppplVar29;
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c65b9;
  func_0x0099bd00();
  ppppppplVar22 = extraout_RDX_03;
  ppbVar32 = (byte **)((long)ppbVar32 + -0x78);
  goto code_r0x003c65c0;
code_r0x003c5e95:
  *(long ********)((long)ppbVar32 + -0x70) = ppppppplVar30;
  ppppppplVar16 = *(long ********)((long)ppbVar32 + -0x68);
  puVar35 = (undefined1 *)((long)ppbVar32 + -0x80);
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c5eab;
code_r0x003c67a0:
  puVar37 = puVar35 + -8;
  *(undefined1 **)(puVar35 + -8) = puVar38;
  *(long ********)(puVar35 + -0x10) = ppppppplVar53;
  *(long ********)(puVar35 + -0x18) = ppppppplVar31;
  uVar43 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar35 + -0x20) = uVar43;
  uVar23 = (undefined7)((ulong)uVar43 >> 8);
  ppppppplVar22 = (long *******)CONCAT71(uVar23,1);
  switch((long)ppppppplVar40 - (long)ppppppplVar16 >> 4) {
  case 0:
  case 1:
    goto code_r0x003c6b3a;
  case 2:
    if ((long)ppppppplVar40[-2][4] < (long)(*ppppppplVar16)[4]) {
      pppppplVar5 = ppppppplVar16[1];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
      *(long *******)(puVar35 + -0x30) = pppppplVar5;
      pppppplVar5 = ppppppplVar40[-1];
      *ppppppplVar16 = ppppppplVar40[-2];
      ppppppplVar16[1] = pppppplVar5;
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)(ppppppplVar40 + -2) = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar3;
      *(undefined4 *)(ppppppplVar40 + -1) = uVar8;
      *(undefined4 *)((long)ppppppplVar40 + -4) = uVar9;
    }
    goto code_r0x003c6b3a;
  case 3:
    ppppppplVar31 = ppppppplVar16 + 2;
    ppppppplVar29 = ppppppplVar40 + -2;
    ppppplVar27 = ppppppplVar16[2][4];
    if ((long)ppppplVar27 < (long)(*ppppppplVar16)[4]) {
      if ((long)ppppppplVar40[-2][4] < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        pppppplVar5 = ppppppplVar40[-1];
        *ppppppplVar16 = *ppppppplVar29;
        ppppppplVar16[1] = pppppplVar5;
      }
      else {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar31;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)(puVar35 + -0x34);
        uVar8 = *(undefined4 *)(puVar35 + -0x30);
        uVar9 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
        if ((long)ppppppplVar16[2][4] <= (long)(*ppppppplVar29)[4]) goto code_r0x003c6b3a;
        pppppplVar5 = ppppppplVar16[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        pppppplVar5 = ppppppplVar40[-1];
        *ppppppplVar31 = *ppppppplVar29;
        ppppppplVar16[3] = pppppplVar5;
      }
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar3;
      *(undefined4 *)(ppppppplVar40 + -1) = uVar8;
      *(undefined4 *)((long)ppppppplVar40 + -4) = uVar9;
      goto code_r0x003c6b3a;
    }
    if ((long)ppppplVar27 <= (long)ppppppplVar40[-2][4]) goto code_r0x003c6b3a;
    break;
  case 4:
    ppppppplVar31 = ppppppplVar16 + 2;
    ppppppplVar29 = ppppppplVar16 + 4;
    ppppppplVar49 = ppppppplVar40 + -2;
    pppppplVar5 = *ppppppplVar16;
    ppppplVar27 = ppppppplVar16[2][4];
    pppppplVar20 = ppppppplVar16[4];
    ppppplVar6 = pppppplVar20[4];
    if ((long)ppppplVar27 < (long)pppppplVar5[4]) {
      if ((long)ppppplVar6 < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar29;
        ppppppplVar16[1] = ppppppplVar16[5];
      }
      else {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar31;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)(puVar35 + -0x34);
        uVar8 = *(undefined4 *)(puVar35 + -0x30);
        uVar9 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
        if ((long)ppppppplVar16[2][4] <= (long)pppppplVar20[4]) goto code_r0x003c6abf;
        pppppplVar5 = ppppppplVar16[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar31 = *ppppppplVar29;
        ppppppplVar16[3] = ppppppplVar16[5];
      }
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
      *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
      *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
    }
    else if ((long)ppppplVar6 < (long)ppppplVar27) {
      pppppplVar20 = ppppppplVar16[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
      *(long *******)(puVar35 + -0x30) = pppppplVar20;
      *ppppppplVar31 = *ppppppplVar29;
      ppppppplVar16[3] = ppppppplVar16[5];
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
      *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
      *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
      if ((long)(*ppppppplVar31)[4] < (long)pppppplVar5[4]) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar31;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)(puVar35 + -0x34);
        uVar8 = *(undefined4 *)(puVar35 + -0x30);
        uVar9 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
      }
    }
code_r0x003c6abf:
    if ((long)(*ppppppplVar29)[4] <= (long)(*ppppppplVar49)[4]) goto code_r0x003c6b3a;
    pppppplVar5 = ppppppplVar16[5];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar29;
    *(long *******)(puVar35 + -0x30) = pppppplVar5;
    pppppplVar5 = ppppppplVar40[-1];
    *ppppppplVar29 = *ppppppplVar49;
    ppppppplVar16[5] = pppppplVar5;
    uVar3 = *(undefined4 *)(puVar35 + -0x34);
    uVar8 = *(undefined4 *)(puVar35 + -0x30);
    uVar9 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar49 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar3;
    *(undefined4 *)(ppppppplVar40 + -1) = uVar8;
    *(undefined4 *)((long)ppppppplVar40 + -4) = uVar9;
    if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar29)[4]) goto code_r0x003c6b3a;
    break;
  case 5:
    ppppppplVar22 = ppppppplVar16 + 4;
    ppppppplVar52 = ppppppplVar16 + 6;
    ppppppplVar49 = ppppppplVar40 + -2;
    ppbVar32 = (byte **)(puVar35 + -0x40);
    *(undefined **)(puVar35 + -0x40) = &UNK_003c686a;
    ppppppplVar40 = ppppppplVar16 + 2;
code_r0x003c65c0:
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined1 **)((long)ppbVar32 + -8) = puVar37;
    puVar35 = (undefined1 *)((long)ppbVar32 + -0x28);
    *(undefined8 *)((long)ppbVar32 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppplVar27 = (*ppppppplVar40)[4];
    if ((long)ppppplVar27 < (long)(*ppppppplVar16)[4]) {
      if ((long)(*ppppppplVar22)[4] < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar22[1];
        *ppppppplVar16 = *ppppppplVar22;
        ppppppplVar16[1] = pppppplVar5;
      }
      else {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar40[1];
        *ppppppplVar16 = *ppppppplVar40;
        ppppppplVar16[1] = pppppplVar5;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar9;
        if ((long)(*ppppppplVar40)[4] <= (long)(*ppppppplVar22)[4]) goto code_r0x003c6677;
        pppppplVar5 = ppppppplVar40[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar22[1];
        *ppppppplVar40 = *ppppppplVar22;
        ppppppplVar40[1] = pppppplVar5;
      }
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar22 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar22 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar9;
    }
    else if ((long)(*ppppppplVar22)[4] < (long)ppppplVar27) {
      pppppplVar5 = ppppppplVar40[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
      pppppplVar5 = ppppppplVar22[1];
      *ppppppplVar40 = *ppppppplVar22;
      ppppppplVar40[1] = pppppplVar5;
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar22 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar22 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar9;
      if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar16)[4]) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar16;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar40[1];
        *ppppppplVar16 = *ppppppplVar40;
        ppppppplVar16[1] = pppppplVar5;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar9;
      }
    }
code_r0x003c6677:
    if ((long)(*ppppppplVar52)[4] < (long)(*ppppppplVar22)[4]) {
      pppppplVar5 = ppppppplVar22[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
      pppppplVar5 = ppppppplVar52[1];
      *ppppppplVar22 = *ppppppplVar52;
      ppppppplVar22[1] = pppppplVar5;
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar52 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar52 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar52 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar52 + 0xc) = uVar9;
      if ((long)(*ppppppplVar22)[4] < (long)(*ppppppplVar40)[4]) {
        pppppplVar5 = ppppppplVar40[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar22[1];
        *ppppppplVar40 = *ppppppplVar22;
        ppppppplVar40[1] = pppppplVar5;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar22 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar22 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar9;
        if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar16)[4]) {
          pppppplVar5 = ppppppplVar16[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar16;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
          pppppplVar5 = ppppppplVar40[1];
          *ppppppplVar16 = *ppppppplVar40;
          ppppppplVar16[1] = pppppplVar5;
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar40 + 4) = uVar3;
          *(undefined4 *)(ppppppplVar40 + 1) = uVar8;
          *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar9;
        }
      }
    }
    if ((long)(*ppppppplVar49)[4] < (long)(*ppppppplVar52)[4]) {
      pppppplVar5 = ppppppplVar52[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar52;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
      pppppplVar5 = ppppppplVar49[1];
      *ppppppplVar52 = *ppppppplVar49;
      ppppppplVar52[1] = pppppplVar5;
      uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar49 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar49 + 4) = uVar3;
      *(undefined4 *)(ppppppplVar49 + 1) = uVar8;
      *(undefined4 *)((long)ppppppplVar49 + 0xc) = uVar9;
      if ((long)(*ppppppplVar52)[4] < (long)(*ppppppplVar22)[4]) {
        pppppplVar5 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
        pppppplVar5 = ppppppplVar52[1];
        *ppppppplVar22 = *ppppppplVar52;
        ppppppplVar22[1] = pppppplVar5;
        uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar52 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar52 + 4) = uVar3;
        *(undefined4 *)(ppppppplVar52 + 1) = uVar8;
        *(undefined4 *)((long)ppppppplVar52 + 0xc) = uVar9;
        if ((long)(*ppppppplVar22)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar5 = ppppppplVar40[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
          pppppplVar5 = ppppppplVar22[1];
          *ppppppplVar40 = *ppppppplVar22;
          ppppppplVar40[1] = pppppplVar5;
          uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar22 + 4) = uVar3;
          *(undefined4 *)(ppppppplVar22 + 1) = uVar8;
          *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar9;
          if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar16)[4]) {
            pppppplVar5 = ppppppplVar16[1];
            *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar16;
            *(long *******)((long)ppbVar32 + -0x20) = pppppplVar5;
            pppppplVar5 = ppppppplVar40[1];
            *ppppppplVar16 = *ppppppplVar40;
            ppppppplVar16[1] = pppppplVar5;
            uVar3 = *(undefined4 *)((long)ppbVar32 + -0x24);
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x20);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x1c);
            *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
            *(undefined4 *)((long)ppppppplVar40 + 4) = uVar3;
            *(undefined4 *)(ppppppplVar40 + 1) = uVar8;
            *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar9;
          }
        }
      }
    }
    if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar32 + -0x10)) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
    *(undefined **)((long)ppbVar32 + -0x30) = &UNK_003c6793;
    func_0x0099bd00();
    goto code_r0x003c67a0;
  default:
    ppppppplVar31 = ppppppplVar16 + 4;
    ppppppplVar29 = ppppppplVar16 + 2;
    pppppplVar5 = *ppppppplVar16;
    ppppplVar27 = ppppppplVar16[2][4];
    pppppplVar20 = ppppppplVar16[4];
    ppppplVar6 = pppppplVar20[4];
    if ((long)ppppplVar27 < (long)pppppplVar5[4]) {
      if ((long)ppppplVar6 < (long)ppppplVar27) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar31;
        ppppppplVar16[1] = ppppppplVar16[5];
      }
      else {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar29;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)(puVar35 + -0x34);
        uVar8 = *(undefined4 *)(puVar35 + -0x30);
        uVar9 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
        if ((long)ppppppplVar16[2][4] <= (long)pppppplVar20[4]) goto code_r0x003c6a01;
        pppppplVar5 = ppppppplVar16[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar29;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar29 = *ppppppplVar31;
        ppppppplVar16[3] = ppppppplVar16[5];
      }
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
      *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
      *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
    }
    else if ((long)ppppplVar6 < (long)ppppplVar27) {
      pppppplVar20 = ppppppplVar16[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar29;
      *(long *******)(puVar35 + -0x30) = pppppplVar20;
      *ppppppplVar29 = *ppppppplVar31;
      ppppppplVar16[3] = ppppppplVar16[5];
      uVar3 = *(undefined4 *)(puVar35 + -0x34);
      uVar8 = *(undefined4 *)(puVar35 + -0x30);
      uVar9 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar16 + 0x24) = uVar3;
      *(undefined4 *)(ppppppplVar16 + 5) = uVar8;
      *(undefined4 *)((long)ppppppplVar16 + 0x2c) = uVar9;
      if ((long)(*ppppppplVar29)[4] < (long)pppppplVar5[4]) {
        pppppplVar5 = ppppppplVar16[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
        *(long *******)(puVar35 + -0x30) = pppppplVar5;
        *ppppppplVar16 = *ppppppplVar29;
        ppppppplVar16[1] = ppppppplVar16[3];
        uVar3 = *(undefined4 *)(puVar35 + -0x34);
        uVar8 = *(undefined4 *)(puVar35 + -0x30);
        uVar9 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
        *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
        *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
      }
    }
code_r0x003c6a01:
    if (ppppppplVar16 + 6 != ppppppplVar40) {
      iVar13 = 0;
      lVar55 = 0x30;
      ppppppplVar29 = ppppppplVar16 + 6;
      goto code_r0x003c6a49;
    }
    goto code_r0x003c6b3a;
  }
  ppppppplVar40 = ppppppplVar16 + 2;
  pppppplVar5 = ppppppplVar16[3];
  *(long *******)(puVar35 + -0x38) = *ppppppplVar40;
  *(long *******)(puVar35 + -0x30) = pppppplVar5;
  pppppplVar5 = ppppppplVar29[1];
  *ppppppplVar40 = *ppppppplVar29;
  ppppppplVar16[3] = pppppplVar5;
  uVar3 = *(undefined4 *)(puVar35 + -0x34);
  uVar8 = *(undefined4 *)(puVar35 + -0x30);
  uVar9 = *(undefined4 *)(puVar35 + -0x2c);
  *(undefined4 *)ppppppplVar29 = *(undefined4 *)(puVar35 + -0x38);
  *(undefined4 *)((long)ppppppplVar29 + 4) = uVar3;
  *(undefined4 *)(ppppppplVar29 + 1) = uVar8;
  *(undefined4 *)((long)ppppppplVar29 + 0xc) = uVar9;
  if ((long)ppppppplVar16[2][4] < (long)(*ppppppplVar16)[4]) {
    pppppplVar5 = ppppppplVar16[1];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar16;
    *(long *******)(puVar35 + -0x30) = pppppplVar5;
    *ppppppplVar16 = *ppppppplVar40;
    ppppppplVar16[1] = ppppppplVar16[3];
    uVar3 = *(undefined4 *)(puVar35 + -0x34);
    uVar8 = *(undefined4 *)(puVar35 + -0x30);
    uVar9 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar40 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar16 + 0x14) = uVar3;
    *(undefined4 *)(ppppppplVar16 + 3) = uVar8;
    *(undefined4 *)((long)ppppppplVar16 + 0x1c) = uVar9;
  }
  goto code_r0x003c6b3a;
code_r0x003c6a49:
  pppppplVar5 = *ppppppplVar29;
  if ((long)pppppplVar5[4] < (long)(*ppppppplVar31)[4]) {
    pppppplVar20 = ppppppplVar29[1];
    lVar46 = lVar55;
    do {
      puVar2 = (undefined4 *)((long)ppppppplVar16 + lVar46 + -0x10);
      uVar3 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar1 = (undefined4 *)((long)ppppppplVar16 + lVar46);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      ppppppplVar31 = ppppppplVar16;
      if (lVar46 == 0x10) goto code_r0x003c6a23;
      lVar41 = lVar46 + -0x20;
      lVar46 = lVar46 + -0x10;
    } while ((long)pppppplVar5[4] < *(long *)(*(long *)((long)ppppppplVar16 + lVar41) + 0x20));
    ppppppplVar31 = (long *******)(lVar46 + (long)ppppppplVar16);
code_r0x003c6a23:
    *ppppppplVar31 = pppppplVar5;
    ppppppplVar31[1] = pppppplVar20;
    iVar13 = iVar13 + 1;
    if (iVar13 == 8) {
      ppppppplVar22 = (long *******)CONCAT71(uVar23,ppppppplVar29 + 2 == ppppppplVar40);
      goto code_r0x003c6b3a;
    }
  }
  ppppppplVar49 = ppppppplVar29 + 2;
  lVar55 = lVar55 + 0x10;
  ppppppplVar31 = ppppppplVar29;
  ppppppplVar29 = ppppppplVar49;
  if (ppppppplVar49 == ppppppplVar40) {
code_r0x003c6b3a:
    if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(puVar35 + -0x20)) {
      *(undefined **)(puVar35 + -0x40) = &UNK_003c6b57;
      func_0x0099bd00();
      pcVar7 = (code *)swi(3);
      ppppppplVar16 = (long *******)(*pcVar7)();
      return ppppppplVar16;
    }
    return ppppppplVar22;
  }
  goto code_r0x003c6a49;
}


