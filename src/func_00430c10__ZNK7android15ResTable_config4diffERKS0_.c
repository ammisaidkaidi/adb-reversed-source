// Function: _ZNK7android15ResTable_config4diffERKS0_
// Address: 00430c10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint _ZNK7android15ResTable_config4diffERKS0_(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [15];
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    piVar6 = (int *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x34) != '\0') {
      piVar6 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
    }
    piVar4 = (int *)(param_2 + 0x24);
    if (*(char *)(param_2 + 0x34) != '\0') {
      piVar4 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
    }
    if ((*piVar6 == *piVar4) && (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) {
      bVar8 = *(long *)(param_1 + 0x35) == *(long *)(param_2 + 0x35);
    }
    else {
      bVar8 = false;
    }
  }
  else {
    bVar8 = false;
  }
  bVar5 = *(byte *)(param_2 + 0x1c) ^ *(byte *)(param_1 + 0x1c);
  bVar7 = *(short *)(param_1 + 4) != *(short *)(param_2 + 4);
  uVar1 = bVar7 + 2;
  if (*(short *)(param_1 + 6) == *(short *)(param_2 + 6)) {
    uVar1 = (uint)bVar7;
  }
  uVar2 = uVar1 + 0x80;
  if (*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 0x100;
  if (*(short *)(param_1 + 0xe) == *(short *)(param_2 + 0xe)) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 8;
  if (*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x20;
  if (((*(byte *)(param_2 + 0x12) ^ *(byte *)(param_1 + 0x12)) & 0xf) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x10;
  if (*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x40;
  if (*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11)) {
    uVar1 = uVar2;
  }
  uVar2 = *(uint *)(param_2 + 0x30) ^ *(uint *)(param_1 + 0x30);
  uVar13 = (undefined1)(uVar2 >> 0x18);
  uVar12 = (undefined1)(uVar2 >> 0x10);
  uVar11 = (undefined1)(uVar2 >> 8);
  auVar9._4_4_ = (int)(CONCAT35(CONCAT21(CONCAT11(uVar13,uVar13),uVar12),CONCAT14(uVar12,uVar2)) >>
                      0x20);
  auVar9[3] = uVar11;
  auVar9[2] = uVar11;
  auVar9[0] = (undefined1)uVar2;
  auVar9[1] = auVar9[0];
  auVar9._8_8_ = 0;
  auVar9 = auVar9 & _UNK_00156490;
  uVar2 = uVar1 | 0x200;
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    uVar2 = uVar1;
  }
  auVar15 = SUB1615((undefined1  [16])0x0,1);
  auVar14[0] = -(auVar9[0] == '\0');
  auVar14[1] = -(auVar9[1] == '\0');
  auVar14[2] = -(auVar9[2] == '\0');
  auVar14[3] = -(auVar9[3] == '\0');
  auVar14[4] = -(auVar9[4] == '\0');
  auVar14[5] = -(auVar9[5] == '\0');
  auVar14[6] = -(auVar9[6] == '\0');
  auVar14[7] = -(auVar9[7] == '\0');
  auVar14[8] = -(auVar9[8] == '\0');
  auVar14[9] = -(auVar15[8] == auVar9[9]);
  auVar14[10] = -(auVar15[9] == auVar9[10]);
  auVar14[0xb] = -(auVar15[10] == auVar9[0xb]);
  auVar14[0xc] = -(auVar15[0xb] == auVar9[0xc]);
  auVar14[0xd] = -(auVar15[0xc] == auVar9[0xd]);
  auVar14[0xe] = -(auVar15[0xd] == auVar9[0xe]);
  auVar14[0xf] = -(auVar15[0xe] == auVar9[0xf]);
  auVar9 = pshuflw(auVar9,auVar14,0x50);
  auVar10._0_4_ = auVar9._0_4_;
  auVar10._4_4_ = auVar10._0_4_;
  auVar10._8_4_ = auVar9._4_4_;
  auVar10._12_4_ = auVar9._4_4_;
  uVar1 = uVar2 | 0x400;
  if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x4000;
  if (bVar5 < 0x40) {
    uVar2 = uVar1;
  }
  uVar3 = movmskpd(*(int *)(param_2 + 0x18),auVar10);
  uVar1 = uVar2 | 0x800;
  if ((bVar5 & 0x3f) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x8000;
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x10000;
  if ((uVar3 & 2) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x1000;
  if (*(char *)(param_1 + 0x1d) == *(char *)(param_2 + 0x1d)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x2000;
  if (*(short *)(param_1 + 0x1e) == *(short *)(param_2 + 0x1e)) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x200;
  if (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x20000;
  if (*(char *)(param_1 + 0x13) == *(char *)(param_2 + 0x13)) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 4;
  if (bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}


