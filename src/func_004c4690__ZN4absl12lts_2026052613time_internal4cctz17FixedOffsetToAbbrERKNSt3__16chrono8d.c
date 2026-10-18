// Function: _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToAbbrERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
// Address: 004c4690
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

byte * _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToAbbrERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
                 (byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToNameERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
            ();
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 == 0x12) goto code_r0x004c46cf;
  }
  else if (*(long *)(param_1 + 8) == 0x12) {
code_r0x004c46cf:
    bVar1 = *param_1;
    if ((bVar1 & 1) == 0) {
      pbVar5 = (byte *)(ulong)(bVar1 >> 1);
      pbVar7 = param_1 + 1;
    }
    else {
      pbVar5 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    pbVar4 = (byte *)0x9;
    if (pbVar5 < (byte *)0x9) {
      pbVar4 = pbVar5;
    }
    pbVar3 = pbVar5;
    if ((byte *)0x9 < pbVar5) {
      pbVar3 = (byte *)func_0x0099bd90(pbVar7,pbVar7 + (long)pbVar4,(long)pbVar5 - (long)pbVar4);
      bVar1 = *param_1;
    }
    lVar6 = (long)pbVar5 - (long)pbVar4;
    if ((bVar1 & 1) == 0) {
      uVar2 = (int)lVar6 * 2;
      pbVar3 = (byte *)(ulong)uVar2;
      *param_1 = (byte)uVar2;
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar7[lVar6] = 0;
    return pbVar3;
  }
  return param_1;
}


