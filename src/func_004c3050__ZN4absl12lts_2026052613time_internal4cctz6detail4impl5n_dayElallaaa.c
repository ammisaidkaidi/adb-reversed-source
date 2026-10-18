// Function: _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
// Address: 004c3050
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
          (long param_1,byte param_2,long param_3,long param_4,uint param_5,byte param_6,
          byte param_7)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  lVar5 = (param_4 / 0x23ab1) * 400;
  lVar7 = param_4 % 0x23ab1;
  lVar8 = lVar5 + -400;
  if (-1 < lVar7) {
    lVar8 = lVar5;
  }
  lVar5 = param_4 + 0x23ab1 + (param_4 / 0x23ab1) * -0x23ab1;
  if (-1 < lVar7) {
    lVar5 = lVar7;
  }
  uVar9 = (param_3 / 0x23ab1) * 400 + lVar8 + param_1 % 400;
  uVar6 = param_3 % 0x23ab1 + lVar5;
  if (uVar6 == 0 || SCARRY8(param_3 % 0x23ab1,lVar5) != (long)uVar6 < 0) {
    if ((long)uVar6 < -0x16c) {
      uVar9 = uVar9 - 400;
      uVar6 = uVar6 + 0x23ab1;
    }
    else {
      uVar10 = (('\x02' < (char)param_2) + uVar9) - 1;
      lVar8 = 0x16d;
      if ((uVar10 & 3) == 0) {
        lVar8 = uVar10 * -0x70a3d70a3d70a3d7;
        lVar8 = (ulong)((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7 ||
                       0x28f5c28f5c28f5c < (lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e)) +
                0x16d;
      }
      uVar9 = uVar9 - 1;
      uVar6 = uVar6 + lVar8;
    }
  }
  else if (0x23ab1 < uVar6) {
    uVar9 = uVar9 + 400;
    uVar6 = uVar6 - 0x23ab1;
  }
  if (0x16d < uVar6) {
    uVar11 = (long)(uVar9 + ('\x02' < (char)param_2)) % 400;
    uVar10 = (ulong)((int)uVar11 + 400);
    if (-1 < (long)uVar11) {
      uVar10 = uVar11 & 0xffffffff;
    }
    uVar11 = (ulong)(300 < (int)uVar10 || (int)uVar10 == 0) | 0x8eac;
    if (uVar11 < uVar6) {
      do {
        uVar6 = uVar6 - uVar11;
        uVar9 = uVar9 + 100;
        iVar4 = 100;
        if (299 < (int)uVar10) {
          iVar4 = -300;
        }
        uVar3 = (int)uVar10 + iVar4;
        uVar10 = (ulong)uVar3;
        uVar11 = (ulong)(300 < (int)uVar3 || uVar3 == 0) | 0x8eac;
      } while (uVar11 < uVar6);
    }
    while( true ) {
      iVar4 = (int)uVar10;
      uVar11 = 0x5b5;
      if (iVar4 < 0x12d && iVar4 != 0) {
        uVar11 = (ulong)((iVar4 + -1) % 100 < 0x60) | 0x5b4;
      }
      uVar10 = uVar6;
      uVar2 = uVar9;
      if (uVar6 < uVar11 || uVar6 - uVar11 == 0) break;
      uVar9 = uVar9 + 4;
      uVar3 = iVar4 - 0x18c;
      if (iVar4 < 0x18c) {
        uVar3 = iVar4 + 4;
      }
      uVar10 = (ulong)uVar3;
      uVar6 = uVar6 - uVar11;
    }
    do {
      uVar9 = uVar2;
      uVar6 = uVar10;
      uVar10 = ('\x02' < (char)param_2) + uVar9;
      lVar8 = 0x16d;
      if ((uVar10 & 3) == 0) {
        lVar8 = uVar10 * -0x70a3d70a3d70a3d7;
        lVar8 = (ulong)((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7 ||
                       0x28f5c28f5c28f5c < (lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e)) +
                0x16d;
      }
      uVar10 = uVar6 - lVar8;
      uVar2 = uVar9 + 1;
    } while (uVar6 - lVar8 != 0 && lVar8 <= (long)uVar6);
  }
  if (0x1c < (long)uVar6) {
    while( true ) {
      uVar10 = 0;
      if ((uVar9 & 3) == 0 && param_2 == 2) {
        lVar8 = uVar9 * -0x70a3d70a3d70a3d7;
        uVar10 = 1;
        if ((lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar10 = (ulong)((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7);
        }
      }
      uVar11 = uVar6 - (uVar10 + (long)*(int *)(&UNK_001ff4a0 + (long)(char)param_2 * 4));
      if (uVar11 == 0 ||
          (long)uVar6 < (long)(uVar10 + (long)*(int *)(&UNK_001ff4a0 + (long)(char)param_2 * 4)))
      break;
      param_2 = param_2 + 1;
      bVar1 = '\f' < (char)param_2;
      if ('\f' < (char)param_2) {
        param_2 = 1;
      }
      uVar9 = uVar9 + bVar1;
      uVar6 = uVar11;
    }
  }
  auVar12._8_8_ =
       (ulong)param_2 |
       (ulong)(((uint)uVar6 & 0xff) << 8) |
       (ulong)((param_5 & 0xff) << 0x10) | (ulong)param_6 << 0x18 | (ulong)param_7 << 0x20;
  auVar12._0_8_ = (param_1 - param_1 % 400) + uVar9;
  return auVar12;
}


