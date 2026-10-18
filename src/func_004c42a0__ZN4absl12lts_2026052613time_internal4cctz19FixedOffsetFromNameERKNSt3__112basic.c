// Function: _ZN4absl12lts_2026052613time_internal4cctz19FixedOffsetFromNameERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS3_6chrono8durationIlNS3_5ratioILl1ELl1EEEEE
// Address: 004c42a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052613time_internal4cctz19FixedOffsetFromNameERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS3_6chrono8durationIlNS3_5ratioILl1ELl1EEEEE
          (byte *param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if (uVar6 == 0x12) {
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    if ((((param_1[8] != 0x43 || *(long *)param_1 != 0x54552f6465786946) ||
         ((((bVar1 = param_1[9], bVar1 != 0x2d && (bVar1 != 0x2b)) || (param_1[0xc] != 0x3a)) ||
          ((param_1[0xf] != 0x3a || (iVar2 = func_0x004c43e0(param_1 + 10), iVar2 == -1)))))) ||
        (iVar3 = func_0x004c43e0(param_1 + 0xd), iVar3 == -1)) ||
       ((iVar4 = func_0x004c43e0(param_1 + 0x10), iVar4 == -1 ||
        (iVar4 = iVar4 + (iVar3 + iVar2 * 0x3c) * 0x3c, 0x15180 < iVar4)))) {
      return 0;
    }
    iVar2 = -iVar4;
    if (bVar1 != 0x2d) {
      iVar2 = iVar4;
    }
    lVar5 = (long)iVar2;
  }
  else if (uVar6 == 4) {
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    lVar5 = 0;
    if (*(int *)param_1 != 0x30435455) {
      return 0;
    }
  }
  else {
    if (uVar6 != 3) {
      return 0;
    }
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    lVar5 = 0;
    if (param_1[2] != 0x43 || *(short *)param_1 != 0x5455) {
      return 0;
    }
  }
  *param_2 = lVar5;
  return CONCAT71((int7)((ulong)lVar5 >> 8),1);
}


