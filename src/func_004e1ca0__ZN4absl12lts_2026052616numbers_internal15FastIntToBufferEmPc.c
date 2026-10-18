// Function: _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
// Address: 004e1ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc(ulong param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  if (param_1 >> 0x20 == 0) {
    if (param_1 < 10) {
      *(byte *)param_2 = (byte)param_1 | 0x30;
      plVar7 = (long *)((long)param_2 + 1);
      goto code_r0x004e1ed3;
    }
    uVar3 = param_1 & 0xffffffff;
    if (99999999 < param_1) {
      uVar10 = (uint)(uVar3 / 100000000);
      uVar4 = (int)param_1 + uVar10 * -100000000;
      uVar6 = (ulong)uVar4 * 0x68db8bb;
      uVar6 = (ulong)(uVar4 + (uint)(uVar6 >> 0x28) * -10000) << 0x20 | uVar6 >> 0x28;
      lVar11 = (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar6 * 0x10000;
      uVar6 = (ulong)(lVar11 * 0x67) >> 10 & 0xf000f000f000f;
      iVar8 = (int)(uVar3 / 100000000) + -10;
      lVar5 = (long)(iVar8 >> 8);
      *(short *)param_2 =
           (short)((int)(uVar3 / 100000000) * 0x100 + (uVar10 / 10) * -0x9ff + 0x3030 >>
                  ((byte)((uint)iVar8 >> 8) & 8));
      *(ulong *)((long)param_2 + lVar5 + 2) =
           (uVar6 | 0x3030303030303030) + (uVar6 * 0xfffffffffffff6 + lVar11) * 0x100;
      plVar7 = (long *)((long)param_2 + lVar5 + 10);
      goto code_r0x004e1ed3;
    }
    uVar3 = (ulong)(uint)((int)param_1 + (int)(uVar3 / 10000) * -10000) << 0x20 | uVar3 / 10000;
    lVar5 = (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar3 * 0x10000;
    uVar4 = 0;
    uVar6 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
    for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
    *param_2 = uVar6 + 0x3030303030303030 >> ((byte)uVar4 & 0x38);
    plVar7 = (long *)((long)param_2 - (ulong)(uVar4 >> 3));
  }
  else {
    uVar3 = param_1 / 100000000;
    uVar6 = param_1 % 100000000;
    if (param_1 < 10000000000000000) {
      uVar3 = (ulong)((int)uVar3 + (uint)(uVar3 * 0xd1b71759 >> 0x2d) * -10000) << 0x20 |
              uVar3 * 0xd1b71759 >> 0x2d;
      lVar5 = (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar3 * 0x10000;
      uVar4 = 0;
      uVar9 = ((ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar5 * 0x100;
      for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        uVar4 = uVar4 + 1;
      }
      *param_2 = uVar9 + 0x3030303030303030 >> ((byte)uVar4 & 0x38);
      lVar5 = 8 - (ulong)(uVar4 >> 3);
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar5 = uVar3 + (ulong)(SUB164(auVar1 * ZEXT816(0x55e63b88c3),8) >> 1) * -100000000;
      uVar3 = lVar5 * 0x68db8bb;
      uVar3 = (ulong)((int)lVar5 + (uint)(uVar3 >> 0x28) * -10000) << 0x20 | uVar3 >> 0x28;
      lVar5 = (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar3 * 0x10000;
      uVar3 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
      uVar4 = (uint)(param_1 / 10000000000000000);
      uVar4 = (uVar4 % 100) * 0x10000 | uVar4 / 100;
      uVar2 = uVar4 * 0x67 >> 10 & 0xf000f;
      iVar8 = (uVar2 * 0xfffff6 + uVar4) * 0x100;
      uVar10 = 0;
      for (uVar4 = iVar8 + uVar2; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      *(uint *)param_2 = iVar8 + uVar2 + 0x30303030 >> ((byte)uVar10 & 0x18);
      *(ulong *)((long)param_2 + (4 - (ulong)(uVar10 >> 3))) =
           (uVar3 | 0x3030303030303030) + (uVar3 * 0xfffffffffffff6 + lVar5) * 0x100;
      lVar5 = 0xc - (ulong)(uVar10 >> 3);
    }
    plVar7 = (long *)((long)param_2 + lVar5);
    uVar3 = (ulong)(uint)((int)uVar6 + (int)(uVar6 / 10000) * -10000) << 0x20 | uVar6 / 10000;
    lVar5 = (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar3 * 0x10000;
    uVar3 = (ulong)(lVar5 * 0x67) >> 10 & 0xf000f000f000f;
    *plVar7 = (uVar3 | 0x3030303030303030) + (uVar3 * 0xfffffffffffff6 + lVar5) * 0x100;
  }
  plVar7 = plVar7 + 1;
code_r0x004e1ed3:
  *(undefined1 *)plVar7 = 0;
  return plVar7;
}


