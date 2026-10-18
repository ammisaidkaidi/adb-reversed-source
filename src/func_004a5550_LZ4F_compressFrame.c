// Function: LZ4F_compressFrame
// Address: 004a5550
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
LZ4F_compressFrame(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined4 uStack_4140;
  undefined4 uStack_413c;
  undefined4 uStack_4138;
  undefined4 uStack_4134;
  undefined4 uStack_4130;
  undefined4 uStack_412c;
  undefined4 uStack_4128;
  undefined4 uStack_4124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(&uStack_4138,0,0x4020);
  uStack_c8 = 0;
  uStack_a0 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  pcStack_108 = (code *)0x0;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  uStack_c0 = 100;
  puStack_a8 = &UNK_00500000;
  if ((param_5 == 0) || (*(int *)(param_5 + 0x20) < 2)) {
    LZ4_initStream(&uStack_4138,0x4020);
    uStack_48 = CONCAT44(uStack_48._4_4_,0x10001);
    puVar9 = &uStack_118;
    puStack_50 = (undefined8 *)&uStack_4138;
    puVar2 = (undefined4 *)
             LZ4F_compressFrame_usingCDict(puVar9,param_1,param_2,param_3,param_4,0,param_5);
    if (param_5 == 0) goto code_r0x004a56b3;
    iVar1 = *(int *)(param_5 + 0x20);
    puVar7 = puStack_100;
    puVar8 = puStack_50;
  }
  else {
    puVar9 = &uStack_118;
    puVar2 = (undefined4 *)
             LZ4F_compressFrame_usingCDict(puVar9,param_1,param_2,param_3,param_4,0,param_5);
    iVar1 = *(int *)(param_5 + 0x20);
    puVar7 = puStack_100;
    puVar8 = puStack_50;
  }
  puStack_100 = puVar7;
  puStack_50 = puVar8;
  if ((1 < iVar1) && (param_1 = puVar8, puVar8 != (undefined8 *)0x0)) {
    if (pcStack_108 == (code *)0x0) {
      puVar9 = puVar8;
      func_0x0099c1f0(puVar8);
      param_1 = puVar8;
    }
    else {
      (*pcStack_108)(puVar7);
      param_1 = puVar8;
      puVar9 = puVar7;
    }
  }
code_r0x004a56b3:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar2;
  }
  func_0x0099bd00();
  uVar6 = CONCAT44(uStack_4124,uStack_4128);
  if (param_4 == (code *)0x0) {
    puVar2 = (undefined4 *)func_0x0099c1e0(0x38);
  }
  else {
    puVar2 = (undefined4 *)(*param_4)(uVar6,0x38);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined8 *)0x10000;
    if (param_1 < (undefined8 *)0x10000) {
      puVar7 = param_1;
    }
    puVar8 = (undefined8 *)((long)(puVar9 + -0x2000) + (long)param_1);
    if (param_1 < (undefined8 *)0x10001) {
      puVar8 = puVar9;
    }
    uStack_4140 = SUB84(param_4,0);
    uStack_413c = (undefined4)((ulong)param_4 >> 0x20);
    puVar2[4] = uStack_4130;
    puVar2[5] = uStack_412c;
    puVar2[6] = uStack_4128;
    puVar2[7] = uStack_4124;
    *puVar2 = uStack_4140;
    puVar2[1] = uStack_413c;
    puVar2[2] = uStack_4138;
    puVar2[3] = uStack_4134;
    if (param_4 == (code *)0x0) {
      lVar5 = func_0x0099c1e0(puVar7);
      *(long *)(puVar2 + 8) = lVar5;
      uVar6 = func_0x0099c1e0(0x4020);
      *(undefined8 *)(puVar2 + 10) = uVar6;
      lVar4 = func_0x0099c1e0(0x40038);
    }
    else {
      uVar3 = (*param_4)(uVar6,puVar7);
      *(undefined8 *)(puVar2 + 8) = uVar3;
      uVar3 = (*param_4)(uVar6,0x4020);
      *(undefined8 *)(puVar2 + 10) = uVar3;
      lVar4 = (*param_4)(uVar6,0x40038);
      lVar5 = *(long *)(puVar2 + 8);
    }
    *(long *)(puVar2 + 0xc) = lVar4;
    if (((lVar5 != 0) && (*(long *)(puVar2 + 10) != 0)) && (lVar4 != 0)) {
      func_0x0099bda0(lVar5,puVar8,puVar7);
      LZ4_initStream(*(undefined8 *)(puVar2 + 10),0x4020);
      LZ4_loadDictSlow(*(undefined8 *)(puVar2 + 10),*(undefined8 *)(puVar2 + 8),
                       (ulong)puVar7 & 0xffffffff);
      LZ4_initStreamHC(*(undefined8 *)(puVar2 + 0xc),0x40038);
      LZ4_setCompressionLevel(*(undefined8 *)(puVar2 + 0xc),9);
      LZ4_loadDictHC(*(undefined8 *)(puVar2 + 0xc),*(undefined8 *)(puVar2 + 8),
                     (ulong)puVar7 & 0xffffffff);
      return puVar2;
    }
    LZ4F_freeCDict(puVar2);
  }
  return (undefined4 *)0x0;
}


