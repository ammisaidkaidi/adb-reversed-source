// Function: LZ4F_createCDict_advanced
// Address: 004a56e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * LZ4F_createCDict_advanced(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  
  if (_uStack0000000000000008 == (code *)0x0) {
    puVar1 = (undefined4 *)func_0x0099c1e0(0x38);
  }
  else {
    puVar1 = (undefined4 *)(*_uStack0000000000000008)(_uStack0000000000000020,0x38);
  }
  if (puVar1 != (undefined4 *)0x0) {
    uVar5 = 0x10000;
    if (param_2 < 0x10000) {
      uVar5 = param_2;
    }
    lVar6 = param_1 + -0x10000 + param_2;
    if (param_2 < 0x10001) {
      lVar6 = param_1;
    }
    puVar1[4] = uStack0000000000000018;
    puVar1[5] = uStack000000000000001c;
    puVar1[6] = uStack0000000000000020;
    puVar1[7] = uStack0000000000000024;
    *puVar1 = uStack0000000000000008;
    puVar1[1] = uStack000000000000000c;
    puVar1[2] = uStack0000000000000010;
    puVar1[3] = uStack0000000000000014;
    if (_uStack0000000000000008 == (code *)0x0) {
      lVar4 = func_0x0099c1e0(uVar5);
      *(long *)(puVar1 + 8) = lVar4;
      uVar2 = func_0x0099c1e0(0x4020);
      *(undefined8 *)(puVar1 + 10) = uVar2;
      lVar3 = func_0x0099c1e0(0x40038);
    }
    else {
      uVar2 = (*_uStack0000000000000008)(_uStack0000000000000020,uVar5);
      *(undefined8 *)(puVar1 + 8) = uVar2;
      uVar2 = (*_uStack0000000000000008)(_uStack0000000000000020,0x4020);
      *(undefined8 *)(puVar1 + 10) = uVar2;
      lVar3 = (*_uStack0000000000000008)(_uStack0000000000000020,0x40038);
      lVar4 = *(long *)(puVar1 + 8);
    }
    *(long *)(puVar1 + 0xc) = lVar3;
    if (((lVar4 != 0) && (*(long *)(puVar1 + 10) != 0)) && (lVar3 != 0)) {
      func_0x0099bda0(lVar4,lVar6,uVar5);
      LZ4_initStream(*(undefined8 *)(puVar1 + 10),0x4020);
      LZ4_loadDictSlow(*(undefined8 *)(puVar1 + 10),*(undefined8 *)(puVar1 + 8),uVar5 & 0xffffffff);
      LZ4_initStreamHC(*(undefined8 *)(puVar1 + 0xc),0x40038);
      LZ4_setCompressionLevel(*(undefined8 *)(puVar1 + 0xc),9);
      LZ4_loadDictHC(*(undefined8 *)(puVar1 + 0xc),*(undefined8 *)(puVar1 + 8),uVar5 & 0xffffffff);
      return puVar1;
    }
    LZ4F_freeCDict(puVar1);
  }
  return (undefined4 *)0x0;
}


