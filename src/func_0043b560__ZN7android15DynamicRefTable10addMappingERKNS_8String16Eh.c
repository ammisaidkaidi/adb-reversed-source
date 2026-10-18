// Function: _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
// Address: 0043b560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
          (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  short asStack_180 [128];
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 auStack_40 [2];
  long lStack_30;
  
  param_3 = param_3 & 0xffffffff;
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN7android8String16C2ERKS0_(auStack_40);
  puVar9 = auStack_40;
  lVar5 = _ZNK7android16SortedVectorImpl7indexOfEPKv(param_1 + 0x110);
  puVar11 = auStack_40;
  _ZN7android8String16D2Ev();
  if (lVar5 < 0) {
    uVar6 = 0x80000000;
  }
  else {
    *(char *)(param_1 + 8 + (ulong)*(byte *)(*(long *)(param_1 + 0x118) + 8 + lVar5 * 0x10)) =
         (char)param_3;
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar6;
  }
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(puVar9 + 1);
  uVar7 = *(int *)((long)puVar9 + 4) - (uint)*(ushort *)((long)puVar9 + 2);
  uStack_78 = param_3;
  puStack_70 = auStack_40;
  if (uVar7 / 0x104 < uVar1) {
    puVar11 = (undefined8 *)0x6;
    __android_log_print(6,&UNK_0015b3df,&UNK_00174268,uVar7,uVar1,0x104);
code_r0x0043b7f1:
    uVar6 = 0x80000000;
  }
  else {
    if (uVar1 != 0) {
      puVar12 = (uint *)((long)puVar9 + (ulong)*(ushort *)((long)puVar9 + 2));
      puVar9 = puVar11 + 0x22;
      uVar7 = 0;
      do {
        uVar2 = *puVar12;
        asStack_180[0x78] = 0;
        asStack_180[0x79] = 0;
        asStack_180[0x7a] = 0;
        asStack_180[0x7b] = 0;
        asStack_180[0x7c] = 0;
        asStack_180[0x7d] = 0;
        asStack_180[0x7e] = 0;
        asStack_180[0x7f] = 0;
        asStack_180[0x70] = 0;
        asStack_180[0x71] = 0;
        asStack_180[0x72] = 0;
        asStack_180[0x73] = 0;
        asStack_180[0x74] = 0;
        asStack_180[0x75] = 0;
        asStack_180[0x76] = 0;
        asStack_180[0x77] = 0;
        asStack_180[0x68] = 0;
        asStack_180[0x69] = 0;
        asStack_180[0x6a] = 0;
        asStack_180[0x6b] = 0;
        asStack_180[0x6c] = 0;
        asStack_180[0x6d] = 0;
        asStack_180[0x6e] = 0;
        asStack_180[0x6f] = 0;
        asStack_180[0x60] = 0;
        asStack_180[0x61] = 0;
        asStack_180[0x62] = 0;
        asStack_180[99] = 0;
        asStack_180[100] = 0;
        asStack_180[0x65] = 0;
        asStack_180[0x66] = 0;
        asStack_180[0x67] = 0;
        asStack_180[0x58] = 0;
        asStack_180[0x59] = 0;
        asStack_180[0x5a] = 0;
        asStack_180[0x5b] = 0;
        asStack_180[0x5c] = 0;
        asStack_180[0x5d] = 0;
        asStack_180[0x5e] = 0;
        asStack_180[0x5f] = 0;
        asStack_180[0x50] = 0;
        asStack_180[0x51] = 0;
        asStack_180[0x52] = 0;
        asStack_180[0x53] = 0;
        asStack_180[0x54] = 0;
        asStack_180[0x55] = 0;
        asStack_180[0x56] = 0;
        asStack_180[0x57] = 0;
        asStack_180[0x48] = 0;
        asStack_180[0x49] = 0;
        asStack_180[0x4a] = 0;
        asStack_180[0x4b] = 0;
        asStack_180[0x4c] = 0;
        asStack_180[0x4d] = 0;
        asStack_180[0x4e] = 0;
        asStack_180[0x4f] = 0;
        asStack_180[0x40] = 0;
        asStack_180[0x41] = 0;
        asStack_180[0x42] = 0;
        asStack_180[0x43] = 0;
        asStack_180[0x44] = 0;
        asStack_180[0x45] = 0;
        asStack_180[0x46] = 0;
        asStack_180[0x47] = 0;
        asStack_180[0x38] = 0;
        asStack_180[0x39] = 0;
        asStack_180[0x3a] = 0;
        asStack_180[0x3b] = 0;
        asStack_180[0x3c] = 0;
        asStack_180[0x3d] = 0;
        asStack_180[0x3e] = 0;
        asStack_180[0x3f] = 0;
        asStack_180[0x30] = 0;
        asStack_180[0x31] = 0;
        asStack_180[0x32] = 0;
        asStack_180[0x33] = 0;
        asStack_180[0x34] = 0;
        asStack_180[0x35] = 0;
        asStack_180[0x36] = 0;
        asStack_180[0x37] = 0;
        asStack_180[0x28] = 0;
        asStack_180[0x29] = 0;
        asStack_180[0x2a] = 0;
        asStack_180[0x2b] = 0;
        asStack_180[0x2c] = 0;
        asStack_180[0x2d] = 0;
        asStack_180[0x2e] = 0;
        asStack_180[0x2f] = 0;
        asStack_180[0x20] = 0;
        asStack_180[0x21] = 0;
        asStack_180[0x22] = 0;
        asStack_180[0x23] = 0;
        asStack_180[0x24] = 0;
        asStack_180[0x25] = 0;
        asStack_180[0x26] = 0;
        asStack_180[0x27] = 0;
        asStack_180[0x18] = 0;
        asStack_180[0x19] = 0;
        asStack_180[0x1a] = 0;
        asStack_180[0x1b] = 0;
        asStack_180[0x1c] = 0;
        asStack_180[0x1d] = 0;
        asStack_180[0x1e] = 0;
        asStack_180[0x1f] = 0;
        asStack_180[0x10] = 0;
        asStack_180[0x11] = 0;
        asStack_180[0x12] = 0;
        asStack_180[0x13] = 0;
        asStack_180[0x14] = 0;
        asStack_180[0x15] = 0;
        asStack_180[0x16] = 0;
        asStack_180[0x17] = 0;
        asStack_180[8] = 0;
        asStack_180[9] = 0;
        asStack_180[10] = 0;
        asStack_180[0xb] = 0;
        asStack_180[0xc] = 0;
        asStack_180[0xd] = 0;
        asStack_180[0xe] = 0;
        asStack_180[0xf] = 0;
        asStack_180[0] = 0;
        asStack_180[1] = 0;
        asStack_180[2] = 0;
        asStack_180[3] = 0;
        asStack_180[4] = 0;
        asStack_180[5] = 0;
        asStack_180[6] = 0;
        asStack_180[7] = 0;
        sVar4 = (short)puVar12[1];
        psVar8 = asStack_180;
        if (sVar4 != 0) {
          uVar3 = 0;
          do {
            uVar10 = uVar3;
            *(short *)((long)asStack_180 + uVar10) = sVar4;
            sVar4 = *(short *)((long)puVar12 + uVar10 + 6);
            if (sVar4 == 0) break;
            uVar3 = uVar10 + 2;
          } while (uVar10 < 0xfc);
          psVar8 = (short *)((long)asStack_180 + uVar10 + 2);
        }
        *psVar8 = 0;
        if (0xff < uVar2) {
          puVar11 = (undefined8 *)0x6;
          __android_log_print(6,&UNK_0015b3df,&UNK_00161766,uVar2);
          goto code_r0x0043b7f1;
        }
        _ZN7android8String16C2EPKDs(&uStack_198,asStack_180);
        uStack_190 = 0;
        uStack_188 = 0;
        _ZN7android8String16C2ERKS0_(&uStack_190,&uStack_198);
        uStack_188 = CONCAT71(uStack_188._1_7_,(char)uVar2);
        _ZN7android16SortedVectorImpl6removeEPKv(puVar9,&uStack_190);
        _ZN7android16SortedVectorImpl3addEPKv(puVar9);
        _ZN7android8String16D2Ev(&uStack_190);
        puVar11 = &uStack_198;
        _ZN7android8String16D2Ev();
        puVar12 = puVar12 + 0x41;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uVar6;
  }
  func_0x0099bd00();
  *puVar11 = 0x99f858;
  func_0x0099bdb0(puVar11 + 1,0,0x102);
  _ZN7android16SortedVectorImplC2Emj(puVar11 + 0x22,0x10,0);
  puVar11[0x22] = 0x99faa8;
  puVar11[0x27] = 0;
  puVar11[0x28] = 0;
  puVar11[0x29] = 0;
  *(undefined1 *)((long)puVar11 + 0x87) = 0x7f;
  *(undefined1 *)((long)puVar11 + 9) = 1;
  return 0x99faa8;
}


