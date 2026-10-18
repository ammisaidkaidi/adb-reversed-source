// Function: _ZNK4absl12lts_202605264Time2InENS0_8TimeZoneE
// Address: 004c16e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong *****
_ZNK4absl12lts_202605264Time2InENS0_8TimeZoneE(ulong *****param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  ulong ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *****pppppuVar7;
  uint uVar8;
  char cVar9;
  undefined8 uVar10;
  ulong *****pppppuVar11;
  long lVar12;
  ulong *****pppppuVar13;
  long in_FS_OFFSET;
  ulong ****ppppuStack_b0;
  int iStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong ***pppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong ***pppuStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2[1] == -1 && *param_2 == 0x7fffffffffffffff) {
    param_1[6] = (ulong ****)0x0;
    *param_1 = (ulong ****)0x7fffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xc;
    *(undefined4 *)((long)param_1 + 0xc) = 0x1f;
    *(undefined4 *)(param_1 + 2) = 0x17;
    *(undefined4 *)((long)param_1 + 0x14) = 0x3b;
    *(undefined4 *)(param_1 + 3) = 0x3b;
    *(undefined8 *)((long)param_1 + 0x1c) = 0x7fffffffffffffff;
    *(undefined8 *)((long)param_1 + 0x24) = 0x4ffffffff;
    *(undefined4 *)((long)param_1 + 0x2c) = 0x16d;
    ppppuVar4 = (ulong ****)&UNK_00166389;
  }
  else if (*param_2 == -0x8000000000000000 && (int)param_2[1] == -1) {
    param_1[6] = (ulong ****)0x0;
    *param_1 = (ulong ****)0x8000000000000000;
    param_1[1] = (ulong ****)0x100000001;
    param_1[2] = (ulong ****)0x0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0x8000000000000000;
    *(undefined8 *)((long)param_1 + 0x24) = 0x7ffffffff;
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    ppppuVar4 = (ulong ****)&UNK_00166389;
  }
  else {
    uVar8 = 0;
    pcStack_70 = (code *)&UNK_004c17d5;
    lVar12 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_60 = lVar12 / 1000000 + *param_2;
    uStack_48 = 0;
    pppuStack_40 = (ulong ***)0x0;
    pppuStack_58 = (ulong ***)0x0;
    uStack_50 = 0;
    pcStack_70 = (code *)&UNK_004c1817;
    uStack_68 = param_3;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&pppuStack_58,&uStack_68,&lStack_60);
    param_1[6] = (ulong ****)0x0;
    *param_1 = (ulong ****)pppuStack_58;
    cVar9 = (char)uStack_50;
    *(int *)(param_1 + 1) = (int)cVar9;
    cVar2 = (char)((ulong)uStack_50 >> 8);
    *(int *)((long)param_1 + 0xc) = (int)cVar2;
    *(int *)(param_1 + 2) = (int)(char)((ulong)uStack_50 >> 0x10);
    *(int *)((long)param_1 + 0x14) = (int)uStack_50 >> 0x18;
    *(int *)(param_1 + 3) = (int)(char)((ulong)uStack_50 >> 0x20);
    lVar12 = param_2[1];
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(int *)((long)param_1 + 0x24) = (int)lVar12;
    lVar12 = (long)pppuStack_58 % 400 - (ulong)(cVar9 < '\x03');
    uVar1 = lVar12 + 0x960;
    iVar3 = *(int *)(&UNK_001ff3f8 +
                    ((long)((((uVar1 >> 2) + lVar12 + 0x960) -
                            (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                           (long)cVar2 + (long)*(int *)(&UNK_001ff420 + (long)cVar9 * 4) +
                           (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) + 1;
    if (5 < *(int *)(&UNK_001ff3f8 +
                    ((long)((((uVar1 >> 2) + lVar12 + 0x960) -
                            (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                           (long)cVar2 + (long)*(int *)(&UNK_001ff420 + (long)cVar9 * 4) +
                           (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) - 1U) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 5) = iVar3;
    if ((((ulong)pppuStack_58 & 3) == 0 && '\x02' < cVar9) &&
       (uVar8 = 1,
       ((long)pppuStack_58 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 |
       (long)pppuStack_58 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d)) {
      uVar8 = (uint)((long)pppuStack_58 % 400 == 0);
    }
    *(uint *)((long)param_1 + 0x2c) = uVar8 + (int)cVar2 + *(int *)(&UNK_001ff460 + (long)cVar9 * 4)
    ;
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_48;
    *(undefined1 *)((long)param_1 + 0x34) = uStack_48._4_1_;
    ppppuVar4 = (ulong ****)pppuStack_40;
  }
  param_1[7] = ppppuVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  pcStack_70 = _ZN4absl12lts_202605269FromUDateEd;
  func_0x0099bd00();
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_88 = 0;
  uStack_80 = 4000000;
  puVar6 = &uStack_88;
  pcStack_98 = (code *)&UNK_004c1a1d;
  pcStack_70 = (code *)&stack0xfffffffffffffff8;
  puVar5 = (undefined8 *)_ZN4absl12lts_202605268DurationmLEd();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return (ulong *****)*puVar5;
  }
  pcStack_98 = _ZN4absl12lts_2026052613FromUniversalEl;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = (long)puVar6 % 1000000000;
  ppppuStack_b0 = (ulong ****)((lVar12 >> 0x3d) + (long)puVar6 / 1000000000);
  iStack_a8 = (int)lVar12 * 4 + -0x1194d800;
  if (-1 < lVar12) {
    iStack_a8 = (int)lVar12 * 4;
  }
  pcStack_98 = (code *)&pcStack_70;
  puVar6 = (undefined8 *)_ZN4absl12lts_202605268DurationmLEl(&ppppuStack_b0,100);
  uVar10 = *puVar6;
  ppppuStack_b0 = (ulong ****)0xfffffff1886e0900;
  iStack_a8 = 0;
  pppppuVar13 = &ppppuStack_b0;
  _ZN4absl12lts_202605268DurationpLES1_(pppppuVar13,uVar10,*(undefined4 *)(puVar6 + 1));
  uVar8 = (uint)uVar10;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return (ulong *****)ppppuStack_b0;
  }
  func_0x0099bd00();
  lVar12 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)pppppuVar13 >> 0x21 == 0) {
    pppppuVar11 = (ulong *****)((ulong)(uVar8 >> 2) + (long)pppppuVar13 * 1000000000);
  }
  else {
    pppppuVar11 = (ulong *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar12) {
    return pppppuVar11;
  }
  func_0x0099bd00();
  lVar12 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)pppppuVar13 >> 0x2b == 0) {
    pppppuVar7 = (ulong *****)
                 (((ulong)pppppuVar11 & 0xffffffff) / 4000 + (long)pppppuVar13 * 1000000);
  }
  else {
    pppppuVar7 = (ulong *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lVar12) {
    func_0x0099bd00();
    lVar12 = *(long *)(in_FS_OFFSET + 0x28);
    if ((ulong)pppppuVar13 >> 0x35 == 0) {
      pppppuVar11 = (ulong *****)
                    (((ulong)pppppuVar11 & 0xffffffff) / 4000000 + (long)pppppuVar13 * 1000);
    }
    else {
      pppppuVar11 = (ulong *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lVar12) {
      return pppppuVar11;
    }
    func_0x0099bd00();
    return pppppuVar13;
  }
  return pppppuVar7;
}


