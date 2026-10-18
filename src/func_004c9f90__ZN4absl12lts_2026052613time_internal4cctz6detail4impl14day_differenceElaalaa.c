// Function: _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
// Address: 004c9f90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
               (long param_1,short param_2,int param_3,long param_4,short param_5,int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  short sVar5;
  short sVar6;
  long lVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  long lVar11;
  
  lVar4 = (param_4 % 400 - param_4) + (param_1 / 400) * 400;
  sVar1 = param_2 + -3;
  if ((char)param_2 < '\x03') {
    sVar1 = param_2 + 9;
  }
  lVar7 = param_1 % 400 - (ulong)((char)param_2 < '\x03');
  sVar5 = (short)lVar7 + -399;
  if (-1 < lVar7) {
    sVar5 = (short)lVar7;
  }
  lVar7 = (long)((int)sVar5 / 400) * -400 + lVar7;
  sVar2 = (short)lVar7;
  sVar6 = sVar2 + 3;
  if (-1 < sVar2) {
    sVar6 = sVar2;
  }
  sVar3 = param_5 + -3;
  if ((char)param_5 < '\x03') {
    sVar3 = param_5 + 9;
  }
  lVar11 = param_4 % 400 - (ulong)((char)param_5 < '\x03');
  sVar8 = (short)lVar11 + -399;
  if (-1 < lVar11) {
    sVar8 = (short)lVar11;
  }
  lVar11 = (long)((int)sVar8 / 400) * -400 + lVar11;
  iVar9 = (short)(sVar3 * 0x99 + 2) * -0x6667;
  sVar3 = (short)lVar11;
  sVar10 = sVar3 + 3;
  if (-1 < sVar3) {
    sVar10 = sVar3;
  }
  lVar7 = ((long)param_3 - (long)param_6) + (long)((int)(short)(sVar1 * 0x99 + 2) / 5) +
          (long)((iVar9 >> 0x11) - (iVar9 >> 0x1f)) + (long)(short)((uint)(int)sVar6 >> 2) +
          (long)((sVar2 * -0x147b >> 0x13) - (sVar2 * -0x147b >> 0x1f)) +
          ((long)((int)sVar5 / 400) - (long)((int)sVar8 / 400)) * 0x23ab1 + (lVar7 - lVar11) * 0x16d
          + (long)(short)-(sVar10 >> 2) + (long)((int)sVar3 / 100);
  if ((lVar4 < 1) || (-1 < lVar7)) {
    if ((lVar4 < 0) && (0 < lVar7)) {
      lVar7 = lVar7 + -0x47562;
      lVar4 = lVar4 + 800;
    }
  }
  else {
    lVar7 = lVar7 + 0x47562;
    lVar4 = lVar4 + -800;
  }
  return (lVar4 / 400) * 0x23ab1 + lVar7;
}


