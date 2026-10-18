// Function: _ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv
// Address: 004b9150
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal11SerialArena31AllocateFromStringBlockFallbackEv(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  ushort uVar12;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    plVar7 = *(long **)(param_1 + 0x18);
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar10 = 0x100;
    if (0xff < (long)(uVar6 - (long)plVar7)) goto code_r0x004b91d3;
    uVar9 = 0x100;
    uVar12 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x70) = (ulong)*(ushort *)(lVar2 + 8) + *(long *)(param_1 + 0x70) + -0x10;
    uVar1 = *(ushort *)(lVar2 + 10);
    uVar9 = (ulong)uVar1;
    uVar10 = (ulong)uVar1;
    plVar7 = *(long **)(param_1 + 0x18);
    uVar6 = *(ulong *)(param_1 + 0x20);
    if ((long)uVar10 <= (long)(uVar6 - (long)plVar7)) {
code_r0x004b91d3:
      uVar9 = (long)plVar7 + uVar10;
      *(ulong *)(param_1 + 0x18) = uVar9;
      uVar8 = *(ulong *)(param_1 + 8);
      if (((long)(uVar8 - uVar9) < 0x401) && (uVar8 < uVar6)) {
        if (uVar9 < uVar8) {
          uVar9 = uVar8;
        }
        uVar8 = uVar9;
        if (uVar9 + 0x400 < uVar6) {
          uVar6 = uVar9 + 0x400;
        }
        for (; uVar8 < uVar6; uVar8 = uVar8 + 0x40) {
        }
      }
      *(ulong *)(param_1 + 8) = uVar8;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) - uVar10;
      if (lVar2 == 0) {
        uVar11 = 0x100;
      }
      else {
        uVar5 = (int)uVar10 * 2;
        uVar11 = 0x2000;
        if ((uVar5 & 0xffff) < 0x2000) {
          uVar11 = (short)uVar5;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10 - 0x10;
      *plVar7 = lVar2;
      *(ushort *)(plVar7 + 1) =
           (((ushort)(SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 1) & 0xfff8) * 3 -
           (short)(uVar10 - 0x10)) + (short)uVar10;
      *(undefined2 *)((long)plVar7 + 10) = uVar11;
      *(undefined1 *)((long)plVar7 + 0xc) = 0;
      goto code_r0x004b924d;
    }
    uVar12 = 0x2000;
    if ((ushort)(uVar1 * 2) < 0x2000) {
      uVar12 = uVar1 * 2;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9 - 0x10;
  uVar5 = ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 1 & 0xfffffff8) * 3 -
          (int)(uVar9 - 0x10)) + (int)uVar9;
  uVar6 = (ulong)(uVar5 & 0xffff);
  plVar7 = (long *)_Znwm(uVar6);
  *plVar7 = lVar2;
  *(short *)(plVar7 + 1) = (short)uVar5;
  *(ushort *)((long)plVar7 + 10) = uVar12;
  *(undefined1 *)((long)plVar7 + 0xc) = 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar6;
code_r0x004b924d:
  *(long **)(param_1 + 0x38) = plVar7;
  uVar12 = *(ushort *)(plVar7 + 1);
  *(ulong *)(param_1 + 0x48) = (ulong)uVar12 - 0x28;
  return (long)plVar7 + ((ulong)uVar12 - 0x18);
}


