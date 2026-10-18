// Function: _ZN3adb7pairing9Aes128GcmC1EPKhm
// Address: 00428b80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined * _ZN3adb7pairing9Aes128GcmC1EPKhm(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_RDX;
  undefined *puVar12;
  undefined4 *unaff_R12;
  ulong uVar13;
  long in_FS_OFFSET;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined4 *puStack_b0;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = *(undefined **)(in_FS_OFFSET + 0x28);
  EVP_AEAD_CTX_zero();
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (param_2 == 0) {
    unaff_R12 = &uStack_78;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_001615f4,0x26,6,0,0xffffffff);
    uVar4 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    uVar4 = func_0x0032eb30(uVar4,&UNK_00188042,0x1a);
    func_0x0032eb30(uVar4,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(unaff_R12);
  }
  if (param_3 == (undefined1 *)0x0) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_78,&UNK_001615f4,0x27,6,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(&uStack_78);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001772e3,0x10);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0016e934,2);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015e229,3);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0017d922,0x13);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,0);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00170876,6);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,0);
      func_0x0032eb30(uVar4,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(&uStack_78);
    } while( true );
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0x3832312d73656120;
  uStack_60 = 0x79656b206d63672d;
  uStack_78 = 0x20626461;
  uStack_74 = 0x72696170;
  uStack_70 = 0x5f676e69;
  uStack_6c = 0x68747561;
  uStack_58 = 0;
  uVar4 = EVP_sha256();
  puStack_b0 = (undefined4 *)&UNK_00428c17;
  iVar3 = HKDF(&uStack_48,0x10,uVar4,param_2,param_3,0);
  if (iVar3 != 1) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_80,&UNK_001615f4,0x2d,6,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_80);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00167de7,0x68);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015aef8,2);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00175821,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001630c8,0x6b);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar4,iVar3);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0016eebc,4);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar4,1);
      func_0x0032eb30(uVar4,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(auStack_80);
    } while( true );
  }
  puVar5 = (undefined *)EVP_aead_aes_128_gcm();
  uVar4 = 0x10;
  uVar10 = 0;
  iVar3 = EVP_AEAD_CTX_init(param_1,puVar5,&uStack_48,0x10,0,0);
  if (iVar3 == 0) {
    param_3 = auStack_80;
    uVar4 = 6;
    uVar10 = 0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_3,&UNK_001615f4,0x2f,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(param_3);
    uVar6 = func_0x0032eb30(uVar6,&UNK_00175823,0x7f);
    puVar5 = &UNK_0015ae05;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    param_1 = param_3;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (*(undefined **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = puVar5;
  puStack_b8 = param_3;
  puStack_b0 = unaff_R12;
  uVar6 = EVP_AEAD_CTX_aead();
  puVar7 = (undefined *)EVP_AEAD_nonce_length(uVar6);
  if ((long)puVar7 < 0) {
    func_0x00330ca0();
  }
  else {
    puVar8 = (undefined8 *)_Znwm(puVar7);
    func_0x0099bdb0(puVar8,0,puVar7);
    *puVar8 = *(undefined8 *)(param_1 + 0x248);
    uStack_c8 = 0;
    iVar3 = EVP_AEAD_CTX_seal(param_1,uVar4,&uStack_c8,uVar10,puVar8,puVar7,puVar5,extraout_RDX,0,0)
    ;
    if (iVar3 == 0) {
      uStack_d8 = 0;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      uVar13 = 0;
      if (cVar2 != '\0') {
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar9;
        uStack_d8 = 0;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_d0,&UNK_001615f4,0x39,4,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_d0);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0018805d,0x1a);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,extraout_RDX);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0018984c,10);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,uVar10);
        uVar4 = func_0x0032eb30(uVar4,&UNK_001725e1,0x11);
        uVar10 = EVP_AEAD_CTX_aead(param_1);
        lVar11 = EVP_AEAD_max_overhead(uVar10);
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,extraout_RDX + lVar11);
        func_0x0032eb30(uVar4,&UNK_001692c7,1);
        _ZN7android4base10LogMessageD2Ev(auStack_d0);
        *puVar9 = uVar1;
        uVar13 = 0;
      }
    }
    else {
      *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + 1;
      uStack_d8 = uStack_c8 & 0xff;
      uVar13 = uStack_c8 & 0xffffffffffffff00;
    }
    _ZdaPvSt11align_val_t(puVar8,puVar7);
    puVar12 = puVar7;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
      return (undefined *)(uVar13 | uStack_d8);
    }
  }
  func_0x0099bd00();
  uVar4 = EVP_AEAD_CTX_aead();
  lVar11 = EVP_AEAD_max_overhead(uVar4);
  return puVar12 + lVar11;
}


