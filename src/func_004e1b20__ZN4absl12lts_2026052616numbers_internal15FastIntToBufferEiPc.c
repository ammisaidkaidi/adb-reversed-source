// Function: _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc
// Address: 004e1b20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uint param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((int)param_1 < 0) {
    *(undefined1 *)param_2 = 0x2d;
    param_2 = (ulong *)((long)param_2 + 1);
    param_1 = -param_1;
  }
  if (param_1 < 10) {
    *(byte *)param_2 = (byte)param_1 | 0x30;
    puVar2 = (undefined1 *)((long)param_2 + 1);
  }
  else if (param_1 < 100000000) {
    uVar5 = (ulong)(param_1 % 10000) << 0x20 | (ulong)param_1 / 10000;
    lVar6 = (uVar5 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar5 * 0x10000;
    uVar1 = 0;
    uVar4 = ((ulong)(lVar6 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar6 * 0x100;
    for (uVar5 = uVar4; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
      uVar1 = uVar1 + 1;
    }
    *param_2 = uVar4 + 0x3030303030303030 >> ((byte)uVar1 & 0x38);
    puVar2 = (undefined1 *)((long)param_2 + (8 - (ulong)(uVar1 >> 3)));
  }
  else {
    uVar5 = (ulong)((param_1 % 100000000) % 10000) << 0x20 | (ulong)(param_1 % 100000000) / 10000;
    lVar7 = (uVar5 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff + uVar5 * 0x10000;
    uVar5 = (ulong)(lVar7 * 0x67) >> 10 & 0xf000f000f000f;
    iVar3 = param_1 / 100000000 - 10;
    lVar6 = (long)(iVar3 >> 8);
    *(short *)param_2 =
         (short)((param_1 / 100000000) * 0x100 + (param_1 / 1000000000) * -0x9ff + 0x3030 >>
                ((byte)((uint)iVar3 >> 8) & 8));
    *(ulong *)((long)param_2 + lVar6 + 2) =
         (uVar5 | 0x3030303030303030) + (uVar5 * 0xfffffffffffff6 + lVar7) * 0x100;
    puVar2 = (undefined1 *)((long)param_2 + lVar6 + 10);
  }
  *puVar2 = 0;
  return;
}


