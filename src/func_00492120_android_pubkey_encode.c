// Function: android_pubkey_encode
// Address: 00492120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong android_pubkey_encode(undefined8 param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar3 = BN_CTX_new();
  lVar4 = BN_new();
  lVar5 = BN_new();
  lVar6 = BN_new();
  if (param_3 < 0x20c) {
    uVar9 = 0;
    goto code_r0x004922ca;
  }
  iVar1 = RSA_size(param_1);
  if (((iVar1 == 0x100) && (*param_2 = 0x40, lVar5 != 0 && (lVar4 != 0 && lVar3 != 0))) &&
     (iVar1 = BN_set_bit(lVar4,0x20), iVar1 != 0)) {
    uVar7 = RSA_get0_n(param_1);
    uVar9 = 0;
    iVar1 = BN_div(0,lVar5,uVar7,lVar4,lVar3);
    if (iVar1 == 0) goto code_r0x004922ca;
    lVar8 = BN_mod_inverse(lVar5,lVar5,lVar4,lVar3);
    if ((lVar8 != 0) && (iVar1 = BN_sub(lVar5,lVar4,lVar5), iVar1 != 0)) {
      uVar2 = BN_get_word(lVar5);
      param_2[1] = uVar2;
      uVar7 = RSA_get0_n(param_1);
      iVar1 = BN_bn2le_padded(param_2 + 2,0x100,uVar7);
      uVar9 = 0;
      if ((iVar1 == 0) || (lVar6 == 0)) goto code_r0x004922ca;
      iVar1 = BN_set_bit(lVar6,0x800);
      if (iVar1 != 0) {
        uVar7 = RSA_get0_n(param_1);
        iVar1 = BN_mod_sqr(lVar6,lVar6,uVar7,lVar3);
        if (iVar1 != 0) {
          iVar1 = BN_bn2le_padded(param_2 + 0x42,0x100,lVar6);
          if (iVar1 != 0) {
            uVar7 = RSA_get0_e(param_1);
            uVar2 = BN_get_word(uVar7);
            param_2[0x82] = uVar2;
            uVar9 = CONCAT71((int7)((ulong)param_2 >> 8),1);
            goto code_r0x004922ca;
          }
          goto code_r0x004922c3;
        }
      }
      uVar9 = 0;
      goto code_r0x004922ca;
    }
  }
code_r0x004922c3:
  uVar9 = 0;
code_r0x004922ca:
  BN_free(lVar6);
  BN_free(lVar5);
  BN_free(lVar4);
  BN_CTX_free(lVar3);
  return uVar9 & 0xffffffff;
}


