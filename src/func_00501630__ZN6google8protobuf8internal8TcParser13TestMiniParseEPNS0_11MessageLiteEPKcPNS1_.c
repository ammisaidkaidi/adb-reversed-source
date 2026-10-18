// Function: _ZN6google8protobuf8internal8TcParser13TestMiniParseEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
// Address: 00501630
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal8TcParser13TestMiniParseEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
          (undefined8 *param_1,long param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  byte *extraout_RDX;
  byte *pbVar7;
  uint7 uVar9;
  ulong uVar8;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = (ulong)*param_3;
  pbVar7 = param_3 + 1;
  if ((char)*param_3 < '\0') {
    uVar9 = (uint7)((uVar8 << 0x39) >> 8);
    lVar12 = CONCAT71(uVar9,*pbVar7);
    if ((char)*pbVar7 < '\0') goto code_r0x00501856;
    uVar8 = lVar12 << 7 | (ulong)(uVar9 >> 0x31);
    pbVar7 = param_3 + 2;
  }
code_r0x00501676:
  do {
    uVar11 = (uint)(uVar8 >> 3) & 0x1fffffff;
    uVar5 = uVar11 - 1;
    lVar10 = param_2;
    if (uVar5 < 0x20) {
      if ((*(uint *)(param_6 + 0xc) >> (uVar5 & 0x1f) & 1) != 0) goto code_r0x0050178d;
      uVar11 = *(uint *)(param_6 + 0xc) & (1 << ((byte)uVar5 & 0x1f)) - 1U;
      uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar5 = uVar5 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f) * 0x1010101 >> 0x18);
code_r0x005016f2:
      lVar6 = (ulong)*(uint *)(param_6 + 0x10) + param_6;
      lVar12 = lVar6 + (ulong)uVar5 * 0xc;
      pcVar3 = *(code **)(
                         _ZZN6google8protobuf8internal8TcParser9MiniParseILb1EEEPKcPNS0_11MessageLiteES5_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmE15kMiniParseTable
                         + (ulong)(*(ushort *)(lVar6 + 10 + (ulong)uVar5 * 0xc) & 0xf) * 8);
      *param_1 = pcVar3;
      *(int *)(param_1 + 1) = (int)uVar8;
      param_1[2] = lVar12;
      uVar4 = (*pcVar3)(param_2,pbVar7,param_4,
                        uVar8 & 0xffffffff | (ulong)(uint)((int)lVar12 - (int)param_6) << 0x20);
    }
    else {
      uVar5 = *(uint *)((ulong)*(ushort *)(param_6 + 10) + param_6);
      if (uVar5 <= uVar11) {
        lVar12 = (ulong)*(ushort *)(param_6 + 10) + param_6;
        do {
          uVar1 = *(ushort *)(lVar12 + 4);
          lVar6 = lVar12 + 6;
          uVar13 = uVar11 - uVar5 >> 4;
          if (uVar13 < uVar1) {
            uVar1 = *(ushort *)(lVar6 + (ulong)uVar13 * 4);
            uVar11 = uVar11 - uVar5 & 0xf;
            if ((uVar1 >> uVar11 & 1) == 0) {
              uVar5 = (1 << (sbyte)uVar11) - 1U & (uint)uVar1;
              uVar5 = uVar5 - (uVar5 >> 1 & 0x5555);
              uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
              uVar5 = (uVar11 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18)) +
                      (uint)*(ushort *)(lVar12 + 8 + (ulong)(uVar13 * 2) * 2);
              goto code_r0x005016f2;
            }
            break;
          }
          uVar5 = *(uint *)(lVar6 + (ulong)uVar1 * 4);
          lVar12 = lVar6 + (ulong)uVar1 * 4;
        } while (uVar5 <= uVar11);
      }
code_r0x0050178d:
      pcVar3 = *(code **)(param_6 + 0x30);
      *param_1 = pcVar3;
      *(int *)(param_1 + 1) = (int)uVar8;
      param_1[2] = 0;
      uVar4 = (*pcVar3)(param_2,pbVar7,param_4,uVar8 & 0xffffffff);
    }
    while( true ) {
      param_1[3] = uVar4;
      if (*(long *)(in_FS_OFFSET + 0x28) == lVar2) {
        return param_1;
      }
      param_4 = func_0x0099bd00();
      param_3 = extraout_RDX;
      lVar12 = param_2;
      param_2 = lVar10;
      uVar14 = extraout_XMM0_Da;
      uVar15 = extraout_XMM0_Db;
      uVar16 = extraout_XMM0_Dc;
      uVar17 = extraout_XMM0_Dd;
code_r0x00501856:
      uVar9 = (uint7)((ulong)lVar12 >> 0xf) | (uint7)((ulong)(lVar12 << 0x39) >> 8);
      lVar12 = CONCAT71(uVar9,param_3[2]);
      if (-1 < (char)param_3[2]) {
        uVar8 = lVar12 << 0xe | (ulong)(uVar9 >> 0x2a);
        pbVar7 = param_3 + 3;
        goto code_r0x00501676;
      }
      uVar9 = uVar9 >> 7 | (uint7)((ulong)(lVar12 << 0x39) >> 8);
      lVar12 = CONCAT71(uVar9,param_3[3]);
      if (-1 < (char)param_3[3]) {
        uVar8 = lVar12 << 0x15 | (ulong)(uVar9 >> 0x23);
        pbVar7 = param_3 + 4;
        goto code_r0x00501676;
      }
      uVar9 = uVar9 >> 7 | (uint7)((ulong)(lVar12 << 0x39) >> 8);
      if (-1 < (char)param_3[4]) break;
      *(undefined4 *)(param_1 + 1) = uVar14;
      *(undefined4 *)((long)param_1 + 0xc) = uVar15;
      *(undefined4 *)(param_1 + 2) = uVar16;
      *(undefined4 *)((long)param_1 + 0x14) = uVar17;
      *param_1 = 
      _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
      ;
      lVar10 = param_2;
      uVar4 = _ZN6google8protobuf8internal8TcParser5ErrorEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
                        (param_2);
    }
    uVar8 = CONCAT71(uVar9,param_3[4]) << 0x1c | (ulong)(uVar9 >> 0x1c);
    pbVar7 = param_3 + 5;
  } while( true );
}


