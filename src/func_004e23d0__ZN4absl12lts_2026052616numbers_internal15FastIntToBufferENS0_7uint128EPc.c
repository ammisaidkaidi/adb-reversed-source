// Function: _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
// Address: 004e23d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                 (ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  if (param_2 == 0) {
    if (param_1 >> 0x20 == 0) {
      if (param_1 < 10) {
        *(byte *)param_3 = (byte)param_1 | 0x30;
        pbVar6 = (byte *)((long)param_3 + 1);
      }
      else {
        uVar1 = param_1 & 0xffffffff;
        if (param_1 < 100000000) {
          uVar1 = (ulong)(uint)((int)param_1 + (int)(uVar1 / 10000) * -10000) << 0x20 |
                  uVar1 / 10000;
          lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
          uVar11 = 0;
          uVar9 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
          for (uVar1 = uVar9; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
            uVar11 = uVar11 + 1;
          }
          *param_3 = uVar9 + 0x3030303030303030 >> ((byte)uVar11 & 0x38);
          pbVar6 = (byte *)((long)param_3 + (8 - (ulong)(uVar11 >> 3)));
        }
        else {
          uVar11 = (uint)(uVar1 / 100000000);
          uVar8 = (int)param_1 + uVar11 * -100000000;
          uVar9 = (ulong)uVar8 * 0x68db8bb;
          uVar9 = (ulong)(uVar8 + (uint)(uVar9 >> 0x28) * -10000) << 0x20 | uVar9 >> 0x28;
          lVar7 = (uVar9 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar9 * 0x10000;
          uVar9 = (ulong)(lVar7 * 0x67) >> 10 & 0xf000f000f000f;
          iVar4 = (int)(uVar1 / 100000000) + -10;
          lVar5 = (long)(iVar4 >> 8);
          *(short *)param_3 =
               (short)((int)(uVar1 / 100000000) * 0x100 + (uVar11 / 10) * -0x9ff + 0x3030 >>
                      ((byte)((uint)iVar4 >> 8) & 8));
          *(ulong *)((long)param_3 + lVar5 + 2) =
               (uVar9 | 0x3030303030303030) + (uVar9 * 0xfffffffffffff6 + lVar7) * 0x100;
          pbVar6 = (byte *)((long)param_3 + lVar5 + 10);
        }
      }
    }
    else {
      uVar1 = param_1 / 100000000;
      uVar9 = param_1 % 100000000;
      if (param_1 < 10000000000000000) {
        uVar1 = (ulong)((int)uVar1 + (uint)(uVar1 * 0xd1b71759 >> 0x2d) * -10000) << 0x20 |
                uVar1 * 0xd1b71759 >> 0x2d;
        lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
        uVar11 = 0;
        uVar10 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
        for (uVar1 = uVar10; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
          uVar11 = uVar11 + 1;
        }
        *param_3 = uVar10 + 0x3030303030303030 >> ((byte)uVar11 & 0x38);
        lVar5 = 8 - (ulong)(uVar11 >> 3);
      }
      else {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar1;
        lVar5 = uVar1 + (ulong)(SUB164(auVar12 * ZEXT816(0x55e63b88c3),8) >> 1) * -100000000;
        uVar1 = lVar5 * 0x68db8bb;
        uVar1 = (ulong)((int)lVar5 + (uint)(uVar1 >> 0x28) * -10000) << 0x20 | uVar1 >> 0x28;
        lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
        uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
        uVar11 = (uint)(param_1 / 10000000000000000);
        uVar11 = (uVar11 % 100) * 0x10000 | uVar11 / 100;
        uVar3 = uVar11 * 0x67 >> 10 & 0xf000f;
        iVar4 = (uVar3 * 0xfffff6 + uVar11) * 0x100;
        uVar8 = 0;
        for (uVar11 = iVar4 + uVar3; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        *(uint *)param_3 = iVar4 + uVar3 + 0x30303030 >> ((byte)uVar8 & 0x18);
        *(ulong *)((long)param_3 + (4 - (ulong)(uVar8 >> 3))) =
             (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
        lVar5 = 0xc - (ulong)(uVar8 >> 3);
      }
      uVar1 = (ulong)(uint)((int)uVar9 + (int)(uVar9 / 10000) * -10000) << 0x20 | uVar9 / 10000;
      lVar7 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar7 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)((long)param_3 + lVar5) =
           (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar7) * 0x100;
      pbVar6 = (byte *)((long)param_3 + lVar5) + 8;
    }
  }
  else {
    auVar12 = func_0x00998c70(param_1,param_2,10000000000000000,0);
    uVar9 = param_1 + auVar12._0_8_ * -10000000000000000;
    uVar1 = func_0x00998f60(auVar12._0_8_,auVar12._8_8_,10000000000000000,0);
    if (param_2 < 0x4ee2d6d415c && (ulong)(0x85acef80ffffffff < param_1) <= 0x4ee2d6d415b - param_2)
    {
      if (uVar1 >> 0x20 == 0) {
        uVar11 = (uint)uVar1;
        if (uVar11 < 10) {
          *(byte *)param_3 = (byte)uVar1 | 0x30;
          pbVar6 = (byte *)((long)param_3 + 1);
        }
        else {
          uVar1 = uVar1 & 0xffffffff;
          if (uVar11 < 100000000) {
            uVar1 = (ulong)(uVar11 + (int)(uVar1 / 10000) * -10000) << 0x20 | uVar1 / 10000;
            lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
            uVar11 = 0;
            uVar10 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
            for (uVar1 = uVar10; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
              uVar11 = uVar11 + 1;
            }
            *param_3 = uVar10 + 0x3030303030303030 >> ((byte)uVar11 & 0x38);
            pbVar6 = (byte *)((long)param_3 + (8 - (ulong)(uVar11 >> 3)));
          }
          else {
            uVar8 = (uint)(uVar1 / 100000000);
            uVar11 = uVar11 + uVar8 * -100000000;
            uVar10 = (ulong)uVar11 * 0x68db8bb;
            uVar10 = (ulong)(uVar11 + (uint)(uVar10 >> 0x28) * -10000) << 0x20 | uVar10 >> 0x28;
            lVar5 = (uVar10 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar10 * 0x10000;
            uVar10 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
            iVar4 = (int)(uVar1 / 100000000) + -10;
            lVar7 = (long)(iVar4 >> 8);
            *(short *)param_3 =
                 (short)((int)(uVar1 / 100000000) * 0x100 + (uVar8 / 10) * -0x9ff + 0x3030 >>
                        ((byte)((uint)iVar4 >> 8) & 8));
            *(ulong *)((long)param_3 + lVar7 + 2) =
                 (uVar10 | 0x3030303030303030) + (uVar10 * 0xfffffffffffff6 + lVar5) * 0x100;
            pbVar6 = (byte *)((long)param_3 + lVar7 + 10);
          }
        }
      }
      else {
        uVar2 = func_0x004e5d80(uVar1 / 100000000 & 0xffffffff);
        uVar11 = 0;
        for (uVar10 = uVar2; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar11 = uVar11 + 1;
        }
        *param_3 = uVar2 + 0x3030303030303030 >> ((byte)uVar11 & 0x38);
        uVar1 = uVar1 % 100000000;
        uVar1 = (ulong)(uint)((int)uVar1 + (int)(uVar1 / 10000) * -10000) << 0x20 | uVar1 / 10000;
        lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
        uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
        *(ulong *)((long)param_3 + (8 - (ulong)(uVar11 >> 3))) =
             (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
        pbVar6 = (byte *)((long)param_3 + (0x10 - (ulong)(uVar11 >> 3)));
      }
      uVar10 = uVar9 % 100000000;
      uVar1 = (uVar9 / 100000000) * 0xd1b71759;
      uVar1 = (ulong)((int)(uVar9 / 100000000) + (uint)(uVar1 >> 0x2d) * -10000) << 0x20 |
              uVar1 >> 0x2d;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)pbVar6 = (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      uVar1 = (ulong)(uint)((int)uVar10 + (int)(uVar10 / 10000) * -10000) << 0x20 | uVar10 / 10000;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)(pbVar6 + 8) =
           (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      pbVar6 = pbVar6 + 0x10;
    }
    else {
      uVar11 = func_0x00998c70(param_1,param_2,0x85acef8100000000,0x4ee2d6d415b);
      if (uVar11 < 10) {
        *(byte *)param_3 = (byte)uVar11 | 0x30;
        pbVar6 = (byte *)((long)param_3 + 1);
      }
      else {
        uVar10 = (ulong)(uVar11 % 10000) << 0x20 | (ulong)uVar11 / 10000;
        lVar5 = (uVar10 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar10 * 0x10000;
        uVar11 = 0;
        uVar2 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
        for (uVar10 = uVar2; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar11 = uVar11 + 1;
        }
        *param_3 = uVar2 + 0x3030303030303030 >> ((byte)uVar11 & 0x38);
        pbVar6 = (byte *)((long)param_3 + (8 - (ulong)(uVar11 >> 3)));
      }
      uVar2 = uVar1 % 100000000;
      uVar10 = (uVar1 / 100000000) * 0xd1b71759;
      uVar1 = (ulong)((int)(uVar1 / 100000000) + (uint)(uVar10 >> 0x2d) * -10000) << 0x20 |
              uVar10 >> 0x2d;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)pbVar6 = (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      uVar1 = (ulong)(uint)((int)uVar2 + (int)(uVar2 / 10000) * -10000) << 0x20 | uVar2 / 10000;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)(pbVar6 + 8) =
           (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      uVar10 = uVar9 % 100000000;
      uVar1 = (uVar9 / 100000000) * 0xd1b71759;
      uVar1 = (ulong)((int)(uVar9 / 100000000) + (uint)(uVar1 >> 0x2d) * -10000) << 0x20 |
              uVar1 >> 0x2d;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)(pbVar6 + 0x10) =
           (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      uVar1 = (ulong)(uint)((int)uVar10 + (int)(uVar10 / 10000) * -10000) << 0x20 | uVar10 / 10000;
      lVar5 = (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar1 * 0x10000;
      uVar1 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      *(ulong *)(pbVar6 + 0x18) =
           (uVar1 | 0x3030303030303030) + (uVar1 * 0xfffffffffffff6 + lVar5) * 0x100;
      pbVar6 = pbVar6 + 0x20;
    }
  }
  *pbVar6 = 0;
  return pbVar6;
}


