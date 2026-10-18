// Function: _ZN6google8protobuf8internal15ThreadSafeArena14GetSerialArenaEv
// Address: 004b8fc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN6google8protobuf8internal15ThreadSafeArena14GetSerialArenaEv(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *in_FS_OFFSET;
  undefined1 auVar10 [16];
  
  if (*(long *)(*in_FS_OFFSET + -0x118) == *param_1) {
    return *(long **)(*in_FS_OFFSET + -0x110);
  }
  lVar4 = *in_FS_OFFSET;
  lVar1 = lVar4 + -0x120;
  if (lVar1 == param_1[0x14]) {
    plVar9 = param_1 + 5;
  }
  else {
    uVar2 = *(uint *)((long *)param_1[2] + 1);
    if (uVar2 != 0) {
      plVar9 = (long *)0x0;
      plVar5 = (long *)param_1[2];
      do {
        uVar3 = *(uint *)((long)plVar5 + 0xc);
        if (uVar3 != 0) {
          uVar7 = (ulong)uVar3;
          if (uVar2 <= uVar3) {
            uVar7 = (ulong)uVar2;
          }
          uVar8 = 0;
          do {
            if (lVar1 == plVar5[uVar8 + 2]) {
              plVar9 = (long *)plVar5[(ulong)uVar2 + uVar8 + 2];
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar7 != uVar8);
        }
        uVar2 = *(uint *)((long *)*plVar5 + 1);
        plVar5 = (long *)*plVar5;
      } while (uVar2 != 0);
      if (plVar9 != (long *)0x0) goto code_r0x004b8b62;
    }
    auVar10 = func_0x004b9c10(param_1[1] & 0xfffffffffffffff8,0,0x88);
    uVar7 = auVar10._8_8_;
    puVar6 = auVar10._0_8_;
    *puVar6 = 0;
    puVar6[1] = uVar7;
    plVar9 = puVar6 + 2;
    *(undefined1 *)(puVar6 + 2) = 0;
    puVar6[3] = puVar6 + 0x11;
    puVar6[4] = puVar6;
    puVar6[5] = puVar6 + 0x11;
    puVar6[6] = (uVar7 & 0xfffffffffffffff8) + (long)puVar6;
    puVar6[7] = uVar7;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = param_1;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    _ZN6google8protobuf8internal15ThreadSafeArena14AddSerialArenaEPvPNS1_11SerialArenaE
              (param_1,lVar1,plVar9);
  }
code_r0x004b8b62:
  *(long **)(lVar4 + -0x110) = plVar9;
  *(long *)(lVar4 + -0x118) = *param_1;
  return plVar9;
}


