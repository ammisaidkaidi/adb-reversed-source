// Function: _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEdRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004dc230
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEdRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (double param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined3 uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *unaff_RBX;
  undefined1 *unaff_RBP;
  int iVar20;
  undefined2 *puVar21;
  byte bVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  ulong uVar28;
  byte *pbVar29;
  uint uVar30;
  byte bVar31;
  ulong uVar32;
  undefined1 uVar33;
  undefined7 uVar35;
  byte *pbVar34;
  byte *unaff_R12;
  int iVar36;
  uint uVar37;
  undefined1 *unaff_R13;
  byte *pbVar38;
  byte *unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  double dVar42;
  ulong extraout_XMM0_Qb;
  ulong in_XMM0_Qb;
  
code_r0x004dc230:
  *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
  unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
  *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
  *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(byte **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined1 **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(byte **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(byte **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar35 = (undefined7)((ulong)unaff_R12 >> 8);
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    in_XMM0_Qb = in_XMM0_Qb ^ 0x8000000000000000;
    unaff_R12 = (byte *)CONCAT71(uVar35,0x2d);
code_r0x004db185:
    *(undefined4 *)((long)register0x00000020 + -0x118) = 0;
    puVar17 = (undefined2 *)((long)register0x00000020 + -0x117);
    *(char *)((long)register0x00000020 + -0x118) = (char)unaff_R12;
  }
  else {
    unaff_R12 = (byte *)CONCAT71(uVar35,0x2b);
    if (((param_2[1] & 2) != 0) ||
       (unaff_R12 = (byte *)CONCAT71(uVar35,0x20), (param_2[1] & 4) != 0)) goto code_r0x004db185;
    *(undefined4 *)((long)register0x00000020 + -0x118) = 0;
    puVar17 = (undefined2 *)((long)register0x00000020 + -0x118);
    unaff_R12 = (byte *)0x0;
  }
  unaff_R14 = param_2;
  unaff_R15 = param_3;
  if (!NAN(param_1)) {
    pbVar38 = param_3;
    if (ABS(param_1) == INFINITY) {
      *(double *)((long)register0x00000020 + -0x168) = param_1;
      *(ulong *)((long)register0x00000020 + -0x160) = in_XMM0_Qb;
      bVar31 = *param_2;
      puVar21 = (undefined2 *)&UNK_001743fa;
      puVar12 = (undefined2 *)&UNK_0016b346;
      goto code_r0x004db1e7;
    }
code_r0x004db243:
    uVar16 = 6;
    if (-1 < (int)*(uint *)(param_2 + 8)) {
      uVar16 = (ulong)*(uint *)(param_2 + 8);
    }
    *(ulong *)((long)register0x00000020 + -0x168) = uVar16;
    *(undefined4 *)((long)register0x00000020 + -0x118) = 0;
    *(undefined **)((long)register0x00000020 + -400) = &UNK_004db26e;
    func_0x0099c770((undefined1 *)((long)register0x00000020 + -0x118));
    pbVar23 = (byte *)0x35;
    *(undefined **)((long)register0x00000020 + -400) = &UNK_004db278;
    dVar42 = (double)func_0x0099c780();
    bVar31 = *param_2;
    uVar14 = 0;
    if (6 < (bVar31 & 0xfffffffe) - 8) goto code_r0x004dc106;
    uVar37 = *(uint *)((long)register0x00000020 + -0x118);
    unaff_R13 = (undefined1 *)(ulong)uVar37;
    uVar30 = uVar37 - 0x35;
    pbVar19 = (byte *)(ulong)uVar30;
    unaff_RBX = (byte *)((long)(dVar42 - 9.223372036854776e+18) & (long)dVar42 >> 0x3f |
                        (long)dVar42);
    uVar33 = SUB81(unaff_R12,0);
    cVar10 = (char)uVar37;
    uVar7 = (undefined3)(uVar37 >> 8);
    bVar22 = (byte)uVar30;
    pbVar23 = unaff_RBX;
    switch(bVar31 & 0xfffffffe) {
    case 8:
      *(undefined1 *)((long)register0x00000020 + -0x68) = uVar33;
      lVar15 = *(long *)((long)register0x00000020 + -0x168);
      *(long *)((long)register0x00000020 + -0x60) = lVar15;
      *(byte **)((long)register0x00000020 + -0x58) = param_2;
      *(byte **)((long)register0x00000020 + -0x50) = param_3;
      if ((int)uVar37 < 0x35) {
        if (uVar30 < 0xffffff80) {
          pbVar38 = (byte *)0x0;
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004dc1d3;
          func_0x004dc240(unaff_RBX,0,0x35 - uVar37,(undefined1 *)((long)register0x00000020 + -0x68)
                          ,0);
          break;
        }
        *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x7d) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x75) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000020 + -200) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
        *(undefined1 *)((long)register0x00000020 + -0xee) = 0x2e;
        uVar16 = 0;
        if (0xffffffc0 < uVar30) {
          uVar16 = (ulong)unaff_RBX >> ((byte)(0x35 - uVar37) & 0x3f);
        }
        pbVar34 = (byte *)((long)register0x00000020 + -0xef);
        do {
          pbVar38 = pbVar34;
          *pbVar38 = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
          pbVar34 = pbVar38 + -1;
          bVar41 = 9 < uVar16;
          uVar16 = uVar16 / 10;
        } while (bVar41);
        pbVar23 = (byte *)((long)register0x00000020 + -0xed);
        *pbVar34 = 0x30;
        if (uVar30 < 0xffffffc0) {
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004db976;
          pbVar29 = (byte *)func_0x004dd190(unaff_RBX,0,pbVar23,0x35 - uVar37,lVar15);
          unaff_RBX = pbVar38;
          unaff_R12 = pbVar23;
        }
        else {
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,cVar10 + 0xbU);
          pbVar19 = (byte *)((long)unaff_RBX << (cVar10 + 0xbU & 0x3f));
          pbVar29 = pbVar23;
          for (; lVar15 != 0; lVar15 = lVar15 + -1) {
            unaff_RBX = (byte *)0x0;
            if (pbVar19 == (byte *)0x0) goto code_r0x004dbd50;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = pbVar19;
            pbVar19 = SUB168(auVar2 * ZEXT816(10),0);
            *pbVar29 = SUB161(auVar2 * ZEXT816(10),8) | 0x30;
            pbVar29 = pbVar29 + 1;
          }
          unaff_RBX = pbVar19;
          if ((long)pbVar19 < 0) {
            pbVar23 = pbVar29 + -1;
            unaff_RBX = (byte *)-(long)pbVar19;
            if (!SBORROW8(0,(long)pbVar19)) {
              do {
                bVar31 = *pbVar23;
                if (bVar31 != 0x2e) {
                  if (bVar31 != 0x39) goto code_r0x004dbd4c;
                  *pbVar23 = 0x30;
                }
                pbVar23 = pbVar23 + -1;
              } while( true );
            }
            pbVar23 = pbVar23 + -(ulong)(pbVar29[-1] == 0x2e);
            bVar31 = *pbVar23;
            if ((bVar31 & 0x81) == 1) {
              do {
                if (bVar31 != 0x2e) {
                  if (bVar31 != 0x39) goto code_r0x004dbd4c;
                  *pbVar23 = 0x30;
                }
                bVar31 = pbVar23[-1];
                pbVar23 = pbVar23 + -1;
              } while( true );
            }
          }
        }
        goto code_r0x004dbd50;
      }
      lVar15 = 0x3f;
      if (unaff_RBX != (byte *)0x0) {
        for (; (ulong)unaff_RBX >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar37 = (uVar37 - ((uint)lVar15 ^ 0x3f)) + 0xb;
      unaff_R13 = (undefined1 *)(ulong)uVar37;
      if (0x80 < (int)uVar37) {
        *(undefined1 *)((long)register0x00000020 + -0x138) = 0;
        *(undefined1 **)((long)register0x00000020 + -0x118) =
             (undefined1 *)((long)register0x00000020 + -0x68);
        *(undefined1 **)((long)register0x00000020 + -0x110) =
             (undefined1 *)((long)register0x00000020 + -0x138);
        puVar27 = &UNK_004dc900;
code_r0x004db4f9:
        pbVar38 = (byte *)0x0;
        *(undefined **)((long)register0x00000020 + -400) = &UNK_004db50d;
        func_0x004dc3b0(unaff_RBX,0,pbVar19,(undefined1 *)((long)register0x00000020 + -0x118),
                        puVar27);
        break;
      }
      *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x7d) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x75) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + -200) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
      pbVar38 = (byte *)((long)register0x00000020 + -0xee);
      *(undefined1 *)((long)register0x00000020 + -0xee) = 0x2e;
      pbVar29 = (byte *)((long)register0x00000020 + -0xed);
      if ((int)uVar37 < 0x41) {
        pbVar23 = (byte *)((long)unaff_RBX << (bVar22 & 0x3f));
        do {
          unaff_RBX = (byte *)((ulong)pbVar23 / 10);
          pbVar38[-1] = (char)pbVar23 + (char)unaff_RBX * -10 | 0x30;
          pbVar38 = pbVar38 + -1;
          bVar41 = (byte *)0x9 < pbVar23;
          pbVar23 = unaff_RBX;
          pbVar34 = param_2;
        } while (bVar41);
      }
      else {
        pbVar34 = (byte *)((long)unaff_RBX << (bVar22 & 0x3f));
        pbVar23 = pbVar34;
        pbVar19 = (byte *)(0L << (bVar22 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar22 & 0x3f));
        if ((uVar30 & 0x40) != 0) {
          pbVar23 = (byte *)0x0;
          pbVar19 = pbVar34;
        }
        if (pbVar19 != (byte *)0x0) {
          do {
            iVar11 = (int)((ulong)pbVar19 % 10);
            param_2 = (byte *)(ulong)(uint)(iVar11 * 3);
            iVar11 = (int)pbVar23 + (int)((ulong)pbVar23 / 10) * -10 + iVar11 * 6;
            uVar37 = (iVar11 * 0xcd & 0xffffU) >> 0xb;
            pbVar23 = (byte *)((ulong)uVar37 +
                              ((ulong)pbVar19 % 10) * 0x1999999999999999 + (ulong)pbVar23 / 10);
            pbVar38[-1] = (char)iVar11 + (char)uVar37 * -10 | 0x30;
            pbVar38 = pbVar38 + -1;
            bVar41 = (byte *)0x9 < pbVar19;
            pbVar19 = (byte *)((ulong)pbVar19 / 10);
          } while (bVar41);
        }
        do {
          unaff_RBX = (byte *)((ulong)pbVar23 / 10);
          pbVar38[-1] = (char)pbVar23 + (char)unaff_RBX * -10 | 0x30;
          pbVar38 = pbVar38 + -1;
          bVar41 = (byte *)0x9 < pbVar23;
          pbVar23 = unaff_RBX;
          pbVar34 = param_2;
        } while (bVar41);
      }
      goto code_r0x004dbd58;
    case 10:
      bVar31 = bVar31 & 0xf9;
      pbVar34 = (byte *)(ulong)bVar31;
      *(undefined1 *)((long)register0x00000020 + -0x138) = uVar33;
      pbVar29 = *(byte **)((long)register0x00000020 + -0x168);
      *(byte **)((long)register0x00000020 + -0x130) = pbVar29;
      *(byte **)((long)register0x00000020 + -0x128) = param_2;
      *(byte **)((long)register0x00000020 + -0x120) = param_3;
      unaff_R12 = pbVar29;
      if ((int)uVar37 < 0x36) {
        if ((int)uVar37 < -0x4b) {
          pbVar38 = (byte *)0x0;
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004dc1f8;
          func_0x004dd630(unaff_RBX,0,pbVar19,bVar31 == 9,
                          (undefined1 *)((long)register0x00000020 + -0x138),0);
          break;
        }
      }
      else {
        lVar15 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        if (0x80 < (int)((uVar37 - ((uint)lVar15 ^ 0x3f)) + 0xb)) {
          *(bool *)((long)register0x00000020 + -0x148) = bVar31 == 9;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
          *(undefined1 **)((long)register0x00000020 + -0x118) =
               (undefined1 *)((long)register0x00000020 + -0x138);
          *(undefined1 **)((long)register0x00000020 + -0x110) =
               (undefined1 *)((long)register0x00000020 + -0x68);
          *(undefined1 **)((long)register0x00000020 + -0x108) =
               (undefined1 *)((long)register0x00000020 + -0x148);
          puVar27 = &UNK_004dd690;
          goto code_r0x004db4f9;
        }
      }
      if (unaff_RBX == (byte *)0x0) {
        if ((pbVar29 == (byte *)0x0) && ((param_2[1] & 8) == 0)) {
          unaff_RBX = &UNK_0017eb28;
        }
        else {
          unaff_RBX = &UNK_0016f16d;
        }
        *(undefined **)((long)register0x00000020 + -400) = &UNK_004db9f5;
        pbVar19 = (byte *)func_0x0099bcf0(unaff_RBX);
        puVar27 = &UNK_00159b05;
        if (bVar31 == 9) {
          puVar27 = &UNK_001806ec;
        }
        *(undefined **)((long)register0x00000020 + -0x148) = puVar27;
        *(undefined8 *)((long)register0x00000020 + -0x140) = 4;
        *(undefined8 *)((long)register0x00000020 + -0x188) =
             *(undefined8 *)((long)register0x00000020 + -0x148);
        *(undefined8 *)((long)register0x00000020 + -0x180) =
             *(undefined8 *)((long)register0x00000020 + -0x140);
        pbVar23 = (byte *)((long)register0x00000020 + -0x138);
        uVar14 = 0;
        pbVar38 = unaff_RBX;
        goto code_r0x004dc0ff;
      }
      *(undefined8 *)((long)register0x00000020 + -0x7f) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x77) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + -200) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
      pbVar38 = (byte *)((long)register0x00000020 + -0x116);
      if ((int)uVar37 < 0x35) {
        *(uint *)((long)register0x00000020 + -0x16c) = (uint)bVar31;
        bVar41 = uVar30 < 0xffffffc1;
        uVar35 = (undefined7)((ulong)pbVar29 >> 8);
        pbVar34 = (byte *)CONCAT71(uVar35,bVar41);
        if (bVar41) {
          pbVar23 = (byte *)((long)register0x00000020 + -0xef);
          *(undefined1 *)((long)register0x00000020 + -0xef) = 0x30;
          bVar40 = false;
          uVar16 = 0;
code_r0x004db9ad:
          uVar13 = *(long *)((long)register0x00000020 + -0x168) + 1;
          uVar24 = 0;
          bVar39 = uVar16 <= uVar13;
          lVar25 = 0;
          if (bVar39) {
            lVar25 = uVar13 - uVar16;
          }
          if (-0xc < (int)uVar37) {
            *(bool *)((long)register0x00000020 + -0x168) = bVar41;
            goto code_r0x004dbed9;
          }
          bVar31 = cVar10 + 0x4b;
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,bVar31);
          uVar32 = (long)unaff_RBX << (bVar31 & 0x3f);
          uVar28 = uVar32;
          uVar26 = 0L << (bVar31 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar31 & 0x3f);
          if ((bVar31 & 0x40) != 0) {
            uVar28 = uVar24;
            uVar26 = uVar32;
          }
          bVar39 = uVar28 != 0;
          pbVar34 = (byte *)CONCAT71(uVar35,1);
          lVar25 = lVar25 + (ulong)(uVar16 <= uVar13);
          pbVar19 = pbVar23;
          if ((lVar25 != 0) && (uVar28 != 0)) {
            pbVar34 = (byte *)CONCAT71(uVar35,1);
            uVar24 = 0;
            unaff_R13 = (undefined1 *)0xa;
            do {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar28;
              uVar28 = SUB168(auVar3 * ZEXT816(10),0);
              auVar9._8_8_ = 0;
              auVar9._0_8_ = SUB168(auVar3 * ZEXT816(10),8);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar26;
              auVar9 = auVar4 * ZEXT816(10) + auVar9;
              uVar26 = auVar9._0_8_;
              if (((char)pbVar34 == '\x01') && (auVar9._8_8_ == 0)) {
                uVar24 = (ulong)((int)uVar24 + 1);
                pbVar34 = (byte *)CONCAT71((int7)((ulong)pbVar34 >> 8),1);
              }
              else {
                *pbVar19 = auVar9[8] + 0x30;
                pbVar19 = pbVar19 + 1;
                lVar25 = lVar25 + -1;
                pbVar34 = (byte *)0x0;
              }
              bVar39 = uVar28 != 0;
            } while ((lVar25 != 0) && (uVar28 != 0));
          }
          uVar37 = (uint)uVar24;
          bVar41 = uVar26 != 0;
          if ((lVar25 != 0) && (uVar26 != 0)) {
            unaff_R13 = (undefined1 *)0xa;
            do {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar26;
              uVar13 = SUB168(auVar5 * ZEXT816(10),0);
              if (((char)pbVar34 == '\x01') && (uVar26 < 0x199999999999999a)) {
                uVar24 = (ulong)((int)uVar24 + 1);
                pbVar34 = (byte *)CONCAT71((int7)((ulong)pbVar34 >> 8),1);
              }
              else {
                *pbVar19 = SUB161(auVar5 * ZEXT816(10),8) | 0x30;
                pbVar19 = pbVar19 + 1;
                lVar25 = lVar25 + -1;
                pbVar34 = (byte *)0x0;
              }
              uVar37 = (uint)uVar24;
              bVar41 = uVar13 != 0;
            } while ((lVar25 != 0) && (uVar26 = uVar13, uVar13 != 0));
          }
          bVar41 = (bool)(bVar41 | bVar39);
          cVar10 = '\x01';
        }
        else {
          uVar16 = (ulong)unaff_RBX >> (0x35U - cVar10 & 0x3f);
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004dbc82;
          pbVar23 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                                      (uVar16,pbVar38);
          *pbVar23 = 0x30;
          if (uVar16 == 0) {
            *(undefined1 *)((long)register0x00000020 + -0x168) = 1;
            lVar15 = *(long *)((long)register0x00000020 + -0x130);
            uVar16 = 0;
          }
          else {
            uVar16 = (long)pbVar23 - (long)pbVar38;
            lVar15 = *(long *)((long)register0x00000020 + -0x130);
            if ((lVar15 + 2U < uVar16) && (pbVar38 + lVar15 + 2 != pbVar23)) {
              *(long *)((long)register0x00000020 + -0x168) = lVar15;
              pbVar19 = (byte *)((long)register0x00000020 + lVar15 + -0x113);
              do {
                bVar40 = pbVar19[-1] != 0x30;
                if (bVar40) break;
                bVar39 = pbVar19 != pbVar23;
                pbVar19 = pbVar19 + 1;
              } while (bVar39);
              goto code_r0x004db9ad;
            }
            *(undefined1 *)((long)register0x00000020 + -0x168) = 0;
          }
          bVar40 = false;
          bVar39 = uVar16 <= lVar15 + 1U;
          lVar25 = 0;
          if (bVar39) {
            lVar25 = (lVar15 + 1U) - uVar16;
          }
code_r0x004dbed9:
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,cVar10 + 0xbU);
          uVar13 = (long)unaff_RBX << (cVar10 + 0xbU & 0x3f);
          uVar37 = 0;
          bVar41 = uVar13 != 0;
          pbVar19 = pbVar23;
          if ((bVar41) && (lVar25 = lVar25 + (ulong)bVar39, lVar25 != 0)) {
            uVar37 = 0;
            pbVar34 = (byte *)0xa;
            unaff_R13 = (undefined1 *)(ulong)*(byte *)((long)register0x00000020 + -0x168);
            do {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar13;
              uVar24 = SUB168(auVar6 * ZEXT816(10),0);
              bVar31 = uVar13 < 0x199999999999999a & (byte)unaff_R13;
              unaff_R13 = (undefined1 *)(ulong)bVar31;
              if (bVar31 == 1) {
                uVar37 = uVar37 + 1;
              }
              else {
                *pbVar19 = SUB161(auVar6 * ZEXT816(10),8) | 0x30;
                pbVar19 = pbVar19 + 1;
                lVar25 = lVar25 + -1;
              }
              bVar41 = uVar24 != 0;
            } while ((bVar41) && (uVar13 = uVar24, lVar25 != 0));
          }
          cVar10 = *(char *)((long)register0x00000020 + -0x168);
        }
        bVar40 = (bool)(bVar40 | bVar41);
        *pbVar19 = 0x30;
        pbVar29 = pbVar19 + (uVar16 - (long)pbVar23);
        uVar30 = (uint)pbVar38;
        if (cVar10 != '\0') {
          pbVar38 = pbVar23;
        }
        uVar30 = ~uVar30 + (int)pbVar23;
        if (cVar10 != '\0') {
          uVar30 = ~uVar37;
        }
        lVar15 = *(long *)((long)register0x00000020 + -0x130);
        bVar31 = (byte)*(undefined4 *)((long)register0x00000020 + -0x16c);
      }
      else {
        lVar15 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar37 = (uVar37 - ((uint)lVar15 ^ 0x3f)) + 0xb;
        unaff_R13 = (undefined1 *)(ulong)uVar37;
        if ((int)uVar37 < 0x41) {
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004db81a;
          pbVar19 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                                      ((long)unaff_RBX << (bVar22 & 0x3f),pbVar38);
        }
        else {
          uVar24 = (long)unaff_RBX << (bVar22 & 0x3f);
          uVar13 = uVar24;
          uVar16 = 0L << (bVar22 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar22 & 0x3f);
          if ((uVar30 & 0x40) != 0) {
            uVar13 = 0;
            uVar16 = uVar24;
          }
          *(undefined **)((long)register0x00000020 + -400) = &UNK_004dbbf8;
          pbVar19 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                                      (uVar13,uVar16,pbVar38);
        }
        *pbVar19 = 0x30;
        pbVar29 = pbVar19 + -(long)pbVar38;
        uVar30 = (int)pbVar29 - 1;
        lVar15 = *(long *)((long)register0x00000020 + -0x130);
        bVar40 = false;
        if (((byte *)(lVar15 + 2) < pbVar29) && (pbVar38 + lVar15 + 2 != pbVar19)) {
          pbVar23 = (byte *)((long)register0x00000020 + lVar15 + -0x113);
          do {
            bVar40 = pbVar23[-1] != 0x30;
            if (bVar40) break;
            bVar41 = pbVar23 != pbVar19;
            pbVar23 = pbVar23 + 1;
          } while (bVar41);
        }
      }
      unaff_RBX = (byte *)(lVar15 + 1) + -(long)pbVar29;
      if ((byte *)(lVar15 + 1) < pbVar29 || unaff_RBX == (byte *)0x0) {
        pbVar38[-1] = 0x30;
        lVar15 = *(long *)((long)register0x00000020 + -0x130);
        pbVar23 = pbVar38 + lVar15;
        pbVar19 = pbVar23 + 1;
        if ('5' < (char)pbVar38[lVar15 + 1]) {
          pbVar23 = pbVar38 + lVar15;
          do {
            bVar22 = *pbVar23;
            if (bVar22 != 0x2e) {
              if (bVar22 != 0x39) goto code_r0x004dbff3;
              *pbVar23 = 0x30;
            }
            pbVar23 = pbVar23 + -1;
          } while( true );
        }
        if (pbVar38[lVar15 + 1] != 0x35) {
          unaff_RBX = (byte *)0x0;
          goto joined_r0x004dc05a;
        }
        if (bVar40) {
          pbVar23 = pbVar38 + lVar15;
          do {
            bVar22 = *pbVar23;
            if (bVar22 != 0x2e) {
              if (bVar22 != 0x39) goto code_r0x004dbff3;
              *pbVar23 = 0x30;
            }
            pbVar23 = pbVar23 + -1;
          } while( true );
        }
        pbVar23 = pbVar23 + -(ulong)(*pbVar23 == 0x2e);
        bVar22 = *pbVar23;
        if ((bVar22 & 0x81) == 1) {
          do {
            if (bVar22 != 0x2e) {
              if (bVar22 != 0x39) goto code_r0x004dbff3;
              *pbVar23 = 0x30;
            }
            bVar22 = pbVar23[-1];
            pbVar23 = pbVar23 + -1;
          } while( true );
        }
        goto joined_r0x004dc01c;
      }
joined_r0x004dc05a:
      if (lVar15 == 0) goto code_r0x004dc05c;
      goto code_r0x004dc069;
    case 0xc:
      lVar15 = *(long *)((long)register0x00000020 + -0x168) + -1;
      if (*(long *)((long)register0x00000020 + -0x168) == 0) {
        lVar15 = 0;
      }
      if (0x34 < (int)uVar37) {
        lVar25 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        if (0x80 < (int)((uVar37 - ((uint)lVar25 ^ 0x3f)) + 0xb)) {
          *(undefined1 *)((long)register0x00000020 + -0x68) = uVar33;
          *(long *)((long)register0x00000020 + -0x60) = lVar15;
          *(byte **)((long)register0x00000020 + -0x58) = param_2;
          *(byte **)((long)register0x00000020 + -0x50) = param_3;
          *(byte **)((long)register0x00000020 + -0x138) = unaff_RBX;
          *(uint *)((long)register0x00000020 + -0x148) = uVar30;
          *(bool *)((long)register0x00000020 + -0x158) = (bVar31 & 0xf9) == 9;
          *(undefined1 **)((long)register0x00000020 + -0x118) =
               (undefined1 *)((long)register0x00000020 + -0x68);
          *(undefined1 **)((long)register0x00000020 + -0x110) =
               (undefined1 *)((long)register0x00000020 + -0x138);
          *(undefined1 **)((long)register0x00000020 + -0x108) =
               (undefined1 *)((long)register0x00000020 + -0x148);
          *(undefined1 **)((long)register0x00000020 + -0x100) =
               (undefined1 *)((long)register0x00000020 + -0x158);
          puVar27 = &UNK_004dfa40;
          goto code_r0x004db4f9;
        }
      }
      if ((int)uVar37 < -0x4b) {
        *(undefined1 *)((long)register0x00000020 + -0x118) = uVar33;
        *(long *)((long)register0x00000020 + -0x110) = lVar15;
        *(byte **)((long)register0x00000020 + -0x108) = param_2;
        *(byte **)((long)register0x00000020 + -0x100) = param_3;
        *(undefined **)((long)register0x00000020 + -400) = &UNK_004db64a;
        func_0x004df200(unaff_RBX,pbVar19,(bVar31 & 0xf9) == 9,
                        (undefined1 *)((long)register0x00000020 + -0x118));
        pbVar38 = pbVar19;
      }
      else {
        *(undefined1 *)((long)register0x00000020 + -0x118) = uVar33;
        *(long *)((long)register0x00000020 + -0x110) = lVar15;
        *(byte **)((long)register0x00000020 + -0x108) = param_2;
        *(byte **)((long)register0x00000020 + -0x100) = param_3;
        *(undefined **)((long)register0x00000020 + -400) = &UNK_004db87f;
        func_0x004df270(unaff_RBX,pbVar19,(bVar31 & 0xf9) == 9,
                        (undefined1 *)((long)register0x00000020 + -0x118));
        pbVar38 = pbVar19;
      }
      break;
    case 0xe:
      *(undefined1 *)((long)register0x00000020 + -0x68) = uVar33;
      uVar16 = *(ulong *)((long)register0x00000020 + -0x168);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar16;
      *(byte **)((long)register0x00000020 + -0x58) = param_2;
      *(byte **)((long)register0x00000020 + -0x50) = param_3;
      iVar11 = *(int *)(param_2 + 8);
      iVar36 = uVar37 + 0xb;
      if (0 < (long)unaff_RBX) {
        iVar20 = -0x3fe;
        if (iVar36 < -0x3fe) {
          iVar20 = iVar36;
        }
        do {
          if (iVar36 < -0x3fd) {
            uVar13 = (ulong)unaff_RBX >> (2U - (char)iVar20 & 0x3f);
            iVar20 = -0x3fe;
            uVar24 = 0;
            goto code_r0x004db57e;
          }
          unaff_RBX = (byte *)((long)unaff_RBX * 2);
          iVar36 = iVar36 + -1;
        } while (0 < (long)unaff_RBX);
      }
      uVar24 = (ulong)unaff_RBX >> 0x3f;
      iVar20 = 0;
      if (unaff_RBX != (byte *)0x0) {
        iVar20 = iVar36 + -1;
      }
      uVar13 = (long)unaff_RBX * 2;
code_r0x004db57e:
      bVar22 = (byte)uVar24;
      unaff_R13 = (undefined1 *)((long)register0x00000020 + -0x118);
      uVar26 = uVar13;
      if (-1 < iVar11) {
        uVar26 = 0;
        if (uVar16 < 0x11) {
          uVar26 = 0x10 - uVar16;
        }
        uVar28 = 0xffffffffffffffff;
        if ((uint)uVar16 < 0x10) {
          bVar8 = (char)uVar26 * '\x04';
          uVar28 = 0xffffffffffffffff >> ((char)uVar26 * -4 & 0x3fU);
          uVar16 = uVar13 & uVar28;
          uVar32 = 8L << (bVar8 - 4 & 0x3f);
          if (uVar16 == uVar32) {
            if (uVar26 != 0x10) {
              uVar24 = (0xfL << (bVar8 & 0x3f) & uVar13) >> (bVar8 & 0x3f) & 0xffffffff;
            }
            if ((uVar24 & 1) != 0) {
code_r0x004dba43:
              lVar15 = 0;
              if (0xf >= uVar26) {
                lVar15 = 1L << (bVar8 & 0x3f);
              }
              bVar41 = (long)uVar13 < 0;
              uVar13 = uVar13 + lVar15;
              bVar22 = bVar22 + (-1 < (long)uVar13 && bVar41 || 0xf < uVar26);
            }
          }
          else if (uVar32 < uVar16) goto code_r0x004dba43;
          uVar28 = ~uVar28;
          uVar16 = *(ulong *)((long)register0x00000020 + -0x168);
        }
        uVar13 = uVar13 & uVar28;
        uVar26 = uVar16;
      }
      *(undefined8 *)((long)register0x00000020 + -0x138) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x130) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x128) = 0;
      lVar15 = (ulong)(bVar31 != 0xf) * 0x10;
      *(undefined1 *)((long)register0x00000020 + -0x138) = 0x30;
      *(byte *)((long)register0x00000020 + -0x137) = (bVar31 != 0xf) << 5 | 0x58;
      *(undefined *)((long)register0x00000020 + -0x136) = (&UNK_00159b0a)[(ulong)bVar22 + lVar15];
      if ((uVar26 == 0) && ((param_2[1] & 8) == 0)) {
        puVar18 = (undefined1 *)((long)register0x00000020 + -0x135);
      }
      else {
        puVar18 = (undefined1 *)((long)register0x00000020 + -0x134);
        *(undefined1 *)((long)register0x00000020 + -0x135) = 0x2e;
      }
      lVar25 = 0;
      if (uVar13 != 0) {
        do {
          puVar18[lVar25] = (&UNK_00159b0a)[(uVar13 >> 0x3c) + lVar15];
          uVar13 = uVar13 << 4;
          lVar25 = lVar25 + 1;
        } while (uVar13 != 0);
        puVar18 = puVar18 + lVar25;
      }
      pbVar29 = (byte *)0x0;
      if (-1 < iVar11) {
        pbVar29 = (byte *)(uVar16 - lVar25);
      }
      pbVar38 = (byte *)((long)register0x00000020 + -0x138);
      pbVar19 = puVar18 + -(long)pbVar38;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
      *(undefined2 *)((long)register0x00000020 + -0xf8) = 0;
      *(byte *)((long)register0x00000020 + -0x118) = (bVar31 != 0xf) << 5 | 0x50;
      *(char *)((long)register0x00000020 + -0x117) = (char)(iVar20 >> 0x1f) * -2 + '+';
      iVar11 = -iVar20;
      if (-iVar20 < 0) {
        iVar11 = iVar20;
      }
      *(undefined **)((long)register0x00000020 + -400) = &UNK_004dbb99;
      _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc
                (iVar11,(undefined1 *)((long)register0x00000020 + -0x116));
      *(undefined1 **)((long)register0x00000020 + -0x148) = unaff_R13;
      *(undefined **)((long)register0x00000020 + -400) = &UNK_004dbba8;
      uVar14 = func_0x0099bcf0(unaff_R13);
      *(undefined8 *)((long)register0x00000020 + -0x140) = uVar14;
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + -0x148);
      *(undefined8 *)((long)register0x00000020 + -0x180) =
           *(undefined8 *)((long)register0x00000020 + -0x140);
      pbVar23 = (byte *)((long)register0x00000020 + -0x68);
      uVar14 = 2;
      unaff_RBX = pbVar19;
      unaff_R12 = (byte *)(uVar16 - lVar25);
      pbVar34 = pbVar29;
      param_3 = pbVar38;
      goto code_r0x004dc0ff;
    }
    goto code_r0x004dc104;
  }
  *(double *)((long)register0x00000020 + -0x168) = param_1;
  *(ulong *)((long)register0x00000020 + -0x160) = in_XMM0_Qb;
  bVar31 = *param_2;
  puVar21 = (undefined2 *)&UNK_001839d4;
  puVar12 = (undefined2 *)&UNK_00184eb5;
code_r0x004db1e7:
  if ((bVar31 & 0xf9) == 9) {
    puVar12 = puVar21;
  }
  if (bVar31 == 7) {
    puVar12 = puVar21;
  }
  *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar12 + 1);
  *puVar17 = *puVar12;
  pbVar38 = (byte *)((long)register0x00000020 + -0x118);
  uVar1 = *(undefined4 *)(param_2 + 4);
  bVar31 = param_2[1];
  *(undefined **)((long)register0x00000020 + -400) = &UNK_004db22b;
  pbVar23 = param_3;
  cVar10 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                     (param_3,pbVar38,(long)puVar17 + (3 - (long)pbVar38),uVar1,0xffffffff,
                      bVar31 & 1);
  uVar14 = 1;
  if (cVar10 == '\0') goto code_r0x004db243;
  goto code_r0x004dc106;
code_r0x004dbff3:
  *pbVar23 = bVar22 + 1;
  bVar41 = pbVar38[-1] == 0x31;
  if (bVar41) {
    pbVar38 = pbVar38 + -1;
  }
  uVar30 = uVar30 + bVar41;
  pbVar19 = pbVar19 + -(ulong)bVar41;
  lVar15 = *(long *)((long)register0x00000020 + -0x130);
joined_r0x004dc01c:
  unaff_RBX = (byte *)0x0;
  if (lVar15 == 0) {
code_r0x004dc05c:
    if ((*(byte *)(*(long *)((long)register0x00000020 + -0x128) + 1) & 8) != 0)
    goto code_r0x004dc069;
  }
  else {
code_r0x004dc069:
    pbVar38[-1] = *pbVar38;
    *pbVar38 = 0x2e;
    pbVar38 = pbVar38 + -1;
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
  *(undefined2 *)((long)register0x00000020 + -0x48) = 0;
  *(byte *)((long)register0x00000020 + -0x68) = (bVar31 != 9) << 5 | 0x45;
  uVar37 = -uVar30;
  if ((int)-uVar30 < 0) {
    uVar37 = uVar30;
  }
  *(char *)((long)register0x00000020 + -0x67) = (char)((int)uVar30 >> 0x1f) * -2 + '+';
  if (uVar37 < 10) {
    puVar18 = (undefined1 *)((long)register0x00000020 + -0x65);
    *(undefined1 *)((long)register0x00000020 + -0x66) = 0x30;
  }
  else {
    puVar18 = (undefined1 *)((long)register0x00000020 + -0x66);
  }
  *(undefined **)((long)register0x00000020 + -400) = &UNK_004dc0c8;
  lVar15 = _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uVar37,puVar18);
  pbVar19 = pbVar19 + -(long)pbVar38;
  *(undefined1 **)((long)register0x00000020 + -0x158) =
       (undefined1 *)((long)register0x00000020 + -0x68);
  *(long *)((long)register0x00000020 + -0x150) = lVar15 - ((long)register0x00000020 + -0x68);
  *(undefined8 *)((long)register0x00000020 + -0x188) =
       *(undefined8 *)((long)register0x00000020 + -0x158);
  *(undefined8 *)((long)register0x00000020 + -0x180) =
       *(undefined8 *)((long)register0x00000020 + -0x150);
  pbVar23 = (byte *)((long)register0x00000020 + -0x138);
  uVar14 = 0;
  pbVar29 = unaff_RBX;
  unaff_R12 = pbVar34;
  pbVar34 = pbVar38;
  param_3 = pbVar19;
code_r0x004dc0ff:
  *(undefined **)((long)register0x00000020 + -400) = &UNK_004dc104;
  func_0x004dd2b0(pbVar23,pbVar38,pbVar19,uVar14,pbVar29);
  param_2 = pbVar34;
code_r0x004dc104:
  uVar14 = 1;
  unaff_R14 = param_2;
  unaff_R15 = param_3;
code_r0x004dc106:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
    return uVar14;
  }
  *(undefined **)((long)register0x00000020 + -400) = &UNK_004dc226;
  param_1 = (double)func_0x0099bd00();
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x188);
  param_3 = pbVar38;
  param_2 = pbVar23;
  in_XMM0_Qb = extraout_XMM0_Qb;
  goto code_r0x004dc230;
code_r0x004dbd4c:
  *pbVar23 = bVar31 + 1;
code_r0x004dbd50:
  if (*pbVar34 != 0x30) {
    pbVar38 = pbVar34;
  }
code_r0x004dbd58:
  pbVar19 = pbVar29 + -(long)pbVar38;
  if ((*(long *)((long)register0x00000020 + -0x60) == 0) &&
     ((*(byte *)(*(long *)((long)register0x00000020 + -0x58) + 1) & 8) == 0)) {
    pbVar19 = pbVar19 + -1;
  }
  pbVar29 = (byte *)((long)register0x00000020 +
                    *(long *)((long)register0x00000020 + -0x60) + (-0xed - (long)pbVar29));
  *(undefined **)((long)register0x00000020 + -0x138) = &UNK_00162ac9;
  *(undefined8 *)((long)register0x00000020 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x188) =
       *(undefined8 *)((long)register0x00000020 + -0x138);
  *(undefined8 *)((long)register0x00000020 + -0x180) =
       *(undefined8 *)((long)register0x00000020 + -0x130);
  pbVar23 = (byte *)((long)register0x00000020 + -0x68);
  uVar14 = 0;
  goto code_r0x004dc0ff;
}


