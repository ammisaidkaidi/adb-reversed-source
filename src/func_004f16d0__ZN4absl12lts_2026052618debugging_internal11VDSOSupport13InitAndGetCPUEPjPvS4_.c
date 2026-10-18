// Function: _ZN4absl12lts_2026052618debugging_internal11VDSOSupport13InitAndGetCPUEPjPvS4_
// Address: 004f16d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal11VDSOSupport13InitAndGetCPUEPjPvS4_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uint *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined8 unaff_R12;
  uint *puVar21;
  undefined8 unaff_R13;
  long lVar22;
  uint *puVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puVar15 = &stack0xfffffffffffffff8;
  ppuVar14 = (undefined **)auStack_28;
  puStack_30 = &UNK_004f16e8;
  _ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv();
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E !=
      _ZN4absl12lts_2026052618debugging_internal11VDSOSupport13InitAndGetCPUEPjPvS4_) {
                    /* WARNING: Could not recover jumptable at 0x004f170e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E)(param_1,param_2,param_3)
    ;
    return;
  }
  puVar17 = (undefined8 *)0x3;
  puStack_30 = &UNK_004f173d;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016f1d8,0xbb,&UNK_00183943,&UNK_001664bb,&UNK_0017f20d);
  pcVar4 = _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E;
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E == "") {
    puStack_30 = &stack0xfffffffffffffff8;
    pcVar4 = (char *)_ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv();
    puVar15 = puStack_30;
  }
  ppuVar16 = (undefined **)puVar15;
  if (pcVar4 == "") {
    ppuVar16 = &puStack_30;
    ppuVar14 = &puStack_30;
    pcVar4 = "elf_mem_image.cc";
    puVar17 = (undefined8 *)0x3;
    puStack_30 = puVar15;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_0017f257,0x58,&UNK_00183943,&UNK_0015cd63,&UNK_0015ff2c);
  }
  *(undefined8 *)((long)puVar17 + 0x1c) = 0;
  *(undefined8 *)((long)puVar17 + 0x24) = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[8] = 0xffffffffffffffff;
  if ((((pcVar4 != (char *)0x0) && (*pcVar4 == '\x7f')) && (pcVar4[1] == 'E')) &&
     (((pcVar4[2] == 'L' && (pcVar4[3] == 'F')) && ((pcVar4[4] == '\x02' && (pcVar4[5] == '\x01'))))
     )) {
    *(undefined ***)((long)ppuVar14 + -8) = ppuVar16;
    *(undefined8 *)((long)ppuVar14 + -0x10) = param_1;
    *(undefined8 *)((long)ppuVar14 + -0x18) = param_2;
    *(undefined8 *)((long)ppuVar14 + -0x20) = unaff_R13;
    *(undefined8 *)((long)ppuVar14 + -0x28) = unaff_R12;
    *(undefined8 *)((long)ppuVar14 + -0x30) = param_3;
    *puVar17 = pcVar4;
    uVar5 = (ulong)*(ushort *)(pcVar4 + 0x38);
    if (*(ushort *)(pcVar4 + 0x38) != 0) {
      lVar7 = -1;
      uVar18 = 0;
      pcVar11 = (char *)0x0;
      do {
        pcVar10 = pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar18 + *(long *)(pcVar4 + 0x20);
        if (((*(int *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar18 + *(long *)(pcVar4 + 0x20)) != 2
             ) && (pcVar10 = pcVar11,
                  *(int *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar18 + *(long *)(pcVar4 + 0x20))
                  == 1)) && (lVar7 == -1)) {
          lVar7 = *(long *)(pcVar4 + *(ushort *)(pcVar4 + 0x36) * uVar18 + *(long *)(pcVar4 + 0x20)
                           + 0x10);
          puVar17[8] = lVar7;
          uVar5 = (ulong)*(ushort *)(pcVar4 + 0x38);
        }
        uVar18 = uVar18 + 1;
        pcVar11 = pcVar10;
      } while (uVar18 < uVar5);
      if (lVar7 != -1 && pcVar10 != (char *)0x0) {
        lVar2 = *(long *)(pcVar10 + 0x10);
        lVar22 = *(long *)(pcVar4 + (lVar2 - lVar7));
        if (lVar22 == 0) {
          bVar29 = true;
          puVar12 = (uint *)0x0;
          bVar28 = true;
          bVar27 = true;
          bVar26 = true;
          bVar25 = true;
          bVar24 = true;
          puVar9 = (uint *)0x0;
        }
        else {
          *(undefined8 *)((long)ppuVar14 + -0x38) = 0;
          lVar20 = 0;
          puVar13 = (uint *)0x0;
          puVar23 = (uint *)0x0;
          puVar6 = (uint *)0x0;
          puVar21 = (uint *)0x0;
          puVar12 = (uint *)0x0;
          puVar8 = (uint *)0x0;
          plVar19 = (long *)(pcVar4 + (lVar2 - lVar7));
          do {
            lVar2 = plVar19[1];
            puVar1 = (uint *)(pcVar4 + (lVar2 - lVar7));
            puVar9 = puVar8;
            if (lVar22 < 0x6ffffef5) {
              switch(lVar22) {
              case 4:
                puVar12 = puVar1;
                break;
              case 5:
                puVar17[4] = puVar1;
                puVar6 = puVar1;
                break;
              case 6:
                puVar17[1] = puVar1;
                puVar21 = puVar1;
                break;
              case 10:
                puVar17[6] = lVar2;
                *(long *)((long)ppuVar14 + -0x38) = lVar2;
              }
            }
            else if (lVar22 < 0x6ffffffc) {
              puVar9 = puVar1;
              if ((lVar22 != 0x6ffffef5) && (puVar9 = puVar8, lVar22 == 0x6ffffff0)) {
                puVar17[2] = puVar1;
                puVar23 = puVar1;
              }
            }
            else if (lVar22 == 0x6ffffffc) {
              puVar17[3] = puVar1;
              puVar13 = puVar1;
            }
            else if (lVar22 == 0x6ffffffd) {
              puVar17[7] = lVar2;
              lVar20 = lVar2;
            }
            lVar22 = plVar19[2];
            puVar8 = puVar9;
            plVar19 = plVar19 + 2;
          } while (lVar22 != 0);
          bVar24 = puVar21 == (uint *)0x0;
          bVar25 = puVar6 == (uint *)0x0;
          bVar26 = puVar23 == (uint *)0x0;
          bVar27 = puVar13 == (uint *)0x0;
          bVar28 = lVar20 == 0;
          bVar29 = *(long *)((long)ppuVar14 + -0x38) == 0;
        }
        if (((((puVar12 != (uint *)0x0 || puVar9 != (uint *)0x0) && (!bVar24)) && (!bVar25)) &&
            ((!bVar26 && (!bVar27)))) && ((!bVar28 && (!bVar29)))) {
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
          *(uint *)(puVar17 + 5) = uVar3;
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar17 + 0x1c) = 0;
    *(undefined8 *)((long)puVar17 + 0x24) = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[8] = 0xffffffffffffffff;
  }
  return;
}


