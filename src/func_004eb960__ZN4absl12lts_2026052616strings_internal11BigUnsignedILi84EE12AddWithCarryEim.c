// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12AddWithCarryEim
// Address: 004eb960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12AddWithCarryEim
               (int *param_1,int param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  if (0x53 < param_2 || param_3 == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + (long)param_2 + 1);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (uint)param_3;
  if (CARRY4(uVar2,(uint)param_3)) {
    uVar4 = uVar4 + 1;
    if (uVar4 != 0) goto code_r0x004eb9c6;
    iVar3 = param_2 + 2;
    if (param_2 < 0x52) {
      uVar4 = 1;
      do {
        puVar1 = (uint *)(param_1 + (long)iVar3 + 1);
        bVar6 = CARRY4(*puVar1,uVar4);
        *puVar1 = *puVar1 + uVar4;
        iVar3 = iVar3 + (uint)bVar6;
        if (!bVar6) break;
        uVar4 = (uint)bVar6;
      } while (iVar3 < 0x54);
    }
  }
  else {
    if (uVar4 == 0) {
      iVar3 = param_2 + 1;
      goto code_r0x004eb9fb;
    }
code_r0x004eb9c6:
    iVar3 = 0x55;
    if (0x52 < param_2) goto code_r0x004eb9fb;
    iVar3 = param_2 + 1;
    do {
      puVar1 = (uint *)(param_1 + (long)iVar3 + 1);
      bVar6 = CARRY4(*puVar1,uVar4);
      *puVar1 = *puVar1 + uVar4;
      iVar3 = iVar3 + (uint)bVar6;
      if (!bVar6) break;
      uVar4 = (uint)bVar6;
    } while (iVar3 < 0x54);
  }
  iVar3 = iVar3 + 1;
code_r0x004eb9fb:
  iVar5 = *param_1;
  if (*param_1 < iVar3) {
    iVar5 = iVar3;
  }
  iVar3 = 0x54;
  if (iVar5 < 0x54) {
    iVar3 = iVar5;
  }
  *param_1 = iVar3;
  return;
}


