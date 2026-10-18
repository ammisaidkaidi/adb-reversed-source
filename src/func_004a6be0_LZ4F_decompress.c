// Function: LZ4F_decompress
// Address: 004a6be0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004a74f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004a7435: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004a74f5) */
/* WARNING: Removing unreachable block (ram,0x004a7506) */
/* WARNING: Removing unreachable block (ram,0x004a799c) */
/* WARNING: Removing unreachable block (ram,0x004a743a) */
/* WARNING: Removing unreachable block (ram,0x004a7455) */
/* WARNING: Removing unreachable block (ram,0x004a79dd) */
/* WARNING: Type propagation algorithm not settling */

ulong LZ4F_decompress(undefined8 *param_1,long param_2,long *param_3,uint *param_4,long *param_5,
                     int *param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char extraout_AH;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lStack_48;
  long lStack_38;
  
  uVar8 = 0;
  if (param_2 == 0) {
    lStack_48 = 0;
  }
  else {
    lStack_48 = *param_3 + param_2;
  }
  puVar16 = (uint *)(*param_5 + (long)param_4);
  *param_5 = 0;
  *param_3 = 0;
  if (param_6 != (int *)0x0) {
    uVar8 = (uint)(param_6[1] != 0);
  }
  *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | uVar8;
  puVar1 = param_1 + 0xd;
  puVar2 = param_1 + 0x1b;
  puVar19 = param_4;
  lStack_38 = param_2;
code_r0x004a6c9b:
  uVar11 = *(undefined4 *)((long)param_1 + 0x44);
code_r0x004a6cc9:
  puVar18 = (uint *)((long)param_1 + 0x10c);
  uVar10 = (long)puVar16 - (long)puVar19;
  switch(uVar11) {
  case 0:
    uVar13 = (long)puVar16 - (long)puVar19;
    if (0x12 < uVar13) goto code_r0x004a79f0;
    *puVar1 = 0;
    if (puVar16 == puVar19) {
      return 7;
    }
    param_1[0xe] = 7;
    *(undefined4 *)((long)param_1 + 0x44) = 1;
    lVar12 = 0;
    uVar10 = uVar13;
    uVar13 = 7;
    break;
  case 1:
    lVar12 = param_1[0xd];
    uVar10 = (long)puVar16 - (long)puVar19;
    uVar13 = param_1[0xe];
    break;
  case 2:
    goto code_r0x004a73b8;
  case 3:
    goto code_r0x004a75cd;
  case 4:
    uVar10 = (long)puVar16 - (long)puVar19;
    goto code_r0x004a75f7;
  case 5:
    uVar21 = param_1[0xe];
    if (lStack_38 == 0) {
      lStack_38 = 0;
      if (uVar21 == 0) goto code_r0x004a6fda;
code_r0x004a79c0:
      param_1[0xe] = uVar21;
code_r0x004a79c5:
      uVar13 = uVar21 + (ulong)(*(int *)((long)param_1 + 0x3c) != 0) * 4 + 4;
      goto code_r0x004a77a4;
    }
    uVar10 = lStack_48 - lStack_38;
    if ((ulong)((long)puVar16 - (long)puVar19) < (ulong)(lStack_48 - lStack_38)) {
      uVar10 = (long)puVar16 - (long)puVar19;
    }
    if (uVar21 < uVar10) {
      uVar10 = uVar21;
    }
    func_0x0099bda0(lStack_38,puVar19,uVar10);
    if (*(int *)(param_1 + 0x21) == 0) {
      if (*(int *)((long)param_1 + 0x3c) != 0) {
        XXH32_update(puVar2,puVar19,uVar10);
      }
      if (*(int *)(param_1 + 5) != 0) {
        XXH32_update(param_1 + 0x15,puVar19,uVar10);
      }
    }
    if (param_1[6] != 0) {
      param_1[9] = param_1[9] - uVar10;
    }
    if (*(int *)((long)param_1 + 0x24) == 0) {
      func_0x004a7be0(param_1,lStack_38,uVar10,param_2,0);
    }
    puVar19 = (uint *)((long)puVar19 + uVar10);
    lStack_38 = lStack_38 + uVar10;
    uVar21 = param_1[0xe] - uVar10;
    if (uVar21 != 0) goto code_r0x004a79c0;
code_r0x004a6fda:
    if (*(int *)((long)param_1 + 0x3c) == 0) goto code_r0x004a724d;
    *puVar1 = 0;
    uVar11 = 6;
    *(undefined4 *)((long)param_1 + 0x44) = 6;
    goto code_r0x004a6cc9;
  case 6:
    uVar13 = (long)puVar16 - (long)puVar19;
    uVar10 = *puVar1;
    if (uVar10 == 0 && 3 < (long)uVar13) {
      puVar17 = puVar19 + 1;
      puVar18 = puVar19;
    }
    else {
      uVar21 = 4 - uVar10;
      if (uVar13 <= 4 - uVar10) {
        uVar21 = uVar13;
      }
      func_0x0099bda0((long)puVar18 + uVar10,puVar19,uVar21);
      *puVar1 = uVar10 + uVar21;
      puVar17 = (uint *)(uVar21 + (long)puVar19);
      if (uVar10 + uVar21 < 4) {
        uVar13 = 1;
        puVar19 = puVar17;
        goto code_r0x004a77a4;
      }
    }
    uVar11 = 3;
    puVar19 = puVar17;
    if ((*(int *)(param_1 + 0x21) == 0) &&
       (uVar8 = *puVar18, uVar9 = XXH32_digest(puVar2), uVar8 != uVar9)) {
      return 0xfffffffffffffff9;
    }
    goto code_r0x004a6cc1;
  case 7:
    uVar13 = param_1[0xe];
    if (uVar10 < uVar13) {
      param_1[0xd] = 0;
      *(undefined4 *)((long)param_1 + 0x44) = 8;
      goto code_r0x004a6dee;
    }
    iVar5 = *(int *)((long)param_1 + 0x3c);
    puVar17 = (uint *)((long)puVar19 + uVar13);
    puVar18 = puVar19;
    goto joined_r0x004a6e47;
  case 8:
code_r0x004a6dee:
    uVar13 = param_1[0xe] - param_1[0xd];
    uVar10 = (long)puVar16 - (long)puVar19;
    if (uVar13 < (ulong)((long)puVar16 - (long)puVar19)) {
      uVar10 = uVar13;
    }
    func_0x0099bda0(param_1[0xd] + param_1[0xc],puVar19,uVar10);
    puVar19 = (uint *)((long)puVar19 + uVar10);
    uVar10 = uVar10 + param_1[0xd];
    param_1[0xd] = uVar10;
    uVar13 = param_1[0xe];
    uVar21 = uVar13 - uVar10;
    if (uVar10 <= uVar13 && uVar21 != 0) goto code_r0x004a79c5;
    iVar5 = *(int *)((long)param_1 + 0x3c);
    puVar17 = puVar19;
    puVar18 = (uint *)param_1[0xc];
joined_r0x004a6e47:
    puVar19 = puVar17;
    if (iVar5 != 0) {
      param_1[0xe] = uVar13 - 4;
      iVar5 = *(int *)((long)puVar18 + (uVar13 - 4));
      iVar7 = XXH32(puVar18,uVar13 - 4,0);
      if (iVar5 != iVar7) {
        return 0xfffffffffffffff9;
      }
    }
    uVar10 = param_1[10];
    lVar12 = param_1[0x10];
    if (((ulong)(lStack_48 - lStack_38) < uVar10) ||
       ((uVar13 = param_1[0x11], lVar12 != 0 && (lVar12 + uVar13 == param_1[0x12])))) {
      if (*(int *)((long)param_1 + 0x24) == 0) {
        lVar14 = param_1[0xf];
        uVar13 = param_1[0x11];
        if (lVar12 == lVar14) {
          if (0x20000 < uVar13) {
            func_0x0099bda0(lVar14,lVar12 + uVar13 + -0x10000,0x10000);
            uVar13 = 0x10000;
            param_1[0x11] = 0x10000;
            uVar10 = param_1[10];
            lVar14 = param_1[0xf];
            lVar12 = param_1[0x10];
          }
          lVar14 = lVar14 + uVar13;
        }
        else {
          uVar21 = 0x10000;
          if (uVar13 < 0x10000) {
            uVar21 = uVar13;
          }
          lVar14 = lVar14 + uVar21;
        }
        param_1[0x12] = lVar14;
      }
      else {
        uVar13 = param_1[0x11];
        lVar14 = param_1[0x12];
      }
      lVar15 = lVar12 + uVar13 + -0x10000;
      if (lVar12 == 0 || uVar13 < 0x40000001) {
        lVar15 = lVar12;
      }
      uVar21 = uVar13 & 0xffffffff;
      if (lVar12 != 0 && uVar13 >= 0x40000001) {
        uVar21 = 0x10000;
      }
      uVar8 = LZ4_decompress_safe_usingDict
                        (puVar18,lVar14,*(undefined4 *)(param_1 + 0xe),uVar10,lVar15,uVar21);
      if ((int)uVar8 < 0) {
        return 0xfffffffffffffff0;
      }
      uVar13 = (ulong)uVar8;
      if ((*(int *)(param_1 + 5) != 0) && (*(int *)(param_1 + 0x21) == 0)) {
        XXH32_update(param_1 + 0x15,param_1[0x12],uVar13);
      }
      if (param_1[6] != 0) {
        param_1[9] = param_1[9] - uVar13;
      }
      param_1[0x13] = uVar13;
      param_1[0x14] = 0;
      *(undefined4 *)((long)param_1 + 0x44) = 9;
      uVar10 = 0;
code_r0x004a70fa:
      if (lStack_38 == 0) {
        lStack_38 = 0;
      }
      else {
        uVar21 = lStack_48 - lStack_38;
        if (uVar13 - uVar10 < (ulong)(lStack_48 - lStack_38)) {
          uVar21 = uVar13 - uVar10;
        }
        func_0x0099bda0(lStack_38,uVar10 + param_1[0x12],uVar21);
        if (*(int *)((long)param_1 + 0x24) == 0) {
          lVar12 = param_1[0x11];
          if (lVar12 == 0) {
            param_1[0x10] = lStack_38;
            lVar14 = lStack_38;
          }
          else {
            lVar14 = param_1[0x10];
          }
          if (lVar14 + lVar12 == lStack_38) {
code_r0x004a71ff:
            uVar10 = lVar12 + uVar21;
          }
          else {
            uVar10 = (lStack_38 - param_2) + uVar21;
            if (uVar10 < 0x10000) {
              if (lVar14 == param_1[0xf]) goto code_r0x004a71ff;
              uVar13 = param_1[0x12] - param_1[0xf];
              uVar10 = 0;
              if ((ulong)param_1[0x13] < 0x10001) {
                uVar10 = 0x10000 - param_1[0x13];
              }
              if (uVar13 <= uVar10) {
                uVar10 = uVar13;
              }
              func_0x0099bda0(param_1[0x12] - uVar10,((lVar14 + lVar12) - param_1[0x14]) - uVar10);
              param_1[0x10] = param_1[0xf];
              uVar10 = uVar13 + uVar21 + param_1[0x14];
            }
            else {
              param_1[0x10] = param_2;
            }
          }
          param_1[0x11] = uVar10;
        }
        lStack_38 = lStack_38 + uVar21;
        uVar10 = uVar21 + param_1[0x14];
        param_1[0x14] = uVar10;
        uVar13 = param_1[0x13];
      }
      if (uVar10 != uVar13) {
        uVar13 = 4;
        goto code_r0x004a77a4;
      }
    }
    else {
      lVar14 = lVar12 + uVar13 + -0x10000;
      if (lVar12 == 0 || uVar13 < 0x40000001) {
        lVar14 = lVar12;
      }
      uVar21 = uVar13 & 0xffffffff;
      if (lVar12 != 0 && uVar13 >= 0x40000001) {
        uVar21 = 0x10000;
      }
      uVar8 = LZ4_decompress_safe_usingDict
                        (puVar18,lStack_38,*(undefined4 *)(param_1 + 0xe),uVar10,lVar14,uVar21);
      if ((int)uVar8 < 0) {
        return 0xfffffffffffffff0;
      }
      uVar10 = (ulong)uVar8;
      if ((*(int *)(param_1 + 5) != 0) && (*(int *)(param_1 + 0x21) == 0)) {
        XXH32_update(param_1 + 0x15,lStack_38,uVar10);
      }
      if (param_1[6] != 0) {
        param_1[9] = param_1[9] - uVar10;
      }
      if (*(int *)((long)param_1 + 0x24) == 0) {
        func_0x004a7be0(param_1,lStack_38,uVar10,param_2,0);
      }
      lStack_38 = lStack_38 + uVar10;
    }
code_r0x004a724d:
    uVar11 = 3;
    *(undefined4 *)((long)param_1 + 0x44) = 3;
    goto code_r0x004a6cc9;
  case 9:
    uVar13 = param_1[0x13];
    uVar10 = param_1[0x14];
    goto code_r0x004a70fa;
  case 10:
    if (param_1[9] != 0) {
      return 0xfffffffffffffff2;
    }
    if (*(int *)(param_1 + 5) != 0) {
      uVar10 = (long)puVar16 - (long)puVar19;
      if ((long)uVar10 < 4) {
        param_1[0xd] = 0;
        *(undefined4 *)((long)param_1 + 0x44) = 0xb;
        goto code_r0x004a7714;
      }
      puVar18 = puVar19 + 1;
      iVar5 = *(int *)(param_1 + 0x21);
      goto joined_r0x004a792b;
    }
    goto code_r0x004a7773;
  case 0xb:
    uVar10 = (long)puVar16 - (long)puVar19;
code_r0x004a7714:
    uVar13 = 4 - param_1[0xd];
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    func_0x0099bda0(param_1[0xd] + param_1[0xc],puVar19,uVar13);
    puVar18 = (uint *)((long)puVar19 + uVar13);
    uVar13 = uVar13 + param_1[0xd];
    param_1[0xd] = uVar13;
    if (uVar13 < 4) goto code_r0x004a7755;
    puVar19 = (uint *)param_1[0xc];
    iVar5 = *(int *)(param_1 + 0x21);
joined_r0x004a792b:
    if ((iVar5 == 0) && (uVar8 = *puVar19, uVar9 = XXH32_digest(param_1 + 0x15), uVar8 != uVar9)) {
      return 0xffffffffffffffee;
    }
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    param_1[9] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    uVar13 = 0;
    puVar19 = puVar18;
    goto code_r0x004a77a4;
  case 0xc:
    uVar10 = (long)puVar16 - (long)puVar19;
    if ((long)uVar10 < 4) {
      param_1[0xd] = 4;
      param_1[0xe] = 8;
      *(undefined4 *)((long)param_1 + 0x44) = 0xd;
      goto code_r0x004a728b;
    }
    puVar17 = puVar19 + 1;
    puVar18 = puVar19;
    goto code_r0x004a6cad;
  case 0xd:
code_r0x004a728b:
    lVar12 = param_1[0xd];
    uVar21 = param_1[0xe];
    uVar20 = uVar21 - lVar12;
    if (uVar10 <= uVar21 - lVar12) {
      uVar20 = uVar10;
    }
    func_0x0099bda0((long)puVar18 + lVar12,puVar19,uVar20);
    puVar17 = (uint *)((long)puVar19 + uVar20);
    uVar20 = uVar20 + lVar12;
    param_1[0xd] = uVar20;
    uVar13 = uVar21 - uVar20;
    puVar18 = (uint *)(param_1 + 0x22);
    puVar19 = puVar17;
    if (uVar20 <= uVar21 && uVar13 != 0) goto code_r0x004a77a4;
code_r0x004a6cad:
    uVar8 = *puVar18;
    param_1[6] = (ulong)uVar8;
    param_1[0xe] = (ulong)uVar8;
    uVar11 = 0xe;
    puVar19 = puVar17;
code_r0x004a6cc1:
    *(undefined4 *)((long)param_1 + 0x44) = uVar11;
    goto code_r0x004a6cc9;
  case 0xe:
    uVar13 = param_1[0xe];
    if (uVar13 < uVar10) {
      uVar10 = uVar13;
    }
    puVar19 = (uint *)((long)puVar19 + uVar10);
    uVar13 = uVar13 - uVar10;
    param_1[0xe] = uVar13;
    if (uVar13 == 0) {
code_r0x004a7773:
      *(undefined4 *)((long)param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      param_1[9] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      uVar13 = 0;
    }
    goto code_r0x004a77a4;
  default:
    goto code_r0x004a6c9b;
  }
  uVar21 = uVar13 - lVar12;
  if (uVar10 <= uVar13 - lVar12) {
    uVar21 = uVar10;
  }
  func_0x0099bda0((long)param_1 + 0x10c + lVar12,puVar19,uVar21);
  uVar10 = lVar12 + uVar21;
  *puVar1 = uVar10;
  puVar16 = (uint *)(uVar21 + (long)puVar19);
  puVar19 = (uint *)((long)param_1 + 0x10c);
  if (uVar13 <= uVar10) {
code_r0x004a79f0:
    if (uVar13 < 7) {
      return 0xfffffffffffffff4;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if ((*puVar19 & 0xfffffff0) == 0x184d2a50) {
      *(undefined4 *)((long)param_1 + 0x2c) = 1;
      if (puVar19 == (uint *)((long)param_1 + 0x10c)) {
        param_1[0xd] = uVar13;
        param_1[0xe] = 8;
        uVar11 = 0xd;
        uVar10 = uVar13;
      }
      else {
        uVar11 = 0xc;
        uVar10 = 4;
      }
    }
    else {
      if (*puVar19 != 0x184d2204) {
        return 0xfffffffffffffff3;
      }
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      bVar3 = (byte)puVar19[1];
      if ((bVar3 & 2) != 0) {
        return 0xfffffffffffffff8;
      }
      if ((bVar3 & 0xc0) != 0x40) {
        return 0xfffffffffffffffa;
      }
      lVar12 = (ulong)(bVar3 & 8) + (ulong)(bVar3 & 1) * 4;
      uVar10 = lVar12 + 7;
      if (uVar13 < uVar10) {
        if (puVar19 != (uint *)((long)param_1 + 0x10c)) {
          func_0x0099bda0((uint *)((long)param_1 + 0x10c));
        }
        param_1[0xd] = uVar13;
        param_1[0xe] = uVar10;
        uVar11 = 1;
        uVar10 = uVar13;
      }
      else {
        bVar4 = *(byte *)((long)puVar19 + 5);
        if ((char)bVar4 < '\0') {
          return 0xfffffffffffffff8;
        }
        uVar8 = bVar4 >> 4 & 7;
        if (uVar8 < 4) {
          return 0xfffffffffffffffe;
        }
        if ((bVar4 & 0xf) != 0) {
          return 0xfffffffffffffff8;
        }
        XXH32(puVar19 + 1,lVar12 + 2,0);
        if (*(char *)((long)puVar19 + lVar12 + 6) != extraout_AH) {
          return 0xffffffffffffffef;
        }
        *(uint *)((long)param_1 + 0x24) = bVar3 >> 5 & 1;
        *(uint *)((long)param_1 + 0x3c) = bVar3 >> 4 & 1;
        *(uint *)(param_1 + 5) = bVar3 >> 2 & 1;
        *(uint *)(param_1 + 4) = uVar8;
        param_1[10] = *(undefined8 *)(&UNK_001fe7d0 + (ulong)uVar8 * 8);
        if ((bVar3 & 8) != 0) {
          uVar6 = *(undefined8 *)((long)puVar19 + 6);
          param_1[6] = uVar6;
          param_1[9] = uVar6;
        }
        uVar11 = 2;
        if ((bVar3 & 1) != 0) {
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)puVar19 + lVar12 + 2);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x44) = uVar11;
    return uVar10;
  }
  uVar13 = (uVar13 - uVar10) + 4;
  puVar19 = puVar16;
  goto code_r0x004a77a4;
code_r0x004a73b8:
  if (*(int *)(param_1 + 5) != 0) {
    XXH32_reset(param_1 + 0x15,0);
  }
  uVar10 = (ulong)(*(int *)((long)param_1 + 0x24) == 0) * 0x20000 + param_1[10];
  if ((ulong)param_1[0xb] < uVar10) {
    param_1[0xb] = 0;
    if (param_1[0xc] != 0) {
      if ((code *)param_1[2] == (code *)0x0) {
        func_0x0099c1f0(param_1[0xc]);
      }
      else {
        (*(code *)param_1[2])(param_1[3]);
      }
    }
    if ((code *)*param_1 == (code *)0x0) {
      lVar12 = func_0x0099c1e0(param_1[10] + 4);
    }
    else {
      lVar12 = (*(code *)*param_1)(param_1[3]);
    }
    param_1[0xc] = lVar12;
    if (lVar12 == 0) {
      return 0xfffffffffffffff7;
    }
    if (param_1[0xf] != 0) {
      if ((code *)param_1[2] == (code *)0x0) {
        func_0x0099c1f0(param_1[0xf]);
      }
      else {
        (*(code *)param_1[2])(param_1[3]);
      }
    }
    if ((code *)*param_1 == (code *)0x0) {
      lVar12 = func_0x0099c1e0(uVar10);
    }
    else {
      lVar12 = (*(code *)*param_1)(param_1[3]);
    }
    param_1[0xf] = lVar12;
    if (lVar12 == 0) {
      return 0xfffffffffffffff7;
    }
    param_1[0xb] = uVar10;
  }
  else {
    lVar12 = param_1[0xf];
  }
  *puVar1 = 0;
  param_1[0xe] = 0;
  param_1[0x12] = lVar12;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 3;
code_r0x004a75cd:
  uVar10 = (long)puVar16 - (long)puVar19;
  if (uVar10 < 4) {
    param_1[0xd] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 4;
code_r0x004a75f7:
    uVar13 = 4 - param_1[0xd];
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    func_0x0099bda0(param_1[0xd] + param_1[0xc],puVar19,uVar13);
    puVar18 = (uint *)((long)puVar19 + uVar13);
    uVar13 = uVar13 + param_1[0xd];
    param_1[0xd] = uVar13;
    if (uVar13 < 4) {
code_r0x004a7755:
      uVar13 = 4 - uVar13;
      puVar19 = puVar18;
code_r0x004a77a4:
      if ((((*(int *)((long)param_1 + 0x24) == 0) && (lVar12 = param_1[0x10], lVar12 != 0)) &&
          (lVar14 = param_1[0xf], lVar12 != lVar14)) &&
         (((param_6 == (int *)0x0 || (*param_6 == 0)) && (*(int *)((long)param_1 + 0x44) - 2U < 8)))
         ) {
        if (*(int *)((long)param_1 + 0x44) == 9) {
          uVar21 = param_1[0x12] - lVar14;
          uVar10 = 0;
          if ((ulong)param_1[0x13] < 0x10001) {
            uVar10 = 0x10000 - param_1[0x13];
          }
          if (uVar21 <= uVar10) {
            uVar10 = uVar21;
          }
          func_0x0099bda0(param_1[0x12] - uVar10,((lVar12 + param_1[0x11]) - param_1[0x14]) - uVar10
                         );
          param_1[0x10] = param_1[0xf];
          param_1[0x11] = uVar21 + param_1[0x14];
        }
        else {
          uVar10 = param_1[0x11];
          uVar21 = 0x10000;
          if (uVar10 < 0x10000) {
            uVar21 = uVar10;
          }
          func_0x0099bda0(lVar14,(lVar12 + uVar10) - uVar21,uVar21);
          param_1[0x10] = param_1[0xf];
          param_1[0x11] = uVar21;
          param_1[0x12] = uVar21 + param_1[0xf];
        }
      }
      *param_5 = (long)puVar19 - (long)param_4;
      *param_3 = lStack_38 - param_2;
      return uVar13;
    }
    puVar19 = (uint *)param_1[0xc];
  }
  else {
    puVar18 = puVar19 + 1;
  }
  uVar8 = *puVar19;
  puVar19 = puVar18;
  if (uVar8 == 0) {
    uVar11 = 10;
  }
  else {
    uVar10 = (ulong)(uVar8 & 0x7fffffff);
    if ((ulong)param_1[10] < uVar10) {
      return 0xfffffffffffffffe;
    }
    if (-1 < (int)uVar8) {
      lVar12 = (ulong)*(uint *)((long)param_1 + 0x3c) * 4 + uVar10;
      param_1[0xe] = lVar12;
      *(undefined4 *)((long)param_1 + 0x44) = 7;
      if ((lStack_38 == lStack_48) || (puVar18 == puVar16)) {
        uVar13 = lVar12 + 4;
        goto code_r0x004a77a4;
      }
      goto code_r0x004a6c9b;
    }
    param_1[0xe] = uVar10;
    uVar11 = 5;
    if (*(uint *)((long)param_1 + 0x3c) != 0) {
      XXH32_reset(puVar2,0);
    }
  }
  *(undefined4 *)((long)param_1 + 0x44) = uVar11;
  goto code_r0x004a6c9b;
}


