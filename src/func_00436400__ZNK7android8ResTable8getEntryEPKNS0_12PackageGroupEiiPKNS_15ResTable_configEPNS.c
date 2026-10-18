// Function: _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
// Address: 00436400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                 (long *param_1,long *param_2,uint param_3,uint param_4,long *param_5,
                 undefined4 *param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ushort *puVar25;
  long lVar26;
  long *plVar27;
  long in_FS_OFFSET;
  long lStack_138;
  long lStack_100;
  long *plStack_e0;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  byte bStack_b9;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 < 0x100) && (param_2[((ulong)(long)(int)param_3 >> 4) + 8] != 0)) {
    puVar17 = (undefined1 *)
              (param_2[((ulong)(long)(int)param_3 >> 4) + 8] + (ulong)(param_3 & 0xf) * 0x28);
    lVar1 = *(long *)(puVar17 + 0x10);
  }
  else {
    puVar17 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
    lVar1 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
  }
  if (lVar1 != 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar24 = *(ulong *)(puVar17 + 0x10);
    uStack_c0 = 0xffffffb5;
    plVar27 = param_2;
    if (uVar24 == 0) goto code_r0x00436b4e;
    bStack_b9 = (byte)param_3;
    lVar1 = (long)param_1 + 0x54;
    plVar19 = param_1 + 5;
    iVar22 = -1;
    lStack_100 = 0;
    lStack_138 = 0;
    uStack_c4 = 0;
    uVar15 = 0;
    param_1 = plVar19;
    do {
      lVar4 = *(long *)(*(long *)(puVar17 + 8) + uVar15 * 8);
      psVar5 = *(short **)(lVar4 + 0x28);
      if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
        bVar8 = false;
        uStack_c8 = param_3;
        uVar16 = param_4;
code_r0x004365e4:
        uVar18 = (ulong)(int)uVar16;
        if (uVar18 < *(ulong *)(lVar4 + 0x10)) {
          if (*(long *)(lVar4 + 0x20) == 0) {
            uStack_c4 = 0xffffffff;
          }
          else {
            uStack_c4 = uStack_c4 | *(uint *)(*(long *)(lVar4 + 0x20) + uVar18 * 4);
          }
          lVar21 = lVar4 + 0x30;
          if (param_5 == (long *)0x0) {
            plStack_e0 = (long *)0x0;
          }
          else {
            plVar27 = param_5;
            iVar11 = func_0x0099bf90(lVar1,param_5,0x40);
            if (iVar11 == 0) {
              func_0x0099c500(plVar19);
              if ((param_3 < 0x100) && (param_2[((ulong)(long)(int)param_3 >> 4) + 0x19] != 0)) {
                puVar13 = (undefined1 *)
                          (param_2[((ulong)(long)(int)param_3 >> 4) + 0x19] +
                          (ulong)((param_3 & 0xf) * 0x30));
                if (*(ulong *)(puVar13 + 0x18) <= uVar15) goto code_r0x0043673e;
code_r0x004366fc:
                lVar6 = *(long *)(*(long *)(puVar13 + 0x10) + uVar15 * 0x10);
                if (lVar6 == 0) goto code_r0x0043673e;
                plStack_e0 = *(long **)(*(long *)(puVar13 + 0x10) + uVar15 * 0x10 + 8);
                lVar21 = lVar6;
                if (plStack_e0 == (long *)0x0) {
                  plStack_e0 = (long *)0x0;
                }
                else {
                  LOCK();
                  plStack_e0[1] = plStack_e0[1] + 1;
                  UNLOCK();
                }
              }
              else {
                puVar13 = _ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE8default_E;
                if (uVar15 < (ulong)_ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE8default_E
                                    ._24_8_) goto code_r0x004366fc;
code_r0x0043673e:
                plStack_e0 = (long *)0x0;
              }
              func_0x0099c510(plVar19);
            }
            else {
              plStack_e0 = (long *)0x0;
            }
          }
          lVar6 = *(long *)(lVar21 + 0x10);
          if (lVar6 != 0) {
            lVar26 = 0;
            iVar11 = iVar22;
            do {
              lVar7 = *(long *)(*(long *)(lVar21 + 8) + lVar26 * 8);
              if (lVar7 != 0) {
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                lStack_b8 = 0;
                uStack_b0 = 0;
                plVar27 = (long *)(lVar7 + 0x14);
                uVar23 = (ulong)*(uint *)(lVar7 + 0x14);
                if (uVar23 < 0x40) {
                  func_0x0099c110(&lStack_b8,plVar27,uVar23,0x40);
                  plVar27 = (long *)0x0;
                  func_0x0099bdb0((long)&lStack_b8 + uVar23,0,0x40 - uVar23);
                }
                else {
                  uStack_b0 = *(undefined8 *)(lVar7 + 0x1c);
                  uStack_a8 = *(undefined8 *)(lVar7 + 0x24);
                  uStack_a0 = *(undefined8 *)(lVar7 + 0x2c);
                  uStack_98 = *(undefined8 *)(lVar7 + 0x34);
                  uStack_90 = *(undefined8 *)(lVar7 + 0x3c);
                  uStack_88 = *(undefined8 *)(lVar7 + 0x44);
                  uStack_80 = *(undefined8 *)(lVar7 + 0x4c);
                  lStack_b8 = (ulong)*(uint *)(lVar7 + 0x18) << 0x20;
                }
                lStack_b8 = CONCAT44(lStack_b8._4_4_,0x40);
                if ((param_5 == (long *)0x0) ||
                   (plVar27 = param_5, cVar9 = _ZNK7android15ResTable_config5matchERKS0_(&lStack_b8)
                   , cVar9 != '\0')) {
                  puVar14 = (ushort *)((ulong)*(ushort *)(lVar7 + 2) + lVar7);
                  uVar3 = *(uint *)(lVar7 + 0xc);
                  puVar25 = puVar14;
                  uVar23 = (ulong)uVar3;
                  if ((*(byte *)(lVar7 + 9) & 1) == 0) {
                    if (uVar16 < uVar3) {
                      if ((*(byte *)(lVar7 + 9) & 2) == 0) {
                        iVar22 = *(int *)(puVar14 + uVar18 * 2);
                        if (iVar22 != -1) {
joined_r0x00436907:
                          if (lStack_100 != 0) {
                            plVar27 = &uStack_78;
                            cVar9 = _ZNK7android15ResTable_config12isBetterThanERKS0_PS1_
                                              (&lStack_b8,plVar27,param_5);
                            if (cVar9 == '\0') {
                              if (bVar8) {
                                plVar27 = &uStack_78;
                                iVar12 = _ZNK7android15ResTable_config7compareERKS0_(&lStack_b8);
                                if (iVar12 == 0) goto code_r0x0043692e;
                              }
                              goto code_r0x00436790;
                            }
                          }
code_r0x0043692e:
                          uStack_68 = uStack_a8;
                          uStack_60 = uStack_a0;
                          uStack_58 = uStack_98;
                          uStack_50 = uStack_90;
                          uStack_48 = uStack_88;
                          uStack_40 = uStack_80;
                          uStack_78 = lStack_b8;
                          uStack_70 = uStack_b0;
                          lStack_138 = *(long *)(lVar4 + 8);
                          bStack_b9 = (byte)uStack_c8;
                          lStack_100 = lVar7;
                          iVar11 = iVar22;
                          if (param_5 == (long *)0x0) break;
                        }
                      }
                      else if (puVar14[uVar18] != 0xffff) {
                        iVar22 = (uint)puVar14[uVar18] << 2;
                        goto joined_r0x00436907;
                      }
                    }
                  }
                  else {
                    while (uVar23 != 0) {
                      uVar20 = uVar23 >> 1;
                      if (puVar25[uVar20 * 2] < (ushort)uVar16) {
                        puVar25 = puVar25 + uVar20 * 2 + 2;
                        uVar20 = ~uVar20 + uVar23;
                      }
                      plVar27 = (long *)0x0;
                      uVar23 = uVar20;
                    }
                    if ((puVar25 != puVar14 + (ulong)uVar3 * 2) && (uVar16 == *puVar25)) {
                      iVar22 = (uint)puVar25[1] << 2;
                      goto joined_r0x00436907;
                    }
                  }
                }
              }
code_r0x00436790:
              lVar26 = lVar26 + 1;
              iVar22 = iVar11;
            } while (lVar26 != lVar6);
          }
          param_1 = plStack_e0;
          if (plStack_e0 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_e0 + 1;
            lVar4 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar4 == 0) {
              (**(code **)(*plStack_e0 + 0x10))();
              _ZNSt3__119__shared_weak_count14__release_weakEv();
              param_1 = plStack_e0;
            }
          }
        }
        else {
          param_1 = (long *)0x5;
          plVar27 = (long *)&UNK_0015b3df;
          __android_log_print(5,&UNK_0015b3df,&UNK_00159945,
                              (int)param_2[2] * 0x1000000 +
                              (param_4 & 0xffff | param_3 * 0x10000 + 0x10000 & 0xff0000),param_4);
        }
      }
      else if ((((ushort)psVar5[3] <= (ushort)param_4) &&
               (uVar16 = param_4 - (ushort)psVar5[3], (ushort)uVar16 < (ushort)psVar5[2])) &&
              (*(uint *)(psVar5 + (ulong)(uVar16 & 0xffff) * 2 + 4) != 0xffffffff)) {
        uStack_c8 = (ushort)psVar5[1] - 1;
        bVar8 = true;
        uVar16 = *(uint *)(psVar5 + (ulong)(uVar16 & 0xffff) * 2 + 4) & 0xffff;
        goto code_r0x004365e4;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar24);
    if (lStack_100 == 0) goto code_r0x00436b4e;
    uVar16 = iVar22 + *(int *)(lStack_100 + 0x10);
    uVar24 = (ulong)uVar16;
    if ((ulong)*(uint *)(lStack_100 + 4) - 8 < uVar24) {
      param_2 = (long *)&UNK_0015b3df;
      param_1 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00157b7a,uVar24);
    }
    else if ((uVar16 & 3) == 0) {
      uVar10 = 8;
      if ((*(byte *)(lStack_100 + 2 + uVar24) & 8) == 0) {
        uVar10 = *(ushort *)(lStack_100 + uVar24);
      }
      if (7 < uVar10) {
        uStack_c0 = 0;
        if (param_6 != (undefined4 *)0x0) {
          puVar25 = (ushort *)(uVar24 + lStack_100);
          *(ushort **)(param_6 + 0x10) = puVar25;
          *param_6 = (undefined4)uStack_78;
          param_6[1] = uStack_78._4_4_;
          param_6[2] = (undefined4)uStack_70;
          param_6[3] = uStack_70._4_4_;
          param_6[4] = (undefined4)uStack_68;
          param_6[5] = uStack_68._4_4_;
          param_6[6] = (undefined4)uStack_60;
          param_6[7] = uStack_60._4_4_;
          param_6[8] = (undefined4)uStack_58;
          param_6[9] = uStack_58._4_4_;
          param_6[10] = (undefined4)uStack_50;
          param_6[0xb] = uStack_50._4_4_;
          param_6[0xc] = (undefined4)uStack_48;
          param_6[0xd] = uStack_48._4_4_;
          param_6[0xe] = (undefined4)uStack_40;
          param_6[0xf] = uStack_40._4_4_;
          *(long *)(param_6 + 0x12) = lStack_100;
          param_6[0x14] = uStack_c4;
          *(long *)(param_6 + 0x16) = lStack_138;
          _ZN7android13StringPoolRefC2EPKNS_13ResStringPoolEj
                    (&lStack_b8,lStack_138 + 0x18,(uint)bStack_b9 - *(int *)(lStack_138 + 0x278));
          param_6[0x1a] = (undefined4)uStack_b0;
          *(long *)(param_6 + 0x18) = lStack_b8;
          plVar27 = (long *)(lStack_138 + 0x148);
          if ((puVar25[1] & 8) == 0) {
            uVar16 = *(uint *)(puVar25 + 2);
          }
          else {
            uVar16 = (uint)*puVar25;
          }
          param_1 = &lStack_b8;
          _ZN7android13StringPoolRefC2EPKNS_13ResStringPoolEj(param_1,plVar27,uVar16);
          param_6[0x1e] = (undefined4)uStack_b0;
          *(long *)(param_6 + 0x1c) = lStack_b8;
        }
        goto code_r0x00436b4e;
      }
      param_2 = (long *)&UNK_0015b3df;
      param_1 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00184d63,uVar10);
    }
    else {
      param_2 = (long *)&UNK_0015b3df;
      param_1 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00177443,uVar24);
    }
  }
  uStack_c0 = 0x80000001;
  plVar27 = param_2;
code_r0x00436b4e:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    plVar19 = (long *)*plVar27;
    if (plVar19 == (long *)0x0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 3) = 1;
    }
    else {
      (**(code **)(*plVar19 + 0x18))(param_1,plVar19,(int)plVar27[1]);
    }
    return param_1;
  }
  return (long *)(ulong)uStack_c0;
}


