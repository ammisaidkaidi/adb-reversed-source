// Function: _ZN4absl12lts_2026052618debugging_internal18DecodeRustPunycodeENS1_25DecodeRustPunycodeOptionsE
// Address: 004fb680
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _ZN4absl12lts_2026052618debugging_internal18DecodeRustPunycodeENS1_25DecodeRustPunycodeOptionsE
                 (byte *param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  char cVar19;
  ushort uVar20;
  byte bVar32;
  byte bVar34;
  int iVar22;
  int iVar23;
  char cVar33;
  char cVar35;
  byte bVar40;
  int iVar36;
  int iVar37;
  byte bVar38;
  char cVar39;
  char cVar41;
  byte bVar42;
  undefined1 auVar30 [16];
  int iVar43;
  ushort uVar49;
  int iVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ushort uVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  int iVar60;
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  int iVar61;
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [12];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar71 [12];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [12];
  undefined1 auVar87 [16];
  undefined1 auVar83 [12];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [12];
  undefined1 auVar92 [12];
  undefined1 auVar96 [16];
  char *in_stack_00000008;
  char *in_stack_00000010;
  byte *in_stack_00000018;
  byte *in_stack_00000020;
  char *pcStack_b0;
  byte *pbStack_98;
  undefined2 uStack_8a;
  uint uStack_88;
  uint uStack_84;
  char acStack_80 [4];
  uint uStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  undefined4 uVar21;
  undefined6 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar31 [16];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar64 [14];
  undefined1 auVar65 [14];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar84 [14];
  undefined1 auVar85 [14];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar93 [14];
  undefined1 auVar94 [14];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = 0;
  uVar18 = (long)in_stack_00000020 - (long)in_stack_00000018;
  pbVar3 = param_1;
  if (in_stack_00000020 == in_stack_00000018) {
code_r0x004fb71f:
    in_stack_00000018 = (byte *)0x0;
    param_1 = pbVar3;
  }
  else {
    *in_stack_00000018 = 0;
    if (0 < (long)in_stack_00000010 - (long)in_stack_00000008) {
      uVar16 = 0xffffffff;
      uVar6 = 0;
      do {
        bVar8 = in_stack_00000008[uVar6];
        param_2 = (char *)(ulong)bVar8;
        if (bVar8 == 0x5f) {
          uVar16 = uVar6 & 0xffffffff;
        }
        else {
          pbVar3 = (byte *)(ulong)(bVar8 - 0x30);
          param_1 = pbVar3;
          if ((9 < (byte)(bVar8 - 0x30)) &&
             (bVar8 = (bVar8 & 0xdf) + 0xbf, param_2 = (char *)(ulong)bVar8, 0x19 < bVar8))
          goto code_r0x004fb71f;
        }
        uVar6 = uVar6 + 1;
      } while ((long)in_stack_00000010 - (long)in_stack_00000008 != uVar6);
      iVar17 = (int)uVar16;
      if (iVar17 < 0) {
        uVar16 = 0;
      }
      else {
        pbVar3 = param_1;
        if ((iVar17 == 0) || ((long)uVar18 < (long)(ulong)(iVar17 + 1))) goto code_r0x004fb71f;
        pbStack_98 = in_stack_00000018;
        param_2 = in_stack_00000008;
        param_1 = in_stack_00000018;
        func_0x0099bda0(in_stack_00000018,in_stack_00000008,uVar16);
        pbStack_98[uVar16] = 0;
        in_stack_00000008 = in_stack_00000008 + (iVar17 + 1);
        in_stack_00000018 = pbStack_98;
      }
    }
    auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    auStack_78 = (undefined1  [16])0x0;
    uVar6 = uVar16;
    if (in_stack_00000008 != in_stack_00000010) {
      uVar7 = 0x100;
      if (0x100 < (uint)uVar16) {
        uVar7 = uVar16;
      }
      pcStack_b0 = (char *)0x80;
      iVar17 = 0x48;
      uVar2 = 0;
      do {
        uVar4 = (uint)uVar16;
        pbVar3 = param_1;
        if (uVar4 == (uint)uVar7) goto code_r0x004fb71f;
        param_2 = (char *)(ulong)(iVar17 + 0x1aU);
        pbVar3 = (byte *)0x24;
        lVar9 = 1;
        uVar16 = (ulong)uVar2;
        while( true ) {
          cVar19 = *in_stack_00000008;
          iVar11 = (int)cVar19;
          uStack_88 = uVar4;
          uStack_84 = uVar2;
          if ((byte)(cVar19 - 0x30U) < 10) {
            uVar10 = (ulong)(iVar11 - 0x16);
          }
          else if ((byte)(cVar19 + 0x9fU) < 0x1a) {
            uVar10 = (ulong)(iVar11 - 0x61);
          }
          else {
            if ((byte)(cVar19 + 0xa5U) < 0xe6) goto code_r0x004fb71f;
            uVar10 = (ulong)(iVar11 - 0x41);
          }
          uVar16 = uVar10 * lVar9 + (uVar16 & 0xffffffff);
          if (0x40000000 < uVar16) goto code_r0x004fb71f;
          uVar5 = (uint)pbVar3;
          uVar14 = uVar5 - iVar17;
          if (iVar17 + 0x1aU <= uVar5) {
            uVar14 = 0x1a;
          }
          if (uVar5 <= iVar17 + 1U) {
            uVar14 = 1;
          }
          if ((uint)uVar10 < uVar14) break;
          in_stack_00000008 = in_stack_00000008 + 1;
          lVar9 = lVar9 * (ulong)(0x24 - uVar14);
          pbVar3 = (byte *)(ulong)(uVar5 + 0x24);
          if (in_stack_00000008 == in_stack_00000010) goto code_r0x004fb71f;
        }
        uVar5 = 2;
        if (uVar2 == 0) {
          uVar5 = 700;
        }
        iVar17 = 0;
        uVar10 = (ulong)((int)uVar16 - uVar2) / (ulong)uVar5;
        uStack_88 = uVar4 + 1;
        uVar2 = (int)(uVar10 / uStack_88) + (int)uVar10;
        if (0x1c7 < uVar2) {
          iVar17 = 0;
          uVar4 = uVar2;
          do {
            uVar2 = uVar4 / 0x23;
            iVar17 = iVar17 + 0x24;
            bVar1 = 0x3e57 < uVar4;
            uVar4 = uVar2;
          } while (bVar1);
        }
        uVar2 = (uVar2 * 0x24 & 0xffff) / (uVar2 + 0x26 & 0xffff);
        uStack_84 = (uint)((uVar16 & 0xffffffff) % (ulong)uStack_88);
        pcStack_b0 = (char *)(ulong)(uint)((int)pcStack_b0 +
                                          (int)((uVar16 & 0xffffffff) / (ulong)uStack_88));
        _acStack_80 = 0;
        param_2 = pcStack_b0;
        pbStack_98 = in_stack_00000018;
        _ZN4absl12lts_2026052618debugging_internal16Utf8ForCodePointC1Em(acStack_80);
        pbVar3 = (byte *)(ulong)uStack_7c;
        if ((pbVar3 == (byte *)0x0) || (iVar11 = (int)uVar6, uVar18 < iVar11 + uStack_7c + 1))
        goto code_r0x004fb71f;
        uStack_8a = (short)uVar2;
        uVar4 = 0xff;
        if (uStack_84 < 0xff) {
          uVar4 = uStack_84;
        }
        bVar8 = (char)uVar4 * '\x02' & 0x3e;
        uVar12 = -1L << bVar8;
        uVar5 = uVar4 >> 5;
        uVar6 = (ulong)uVar5;
        uVar13 = ~uVar12;
        uVar16 = *(ulong *)(auStack_78 + uVar6 * 8);
        uVar15 = uVar16 & uVar13;
        uVar10 = uVar15 & 0x2aaaaaaaaaaaaaaa;
        auVar44._0_2_ = (ushort)uVar15 >> 1;
        auVar44._2_2_ = (ushort)(uVar15 >> 0x10) >> 1;
        auVar44._4_2_ = (ushort)(uVar15 >> 0x20) >> 1;
        auVar44._6_2_ = (ushort)(uVar15 >> 0x31);
        auVar44._8_2_ = (ushort)uVar10 >> 1;
        auVar44._10_2_ = (ushort)(uVar10 >> 0x10) >> 1;
        auVar44._12_2_ = (ushort)(uVar10 >> 0x20) >> 1;
        auVar44._14_2_ = (ushort)(uVar10 >> 0x31);
        auVar44 = auVar44 & _UNK_00155ab0;
        uVar20 = CONCAT11((char)(uVar15 >> 8) - auVar44[1],(char)uVar15 - auVar44[0]);
        uVar21 = CONCAT13((char)(uVar15 >> 0x18) - auVar44[3],
                          CONCAT12((char)(uVar15 >> 0x10) - auVar44[2],uVar20));
        uVar24 = CONCAT15((char)(uVar15 >> 0x28) - auVar44[5],
                          CONCAT14((char)(uVar15 >> 0x20) - auVar44[4],uVar21));
        uVar25 = CONCAT17((char)(uVar15 >> 0x38) - auVar44[7],
                          CONCAT16((char)(uVar15 >> 0x30) - auVar44[6],uVar24));
        auVar26._0_10_ =
             CONCAT19((char)(uVar10 >> 8) - auVar44[9],CONCAT18((char)uVar10 - auVar44[8],uVar25));
        auVar26[10] = (char)(uVar10 >> 0x10) - auVar44[10];
        auVar26[0xb] = (char)(uVar10 >> 0x18) - auVar44[0xb];
        auVar28[0xc] = (char)(uVar10 >> 0x20) - auVar44[0xc];
        auVar28._0_12_ = auVar26;
        auVar28[0xd] = (char)(uVar10 >> 0x28) - auVar44[0xd];
        auVar46[0xe] = (char)(uVar10 >> 0x30) - auVar44[0xe];
        auVar46._0_14_ = auVar28;
        auVar46[0xf] = (char)(uVar10 >> 0x38) - auVar44[0xf];
        auVar44 = auVar46 & _UNK_00156620;
        auVar30._0_2_ = uVar20 >> 2;
        auVar30._2_2_ = (ushort)((uint)uVar21 >> 0x12);
        auVar30._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
        auVar30._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
        auVar30._8_2_ = (ushort)((unkuint10)auVar26._0_10_ >> 0x42);
        auVar30._10_2_ = auVar26._10_2_ >> 2;
        auVar30._12_2_ = auVar28._12_2_ >> 2;
        auVar30._14_2_ = auVar46._14_2_ >> 2;
        auVar30 = auVar30 & _UNK_00156620;
        cVar19 = auVar30[0] + auVar44[0];
        bVar32 = auVar30[1] + auVar44[1];
        uVar20 = CONCAT11(bVar32,cVar19);
        cVar33 = auVar30[2] + auVar44[2];
        bVar34 = auVar30[3] + auVar44[3];
        uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
        cVar35 = auVar30[4] + auVar44[4];
        bVar38 = auVar30[5] + auVar44[5];
        uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
        cVar39 = auVar30[6] + auVar44[6];
        bVar40 = auVar30[7] + auVar44[7];
        uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
        cVar41 = auVar30[8] + auVar44[8];
        bVar42 = auVar30[9] + auVar44[9];
        auVar27._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
        auVar27[10] = auVar30[10] + auVar44[10];
        auVar27[0xb] = auVar30[0xb] + auVar44[0xb];
        auVar29[0xc] = auVar30[0xc] + auVar44[0xc];
        auVar29._0_12_ = auVar27;
        auVar29[0xd] = auVar30[0xd] + auVar44[0xd];
        auVar31[0xe] = auVar30[0xe] + auVar44[0xe];
        auVar31._0_14_ = auVar29;
        auVar31[0xf] = auVar30[0xf] + auVar44[0xf];
        auVar45[0] = (char)(uVar20 >> 4) + cVar19;
        auVar45[1] = (bVar32 >> 4) + bVar32;
        auVar45[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
        auVar45[3] = (bVar34 >> 4) + bVar34;
        auVar45[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
        auVar45[5] = (bVar38 >> 4) + bVar38;
        auVar45[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
        auVar45[7] = (bVar40 >> 4) + bVar40;
        auVar45[8] = (char)(ushort)((unkuint10)auVar27._0_10_ >> 0x44) + cVar41;
        auVar45[9] = (bVar42 >> 4) + bVar42;
        auVar45[10] = (char)(auVar27._10_2_ >> 4) + auVar27[10];
        auVar45[0xb] = (auVar27[0xb] >> 4) + auVar27[0xb];
        auVar45[0xc] = (char)(auVar29._12_2_ >> 4) + auVar29[0xc];
        auVar45[0xd] = (auVar29[0xd] >> 4) + auVar29[0xd];
        auVar45[0xe] = (char)(auVar31._14_2_ >> 4) + auVar31[0xe];
        auVar45[0xf] = (auVar31[0xf] >> 4) + auVar31[0xf];
        auVar46 = psadbw(auVar45 & _UNK_00155870,(undefined1  [16])0x0);
        iVar23 = auVar46._0_4_;
        iVar37 = auVar46._8_4_;
        if (0x1f < uStack_84) {
          uVar10 = uVar6;
          if (0x7f < uStack_84) {
            uVar10 = (ulong)(uVar5 & 4);
            iVar60 = 0;
            iVar43 = 0;
            iVar50 = 0;
            iVar61 = 0;
            lVar9 = 0;
            iVar22 = 0;
            iVar36 = 0;
            do {
              auVar46 = *(undefined1 (*) [16])(&pbStack_98 + (uVar6 - lVar9));
              auVar30 = *(undefined1 (*) [16])(&uStack_88 + (uVar6 - lVar9) * 2);
              auVar74._0_8_ = auVar30._8_8_;
              auVar74._8_4_ = auVar30._0_4_;
              auVar74._12_4_ = auVar30._4_4_;
              auVar66._0_8_ = auVar46._8_8_;
              auVar66._8_4_ = auVar46._0_4_;
              auVar66._12_4_ = auVar46._4_4_;
              auVar79._0_2_ = auVar30._8_2_ >> 1;
              auVar79._2_2_ = auVar30._10_2_ >> 1;
              auVar79._4_2_ = auVar30._12_2_ >> 1;
              auVar79._6_2_ = auVar30._14_2_ >> 1;
              auVar79._8_2_ = auVar30._0_2_ >> 1;
              auVar79._10_2_ = auVar30._2_2_ >> 1;
              auVar79._12_2_ = auVar30._4_2_ >> 1;
              auVar79._14_2_ = auVar30._6_2_ >> 1;
              auVar79 = auVar79 & _UNK_00155ab0;
              uVar20 = CONCAT11(auVar30[9] - auVar79[1],auVar30[8] - auVar79[0]);
              uVar21 = CONCAT13(auVar30[0xb] - auVar79[3],CONCAT12(auVar30[10] - auVar79[2],uVar20))
              ;
              uVar24 = CONCAT15(auVar30[0xd] - auVar79[5],CONCAT14(auVar30[0xc] - auVar79[4],uVar21)
                               );
              uVar25 = CONCAT17(auVar30[0xf] - auVar79[7],CONCAT16(auVar30[0xe] - auVar79[6],uVar24)
                               );
              auVar82._0_10_ =
                   CONCAT19(auVar30[1] - auVar79[9],CONCAT18(auVar30[0] - auVar79[8],uVar25));
              auVar82[10] = auVar30[2] - auVar79[10];
              auVar82[0xb] = auVar30[3] - auVar79[0xb];
              auVar84[0xc] = auVar30[4] - auVar79[0xc];
              auVar84._0_12_ = auVar82;
              auVar84[0xd] = auVar30[5] - auVar79[0xd];
              auVar86[0xe] = auVar30[6] - auVar79[0xe];
              auVar86._0_14_ = auVar84;
              auVar86[0xf] = auVar30[7] - auVar79[0xf];
              auVar30 = auVar86 & _UNK_00156620;
              auVar87._0_2_ = uVar20 >> 2;
              auVar87._2_2_ = (ushort)((uint)uVar21 >> 0x12);
              auVar87._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
              auVar87._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
              auVar87._8_2_ = (ushort)((unkuint10)auVar82._0_10_ >> 0x42);
              auVar87._10_2_ = auVar82._10_2_ >> 2;
              auVar87._12_2_ = auVar84._12_2_ >> 2;
              auVar87._14_2_ = auVar86._14_2_ >> 2;
              auVar87 = auVar87 & _UNK_00156620;
              cVar19 = auVar87[0] + auVar30[0];
              bVar32 = auVar87[1] + auVar30[1];
              uVar20 = CONCAT11(bVar32,cVar19);
              cVar33 = auVar87[2] + auVar30[2];
              bVar34 = auVar87[3] + auVar30[3];
              uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
              cVar35 = auVar87[4] + auVar30[4];
              bVar38 = auVar87[5] + auVar30[5];
              uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
              cVar39 = auVar87[6] + auVar30[6];
              bVar40 = auVar87[7] + auVar30[7];
              uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
              cVar41 = auVar87[8] + auVar30[8];
              bVar42 = auVar87[9] + auVar30[9];
              auVar83._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
              auVar83[10] = auVar87[10] + auVar30[10];
              auVar83[0xb] = auVar87[0xb] + auVar30[0xb];
              auVar85[0xc] = auVar87[0xc] + auVar30[0xc];
              auVar85._0_12_ = auVar83;
              auVar85[0xd] = auVar87[0xd] + auVar30[0xd];
              auVar88[0xe] = auVar87[0xe] + auVar30[0xe];
              auVar88._0_14_ = auVar85;
              auVar88[0xf] = auVar87[0xf] + auVar30[0xf];
              auVar80[0] = (char)(uVar20 >> 4) + cVar19;
              auVar80[1] = (bVar32 >> 4) + bVar32;
              auVar80[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
              auVar80[3] = (bVar34 >> 4) + bVar34;
              auVar80[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
              auVar80[5] = (bVar38 >> 4) + bVar38;
              auVar80[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
              auVar80[7] = (bVar40 >> 4) + bVar40;
              auVar80[8] = (char)(ushort)((unkuint10)auVar83._0_10_ >> 0x44) + cVar41;
              auVar80[9] = (bVar42 >> 4) + bVar42;
              auVar80[10] = (char)(auVar83._10_2_ >> 4) + auVar83[10];
              auVar80[0xb] = (auVar83[0xb] >> 4) + auVar83[0xb];
              auVar80[0xc] = (char)(auVar85._12_2_ >> 4) + auVar85[0xc];
              auVar80[0xd] = (auVar85[0xd] >> 4) + auVar85[0xd];
              auVar80[0xe] = (char)(auVar88._14_2_ >> 4) + auVar88[0xe];
              auVar80[0xf] = (auVar88[0xf] >> 4) + auVar88[0xf];
              auVar30 = psadbw(auVar80 & _UNK_00155870,(undefined1  [16])0x0);
              auVar89._0_2_ = auVar46._8_2_ >> 1;
              auVar89._2_2_ = auVar46._10_2_ >> 1;
              auVar89._4_2_ = auVar46._12_2_ >> 1;
              auVar89._6_2_ = auVar46._14_2_ >> 1;
              auVar89._8_2_ = auVar46._0_2_ >> 1;
              auVar89._10_2_ = auVar46._2_2_ >> 1;
              auVar89._12_2_ = auVar46._4_2_ >> 1;
              auVar89._14_2_ = auVar46._6_2_ >> 1;
              auVar89 = auVar89 & _UNK_00155ab0;
              uVar20 = CONCAT11(auVar46[9] - auVar89[1],auVar46[8] - auVar89[0]);
              uVar21 = CONCAT13(auVar46[0xb] - auVar89[3],CONCAT12(auVar46[10] - auVar89[2],uVar20))
              ;
              uVar24 = CONCAT15(auVar46[0xd] - auVar89[5],CONCAT14(auVar46[0xc] - auVar89[4],uVar21)
                               );
              uVar25 = CONCAT17(auVar46[0xf] - auVar89[7],CONCAT16(auVar46[0xe] - auVar89[6],uVar24)
                               );
              auVar91._0_10_ =
                   CONCAT19(auVar46[1] - auVar89[9],CONCAT18(auVar46[0] - auVar89[8],uVar25));
              auVar91[10] = auVar46[2] - auVar89[10];
              auVar91[0xb] = auVar46[3] - auVar89[0xb];
              auVar93[0xc] = auVar46[4] - auVar89[0xc];
              auVar93._0_12_ = auVar91;
              auVar93[0xd] = auVar46[5] - auVar89[0xd];
              auVar95[0xe] = auVar46[6] - auVar89[0xe];
              auVar95._0_14_ = auVar93;
              auVar95[0xf] = auVar46[7] - auVar89[0xf];
              auVar46 = auVar95 & _UNK_00156620;
              auVar96._0_2_ = uVar20 >> 2;
              auVar96._2_2_ = (ushort)((uint)uVar21 >> 0x12);
              auVar96._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
              auVar96._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
              auVar96._8_2_ = (ushort)((unkuint10)auVar91._0_10_ >> 0x42);
              auVar96._10_2_ = auVar91._10_2_ >> 2;
              auVar96._12_2_ = auVar93._12_2_ >> 2;
              auVar96._14_2_ = auVar95._14_2_ >> 2;
              auVar96 = auVar96 & _UNK_00156620;
              cVar19 = auVar96[0] + auVar46[0];
              bVar32 = auVar96[1] + auVar46[1];
              uVar20 = CONCAT11(bVar32,cVar19);
              cVar33 = auVar96[2] + auVar46[2];
              bVar34 = auVar96[3] + auVar46[3];
              uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
              cVar35 = auVar96[4] + auVar46[4];
              bVar38 = auVar96[5] + auVar46[5];
              uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
              cVar39 = auVar96[6] + auVar46[6];
              bVar40 = auVar96[7] + auVar46[7];
              uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
              cVar41 = auVar96[8] + auVar46[8];
              bVar42 = auVar96[9] + auVar46[9];
              auVar92._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
              auVar92[10] = auVar96[10] + auVar46[10];
              auVar92[0xb] = auVar96[0xb] + auVar46[0xb];
              auVar94[0xc] = auVar96[0xc] + auVar46[0xc];
              auVar94._0_12_ = auVar92;
              auVar94[0xd] = auVar96[0xd] + auVar46[0xd];
              auVar97[0xe] = auVar96[0xe] + auVar46[0xe];
              auVar97._0_14_ = auVar94;
              auVar97[0xf] = auVar96[0xf] + auVar46[0xf];
              auVar90[0] = (char)(uVar20 >> 4) + cVar19;
              auVar90[1] = (bVar32 >> 4) + bVar32;
              auVar90[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
              auVar90[3] = (bVar34 >> 4) + bVar34;
              auVar90[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
              auVar90[5] = (bVar38 >> 4) + bVar38;
              auVar90[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
              auVar90[7] = (bVar40 >> 4) + bVar40;
              auVar90[8] = (char)(ushort)((unkuint10)auVar92._0_10_ >> 0x44) + cVar41;
              auVar90[9] = (bVar42 >> 4) + bVar42;
              auVar90[10] = (char)(auVar92._10_2_ >> 4) + auVar92[10];
              auVar90[0xb] = (auVar92[0xb] >> 4) + auVar92[0xb];
              auVar90[0xc] = (char)(auVar94._12_2_ >> 4) + auVar94[0xc];
              auVar90[0xd] = (auVar94[0xd] >> 4) + auVar94[0xd];
              auVar90[0xe] = (char)(auVar97._14_2_ >> 4) + auVar97[0xe];
              auVar90[0xf] = (auVar97[0xf] >> 4) + auVar97[0xf];
              auVar46 = psadbw(auVar90 & _UNK_00155870,(undefined1  [16])0x0);
              iVar23 = iVar23 + auVar30._0_4_;
              iVar61 = iVar61 + auVar30._8_4_;
              iVar22 = iVar22 + auVar46._0_4_;
              iVar36 = iVar36 + auVar46._8_4_;
              auVar74 = auVar74 & _UNK_00156dc0;
              auVar66 = auVar66 & _UNK_00156dc0;
              uVar20 = CONCAT11(auVar74[1] - (auVar74[1] >> 1),
                                auVar74[0] - (char)(auVar74._0_2_ >> 1));
              uVar21 = CONCAT13(auVar74[3] - (auVar74[3] >> 1),
                                CONCAT12(auVar74[2] - (char)(auVar74._2_2_ >> 1),uVar20));
              uVar24 = CONCAT15(auVar74[5] - (auVar74[5] >> 1),
                                CONCAT14(auVar74[4] - (char)(auVar74._4_2_ >> 1),uVar21));
              uVar25 = CONCAT17(auVar74[7] - (auVar74[7] >> 1),
                                CONCAT16(auVar74[6] - (char)(auVar74._6_2_ >> 1),uVar24));
              auVar70._0_10_ =
                   CONCAT19(auVar74[9] - (auVar74[9] >> 1),
                            CONCAT18(auVar74[8] - (char)(auVar74._8_2_ >> 1),uVar25));
              auVar70[10] = auVar74[10] - (char)(auVar74._10_2_ >> 1);
              auVar70[0xb] = auVar74[0xb] - (auVar74[0xb] >> 1);
              auVar72[0xc] = auVar74[0xc] - (char)(auVar74._12_2_ >> 1);
              auVar72._0_12_ = auVar70;
              auVar72[0xd] = auVar74[0xd] - (auVar74[0xd] >> 1);
              auVar75[0xe] = auVar74[0xe] - (char)(auVar74._14_2_ >> 1);
              auVar75._0_14_ = auVar72;
              auVar75[0xf] = auVar74[0xf] - (auVar74[0xf] >> 1);
              auVar46 = auVar75 & _UNK_00156620;
              auVar76._0_2_ = uVar20 >> 2;
              auVar76._2_2_ = (ushort)((uint)uVar21 >> 0x12);
              auVar76._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
              auVar76._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
              auVar76._8_2_ = (ushort)((unkuint10)auVar70._0_10_ >> 0x42);
              auVar76._10_2_ = auVar70._10_2_ >> 2;
              auVar76._12_2_ = auVar72._12_2_ >> 2;
              auVar76._14_2_ = auVar75._14_2_ >> 2;
              auVar76 = auVar76 & _UNK_00156620;
              cVar19 = auVar76[0] + auVar46[0];
              bVar32 = auVar76[1] + auVar46[1];
              uVar20 = CONCAT11(bVar32,cVar19);
              cVar33 = auVar76[2] + auVar46[2];
              bVar34 = auVar76[3] + auVar46[3];
              uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
              cVar35 = auVar76[4] + auVar46[4];
              bVar38 = auVar76[5] + auVar46[5];
              uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
              cVar39 = auVar76[6] + auVar46[6];
              bVar40 = auVar76[7] + auVar46[7];
              uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
              cVar41 = auVar76[8] + auVar46[8];
              bVar42 = auVar76[9] + auVar46[9];
              auVar71._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
              auVar71[10] = auVar76[10] + auVar46[10];
              auVar71[0xb] = auVar76[0xb] + auVar46[0xb];
              auVar73[0xc] = auVar76[0xc] + auVar46[0xc];
              auVar73._0_12_ = auVar71;
              auVar73[0xd] = auVar76[0xd] + auVar46[0xd];
              auVar77[0xe] = auVar76[0xe] + auVar46[0xe];
              auVar77._0_14_ = auVar73;
              auVar77[0xf] = auVar76[0xf] + auVar46[0xf];
              auVar81[0] = (char)(uVar20 >> 4) + cVar19;
              auVar81[1] = (bVar32 >> 4) + bVar32;
              auVar81[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
              auVar81[3] = (bVar34 >> 4) + bVar34;
              auVar81[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
              auVar81[5] = (bVar38 >> 4) + bVar38;
              auVar81[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
              auVar81[7] = (bVar40 >> 4) + bVar40;
              auVar81[8] = (char)(ushort)((unkuint10)auVar71._0_10_ >> 0x44) + cVar41;
              auVar81[9] = (bVar42 >> 4) + bVar42;
              auVar81[10] = (char)(auVar71._10_2_ >> 4) + auVar71[10];
              auVar81[0xb] = (auVar71[0xb] >> 4) + auVar71[0xb];
              auVar81[0xc] = (char)(auVar73._12_2_ >> 4) + auVar73[0xc];
              auVar81[0xd] = (auVar73[0xd] >> 4) + auVar73[0xd];
              auVar81[0xe] = (char)(auVar77._14_2_ >> 4) + auVar77[0xe];
              auVar81[0xf] = (auVar77[0xf] >> 4) + auVar77[0xf];
              auVar30 = psadbw(auVar81 & _UNK_00155870,(undefined1  [16])0x0);
              uVar20 = CONCAT11(auVar66[1] - (auVar66[1] >> 1),
                                auVar66[0] - (char)(auVar66._0_2_ >> 1));
              uVar21 = CONCAT13(auVar66[3] - (auVar66[3] >> 1),
                                CONCAT12(auVar66[2] - (char)(auVar66._2_2_ >> 1),uVar20));
              uVar24 = CONCAT15(auVar66[5] - (auVar66[5] >> 1),
                                CONCAT14(auVar66[4] - (char)(auVar66._4_2_ >> 1),uVar21));
              uVar25 = CONCAT17(auVar66[7] - (auVar66[7] >> 1),
                                CONCAT16(auVar66[6] - (char)(auVar66._6_2_ >> 1),uVar24));
              auVar62._0_10_ =
                   CONCAT19(auVar66[9] - (auVar66[9] >> 1),
                            CONCAT18(auVar66[8] - (char)(auVar66._8_2_ >> 1),uVar25));
              auVar62[10] = auVar66[10] - (char)(auVar66._10_2_ >> 1);
              auVar62[0xb] = auVar66[0xb] - (auVar66[0xb] >> 1);
              auVar64[0xc] = auVar66[0xc] - (char)(auVar66._12_2_ >> 1);
              auVar64._0_12_ = auVar62;
              auVar64[0xd] = auVar66[0xd] - (auVar66[0xd] >> 1);
              auVar67[0xe] = auVar66[0xe] - (char)(auVar66._14_2_ >> 1);
              auVar67._0_14_ = auVar64;
              auVar67[0xf] = auVar66[0xf] - (auVar66[0xf] >> 1);
              auVar46 = auVar67 & _UNK_00156620;
              auVar68._0_2_ = uVar20 >> 2;
              auVar68._2_2_ = (ushort)((uint)uVar21 >> 0x12);
              auVar68._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
              auVar68._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
              auVar68._8_2_ = (ushort)((unkuint10)auVar62._0_10_ >> 0x42);
              auVar68._10_2_ = auVar62._10_2_ >> 2;
              auVar68._12_2_ = auVar64._12_2_ >> 2;
              auVar68._14_2_ = auVar67._14_2_ >> 2;
              auVar68 = auVar68 & _UNK_00156620;
              cVar19 = auVar68[0] + auVar46[0];
              bVar32 = auVar68[1] + auVar46[1];
              uVar20 = CONCAT11(bVar32,cVar19);
              cVar33 = auVar68[2] + auVar46[2];
              bVar34 = auVar68[3] + auVar46[3];
              uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
              cVar35 = auVar68[4] + auVar46[4];
              bVar38 = auVar68[5] + auVar46[5];
              uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
              cVar39 = auVar68[6] + auVar46[6];
              bVar40 = auVar68[7] + auVar46[7];
              uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
              cVar41 = auVar68[8] + auVar46[8];
              bVar42 = auVar68[9] + auVar46[9];
              auVar63._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
              auVar63[10] = auVar68[10] + auVar46[10];
              auVar63[0xb] = auVar68[0xb] + auVar46[0xb];
              auVar65[0xc] = auVar68[0xc] + auVar46[0xc];
              auVar65._0_12_ = auVar63;
              auVar65[0xd] = auVar68[0xd] + auVar46[0xd];
              auVar69[0xe] = auVar68[0xe] + auVar46[0xe];
              auVar69._0_14_ = auVar65;
              auVar69[0xf] = auVar68[0xf] + auVar46[0xf];
              auVar78[0] = (char)(uVar20 >> 4) + cVar19;
              auVar78[1] = (bVar32 >> 4) + bVar32;
              auVar78[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
              auVar78[3] = (bVar34 >> 4) + bVar34;
              auVar78[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
              auVar78[5] = (bVar38 >> 4) + bVar38;
              auVar78[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
              auVar78[7] = (bVar40 >> 4) + bVar40;
              auVar78[8] = (char)(ushort)((unkuint10)auVar63._0_10_ >> 0x44) + cVar41;
              auVar78[9] = (bVar42 >> 4) + bVar42;
              auVar78[10] = (char)(auVar63._10_2_ >> 4) + auVar63[10];
              auVar78[0xb] = (auVar63[0xb] >> 4) + auVar63[0xb];
              auVar78[0xc] = (char)(auVar65._12_2_ >> 4) + auVar65[0xc];
              auVar78[0xd] = (auVar65[0xd] >> 4) + auVar65[0xd];
              auVar78[0xe] = (char)(auVar69._14_2_ >> 4) + auVar69[0xe];
              auVar78[0xf] = (auVar69[0xf] >> 4) + auVar69[0xf];
              auVar46 = psadbw(auVar78 & _UNK_00155870,(undefined1  [16])0x0);
              iVar37 = iVar37 + auVar30._0_4_;
              iVar60 = iVar60 + auVar30._8_4_;
              iVar43 = iVar43 + auVar46._0_4_;
              iVar50 = iVar50 + auVar46._8_4_;
              lVar9 = lVar9 + 4;
              uVar10 = uVar10 - 4;
            } while (uVar10 != 0);
            iVar23 = iVar22 + iVar23 + iVar36 + iVar61;
            iVar37 = iVar43 + iVar37 + iVar50 + iVar60;
            uVar10 = (ulong)(uVar5 & 3);
            if ((uVar5 & 4) == uVar5) goto code_r0x004fbcbe;
          }
          do {
            uVar25 = *(undefined8 *)(auStack_78 + uVar10 * 8 + -8);
            auVar56._8_4_ = (int)uVar25;
            auVar56._0_8_ = uVar25;
            auVar56._12_4_ = (int)((ulong)uVar25 >> 0x20);
            auVar56 = auVar56 & _UNK_00156530;
            auVar47._0_2_ = (ushort)uVar25 >> 1;
            uVar20 = (ushort)((ulong)uVar25 >> 0x10);
            auVar47._2_2_ = uVar20 >> 1;
            uVar49 = (ushort)((ulong)uVar25 >> 0x20);
            auVar47._4_2_ = uVar49 >> 1;
            uVar51 = (ushort)((ulong)uVar25 >> 0x30);
            auVar47._6_2_ = uVar51 >> 1;
            auVar47._8_2_ = (ushort)uVar25 >> 1;
            auVar47._10_2_ = uVar20 >> 1;
            auVar47._12_2_ = uVar49 >> 1;
            auVar47._14_2_ = uVar51 >> 1;
            auVar47 = auVar47 & _UNK_00155ab0;
            uVar20 = CONCAT11(auVar56[1] - auVar47[1],auVar56[0] - auVar47[0]);
            uVar21 = CONCAT13(auVar56[3] - auVar47[3],CONCAT12(auVar56[2] - auVar47[2],uVar20));
            uVar24 = CONCAT15(auVar56[5] - auVar47[5],CONCAT14(auVar56[4] - auVar47[4],uVar21));
            uVar25 = CONCAT17(auVar56[7] - auVar47[7],CONCAT16(auVar56[6] - auVar47[6],uVar24));
            auVar52._0_10_ =
                 CONCAT19(auVar56[9] - auVar47[9],CONCAT18(auVar56[8] - auVar47[8],uVar25));
            auVar52[10] = auVar56[10] - auVar47[10];
            auVar52[0xb] = auVar56[0xb] - auVar47[0xb];
            auVar54[0xc] = auVar56[0xc] - auVar47[0xc];
            auVar54._0_12_ = auVar52;
            auVar54[0xd] = auVar56[0xd] - auVar47[0xd];
            auVar57[0xe] = auVar56[0xe] - auVar47[0xe];
            auVar57._0_14_ = auVar54;
            auVar57[0xf] = auVar56[0xf] - auVar47[0xf];
            auVar46 = auVar57 & _UNK_00156620;
            auVar58._0_2_ = uVar20 >> 2;
            auVar58._2_2_ = (ushort)((uint)uVar21 >> 0x12);
            auVar58._4_2_ = (ushort)((uint6)uVar24 >> 0x22);
            auVar58._6_2_ = (ushort)((ulong)uVar25 >> 0x32);
            auVar58._8_2_ = (ushort)((unkuint10)auVar52._0_10_ >> 0x42);
            auVar58._10_2_ = auVar52._10_2_ >> 2;
            auVar58._12_2_ = auVar54._12_2_ >> 2;
            auVar58._14_2_ = auVar57._14_2_ >> 2;
            auVar58 = auVar58 & _UNK_00156620;
            cVar19 = auVar58[0] + auVar46[0];
            bVar32 = auVar58[1] + auVar46[1];
            uVar20 = CONCAT11(bVar32,cVar19);
            cVar33 = auVar58[2] + auVar46[2];
            bVar34 = auVar58[3] + auVar46[3];
            uVar21 = CONCAT13(bVar34,CONCAT12(cVar33,uVar20));
            cVar35 = auVar58[4] + auVar46[4];
            bVar38 = auVar58[5] + auVar46[5];
            uVar24 = CONCAT15(bVar38,CONCAT14(cVar35,uVar21));
            cVar39 = auVar58[6] + auVar46[6];
            bVar40 = auVar58[7] + auVar46[7];
            uVar25 = CONCAT17(bVar40,CONCAT16(cVar39,uVar24));
            cVar41 = auVar58[8] + auVar46[8];
            bVar42 = auVar58[9] + auVar46[9];
            auVar53._0_10_ = CONCAT19(bVar42,CONCAT18(cVar41,uVar25));
            auVar53[10] = auVar58[10] + auVar46[10];
            auVar53[0xb] = auVar58[0xb] + auVar46[0xb];
            auVar55[0xc] = auVar58[0xc] + auVar46[0xc];
            auVar55._0_12_ = auVar53;
            auVar55[0xd] = auVar58[0xd] + auVar46[0xd];
            auVar59[0xe] = auVar58[0xe] + auVar46[0xe];
            auVar59._0_14_ = auVar55;
            auVar59[0xf] = auVar58[0xf] + auVar46[0xf];
            auVar48[0] = (char)(uVar20 >> 4) + cVar19;
            auVar48[1] = (bVar32 >> 4) + bVar32;
            auVar48[2] = (char)(ushort)((uint)uVar21 >> 0x14) + cVar33;
            auVar48[3] = (bVar34 >> 4) + bVar34;
            auVar48[4] = (char)(ushort)((uint6)uVar24 >> 0x24) + cVar35;
            auVar48[5] = (bVar38 >> 4) + bVar38;
            auVar48[6] = (char)(ushort)((ulong)uVar25 >> 0x34) + cVar39;
            auVar48[7] = (bVar40 >> 4) + bVar40;
            auVar48[8] = (char)(ushort)((unkuint10)auVar53._0_10_ >> 0x44) + cVar41;
            auVar48[9] = (bVar42 >> 4) + bVar42;
            auVar48[10] = (char)(auVar53._10_2_ >> 4) + auVar53[10];
            auVar48[0xb] = (auVar53[0xb] >> 4) + auVar53[0xb];
            auVar48[0xc] = (char)(auVar55._12_2_ >> 4) + auVar55[0xc];
            auVar48[0xd] = (auVar55[0xd] >> 4) + auVar55[0xd];
            auVar48[0xe] = (char)(auVar59._14_2_ >> 4) + auVar59[0xe];
            auVar48[0xf] = (auVar59[0xf] >> 4) + auVar59[0xf];
            auVar46 = psadbw(auVar48 & _UNK_00155870,(undefined1  [16])0x0);
            iVar23 = iVar23 + auVar46._0_4_;
            iVar37 = iVar37 + auVar46._8_4_;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
code_r0x004fbcbe:
        if (uVar5 != 7) {
          auStack_48._8_8_ = auStack_48._8_8_ << 2 | (ulong)auStack_48._0_8_ >> 0x3e;
          if (uStack_84 < 0xc0) {
            auStack_48._0_8_ = auStack_48._0_8_ << 2 | (ulong)auStack_58._8_8_ >> 0x3e;
            if (uStack_84 < 0xa0) {
              auStack_58._8_8_ = auStack_58._8_8_ << 2 | (ulong)auStack_58._0_8_ >> 0x3e;
              if (uStack_84 < 0x80) {
                auStack_58._0_8_ = auStack_58._0_8_ << 2 | (ulong)auStack_68._8_8_ >> 0x3e;
                if (uStack_84 < 0x60) {
                  auStack_68._8_8_ = auStack_68._8_8_ << 2 | (ulong)auStack_68._0_8_ >> 0x3e;
                  if (uStack_84 < 0x40) {
                    auStack_68._0_8_ = auStack_68._0_8_ << 2 | (ulong)auStack_78._8_8_ >> 0x3e;
                    if (uStack_84 < 0x20) {
                      auStack_78._8_8_ = auStack_78._8_8_ << 2 | (ulong)auStack_78._0_8_ >> 0x3e;
                    }
                  }
                }
              }
            }
          }
          uVar16 = *(ulong *)(auStack_78 + uVar6 * 8);
          uVar15 = uVar13 & uVar16;
        }
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar17 = iVar17 + uVar2;
        uVar2 = iVar37 + iVar23 + uVar4;
        uVar10 = (ulong)(uStack_7c - 1);
        if (4 < uStack_7c) {
          uVar10 = 0;
        }
        *(ulong *)(auStack_78 + uVar6 * 8) = (uVar16 & uVar12) << 2 | uVar15 | uVar10 << bVar8;
        param_1 = pbStack_98 + uVar2;
        func_0x0099bd90(pbVar3 + (long)param_1,param_1,(iVar11 + 1) - uVar2);
        uVar2 = uStack_7c;
        param_2 = acStack_80;
        func_0x0099bda0(param_1,param_2,uStack_7c);
        uVar6 = (ulong)(iVar11 + uVar2);
        uVar2 = uStack_84 + 1;
        uVar16 = (ulong)uStack_88;
        in_stack_00000018 = pbStack_98;
      } while (in_stack_00000008 != in_stack_00000010);
    }
    in_stack_00000018 = in_stack_00000018 + uVar6;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return in_stack_00000018;
  }
  pbVar3 = (byte *)func_0x0099bd00();
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bVar8 = (byte)param_2;
  if (param_2 < (char *)0x80) {
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = bVar8;
    return pbVar3;
  }
  if (param_2 < (char *)0x800) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pbVar3 = (byte *)((ulong)param_2 >> 6 & 0x3ffffff | 0xc0);
    *param_1 = (byte)pbVar3;
    param_1[1] = bVar8 & 0x3f | 0x80;
    return pbVar3;
  }
  if ((byte *)((ulong)param_2 & 0xfffffffffffff800) != (byte *)0xd800) {
    if (param_2 < (char *)0x10000) {
      param_1[4] = 3;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = (byte)((ulong)param_2 >> 0xc) | 0xe0;
      pbVar3 = (byte *)((ulong)param_2 >> 6 & 0x3ffff3f | 0x80);
      param_1[1] = (byte)pbVar3;
      param_1[2] = bVar8 & 0x3f | 0x80;
      return pbVar3;
    }
    if (param_2 < &__DT_RELA[0x82b].r_info) {
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = (byte)((ulong)param_2 >> 0x12) | 0xf0;
      param_1[1] = (byte)((ulong)param_2 >> 0xc) & 0x3f | 0x80;
      pbVar3 = (byte *)((ulong)param_2 >> 6 & 0x3ffff3f | 0x80);
      param_1[2] = (byte)pbVar3;
      param_1[3] = bVar8 & 0x3f | 0x80;
      return pbVar3;
    }
  }
  return (byte *)((ulong)param_2 & 0xfffffffffffff800);
}


