// Function: _ZN4absl12lts_202605264CeilENS0_8DurationES1_
// Address: 004ccce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_202605264CeilENS0_8DurationES1_(ulong param_1,uint param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uStack_48;
  uint uStack_40;
  long lStack_38;
  
  uVar9 = (ulong)param_4;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = &uStack_48;
  uVar8 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  _ZN4absl12lts_202605268DurationrMES1_(puVar11,param_3,param_4);
  if (param_2 == 0xffffffff) {
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
    uVar3 = param_1;
    uVar2 = param_1;
    if (param_1 == 0x8000000000000000) {
code_r0x004ccda3:
      uVar6 = (ulong)uVar5;
      uVar3 = uVar2;
      uVar2 = 0x8000000000000000;
      uVar8 = (ulong)(uVar5 + 1);
      if (uVar5 + 1 < param_2 + 1) {
code_r0x004ccdcf:
        uVar13 = param_3;
        if ((long)param_3 < 0) {
          uVar9 = 0xffffffff;
          uVar13 = 0x7fffffffffffffff;
          if (param_4 != 0xffffffff) {
            if (param_4 == 0) {
              if (param_3 != 0x8000000000000000) {
                uVar9 = 0;
                uVar13 = -param_3;
              }
            }
            else {
              uVar9 = (ulong)(4000000000 - param_4);
              uVar13 = ~param_3;
            }
          }
        }
        uVar6 = 0xffffffff;
        uVar3 = uVar2;
        uVar8 = uVar9;
        if ((uVar5 != 0xffffffff) && (uVar3 = uVar13, (int)uVar9 != -1)) {
          puVar11 = (ulong *)(4000000000 - uVar9);
          uVar7 = uVar5 + 0x1194d800;
          if ((long)(ulong)uVar5 < (long)puVar11) {
            uVar7 = uVar5;
          }
          uVar13 = (ulong)((long)puVar11 <= (long)(ulong)uVar5) + uVar13 + uVar2;
          uVar6 = 0xffffffff;
          uVar3 = 0x7fffffffffffffff;
          if ((long)uVar2 <= (long)uVar13) {
            uVar6 = (ulong)(uVar7 + (int)uVar9);
            uVar3 = uVar13;
          }
        }
      }
    }
  }
  else {
    if (uStack_40 == 0xffffffff) {
      uVar8 = 0x7fffffffffffffff;
      if (-1 < (long)uStack_48) {
        uVar8 = 0x8000000000000000;
      }
code_r0x004ccd91:
      uVar2 = uVar8;
      uVar5 = 0xffffffff;
    }
    else {
      uVar2 = (param_1 - uStack_48) - (ulong)(param_2 < uStack_40);
      uVar5 = param_2 + 4000000000;
      if (uStack_40 <= param_2) {
        uVar5 = param_2;
      }
      uVar5 = uVar5 - uStack_40;
      if ((long)uStack_48 < 0) {
        if ((long)uVar2 < (long)param_1) {
          uVar8 = 0x7fffffffffffffff;
          goto code_r0x004ccd91;
        }
      }
      else {
        uVar8 = 0x8000000000000000;
        if ((long)param_1 < (long)uVar2) goto code_r0x004ccd91;
      }
    }
    uVar3 = uVar2;
    uVar8 = uStack_48;
    if (uVar2 == param_1) {
      if (param_1 == 0x8000000000000000) goto code_r0x004ccda3;
      uVar6 = (ulong)uVar5;
      uVar2 = param_1;
      if (uVar5 < param_2) goto code_r0x004ccdcf;
    }
    else {
      uVar6 = (ulong)uVar5;
      if ((long)uVar2 < (long)param_1) goto code_r0x004ccdcf;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    auVar14._8_8_ = uVar6;
    auVar14._0_8_ = uVar3;
    return auVar14;
  }
  func_0x0099bd00();
  if (uVar8 < 1000000000) {
    uVar7 = (int)uVar8 << 2;
    puVar4 = puVar11;
  }
  else {
    lVar10 = (long)uVar8 % 1000000000;
    lVar12 = (lVar10 >> 0x3d) + (long)uVar8 / 1000000000;
    uVar5 = (int)lVar10 * 4 + 4000000000;
    if (-1 < lVar10) {
      uVar5 = (int)lVar10 * 4;
    }
    puVar4 = (ulong *)((long)puVar11 + ((lVar12 + 1) - (ulong)(uVar5 < 4000000000)));
    uVar7 = uVar5 + 0x1194d800;
    if (uVar5 < 4000000000) {
      uVar7 = uVar5;
    }
    if (lVar12 < 0) {
      if ((long)puVar4 <= (long)puVar11) goto code_r0x004ccf2d;
      puVar1 = (ulong *)0x8000000000000000;
    }
    else {
      puVar1 = (ulong *)0x7fffffffffffffff;
      if ((long)puVar11 <= (long)puVar4) goto code_r0x004ccf2d;
    }
    puVar4 = puVar1;
    uVar7 = 0xffffffff;
  }
code_r0x004ccf2d:
  auVar15._8_4_ = uVar7;
  auVar15._0_8_ = puVar4;
  auVar15._12_4_ = 0;
  return auVar15;
}


