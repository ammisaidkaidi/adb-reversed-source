// Function: _ZN4absl12lts_2026052614ascii_internal15AsciiStrToLowerEPcPKcm
// Address: 004e5f20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052614ascii_internal15AsciiStrToLowerEPcPKcm
               (long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  ulong uVar35;
  ulong uVar36;
  
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      return;
    }
    if (param_3 == 1) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      do {
        *(byte *)(param_1 + uVar35) =
             ((byte)(*(byte *)(param_2 + uVar35) + 0xbf) < 0x1a) << 5 ^ *(byte *)(param_2 + uVar35);
        bVar4 = *(byte *)(param_2 + 1 + uVar35);
        *(byte *)(param_1 + 1 + uVar35) = ((byte)(bVar4 + 0xbf) < 0x1a) << 5 ^ bVar4;
        uVar35 = uVar35 + 2;
      } while (((uint)param_3 & 0xe) != uVar35);
      if ((param_3 & 1) == 0) {
        return;
      }
    }
    *(byte *)(param_1 + uVar35) =
         ((byte)(*(byte *)(param_2 + uVar35) + 0xbf) < 0x1a) << 5 ^ *(byte *)(param_2 + uVar35);
    return;
  }
  if ((ulong)(param_1 - param_2) < 0x20) {
    uVar35 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar36 = 0;
    }
    else {
      uVar35 = param_3 & 0xffffffffffffffe0;
      uVar36 = 0;
      do {
        pbVar1 = (byte *)(param_2 + uVar36);
        bVar4 = pbVar1[1];
        bVar5 = pbVar1[2];
        bVar6 = pbVar1[3];
        bVar7 = pbVar1[4];
        bVar8 = pbVar1[5];
        bVar9 = pbVar1[6];
        bVar10 = pbVar1[7];
        bVar11 = pbVar1[8];
        bVar12 = pbVar1[9];
        bVar13 = pbVar1[10];
        bVar14 = pbVar1[0xb];
        bVar15 = pbVar1[0xc];
        bVar16 = pbVar1[0xd];
        bVar17 = pbVar1[0xe];
        bVar18 = pbVar1[0xf];
        pbVar2 = (byte *)(param_2 + 0x10 + uVar36);
        bVar19 = *pbVar2;
        bVar20 = pbVar2[1];
        bVar21 = pbVar2[2];
        bVar22 = pbVar2[3];
        bVar23 = pbVar2[4];
        bVar24 = pbVar2[5];
        bVar25 = pbVar2[6];
        bVar26 = pbVar2[7];
        bVar27 = pbVar2[8];
        bVar28 = pbVar2[9];
        bVar29 = pbVar2[10];
        bVar30 = pbVar2[0xb];
        bVar31 = pbVar2[0xc];
        bVar32 = pbVar2[0xd];
        bVar33 = pbVar2[0xe];
        bVar34 = pbVar2[0xf];
        pbVar2 = (byte *)(param_1 + uVar36);
        *pbVar2 = -((char)(*pbVar1 + 0x3f) < -0x66) & 0x20U ^ *pbVar1;
        pbVar2[1] = -((char)(bVar4 + 0x3f) < -0x66) & 0x20U ^ bVar4;
        pbVar2[2] = -((char)(bVar5 + 0x3f) < -0x66) & 0x20U ^ bVar5;
        pbVar2[3] = -((char)(bVar6 + 0x3f) < -0x66) & 0x20U ^ bVar6;
        pbVar2[4] = -((char)(bVar7 + 0x3f) < -0x66) & 0x20U ^ bVar7;
        pbVar2[5] = -((char)(bVar8 + 0x3f) < -0x66) & 0x20U ^ bVar8;
        pbVar2[6] = -((char)(bVar9 + 0x3f) < -0x66) & 0x20U ^ bVar9;
        pbVar2[7] = -((char)(bVar10 + 0x3f) < -0x66) & 0x20U ^ bVar10;
        pbVar2[8] = -((char)(bVar11 + 0x3f) < -0x66) & 0x20U ^ bVar11;
        pbVar2[9] = -((char)(bVar12 + 0x3f) < -0x66) & 0x20U ^ bVar12;
        pbVar2[10] = -((char)(bVar13 + 0x3f) < -0x66) & 0x20U ^ bVar13;
        pbVar2[0xb] = -((char)(bVar14 + 0x3f) < -0x66) & 0x20U ^ bVar14;
        pbVar2[0xc] = -((char)(bVar15 + 0x3f) < -0x66) & 0x20U ^ bVar15;
        pbVar2[0xd] = -((char)(bVar16 + 0x3f) < -0x66) & 0x20U ^ bVar16;
        pbVar2[0xe] = -((char)(bVar17 + 0x3f) < -0x66) & 0x20U ^ bVar17;
        pbVar2[0xf] = -((char)(bVar18 + 0x3f) < -0x66) & 0x20U ^ bVar18;
        pbVar1 = (byte *)(param_1 + 0x10 + uVar36);
        *pbVar1 = -((char)(bVar19 + 0x3f) < -0x66) & 0x20U ^ bVar19;
        pbVar1[1] = -((char)(bVar20 + 0x3f) < -0x66) & 0x20U ^ bVar20;
        pbVar1[2] = -((char)(bVar21 + 0x3f) < -0x66) & 0x20U ^ bVar21;
        pbVar1[3] = -((char)(bVar22 + 0x3f) < -0x66) & 0x20U ^ bVar22;
        pbVar1[4] = -((char)(bVar23 + 0x3f) < -0x66) & 0x20U ^ bVar23;
        pbVar1[5] = -((char)(bVar24 + 0x3f) < -0x66) & 0x20U ^ bVar24;
        pbVar1[6] = -((char)(bVar25 + 0x3f) < -0x66) & 0x20U ^ bVar25;
        pbVar1[7] = -((char)(bVar26 + 0x3f) < -0x66) & 0x20U ^ bVar26;
        pbVar1[8] = -((char)(bVar27 + 0x3f) < -0x66) & 0x20U ^ bVar27;
        pbVar1[9] = -((char)(bVar28 + 0x3f) < -0x66) & 0x20U ^ bVar28;
        pbVar1[10] = -((char)(bVar29 + 0x3f) < -0x66) & 0x20U ^ bVar29;
        pbVar1[0xb] = -((char)(bVar30 + 0x3f) < -0x66) & 0x20U ^ bVar30;
        pbVar1[0xc] = -((char)(bVar31 + 0x3f) < -0x66) & 0x20U ^ bVar31;
        pbVar1[0xd] = -((char)(bVar32 + 0x3f) < -0x66) & 0x20U ^ bVar32;
        pbVar1[0xe] = -((char)(bVar33 + 0x3f) < -0x66) & 0x20U ^ bVar33;
        pbVar1[0xf] = -((char)(bVar34 + 0x3f) < -0x66) & 0x20U ^ bVar34;
        uVar36 = uVar36 + 0x20;
      } while (uVar35 != uVar36);
      if (param_3 == uVar35) {
        return;
      }
      uVar36 = uVar35;
      if ((param_3 & 0x18) == 0) goto code_r0x004e60ac;
    }
    uVar35 = param_3 & 0xfffffffffffffff8;
    do {
      uVar3 = *(ulong *)(param_2 + uVar36);
      *(ulong *)(param_1 + uVar36) =
           ~CONCAT17(-(-0x67 < (char)((char)(uVar3 >> 0x38) + '?')),
                     CONCAT16(-(-0x67 < (char)((char)(uVar3 >> 0x30) + '?')),
                              CONCAT15(-(-0x67 < (char)((char)(uVar3 >> 0x28) + '?')),
                                       CONCAT14(-(-0x67 < (char)((char)(uVar3 >> 0x20) + '?')),
                                                CONCAT13(-(-0x67 < (char)((char)(uVar3 >> 0x18) +
                                                                         '?')),
                                                         CONCAT12(-(-0x67 < (char)((char)(uVar3 >> 
                                                  0x10) + '?')),
                                                  CONCAT11(-(-0x67 < (char)((char)(uVar3 >> 8) + '?'
                                                                           )),
                                                           -(-0x67 < (char)((char)uVar3 + '?')))))))
                             )) & 0x2020202020202020 ^ uVar3;
      uVar36 = uVar36 + 8;
    } while (uVar35 != uVar36);
    if (param_3 == uVar35) {
      return;
    }
  }
code_r0x004e60ac:
  uVar36 = uVar35 | 1;
  if ((param_3 & 1) != 0) {
    *(byte *)(param_1 + uVar35) =
         ((char)(*(byte *)(param_2 + uVar35) + 0x3f) < -0x66) << 5 ^ *(byte *)(param_2 + uVar35);
    uVar35 = uVar36;
  }
  while (param_3 != uVar36) {
    *(byte *)(param_1 + uVar35) =
         ((char)(*(byte *)(param_2 + uVar35) + 0x3f) < -0x66) << 5 ^ *(byte *)(param_2 + uVar35);
    bVar4 = *(byte *)(param_2 + 1 + uVar35);
    *(byte *)(param_1 + 1 + uVar35) = ((char)(bVar4 + 0x3f) < -0x66) << 5 ^ bVar4;
    uVar36 = uVar35 + 2;
    uVar35 = uVar36;
  }
  return;
}


