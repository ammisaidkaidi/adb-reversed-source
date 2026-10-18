// Function: _ZN20DeployPatchGenerator11CreatePatchEN3com7android10fastdeploy11APKMetaDataES3_N7android4base11borrowed_fdE
// Address: 003c4a60
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
_ZN20DeployPatchGenerator11CreatePatchEN3com7android10fastdeploy11APKMetaDataES3_N7android4base11borrowed_fdE
          (char *param_1,long param_2,long param_3,uint param_4)

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
  ulong *puVar15;
  ulong uVar16;
  long ******pppppplVar17;
  byte *pbVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  undefined7 uVar22;
  long *******ppppppplVar21;
  byte bVar23;
  long *******ppppppplVar24;
  ulong uVar25;
  long *****ppppplVar26;
  byte *pbVar27;
  ulong extraout_RDX;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long *******extraout_RDX_00;
  long *******extraout_RDX_01;
  long lVar30;
  long *******ppppppplVar31;
  byte **ppbVar32;
  undefined8 *puVar34;
  undefined1 *puVar35;
  undefined **ppuVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  long *******ppppppplVar39;
  long lVar40;
  long *******ppppppplVar41;
  long unaff_R13;
  long *******ppppppplVar42;
  long *******ppppppplVar43;
  long *******ppppppplVar44;
  long in_FS_OFFSET;
  bool bVar45;
  bool bVar46;
  float fVar47;
  undefined *puStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  long *******ppppppplStack_180;
  ulong uStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  undefined *puStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  double dStack_a8;
  uint uStack_9c;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long lStack_88;
  long ******pppppplStack_78;
  ulong uStack_70;
  long *******ppppppplStack_68;
  ulong uStack_58;
  ulong uStack_50;
  long *******ppppppplStack_48;
  long lStack_38;
  undefined1 *puVar33;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_9c = param_4;
  if (*param_1 == '\x01') {
    pbVar27 = (byte *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
    if ((*pbVar27 & 1) == 0) {
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
    puStack_b0 = &UNK_003c4ab6;
    _ZN20DeployPatchGenerator3LogEPKcz(param_1,&UNK_0018ac66,pbVar27);
    if (0 < *(int *)(param_3 + 0x20)) {
      lVar30 = 8;
      unaff_R13 = 0;
      do {
        puVar14 = (undefined8 *)((*(ulong *)(param_3 + 0x18) - 1) + lVar30);
        if ((*(ulong *)(param_3 + 0x18) & 1) == 0) {
          puVar14 = (undefined8 *)(param_3 + 0x18);
        }
        puStack_b0 = &UNK_003c4aee;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (param_1,*puVar14);
        unaff_R13 = unaff_R13 + 1;
        lVar30 = lVar30 + 8;
      } while (unaff_R13 < *(int *)(param_3 + 0x20));
    }
  }
  if (*param_1 == '\x01') {
    puStack_b0 = &UNK_003c4b29;
    _ZN20DeployPatchGenerator3LogEPKcz();
    if (0 < *(int *)(param_2 + 0x20)) {
      lVar30 = 8;
      unaff_R13 = 0;
      do {
        puVar14 = (undefined8 *)((*(ulong *)(param_2 + 0x18) - 1) + lVar30);
        if ((*(ulong *)(param_2 + 0x18) & 1) == 0) {
          puVar14 = (undefined8 *)(param_2 + 0x18);
        }
        puStack_b0 = &UNK_003c4b5e;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (param_1,*puVar14);
        unaff_R13 = unaff_R13 + 1;
        lVar30 = lVar30 + 8;
      } while (unaff_R13 < *(int *)(param_2 + 0x20));
    }
  }
  uStack_58 = 0;
  uStack_50 = 0;
  ppppppplStack_48 = (long *******)0x0;
  puVar15 = (ulong *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
  if ((*puVar15 & 1) == 0) {
    ppppppplStack_48 = (long *******)puVar15[2];
    uStack_58 = *puVar15;
    uStack_50 = puVar15[1];
  }
  else {
    puStack_b0 = &UNK_003c4bac;
    func_0x00330340(&uStack_58,puVar15[2],puVar15[1]);
  }
  pppppplStack_78 = (long ******)0x0;
  uStack_70 = 0;
  ppppppplStack_68 = (long *******)0x0;
  puVar15 = (ulong *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
  if ((*puVar15 & 1) == 0) {
    ppppppplStack_68 = (long *******)puVar15[2];
    pppppplStack_78 = (long ******)*puVar15;
    uStack_70 = puVar15[1];
  }
  else {
    puStack_b0 = &UNK_003c4bea;
    func_0x00330340(&pppppplStack_78,puVar15[2],puVar15[1]);
  }
  ppppppplStack_98 = (long *******)0x0;
  ppppppplStack_90 = (long *******)0x0;
  lStack_88 = 0;
  puStack_b0 = &UNK_003c4c11;
  uVar16 = _ZN20DeployPatchGenerator21BuildIdenticalEntriesERNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKN3com7android10fastdeploy11APKMetaDataESC_
                     (param_1,&ppppppplStack_98,param_2);
  lVar30 = (long)ppppppplStack_90 - (long)ppppppplStack_98;
  if (lVar30 == 0) {
    lVar40 = 0;
    uVar25 = 0;
  }
  else {
    if (lVar30 == 0x10) {
      uVar25 = 0;
      uVar19 = 0;
      lVar40 = 0;
    }
    else {
      ppppppplVar21 = ppppppplStack_98 + 3;
      uVar25 = 0;
      uVar19 = 0;
      lVar40 = 0;
      do {
        if (ppppppplVar21[-2] != (long ******)0x0) {
          uVar25 = uVar25 + (long)ppppppplVar21[-3][5];
          lVar40 = lVar40 + 1;
        }
        if (*ppppppplVar21 != (long ******)0x0) {
          uVar25 = uVar25 + (long)ppppppplVar21[-1][5];
          lVar40 = lVar40 + 1;
        }
        uVar19 = uVar19 + 2;
        ppppppplVar21 = ppppppplVar21 + 4;
      } while ((lVar30 >> 4 & 0xfffffffffffffffeU) != uVar19);
      if ((lVar30 >> 4 & 1U) == 0) goto code_r0x003c4cb1;
    }
    if (ppppppplStack_98[uVar19 * 2 + 1] != (long ******)0x0) {
      uVar25 = uVar25 + (long)ppppppplStack_98[uVar19 * 2][5];
      lVar40 = lVar40 + 1;
    }
  }
code_r0x003c4cb1:
  dStack_a8 = (double)(((float)uVar25 * 100.0) / (float)uVar16);
  ppppppplVar31 = (long *******)&stderr;
  puStack_b0 = &UNK_003c4d2f;
  func_0x0099bd30(_stderr,&UNK_00162d78,lVar40);
  puStack_b0 = &UNK_003c4d4e;
  func_0x0099bd30(SUB84(dStack_a8,0),_stderr,&UNK_00165e38,uVar25,uVar16);
  ppppppplVar39 = (long *******)&ppppppplStack_98;
  ppppppplVar21 = &pppppplStack_78;
  ppppppplVar20 = (long *******)(ulong)uStack_9c;
  puStack_b0 = &UNK_003c4d69;
  _ZN20DeployPatchGenerator13GeneratePatchERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESE_N7android4base11borrowed_fdE
            ();
  ppppppplVar28 = ppppppplStack_98;
  if (ppppppplStack_98 != (long *******)0x0) {
    ppppppplStack_90 = ppppppplStack_98;
    ppppppplVar39 = (long *******)(lStack_88 - (long)ppppppplStack_98);
    puStack_b0 = &UNK_003c4d88;
    _ZdaPvSt11align_val_t();
  }
  if (((ulong)pppppplStack_78 & 1) != 0) {
    ppppppplVar39 = (long *******)((ulong)pppppplStack_78 & 0xfffffffffffffffe);
    puStack_b0 = &UNK_003c4d9f;
    ppppppplVar28 = ppppppplStack_68;
    _ZdaPvSt11align_val_t();
  }
  if ((uStack_58 & 1) != 0) {
    ppppppplVar39 = (long *******)(uStack_58 & 0xfffffffffffffffe);
    puStack_b0 = &UNK_003c4db6;
    ppppppplVar28 = ppppppplStack_48;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (long *******)CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  puStack_b0 = &UNK_003c4ddb;
  func_0x0099bd00();
  puStack_b0 = &stack0xfffffffffffffff8;
  uStack_b8 = uVar25;
  puStack_d8 = &stderr;
  ppbVar32 = &pbStack_190;
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = *(int *)(extraout_RDX + 0x20);
  if (*(int *)(ppppppplVar21 + 4) < *(int *)(extraout_RDX + 0x20)) {
    iVar13 = *(int *)(ppppppplVar21 + 4);
  }
  ppppppplVar41 = (long *******)(long)iVar13;
  ppppppplVar42 = (long *******)*ppppppplVar39;
  ppppppplVar44 = (long *******)((long)ppppppplVar39[2] - (long)ppppppplVar42);
  ppppppplVar24 = (long *******)((long)ppppppplVar44 >> 4);
  ppppppplStack_180 = ppppppplVar28;
  uStack_178 = extraout_RDX;
  ppppppplStack_168 = ppppppplVar39;
  pcStack_d0 = param_1;
  lStack_c8 = unaff_R13;
  uStack_c0 = uVar16;
  if (ppppppplVar24 < ppppppplVar41) {
    ppppppplStack_160 = ppppppplVar21;
    if (-1 < iVar13) {
      pppppplVar3 = ppppppplVar39[1];
      puStack_198 = &UNK_003c4e66;
      pppppplVar17 = (long ******)_Znwm((long)ppppppplVar41 * 0x10);
      ppppppplStack_158 =
           (long *******)((long)pppppplVar17 + ((long)pppppplVar3 - (long)ppppppplVar42));
      puStack_198 = &UNK_003c4e84;
      func_0x0099bda0(pppppplVar17,ppppppplVar42,(long)pppppplVar3 - (long)ppppppplVar42);
      ppppppplVar21 = ppppppplStack_160;
      *ppppppplStack_168 = pppppplVar17;
      ppppppplStack_168[1] = (long ******)ppppppplStack_158;
      ppppppplStack_168[2] = pppppplVar17 + (long)ppppppplVar41 * 2;
      if (ppppppplVar42 != (long *******)0x0) {
        puStack_198 = &UNK_003c4eb4;
        _ZdaPvSt11align_val_t(ppppppplVar42,ppppppplVar44);
      }
      goto code_r0x003c4eb4;
    }
  }
  else {
code_r0x003c4eb4:
    ppppppplStack_100 = (long *******)0x0;
    uStack_f8 = 0;
    ppppppplStack_110 = (long *******)0x0;
    ppppppplStack_108 = (long *******)0x0;
    uStack_f0 = 0x3f800000;
    ppppppplVar31 = (long *******)((long)ppppppplVar21[3] + 7);
    if (((ulong)ppppppplVar21[3] & 1) == 0) {
      ppppppplVar31 = ppppppplVar21 + 3;
    }
    if ((long)*(int *)(ppppppplVar21 + 4) != 0) {
      ppppppplStack_158 = ppppppplVar31 + *(int *)(ppppppplVar21 + 4);
      do {
        ppppppplVar21 = (long *******)*ppppppplVar31;
        ppppppplStack_140 = (long *******)0x0;
        ppppppplStack_138 = (long *******)0x0;
        pbVar18 = (byte *)((ulong)ppppppplVar21[3] & 0xfffffffffffffffc);
        bVar45 = (*pbVar18 & 1) != 0;
        pbVar27 = pbVar18 + 1;
        if (bVar45) {
          pbVar27 = *(byte **)(pbVar18 + 0x10);
        }
        uVar16 = (ulong)(*pbVar18 >> 1);
        if (bVar45) {
          uVar16 = *(ulong *)(pbVar18 + 8);
        }
        puStack_198 = &UNK_003c4f3e;
        func_0x0099c110(&ppppppplStack_140,pbVar27,uVar16,0x10);
        ppppppplVar41 = ppppppplStack_108;
        uVar16 = (long)ppppppplStack_140 + 0x9e3779b9;
        ppppppplVar42 =
             (long *******)
             ((long)ppppppplStack_138 + (uVar16 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16);
        ppppppplStack_160 = ppppppplVar21;
        if (ppppppplStack_108 == (long *******)0x0) {
          ppppppplVar28 = (long *******)0x0;
        }
        else {
          uVar16 = (long)ppppppplStack_108 - 1;
          if (((ulong)ppppppplStack_108 & uVar16) == 0) {
            ppppppplVar28 = (long *******)((ulong)ppppppplVar42 & uVar16);
          }
          else {
            ppppppplVar28 = ppppppplVar42;
            if (ppppppplStack_108 <= ppppppplVar42) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar42 % (ulong)ppppppplStack_108);
            }
          }
          if (ppppppplStack_110[(long)ppppppplVar28] != (long ******)0x0) {
            for (ppppppplVar21 = (long *******)*ppppppplStack_110[(long)ppppppplVar28];
                ppppppplVar21 != (long *******)0x0; ppppppplVar21 = (long *******)*ppppppplVar21) {
              ppppppplVar39 = (long *******)ppppppplVar21[1];
              if (ppppppplVar39 == ppppppplVar42) {
                if (((long *******)ppppppplVar21[2] == ppppppplStack_140) &&
                   ((long *******)ppppppplVar21[3] == ppppppplStack_138)) goto code_r0x003c54cc;
              }
              else {
                if (((ulong)ppppppplStack_108 & uVar16) == 0) {
                  ppppppplVar39 = (long *******)((ulong)ppppppplVar39 & uVar16);
                }
                else if (ppppppplStack_108 <= ppppppplVar39) {
                  if (((ulong)ppppppplVar39 | (ulong)ppppppplStack_108) >> 0x20 == 0) {
                    ppppppplVar39 =
                         (long *******)
                         (((ulong)ppppppplVar39 & 0xffffffff) %
                         ((ulong)ppppppplStack_108 & 0xffffffff));
                  }
                  else {
                    ppppppplVar39 = (long *******)((ulong)ppppppplVar39 % (ulong)ppppppplStack_108);
                  }
                }
                if (ppppppplVar39 != ppppppplVar28) break;
              }
            }
          }
        }
        puStack_198 = &UNK_003c502a;
        ppppppplVar39 = ppppppplStack_138;
        ppppppplVar21 = (long *******)_Znwm(0x38);
        *ppppppplVar21 = (long ******)0x0;
        ppppppplVar21[1] = (long ******)ppppppplVar42;
        ppppppplVar21[2] = (long ******)ppppppplStack_140;
        ppppppplVar21[3] = (long ******)ppppppplStack_138;
        ppppppplVar21[4] = (long ******)0x0;
        ppppppplVar21[5] = (long ******)0x0;
        ppppppplVar21[6] = (long ******)0x0;
        if ((float)ppppppplVar41 * (float)uStack_f0 < (float)(uStack_f8 + 1)) {
          uVar16 = 1;
          if ((long *******)0x2 < ppppppplVar41) {
            uVar16 = (ulong)(((ulong)ppppppplVar41 & (long)ppppppplVar41 - 1U) != 0);
          }
          ppppppplVar28 = (long *******)((long)ppppppplVar41 * 2 | uVar16);
          puStack_198 = &UNK_003c50f3;
          ppppppplStack_170 = ppppppplVar31;
          fVar47 = (float)func_0x009992a0((float)(uStack_f8 + 1) / (float)uStack_f0);
          ppppppplVar24 = (long *******)((long)fVar47 >> 0x3f);
          ppppppplVar31 =
               (long *******)((long)(fVar47 - 9.223372e+18) & (ulong)ppppppplVar24 | (long)fVar47);
          if (ppppppplVar31 < ppppppplVar28) {
            ppppppplVar31 = ppppppplVar28;
          }
          ppppppplVar44 = (long *******)0x2;
          ppppppplVar28 = ppppppplVar31;
          if (ppppppplVar31 == (long *******)0x1) {
code_r0x003c5139:
            ppppppplVar31 = ppppppplVar44;
            bVar45 = ppppppplVar31 < ppppppplVar41;
            ppppppplVar44 = ppppppplVar31;
            if (ppppppplVar41 < ppppppplVar31) goto code_r0x003c5141;
code_r0x003c51b0:
            if (bVar45) {
              puStack_198 = &UNK_003c52c5;
              fVar47 = (float)func_0x009992a0((float)uStack_f8 / (float)uStack_f0);
              ppppppplVar24 = (long *******)((long)fVar47 >> 0x3f);
              ppppppplVar29 =
                   (long *******)
                   ((long)(fVar47 - 9.223372e+18) & (ulong)ppppppplVar24 | (long)fVar47);
              if ((ppppppplVar41 < (long *******)0x3) ||
                 (((long)ppppppplVar41 - 1U & (ulong)ppppppplVar41) != 0)) {
                puStack_198 = &UNK_003c531e;
                ppppppplVar44 = (long *******)_ZNSt3__112__next_primeEm();
                ppppppplVar28 = ppppppplVar29;
              }
              else {
                ppppppplVar44 = ppppppplVar29;
                if ((long *******)0x1 < ppppppplVar29) {
                  lVar30 = 0x3f;
                  if ((long)ppppppplVar29 - 1U != 0) {
                    for (; (long)ppppppplVar29 - 1U >> lVar30 == 0; lVar30 = lVar30 + -1) {
                    }
                  }
                  bVar23 = -((byte)lVar30 ^ 0x3f);
                  ppppppplVar24 = (long *******)(ulong)CONCAT31((int3)((ulong)lVar30 >> 8),bVar23);
                  ppppppplVar44 = (long *******)(1L << (bVar23 & 0x3f));
                }
              }
              if (ppppppplVar44 < ppppppplVar31) {
                ppppppplVar44 = ppppppplVar31;
              }
              if (ppppppplVar41 <= ppppppplVar44) goto code_r0x003c5400;
              if (ppppppplVar44 != (long *******)0x0) goto code_r0x003c5141;
              bVar45 = true;
              ppppppplVar44 = (long *******)0x0;
              ppppppplVar39 = (long *******)0x0;
              goto code_r0x003c5167;
            }
          }
          else {
            if (((ulong)ppppppplVar31 & (long)ppppppplVar31 - 1U) != 0) {
              puStack_198 = &UNK_003c5132;
              ppppppplVar44 = (long *******)_ZNSt3__112__next_primeEm();
              ppppppplVar28 = ppppppplVar31;
              ppppppplVar41 = ppppppplStack_108;
              goto code_r0x003c5139;
            }
            bVar45 = ppppppplVar31 < ppppppplVar41;
            ppppppplVar44 = ppppppplVar31;
            if (ppppppplVar31 <= ppppppplVar41) goto code_r0x003c51b0;
code_r0x003c5141:
            if ((long *******)0x1fffffffffffffff < ppppppplVar44) {
              puStack_198 = &UNK_003c58cb;
              func_0x0032fc40();
              goto code_r0x003c58cb;
            }
            puStack_198 = &UNK_003c5165;
            ppppppplVar39 = (long *******)_Znwm((long)ppppppplVar44 * 8);
            bVar45 = false;
code_r0x003c5167:
            ppppppplVar31 = ppppppplStack_110;
            bVar46 = ppppppplStack_110 != (long *******)0x0;
            ppppppplStack_110 = ppppppplVar39;
            if (bVar46) {
              puStack_198 = &UNK_003c5181;
              _ZdaPvSt11align_val_t(ppppppplVar31,(long)ppppppplStack_108 << 3);
            }
            ppppppplStack_108 = ppppppplVar44;
            if (!bVar45) {
              uVar16 = (long)ppppppplVar44 - 1;
              uVar19 = (ulong)((uint)ppppppplVar44 & 3);
              if (2 < uVar16) {
                uVar25 = 0;
                do {
                  ppppppplStack_110[uVar25] = (long ******)0x0;
                  ppppppplStack_110[uVar25 + 1] = (long ******)0x0;
                  ppppppplStack_110[uVar25 + 2] = (long ******)0x0;
                  ppppppplStack_110[uVar25 + 3] = (long ******)0x0;
                  uVar25 = uVar25 + 4;
                  if (((ulong)ppppppplVar44 & 0x1ffffffffffffffc) == uVar25)
                  goto joined_r0x003c522f;
                } while( true );
              }
              uVar25 = 0;
              do {
                ppppppplStack_110[uVar25] = (long ******)0x0;
                uVar25 = uVar25 + 1;
                uVar19 = uVar19 - 1;
joined_r0x003c522f:
              } while (uVar19 != 0);
              if (ppppppplStack_100 != (long *******)0x0) {
                ppppppplVar39 = (long *******)ppppppplStack_100[1];
                if (((ulong)ppppppplVar44 & uVar16) == 0) {
                  ppppppplVar39 = (long *******)((ulong)ppppppplVar39 & uVar16);
                }
                else if (ppppppplVar44 <= ppppppplVar39) {
                  if (((ulong)ppppppplVar39 | (ulong)ppppppplVar44) >> 0x20 == 0) {
                    ppppppplVar39 =
                         (long *******)
                         (((ulong)ppppppplVar39 & 0xffffffff) % ((ulong)ppppppplVar44 & 0xffffffff))
                    ;
                  }
                  else {
                    ppppppplVar39 = (long *******)((ulong)ppppppplVar39 % (ulong)ppppppplVar44);
                  }
                }
                ppppppplStack_110[(long)ppppppplVar39] = (long ******)&ppppppplStack_100;
                ppppppplVar31 = (long *******)*ppppppplStack_100;
                ppppppplVar28 = ppppppplStack_100;
                while (ppppppplVar20 = (long *******)0x0, ppppppplVar31 != (long *******)0x0) {
                  ppppppplVar20 = (long *******)ppppppplVar31[1];
                  if (((ulong)ppppppplVar44 & uVar16) == 0) {
                    ppppppplVar20 = (long *******)((ulong)ppppppplVar20 & uVar16);
                  }
                  else if (ppppppplVar44 <= ppppppplVar20) {
                    if (((ulong)ppppppplVar20 | (ulong)ppppppplVar44) >> 0x20 == 0) {
                      ppppppplVar20 =
                           (long *******)
                           (((ulong)ppppppplVar20 & 0xffffffff) %
                           ((ulong)ppppppplVar44 & 0xffffffff));
                    }
                    else {
                      ppppppplVar20 = (long *******)((ulong)ppppppplVar20 % (ulong)ppppppplVar44);
                    }
                  }
                  if (ppppppplVar20 != ppppppplVar39) {
                    if (ppppppplStack_110[(long)ppppppplVar20] == (long ******)0x0) {
                      ppppppplStack_110[(long)ppppppplVar20] = (long ******)ppppppplVar28;
                      ppppppplVar39 = ppppppplVar20;
                    }
                    else {
                      *ppppppplVar28 = *ppppppplVar31;
                      *ppppppplVar31 = (long ******)*ppppppplStack_110[(long)ppppppplVar20];
                      *ppppppplStack_110[(long)ppppppplVar20] = (long *****)ppppppplVar31;
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
          ppppppplVar41 = ppppppplStack_108;
          ppppppplVar31 = ppppppplStack_170;
          if (((ulong)ppppppplStack_108 & (long)ppppppplStack_108 - 1U) == 0) {
            ppppppplVar28 = (long *******)((long)ppppppplStack_108 - 1U & (ulong)ppppppplVar42);
          }
          else {
            ppppppplVar28 = ppppppplVar42;
            if (ppppppplStack_108 <= ppppppplVar42) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar42 % (ulong)ppppppplStack_108);
            }
          }
        }
        pppppplVar3 = ppppppplStack_110[(long)ppppppplVar28];
        if (pppppplVar3 == (long ******)0x0) {
          *ppppppplVar21 = (long ******)ppppppplStack_100;
          ppppppplStack_110[(long)ppppppplVar28] = (long ******)&ppppppplStack_100;
          ppppppplVar39 = ppppppplVar21;
          if (ppppppplStack_100 != (long *******)0x0) {
            ppppppplVar28 = (long *******)ppppppplStack_100[1];
            if (((ulong)ppppppplVar41 & (long)ppppppplVar41 - 1U) == 0) {
              ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & (long)ppppppplVar41 - 1U);
            }
            else if (ppppppplVar41 <= ppppppplVar28) {
              if (((ulong)ppppppplVar28 | (ulong)ppppppplVar41) >> 0x20 == 0) {
                ppppppplVar28 =
                     (long *******)
                     (((ulong)ppppppplVar28 & 0xffffffff) % ((ulong)ppppppplVar41 & 0xffffffff));
              }
              else {
                ppppppplVar28 = (long *******)((ulong)ppppppplVar28 % (ulong)ppppppplVar41);
              }
            }
            ppppppplStack_110[(long)ppppppplVar28] = (long ******)ppppppplVar21;
          }
        }
        else {
          *ppppppplVar21 = (long ******)*pppppplVar3;
          *pppppplVar3 = (long *****)ppppppplVar21;
          ppppppplVar39 = ppppppplStack_100;
        }
        ppppppplStack_100 = ppppppplVar39;
        uStack_f8 = uStack_f8 + 1;
code_r0x003c54cc:
        uStack_150 = (long *******)ppppppplVar21[5];
        ppppppplStack_118 = ppppppplVar21 + 4;
        ppppppplStack_128 = (long *******)&uStack_150;
        ppppppplStack_120 = (long *******)&ppppppplStack_130;
        ppppppplStack_130 = ppppppplStack_160;
        if (uStack_150 < ppppppplVar21[6]) {
          *uStack_150 = (long ******)ppppppplStack_160;
          ppppppplVar39 = uStack_150 + 1;
        }
        else {
          puStack_198 = &UNK_003c5523;
          _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_128);
          ppppppplVar39 = uStack_150;
        }
        ppppppplVar21[5] = (long ******)ppppppplVar39;
        ppppppplVar31 = ppppppplVar31 + 1;
      } while (ppppppplVar31 != ppppppplStack_158);
    }
    ppppppplVar24 = *(long ********)(uStack_178 + 0x18);
    ppppppplVar41 = (long *******)((long)ppppppplVar24 + 7);
    if (((ulong)ppppppplVar24 & 1) == 0) {
      ppppppplVar41 = (long *******)(uStack_178 + 0x18);
    }
    if ((long)*(int *)(uStack_178 + 0x20) != 0) {
      ppppppplStack_160 = ppppppplVar41 + *(int *)(uStack_178 + 0x20);
      ppppppplVar44 = (long *******)0x0;
code_r0x003c56a1:
      ppppppplVar31 = (long *******)*ppppppplVar41;
      ppppppplVar44 = (long *******)((long)ppppppplVar44 + (long)ppppppplVar31[5]);
      ppppppplStack_140 = (long *******)0x0;
      ppppppplStack_138 = (long *******)0x0;
      pbVar18 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
      bVar45 = (*pbVar18 & 1) != 0;
      pbVar27 = pbVar18 + 1;
      if (bVar45) {
        pbVar27 = *(byte **)(pbVar18 + 0x10);
      }
      uVar16 = (ulong)(*pbVar18 >> 1);
      if (bVar45) {
        uVar16 = *(ulong *)(pbVar18 + 8);
      }
      ppppppplVar24 = (long *******)0x10;
      puStack_198 = &UNK_003c56e4;
      func_0x0099c110(&ppppppplStack_140,pbVar27,uVar16);
      if ((ppppppplStack_108 != (long *******)0x0) && (uStack_f8 != 0)) {
        uVar16 = (long)ppppppplStack_140 + 0x9e3779b9;
        ppppppplVar24 =
             (long *******)
             ((long)ppppppplStack_138 + (uVar16 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16);
        uVar16 = (long)ppppppplStack_108 - 1;
        if (((ulong)ppppppplStack_108 & uVar16) == 0) {
          ppppppplVar39 = (long *******)((ulong)ppppppplVar24 & uVar16);
        }
        else {
          ppppppplVar39 = ppppppplVar24;
          if (ppppppplStack_108 <= ppppppplVar24) {
            ppppppplVar39 = (long *******)((ulong)ppppppplVar24 % (ulong)ppppppplStack_108);
          }
        }
        ppppppplVar20 = ppppppplStack_140;
        if (ppppppplStack_110[(long)ppppppplVar39] != (long ******)0x0) {
          for (ppppplVar26 = *ppppppplStack_110[(long)ppppppplVar39]; ppppplVar26 != (long *****)0x0
              ; ppppplVar26 = (long *****)*ppppplVar26) {
            ppppppplVar28 = (long *******)ppppplVar26[1];
            if (ppppppplVar28 == ppppppplVar24) {
              if (((long *******)ppppplVar26[2] == ppppppplStack_140) &&
                 ((long *******)ppppplVar26[3] == ppppppplStack_138)) {
                ppppppplVar39 = (long *******)ppppplVar26[4];
                ppppppplVar21 = (long *******)ppppplVar26[5];
                if (ppppppplVar39 != ppppppplVar21) {
                  pbStack_188 = (byte *)((ulong)ppppppplVar31[3] & 0xfffffffffffffffc);
                  bVar23 = *pbStack_188;
                  ppppppplVar20 = (long *******)(ulong)bVar23;
                  if ((bVar23 & 1) == 0) {
                    ppppppplVar28 = (long *******)(ulong)(bVar23 >> 1);
                  }
                  else {
                    ppppppplVar28 = *(long ********)(pbStack_188 + 8);
                  }
                  pbStack_190 = pbStack_188 + 1;
                  uStack_178 = CONCAT44(uStack_178._4_4_,(uint)bVar23);
                  ppppppplStack_170 = ppppppplVar31;
                  ppppppplStack_158 = ppppppplVar44;
                  goto code_r0x003c5845;
                }
                break;
              }
            }
            else {
              if (((ulong)ppppppplStack_108 & uVar16) == 0) {
                ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & uVar16);
              }
              else if (ppppppplStack_108 <= ppppppplVar28) {
                if (((ulong)ppppppplVar28 | (ulong)ppppppplStack_108) >> 0x20 == 0) {
                  ppppppplVar28 =
                       (long *******)
                       (((ulong)ppppppplVar28 & 0xffffffff) %
                       ((ulong)ppppppplStack_108 & 0xffffffff));
                }
                else {
                  ppppppplVar28 = (long *******)((ulong)ppppppplVar28 % (ulong)ppppppplStack_108);
                }
              }
              if (ppppppplVar28 != ppppppplVar39) break;
            }
          }
        }
      }
      goto code_r0x003c5690;
    }
    ppppppplVar44 = (long *******)0x0;
code_r0x003c5568:
    ppppppplVar28 = (long *******)*ppppppplStack_168;
    ppppppplVar39 = (long *******)ppppppplStack_168[1];
    ppppppplVar42 = ppppppplVar44;
    ppppppplVar29 = ppppppplStack_100;
    if (ppppppplVar28 != ppppppplVar39) {
      uVar16 = (long)ppppppplVar39 - (long)ppppppplVar28 >> 4;
      lVar30 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      ppppppplVar29 = (long *******)((ulong)(((uint)lVar30 ^ 0x3f) * 2) ^ 0x7e);
      ppppppplVar24 = (long *******)0x1;
      ppbVar32 = &puStack_198;
      puStack_198 = &UNK_003c559f;
      ppuVar36 = &puStack_b0;
      goto code_r0x003c58e0;
    }
    while (ppppppplVar28 = ppppppplStack_110, ppppppplVar29 != (long *******)0x0) {
      ppppppplVar42 = (long *******)*ppppppplVar29;
      pppppplVar3 = ppppppplVar29[4];
      ppppppplStack_110 = ppppppplVar28;
      if (pppppplVar3 != (long ******)0x0) {
        ppppppplVar29[5] = pppppplVar3;
        puStack_198 = &UNK_003c5621;
        _ZdaPvSt11align_val_t(pppppplVar3,(long)ppppppplVar29[6] - (long)pppppplVar3);
      }
      ppppppplVar39 = (long *******)0x38;
      puStack_198 = &UNK_003c55fd;
      _ZdaPvSt11align_val_t(ppppppplVar29);
      ppppppplVar29 = ppppppplVar42;
    }
    ppppppplStack_110 = (long *******)0x0;
    if (ppppppplVar28 != (long *******)0x0) {
      ppppppplVar39 = (long *******)((long)ppppppplStack_108 << 3);
      puStack_198 = &UNK_003c55c6;
      _ZdaPvSt11align_val_t();
    }
    ppppppplVar31 = (long *******)0x0;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
      return ppppppplVar44;
    }
code_r0x003c58cb:
    puStack_198 = &UNK_003c58d0;
    func_0x0099bd00();
  }
  puStack_198 = &UNK_003c58d5;
  func_0x00330ca0();
  ppppppplVar29 = extraout_RDX_00;
  ppuVar36 = &puStack_b0;
code_r0x003c58e0:
  do {
    ppppppplVar43 = ppppppplVar39;
    puVar37 = (undefined1 *)((long)ppbVar32 + -8);
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    puVar33 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined ***)((long)ppbVar32 + -8) = ppuVar36;
    *(long ********)((long)ppbVar32 + -0x10) = ppppppplVar44;
    *(long ********)((long)ppbVar32 + -0x18) = ppppppplVar42;
    *(long ********)((long)ppbVar32 + -0x20) = ppppppplVar21;
    *(long ********)((long)ppbVar32 + -0x28) = ppppppplVar41;
    *(long ********)((long)ppbVar32 + -0x30) = ppppppplVar31;
    *(int *)((long)ppbVar32 + -0x4c) = (int)ppppppplVar24;
    *(undefined8 *)((long)ppbVar32 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppppplVar41 = ppppppplVar43 + -2;
    *(long ********)((long)ppbVar32 + -0x60) = ppppppplVar43 + -4;
    *(long ********)((long)ppbVar32 + -0x58) = ppppppplVar43 + -6;
    ppppppplVar21 = ppppppplVar28;
    ppppppplVar39 = ppppppplVar43;
code_r0x003c591e:
    ppppppplVar24 = (long *******)((long)ppppppplVar43 - (long)ppppppplVar21 >> 4);
    ppppppplVar31 = ppppppplVar21;
    if (ppppppplVar24 < (long *******)0x6) {
      ppppppplVar42 =
           (long *******)(&UNK_001fdcb4 + *(int *)(&UNK_001fdcb4 + (long)ppppppplVar24 * 4));
      switch(ppppppplVar24) {
      default:
        goto code_r0x003c6596;
      case (long *******)0x2:
        ppppppplVar42 = (long *******)*ppppppplVar21;
        if ((long)ppppppplVar42[4] <= (long)ppppppplVar43[-2][4]) goto code_r0x003c6596;
code_r0x003c6030:
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar43[-1];
        *ppppppplVar21 = *ppppppplVar41;
        ppppppplVar21[1] = pppppplVar3;
        break;
      case (long *******)0x3:
        ppppppplVar24 = ppppppplVar21 + 2;
        ppppppplVar39 = (long *******)*ppppppplVar21;
        ppppppplVar42 = (long *******)ppppppplVar21[2][4];
        if ((long)ppppppplVar39[4] <= (long)ppppppplVar42) {
          if ((long)ppppppplVar43[-2][4] < (long)ppppppplVar42) {
            pppppplVar3 = ppppppplVar21[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            pppppplVar3 = ppppppplVar43[-1];
            *ppppppplVar24 = *ppppppplVar41;
            ppppppplVar21[3] = pppppplVar3;
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
            *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
            *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
            goto code_r0x003c656c;
          }
          goto code_r0x003c6596;
        }
        if ((long)ppppppplVar43[-2][4] < (long)ppppppplVar42) goto code_r0x003c6030;
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar24;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar24 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
        ppppppplVar42 = (long *******)(*ppppppplVar41)[4];
        if ((long)ppppppplVar21[2][4] <= (long)ppppppplVar42) goto code_r0x003c6596;
        pppppplVar3 = ppppppplVar21[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar43[-1];
        *ppppppplVar24 = *ppppppplVar41;
        ppppppplVar21[3] = pppppplVar3;
        break;
      case (long *******)0x4:
        ppppppplVar24 = ppppppplVar21 + 2;
        ppppppplVar42 = ppppppplVar21 + 4;
        ppppppplVar20 = (long *******)*ppppppplVar21;
        ppppplVar26 = ppppppplVar21[2][4];
        pppppplVar3 = ppppppplVar21[4];
        ppppppplVar28 = (long *******)pppppplVar3[4];
        if ((long)ppppplVar26 < (long)ppppppplVar20[4]) {
          if ((long)ppppppplVar28 < (long)ppppplVar26) {
            pppppplVar3 = ppppppplVar21[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar21 = *ppppppplVar42;
            ppppppplVar21[1] = ppppppplVar21[5];
          }
          else {
            pppppplVar17 = ppppppplVar21[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar17;
            *ppppppplVar21 = *ppppppplVar24;
            ppppppplVar21[1] = ppppppplVar21[3];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar24 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
            *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
            *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
            if ((long)ppppppplVar21[2][4] <= (long)pppppplVar3[4]) goto code_r0x003c651f;
            pppppplVar3 = ppppppplVar21[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar24 = *ppppppplVar42;
            ppppppplVar21[3] = ppppppplVar21[5];
          }
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar42 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
          *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
          *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
        }
        else if ((long)ppppppplVar28 < (long)ppppplVar26) {
          pppppplVar3 = ppppppplVar21[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar24 = *ppppppplVar42;
          ppppppplVar21[3] = ppppppplVar21[5];
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar42 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
          *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
          *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
          if ((long)ppppppplVar21[2][4] < (long)(*ppppppplVar21)[4]) {
            pppppplVar3 = ppppppplVar21[1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar21 = *ppppppplVar24;
            ppppppplVar21[1] = ppppppplVar21[3];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar24 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
            *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
            *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
          }
        }
code_r0x003c651f:
        ppppppplVar39 = (long *******)*ppppppplVar42;
        if ((long)(*ppppppplVar41)[4] < (long)ppppppplVar39[4]) {
          pppppplVar3 = ppppppplVar21[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar42;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar43[-1];
          *ppppppplVar42 = *ppppppplVar41;
          ppppppplVar21[5] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
          *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
          *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
          ppppppplVar39 = (long *******)*ppppppplVar24;
          if ((long)(*ppppppplVar42)[4] < (long)ppppppplVar39[4]) {
            pppppplVar3 = ppppppplVar21[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            *ppppppplVar24 = *ppppppplVar42;
            ppppppplVar21[3] = ppppppplVar21[5];
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
            *(undefined4 *)ppppppplVar42 = *(undefined4 *)((long)ppbVar32 + -0x48);
            *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
            *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
            *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
code_r0x003c656c:
            ppppppplVar42 = (long *******)*ppppppplVar21;
            ppppppplVar41 = ppppppplVar21 + 2;
            if ((long)(*ppppppplVar41)[4] < (long)ppppppplVar42[4]) {
              pppppplVar3 = ppppppplVar21[1];
              *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
              *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
              *ppppppplVar21 = *ppppppplVar41;
              ppppppplVar21[1] = ppppppplVar21[3];
              uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
              uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
              uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
              *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
              *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
              *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
              *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
            }
          }
        }
        goto code_r0x003c6596;
      case (long *******)0x5:
        ppppppplVar43 = ppppppplVar29;
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar32 + -0x38)) {
          ppppppplVar39 = ppppppplVar21 + 2;
          ppppppplVar20 = ppppppplVar21 + 4;
          ppppppplVar42 = ppppppplVar21 + 6;
          ppppppplVar31 = *(long ********)((long)ppbVar32 + -0x30);
          ppppppplVar43 = *(long ********)((long)ppbVar32 + -0x18);
          puVar37 = *(undefined1 **)((long)ppbVar32 + -8);
          goto code_r0x003c65c0;
        }
        goto code_r0x003c65b4;
      }
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
      goto code_r0x003c6596;
    }
    if ((long)ppppppplVar24 < 0x18) {
      ppppppplVar42 = ppppppplVar21 + 2;
      if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
        if (ppppppplVar42 != ppppppplVar43 && ppppppplVar21 != ppppppplVar43) {
          ppppppplVar41 = ppppppplVar21 + 3;
          do {
            ppppppplVar24 = ppppppplVar42;
            ppppppplVar39 = (long *******)*ppppppplVar21;
            pppppplVar3 = ppppppplVar21[2];
            ppppppplVar28 = (long *******)pppppplVar3[4];
            if ((long)ppppppplVar28 < (long)ppppppplVar39[4]) {
              ppppppplVar39 = (long *******)ppppppplVar21[3];
              ppppppplVar28 = ppppppplVar41;
              do {
                ppppppplVar21 = ppppppplVar28;
                *(undefined4 *)(ppppppplVar21 + -1) = *(undefined4 *)(ppppppplVar21 + -3);
                *(undefined4 *)((long)ppppppplVar21 + -4) =
                     *(undefined4 *)((long)ppppppplVar21 + -0x14);
                *(undefined4 *)ppppppplVar21 = *(undefined4 *)(ppppppplVar21 + -2);
                *(undefined4 *)((long)ppppppplVar21 + 4) =
                     *(undefined4 *)((long)ppppppplVar21 + -0xc);
                ppppppplVar20 = (long *******)pppppplVar3[4];
                ppppppplVar28 = ppppppplVar21 + -2;
              } while ((long)ppppppplVar20 < (long)ppppppplVar21[-5][4]);
              ppppppplVar21[-3] = pppppplVar3;
              *ppppppplVar28 = (long ******)ppppppplVar39;
            }
            ppppppplVar42 = ppppppplVar24 + 2;
            ppppppplVar41 = ppppppplVar41 + 2;
            ppppppplVar21 = ppppppplVar24;
          } while (ppppppplVar42 != ppppppplVar43);
        }
        goto code_r0x003c6596;
      }
      if (ppppppplVar42 == ppppppplVar43 || ppppppplVar21 == ppppppplVar43) goto code_r0x003c6596;
      lVar30 = 0x10;
      ppppppplVar41 = ppppppplVar21;
      goto code_r0x003c611e;
    }
    if (ppppppplVar29 == (long *******)0x0) {
      ppppppplVar42 = ppppppplVar24;
      if (ppppppplVar21 == ppppppplVar43) goto code_r0x003c6596;
      ppppppplVar20 = (long *******)((long)ppppppplVar24 - 2U >> 1);
      ppppppplVar39 = ppppppplVar20;
      goto code_r0x003c6197;
    }
    ppppppplVar31 = ppppppplVar21 + ((ulong)ppppppplVar24 & 0xfffffffffffffffe);
    ppppplVar26 = (*ppppppplVar41)[4];
    if (ppppppplVar24 < (long *******)0x81) {
      ppppplVar4 = (*ppppppplVar21)[4];
      ppppppplVar39 = (long *******)*ppppppplVar31;
      if ((long)ppppplVar4 < (long)ppppppplVar39[4]) {
        if ((long)ppppplVar26 < (long)ppppplVar4) {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar43[-1];
          *ppppppplVar31 = *ppppppplVar41;
          ppppppplVar31[1] = pppppplVar3;
        }
        else {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar21[1];
          *ppppppplVar31 = *ppppppplVar21;
          ppppppplVar31[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
          if ((long)(*ppppppplVar21)[4] <= (long)(*ppppppplVar41)[4]) goto code_r0x003c5d7e;
          pppppplVar3 = ppppppplVar21[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar43[-1];
          *ppppppplVar21 = *ppppppplVar41;
          ppppppplVar21[1] = pppppplVar3;
        }
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
        *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
        *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
      }
      else if ((long)ppppplVar26 < (long)ppppplVar4) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar43[-1];
        *ppppppplVar21 = *ppppppplVar41;
        ppppppplVar21[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
        *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
        *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
        if ((long)(*ppppppplVar21)[4] < (long)(*ppppppplVar31)[4]) {
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar21[1];
          *ppppppplVar31 = *ppppppplVar21;
          ppppppplVar31[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
          *(undefined4 *)ppppppplVar21 = *(undefined4 *)((long)ppbVar32 + -0x48);
          *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
        }
      }
    }
    else {
      ppppplVar4 = (*ppppppplVar31)[4];
      if ((long)ppppplVar4 < (long)(*ppppppplVar21)[4]) {
        if ((long)ppppplVar26 < (long)ppppplVar4) {
          pppppplVar3 = ppppppplVar21[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar43[-1];
          *ppppppplVar21 = *ppppppplVar41;
          ppppppplVar21[1] = pppppplVar3;
        }
        else {
          pppppplVar3 = ppppppplVar21[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[1];
          *ppppppplVar21 = *ppppppplVar31;
          ppppppplVar21[1] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
          if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar41)[4]) goto code_r0x003c5ab9;
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar43[-1];
          *ppppppplVar31 = *ppppppplVar41;
          ppppppplVar31[1] = pppppplVar3;
        }
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar41 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar43[-1] = pppppplVar3;
      }
      else if ((long)ppppplVar26 < (long)ppppplVar4) {
        pppppplVar3 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        pppppplVar3 = ppppppplVar43[-1];
        *ppppppplVar31 = *ppppppplVar41;
        ppppppplVar31[1] = pppppplVar3;
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar41 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar43[-1] = pppppplVar3;
        if ((long)(*ppppppplVar31)[4] < (long)(*ppppppplVar21)[4]) {
          pppppplVar3 = ppppppplVar21[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[1];
          *ppppppplVar21 = *ppppppplVar31;
          ppppppplVar21[1] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
        }
      }
code_r0x003c5ab9:
      ppppppplVar39 = ppppppplVar21 + 2;
      ppppppplVar24 = ppppppplVar31 + -2;
      ppppplVar26 = ppppppplVar31[-2][4];
      if ((long)ppppplVar26 < (long)ppppppplVar21[2][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar26) {
          pppppplVar3 = ppppppplVar21[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          plVar5 = *(long **)((long)ppbVar32 + -0x60);
          pppppplVar3 = (long ******)plVar5[1];
          *ppppppplVar39 = (long ******)*plVar5;
          ppppppplVar21[3] = pppppplVar3;
          lVar30 = *(long *)((long)ppbVar32 + -0x40);
          *plVar5 = *(long *)((long)ppbVar32 + -0x48);
          plVar5[1] = lVar30;
        }
        else {
          pppppplVar3 = ppppppplVar21[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[-1];
          *ppppppplVar39 = *ppppppplVar24;
          ppppppplVar21[3] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar24 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar3;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)(*ppppppplVar24)[4]) {
            pppppplVar3 = ppppppplVar31[-1];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            plVar5 = *(long **)((long)ppbVar32 + -0x60);
            pppppplVar3 = (long ******)plVar5[1];
            *ppppppplVar24 = (long ******)*plVar5;
            ppppppplVar31[-1] = pppppplVar3;
            lVar30 = *(long *)((long)ppbVar32 + -0x40);
            *plVar5 = *(long *)((long)ppbVar32 + -0x48);
            plVar5[1] = lVar30;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x60) + 0x20) < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar31[-1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        plVar5 = *(long **)((long)ppbVar32 + -0x60);
        pppppplVar3 = (long ******)plVar5[1];
        *ppppppplVar24 = (long ******)*plVar5;
        ppppppplVar31[-1] = pppppplVar3;
        lVar30 = *(long *)((long)ppbVar32 + -0x40);
        *plVar5 = *(long *)((long)ppbVar32 + -0x48);
        plVar5[1] = lVar30;
        if ((long)(*ppppppplVar24)[4] < (long)(*ppppppplVar39)[4]) {
          pppppplVar3 = ppppppplVar21[3];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[-1];
          *ppppppplVar39 = *ppppppplVar24;
          ppppppplVar21[3] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar24 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[-1] = pppppplVar3;
        }
      }
      ppppppplVar39 = ppppppplVar21 + 4;
      ppppppplVar42 = ppppppplVar31 + 2;
      ppppplVar26 = ppppppplVar31[2][4];
      if ((long)ppppplVar26 < (long)ppppppplVar21[4][4]) {
        if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar26) {
          pppppplVar3 = ppppppplVar21[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          plVar5 = *(long **)((long)ppbVar32 + -0x58);
          pppppplVar3 = (long ******)plVar5[1];
          *ppppppplVar39 = (long ******)*plVar5;
          ppppppplVar21[5] = pppppplVar3;
          lVar30 = *(long *)((long)ppbVar32 + -0x40);
          *plVar5 = *(long *)((long)ppbVar32 + -0x48);
          plVar5[1] = lVar30;
        }
        else {
          pppppplVar3 = ppppppplVar21[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[3];
          *ppppppplVar39 = *ppppppplVar42;
          ppppppplVar21[5] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar42 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar3;
          if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)(*ppppppplVar42)[4]) {
            pppppplVar3 = ppppppplVar31[3];
            *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar42;
            *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
            plVar5 = *(long **)((long)ppbVar32 + -0x58);
            pppppplVar3 = (long ******)plVar5[1];
            *ppppppplVar42 = (long ******)*plVar5;
            ppppppplVar31[3] = pppppplVar3;
            lVar30 = *(long *)((long)ppbVar32 + -0x40);
            *plVar5 = *(long *)((long)ppbVar32 + -0x48);
            plVar5[1] = lVar30;
          }
        }
      }
      else if (*(long *)(**(long **)((long)ppbVar32 + -0x58) + 0x20) < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar31[3];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar42;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        plVar5 = *(long **)((long)ppbVar32 + -0x58);
        pppppplVar3 = (long ******)plVar5[1];
        *ppppppplVar42 = (long ******)*plVar5;
        ppppppplVar31[3] = pppppplVar3;
        lVar30 = *(long *)((long)ppbVar32 + -0x40);
        *plVar5 = *(long *)((long)ppbVar32 + -0x48);
        plVar5[1] = lVar30;
        if ((long)(*ppppppplVar42)[4] < (long)(*ppppppplVar39)[4]) {
          pppppplVar3 = ppppppplVar21[5];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          pppppplVar3 = ppppppplVar31[3];
          *ppppppplVar39 = *ppppppplVar42;
          ppppppplVar21[5] = pppppplVar3;
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar42 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[3] = pppppplVar3;
        }
      }
      ppppppplVar20 = (long *******)ppppppplVar31[-2];
      ppppppplVar39 = (long *******)(*ppppppplVar31)[4];
      ppppppplVar28 = (long *******)ppppppplVar31[2][4];
      if ((long)ppppppplVar39 < (long)ppppppplVar20[4]) {
        if ((long)ppppppplVar28 < (long)ppppppplVar39) {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar24 = *ppppppplVar42;
          ppppppplVar31[-1] = ppppppplVar31[3];
        }
        else {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar24 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
          ppppppplVar39 = (long *******)ppppppplVar31[2][4];
          if ((long)(*ppppppplVar31)[4] <= (long)ppppppplVar39) goto code_r0x003c5d66;
          pppppplVar3 = ppppppplVar31[1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar31 = *ppppppplVar42;
          ppppppplVar31[1] = ppppppplVar31[3];
        }
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar42 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar3;
      }
      else if ((long)ppppppplVar28 < (long)ppppppplVar39) {
        pppppplVar3 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
        *ppppppplVar31 = *ppppppplVar42;
        ppppppplVar31[1] = ppppppplVar31[3];
        pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
        *ppppppplVar42 = *(long *******)((long)ppbVar32 + -0x48);
        ppppppplVar31[3] = pppppplVar3;
        ppppppplVar39 = (long *******)(*ppppppplVar31)[4];
        if ((long)ppppppplVar39 < (long)ppppppplVar31[-2][4]) {
          pppppplVar3 = ppppppplVar31[-1];
          *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar24;
          *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
          *ppppppplVar24 = *ppppppplVar31;
          ppppppplVar31[-1] = ppppppplVar31[1];
          pppppplVar3 = *(long *******)((long)ppbVar32 + -0x40);
          *ppppppplVar31 = *(long *******)((long)ppbVar32 + -0x48);
          ppppppplVar31[1] = pppppplVar3;
        }
      }
code_r0x003c5d66:
      pppppplVar3 = ppppppplVar21[1];
      *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
      *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
      pppppplVar3 = ppppppplVar31[1];
      *ppppppplVar21 = *ppppppplVar31;
      ppppppplVar21[1] = pppppplVar3;
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
    pppppplVar3 = *ppppppplVar21;
    if (*(char *)((long)ppbVar32 + -0x4c) != '\x01') {
      ppppplVar26 = pppppplVar3[4];
      if ((long)ppppppplVar21[-2][4] < (long)ppppplVar26) goto code_r0x003c5db2;
      ppppppplVar31 = ppppppplVar21;
      if ((long)ppppplVar26 < (long)ppppppplVar43[-2][4]) {
        do {
          ppppppplVar24 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar24)[4] <= (long)ppppplVar26);
      }
      else {
        do {
          ppppppplVar31 = ppppppplVar31 + 2;
          if (ppppppplVar43 <= ppppppplVar31) break;
          ppppppplVar39 = (long *******)*ppppppplVar31;
        } while ((long)ppppppplVar39[4] <= (long)ppppplVar26);
      }
      ppppppplVar24 = ppppppplVar43;
      if (ppppppplVar31 < ppppppplVar43) {
        do {
          ppppppplVar39 = (long *******)ppppppplVar24[-2];
          ppppppplVar24 = ppppppplVar24 + -2;
        } while ((long)ppppplVar26 < (long)ppppppplVar39[4]);
      }
      pppppplVar17 = ppppppplVar21[1];
      while (ppppppplVar31 < ppppppplVar24) {
        pppppplVar11 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar11;
        pppppplVar11 = ppppppplVar24[1];
        *ppppppplVar31 = *ppppppplVar24;
        ppppppplVar31[1] = pppppplVar11;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar24 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar24 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar24 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar24 + 0xc) = uVar10;
        ppppppplVar39 = (long *******)pppppplVar3[4];
        do {
          ppppppplVar28 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar28)[4] <= (long)ppppppplVar39);
        do {
          ppppppplVar28 = (long *******)ppppppplVar24[-2];
          ppppppplVar24 = ppppppplVar24 + -2;
        } while ((long)ppppppplVar39 < (long)ppppppplVar28[4]);
      }
      if (ppppppplVar21 != ppppppplVar31 + -2) {
        uVar8 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
        uVar9 = *(undefined4 *)(ppppppplVar31 + -1);
        uVar10 = *(undefined4 *)((long)ppppppplVar31 + -4);
        *(undefined4 *)ppppppplVar21 = *(undefined4 *)(ppppppplVar31 + -2);
        *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
      }
      ppppppplVar31[-2] = pppppplVar3;
      ppppppplVar31[-1] = pppppplVar17;
      *(undefined4 *)((long)ppbVar32 + -0x4c) = 0;
      ppppppplVar21 = ppppppplVar31;
      goto code_r0x003c591e;
    }
    ppppplVar26 = pppppplVar3[4];
code_r0x003c5db2:
    pppppplVar17 = ppppppplVar21[1];
    lVar30 = 0;
    do {
      lVar40 = lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    } while (*(long *)(*(long *)((long)ppppppplVar21 + lVar40) + 0x20) < (long)ppppplVar26);
    ppppppplVar28 = (long *******)(lVar30 + (long)ppppppplVar21);
    ppppppplVar24 = ppppppplVar43;
    if (lVar30 == 0x10) {
      ppppppplVar20 = (long *******)0x10;
      do {
        if (ppppppplVar24 <= ppppppplVar28) break;
        ppppppplVar20 = (long *******)ppppppplVar24[-2];
        ppppppplVar24 = ppppppplVar24 + -2;
      } while ((long)ppppplVar26 <= (long)ppppppplVar20[4]);
    }
    else {
      do {
        ppppppplVar20 = (long *******)ppppppplVar24[-2];
        ppppppplVar24 = ppppppplVar24 + -2;
      } while ((long)ppppplVar26 <= (long)ppppppplVar20[4]);
    }
    ppppppplVar39 = ppppppplVar24;
    ppppppplVar31 = ppppppplVar28;
    if (ppppppplVar28 < ppppppplVar24) {
      do {
        pppppplVar11 = ppppppplVar31[1];
        *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar31;
        *(long *******)((long)ppbVar32 + -0x40) = pppppplVar11;
        pppppplVar11 = ppppppplVar39[1];
        *ppppppplVar31 = *ppppppplVar39;
        ppppppplVar31[1] = pppppplVar11;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar32 + -0x48);
        *(undefined4 *)((long)ppppppplVar39 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar39 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar10;
        ppppppplVar20 = (long *******)pppppplVar3[4];
        do {
          ppppppplVar42 = ppppppplVar31 + 2;
          ppppppplVar31 = ppppppplVar31 + 2;
        } while ((long)(*ppppppplVar42)[4] < (long)ppppppplVar20);
        do {
          ppppppplVar42 = ppppppplVar39 + -2;
          ppppppplVar39 = ppppppplVar39 + -2;
        } while ((long)ppppppplVar20 <= (long)(*ppppppplVar42)[4]);
      } while (ppppppplVar31 < ppppppplVar39);
    }
    ppppppplVar39 = ppppppplVar31 + -2;
    if (ppppppplVar21 != ppppppplVar39) {
      uVar8 = *(undefined4 *)((long)ppppppplVar31 + -0xc);
      uVar9 = *(undefined4 *)(ppppppplVar31 + -1);
      uVar10 = *(undefined4 *)((long)ppppppplVar31 + -4);
      *(undefined4 *)ppppppplVar21 = *(undefined4 *)ppppppplVar39;
      *(undefined4 *)((long)ppppppplVar21 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0xc) = uVar10;
    }
    *(long ********)((long)ppbVar32 + -0x68) = ppppppplVar21;
    ppppppplVar31[-2] = pppppplVar3;
    ppppppplVar31[-1] = pppppplVar17;
    if (ppppppplVar24 <= ppppppplVar28) goto code_r0x003c5e95;
    ppppppplVar24 = (long *******)(ulong)*(byte *)((long)ppbVar32 + -0x4c);
    ppppppplVar28 = *(long ********)((long)ppbVar32 + -0x68);
    puVar34 = (undefined8 *)((long)ppbVar32 + -0x80);
    ppbVar32 = (byte **)((long)ppbVar32 + -0x80);
    *puVar34 = &UNK_003c5ee7;
    ppuVar36 = (undefined **)puVar33;
    ppppppplVar42 = ppppppplVar29;
    ppppppplVar44 = ppppppplVar43;
  } while( true );
code_r0x003c5845:
  do {
    pppppplVar3 = *ppppppplVar39;
    pbVar27 = (byte *)((ulong)pppppplVar3[3] & 0xfffffffffffffffc);
    bVar23 = *pbVar27;
    if ((bVar23 & 1) == 0) {
      ppppppplVar24 = (long *******)(ulong)(bVar23 >> 1);
    }
    else {
      ppppppplVar24 = *(long ********)(pbVar27 + 8);
    }
    if (ppppppplVar24 == ppppppplVar28) {
      if ((bVar23 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
      pbVar18 = pbStack_190;
      if (((ulong)ppppppplVar20 & 1) != 0) {
        pbVar18 = *(byte **)(pbStack_188 + 0x10);
      }
      puStack_198 = &UNK_003c5818;
      iVar13 = func_0x0099bf90(pbVar27,pbVar18);
      ppppppplVar20 = (long *******)(uStack_178 & 0xffffffff);
      ppppppplVar31 = ppppppplVar28;
      if (iVar13 == 0) {
        uStack_150 = ppppppplStack_170;
        puStack_198 = &UNK_003c563d;
        uStack_148 = pppppplVar3;
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (ppppppplStack_180);
        ppppppplVar39 = ppppppplStack_168;
        ppppppplStack_130 = (long *******)ppppppplStack_168[1];
        ppppppplStack_128 = (long *******)&ppppppplStack_130;
        ppppppplVar24 = (long *******)&uStack_150;
        ppppppplStack_118 = ppppppplStack_168;
        ppppppplStack_120 = ppppppplVar24;
        if (ppppppplStack_130 < ppppppplStack_168[2]) {
          *(undefined4 *)ppppppplStack_130 = (undefined4)uStack_150;
          *(undefined4 *)((long)ppppppplStack_130 + 4) = uStack_150._4_4_;
          *(undefined4 *)(ppppppplStack_130 + 1) = (undefined4)uStack_148;
          *(undefined4 *)((long)ppppppplStack_130 + 0xc) = uStack_148._4_4_;
          ppppppplVar28 = ppppppplStack_130 + 2;
        }
        else {
          puStack_198 = &UNK_003c58bd;
          _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                    (&ppppppplStack_128);
          ppppppplVar28 = ppppppplStack_130;
        }
        ppppppplVar39[1] = (long ******)ppppppplVar28;
        ppppppplVar44 = ppppppplStack_158;
        break;
      }
    }
    ppppppplVar39 = ppppppplVar39 + 1;
    ppppppplVar44 = ppppppplStack_158;
  } while (ppppppplVar39 != ppppppplVar21);
code_r0x003c5690:
  ppppppplVar41 = ppppppplVar41 + 1;
  if (ppppppplVar41 == ppppppplStack_160) goto code_r0x003c5568;
  goto code_r0x003c56a1;
code_r0x003c611e:
  do {
    ppppppplVar39 = ppppppplVar42;
    ppppppplVar28 = (long *******)*ppppppplVar41;
    pppppplVar3 = ppppppplVar41[2];
    ppppppplVar20 = (long *******)pppppplVar3[4];
    if ((long)ppppppplVar20 < (long)ppppppplVar28[4]) {
      pppppplVar17 = ppppppplVar41[3];
      lVar40 = lVar30;
      do {
        puVar1 = (undefined4 *)((long)ppppppplVar21 + lVar40 + -0x10);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)((long)ppppppplVar21 + lVar40);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        ppppppplVar28 = ppppppplVar21;
        if (lVar40 == 0x10) goto code_r0x003c6103;
        ppppppplVar20 = (long *******)pppppplVar3[4];
        lVar12 = lVar40 + -0x20;
        lVar40 = lVar40 + -0x10;
      } while ((long)ppppppplVar20 < *(long *)(*(long *)((long)ppppppplVar21 + lVar12) + 0x20));
      ppppppplVar28 = (long *******)(lVar40 + (long)ppppppplVar21);
code_r0x003c6103:
      *ppppppplVar28 = pppppplVar3;
      ppppppplVar28[1] = pppppplVar17;
    }
    ppppppplVar42 = ppppppplVar39 + 2;
    lVar30 = lVar30 + 0x10;
    ppppppplVar41 = ppppppplVar39;
  } while (ppppppplVar42 != ppppppplVar43);
  goto code_r0x003c6596;
code_r0x003c6197:
  do {
    if (ppppppplVar39 <= ppppppplVar20) {
      ppppppplVar28 = (long *******)((long)ppppppplVar39 * 2 + 1);
      ppppppplVar41 = (long *******)((long)ppppppplVar39 * 2 + 2);
      if ((ppppppplVar41 < ppppppplVar24) &&
         ((long)ppppppplVar21[(long)ppppppplVar28 * 2][4] <
          (long)ppppppplVar21[(long)ppppppplVar41 * 2][4])) {
        ppppppplVar28 = ppppppplVar41;
      }
      pppppplVar3 = ppppppplVar21[(long)ppppppplVar39 * 2];
      if ((long)pppppplVar3[4] <= (long)ppppppplVar21[(long)ppppppplVar28 * 2][4]) {
        pppppplVar17 = ppppppplVar21[(long)ppppppplVar39 * 2 + 1];
        ppppppplVar41 = ppppppplVar39;
        do {
          ppppppplVar42 = ppppppplVar28;
          pppppplVar11 = (ppppppplVar21 + (long)ppppppplVar42 * 2)[1];
          ppppppplVar21[(long)ppppppplVar41 * 2] = ppppppplVar21[(long)ppppppplVar42 * 2];
          (ppppppplVar21 + (long)ppppppplVar41 * 2)[1] = pppppplVar11;
          if ((long)ppppppplVar20 < (long)ppppppplVar42) break;
          ppppppplVar31 = (long *******)((long)ppppppplVar42 * 2 + 1);
          ppppppplVar41 = (long *******)((long)ppppppplVar42 * 2 + 2);
          ppppppplVar28 = ppppppplVar31;
          if (((long)ppppppplVar41 < (long)ppppppplVar24) &&
             (ppppppplVar29 = (long *******)ppppppplVar21[(long)ppppppplVar41 * 2],
             ppppppplVar28 = ppppppplVar41,
             (long)ppppppplVar29[4] <= (long)ppppppplVar21[(long)ppppppplVar31 * 2][4])) {
            ppppppplVar28 = ppppppplVar31;
          }
          ppppppplVar31 = (long *******)ppppppplVar21[(long)ppppppplVar28 * 2][4];
          ppppppplVar41 = ppppppplVar42;
        } while ((long)pppppplVar3[4] <= (long)ppppppplVar31);
        ppppppplVar21[(long)ppppppplVar42 * 2] = pppppplVar3;
        (ppppppplVar21 + (long)ppppppplVar42 * 2)[1] = pppppplVar17;
      }
    }
    bVar45 = 0 < (long)ppppppplVar39;
    ppppppplVar39 = (long *******)((long)ppppppplVar39 + -1);
  } while (bVar45);
  do {
    pppppplVar3 = ppppppplVar21[1];
    *(long *******)((long)ppbVar32 + -0x48) = *ppppppplVar21;
    *(long *******)((long)ppbVar32 + -0x40) = pppppplVar3;
    ppppppplVar28 = (long *******)0x0;
    ppppppplVar39 = ppppppplVar21;
    do {
      ppppppplVar20 = (long *******)((long)ppppppplVar28 * 0x10);
      ppppppplVar44 = ppppppplVar39 + (long)ppppppplVar28 * 2 + 2;
      ppppppplVar41 = (long *******)((long)ppppppplVar28 * 2 + 1);
      ppppppplVar42 = (long *******)((long)ppppppplVar28 * 2 + 2);
      ppppppplVar28 = ppppppplVar41;
      if (((long)ppppppplVar42 < (long)ppppppplVar24) &&
         (ppppppplVar20 = (long *******)((long)ppppppplVar20 + (long)ppppppplVar39),
         (long)ppppppplVar20[2][4] < (long)ppppppplVar20[4][4])) {
        ppppppplVar44 = ppppppplVar20 + 4;
        ppppppplVar28 = ppppppplVar42;
        ppppppplVar20 = ppppppplVar44;
      }
      pppppplVar3 = ppppppplVar44[1];
      *ppppppplVar39 = *ppppppplVar44;
      ppppppplVar39[1] = pppppplVar3;
      ppppppplVar39 = ppppppplVar44;
    } while ((long)ppppppplVar28 <= (long)((long)ppppppplVar24 - 2U >> 1));
    ppppppplVar41 = ppppppplVar43 + -2;
    if (ppppppplVar44 == ppppppplVar41) {
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar44 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar44 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar44 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar44 + 0xc) = uVar10;
    }
    else {
      pppppplVar3 = ppppppplVar43[-1];
      *ppppppplVar44 = *ppppppplVar41;
      ppppppplVar44[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x44);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x40);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x3c);
      *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x48);
      *(undefined4 *)((long)ppppppplVar43 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar43 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar43 + -4) = uVar10;
      lVar30 = (long)ppppppplVar44 + (0x10 - (long)ppppppplVar21) >> 4;
      if (1 < lVar30) {
        uVar16 = lVar30 - 2U >> 1;
        ppppppplVar20 = (long *******)(uVar16 * 0x10);
        ppppppplVar28 = (long *******)ppppppplVar21[uVar16 * 2][4];
        ppppppplVar39 = (long *******)*ppppppplVar44;
        if ((long)ppppppplVar28 < (long)ppppppplVar39[4]) {
          ppppppplVar28 = (long *******)ppppppplVar44[1];
          ppppppplVar20 = (long *******)((long)ppppppplVar20 + (long)ppppppplVar21);
          do {
            ppppppplVar42 = ppppppplVar20;
            uVar8 = *(undefined4 *)((long)ppppppplVar42 + 4);
            uVar9 = *(undefined4 *)(ppppppplVar42 + 1);
            uVar10 = *(undefined4 *)((long)ppppppplVar42 + 0xc);
            *(undefined4 *)ppppppplVar44 = *(undefined4 *)ppppppplVar42;
            *(undefined4 *)((long)ppppppplVar44 + 4) = uVar8;
            *(undefined4 *)(ppppppplVar44 + 1) = uVar9;
            *(undefined4 *)((long)ppppppplVar44 + 0xc) = uVar10;
            ppppppplVar20 = ppppppplVar42;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            ppppppplVar20 = ppppppplVar21 + uVar16 * 2;
            ppppppplVar44 = ppppppplVar42;
          } while ((long)ppppppplVar21[uVar16 * 2][4] < (long)ppppppplVar39[4]);
          *ppppppplVar42 = (long ******)ppppppplVar39;
          ppppppplVar42[1] = (long ******)ppppppplVar28;
        }
      }
    }
    ppppppplVar42 = (long *******)((long)ppppppplVar24 + -1);
    bVar45 = 2 < (long)ppppppplVar24;
    ppppppplVar24 = ppppppplVar42;
    ppppppplVar43 = ppppppplVar41;
  } while (bVar45);
code_r0x003c6596:
  ppppppplVar43 = ppppppplVar29;
  if (*(long ********)(in_FS_OFFSET + 0x28) == *(long ********)((long)ppbVar32 + -0x38)) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
code_r0x003c65b4:
  ppppppplVar41 = ppppppplVar20;
  ppppppplVar21 = ppppppplVar28;
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c65b9;
  func_0x0099bd00();
  ppppppplVar20 = extraout_RDX_01;
  ppbVar32 = (byte **)((long)ppbVar32 + -0x78);
  goto code_r0x003c65c0;
code_r0x003c5e95:
  *(long ********)((long)ppbVar32 + -0x70) = ppppppplVar29;
  ppppppplVar21 = *(long ********)((long)ppbVar32 + -0x68);
  puVar35 = (undefined1 *)((long)ppbVar32 + -0x80);
  *(undefined **)((long)ppbVar32 + -0x80) = &UNK_003c5eab;
code_r0x003c67a0:
  puVar37 = puVar35 + -8;
  *(undefined1 **)(puVar35 + -8) = puVar38;
  *(long ********)(puVar35 + -0x10) = ppppppplVar43;
  *(long ********)(puVar35 + -0x18) = ppppppplVar31;
  uVar6 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar35 + -0x20) = uVar6;
  uVar22 = (undefined7)((ulong)uVar6 >> 8);
  ppppppplVar20 = (long *******)CONCAT71(uVar22,1);
  switch((long)ppppppplVar39 - (long)ppppppplVar21 >> 4) {
  case 0:
  case 1:
    goto code_r0x003c6b3a;
  case 2:
    if ((long)ppppppplVar39[-2][4] < (long)(*ppppppplVar21)[4]) {
      pppppplVar3 = ppppppplVar21[1];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
      *(long *******)(puVar35 + -0x30) = pppppplVar3;
      pppppplVar3 = ppppppplVar39[-1];
      *ppppppplVar21 = ppppppplVar39[-2];
      ppppppplVar21[1] = pppppplVar3;
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)(ppppppplVar39 + -2) = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar39 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar39 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar39 + -4) = uVar10;
    }
    goto code_r0x003c6b3a;
  case 3:
    ppppppplVar31 = ppppppplVar21 + 2;
    ppppppplVar28 = ppppppplVar39 + -2;
    ppppplVar26 = ppppppplVar21[2][4];
    if ((long)ppppplVar26 < (long)(*ppppppplVar21)[4]) {
      if ((long)ppppppplVar39[-2][4] < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        pppppplVar3 = ppppppplVar39[-1];
        *ppppppplVar21 = *ppppppplVar28;
        ppppppplVar21[1] = pppppplVar3;
      }
      else {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar31;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
        if ((long)ppppppplVar21[2][4] <= (long)(*ppppppplVar28)[4]) goto code_r0x003c6b3a;
        pppppplVar3 = ppppppplVar21[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        pppppplVar3 = ppppppplVar39[-1];
        *ppppppplVar31 = *ppppppplVar28;
        ppppppplVar21[3] = pppppplVar3;
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar39 + -0xc) = uVar8;
      *(undefined4 *)(ppppppplVar39 + -1) = uVar9;
      *(undefined4 *)((long)ppppppplVar39 + -4) = uVar10;
      goto code_r0x003c6b3a;
    }
    if ((long)ppppplVar26 <= (long)ppppppplVar39[-2][4]) goto code_r0x003c6b3a;
    break;
  case 4:
    ppppppplVar31 = ppppppplVar21 + 2;
    ppppppplVar28 = ppppppplVar21 + 4;
    ppppppplVar41 = ppppppplVar39 + -2;
    pppppplVar3 = *ppppppplVar21;
    ppppplVar26 = ppppppplVar21[2][4];
    pppppplVar17 = ppppppplVar21[4];
    ppppplVar4 = pppppplVar17[4];
    if ((long)ppppplVar26 < (long)pppppplVar3[4]) {
      if ((long)ppppplVar4 < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar28;
        ppppppplVar21[1] = ppppppplVar21[5];
      }
      else {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar31;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
        if ((long)ppppppplVar21[2][4] <= (long)pppppplVar17[4]) goto code_r0x003c6abf;
        pppppplVar3 = ppppppplVar21[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar31 = *ppppppplVar28;
        ppppppplVar21[3] = ppppppplVar21[5];
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
    }
    else if ((long)ppppplVar4 < (long)ppppplVar26) {
      pppppplVar17 = ppppppplVar21[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar31;
      *(long *******)(puVar35 + -0x30) = pppppplVar17;
      *ppppppplVar31 = *ppppppplVar28;
      ppppppplVar21[3] = ppppppplVar21[5];
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
      if ((long)(*ppppppplVar31)[4] < (long)pppppplVar3[4]) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar31;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
      }
    }
code_r0x003c6abf:
    if ((long)(*ppppppplVar28)[4] <= (long)(*ppppppplVar41)[4]) goto code_r0x003c6b3a;
    pppppplVar3 = ppppppplVar21[5];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
    *(long *******)(puVar35 + -0x30) = pppppplVar3;
    pppppplVar3 = ppppppplVar39[-1];
    *ppppppplVar28 = *ppppppplVar41;
    ppppppplVar21[5] = pppppplVar3;
    uVar8 = *(undefined4 *)(puVar35 + -0x34);
    uVar9 = *(undefined4 *)(puVar35 + -0x30);
    uVar10 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar41 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar39 + -0xc) = uVar8;
    *(undefined4 *)(ppppppplVar39 + -1) = uVar9;
    *(undefined4 *)((long)ppppppplVar39 + -4) = uVar10;
    if ((long)(*ppppppplVar31)[4] <= (long)(*ppppppplVar28)[4]) goto code_r0x003c6b3a;
    break;
  case 5:
    ppppppplVar20 = ppppppplVar21 + 4;
    ppppppplVar42 = ppppppplVar21 + 6;
    ppppppplVar41 = ppppppplVar39 + -2;
    ppbVar32 = (byte **)(puVar35 + -0x40);
    *(undefined **)(puVar35 + -0x40) = &UNK_003c686a;
    ppppppplVar39 = ppppppplVar21 + 2;
code_r0x003c65c0:
    puVar38 = (undefined1 *)((long)ppbVar32 + -8);
    *(undefined1 **)((long)ppbVar32 + -8) = puVar37;
    puVar35 = (undefined1 *)((long)ppbVar32 + -0x28);
    *(undefined8 *)((long)ppbVar32 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppppplVar26 = (*ppppppplVar39)[4];
    if ((long)ppppplVar26 < (long)(*ppppppplVar21)[4]) {
      if ((long)(*ppppppplVar20)[4] < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar20[1];
        *ppppppplVar21 = *ppppppplVar20;
        ppppppplVar21[1] = pppppplVar3;
      }
      else {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar39[1];
        *ppppppplVar21 = *ppppppplVar39;
        ppppppplVar21[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar39 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar39 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar10;
        if ((long)(*ppppppplVar39)[4] <= (long)(*ppppppplVar20)[4]) goto code_r0x003c6677;
        pppppplVar3 = ppppppplVar39[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar39;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar20[1];
        *ppppppplVar39 = *ppppppplVar20;
        ppppppplVar39[1] = pppppplVar3;
      }
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar20 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar20 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar20 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar20 + 0xc) = uVar10;
    }
    else if ((long)(*ppppppplVar20)[4] < (long)ppppplVar26) {
      pppppplVar3 = ppppppplVar39[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar39;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar20[1];
      *ppppppplVar39 = *ppppppplVar20;
      ppppppplVar39[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar20 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar20 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar20 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar20 + 0xc) = uVar10;
      if ((long)(*ppppppplVar39)[4] < (long)(*ppppppplVar21)[4]) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar39[1];
        *ppppppplVar21 = *ppppppplVar39;
        ppppppplVar21[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar39 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar39 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar10;
      }
    }
code_r0x003c6677:
    if ((long)(*ppppppplVar42)[4] < (long)(*ppppppplVar20)[4]) {
      pppppplVar3 = ppppppplVar20[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar20;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar42[1];
      *ppppppplVar20 = *ppppppplVar42;
      ppppppplVar20[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar42 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar42 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar42 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar42 + 0xc) = uVar10;
      if ((long)(*ppppppplVar20)[4] < (long)(*ppppppplVar39)[4]) {
        pppppplVar3 = ppppppplVar39[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar39;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar20[1];
        *ppppppplVar39 = *ppppppplVar20;
        ppppppplVar39[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar20 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar20 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar20 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar20 + 0xc) = uVar10;
        if ((long)(*ppppppplVar39)[4] < (long)(*ppppppplVar21)[4]) {
          pppppplVar3 = ppppppplVar21[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
          pppppplVar3 = ppppppplVar39[1];
          *ppppppplVar21 = *ppppppplVar39;
          ppppppplVar21[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar39 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar39 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar10;
        }
      }
    }
    if ((long)(*ppppppplVar41)[4] < (long)(*ppppppplVar42)[4]) {
      pppppplVar3 = ppppppplVar42[1];
      *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar42;
      *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
      pppppplVar3 = ppppppplVar41[1];
      *ppppppplVar42 = *ppppppplVar41;
      ppppppplVar42[1] = pppppplVar3;
      uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
      uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
      uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
      *(undefined4 *)ppppppplVar41 = *(undefined4 *)((long)ppbVar32 + -0x28);
      *(undefined4 *)((long)ppppppplVar41 + 4) = uVar8;
      *(undefined4 *)(ppppppplVar41 + 1) = uVar9;
      *(undefined4 *)((long)ppppppplVar41 + 0xc) = uVar10;
      if ((long)(*ppppppplVar42)[4] < (long)(*ppppppplVar20)[4]) {
        pppppplVar3 = ppppppplVar20[1];
        *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar20;
        *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
        pppppplVar3 = ppppppplVar42[1];
        *ppppppplVar20 = *ppppppplVar42;
        ppppppplVar20[1] = pppppplVar3;
        uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
        uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
        uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
        *(undefined4 *)ppppppplVar42 = *(undefined4 *)((long)ppbVar32 + -0x28);
        *(undefined4 *)((long)ppppppplVar42 + 4) = uVar8;
        *(undefined4 *)(ppppppplVar42 + 1) = uVar9;
        *(undefined4 *)((long)ppppppplVar42 + 0xc) = uVar10;
        if ((long)(*ppppppplVar20)[4] < (long)(*ppppppplVar39)[4]) {
          pppppplVar3 = ppppppplVar39[1];
          *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar39;
          *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
          pppppplVar3 = ppppppplVar20[1];
          *ppppppplVar39 = *ppppppplVar20;
          ppppppplVar39[1] = pppppplVar3;
          uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
          uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
          uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
          *(undefined4 *)ppppppplVar20 = *(undefined4 *)((long)ppbVar32 + -0x28);
          *(undefined4 *)((long)ppppppplVar20 + 4) = uVar8;
          *(undefined4 *)(ppppppplVar20 + 1) = uVar9;
          *(undefined4 *)((long)ppppppplVar20 + 0xc) = uVar10;
          if ((long)(*ppppppplVar39)[4] < (long)(*ppppppplVar21)[4]) {
            pppppplVar3 = ppppppplVar21[1];
            *(long *******)((long)ppbVar32 + -0x28) = *ppppppplVar21;
            *(long *******)((long)ppbVar32 + -0x20) = pppppplVar3;
            pppppplVar3 = ppppppplVar39[1];
            *ppppppplVar21 = *ppppppplVar39;
            ppppppplVar21[1] = pppppplVar3;
            uVar8 = *(undefined4 *)((long)ppbVar32 + -0x24);
            uVar9 = *(undefined4 *)((long)ppbVar32 + -0x20);
            uVar10 = *(undefined4 *)((long)ppbVar32 + -0x1c);
            *(undefined4 *)ppppppplVar39 = *(undefined4 *)((long)ppbVar32 + -0x28);
            *(undefined4 *)((long)ppppppplVar39 + 4) = uVar8;
            *(undefined4 *)(ppppppplVar39 + 1) = uVar9;
            *(undefined4 *)((long)ppppppplVar39 + 0xc) = uVar10;
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
    ppppppplVar31 = ppppppplVar21 + 4;
    ppppppplVar28 = ppppppplVar21 + 2;
    pppppplVar3 = *ppppppplVar21;
    ppppplVar26 = ppppppplVar21[2][4];
    pppppplVar17 = ppppppplVar21[4];
    ppppplVar4 = pppppplVar17[4];
    if ((long)ppppplVar26 < (long)pppppplVar3[4]) {
      if ((long)ppppplVar4 < (long)ppppplVar26) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar31;
        ppppppplVar21[1] = ppppppplVar21[5];
      }
      else {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar28;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
        if ((long)ppppppplVar21[2][4] <= (long)pppppplVar17[4]) goto code_r0x003c6a01;
        pppppplVar3 = ppppppplVar21[3];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar28 = *ppppppplVar31;
        ppppppplVar21[3] = ppppppplVar21[5];
      }
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
    }
    else if ((long)ppppplVar4 < (long)ppppplVar26) {
      pppppplVar17 = ppppppplVar21[3];
      *(long *******)(puVar35 + -0x38) = *ppppppplVar28;
      *(long *******)(puVar35 + -0x30) = pppppplVar17;
      *ppppppplVar28 = *ppppppplVar31;
      ppppppplVar21[3] = ppppppplVar21[5];
      uVar8 = *(undefined4 *)(puVar35 + -0x34);
      uVar9 = *(undefined4 *)(puVar35 + -0x30);
      uVar10 = *(undefined4 *)(puVar35 + -0x2c);
      *(undefined4 *)ppppppplVar31 = *(undefined4 *)(puVar35 + -0x38);
      *(undefined4 *)((long)ppppppplVar21 + 0x24) = uVar8;
      *(undefined4 *)(ppppppplVar21 + 5) = uVar9;
      *(undefined4 *)((long)ppppppplVar21 + 0x2c) = uVar10;
      if ((long)(*ppppppplVar28)[4] < (long)pppppplVar3[4]) {
        pppppplVar3 = ppppppplVar21[1];
        *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
        *(long *******)(puVar35 + -0x30) = pppppplVar3;
        *ppppppplVar21 = *ppppppplVar28;
        ppppppplVar21[1] = ppppppplVar21[3];
        uVar8 = *(undefined4 *)(puVar35 + -0x34);
        uVar9 = *(undefined4 *)(puVar35 + -0x30);
        uVar10 = *(undefined4 *)(puVar35 + -0x2c);
        *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
        *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
        *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
        *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
      }
    }
code_r0x003c6a01:
    if (ppppppplVar21 + 6 != ppppppplVar39) {
      iVar13 = 0;
      lVar30 = 0x30;
      ppppppplVar28 = ppppppplVar21 + 6;
      goto code_r0x003c6a49;
    }
    goto code_r0x003c6b3a;
  }
  ppppppplVar39 = ppppppplVar21 + 2;
  pppppplVar3 = ppppppplVar21[3];
  *(long *******)(puVar35 + -0x38) = *ppppppplVar39;
  *(long *******)(puVar35 + -0x30) = pppppplVar3;
  pppppplVar3 = ppppppplVar28[1];
  *ppppppplVar39 = *ppppppplVar28;
  ppppppplVar21[3] = pppppplVar3;
  uVar8 = *(undefined4 *)(puVar35 + -0x34);
  uVar9 = *(undefined4 *)(puVar35 + -0x30);
  uVar10 = *(undefined4 *)(puVar35 + -0x2c);
  *(undefined4 *)ppppppplVar28 = *(undefined4 *)(puVar35 + -0x38);
  *(undefined4 *)((long)ppppppplVar28 + 4) = uVar8;
  *(undefined4 *)(ppppppplVar28 + 1) = uVar9;
  *(undefined4 *)((long)ppppppplVar28 + 0xc) = uVar10;
  if ((long)ppppppplVar21[2][4] < (long)(*ppppppplVar21)[4]) {
    pppppplVar3 = ppppppplVar21[1];
    *(long *******)(puVar35 + -0x38) = *ppppppplVar21;
    *(long *******)(puVar35 + -0x30) = pppppplVar3;
    *ppppppplVar21 = *ppppppplVar39;
    ppppppplVar21[1] = ppppppplVar21[3];
    uVar8 = *(undefined4 *)(puVar35 + -0x34);
    uVar9 = *(undefined4 *)(puVar35 + -0x30);
    uVar10 = *(undefined4 *)(puVar35 + -0x2c);
    *(undefined4 *)ppppppplVar39 = *(undefined4 *)(puVar35 + -0x38);
    *(undefined4 *)((long)ppppppplVar21 + 0x14) = uVar8;
    *(undefined4 *)(ppppppplVar21 + 3) = uVar9;
    *(undefined4 *)((long)ppppppplVar21 + 0x1c) = uVar10;
  }
  goto code_r0x003c6b3a;
code_r0x003c6a49:
  pppppplVar3 = *ppppppplVar28;
  if ((long)pppppplVar3[4] < (long)(*ppppppplVar31)[4]) {
    pppppplVar17 = ppppppplVar28[1];
    lVar40 = lVar30;
    do {
      puVar2 = (undefined4 *)((long)ppppppplVar21 + lVar40 + -0x10);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar1 = (undefined4 *)((long)ppppppplVar21 + lVar40);
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      ppppppplVar31 = ppppppplVar21;
      if (lVar40 == 0x10) goto code_r0x003c6a23;
      lVar12 = lVar40 + -0x20;
      lVar40 = lVar40 + -0x10;
    } while ((long)pppppplVar3[4] < *(long *)(*(long *)((long)ppppppplVar21 + lVar12) + 0x20));
    ppppppplVar31 = (long *******)(lVar40 + (long)ppppppplVar21);
code_r0x003c6a23:
    *ppppppplVar31 = pppppplVar3;
    ppppppplVar31[1] = pppppplVar17;
    iVar13 = iVar13 + 1;
    if (iVar13 == 8) {
      ppppppplVar20 = (long *******)CONCAT71(uVar22,ppppppplVar28 + 2 == ppppppplVar39);
      goto code_r0x003c6b3a;
    }
  }
  ppppppplVar41 = ppppppplVar28 + 2;
  lVar30 = lVar30 + 0x10;
  ppppppplVar31 = ppppppplVar28;
  ppppppplVar28 = ppppppplVar41;
  if (ppppppplVar41 == ppppppplVar39) {
code_r0x003c6b3a:
    if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(puVar35 + -0x20)) {
      *(undefined **)(puVar35 + -0x40) = &UNK_003c6b57;
      func_0x0099bd00();
      pcVar7 = (code *)swi(3);
      ppppppplVar21 = (long *******)(*pcVar7)();
      return ppppppplVar21;
    }
    return ppppppplVar20;
  }
  goto code_r0x003c6a49;
}


