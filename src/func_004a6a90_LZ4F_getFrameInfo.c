// Function: LZ4F_getFrameInfo
// Address: 004a6a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004a6ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004a74f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004a7435: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004a74f5) */
/* WARNING: Removing unreachable block (ram,0x004a7506) */
/* WARNING: Removing unreachable block (ram,0x004a799c) */
/* WARNING: Removing unreachable block (ram,0x004a6ba9) */
/* WARNING: Removing unreachable block (ram,0x004a6bb2) */
/* WARNING: Removing unreachable block (ram,0x004a6bb6) */
/* WARNING: Removing unreachable block (ram,0x004a6bbb) */
/* WARNING: Removing unreachable block (ram,0x004a6bbf) */
/* WARNING: Removing unreachable block (ram,0x004a743a) */
/* WARNING: Removing unreachable block (ram,0x004a7455) */
/* WARNING: Removing unreachable block (ram,0x004a79dd) */
/* WARNING: Type propagation algorithm not settling */

ulong * LZ4F_getFrameInfo(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5
                         ,int *param_6)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char extraout_AH;
  ulong *puVar9;
  ulong uVar10;
  long *extraout_RDX;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_R12;
  ulong *unaff_R13;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *unaff_R15;
  ulong *puVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  undefined *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  long *plStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  int *piStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined *puStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong *puStack_28;
  
  puStack_28 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (1 < *(uint *)((long)param_1 + 0x44)) {
    uStack_30 = 0;
    uStack_38 = 0;
    *param_4 = 0;
    uVar10 = param_1[4];
    uVar14 = *(uint *)((long)param_1 + 0x24);
    uVar22 = param_1[5];
    uVar8 = *(uint *)((long)param_1 + 0x2c);
    uVar5 = *(uint *)((long)param_1 + 0x34);
    uVar20 = param_1[7];
    uVar6 = *(uint *)((long)param_1 + 0x3c);
    *(uint *)(param_2 + 2) = (uint)param_1[6];
    *(uint *)((long)param_2 + 0x14) = uVar5;
    *(uint *)(param_2 + 3) = (uint)uVar20;
    *(uint *)((long)param_2 + 0x1c) = uVar6;
    *(uint *)param_2 = (uint)uVar10;
    *(uint *)((long)param_2 + 4) = uVar14;
    *(uint *)(param_2 + 1) = (uint)uVar22;
    *(uint *)((long)param_2 + 0xc) = uVar8;
    param_5 = &uStack_38;
    param_2 = (ulong *)0x0;
    param_6 = (int *)0x0;
    puStack_40 = &UNK_004a6aec;
    puVar9 = (ulong *)LZ4F_decompress(param_1,0,&uStack_30,0);
    goto code_r0x004a6b7b;
  }
  if (*(uint *)((long)param_1 + 0x44) == 1) {
    *param_4 = 0;
    puVar9 = (ulong *)0xffffffffffffffed;
    goto code_r0x004a6b7b;
  }
  if (param_3 == (ulong *)0x0) {
    puVar9 = (ulong *)0xfffffffffffffff1;
  }
  else {
    param_5 = (ulong *)*param_4;
    puVar9 = (ulong *)0xfffffffffffffff4;
    if ((ulong *)0x4 < param_5) {
      uVar14 = (uint)*param_3;
      param_6 = (int *)(ulong)uVar14;
      puVar9 = (ulong *)0x8;
      if ((uVar14 & 0xfffffff0) != 0x184d2a50) {
        puVar9 = (ulong *)0xfffffffffffffff3;
        if (uVar14 != 0x184d2204) goto code_r0x004a6b74;
        uVar14 = *(byte *)((long)param_3 + 4) & 8;
        param_6 = (int *)(ulong)uVar14;
        puVar9 = (ulong *)(ulong)(uVar14 + (*(byte *)((long)param_3 + 4) & 1) * 4 + 7);
      }
      if (puVar9 <= param_5) {
        ppuVar11 = &puStack_40;
        puStack_40 = &UNK_004a6ba9;
        puVar21 = param_1;
        ppuVar12 = (undefined **)&stack0xfffffffffffffff8;
code_r0x004a79f0:
        *(undefined ***)((long)ppuVar11 + -8) = ppuVar12;
        *(ulong **)((long)ppuVar11 + -0x10) = param_4;
        *(ulong **)((long)ppuVar11 + -0x18) = param_2;
        *(ulong **)((long)ppuVar11 + -0x20) = unaff_R13;
        *(ulong **)((long)ppuVar11 + -0x28) = unaff_R12;
        *(ulong **)((long)ppuVar11 + -0x30) = puVar21;
        if (puVar9 < (ulong *)0x7) {
          return (ulong *)0xfffffffffffffff4;
        }
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        if (((uint)*param_3 & 0xfffffff0) == 0x184d2a50) {
          *(uint *)((long)param_1 + 0x2c) = 1;
          if (param_3 == (ulong *)((long)param_1 + 0x10c)) {
            param_1[0xd] = (ulong)puVar9;
            param_1[0xe] = 8;
            uVar14 = 0xd;
            puVar21 = puVar9;
          }
          else {
            uVar14 = 0xc;
            puVar21 = (ulong *)0x4;
          }
        }
        else {
          if ((uint)*param_3 != 0x184d2204) {
            return (ulong *)0xfffffffffffffff3;
          }
          *(uint *)((long)param_1 + 0x2c) = 0;
          bVar2 = *(byte *)((long)param_3 + 4);
          if ((bVar2 & 2) != 0) {
            return (ulong *)0xfffffffffffffff8;
          }
          if ((bVar2 & 0xc0) != 0x40) {
            return (ulong *)0xfffffffffffffffa;
          }
          lVar1 = (ulong)(bVar2 & 8) + (ulong)(bVar2 & 1) * 4;
          puVar21 = (ulong *)(lVar1 + 7);
          if (puVar9 < puVar21) {
            if (param_3 != (ulong *)((long)param_1 + 0x10c)) {
              *(undefined **)((long)ppuVar11 + -0x50) = &UNK_004a7ac2;
              func_0x0099bda0((ulong *)((long)param_1 + 0x10c));
            }
            param_1[0xd] = (ulong)puVar9;
            param_1[0xe] = (ulong)puVar21;
            uVar14 = 1;
            puVar21 = puVar9;
          }
          else {
            bVar3 = *(byte *)((long)param_3 + 5);
            if ((char)bVar3 < '\0') {
              return (ulong *)0xfffffffffffffff8;
            }
            uVar14 = bVar3 >> 4 & 7;
            if (uVar14 < 4) {
              return (ulong *)0xfffffffffffffffe;
            }
            if ((bVar3 & 0xf) != 0) {
              return (ulong *)0xfffffffffffffff8;
            }
            *(ulong **)((long)ppuVar11 + -0x40) = param_1;
            *(ulong **)((long)ppuVar11 + -0x38) = param_3;
            *(undefined **)((long)ppuVar11 + -0x50) = &UNK_004a7b48;
            XXH32((uint *)((long)param_3 + 4),lVar1 + 2,0);
            lVar1 = *(long *)((long)ppuVar11 + -0x38);
            param_1 = *(ulong **)((long)ppuVar11 + -0x40);
            if (*(char *)(lVar1 + -1 + (long)puVar21) != extraout_AH) {
              return (ulong *)0xffffffffffffffef;
            }
            *(uint *)((long)param_1 + 0x24) = bVar2 >> 5 & 1;
            *(uint *)((long)param_1 + 0x3c) = bVar2 >> 4 & 1;
            *(uint *)(param_1 + 5) = bVar2 >> 2 & 1;
            *(uint *)(param_1 + 4) = uVar14;
            param_1[10] = *(ulong *)(&UNK_001fe7d0 + (ulong)uVar14 * 8);
            if ((bVar2 & 8) != 0) {
              uVar10 = *(ulong *)(lVar1 + 6);
              param_1[6] = uVar10;
              param_1[9] = uVar10;
            }
            uVar14 = 2;
            if ((bVar2 & 1) != 0) {
              *(uint *)(param_1 + 7) = *(uint *)(lVar1 + -5 + (long)puVar21);
            }
          }
        }
        *(uint *)((long)param_1 + 0x44) = uVar14;
        return puVar21;
      }
      *param_4 = 0;
      puVar9 = (ulong *)0xfffffffffffffff4;
      goto code_r0x004a6b7b;
    }
  }
code_r0x004a6b74:
  *param_4 = 0;
code_r0x004a6b7b:
  unaff_R13 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (unaff_R13 == puStack_28) {
    return puVar9;
  }
  puStack_40 = &UNK_004a6bda;
  func_0x0099bd00();
  ppuVar12 = &puStack_40;
  uVar14 = 0;
  if (param_2 == (ulong *)0x0) {
    puStack_80 = (ulong *)0x0;
  }
  else {
    puStack_80 = (ulong *)(*extraout_RDX + (long)param_2);
  }
  puStack_90 = (ulong *)(*param_5 + (long)unaff_R13);
  *param_5 = 0;
  *extraout_RDX = 0;
  if (param_6 != (int *)0x0) {
    uVar14 = (uint)(param_6[1] != 0);
  }
  *(uint *)(param_1 + 0x21) = (uint)param_1[0x21] | uVar14;
  puStack_88 = param_1 + 0xd;
  puVar13 = (ulong *)((long)param_1 + 0x10c);
  puStack_e0 = param_1 + 0x22;
  puStack_b8 = param_1 + 0x13;
  puStack_a0 = param_1 + 0x1b;
  puVar21 = puStack_90;
  param_4 = unaff_R15;
  plStack_d0 = extraout_RDX;
  puStack_c8 = param_5;
  puStack_c0 = unaff_R13;
  piStack_a8 = param_6;
  puStack_98 = param_2;
  puStack_78 = param_1;
  puStack_70 = param_2;
  puStack_40 = &stack0xfffffffffffffff8;
code_r0x004a6c9b:
  uVar14 = *(uint *)((long)param_1 + 0x44);
  param_2 = unaff_R13;
code_r0x004a6cc9:
  puVar18 = puStack_88;
  uVar10 = (long)puVar21 - (long)unaff_R13;
  unaff_R12 = param_1;
  switch(uVar14) {
  case 0:
    puVar9 = (ulong *)((long)puVar21 - (long)unaff_R13);
    if ((ulong *)0x12 < puVar9) {
      ppuVar11 = &puStack_e8;
      puStack_e8 = &UNK_004a743a;
      param_3 = unaff_R13;
      goto code_r0x004a79f0;
    }
    *puStack_88 = 0;
    if (puVar21 == unaff_R13) {
      return (ulong *)0x7;
    }
    param_1[0xe] = 7;
    *(uint *)((long)param_1 + 0x44) = 1;
    uVar10 = 0;
    puVar13 = (ulong *)((long)param_1 + 0x10c);
    puVar21 = puVar9;
    puVar9 = (ulong *)0x7;
    break;
  case 1:
    uVar10 = param_1[0xd];
    puVar21 = (ulong *)((long)puVar21 - (long)unaff_R13);
    puVar9 = (ulong *)param_1[0xe];
    break;
  case 2:
    goto code_r0x004a73b8;
  case 3:
    goto code_r0x004a75cd;
  case 4:
    uVar10 = (long)puVar21 - (long)unaff_R13;
    goto code_r0x004a75f7;
  case 5:
    uVar20 = param_1[0xe];
    if (puStack_70 == (ulong *)0x0) {
      puStack_70 = (ulong *)0x0;
      if (uVar20 == 0) goto code_r0x004a6fda;
code_r0x004a79c0:
      param_1[0xe] = uVar20;
code_r0x004a79c5:
      puVar9 = (ulong *)(uVar20 + (ulong)(*(uint *)((long)param_1 + 0x3c) != 0) * 4 + 4);
      goto code_r0x004a77a4;
    }
    uVar10 = (long)puStack_80 - (long)puStack_70;
    if ((ulong)((long)puVar21 - (long)unaff_R13) < (ulong)((long)puStack_80 - (long)puStack_70)) {
      uVar10 = (long)puVar21 - (long)unaff_R13;
    }
    if (uVar20 < uVar10) {
      uVar10 = uVar20;
    }
    puStack_e8 = &UNK_004a6d25;
    func_0x0099bda0(puStack_70,unaff_R13,uVar10);
    if ((uint)param_1[0x21] == 0) {
      if (*(uint *)((long)param_1 + 0x3c) != 0) {
        puStack_e8 = &UNK_004a6d47;
        XXH32_update(puStack_a0,unaff_R13,uVar10);
      }
      if ((uint)param_1[5] != 0) {
        puStack_e8 = &UNK_004a6d62;
        XXH32_update(param_1 + 0x15,unaff_R13,uVar10);
      }
    }
    if (param_1[6] != 0) {
      param_1[9] = param_1[9] - uVar10;
    }
    if (*(uint *)((long)param_1 + 0x24) == 0) {
      puStack_e8 = &UNK_004a6d98;
      func_0x004a7be0(param_1,puStack_70,uVar10,puStack_98,0);
    }
    puVar13 = (ulong *)((long)param_1 + 0x10c);
    unaff_R13 = (ulong *)((long)unaff_R13 + uVar10);
    puStack_70 = (ulong *)((long)puStack_70 + uVar10);
    uVar20 = param_1[0xe] - uVar10;
    param_2 = puVar21;
    if (uVar20 != 0) goto code_r0x004a79c0;
code_r0x004a6fda:
    if (*(uint *)((long)param_1 + 0x3c) == 0) goto code_r0x004a724d;
    *puStack_88 = 0;
    uVar14 = 6;
    *(uint *)((long)param_1 + 0x44) = 6;
    goto code_r0x004a6cc9;
  case 6:
    uVar22 = (long)puVar21 - (long)unaff_R13;
    uVar10 = *puStack_88;
    if (uVar10 == 0 && 3 < (long)uVar22) {
      puVar17 = (ulong *)((long)unaff_R13 + 4);
      puVar9 = unaff_R13;
    }
    else {
      uVar20 = 4 - uVar10;
      if (uVar22 <= 4 - uVar10) {
        uVar20 = uVar22;
      }
      puStack_e8 = &UNK_004a7333;
      puStack_d8 = unaff_R13;
      func_0x0099bda0((long)puVar13 + uVar10,unaff_R13,uVar20);
      *puVar18 = uVar10 + uVar20;
      puVar17 = (ulong *)(uVar20 + (long)puStack_d8);
      param_1 = puStack_78;
      puVar9 = puVar13;
      if (uVar10 + uVar20 < 4) {
        puVar9 = (ulong *)0x1;
        unaff_R13 = puVar17;
        goto code_r0x004a77a4;
      }
    }
    uVar14 = 3;
    unaff_R13 = puVar17;
    if ((uint)param_1[0x21] == 0) {
      uVar10 = *puVar9;
      puVar18 = (ulong *)(ulong)(uint)uVar10;
      puStack_e8 = &UNK_004a737b;
      uVar8 = XXH32_digest(puStack_a0);
      puVar13 = (ulong *)((long)param_1 + 0x10c);
      puVar21 = puStack_90;
      if ((uint)uVar10 != uVar8) {
        return (ulong *)0xfffffffffffffff9;
      }
    }
    goto code_r0x004a6cc1;
  case 7:
    uVar22 = param_1[0xe];
    if (uVar10 < uVar22) {
      param_1[0xd] = 0;
      *(uint *)((long)param_1 + 0x44) = 8;
      goto code_r0x004a6dee;
    }
    uVar14 = *(uint *)((long)puStack_78 + 0x3c);
    puVar13 = (ulong *)((long)unaff_R13 + uVar22);
    puVar9 = unaff_R13;
    param_1 = puStack_78;
    goto joined_r0x004a6e47;
  case 8:
code_r0x004a6dee:
    uVar22 = param_1[0xe] - param_1[0xd];
    uVar10 = (long)puVar21 - (long)unaff_R13;
    if (uVar22 < (ulong)((long)puVar21 - (long)unaff_R13)) {
      uVar10 = uVar22;
    }
    puStack_e8 = &UNK_004a6e1b;
    func_0x0099bda0(param_1[0xd] + param_1[0xc],unaff_R13,uVar10);
    unaff_R13 = (ulong *)((long)unaff_R13 + uVar10);
    uVar10 = uVar10 + param_1[0xd];
    param_1[0xd] = uVar10;
    uVar22 = param_1[0xe];
    uVar20 = uVar22 - uVar10;
    if (uVar10 <= uVar22 && uVar20 != 0) goto code_r0x004a79c5;
    uVar14 = *(uint *)((long)param_1 + 0x3c);
    puVar13 = unaff_R13;
    puVar9 = (ulong *)param_1[0xc];
joined_r0x004a6e47:
    unaff_R13 = puVar13;
    if (uVar14 != 0) {
      param_1[0xe] = uVar22 - 4;
      iVar4 = *(int *)((long)puVar9 + (uVar22 - 4));
      puStack_e8 = &UNK_004a6e78;
      iVar7 = XXH32(puVar9,uVar22 - 4,0);
      param_4 = puVar21;
      if (iVar4 != iVar7) {
        return (ulong *)0xfffffffffffffff9;
      }
    }
    uVar10 = param_1[10];
    uVar22 = param_1[0x10];
    if (((ulong)((long)puStack_80 - (long)puStack_70) < uVar10) ||
       ((uVar20 = param_1[0x11], uVar22 != 0 && (uVar22 + uVar20 == param_1[0x12])))) {
      if (*(uint *)((long)param_1 + 0x24) == 0) {
        uVar19 = param_1[0xf];
        uVar20 = param_1[0x11];
        if (uVar22 == uVar19) {
          if (0x20000 < uVar20) {
            puStack_e8 = &UNK_004a7028;
            func_0x0099bda0(uVar19,uVar22 + uVar20 + -0x10000,0x10000);
            uVar20 = 0x10000;
            param_1[0x11] = 0x10000;
            uVar10 = param_1[10];
            uVar19 = param_1[0xf];
            uVar22 = param_1[0x10];
          }
          uVar19 = uVar19 + uVar20;
        }
        else {
          uVar15 = 0x10000;
          if (uVar20 < 0x10000) {
            uVar15 = uVar20;
          }
          uVar19 = uVar19 + uVar15;
        }
        param_1[0x12] = uVar19;
      }
      else {
        uVar20 = param_1[0x11];
        uVar19 = param_1[0x12];
      }
      uVar15 = (uVar22 + uVar20) - 0x10000;
      if (uVar22 == 0 || uVar20 < 0x40000001) {
        uVar15 = uVar22;
      }
      uVar16 = uVar20 & 0xffffffff;
      if (uVar22 != 0 && uVar20 >= 0x40000001) {
        uVar16 = 0x10000;
      }
      puStack_e8 = &UNK_004a7090;
      uVar14 = LZ4_decompress_safe_usingDict(puVar9,uVar19,(uint)param_1[0xe],uVar10,uVar15,uVar16);
      if ((int)uVar14 < 0) {
        return (ulong *)0xfffffffffffffff0;
      }
      param_2 = (ulong *)(ulong)uVar14;
      if (((uint)param_1[5] != 0) && ((uint)param_1[0x21] == 0)) {
        puStack_e8 = &UNK_004a70c6;
        XXH32_update(param_1 + 0x15,param_1[0x12],param_2);
      }
      if (param_1[6] != 0) {
        param_1[9] = param_1[9] - (long)param_2;
      }
      param_1[0x13] = (ulong)param_2;
      param_1[0x14] = 0;
      *(uint *)((long)param_1 + 0x44) = 9;
      puVar9 = (ulong *)0x0;
      puVar13 = (ulong *)((long)param_1 + 0x10c);
code_r0x004a70fa:
      puVar21 = puStack_70;
      if (puStack_70 == (ulong *)0x0) {
        puStack_70 = (ulong *)0x0;
      }
      else {
        uVar10 = (long)puStack_80 - (long)puStack_70;
        if ((ulong)((long)param_2 - (long)puVar9) < (ulong)((long)puStack_80 - (long)puStack_70)) {
          uVar10 = (long)param_2 - (long)puVar9;
        }
        puStack_e8 = &UNK_004a7127;
        func_0x0099bda0(puStack_70,(long)puVar9 + param_1[0x12],uVar10);
        if (*(uint *)((long)param_1 + 0x24) == 0) {
          uVar22 = param_1[0x11];
          if (uVar22 == 0) {
            param_1[0x10] = (ulong)puStack_70;
            puVar9 = puStack_70;
          }
          else {
            puVar9 = (ulong *)param_1[0x10];
          }
          if ((ulong *)((long)puVar9 + uVar22) == puStack_70) {
code_r0x004a71ff:
            uVar20 = uVar22 + uVar10;
          }
          else {
            uVar20 = (long)puStack_70 + (uVar10 - (long)puStack_98);
            if (uVar20 < 0x10000) {
              if (puVar9 == (ulong *)param_1[0xf]) goto code_r0x004a71ff;
              uVar19 = param_1[0x12] - (long)param_1[0xf];
              uVar20 = 0;
              if (param_1[0x13] < 0x10001) {
                uVar20 = 0x10000 - param_1[0x13];
              }
              if (uVar19 <= uVar20) {
                uVar20 = uVar19;
              }
              puStack_e8 = &UNK_004a71e5;
              func_0x0099bda0(param_1[0x12] - uVar20,
                              (long)((long)puVar9 + uVar22) + (-uVar20 - param_1[0x14]));
              param_1[0x10] = param_1[0xf];
              uVar20 = uVar19 + uVar10 + param_1[0x14];
            }
            else {
              param_1[0x10] = (ulong)puStack_98;
            }
          }
          param_1[0x11] = uVar20;
          puVar21 = puStack_70;
        }
        puStack_70 = (ulong *)((long)puVar21 + uVar10);
        puVar9 = (ulong *)(uVar10 + param_1[0x14]);
        param_1[0x14] = (ulong)puVar9;
        param_2 = (ulong *)param_1[0x13];
        puVar13 = (ulong *)((long)param_1 + 0x10c);
      }
      puVar21 = puStack_90;
      param_4 = puStack_70;
      if (puVar9 != param_2) {
        puVar9 = (ulong *)0x4;
        goto code_r0x004a77a4;
      }
    }
    else {
      uVar19 = (uVar22 + uVar20) - 0x10000;
      if (uVar22 == 0 || uVar20 < 0x40000001) {
        uVar19 = uVar22;
      }
      uVar15 = uVar20 & 0xffffffff;
      if (uVar22 != 0 && uVar20 >= 0x40000001) {
        uVar15 = 0x10000;
      }
      puStack_e8 = &UNK_004a6f1a;
      uVar14 = LZ4_decompress_safe_usingDict
                         (puVar9,puStack_70,(uint)param_1[0xe],uVar10,uVar19,uVar15);
      if ((int)uVar14 < 0) {
        return (ulong *)0xfffffffffffffff0;
      }
      uVar10 = (ulong)uVar14;
      if (((uint)param_1[5] != 0) && ((uint)param_1[0x21] == 0)) {
        puStack_e8 = &UNK_004a6f56;
        XXH32_update(param_1 + 0x15,puStack_70,uVar10);
      }
      if (param_1[6] != 0) {
        param_1[9] = param_1[9] - uVar10;
      }
      if (*(uint *)((long)param_1 + 0x24) == 0) {
        puStack_e8 = &UNK_004a6f8c;
        func_0x004a7be0(param_1,puStack_70,uVar10,puStack_98,0);
      }
      puVar13 = (ulong *)((long)param_1 + 0x10c);
      puStack_70 = (ulong *)((long)puStack_70 + uVar10);
      param_2 = puVar21;
    }
code_r0x004a724d:
    uVar14 = 3;
    *(uint *)((long)param_1 + 0x44) = 3;
    goto code_r0x004a6cc9;
  case 9:
    param_2 = (ulong *)param_1[0x13];
    puVar9 = (ulong *)param_1[0x14];
    goto code_r0x004a70fa;
  case 10:
    if (param_1[9] != 0) {
      return (ulong *)0xfffffffffffffff2;
    }
    if ((uint)param_1[5] != 0) {
      uVar10 = (long)puVar21 - (long)unaff_R13;
      if ((long)uVar10 < 4) {
        param_1[0xd] = 0;
        *(uint *)((long)param_1 + 0x44) = 0xb;
        goto code_r0x004a7714;
      }
      puVar18 = (ulong *)((long)unaff_R13 + 4);
      uVar14 = (uint)param_1[0x21];
      goto joined_r0x004a792b;
    }
    goto code_r0x004a7773;
  case 0xb:
    uVar10 = (long)puVar21 - (long)unaff_R13;
code_r0x004a7714:
    uVar22 = 4 - param_1[0xd];
    if (uVar10 <= uVar22) {
      uVar22 = uVar10;
    }
    puStack_e8 = &UNK_004a773e;
    func_0x0099bda0(param_1[0xd] + param_1[0xc],unaff_R13,uVar22);
    puVar18 = (ulong *)((long)unaff_R13 + uVar22);
    uVar22 = uVar22 + param_1[0xd];
    param_1[0xd] = uVar22;
    if (uVar22 < 4) goto code_r0x004a7755;
    unaff_R13 = (ulong *)param_1[0xc];
    uVar14 = (uint)param_1[0x21];
joined_r0x004a792b:
    if (uVar14 == 0) {
      uVar10 = *unaff_R13;
      puStack_e8 = &UNK_004a78a5;
      uVar14 = XXH32_digest(param_1 + 0x15);
      if ((uint)uVar10 != uVar14) {
        return (ulong *)0xffffffffffffffee;
      }
    }
    *(uint *)((long)param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x21) = 0;
    param_1[9] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    puVar9 = (ulong *)0x0;
    unaff_R13 = puVar18;
    goto code_r0x004a77a4;
  case 0xc:
    uVar10 = (long)puVar21 - (long)unaff_R13;
    if ((long)uVar10 < 4) {
      param_1[0xd] = 4;
      param_1[0xe] = 8;
      *(uint *)((long)param_1 + 0x44) = 0xd;
      goto code_r0x004a728b;
    }
    puVar17 = (ulong *)((long)unaff_R13 + 4);
    param_1 = puStack_78;
    puVar18 = param_4;
    goto code_r0x004a6cad;
  case 0xd:
code_r0x004a728b:
    puVar18 = (ulong *)param_1[0xd];
    uVar22 = param_1[0xe];
    uVar20 = uVar22 - (long)puVar18;
    if (uVar10 <= uVar22 - (long)puVar18) {
      uVar20 = uVar10;
    }
    puStack_e8 = &UNK_004a72b1;
    func_0x0099bda0((long)puVar13 + (long)puVar18,unaff_R13,uVar20);
    puVar17 = (ulong *)((long)unaff_R13 + uVar20);
    uVar20 = uVar20 + (long)puVar18;
    param_1[0xd] = uVar20;
    puVar9 = (ulong *)(uVar22 - uVar20);
    unaff_R13 = puVar17;
    if (uVar20 <= uVar22 && puVar9 != (ulong *)0x0) goto code_r0x004a77a4;
    puVar13 = (ulong *)((long)param_1 + 0x10c);
    unaff_R13 = puStack_e0;
    puVar21 = puStack_90;
code_r0x004a6cad:
    uVar10 = *unaff_R13;
    param_1[6] = (ulong)(uint)uVar10;
    param_1[0xe] = (ulong)(uint)uVar10;
    uVar14 = 0xe;
    unaff_R13 = puVar17;
code_r0x004a6cc1:
    *(uint *)((long)param_1 + 0x44) = uVar14;
    param_2 = unaff_R13;
    param_4 = puVar18;
    goto code_r0x004a6cc9;
  case 0xe:
    uVar22 = param_1[0xe];
    if (uVar22 < uVar10) {
      uVar10 = uVar22;
    }
    unaff_R13 = (ulong *)((long)unaff_R13 + uVar10);
    puVar9 = (ulong *)(uVar22 - uVar10);
    param_1[0xe] = (ulong)puVar9;
    if (puVar9 == (ulong *)0x0) {
code_r0x004a7773:
      *(uint *)((long)param_1 + 0x44) = 0;
      *(uint *)(param_1 + 0x21) = 0;
      param_1[9] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      puVar9 = (ulong *)0x0;
    }
    goto code_r0x004a77a4;
  default:
    goto code_r0x004a6c9b;
  }
  param_2 = (ulong *)((long)puVar9 - uVar10);
  if (puVar21 <= (ulong *)((long)puVar9 - uVar10)) {
    param_2 = puVar21;
  }
  puStack_e8 = &UNK_004a74cd;
  puStack_b0 = puVar13;
  func_0x0099bda0((long)puVar13 + uVar10,unaff_R13,param_2);
  puVar21 = (ulong *)(uVar10 + (long)param_2);
  *puStack_88 = (ulong)puVar21;
  param_2 = (ulong *)((long)param_2 + (long)unaff_R13);
  if (puVar9 <= puVar21) {
    ppuVar11 = &puStack_e8;
    puStack_e8 = &UNK_004a74f5;
    puVar21 = puVar9;
    ppuVar12 = &puStack_40;
    param_3 = puStack_b0;
    param_4 = puStack_b0;
    goto code_r0x004a79f0;
  }
  puVar9 = (ulong *)((long)puVar9 + (4 - (long)puVar21));
  unaff_R13 = param_2;
  goto code_r0x004a77a4;
code_r0x004a73b8:
  if ((uint)param_1[5] != 0) {
    puStack_e8 = &UNK_004a73d2;
    XXH32_reset(param_1 + 0x15,0);
  }
  uVar10 = (ulong)(*(uint *)((long)param_1 + 0x24) == 0) * 0x20000 + param_1[10];
  if (param_1[0xb] < uVar10) {
    param_1[0xb] = 0;
    if (param_1[0xc] != 0) {
      if ((code *)param_1[2] == (code *)0x0) {
        puStack_e8 = &UNK_004a7513;
        func_0x0099c1f0(param_1[0xc]);
      }
      else {
        puStack_e8 = &UNK_004a741b;
        (*(code *)param_1[2])(param_1[3]);
      }
    }
    if ((code *)*param_1 == (code *)0x0) {
      puStack_e8 = &UNK_004a7536;
      uVar22 = func_0x0099c1e0(param_1[10] + 4);
    }
    else {
      puStack_e8 = &UNK_004a752c;
      uVar22 = (*(code *)*param_1)(param_1[3]);
    }
    param_1[0xc] = uVar22;
    if (uVar22 == 0) {
      return (ulong *)0xfffffffffffffff7;
    }
    if (param_1[0xf] != 0) {
      if ((code *)param_1[2] == (code *)0x0) {
        puStack_e8 = &UNK_004a7570;
        func_0x0099c1f0(param_1[0xf]);
      }
      else {
        puStack_e8 = &UNK_004a7566;
        (*(code *)param_1[2])(param_1[3]);
      }
    }
    if ((code *)*param_1 == (code *)0x0) {
      puStack_e8 = &UNK_004a758d;
      uVar22 = func_0x0099c1e0(uVar10);
    }
    else {
      puStack_e8 = &UNK_004a7583;
      uVar22 = (*(code *)*param_1)(param_1[3]);
    }
    param_1[0xf] = uVar22;
    if (uVar22 == 0) {
      return (ulong *)0xfffffffffffffff7;
    }
    param_1[0xb] = uVar10;
  }
  else {
    uVar22 = param_1[0xf];
  }
  puVar13 = (ulong *)((long)param_1 + 0x10c);
  *puStack_88 = 0;
  puStack_88[1] = 0;
  param_1[0x12] = uVar22;
  *puStack_b8 = 0;
  puStack_b8[1] = 0;
  *(uint *)((long)param_1 + 0x44) = 3;
  param_4 = puVar21;
code_r0x004a75cd:
  uVar10 = (long)puVar21 - (long)unaff_R13;
  if (uVar10 < 4) {
    param_1[0xd] = 0;
    *(uint *)((long)param_1 + 0x44) = 4;
code_r0x004a75f7:
    uVar22 = 4 - param_1[0xd];
    if (uVar10 <= uVar22) {
      uVar22 = uVar10;
    }
    puStack_e8 = &UNK_004a761c;
    func_0x0099bda0(param_1[0xd] + param_1[0xc],unaff_R13,uVar22);
    puVar18 = (ulong *)((long)unaff_R13 + uVar22);
    uVar22 = uVar22 + param_1[0xd];
    param_1[0xd] = uVar22;
    if (uVar22 < 4) {
code_r0x004a7755:
      puVar9 = (ulong *)(4 - uVar22);
      unaff_R13 = puVar18;
code_r0x004a77a4:
      puVar13 = puStack_70;
      puVar21 = puStack_78;
      if ((((*(uint *)((long)param_1 + 0x24) == 0) && (uVar10 = param_1[0x10], uVar10 != 0)) &&
          (uVar22 = param_1[0xf], uVar10 != uVar22)) &&
         (((piStack_a8 == (int *)0x0 || (*piStack_a8 == 0)) &&
          (*(uint *)((long)param_1 + 0x44) - 2 < 8)))) {
        if (*(uint *)((long)param_1 + 0x44) == 9) {
          uVar22 = puStack_78[0x12] - uVar22;
          uVar20 = 0;
          if (puStack_78[0x13] < 0x10001) {
            uVar20 = 0x10000 - puStack_78[0x13];
          }
          if (uVar22 <= uVar20) {
            uVar20 = uVar22;
          }
          puStack_e8 = &UNK_004a7860;
          func_0x0099bda0(puStack_78[0x12] - uVar20,
                          ((uVar10 + puStack_78[0x11]) - puStack_78[0x14]) - uVar20);
          puVar21[0x10] = puVar21[0xf];
          puVar21[0x11] = uVar22 + puVar21[0x14];
        }
        else {
          uVar20 = puStack_78[0x11];
          uVar19 = 0x10000;
          if (uVar20 < 0x10000) {
            uVar19 = uVar20;
          }
          puStack_e8 = &UNK_004a78fa;
          func_0x0099bda0(uVar22,(uVar10 + uVar20) - uVar19,uVar19);
          puVar21[0x10] = puVar21[0xf];
          puVar21[0x11] = uVar19;
          puVar21[0x12] = uVar19 + puVar21[0xf];
        }
      }
      *puStack_c8 = (long)unaff_R13 - (long)puStack_c0;
      *plStack_d0 = (long)puVar13 - (long)puStack_98;
      return puVar9;
    }
    unaff_R13 = (ulong *)param_1[0xc];
    puVar13 = (ulong *)((long)param_1 + 0x10c);
  }
  else {
    puVar18 = (ulong *)((long)unaff_R13 + 4);
  }
  uVar14 = (uint)*unaff_R13;
  unaff_R13 = puVar18;
  if (uVar14 == 0) {
    param_4 = (ulong *)0xa;
  }
  else {
    uVar10 = (ulong)(uVar14 & 0x7fffffff);
    if (param_1[10] < uVar10) {
      return (ulong *)0xfffffffffffffffe;
    }
    if (-1 < (int)uVar14) {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x3c) * 4 + uVar10;
      param_1[0xe] = uVar10;
      *(uint *)((long)param_1 + 0x44) = 7;
      if ((puStack_70 == puStack_80) || (puVar18 == puVar21)) {
        puVar9 = (ulong *)(uVar10 + 4);
        goto code_r0x004a77a4;
      }
      goto code_r0x004a6c9b;
    }
    param_1[0xe] = uVar10;
    param_4 = (ulong *)0x5;
    if (*(uint *)((long)param_1 + 0x3c) != 0) {
      puStack_e8 = &UNK_004a76bb;
      XXH32_reset(puStack_a0,0);
      puVar13 = (ulong *)((long)param_1 + 0x10c);
    }
  }
  *(uint *)((long)param_1 + 0x44) = (uint)param_4;
  puVar21 = puStack_90;
  goto code_r0x004a6c9b;
}


