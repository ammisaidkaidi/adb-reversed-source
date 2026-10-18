// Function: _ZN7android13ResStringPoolC1EPKvmbb
// Address: 0042cd80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android13ResStringPoolC1EPKvmbb
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char extraout_DL;
  uint uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar6 = (undefined8 *)(ulong)param_5;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99f820;
  *(undefined4 *)(param_1 + 1) = 0xffffffed;
  puVar13 = param_1 + 7;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar10 = (undefined8 *)0x0;
  puStack_70 = &UNK_0042cdda;
  func_0x0099c4e0();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (param_5 != 0) {
    puVar6 = param_1 + 0x1b;
    puStack_70 = &UNK_0042ce26;
    puVar13 = puVar6;
    func_0x0043f250();
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *puVar6 = 0;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = param_2;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    uStack_58 = 0;
    uStack_50._0_4_ = (undefined4)param_2;
    uStack_50._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
    uStack_68 = (undefined4)uStack_50;
    uStack_64 = uStack_50._4_4_;
    uStack_60 = 0;
    uStack_5c = 0;
    puStack_70 = &UNK_0042ce98;
    uVar5 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                      (param_1,param_3,param_4 & 0xff);
    return uVar5;
  }
  puStack_70 = &UNK_0042ceac;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = (undefined8 *)CONCAT44(uStack_5c,uStack_60);
  puVar14 = puVar13;
  uStack_98 = param_3;
  uStack_90 = param_2;
  puStack_88 = puVar6;
  uStack_80 = param_4 & 0xffffffff;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff8;
  if (puVar10 != (undefined8 *)0x0 && puVar16 != (undefined8 *)0x0) {
    puStack_70 = &stack0xfffffffffffffff8;
    _ZN7android13ResStringPool6uninitEv(puVar13);
    uVar5 = uStack_50;
    if ((undefined8 *)0x1b < puVar10) {
      uStack_b0 = uStack_58;
      uStack_a8 = uStack_50;
      uStack_d0 = (undefined4)((long)puVar16 + (long)puVar10);
      uStack_c8 = (undefined4)uStack_58;
      puVar14 = &uStack_b8;
      uVar18 = uStack_50;
      iVar4 = func_0x0042d730(puVar14,0x1c,&UNK_00161641);
      if (iVar4 == 0) {
        if (extraout_DL != '\0') {
          puVar14 = puVar10;
          puVar6 = (undefined8 *)func_0x0099c1e0();
          puVar13[2] = puVar6;
          if (puVar6 == (undefined8 *)0x0) {
            uVar5 = 0xfffffff4;
            goto code_r0x0042d065;
          }
          puVar14 = puVar6;
          func_0x0099bda0(puVar6,puVar16,puVar10);
          uVar5 = 0;
          uStack_58 = 0;
          puVar16 = puVar6;
        }
        puVar13[3] = puVar16;
        puVar13[4] = uStack_58;
        puVar13[5] = uVar5;
        uVar2 = *(uint *)((long)puVar16 + 4);
        puVar6 = (undefined8 *)(ulong)uVar2;
        if ((uVar2 < *(ushort *)((long)puVar16 + 2)) || (puVar10 < puVar6)) {
          puVar14 = (undefined8 *)0x5;
          __android_log_print(5,&UNK_0015b3df,&UNK_00188104,*(ushort *)((long)puVar16 + 2),puVar6,
                              (ulong)puVar10 & 0xffffffff,uStack_d0,uStack_c8,uVar18);
        }
        else {
          puVar13[6] = puVar6;
          uVar3 = *(uint *)((long)puVar16 + 0x14);
          if (uVar2 < uVar3) {
            puVar12 = &UNK_0017417a;
code_r0x0042d054:
            uVar9 = (ulong)uVar3;
          }
          else {
            uVar3 = *(uint *)(puVar16 + 3);
            if (uVar2 < uVar3) {
              puVar12 = &UNK_00161656;
              goto code_r0x0042d054;
            }
            uVar1 = *(ushort *)((long)puVar16 + 2);
            lVar8 = (long)puVar16 + (ulong)uVar1;
            puVar13[0xc] = lVar8;
            puVar13[0xd] = uStack_58;
            puVar13[0xe] = uVar5;
            uVar2 = *(uint *)(puVar16 + 1);
            if ((ulong)uVar2 == 0) {
              *(undefined4 *)(puVar13 + 0x16) = 0;
              puVar13[0x12] = 0;
              puVar13[0x13] = 0;
              puVar13[0x14] = 0;
              goto code_r0x0042d0f4;
            }
            puVar14 = (undefined8 *)((ulong)*(ushort *)((long)puVar16 + 2) + (ulong)uVar2 * 4);
            if (puVar10 < puVar14) {
              uVar9 = (ulong)((uint)*(ushort *)((long)puVar16 + 2) + uVar2 * 4);
              puVar12 = &UNK_0015b3ec;
              puVar6 = (undefined8 *)((ulong)puVar10 & 0xffffffff);
            }
            else {
              bVar17 = (*(byte *)((long)puVar16 + 0x11) & 1) == 0;
              puVar14 = (undefined8 *)CONCAT71((int7)((ulong)puVar14 >> 8),bVar17);
              uVar2 = *(uint *)((long)puVar16 + 0x14);
              if ((ulong)uVar2 < (long)puVar6 - 2U) {
                lVar7 = (ulong)uVar2 + (long)puVar16;
                puVar13[0x12] = lVar7;
                puVar13[0x13] = uStack_58;
                puVar13[0x14] = uVar5;
                if (*(int *)((long)puVar16 + 0xc) == 0) {
                  uVar9 = (ulong)*(uint *)((long)puVar16 + 0x14);
                  uVar15 = (long)puVar6 - uVar9;
code_r0x0042d2e4:
                  uVar15 = uVar15 >> bVar17;
                  iVar4 = (int)uVar15;
                  *(int *)(puVar13 + 0x16) = iVar4;
                  if (iVar4 == 0) {
                    puVar14 = (undefined8 *)0x5;
                    __android_log_print(5,&UNK_0015b3df,&UNK_001708cc,*(undefined4 *)(puVar16 + 1),
                                        uVar15,uVar9,uStack_d0,uStack_c8,uVar18);
                    goto code_r0x0042d060;
                  }
                  if ((*(byte *)((long)puVar16 + 0x11) & 1) == 0) {
                    if (*(short *)(lVar7 + (ulong)(iVar4 - 1) * 2) != 0) goto code_r0x0042d396;
code_r0x0042d0f4:
                    if (*(int *)((long)puVar16 + 0xc) == 0) {
                      puVar13[0xf] = 0;
                      puVar13[0x10] = 0;
                      puVar13[0x11] = 0;
                      puVar13[0x17] = 0;
                      puVar13[0x18] = 0;
                      *(undefined8 *)((long)puVar13 + 0xc4) = 0;
                      *(undefined8 *)((long)puVar13 + 0xcc) = 0;
code_r0x0042d21f:
                      uVar5 = 0;
                      if (*(char *)(puVar13 + 0x25) == '\x01') {
                        if ((*(byte *)((long)puVar16 + 0x11) & 1) == 0) {
                          puVar14 = puVar13 + 0x20;
                          func_0x0043fbb0(puVar14,*(undefined4 *)(puVar16 + 1));
                        }
                        else {
                          puVar14 = puVar13 + 0x1b;
                          func_0x0043fbb0(puVar14,*(undefined4 *)(puVar16 + 1));
                        }
                        uVar5 = 0;
                      }
                      goto code_r0x0042d065;
                    }
                    puVar14 = (undefined8 *)(ulong)*(uint *)(puVar16 + 1);
                    puVar13[0xf] = lVar8 + (long)puVar14 * 4;
                    puVar13[0x10] = uStack_58;
                    puVar13[0x11] = uVar5;
                    uVar9 = (ulong)*(uint *)((long)puVar16 + 0xc);
                    puVar6 = (undefined8 *)(uVar9 * 4);
                    if ((puVar10 < puVar6) ||
                       (uVar15 = (ulong)uVar1 + (long)puVar14 * 4,
                       (long)puVar10 + uVar9 * -4 < uVar15)) {
                      puVar14 = (undefined8 *)0x5;
                      __android_log_print(5,&UNK_0015b3df,&UNK_0015fe4e,uVar9,puVar10);
                      goto code_r0x0042d060;
                    }
                    puVar10 = (undefined8 *)(*(uint *)((long)puVar16 + 0x14) - uVar15);
                    if ((puVar6 < puVar10 || (long)puVar6 - (long)puVar10 == 0) &&
                        uVar15 <= *(uint *)((long)puVar16 + 0x14)) {
                      lVar8 = (ulong)*(uint *)(puVar16 + 3) + (long)puVar16;
                      puVar13[0x17] = lVar8;
                      puVar13[0x18] = uStack_58;
                      puVar13[0x19] = uVar5;
                      uVar2 = *(uint *)((long)puVar16 + 4);
                      puVar6 = (undefined8 *)(ulong)uVar2;
                      uVar3 = *(uint *)(puVar16 + 3);
                      uVar9 = (ulong)uVar3;
                      uVar11 = uVar2 - uVar3;
                      if (uVar2 < uVar3 || uVar11 == 0) {
                        puVar12 = &UNK_0017bce8;
                        goto code_r0x0042d059;
                      }
                      *(uint *)(puVar13 + 0x1a) = uVar11 >> 2;
                      if (*(int *)(lVar8 + -4 + (ulong)(uVar11 & 0xfffffffc)) == -1 &&
                          *(long *)(lVar8 + -0xc + (ulong)(uVar11 & 0xfffffffc)) == -1)
                      goto code_r0x0042d21f;
                      puVar12 = &UNK_00159851;
                    }
                    else {
                      puVar12 = &UNK_00157b24;
                    }
                  }
                  else {
                    if (*(char *)(lVar7 + (ulong)(iVar4 - 1)) == '\0') goto code_r0x0042d0f4;
code_r0x0042d396:
                    puVar12 = &UNK_00167f40;
                  }
                  puVar14 = (undefined8 *)0x5;
                  __android_log_print(5,&UNK_0015b3df,puVar12);
                  goto code_r0x0042d060;
                }
                uVar2 = *(uint *)(puVar16 + 3);
                uVar9 = (ulong)uVar2;
                if (uVar9 < (long)puVar6 - 2U) {
                  uVar3 = *(uint *)((long)puVar16 + 0x14);
                  uVar15 = (ulong)(uVar2 - uVar3);
                  if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) goto code_r0x0042d2e4;
                  puVar12 = &UNK_001772f4;
                  puVar6 = (undefined8 *)(ulong)uVar3;
                }
                else {
                  puVar6 = (undefined8 *)(ulong)*(uint *)((long)puVar16 + 4);
                  puVar12 = &UNK_0015ca97;
                }
              }
              else {
                puVar6 = (undefined8 *)(ulong)*(uint *)((long)puVar16 + 4);
                puVar12 = &UNK_0015fe0d;
                uVar9 = (ulong)uVar2;
              }
            }
          }
code_r0x0042d059:
          puVar14 = (undefined8 *)0x5;
          __android_log_print(5,&UNK_0015b3df,puVar12,uVar9,puVar6);
        }
code_r0x0042d060:
        uVar5 = 0x80000001;
      }
      else {
        puVar14 = (undefined8 *)0x5;
        __android_log_print(5,&UNK_0015b3df,&UNK_0015e31b);
        uVar5 = 0x80000001;
      }
code_r0x0042d065:
      *(int *)(puVar13 + 1) = (int)uVar5;
      goto code_r0x0042d068;
    }
    puVar14 = (undefined8 *)0x5;
    __android_log_print(5,&UNK_0015b3df,&UNK_0016eefe,puVar10);
  }
  *(undefined4 *)(puVar13 + 1) = 0x80000001;
  uVar5 = 0x80000001;
code_r0x0042d068:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_a0) {
    func_0x0099bd00();
    *puVar14 = 0x99f820;
    _ZN7android13ResStringPool6uninitEv();
    func_0x0043d990(puVar14 + 0x1b);
    uVar5 = pthread_mutex_destroy(puVar14 + 7);
    return uVar5;
  }
  return uVar5;
}


