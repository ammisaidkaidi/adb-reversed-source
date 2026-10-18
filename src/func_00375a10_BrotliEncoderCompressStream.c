// Function: BrotliEncoderCompressStream
// Address: 00375a10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliEncoderCompressStream
               (int *param_1,int param_2,ulong *param_3,long *param_4,ulong *param_5,long *param_6,
               long *param_7)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  int *piVar8;
  byte bVar9;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_58;
  ulong uStack_40;
  long lStack_38;
  byte bVar10;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = param_1 + 0x15e;
  piVar20 = param_1;
  if (param_1[0x6cf] == 0) {
    param_1[0x192] = -0x2000000;
    param_1[0x6cc] = -1;
    uVar18 = param_1[1];
    uVar13 = 0;
    if (0 < (int)uVar18) {
      uVar13 = uVar18;
    }
    uVar15 = 0xb;
    if ((int)uVar13 < 0xb) {
      uVar15 = uVar13;
    }
    param_1[1] = uVar15;
    if ((int)uVar18 < 3) {
      param_1[9] = 0;
    }
    uVar13 = param_1[2];
    uVar15 = 10;
    if ((int)uVar13 < 10) {
code_r0x00375ab3:
      uVar13 = uVar15;
      param_1[2] = uVar13;
    }
    else {
      uVar15 = 0x1e;
      if (param_1[9] == 0) {
        uVar15 = 0x18;
      }
      if (uVar15 < uVar13) goto code_r0x00375ab3;
    }
    uVar15 = uVar13;
    if (((int)uVar18 < 2) || (uVar15 = 0xe, uVar18 < 4)) {
      param_1[3] = uVar15;
code_r0x00375ad2:
      uVar18 = 0;
      uVar13 = 0;
    }
    else {
      uVar15 = param_1[3];
      if (uVar15 == 0) {
        uVar15 = 0x10;
        if (((8 < uVar18) && (0x10 < uVar13)) && (uVar15 = 0x12, uVar13 < 0x12)) {
          uVar15 = uVar13;
        }
      }
      else {
        uVar18 = 0x10;
        if (0x10 < (int)uVar15) {
          uVar18 = uVar15;
        }
        uVar15 = 0x18;
        if ((int)uVar18 < 0x18) {
          uVar15 = uVar18;
        }
      }
      param_1[3] = uVar15;
      if (*param_1 == 2) {
        uVar13 = 0xc;
        uVar18 = 1;
      }
      else {
        uVar18 = param_1[0xe];
        uVar13 = param_1[0xf];
      }
      if ((0x78 < uVar13 || 3 < uVar18) ||
         ((uVar13 >> ((byte)uVar18 & 0x1f) & 0xf) << ((byte)uVar18 & 0x1f) != uVar13))
      goto code_r0x00375ad2;
    }
    func_0x003bd1a0(param_1 + 0xe,uVar18,uVar13,param_1[9]);
    uVar17 = *(ulong *)(param_1 + 4);
    if (uVar17 != 0) {
      *(undefined1 *)((long)param_1 + 0x64b) = 2;
      param_1[0x17e] = -0x10;
      param_1[0x17f] = -0x10;
      param_1[0x180] = -0x10;
      param_1[0x181] = -0x10;
      param_1[0x18e] = param_1[0x17e];
      param_1[399] = param_1[0x17f];
      param_1[400] = param_1[0x180];
      param_1[0x191] = param_1[0x181];
    }
    uVar18 = param_1[2];
    bVar9 = (byte)param_1[3];
    bVar10 = bVar9;
    if (param_1[3] < (int)uVar18) {
      bVar10 = (byte)uVar18;
    }
    iVar22 = 1 << (bVar10 + 1 & 0x1f);
    uVar13 = param_1[1];
    iVar23 = 1 << (bVar9 & 0x1f);
    uVar15 = 0x12;
    if (0x12 < (int)uVar18) {
      uVar15 = uVar18;
    }
    if (1 < uVar13) {
      uVar15 = uVar18;
    }
    param_1[0x166] = iVar22;
    param_1[0x167] = iVar22 + -1;
    param_1[0x168] = iVar23;
    param_1[0x169] = iVar22 + iVar23;
    if (uVar17 == 0) {
      if (param_1[9] == 0) {
        if (uVar15 == 0x10) {
          uVar2 = 1;
          uVar12 = 0;
        }
        else if (uVar15 == 0x11) {
          uVar2 = 7;
          uVar12 = 1;
        }
        else if ((int)uVar15 < 0x12) {
          uVar12 = (short)uVar15 * 0x10 - 0x7f;
          uVar2 = 7;
        }
        else {
          uVar12 = (short)uVar15 * 2 - 0x21;
          uVar2 = 4;
        }
      }
      else {
        uVar12 = (ushort)((uVar15 & 0x3f) << 8) | 0x11;
        uVar2 = 0xe;
      }
      *(ushort *)(param_1 + 0x192) = uVar12;
      *(undefined1 *)((long)param_1 + 0x64a) = uVar2;
      if (uVar13 != 1) goto code_r0x00375b91;
code_r0x00375cac:
      uVar5 = func_0x003bd100(piVar8,0x1dc8);
      *(undefined8 *)(param_1 + 0x6ba) = uVar5;
      piVar20 = piVar8;
    }
    else {
      uVar3 = (1L << ((byte)uVar15 & 0x3f)) - 0x10;
      if (uVar17 < uVar3) {
        uVar3 = uVar17;
      }
      *(ulong *)(param_1 + 4) = uVar3;
      if (uVar13 == 1) goto code_r0x00375cac;
code_r0x00375b91:
      piVar20 = (int *)(ulong)uVar18;
      if (uVar13 == 0) {
        lVar4 = func_0x003bd100(piVar8,0x1fd0);
        *(long *)(param_1 + 0x6b8) = lVar4;
        *(undefined8 *)(lVar4 + 0x300) = 0x707060605040400;
        *(undefined8 *)(lVar4 + 0x308) = 0x808080808070707;
        *(undefined8 *)(lVar4 + 0x310) = 0x404040404000000;
        *(undefined8 *)(lVar4 + 0x318) = 0x707060606060505;
        *(undefined8 *)(lVar4 + 800) = 0xa0a0a0a0a0a0707;
        *(undefined8 *)(lVar4 + 0x328) = 0x606050505040400;
        *(undefined8 *)(lVar4 + 0x330) = 0xa0a0a0a09080807;
        *(undefined8 *)(lVar4 + 0x338) = 0xa0a0a0a0a0a0a0a;
        *(undefined8 *)(lVar4 + 0x340) = 5;
        *(undefined8 *)(lVar4 + 0x348) = 0;
        *(undefined8 *)(lVar4 + 0x350) = 0x505060606060606;
        *(undefined8 *)(lVar4 + 0x358) = 0x404040405050505;
        *(undefined8 *)(lVar4 + 0x360) = 0x505050505040404;
        *(undefined8 *)(lVar4 + 0x368) = 0xa08070707060605;
        *(undefined4 *)(lVar4 + 0x370) = 0xc0c0c0c;
        *(undefined4 *)(lVar4 + 0x374) = 0xc0c0c0c;
        *(undefined4 *)(lVar4 + 0x378) = 0xc0c0c0c;
        *(undefined4 *)(lVar4 + 0x37c) = 0;
        piVar20 = (int *)(lVar4 + 0x380);
        func_0x0099bda0(piVar20,&UNK_001b0b00,0x100);
        *(undefined8 *)(lVar4 + 0x680) = 0x9eeadee7bfd577ff;
        *(undefined8 *)(lVar4 + 0x688) = 0x58bc5770c6de5d51;
        *(undefined8 *)(lVar4 + 0x690) = 0x8ccbd558d8d85858;
        *(undefined8 *)(lVar4 + 0x698) = 0x60c1831f87c3e0ea;
        *(undefined8 *)(lVar4 + 0x6a0) = 0x60c18306aab2671c;
        *(undefined8 *)(lVar4 + 0x6a8) = 0x945488cea1cc1830;
        *(undefined4 *)(lVar4 + 0x6a9) = 0xcea1cc18;
        *(undefined4 *)(lVar4 + 0x6ad) = 0x46945488;
        *(undefined4 *)(lVar4 + 0x6b1) = 0x4ed0b0e1;
        *(undefined4 *)(lVar4 + 0x6b5) = 0x4f7b2;
        *(undefined8 *)(lVar4 + 0x880) = 0x1c0;
      }
    }
    param_1[0x6cf] = 1;
  }
  if ((ulong)(uint)param_1[0x6cc] == 0xffffffff) {
    if (param_2 != 3) {
      bVar26 = false;
      if ((param_1[0x6cd] - 3U < 2) || ((param_1[0x6cd] != 0 && (*param_3 != 0))))
      goto code_r0x00376bba;
      if (1 < (uint)param_1[1]) {
code_r0x003761b0:
        while( true ) {
          uVar17 = 1L << (*(byte *)(param_1 + 3) & 0x3f);
          uVar3 = uVar17 - (*(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c));
          if (uVar17 < (ulong)(*(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c))) {
            uVar3 = 0;
          }
          uVar19 = (ulong)*(char *)((long)param_1 + 0x64b);
          uVar17 = uVar19;
          if (uVar3 < uVar19) {
            uVar17 = uVar3;
          }
          if ((long)uVar19 < 0) {
            uVar17 = uVar3;
          }
          if ((uVar17 == 0) || (uVar3 = *param_3, uVar3 == 0)) break;
          if (uVar3 <= uVar17) {
            uVar17 = uVar3;
          }
          lVar4 = *param_4;
          uVar18 = param_1[0x16b];
          uVar13 = (uint)uVar17;
          if ((uVar18 == 0) && (uVar17 < (uint)param_1[0x168])) {
            param_1[0x16b] = uVar13;
            lVar6 = func_0x003bd100(param_1 + 0x15e,(ulong)(uVar13 + 2) + 7);
            if (*(long *)(param_1 + 0x16c) != 0) {
              func_0x0099bda0(lVar6,*(long *)(param_1 + 0x16c),(ulong)(param_1[0x16a] + 2) + 7);
              func_0x003bd120(param_1 + 0x15e,*(undefined8 *)(param_1 + 0x16c));
            }
            *(long *)(param_1 + 0x16c) = lVar6;
            param_1[0x16a] = uVar13;
            *(long *)(param_1 + 0x16e) = lVar6 + 2;
            *(undefined1 *)(lVar6 + 1) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + -2) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 1 + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 2 + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 3 + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 4 + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 5 + (ulong)(uint)param_1[0x16a]) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + 6 + (ulong)(uint)param_1[0x16a]) = 0;
            func_0x0099bda0(*(undefined8 *)(param_1 + 0x16e),lVar4,uVar17);
            uVar18 = param_1[0x16b];
          }
          else {
            uVar15 = param_1[0x169];
            if ((uint)param_1[0x16a] < uVar15) {
              lVar6 = func_0x003bd100(param_1 + 0x15e,(ulong)(uVar15 + 2) + 7);
              if (*(long *)(param_1 + 0x16c) != 0) {
                func_0x0099bda0(lVar6,*(long *)(param_1 + 0x16c),(ulong)(param_1[0x16a] + 2) + 7);
                func_0x003bd120(param_1 + 0x15e,*(undefined8 *)(param_1 + 0x16c));
              }
              *(long *)(param_1 + 0x16c) = lVar6;
              param_1[0x16a] = uVar15;
              *(long *)(param_1 + 0x16e) = lVar6 + 2;
              *(undefined1 *)(lVar6 + 1) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + -2) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 1 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 2 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 3 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 4 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 5 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + 6 + (ulong)(uint)param_1[0x16a]) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(param_1[0x166] - 2)) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(param_1[0x166] - 1)) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(uint)param_1[0x166]) = 0xf1;
              uVar18 = param_1[0x16b];
            }
            uVar18 = uVar18 & param_1[0x167];
            uVar19 = (ulong)uVar18;
            uVar3 = (ulong)(uint)param_1[0x166];
            if (uVar18 < (uint)param_1[0x168]) {
              uVar16 = (ulong)(param_1[0x168] - uVar18);
              if (uVar17 < uVar16) {
                uVar16 = uVar17;
              }
              func_0x0099bda0(uVar3 + *(long *)(param_1 + 0x16e) + uVar19,lVar4,uVar16);
              uVar3 = (ulong)(uint)param_1[0x166];
            }
            lVar6 = *(long *)(param_1 + 0x16e) + uVar19;
            uVar16 = uVar17;
            if (uVar3 < uVar19 + uVar17) {
              uVar3 = (uint)param_1[0x169] - uVar19;
              if (uVar17 < (uint)param_1[0x169] - uVar19) {
                uVar3 = uVar17;
              }
              func_0x0099bda0(lVar6,lVar4,uVar3);
              lVar6 = *(long *)(param_1 + 0x16e);
              lVar4 = lVar4 + ((uint)param_1[0x166] - uVar19);
              uVar16 = uVar17 - ((uint)param_1[0x166] - uVar19);
            }
            func_0x0099bda0(lVar6,lVar4,uVar16);
            uVar18 = param_1[0x16b];
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + -2) =
                 *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(param_1[0x166] - 2));
            *(undefined1 *)(*(long *)(param_1 + 0x16e) + -1) =
                 *(undefined1 *)(*(long *)(param_1 + 0x16e) + (ulong)(param_1[0x166] - 1));
            uVar18 = (uVar13 & 0x7fffffff) + (param_1[0x16b] & 0x7fffffffU) | uVar18 & 0x80000000;
            param_1[0x16b] = uVar18;
          }
          *(ulong *)(param_1 + 0x164) = *(long *)(param_1 + 0x164) + uVar17;
          if (uVar18 <= (uint)param_1[0x167]) {
            lVar4 = *(long *)(param_1 + 0x16e);
            *(undefined4 *)(lVar4 + 3 + (ulong)uVar18) = 0;
            *(undefined4 *)(lVar4 + (ulong)uVar18) = 0;
          }
          *param_4 = *param_4 + uVar17;
          *param_3 = *param_3 - uVar17;
          *(ulong *)(param_1 + 0x6c0) = *(long *)(param_1 + 0x6c0) + uVar17;
          if ('\0' < *(char *)((long)param_1 + 0x64b)) {
            *(char *)((long)param_1 + 0x64b) = *(char *)((long)param_1 + 0x64b) - (char)uVar17;
          }
        }
        piVar20 = param_1;
        iVar22 = func_0x00376c30(param_1,param_5,param_6,param_7);
        if (iVar22 != 0) {
          if (*(char *)((long)param_1 + 0x64b) == -1) {
            if (param_1[0x6cd] != 0) {
              if ((param_1[0x6cd] != 1) || (*(long *)(param_1 + 0x6c4) != 0)) goto code_r0x003761b0;
              param_1[0x6cd] = 0;
              param_1[0x6c2] = 0;
              param_1[0x6c3] = 0;
            }
            *(undefined1 *)((long)param_1 + 0x64b) = 0xfe;
          }
          goto code_r0x003761b0;
        }
        bVar26 = true;
        if (*(long *)(param_1 + 0x6c4) != 0) goto code_r0x00376bba;
        if (param_1[0x6cd] != 0) {
          if (param_1[0x6cd] != 1) goto code_r0x00376bba;
          goto code_r0x00376ba5;
        }
        if ((param_2 == 0) && (uVar17 != 0)) goto code_r0x00376bba;
        bVar25 = *param_3 == 0;
        bVar11 = param_2 == 2 && bVar25;
        bVar26 = param_2 == 1 && bVar25;
        if ((param_2 != 2 || !bVar25) && (*(char *)((long)param_1 + 0x64b) == '\0')) {
          *(undefined1 *)((long)param_1 + 0x64b) = 0xff;
          bVar26 = true;
        }
        if (*(long *)(param_1 + 6) == 0) {
          uVar17 = (*(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c)) + *param_3;
          if (0x3fffffff < uVar17) {
            uVar17 = 0x40000000;
          }
          if (0x3fffffff < (*(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c) | *param_3)) {
            uVar17 = 0x40000000;
          }
          *(ulong *)(param_1 + 6) = uVar17;
        }
        piVar20 = param_1;
        iVar22 = func_0x00376d50(param_1,bVar11,bVar26,param_1 + 0x6c4,param_1 + 0x6c2);
        if (iVar22 != 0) {
          if ((bVar26 | bVar11) == 1) {
            param_1[0x6cd] = bVar11 + 1;
          }
          goto code_r0x003761b0;
        }
        bVar26 = false;
        goto code_r0x00376bba;
      }
      uVar19 = 1L << (*(byte *)(param_1 + 2) & 0x3f);
      uVar17 = *param_3;
      uVar3 = uVar19;
      if (uVar17 < uVar19) {
        uVar3 = uVar17;
      }
      uVar16 = 0x20000;
      if (uVar3 < 0x20000) {
        uVar16 = uVar3;
      }
      if (param_1[1] == 1) {
        lStack_58 = *(long *)(param_1 + 0x6bc);
        if ((lStack_58 == 0) && (0x1ffff < uVar3)) {
          uVar5 = func_0x003bd100(param_1 + 0x15e,0x80000);
          *(undefined8 *)(param_1 + 0x6bc) = uVar5;
          uStack_80 = func_0x003bd100(param_1 + 0x15e,0x20000);
          *(undefined8 *)(param_1 + 0x6be) = uStack_80;
          lStack_58 = *(long *)(param_1 + 0x6bc);
          if (lStack_58 == 0) {
code_r0x003767e5:
            lStack_70 = func_0x003bd100(param_1 + 0x15e,uVar16 * 4);
            uStack_80 = func_0x003bd100(param_1 + 0x15e,uVar16);
            uStack_78 = uStack_80;
            lStack_58 = lStack_70;
          }
          else {
            uStack_78 = 0;
            lStack_70 = 0;
          }
        }
        else if (lStack_58 == 0) {
          if (uVar17 != 0) goto code_r0x003767e5;
          uStack_80 = 0;
          uStack_78 = 0;
          lStack_58 = 0;
          lStack_70 = 0;
        }
        else {
          uStack_80 = *(undefined8 *)(param_1 + 0x6be);
          uStack_78 = 0;
          lStack_70 = 0;
        }
      }
      else {
        uStack_80 = 0;
        uStack_78 = 0;
        lStack_58 = 0;
        lStack_70 = 0;
      }
code_r0x00376869:
      do {
        iVar22 = func_0x00376c30(param_1,param_5,param_6,param_7);
      } while (iVar22 != 0);
      if (((*(long *)(param_1 + 0x6c4) == 0) && (param_1[0x6cd] == 0)) &&
         (uVar17 = *param_3, param_2 != 0 || uVar17 != 0)) {
        uVar3 = uVar17;
        if (uVar17 > uVar19) {
          uVar3 = uVar19;
        }
        uStack_40 = (ulong)*(byte *)((long)param_1 + 0x64a);
        iVar22 = 1;
        if (param_2 != 1 || uVar17 != 0) goto code_r0x003768f3;
        goto code_r0x00376850;
      }
      piVar20 = param_1 + 0x15e;
      func_0x003bd120(piVar20,lStack_70);
      func_0x003bd120(piVar20,uStack_78);
      bVar26 = true;
      if ((param_1[0x6cd] == 1) && (*(long *)(param_1 + 0x6c4) == 0)) {
code_r0x00376ba5:
        param_1[0x6cd] = 0;
        param_1[0x6c2] = 0;
        param_1[0x6c3] = 0;
        bVar26 = true;
      }
      goto code_r0x00376bba;
    }
  }
  else {
    bVar26 = false;
    if ((param_2 != 3) || (*param_3 != (ulong)(uint)param_1[0x6cc])) goto code_r0x00376bba;
  }
  if (*(long *)(param_1 + 6) == 0) {
    uVar17 = 0x40000000;
    if ((ulong)(*(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c)) < 0x40000000) {
      uVar17 = *(long *)(param_1 + 0x164) - *(long *)(param_1 + 0x17c);
    }
    *(ulong *)(param_1 + 6) = uVar17;
  }
  bVar26 = false;
  if (*param_3 < 0x1000001) {
    if (param_1[0x6cd] == 0) {
      param_1[0x6cc] = (int)*param_3;
      param_1[0x6cd] = 3;
    }
    else {
      bVar26 = false;
      if (1 < param_1[0x6cd] - 3U) goto code_r0x00376bba;
    }
code_r0x00375edc:
    while( true ) {
      while( true ) {
        do {
          piVar20 = param_1;
          iVar22 = func_0x00376c30(param_1,param_5,param_6,param_7);
        } while (iVar22 != 0);
        bVar26 = true;
        if (*(long *)(param_1 + 0x6c4) != 0) goto code_r0x00376bba;
        if (*(long *)(param_1 + 0x164) == *(long *)(param_1 + 0x17a)) break;
        piVar20 = param_1;
        iVar22 = func_0x00376d50(param_1,0,1,param_1 + 0x6c4,param_1 + 0x6c2);
        bVar26 = false;
        if (iVar22 == 0) goto code_r0x00376bba;
      }
      if (param_1[0x6cd] != 3) break;
      *(int **)(param_1 + 0x6c2) = param_1 + 0x6c8;
      uVar18 = param_1[0x6cc];
      uVar19 = (ulong)uVar18;
      bVar10 = *(byte *)((long)param_1 + 0x64a);
      uVar16 = (ulong)bVar10;
      *(short *)(param_1 + 0x6c8) = (short)param_1[0x192];
      *(undefined2 *)(param_1 + 0x192) = 0;
      *(undefined1 *)((long)param_1 + 0x64a) = 0;
      *(ulong *)((long)param_1 + (ulong)(bVar10 >> 3) + 0x1b20) =
           (ulong)*(byte *)((long)param_1 + (ulong)(bVar10 >> 3) + 0x1b20);
      uVar3 = uVar16 + 1 >> 3;
      uVar21 = (ulong)(bVar10 + 3 >> 3);
      uVar17 = uVar16 + 4;
      *(ulong *)((long)param_1 + uVar3 + 0x1b20) =
           3L << ((byte)(uVar16 + 1) & 7) | (ulong)*(byte *)((long)param_1 + uVar3 + 0x1b20);
      *(ulong *)((long)param_1 + uVar21 + 0x1b20) =
           (ulong)*(byte *)((long)param_1 + uVar21 + 0x1b20);
      if (uVar19 == 1) {
code_r0x00376018:
        uVar3 = uVar16 + (ulong)uVar18 * 8;
        *(ulong *)((long)param_1 + (uVar17 >> 3) + 0x1b20) =
             (ulong)uVar18 << ((byte)uVar17 & 7) |
             (ulong)*(byte *)((long)param_1 + (uVar17 >> 3) + 0x1b20);
        uVar17 = uVar16 + 6 >> 3;
        *(ulong *)((long)param_1 + uVar17 + 0x1b20) =
             uVar19 - 1 << ((byte)(uVar16 + 6) & 7) |
             (ulong)*(byte *)((long)param_1 + uVar17 + 0x1b20);
      }
      else {
        if (uVar18 != 0) {
          iVar22 = 0x1f;
          if (uVar18 - 1 != 0) {
            for (; uVar18 - 1 >> iVar22 == 0; iVar22 = iVar22 + -1) {
            }
          }
          uVar18 = iVar22 + 8U >> 3;
          goto code_r0x00376018;
        }
        *(ulong *)((long)param_1 + (uVar17 >> 3) + 0x1b20) =
             (ulong)*(byte *)((long)param_1 + (uVar17 >> 3) + 0x1b20);
        uVar3 = uVar16;
      }
      *(ulong *)(param_1 + 0x6c4) = uVar3 + 0xd >> 3;
      param_1[0x6cd] = 4;
    }
    uVar17 = (ulong)(uint)param_1[0x6cc];
    if (uVar17 != 0) {
      uVar3 = *param_5;
      if (uVar3 == 0) {
        if (0xf < (uint)param_1[0x6cc]) {
          uVar17 = 0x10;
        }
        *(int **)(param_1 + 0x6c2) = param_1 + 0x6c8;
        func_0x0099bda0(param_1 + 0x6c8,*param_4,uVar17);
        *param_4 = *param_4 + uVar17;
        *param_3 = *param_3 - uVar17;
        *(ulong *)(param_1 + 0x6c0) = *(long *)(param_1 + 0x6c0) + uVar17;
        param_1[0x6cc] = param_1[0x6cc] - (int)uVar17;
        *(ulong *)(param_1 + 0x6c4) = uVar17;
      }
      else {
        if (uVar17 < uVar3) {
          uVar3 = uVar17;
        }
        func_0x0099bda0(*param_6,*param_4,uVar3);
        *param_4 = *param_4 + uVar3;
        *param_3 = *param_3 - uVar3;
        *(ulong *)(param_1 + 0x6c0) = *(long *)(param_1 + 0x6c0) + uVar3;
        param_1[0x6cc] = param_1[0x6cc] - (int)uVar3;
        *param_6 = *param_6 + uVar3;
        *param_5 = *param_5 - uVar3;
      }
      goto code_r0x00375edc;
    }
    param_1[0x6cc] = -1;
    param_1[0x6cd] = 0;
  }
code_r0x00376bba:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    bVar26 = false;
    if (piVar20[0x6cd] == 2) {
      bVar26 = *(long *)(piVar20 + 0x6c4) == 0;
    }
    return bVar26;
  }
  return bVar26;
code_r0x003768f3:
  uVar16 = uVar3 * 2 + 0x1f7;
  uVar21 = *param_5;
  if (uVar21 < uVar16) {
    puVar7 = *(undefined1 **)(param_1 + 0x196);
    if (*(ulong *)(param_1 + 0x194) < uVar16) {
      func_0x003bd120(param_1 + 0x15e);
      param_1[0x196] = 0;
      param_1[0x197] = 0;
      puVar7 = (undefined1 *)func_0x003bd100(param_1 + 0x15e,uVar3 * 2 + 0x1f7);
      *(undefined1 **)(param_1 + 0x196) = puVar7;
      *(ulong *)(param_1 + 0x194) = uVar3 * 2 + 0x1f7;
    }
  }
  else {
    puVar7 = (undefined1 *)*param_6;
  }
  bVar26 = param_2 == 2 && uVar17 <= uVar19;
  *puVar7 = (char)param_1[0x192];
  puVar7[1] = *(undefined1 *)((long)param_1 + 0x649);
  uVar14 = 0x20000;
  if (param_1[1] == 0) {
    uVar14 = 0x8000;
  }
  if (uVar3 <= uVar14) {
    uVar14 = uVar3;
  }
  uVar1 = 0x100;
  do {
    uVar24 = uVar1;
    uVar1 = uVar24 * 2;
  } while (uVar24 < uVar14);
  uVar14 = uVar24 * 2;
  if ((uVar24 & 0xaaa00) != 0) {
    uVar14 = uVar24;
  }
  if (param_1[1] != 0) {
    uVar14 = uVar24;
  }
  piVar8 = param_1 + 0x2b4;
  if (0x400 < uVar14) {
    if (*(ulong *)(param_1 + 0x6b6) < uVar14) {
      *(ulong *)(param_1 + 0x6b6) = uVar14;
      func_0x003bd120(param_1 + 0x15e,*(undefined8 *)(param_1 + 0x6b4));
      param_1[0x6b4] = 0;
      param_1[0x6b5] = 0;
      piVar8 = (int *)func_0x003bd100(param_1 + 0x15e,uVar14 * 4);
      *(int **)(param_1 + 0x6b4) = piVar8;
    }
    else {
      piVar8 = *(int **)(param_1 + 0x6b4);
    }
  }
  func_0x0099bdb0(piVar8,0,uVar14 * 4);
  if (param_1[1] == 0) {
    func_0x00386ab0(*(undefined8 *)(param_1 + 0x6b8),*param_4,uVar3,bVar26,piVar8,uVar14,&uStack_40,
                    puVar7);
  }
  else {
    func_0x0037bd70(*(undefined8 *)(param_1 + 0x6ba),*param_4,uVar3,bVar26,lStack_58,uStack_80,
                    piVar8,uVar14,&uStack_40,puVar7);
  }
  if (uVar17 != 0) {
    *param_4 = *param_4 + uVar3;
    *param_3 = *param_3 - uVar3;
    *(ulong *)(param_1 + 0x6c0) = *(long *)(param_1 + 0x6c0) + uVar3;
  }
  uVar3 = uStack_40 >> 3;
  if (uVar21 < uVar16) {
    *(undefined1 **)(param_1 + 0x6c2) = puVar7;
    *(ulong *)(param_1 + 0x6c4) = uVar3;
  }
  else {
    *param_6 = *param_6 + uVar3;
    *param_5 = *param_5 - uVar3;
    lVar4 = *(long *)(param_1 + 0x6c6);
    *(ulong *)(param_1 + 0x6c6) = lVar4 + uVar3;
    if (param_7 != (long *)0x0) {
      *param_7 = lVar4 + uVar3;
    }
  }
  *(ushort *)(param_1 + 0x192) = (ushort)(byte)puVar7[uVar3];
  *(byte *)((long)param_1 + 0x64a) = (byte)uStack_40 & 7;
  iVar22 = (param_2 == 2) + 1;
  if (param_2 - 1U < 2 && uVar17 <= uVar19) {
code_r0x00376850:
    param_1[0x6cd] = iVar22;
  }
  goto code_r0x00376869;
}


