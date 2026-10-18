// Function: _ZN4absl12lts_2026052613time_internal4cctz14ParsePosixSpecERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS2_13PosixTimeZoneE
// Address: 004caa30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052613time_internal4cctz14ParsePosixSpecERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS2_13PosixTimeZoneE
               (byte *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  bVar3 = *param_1;
  pbVar6 = param_1;
  if (bVar3 == 0) {
code_r0x004caaf4:
    lVar4 = (long)pbVar6 - (long)param_1;
    if (lVar4 < 3) {
code_r0x004cab00:
      pbVar6 = (byte *)0x0;
      goto code_r0x004cab0d;
    }
  }
  else {
    if (bVar3 == 0x3a) {
      return false;
    }
    if (bVar3 != 0x3c) {
      do {
        uVar5 = 1L << (bVar3 & 0x3f);
        if (((uVar5 & 0x380000000001) != 0 && bVar3 < 0x40) ||
           ((uVar5 & 0x3ff000000000001) != 0 && bVar3 < 0x40)) break;
        bVar3 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      } while (bVar3 != 0);
      goto code_r0x004caaf4;
    }
    pbVar6 = param_1 + 1;
    lVar4 = -1;
    do {
      bVar3 = *pbVar6;
      if (bVar3 == 0) goto code_r0x004cab00;
      pbVar6 = pbVar6 + 1;
      lVar4 = lVar4 + 1;
    } while (bVar3 != 0x3e);
    param_1 = param_1 + 1;
  }
  func_0x0032ea90(param_2,param_1,lVar4);
code_r0x004cab0d:
  pbVar6 = (byte *)func_0x004cac60(pbVar6,0,0x18,0xffffffff,param_2 + 0x18);
  if (pbVar6 == (byte *)0x0) {
    return false;
  }
  bVar3 = *pbVar6;
  if (bVar3 == 0) {
    return true;
  }
  pbVar7 = pbVar6;
  if (bVar3 == 0x3c) {
    pbVar7 = pbVar6 + 1;
    lVar4 = -1;
    do {
      bVar3 = *pbVar7;
      if (bVar3 == 0) {
        return false;
      }
      pbVar7 = pbVar7 + 1;
      lVar4 = lVar4 + 1;
    } while (bVar3 != 0x3e);
    pbVar6 = pbVar6 + 1;
  }
  else {
    do {
      uVar5 = 1L << (bVar3 & 0x3f);
      if (((uVar5 & 0x380000000001) != 0 && bVar3 < 0x40) ||
         ((uVar5 & 0x3ff000000000001) != 0 && bVar3 < 0x40)) break;
      bVar3 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
    lVar4 = (long)pbVar7 - (long)pbVar6;
    if (lVar4 < 3) {
      return false;
    }
  }
  func_0x0032ea90(param_2 + 0x20,pbVar6,lVar4);
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x18) + 0xe10;
  if (*pbVar7 != 0x2c) {
    pbVar7 = (byte *)func_0x004cac60(pbVar7,0,0x18,0xffffffff,param_2 + 0x38);
  }
  uVar1 = func_0x004caf20(pbVar7,param_2 + 0x40);
  pcVar2 = (char *)func_0x004caf20(uVar1,param_2 + 0x58);
  if (pcVar2 == (char *)0x0) {
    return false;
  }
  return *pcVar2 == '\0';
}


