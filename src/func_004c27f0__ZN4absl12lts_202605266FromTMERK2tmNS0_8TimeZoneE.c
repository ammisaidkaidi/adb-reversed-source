// Function: _ZN4absl12lts_202605266FromTMERK2tmNS0_8TimeZoneE
// Address: 004c27f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _ZN4absl12lts_202605266FromTMERK2tmNS0_8TimeZoneE(int *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [13];
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  char cVar10;
  int extraout_EDX;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  int *piStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = param_1[4];
  iVar6 = 0x7ffffff4;
  if (iVar14 != 0x7fffffff) {
    iVar6 = iVar14 + 1;
  }
  puStack_80 = &UNK_004c2852;
  uStack_70 = param_2;
  auVar16 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      ((long)param_1[5] + 0x76c + (ulong)(iVar14 == 0x7fffffff),(long)iVar6,
                       (long)param_1[3],(long)param_1[2],(long)param_1[1],(long)*param_1);
  uStack_48 = auVar16._0_8_;
  uStack_40 = auVar16._8_8_ & 0xffffffffff;
  uStack_58 = 0;
  aiStack_50[0] = 0;
  aiStack_50[1] = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_80 = &UNK_004c288a;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_68,&uStack_70,&uStack_48);
  puStack_80 = &UNK_004c2899;
  auVar17 = func_0x004c2250(&uStack_60,&uStack_48,&uStack_70);
  puStack_80 = &UNK_004c28ae;
  func_0x004c2250(&uStack_58,&uStack_48,&uStack_70);
  piVar9 = aiStack_50;
  puStack_80 = &UNK_004c28bd;
  puVar12 = &uStack_48;
  piVar7 = (int *)func_0x004c2250(piVar9,&uStack_48,&uStack_70);
  if (param_1[8] != 0) {
    piVar7 = auVar17._0_8_;
  }
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == lStack_38) {
    return piVar7;
  }
  puStack_80 = &UNK_004c28ec;
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_e0 = lVar8;
  piStack_a0 = param_1;
  puStack_98 = &uStack_48;
  uStack_90 = (ulong)auVar17._8_4_;
  puStack_88 = &uStack_70;
  puStack_80 = &stack0xfffffffffffffff8;
  piVar9[8] = 0;
  piVar9[9] = 0;
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[6] = 0;
  piVar9[7] = 0;
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  if (extraout_EDX == -1 && puVar12 == (undefined8 *)0x7fffffffffffffff) {
    uVar15 = 0;
    auVar16 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    auVar5 = auVar16._0_13_;
  }
  else if (puVar12 == (undefined8 *)0x8000000000000000 && extraout_EDX == -1) {
    uVar15 = 0;
    auVar4._8_8_ = 0x101;
    auVar4._0_8_ = 0x8000000000000000;
    auVar5 = auVar4._0_13_;
  }
  else {
    lVar8 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_d8 = lVar8 / 1000000 + (long)puVar12;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&uStack_d0,&lStack_e0,&lStack_d8);
    auVar16._8_8_ = uStack_c8;
    auVar16._0_8_ = uStack_d0;
    auVar5 = auVar16._0_13_;
    uVar15 = (uint)uStack_c0._4_1_;
  }
  uVar13 = auVar5._0_8_;
  *piVar9 = (int)auVar5[0xc];
  piVar9[1] = auVar5._8_4_ >> 0x18;
  piVar9[2] = (int)auVar5[10];
  cVar3 = auVar5[9];
  piVar9[3] = (int)cVar3;
  cVar10 = auVar5[8];
  piVar9[4] = cVar10 + -1;
  iVar14 = -0x80000000;
  if ((-0x7ffff895 < (long)uVar13) && (iVar14 = 0x7ffff893, (long)uVar13 < 0x80000000)) {
    iVar14 = auVar5._0_4_ + -0x76c;
  }
  lVar8 = (long)uVar13 % 400 - (ulong)(cVar10 < '\x03');
  uVar1 = lVar8 + 0x960;
  iVar6 = *(int *)(&UNK_001ff420 + (long)cVar10 * 4);
  piVar9[5] = iVar14;
  if ((ulong)*(uint *)(&UNK_001ff3f8 +
                      ((long)((((uVar1 >> 2) + lVar8 + 0x960) -
                              (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                             (long)cVar3 + (long)iVar6 +
                             (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) < 7) {
    piVar9[6] = *(int *)(&UNK_001fdf5c +
                        (ulong)*(uint *)(&UNK_001ff3f8 +
                                        ((long)((((uVar1 >> 2) + lVar8 + 0x960) -
                                                (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >>
                                                       0x11)) +
                                               (long)cVar3 + (long)iVar6 +
                                               (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10))
                                        % 7) * 4) * 4);
  }
  uVar11 = 0;
  if ((((uVar13 & 3) == 0) && ('\x02' < cVar10)) &&
     (uVar11 = 1,
     (uVar13 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar13 * -0x70a3d70a3d70a3d7 << 0x3e)
     < 0x28f5c28f5c28f5d)) {
    uVar11 = (uint)((long)uVar13 % 400 == 0);
  }
  piVar9[7] = (int)cVar3 + uVar11 + *(int *)(&UNK_001ff460 + (long)cVar10 * 4) + -1;
  piVar9[8] = uVar15;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_a8) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    piVar9 = (int *)(*pcVar2)();
    return piVar9;
  }
  return piVar9;
}


