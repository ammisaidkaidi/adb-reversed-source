// Function: _ZN20DeployPatchGenerator11CreatePatchEPKcN3com7android10fastdeploy11APKMetaDataEN7android4base11borrowed_fdE
// Address: 003c4980
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
_ZN20DeployPatchGenerator11CreatePatchEPKcN3com7android10fastdeploy11APKMetaDataEN7android4base11borrowed_fdE
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long ******pppppplVar3;
  long *****ppppplVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long ******pppppplVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ulong *puVar16;
  ulong uVar17;
  long ******pppppplVar18;
  byte *pbVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  undefined7 uVar23;
  long *******ppppppplVar22;
  byte bVar24;
  long *******ppppppplVar25;
  ulong uVar26;
  long *****ppppplVar27;
  long extraout_RDX;
  ulong extraout_RDX_00;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long *******extraout_RDX_01;
  long *******extraout_RDX_02;
  long lVar30;
  long *******ppppppplVar31;
  byte **ppbVar32;
  undefined8 *puVar34;
  undefined1 *puVar35;
  undefined **ppuVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  char *pcVar39;
  long *******ppppppplVar40;
  char *pcVar41;
  byte *pbVar42;
  long lVar43;
  long *******ppppppplVar44;
  long unaff_R13;
  long *******ppppppplVar45;
  long *******ppppppplVar46;
  long *******ppppppplVar47;
  long in_FS_OFFSET;
  bool bVar48;
  bool bVar49;
  float fVar50;
  undefined *puStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long *******ppppppplStack_228;
  ulong uStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  undefined *puStack_180;
  char *pcStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  double dStack_150;
  uint uStack_144;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long lStack_130;
  long ******pppppplStack_120;
  ulong uStack_118;
  long *******ppppppplStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  long *******ppppppplStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  undefined *apuStack_b0 [2];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  char acStack_68 [56];
  long lStack_30;
  undefined1 *puVar33;
  
  uVar17 = (ulong)param_4;
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_b0[0] = &UNK_003c49b0;
  _ZN10PatchUtils18GetHostAPKMetaDataEPKc(acStack_68);
  apuStack_b0[0] = &UNK_003c49c1;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(auStack_a0,0);
  if (auStack_a0 != param_3) {
    if ((uStack_98 & 1) != 0) {
      uStack_98 = *(ulong *)(uStack_98 & 0xfffffffffffffffe);
    }
    uVar20 = *(ulong *)(param_3 + 8);
    if ((uVar20 & 1) != 0) {
      uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    if (uStack_98 == uVar20) {
      apuStack_b0[0] = &UNK_003c49f5;
      _ZN3com7android10fastdeploy11APKMetaData12InternalSwapEPS2_(auStack_a0,param_3);
    }
    else {
      apuStack_b0[0] = &UNK_003c49ee;
      _ZN3com7android10fastdeploy11APKMetaData8CopyFromERKS2_();
    }
  }
  pcVar41 = acStack_68;
  apuStack_b0[0] = &UNK_003c4a09;
  pcVar39 = pcVar41;
  _ZN20DeployPatchGenerator11CreatePatchEN3com7android10fastdeploy11APKMetaDataES3_N7android4base11borrowed_fdE
            (param_1,pcVar41,auStack_a0);
  apuStack_b0[0] = &UNK_003c4a11;
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev(auStack_a0);
  apuStack_b0[0] = &UNK_003c4a19;
  _ZN3com7android10fastdeploy11APKMetaDataD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (long *******)CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  apuStack_b0[0] = &UNK_003c4a51;
  func_0x0099bd00();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_144 = param_4;
  uStack_d8 = uVar17;
  puStack_d0 = auStack_a0;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  if (*pcVar41 == '\x01') {
    puStack_158 = &UNK_003c4ab6;
    apuStack_b0[0] = &stack0xfffffffffffffff8;
    _ZN20DeployPatchGenerator3LogEPKcz();
    if (0 < *(int *)(extraout_RDX + 0x20)) {
      lVar30 = 8;
      unaff_R13 = 0;
      do {
        puVar14 = (undefined8 *)((*(ulong *)(extraout_RDX + 0x18) - 1) + lVar30);
        if ((*(ulong *)(extraout_RDX + 0x18) & 1) == 0) {
          puVar14 = (undefined8 *)(extraout_RDX + 0x18);
        }
        puStack_158 = &UNK_003c4aee;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (pcVar41,*puVar14);
        unaff_R13 = unaff_R13 + 1;
        lVar30 = lVar30 + 8;
      } while (unaff_R13 < *(int *)(extraout_RDX + 0x20));
    }
  }
  if (*pcVar41 == '\x01') {
    puStack_158 = &UNK_003c4b29;
    _ZN20DeployPatchGenerator3LogEPKcz();
    if (0 < *(int *)(pcVar39 + 0x20)) {
      lVar30 = 8;
      unaff_R13 = 0;
      do {
        pcVar15 = (char *)((*(ulong *)(pcVar39 + 0x18) - 1) + lVar30);
        if ((*(ulong *)(pcVar39 + 0x18) & 1) == 0) {
          pcVar15 = pcVar39 + 0x18;
        }
        puStack_158 = &UNK_003c4b5e;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (pcVar41,*(undefined8 *)pcVar15);
        unaff_R13 = unaff_R13 + 1;
        lVar30 = lVar30 + 8;
      } while (unaff_R13 < *(int *)(pcVar39 + 0x20));
    }
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  ppppppplStack_f0 = (long *******)0x0;
  puVar16 = (ulong *)(*(ulong *)(pcVar39 + 0x30) & 0xfffffffffffffffc);
  if ((*puVar16 & 1) == 0) {
    ppppppplStack_f0 = (long *******)puVar16[2];
    uStack_100 = *puVar16;
    uStack_f8 = puVar16[1];
  }
  else {
    puStack_158 = &UNK_003c4bac;
    func_0x00330340(&uStack_100,puVar16[2],puVar16[1]);
  }
  pppppplStack_120 = (long ******)0x0;
  uStack_118 = 0;
  ppppppplStack_110 = (long *******)0x0;
  puVar16 = (ulong *)(*(ulong *)(extraout_RDX + 0x30) & 0xfffffffffffffffc);
  if ((*puVar16 & 1) == 0) {
    ppppppplStack_110 = (long *******)puVar16[2];
    pppppplStack_120 = (long ******)*puVar16;
    uStack_118 = puVar16[1];
  }
  else {
    puStack_158 = &UNK_003c4bea;
    func_0x00330340(&pppppplStack_120,puVar16[2],puVar16[1]);
  }
  ppppppplStack_140 = (long *******)0x0;
  ppppppplStack_138 = (long *******)0x0;
  lStack_130 = 0;
  puStack_158 = &UNK_003c4c11;
  uVar17 = _ZN20DeployPatchGenerator21BuildIdenticalEntriesERNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKN3com7android10fastdeploy11APKMetaDataESC_
                     (pcVar41,&ppppppplStack_140,pcVar39);
  lVar30 = (long)ppppppplStack_138 - (long)ppppppplStack_140;
  if (lVar30 == 0) {
    lVar43 = 0;
    uVar26 = 0;
  }
  else {
    if (lVar30 == 0x10) {
      uVar26 = 0;
      uVar20 = 0;
      lVar43 = 0;
    }
    else {
      ppppppplVar22 = ppppppplStack_140 + 3;
      uVar26 = 0;
      uVar20 = 0;
      lVar43 = 0;
      do {
        if (ppppppplVar22[-2] != (long ******)0x0) {
          uVar26 = uVar26 + (long)ppppppplVar22[-3][5];
          lVar43 = lVar43 + 1;
        }
        if (*ppppppplVar22 != (long ******)0x0) {
          uVar26 = uVar26 + (long)ppppppplVar22[-1][5];
          lVar43 = lVar43 + 1;
        }
        uVar20 = uVar20 + 2;
        ppppppplVar22 = ppppppplVar22 + 4;
      } while ((lVar30 >> 4 & 0xfffffffffffffffeU) != uVar20);
      if ((lVar30 >> 4 & 1U) == 0) goto code_r0x003c4cb1;
    }
    if (ppppppplStack_140[uVar20 * 2 + 1] != (long ******)0x0) {
      uVar26 = uVar26 + (long)ppppppplStack_140[uVar20 * 2][5];
      lVar43 = lVar43 + 1;
    }
  }
code_r0x003c4cb1:
  dStack_150 = (double)(((float)uVar26 * 100.0) / (float)uVar17);
  ppppppplVar31 = (long *******)&stderr;
  puStack_158 = &UNK_003c4d2f;
  func_0x0099bd30(_stderr,&UNK_00162d78,lVar43);
  puStack_158 = &UNK_003c4d4e;
  func_0x0099bd30(SUB84(dStack_150,0),_stderr,&UNK_00165e38,uVar26,uVar17);
  ppppppplVar40 = (long *******)&ppppppplStack_140;
  ppppppplVar22 = &pppppplStack_120;
  ppppppplVar21 = (long *******)(ulong)uStack_144;
  puStack_158 = &UNK_003c4d69;
  _ZN20DeployPatchGenerator13GeneratePatchERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESE_N7android4base11borrowed_fdE
            ();
  ppppppplVar28 = ppppppplStack_140;
  if (ppppppplStack_140 != (long *******)0x0) {
    ppppppplStack_138 = ppppppplStack_140;
    ppppppplVar40 = (long *******)(lStack_130 - (long)ppppppplStack_140);
    puStack_158 = &UNK_003c4d88;
    _ZdaPvSt11align_val_t();
  }
  if (((ulong)pppppplStack_120 & 1) != 0) {
    ppppppplVar40 = (long *******)((ulong)pppppplStack_120 & 0xfffffffffffffffe);
    puStack_158 = &UNK_003c4d9f;
    ppppppplVar28 = ppppppplStack_110;
    _ZdaPvSt11align_val_t();
  }
  if ((uStack_100 & 1) != 0) {
    ppppppplVar40 = (long *******)(uStack_100 & 0xfffffffffffffffe);
    puStack_158 = &UNK_003c4db6;
    ppppppplVar28 = ppppppplStack_f0;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
    return (long *******)CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  puStack_158 = &UNK_003c4ddb;
  func_0x0099bd00();
  puStack_158 = (undefined *)apuStack_b0;
  uStack_160 = uVar26;
  puStack_180 = &stderr;
  ppbVar32 = &pbStack_238;
  lStack_188 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = *(int *)(extraout_RDX_00 + 0x20);
  if (*(int *)(ppppppplVar22 + 4) < *(int *)(extraout_RDX_00 + 0x20)) {
    iVar13 = *(int *)(ppppppplVar22 + 4);
  }
  ppppppplVar44 = (long *******)(long)iVar13;
  ppppppplVar45 = (long *******)*ppppppplVar40;
  ppppppplVar47 = (long *******)((long)ppppppplVar40[2] - (long)ppppppplVar45);
  ppppppplVar25 = (long *******)((long)ppppppplVar47 >> 4);
  ppppppplStack_228 = ppppppplVar28;
  uStack_220 = extraout_RDX_00;
  ppppppplStack_210 = ppppppplVar40;
  pcStack_178 = pcVar41;
  lStack_170 = unaff_R13;
  uStack_168 = uVar17;
  if (ppppppplVar25 < ppppppplVar44) {
    ppppppplStack_208 = ppppppplVar22;
    if (-1 < iVar13) {
      pppppplVar3 = ppppppplVar40[1];
      puStack_240 = &UNK_003c4e66;
      pppppplVar18 = (long ******)_Znwm((long)ppppppplVar44 * 0x10);
      ppppppplStack_200 =
           (long *******)((long)pppppplVar18 + ((long)pppppplVar3 - (long)ppppppplVar45));
      puStack_240 = &UNK_003c4e84;
      func_0x0099bda0(pppppplVar18,ppppppplVar45,(long)pppppplVar3 - (long)ppppppplVar45);
      ppppppplVar22 = ppppppplStack_208;
      *ppppppplStack_210 = pppppplVar18;
      ppppppplStack_210[1] = (long ******)ppppppplStack_200;
      ppppppplStack_210[2] = pppppplVar18 + (long)ppppppplVar44 * 2;
      if (ppppppplVar45 != (long *******)0x0) {
        puStack_240 = &UNK_003c4eb4;
        _ZdaPvSt11align_val_t(ppppppplVar45,ppppppplVar47);
      }
      goto code_r0x003c4eb4;
    }
  }
  else {
code_r0x003c4eb4:
    ppppppplStack_1a8 = (long *******)0x0;
    uStack_1a0 = 0;
    ppppppplStack_1b8 = (long *******)0x0;
    ppppppplStack_1b0 = (long *******)0x0;
    uStack_198 = 0x3f800000;
    ppppppplVar31 = (long *******)((long)ppppppplVar22[3] + 7);
    if (((ulong)ppppppplVar22[3] & 1) == 0) {
      ppppppplVar31 = ppppppplVar22 + 3;
    }
    if ((long)*(int *)(ppppppplVar22 + 4) != 0) {
      ppppppplStack_200 = ppppppplVar31 + *(int *)(ppppppplVar22 + 4);
      do {
        ppppppplVar22 = (long *******)*ppppppplVar31;
        ppppppplStack_1e8 = (long *******)0x0;
        ppppppplStack_1e0 = (long *******)0x0;
        pbVar19 = (byte *)((ulong)ppppppplVar22[3] & 0xfffffffffffffffc);
        bVar48 = (*pbVar19 & 1) != 0;
        pbVar42 = pbVar19 + 1;
        if (bVar48) {
          pbVar42 = *(byte **)(pbVar19 + 0x10);
        }
        uVar17 = (ulong)(*pbVar19 >> 1);
        if (bVar48) {
          uVar17 = *(ulong *)(pbVar19 + 8);
        }
        puStack_240 = &UNK_003c4f3e;
        func_0x0099c110(&ppppppplStack_1e8,pbVar42,uVar17,0x10);
        ppppppplVar44 = ppppppplStack_1b0;
        uVar17 = (long)ppppppplStack_1e8 + 0x9e3779b9;
        ppppppplVar45 =
             (long *******)
             ((long)ppppppplStack_1e0 + (uVar17 >> 2) + uVar17 * 0x40 + 0x9e3779b9 ^ uVar17);
        ppppppplStack_208 = ppppppplVar22;
        if (ppppppplStack_1b0 == (long *******)0x0) {
          ppppppplVar28 = (long *******)0x0;
        }
        else {
          uVar17 = (long)ppppppplStack_1b0 - 1;
          if (((ulong)ppppppplStack_1b0 & uVar17) == 0) {
            ppppppplVar28 = (long *******)((ulong)ppppppplVar45 & uVar17);
          }
          else {
            ppppppplVar28 = ppppppplVar45;
            if (ppppppplStack_1b0 <= ppppppplVar45) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar45 % (ulong)ppppppplStack_1b0);
            }
          }
          if (ppppppplStack_1b8[(long)ppppppplVar28] != (long ******)0x0) {
            for (ppppppplVar22 = (long *******)*ppppppplStack_1b8[(long)ppppppplVar28];
                ppppppplVar22 != (long *******)0x0; ppppppplVar22 = (long *******)*ppppppplVar22) {
              ppppppplVar40 = (long *******)ppppppplVar22[1];
              if (ppppppplVar40 == ppppppplVar45) {
                if (((long *******)ppppppplVar22[2] == ppppppplStack_1e8) &&
                   ((long *******)ppppppplVar22[3] == ppppppplStack_1e0)) goto code_r0x003c54cc;
              }
              else {
                if (((ulong)ppppppplStack_1b0 & uVar17) == 0) {
                  ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & uVar17);
                }
                else if (ppppppplStack_1b0 <= ppppppplVar40) {
                  if (((ulong)ppppppplVar40 | (ulong)ppppppplStack_1b0) >> 0x20 == 0) {
                    ppppppplVar40 =
                         (long *******)
                         (((ulong)ppppppplVar40 & 0xffffffff) %
                         ((ulong)ppppppplStack_1b0 & 0xffffffff));
                  }
                  else {
                    ppppppplVar40 = (long *******)((ulong)ppppppplVar40 % (ulong)ppppppplStack_1b0);
                  }
                }
                if (ppppppplVar40 != ppppppplVar28) break;
              }
            }
          }
        }
        puStack_240 = &UNK_003c502a;
        ppppppplVar40 = ppppppplStack_1e0;
        ppppppplVar22 = (long *******)_Znwm(0x38);
        *ppppppplVar22 = (long ******)0x0;
        ppppppplVar22[1] = (long ******)ppppppplVar45;
        ppppppplVar22[2] = (long ******)ppppppplStack_1e8;
        ppppppplVar22[3] = (long ******)ppppppplStack_1e0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        if ((float)ppppppplVar44 * (float)uStack_198 < (float)(uStack_1a0 + 1)) {
          uVar17 = 1;
          if ((long *******)0x2 < ppppppplVar44) {
            uVar17 = (ulong)(((ulong)ppppppplVar44 & (long)ppppppplVar44 - 1U) != 0);
          }
          ppppppplVar28 = (long *******)((long)ppppppplVar44 * 2 | uVar17);
          puStack_240 = &UNK_003c50f3;
          ppppppplStack_218 = ppppppplVar31;
          fVar50 = (float)func_0x009992a0((float)(uStack_1a0 + 1) / (float)uStack_198);
          ppppppplVar25 = (long *******)((long)fVar50 >> 0x3f);
          ppppppplVar31 =
               (long *******)((long)(fVar50 - 9.223372e+18) & (ulong)ppppppplVar25 | (long)fVar50);
          if (ppppppplVar31 < ppppppplVar28) {
            ppppppplVar31 = ppppppplVar28;
          }
          ppppppplVar47 = (long *******)0x2;
          ppppppplVar28 = ppppppplVar31;
          if (ppppppplVar31 == (long *******)0x1) {
code_r0x003c5139:
            ppppppplVar31 = ppppppplVar47;
            bVar48 = ppppppplVar31 < ppppppplVar44;
            ppppppplVar47 = ppppppplVar31;
            if (ppppppplVar44 < ppppppplVar31) goto code_r0x003c5141;
code_r0x003c51b0:
            if (bVar48) {
              puStack_240 = &UNK_003c52c5;
              fVar50 = (float)func_0x009992a0((float)uStack_1a0 / (float)uStack_198);
              ppppppplVar25 = (long *******)((long)fVar50 >> 0x3f);
              ppppppplVar29 =
                   (long *******)
                   ((long)(fVar50 - 9.223372e+18) & (ulong)ppppppplVar25 | (long)fVar50);
              if ((ppppppplVar44 < (long *******)0x3) ||
                 (((long)ppppppplVar44 - 1U & (ulong)ppppppplVar44) != 0)) {
                puStack_240 = &UNK_003c531e;
                ppppppplVar47 = (long *******)_ZNSt3__112__next_primeEm();
                ppppppplVar28 = ppppppplVar29;
              }
              else {
                ppppppplVar47 = ppppppplVar29;
                if ((long *******)0x1 < ppppppplVar29) {
                  lVar30 = 0x3f;
                  if ((long)ppppppplVar29 - 1U != 0) {
                    for (; (long)ppppppplVar29 - 1U >> lVar30 == 0; lVar30 = lVar30 + -1) {
                    }
                  }
                  bVar24 = -((byte)lVar30 ^ 0x3f);
                  ppppppplVar25 = (long *******)(ulong)CONCAT31((int3)((ulong)lVar30 >> 8),bVar24);
                  ppppppplVar47 = (long *******)(1L << (bVar24 & 0x3f));
                }
              }
              if (ppppppplVar47 < ppppppplVar31) {
                ppppppplVar47 = ppppppplVar31;
              }
              if (ppppppplVar44 <= ppppppplVar47) goto code_r0x003c5400;
              if (ppppppplVar47 != (long *******)0x0) goto code_r0x003c5141;
              bVar48 = true;
              ppppppplVar47 = (long *******)0x0;
              ppppppplVar40 = (long *******)0x0;
              goto code_r0x003c5167;
            }
          }
          else {
            if (((ulong)ppppppplVar31 & (long)ppppppplVar31 - 1U) != 0) {
              puStack_240 = &UNK_003c5132;
              ppppppplVar47 = (long *******)_ZNSt3__112__next_primeEm();
              ppppppplVar28 = ppppppplVar31;
              ppppppplVar44 = ppppppplStack_1b0;
              goto code_r0x003c5139;
            }
            bVar48 = ppppppplVar31 < ppppppplVar44;
            ppppppplVar47 = ppppppplVar31;
            if (ppppppplVar31 <= ppppppplVar44) goto code_r0x003c51b0;
code_r0x003c5141:
            if ((long *******)0x1fffffffffffffff < ppppppplVar47) {
              puStack_240 = &UNK_003c58cb;
              func_0x0032fc40();
              goto code_r0x003c58cb;
            }
            puStack_240 = &UNK_003c5165;
            ppppppplVar40 = (long *******)_Znwm((long)ppppppplVar47 * 8);
            bVar48 = false;
code_r0x003c5167:
            ppppppplVar31 = ppppppplStack_1b8;
            bVar49 = ppppppplStack_1b8 != (long *******)0x0;
            ppppppplStack_1b8 = ppppppplVar40;
            if (bVar49) {
              puStack_240 = &UNK_003c5181;
              _ZdaPvSt11align_val_t(ppppppplVar31,(long)ppppppplStack_1b0 << 3);
            }
            ppppppplStack_1b0 = ppppppplVar47;
            if (!bVar48) {
              uVar17 = (long)ppppppplVar47 - 1;
              uVar20 = (ulong)((uint)ppppppplVar47 & 3);
              if (2 < uVar17) {
                uVar26 = 0;
                do {
                  ppppppplStack_1b8[uVar26] = (long ******)0x0;
                  ppppppplStack_1b8[uVar26 + 1] = (long ******)0x0;
                  ppppppplStack_1b8[uVar26 + 2] = (long ******)0x0;
                  ppppppplStack_1b8[uVar26 + 3] = (long ******)0x0;
                  uVar26 = uVar26 + 4;
                  if (((ulong)ppppppplVar47 & 0x1ffffffffffffffc) == uVar26)
                  goto joined_r0x003c522f;
                } while( true );
              }
              uVar26 = 0;
              do {
                ppppppplStack_1b8[uVar26] = (long ******)0x0;
                uVar26 = uVar26 + 1;
                uVar20 = uVar20 - 1;
joined_r0x003c522f:
              } while (uVar20 != 0);
              if (ppppppplStack_1a8 != (long *******)0x0) {
                ppppppplVar40 = (long *******)ppppppplStack_1a8[1];
                if (((ulong)ppppppplVar47 & uVar17) == 0) {
                  ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & uVar17);
                }
                else if (ppppppplVar47 <= ppppppplVar40) {
                  if (((ulong)ppppppplVar40 | (ulong)ppppppplVar47) >> 0x20 == 0) {
                    ppppppplVar40 =
                         (long *******)
                         (((ulong)ppppppplVar40 & 0xffffffff) % ((ulong)ppppppplVar47 & 0xffffffff))
                    ;
                  }
                  else {
                    ppppppplVar40 = (long *******)((ulong)ppppppplVar40 % (ulong)ppppppplVar47);
                  }
                }
                ppppppplStack_1b8[(long)ppppppplVar40] = (long ******)&ppppppplStack_1a8;
                ppppppplVar31 = (long *******)*ppppppplStack_1a8;
                ppppppplVar28 = ppppppplStack_1a8;
                while (ppppppplVar21 = (long *******)0x0, ppppppplVar31 != (long *******)0x0) {
                  ppppppplVar21 = (long *******)ppppppplVar31[1];
                  if (((ulong)ppppppplVar47 & uVar17) == 0) {
                    ppppppplVar21 = (long *******)((ulong)ppppppplVar21 & uVar17);
                  }
                  else if (ppppppplVar47 <= ppppppplVar21) {
                    if (((ulong)ppppppplVar21 | (ulong)ppppppplVar47) >> 0x20 == 0) {
                      ppppppplVar21 =
                           (long *******)
                           (((ulong)ppppppplVar21 & 0xffffffff) %
                           ((ulong)ppppppplVar47 & 0xffffffff));
                    }
                    else {
                      ppppppplVar21 = (long *******)((ulong)ppppppplVar21 % (ulong)ppppppplVar47);
                    }
                  }
                  if (ppppppplVar21 != ppppppplVar40) {
                    if (ppppppplStack_1b8[(long)ppppppplVar21] == (long ******)0x0) {
                      ppppppplStack_1b8[(long)ppppppplVar21] = (long ******)ppppppplVar28;
                      ppppppplVar40 = ppppppplVar21;
                    }
                    else {
                      *ppppppplVar28 = *ppppppplVar31;
                      *ppppppplVar31 = (long ******)*ppppppplStack_1b8[(long)ppppppplVar21];
                      *ppppppplStack_1b8[(long)ppppppplVar21] = (long *****)ppppppplVar31;
                      ppppppplVar31 = ppppppplVar28;
                    }
                  }
                  ppppppplVar28 = ppppppplVar31;
                  ppppppplVar31 = (long *******)*ppppppplVar28;
                }
              }
            }
          }
code_r0x003c5400:
          ppppppplVar44 = ppppppplStack_1b0;
          ppppppplVar31 = ppppppplStack_218;
          if (((ulong)ppppppplStack_1b0 & (long)ppppppplStack_1b0 - 1U) == 0) {
            ppppppplVar28 = (long *******)((long)ppppppplStack_1b0 - 1U & (ulong)ppppppplVar45);
          }
          else {
            ppppppplVar28 = ppppppplVar45;
            if (ppppppplStack_1b0 <= ppppppplVar45) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar45 % (ulong)ppppppplStack_1b0);
            }
          }
        }
        pppppplVar3 = ppppppplStack_1b8[(long)ppppppplVar28];
        if (pppppplVar3 == (long ******)0x0) {
          *ppppppplVar22 = (long ******)ppppppplStack_1a8;
          ppppppplStack_1b8[(long)ppppppplVar28] = (long ******)&ppppppplStack_1a8;
          ppppppplVar40 = ppppppplVar22;
          if (ppppppplStack_1a8 != (long *******)0x0) {
            ppppppplVar28 = (long *******)ppppppplStack_1a8[1];
            if (((ulong)ppppppplVar44 & (long)ppppppplVar44 - 1U) == 0) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & (long)ppppppplVar44 - 1U);
            }
            else if (ppppppplVar44 <= ppppppplVar28) {
              if (((ulong)ppppppplVar28 | (ulong)ppppppplVar44) >> 0x20 == 0) {
                ppppppplVar28 =
                     (long *******)
                     (((ulong)ppppppplVar28 & 0xffffffff) % ((ulong)ppppppplVar44 & 0xffffffff));
              }
              else {
                ppppppplVar28 = (long *******)((ulong)ppppppplVar28 % (ulong)ppppppplVar44);
              }
            }
            ppppppplStack_1b8[(long)ppppppplVar28] = (long ******)ppppppplVar22;
          }
        }
        else {
          *ppppppplVar22 = (long ******)*pppppplVar3;
          *pppppplVar3 = (long *****)ppppppplVar22;
          ppppppplVar40 = ppppppplStack_1a8;
        }
        ppppppplStack_1a8 = ppppppplVar40;
        uStack_1a0 = uStack_1a0 + 1;
code_r0x003c54cc:
        uStack_1f8 = (long *******)ppppppplVar22[5];
        ppppppplStack_1c0 = ppppppplVar22 + 4;
        ppppppplStack_1d0 = (long *******)&uStack_1f8;
        ppppppplStack_1c8 = (long *******)&ppppppplStack_1d8;
        ppppppplStack_1d8 = ppppppplStack_208;
        if (uStack_1f8 < ppppppplVar22[6]) {
          *uStack_1f8 = (long ******)ppppppplStack_208;
          ppppppplVar40 = uStack_1f8 + 1;
        }
        else {
          puStack_240 = &UNK_003c5523;
          _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_1d0);
          ppppppplVar40 = uStack_1f8;
        }
        ppppppplVar22[5] = (long ******)ppppppplVar40;
        ppppppplVar31 = ppppppplVar31 + 1;
      } while (ppppppplVar31 != ppppppplStack_200);
    }
    ppppppplVar25 = *(long ********)(uStack_220 + 0x18);
    ppppppplVar44 = (long *******)((long)ppppppplVar25 + 7);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      ppppppplVar44 = (long *******)(uStack_220 + 0x18);
    }
    if ((long)*(int *)(uStack_220 + 0x20) != 0) {
      ppppppplStack_208 = ppppppplVar44 + *(int *)(uStack_220 + 0x20);
      ppppppplVar47 = (long *******)0x0;
code_r0x003c56a1:
      ppppppplVar31 = (long *******)*ppppppplVar44;
      ppppppplVar47 = (long *******)((long)ppppppplVar47 + (long)ppppppplVar31[5]);
      ppppppplStack_1e8 = (long *******)0x0;
      ppppppplStack_1e0 = (long *******)0x0;
      pbVar19 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
      bVar48 = (*pbVar19 & 1) != 0;
      pbVar42 = pbVar19 + 1;
      if (bVar48) {
        pbVar42 = *(byte **)(pbVar19 + 0x10);
      }
      uVar17 = (ulong)(*pbVar19 >> 1);
      if (bVar48) {
        uVar17 = *(ulong *)(pbVar19 + 8);
      }
      ppppppplVar25 = (long *******)0x10;
      puStack_240 = &UNK_003c56e4;
      func_0x0099c110(&ppppppplStack_1e8,pbVar42,uVar17);
      if ((ppppppplStack_1b0 != (long *******)0x0) && (uStack_1a0 != 0)) {
        uVar17 = (long)ppppppplStack_1e8 + 0x9e3779b9;
        ppppppplVar25 =
             (long *******)
             ((long)ppppppplStack_1e0 + (uVar17 >> 2) + uVar17 * 0x40 + 0x9e3779b9 ^ uVar17);
        uVar17 = (long)ppppppplStack_1b0 - 1;
        if (((ulong)ppppppplStack_1b0 & uVar17) == 0) {
          ppppppplVar40 = (long *******)((ulong)ppppppplVar25 & uVar17);
        }
        else {
          ppppppplVar40 = ppppppplVar25;
          if (ppppppplStack_1b0 <= ppppppplVar25) {
            ppppppplVar40 = (long *******)((ulong)ppppppplVar25 % (ulong)ppppppplStack_1b0);
          }
        }
        ppppppplVar21 = ppppppplStack_1e8;
        if (ppppppplStack_1b8[(long)ppppppplVar40] != (long ******)0x0) {
          for (ppppplVar27 = *ppppppplStack_1b8[(long)ppppppplVar40]; ppppplVar27 != (long *****)0x0
              ; ppppplVar27 = (long *****)*ppppplVar27) {
            ppppppplVar28 = (long *******)ppppplVar27[1];
            if (ppppppplVar28 == ppppppplVar25) {
              if (((long *******)ppppplVar27[2] == ppppppplStack_1e8) &&
                 ((long *******)ppppplVar27[3] == ppppppplStack_1e0)) {
                ppppppplVar40 = (long *******)ppppplVar27[4];
                ppppppplVar22 = (long *******)ppppplVar27[5];
                if (ppppppplVar40 != ppppppplVar22) {
                  pbStack_230 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
                  bVar24 = *pbStack_230;
                  ppppppplVar21 = (long *******)(ulong)bVar24;
                  if ((bVar24 & 1) == 0) {
                    ppppppplVar28 = (long *******)(ulong)(bVar24 >> 1);
                  }
                  else {
                    ppppppplVar28 = *(long ********)(pbStack_230 + 8);
                  }
                  pbStack_238 = pbStack_230 + 1;
                  uStack_220 = CONCAT44(uStack_220._4_4_,(uint)bVar24);
                  ppppppplStack_218 = ppppppplVar31;
                  ppppppplStack_200 = ppppppplVar47;
                  goto code_r0x003c5845;
                }
                break;
              }
            }
            else {
              if (((ulong)ppppppplStack_1b0 & uVar17) == 0) {
                ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & uVar17);
              }
              else if (ppppppplStack_1b0 <= ppppppplVar28) {
                if (((ulong)ppppppplVar28 | (ulong)ppppppplStack_1b0) >> 0x20 == 0) {
                  ppppppplVar28 =
                       (long *******)
                       (((ulong)ppppppplVar28 & 0xffffffff) %
                       ((ulong)ppppppplStack_1b0 & 0xffffffff));
                }
                else {
                  ppppppplVar28 = (long *******)((ulong)ppppppplVar28 % (ulong)ppppppplStack_1b0);
                }
              }
              if (ppppppplVar28 != ppppppplVar40) break;
            }
          }
        }
      }
      goto code_r0x003c5690;
    }
    ppppppplVar47 = (long *******)0x0;
code_r0x003c5568:
    ppppppplVar28 = (long *******)*ppppppplStack_210;
    ppppppplVar40 = (long *******)ppppppplStack_210[1];
    ppppppplVar45 = ppppppplVar47;
    ppppppplVar29 = ppppppplStack_1a8;
    if (ppppppplVar28 != ppppppplVar40) {
      uVar17 = (long)ppppppplVar40 - (long)ppppppplVar28 >> 4;
      lVar30 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      ppppppplVar29 = (long *******)((ulong)(((uint)lVar30 ^ 0x3f) * 2) ^ 0x7e);
      ppppppplVar25 = (long *******)0x1;
      ppbVar32 = &puStack_240;
      puStack_240 = &UNK_003c559f;
      ppuVar36 = &puStack_158;
      goto code_r0x003c58e0;
    }
    while (ppppppplVar28 = ppppppplStack_1b8, ppppppplVar29 != (long *******)0x0) {
      ppppppplVar45 = (long *******)*ppppppplVar29;
      pppppplVar3 = ppppppplVar29[4];
      ppppppplStack_1b8 = ppppppplVar28;
      if (pppppplVar3 != (long ******)0x0) {
        ppppppplVar29[5] = pppppplVar3;
        puStack_240 = &UNK_003c5621;
        _ZdaPvSt11align_val_t(pppppplVar3,(long)ppppppplVar29[6] - (long)pppppplVar3);
      }
      ppppppplVar40 = (long *******)0x38;
      puStack_240 = &UNK_003c55fd;
      _ZdaPvSt11align_val_t(ppppppplVar29);
      ppppppplVar29 = ppppppplVar45;
    }
    ppppppplStack_1b8 = (long *******)0x0;
    if (ppppppplVar28 != (long *******)0x0) {
      ppppppplVar40 = (long *******)((long)ppppppplStack_1b0 << 3);
      puStack_240 = &UNK_003c55c6;
      _ZdaPvSt11align_val_t();
    }
    ppppppplVar31 = (long *******)0x0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_188) {
      return ppppppplVar47;
    }
code_r0x003c58cb:
    puStack_240 = &UNK_003c58d0;
    func_0x0099bd00();
  }
  puStack_240 = &UNK_003c58d5;
  func_0x00330ca0();
  ppppppplVar29 = extraout_RDX_01;
  ppuVar36 = &puStack_158;
code_r0x003c58e0:
  do {
    ppppppplVar46 = ppppppplVar40;
    puVar37 = (undefined1 *)((long)ppbVar32 + -8);
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    puVar33 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined ***)((long)ppbVar32 + -8) = ppuVar36;
    *(long ********)((long)ppbVar32 + -0x10) = ppppppplVar47;
    *(long ********)((long)ppbVar32 + -0x18) = ppppppplVar45;
    *(long ********)((long)ppbVar32 + -0x20) = ppppppplVar22;
    *(long ********)((long)ppbVar32 + -0x28) = ppppppplVar44;
    *(long ********)((long)ppbVar32 + -0x30) = ppppppplVar31;
    *(int *)((long)ppbVar32 + -0x4c) = (int)ppppppplVar25;
    *(undefined8 *)((long)ppbVar32 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppppplVar44 = ppppppplVar46 + -2;
    *(long ********)((long)ppbVar32 + -0x60) = ppppppplVar46 + -4;
    *(long ********)((long)ppbVar32 + -0x58) = ppppppplVar46 + -6;
    ppppppplVar22 = ppppppplVar28;
    ppppppplVar40 = ppppppplVar46;
code_r0x003c591e:
    ppppppplVar25 = (long *******)((long)ppppppplVar46 - (long)ppppppplVar22 >> 4);
    ppppppplVar31 = ppppppplVar22;
    if (ppppppplVar25 < (long *******)0x6) {
      ppppppplVar45 =
           (long *******)(&UNK_001fdcb4 + *(int *)(&UNK_001fdcb4 + (long)ppppppplVar25 * 4));
      switch(ppppppplVar25) {
      default:
        goto code_r0x003c6596;
      case (long *******)0x2:
        ppppppplVar45 = (long *******)*ppppppplVar22;
        if ((long)ppppppplVar45[4] <= (long)ppppppplVar46[-2][4]) goto code_r0x003c6596;
code_r0x003c6030:
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar46[-1];
        *ppppppplVar22 = *ppppppplVar44;
        ppppppplVar22[1] = pppppplVar3;
        break;
      case (long *******)0x3:
        ppppppplVar25 = ppppppplVar22 + 2;
        ppppppplVar40 = (long *******)*ppppppplVar22;
        ppppppplVar45 = (long *******)ppppppplVar22[2][4];
        if ((long)ppppppplVar40[4] <= (long)ppppppplVar45) {
          if ((long)ppppppplVar46[-2][4] < (long)ppppppplVar45) {
            pppppplVar3 = ppppppplVar22[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            pppppplVar3 = ppppppplVar46[-1];
            *ppppppplVar25 = *ppppppplVar44;
            ppppppplVar22[3] = pppppplVar3;
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
            *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
            *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
            goto code_r0x003c656c;
          }
          goto code_r0x003c6596;
        }
        if ((long)ppppppplVar46[-2][4] < (long)ppppppplVar45) goto code_r0x003c6030;
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar25;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar25 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
        ppppppplVar45 = (long *******)(*ppppppplVar44)[4];
        if ((long)ppppppplVar22[2][4] <= (long)ppppppplVar45) goto code_r0x003c6596;
        pppppplVar3 = ppppppplVar22[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar46[-1];
        *ppppppplVar25 = *ppppppplVar44;
        ppppppplVar22[3] = pppppplVar3;
        break;
      case (long *******)0x4:
        ppppppplVar25 = ppppppplVar22 + 2;
        ppppppplVar45 = ppppppplVar22 + 4;
        ppppppplVar21 = (long *******)*ppppppplVar22;
        ppppplVar27 = ppppppplVar22[2][4];
        pppppplVar3 = ppppppplVar22[4];
        ppppppplVar28 = (long *******)pppppplVar3[4];
        if ((long)ppppplVar27 < (long)ppppppplVar21[4]) {
          if ((long)ppppppplVar28 < (long)ppppplVar27) {
            pppppplVar3 = ppppppplVar22[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar22 = *ppppppplVar45;
            ppppppplVar22[1] = ppppppplVar22[5];
          }
          else {
            pppppplVar18 = ppppppplVar22[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar18;
            *ppppppplVar22 = *ppppppplVar25;
            ppppppplVar22[1] = ppppppplVar22[3];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar25 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
            *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
            *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
            if ((long)ppppppplVar22[2][4] <= (long)pppppplVar3[4]) goto code_r0x003c651f;
            pppppplVar3 = ppppppplVar22[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar25 = *ppppppplVar45;
            ppppppplVar22[3] = ppppppplVar22[5];
          }
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar45 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
          *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
          *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
        }
        else if ((long)ppppppplVar28 < (long)ppppplVar27) {
          pppppplVar3 = ppppppplVar22[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar25 = *ppppppplVar45;
          ppppppplVar22[3] = ppppppplVar22[5];
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar45 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
          *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
          *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
          if ((long)ppppppplVar22[2][4] < (long)(*ppppppplVar22)[4]) {
            pppppplVar3 = ppppppplVar22[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar22 = *ppppppplVar25;
            ppppppplVar22[1] = ppppppplVar22[3];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar25 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
            *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
            *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
          }
        }
code_r0x003c651f:
        ppppppplVar40 = (long *******)*ppppppplVar45;
        if ((long)(*ppppppplVar44)[4] < (long)ppppppplVar40[4]) {
          pppppplVar3 = ppppppplVar22[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar45;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar46[-1];
          *ppppppplVar45 = *ppppppplVar44;
          ppppppplVar22[5] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
          *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
          *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
          ppppppplVar40 = (long *******)*ppppppplVar25;
          if ((long)(*ppppppplVar45)[4] < (long)ppppppplVar40[4]) {
            pppppplVar3 = ppppppplVar22[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar25 = *ppppppplVar45;
            ppppppplVar22[3] = ppppppplVar22[5];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar45 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
            *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
            *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
code_r0x003c656c:
            ppppppplVar45 = (long *******)*ppppppplVar22;
            ppppppplVar44 = ppppppplVar22 + 2;
            if ((long)(*ppppppplVar44)[4] < (long)ppppppplVar45[4]) {
              pppppplVar3 = ppppppplVar22[1];
              *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
              *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
              *ppppppplVar22 = *ppppppplVar44;
              ppppppplVar22[1] = ppppppplVar22[3];
              uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
              uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
              uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
              *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
              *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
              *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
              *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
            }
          }
        }
        goto code_r0x003c6596;
      case (long *******)0x5:
        ppppppplVar46 = ppppppplVar29;
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar32 + -0x38)) {
          ppppppplVar40 = ppppppplVar22 + 2;
          ppppppplVar21 = ppppppplVar22 + 4;
          ppppppplVar45 = ppppppplVar22 + 6;
          ppppppplVar31 = *(long ********)((long)ppbVar32 + -0x30);
          ppppppplVar46 = *(long ********)((long)ppbVar32 + -0x18);
          puVar37 = *(undefined1 **)((long)ppbVar32 + -8);
          goto code_r0x003c65c0;
        }
        goto code_r0x003c65b4;
      }
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
      goto code_r0x003c6596;
    }
    if ((long)ppppppplVar25 < 0x18) {
      ppppppplVar45 = ppppppplVar22 + 2;
      if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
        if (ppppppplVar45 != ppppppplVar46 && ppppppplVar22 != ppppppplVar46) {
          ppppppplVar44 = ppppppplVar22 + 3;
          do {
            ppppppplVar25 = ppppppplVar45;
            ppppppplVar40 = (long *******)*ppppppplVar22;
            pppppplVar3 = ppppppplVar22[2];
            ppppppplVar28 = (long *******)pppppplVar3[4];
            if ((long)ppppppplVar28 < (long)ppppppplVar40[4]) {
              ppppppplVar40 = (long *******)ppppppplVar22[3];
              ppppppplVar28 = ppppppplVar44;
              do {
                ppppppplVar22 = ppppppplVar28;
                *(undefined4 *)(ppppppplVar22 + -1) = *(undefined4 *)(ppppppplVar22 + -3);
                *(undefined4 *)((long)ppppppplVar22 + -4) =
                     *(undefined4 *)((long)ppppppplVar22 + -0x14);
                *(undefined4 *)ppppppplVar22 = *(undefined4 *)(ppppppplVar22 + -2);
                *(undefined4 *)((long)ppppppplVar22 + 4) =
                     *(undefined4 *)((long)ppppppplVar22 + -0xc);
                ppppppplVar21 = (long *******)pppppplVar3[4];
                ppppppplVar28 = ppppppplVar22 + -2;
              } while ((long)ppppppplVar21 < (long)ppppppplVar22[-5][4]);
              ppppppplVar22[-3] = pppppplVar3;
              *ppppppplVar28 = (long ******)ppppppplVar40;
            }
            ppppppplVar45 = ppppppplVar25 + 2;
            ppppppplVar44 = ppppppplVar44 + 2;
            ppppppplVar22 = ppppppplVar25;
          } while (ppppppplVar45 != ppppppplVar46);
        }
        goto code_r0x003c6596;
      }
      if (ppppppplVar45 == ppppppplVar46 || ppppppplVar22 == ppppppplVar46) goto code_r0x003c6596;
      lVar30 = 0x10;
      ppppppplVar44 = ppppppplVar22;
      goto code_r0x003c611e;
    }
    if (ppppppplVar29 == (long *******)0x0) {
      ppppppplVar45 = ppppppplVar25;
      if (ppppppplVar22 == ppppppplVar46) goto code_r0x003c6596;
      ppppppplVar21 = (long *******)((long)ppppppplVar25 - 2U >> 1);
      ppppppplVar40 = ppppppplVar21;
      goto code_r0x003c6197;
    }
    ppppppplVar31 = ppppppplVar22 + ((ulong)ppppppplVar25 & 0xfffffffffffffffe);
    ppppplVar27 = (*ppppppplVar44)[4];
    if (ppppppplVar25 < (long *******)0x81) {
      ppppplVar4 = (*ppppppplVar22)[4];
      ppppppplVar40 = (long *******)*ppppppplVar31;
      if ((long)ppppplVar4 < (long)ppppppplVar40[4]) {
        if ((long)ppppplVar27 < (long)ppppplVar4) {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar46[-1];
          *ppppppplVar31 = *ppppppplVar44;
          ppppppplVar31[1] = pppppplVar3;
        }
        else {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar22[1];
          *ppppppplVar31 = *ppppppplVar22;
          ppppppplVar31[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar22 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar22 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar10;
          if ((long)(*ppppppplVar22)[4] <= (long)(*ppppppplVar44)[4]) goto code_r0x003c5d7e;
          pppppplVar3 = ppppppplVar22[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar46[-1];
          *ppppppplVar22 = *ppppppplVar44;
          ppppppplVar22[1] = pppppplVar3;
        }
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
        *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
        *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
      }
      else if ((long)ppppplVar27 < (long)ppppplVar4) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar46[-1];
        *ppppppplVar22 = *ppppppplVar44;
        ppppppplVar22[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
        *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
        *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
        if ((long)(*ppppppplVar22)[4] < (long)(*ppppppplVar31)[4]) {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar22[1];
          *ppppppplVar31 = *ppppppplVar22;
          ppppppplVar31[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar22 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar22 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar22 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar10;
        }
      }
    }
    else {
      ppppplVar4 = (*ppppppplVar31)[4];
      if ((long)ppppplVar4 < (long)(*ppppppplVar22)[4]) {
        if ((long)ppppplVar27 < (long)ppppplVar4) {
          pppppplVar3 = ppppppplVar22[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar46[-1];
          *ppppppplVar22 = *ppppppplVar44;
          ppppppplVar22[1] = pppppplVar3;
        }
        else {
          pppppplVar3 = ppppppplVar22[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[1];
          *ppppppplVar22 = *ppppppplVar31;
          ppppppplVar22[1] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
          if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar44)[4]) goto code_r0x003c5ab9;
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar46[-1];
          *ppppppplVar31 = *ppppppplVar44;
          ppppppplVar31[1] = pppppplVar3;
        }
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar44 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar46[-1] = pppppplVar3;
      }
      else if ((long)ppppplVar27 < (long)ppppplVar4) {
        pppppplVar3 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar46[-1];
        *ppppppplVar31 = *ppppppplVar44;
        ppppppplVar31[1] = pppppplVar3;
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar44 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar46[-1] = pppppplVar3;
        if ((long)(*ppppppplVar31)[4] < (long)(*ppppppplVar22)[4]) {
          pppppplVar3 = ppppppplVar22[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[1];
          *ppppppplVar22 = *ppppppplVar31;
          ppppppplVar22[1] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
        }
      }
code_r0x003c5ab9:
      ppppppplVar40 = ppppppplVar22 + 2;
      ppppppplVar25 = ppppppplVar31 + -2;
      ppppplVar27 = ppppppplVar31[-2][4];
      if ((long)ppppplVar27 < (long)ppppppplVar22[2][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar27) {
          pppppplVar3 = ppppppplVar22[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          plVar5 = *(long **)((long)ppbVar32 + -0x60);
          pppppplVar3 = (long ******)plVar5[1];
          *ppppppplVar40 = (long ******)*plVar5;
          ppppppplVar22[3] = pppppplVar3;
          lVar30 = *(long *)((long)ppbVar32 + -0x40);
          *plVar5 = *(long *)((long)ppbVar32 + -0x48);
          plVar5[1] = lVar30;
        }
        else {
          pppppplVar3 = ppppppplVar22[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[-1];
          *ppppppplVar40 = *ppppppplVar25;
          ppppppplVar22[3] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar25 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar3;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)(*ppppppplVar25)[4]) {
            pppppplVar3 = ppppppplVar31[-1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            plVar5 = *(long **)((long)ppbVar32 + -0x60);
            pppppplVar3 = (long ******)plVar5[1];
            *ppppppplVar25 = (long ******)*plVar5;
            ppppppplVar31[-1] = pppppplVar3;
            lVar30 = *(long *)((long)ppbVar32 + -0x40);
            *plVar5 = *(long *)((long)ppbVar32 + -0x48);
            plVar5[1] = lVar30;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar31[-1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        plVar5 = *(long **)((long)ppbVar32 + -0x60);
        pppppplVar3 = (long ******)plVar5[1];
        *ppppppplVar25 = (long ******)*plVar5;
        ppppppplVar31[-1] = pppppplVar3;
        lVar30 = *(long *)((long)ppbVar32 + -0x40);
        *plVar5 = *(long *)((long)ppbVar32 + -0x48);
        plVar5[1] = lVar30;
        if ((long)(*ppppppplVar25)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar3 = ppppppplVar22[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[-1];
          *ppppppplVar40 = *ppppppplVar25;
          ppppppplVar22[3] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar25 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar3;
        }
      }
      ppppppplVar40 = ppppppplVar22 + 4;
      ppppppplVar45 = ppppppplVar31 + 2;
      ppppplVar27 = ppppppplVar31[2][4];
      if ((long)ppppplVar27 < (long)ppppppplVar22[4][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar27) {
          pppppplVar3 = ppppppplVar22[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          plVar5 = *(long **)((long)ppbVar32 + -0x58);
          pppppplVar3 = (long ******)plVar5[1];
          *ppppppplVar40 = (long ******)*plVar5;
          ppppppplVar22[5] = pppppplVar3;
          lVar30 = *(long *)((long)ppbVar32 + -0x40);
          *plVar5 = *(long *)((long)ppbVar32 + -0x48);
          plVar5[1] = lVar30;
        }
        else {
          pppppplVar3 = ppppppplVar22[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[3];
          *ppppppplVar40 = *ppppppplVar45;
          ppppppplVar22[5] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar45 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar3;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)(*ppppppplVar45)[4]) {
            pppppplVar3 = ppppppplVar31[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar45;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            plVar5 = *(long **)((long)ppbVar32 + -0x58);
            pppppplVar3 = (long ******)plVar5[1];
            *ppppppplVar45 = (long ******)*plVar5;
            ppppppplVar31[3] = pppppplVar3;
            lVar30 = *(long *)((long)ppbVar32 + -0x40);
            *plVar5 = *(long *)((long)ppbVar32 + -0x48);
            plVar5[1] = lVar30;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar31[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar45;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        plVar5 = *(long **)((long)ppbVar32 + -0x58);
        pppppplVar3 = (long ******)plVar5[1];
        *ppppppplVar45 = (long ******)*plVar5;
        ppppppplVar31[3] = pppppplVar3;
        lVar30 = *(long *)((long)ppbVar32 + -0x40);
        *plVar5 = *(long *)((long)ppbVar32 + -0x48);
        plVar5[1] = lVar30;
        if ((long)(*ppppppplVar45)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar3 = ppppppplVar22[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[3];
          *ppppppplVar40 = *ppppppplVar45;
          ppppppplVar22[5] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar45 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar3;
        }
      }
      ppppppplVar21 = (long *******)ppppppplVar31[-2];
      ppppppplVar40 = (long *******)(*ppppppplVar31)[4];
      ppppppplVar28 = (long *******)ppppppplVar31[2][4];
      if ((long)ppppppplVar40 < (long)ppppppplVar21[4]) {
        if ((long)ppppppplVar28 < (long)ppppppplVar40) {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar25 = *ppppppplVar45;
          ppppppplVar31[-1] = ppppppplVar31[3];
        }
        else {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar25 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
          ppppppplVar40 = (long *******)ppppppplVar31[2][4];
          if ((long)(*ppppppplVar31)[4] <= (long)ppppppplVar40) goto code_r0x003c5d66;
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar31 = *ppppppplVar45;
          ppppppplVar31[1] = ppppppplVar31[3];
        }
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar45 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar3;
      }
      else if ((long)ppppppplVar28 < (long)ppppppplVar40) {
        pppppplVar3 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        *ppppppplVar31 = *ppppppplVar45;
        ppppppplVar31[1] = ppppppplVar31[3];
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar45 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar3;
        ppppppplVar40 = (long *******)(*ppppppplVar31)[4];
        if ((long)ppppppplVar40 < (long)ppppppplVar31[-2][4]) {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar25;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar25 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
        }
      }
code_r0x003c5d66:
      pppppplVar3 = ppppppplVar22[1];
      *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
      *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
      pppppplVar3 = ppppppplVar31[1];
      *ppppppplVar22 = *ppppppplVar31;
      ppppppplVar22[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar31 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar31 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar31 + 0xc) = uVar10;
    }
code_r0x003c5d7e:
    ppppppplVar29 = (long *******)((long)ppppppplVar29 + -1);
    pppppplVar3 = *ppppppplVar22;
    if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
      ppppplVar27 = pppppplVar3[4];
      if ((long)ppppppplVar22[-2][4] < (long)ppppplVar27) goto code_r0x003c5db2;
      ppppppplVar31 = ppppppplVar22;
      if ((long)ppppplVar27 < (long)ppppppplVar46[-2][4]) {
        do {
          ppppppplVar25 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar25)[4] <= (long)ppppplVar27);
      }
      else {
        do {
          ppppppplVar31 = ppppppplVar31 + 2;
          if (ppppppplVar46 <= ppppppplVar31) break;
          ppppppplVar40 = (long *******)*ppppppplVar31;
        } while ((long)ppppppplVar40[4] <= (long)ppppplVar27);
      }
      ppppppplVar25 = ppppppplVar46;
      if (ppppppplVar31 < ppppppplVar46) {
        do {
          ppppppplVar40 = (long *******)ppppppplVar25[-2];
          ppppppplVar25 = ppppppplVar25 + -2;
        } while ((long)ppppplVar27 < (long)ppppppplVar40[4]);
      }
      pppppplVar18 = ppppppplVar22[1];
      while (ppppppplVar31 < ppppppplVar25) {
        pppppplVar11 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar11;
        pppppplVar11 = ppppppplVar25[1];
        *ppppppplVar31 = *ppppppplVar25;
        ppppppplVar31[1] = pppppplVar11;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar25 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar25 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar25 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar25 + 0xc) = uVar10;
        ppppppplVar40 = (long *******)pppppplVar3[4];
        do {
          ppppppplVar28 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar28)[4] <= (long)ppppppplVar40);
        do {
          ppppppplVar28 = (long *******)ppppppplVar25[-2];
          ppppppplVar25 = ppppppplVar25 + -2;
        } while ((long)ppppppplVar40 < (long)ppppppplVar28[4]);
      }
      if (ppppppplVar22 != ppppppplVar31 + -2) {
        uVar8 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
        uVar9 = *(undefined4 *)(ppppppplVar31 + -1);
        uVar10 = *(undefined4 *)((long)ppppppplVar31 + -4);
        *(undefined4 *)ppppppplVar22 = *(undefined4 *)(ppppppplVar31 + -2);
        *(undefined4 *)((long)ppppppplVar22 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar10;
      }
      ppppppplVar31[-2] = pppppplVar3;
      ppppppplVar31[-1] = pppppplVar18;
      *(undefined4 *)((long)ppbVar32 + -0x4c) = 0;
      ppppppplVar22 = ppppppplVar31;
      goto code_r0x003c591e;
    }
    ppppplVar27 = pppppplVar3[4];
code_r0x003c5db2:
    pppppplVar18 = ppppppplVar22[1];
    lVar30 = 0;
    do {
      lVar43 = lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    } while (*(long *)(*(long *)((long)ppppppplVar22 + lVar43) + 0x20) < (long)ppppplVar27);
    ppppppplVar28 = (long *******)(lVar30 + (long)ppppppplVar22);
    ppppppplVar25 = ppppppplVar46;
    if (lVar30 == 0x10) {
      ppppppplVar21 = (long *******)0x10;
      do {
        if (ppppppplVar25 <= ppppppplVar28) break;
        ppppppplVar21 = (long *******)ppppppplVar25[-2];
        ppppppplVar25 = ppppppplVar25 + -2;
      } while ((long)ppppplVar27 <= (long)ppppppplVar21[4]);
    }
    else {
      do {
        ppppppplVar21 = (long *******)ppppppplVar25[-2];
        ppppppplVar25 = ppppppplVar25 + -2;
      } while ((long)ppppplVar27 <= (long)ppppppplVar21[4]);
    }
    ppppppplVar40 = ppppppplVar25;
    ppppppplVar31 = ppppppplVar28;
    if (ppppppplVar28 < ppppppplVar25) {
      do {
        pppppplVar11 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar11;
        pppppplVar11 = ppppppplVar40[1];
        *ppppppplVar31 = *ppppppplVar40;
        ppppppplVar31[1] = pppppplVar11;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar10;
        ppppppplVar21 = (long *******)pppppplVar3[4];
        do {
          ppppppplVar45 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar45)[4] < (long)ppppppplVar21);
        do {
          ppppppplVar45 = ppppppplVar40 + -2;
          ppppppplVar40 = ppppppplVar40 + -2;
        } while ((long)ppppppplVar21 <= (long)(*ppppppplVar45)[4]);
      } while (ppppppplVar31 < ppppppplVar40);
    }
    ppppppplVar40 = ppppppplVar31 + -2;
    if (ppppppplVar22 != ppppppplVar40) {
      uVar8 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
      uVar9 = *(undefined4 *)(ppppppplVar31 + -1);
      uVar10 = *(undefined4 *)((long)ppppppplVar31 + -4);
      *(undefined4 *)ppppppplVar22 = *(undefined4 *)ppppppplVar40;
      *(undefined4 *)((long)ppppppplVar22 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar22 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar22 + 0xc) = uVar10;
    }
    *(long ********)((long)ppbVar32 + -0x68) = ppppppplVar22;
    ppppppplVar31[-2] = pppppplVar3;
    ppppppplVar31[-1] = pppppplVar18;
    if (ppppppplVar25 <= ppppppplVar28) goto code_r0x003c5e95;
    ppppppplVar25 = (long *******)(ulong)*(byte *)((long)ppbVar32 + -0x4c);
    ppppppplVar28 = *(long ********)((long)ppbVar32 + -0x68);
    puVar34 = (undefined8 *)((long)ppbVar32 + -0x80);
    ppbVar32 = (byte **)((long)ppbVar32 + -0x80);
    *puVar34 = &UNK_003c5ee7;
    ppuVar36 = (undefined **)puVar33;
    ppppppplVar45 = ppppppplVar29;
    ppppppplVar47 = ppppppplVar46;
  } while( true );
code_r0x003c5845:
  do {
    pppppplVar3 = *ppppppplVar40;
    pbVar42 = (byte *)((ulong)pppppplVar3[3] & 0xfffffffffffffffc);
    bVar24 = *pbVar42;
    if ((bVar24 & 1) == 0) {
      ppppppplVar25 = (long *******)(ulong)(bVar24 >> 1);
    }
    else {
      ppppppplVar25 = *(long ********)(pbVar42 + 8);
    }
    if (ppppppplVar25 == ppppppplVar28) {
      if ((bVar24 & 1) == 0) {
        pbVar42 = pbVar42 + 1;
      }
      else {
        pbVar42 = *(byte **)(pbVar42 + 0x10);
      }
      pbVar19 = pbStack_238;
      if (((ulong)ppppppplVar21 & 1) != 0) {
        pbVar19 = *(byte **)(pbStack_230 + 0x10);
      }
      puStack_240 = &UNK_003c5818;
      iVar13 = func_0x0099bf90(pbVar42,pbVar19);
      ppppppplVar21 = (long *******)(uStack_220 & 0xffffffff);
      ppppppplVar31 = ppppppplVar28;
      if (iVar13 == 0) {
        uStack_1f8 = ppppppplStack_218;
        puStack_240 = &UNK_003c563d;
        uStack_1f0 = pppppplVar3;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (ppppppplStack_228);
        ppppppplVar40 = ppppppplStack_210;
        ppppppplStack_1d8 = (long *******)ppppppplStack_210[1];
        ppppppplStack_1d0 = (long *******)&ppppppplStack_1d8;
        ppppppplVar25 = (long *******)&uStack_1f8;
        ppppppplStack_1c0 = ppppppplStack_210;
        ppppppplStack_1c8 = ppppppplVar25;
        if (ppppppplStack_1d8 < ppppppplStack_210[2]) {
          *(undefined4 *)ppppppplStack_1d8 = (undefined4)uStack_1f8;
          *(undefined4 *)((long)ppppppplStack_1d8 + 4) = uStack_1f8._4_4_;
          *(undefined4 *)(ppppppplStack_1d8 + 1) = (undefined4)uStack_1f0;
          *(undefined4 *)((long)ppppppplStack_1d8 + 0xc) = uStack_1f0._4_4_;
          ppppppplVar28 = ppppppplStack_1d8 + 2;
        }
        else {
          puStack_240 = &UNK_003c58bd;
          _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_1d0);
          ppppppplVar28 = ppppppplStack_1d8;
        }
        ppppppplVar40[1] = (long ******)ppppppplVar28;
        ppppppplVar47 = ppppppplStack_200;
        break;
      }
    }
    ppppppplVar40 = ppppppplVar40 + 1;
    ppppppplVar47 = ppppppplStack_200;
  } while (ppppppplVar40 != ppppppplVar22);
code_r0x003c5690:
  ppppppplVar44 = ppppppplVar44 + 1;
  if (ppppppplVar44 == ppppppplStack_208) goto code_r0x003c5568;
  goto code_r0x003c56a1;
code_r0x003c611e:
  do {
    ppppppplVar40 = ppppppplVar45;
    ppppppplVar28 = (long *******)*ppppppplVar44;
    pppppplVar3 = ppppppplVar44[2];
    ppppppplVar21 = (long *******)pppppplVar3[4];
    if ((long)ppppppplVar21 < (long)ppppppplVar28[4]) {
      pppppplVar18 = ppppppplVar44[3];
      lVar43 = lVar30;
      do {
        puVar1 = (undefined4 *)((long)ppppppplVar22 + lVar43 + -0x10);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)((long)ppppppplVar22 + lVar43);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        ppppppplVar28 = ppppppplVar22;
        if (lVar43 == 0x10) goto code_r0x003c6103;
        ppppppplVar21 = (long *******)pppppplVar3[4];
        lVar12 = lVar43 + -0x20;
        lVar43 = lVar43 + -0x10;
      } while ((long)ppppppplVar21 < *(long *)(*(long *)((long)ppppppplVar22 + lVar12) + 0x20));
      ppppppplVar28 = (long *******)(lVar43 + (long)ppppppplVar22);
code_r0x003c6103:
      *ppppppplVar28 = pppppplVar3;
      ppppppplVar28[1] = pppppplVar18;
    }
    ppppppplVar45 = ppppppplVar40 + 2;
    lVar30 = lVar30 + 0x10;
    ppppppplVar44 = ppppppplVar40;
  } while (ppppppplVar45 != ppppppplVar46);
  goto code_r0x003c6596;
code_r0x003c6197:
  do {
    if (ppppppplVar40 <= ppppppplVar21) {
      ppppppplVar28 = (long *******)((long)ppppppplVar40 * 2 + 1);
      ppppppplVar44 = (long *******)((long)ppppppplVar40 * 2 + 2);
      if ((ppppppplVar44 < ppppppplVar25) &&
         ((long)ppppppplVar22[(long)ppppppplVar28 * 2][4] <
          (long)ppppppplVar22[(long)ppppppplVar44 * 2][4])) {
        ppppppplVar28 = ppppppplVar44;
      }
      pppppplVar3 = ppppppplVar22[(long)ppppppplVar40 * 2];
      if ((long)pppppplVar3[4] <= (long)ppppppplVar22[(long)ppppppplVar28 * 2][4]) {
        pppppplVar18 = ppppppplVar22[(long)ppppppplVar40 * 2 + 1];
        ppppppplVar44 = ppppppplVar40;
        do {
          ppppppplVar45 = ppppppplVar28;
          pppppplVar11 = (ppppppplVar22 + (long)ppppppplVar45 * 2)[1];
          ppppppplVar22[(long)ppppppplVar44 * 2] = ppppppplVar22[(long)ppppppplVar45 * 2];
          (ppppppplVar22 + (long)ppppppplVar44 * 2)[1] = pppppplVar11;
          if ((long)ppppppplVar21 < (long)ppppppplVar45) break;
          ppppppplVar31 = (long *******)((long)ppppppplVar45 * 2 + 1);
          ppppppplVar44 = (long *******)((long)ppppppplVar45 * 2 + 2);
          ppppppplVar28 = ppppppplVar31;
          if (((long)ppppppplVar44 < (long)ppppppplVar25) &&
             (ppppppplVar29 = (long *******)ppppppplVar22[(long)ppppppplVar44 * 2],
             ppppppplVar28 = ppppppplVar44,
             (long)ppppppplVar29[4] <= (long)ppppppplVar22[(long)ppppppplVar31 * 2][4])) {
            ppppppplVar28 = ppppppplVar31;
          }
          ppppppplVar31 = (long *******)ppppppplVar22[(long)ppppppplVar28 * 2][4];
          ppppppplVar44 = ppppppplVar45;
        } while ((long)pppppplVar3[4] <= (long)ppppppplVar31);
        ppppppplVar22[(long)ppppppplVar45 * 2] = pppppplVar3;
        (ppppppplVar22 + (long)ppppppplVar45 * 2)[1] = pppppplVar18;
      }
    }
    bVar48 = 0 < (long)ppppppplVar40;
    ppppppplVar40 = (long *******)((long)ppppppplVar40 + -1);
  } while (bVar48);
  do {
    pppppplVar3 = ppppppplVar22[1];
    *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar22;
    *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
    ppppppplVar28 = (long *******)0x0;
    ppppppplVar40 = ppppppplVar22;
    do {
      ppppppplVar21 = (long *******)((long)ppppppplVar28 * 0x10);
      ppppppplVar47 = ppppppplVar40 + (long)ppppppplVar28 * 2 + 2;
      ppppppplVar44 = (long *******)((long)ppppppplVar28 * 2 + 1);
      ppppppplVar45 = (long *******)((long)ppppppplVar28 * 2 + 2);
      ppppppplVar28 = ppppppplVar44;
      if (((long)ppppppplVar45 < (long)ppppppplVar25) &&
         (ppppppplVar21 = (long *******)((long)ppppppplVar21 + (long)ppppppplVar40),
         (long)ppppppplVar21[2][4] < (long)ppppppplVar21[4][4])) {
        ppppppplVar47 = ppppppplVar21 + 4;
        ppppppplVar28 = ppppppplVar45;
        ppppppplVar21 = ppppppplVar47;
      }
      pppppplVar3 = ppppppplVar47[1];
      *ppppppplVar40 = *ppppppplVar47;
      ppppppplVar40[1] = pppppplVar3;
      ppppppplVar40 = ppppppplVar47;
    } while ((long)ppppppplVar28 <= (long)((long)ppppppplVar25 - 2U >> 1));
    ppppppplVar44 = ppppppplVar46 + -2;
    if (ppppppplVar47 == ppppppplVar44) {
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar47 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar47 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar47 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar47 + 0xc) = uVar10;
    }
    else {
      pppppplVar3 = ppppppplVar46[-1];
      *ppppppplVar47 = *ppppppplVar44;
      ppppppplVar47[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar46 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar46 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar46 + -4) = uVar10;
      lVar30 = (long)ppppppplVar47 + (0x10 - (long)ppppppplVar22) >> 4;
      if (1 < lVar30) {
        uVar17 = lVar30 - 2U >> 1;
        ppppppplVar21 = (long *******)(uVar17 * 0x10);
        ppppppplVar28 = (long *******)ppppppplVar22[uVar17 * 2][4];
        ppppppplVar40 = (long *******)*ppppppplVar47;
        if ((long)ppppppplVar28 < (long)ppppppplVar40[4]) {
          ppppppplVar28 = (long *******)ppppppplVar47[1];
          ppppppplVar21 = (long *******)((long)ppppppplVar21 + (long)ppppppplVar22);
          do {
            ppppppplVar45 = ppppppplVar21;
            uVar8 = *(undefined4 *)((long)ppppppplVar45 + 4);
            uVar9 = *(undefined4 *)(ppppppplVar45 + 1);
            uVar10 = *(undefined4 *)((long)ppppppplVar45 + 0xc);
            *(undefined4 *)ppppppplVar47 = *(undefined4 *)ppppppplVar45;
            *(undefined4 *)((long)ppppppplVar47 + 4) = uVar8;
            *(undefined4 *)(ppppppplVar47 + 1) = uVar9;
            *(undefined4 *)((long)ppppppplVar47 + 0xc) = uVar10;
            ppppppplVar21 = ppppppplVar45;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            ppppppplVar21 = ppppppplVar22 + uVar17 * 2;
            ppppppplVar47 = ppppppplVar45;
          } while ((long)ppppppplVar22[uVar17 * 2][4] < (long)ppppppplVar40[4]);
          *ppppppplVar45 = (long ******)ppppppplVar40;
          ppppppplVar45[1] = (long ******)ppppppplVar28;
        }
      }
    }
    ppppppplVar45 = (long *******)((long)ppppppplVar25 + -1);
    bVar48 = 2 < (long)ppppppplVar25;
    ppppppplVar25 = ppppppplVar45;
    ppppppplVar46 = ppppppplVar44;
  } while (bVar48);
code_r0x003c6596:
  ppppppplVar46 = ppppppplVar29;
  if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar32 + -0x38)) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
code_r0x003c65b4:
  ppppppplVar44 = ppppppplVar21;
  ppppppplVar22 = ppppppplVar28;
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c65b9;
  func_0x0099bd00();
  ppppppplVar21 = extraout_RDX_02;
  ppbVar32 = (byte **)((long)ppbVar32 + -0x78);
  goto code_r0x003c65c0;
code_r0x003c5e95:
  *(long ********)((long)ppbVar32 + -0x70) = ppppppplVar29;
  ppppppplVar22 = *(long ********)((long)ppbVar32 + -0x68);
  puVar35 = (undefined1 *)((long)ppbVar32 + -0x80);
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c5eab;
code_r0x003c67a0:
  puVar37 = puVar35 + -8;
  *(undefined1 **)(puVar35 + -8) = puVar38;
  *(long ********)(puVar35 + -0x10) = ppppppplVar46;
  *(long ********)(puVar35 + -0x18) = ppppppplVar31;
  uVar6 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar35 + -0x20) = uVar6;
  uVar23 = (undefined7)((ulong)uVar6 >> 8);
  ppppppplVar21 = (long *******)CONCAT71(uVar23,1);
  switch((long)ppppppplVar40 - (long)ppppppplVar22 >> 4) {
  case 0:
  case 1:
    goto code_r0x003c6b3a;
  case 2:
    if ((long)ppppppplVar40[-2][4] < (long)(*ppppppplVar22)[4]) {
      pppppplVar3 = ppppppplVar22[1];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
      *(long *******)(puVar35 + -0x30) = pppppplVar3;
      pppppplVar3 = ppppppplVar40[-1];
      *ppppppplVar22 = ppppppplVar40[-2];
      ppppppplVar22[1] = pppppplVar3;
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)(ppppppplVar40 + -2) = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar40 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar40 + -4) = uVar10;
    }
    goto code_r0x003c6b3a;
  case 3:
    ppppppplVar31 = ppppppplVar22 + 2;
    ppppppplVar28 = ppppppplVar40 + -2;
    ppppplVar27 = ppppppplVar22[2][4];
    if ((long)ppppplVar27 < (long)(*ppppppplVar22)[4]) {
      if ((long)ppppppplVar40[-2][4] < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        pppppplVar3 = ppppppplVar40[-1];
        *ppppppplVar22 = *ppppppplVar28;
        ppppppplVar22[1] = pppppplVar3;
      }
      else {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar31;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
        if ((long)ppppppplVar22[2][4] <= (long)(*ppppppplVar28)[4]) goto code_r0x003c6b3a;
        pppppplVar3 = ppppppplVar22[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        pppppplVar3 = ppppppplVar40[-1];
        *ppppppplVar31 = *ppppppplVar28;
        ppppppplVar22[3] = pppppplVar3;
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar40 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar40 + -4) = uVar10;
      goto code_r0x003c6b3a;
    }
    if ((long)ppppplVar27 <= (long)ppppppplVar40[-2][4]) goto code_r0x003c6b3a;
    break;
  case 4:
    ppppppplVar31 = ppppppplVar22 + 2;
    ppppppplVar28 = ppppppplVar22 + 4;
    ppppppplVar44 = ppppppplVar40 + -2;
    pppppplVar3 = *ppppppplVar22;
    ppppplVar27 = ppppppplVar22[2][4];
    pppppplVar18 = ppppppplVar22[4];
    ppppplVar4 = pppppplVar18[4];
    if ((long)ppppplVar27 < (long)pppppplVar3[4]) {
      if ((long)ppppplVar4 < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar28;
        ppppppplVar22[1] = ppppppplVar22[5];
      }
      else {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar31;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
        if ((long)ppppppplVar22[2][4] <= (long)pppppplVar18[4]) goto code_r0x003c6abf;
        pppppplVar3 = ppppppplVar22[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar31 = *ppppppplVar28;
        ppppppplVar22[3] = ppppppplVar22[5];
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
    }
    else if ((long)ppppplVar4 < (long)ppppplVar27) {
      pppppplVar18 = ppppppplVar22[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
      *(long *******)(puVar35 + -0x30) = pppppplVar18;
      *ppppppplVar31 = *ppppppplVar28;
      ppppppplVar22[3] = ppppppplVar22[5];
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
      if ((long)(*ppppppplVar31)[4] < (long)pppppplVar3[4]) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar31;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
      }
    }
code_r0x003c6abf:
    if ((long)(*ppppppplVar28)[4] <= (long)(*ppppppplVar44)[4]) goto code_r0x003c6b3a;
    pppppplVar3 = ppppppplVar22[5];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
    *(long *******)(puVar35 + -0x30) = pppppplVar3;
    pppppplVar3 = ppppppplVar40[-1];
    *ppppppplVar28 = *ppppppplVar44;
    ppppppplVar22[5] = pppppplVar3;
    uVar8 = *(undefined4 *)(puVar35 + -0x34);
    uVar9 = *(undefined4 *)(puVar35 + -0x30);
    uVar10 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar44 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar40 + -0xc) = uVar8;
    *(undefined4 *)(ppppppplVar40 + -1) = uVar9;
    *(undefined4 *)((long)ppppppplVar40 + -4) = uVar10;
    if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar28)[4]) goto code_r0x003c6b3a;
    break;
  case 5:
    ppppppplVar21 = ppppppplVar22 + 4;
    ppppppplVar45 = ppppppplVar22 + 6;
    ppppppplVar44 = ppppppplVar40 + -2;
    ppbVar32 = (byte **)(puVar35 + -0x40);
    *(undefined **)(puVar35 + -0x40) = &UNK_003c686a;
    ppppppplVar40 = ppppppplVar22 + 2;
code_r0x003c65c0:
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined1 **)((long)ppbVar32 + -8) = puVar37;
    puVar35 = (undefined1 *)((long)ppbVar32 + -0x28);
    *(undefined8 *)((long)ppbVar32 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppplVar27 = (*ppppppplVar40)[4];
    if ((long)ppppplVar27 < (long)(*ppppppplVar22)[4]) {
      if ((long)(*ppppppplVar21)[4] < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar21[1];
        *ppppppplVar22 = *ppppppplVar21;
        ppppppplVar22[1] = pppppplVar3;
      }
      else {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar40[1];
        *ppppppplVar22 = *ppppppplVar40;
        ppppppplVar22[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar10;
        if ((long)(*ppppppplVar40)[4] <= (long)(*ppppppplVar21)[4]) goto code_r0x003c6677;
        pppppplVar3 = ppppppplVar40[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar21[1];
        *ppppppplVar40 = *ppppppplVar21;
        ppppppplVar40[1] = pppppplVar3;
      }
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
    }
    else if ((long)(*ppppppplVar21)[4] < (long)ppppplVar27) {
      pppppplVar3 = ppppppplVar40[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar21[1];
      *ppppppplVar40 = *ppppppplVar21;
      ppppppplVar40[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
      if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar22)[4]) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar40[1];
        *ppppppplVar22 = *ppppppplVar40;
        ppppppplVar22[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar40 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar40 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar10;
      }
    }
code_r0x003c6677:
    if ((long)(*ppppppplVar45)[4] < (long)(*ppppppplVar21)[4]) {
      pppppplVar3 = ppppppplVar21[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar45[1];
      *ppppppplVar21 = *ppppppplVar45;
      ppppppplVar21[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar45 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar45 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar45 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar45 + 0xc) = uVar10;
      if ((long)(*ppppppplVar21)[4] < (long)(*ppppppplVar40)[4]) {
        pppppplVar3 = ppppppplVar40[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar21[1];
        *ppppppplVar40 = *ppppppplVar21;
        ppppppplVar40[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
        if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar22)[4]) {
          pppppplVar3 = ppppppplVar22[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
          pppppplVar3 = ppppppplVar40[1];
          *ppppppplVar22 = *ppppppplVar40;
          ppppppplVar22[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar40 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar40 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar10;
        }
      }
    }
    if ((long)(*ppppppplVar44)[4] < (long)(*ppppppplVar45)[4]) {
      pppppplVar3 = ppppppplVar45[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar45;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar44[1];
      *ppppppplVar45 = *ppppppplVar44;
      ppppppplVar45[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar44 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar44 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar44 + 0xc) = uVar10;
      if ((long)(*ppppppplVar45)[4] < (long)(*ppppppplVar21)[4]) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar45[1];
        *ppppppplVar21 = *ppppppplVar45;
        ppppppplVar21[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar45 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar45 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar45 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar45 + 0xc) = uVar10;
        if ((long)(*ppppppplVar21)[4] < (long)(*ppppppplVar40)[4]) {
          pppppplVar3 = ppppppplVar40[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar40;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
          pppppplVar3 = ppppppplVar21[1];
          *ppppppplVar40 = *ppppppplVar21;
          ppppppplVar40[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
          if ((long)(*ppppppplVar40)[4] < (long)(*ppppppplVar22)[4]) {
            pppppplVar3 = ppppppplVar22[1];
            *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar22;
            *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
            pppppplVar3 = ppppppplVar40[1];
            *ppppppplVar22 = *ppppppplVar40;
            ppppppplVar22[1] = pppppplVar3;
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
            *(undefined4 *)ppppppplVar40 = *(undefined4 *)((long)ppbVar32 + -0x28);
            *(undefined4 *)((long)ppppppplVar40 + 4) = uVar8;
            *(undefined4 *)(ppppppplVar40 + 1) = uVar9;
            *(undefined4 *)((long)ppppppplVar40 + 0xc) = uVar10;
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
    ppppppplVar31 = ppppppplVar22 + 4;
    ppppppplVar28 = ppppppplVar22 + 2;
    pppppplVar3 = *ppppppplVar22;
    ppppplVar27 = ppppppplVar22[2][4];
    pppppplVar18 = ppppppplVar22[4];
    ppppplVar4 = pppppplVar18[4];
    if ((long)ppppplVar27 < (long)pppppplVar3[4]) {
      if ((long)ppppplVar4 < (long)ppppplVar27) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar31;
        ppppppplVar22[1] = ppppppplVar22[5];
      }
      else {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar28;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
        if ((long)ppppppplVar22[2][4] <= (long)pppppplVar18[4]) goto code_r0x003c6a01;
        pppppplVar3 = ppppppplVar22[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar28 = *ppppppplVar31;
        ppppppplVar22[3] = ppppppplVar22[5];
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
    }
    else if ((long)ppppplVar4 < (long)ppppplVar27) {
      pppppplVar18 = ppppppplVar22[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
      *(long *******)(puVar35 + -0x30) = pppppplVar18;
      *ppppppplVar28 = *ppppppplVar31;
      ppppppplVar22[3] = ppppppplVar22[5];
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar22 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar22 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar22 + 0x2c) = uVar10;
      if ((long)(*ppppppplVar28)[4] < (long)pppppplVar3[4]) {
        pppppplVar3 = ppppppplVar22[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar22 = *ppppppplVar28;
        ppppppplVar22[1] = ppppppplVar22[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
      }
    }
code_r0x003c6a01:
    if (ppppppplVar22 + 6 != ppppppplVar40) {
      iVar13 = 0;
      lVar30 = 0x30;
      ppppppplVar28 = ppppppplVar22 + 6;
      goto code_r0x003c6a49;
    }
    goto code_r0x003c6b3a;
  }
  ppppppplVar40 = ppppppplVar22 + 2;
  pppppplVar3 = ppppppplVar22[3];
  *(long *******)(puVar35 + -0x38) = *ppppppplVar40;
  *(long *******)(puVar35 + -0x30) = pppppplVar3;
  pppppplVar3 = ppppppplVar28[1];
  *ppppppplVar40 = *ppppppplVar28;
  ppppppplVar22[3] = pppppplVar3;
  uVar8 = *(undefined4 *)(puVar35 + -0x34);
  uVar9 = *(undefined4 *)(puVar35 + -0x30);
  uVar10 = *(undefined4 *)(puVar35 + -0x2c);
  *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
  *(undefined4 *)((long)ppppppplVar28 + 4) = uVar8;
  *(undefined4 *)(ppppppplVar28 + 1) = uVar9;
  *(undefined4 *)((long)ppppppplVar28 + 0xc) = uVar10;
  if ((long)ppppppplVar22[2][4] < (long)(*ppppppplVar22)[4]) {
    pppppplVar3 = ppppppplVar22[1];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar22;
    *(long *******)(puVar35 + -0x30) = pppppplVar3;
    *ppppppplVar22 = *ppppppplVar40;
    ppppppplVar22[1] = ppppppplVar22[3];
    uVar8 = *(undefined4 *)(puVar35 + -0x34);
    uVar9 = *(undefined4 *)(puVar35 + -0x30);
    uVar10 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar40 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar22 + 0x14) = uVar8;
    *(undefined4 *)(ppppppplVar22 + 3) = uVar9;
    *(undefined4 *)((long)ppppppplVar22 + 0x1c) = uVar10;
  }
  goto code_r0x003c6b3a;
code_r0x003c6a49:
  pppppplVar3 = *ppppppplVar28;
  if ((long)pppppplVar3[4] < (long)(*ppppppplVar31)[4]) {
    pppppplVar18 = ppppppplVar28[1];
    lVar43 = lVar30;
    do {
      puVar2 = (undefined4 *)((long)ppppppplVar22 + lVar43 + -0x10);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar1 = (undefined4 *)((long)ppppppplVar22 + lVar43);
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      ppppppplVar31 = ppppppplVar22;
      if (lVar43 == 0x10) goto code_r0x003c6a23;
      lVar12 = lVar43 + -0x20;
      lVar43 = lVar43 + -0x10;
    } while ((long)pppppplVar3[4] < *(long *)(*(long *)((long)ppppppplVar22 + lVar12) + 0x20));
    ppppppplVar31 = (long *******)(lVar43 + (long)ppppppplVar22);
code_r0x003c6a23:
    *ppppppplVar31 = pppppplVar3;
    ppppppplVar31[1] = pppppplVar18;
    iVar13 = iVar13 + 1;
    if (iVar13 == 8) {
      ppppppplVar21 = (long *******)CONCAT71(uVar23,ppppppplVar28 + 2 == ppppppplVar40);
      goto code_r0x003c6b3a;
    }
  }
  ppppppplVar44 = ppppppplVar28 + 2;
  lVar30 = lVar30 + 0x10;
  ppppppplVar31 = ppppppplVar28;
  ppppppplVar28 = ppppppplVar44;
  if (ppppppplVar44 == ppppppplVar40) {
code_r0x003c6b3a:
    if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(puVar35 + -0x20)) {
      *(undefined **)(puVar35 + -0x40) = &UNK_003c6b57;
      func_0x0099bd00();
      pcVar7 = (code *)swi(3);
      ppppppplVar22 = (long *******)(*pcVar7)();
      return ppppppplVar22;
    }
    return ppppppplVar21;
  }
  goto code_r0x003c6a49;
}


