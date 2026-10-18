// Function: LZ4F_compressBegin_internal
// Address: 004a5ab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long LZ4F_compressBegin_internal
               (undefined8 *param_1,undefined4 *param_2,ulong param_3,long param_4,ulong param_5,
               long param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 extraout_AH;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  short sVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_78 = 4;
  lVar18 = -0xb;
  if (param_3 < 0x13) goto code_r0x004a5f08;
  puVar16 = param_7;
  if (param_7 == (undefined8 *)0x0) {
    puVar16 = &uStack_78;
  }
  uVar3 = *(undefined4 *)puVar16;
  uVar4 = *(undefined4 *)((long)puVar16 + 4);
  uVar5 = *(undefined4 *)(puVar16 + 1);
  uVar6 = *(undefined4 *)((long)puVar16 + 0xc);
  uVar7 = *(undefined4 *)(puVar16 + 2);
  uVar8 = *(undefined4 *)((long)puVar16 + 0x14);
  uVar9 = *(undefined4 *)(puVar16 + 3);
  uVar10 = *(undefined4 *)((long)puVar16 + 0x1c);
  uVar11 = *(undefined4 *)((long)puVar16 + 0x24);
  uVar12 = *(undefined4 *)(puVar16 + 5);
  uVar13 = *(undefined4 *)((long)puVar16 + 0x2c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar16 + 4);
  *(undefined4 *)((long)param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 9) = uVar12;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar13;
  param_1[10] = puVar16[6];
  *(undefined4 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((long)param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 7) = uVar9;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
  iVar15 = *(int *)(param_1 + 8);
  if (iVar15 < 2) {
    iVar14 = LZ4_sizeofState();
  }
  else {
    iVar14 = LZ4_sizeofStateHC();
  }
  sVar20 = (1 < iVar15) + 1;
  if (*(short *)(param_1 + 0x1a) == 2) {
    iVar15 = LZ4_sizeofStateHC();
    if (iVar15 < iVar14) goto code_r0x004a5b7d;
code_r0x004a5ba3:
    if (*(short *)((long)param_1 + 0xd2) != sVar20) {
      if (*(int *)(param_1 + 8) < 2) {
        LZ4_initStream(param_1[0x19],0x4020);
      }
      else {
        LZ4_initStreamHC(param_1[0x19],0x40038);
        LZ4_setCompressionLevel(param_1[0x19],*(undefined4 *)(param_1 + 8));
      }
code_r0x004a5c96:
      *(short *)((long)param_1 + 0xd2) = sVar20;
    }
    uVar17 = *(uint *)(param_1 + 4);
    if (uVar17 == 0) {
      *(uint *)(param_1 + 4) = 4;
      uVar17 = 4;
code_r0x004a5cc6:
      lVar18 = *(long *)(&UNK_001fe7d0 + (ulong)uVar17 * 8);
    }
    else {
      lVar18 = -2;
      if ((uVar17 & 0xfffffffc) == 4) goto code_r0x004a5cc6;
    }
    puVar16 = param_7;
    if (param_7 == (undefined8 *)0x0) {
      puVar16 = &uStack_78;
    }
    param_1[0xd] = lVar18;
    bVar22 = *(int *)((long)param_1 + 0x24) == 0;
    uVar21 = (ulong)bVar22 << 0x10;
    if (*(int *)((long)puVar16 + 0x24) == 0) {
      uVar21 = (ulong)bVar22 * 0x20000 + lVar18;
    }
    if ((ulong)param_1[0xe] < uVar21) {
      param_1[0xe] = 0;
      if (param_1[0xf] != 0) {
        if ((code *)param_1[2] == (code *)0x0) {
          func_0x0099c1f0(param_1[0xf]);
        }
        else {
          (*(code *)param_1[2])(param_1[3]);
        }
      }
      if ((code *)*param_1 == (code *)0x0) {
        lVar18 = func_0x0099c1e0(uVar21);
      }
      else {
        lVar18 = (*(code *)*param_1)(param_1[3],uVar21);
      }
      param_1[0xf] = lVar18;
      if (lVar18 == 0) goto code_r0x004a5e00;
      param_1[0xe] = uVar21;
    }
    else {
      lVar18 = param_1[0xf];
    }
    param_1[0x10] = lVar18;
    param_1[0x11] = 0;
    XXH32_reset(param_1 + 0x13,0);
    param_1[0xc] = param_6;
    if (*(int *)((long)param_1 + 0x24) == 0) {
      uVar2 = param_1[0x19];
      if (*(int *)(param_1 + 8) < 2) {
        LZ4_resetStream_fast();
        if (param_6 != 0) {
          LZ4_attach_dictionary(uVar2,*(undefined8 *)(param_6 + 0x28));
        }
      }
      else {
        LZ4_resetStreamHC_fast(uVar2);
        if (param_6 != 0) {
          LZ4_attach_HC_dictionary(uVar2,*(undefined8 *)(param_6 + 0x30));
        }
      }
    }
    puVar16 = param_7;
    if (param_7 == (undefined8 *)0x0) {
      puVar16 = &uStack_78;
    }
    if (1 < *(int *)(puVar16 + 4)) {
      puVar16 = &uStack_78;
      if (param_7 != (undefined8 *)0x0) {
        puVar16 = param_7;
      }
      LZ4_favorDecompressionSpeed(param_1[0x19],*(undefined4 *)(puVar16 + 5));
    }
    if (param_4 != 0) {
      lVar18 = -4;
      if (0x7fffffff < param_5) goto code_r0x004a5f08;
      if (*(short *)((long)param_1 + 0xd2) == 1) {
        LZ4_loadDict();
      }
      else {
        LZ4_loadDictHC(param_1[0x19]);
      }
    }
    *param_2 = 0x184d2204;
    *(byte *)(param_2 + 1) =
         *(int *)(param_1 + 7) != 0 |
         ((byte)((*(uint *)((long)param_1 + 0x3c) & 1) << 4) |
         (byte)((*(uint *)((long)param_1 + 0x24) & 1) << 5)) + (param_1[6] != 0) * '\b' +
         ((byte)*(undefined4 *)(param_1 + 5) & 1) * '\x04' | 0x40;
    *(byte *)((long)param_2 + 5) = (*(byte *)(param_1 + 4) & 7) << 4;
    if (param_1[6] == 0) {
      piVar19 = (int *)((long)param_2 + 6);
    }
    else {
      *(undefined8 *)((long)param_2 + 6) = param_1[6];
      piVar19 = (int *)((long)param_2 + 0xe);
      param_1[0x12] = 0;
    }
    if (*(int *)(param_1 + 7) != 0) {
      *piVar19 = *(int *)(param_1 + 7);
      piVar19 = piVar19 + 1;
    }
    XXH32(param_2 + 1,(long)piVar19 - (long)(param_2 + 1),0);
    *(undefined1 *)piVar19 = extraout_AH;
    *(undefined4 *)((long)param_1 + 0x5c) = 1;
    lVar18 = (long)piVar19 + (1 - (long)param_2);
  }
  else {
    iVar15 = 0;
    if (*(short *)(param_1 + 0x1a) == 1) {
      iVar15 = LZ4_sizeofState();
    }
    if (iVar14 <= iVar15) goto code_r0x004a5ba3;
code_r0x004a5b7d:
    if (param_1[0x19] != 0) {
      if ((code *)param_1[2] == (code *)0x0) {
        func_0x0099c1f0(param_1[0x19]);
      }
      else {
        (*(code *)param_1[2])(param_1[3]);
      }
    }
    pcVar1 = (code *)*param_1;
    if (*(int *)(param_1 + 8) < 2) {
      if (pcVar1 == (code *)0x0) {
        lVar18 = func_0x0099c1e0(0x4020);
      }
      else {
        lVar18 = (*pcVar1)(param_1[3],0x4020);
      }
      param_1[0x19] = lVar18;
      if ((lVar18 == 0) || (LZ4_initStream(lVar18,0x4020), param_1[0x19] == 0))
      goto code_r0x004a5e00;
code_r0x004a5c8e:
      *(short *)(param_1 + 0x1a) = sVar20;
      goto code_r0x004a5c96;
    }
    if (pcVar1 == (code *)0x0) {
      lVar18 = func_0x0099c1e0(0x40038);
    }
    else {
      lVar18 = (*pcVar1)(param_1[3],0x40038);
    }
    param_1[0x19] = lVar18;
    if ((lVar18 != 0) && (LZ4_initStreamHC(lVar18,0x40038), param_1[0x19] != 0))
    goto code_r0x004a5c8e;
code_r0x004a5e00:
    lVar18 = -9;
  }
code_r0x004a5f08:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    lVar18 = LZ4F_compressBegin_internal();
    return lVar18;
  }
  return lVar18;
}


