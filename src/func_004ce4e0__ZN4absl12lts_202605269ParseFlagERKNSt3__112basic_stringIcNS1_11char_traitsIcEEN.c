// Function: _ZN4absl12lts_202605269ParseFlagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_8DurationEPS7_
// Address: 004ce4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605269ParseFlagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_8DurationEPS7_
                (byte *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *extraout_RDX;
  ulong *unaff_RBX;
  undefined8 unaff_RBP;
  ulong *puVar8;
  int iVar9;
  ulong *puVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_R12;
  undefined8 unaff_R13;
  ulong unaff_R14;
  uint uVar16;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar17;
  undefined1 auVar18 [16];
  
  bVar17 = (*param_1 & 1) != 0;
  puVar10 = (ulong *)(param_1 + 1);
  if (bVar17) {
    puVar10 = *(ulong **)(param_1 + 0x10);
  }
  puVar5 = (ulong *)(ulong)(*param_1 >> 1);
  if (bVar17) {
    puVar5 = *(ulong **)(param_1 + 8);
  }
  do {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar8 = puVar5;
    if (puVar5 == (ulong *)0x0) {
code_r0x004ce45e:
      uVar7 = 0;
    }
    else {
      if ((byte)*puVar10 == 0x2d) {
        iVar12 = -1;
        puVar8 = (ulong *)0x0;
        if (puVar5 != (ulong *)0x1) {
code_r0x004cdf54:
          puVar8 = (ulong *)((long)puVar5 + -1);
          puVar10 = (ulong *)((long)puVar10 + 1);
          goto code_r0x004cdf57;
        }
        goto code_r0x004ce45e;
      }
      iVar12 = 1;
      if ((byte)*puVar10 == 0x2b) {
        iVar12 = 1;
        if (puVar5 != (ulong *)0x1) goto code_r0x004cdf54;
        puVar8 = (ulong *)0x0;
        goto code_r0x004ce45e;
      }
code_r0x004cdf57:
      if (puVar8 == (ulong *)0x3) {
        if (*(byte *)((long)puVar10 + 2) != 0x66 || (short)*puVar10 != 0x6e69)
        goto code_r0x004cdf8c;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x7fffffffffffffff;
        *(undefined4 *)((long)register0x00000020 + -0x40) = 0xffffffff;
        puVar8 = (ulong *)(long)iVar12;
        puVar10 = (ulong *)((long)register0x00000020 + -0x48);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce4a2;
        _ZN4absl12lts_202605268DurationmLEl();
        uVar15 = *(ulong *)((long)register0x00000020 + -0x48);
        uVar14 = (ulong)*(uint *)((long)register0x00000020 + -0x40);
        unaff_RBX = param_2;
      }
      else if ((puVar8 == (ulong *)0x1) && ((byte)*puVar10 == 0x30)) {
        uVar15 = 0;
        uVar14 = 0;
      }
      else {
code_r0x004cdf8c:
        puVar8 = (ulong *)((long)puVar8 + (long)puVar10);
        *(long *)((long)register0x00000020 + -0x70) = (long)iVar12;
        uVar14 = 0;
        unaff_R12 = 0;
        do {
          unaff_R14 = 0x7fffffffffffffff;
          unaff_R13 = 0xccccccccccccccc;
          lVar2 = 0;
          puVar5 = puVar10;
          do {
            if ((byte)((byte)*puVar5 - 0x3a) < 0xf6) break;
            if (0xccccccccccccccc < lVar2) goto code_r0x004ce45e;
            uVar15 = (ulong)((byte)*puVar5 & 0xf);
            if ((long)(uVar15 ^ 0x7fffffffffffffff) < lVar2 * 10) goto code_r0x004ce45e;
            lVar2 = lVar2 * 10 + uVar15;
            puVar5 = (ulong *)((long)puVar5 + 1);
          } while (puVar5 != puVar8);
          if ((puVar5 == puVar8) || ((byte)*puVar5 != 0x2e)) {
            uVar7 = 0;
            if (puVar5 == puVar10) goto code_r0x004ce460;
            unaff_R14 = 1;
          }
          else {
            unaff_RBX = (ulong *)((long)puVar5 + 1);
            if (unaff_RBX == puVar8) {
              uVar7 = 0;
              if (puVar5 == puVar10) goto code_r0x004ce460;
              unaff_R14 = 1;
              puVar5 = unaff_RBX;
            }
            else {
              unaff_R14 = 1;
              uVar7 = 0;
              do {
                if ((byte)((byte)*unaff_RBX - 0x3a) < 0xf6) break;
                if ((long)unaff_R14 < 0xccccccccccccccd) {
                  uVar7 = (ulong)((byte)*unaff_RBX & 0xf) + uVar7 * 10;
                  unaff_R14 = unaff_R14 * 10;
                }
                unaff_RBX = (ulong *)((long)unaff_RBX + 1);
              } while (unaff_RBX != puVar8);
              puVar10 = (ulong *)(unaff_R14 ^ 1 | (ulong)puVar5 ^ (ulong)puVar10);
              puVar5 = unaff_RBX;
              if (puVar10 == (ulong *)0x0) goto code_r0x004ce45e;
            }
          }
          *(ulong **)((long)register0x00000020 + -0x68) = param_2;
          unaff_RBX = puVar5;
          if ((long)puVar8 - (long)puVar5 == 1) {
            bVar4 = (byte)*puVar5;
code_r0x004ce0e7:
            uVar11 = 0;
            puVar10 = (ulong *)0x1;
            if (bVar4 == 0x68) {
              uVar6 = 0xe10;
            }
            else if (bVar4 == 0x73) {
              uVar6 = 1;
            }
            else {
              if (bVar4 != 0x6d) goto code_r0x004ce45e;
code_r0x004ce142:
              uVar11 = 0;
              uVar6 = 0x3c;
              puVar10 = (ulong *)0x1;
            }
          }
          else {
            if (puVar8 == puVar5) goto code_r0x004ce45e;
            bVar4 = (byte)*puVar5;
            if (bVar4 == 0x6d) {
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce142;
              uVar11 = 4000000;
              puVar10 = (ulong *)0x2;
              uVar6 = 0;
            }
            else if (bVar4 == 0x75) {
              uVar6 = 0;
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce45e;
              uVar11 = 4000;
              puVar10 = (ulong *)0x2;
            }
            else {
              if (bVar4 != 0x6e) goto code_r0x004ce0e7;
              uVar6 = 0;
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce45e;
              uVar11 = 4;
              puVar10 = (ulong *)0x2;
            }
          }
          *(ulong **)((long)register0x00000020 + -0x78) = puVar10;
          *(ulong **)((long)register0x00000020 + -0x60) = puVar8;
          uVar15 = unaff_R12;
          if (lVar2 != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = uVar6;
            *(undefined8 *)((long)register0x00000020 + -0x48) = uVar6;
            *(undefined4 *)((long)register0x00000020 + -0x58) = uVar11;
            *(undefined4 *)((long)register0x00000020 + -0x40) = uVar11;
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce187;
            _ZN4absl12lts_202605268DurationmLEl
                      ((undefined1 *)((long)register0x00000020 + -0x48),
                       lVar2 * *(long *)((long)register0x00000020 + -0x70));
            unaff_R15 = uVar7;
            if ((int)uVar14 == -1) {
              uVar14 = 0xffffffff;
              uVar11 = *(undefined4 *)((long)register0x00000020 + -0x58);
              uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
            }
            else {
              uVar3 = *(ulong *)((long)register0x00000020 + -0x48);
              uVar16 = *(uint *)((long)register0x00000020 + -0x40);
              if (uVar16 == 0xffffffff) {
                uVar11 = *(undefined4 *)((long)register0x00000020 + -0x58);
                uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
code_r0x004ce245:
                uVar14 = 0xffffffff;
                uVar15 = uVar3;
              }
              else {
                uVar13 = (ulong)((int)uVar14 + 0x1194d800);
                if ((long)uVar14 < (long)(4000000000 - (ulong)uVar16)) {
                  uVar13 = uVar14;
                }
                uVar15 = (ulong)((long)(4000000000 - (ulong)uVar16) <= (long)uVar14) +
                         uVar3 + unaff_R12;
                uVar14 = (ulong)((int)uVar13 + uVar16);
                if ((long)uVar3 < 0) {
                  uVar11 = *(undefined4 *)((long)register0x00000020 + -0x58);
                  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
                  if ((long)unaff_R12 < (long)uVar15) {
                    uVar3 = 0x8000000000000000;
                    goto code_r0x004ce245;
                  }
                }
                else {
                  uVar3 = 0x7fffffffffffffff;
                  uVar11 = *(undefined4 *)((long)register0x00000020 + -0x58);
                  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
                  if ((long)uVar15 < (long)unaff_R12) goto code_r0x004ce245;
                }
              }
            }
          }
          unaff_R13 = 0xccccccccccccccc;
          if (uVar7 == 0) {
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
            param_2 = *(ulong **)((long)register0x00000020 + -0x68);
            goto code_r0x004ce44c;
          }
          *(ulong *)((long)register0x00000020 + -0x50) = uVar15;
          *(ulong *)((long)register0x00000020 + -0x58) = uVar14;
          *(undefined8 *)((long)register0x00000020 + -0x48) = uVar6;
          *(undefined4 *)((long)register0x00000020 + -0x40) = uVar11;
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce278;
          _ZN4absl12lts_202605268DurationmLEl
                    ((undefined1 *)((long)register0x00000020 + -0x48),
                     uVar7 * *(long *)((long)register0x00000020 + -0x70));
          uVar15 = *(ulong *)((long)register0x00000020 + -0x48);
          if (unaff_R14 == 0) {
code_r0x004ce322:
            uVar7 = (ulong)((long)(uVar15 ^ unaff_R14) < 0) + 0x7fffffffffffffff;
            unaff_R15 = 0xffffffff;
code_r0x004ce33d:
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
            param_2 = *(ulong **)((long)register0x00000020 + -0x68);
            uVar14 = *(ulong *)((long)register0x00000020 + -0x58);
            uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
          }
          else {
            uVar16 = *(uint *)((long)register0x00000020 + -0x40);
            if (uVar16 == 0xffffffff) goto code_r0x004ce322;
            uVar1 = 4000000000 - uVar16;
            if (-1 < (long)uVar15) {
              uVar1 = uVar16;
            }
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (long)uVar15 >> 0x3f ^ uVar15;
            auVar18 = auVar18 * ZEXT816(4000000000) + ZEXT416(uVar1);
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce2d8;
            auVar18 = func_0x00998c70(auVar18._0_8_,auVar18._8_8_,
                                      ((long)unaff_R14 >> 0x3f ^ unaff_R14) -
                                      ((long)unaff_R14 >> 0x3f));
            uVar3 = auVar18._8_8_;
            uVar14 = auVar18._0_8_;
            uVar15 = uVar15 ^ unaff_R14;
            if (uVar3 != 0) {
              if (uVar3 < 2000000000) {
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce377;
                uVar7 = func_0x00998c70(uVar14,uVar3,4000000000);
                puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
                goto code_r0x004ce37e;
              }
              uVar7 = 0x8000000000000000;
              if (-1 < (long)uVar15) {
                uVar7 = 0x7fffffffffffffff;
              }
              unaff_R15 = (ulong)-(uint)(-1 < (long)uVar15 || (uVar14 != 0 || uVar3 != 2000000000));
              goto code_r0x004ce33d;
            }
            uVar7 = uVar14 / 4000000000;
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
code_r0x004ce37e:
            uVar16 = auVar18._0_4_ + (int)uVar7 * 0x1194d800;
            unaff_R15 = (ulong)uVar16;
            uVar14 = *(ulong *)((long)register0x00000020 + -0x58);
            if ((long)uVar15 < 0) {
              param_2 = *(ulong **)((long)register0x00000020 + -0x68);
              uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
              if (uVar16 == 0) {
                uVar7 = -uVar7;
                unaff_R15 = 0;
              }
              else {
                uVar7 = ~uVar7;
                unaff_R15 = (ulong)(4000000000 - uVar16);
              }
            }
            else {
              param_2 = *(ulong **)((long)register0x00000020 + -0x68);
              uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
            }
          }
          iVar12 = (int)uVar14;
          uVar13 = uVar3;
          if ((iVar12 == -1) || (uVar13 = uVar7, (int)unaff_R15 == -1)) {
code_r0x004ce446:
            uVar15 = uVar13;
            uVar14 = 0xffffffff;
          }
          else {
            *(ulong *)((long)register0x00000020 + -0x60) = uVar7 + uVar3;
            iVar9 = iVar12 + 0x1194d800;
            if ((long)(uVar14 & 0xffffffff) < (long)(4000000000 - unaff_R15)) {
              iVar9 = iVar12;
            }
            uVar15 = (ulong)((long)(4000000000 - unaff_R15) <= (long)(uVar14 & 0xffffffff)) +
                     *(long *)((long)register0x00000020 + -0x60);
            uVar14 = (ulong)(uint)(iVar9 + (int)unaff_R15);
            if ((long)uVar7 < 0) {
              if ((long)uVar3 < (long)uVar15) {
                uVar13 = 0x8000000000000000;
                goto code_r0x004ce446;
              }
            }
            else {
              uVar13 = 0x7fffffffffffffff;
              if ((long)uVar15 < (long)uVar3) goto code_r0x004ce446;
            }
          }
code_r0x004ce44c:
          unaff_R14 = 0x7fffffffffffffff;
          unaff_RBX = (ulong *)((long)puVar5 + *(long *)((long)register0x00000020 + -0x78));
          puVar10 = unaff_RBX;
          unaff_R12 = uVar15;
        } while (unaff_RBX != puVar8);
      }
      *param_2 = uVar15;
      *(int *)(param_2 + 1) = (int)uVar14;
      uVar7 = 1;
      unaff_R12 = uVar15;
    }
code_r0x004ce460:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
      return uVar7;
    }
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce4bd;
    func_0x0099bd00();
    *(undefined1 **)((long)register0x00000020 + -0x80) =
         (undefined1 *)((long)register0x00000020 + -8);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x80);
    param_2 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    puVar5 = puVar8;
  } while( true );
}


