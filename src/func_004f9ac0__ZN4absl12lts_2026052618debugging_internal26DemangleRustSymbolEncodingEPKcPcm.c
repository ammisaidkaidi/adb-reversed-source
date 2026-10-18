// Function: _ZN4absl12lts_2026052618debugging_internal26DemangleRustSymbolEncodingEPKcPcm
// Address: 004f9ac0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004fa0fb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004faa5b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fa982: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fa4e7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004faca2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004fa4ec) */
/* WARNING: Removing unreachable block (ram,0x004fa4f4) */
/* WARNING: Removing unreachable block (ram,0x004fa506) */
/* WARNING: Removing unreachable block (ram,0x004fa987) */
/* WARNING: Removing unreachable block (ram,0x004fa98f) */
/* WARNING: Removing unreachable block (ram,0x004faa60) */
/* WARNING: Removing unreachable block (ram,0x004faa68) */
/* WARNING: Removing unreachable block (ram,0x004faa7b) */
/* WARNING: Removing unreachable block (ram,0x004fa100) */
/* WARNING: Removing unreachable block (ram,0x004fa108) */
/* WARNING: Removing unreachable block (ram,0x004faca7) */

ulong _ZN4absl12lts_2026052618debugging_internal26DemangleRustSymbolEncodingEPKcPcm
                (char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined1 *puVar21;
  byte bVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  char *pcVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  char cVar31;
  char *unaff_R12;
  char *pcVar32;
  uint uVar33;
  char *pcVar34;
  long in_FS_OFFSET;
  bool bVar35;
  undefined *puStack_200;
  undefined1 auStack_1f8 [12];
  uint uStack_1ec;
  char acStack_1e8 [256];
  undefined4 uStack_e8;
  char acStack_e4 [64];
  uint auStack_a4 [17];
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  long lStack_38;
  
  puVar18 = &stack0xfffffffffffffff8;
  puVar21 = &stack0xfffffffffffffff8;
  ppuVar19 = (undefined **)auStack_1f8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar26 = acStack_1e8;
  pcVar23 = (char *)0x0;
  puStack_200 = &UNK_004f9b01;
  func_0x0099bdb0(pcVar26,0,400);
  pcStack_50 = param_1;
  pcStack_48 = param_2;
  pcStack_40 = param_2 + (long)param_3;
  if (param_3 != (char *)0x0) {
    *param_2 = '\0';
  }
  pcVar34 = param_2 + (long)param_3;
  uVar13 = uStack_58;
  if (*param_1 == '_') {
    pcVar34 = (char *)0x0;
    uVar16 = 0;
    pcVar10 = param_2;
    pcVar32 = param_3;
    if (param_1[1] == 'R') {
      uStack_e8 = 1;
      acStack_1e8[0] = '\0';
      pcVar32 = "5P/";
      pcVar10 = acStack_1e8;
      uVar25 = 2;
      while( true ) {
        param_1 = pcStack_50;
        unaff_R12 = "C_/";
        lVar11 = (long)(int)uVar25 + 1;
        uStack_58 = (uint)lVar11;
        pcVar14 = (char *)(ulong)((byte)pcStack_50[(int)uVar25] - 0x42);
        uVar16 = 0;
        pcVar23 = pcVar14;
        if (0x17 < (byte)pcStack_50[(int)uVar25] - 0x42) break;
        pcVar23 = &UNK_00204b50 + *(int *)(&UNK_00204b50 + (long)pcVar14 * 4);
        param_2 = pcVar10;
        param_3 = pcVar32;
        uVar13 = uStack_58;
        switch(pcVar14) {
        case (char *)0x0:
          puStack_200 = &UNK_004f9b8d;
          pcVar26 = pcVar10;
          cVar6 = func_0x004fb540();
          uVar13 = uStack_58;
          if (cVar6 != '\0') {
            if (uStack_5c != 0) {
code_r0x004f9b9f:
              lVar11 = (long)iStack_60;
              iStack_60 = iStack_60 + -1;
              uStack_58 = auStack_a4[lVar11];
code_r0x004fa110:
              unaff_R12 = "C_/";
              uVar16 = 0;
              if ((0x1fffe < (int)pcVar34) || (uVar25 = uStack_e8, (int)uStack_e8 < 1))
              goto code_r0x004fad35;
code_r0x004fa130:
              pcVar24 = pcStack_48;
              pcVar14 = pcStack_50;
              uVar5 = uStack_5c;
              uVar33 = (int)pcVar34 + 1;
              pcVar34 = (char *)(ulong)uVar33;
              uVar8 = uVar25 - 1;
              uStack_e8 = uVar8;
              uVar13 = uStack_58;
              switch(acStack_1e8[uVar8]) {
              case '\0':
                pcVar23 = (char *)(ulong)uStack_58;
                pcVar26 = (char *)(long)(int)uStack_58;
                if (0x19 < (byte)((pcStack_50[(long)pcVar26] & 0xdfU) + 0xbf))
                goto code_r0x004fad16;
                uStack_5c = uStack_5c + 1;
                param_2 = pcVar10;
                param_3 = pcVar32;
                if (uVar8 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uVar25;
                acStack_1e8[uVar8] = '\x01';
                goto code_r0x004fa8c4;
              case '\x01':
code_r0x004fad16:
                pcVar26 = (char *)(long)(int)uStack_58;
                uStack_58 = uStack_58 + 1;
                pcVar23 = (char *)(ulong)uStack_58;
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if (0x2e < (byte)pcStack_50[(long)pcVar26]) goto code_r0x004fad33;
                uVar16 = 0x401000000001 >> (pcStack_50[(long)pcVar26] & 0x3fU);
                goto code_r0x004fad35;
              case '\x02':
                if ((int)uStack_5c < 1) {
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 3) goto code_r0x004fad33;
                  pcStack_48[2] = '\0';
                  pcStack_48[0] = ':';
                  pcStack_48[1] = ':';
                  pcStack_48 = pcStack_48 + 2;
                }
                lVar11 = (long)(int)auStack_a4[0];
                auStack_a4[0] = auStack_a4[0] - 1;
                pcVar23 = (char *)(ulong)(uint)(int)acStack_e4[lVar11 + -1];
                pcVar26 = acStack_1e8;
                puStack_200 = &UNK_004fa494;
                cVar6 = func_0x004fad60();
                uVar16 = 0;
                if ((cVar6 != '\0') && (uVar33 != 0x1ffff)) goto code_r0x004fa79d;
                goto code_r0x004fad35;
              case '\x03':
                if ((int)uStack_5c < 1) {
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 3) goto code_r0x004fad33;
                  pcStack_48[2] = '\0';
                  pcStack_48[0] = ':';
                  pcStack_48[1] = ':';
                  pcStack_48 = pcStack_48 + 2;
                }
                pcVar26 = acStack_1e8;
                cVar6 = '\0';
                ppuVar19 = &puStack_200;
                puStack_200 = &UNK_004fa4ec;
                goto code_r0x004fad60;
              case '\x04':
                goto code_r0x004faa91;
              case '\x05':
              case '\b':
              case '\v':
                if (0 < (int)uStack_5c) break;
                param_2 = pcVar10;
                param_3 = pcVar32;
                if (1 < (ulong)((long)pcStack_40 - (long)pcStack_48)) {
                  pcStack_48[0] = '>';
                  pcStack_48[1] = '\0';
                  goto code_r0x004fa6ff;
                }
                goto code_r0x004fad33;
              case '\x06':
                param_2 = pcVar10;
                param_3 = pcVar32;
                if (uVar8 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uVar25;
                acStack_1e8[uVar8] = '\a';
                goto code_r0x004f9ce6;
              case '\a':
                pcVar23 = " as ";
                pcVar26 = acStack_1e8;
                puStack_200 = &UNK_004faac2;
                cVar6 = func_0x004faea0();
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if ((cVar6 == '\0') || (lVar11 = (long)(int)uStack_e8, lVar11 == 0x100))
                goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = '\b';
                goto code_r0x004fa8c4;
              case '\t':
              case '\x14':
                goto code_r0x004fa5c4;
              case '\n':
                pcVar23 = " as ";
                pcVar26 = acStack_1e8;
                puStack_200 = &UNK_004fab66;
                cVar6 = func_0x004faea0();
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if ((cVar6 == '\0') || (lVar11 = (long)(int)uStack_e8, lVar11 == 0x100))
                goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = '\v';
                goto code_r0x004fa8c4;
              case '\f':
                if ((int)uStack_5c < 1) {
                  pcVar23 = pcStack_40 + -(long)pcStack_48;
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  if (pcVar23 < (char *)0x3) goto code_r0x004fad33;
                  pcStack_48[2] = '\0';
                  pcStack_48[0] = ';';
                  pcStack_48[1] = ' ';
                  pcStack_48 = pcStack_48 + 2;
                }
                param_2 = pcVar10;
                param_3 = pcVar32;
                if (uVar8 != 0x100) {
                  uStack_e8 = uVar25;
                  acStack_1e8[uVar8] = '\r';
                  goto code_r0x004fa66d;
                }
                goto code_r0x004fad33;
              case '\r':
              case '\x0e':
                if ((int)uStack_5c < 1) {
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  if (1 < (ulong)((long)pcStack_40 - (long)pcStack_48)) {
                    pcStack_48[0] = ']';
                    pcStack_48[1] = '\0';
                    goto code_r0x004fa6ff;
                  }
                  goto code_r0x004fad33;
                }
                break;
              case '\x0f':
                if (pcStack_50[(int)uStack_58] != 'E') {
                  pcVar23 = ", ";
                  pcVar26 = acStack_1e8;
                  puStack_200 = &UNK_004fabee;
                  cVar6 = func_0x004faea0();
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if ((cVar6 == '\0') || (lVar11 = (long)(int)uStack_e8, lVar11 == 0x100))
                  goto code_r0x004fad33;
                  uStack_e8 = uStack_e8 + 1;
                  acStack_1e8[lVar11] = '\x10';
                  goto code_r0x004f9ce6;
                }
                uStack_58 = uStack_58 + 1;
                if ((int)uStack_5c < 1) {
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 3) goto code_r0x004fad33;
                  pcStack_48[2] = '\0';
                  pcStack_48[0] = ',';
                  pcStack_48[1] = ')';
                  pcStack_48 = pcStack_48 + 2;
                }
                break;
              case '\x10':
                if (pcStack_50[(int)uStack_58] == 'E') {
                  uStack_58 = uStack_58 + 1;
                  goto joined_r0x004fa29f;
                }
                pcVar23 = ", ";
                pcVar26 = acStack_1e8;
                puStack_200 = &UNK_004fabaa;
                cVar6 = func_0x004faea0();
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if ((cVar6 == '\0') || (lVar11 = (long)(int)uStack_e8, lVar11 == 0x100))
                goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = '\x11';
                goto code_r0x004f9ce6;
              case '\x11':
                pcVar26 = (char *)(long)(int)uStack_58;
                if (pcStack_50[(long)pcVar26] != 'E') {
                  if ((int)uStack_5c < 1) {
                    param_2 = pcVar10;
                    pcVar23 = pcStack_50;
                    param_3 = pcVar32;
                    if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 7) goto code_r0x004fad33;
                    builtin_strncpy(pcStack_48,", ...)",7);
                    pcStack_48 = pcStack_48 + 6;
                  }
                  uStack_5c = uStack_5c + 1;
                  if (pcStack_50[(long)pcVar26] != 'E') goto code_r0x004faa2d;
                  goto code_r0x004fa5bf;
                }
                uStack_58 = uStack_58 + 1;
                pcVar23 = pcStack_50;
joined_r0x004fa29f:
                if ((int)uStack_5c < 1) {
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
                  pcStack_48[0] = ')';
                  pcStack_48[1] = '\0';
code_r0x004fa6ff:
                  pcStack_48 = pcStack_48 + 1;
                }
                break;
              case '\x12':
                if (pcStack_50[(int)uStack_58] == 'E') {
code_r0x004fa5bf:
                  pcVar26 = (char *)(long)(int)uStack_58;
                  uStack_58 = uStack_58 + 1;
                  pcVar23 = pcStack_50;
                  goto code_r0x004fa5c4;
                }
code_r0x004faa2d:
                param_2 = pcVar10;
                pcVar23 = pcStack_50;
                pcVar26 = (char *)(long)(int)uStack_58;
                param_3 = pcVar32;
                if (uVar8 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uVar25;
                acStack_1e8[uVar8] = '\x12';
                goto code_r0x004f9ce6;
              case '\x13':
                goto code_r0x004facaf;
              case '\x15':
              case '\x16':
                if (pcStack_50[(int)uStack_58] == 'E') goto code_r0x004fa97a;
                pcVar23 = " + ";
                pcVar26 = acStack_1e8;
                puStack_200 = &UNK_004fa917;
                cVar6 = func_0x004faea0();
                uVar16 = 0;
                if ((cVar6 == '\0') || (cVar6 = '\x16', uVar16 = 0, uStack_e8 == 0x100))
                goto code_r0x004fad35;
code_r0x004fac33:
                unaff_R12 = "C_/";
                lVar11 = (long)(int)uStack_e8;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = cVar6;
                lVar11 = (long)(int)uStack_e8;
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if (lVar11 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = '\x17';
                goto code_r0x004fa8c4;
              case '\x17':
                if (pcStack_50[(int)uStack_58] == 'p') {
                  if ((int)uStack_5c < 1) {
                    param_2 = pcVar10;
                    pcVar23 = (char *)(ulong)uStack_5c;
                    pcVar26 = pcStack_48;
                    param_3 = pcVar32;
                    if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 3) goto code_r0x004fad33;
                    pcStack_48[2] = '\0';
                    pcStack_48[0] = '<';
                    pcStack_48[1] = '>';
                    pcVar26 = pcStack_48 + 2;
                    pcStack_48 = pcVar26;
                  }
                  pcVar23 = (char *)(ulong)(uStack_5c + 1);
                  uStack_5c = uStack_5c + 1;
                  cVar6 = pcStack_50[(int)uStack_58];
                  goto joined_r0x004fa2b8;
                }
                break;
              case '\x18':
                cVar6 = pcStack_50[(int)uStack_58];
joined_r0x004fa2b8:
                if (cVar6 == 'p') {
                  uStack_58 = uStack_58 + 1;
                  cVar6 = '\0';
                  uVar16 = 0;
                  ppuVar19 = &puStack_200;
                  puStack_200 = &UNK_004faa60;
                  puVar18 = &stack0xfffffffffffffff8;
                  pcVar26 = acStack_1e8;
                  goto code_r0x004fafb0;
                }
code_r0x004fa5c4:
                uStack_5c = uStack_5c - 1;
                break;
              case '\x19':
                uStack_5c = uStack_5c - 1;
                if (pcStack_50[(int)uStack_58] == 'n') {
                  uStack_58 = uStack_58 + 1;
                  if ((int)uVar5 < 2) {
                    param_2 = pcVar10;
                    pcVar23 = pcStack_50;
                    param_3 = pcVar32;
                    uVar13 = uStack_58;
                    if (1 < (long)pcStack_40 - (long)pcStack_48) {
                      pcStack_48 = pcStack_48 + 1;
                      *pcVar24 = '-';
                      *pcStack_48 = '\0';
                      goto code_r0x004fa1f4;
                    }
                    goto code_r0x004fad33;
                  }
                }
                else {
code_r0x004fa1f4:
                  if ((int)uStack_5c < 1) {
                    param_2 = pcVar10;
                    pcVar23 = pcStack_50;
                    param_3 = pcVar32;
                    uVar13 = uStack_58;
                    if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 3) goto code_r0x004fad33;
                    pcStack_48[2] = '\0';
                    pcStack_48[0] = '0';
                    pcStack_48[1] = 'x';
                    pcStack_48 = pcStack_48 + 2;
                  }
                }
                pcVar14 = pcStack_48;
                uVar16 = (ulong)(int)uStack_58;
                bVar7 = pcStack_50[uVar16];
                pcVar23 = (char *)(ulong)bVar7;
                if (bVar7 == 0x30) {
                  uVar13 = uStack_58 + 1;
                  if ((int)uStack_5c < 1) {
                    param_2 = pcVar10;
                    param_3 = pcVar32;
                    if ((long)pcStack_40 - (long)pcStack_48 < 2) goto code_r0x004fad33;
                    pcStack_48 = pcStack_48 + 1;
                    *pcVar14 = '0';
                    *pcStack_48 = '\0';
                  }
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  if (pcStack_50[(int)uVar13] != '_') goto code_r0x004fad33;
                  uStack_58 = uStack_58 + 2;
                }
                else {
                  bVar35 = 5 < (byte)(bVar7 - 0x61);
                  pcVar26 = (char *)(ulong)CONCAT31((int3)(bVar7 - 0x61 >> 8),bVar35);
                  uVar30 = uVar16;
                  if ((byte)(bVar7 - 0x30) < 10 || !bVar35) {
                    do {
                      pcVar14 = pcStack_48;
                      uStack_58 = (int)uVar16 + 1;
                      if ((int)uStack_5c < 1) {
                        param_2 = pcVar10;
                        param_3 = pcVar32;
                        uVar13 = uStack_58;
                        if ((long)pcStack_40 - (long)pcStack_48 < 2) goto code_r0x004fad33;
                        pcStack_48 = pcStack_48 + 1;
                        *pcVar14 = pcStack_50[uVar30];
                        *pcStack_48 = '\0';
                      }
                      uVar16 = (ulong)uStack_58;
                      bVar7 = pcStack_50[(int)uStack_58];
                      pcVar23 = (char *)(ulong)bVar7;
                      bVar35 = (byte)(bVar7 - 0x30) < 10;
                      pcVar26 = (char *)(ulong)CONCAT31((int3)(bVar7 - 0x30 >> 8),bVar35);
                      uVar30 = (long)(int)uStack_58;
                    } while ((byte)(bVar7 + 0x9f) < 6 || bVar35);
                  }
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if ((char)pcVar23 != '_') goto code_r0x004fad33;
                  uStack_58 = uStack_58 + 1;
                }
                break;
              case '\x1a':
                if ((int)uStack_5c < 1) {
                  pcVar26 = pcStack_40 + -(long)pcStack_48;
                  param_2 = pcVar10;
                  pcVar23 = pcStack_48;
                  param_3 = pcVar32;
                  if (pcVar26 < (char *)0x5) goto code_r0x004fad33;
                  builtin_strncpy(pcStack_48,"::<>",5);
                  pcStack_48 = pcStack_48 + 4;
                }
                uStack_5c = uStack_5c + 1;
                goto code_r0x004fa2f6;
              case '\x1b':
code_r0x004fa2f6:
                if (pcStack_50[(int)uStack_58] == 'E') {
                  uStack_58 = uStack_58 + 1;
                  pcVar23 = pcStack_50;
                  goto code_r0x004fa5c4;
                }
                param_2 = pcVar10;
                pcVar23 = pcStack_50;
                param_3 = pcVar32;
                if (uVar8 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uVar25;
                acStack_1e8[uVar8] = '\x1b';
                lVar11 = (long)(int)uStack_58;
                if (pcStack_50[lVar11] != 'K') {
                  if (pcStack_50[lVar11] != 'L') goto code_r0x004f9ce6;
                  bVar7 = pcStack_50[lVar11 + 1];
                  if (bVar7 == 0x5f) {
                    uStack_58 = uStack_58 + 2;
                    pcVar23 = (char *)0x5f;
                  }
                  else {
                    pcVar26 = (char *)(ulong)(bVar7 - 0x30);
                    if ((9 < (byte)(bVar7 - 0x30)) &&
                       (bVar7 = (bVar7 & 0xdf) + 0xbf, pcVar23 = (char *)(ulong)bVar7,
                       uVar13 = uStack_58 + 1, 0x19 < bVar7)) goto code_r0x004fad33;
                    pbVar15 = (byte *)(pcStack_50 + lVar11 + 2);
                    uStack_58 = uStack_58 + 2;
                    do {
                      do {
                        uVar13 = uStack_58;
                        bVar7 = *pbVar15;
                        pbVar15 = pbVar15 + 1;
                        uStack_58 = uVar13 + 1;
                      } while ((byte)(bVar7 - 0x30) < 10);
                      bVar22 = (bVar7 & 0xdf) + 0xbf;
                      pcVar23 = (char *)(ulong)bVar22;
                    } while (bVar22 < 0x1a);
                    if (bVar7 != 0x5f) goto code_r0x004fad33;
                  }
                  break;
                }
                uStack_58 = uStack_58 + 1;
                pcVar23 = pcVar14;
code_r0x004fa66d:
                uVar16 = (ulong)uStack_58;
                cVar6 = pcStack_50[(int)uStack_58];
                while (cVar6 == 'B') {
                  uStack_58 = (int)uVar16 + 1;
                  pcVar26 = acStack_1e8;
                  puStack_200 = &UNK_004fa68a;
                  cVar6 = func_0x004fb540();
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if (cVar6 == '\0') goto code_r0x004fad33;
                  if (uStack_5c != 0) goto code_r0x004fa70b;
                  lVar11 = (long)(int)uStack_e8;
                  if (lVar11 == 0x100) goto code_r0x004fad33;
                  uStack_e8 = uStack_e8 + 1;
                  acStack_1e8[lVar11] = '\x1e';
                  uVar16 = (ulong)(int)uStack_58;
                  cVar6 = pcStack_50[uVar16];
                }
                if (cVar6 == 'p') {
                  uStack_58 = uStack_58 + 1;
                  if (0 < (int)uStack_5c) break;
                  param_2 = pcVar10;
                  param_3 = pcVar32;
                  uVar13 = uStack_58;
                  if (1 < (ulong)((long)pcStack_40 - (long)pcStack_48)) {
                    pcStack_48[0] = '_';
                    pcStack_48[1] = '\0';
                    goto code_r0x004fa6ff;
                  }
                  goto code_r0x004fad33;
                }
                uStack_5c = uStack_5c + 1;
                lVar11 = (long)(int)uStack_e8;
                param_2 = pcVar10;
                param_3 = pcVar32;
                uVar13 = uStack_58;
                if (lVar11 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                acStack_1e8[lVar11] = '\x19';
                goto code_r0x004f9ce6;
              case '\x1c':
              case '\x1d':
                goto code_r0x004f9b9f;
              case '\x1e':
code_r0x004fa70b:
                lVar11 = (long)iStack_60;
                iStack_60 = iStack_60 + -1;
                uStack_58 = auStack_a4[lVar11];
              }
              param_2 = pcVar10;
              param_3 = pcVar32;
              uVar13 = uStack_58;
              if (uVar33 == 0x1ffff) goto code_r0x004fad33;
code_r0x004fa79d:
              param_2 = pcVar10;
              param_3 = pcVar32;
              uVar25 = uStack_e8;
              uVar13 = uStack_58;
              if ((int)uStack_e8 < 1) goto code_r0x004fad33;
              goto code_r0x004fa130;
            }
            lVar11 = (long)(int)uStack_e8;
            if (lVar11 != 0x100) {
              uStack_e8 = uStack_e8 + 1;
              acStack_1e8[lVar11] = '\x1c';
              break;
            }
          }
          goto code_r0x004fad33;
        case (char *)0x1:
          cVar6 = '\0';
          ppuVar19 = &puStack_200;
          puStack_200 = &UNK_004fa100;
          pcVar26 = pcVar10;
          goto code_r0x004fad60;
        default:
          goto code_r0x004fad35;
        case (char *)0x7:
          lVar11 = (long)(int)uStack_e8;
          if (lVar11 == 0x100) goto code_r0x004fad33;
          uStack_e8 = uStack_e8 + 1;
          acStack_1e8[lVar11] = '\x1a';
          break;
        case (char *)0xb:
          if ((int)uStack_5c < 1) {
            if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
            pcStack_48[0] = '<';
            pcStack_48[1] = '\0';
            pcStack_48 = pcStack_48 + 1;
          }
          cVar6 = '\x04';
          if (uStack_e8 != 0x100) goto code_r0x004f9c2d;
          goto code_r0x004fad33;
        case (char *)0xc:
          uStack_58 = uVar25 + 2;
          uVar13 = uStack_58;
          if ((byte)(pcStack_50[lVar11] + 0xbfU) < 0x1a) {
            lVar9 = (long)(int)auStack_a4[0];
            if (lVar9 == 0x40) goto code_r0x004fad33;
            auStack_a4[0] = auStack_a4[0] + 1;
            acStack_e4[lVar9] = pcStack_50[lVar11];
            lVar11 = (long)(int)uStack_e8;
            uVar13 = uStack_58;
            if (lVar11 == 0x100) goto code_r0x004fad33;
            uStack_e8 = uStack_e8 + 1;
            acStack_1e8[lVar11] = '\x02';
          }
          else {
            if ((0x19 < (byte)(pcStack_50[lVar11] + 0x9fU)) ||
               (lVar11 = (long)(int)uStack_e8, lVar11 == 0x100)) goto code_r0x004fad33;
            uStack_e8 = uStack_e8 + 1;
            acStack_1e8[lVar11] = '\x03';
          }
          break;
        case (char *)0x16:
          if ((int)uStack_5c < 1) {
            if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
            pcStack_48[0] = '<';
            pcStack_48[1] = '\0';
            pcStack_48 = pcStack_48 + 1;
          }
          cVar6 = '\x06';
          if (uStack_e8 == 0x100) goto code_r0x004fad33;
code_r0x004f9c2d:
          lVar11 = (long)(int)uStack_e8;
          uStack_e8 = uStack_e8 + 1;
          acStack_1e8[lVar11] = cVar6;
          uStack_5c = uStack_5c + 1;
          lVar11 = (long)(int)uStack_58;
          if (pcStack_50[lVar11] == 's') {
            bVar7 = pcStack_50[lVar11 + 1];
            if (bVar7 == 0x5f) {
              uStack_58 = uStack_58 + 2;
              pcVar23 = (char *)0x5f;
            }
            else {
              pcVar26 = (char *)(ulong)(bVar7 - 0x30);
              if ((9 < (byte)(bVar7 - 0x30)) &&
                 (bVar7 = (bVar7 & 0xdf) + 0xbf, pcVar23 = (char *)(ulong)bVar7,
                 uVar13 = uStack_58 + 1, 0x19 < bVar7)) goto code_r0x004fad33;
              pbVar15 = (byte *)(pcStack_50 + lVar11 + 2);
              uStack_58 = uStack_58 + 2;
              do {
                do {
                  uVar13 = uStack_58;
                  bVar7 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                  uStack_58 = uVar13 + 1;
                } while ((byte)(bVar7 - 0x30) < 10);
                bVar22 = (bVar7 & 0xdf) + 0xbf;
                pcVar23 = (char *)(ulong)bVar22;
              } while (bVar22 < 0x1a);
              if (bVar7 != 0x5f) goto code_r0x004fad33;
            }
          }
          lVar11 = (long)(int)uStack_e8;
          uVar13 = uStack_58;
          if (lVar11 == 0x100) goto code_r0x004fad33;
          uStack_e8 = uStack_e8 + 1;
          acStack_1e8[lVar11] = '\t';
          break;
        case (char *)0x17:
          if ((int)uStack_5c < 1) {
            if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
            pcStack_48[0] = '<';
            pcStack_48[1] = '\0';
            pcStack_48 = pcStack_48 + 1;
          }
          lVar11 = (long)(int)uStack_e8;
          if (lVar11 != 0x100) {
            uStack_e8 = uStack_e8 + 1;
            acStack_1e8[lVar11] = '\n';
            goto code_r0x004f9ce6;
          }
          goto code_r0x004fad33;
        }
code_r0x004fa8c4:
        uVar25 = uStack_58;
      }
    }
  }
  else {
code_r0x004fad33:
    uStack_58 = uVar13;
    uVar16 = 0;
    pcVar10 = param_2;
    pcVar32 = param_3;
  }
code_r0x004fad35:
  cVar6 = (char)pcVar23;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar16 & 0xffffffffffffff01;
  }
  puStack_200 = &UNK_004fad5d;
  func_0x0099bd00();
code_r0x004fad60:
  lVar11 = *(long *)(pcVar26 + 0x198);
  iVar17 = *(int *)(pcVar26 + 400);
  lVar9 = (long)iVar17;
  uVar16 = 0;
  if (*(char *)(lVar11 + lVar9) == 's') {
    *(int *)(pcVar26 + 400) = (int)(lVar9 + 1);
    bVar7 = *(byte *)(lVar11 + 1 + lVar9);
    if (bVar7 == 0x5f) {
      *(int *)(pcVar26 + 400) = iVar17 + 2;
      uVar16 = 1;
      puVar18 = &stack0xfffffffffffffff8;
    }
    else {
      if ((9 < (byte)(bVar7 - 0x30)) && (0x19 < (byte)((bVar7 & 0xdf) + 0xbf))) {
        return 0;
      }
      *(undefined1 **)((long)ppuVar19 + -8) = &stack0xfffffffffffffff8;
      pbVar15 = (byte *)(lVar9 + 1 + lVar11 + 1);
      iVar17 = iVar17 + 2;
      bVar35 = false;
      iVar27 = 0;
      do {
        *(int *)(pcVar26 + 400) = iVar17;
        if (iVar27 < 0x2108421) {
          bVar7 = pbVar15[-1];
          if ((byte)(bVar7 - 0x30) < 10) {
            iVar29 = bVar7 - 0x30;
          }
          else if ((byte)(bVar7 + 0x9f) < 0x1a) {
            iVar29 = bVar7 - 0x57;
          }
          else {
            iVar29 = (char)bVar7 + -0x1d;
          }
          iVar27 = iVar27 * 0x3e + iVar29;
        }
        else {
          bVar35 = true;
        }
        bVar7 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        iVar17 = iVar17 + 1;
      } while (((byte)(bVar7 - 0x30) < 10) || ((byte)((bVar7 & 0xdf) + 0xbf) < 0x1a));
      puVar18 = *(undefined1 **)((long)ppuVar19 + -8);
      if (bVar7 != 0x5f) {
        return 0;
      }
      *(int *)(pcVar26 + 400) = iVar17;
      uVar16 = 0xffffffff;
      if (!bVar35) {
        uVar16 = 0xffffffff;
        if (-2 < iVar27) {
          uVar16 = (ulong)(iVar27 + 2);
        }
      }
    }
  }
code_r0x004fafb0:
  puVar21 = (undefined1 *)((long)ppuVar19 + -8);
  *(undefined1 **)((long)ppuVar19 + -8) = puVar18;
  *(char **)((long)ppuVar19 + -0x10) = pcVar34;
  *(char **)((long)ppuVar19 + -0x18) = pcVar32;
  *(char **)((long)ppuVar19 + -0x20) = param_1;
  *(char **)((long)ppuVar19 + -0x28) = unaff_R12;
  *(char **)((long)ppuVar19 + -0x30) = pcVar10;
  ppuVar20 = (undefined **)((long)ppuVar19 + -0x88);
  *(undefined8 *)((long)ppuVar19 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(pcVar26 + 0x198);
  uVar28 = (ulong)*(uint *)(pcVar26 + 400);
  uVar30 = (ulong)(int)*(uint *)(pcVar26 + 400);
  cVar1 = *(char *)(lVar11 + uVar30);
  cVar31 = cVar1;
  if (cVar1 == 'u') {
    uVar28 = uVar30 + 1;
    *(int *)(pcVar26 + 400) = (int)uVar28;
    pcVar23 = (char *)(lVar11 + 1 + uVar30);
    uVar30 = uVar28;
    cVar31 = *pcVar23;
  }
  uVar12 = 0;
  if (9 < (byte)(cVar31 - 0x30U)) goto code_r0x004fb470;
  iVar27 = (int)uVar28 + 1;
  *(int *)(pcVar26 + 400) = iVar27;
  iVar17 = *(char *)(lVar11 + uVar30) + -0x30;
  pcVar23 = pcVar26;
  if (iVar17 == 0) {
    iVar17 = 0;
  }
  else if ((byte)(*(char *)(lVar11 + iVar27) - 0x30U) < 10) {
    pcVar34 = (char *)(iVar27 + lVar11);
    do {
      pcVar10 = pcVar34 + 1;
      if (0xccccccb < iVar17) goto code_r0x004fb46e;
      iVar27 = iVar27 + 1;
      *(int *)(pcVar26 + 400) = iVar27;
      iVar17 = (int)*pcVar34 + iVar17 * 10 + -0x30;
      pcVar34 = pcVar10;
    } while ((byte)(*pcVar10 - 0x30U) < 10);
  }
  if (*(char *)(lVar11 + iVar27) == '_') {
    iVar27 = iVar27 + 1;
    *(int *)(pcVar26 + 400) = iVar27;
  }
  if (cVar1 == 'u') {
    *(long *)((long)ppuVar19 + -0x68) = lVar11 + iVar27;
    *(long *)((long)ppuVar19 + -0x60) = (long)iVar17 + lVar11 + iVar27;
    uVar4 = *(undefined8 *)(pcVar26 + 0x1a8);
    *(undefined8 *)((long)ppuVar19 + -0x58) = *(undefined8 *)(pcVar26 + 0x1a0);
    *(undefined8 *)((long)ppuVar19 + -0x50) = uVar4;
    *(undefined4 *)((long)ppuVar19 + -0x78) = *(undefined4 *)((long)ppuVar19 + -0x58);
    *(undefined4 *)((long)ppuVar19 + -0x74) = *(undefined4 *)((long)ppuVar19 + -0x54);
    *(undefined4 *)((long)ppuVar19 + -0x70) = *(undefined4 *)((long)ppuVar19 + -0x50);
    *(undefined4 *)((long)ppuVar19 + -0x6c) = *(undefined4 *)((long)ppuVar19 + -0x4c);
    *(undefined4 *)((long)ppuVar19 + -0x88) = *(undefined4 *)((long)ppuVar19 + -0x68);
    *(undefined4 *)((long)ppuVar19 + -0x84) = *(undefined4 *)((long)ppuVar19 + -100);
    *(undefined4 *)((long)ppuVar19 + -0x80) = *(undefined4 *)((long)ppuVar19 + -0x60);
    *(undefined4 *)((long)ppuVar19 + -0x7c) = *(undefined4 *)((long)ppuVar19 + -0x5c);
    *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb0e2;
    lVar11 = _ZN4absl12lts_2026052618debugging_internal18DecodeRustPunycodeENS1_25DecodeRustPunycodeOptionsE
                       ();
    *(long *)(pcVar26 + 0x1a0) = lVar11;
    if (lVar11 != 0) {
      *(int *)(pcVar26 + 400) = *(int *)(pcVar26 + 400) + iVar17;
      goto code_r0x004fb102;
    }
    goto code_r0x004fb46e;
  }
code_r0x004fb102:
  if (cVar6 != '\0') {
    iVar27 = *(int *)(pcVar26 + 0x18c);
    if (cVar6 == 'S') {
      if (iVar27 < 1) {
        puVar3 = *(undefined4 **)(pcVar26 + 0x1a0);
        pcVar23 = pcVar26;
        if ((ulong)(*(long *)(pcVar26 + 0x1a8) - (long)puVar3) < 6) goto code_r0x004fb46e;
        *(undefined2 *)(puVar3 + 1) = 0x6d;
        *puVar3 = 0x6968737b;
        *(long *)(pcVar26 + 0x1a0) = *(long *)(pcVar26 + 0x1a0) + 5;
      }
code_r0x004fb196:
      if ((0 < iVar17) && (*(int *)(pcVar26 + 0x18c) < 1)) {
        pcVar23 = pcVar26;
        if ((ulong)(*(long *)(pcVar26 + 0x1a8) - (long)*(undefined2 **)(pcVar26 + 0x1a0)) < 2)
        goto code_r0x004fb46e;
        **(undefined2 **)(pcVar26 + 0x1a0) = 0x3a;
        *(long *)(pcVar26 + 0x1a0) = *(long *)(pcVar26 + 0x1a0) + 1;
      }
      goto code_r0x004fb1ca;
    }
    if (cVar6 == 'C') {
      if (iVar27 < 1) {
        puVar2 = *(undefined8 **)(pcVar26 + 0x1a0);
        pcVar23 = pcVar26;
        if ((ulong)(*(long *)(pcVar26 + 0x1a8) - (long)puVar2) < 9) goto code_r0x004fb46e;
        *puVar2 = 0x657275736f6c637b;
        *(undefined1 *)(puVar2 + 1) = 0;
        *(long *)(pcVar26 + 0x1a0) = *(long *)(pcVar26 + 0x1a0) + 8;
      }
      goto code_r0x004fb196;
    }
    if (0 < iVar27) goto code_r0x004fb196;
    puVar18 = *(undefined1 **)(pcVar26 + 0x1a0);
    pcVar23 = pcVar26;
    if (1 < *(long *)(pcVar26 + 0x1a8) - (long)puVar18) {
      *(undefined1 **)(pcVar26 + 0x1a0) = puVar18 + 1;
      *puVar18 = 0x7b;
      **(undefined1 **)(pcVar26 + 0x1a0) = 0;
      if (*(int *)(pcVar26 + 0x18c) < 1) {
        pcVar34 = *(char **)(pcVar26 + 0x1a0);
        if (*(long *)(pcVar26 + 0x1a8) - (long)pcVar34 < 2) goto code_r0x004fb46e;
        *(char **)(pcVar26 + 0x1a0) = pcVar34 + 1;
        *pcVar34 = cVar6;
        **(undefined1 **)(pcVar26 + 0x1a0) = 0;
      }
      goto code_r0x004fb196;
    }
    goto code_r0x004fb46e;
  }
code_r0x004fb1ca:
  if ((cVar1 != 'u') && (0 < iVar17)) {
    do {
      while( true ) {
        iVar27 = *(int *)(pcVar26 + 400);
        *(int *)(pcVar26 + 400) = iVar27 + 1;
        bVar7 = *(byte *)(*(long *)(pcVar26 + 0x198) + (long)iVar27);
        if ((0x19 < (byte)((bVar7 & 0xdf) + 0xbf)) &&
           (((-1 < (char)bVar7 && (bVar7 != 0x5f)) &&
            (pcVar23 = pcVar26, (byte)(bVar7 - 0x3a) < 0xf6)))) goto code_r0x004fb46e;
        if (*(int *)(pcVar26 + 0x18c) < 1) break;
        iVar17 = iVar17 + -1;
        if (iVar17 == 0) goto code_r0x004fb266;
      }
      pbVar15 = *(byte **)(pcVar26 + 0x1a0);
      pcVar23 = pcVar26;
      if (*(long *)(pcVar26 + 0x1a8) - (long)pbVar15 < 2) goto code_r0x004fb46e;
      *(byte **)(pcVar26 + 0x1a0) = pbVar15 + 1;
      *pbVar15 = bVar7;
      **(undefined1 **)(pcVar26 + 0x1a0) = 0;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
code_r0x004fb266:
  uVar12 = 1;
  if (cVar6 == '\0') goto code_r0x004fb470;
  iVar17 = (int)uVar16;
  if (*(int *)(pcVar26 + 0x18c) < 1) {
    puVar18 = *(undefined1 **)(pcVar26 + 0x1a0);
    pcVar23 = pcVar26;
    if (*(long *)(pcVar26 + 0x1a8) - (long)puVar18 < 2) goto code_r0x004fb46e;
    *(undefined1 **)(pcVar26 + 0x1a0) = puVar18 + 1;
    *puVar18 = 0x23;
    **(undefined1 **)(pcVar26 + 0x1a0) = 0;
    if (iVar17 < 0) goto code_r0x004fb367;
code_r0x004fb286:
    if (iVar17 == 0) {
      if (0 < *(int *)(pcVar26 + 0x18c)) goto code_r0x004fb470;
      puVar18 = *(undefined1 **)(pcVar26 + 0x1a0);
      pcVar23 = pcVar26;
      if (*(long *)(pcVar26 + 0x1a8) - (long)puVar18 < 2) goto code_r0x004fb46e;
      *(undefined1 **)(pcVar26 + 0x1a0) = puVar18 + 1;
      *puVar18 = 0x30;
      goto code_r0x004fb444;
    }
    *(undefined4 *)((long)ppuVar19 + -0x40) = 0;
    *(undefined8 *)((long)ppuVar19 + -0x48) = 0;
    puVar18 = (undefined1 *)((long)ppuVar19 + -0x3d);
    do {
      uVar13 = (uint)uVar16;
      puVar18[-1] = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      puVar18 = puVar18 + -1;
      uVar16 = uVar16 / 10;
    } while (9 < uVar13);
    if (0 < *(int *)(pcVar26 + 0x18c)) goto code_r0x004fb44e;
    *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb2f2;
    lVar11 = func_0x0099bcf0(puVar18);
    pcVar23 = *(char **)(pcVar26 + 0x1a0);
    if (lVar11 + 1U <= (ulong)(*(long *)(pcVar26 + 0x1a8) - (long)pcVar23)) {
      *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb31b;
      func_0x0099bda0(pcVar23,puVar18);
      *(long *)(pcVar26 + 0x1a0) = *(long *)(pcVar26 + 0x1a0) + lVar11;
      goto code_r0x004fb44e;
    }
code_r0x004fb46e:
    uVar12 = 0;
    pcVar26 = pcVar23;
  }
  else {
    if (-1 < iVar17) goto code_r0x004fb286;
code_r0x004fb367:
    if (0 < *(int *)(pcVar26 + 0x18c)) goto code_r0x004fb470;
    puVar18 = *(undefined1 **)(pcVar26 + 0x1a0);
    pcVar23 = pcVar26;
    if (*(long *)(pcVar26 + 0x1a8) - (long)puVar18 < 2) goto code_r0x004fb46e;
    *(undefined1 **)(pcVar26 + 0x1a0) = puVar18 + 1;
    *puVar18 = 0x3f;
code_r0x004fb444:
    **(undefined1 **)(pcVar26 + 0x1a0) = 0;
code_r0x004fb44e:
    uVar12 = 1;
    if (*(int *)(pcVar26 + 0x18c) < 1) {
      puVar18 = *(undefined1 **)(pcVar26 + 0x1a0);
      pcVar23 = pcVar26;
      if (*(long *)(pcVar26 + 0x1a8) - (long)puVar18 < 2) goto code_r0x004fb46e;
      *(undefined1 **)(pcVar26 + 0x1a0) = puVar18 + 1;
      *puVar18 = 0x7d;
      **(undefined1 **)(pcVar26 + 0x1a0) = 0;
    }
  }
code_r0x004fb470:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar19 + -0x38)) {
    return uVar12;
  }
  *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb4ad;
  func_0x0099bd00();
  pcVar10 = pcVar26;
code_r0x004fb4b0:
  lVar11 = *(long *)(pcVar10 + 0x198);
  iVar17 = *(int *)(pcVar10 + 400);
  lVar9 = (long)iVar17;
  if (*(char *)(lVar11 + lVar9) == 'L') {
    *(int *)(pcVar10 + 400) = (int)(lVar9 + 1);
    bVar7 = *(byte *)(lVar11 + 1 + lVar9);
    if (bVar7 == 0x5f) {
      iVar17 = iVar17 + 2;
code_r0x004fb4dc:
      *(int *)(pcVar10 + 400) = iVar17;
      return 1;
    }
    if (((byte)(bVar7 - 0x30) < 10) || ((byte)((bVar7 & 0xdf) + 0xbf) < 0x1a)) {
      *(undefined1 **)((long)ppuVar20 + -8) = puVar21;
      pbVar15 = (byte *)(lVar11 + lVar9 + 1 + 1);
      iVar17 = iVar17 + 2;
      do {
        do {
          *(int *)(pcVar10 + 400) = iVar17;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          iVar17 = iVar17 + 1;
        } while ((byte)(bVar7 - 0x30) < 10);
      } while ((byte)((bVar7 & 0xdf) + 0xbf) < 0x1a);
      if (bVar7 == 0x5f) goto code_r0x004fb4dc;
    }
  }
  return 0;
code_r0x004faa91:
  param_2 = pcVar10;
  param_3 = pcVar32;
  if (uVar8 == 0x100) goto code_r0x004fad33;
  uStack_e8 = uVar25;
  acStack_1e8[uVar8] = '\x05';
code_r0x004f9ce6:
  unaff_R12 = "C_/";
  uVar16 = (ulong)uStack_58;
  lVar11 = (long)(int)uStack_58;
  pcVar24 = (char *)(ulong)(byte)pcStack_50[lVar11];
  uVar25 = (byte)pcStack_50[lVar11] - 0x61;
  pcVar26 = (char *)(ulong)uVar25;
  uStack_1ec = (uint)pcVar34;
  pcVar14 = pcStack_50;
  uVar13 = uStack_58;
  if (0x19 < (byte)uVar25) {
    do {
      pcVar23 = "iQ/";
      iVar17 = (int)uVar16;
      uVar25 = uStack_e8;
      switch((int)pcVar24) {
      case 0x41:
        uStack_58 = iVar17 + 1;
        if ((int)uStack_5c < 1) {
          param_2 = pcVar10;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
          pcStack_48[0] = '[';
          pcStack_48[1] = '\0';
          pcStack_48 = pcStack_48 + 1;
        }
        cVar6 = '\f';
        goto joined_r0x004f9f2d;
      case 0x42:
        uStack_58 = iVar17 + 1;
        puStack_200 = &UNK_004f9e11;
        pcVar26 = pcVar10;
        cVar6 = func_0x004fb540();
        param_2 = pcVar10;
        param_3 = pcVar32;
        uVar13 = uStack_58;
        if (cVar6 != '\0') {
          if (uStack_5c == 0) {
            cVar6 = '\x1d';
            uVar25 = uStack_e8;
            goto joined_r0x004f9f2d;
          }
          goto code_r0x004f9b9f;
        }
        goto code_r0x004fad33;
      default:
        goto code_r0x004fa8c4;
      case 0x44:
        uStack_58 = iVar17 + 1;
        pcVar23 = "dyn ";
        puStack_200 = &UNK_004fa950;
        pcVar26 = pcVar10;
        cVar6 = func_0x004faea0();
        param_2 = pcVar10;
        param_3 = pcVar32;
        uVar13 = uStack_58;
        if (cVar6 == '\0') goto code_r0x004fad33;
        puStack_200 = &UNK_004fa960;
        pcVar26 = pcVar10;
        cVar6 = func_0x004faf10();
        uVar13 = uStack_58;
        if (cVar6 == '\0') goto code_r0x004fad33;
        if (pcStack_50[(int)uStack_58] == 'E') goto code_r0x004fa97a;
        cVar6 = '\x15';
        if (uStack_e8 != 0x100) goto code_r0x004fac33;
        goto code_r0x004fad33;
      case 0x46:
        goto code_r0x004fa994;
      case 0x4f:
        uStack_58 = iVar17 + 1;
        uVar16 = (ulong)uStack_58;
        if ((int)uStack_5c < 1) {
          pcVar23 = pcStack_40 + -(long)pcStack_48;
          param_2 = pcVar10;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if (pcVar23 < (char *)0x6) goto code_r0x004fad33;
          builtin_strncpy(pcStack_48,"*mut ",6);
          pcStack_48 = pcStack_48 + 5;
        }
        break;
      case 0x50:
        uStack_58 = iVar17 + 1;
        uVar16 = (ulong)uStack_58;
        if ((int)uStack_5c < 1) {
          pcVar23 = pcStack_40 + -(long)pcStack_48;
          param_2 = pcVar10;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if (pcVar23 < (char *)0x8) goto code_r0x004fad33;
          builtin_strncpy(pcStack_48,"*const ",8);
          pcStack_48 = pcStack_48 + 7;
        }
        break;
      case 0x51:
        lVar11 = (long)iVar17;
        pcVar23 = (char *)(lVar11 + 1);
        uStack_58 = (uint)pcVar23;
        if ((int)uStack_5c < 1) {
          param_2 = pcVar10;
          pcVar26 = pcStack_48;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 6) goto code_r0x004fad33;
          builtin_strncpy(pcStack_48,"&mut ",6);
          pcStack_48 = pcStack_48 + 5;
          cVar6 = pcVar14[(long)pcVar23];
        }
        else {
          cVar6 = pcVar14[(long)pcVar23];
        }
        if (cVar6 != 'L') goto code_r0x004fa08e;
        pcVar23 = (char *)(lVar11 + 2);
        bVar7 = pcVar14[lVar11 + 2];
        if (bVar7 != 0x5f) {
          if (((byte)(bVar7 - 0x30) < 10) ||
             (param_2 = pcVar10, pcVar26 = (char *)(ulong)(bVar7 - 0x30), param_3 = pcVar32,
             uVar13 = (uint)pcVar23, (byte)((bVar7 & 0xdf) + 0xbf) < 0x1a)) {
            pbVar15 = (byte *)(pcVar14 + (long)pcVar23 + 1);
            uVar16 = (ulong)(iVar17 + 3);
            do {
              do {
                uStack_58 = (uint)uVar16;
                bVar7 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                uVar16 = (ulong)(uStack_58 + 1);
              } while ((byte)(bVar7 - 0x30) < 10);
              bVar22 = (bVar7 & 0xdf) + 0xbf;
            } while (bVar22 < 0x1a);
            goto code_r0x004fa0e4;
          }
          goto code_r0x004fad33;
        }
code_r0x004fa089:
        uVar16 = (ulong)(iVar17 + 3);
code_r0x004fa0ee:
        uStack_58 = (uint)uVar16;
        break;
      case 0x52:
        lVar11 = (long)iVar17;
        pcVar23 = (char *)(lVar11 + 1);
        uStack_58 = (uint)pcVar23;
        if ((int)uStack_5c < 1) {
          param_2 = pcVar10;
          pcVar26 = pcStack_48;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
          pcStack_48[0] = '&';
          pcStack_48[1] = '\0';
          pcStack_48 = pcStack_48 + 1;
          cVar6 = pcVar14[(long)pcVar23];
        }
        else {
          cVar6 = pcVar14[(long)pcVar23];
        }
        if (cVar6 == 'L') {
          pcVar23 = (char *)(lVar11 + 2);
          bVar7 = pcVar14[lVar11 + 2];
          if (bVar7 == 0x5f) goto code_r0x004fa089;
          if (((byte)(bVar7 - 0x30) < 10) ||
             (param_2 = pcVar10, pcVar26 = (char *)(ulong)(bVar7 - 0x30), param_3 = pcVar32,
             uVar13 = (uint)pcVar23, (byte)((bVar7 & 0xdf) + 0xbf) < 0x1a)) {
            pbVar15 = (byte *)(pcVar14 + (long)pcVar23 + 1);
            uVar16 = (ulong)(iVar17 + 3);
            do {
              do {
                uStack_58 = (uint)uVar16;
                bVar7 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                uVar16 = (ulong)(uStack_58 + 1);
              } while ((byte)(bVar7 - 0x30) < 10);
              bVar22 = (bVar7 & 0xdf) + 0xbf;
            } while (bVar22 < 0x1a);
code_r0x004fa0e4:
            pcVar23 = (char *)(ulong)bVar7;
            param_2 = pcVar10;
            pcVar26 = (char *)(ulong)bVar22;
            param_3 = pcVar32;
            uVar13 = uStack_58;
            if (bVar7 == 0x5f) goto code_r0x004fa0ee;
          }
          goto code_r0x004fad33;
        }
code_r0x004fa08e:
        uVar16 = (ulong)pcVar23 & 0xffffffff;
        break;
      case 0x53:
        uStack_58 = iVar17 + 1;
        if ((int)uStack_5c < 1) {
          param_2 = pcVar10;
          param_3 = pcVar32;
          uVar13 = uStack_58;
          if ((ulong)((long)pcStack_40 - (long)pcStack_48) < 2) goto code_r0x004fad33;
          pcStack_48[0] = '[';
          pcStack_48[1] = '\0';
          pcStack_48 = pcStack_48 + 1;
        }
        cVar6 = '\x0e';
joined_r0x004f9f2d:
        param_2 = pcVar10;
        param_3 = pcVar32;
        uStack_e8 = uVar25;
        uVar13 = uStack_58;
        if (uVar25 == 0x100) goto code_r0x004fad33;
code_r0x004f9db7:
        uStack_e8 = uVar25 + 1;
        acStack_1e8[(int)uVar25] = cVar6;
        uVar16 = (ulong)uStack_58;
        pcVar14 = pcStack_50;
        break;
      case 0x54:
        uStack_58 = (uint)((long)iVar17 + 1);
        uVar13 = uStack_58;
        if ((int)uStack_5c < 1) {
          pcVar26 = pcStack_40 + -(long)pcStack_48;
          param_2 = pcVar10;
          pcVar23 = pcStack_48;
          param_3 = pcVar32;
          if (pcVar26 < (char *)0x2) goto code_r0x004fad33;
          pcStack_48[0] = '(';
          pcStack_48[1] = '\0';
          pcVar23 = pcStack_48 + 1;
          pcStack_48 = pcVar23;
        }
        if (pcVar14[(long)iVar17 + 1] != 'E') {
          cVar6 = '\x0f';
          param_2 = pcVar10;
          param_3 = pcVar32;
          if (uStack_e8 != 0x100) goto code_r0x004f9db7;
          goto code_r0x004fad33;
        }
        uStack_58 = iVar17 + 2;
        pcVar23 = ")";
        puStack_200 = &UNK_004faa20;
        pcVar26 = pcVar10;
        cVar6 = func_0x004faea0();
        param_2 = pcVar10;
        param_3 = pcVar32;
        uVar13 = uStack_58;
        if (cVar6 == '\0') goto code_r0x004fad33;
        goto code_r0x004fa110;
      }
      uVar13 = (uint)uVar16;
      lVar11 = (long)(int)uVar13;
      pcVar24 = (char *)(ulong)(byte)pcVar14[lVar11];
      uVar25 = (byte)pcVar14[lVar11] - 0x61;
      pcVar26 = (char *)(ulong)uVar25;
      if ((byte)uVar25 < 0x1a) break;
    } while( true );
  }
  uStack_58 = uVar13 + 1;
  bVar7 = pcVar14[lVar11] + 0x9f;
  param_2 = pcVar10;
  pcVar23 = pcVar24;
  param_3 = pcVar32;
  uVar13 = uStack_58;
  if ((0x19 < bVar7) || ((0x3bcfbbfU >> (bVar7 & 0x1f) & 1) == 0)) goto code_r0x004fad33;
  if ((int)uStack_5c < 1) {
    param_3 = *(char **)(&UNK_009a0a60 + (ulong)bVar7 * 8);
    puStack_200 = &UNK_004f9d4f;
    pcVar26 = param_3;
    param_1 = (char *)func_0x0099bcf0();
    pcVar34 = pcStack_48;
    param_2 = "5P/";
    pcVar23 = pcVar24;
    unaff_R12 = pcVar10;
    uVar13 = uStack_58;
    if (pcStack_40 + -(long)pcStack_48 < param_1 + 1) goto code_r0x004fad33;
    puStack_200 = &UNK_004f9d75;
    pcVar26 = pcStack_48;
    func_0x0099bda0();
    param_1 = param_1 + (long)pcVar34;
    pcStack_48 = param_1;
    pcVar34 = (char *)(ulong)uStack_1ec;
    pcVar23 = param_3;
  }
  goto code_r0x004fa110;
code_r0x004fa994:
  uStack_58 = iVar17 + 1;
  pcVar23 = "fn...";
  puStack_200 = &UNK_004fa9a8;
  pcVar26 = pcVar10;
  cVar6 = func_0x004faea0();
  param_2 = pcVar10;
  param_3 = pcVar32;
  uVar13 = uStack_58;
  if (cVar6 == '\0') goto code_r0x004fad33;
  uStack_5c = uStack_5c + 1;
  puStack_200 = &UNK_004fa9bb;
  pcVar26 = pcVar10;
  cVar6 = func_0x004faf10();
  uVar13 = uStack_58;
  if (cVar6 == '\0') goto code_r0x004fad33;
  pcVar23 = (char *)(long)(int)uStack_58;
  cVar6 = pcStack_50[(long)pcVar23];
  if (cVar6 == 'U') {
    uStack_58 = uStack_58 + 1;
    cVar6 = (pcStack_50 + 1)[(long)pcVar23];
  }
  uVar13 = uStack_58;
  if (cVar6 == 'K') {
    lVar11 = (long)(int)uStack_58;
    pcVar23 = (char *)(lVar11 + 1);
    uStack_58 = (uint)pcVar23;
    if (pcStack_50[lVar11 + 1] != 'C') {
      cVar6 = '\0';
      uVar16 = 0;
      ppuVar19 = &puStack_200;
      puStack_200 = &UNK_004faca7;
      puVar18 = &stack0xfffffffffffffff8;
      pcVar26 = pcVar10;
      goto code_r0x004fafb0;
    }
    uStack_58 = uVar13 + 2;
  }
code_r0x004facaf:
  unaff_R12 = "C_/";
  if (pcStack_50[(int)uStack_58] == 'E') {
    uStack_58 = uStack_58 + 1;
    lVar11 = (long)(int)uStack_e8;
    param_2 = pcVar10;
    param_3 = pcVar32;
    uVar13 = uStack_58;
    if (lVar11 == 0x100) goto code_r0x004fad33;
    uStack_e8 = uStack_e8 + 1;
    acStack_1e8[lVar11] = '\x14';
  }
  else {
    lVar11 = (long)(int)uStack_e8;
    param_2 = pcVar10;
    param_3 = pcVar32;
    uVar13 = uStack_58;
    if (lVar11 == 0x100) goto code_r0x004fad33;
    uStack_e8 = uStack_e8 + 1;
    acStack_1e8[lVar11] = '\x13';
  }
  goto code_r0x004f9ce6;
code_r0x004fa97a:
  uStack_58 = uStack_58 + 1;
  ppuVar20 = &puStack_200;
  puStack_200 = &UNK_004fa987;
  goto code_r0x004fb4b0;
}


