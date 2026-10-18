// Function: _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEfRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004db110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEfRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (float param_1,byte *param_2,byte *param_3)

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
  byte *unaff_RBX;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  undefined8 unaff_RBP;
  int iVar21;
  undefined2 *puVar22;
  byte bVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  byte bVar32;
  ulong uVar33;
  undefined1 uVar34;
  byte *unaff_R12;
  undefined7 uVar36;
  byte *pbVar35;
  int iVar37;
  uint uVar38;
  undefined1 *unaff_R13;
  byte *unaff_R14;
  byte *pbVar39;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  double dVar43;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  uint in_XMM0_Dd;
  uint extraout_XMM0_Dd;
  
  dVar43 = (double)param_1;
  puVar20 = (undefined1 *)register0x00000020;
code_r0x004db120:
  *(undefined8 *)(puVar20 + -8) = unaff_RBP;
  *(byte **)(puVar20 + -0x10) = unaff_R15;
  *(byte **)(puVar20 + -0x18) = unaff_R14;
  *(undefined1 **)(puVar20 + -0x20) = unaff_R13;
  *(byte **)(puVar20 + -0x28) = unaff_R12;
  *(byte **)(puVar20 + -0x30) = unaff_RBX;
  *(undefined8 *)(puVar20 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar36 = (undefined7)((ulong)unaff_R12 >> 8);
  if ((long)dVar43 < 0) {
    dVar43 = -dVar43;
    in_XMM0_Dd = in_XMM0_Dd ^ 0x80000000;
    unaff_R12 = (byte *)CONCAT71(uVar36,0x2d);
code_r0x004db185:
    *(undefined4 *)(puVar20 + -0x118) = 0;
    puVar17 = (undefined2 *)(puVar20 + -0x117);
    puVar20[-0x118] = (char)unaff_R12;
  }
  else {
    unaff_R12 = (byte *)CONCAT71(uVar36,0x2b);
    if (((param_2[1] & 2) != 0) ||
       (unaff_R12 = (byte *)CONCAT71(uVar36,0x20), (param_2[1] & 4) != 0)) goto code_r0x004db185;
    *(undefined4 *)(puVar20 + -0x118) = 0;
    puVar17 = (undefined2 *)(puVar20 + -0x118);
    unaff_R12 = (byte *)0x0;
  }
  unaff_R14 = param_2;
  unaff_R15 = param_3;
  if (!NAN(dVar43)) {
    pbVar39 = param_3;
    if (ABS(dVar43) == INFINITY) {
      *(double *)(puVar20 + -0x168) = dVar43;
      *(undefined4 *)(puVar20 + -0x160) = in_XMM0_Dc;
      *(uint *)(puVar20 + -0x15c) = in_XMM0_Dd;
      bVar32 = *param_2;
      puVar22 = (undefined2 *)&UNK_001743fa;
      puVar12 = (undefined2 *)&UNK_0016b346;
      goto code_r0x004db1e7;
    }
code_r0x004db243:
    uVar16 = 6;
    if (-1 < (int)*(uint *)(param_2 + 8)) {
      uVar16 = (ulong)*(uint *)(param_2 + 8);
    }
    *(ulong *)(puVar20 + -0x168) = uVar16;
    *(undefined4 *)(puVar20 + -0x118) = 0;
    *(undefined **)(puVar20 + -400) = &UNK_004db26e;
    func_0x0099c770(puVar20 + -0x118);
    pbVar24 = (byte *)0x35;
    *(undefined **)(puVar20 + -400) = &UNK_004db278;
    dVar43 = (double)func_0x0099c780();
    bVar32 = *param_2;
    uVar14 = 0;
    if (6 < (bVar32 & 0xfffffffe) - 8) goto code_r0x004dc106;
    uVar38 = *(uint *)(puVar20 + -0x118);
    unaff_R13 = (undefined1 *)(ulong)uVar38;
    uVar31 = uVar38 - 0x35;
    pbVar19 = (byte *)(ulong)uVar31;
    unaff_RBX = (byte *)((long)(dVar43 - 9.223372036854776e+18) & (long)dVar43 >> 0x3f |
                        (long)dVar43);
    uVar34 = SUB81(unaff_R12,0);
    cVar10 = (char)uVar38;
    uVar7 = (undefined3)(uVar38 >> 8);
    bVar23 = (byte)uVar31;
    pbVar24 = unaff_RBX;
    switch(bVar32 & 0xfffffffe) {
    case 8:
      puVar20[-0x68] = uVar34;
      lVar15 = *(long *)(puVar20 + -0x168);
      *(long *)(puVar20 + -0x60) = lVar15;
      *(byte **)(puVar20 + -0x58) = param_2;
      *(byte **)(puVar20 + -0x50) = param_3;
      if ((int)uVar38 < 0x35) {
        if (uVar31 < 0xffffff80) {
          pbVar39 = (byte *)0x0;
          *(undefined **)(puVar20 + -400) = &UNK_004dc1d3;
          func_0x004dc240(unaff_RBX,0,0x35 - uVar38,puVar20 + -0x68,0);
          break;
        }
        *(undefined8 *)(puVar20 + -0xf8) = 0;
        *(undefined8 *)(puVar20 + -0xf0) = 0;
        *(undefined8 *)(puVar20 + -0x7d) = 0;
        *(undefined8 *)(puVar20 + -0x75) = 0;
        *(undefined8 *)(puVar20 + -0x88) = 0;
        *(undefined8 *)(puVar20 + -0x80) = 0;
        *(undefined8 *)(puVar20 + -0x98) = 0;
        *(undefined8 *)(puVar20 + -0x90) = 0;
        *(undefined8 *)(puVar20 + -0xa8) = 0;
        *(undefined8 *)(puVar20 + -0xa0) = 0;
        *(undefined8 *)(puVar20 + -0xb8) = 0;
        *(undefined8 *)(puVar20 + -0xb0) = 0;
        *(undefined8 *)(puVar20 + -200) = 0;
        *(undefined8 *)(puVar20 + -0xc0) = 0;
        *(undefined8 *)(puVar20 + -0xd8) = 0;
        *(undefined8 *)(puVar20 + -0xd0) = 0;
        *(undefined8 *)(puVar20 + -0xe8) = 0;
        *(undefined8 *)(puVar20 + -0xe0) = 0;
        *(undefined8 *)(puVar20 + -0x108) = 0;
        *(undefined8 *)(puVar20 + -0x100) = 0;
        *(undefined8 *)(puVar20 + -0x118) = 0;
        *(undefined8 *)(puVar20 + -0x110) = 0;
        puVar20[-0xee] = 0x2e;
        uVar16 = 0;
        if (0xffffffc0 < uVar31) {
          uVar16 = (ulong)unaff_RBX >> ((byte)(0x35 - uVar38) & 0x3f);
        }
        pbVar35 = puVar20 + -0xef;
        do {
          pbVar39 = pbVar35;
          *pbVar39 = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
          pbVar35 = pbVar39 + -1;
          bVar42 = 9 < uVar16;
          uVar16 = uVar16 / 10;
        } while (bVar42);
        pbVar24 = puVar20 + -0xed;
        *pbVar35 = 0x30;
        if (uVar31 < 0xffffffc0) {
          *(undefined **)(puVar20 + -400) = &UNK_004db976;
          pbVar30 = (byte *)func_0x004dd190(unaff_RBX,0,pbVar24,0x35 - uVar38,lVar15);
          unaff_RBX = pbVar39;
          unaff_R12 = pbVar24;
        }
        else {
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,cVar10 + 0xbU);
          pbVar19 = (byte *)((long)unaff_RBX << (cVar10 + 0xbU & 0x3f));
          pbVar30 = pbVar24;
          for (; lVar15 != 0; lVar15 = lVar15 + -1) {
            unaff_RBX = (byte *)0x0;
            if (pbVar19 == (byte *)0x0) goto code_r0x004dbd50;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = pbVar19;
            pbVar19 = SUB168(auVar2 * ZEXT816(10),0);
            *pbVar30 = SUB161(auVar2 * ZEXT816(10),8) | 0x30;
            pbVar30 = pbVar30 + 1;
          }
          unaff_RBX = pbVar19;
          if ((long)pbVar19 < 0) {
            pbVar24 = pbVar30 + -1;
            unaff_RBX = (byte *)-(long)pbVar19;
            if (!SBORROW8(0,(long)pbVar19)) {
              do {
                bVar32 = *pbVar24;
                if (bVar32 != 0x2e) {
                  if (bVar32 != 0x39) goto code_r0x004dbd4c;
                  *pbVar24 = 0x30;
                }
                pbVar24 = pbVar24 + -1;
              } while( true );
            }
            pbVar24 = pbVar24 + -(ulong)(pbVar30[-1] == 0x2e);
            bVar32 = *pbVar24;
            if ((bVar32 & 0x81) == 1) {
              do {
                if (bVar32 != 0x2e) {
                  if (bVar32 != 0x39) goto code_r0x004dbd4c;
                  *pbVar24 = 0x30;
                }
                bVar32 = pbVar24[-1];
                pbVar24 = pbVar24 + -1;
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
      uVar38 = (uVar38 - ((uint)lVar15 ^ 0x3f)) + 0xb;
      unaff_R13 = (undefined1 *)(ulong)uVar38;
      if (0x80 < (int)uVar38) {
        puVar20[-0x138] = 0;
        *(undefined1 **)(puVar20 + -0x118) = puVar20 + -0x68;
        *(undefined1 **)(puVar20 + -0x110) = puVar20 + -0x138;
        puVar28 = &UNK_004dc900;
code_r0x004db4f9:
        pbVar39 = (byte *)0x0;
        *(undefined **)(puVar20 + -400) = &UNK_004db50d;
        func_0x004dc3b0(unaff_RBX,0,pbVar19,puVar20 + -0x118,puVar28);
        break;
      }
      *(undefined8 *)(puVar20 + -0xf8) = 0;
      *(undefined8 *)(puVar20 + -0xf0) = 0;
      *(undefined8 *)(puVar20 + -0x7d) = 0;
      *(undefined8 *)(puVar20 + -0x75) = 0;
      *(undefined8 *)(puVar20 + -0x88) = 0;
      *(undefined8 *)(puVar20 + -0x80) = 0;
      *(undefined8 *)(puVar20 + -0x98) = 0;
      *(undefined8 *)(puVar20 + -0x90) = 0;
      *(undefined8 *)(puVar20 + -0xa8) = 0;
      *(undefined8 *)(puVar20 + -0xa0) = 0;
      *(undefined8 *)(puVar20 + -0xb8) = 0;
      *(undefined8 *)(puVar20 + -0xb0) = 0;
      *(undefined8 *)(puVar20 + -200) = 0;
      *(undefined8 *)(puVar20 + -0xc0) = 0;
      *(undefined8 *)(puVar20 + -0xd8) = 0;
      *(undefined8 *)(puVar20 + -0xd0) = 0;
      *(undefined8 *)(puVar20 + -0xe8) = 0;
      *(undefined8 *)(puVar20 + -0xe0) = 0;
      *(undefined8 *)(puVar20 + -0x108) = 0;
      *(undefined8 *)(puVar20 + -0x100) = 0;
      *(undefined8 *)(puVar20 + -0x118) = 0;
      *(undefined8 *)(puVar20 + -0x110) = 0;
      pbVar39 = puVar20 + -0xee;
      puVar20[-0xee] = 0x2e;
      pbVar30 = puVar20 + -0xed;
      if ((int)uVar38 < 0x41) {
        pbVar24 = (byte *)((long)unaff_RBX << (bVar23 & 0x3f));
        do {
          unaff_RBX = (byte *)((ulong)pbVar24 / 10);
          pbVar39[-1] = (char)pbVar24 + (char)unaff_RBX * -10 | 0x30;
          pbVar39 = pbVar39 + -1;
          bVar42 = (byte *)0x9 < pbVar24;
          pbVar24 = unaff_RBX;
          pbVar35 = param_2;
        } while (bVar42);
      }
      else {
        pbVar35 = (byte *)((long)unaff_RBX << (bVar23 & 0x3f));
        pbVar24 = pbVar35;
        pbVar19 = (byte *)(0L << (bVar23 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar23 & 0x3f));
        if ((uVar31 & 0x40) != 0) {
          pbVar24 = (byte *)0x0;
          pbVar19 = pbVar35;
        }
        if (pbVar19 != (byte *)0x0) {
          do {
            iVar11 = (int)((ulong)pbVar19 % 10);
            param_2 = (byte *)(ulong)(uint)(iVar11 * 3);
            iVar11 = (int)pbVar24 + (int)((ulong)pbVar24 / 10) * -10 + iVar11 * 6;
            uVar38 = (iVar11 * 0xcd & 0xffffU) >> 0xb;
            pbVar24 = (byte *)((ulong)uVar38 +
                              ((ulong)pbVar19 % 10) * 0x1999999999999999 + (ulong)pbVar24 / 10);
            pbVar39[-1] = (char)iVar11 + (char)uVar38 * -10 | 0x30;
            pbVar39 = pbVar39 + -1;
            bVar42 = (byte *)0x9 < pbVar19;
            pbVar19 = (byte *)((ulong)pbVar19 / 10);
          } while (bVar42);
        }
        do {
          unaff_RBX = (byte *)((ulong)pbVar24 / 10);
          pbVar39[-1] = (char)pbVar24 + (char)unaff_RBX * -10 | 0x30;
          pbVar39 = pbVar39 + -1;
          bVar42 = (byte *)0x9 < pbVar24;
          pbVar24 = unaff_RBX;
          pbVar35 = param_2;
        } while (bVar42);
      }
      goto code_r0x004dbd58;
    case 10:
      bVar32 = bVar32 & 0xf9;
      pbVar35 = (byte *)(ulong)bVar32;
      puVar20[-0x138] = uVar34;
      pbVar30 = *(byte **)(puVar20 + -0x168);
      *(byte **)(puVar20 + -0x130) = pbVar30;
      *(byte **)(puVar20 + -0x128) = param_2;
      *(byte **)(puVar20 + -0x120) = param_3;
      unaff_R12 = pbVar30;
      if ((int)uVar38 < 0x36) {
        if ((int)uVar38 < -0x4b) {
          pbVar39 = (byte *)0x0;
          *(undefined **)(puVar20 + -400) = &UNK_004dc1f8;
          func_0x004dd630(unaff_RBX,0,pbVar19,bVar32 == 9,puVar20 + -0x138,0);
          break;
        }
      }
      else {
        lVar15 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        if (0x80 < (int)((uVar38 - ((uint)lVar15 ^ 0x3f)) + 0xb)) {
          puVar20[-0x148] = bVar32 == 9;
          *(undefined8 *)(puVar20 + -0x68) = 0;
          *(undefined1 **)(puVar20 + -0x118) = puVar20 + -0x138;
          *(undefined1 **)(puVar20 + -0x110) = puVar20 + -0x68;
          *(undefined1 **)(puVar20 + -0x108) = puVar20 + -0x148;
          puVar28 = &UNK_004dd690;
          goto code_r0x004db4f9;
        }
      }
      if (unaff_RBX == (byte *)0x0) {
        if ((pbVar30 == (byte *)0x0) && ((param_2[1] & 8) == 0)) {
          unaff_RBX = &UNK_0017eb28;
        }
        else {
          unaff_RBX = &UNK_0016f16d;
        }
        *(undefined **)(puVar20 + -400) = &UNK_004db9f5;
        pbVar19 = (byte *)func_0x0099bcf0(unaff_RBX);
        puVar28 = &UNK_00159b05;
        if (bVar32 == 9) {
          puVar28 = &UNK_001806ec;
        }
        *(undefined **)(puVar20 + -0x148) = puVar28;
        *(undefined8 *)(puVar20 + -0x140) = 4;
        *(undefined8 *)(puVar20 + -0x188) = *(undefined8 *)(puVar20 + -0x148);
        *(undefined8 *)(puVar20 + -0x180) = *(undefined8 *)(puVar20 + -0x140);
        pbVar24 = puVar20 + -0x138;
        uVar14 = 0;
        pbVar39 = unaff_RBX;
        goto code_r0x004dc0ff;
      }
      *(undefined8 *)(puVar20 + -0x7f) = 0;
      *(undefined8 *)(puVar20 + -0x77) = 0;
      *(undefined8 *)(puVar20 + -0x88) = 0;
      *(undefined8 *)(puVar20 + -0x80) = 0;
      *(undefined8 *)(puVar20 + -0x98) = 0;
      *(undefined8 *)(puVar20 + -0x90) = 0;
      *(undefined8 *)(puVar20 + -0xa8) = 0;
      *(undefined8 *)(puVar20 + -0xa0) = 0;
      *(undefined8 *)(puVar20 + -0xb8) = 0;
      *(undefined8 *)(puVar20 + -0xb0) = 0;
      *(undefined8 *)(puVar20 + -200) = 0;
      *(undefined8 *)(puVar20 + -0xc0) = 0;
      *(undefined8 *)(puVar20 + -0xd8) = 0;
      *(undefined8 *)(puVar20 + -0xd0) = 0;
      *(undefined8 *)(puVar20 + -0xe8) = 0;
      *(undefined8 *)(puVar20 + -0xe0) = 0;
      *(undefined8 *)(puVar20 + -0xf8) = 0;
      *(undefined8 *)(puVar20 + -0xf0) = 0;
      *(undefined8 *)(puVar20 + -0x108) = 0;
      *(undefined8 *)(puVar20 + -0x100) = 0;
      *(undefined8 *)(puVar20 + -0x118) = 0;
      *(undefined8 *)(puVar20 + -0x110) = 0;
      pbVar39 = puVar20 + -0x116;
      if ((int)uVar38 < 0x35) {
        *(uint *)(puVar20 + -0x16c) = (uint)bVar32;
        bVar42 = uVar31 < 0xffffffc1;
        uVar36 = (undefined7)((ulong)pbVar30 >> 8);
        pbVar35 = (byte *)CONCAT71(uVar36,bVar42);
        if (bVar42) {
          pbVar24 = puVar20 + -0xef;
          puVar20[-0xef] = 0x30;
          bVar41 = false;
          uVar16 = 0;
code_r0x004db9ad:
          uVar13 = *(long *)(puVar20 + -0x168) + 1;
          uVar25 = 0;
          bVar40 = uVar16 <= uVar13;
          lVar26 = 0;
          if (bVar40) {
            lVar26 = uVar13 - uVar16;
          }
          if (-0xc < (int)uVar38) {
            puVar20[-0x168] = bVar42;
            goto code_r0x004dbed9;
          }
          bVar32 = cVar10 + 0x4b;
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,bVar32);
          uVar33 = (long)unaff_RBX << (bVar32 & 0x3f);
          uVar29 = uVar33;
          uVar27 = 0L << (bVar32 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar32 & 0x3f);
          if ((bVar32 & 0x40) != 0) {
            uVar29 = uVar25;
            uVar27 = uVar33;
          }
          bVar40 = uVar29 != 0;
          pbVar35 = (byte *)CONCAT71(uVar36,1);
          lVar26 = lVar26 + (ulong)(uVar16 <= uVar13);
          pbVar19 = pbVar24;
          if ((lVar26 != 0) && (uVar29 != 0)) {
            pbVar35 = (byte *)CONCAT71(uVar36,1);
            uVar25 = 0;
            unaff_R13 = (undefined1 *)0xa;
            do {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar29;
              uVar29 = SUB168(auVar3 * ZEXT816(10),0);
              auVar9._8_8_ = 0;
              auVar9._0_8_ = SUB168(auVar3 * ZEXT816(10),8);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar27;
              auVar9 = auVar4 * ZEXT816(10) + auVar9;
              uVar27 = auVar9._0_8_;
              if (((char)pbVar35 == '\x01') && (auVar9._8_8_ == 0)) {
                uVar25 = (ulong)((int)uVar25 + 1);
                pbVar35 = (byte *)CONCAT71((int7)((ulong)pbVar35 >> 8),1);
              }
              else {
                *pbVar19 = auVar9[8] + 0x30;
                pbVar19 = pbVar19 + 1;
                lVar26 = lVar26 + -1;
                pbVar35 = (byte *)0x0;
              }
              bVar40 = uVar29 != 0;
            } while ((lVar26 != 0) && (uVar29 != 0));
          }
          uVar38 = (uint)uVar25;
          bVar42 = uVar27 != 0;
          if ((lVar26 != 0) && (uVar27 != 0)) {
            unaff_R13 = (undefined1 *)0xa;
            do {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar27;
              uVar13 = SUB168(auVar5 * ZEXT816(10),0);
              if (((char)pbVar35 == '\x01') && (uVar27 < 0x199999999999999a)) {
                uVar25 = (ulong)((int)uVar25 + 1);
                pbVar35 = (byte *)CONCAT71((int7)((ulong)pbVar35 >> 8),1);
              }
              else {
                *pbVar19 = SUB161(auVar5 * ZEXT816(10),8) | 0x30;
                pbVar19 = pbVar19 + 1;
                lVar26 = lVar26 + -1;
                pbVar35 = (byte *)0x0;
              }
              uVar38 = (uint)uVar25;
              bVar42 = uVar13 != 0;
            } while ((lVar26 != 0) && (uVar27 = uVar13, uVar13 != 0));
          }
          bVar42 = (bool)(bVar42 | bVar40);
          cVar10 = '\x01';
        }
        else {
          uVar16 = (ulong)unaff_RBX >> (0x35U - cVar10 & 0x3f);
          *(undefined **)(puVar20 + -400) = &UNK_004dbc82;
          pbVar24 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                                      (uVar16,pbVar39);
          *pbVar24 = 0x30;
          if (uVar16 == 0) {
            puVar20[-0x168] = 1;
            lVar15 = *(long *)(puVar20 + -0x130);
            uVar16 = 0;
          }
          else {
            uVar16 = (long)pbVar24 - (long)pbVar39;
            lVar15 = *(long *)(puVar20 + -0x130);
            if ((lVar15 + 2U < uVar16) && (pbVar39 + lVar15 + 2 != pbVar24)) {
              *(long *)(puVar20 + -0x168) = lVar15;
              pbVar19 = puVar20 + lVar15 + -0x113;
              do {
                bVar41 = pbVar19[-1] != 0x30;
                if (bVar41) break;
                bVar40 = pbVar19 != pbVar24;
                pbVar19 = pbVar19 + 1;
              } while (bVar40);
              goto code_r0x004db9ad;
            }
            puVar20[-0x168] = 0;
          }
          bVar41 = false;
          bVar40 = uVar16 <= lVar15 + 1U;
          lVar26 = 0;
          if (bVar40) {
            lVar26 = (lVar15 + 1U) - uVar16;
          }
code_r0x004dbed9:
          unaff_R13 = (undefined1 *)(ulong)CONCAT31(uVar7,cVar10 + 0xbU);
          uVar13 = (long)unaff_RBX << (cVar10 + 0xbU & 0x3f);
          uVar38 = 0;
          bVar42 = uVar13 != 0;
          pbVar19 = pbVar24;
          if ((bVar42) && (lVar26 = lVar26 + (ulong)bVar40, lVar26 != 0)) {
            uVar38 = 0;
            pbVar35 = (byte *)0xa;
            unaff_R13 = (undefined1 *)(ulong)(byte)puVar20[-0x168];
            do {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar13;
              uVar25 = SUB168(auVar6 * ZEXT816(10),0);
              bVar32 = uVar13 < 0x199999999999999a & (byte)unaff_R13;
              unaff_R13 = (undefined1 *)(ulong)bVar32;
              if (bVar32 == 1) {
                uVar38 = uVar38 + 1;
              }
              else {
                *pbVar19 = SUB161(auVar6 * ZEXT816(10),8) | 0x30;
                pbVar19 = pbVar19 + 1;
                lVar26 = lVar26 + -1;
              }
              bVar42 = uVar25 != 0;
            } while ((bVar42) && (uVar13 = uVar25, lVar26 != 0));
          }
          cVar10 = puVar20[-0x168];
        }
        bVar41 = (bool)(bVar41 | bVar42);
        *pbVar19 = 0x30;
        pbVar30 = pbVar19 + (uVar16 - (long)pbVar24);
        uVar31 = (uint)pbVar39;
        if (cVar10 != '\0') {
          pbVar39 = pbVar24;
        }
        uVar31 = ~uVar31 + (int)pbVar24;
        if (cVar10 != '\0') {
          uVar31 = ~uVar38;
        }
        lVar15 = *(long *)(puVar20 + -0x130);
        bVar32 = (byte)*(undefined4 *)(puVar20 + -0x16c);
      }
      else {
        lVar15 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar38 = (uVar38 - ((uint)lVar15 ^ 0x3f)) + 0xb;
        unaff_R13 = (undefined1 *)(ulong)uVar38;
        if ((int)uVar38 < 0x41) {
          *(undefined **)(puVar20 + -400) = &UNK_004db81a;
          pbVar19 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                                      ((long)unaff_RBX << (bVar23 & 0x3f),pbVar39);
        }
        else {
          uVar25 = (long)unaff_RBX << (bVar23 & 0x3f);
          uVar13 = uVar25;
          uVar16 = 0L << (bVar23 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar23 & 0x3f);
          if ((uVar31 & 0x40) != 0) {
            uVar13 = 0;
            uVar16 = uVar25;
          }
          *(undefined **)(puVar20 + -400) = &UNK_004dbbf8;
          pbVar19 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                                      (uVar13,uVar16,pbVar39);
        }
        *pbVar19 = 0x30;
        pbVar30 = pbVar19 + -(long)pbVar39;
        uVar31 = (int)pbVar30 - 1;
        lVar15 = *(long *)(puVar20 + -0x130);
        bVar41 = false;
        if (((byte *)(lVar15 + 2) < pbVar30) && (pbVar39 + lVar15 + 2 != pbVar19)) {
          pbVar24 = puVar20 + lVar15 + -0x113;
          do {
            bVar41 = pbVar24[-1] != 0x30;
            if (bVar41) break;
            bVar42 = pbVar24 != pbVar19;
            pbVar24 = pbVar24 + 1;
          } while (bVar42);
        }
      }
      unaff_RBX = (byte *)(lVar15 + 1) + -(long)pbVar30;
      if ((byte *)(lVar15 + 1) < pbVar30 || unaff_RBX == (byte *)0x0) {
        pbVar39[-1] = 0x30;
        lVar15 = *(long *)(puVar20 + -0x130);
        pbVar24 = pbVar39 + lVar15;
        pbVar19 = pbVar24 + 1;
        if ('5' < (char)pbVar39[lVar15 + 1]) {
          pbVar24 = pbVar39 + lVar15;
          do {
            bVar23 = *pbVar24;
            if (bVar23 != 0x2e) {
              if (bVar23 != 0x39) goto code_r0x004dbff3;
              *pbVar24 = 0x30;
            }
            pbVar24 = pbVar24 + -1;
          } while( true );
        }
        if (pbVar39[lVar15 + 1] != 0x35) {
          unaff_RBX = (byte *)0x0;
          goto joined_r0x004dc05a;
        }
        if (bVar41) {
          pbVar24 = pbVar39 + lVar15;
          do {
            bVar23 = *pbVar24;
            if (bVar23 != 0x2e) {
              if (bVar23 != 0x39) goto code_r0x004dbff3;
              *pbVar24 = 0x30;
            }
            pbVar24 = pbVar24 + -1;
          } while( true );
        }
        pbVar24 = pbVar24 + -(ulong)(*pbVar24 == 0x2e);
        bVar23 = *pbVar24;
        if ((bVar23 & 0x81) == 1) {
          do {
            if (bVar23 != 0x2e) {
              if (bVar23 != 0x39) goto code_r0x004dbff3;
              *pbVar24 = 0x30;
            }
            bVar23 = pbVar24[-1];
            pbVar24 = pbVar24 + -1;
          } while( true );
        }
        goto joined_r0x004dc01c;
      }
joined_r0x004dc05a:
      if (lVar15 == 0) goto code_r0x004dc05c;
      goto code_r0x004dc069;
    case 0xc:
      lVar15 = *(long *)(puVar20 + -0x168) + -1;
      if (*(long *)(puVar20 + -0x168) == 0) {
        lVar15 = 0;
      }
      if (0x34 < (int)uVar38) {
        lVar26 = 0x3f;
        if (unaff_RBX != (byte *)0x0) {
          for (; (ulong)unaff_RBX >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        if (0x80 < (int)((uVar38 - ((uint)lVar26 ^ 0x3f)) + 0xb)) {
          puVar20[-0x68] = uVar34;
          *(long *)(puVar20 + -0x60) = lVar15;
          *(byte **)(puVar20 + -0x58) = param_2;
          *(byte **)(puVar20 + -0x50) = param_3;
          *(byte **)(puVar20 + -0x138) = unaff_RBX;
          *(uint *)(puVar20 + -0x148) = uVar31;
          puVar20[-0x158] = (bVar32 & 0xf9) == 9;
          *(undefined1 **)(puVar20 + -0x118) = puVar20 + -0x68;
          *(undefined1 **)(puVar20 + -0x110) = puVar20 + -0x138;
          *(undefined1 **)(puVar20 + -0x108) = puVar20 + -0x148;
          *(undefined1 **)(puVar20 + -0x100) = puVar20 + -0x158;
          puVar28 = &UNK_004dfa40;
          goto code_r0x004db4f9;
        }
      }
      if ((int)uVar38 < -0x4b) {
        puVar20[-0x118] = uVar34;
        *(long *)(puVar20 + -0x110) = lVar15;
        *(byte **)(puVar20 + -0x108) = param_2;
        *(byte **)(puVar20 + -0x100) = param_3;
        *(undefined **)(puVar20 + -400) = &UNK_004db64a;
        func_0x004df200(unaff_RBX,pbVar19,(bVar32 & 0xf9) == 9,puVar20 + -0x118);
        pbVar39 = pbVar19;
      }
      else {
        puVar20[-0x118] = uVar34;
        *(long *)(puVar20 + -0x110) = lVar15;
        *(byte **)(puVar20 + -0x108) = param_2;
        *(byte **)(puVar20 + -0x100) = param_3;
        *(undefined **)(puVar20 + -400) = &UNK_004db87f;
        func_0x004df270(unaff_RBX,pbVar19,(bVar32 & 0xf9) == 9,puVar20 + -0x118);
        pbVar39 = pbVar19;
      }
      break;
    case 0xe:
      puVar20[-0x68] = uVar34;
      uVar16 = *(ulong *)(puVar20 + -0x168);
      *(ulong *)(puVar20 + -0x60) = uVar16;
      *(byte **)(puVar20 + -0x58) = param_2;
      *(byte **)(puVar20 + -0x50) = param_3;
      iVar11 = *(int *)(param_2 + 8);
      iVar37 = uVar38 + 0xb;
      if (0 < (long)unaff_RBX) {
        iVar21 = -0x3fe;
        if (iVar37 < -0x3fe) {
          iVar21 = iVar37;
        }
        do {
          if (iVar37 < -0x3fd) {
            uVar13 = (ulong)unaff_RBX >> (2U - (char)iVar21 & 0x3f);
            iVar21 = -0x3fe;
            uVar25 = 0;
            goto code_r0x004db57e;
          }
          unaff_RBX = (byte *)((long)unaff_RBX * 2);
          iVar37 = iVar37 + -1;
        } while (0 < (long)unaff_RBX);
      }
      uVar25 = (ulong)unaff_RBX >> 0x3f;
      iVar21 = 0;
      if (unaff_RBX != (byte *)0x0) {
        iVar21 = iVar37 + -1;
      }
      uVar13 = (long)unaff_RBX * 2;
code_r0x004db57e:
      bVar23 = (byte)uVar25;
      unaff_R13 = puVar20 + -0x118;
      uVar27 = uVar13;
      if (-1 < iVar11) {
        uVar27 = 0;
        if (uVar16 < 0x11) {
          uVar27 = 0x10 - uVar16;
        }
        uVar29 = 0xffffffffffffffff;
        if ((uint)uVar16 < 0x10) {
          bVar8 = (char)uVar27 * '\x04';
          uVar29 = 0xffffffffffffffff >> ((char)uVar27 * -4 & 0x3fU);
          uVar16 = uVar13 & uVar29;
          uVar33 = 8L << (bVar8 - 4 & 0x3f);
          if (uVar16 == uVar33) {
            if (uVar27 != 0x10) {
              uVar25 = (0xfL << (bVar8 & 0x3f) & uVar13) >> (bVar8 & 0x3f) & 0xffffffff;
            }
            if ((uVar25 & 1) != 0) {
code_r0x004dba43:
              lVar15 = 0;
              if (0xf >= uVar27) {
                lVar15 = 1L << (bVar8 & 0x3f);
              }
              bVar42 = (long)uVar13 < 0;
              uVar13 = uVar13 + lVar15;
              bVar23 = bVar23 + (-1 < (long)uVar13 && bVar42 || 0xf < uVar27);
            }
          }
          else if (uVar33 < uVar16) goto code_r0x004dba43;
          uVar29 = ~uVar29;
          uVar16 = *(ulong *)(puVar20 + -0x168);
        }
        uVar13 = uVar13 & uVar29;
        uVar27 = uVar16;
      }
      *(undefined8 *)(puVar20 + -0x138) = 0;
      *(undefined8 *)(puVar20 + -0x130) = 0;
      *(undefined4 *)(puVar20 + -0x128) = 0;
      lVar15 = (ulong)(bVar32 != 0xf) * 0x10;
      puVar20[-0x138] = 0x30;
      puVar20[-0x137] = (bVar32 != 0xf) << 5 | 0x58;
      puVar20[-0x136] = (&UNK_00159b0a)[(ulong)bVar23 + lVar15];
      if ((uVar27 == 0) && ((param_2[1] & 8) == 0)) {
        puVar18 = puVar20 + -0x135;
      }
      else {
        puVar18 = puVar20 + -0x134;
        puVar20[-0x135] = 0x2e;
      }
      lVar26 = 0;
      if (uVar13 != 0) {
        do {
          puVar18[lVar26] = (&UNK_00159b0a)[(uVar13 >> 0x3c) + lVar15];
          uVar13 = uVar13 << 4;
          lVar26 = lVar26 + 1;
        } while (uVar13 != 0);
        puVar18 = puVar18 + lVar26;
      }
      pbVar30 = (byte *)0x0;
      if (-1 < iVar11) {
        pbVar30 = (byte *)(uVar16 - lVar26);
      }
      pbVar39 = puVar20 + -0x138;
      pbVar19 = puVar18 + -(long)pbVar39;
      *(undefined8 *)(puVar20 + -0x118) = 0;
      *(undefined8 *)(puVar20 + -0x110) = 0;
      *(undefined8 *)(puVar20 + -0x108) = 0;
      *(undefined8 *)(puVar20 + -0x100) = 0;
      *(undefined2 *)(puVar20 + -0xf8) = 0;
      puVar20[-0x118] = (bVar32 != 0xf) << 5 | 0x50;
      puVar20[-0x117] = (char)(iVar21 >> 0x1f) * -2 + '+';
      iVar11 = -iVar21;
      if (-iVar21 < 0) {
        iVar11 = iVar21;
      }
      *(undefined **)(puVar20 + -400) = &UNK_004dbb99;
      _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(iVar11,puVar20 + -0x116);
      *(undefined1 **)(puVar20 + -0x148) = unaff_R13;
      *(undefined **)(puVar20 + -400) = &UNK_004dbba8;
      uVar14 = func_0x0099bcf0(unaff_R13);
      *(undefined8 *)(puVar20 + -0x140) = uVar14;
      *(undefined8 *)(puVar20 + -0x188) = *(undefined8 *)(puVar20 + -0x148);
      *(undefined8 *)(puVar20 + -0x180) = *(undefined8 *)(puVar20 + -0x140);
      pbVar24 = puVar20 + -0x68;
      uVar14 = 2;
      unaff_RBX = pbVar19;
      unaff_R12 = (byte *)(uVar16 - lVar26);
      pbVar35 = pbVar30;
      param_3 = pbVar39;
      goto code_r0x004dc0ff;
    }
    goto code_r0x004dc104;
  }
  *(double *)(puVar20 + -0x168) = dVar43;
  *(undefined4 *)(puVar20 + -0x160) = in_XMM0_Dc;
  *(uint *)(puVar20 + -0x15c) = in_XMM0_Dd;
  bVar32 = *param_2;
  puVar22 = (undefined2 *)&UNK_001839d4;
  puVar12 = (undefined2 *)&UNK_00184eb5;
code_r0x004db1e7:
  if ((bVar32 & 0xf9) == 9) {
    puVar12 = puVar22;
  }
  if (bVar32 == 7) {
    puVar12 = puVar22;
  }
  *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar12 + 1);
  *puVar17 = *puVar12;
  pbVar39 = puVar20 + -0x118;
  uVar1 = *(undefined4 *)(param_2 + 4);
  bVar32 = param_2[1];
  *(undefined **)(puVar20 + -400) = &UNK_004db22b;
  pbVar24 = param_3;
  cVar10 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                     (param_3,pbVar39,(long)puVar17 + (3 - (long)pbVar39),uVar1,0xffffffff,
                      bVar32 & 1);
  uVar14 = 1;
  if (cVar10 == '\0') goto code_r0x004db243;
  goto code_r0x004dc106;
code_r0x004dbff3:
  *pbVar24 = bVar23 + 1;
  bVar42 = pbVar39[-1] == 0x31;
  if (bVar42) {
    pbVar39 = pbVar39 + -1;
  }
  uVar31 = uVar31 + bVar42;
  pbVar19 = pbVar19 + -(ulong)bVar42;
  lVar15 = *(long *)(puVar20 + -0x130);
joined_r0x004dc01c:
  unaff_RBX = (byte *)0x0;
  if (lVar15 == 0) {
code_r0x004dc05c:
    if ((*(byte *)(*(long *)(puVar20 + -0x128) + 1) & 8) != 0) goto code_r0x004dc069;
  }
  else {
code_r0x004dc069:
    pbVar39[-1] = *pbVar39;
    *pbVar39 = 0x2e;
    pbVar39 = pbVar39 + -1;
  }
  *(undefined8 *)(puVar20 + -0x68) = 0;
  *(undefined8 *)(puVar20 + -0x60) = 0;
  *(undefined8 *)(puVar20 + -0x58) = 0;
  *(undefined8 *)(puVar20 + -0x50) = 0;
  *(undefined2 *)(puVar20 + -0x48) = 0;
  puVar20[-0x68] = (bVar32 != 9) << 5 | 0x45;
  uVar38 = -uVar31;
  if ((int)-uVar31 < 0) {
    uVar38 = uVar31;
  }
  puVar20[-0x67] = (char)((int)uVar31 >> 0x1f) * -2 + '+';
  if (uVar38 < 10) {
    puVar18 = puVar20 + -0x65;
    puVar20[-0x66] = 0x30;
  }
  else {
    puVar18 = puVar20 + -0x66;
  }
  *(undefined **)(puVar20 + -400) = &UNK_004dc0c8;
  lVar15 = _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uVar38,puVar18);
  pbVar19 = pbVar19 + -(long)pbVar39;
  *(undefined1 **)(puVar20 + -0x158) = puVar20 + -0x68;
  *(long *)(puVar20 + -0x150) = lVar15 - (long)(puVar20 + -0x68);
  *(undefined8 *)(puVar20 + -0x188) = *(undefined8 *)(puVar20 + -0x158);
  *(undefined8 *)(puVar20 + -0x180) = *(undefined8 *)(puVar20 + -0x150);
  pbVar24 = puVar20 + -0x138;
  uVar14 = 0;
  pbVar30 = unaff_RBX;
  unaff_R12 = pbVar35;
  pbVar35 = pbVar39;
  param_3 = pbVar19;
code_r0x004dc0ff:
  *(undefined **)(puVar20 + -400) = &UNK_004dc104;
  func_0x004dd2b0(pbVar24,pbVar39,pbVar19,uVar14,pbVar30);
  param_2 = pbVar35;
code_r0x004dc104:
  uVar14 = 1;
  unaff_R14 = param_2;
  unaff_R15 = param_3;
code_r0x004dc106:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar20 + -0x38)) {
    return uVar14;
  }
  *(undefined **)(puVar20 + -400) = &UNK_004dc226;
  dVar43 = (double)func_0x0099bd00();
  *(undefined1 **)(puVar20 + -400) = puVar20 + -8;
  unaff_RBP = *(undefined8 *)(puVar20 + -400);
  puVar20 = puVar20 + -0x188;
  param_3 = pbVar39;
  param_2 = pbVar24;
  in_XMM0_Dc = extraout_XMM0_Dc;
  in_XMM0_Dd = extraout_XMM0_Dd;
  goto code_r0x004db120;
code_r0x004dbd4c:
  *pbVar24 = bVar32 + 1;
code_r0x004dbd50:
  if (*pbVar35 != 0x30) {
    pbVar39 = pbVar35;
  }
code_r0x004dbd58:
  pbVar19 = pbVar30 + -(long)pbVar39;
  if ((*(long *)(puVar20 + -0x60) == 0) && ((*(byte *)(*(long *)(puVar20 + -0x58) + 1) & 8) == 0)) {
    pbVar19 = pbVar19 + -1;
  }
  pbVar30 = puVar20 + *(long *)(puVar20 + -0x60) + (-0xed - (long)pbVar30);
  *(undefined **)(puVar20 + -0x138) = &UNK_00162ac9;
  *(undefined8 *)(puVar20 + -0x130) = 0;
  *(undefined8 *)(puVar20 + -0x188) = *(undefined8 *)(puVar20 + -0x138);
  *(undefined8 *)(puVar20 + -0x180) = *(undefined8 *)(puVar20 + -0x130);
  pbVar24 = puVar20 + -0x68;
  uVar14 = 0;
  goto code_r0x004dc0ff;
}


