// Function: _ZN7android16IdmapTypeMapping3addEjj
// Address: 0043ea60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android16IdmapTypeMapping3addEjj(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  
  bVar8 = (char)(param_2 >> 0x10) - 1;
  plVar6 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar5 = param_1 + 1;
    plVar7 = param_1 + 1;
  }
  else {
    do {
      while (plVar3 = plVar6, plVar7 = plVar3, bVar8 < *(byte *)(plVar3 + 4)) {
        plVar6 = (long *)*plVar3;
        plVar5 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto code_r0x0043eac3;
      }
      if (bVar8 == *(byte *)(plVar3 + 4)) goto code_r0x0043eb1c;
      plVar6 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar5 = plVar3 + 1;
  }
code_r0x0043eac3:
  plVar3 = (long *)_Znwm(0x40);
  *(byte *)(plVar3 + 4) = bVar8;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = (long)(plVar3 + 6);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar7;
  *plVar5 = (long)plVar3;
  plVar6 = plVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar6 = (long *)*plVar5;
  }
  func_0x003d6af0(param_1[1],plVar6);
  param_1[2] = param_1[2] + 1;
code_r0x0043eb1c:
  plVar6 = (long *)plVar3[6];
  if ((long *)plVar3[6] == (long *)0x0) {
    plVar7 = plVar3 + 6;
    plVar5 = plVar7;
  }
  else {
    do {
      while( true ) {
        plVar7 = plVar6;
        uVar1 = *(uint *)((long)plVar7 + 0x1c);
        cVar2 = (param_2 >= uVar1 && param_2 != uVar1) - (param_2 < uVar1);
        if (param_2 == uVar1) {
          cVar2 = (*(uint *)(plVar7 + 4) < param_3) - (param_3 < *(uint *)(plVar7 + 4));
        }
        if (cVar2 < '\0') break;
        if (cVar2 == '\0') {
          return;
        }
        plVar6 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar5 = plVar7 + 1;
          goto code_r0x0043eb7e;
        }
      }
      plVar6 = (long *)*plVar7;
      plVar5 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
code_r0x0043eb7e:
  puVar4 = (undefined8 *)_Znwm(0x28);
  *(ulong *)((long)puVar4 + 0x1c) = CONCAT44(param_3,param_2);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar7;
  *plVar5 = (long)puVar4;
  if (*(long *)plVar3[5] != 0) {
    plVar3[5] = *(long *)plVar3[5];
    puVar4 = (undefined8 *)*plVar5;
  }
  func_0x003d6af0(plVar3[6],puVar4);
  plVar3[7] = plVar3[7] + 1;
  return;
}


