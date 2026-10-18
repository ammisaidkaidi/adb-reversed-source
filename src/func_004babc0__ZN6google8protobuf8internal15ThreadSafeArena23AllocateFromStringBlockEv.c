// Function: _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
// Address: 004babc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(long *param_1)

{
  ushort uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  ushort uVar13;
  long *in_FS_OFFSET;
  
  if (*(long *)(*in_FS_OFFSET + -0x118) == *param_1) {
    lVar8 = *(long *)(*in_FS_OFFSET + -0x110);
  }
  else {
    lVar8 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm(param_1,0x10);
  }
  lVar2 = *(long *)(lVar8 + 0x48);
  if (lVar2 != 0) {
    *(long *)(lVar8 + 0x48) = lVar2 + -0x18;
    return *(long *)(lVar8 + 0x38) + lVar2 + -8;
  }
  lVar2 = *(long *)(lVar8 + 0x38);
  if (lVar2 == 0) {
    plVar7 = *(long **)(lVar8 + 0x18);
    uVar6 = *(ulong *)(lVar8 + 0x20);
    uVar11 = 0x100;
    if (0xff < (long)(uVar6 - (long)plVar7)) goto code_r0x004b91d3;
    uVar10 = 0x100;
    uVar13 = 0x100;
  }
  else {
    *(ulong *)(lVar8 + 0x70) = (ulong)*(ushort *)(lVar2 + 8) + *(long *)(lVar8 + 0x70) + -0x10;
    uVar1 = *(ushort *)(lVar2 + 10);
    uVar10 = (ulong)uVar1;
    uVar11 = (ulong)uVar1;
    plVar7 = *(long **)(lVar8 + 0x18);
    uVar6 = *(ulong *)(lVar8 + 0x20);
    if ((long)uVar11 <= (long)(uVar6 - (long)plVar7)) {
code_r0x004b91d3:
      uVar10 = (long)plVar7 + uVar11;
      *(ulong *)(lVar8 + 0x18) = uVar10;
      uVar9 = *(ulong *)(lVar8 + 8);
      if (((long)(uVar9 - uVar10) < 0x401) && (uVar9 < uVar6)) {
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        uVar9 = uVar10;
        if (uVar10 + 0x400 < uVar6) {
          uVar6 = uVar10 + 0x400;
        }
        for (; uVar9 < uVar6; uVar9 = uVar9 + 0x40) {
        }
      }
      *(ulong *)(lVar8 + 8) = uVar9;
      *(long *)(lVar8 + 0x70) = *(long *)(lVar8 + 0x70) - uVar11;
      if (lVar2 == 0) {
        uVar12 = 0x100;
      }
      else {
        uVar5 = (int)uVar11 * 2;
        uVar12 = 0x2000;
        if ((uVar5 & 0xffff) < 0x2000) {
          uVar12 = (short)uVar5;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11 - 0x10;
      *plVar7 = lVar2;
      *(ushort *)(plVar7 + 1) =
           (((ushort)(SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 1) & 0xfff8) * 3 -
           (short)(uVar11 - 0x10)) + (short)uVar11;
      *(undefined2 *)((long)plVar7 + 10) = uVar12;
      *(undefined1 *)((long)plVar7 + 0xc) = 0;
      goto code_r0x004b924d;
    }
    uVar13 = 0x2000;
    if ((ushort)(uVar1 * 2) < 0x2000) {
      uVar13 = uVar1 * 2;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10 - 0x10;
  uVar5 = ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 1 & 0xfffffff8) * 3 -
          (int)(uVar10 - 0x10)) + (int)uVar10;
  uVar6 = (ulong)(uVar5 & 0xffff);
  plVar7 = (long *)_Znwm(uVar6);
  *plVar7 = lVar2;
  *(short *)(plVar7 + 1) = (short)uVar5;
  *(ushort *)((long)plVar7 + 10) = uVar13;
  *(undefined1 *)((long)plVar7 + 0xc) = 1;
  *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar6;
code_r0x004b924d:
  *(long **)(lVar8 + 0x38) = plVar7;
  uVar13 = *(ushort *)(plVar7 + 1);
  *(ulong *)(lVar8 + 0x48) = (ulong)uVar13 - 0x28;
  return (long)plVar7 + ((ulong)uVar13 - 0x18);
}


