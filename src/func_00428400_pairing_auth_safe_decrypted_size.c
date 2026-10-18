// Function: pairing_auth_safe_decrypted_size
// Address: 00428400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong pairing_auth_safe_decrypted_size
                (long *******param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long ******pppppplVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *extraout_RDX;
  long *unaff_RBX;
  long *******ppppppplVar7;
  long unaff_R12;
  long lVar8;
  long *******unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  long *plStack_d8;
  long *******ppppppplStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *******ppppppplStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  code *apcStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *******)0x0) {
    unaff_RBX = &lStack_40;
    param_5 = (long *)0x0;
    apcStack_50[0] = (code *)&UNK_00428491;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_50[0] = (code *)&UNK_00428499;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apcStack_50[0] = (code *)&UNK_004284ad;
    uVar6 = func_0x0032eb30(uVar6,&UNK_001725c2,0x11);
    apcStack_50[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    apcStack_50[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = param_1;
    unaff_R12 = param_3;
  }
  if (param_2 == 0) {
    unaff_RBX = &lStack_40;
    param_5 = (long *)0x0;
    apcStack_50[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_50[0] = (code *)&UNK_0042850f;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apcStack_50[0] = (code *)&UNK_00428523;
    uVar6 = func_0x0032eb30(uVar6,&UNK_00167dd5,0x11);
    apcStack_50[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    apcStack_50[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = param_1;
  }
  if (param_3 == 0) {
    do {
      apcStack_50[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_40,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_50[0] = (code *)&UNK_0042859a;
      uVar6 = _ZN7android4base10LogMessage6streamEv(&lStack_40);
      apcStack_50[0] = (code *)&UNK_004285ae;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
      apcStack_50[0] = (code *)&UNK_004285c2;
      uVar6 = func_0x0032eb30(uVar6,&UNK_001596b0,3);
      apcStack_50[0] = (code *)&UNK_004285d2;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      apcStack_50[0] = (code *)&UNK_004285e6;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00163098,1);
      apcStack_50[0] = (code *)&UNK_004285f6;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      apcStack_50[0] = (code *)&UNK_0042860a;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015980b,2);
      apcStack_50[0] = (code *)&UNK_0042861a;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00181bbd,6);
      apcStack_50[0] = (code *)&UNK_00428624;
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,0);
      apcStack_50[0] = (code *)&UNK_00428634;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00189813,5);
      apcStack_50[0] = (code *)&UNK_0042863e;
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,0);
      apcStack_50[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar6,&UNK_0017b788,2);
      apcStack_50[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&lStack_40);
    } while( true );
  }
  apcStack_50[0] = (code *)&UNK_0042843d;
  uVar5 = _ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_b8 == lStack_38) {
    return uVar5;
  }
  apcStack_50[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = param_1;
  plStack_78 = unaff_RBX;
  lStack_70 = unaff_R12;
  apcStack_50[0] = (code *)&stack0xfffffffffffffff8;
  if (param_1 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_98;
    puStack_c8 = &UNK_004287ab;
    apcStack_50[0] = (code *)&stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_c8 = &UNK_004287b3;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_c8 = &UNK_004287c7;
    uVar6 = func_0x0032eb30(uVar6,&UNK_001725c2,0x11);
    puStack_c8 = &UNK_004287db;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    puStack_c8 = &UNK_004287e3;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_3 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_98;
    puStack_c8 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_c8 = &UNK_00428824;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_c8 = &UNK_00428838;
    uVar6 = func_0x0032eb30(uVar6,&UNK_0017a3cb,0x13);
    puStack_c8 = &UNK_0042884c;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    puStack_c8 = &UNK_00428854;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_b8 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_98;
    puStack_c8 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_c8 = &UNK_00428895;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_c8 = &UNK_004288a9;
    uVar6 = func_0x0032eb30(uVar6,&UNK_0015ca76,0x14);
    puStack_c8 = &UNK_004288bd;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    puStack_c8 = &UNK_004288c5;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_98;
    puStack_c8 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_c8 = &UNK_00428902;
    uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_c8 = &UNK_00428916;
    uVar6 = func_0x0032eb30(uVar6,&UNK_00184bd2,0x14);
    puStack_c8 = &UNK_0042892a;
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    puStack_c8 = &UNK_00428932;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (extraout_RDX == (long *)0x0) {
    do {
      puStack_c8 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_98,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_c8 = &UNK_0042898a;
      uVar6 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_98);
      puStack_c8 = &UNK_0042899e;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
      puStack_c8 = &UNK_004289b2;
      uVar6 = func_0x0032eb30(uVar6,&UNK_001837b0,5);
      puStack_c8 = &UNK_004289c2;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      puStack_c8 = &UNK_004289d6;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00163098,1);
      puStack_c8 = &UNK_004289e6;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      puStack_c8 = &UNK_004289fa;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015980b,2);
      puStack_c8 = &UNK_00428a0a;
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015fdd9,8);
      puStack_c8 = &UNK_00428a14;
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,0);
      puStack_c8 = &UNK_00428a24;
      uVar6 = func_0x0032eb30(uVar6,&UNK_00189813,5);
      puStack_c8 = &UNK_00428a2e;
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,0);
      puStack_c8 = &UNK_00428a3e;
      func_0x0032eb30(uVar6,&UNK_0017b788,2);
      puStack_c8 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_98);
    } while( true );
  }
  plStack_c0 = param_5;
  if ((long)extraout_RDX < 0) {
    puStack_c8 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_c8 = &UNK_004286ca;
  unaff_R14 = (long *******)_Znwm(extraout_RDX);
  puStack_c8 = &UNK_004286e9;
  ppppppplStack_98 = unaff_R14;
  lStack_88 = (long)extraout_RDX + (long)unaff_R14;
  func_0x0099bda0(unaff_R14,param_3);
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  puStack_c8 = &UNK_0042870c;
  lStack_90 = (long)extraout_RDX + (long)unaff_R14;
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_b0,param_1,&ppppppplStack_98);
  lVar4 = lStack_a8;
  lVar3 = lStack_b0;
  if (lStack_b0 == lStack_a8) {
    if (lStack_b0 != 0) goto code_r0x0042873c;
  }
  else {
    lVar8 = lStack_a8 - lStack_b0;
    puStack_c8 = &UNK_0042872e;
    func_0x0099bda0(lStack_b8,lStack_b0,lVar8);
    *plStack_c0 = lVar8;
code_r0x0042873c:
    puStack_c8 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar3,lStack_a0 - lVar3);
  }
  puStack_c8 = &UNK_0042875d;
  ppppppplVar7 = unaff_R14;
  _ZdaPvSt11align_val_t(unaff_R14,extraout_RDX);
  unaff_RBX = extraout_RDX;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return CONCAT71((int7)((ulong)lVar4 >> 8),lVar3 != lVar4) & 0xffffffff;
  }
code_r0x00428a50:
  puStack_c8 = &UNK_00428a55;
  func_0x0099bd00();
  uStack_e0 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack_d8 = unaff_RBX;
  ppppppplStack_d0 = unaff_R14;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_c8 = (undefined *)apcStack_50;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_e8,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_e8);
    uVar6 = func_0x0032eb30(uVar6,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_e8);
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_e0) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar1 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_c8 = (undefined *)apcStack_50;
    if (pppppplVar1 != (long ******)0x0) {
      puStack_c8 = (undefined *)apcStack_50;
      EVP_AEAD_CTX_cleanup(pppppplVar1);
      _ZdaPvSt11align_val_t(pppppplVar1,0x250);
    }
    pppppplVar1 = ppppppplVar7[4];
    ppppppplVar7[4] = (long ******)0x0;
    if (pppppplVar1 != (long ******)0x0) {
      SPAKE2_CTX_free();
    }
    pppppplVar1 = *ppppppplVar7;
    if (pppppplVar1 != (long ******)0x0) {
      ppppppplVar7[1] = pppppplVar1;
      _ZdaPvSt11align_val_t(pppppplVar1,(long)ppppppplVar7[2] - (long)pppppplVar1);
    }
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_e0) {
      uVar5 = free(ppppppplVar7,0x30);
      return uVar5;
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}


