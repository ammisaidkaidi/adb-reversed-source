// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE9ShiftLeftEi
// Address: 004ead10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004ead43: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004ead48) */

void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE9ShiftLeftEi
               (uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((int)param_2 < 1) {
    return;
  }
  uVar3 = *param_1;
  if (param_2 < 0xa80) {
    uVar7 = param_2 >> 5;
    uVar3 = uVar3 + uVar7;
    uVar5 = 0x54;
    if ((int)uVar3 < 0x54) {
      uVar5 = uVar3;
    }
    *param_1 = uVar5;
    if ((param_2 & 0x1f) == 0) {
      func_0x0099bd90((long)param_1 + (ulong)(uVar7 * 4) + 4,param_1 + 1);
    }
    else {
      uVar2 = 0x53;
      if ((int)uVar3 < 0x53) {
        uVar2 = uVar3;
      }
      if ((int)uVar7 < (int)uVar2) {
        uVar6 = (ulong)uVar2;
        do {
          bVar1 = (byte)param_2 & 0x1f;
          param_1[uVar6 + 1] =
               *(int *)((long)param_1 + uVar6 * 4 + -(ulong)(uVar7 * 4) + 4) << bVar1 |
               *(uint *)((long)param_1 + uVar6 * 4 + -(ulong)(uVar7 * 4)) >> 0x20 - bVar1;
          uVar6 = uVar6 - 1;
        } while (uVar7 < uVar6);
      }
      param_1[(ulong)uVar7 + 1] = param_1[1] << (sbyte)(param_2 & 0x1f);
      if (((int)uVar3 < 0x54) && (param_1[(long)(int)uVar5 + 1] != 0)) {
        *param_1 = uVar5 + 1;
      }
    }
    if (param_2 < 0x20) {
      return;
    }
    lVar4 = (ulong)(uVar7 - 1) * 4 + 4;
  }
  else {
    if ((int)uVar3 < 1) {
      *param_1 = 0;
      return;
    }
    lVar4 = (ulong)uVar3 << 2;
  }
  memset(param_1 + 1,0,lVar4);
  return;
}


