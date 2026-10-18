// Function: _ZNK7android15DynamicRefTable16lookupResourceIdEPj
// Address: 00437040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZNK7android15DynamicRefTable16lookupResourceIdEPj(long param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 < 0x1000000) {
code_r0x0043707b:
    uVar6 = *(uint *)(param_1 + 0x108);
  }
  else {
    uVar6 = uVar3 >> 0x18;
    if ((uVar6 == 0x7f & *(byte *)(param_1 + 0x109)) == 1) goto code_r0x0043707b;
    if (uVar6 == 1) {
      puVar4 = *(uint **)(param_1 + 0x138);
      puVar2 = *(uint **)(param_1 + 0x140);
      if (((puVar4 != puVar2) && (*puVar4 <= uVar3)) && (uVar3 <= puVar2[-2])) {
        uVar7 = (long)puVar2 - (long)puVar4 >> 3;
        do {
          uVar8 = uVar7 >> 1;
          puVar5 = puVar4 + uVar8 * 2 + 2;
          uVar7 = ~uVar8 + uVar7;
          if (uVar3 <= puVar4[uVar8 * 2]) {
            puVar5 = puVar4;
            uVar7 = uVar8;
          }
          puVar4 = puVar5;
        } while (uVar7 != 0);
        if ((puVar5 != puVar2) && (*puVar5 == uVar3)) {
          uVar3 = puVar5[1];
        }
      }
      goto code_r0x0043708e;
    }
    if (uVar6 == 0x7f && (*(byte *)(param_1 + 0x109) & 1) == 0) goto code_r0x0043708e;
    bVar1 = *(byte *)(param_1 + 8 + (ulong)uVar6);
    uVar6 = (uint)bVar1;
    if (bVar1 == 0) {
      __android_log_print(5,&UNK_0015b3df,&UNK_00169964,*(undefined1 *)(param_1 + 0x108));
      uVar7 = 0;
      do {
        if (*(char *)(param_1 + 8 + uVar7) != '\0') {
          __android_log_print(5,&UNK_0015b3df,&UNK_00159988,uVar7 & 0xffffffff);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x100);
      return 0x80000000;
    }
  }
  uVar3 = uVar6 << 0x18 | uVar3 & 0xffffff;
code_r0x0043708e:
  *param_2 = uVar3;
  return 0;
}


