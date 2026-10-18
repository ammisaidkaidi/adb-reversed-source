// Function: _ZN4absl12lts_2026052616numbers_internal17SixDigitsToBufferEdPc
// Address: 004e3fa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052616numbers_internal17SixDigitsToBufferEdPc
                 (double param_1,byte *param_2,undefined *param_3)

{
  char cVar1;
  undefined2 uVar2;
  uint3 uVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  char *extraout_RDX;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uStack_48;
  byte bStack_44;
  undefined1 uStack_43;
  byte bStack_42;
  undefined1 uStack_41;
  byte bStack_40;
  byte bStack_3f;
  undefined2 uStack_3e;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (NAN(param_1)) {
    param_2[0] = 0x6e;
    param_2[1] = 0x61;
    param_2[2] = 0x6e;
    param_2[3] = 0;
    pbVar5 = (byte *)0x3;
    goto code_r0x004e479e;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    pbVar5 = param_2;
    if ((long)param_1 < 0) {
      pbVar5 = param_2 + 1;
      *param_2 = 0x2d;
    }
    pbVar5[0] = 0x30;
    pbVar5[1] = 0;
    pbVar5 = pbVar5 + (1 - (long)param_2);
    goto code_r0x004e479e;
  }
  pbVar5 = param_2;
  if (param_1 < 0.0) {
    *param_2 = 0x2d;
    param_1 = -param_1;
    pbVar5 = param_2 + 1;
  }
  if (1.79769313486232e+308 < param_1) {
    pbVar5[0] = 0x69;
    pbVar5[1] = 0x6e;
    pbVar5[2] = 0x66;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + (3 - (long)param_2);
    goto code_r0x004e479e;
  }
  if (999999.5 <= param_1) {
    dVar24 = (double)(~-(ulong)(param_1 < 1e+261) & (ulong)(param_1 * 1e-256) |
                     -(ulong)(param_1 < 1e+261) & (ulong)param_1);
    uVar6 = (uint)(1e+261 <= param_1) * 0x100;
    uVar22 = uVar6 | 0x85;
    if (dVar24 < 1e+133) {
      uVar22 = uVar6 + 5;
    }
    dVar24 = (double)(~-(ulong)(dVar24 < 1e+133) & (ulong)(dVar24 * 1e-128) |
                     -(ulong)(dVar24 < 1e+133) & (ulong)dVar24);
    dVar25 = (double)(~-(ulong)(dVar24 < 1e+69) & (ulong)(dVar24 * 1e-64) |
                     -(ulong)(dVar24 < 1e+69) & (ulong)dVar24);
    uVar6 = uVar22 + 0x40;
    if (dVar24 < 1e+69) {
      uVar6 = uVar22;
    }
    uVar22 = uVar6 + 0x20;
    if (dVar25 < 1e+37) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar25 < 1e+37) & (ulong)(dVar25 * 1e-32) |
                     -(ulong)(dVar25 < 1e+37) & (ulong)dVar25);
    dVar25 = (double)(~-(ulong)(dVar24 < 1e+21) & (ulong)(dVar24 * 1e-16) |
                     -(ulong)(dVar24 < 1e+21) & (ulong)dVar24);
    uVar6 = uVar22 + 0x10;
    if (dVar24 < 1e+21) {
      uVar6 = uVar22;
    }
    uVar22 = uVar6 + 8;
    if (dVar25 < 10000000000000.0) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar25 < 10000000000000.0) & (ulong)(dVar25 * 1e-08) |
                     -(ulong)(dVar25 < 10000000000000.0) & (ulong)dVar25);
    dVar25 = (double)(~-(ulong)(dVar24 < 1000000000.0) & (ulong)(dVar24 * 0.0001) |
                     -(ulong)(dVar24 < 1000000000.0) & (ulong)dVar24);
    uVar6 = uVar22 + 4;
    if (dVar24 < 1000000000.0) {
      uVar6 = uVar22;
    }
    uVar22 = uVar6 + 2;
    if (dVar25 < 10000000.0) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar25 < 10000000.0) & (ulong)(dVar25 * 0.01) |
                     -(ulong)(dVar25 < 10000000.0) & (ulong)dVar25);
    if (1000000.0 <= dVar24) {
      uVar22 = uVar22 + 1;
      dVar25 = 0.1;
      goto code_r0x004e43aa;
    }
  }
  else {
    dVar24 = (double)(~-(ulong)(param_1 < 1e-250) & (ulong)param_1 |
                     (ulong)(param_1 * 1e+256) & -(ulong)(param_1 < 1e-250));
    uVar6 = (uint)(1e-250 <= param_1) * 0x100;
    uVar22 = uVar6 | 0xfffffe85;
    if (1e-122 <= dVar24) {
      uVar22 = uVar6 - 0xfb;
    }
    dVar24 = (double)(~-(ulong)(dVar24 < 1e-122) & (ulong)dVar24 |
                     (ulong)(dVar24 * 1e+128) & -(ulong)(dVar24 < 1e-122));
    dVar25 = (double)(~-(ulong)(dVar24 < 1e-58) & (ulong)dVar24 |
                     (ulong)(dVar24 * 1e+64) & -(ulong)(dVar24 < 1e-58));
    uVar6 = uVar22 - 0x40;
    if (1e-58 <= dVar24) {
      uVar6 = uVar22;
    }
    uVar22 = uVar6 - 0x20;
    if (1e-26 <= dVar25) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar25 < 1e-26) & (ulong)dVar25 |
                     (ulong)(dVar25 * 1e+32) & -(ulong)(dVar25 < 1e-26));
    dVar25 = (double)(~-(ulong)(dVar24 < 1e-10) & (ulong)dVar24 |
                     (ulong)(dVar24 * 1e+16) & -(ulong)(dVar24 < 1e-10));
    uVar6 = uVar22 - 0x10;
    if (1e-10 <= dVar24) {
      uVar6 = uVar22;
    }
    uVar22 = uVar6 - 8;
    if (0.01 <= dVar25) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar25 < 0.01) & (ulong)dVar25 |
                     (ulong)(dVar25 * 100000000.0) & -(ulong)(dVar25 < 0.01));
    uVar6 = uVar22 - 4;
    if (100.0 <= dVar24) {
      uVar6 = uVar22;
    }
    dVar24 = (double)(~-(ulong)(dVar24 < 100.0) & (ulong)dVar24 |
                     (ulong)(dVar24 * 10000.0) & -(ulong)(dVar24 < 100.0));
    uVar22 = uVar6 - 2;
    if (10000.0 <= dVar24) {
      uVar22 = uVar6;
    }
    dVar24 = (double)(~-(ulong)(dVar24 < 10000.0) & (ulong)dVar24 |
                     (ulong)(dVar24 * 100.0) & -(ulong)(dVar24 < 10000.0));
    if (dVar24 < 100000.0) {
      uVar22 = uVar22 - 1;
      dVar25 = 10.0;
code_r0x004e43aa:
      dVar24 = dVar24 * dVar25;
    }
  }
  uVar8 = (ulong)(dVar24 * 65536.0);
  uVar8 = (long)(dVar24 * 65536.0 - 9.223372036854776e+18) & (long)uVar8 >> 0x3f | uVar8;
  if (((uint)uVar8 & 0xffff) - 0x7fff < 2) {
    uVar6 = (uint)(uVar8 >> 0x10);
    dVar24 = (double)func_0x0099c770(&uStack_48);
    uVar8 = (ulong)(dVar24 * 9.223372036854776e+18);
    uVar8 = ((long)(dVar24 * 9.223372036854776e+18 - 9.223372036854776e+18) & (long)uVar8 >> 0x3f |
            uVar8) * 2;
    uVar21 = (ulong)(uVar6 * 2) + 1;
    if ((int)uVar22 < 6) {
      lVar10 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      auVar27 = func_0x004e5e00(uVar8,5 - uVar22);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar21 << (~(byte)lVar10 & 0x3f);
    }
    else {
      auVar26 = func_0x004e5e00(uVar21,uVar22 - 5);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar8;
    }
    bVar23 = auVar26._0_8_ < auVar27._0_8_;
    if (auVar27._0_8_ == auVar26._0_8_) {
      bVar23 = auVar26._8_8_ < auVar27._8_8_;
    }
    if (bVar23) {
      uVar6 = uVar6 + 1;
    }
    else if (auVar27 == auVar26) {
      uVar6 = (uVar6 & 1) + uVar6;
    }
  }
  else {
    uVar6 = (uint)(uVar8 + 0x8000 >> 0x10);
  }
  bVar23 = uVar6 == 1000000;
  uVar8 = 100000;
  if (!bVar23) {
    uVar8 = (ulong)uVar6;
  }
  uVar6 = uVar22 + bVar23;
  iVar7 = (int)(uVar8 / 10000);
  uVar15 = iVar7 * -10000 + (int)uVar8;
  uVar11 = (uint)(iVar7 * 0x67) >> 10;
  uVar16 = (uVar15 % 100) / 10;
  uVar14 = uVar16 * 0xf601 + (uVar15 % 100) * 0x100 + 0x3030;
  uVar19 = uVar11 * 0xf601 + (int)(uVar8 / 10000) * 0x100 + 0x3030;
  uVar20 = uVar19 & 0xffff;
  lVar10 = ((ulong)((int)(((ulong)uVar15 / 100) * 0x67 >> 10) * 0xf601 + (uVar15 / 100) * 0x100 +
                   0x3030) << 0x30) + (ulong)uVar6;
  uVar3 = (uint3)((ulong)lVar10 >> 0x28) | (uint3)(uVar20 >> 8);
  uStack_48 = (undefined4)lVar10;
  bStack_44 = (byte)uVar20;
  uStack_43 = (undefined1)(uVar20 >> 8);
  bStack_42 = (byte)((ulong)lVar10 >> 0x30);
  uStack_41 = (undefined1)((ulong)lVar10 >> 0x38);
  bStack_40 = (byte)(uVar14 & 0xffff);
  bStack_3f = (byte)((uVar14 & 0xffff) >> 8);
  uStack_3e = 0;
  pbVar5[0] = 0x30;
  pbVar5[1] = 0x2e;
  param_3 = &UNK_001ffb20;
  bVar13 = (byte)(uVar14 >> 8);
  uVar2 = (undefined2)uVar19;
  switch(bVar23 + uVar22) {
  case 0:
    *pbVar5 = bStack_44;
    pbVar5[1] = 0x2e;
    *(uint *)(pbVar5 + 2) = CONCAT13(bStack_40,uVar3);
    pbVar5[6] = bStack_3f;
    pbVar5 = pbVar5 + 8;
    do {
      bVar13 = pbVar5[-2];
      pbVar5 = pbVar5 + -1;
    } while (bVar13 == 0x30);
    goto code_r0x004e46ac;
  case 1:
    *(undefined2 *)pbVar5 = uVar2;
    pbVar5[2] = 0x2e;
    *(uint *)(pbVar5 + 3) = CONCAT13(bStack_3f,CONCAT12(bStack_40,(short)((ulong)lVar10 >> 0x30)));
    pbVar5 = pbVar5 + 8;
    do {
      bVar13 = pbVar5[-2];
      pbVar5 = pbVar5 + -1;
    } while (bVar13 == 0x30);
    goto code_r0x004e46ac;
  case 2:
    pbVar5[2] = bStack_42;
    *(undefined2 *)pbVar5 = uVar2;
    pbVar5[3] = 0x2e;
    *(ushort *)(pbVar5 + 4) = CONCAT11(bStack_40,uStack_41);
    pbVar5[6] = bStack_3f;
    pbVar5 = pbVar5 + 8;
    do {
      bVar13 = pbVar5[-2];
      pbVar5 = pbVar5 + -1;
    } while (bVar13 == 0x30);
code_r0x004e46ac:
    if (bVar13 == 0x2e) {
      pbVar5 = pbVar5 + -1;
    }
    break;
  case 3:
    bVar9 = (char)uVar16 + 0x30;
    *(uint *)pbVar5 = CONCAT13(uStack_41,CONCAT12(bStack_42,uVar2));
    if ((bVar9 | bVar13) == 0x30) {
      pbVar5 = pbVar5 + 4;
    }
    else {
      pbVar5[4] = 0x2e;
      pbVar5[5] = bVar9;
      if (bVar13 != 0x30) goto code_r0x004e4790;
      pbVar5 = pbVar5 + 6;
    }
    break;
  case 4:
    pbVar5[4] = bStack_40;
    *(uint *)pbVar5 = CONCAT13(uStack_41,CONCAT12(bStack_42,uVar2));
    if (bVar13 == 0x30) {
      pbVar5 = pbVar5 + 5;
    }
    else {
      pbVar5[5] = 0x2e;
code_r0x004e4790:
      pbVar5[6] = bVar13;
      pbVar5 = pbVar5 + 7;
    }
    break;
  case 5:
    *(short *)(pbVar5 + 4) = (short)uVar14;
    *(uint *)pbVar5 = CONCAT13(uStack_41,CONCAT12(bStack_42,uVar2));
    pbVar5[6] = 0;
    pbVar5 = pbVar5 + 6;
    goto code_r0x004e479b;
  case 0xfffffffc:
    pbVar5[2] = 0x30;
    pbVar5 = pbVar5 + 1;
  case 0xfffffffd:
    pbVar5[2] = 0x30;
    pbVar5 = pbVar5 + 1;
  case 0xfffffffe:
    goto code_r0x004e45a5;
  case 0xffffffff:
    goto code_r0x004e45ac;
  default:
    *pbVar5 = (char)uVar11 + 0x30;
    *(uint *)(pbVar5 + 2) = CONCAT13(bStack_40,uVar3);
    pbVar5[6] = bStack_3f;
    pbVar5 = pbVar5 + 8;
    do {
      pbVar17 = pbVar5;
      pbVar5 = pbVar17 + -1;
    } while (pbVar17[-2] == 0x30);
    if (pbVar17[-2] == 0x2e) {
      pbVar5 = pbVar17 + -2;
    }
    *pbVar5 = 0x65;
    uVar22 = -uVar6;
    if ((int)-uVar6 < 0) {
      uVar22 = uVar6;
    }
    uVar8 = (ulong)uVar22;
    pbVar5[1] = ((int)uVar6 < 1) * '\x02' + 0x2b;
    if (uVar22 < 100) {
      pbVar5 = pbVar5 + 2;
    }
    else {
      uVar6 = (uint)((uVar8 & 0xffff) >> 2) / 0x19;
      uVar8 = (ulong)(uVar22 + uVar6 * -100);
      pbVar5[2] = (char)uVar6 + 0x30;
      pbVar5 = pbVar5 + 3;
    }
    uVar21 = uVar8 * 0x67 >> 10;
    uVar22 = ((int)uVar21 * 0xf6 + (int)uVar8) * 0x100;
    param_3 = (undefined *)(ulong)uVar22;
    *(short *)pbVar5 = (short)uVar21 + (short)uVar22 + 0x3030;
    pbVar5[2] = 0;
    pbVar5 = pbVar5 + 2;
    goto code_r0x004e479b;
  }
code_r0x004e4798:
  *pbVar5 = 0;
code_r0x004e479b:
  pbVar5 = pbVar5 + -(long)param_2;
code_r0x004e479e:
  uVar8 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar8 == uStack_38) {
    return pbVar5;
  }
  func_0x0099bd00();
  *extraout_RDX = '\0';
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar5 = param_2;
  if (param_3 != (undefined *)0x0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar5] & 8) == 0) break;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < param_2 + (long)param_3);
  }
  do {
    puVar12 = param_3;
    if (param_2 + (long)puVar12 <= pbVar5) goto code_r0x004e48ff;
    param_3 = puVar12 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_2[(long)(puVar12 + -1)]] &
           8) != 0);
  bVar13 = *pbVar5;
  pbVar17 = param_2 + (long)puVar12;
  if (((bVar13 == 0x2d) || (bVar13 == 0x2b)) && (pbVar5 = pbVar5 + 1, pbVar17 <= pbVar5)) {
code_r0x004e48ff:
    uVar21 = 0;
    goto code_r0x004e49f8;
  }
  iVar7 = (int)uVar8;
  if (iVar7 == 0x10) {
    uVar8 = 0x10;
    if (((1 < (long)(param_2 + (long)(param_3 + (1 - (long)pbVar5)))) && (*pbVar5 == 0x30)) &&
       (((pbVar5[1] | 0x20) == 0x78 && (pbVar5 = pbVar5 + 2, pbVar17 <= pbVar5))))
    goto code_r0x004e48ff;
  }
  else if (iVar7 == 0) {
    if ((long)(param_2 + ((long)param_3 - (long)pbVar5) + 1) < 2) {
      uVar8 = 10;
      if (param_2 + ((long)param_3 - (long)pbVar5) == (byte *)0x0) {
        bVar9 = *pbVar5;
        pbVar5 = pbVar5 + (bVar9 == 0x30);
        uVar8 = (ulong)((uint)(bVar9 != 0x30) * 2 + 8);
      }
    }
    else if (*pbVar5 == 0x30) {
      if ((pbVar5[1] | 0x20) == 0x78) {
        pbVar5 = pbVar5 + 2;
        if (pbVar17 <= pbVar5) goto code_r0x004e48ff;
        uVar8 = 0x10;
      }
      else {
        pbVar5 = pbVar5 + 1;
        uVar8 = 8;
      }
    }
    else {
      uVar8 = 10;
    }
  }
  else if (0x22 < iVar7 - 2U) goto code_r0x004e48ff;
  param_2 = param_2 + (long)puVar12;
  uVar18 = uVar8 & 0xffffffff;
  uVar21 = CONCAT71((int7)(uVar8 >> 8),1);
  if (bVar13 == 0x2d) {
    if (param_2 == pbVar5) {
code_r0x004e4994:
      cVar4 = '\0';
    }
    else {
      cVar4 = '\0';
      do {
        cVar1 = (&UNK_002004a4)[*pbVar5];
        if ((int)uVar8 <= (int)cVar1) goto code_r0x004e49e8;
        if ((cVar4 < (char)(&UNK_002005e0)[uVar18]) ||
           (cVar4 = cVar4 * (char)uVar18, (int)cVar4 < cVar1 + -0x80)) {
          uVar21 = 0;
          cVar4 = -0x80;
          break;
        }
        cVar4 = cVar4 - cVar1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 < param_2);
    }
  }
  else {
    if (param_2 == pbVar5) goto code_r0x004e4994;
    cVar4 = '\0';
    do {
      cVar1 = (&UNK_002004a4)[*pbVar5];
      if ((int)uVar8 <= (int)cVar1) goto code_r0x004e49e8;
      if (((char)(&UNK_002005b0)[uVar18] < cVar4) ||
         (cVar4 = cVar4 * (char)uVar18, 0x7f - cVar1 < (int)cVar4)) {
        uVar21 = 0;
        cVar4 = '\x7f';
        break;
      }
      cVar4 = cVar1 + cVar4;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < param_2);
  }
code_r0x004e49f6:
  *extraout_RDX = cVar4;
code_r0x004e49f8:
  return (byte *)(uVar21 & 0xffffffff);
code_r0x004e45a5:
  pbVar5[2] = 0x30;
  pbVar5 = pbVar5 + 1;
code_r0x004e45ac:
  *(short *)(pbVar5 + 6) = (short)uVar14;
  *(uint *)(pbVar5 + 2) = CONCAT13(uStack_41,CONCAT12(bStack_42,uVar2));
  pbVar5 = pbVar5 + 9;
  do {
    pbVar17 = pbVar5 + -2;
    pbVar5 = pbVar5 + -1;
  } while (*pbVar17 == 0x30);
  goto code_r0x004e4798;
code_r0x004e49e8:
  uVar21 = 0;
  goto code_r0x004e49f6;
}


