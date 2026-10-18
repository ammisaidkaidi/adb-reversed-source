// Function: _ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE
// Address: 0043b5f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  short sVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  ulong uVar9;
  uint *puVar10;
  long in_FS_OFFSET;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  short asStack_138 [128];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 8);
  uVar7 = *(int *)(param_2 + 4) - (uint)*(ushort *)(param_2 + 2);
  if (uVar7 / 0x104 < uVar2) {
    param_1 = (undefined8 *)0x6;
    __android_log_print(6,&UNK_0015b3df,&UNK_00174268,uVar7,uVar2,0x104);
code_r0x0043b7f1:
    uVar6 = 0x80000000;
  }
  else {
    if (uVar2 != 0) {
      puVar10 = (uint *)(param_2 + (ulong)*(ushort *)(param_2 + 2));
      puVar1 = param_1 + 0x22;
      uVar7 = 0;
      do {
        uVar3 = *puVar10;
        asStack_138[0x78] = 0;
        asStack_138[0x79] = 0;
        asStack_138[0x7a] = 0;
        asStack_138[0x7b] = 0;
        asStack_138[0x7c] = 0;
        asStack_138[0x7d] = 0;
        asStack_138[0x7e] = 0;
        asStack_138[0x7f] = 0;
        asStack_138[0x70] = 0;
        asStack_138[0x71] = 0;
        asStack_138[0x72] = 0;
        asStack_138[0x73] = 0;
        asStack_138[0x74] = 0;
        asStack_138[0x75] = 0;
        asStack_138[0x76] = 0;
        asStack_138[0x77] = 0;
        asStack_138[0x68] = 0;
        asStack_138[0x69] = 0;
        asStack_138[0x6a] = 0;
        asStack_138[0x6b] = 0;
        asStack_138[0x6c] = 0;
        asStack_138[0x6d] = 0;
        asStack_138[0x6e] = 0;
        asStack_138[0x6f] = 0;
        asStack_138[0x60] = 0;
        asStack_138[0x61] = 0;
        asStack_138[0x62] = 0;
        asStack_138[99] = 0;
        asStack_138[100] = 0;
        asStack_138[0x65] = 0;
        asStack_138[0x66] = 0;
        asStack_138[0x67] = 0;
        asStack_138[0x58] = 0;
        asStack_138[0x59] = 0;
        asStack_138[0x5a] = 0;
        asStack_138[0x5b] = 0;
        asStack_138[0x5c] = 0;
        asStack_138[0x5d] = 0;
        asStack_138[0x5e] = 0;
        asStack_138[0x5f] = 0;
        asStack_138[0x50] = 0;
        asStack_138[0x51] = 0;
        asStack_138[0x52] = 0;
        asStack_138[0x53] = 0;
        asStack_138[0x54] = 0;
        asStack_138[0x55] = 0;
        asStack_138[0x56] = 0;
        asStack_138[0x57] = 0;
        asStack_138[0x48] = 0;
        asStack_138[0x49] = 0;
        asStack_138[0x4a] = 0;
        asStack_138[0x4b] = 0;
        asStack_138[0x4c] = 0;
        asStack_138[0x4d] = 0;
        asStack_138[0x4e] = 0;
        asStack_138[0x4f] = 0;
        asStack_138[0x40] = 0;
        asStack_138[0x41] = 0;
        asStack_138[0x42] = 0;
        asStack_138[0x43] = 0;
        asStack_138[0x44] = 0;
        asStack_138[0x45] = 0;
        asStack_138[0x46] = 0;
        asStack_138[0x47] = 0;
        asStack_138[0x38] = 0;
        asStack_138[0x39] = 0;
        asStack_138[0x3a] = 0;
        asStack_138[0x3b] = 0;
        asStack_138[0x3c] = 0;
        asStack_138[0x3d] = 0;
        asStack_138[0x3e] = 0;
        asStack_138[0x3f] = 0;
        asStack_138[0x30] = 0;
        asStack_138[0x31] = 0;
        asStack_138[0x32] = 0;
        asStack_138[0x33] = 0;
        asStack_138[0x34] = 0;
        asStack_138[0x35] = 0;
        asStack_138[0x36] = 0;
        asStack_138[0x37] = 0;
        asStack_138[0x28] = 0;
        asStack_138[0x29] = 0;
        asStack_138[0x2a] = 0;
        asStack_138[0x2b] = 0;
        asStack_138[0x2c] = 0;
        asStack_138[0x2d] = 0;
        asStack_138[0x2e] = 0;
        asStack_138[0x2f] = 0;
        asStack_138[0x20] = 0;
        asStack_138[0x21] = 0;
        asStack_138[0x22] = 0;
        asStack_138[0x23] = 0;
        asStack_138[0x24] = 0;
        asStack_138[0x25] = 0;
        asStack_138[0x26] = 0;
        asStack_138[0x27] = 0;
        asStack_138[0x18] = 0;
        asStack_138[0x19] = 0;
        asStack_138[0x1a] = 0;
        asStack_138[0x1b] = 0;
        asStack_138[0x1c] = 0;
        asStack_138[0x1d] = 0;
        asStack_138[0x1e] = 0;
        asStack_138[0x1f] = 0;
        asStack_138[0x10] = 0;
        asStack_138[0x11] = 0;
        asStack_138[0x12] = 0;
        asStack_138[0x13] = 0;
        asStack_138[0x14] = 0;
        asStack_138[0x15] = 0;
        asStack_138[0x16] = 0;
        asStack_138[0x17] = 0;
        asStack_138[8] = 0;
        asStack_138[9] = 0;
        asStack_138[10] = 0;
        asStack_138[0xb] = 0;
        asStack_138[0xc] = 0;
        asStack_138[0xd] = 0;
        asStack_138[0xe] = 0;
        asStack_138[0xf] = 0;
        asStack_138[0] = 0;
        asStack_138[1] = 0;
        asStack_138[2] = 0;
        asStack_138[3] = 0;
        asStack_138[4] = 0;
        asStack_138[5] = 0;
        asStack_138[6] = 0;
        asStack_138[7] = 0;
        sVar5 = (short)puVar10[1];
        psVar8 = asStack_138;
        if (sVar5 != 0) {
          uVar4 = 0;
          do {
            uVar9 = uVar4;
            *(short *)((long)asStack_138 + uVar9) = sVar5;
            sVar5 = *(short *)((long)puVar10 + uVar9 + 6);
            if (sVar5 == 0) break;
            uVar4 = uVar9 + 2;
          } while (uVar9 < 0xfc);
          psVar8 = (short *)((long)asStack_138 + uVar9 + 2);
        }
        *psVar8 = 0;
        if (0xff < uVar3) {
          param_1 = (undefined8 *)0x6;
          __android_log_print(6,&UNK_0015b3df,&UNK_00161766,uVar3);
          goto code_r0x0043b7f1;
        }
        _ZN7android8String16C2EPKDs(&uStack_150,asStack_138);
        uStack_148 = 0;
        uStack_140 = 0;
        _ZN7android8String16C2ERKS0_(&uStack_148,&uStack_150);
        uStack_140 = CONCAT71(uStack_140._1_7_,(char)uVar3);
        _ZN7android16SortedVectorImpl6removeEPKv(puVar1,&uStack_148);
        _ZN7android16SortedVectorImpl3addEPKv(puVar1);
        _ZN7android8String16D2Ev(&uStack_148);
        param_1 = &uStack_150;
        _ZN7android8String16D2Ev();
        puVar10 = puVar10 + 0x41;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar2);
    }
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  func_0x0099bd00();
  *param_1 = 0x99f858;
  func_0x0099bdb0(param_1 + 1,0,0x102);
  _ZN7android16SortedVectorImplC2Emj(param_1 + 0x22,0x10,0);
  param_1[0x22] = 0x99faa8;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((long)param_1 + 0x87) = 0x7f;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return 0x99faa8;
}


