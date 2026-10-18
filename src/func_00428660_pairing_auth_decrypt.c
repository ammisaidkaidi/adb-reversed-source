// Function: pairing_auth_decrypt
// Address: 00428660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong pairing_auth_decrypt
                (long *******param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  long ******pppppplVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_RBX;
  long *******ppppppplVar7;
  long lVar8;
  long *******unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long *plStack_90;
  long *******ppppppplStack_88;
  undefined *puStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *******ppppppplStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = param_1;
  lStack_70 = param_4;
  if (param_1 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_004287ab;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_80 = &UNK_004287b3;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_004287c7;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    puStack_80 = &UNK_004287db;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_004287e3;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_2 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_80 = &UNK_00428824;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_00428838;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a3cb,0x13);
    puStack_80 = &UNK_0042884c;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_00428854;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_70 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_80 = &UNK_00428895;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_004288a9;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ca76,0x14);
    puStack_80 = &UNK_004288bd;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_004288c5;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_80 = &UNK_00428902;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_00428916;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00184bd2,0x14);
    puStack_80 = &UNK_0042892a;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_00428932;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_3 == (long *)0x0) {
    do {
      puStack_80 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_50,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_80 = &UNK_0042898a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_50);
      puStack_80 = &UNK_0042899e;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      puStack_80 = &UNK_004289b2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001837b0,5);
      puStack_80 = &UNK_004289c2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_80 = &UNK_004289d6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      puStack_80 = &UNK_004289e6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_80 = &UNK_004289fa;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      puStack_80 = &UNK_00428a0a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fdd9,8);
      puStack_80 = &UNK_00428a14;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      puStack_80 = &UNK_00428a24;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      puStack_80 = &UNK_00428a2e;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      puStack_80 = &UNK_00428a3e;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      puStack_80 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_50);
    } while( true );
  }
  plStack_78 = param_5;
  if ((long)param_3 < 0) {
    puStack_80 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_80 = &UNK_004286ca;
  unaff_R14 = (long *******)_Znwm(param_3);
  puStack_80 = &UNK_004286e9;
  ppppppplStack_50 = unaff_R14;
  lStack_40 = (long)param_3 + (long)unaff_R14;
  func_0x0099bda0(unaff_R14,param_2);
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  puStack_80 = &UNK_0042870c;
  lStack_48 = (long)param_3 + (long)unaff_R14;
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_68,param_1,&ppppppplStack_50);
  lVar4 = lStack_60;
  lVar3 = lStack_68;
  if (lStack_68 == lStack_60) {
    if (lStack_68 != 0) goto code_r0x0042873c;
  }
  else {
    lVar8 = lStack_60 - lStack_68;
    puStack_80 = &UNK_0042872e;
    func_0x0099bda0(lStack_70,lStack_68,lVar8);
    *plStack_78 = lVar8;
code_r0x0042873c:
    puStack_80 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar3,lStack_58 - lVar3);
  }
  puStack_80 = &UNK_0042875d;
  ppppppplVar7 = unaff_R14;
  _ZdaPvSt11align_val_t(unaff_R14,param_3);
  unaff_RBX = param_3;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return CONCAT71((int7)((ulong)lVar4 >> 8),lVar3 != lVar4) & 0xffffffff;
  }
code_r0x00428a50:
  puStack_80 = &UNK_00428a55;
  func_0x0099bd00();
  uStack_98 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack_90 = unaff_RBX;
  ppppppplStack_88 = unaff_R14;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_80 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_a0,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_a0);
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_a0);
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_98) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar1 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_80 = &stack0xfffffffffffffff8;
    if (pppppplVar1 != (long ******)0x0) {
      puStack_80 = &stack0xfffffffffffffff8;
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
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_98) {
      uVar6 = free(ppppppplVar7,0x30);
      return uVar6;
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}


