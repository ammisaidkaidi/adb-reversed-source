// Function: _ZN3adb6crypto18CalculatePublicKeyEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEP6rsa_st
// Address: 0041cc60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN3adb6crypto18CalculatePublicKeyEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEP6rsa_st
                 (byte *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong unaff_R12;
  long in_FS_OFFSET;
  undefined1 auStack_2a8 [8];
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  byte bStack_268;
  undefined7 uStack_267;
  byte *pbStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [536];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_248,0,0x20c);
  cVar4 = android_pubkey_encode(param_2,auStack_248,0x20c);
  if (cVar4 == '\0') {
    uVar14 = 0;
    param_1 = (byte *)0x4;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 != '\0') {
      puVar6 = (uint *)func_0x0099bce0();
      uVar1 = *puVar6;
      uVar14 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_268,&UNK_00172551,0x1f,4,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_268);
      puVar15 = &UNK_0015c9d4;
      uVar13 = 0x1f;
code_r0x0041cdb8:
      param_1 = &bStack_268;
      unaff_R12 = (ulong)uVar1;
      func_0x0032eb30(uVar7,puVar15,uVar13);
      _ZN7android4base10LogMessageD2Ev();
      *puVar6 = uVar1;
    }
  }
  else {
    uStack_250 = 0;
    iVar5 = EVP_EncodedLength(&uStack_250,0x20c);
    uVar14 = CONCAT71((int7)((ulong)param_2 >> 8),iVar5 != 0);
    if (iVar5 == 0) {
      param_1 = (byte *)0x4;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar4 != '\0') {
        puVar6 = (uint *)func_0x0099bce0();
        uVar1 = *puVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&bStack_268,&UNK_00172551,0x25,4,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_268);
        puVar15 = &UNK_00157a59;
        uVar13 = 0x25;
        goto code_r0x0041cdb8;
      }
    }
    else {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (param_1,uStack_250,0);
      if ((*param_1 & 1) == 0) {
        pbVar12 = param_1 + 1;
      }
      else {
        pbVar12 = *(byte **)(param_1 + 0x10);
      }
      uVar7 = EVP_EncodeBlock(pbVar12,auStack_248,0x20c);
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,uVar7,0);
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_0015ae05);
      _ZN3adb7sysdeps16GetLoginNameUTF8Ev(&bStack_268);
      func_0x0032e820(param_1,&bStack_268);
      if ((bStack_268 & 1) != 0) {
        _ZdaPvSt11align_val_t(pbStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_0017081b);
      _ZN3adb7sysdeps15GetHostNameUTF8Ev(&bStack_268);
      func_0x0032e820(param_1,&bStack_268);
      if ((bStack_268 & 1) != 0) {
        _ZdaPvSt11align_val_t(pbStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
        param_1 = pbStack_258;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (byte *)(uVar14 & 0xffffffff);
  }
  func_0x0099bd00();
  lStack_2a0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_298 = uVar14;
  uStack_290 = unaff_R12;
  lVar8 = EVP_PKEY_new();
  lVar9 = BN_new();
  lVar10 = RSA_new();
  if ((lVar9 == 0 || lVar8 == 0) || lVar10 == 0) {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 != '\0') {
      puVar11 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar11;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_2a8,&UNK_00172551,0x39,4,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_2a8);
      func_0x0032eb30(uVar7,&UNK_001596cf,0x16);
      _ZN7android4base10LogMessageD2Ev(auStack_2a8);
      *puVar11 = uVar2;
    }
    *param_1 = 0;
    param_1[0x10] = 0;
    if (lVar10 == 0) goto code_r0x0041cf62;
  }
  else {
    BN_set_word(lVar9,0x10001);
    RSA_generate_key_ex(lVar10,0x800,lVar9,0);
    EVP_PKEY_set1_RSA(lVar8,lVar10);
    *(long *)param_1 = lVar8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 1;
    lVar8 = 0;
  }
  RSA_free(lVar10);
code_r0x0041cf62:
  if (lVar9 != 0) {
    BN_free(lVar9);
  }
  if (lVar8 != 0) {
    EVP_PKEY_free(lVar8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2a0) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  pbVar12 = (byte *)(*pcVar3)();
  return pbVar12;
}


