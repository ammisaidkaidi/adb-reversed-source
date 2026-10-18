// Function: _ZN4absl12lts_2026052618debugging_internal11VDSOSupportC1Ev
// Address: 004f1740
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal11VDSOSupportC1Ev(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  undefined8 unaff_RBX;
  uint *puVar13;
  undefined1 *unaff_RBP;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 unaff_R12;
  uint *puVar17;
  undefined8 unaff_R13;
  long lVar18;
  undefined8 unaff_R14;
  uint *puVar19;
  undefined8 unaff_R15;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  
  pcVar4 = _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E;
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E == "") {
    pcVar4 = (char *)_ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv();
  }
  if (pcVar4 == "") {
    unaff_RBP = &stack0xfffffffffffffff8;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    pcVar4 = "elf_mem_image.cc";
    param_1 = (undefined8 *)0x3;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x58,&UNK_00183943,&UNK_0015cd63,&UNK_0015ff2c);
  }
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffffffffffff;
  if ((((pcVar4 != (char *)0x0) && (*pcVar4 == '\x7f')) && (pcVar4[1] == 'E')) &&
     (((pcVar4[2] == 'L' && (pcVar4[3] == 'F')) && ((pcVar4[4] == '\x02' && (pcVar4[5] == '\x01'))))
     )) {
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *param_1 = pcVar4;
    uVar5 = (ulong)*(ushort *)(pcVar4 + 0x38);
    if (*(ushort *)(pcVar4 + 0x38) != 0) {
      lVar7 = -1;
      uVar14 = 0;
      pcVar11 = (char *)0x0;
      do {
        pcVar10 = pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar14 + *(long *)(pcVar4 + 0x20);
        if (((*(int *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar14 + *(long *)(pcVar4 + 0x20)) != 2
             ) && (pcVar10 = pcVar11,
                  *(int *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar14 + *(long *)(pcVar4 + 0x20))
                  == 1)) && (lVar7 == -1)) {
          lVar7 = *(long *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar14 + *(long *)(pcVar4 + 0x20)
                           + 0x10);
          param_1[8] = lVar7;
          uVar5 = (ulong)*(ushort *)(pcVar4 + 0x38);
        }
        uVar14 = uVar14 + 1;
        pcVar11 = pcVar10;
      } while (uVar14 < uVar5);
      if (lVar7 != -1 && pcVar10 != (char *)0x0) {
        lVar2 = *(long *)(pcVar10 + 0x10);
        lVar18 = *(long *)(pcVar4 + (lVar2 - lVar7));
        if (lVar18 == 0) {
          bVar25 = true;
          puVar12 = (uint *)0x0;
          bVar24 = true;
          bVar23 = true;
          bVar22 = true;
          bVar21 = true;
          bVar20 = true;
          puVar9 = (uint *)0x0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
          lVar16 = 0;
          puVar13 = (uint *)0x0;
          puVar19 = (uint *)0x0;
          puVar6 = (uint *)0x0;
          puVar17 = (uint *)0x0;
          puVar12 = (uint *)0x0;
          puVar8 = (uint *)0x0;
          plVar15 = (long *)(pcVar4 + (lVar2 - lVar7));
          do {
            lVar2 = plVar15[1];
            puVar1 = (uint *)(pcVar4 + (lVar2 - lVar7));
            puVar9 = puVar8;
            if (lVar18 < 0x6ffffef5) {
              switch(lVar18) {
              case 4:
                puVar12 = puVar1;
                break;
              case 5:
                param_1[4] = puVar1;
                puVar6 = puVar1;
                break;
              case 6:
                param_1[1] = puVar1;
                puVar17 = puVar1;
                break;
              case 10:
                param_1[6] = lVar2;
                *(long *)((long)register0x00000020 + -0x38) = lVar2;
              }
            }
            else if (lVar18 < 0x6ffffffc) {
              puVar9 = puVar1;
              if ((lVar18 != 0x6ffffef5) && (puVar9 = puVar8, lVar18 == 0x6ffffff0)) {
                param_1[2] = puVar1;
                puVar19 = puVar1;
              }
            }
            else if (lVar18 == 0x6ffffffc) {
              param_1[3] = puVar1;
              puVar13 = puVar1;
            }
            else if (lVar18 == 0x6ffffffd) {
              param_1[7] = lVar2;
              lVar16 = lVar2;
            }
            lVar18 = plVar15[2];
            puVar8 = puVar9;
            plVar15 = plVar15 + 2;
          } while (lVar18 != 0);
          bVar20 = puVar17 == (uint *)0x0;
          bVar21 = puVar6 == (uint *)0x0;
          bVar22 = puVar19 == (uint *)0x0;
          bVar23 = puVar13 == (uint *)0x0;
          bVar24 = lVar16 == 0;
          bVar25 = *(long *)((long)register0x00000020 + -0x38) == 0;
        }
        if (((((puVar12 != (uint *)0x0 || puVar9 != (uint *)0x0) && (!bVar20)) && (!bVar21)) &&
            ((!bVar22 && (!bVar23)))) && ((!bVar24 && (!bVar25)))) {
          if (puVar12 == (uint *)0x0) {
            uVar5 = (ulong)*puVar9;
            do {
              if (uVar5 == 0) {
                uVar3 = 0;
                goto code_r0x004f1d02;
              }
              uVar3 = puVar9[(ulong)puVar9[2] * 2 + uVar5 + 3];
              uVar5 = uVar5 - 1;
            } while (uVar3 == 0);
            do {
              uVar5 = (ulong)uVar3;
              uVar3 = uVar3 + 1;
            } while ((puVar9[(ulong)puVar9[2] * 2 +
                             (ulong)*puVar9 + ((uVar5 + 4) - (ulong)puVar9[1])] & 1) == 0);
          }
          else {
            uVar3 = puVar12[1];
          }
code_r0x004f1d02:
          *(uint *)(param_1 + 5) = uVar3;
          return;
        }
      }
    }
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0xffffffffffffffff;
  }
  return;
}


