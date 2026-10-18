// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12MultiplyStepEiPKjii
// Address: 004ea220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12MultiplyStepEiPKjii
               (int *param_1,int param_2,long param_3,int param_4,uint param_5)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  
  uVar6 = param_2 - 1U;
  if ((int)param_5 < (int)(param_2 - 1U)) {
    uVar6 = param_5;
  }
  if ((int)uVar6 < 0 || param_4 <= (int)(param_5 - uVar6)) {
    param_1[(long)(int)param_5 + 1] = 0;
    return;
  }
  uVar5 = (ulong)uVar6;
  lVar9 = (long)(int)(param_5 - uVar6);
  uVar8 = 0;
  uVar2 = 0;
  do {
    lVar9 = lVar9 + 1;
    uVar3 = (ulong)*(uint *)(param_3 + -4 + lVar9 * 4) * (ulong)(uint)param_1[uVar5 + 1] + uVar2;
    uVar8 = (uVar3 >> 0x20) + uVar8;
    uVar2 = uVar3 & 0xffffffff;
    bVar10 = uVar5 == 0;
    uVar5 = uVar5 - 1;
    if (bVar10) break;
  } while (lVar9 < param_4);
  if ((2 < (int)param_5) || (uVar8 == 0)) goto code_r0x004ea35a;
  uVar5 = uVar8 >> 0x20;
  puVar1 = (uint *)(param_1 + (long)(int)(param_5 + 1) + 1);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + (uint)uVar8;
  if (CARRY4(uVar6,(uint)uVar8)) {
    uVar6 = (int)(uVar8 >> 0x20) + 1;
    uVar5 = (ulong)uVar6;
    if (uVar6 == 0) {
      iVar4 = param_5 + 3;
      if ((int)param_5 < 1) {
        uVar6 = 1;
        do {
          puVar1 = (uint *)(param_1 + (long)iVar4 + 1);
          bVar10 = CARRY4(*puVar1,uVar6);
          *puVar1 = *puVar1 + uVar6;
          iVar4 = iVar4 + (uint)bVar10;
          if (!bVar10) break;
          uVar6 = (uint)bVar10;
        } while (iVar4 < 4);
      }
    }
    else {
code_r0x004ea308:
      iVar4 = 5;
      if (1 < (int)param_5) goto code_r0x004ea341;
      iVar4 = param_5 + 2;
      do {
        puVar1 = (uint *)(param_1 + (long)iVar4 + 1);
        bVar10 = CARRY4(*puVar1,(uint)uVar5);
        *puVar1 = *puVar1 + (uint)uVar5;
        iVar4 = iVar4 + (uint)bVar10;
        if (!bVar10) break;
        uVar5 = (ulong)bVar10;
      } while (iVar4 < 4);
    }
    iVar4 = iVar4 + 1;
  }
  else {
    if (uVar5 != 0) goto code_r0x004ea308;
    iVar4 = param_5 + 2;
  }
code_r0x004ea341:
  iVar7 = *param_1;
  if (*param_1 < iVar4) {
    iVar7 = iVar4;
  }
  iVar4 = 4;
  if (iVar7 < 4) {
    iVar4 = iVar7;
  }
  *param_1 = iVar4;
code_r0x004ea35a:
  param_1[(long)(int)param_5 + 1] = (int)uVar3;
  if ((uVar2 != 0) && (*param_1 <= (int)param_5)) {
    *param_1 = param_5 + 1;
  }
  return;
}


