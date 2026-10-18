// Function: _ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
// Address: 0042a0e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0042a213: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0042a4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0042a218) */
/* WARNING: Removing unreachable block (ram,0x0042a3e0) */
/* WARNING: Removing unreachable block (ram,0x0042a22a) */
/* WARNING: Removing unreachable block (ram,0x0042a256) */
/* WARNING: Removing unreachable block (ram,0x0042a25e) */
/* WARNING: Removing unreachable block (ram,0x0042a443) */
/* WARNING: Removing unreachable block (ram,0x0042a26a) */
/* WARNING: Removing unreachable block (ram,0x0042a4a6) */
/* WARNING: Removing unreachable block (ram,0x0042a5be) */
/* WARNING: Removing unreachable block (ram,0x0042a4e0) */
/* WARNING: Removing unreachable block (ram,0x0042a284) */
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
_ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
          (undefined8 param_1,uint param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,uint param_7)

{
  undefined4 uVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_3;
  if (param_4 == 0) {
    puStack_70 = &UNK_0042a2b9;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_40,&UNK_001758a3,0x1a6,6,0,0xffffffff);
    puStack_70 = &UNK_0042a2c1;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
    puStack_70 = &UNK_0042a2d5;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018688f,0x1b);
    puStack_70 = &UNK_0042a2e9;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_70 = &UNK_0042a2f1;
    _ZN7android4base10LogMessageD2Ev(&uStack_40);
  }
  puVar9 = (undefined8 *)(ulong)param_7;
  if (param_6 == 0) {
    puStack_70 = &UNK_0042a31c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_40,&UNK_001758a3,0x1a7,6,0,0xffffffff);
    puStack_70 = &UNK_0042a324;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
    puStack_70 = &UNK_0042a338;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b06c,0x1f);
    puStack_70 = &UNK_0042a34c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_70 = &UNK_0042a354;
    _ZN7android4base10LogMessageD2Ev(&uStack_40);
  }
  puStack_70 = &UNK_0042a132;
  puVar7 = (undefined8 *)_Znwm(0xd0);
  *puVar7 = &UNK_0099f7a8;
  *(uint *)(puVar7 + 1) = param_2;
  puVar7[0x10] = 0;
  puVar7[0x16] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(uint *)(puVar7 + 0x18) = param_7;
  if (param_4 == 0 || param_6 == 0) {
    puVar9 = &uStack_40;
    puStack_70 = &UNK_0042a1bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar9,&UNK_001758a3,0x5a,6,0,0xffffffff);
    puStack_70 = &UNK_0042a1c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(puVar9);
    puStack_70 = &UNK_0042a1d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00172601,0x30);
    puStack_70 = &UNK_0042a1ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_70 = &UNK_0042a1f4;
    _ZN7android4base10LogMessageD2Ev(puVar9);
  }
  puStack_70 = &UNK_0042a200;
  cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
  if (cVar5 != '\0') {
    puStack_70 = &UNK_0042a35e;
    puStack_50 = (undefined4 *)func_0x0099bce0();
    uStack_44 = *puStack_50;
    puVar9 = &uStack_40;
    puStack_70 = &UNK_0042a38d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar9,&UNK_001758a3,0x5b,2,0,0xffffffff);
    puStack_70 = &UNK_0042a395;
    uVar8 = _ZN7android4base10LogMessage6streamEv(puVar9);
    puVar12 = &UNK_001fea6b;
    if (param_2 == 0) {
      puVar12 = &UNK_001fea60;
    }
    puStack_70 = &UNK_0042a3b6;
    uVar8 = func_0x0032eb30(uVar8,puVar12,10);
    puStack_70 = &UNK_0042a3ca;
    func_0x0032eb30(uVar8,&UNK_00184be7,0x22);
    puStack_70 = &UNK_0042a3d2;
    _ZN7android4base10LogMessageD2Ev(puVar9);
    *puStack_50 = uStack_44;
  }
  puStack_70 = &UNK_0042a218;
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = (ulong)param_2;
  puStack_98 = puVar7;
  lStack_90 = param_4;
  lStack_88 = param_6;
  puStack_80 = puVar9;
  puStack_78 = &stack0xfffffffffffffff8;
  puVar9 = (undefined8 *)BIO_new_mem_buf(uStack_58,param_4);
  uStack_b0 = 0;
  uStack_b8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  iVar6 = PEM_read_bio(puVar9,&uStack_b0,&uStack_b8,&puStack_c0,&uStack_c8);
  if (iVar6 == 0) {
    puVar7 = (undefined8 *)0x4;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar5 != '\0') {
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar10;
      puVar7 = &uStack_d0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar7,&UNK_001758a3,0x7b,4,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(puVar7);
      func_0x0032eb30(uVar8,&UNK_001708b1,0x1a);
      _ZN7android4base10LogMessageD2Ev();
      *puVar10 = uVar1;
    }
    uStack_40 = 0;
  }
  else {
    OPENSSL_free(uStack_b0);
    OPENSSL_free(uStack_b8);
    uStack_40 = CRYPTO_BUFFER_new(puStack_c0,uStack_c8,0);
    puVar7 = puStack_c0;
    OPENSSL_free();
  }
  if (puVar9 != (undefined8 *)0x0) {
    BIO_free();
    puVar7 = puVar9;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
    return &uStack_40;
  }
  func_0x0099bd00();
  *puVar7 = &UNK_0099f7a8;
  if (puVar7[6] != 0) {
    SSL_shutdown();
  }
  plVar2 = (long *)puVar7[0x16];
  if (plVar2 == puVar7 + 0x12) {
    lVar11 = 0x20;
code_r0x0042a839:
    (**(code **)(*plVar2 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (plVar2 != (long *)0x0) goto code_r0x0042a839;
  }
  plVar2 = (long *)puVar7[0x10];
  if (plVar2 == puVar7 + 0xc) {
    puVar9 = (undefined8 *)0x20;
  }
  else {
    puVar9 = (undefined8 *)0x28;
    if (plVar2 == (long *)0x0) goto code_r0x0042a866;
  }
  puVar9 = (undefined8 *)(**(code **)(*plVar2 + (long)puVar9))();
code_r0x0042a866:
  lVar11 = puVar7[7];
  if (lVar11 != 0) {
    lVar14 = puVar7[8];
    lVar13 = lVar11;
    if (lVar11 != lVar14) {
      do {
        lVar13 = *(long *)(lVar14 + -8);
        *(undefined8 *)(lVar14 + -8) = 0;
        if (lVar13 != 0) {
          X509_free();
        }
        lVar14 = lVar14 + -8;
      } while (lVar14 != lVar11);
      lVar13 = puVar7[7];
    }
    puVar7[8] = lVar11;
    puVar9 = (undefined8 *)_ZdaPvSt11align_val_t(lVar13,puVar7[9] - lVar13);
  }
  lVar11 = puVar7[6];
  puVar7[6] = 0;
  if (lVar11 != 0) {
    puVar9 = (undefined8 *)SSL_free();
  }
  lVar11 = puVar7[5];
  puVar7[5] = 0;
  if (lVar11 != 0) {
    puVar9 = (undefined8 *)SSL_CTX_free();
  }
  lVar11 = puVar7[4];
  puVar7[4] = 0;
  if (lVar11 != 0) {
    puVar9 = (undefined8 *)OPENSSL_sk_pop_free_ex(lVar11,&UNK_0042c2d0,0);
  }
  lVar11 = puVar7[3];
  puVar7[3] = 0;
  if (lVar11 != 0) {
    puVar9 = (undefined8 *)CRYPTO_BUFFER_free();
  }
  piVar3 = (int *)puVar7[2];
  puVar7[2] = 0;
  if (piVar3 == (int *)0x0) {
    return puVar9;
  }
  if ((piVar3 == (int *)0x0) ||
     (puVar9 = (undefined8 *)_ZN4bssl33CRYPTO_refcount_dec_and_test_zeroEPNSt3__16atomicIjEE(),
     (int)puVar9 == 0)) {
    return puVar9;
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
      puVar9 = (undefined8 *)(*(code *)&OPENSSL_memory_free)();
      return puVar9;
    }
    return (undefined8 *)0x0;
  }
  func_0x0099c600();
  _ZN4bssl19CRYPTO_refcount_incEPNSt3__16atomicIjEE();
  return (undefined8 *)0x1;
}


