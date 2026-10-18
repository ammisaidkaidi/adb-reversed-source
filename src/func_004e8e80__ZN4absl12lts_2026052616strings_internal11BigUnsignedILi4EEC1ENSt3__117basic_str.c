// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EEC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEE
// Address: 004e8e80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004e94cf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004e94d4) */

void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EEC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEE
               (uint *param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_3 == 0) {
    return;
  }
  lVar6 = 0;
  do {
    if (9 < (byte)(*(char *)(param_2 + lVar6) - 0x30U)) {
      if (lVar6 + param_2 != param_3 + param_2) {
        return;
      }
      break;
    }
    lVar6 = lVar6 + 1;
  } while (param_3 != lVar6);
  uVar3 = _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE10ReadDigitsEPKcS5_i();
  if ((int)uVar3 < 1) {
    return;
  }
  uVar12 = (ulong)uVar3;
  if ((int)uVar3 < 10) {
    if ((int)uVar3 < 1) {
      return;
    }
    uVar3 = *param_1;
    if ((ulong)uVar3 == 0) {
      return;
    }
    if ((int)uVar3 < 1) {
      return;
    }
    uVar12 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal9kTenToNthE + uVar12 * 4);
    if (uVar3 == 1) {
      uVar8 = 0;
      uVar11 = 0;
    }
    else {
      uVar8 = 0;
      uVar11 = 0;
      do {
        uVar11 = param_1[uVar8 + 1] * uVar12 + uVar11;
        param_1[uVar8 + 1] = (uint)uVar11;
        uVar10 = param_1[uVar8 + 2] * uVar12 + (uVar11 >> 0x20);
        param_1[uVar8 + 2] = (uint)uVar10;
        uVar11 = uVar10 >> 0x20;
        uVar8 = uVar8 + 2;
      } while ((uVar3 & 0x7ffffffe) != uVar8);
      if ((uVar3 & 1) == 0) goto code_r0x004e9632;
    }
    uVar10 = param_1[uVar8 + 1] * uVar12 + uVar11;
    param_1[uVar8 + 1] = (uint)uVar10;
    uVar11 = uVar10 >> 0x20;
code_r0x004e9632:
    if (3 < uVar3) {
      return;
    }
    if (uVar10 >> 0x20 == 0) {
      return;
    }
    param_1[(ulong)uVar3 + 1] = (uint)uVar11;
    *param_1 = uVar3 + 1;
    return;
  }
  uVar7 = *param_1;
  if (uVar3 < 0xd) {
code_r0x004e940d:
    if (uVar7 != 0) {
      if ((int)uVar7 < 1) goto code_r0x004e94b4;
      uVar12 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal10kFiveToNthE + uVar12 * 4);
      if (uVar7 == 1) {
        uVar8 = 0;
        uVar11 = 0;
code_r0x004e948a:
        uVar10 = param_1[uVar8 + 1] * uVar12 + uVar11;
        param_1[uVar8 + 1] = (uint)uVar10;
        uVar11 = uVar10 >> 0x20;
      }
      else {
        uVar8 = 0;
        uVar11 = 0;
        do {
          uVar11 = param_1[uVar8 + 1] * uVar12 + uVar11;
          param_1[uVar8 + 1] = (uint)uVar11;
          uVar10 = param_1[uVar8 + 2] * uVar12 + (uVar11 >> 0x20);
          param_1[uVar8 + 2] = (uint)uVar10;
          uVar11 = uVar10 >> 0x20;
          uVar8 = uVar8 + 2;
        } while ((uVar7 & 0x7ffffffe) != uVar8);
        if ((uVar7 & 1) != 0) goto code_r0x004e948a;
      }
      if ((uVar7 < 4) && (uVar10 >> 0x20 != 0)) {
        param_1[(ulong)uVar7 + 1] = (uint)uVar11;
        uVar7 = uVar7 + 1;
      }
      goto code_r0x004e94b4;
    }
    uVar7 = 0;
    if (0x7f < uVar3) goto code_r0x004e94d7;
  }
  else {
    do {
      iVar4 = (int)uVar12;
      if (0 < (int)uVar7) {
        if (uVar7 == 1) {
          uVar12 = 0;
          uVar8 = 0;
code_r0x004e9391:
          uVar11 = (ulong)param_1[uVar12 + 1] * 0x48c27395 + uVar8;
          param_1[uVar12 + 1] = (uint)uVar11;
          uVar8 = uVar11 >> 0x20;
        }
        else {
          uVar12 = 0;
          uVar8 = 0;
          do {
            uVar8 = (ulong)param_1[uVar12 + 1] * 0x48c27395 + uVar8;
            param_1[uVar12 + 1] = (uint)uVar8;
            uVar11 = (ulong)param_1[uVar12 + 2] * 0x48c27395 + (uVar8 >> 0x20);
            param_1[uVar12 + 2] = (uint)uVar11;
            uVar8 = uVar11 >> 0x20;
            uVar12 = uVar12 + 2;
          } while ((uVar7 & 0x7ffffffe) != uVar12);
          if ((uVar7 & 1) != 0) goto code_r0x004e9391;
        }
        if ((uVar7 < 4) && (uVar11 >> 0x20 != 0)) {
          param_1[(ulong)uVar7 + 1] = (uint)uVar8;
          uVar7 = uVar7 + 1;
        }
      }
      uVar12 = (ulong)(iVar4 - 0xd);
    } while (0x19 < iVar4);
    if (0xd < iVar4) goto code_r0x004e940d;
code_r0x004e94b4:
    if (0x7f < uVar3) {
      if ((int)uVar7 < 1) {
code_r0x004e94d7:
        *param_1 = 0;
        return;
      }
      lVar6 = (ulong)uVar7 << 2;
      goto code_r0x0099bdb0;
    }
  }
  uVar2 = uVar3 >> 5;
  uVar7 = uVar7 + uVar2;
  uVar9 = 4;
  if ((int)uVar7 < 4) {
    uVar9 = uVar7;
  }
  *param_1 = uVar9;
  if ((uVar3 & 0x1f) == 0) {
    func_0x0099bd90((long)param_1 + (ulong)(uVar2 * 4) + 4,param_1 + 1);
  }
  else {
    uVar5 = 3;
    if ((int)uVar7 < 3) {
      uVar5 = uVar7;
    }
    if ((int)uVar2 < (int)uVar5) {
      uVar12 = (ulong)uVar5;
      do {
        bVar1 = (byte)uVar3 & 0x1f;
        param_1[uVar12 + 1] =
             *(int *)((long)param_1 + uVar12 * 4 + -(ulong)(uVar2 * 4) + 4) << bVar1 |
             *(uint *)((long)param_1 + uVar12 * 4 + -(ulong)(uVar2 * 4)) >> 0x20 - bVar1;
        uVar12 = uVar12 - 1;
      } while (uVar2 < uVar12);
    }
    param_1[(ulong)uVar2 + 1] = param_1[1] << (sbyte)(uVar3 & 0x1f);
    if (((int)uVar7 < 4) && (param_1[(long)(int)uVar9 + 1] != 0)) {
      *param_1 = uVar9 + 1;
    }
  }
  if (uVar3 < 0x20) {
    return;
  }
  lVar6 = (ulong)(uVar2 - 1) * 4 + 4;
code_r0x0099bdb0:
  memset(param_1 + 1,0,lVar6);
  return;
}


