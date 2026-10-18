// Function: _ZN4absl12lts_2026052612log_internal10ProtoField10DecodeFromEPNS0_4SpanIKcEE
// Address: 004bf2b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052612log_internal10ProtoField10DecodeFromEPNS0_4SpanIKcEE
          (ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ushort uVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    bVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    do {
      uVar13 = uVar2;
      if (uVar2 == uVar11) break;
      bVar1 = *(byte *)(*param_2 + uVar11);
      uVar10 = uVar10 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
      uVar13 = uVar11 + 1;
      bVar9 = bVar9 + 7;
      uVar11 = uVar13;
    } while ((char)bVar1 < '\0');
    *param_2 = *param_2 + uVar13;
    param_2[1] = uVar2 - uVar13;
    *param_1 = uVar10 >> 3;
    uVar11 = (ulong)((uint)uVar10 & 7);
    param_1[1] = uVar11;
    switch(uVar11) {
    case 0:
      uVar11 = param_2[1];
      bVar9 = 0;
      uVar13 = 0;
      uVar10 = 0;
      do {
        uVar14 = uVar11;
        if (uVar11 == uVar10) break;
        bVar1 = *(byte *)(*param_2 + uVar10);
        uVar13 = uVar13 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
        uVar14 = uVar10 + 1;
        bVar9 = bVar9 + 7;
        uVar10 = uVar14;
      } while ((char)bVar1 < '\0');
      *param_2 = *param_2 + uVar14;
      param_2[1] = uVar11 - uVar14;
      param_1[2] = uVar13;
      break;
    case 1:
      pbVar3 = (byte *)*param_2;
      uVar11 = param_2[1];
      uVar10 = 7;
      if (uVar11 < 7) {
        uVar10 = uVar11;
      }
      if (uVar11 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulong)*pbVar3;
        if (uVar11 != 1) {
          uVar4 = CONCAT11(pbVar3[1],*pbVar3);
          uVar13 = (ulong)uVar4;
          if (uVar11 != 2) {
            uVar5 = CONCAT12(pbVar3[2],uVar4);
            uVar13 = (ulong)uVar5;
            if (uVar11 != 3) {
              uVar12 = CONCAT13(pbVar3[3],uVar5);
              uVar13 = (ulong)uVar12;
              if (uVar11 != 4) {
                uVar6 = CONCAT14(pbVar3[4],uVar12);
                uVar13 = (ulong)uVar6;
                if (uVar11 != 5) {
                  uVar7 = CONCAT15(pbVar3[5],uVar6);
                  uVar13 = (ulong)uVar7;
                  if (uVar11 != 6) {
                    uVar8 = CONCAT16(pbVar3[6],uVar7);
                    uVar13 = (ulong)uVar8;
                    if (uVar11 != 7) {
                      uVar13 = CONCAT17(pbVar3[7],uVar8);
                      uVar10 = 8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *param_2 = (ulong)(pbVar3 + uVar10);
      param_2[1] = uVar11 - uVar10;
      param_1[2] = uVar13;
      break;
    case 2:
      uVar11 = param_2[1];
      bVar9 = 0;
      uVar10 = 0;
      uVar13 = 0;
      do {
        uVar14 = uVar11;
        if (uVar11 == uVar13) break;
        bVar1 = *(byte *)(*param_2 + uVar13);
        uVar10 = uVar10 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
        uVar14 = uVar13 + 1;
        bVar9 = bVar9 + 7;
        uVar13 = uVar14;
      } while ((char)bVar1 < '\0');
      *param_2 = *param_2 + uVar14;
      param_2[1] = uVar11 - uVar14;
      param_1[2] = uVar10;
      if (param_2[1] < uVar10) {
        uVar10 = param_2[1];
      }
      param_1[3] = *param_2;
      param_1[4] = uVar10;
      *param_2 = *param_2 + uVar10;
      param_2[1] = param_2[1] - uVar10;
      break;
    case 5:
      pbVar3 = (byte *)*param_2;
      uVar11 = param_2[1];
      uVar10 = 3;
      if (uVar11 < 3) {
        uVar10 = uVar11;
      }
      if (uVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)*pbVar3;
        if (uVar11 != 1) {
          uVar4 = CONCAT11(pbVar3[1],*pbVar3);
          uVar12 = (uint)uVar4;
          if (uVar11 != 2) {
            uVar5 = CONCAT12(pbVar3[2],uVar4);
            uVar12 = (uint)uVar5;
            if (uVar11 != 3) {
              uVar12 = CONCAT13(pbVar3[3],uVar5);
              uVar10 = 4;
            }
          }
        }
      }
      *param_2 = (ulong)(pbVar3 + uVar10);
      param_2[1] = uVar11 - uVar10;
      param_1[2] = (ulong)uVar12;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),uVar2 != 0);
}


