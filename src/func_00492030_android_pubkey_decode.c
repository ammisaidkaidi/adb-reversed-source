// Function: android_pubkey_decode
// Address: 00492030
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 android_pubkey_decode(int *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = RSA_new();
  if ((param_2 < 0x20c || lVar3 == 0) || (*param_1 != 0x40)) {
    uVar6 = 0;
  }
  else {
    lVar4 = BN_le2bn(param_1 + 2,0x100,0);
    lVar1 = 0;
    if ((lVar4 == 0) || (lVar5 = BN_new(), lVar1 = lVar4, lVar5 == 0)) {
      lVar4 = lVar1;
      uVar6 = 0;
      lVar5 = 0;
      goto code_r0x004920cf;
    }
    iVar2 = BN_set_word(lVar5,param_1[0x82]);
    uVar6 = 0;
    if ((iVar2 == 0) || (iVar2 = RSA_set0_key(lVar3,lVar4,lVar5,0), iVar2 == 0))
    goto code_r0x004920cf;
    *param_3 = lVar3;
    uVar6 = 1;
    lVar3 = 0;
  }
  lVar4 = 0;
  lVar5 = 0;
code_r0x004920cf:
  RSA_free(lVar3);
  BN_free(lVar4);
  BN_free(lVar5);
  return uVar6;
}


