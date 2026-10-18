// Function: _ZN3adb7pairing9Aes128Gcm7DecryptEPKhmPhm
// Address: 004291b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN3adb7pairing9Aes128Gcm7DecryptEPKhmPhm
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 extraout_RDX;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_48 [8];
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_2;
  uVar4 = EVP_AEAD_CTX_aead();
  lVar5 = EVP_AEAD_nonce_length(uVar4);
  if (lVar5 < 0) {
    func_0x00330ca0();
  }
  else {
    puVar6 = (undefined8 *)_Znwm(lVar5);
    func_0x0099bdb0(puVar6,0,lVar5);
    *puVar6 = *(undefined8 *)(param_1 + 0x240);
    uStack_40 = 0;
    iVar3 = EVP_AEAD_CTX_open(param_1,param_4,&uStack_40,param_5,puVar6,lVar5,param_2,param_3,0,0);
    if (iVar3 == 0) {
      uVar10 = 0;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      uVar11 = 0;
      uVar9 = 0;
      if (cVar2 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar7;
        uVar10 = 0;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_48,&UNK_001615f4,0x49,4,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_48);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0016475b,0x1a);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_3);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0018984c,10);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_5);
        uVar4 = func_0x0032eb30(uVar4,&UNK_001725e1,0x11);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,param_3);
        func_0x0032eb30(uVar4,&UNK_001692c7,1);
        _ZN7android4base10LogMessageD2Ev(auStack_48);
        *puVar7 = uVar1;
        uVar11 = 0;
        uVar9 = 0;
      }
    }
    else {
      *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + 1;
      uVar10 = uStack_40 & 0xff;
      uVar11 = uStack_40 & 0xffffffffffffff00;
      uVar9 = CONCAT71((int7)((ulong)param_2 >> 8),1);
    }
    _ZdaPvSt11align_val_t(puVar6,lVar5);
    lVar8 = lVar5;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      auVar12._8_8_ = uVar9 & 0xffffffff;
      auVar12._0_8_ = uVar11 | uVar10;
      return auVar12;
    }
  }
  func_0x0099bd00();
  auVar13._8_8_ = extraout_RDX;
  auVar13._0_8_ = lVar8;
  return auVar13;
}


