// Function: _ZN4absl12lts_202605263NowEv
// Address: 004d1f70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_202605263NowEv(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_a8;
  uint uStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  undefined *puStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_28 = 0;
  lStack_20 = 0;
  puStack_30 = &UNK_004d1f97;
  iVar2 = func_0x0099c650(0,&lStack_28);
  if (iVar2 == 0) {
    uVar5 = lStack_28 * 1000000000 + lStack_20;
    if ((long)uVar5 < 0) {
      uVar6 = -uVar5 % 1000000000;
      uVar3 = ((long)-uVar6 >> 0x3d) - -uVar5 / 1000000000;
      uVar5 = (ulong)((int)uVar6 * -4 + 4000000000);
      if (uVar6 == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar3 = uVar5 / 1000000000;
      uVar5 = (ulong)(uint)(((int)uVar5 + (int)uVar3 * -1000000000) * 4);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = uVar3;
      return auVar12;
    }
    puStack_30 = &UNK_004d2035;
    func_0x0099bd00();
  }
  puStack_30 = &UNK_004d2062;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016b3fa,0x11,&UNK_00183943,&UNK_00157d0b,&UNK_00186acf);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_50 = 0;
  lStack_48 = 0;
  puStack_30 = &stack0xfffffffffffffff8;
  iVar2 = func_0x0099c650(0,&lStack_50);
  if (iVar2 == 0) {
    auVar10._0_8_ = lStack_50 * 1000000000 + lStack_48;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      auVar10._8_8_ = extraout_RDX;
      return auVar10;
    }
    func_0x0099bd00();
  }
  puVar8 = &UNK_0016b3fa;
  lVar9 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0016b3fa,0x11,&UNK_00183943,&UNK_00157d0b,&UNK_00186acf);
  uStack_a0 = (uint)puVar8;
  uVar5 = (ulong)puVar8 & 0xffffffff;
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = extraout_RDX_00;
  lStack_a8 = lVar9;
  do {
    lVar9 = lStack_a8;
    if (lStack_a8 == 0) {
      if ((int)uVar5 == 0) {
code_r0x004d219b:
        if (*(long *)(in_FS_OFFSET + 0x28) != lStack_88) {
          func_0x0099bd00();
          pcVar1 = (code *)swi(3);
          auVar12 = (*pcVar1)();
          return auVar12;
        }
        auVar11._8_8_ = uVar7;
        auVar11._0_8_ = *(long *)(in_FS_OFFSET + 0x28);
        return auVar11;
      }
    }
    else if (lStack_a8 < 1) goto code_r0x004d219b;
    if (lStack_a8 == 0x7fffffffffffffff) {
      uVar5 = 0;
    }
    auVar12 = _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE(lStack_a8,uVar5);
    auStack_98 = auVar12;
    do {
      iVar2 = func_0x0099c640(auStack_98,auStack_98);
      if (iVar2 == 0) break;
      piVar4 = (int *)func_0x0099bce0();
    } while (*piVar4 == 4);
    _ZN4absl12lts_202605268DurationmIES1_(&lStack_a8,lVar9,uVar5);
    uVar5 = (ulong)uStack_a0;
    uVar7 = extraout_RDX_01;
  } while( true );
}


