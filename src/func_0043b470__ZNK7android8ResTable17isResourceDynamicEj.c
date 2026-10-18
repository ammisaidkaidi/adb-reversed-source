// Function: _ZNK7android8ResTable17isResourceDynamicEj
// Address: 0043b470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android8ResTable17isResourceDynamicEj(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  ulong extraout_RDX;
  short *psVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  short asStack_228 [128];
  long lStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 auStack_e8 [2];
  long lStack_d8;
  ulong uStack_d0;
  undefined1 auStack_a0 [128];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar6 = (ulong)*(byte *)(param_1 + 0xe8 + (param_2 >> 0x18 & 0xff));
    if (uVar6 == 0) {
      if ((uint)param_2 < 0x1000000) {
        puVar8 = &UNK_00184d32;
      }
      else {
        puVar8 = &UNK_00177417;
      }
    }
    else if ((param_2 & 0xff0000) == 0) {
      puVar8 = &UNK_00159917;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar6 * 8);
      if (lVar5 != 0) {
        uVar6 = 0;
        iVar4 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                          (param_1,lVar5,((uint)(param_2 >> 0x10) & 0xff) - 1,param_2 & 0xffff,0,
                           auStack_a0);
        if (iVar4 == 0) {
          uVar6 = (ulong)*(byte *)(lVar5 + 0x299);
        }
        goto code_r0x0043b53d;
      }
      puVar8 = &UNK_001631a7;
    }
    uVar6 = 0;
    param_1 = 5;
    __android_log_print(5,&UNK_0015b3df,puVar8);
  }
  else {
    uVar6 = 0;
  }
code_r0x0043b53d:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return uVar6;
  }
  func_0x0099bd00();
  uVar10 = extraout_RDX & 0xffffffff;
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_d0 = uVar6;
  _ZN7android8String16C2ERKS0_(auStack_e8);
  puVar11 = auStack_e8;
  lVar5 = _ZNK7android16SortedVectorImpl7indexOfEPKv(param_1 + 0x110);
  puVar12 = auStack_e8;
  _ZN7android8String16D2Ev();
  if (lVar5 < 0) {
    uVar6 = 0x80000000;
  }
  else {
    *(char *)(param_1 + 8 + (ulong)*(byte *)(*(long *)(param_1 + 0x118) + 8 + lVar5 * 0x10)) =
         (char)uVar10;
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) {
    return uVar6;
  }
  func_0x0099bd00();
  lStack_128 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(puVar11 + 1);
  uVar7 = *(int *)((long)puVar11 + 4) - (uint)*(ushort *)((long)puVar11 + 2);
  uStack_120 = uVar10;
  puStack_118 = auStack_e8;
  if (uVar7 / 0x104 < uVar1) {
    puVar12 = (undefined8 *)0x6;
    __android_log_print(6,&UNK_0015b3df,&UNK_00174268,uVar7,uVar1,0x104);
code_r0x0043b7f1:
    uVar6 = 0x80000000;
  }
  else {
    if (uVar1 != 0) {
      puVar13 = (uint *)((long)puVar11 + (ulong)*(ushort *)((long)puVar11 + 2));
      puVar11 = puVar12 + 0x22;
      uVar7 = 0;
      do {
        uVar2 = *puVar13;
        asStack_228[0x78] = 0;
        asStack_228[0x79] = 0;
        asStack_228[0x7a] = 0;
        asStack_228[0x7b] = 0;
        asStack_228[0x7c] = 0;
        asStack_228[0x7d] = 0;
        asStack_228[0x7e] = 0;
        asStack_228[0x7f] = 0;
        asStack_228[0x70] = 0;
        asStack_228[0x71] = 0;
        asStack_228[0x72] = 0;
        asStack_228[0x73] = 0;
        asStack_228[0x74] = 0;
        asStack_228[0x75] = 0;
        asStack_228[0x76] = 0;
        asStack_228[0x77] = 0;
        asStack_228[0x68] = 0;
        asStack_228[0x69] = 0;
        asStack_228[0x6a] = 0;
        asStack_228[0x6b] = 0;
        asStack_228[0x6c] = 0;
        asStack_228[0x6d] = 0;
        asStack_228[0x6e] = 0;
        asStack_228[0x6f] = 0;
        asStack_228[0x60] = 0;
        asStack_228[0x61] = 0;
        asStack_228[0x62] = 0;
        asStack_228[99] = 0;
        asStack_228[100] = 0;
        asStack_228[0x65] = 0;
        asStack_228[0x66] = 0;
        asStack_228[0x67] = 0;
        asStack_228[0x58] = 0;
        asStack_228[0x59] = 0;
        asStack_228[0x5a] = 0;
        asStack_228[0x5b] = 0;
        asStack_228[0x5c] = 0;
        asStack_228[0x5d] = 0;
        asStack_228[0x5e] = 0;
        asStack_228[0x5f] = 0;
        asStack_228[0x50] = 0;
        asStack_228[0x51] = 0;
        asStack_228[0x52] = 0;
        asStack_228[0x53] = 0;
        asStack_228[0x54] = 0;
        asStack_228[0x55] = 0;
        asStack_228[0x56] = 0;
        asStack_228[0x57] = 0;
        asStack_228[0x48] = 0;
        asStack_228[0x49] = 0;
        asStack_228[0x4a] = 0;
        asStack_228[0x4b] = 0;
        asStack_228[0x4c] = 0;
        asStack_228[0x4d] = 0;
        asStack_228[0x4e] = 0;
        asStack_228[0x4f] = 0;
        asStack_228[0x40] = 0;
        asStack_228[0x41] = 0;
        asStack_228[0x42] = 0;
        asStack_228[0x43] = 0;
        asStack_228[0x44] = 0;
        asStack_228[0x45] = 0;
        asStack_228[0x46] = 0;
        asStack_228[0x47] = 0;
        asStack_228[0x38] = 0;
        asStack_228[0x39] = 0;
        asStack_228[0x3a] = 0;
        asStack_228[0x3b] = 0;
        asStack_228[0x3c] = 0;
        asStack_228[0x3d] = 0;
        asStack_228[0x3e] = 0;
        asStack_228[0x3f] = 0;
        asStack_228[0x30] = 0;
        asStack_228[0x31] = 0;
        asStack_228[0x32] = 0;
        asStack_228[0x33] = 0;
        asStack_228[0x34] = 0;
        asStack_228[0x35] = 0;
        asStack_228[0x36] = 0;
        asStack_228[0x37] = 0;
        asStack_228[0x28] = 0;
        asStack_228[0x29] = 0;
        asStack_228[0x2a] = 0;
        asStack_228[0x2b] = 0;
        asStack_228[0x2c] = 0;
        asStack_228[0x2d] = 0;
        asStack_228[0x2e] = 0;
        asStack_228[0x2f] = 0;
        asStack_228[0x20] = 0;
        asStack_228[0x21] = 0;
        asStack_228[0x22] = 0;
        asStack_228[0x23] = 0;
        asStack_228[0x24] = 0;
        asStack_228[0x25] = 0;
        asStack_228[0x26] = 0;
        asStack_228[0x27] = 0;
        asStack_228[0x18] = 0;
        asStack_228[0x19] = 0;
        asStack_228[0x1a] = 0;
        asStack_228[0x1b] = 0;
        asStack_228[0x1c] = 0;
        asStack_228[0x1d] = 0;
        asStack_228[0x1e] = 0;
        asStack_228[0x1f] = 0;
        asStack_228[0x10] = 0;
        asStack_228[0x11] = 0;
        asStack_228[0x12] = 0;
        asStack_228[0x13] = 0;
        asStack_228[0x14] = 0;
        asStack_228[0x15] = 0;
        asStack_228[0x16] = 0;
        asStack_228[0x17] = 0;
        asStack_228[8] = 0;
        asStack_228[9] = 0;
        asStack_228[10] = 0;
        asStack_228[0xb] = 0;
        asStack_228[0xc] = 0;
        asStack_228[0xd] = 0;
        asStack_228[0xe] = 0;
        asStack_228[0xf] = 0;
        asStack_228[0] = 0;
        asStack_228[1] = 0;
        asStack_228[2] = 0;
        asStack_228[3] = 0;
        asStack_228[4] = 0;
        asStack_228[5] = 0;
        asStack_228[6] = 0;
        asStack_228[7] = 0;
        sVar3 = (short)puVar13[1];
        psVar9 = asStack_228;
        if (sVar3 != 0) {
          uVar6 = 0;
          do {
            uVar10 = uVar6;
            *(short *)((long)asStack_228 + uVar10) = sVar3;
            sVar3 = *(short *)((long)puVar13 + uVar10 + 6);
            if (sVar3 == 0) break;
            uVar6 = uVar10 + 2;
          } while (uVar10 < 0xfc);
          psVar9 = (short *)((long)asStack_228 + uVar10 + 2);
        }
        *psVar9 = 0;
        if (0xff < uVar2) {
          puVar12 = (undefined8 *)0x6;
          __android_log_print(6,&UNK_0015b3df,&UNK_00161766,uVar2);
          goto code_r0x0043b7f1;
        }
        _ZN7android8String16C2EPKDs(&uStack_240,asStack_228);
        uStack_238 = 0;
        uStack_230 = 0;
        _ZN7android8String16C2ERKS0_(&uStack_238,&uStack_240);
        uStack_230 = CONCAT71(uStack_230._1_7_,(char)uVar2);
        _ZN7android16SortedVectorImpl6removeEPKv(puVar11,&uStack_238);
        _ZN7android16SortedVectorImpl3addEPKv(puVar11);
        _ZN7android8String16D2Ev(&uStack_238);
        puVar12 = &uStack_240;
        _ZN7android8String16D2Ev();
        puVar13 = puVar13 + 0x41;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_128) {
    return uVar6;
  }
  func_0x0099bd00();
  *puVar12 = 0x99f858;
  func_0x0099bdb0(puVar12 + 1,0,0x102);
  _ZN7android16SortedVectorImplC2Emj(puVar12 + 0x22,0x10,0);
  puVar12[0x22] = 0x99faa8;
  puVar12[0x27] = 0;
  puVar12[0x28] = 0;
  puVar12[0x29] = 0;
  *(undefined1 *)((long)puVar12 + 0x87) = 0x7f;
  *(undefined1 *)((long)puVar12 + 9) = 1;
  return 0x99faa8;
}


