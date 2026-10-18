// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE21MultiplyByTenToTheNthEi
// Address: 004ea920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004eab12: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004eab17) */

void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE21MultiplyByTenToTheNthEi
               (uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_2;
  if ((int)param_2 < 10) {
    if ((int)param_2 < 1) {
      return;
    }
    uVar5 = *param_1;
    if ((ulong)uVar5 == 0) {
      return;
    }
    if ((int)uVar5 < 1) {
      return;
    }
    uVar11 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal9kTenToNthE + uVar11 * 4);
    if (uVar5 == 1) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      uVar7 = 0;
      uVar10 = 0;
      do {
        uVar10 = param_1[uVar7 + 1] * uVar11 + uVar10;
        param_1[uVar7 + 1] = (uint)uVar10;
        uVar9 = param_1[uVar7 + 2] * uVar11 + (uVar10 >> 0x20);
        param_1[uVar7 + 2] = (uint)uVar9;
        uVar10 = uVar9 >> 0x20;
        uVar7 = uVar7 + 2;
      } while ((uVar5 & 0x7ffffffe) != uVar7);
      if ((uVar5 & 1) == 0) goto code_r0x004eac72;
    }
    uVar9 = param_1[uVar7 + 1] * uVar11 + uVar10;
    param_1[uVar7 + 1] = (uint)uVar9;
    uVar10 = uVar9 >> 0x20;
code_r0x004eac72:
    if (0x53 < uVar5) {
      return;
    }
    if (uVar9 >> 0x20 == 0) {
      return;
    }
    param_1[(ulong)uVar5 + 1] = (uint)uVar10;
    *param_1 = uVar5 + 1;
    return;
  }
  uVar5 = *param_1;
  if (param_2 < 0xd) {
code_r0x004eaa3d:
    if (uVar5 != 0) {
      if ((int)uVar5 < 1) goto code_r0x004eaaf4;
      uVar11 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal10kFiveToNthE + uVar11 * 4);
      if (uVar5 == 1) {
        uVar7 = 0;
        uVar10 = 0;
code_r0x004eaaca:
        uVar9 = param_1[uVar7 + 1] * uVar11 + uVar10;
        param_1[uVar7 + 1] = (uint)uVar9;
        uVar10 = uVar9 >> 0x20;
      }
      else {
        uVar7 = 0;
        uVar10 = 0;
        do {
          uVar10 = param_1[uVar7 + 1] * uVar11 + uVar10;
          param_1[uVar7 + 1] = (uint)uVar10;
          uVar9 = param_1[uVar7 + 2] * uVar11 + (uVar10 >> 0x20);
          param_1[uVar7 + 2] = (uint)uVar9;
          uVar10 = uVar9 >> 0x20;
          uVar7 = uVar7 + 2;
        } while ((uVar5 & 0x7ffffffe) != uVar7);
        if ((uVar5 & 1) != 0) goto code_r0x004eaaca;
      }
      if ((uVar5 < 0x54) && (uVar9 >> 0x20 != 0)) {
        param_1[(ulong)uVar5 + 1] = (uint)uVar10;
        uVar5 = uVar5 + 1;
      }
      goto code_r0x004eaaf4;
    }
    uVar5 = 0;
    if (0xa7f < param_2) goto code_r0x004eab1a;
  }
  else {
    do {
      iVar3 = (int)uVar11;
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar11 = 0;
          uVar7 = 0;
code_r0x004ea9c1:
          uVar10 = (ulong)param_1[uVar11 + 1] * 0x48c27395 + uVar7;
          param_1[uVar11 + 1] = (uint)uVar10;
          uVar7 = uVar10 >> 0x20;
        }
        else {
          uVar11 = 0;
          uVar7 = 0;
          do {
            uVar7 = (ulong)param_1[uVar11 + 1] * 0x48c27395 + uVar7;
            param_1[uVar11 + 1] = (uint)uVar7;
            uVar10 = (ulong)param_1[uVar11 + 2] * 0x48c27395 + (uVar7 >> 0x20);
            param_1[uVar11 + 2] = (uint)uVar10;
            uVar7 = uVar10 >> 0x20;
            uVar11 = uVar11 + 2;
          } while ((uVar5 & 0x7ffffffe) != uVar11);
          if ((uVar5 & 1) != 0) goto code_r0x004ea9c1;
        }
        if ((uVar5 < 0x54) && (uVar10 >> 0x20 != 0)) {
          param_1[(ulong)uVar5 + 1] = (uint)uVar7;
          uVar5 = uVar5 + 1;
        }
      }
      uVar11 = (ulong)(iVar3 - 0xd);
    } while (0x19 < iVar3);
    if (0xd < iVar3) goto code_r0x004eaa3d;
code_r0x004eaaf4:
    if (0xa7f < param_2) {
      if ((int)uVar5 < 1) {
code_r0x004eab1a:
        *param_1 = 0;
        return;
      }
      lVar6 = (ulong)uVar5 << 2;
      goto code_r0x0099bdb0;
    }
  }
  uVar2 = param_2 >> 5;
  uVar5 = uVar5 + uVar2;
  uVar8 = 0x54;
  if ((int)uVar5 < 0x54) {
    uVar8 = uVar5;
  }
  *param_1 = uVar8;
  if ((param_2 & 0x1f) == 0) {
    func_0x0099bd90((long)param_1 + (ulong)(uVar2 * 4) + 4,param_1 + 1);
  }
  else {
    uVar4 = 0x53;
    if ((int)uVar5 < 0x53) {
      uVar4 = uVar5;
    }
    if ((int)uVar2 < (int)uVar4) {
      uVar11 = (ulong)uVar4;
      do {
        bVar1 = (byte)param_2 & 0x1f;
        param_1[uVar11 + 1] =
             *(int *)((long)param_1 + uVar11 * 4 + -(ulong)(uVar2 * 4) + 4) << bVar1 |
             *(uint *)((long)param_1 + uVar11 * 4 + -(ulong)(uVar2 * 4)) >> 0x20 - bVar1;
        uVar11 = uVar11 - 1;
      } while (uVar2 < uVar11);
    }
    param_1[(ulong)uVar2 + 1] = param_1[1] << ((byte)param_2 & 0x1f);
    if (((int)uVar5 < 0x54) && (param_1[(long)(int)uVar8 + 1] != 0)) {
      *param_1 = uVar8 + 1;
    }
  }
  if (param_2 < 0x20) {
    return;
  }
  lVar6 = (ulong)(uVar2 - 1) * 4 + 4;
code_r0x0099bdb0:
  memset(param_1 + 1,0,lVar6);
  return;
}


