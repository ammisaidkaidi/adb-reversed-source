// Function: _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
// Address: 004c2bc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
          (long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  cVar5 = (char)param_4;
  if (param_6 < 0x3c) {
    if (param_5 < 0x3c) {
      if (param_4 < 0x18) {
        if (param_2 - 1U < 0xc && param_3 - 1 < 0x1c) goto code_r0x004c3012;
        if (param_2 == 0xc) {
          param_2 = 0xc;
        }
        else {
          param_1 = param_1 + param_2 / 0xc;
          param_2 = param_2 % 0xc;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar11 = 0;
        iVar2 = (int)cVar5;
      }
      else {
        lVar11 = ((long)param_4 / 6 + ((long)param_4 >> 0x3f) >> 2) - ((long)param_4 >> 0x3f);
        lVar4 = param_4 + lVar11 * -0x18;
        if (param_2 == 0xc) {
          param_2 = 0xc;
        }
        else {
          param_1 = param_1 + param_2 / 0xc;
          param_2 = param_2 % 0xc;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar11 = (lVar4 >> 0x3f) + lVar11;
        iVar2 = (int)lVar4 + 0x18;
        if (-1 < lVar4) {
          iVar2 = (int)lVar4;
        }
      }
      iVar15 = (int)(char)param_6;
      uVar12 = (ulong)(uint)(int)(char)param_5;
    }
    else {
      uVar8 = (long)param_5 % 0x3c;
      if (param_2 == 0xc) {
        param_2 = 0xc;
      }
      else {
        param_1 = param_1 + param_2 / 0xc;
        param_2 = param_2 % 0xc;
        if (param_2 < 1) {
          param_1 = param_1 + -1;
          param_2 = param_2 + 0xc;
        }
      }
      lVar4 = ((long)uVar8 >> 0x3f) + (long)param_5 / 0x3c;
      lVar11 = lVar4 / 0x18;
      cVar7 = (char)lVar4 + (char)lVar11 * -0x18 + cVar5 + (char)((long)param_4 / 0x18) * -0x18;
      uVar3 = cVar7 * 0x2b;
      cVar6 = (char)((uVar3 & 0xffff) >> 0xf) + ((char)(uVar3 >> 8) >> 2);
      cVar7 = cVar7 + cVar6 * -0x18;
      cVar5 = cVar7 + '\x18';
      if (-1 < cVar7) {
        cVar5 = cVar7;
      }
      lVar11 = (long)(cVar7 >> 7) + (long)cVar6 + lVar11 + (long)param_4 / 0x18;
      iVar15 = (int)(char)param_6;
      iVar2 = (int)cVar5;
      uVar12 = (ulong)((int)uVar8 + 0x3c);
      if (-1 < (long)uVar8) {
        uVar12 = uVar8 & 0xffffffff;
      }
    }
  }
  else {
    lVar11 = (long)param_6 % 0x3c;
    lVar4 = (lVar11 >> 0x3f) + (long)param_6 / 0x3c;
    lVar10 = lVar4 % 0x3c + (long)param_5 % 0x3c;
    cVar6 = (char)lVar11 + '<';
    if (-1 < lVar11) {
      cVar6 = (char)lVar11;
    }
    if (param_2 == 0xc) {
      param_2 = 0xc;
    }
    else {
      param_1 = param_1 + param_2 / 0xc;
      param_2 = param_2 % 0xc;
      if (param_2 < 1) {
        param_1 = param_1 + -1;
        param_2 = param_2 + 0xc;
      }
    }
    cVar9 = (char)lVar10;
    cVar7 = (char)((uint)((int)lVar10 * -0x77) >> 8) + cVar9;
    cVar1 = (cVar7 >> 5) - (cVar7 >> 7);
    cVar9 = cVar9 + cVar1 * -0x3c;
    cVar7 = cVar9 + '<';
    if (-1 < cVar9) {
      cVar7 = cVar9;
    }
    lVar4 = (long)(cVar9 >> 7) + lVar4 / 0x3c + (long)param_5 / 0x3c + (long)cVar1;
    lVar11 = lVar4 / 0x18;
    cVar9 = (char)lVar4 + (char)lVar11 * -0x18 + cVar5 + (char)((long)param_4 / 0x18) * -0x18;
    uVar3 = cVar9 * 0x2b;
    cVar1 = (char)((uVar3 & 0xffff) >> 0xf) + ((char)(uVar3 >> 8) >> 2);
    cVar9 = cVar9 + cVar1 * -0x18;
    cVar5 = cVar9 + '\x18';
    if (-1 < cVar9) {
      cVar5 = cVar9;
    }
    lVar11 = (long)(cVar9 >> 7) + (long)cVar1 + lVar11 + (long)param_4 / 0x18;
    iVar15 = (int)cVar6;
    iVar2 = (int)cVar5;
    uVar12 = (ulong)(uint)(int)cVar7;
  }
  auVar13 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                      (param_1,param_2,param_3,lVar11,iVar2,uVar12,iVar15);
  param_6 = auVar13._8_8_;
  param_3 = param_6 >> 8;
  param_4 = param_6 >> 0x10;
  param_5 = param_6 >> 0x18;
  param_6 = param_6 >> 0x20;
code_r0x004c3012:
  auVar14._8_8_ =
       (ulong)(((uint)param_3 & 0xff) << 8 | ((uint)param_4 & 0xff) << 0x10 | (int)param_5 << 0x18)
       | auVar13._8_8_ & 0xff | (param_6 & 0xff) << 0x20;
  auVar14._0_8_ = auVar13._0_8_;
  return auVar14;
}


