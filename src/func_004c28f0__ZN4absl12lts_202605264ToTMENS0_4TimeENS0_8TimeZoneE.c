// Function: _ZN4absl12lts_202605264ToTMENS0_4TimeENS0_8TimeZoneE
// Address: 004c28f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _ZN4absl12lts_202605264ToTMENS0_4TimeENS0_8TimeZoneE
                (int *param_1,long param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [13];
  long lVar7;
  int *piVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uStack_68 = param_4;
  if (param_3 == -1 && param_2 == 0x7fffffffffffffff) {
    uVar13 = 0;
    auVar14 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    auVar6 = auVar14._0_13_;
  }
  else if (param_2 == -0x8000000000000000 && param_3 == -1) {
    uVar13 = 0;
    auVar5._8_8_ = 0x101;
    auVar5._0_8_ = 0x8000000000000000;
    auVar6 = auVar5._0_13_;
  }
  else {
    lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_60 = lVar7 / 1000000 + param_2;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&uStack_58,&uStack_68,&lStack_60);
    auVar14._8_8_ = uStack_50;
    auVar14._0_8_ = uStack_58;
    auVar6 = auVar14._0_13_;
    uVar13 = (uint)uStack_48._4_1_;
  }
  uVar11 = auVar6._0_8_;
  *param_1 = (int)auVar6[0xc];
  param_1[1] = auVar6._8_4_ >> 0x18;
  param_1[2] = (int)auVar6[10];
  cVar4 = auVar6[9];
  param_1[3] = (int)cVar4;
  cVar9 = auVar6[8];
  param_1[4] = cVar9 + -1;
  iVar12 = -0x80000000;
  if ((-0x7ffff895 < (long)uVar11) && (iVar12 = 0x7ffff893, (long)uVar11 < 0x80000000)) {
    iVar12 = auVar6._0_4_ + -0x76c;
  }
  lVar7 = (long)uVar11 % 400 - (ulong)(cVar9 < '\x03');
  uVar1 = lVar7 + 0x960;
  iVar2 = *(int *)(&UNK_001ff420 + (long)cVar9 * 4);
  param_1[5] = iVar12;
  if ((ulong)*(uint *)(&UNK_001ff3f8 +
                      ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                              (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                             (long)cVar4 + (long)iVar2 +
                             (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) < 7) {
    param_1[6] = *(int *)(&UNK_001fdf5c +
                         (ulong)*(uint *)(&UNK_001ff3f8 +
                                         ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                                                 (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >>
                                                        0x11)) +
                                                (long)cVar4 + (long)iVar2 +
                                                (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)
                                                ) % 7) * 4) * 4);
  }
  uVar10 = 0;
  if (((uVar11 & 3) == 0) && ('\x02' < cVar9)) {
    uVar10 = 1;
    if ((uVar11 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
        uVar11 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
      uVar10 = (uint)((long)uVar11 % 400 == 0);
    }
  }
  param_1[7] = (int)cVar4 + uVar10 + *(int *)(&UNK_001ff460 + (long)cVar9 * 4) + -1;
  param_1[8] = uVar13;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  piVar8 = (int *)(*pcVar3)();
  return piVar8;
}


