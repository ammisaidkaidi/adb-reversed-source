// Function: _ZN4absl12lts_2026052613ParseDurationENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPNS0_8DurationE
// Address: 004cdf00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052613ParseDurationENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPNS0_8DurationE
                (ulong *param_1,ulong *param_2,ulong *param_3)

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
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_R12;
  ulong uVar14;
  undefined8 unaff_R13;
  ulong unaff_R14;
  uint uVar15;
  ulong unaff_R15;
  long in_FS_OFFSET;
  undefined1 auVar16 [16];
  
  do {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar8 = param_2;
    if (param_2 == (ulong *)0x0) {
code_r0x004ce45e:
      uVar7 = 0;
    }
    else {
      if ((byte)*param_1 == 0x2d) {
        iVar11 = -1;
        puVar8 = (ulong *)0x0;
        if (param_2 != (ulong *)0x1) {
code_r0x004cdf54:
          puVar8 = (ulong *)((long)param_2 + -1);
          param_1 = (ulong *)((long)param_1 + 1);
          goto code_r0x004cdf57;
        }
        goto code_r0x004ce45e;
      }
      iVar11 = 1;
      if ((byte)*param_1 == 0x2b) {
        iVar11 = 1;
        if (param_2 != (ulong *)0x1) goto code_r0x004cdf54;
        puVar8 = (ulong *)0x0;
        goto code_r0x004ce45e;
      }
code_r0x004cdf57:
      if (puVar8 == (ulong *)0x3) {
        if (*(byte *)((long)param_1 + 2) != 0x66 || (short)*param_1 != 0x6e69)
        goto code_r0x004cdf8c;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x7fffffffffffffff;
        *(undefined4 *)((long)register0x00000020 + -0x40) = 0xffffffff;
        puVar8 = (ulong *)(long)iVar11;
        param_1 = (ulong *)((long)register0x00000020 + -0x48);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce4a2;
        _ZN4absl12lts_202605268DurationmLEl();
        uVar14 = *(ulong *)((long)register0x00000020 + -0x48);
        uVar13 = (ulong)*(uint *)((long)register0x00000020 + -0x40);
        unaff_RBX = param_3;
      }
      else if ((puVar8 == (ulong *)0x1) && ((byte)*param_1 == 0x30)) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
code_r0x004cdf8c:
        puVar8 = (ulong *)((long)puVar8 + (long)param_1);
        *(long *)((long)register0x00000020 + -0x70) = (long)iVar11;
        uVar13 = 0;
        unaff_R12 = 0;
        do {
          unaff_R14 = 0x7fffffffffffffff;
          unaff_R13 = 0xccccccccccccccc;
          lVar2 = 0;
          puVar5 = param_1;
          do {
            if ((byte)((byte)*puVar5 - 0x3a) < 0xf6) break;
            if (0xccccccccccccccc < lVar2) goto code_r0x004ce45e;
            uVar14 = (ulong)((byte)*puVar5 & 0xf);
            if ((long)(uVar14 ^ 0x7fffffffffffffff) < lVar2 * 10) goto code_r0x004ce45e;
            lVar2 = lVar2 * 10 + uVar14;
            puVar5 = (ulong *)((long)puVar5 + 1);
          } while (puVar5 != puVar8);
          if ((puVar5 == puVar8) || ((byte)*puVar5 != 0x2e)) {
            uVar7 = 0;
            if (puVar5 == param_1) goto code_r0x004ce460;
            unaff_R14 = 1;
          }
          else {
            unaff_RBX = (ulong *)((long)puVar5 + 1);
            if (unaff_RBX == puVar8) {
              uVar7 = 0;
              if (puVar5 == param_1) goto code_r0x004ce460;
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
              param_1 = (ulong *)(unaff_R14 ^ 1 | (ulong)puVar5 ^ (ulong)param_1);
              puVar5 = unaff_RBX;
              if (param_1 == (ulong *)0x0) goto code_r0x004ce45e;
            }
          }
          *(ulong **)((long)register0x00000020 + -0x68) = param_3;
          unaff_RBX = puVar5;
          if ((long)puVar8 - (long)puVar5 == 1) {
            bVar4 = (byte)*puVar5;
code_r0x004ce0e7:
            uVar10 = 0;
            param_1 = (ulong *)0x1;
            if (bVar4 == 0x68) {
              uVar6 = 0xe10;
            }
            else if (bVar4 == 0x73) {
              uVar6 = 1;
            }
            else {
              if (bVar4 != 0x6d) goto code_r0x004ce45e;
code_r0x004ce142:
              uVar10 = 0;
              uVar6 = 0x3c;
              param_1 = (ulong *)0x1;
            }
          }
          else {
            if (puVar8 == puVar5) goto code_r0x004ce45e;
            bVar4 = (byte)*puVar5;
            if (bVar4 == 0x6d) {
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce142;
              uVar10 = 4000000;
              param_1 = (ulong *)0x2;
              uVar6 = 0;
            }
            else if (bVar4 == 0x75) {
              uVar6 = 0;
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce45e;
              uVar10 = 4000;
              param_1 = (ulong *)0x2;
            }
            else {
              if (bVar4 != 0x6e) goto code_r0x004ce0e7;
              uVar6 = 0;
              if (*(byte *)((long)puVar5 + 1) != 0x73) goto code_r0x004ce45e;
              uVar10 = 4;
              param_1 = (ulong *)0x2;
            }
          }
          *(ulong **)((long)register0x00000020 + -0x78) = param_1;
          *(ulong **)((long)register0x00000020 + -0x60) = puVar8;
          uVar14 = unaff_R12;
          if (lVar2 != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = uVar6;
            *(undefined8 *)((long)register0x00000020 + -0x48) = uVar6;
            *(undefined4 *)((long)register0x00000020 + -0x58) = uVar10;
            *(undefined4 *)((long)register0x00000020 + -0x40) = uVar10;
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce187;
            _ZN4absl12lts_202605268DurationmLEl
                      ((undefined1 *)((long)register0x00000020 + -0x48),
                       lVar2 * *(long *)((long)register0x00000020 + -0x70));
            unaff_R15 = uVar7;
            if ((int)uVar13 == -1) {
              uVar13 = 0xffffffff;
              uVar10 = *(undefined4 *)((long)register0x00000020 + -0x58);
              uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
            }
            else {
              uVar3 = *(ulong *)((long)register0x00000020 + -0x48);
              uVar15 = *(uint *)((long)register0x00000020 + -0x40);
              if (uVar15 == 0xffffffff) {
                uVar10 = *(undefined4 *)((long)register0x00000020 + -0x58);
                uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
code_r0x004ce245:
                uVar13 = 0xffffffff;
                uVar14 = uVar3;
              }
              else {
                uVar12 = (ulong)((int)uVar13 + 0x1194d800);
                if ((long)uVar13 < (long)(4000000000 - (ulong)uVar15)) {
                  uVar12 = uVar13;
                }
                uVar14 = (ulong)((long)(4000000000 - (ulong)uVar15) <= (long)uVar13) +
                         uVar3 + unaff_R12;
                uVar13 = (ulong)((int)uVar12 + uVar15);
                if ((long)uVar3 < 0) {
                  uVar10 = *(undefined4 *)((long)register0x00000020 + -0x58);
                  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
                  if ((long)unaff_R12 < (long)uVar14) {
                    uVar3 = 0x8000000000000000;
                    goto code_r0x004ce245;
                  }
                }
                else {
                  uVar3 = 0x7fffffffffffffff;
                  uVar10 = *(undefined4 *)((long)register0x00000020 + -0x58);
                  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x50);
                  if ((long)uVar14 < (long)unaff_R12) goto code_r0x004ce245;
                }
              }
            }
          }
          unaff_R13 = 0xccccccccccccccc;
          if (uVar7 == 0) {
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
            param_3 = *(ulong **)((long)register0x00000020 + -0x68);
            goto code_r0x004ce44c;
          }
          *(ulong *)((long)register0x00000020 + -0x50) = uVar14;
          *(ulong *)((long)register0x00000020 + -0x58) = uVar13;
          *(undefined8 *)((long)register0x00000020 + -0x48) = uVar6;
          *(undefined4 *)((long)register0x00000020 + -0x40) = uVar10;
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce278;
          _ZN4absl12lts_202605268DurationmLEl
                    ((undefined1 *)((long)register0x00000020 + -0x48),
                     uVar7 * *(long *)((long)register0x00000020 + -0x70));
          uVar14 = *(ulong *)((long)register0x00000020 + -0x48);
          if (unaff_R14 == 0) {
code_r0x004ce322:
            uVar7 = (ulong)((long)(uVar14 ^ unaff_R14) < 0) + 0x7fffffffffffffff;
            unaff_R15 = 0xffffffff;
code_r0x004ce33d:
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
            param_3 = *(ulong **)((long)register0x00000020 + -0x68);
            uVar13 = *(ulong *)((long)register0x00000020 + -0x58);
            uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
          }
          else {
            uVar15 = *(uint *)((long)register0x00000020 + -0x40);
            if (uVar15 == 0xffffffff) goto code_r0x004ce322;
            uVar1 = 4000000000 - uVar15;
            if (-1 < (long)uVar14) {
              uVar1 = uVar15;
            }
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (long)uVar14 >> 0x3f ^ uVar14;
            auVar16 = auVar16 * ZEXT816(4000000000) + ZEXT416(uVar1);
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce2d8;
            auVar16 = func_0x00998c70(auVar16._0_8_,auVar16._8_8_,
                                      ((long)unaff_R14 >> 0x3f ^ unaff_R14) -
                                      ((long)unaff_R14 >> 0x3f));
            uVar3 = auVar16._8_8_;
            uVar13 = auVar16._0_8_;
            uVar14 = uVar14 ^ unaff_R14;
            if (uVar3 != 0) {
              if (uVar3 < 2000000000) {
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_004ce377;
                uVar7 = func_0x00998c70(uVar13,uVar3,4000000000);
                puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
                goto code_r0x004ce37e;
              }
              uVar7 = 0x8000000000000000;
              if (-1 < (long)uVar14) {
                uVar7 = 0x7fffffffffffffff;
              }
              unaff_R15 = (ulong)-(uint)(-1 < (long)uVar14 || (uVar13 != 0 || uVar3 != 2000000000));
              goto code_r0x004ce33d;
            }
            uVar7 = uVar13 / 4000000000;
            puVar8 = *(ulong **)((long)register0x00000020 + -0x60);
code_r0x004ce37e:
            uVar15 = auVar16._0_4_ + (int)uVar7 * 0x1194d800;
            unaff_R15 = (ulong)uVar15;
            uVar13 = *(ulong *)((long)register0x00000020 + -0x58);
            if ((long)uVar14 < 0) {
              param_3 = *(ulong **)((long)register0x00000020 + -0x68);
              uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
              if (uVar15 == 0) {
                uVar7 = -uVar7;
                unaff_R15 = 0;
              }
              else {
                uVar7 = ~uVar7;
                unaff_R15 = (ulong)(4000000000 - uVar15);
              }
            }
            else {
              param_3 = *(ulong **)((long)register0x00000020 + -0x68);
              uVar3 = *(ulong *)((long)register0x00000020 + -0x50);
            }
          }
          iVar11 = (int)uVar13;
          uVar12 = uVar3;
          if ((iVar11 == -1) || (uVar12 = uVar7, (int)unaff_R15 == -1)) {
code_r0x004ce446:
            uVar14 = uVar12;
            uVar13 = 0xffffffff;
          }
          else {
            *(ulong *)((long)register0x00000020 + -0x60) = uVar7 + uVar3;
            iVar9 = iVar11 + 0x1194d800;
            if ((long)(uVar13 & 0xffffffff) < (long)(4000000000 - unaff_R15)) {
              iVar9 = iVar11;
            }
            uVar14 = (ulong)((long)(4000000000 - unaff_R15) <= (long)(uVar13 & 0xffffffff)) +
                     *(long *)((long)register0x00000020 + -0x60);
            uVar13 = (ulong)(uint)(iVar9 + (int)unaff_R15);
            if ((long)uVar7 < 0) {
              if ((long)uVar3 < (long)uVar14) {
                uVar12 = 0x8000000000000000;
                goto code_r0x004ce446;
              }
            }
            else {
              uVar12 = 0x7fffffffffffffff;
              if ((long)uVar14 < (long)uVar3) goto code_r0x004ce446;
            }
          }
code_r0x004ce44c:
          unaff_R14 = 0x7fffffffffffffff;
          unaff_RBX = (ulong *)((long)puVar5 + *(long *)((long)register0x00000020 + -0x78));
          param_1 = unaff_RBX;
          unaff_R12 = uVar14;
        } while (unaff_RBX != puVar8);
      }
      *param_3 = uVar14;
      *(int *)(param_3 + 1) = (int)uVar13;
      uVar7 = 1;
      unaff_R12 = uVar14;
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
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    param_2 = puVar8;
  } while( true );
}


