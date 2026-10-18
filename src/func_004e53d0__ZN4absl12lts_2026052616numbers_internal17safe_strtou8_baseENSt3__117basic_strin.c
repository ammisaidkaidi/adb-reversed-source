// Function: _ZN4absl12lts_2026052616numbers_internal17safe_strtou8_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPhi
// Address: 004e53d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal17safe_strtou8_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPhi
          (byte *param_1,long param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar6] & 8) == 0) break;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar5 + -1]] & 8) != 0);
  bVar4 = *pbVar6;
  pbVar7 = param_1 + lVar5;
  if (((bVar4 != 0x2d) && (bVar4 != 0x2b)) || (pbVar6 = pbVar6 + 1, pbVar6 < pbVar7)) {
    if (param_4 == 0x10) {
      param_4 = 0x10;
      if (((1 < (long)(param_1 + (param_2 - (long)pbVar6) + 1)) && (*pbVar6 == 0x30)) &&
         (((pbVar6[1] | 0x20) == 0x78 && (pbVar6 = pbVar6 + 2, pbVar7 <= pbVar6)))) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      if ((long)(param_1 + (param_2 - (long)pbVar6) + 1) < 2) {
        param_4 = 10;
        if (param_1 + (param_2 - (long)pbVar6) == (byte *)0x0) {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + (bVar1 == 0x30);
          param_4 = (uint)(bVar1 != 0x30) * 2 + 8;
        }
      }
      else if (*pbVar6 == 0x30) {
        if ((pbVar6[1] | 0x20) == 0x78) {
          pbVar6 = pbVar6 + 2;
          if (pbVar7 <= pbVar6) {
            return 0;
          }
          param_4 = 0x10;
        }
        else {
          pbVar6 = pbVar6 + 1;
          param_4 = 8;
        }
      }
      else {
        param_4 = 10;
      }
    }
    else if (0x22 < param_4 - 2) {
      return 0;
    }
    if (bVar4 != 0x2d) {
      uVar3 = 1;
      if (param_1 + lVar5 == pbVar6) {
        bVar4 = 0;
      }
      else {
        bVar4 = 0;
        do {
          bVar1 = (&UNK_002004a4)[*pbVar6];
          if (param_4 <= bVar1) {
            uVar3 = 0;
            break;
          }
          if ((byte)(&UNK_00200ef0)[param_4] < bVar4) {
code_r0x004e5599:
            uVar3 = 0;
            bVar4 = 0xff;
            break;
          }
          sVar2 = (ushort)bVar4 * (ushort)(byte)param_4;
          bVar4 = (byte)sVar2;
          if ((bVar1 ^ 0xff) < bVar4) goto code_r0x004e5599;
          bVar4 = bVar1 + bVar4;
          pbVar6 = pbVar6 + 1;
          uVar3 = CONCAT71((uint7)(byte)((ushort)sVar2 >> 8),1);
        } while (pbVar6 < param_1 + lVar5);
      }
      *param_3 = bVar4;
      return uVar3;
    }
  }
  return 0;
}


