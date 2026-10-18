// Function: _ZN4absl12lts_2026052618debugging_internal11ElfMemImage4InitEPKv
// Address: 004f1a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal11ElfMemImage4InitEPKv
               (undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  long lStack_38;
  
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffffffffffff;
  if ((((param_2 != (char *)0x0) && (*param_2 == '\x7f')) && (param_2[1] == 'E')) &&
     (((param_2[2] == 'L' && (param_2[3] == 'F')) &&
      ((param_2[4] == '\x02' && (param_2[5] == '\x01')))))) {
    *param_1 = param_2;
    uVar4 = (ulong)*(ushort *)(param_2 + 0x38);
    if (*(ushort *)(param_2 + 0x38) != 0) {
      lVar6 = -1;
      uVar13 = 0;
      pcVar10 = (char *)0x0;
      do {
        pcVar9 = param_2 + *(ushort *)(param_2 + 0x36) * uVar13 + *(long *)(param_2 + 0x20);
        if (((*(int *)(param_2 + *(ushort *)(param_2 + 0x36) * uVar13 + *(long *)(param_2 + 0x20))
              != 2) &&
            (pcVar9 = pcVar10,
            *(int *)(param_2 + *(ushort *)(param_2 + 0x36) * uVar13 + *(long *)(param_2 + 0x20)) ==
            1)) && (lVar6 == -1)) {
          lVar6 = *(long *)(param_2 + *(ushort *)(param_2 + 0x36) * uVar13 +
                                      *(long *)(param_2 + 0x20) + 0x10);
          param_1[8] = lVar6;
          uVar4 = (ulong)*(ushort *)(param_2 + 0x38);
        }
        uVar13 = uVar13 + 1;
        pcVar10 = pcVar9;
      } while (uVar13 < uVar4);
      if (lVar6 != -1 && pcVar9 != (char *)0x0) {
        lVar17 = *(long *)(param_2 + (*(long *)(pcVar9 + 0x10) - lVar6));
        if (lVar17 == 0) {
          bVar24 = true;
          puVar11 = (uint *)0x0;
          bVar23 = true;
          bVar22 = true;
          bVar21 = true;
          bVar20 = true;
          bVar19 = true;
          puVar8 = (uint *)0x0;
        }
        else {
          lStack_38 = 0;
          lVar15 = 0;
          puVar12 = (uint *)0x0;
          puVar18 = (uint *)0x0;
          puVar5 = (uint *)0x0;
          puVar16 = (uint *)0x0;
          puVar11 = (uint *)0x0;
          puVar7 = (uint *)0x0;
          plVar14 = (long *)(param_2 + (*(long *)(pcVar9 + 0x10) - lVar6));
          do {
            lVar2 = plVar14[1];
            puVar1 = (uint *)(param_2 + (lVar2 - lVar6));
            puVar8 = puVar7;
            if (lVar17 < 0x6ffffef5) {
              switch(lVar17) {
              case 4:
                puVar11 = puVar1;
                break;
              case 5:
                param_1[4] = puVar1;
                puVar5 = puVar1;
                break;
              case 6:
                param_1[1] = puVar1;
                puVar16 = puVar1;
                break;
              case 10:
                param_1[6] = lVar2;
                lStack_38 = lVar2;
              }
            }
            else if (lVar17 < 0x6ffffffc) {
              puVar8 = puVar1;
              if ((lVar17 != 0x6ffffef5) && (puVar8 = puVar7, lVar17 == 0x6ffffff0)) {
                param_1[2] = puVar1;
                puVar18 = puVar1;
              }
            }
            else if (lVar17 == 0x6ffffffc) {
              param_1[3] = puVar1;
              puVar12 = puVar1;
            }
            else if (lVar17 == 0x6ffffffd) {
              param_1[7] = lVar2;
              lVar15 = lVar2;
            }
            lVar17 = plVar14[2];
            puVar7 = puVar8;
            plVar14 = plVar14 + 2;
          } while (lVar17 != 0);
          bVar19 = puVar16 == (uint *)0x0;
          bVar20 = puVar5 == (uint *)0x0;
          bVar21 = puVar18 == (uint *)0x0;
          bVar22 = puVar12 == (uint *)0x0;
          bVar23 = lVar15 == 0;
          bVar24 = lStack_38 == 0;
        }
        if (((((puVar11 != (uint *)0x0 || puVar8 != (uint *)0x0) && (!bVar19)) && (!bVar20)) &&
            ((!bVar21 && (!bVar22)))) && ((!bVar23 && (!bVar24)))) {
          if (puVar11 == (uint *)0x0) {
            uVar4 = (ulong)*puVar8;
            do {
              if (uVar4 == 0) {
                uVar3 = 0;
                goto code_r0x004f1d02;
              }
              uVar3 = puVar8[(ulong)puVar8[2] * 2 + uVar4 + 3];
              uVar4 = uVar4 - 1;
            } while (uVar3 == 0);
            do {
              uVar4 = (ulong)uVar3;
              uVar3 = uVar3 + 1;
            } while ((puVar8[(ulong)puVar8[2] * 2 +
                             (ulong)*puVar8 + ((uVar4 + 4) - (ulong)puVar8[1])] & 1) == 0);
          }
          else {
            uVar3 = puVar11[1];
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


