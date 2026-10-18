// Function: _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToNameERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
// Address: 004c4450
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c46d9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c472f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c47ae: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c46de) */
/* WARNING: Removing unreachable block (ram,0x004c46eb) */
/* WARNING: Removing unreachable block (ram,0x004c46e5) */
/* WARNING: Removing unreachable block (ram,0x004c46ed) */
/* WARNING: Removing unreachable block (ram,0x004c46f7) */
/* WARNING: Removing unreachable block (ram,0x004c4716) */
/* WARNING: Removing unreachable block (ram,0x004c4710) */
/* WARNING: Removing unreachable block (ram,0x004c4718) */
/* WARNING: Removing unreachable block (ram,0x004c4722) */
/* WARNING: Removing unreachable block (ram,0x004c4734) */
/* WARNING: Removing unreachable block (ram,0x004c4742) */
/* WARNING: Removing unreachable block (ram,0x004c4746) */
/* WARNING: Removing unreachable block (ram,0x004c474c) */
/* WARNING: Removing unreachable block (ram,0x004c4752) */
/* WARNING: Removing unreachable block (ram,0x004c475c) */
/* WARNING: Removing unreachable block (ram,0x004c4756) */
/* WARNING: Removing unreachable block (ram,0x004c475e) */
/* WARNING: Removing unreachable block (ram,0x004c4764) */
/* WARNING: Removing unreachable block (ram,0x004c477d) */
/* WARNING: Removing unreachable block (ram,0x004c4781) */
/* WARNING: Removing unreachable block (ram,0x004c4788) */
/* WARNING: Removing unreachable block (ram,0x004c478f) */
/* WARNING: Removing unreachable block (ram,0x004c4799) */
/* WARNING: Removing unreachable block (ram,0x004c4793) */
/* WARNING: Removing unreachable block (ram,0x004c479b) */
/* WARNING: Removing unreachable block (ram,0x004c47bb) */
/* WARNING: Removing unreachable block (ram,0x004c47a1) */

byte * _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToNameERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
                 (byte *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  byte abStack_48 [10];
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *param_2;
  if ((lVar9 == 0) || (lVar9 - 0x15181U < 0xfffffffffffd5cff)) {
    *param_1 = 6;
    param_1[1] = 0x55;
    param_1[2] = 0x54;
    param_1[3] = 0x43;
    param_1[4] = 0;
    pbVar13 = param_1;
code_r0x004c4658:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
      return param_1;
    }
    func_0x0099bd00();
  }
  else {
    abStack_48[9] = (char)(lVar9 >> 0x3f) * -2 + '+';
    iVar5 = (int)((ulong)(lVar9 * -0x77777777) >> 0x20) + (int)lVar9;
    iVar6 = (iVar5 >> 5) - (iVar5 >> 0x1f);
    iVar5 = (int)lVar9 + iVar6 * -0x3c;
    if (lVar9 < 0) {
      iVar11 = iVar5 + -0x3c;
      if (iVar5 < 1) {
        iVar11 = iVar5;
      }
      iVar6 = -((uint)(0 < iVar5) + iVar6);
      iVar5 = -iVar11;
    }
    uVar10 = ((uint)((short)iVar6 * -0x7777) >> 0x10) + iVar6;
    iVar11 = ((int)(short)uVar10 >> 5) + ((uVar10 & 0xffff) >> 0xf);
    abStack_48[0] = 0x46;
    abStack_48[1] = 0x69;
    abStack_48[2] = 0x78;
    abStack_48[3] = 0x65;
    abStack_48[4] = 100;
    abStack_48[5] = 0x2f;
    abStack_48[6] = 0x55;
    abStack_48[7] = 0x54;
    abStack_48[8] = 0x43;
    uVar10 = ((uint)((short)iVar6 * -0x258b) >> 0x10) + iVar6;
    iVar6 = iVar6 + iVar11 * -0x3c;
    uStack_3e = (&UNK_001ff4de)[(short)(((short)uVar10 >> 9) + (short)((uVar10 & 0xffff) >> 0xf))];
    cVar12 = (char)iVar11;
    uStack_3d = (&UNK_001ff4de)
                [(char)(cVar12 + ((char)((uint)(int)(short)(cVar12 * 0x67) >> 10) - (cVar12 >> 7)) *
                                 -10)];
    uStack_3c = 0x3a;
    uVar10 = iVar6 * 0x67;
    cVar12 = (char)((uint)(int)(short)uVar10 >> 10) + (char)((uVar10 & 0xffff) >> 0xf);
    uStack_3b = (&UNK_001ff4de)[cVar12];
    uStack_3a = (&UNK_001ff4de)[(char)((char)iVar6 + cVar12 * -10)];
    uStack_39 = 0x3a;
    cVar12 = (char)((uint)(int)(short)(iVar5 * 0x67) >> 10) +
             (char)((iVar5 * 0x67 & 0xffffU) >> 0xf);
    uStack_38 = (&UNK_001ff4de)[cVar12];
    uStack_37 = (&UNK_001ff4de)[(char)((char)iVar5 + cVar12 * -10)];
    uStack_36 = 0;
    pbVar13 = abStack_48;
    uVar2 = func_0x0099bcf0();
    if (uVar2 < 0xfffffffffffffff7) {
      if (uVar2 < 0x17) {
        *param_1 = (char)uVar2 * '\x02';
        pbVar3 = param_1 + 1;
      }
      else {
        lVar9 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          lVar9 = (uVar2 | 7) + 1;
        }
        pbVar3 = (byte *)_Znwm(lVar9);
        *(long *)param_1 = lVar9 + 1;
        *(ulong *)(param_1 + 8) = uVar2;
        *(byte **)(param_1 + 0x10) = pbVar3;
      }
      pbVar13 = pbVar3;
      func_0x0099bda0(pbVar3,abStack_48,uVar2);
      pbVar3[uVar2] = 0;
      goto code_r0x004c4658;
    }
  }
  func_0x0032e8f0();
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  pbVar13[8] = 0;
  pbVar13[9] = 0;
  pbVar13[10] = 0;
  pbVar13[0xb] = 0;
  pbVar13[0xc] = 0;
  pbVar13[0xd] = 0;
  pbVar13[0xe] = 0;
  pbVar13[0xf] = 0;
  pbVar13[0x10] = 0;
  pbVar13[0x11] = 0;
  pbVar13[0x12] = 0;
  pbVar13[0x13] = 0;
  pbVar13[0x14] = 0;
  pbVar13[0x15] = 0;
  pbVar13[0x16] = 0;
  pbVar13[0x17] = 0;
  _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToNameERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
            ();
  if ((*pbVar13 & 1) == 0) {
    if (*pbVar13 >> 1 == 0x12) goto code_r0x004c46cf;
  }
  else if (*(long *)(pbVar13 + 8) == 0x12) {
code_r0x004c46cf:
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      pbVar8 = (byte *)(ulong)(bVar1 >> 1);
      pbVar3 = pbVar13 + 1;
    }
    else {
      pbVar8 = *(byte **)(pbVar13 + 8);
      pbVar3 = *(byte **)(pbVar13 + 0x10);
    }
    pbVar7 = (byte *)0x9;
    if (pbVar8 < (byte *)0x9) {
      pbVar7 = pbVar8;
    }
    pbVar4 = pbVar8;
    if ((byte *)0x9 < pbVar8) {
      pbVar4 = (byte *)func_0x0099bd90(pbVar3,pbVar3 + (long)pbVar7,(long)pbVar8 - (long)pbVar7);
      bVar1 = *pbVar13;
    }
    lVar9 = (long)pbVar8 - (long)pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar10 = (int)lVar9 * 2;
      pbVar4 = (byte *)(ulong)uVar10;
      *pbVar13 = (byte)uVar10;
    }
    else {
      *(long *)(pbVar13 + 8) = lVar9;
    }
    pbVar3[lVar9] = 0;
    return pbVar4;
  }
  return pbVar13;
}


