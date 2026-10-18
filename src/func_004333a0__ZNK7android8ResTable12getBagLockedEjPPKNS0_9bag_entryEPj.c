// Function: _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
// Address: 004333a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                (long param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ushort uVar18;
  long in_FS_OFFSET;
  ulong *puStack_f0;
  ulong uStack_e8;
  uint uStack_dc;
  ulong *puStack_d8;
  uint uStack_cc;
  ulong uStack_c8;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ushort *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)*(int *)(param_1 + 0x50);
  if (uVar9 != 0) goto code_r0x00433508;
  uVar9 = (ulong)*(byte *)(param_1 + 0xe8 + (ulong)(param_2 >> 0x18));
  if (uVar9 == 0) {
    puVar15 = &UNK_001598d0;
code_r0x004334fa:
    __android_log_print(5,&UNK_0015b3df,puVar15,param_2);
  }
  else {
    uVar6 = param_2 >> 0x10 & 0xff;
    if (uVar6 == 0) {
      puVar15 = &UNK_00178d45;
      goto code_r0x004334fa;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar9 * 8);
    if (lVar2 == 0) {
      puVar15 = &UNK_0015cb2a;
      goto code_r0x004334fa;
    }
    uVar14 = uVar6 - 1;
    lVar11 = *(long *)(lVar2 + 0x40 + (ulong)(uVar14 >> 4) * 8);
    if (lVar11 == 0) {
      puVar16 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
      lVar11 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
    }
    else {
      puVar16 = (undefined1 *)(lVar11 + (ulong)(uVar14 & 0xf) * 0x28);
      lVar11 = *(long *)(puVar16 + 0x10);
    }
    if (lVar11 == 0) {
      puVar15 = &UNK_0018b139;
      param_2 = uVar6;
      goto code_r0x004334fa;
    }
    uVar6 = param_2 & 0xffff;
    uVar9 = *(ulong *)(**(long **)(puVar16 + 8) + 0x10);
    if ((int)uVar6 < (int)uVar9) {
      plVar10 = (long *)_ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
                                  (lVar2 + 200,uVar14);
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        lVar11 = func_0x0099c4d0(uVar9,8);
        if (lVar11 != 0) {
          *plVar10 = lVar11;
          goto code_r0x0043359c;
        }
code_r0x00433a08:
        uVar9 = 0xfffffffffffffff4;
      }
      else {
        puVar12 = *(ulong **)(lVar11 + (ulong)uVar6 * 8);
        if (puVar12 != (ulong *)0x0) {
          if (puVar12 != (ulong *)0xffffffff) {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = (int)puVar12[2];
            }
            *param_3 = puVar12 + 3;
            uVar9 = *puVar12;
            goto code_r0x00433508;
          }
          puVar15 = &UNK_00177389;
          goto code_r0x004334fa;
        }
code_r0x0043359c:
        *(undefined8 *)(lVar11 + (ulong)uVar6 * 8) = 0xffffffff;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        lStack_60 = 0;
        puStack_78 = (ushort *)0x0;
        lStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        iVar7 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                          (param_1,lVar2,uVar14,uVar6,param_1 + 0x54,&uStack_b8);
        puVar4 = puStack_78;
        if (iVar7 != 0) {
          uVar9 = (ulong)iVar7;
          goto code_r0x00433508;
        }
        uVar18 = 8;
        if ((puStack_78[1] & 8) == 0) {
          uVar18 = *puStack_78;
        }
        if ((puStack_78[1] & 9) == 1) {
          iVar7 = *(int *)(puStack_78 + 4);
          uStack_dc = *(uint *)(puStack_78 + 6);
          uStack_e8 = (ulong)uStack_dc;
          if (iVar7 == 0) goto code_r0x004336c7;
          iStack_bc = iVar7;
          iVar8 = _ZNK7android15DynamicRefTable16lookupResourceIdEPj(lVar2 + 0x148,&iStack_bc);
          if (iVar8 != 0) {
            puVar15 = &UNK_00184c99;
code_r0x00433a6a:
            __android_log_print(6,&UNK_0015b3df,puVar15,iVar7);
            uVar9 = 0xffffffff80000000;
            goto code_r0x00433508;
          }
          uStack_c8 = 0;
          uStack_cc = 0;
          uVar13 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                             (param_1,iStack_bc,&uStack_c8,&uStack_cc);
          uVar9 = 0;
          if (0 < (long)uVar13) {
            uVar9 = uVar13;
          }
          puStack_f0 = (ulong *)func_0x0099c1e0((uVar9 + uStack_e8) * 0x18 + 0x18);
          if (puStack_f0 == (ulong *)0x0) goto code_r0x00433a08;
          if ((long)uVar13 < 1) {
            uVar13 = 0;
          }
          else {
            func_0x0099bda0(puStack_f0 + 3,uStack_c8,uVar13 * 0x18);
          }
          *puStack_f0 = uVar13;
          puStack_f0[1] = uVar9 + uStack_e8;
          *(uint *)(puStack_f0 + 2) = uStack_cc;
          uVar14 = uStack_cc;
        }
        else {
          uStack_e8 = 0;
          uStack_dc = 0;
code_r0x004336c7:
          puStack_f0 = (ulong *)func_0x0099c1e0(uStack_e8 * 0x18 + 0x18);
          if (puStack_f0 == (ulong *)0x0) goto code_r0x00433a08;
          *puStack_f0 = 0;
          puStack_f0[1] = uStack_e8;
          *(undefined4 *)(puStack_f0 + 2) = 0;
          uVar14 = 0;
        }
        *(uint *)(puStack_f0 + 2) = uVar14 | (uint)uStack_68;
        if (uStack_dc != 0) {
          puStack_d8 = puStack_f0 + 3;
          uVar13 = (long)puVar4 + ((ulong)uVar18 - lStack_70);
          uVar14 = 0;
          uVar9 = 0;
          do {
            lVar5 = lStack_70;
            if ((ulong)*(uint *)(lStack_70 + 4) - 0xc < uVar13) {
              __android_log_print(5,&UNK_0015b3df,&UNK_0017591b,uVar13 & 0xffffffff);
              func_0x0099c1f0(puStack_f0);
              uVar9 = 0xffffffff80000001;
              goto code_r0x00433508;
            }
            uVar1 = *(uint *)(lStack_70 + uVar13);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar1);
            if ((uVar1 < 0x10000 || (uVar1 & 0xff0000) != 0) &&
               (iVar7 = _ZNK7android15DynamicRefTable16lookupResourceIdEPj(lVar2 + 0x148,&uStack_c8)
               , iVar7 != 0)) {
              __android_log_print(6,&UNK_0015b3df,&UNK_00170926,uVar13 & 0xffffffff,
                                  uStack_c8 & 0xffffffff);
              func_0x0099c1f0(puStack_f0);
              uVar9 = 0xffffffff80000000;
              goto code_r0x00433508;
            }
            uStack_e8 = uStack_e8 + 1;
            uVar17 = *puStack_f0;
            if (uVar9 < uVar17) {
              puVar12 = puStack_d8 + uVar9 * 3 + 1;
              do {
                if ((uint)uStack_c8 <= (uint)*puVar12) {
                  bVar3 = true;
                  if ((uint)*puVar12 != (uint)uStack_c8) goto code_r0x00433820;
                  goto code_r0x004338a1;
                }
                uVar9 = uVar9 + 1;
                puVar12 = puVar12 + 3;
              } while (uVar17 != uVar9);
              bVar3 = false;
              uVar9 = uVar17;
            }
            else {
              bVar3 = false;
            }
code_r0x00433820:
            puVar12 = puStack_f0;
            if (puStack_f0[1] <= uVar17) {
              uVar17 = puStack_f0[1] + uStack_e8;
              puVar12 = (ulong *)func_0x0099c550(puStack_f0,uVar17 * 0x18 + 0x18);
              if (puVar12 == (ulong *)0x0) {
                func_0x0099c1f0(puStack_f0);
                uVar9 = 0xfffffffffffffff4;
                goto code_r0x00433508;
              }
              puVar12[1] = uVar17;
              puStack_d8 = puVar12 + 3;
            }
            puStack_f0 = puVar12;
            if (bVar3) {
              func_0x0099bd90(puStack_d8 + uVar9 * 3 + 3,puStack_d8 + uVar9 * 3,
                              (*puVar12 - uVar9) * 0x18);
              *puVar12 = *puVar12 + 1;
            }
code_r0x004338a1:
            puStack_d8[uVar9 * 3] = *(ulong *)(*(long *)(lStack_60 + 8) + 0x28);
            *(uint *)(puStack_d8 + uVar9 * 3 + 1) = (uint)uStack_c8;
            *(undefined8 *)((long)puStack_d8 + uVar9 * 0x18 + 0xc) =
                 *(undefined8 *)(lVar5 + 4 + uVar13);
            iVar7 = _ZNK7android15DynamicRefTable19lookupResourceValueEPNS_9Res_valueE
                              (lVar2 + 0x148,(long)puStack_d8 + uVar9 * 0x18 + 0xc);
            if (iVar7 != 0) {
              iVar7 = (int)puStack_d8[uVar9 * 3 + 2];
              puVar15 = &UNK_001773c8;
              goto code_r0x00433a6a;
            }
            uVar9 = uVar9 + 1;
            uVar14 = uVar14 + 1;
            uVar13 = uVar13 + *(ushort *)(lVar5 + 4 + uVar13) + 4;
          } while (uVar14 != uStack_dc);
          if (*puStack_f0 < uVar9) {
            *puStack_f0 = uVar9;
          }
        }
        *(ulong **)(lVar11 + (ulong)uVar6 * 8) = puStack_f0;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = (int)puStack_f0[2];
        }
        *param_3 = puStack_f0 + 3;
        uVar9 = *puStack_f0;
      }
      goto code_r0x00433508;
    }
    __android_log_print(5,&UNK_0015b3df,&UNK_0017bd3b,uVar6,uVar9 & 0xffffffff);
  }
  uVar9 = 0xffffffffffffffb5;
code_r0x00433508:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar9;
  }
  func_0x0099bd00();
  uVar9 = pthread_mutex_unlock();
  return uVar9;
}


