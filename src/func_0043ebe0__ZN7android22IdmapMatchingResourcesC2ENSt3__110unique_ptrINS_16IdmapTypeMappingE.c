// Function: _ZN7android22IdmapMatchingResourcesC2ENSt3__110unique_ptrINS_16IdmapTypeMappingENS1_14default_deleteIS3_EEEE
// Address: 0043ebe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android22IdmapMatchingResourcesC2ENSt3__110unique_ptrINS_16IdmapTypeMappingENS1_14default_deleteIS3_EEEE
               (long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  bool bVar13;
  long lStack_38;
  
  plVar8 = (long *)*param_2;
  *param_2 = 0;
  *param_1 = (long)plVar8;
  plVar1 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = (long)plVar1;
  plVar2 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = (long)plVar2;
  plVar6 = (long *)*plVar8;
  if (plVar6 != plVar8 + 1) {
    do {
      plVar8 = (long *)plVar6[5];
      if (plVar8 == plVar6 + 6) {
        lStack_38 = 0;
      }
      else {
        uVar11 = 0xffffffff;
        lStack_38 = 0;
        do {
          uVar4 = *(uint *)((long)plVar8 + 0x1c);
          uVar5 = ~uVar11 + uVar4;
          if (uVar11 == 0xffffffff) {
            uVar5 = 0;
          }
          plVar9 = plVar1;
          while (plVar10 = (long *)*plVar9, plVar12 = plVar9, (long *)*plVar9 != (long *)0x0) {
            while (plVar7 = plVar10, plVar9 = plVar7, *(uint *)(plVar7 + 4) <= uVar4) {
              if (uVar4 == *(uint *)(plVar7 + 4)) goto code_r0x0043ed44;
              plVar10 = (long *)plVar7[1];
              if ((long *)plVar7[1] == (long *)0x0) {
                plVar9 = plVar7 + 1;
                plVar12 = plVar7;
                goto code_r0x0043ece3;
              }
            }
          }
code_r0x0043ece3:
          plVar7 = (long *)_Znwm(0x30);
          *(uint *)(plVar7 + 4) = uVar4;
          plVar7[5] = 0;
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = (long)plVar12;
          *plVar9 = (long)plVar7;
          plVar10 = plVar7;
          if (*(long *)param_1[1] != 0) {
            param_1[1] = *(long *)param_1[1];
            plVar10 = (long *)*plVar9;
          }
          func_0x003d6af0(param_1[2],plVar10);
          param_1[3] = param_1[3] + 1;
code_r0x0043ed44:
          plVar7[5] = (ulong)uVar5;
          uVar11 = *(uint *)((long)plVar8 + 0x1c);
          plVar9 = plVar1;
          while (plVar10 = (long *)*plVar9, plVar12 = plVar9, (long *)*plVar9 != (long *)0x0) {
            while (plVar7 = plVar10, plVar9 = plVar7, *(uint *)(plVar7 + 4) <= uVar11) {
              if (uVar11 == *(uint *)(plVar7 + 4)) goto code_r0x0043edc3;
              plVar10 = (long *)plVar7[1];
              if ((long *)plVar7[1] == (long *)0x0) {
                plVar9 = plVar7 + 1;
                plVar12 = plVar7;
                goto code_r0x0043ed73;
              }
            }
          }
code_r0x0043ed73:
          plVar7 = (long *)_Znwm(0x30);
          *(uint *)(plVar7 + 4) = uVar11;
          plVar7[5] = 0;
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = (long)plVar12;
          *plVar9 = (long)plVar7;
          plVar10 = plVar7;
          if (*(long *)param_1[1] != 0) {
            param_1[1] = *(long *)param_1[1];
            plVar10 = (long *)*plVar9;
          }
          func_0x003d6af0(param_1[2],plVar10);
          param_1[3] = param_1[3] + 1;
code_r0x0043edc3:
          plVar9 = (long *)plVar8[1];
          plVar10 = plVar8;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar10[2];
              bVar13 = plVar10 != (long *)*plVar8;
              plVar10 = plVar8;
            } while (bVar13);
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          lStack_38 = lStack_38 + plVar7[5] + 1;
        } while (plVar8 != plVar6 + 6);
      }
      bVar3 = *(byte *)(plVar6 + 4);
      plVar8 = (long *)*plVar2;
      plVar9 = plVar2;
      while (plVar12 = plVar9, plVar10 = plVar9, plVar8 != (long *)0x0) {
        while (plVar9 = plVar8, *(byte *)(plVar9 + 4) <= bVar3) {
          if (bVar3 == *(byte *)(plVar9 + 4)) goto code_r0x0043ee91;
          plVar8 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar10 = plVar9 + 1;
            plVar12 = plVar9;
            goto code_r0x0043ee42;
          }
        }
        plVar8 = (long *)*plVar9;
      }
code_r0x0043ee42:
      plVar9 = (long *)_Znwm(0x30);
      *(byte *)(plVar9 + 4) = bVar3;
      plVar9[5] = 0;
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = (long)plVar12;
      *plVar10 = (long)plVar9;
      plVar8 = plVar9;
      if (*(long *)param_1[4] != 0) {
        param_1[4] = *(long *)param_1[4];
        plVar8 = (long *)*plVar10;
      }
      func_0x003d6af0(param_1[5],plVar8);
      param_1[6] = param_1[6] + 1;
code_r0x0043ee91:
      plVar9[5] = lStack_38;
      plVar8 = (long *)plVar6[1];
      plVar9 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar13 = plVar9 != (long *)*plVar6;
          plVar9 = plVar6;
        } while (bVar13);
      }
      else {
        do {
          plVar6 = plVar8;
          plVar8 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != (long *)(*param_1 + 8));
  }
  return;
}


