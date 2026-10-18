// Function: _ZN3adb7pairing9Aes128Gcm7EncryptEPKhmPhm
// Address: 00428f70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN3adb7pairing9Aes128Gcm7EncryptEPKhmPhm
          (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_2;
  uVar4 = EVP_AEAD_CTX_aead();
  lVar5 = EVP_AEAD_nonce_length(uVar4);
  if (lVar5 < 0) {
    func_0x00330ca0();
  }
  else {
    puVar6 = (undefined8 *)_Znwm(lVar5);
    func_0x0099bdb0(puVar6,0,lVar5);
    *puVar6 = *(undefined8 *)(param_1 + 0x248);
    uStack_40 = 0;
    iVar3 = EVP_AEAD_CTX_seal(param_1,param_4,&uStack_40,param_5,puVar6,lVar5,param_2,param_3,0,0);
    if (iVar3 == 0) {
      uStack_50 = 0;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      uVar11 = 0;
      uVar10 = 0;
      if (cVar2 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        uStack_50 = 0;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_48,&UNK_001615f4,0x39,4,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_48);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0018805d,0x1a);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_3);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0018984c,10);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_5);
        uVar4 = func_0x0032eb30(uVar4,&UNK_001725e1,0x11);
        uVar8 = EVP_AEAD_CTX_aead(param_1);
        lVar9 = EVP_AEAD_max_overhead(uVar8);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_3 + lVar9);
        func_0x0032eb30(uVar4,&UNK_001692c7,1);
        _ZN7android4base10LogMessageD2Ev(auStack_48);
        *puVar7 = uVar1;
        uVar11 = 0;
        uVar10 = 0;
      }
    }
    else {
      *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + 1;
      uStack_50 = uStack_40 & 0xff;
      uVar11 = uStack_40 & 0xffffffffffffff00;
      uVar10 = CONCAT71((int7)((ulong)param_2 >> 8),1);
    }
    _ZdaPvSt11align_val_t(puVar6,lVar5);
    lVar9 = lVar5;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      auVar12._8_8_ = uVar10 & 0xffffffff;
      auVar12._0_8_ = uVar11 | uStack_50;
      return auVar12;
    }
  }
  func_0x0099bd00();
  uVar4 = EVP_AEAD_CTX_aead();
  auVar13 = EVP_AEAD_max_overhead(uVar4);
  auVar13._0_8_ = auVar13._0_8_ + lVar9;
  return auVar13;
}


