// Function: _ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
// Address: 0042a4b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0042a4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0042a4e9) */
/* WARNING: Removing unreachable block (ram,0x0042a50d) */
/* WARNING: Removing unreachable block (ram,0x0042a515) */
/* WARNING: Removing unreachable block (ram,0x0042a57c) */
/* WARNING: Removing unreachable block (ram,0x0042a581) */
/* WARNING: Removing unreachable block (ram,0x0042a589) */
/* WARNING: Removing unreachable block (ram,0x0042a51e) */
/* WARNING: Removing unreachable block (ram,0x0042a58e) */
/* WARNING: Removing unreachable block (ram,0x0042a523) */
/* WARNING: Removing unreachable block (ram,0x0042a551) */
/* WARNING: Removing unreachable block (ram,0x0042a632) */
/* WARNING: Removing unreachable block (ram,0x0042a565) */
/* WARNING: Removing unreachable block (ram,0x0042a591) */
/* WARNING: Removing unreachable block (ram,0x0042a599) */
/* WARNING: Removing unreachable block (ram,0x0042a694) */
/* WARNING: Removing unreachable block (ram,0x0042a5ac) */
/* WARNING: Removing unreachable block (ram,0x006cf643) */
/* WARNING: Removing unreachable block (ram,0x006cf657) */
/* WARNING: Removing unreachable block (ram,0x006cf664) */

undefined8 *
_ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_88 = unaff_R12;
  if (param_1 == 0) {
    unaff_R13 = &uStack_40;
    puStack_60 = &UNK_0042a5ee;
    uStack_50 = param_2;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R13,&UNK_001758a3,0x1ad,6,0,0xffffffff);
    puStack_60 = &UNK_0042a5f6;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R13);
    puStack_60 = &UNK_0042a60a;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00163149,0x11);
    puStack_60 = &UNK_0042a61e;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_60 = &UNK_0042a626;
    _ZN7android4base10LogMessageD2Ev(unaff_R13);
    param_2 = uStack_50;
    uStack_88 = param_3;
  }
  puStack_60 = &UNK_0042a4e9;
  lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_90 = param_5;
  puStack_80 = unaff_R13;
  lStack_78 = param_1;
  uStack_70 = param_4;
  puStack_68 = &stack0xfffffffffffffff8;
  puVar7 = (undefined8 *)BIO_new_mem_buf(param_2,param_3);
  uStack_a0 = 0;
  uStack_a8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  iVar6 = PEM_read_bio(puVar7,&uStack_a0,&uStack_a8,&puStack_b0,&uStack_b8);
  if (iVar6 == 0) {
    puVar11 = (undefined8 *)0x4;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar5 != '\0') {
      puVar8 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar8;
      puVar11 = &uStack_c0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar11,&UNK_001758a3,0x7b,4,0,0xffffffff);
      uVar9 = _ZN7android4base10LogMessage6streamEv(puVar11);
      func_0x0032eb30(uVar9,&UNK_001708b1,0x1a);
      _ZN7android4base10LogMessageD2Ev();
      *puVar8 = uVar1;
    }
    uStack_40 = 0;
  }
  else {
    OPENSSL_free(uStack_a0);
    OPENSSL_free(uStack_a8);
    uStack_40 = CRYPTO_BUFFER_new(puStack_b0,uStack_b8,0);
    puVar11 = puStack_b0;
    OPENSSL_free();
  }
  if (puVar7 != (undefined8 *)0x0) {
    BIO_free();
    puVar11 = puVar7;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_98) {
    return &uStack_40;
  }
  func_0x0099bd00();
  *puVar11 = &UNK_0099f7a8;
  if (puVar11[6] != 0) {
    SSL_shutdown();
  }
  plVar2 = (long *)puVar11[0x16];
  if (plVar2 == puVar11 + 0x12) {
    lVar10 = 0x20;
code_r0x0042a839:
    (**(code **)(*plVar2 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (plVar2 != (long *)0x0) goto code_r0x0042a839;
  }
  plVar2 = (long *)puVar11[0x10];
  if (plVar2 == puVar11 + 0xc) {
    puVar7 = (undefined8 *)0x20;
  }
  else {
    puVar7 = (undefined8 *)0x28;
    if (plVar2 == (long *)0x0) goto code_r0x0042a866;
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar2 + (long)puVar7))();
code_r0x0042a866:
  lVar10 = puVar11[7];
  if (lVar10 != 0) {
    lVar13 = puVar11[8];
    lVar12 = lVar10;
    if (lVar10 != lVar13) {
      do {
        lVar12 = *(long *)(lVar13 + -8);
        *(undefined8 *)(lVar13 + -8) = 0;
        if (lVar12 != 0) {
          X509_free();
        }
        lVar13 = lVar13 + -8;
      } while (lVar13 != lVar10);
      lVar12 = puVar11[7];
    }
    puVar11[8] = lVar10;
    puVar7 = (undefined8 *)_ZdaPvSt11align_val_t(lVar12,puVar11[9] - lVar12);
  }
  lVar10 = puVar11[6];
  puVar11[6] = 0;
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)SSL_free();
  }
  lVar10 = puVar11[5];
  puVar11[5] = 0;
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)SSL_CTX_free();
  }
  lVar10 = puVar11[4];
  puVar11[4] = 0;
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)OPENSSL_sk_pop_free_ex(lVar10,&UNK_0042c2d0,0);
  }
  lVar10 = puVar11[3];
  puVar11[3] = 0;
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)CRYPTO_BUFFER_free();
  }
  piVar3 = (int *)puVar11[2];
  puVar11[2] = 0;
  if (piVar3 == (int *)0x0) {
    return puVar7;
  }
  if ((piVar3 == (int *)0x0) ||
     (puVar7 = (undefined8 *)_ZN4bssl33CRYPTO_refcount_dec_and_test_zeroEPNSt3__16atomicIjEE(),
     (int)puVar7 == 0)) {
    return puVar7;
  }
  if ((*(long *)(piVar3 + 4) != 0) &&
     (pcVar4 = *(code **)(*(long *)(piVar3 + 4) + 200), pcVar4 != (code *)0x0)) {
    (*pcVar4)(piVar3);
  }
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  if (*piVar3 == 0) {
    if (piVar3 != (int *)0x0) {
      puVar7 = (undefined8 *)(*(code *)&OPENSSL_memory_free)();
      return puVar7;
    }
    return (undefined8 *)0x0;
  }
  func_0x0099c600();
  _ZN4bssl19CRYPTO_refcount_incEPNSt3__16atomicIjEE();
  return (undefined8 *)0x1;
}


