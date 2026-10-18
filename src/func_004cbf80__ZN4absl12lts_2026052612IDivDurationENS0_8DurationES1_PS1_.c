// Function: _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
// Address: 004cbf80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004ce605) */

ulong _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                (ulong param_1,uint param_2,ulong param_3,uint param_4,ulong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if ((param_2 != 0xffffffff) && (param_4 != 0xffffffff)) {
    if (param_3 == 0) {
      if ((int)param_4 < 4000) {
        if (param_4 == 4) {
          if (param_1 >> 8 < 0x225c17d) {
            uVar5 = (ulong)(param_2 >> 2) + param_1 * 1000000000;
            param_2 = param_2 & 3;
            uVar6 = 0;
            goto code_r0x004cc147;
          }
        }
        else if ((param_4 == 400) && (param_1 < 0xd6bf94d455)) {
          uVar5 = param_1 * 10000000 + (ulong)param_2 / 400;
          iVar7 = (param_2 / 400) * 400;
          goto code_r0x004cc10a;
        }
      }
      else if (param_4 == 4000) {
        if (param_1 < 0x8637bd04b56) {
          uVar5 = param_1 * 1000000 + (ulong)param_2 / 4000;
          iVar7 = (param_2 / 4000) * 4000;
          goto code_r0x004cc10a;
        }
      }
      else if ((param_4 == 4000000) && (param_1 < 0x20c49ba5a64af7)) {
        uVar5 = param_1 * 1000 + (ulong)param_2 / 4000000;
        iVar7 = (param_2 / 4000000) * 4000000;
code_r0x004cc10a:
        param_2 = param_2 - iVar7;
        uVar6 = 0;
code_r0x004cc147:
        *param_5 = uVar6;
        *(uint *)(param_5 + 1) = param_2;
        return uVar5;
      }
    }
    else if (param_4 == 0 && 0 < (long)param_3) {
      if ((long)param_1 < 0) {
        uVar4 = -param_1 - (ulong)(param_2 != 0);
        if ((uVar4 | param_3) >> 0x20 == 0) {
          uVar5 = (uVar4 & 0xffffffff) / (param_3 & 0xffffffff);
          uVar4 = (uVar4 & 0xffffffff) % (param_3 & 0xffffffff);
        }
        else {
          uVar5 = uVar4 / param_3;
          uVar4 = uVar4 % param_3;
        }
        uVar5 = -uVar5;
        uVar6 = ~uVar4;
        if (param_2 == 0) {
          uVar6 = -uVar4;
        }
      }
      else if (param_3 == 1) {
        uVar6 = 0;
        uVar5 = param_1;
      }
      else if ((param_1 | param_3) >> 0x20 == 0) {
        uVar5 = (param_1 & 0xffffffff) / (param_3 & 0xffffffff);
        uVar6 = (param_1 & 0xffffffff) % (param_3 & 0xffffffff);
      }
      else {
        uVar5 = param_1 / param_3;
        uVar6 = param_1 % param_3;
      }
      goto code_r0x004cc147;
    }
  }
  uVar5 = param_3 ^ param_1;
  if ((param_2 == 0xffffffff) || (param_3 == 0 && param_4 == 0)) {
    uVar6 = 0x8000000000000000;
    if (-1 < (long)param_1) {
      uVar6 = 0x7fffffffffffffff;
    }
    *param_5 = uVar6;
    *(undefined4 *)(param_5 + 1) = 0xffffffff;
    if ((long)uVar5 < 0) {
      return 0x8000000000000000;
    }
    return 0x7fffffffffffffff;
  }
  if (param_4 == 0xffffffff) {
    *param_5 = param_1;
    *(uint *)(param_5 + 1) = param_2;
    return 0;
  }
  uVar3 = 4000000000 - param_2;
  if (-1 < (long)param_1) {
    uVar3 = param_2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)param_1 >> 0x3f ^ param_1;
  auVar1 = auVar1 * ZEXT816(4000000000) + ZEXT416(uVar3);
  uVar3 = 4000000000 - param_4;
  if (-1 < (long)param_3) {
    uVar3 = param_4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)param_3 >> 0x3f ^ param_3;
  auVar2 = auVar2 * ZEXT816(4000000000) + ZEXT416(uVar3);
  auVar10 = func_0x00998c70(auVar1._0_8_,auVar1._8_8_,auVar2._0_8_,auVar2._8_8_);
  uVar6 = 0x8000000000000000;
  uVar4 = uVar6;
  if (-1 < (long)uVar5) {
    uVar4 = 0x7fffffffffffffff;
  }
  if (-1 < (long)auVar10._0_8_ && auVar10._8_8_ == 0) {
    uVar4 = auVar10._0_8_;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar4;
  auVar1 = auVar1 - auVar2 * auVar10;
  uVar8 = auVar1._0_8_;
  uVar9 = auVar1._8_8_;
  if (uVar9 == 0) {
    uVar6 = uVar8 / 4000000000;
  }
  else {
    if (1999999999 < uVar9) {
      if (-1 < (long)param_1) {
        uVar6 = 0x7fffffffffffffff;
      }
      iVar7 = -(uint)(-1 < (long)param_1 || (uVar8 != 0 || uVar9 != 2000000000));
      goto code_r0x004ce71a;
    }
    uVar6 = func_0x00998c70(uVar8 & 0xfffffffffffff800,uVar9,4000000000,0);
  }
  iVar7 = auVar1._0_4_ + (int)uVar6 * 0x1194d800;
  if ((long)param_1 < 0) {
    if (iVar7 == 0) {
      uVar6 = -uVar6;
      iVar7 = 0;
    }
    else {
      uVar6 = ~uVar6;
      iVar7 = -0x1194d800 - iVar7;
    }
  }
code_r0x004ce71a:
  *param_5 = uVar6;
  *(int *)(param_5 + 1) = iVar7;
  if (((long)uVar5 < 0) && (uVar4 != 0)) {
    uVar4 = -uVar4 | 0x8000000000000000;
  }
  else {
    uVar4 = uVar4 & 0x7fffffffffffffff;
  }
  return uVar4;
}


