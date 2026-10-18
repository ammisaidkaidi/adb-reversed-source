// Function: _ZN3adb6crypto16CreateRSA2048KeyEv
// Address: 0041ceb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN3adb6crypto16CreateRSA2048KeyEv(long *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EVP_PKEY_new();
  lVar5 = BN_new();
  lVar6 = RSA_new();
  if ((lVar5 == 0 || lVar4 == 0) || lVar6 == 0) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00172551,0x39,4,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      func_0x0032eb30(uVar8,&UNK_001596cf,0x16);
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar7 = uVar1;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (lVar6 == 0) goto code_r0x0041cf62;
  }
  else {
    BN_set_word(lVar5,0x10001);
    RSA_generate_key_ex(lVar6,0x800,lVar5,0);
    EVP_PKEY_set1_RSA(lVar4,lVar6);
    *param_1 = lVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    lVar4 = 0;
  }
  RSA_free(lVar6);
code_r0x0041cf62:
  if (lVar5 != 0) {
    BN_free(lVar5);
  }
  if (lVar4 != 0) {
    EVP_PKEY_free(lVar4);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  plVar9 = (long *)(*pcVar2)();
  return plVar9;
}


