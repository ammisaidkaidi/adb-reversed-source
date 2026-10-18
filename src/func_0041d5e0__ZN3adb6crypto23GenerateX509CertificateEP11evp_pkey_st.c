// Function: _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st
// Address: 0041d5e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0041d73d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0041d765: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0041d742) */
/* WARNING: Removing unreachable block (ram,0x0041d76a) */
/* WARNING: Removing unreachable block (ram,0x0041d8be) */
/* WARNING: Removing unreachable block (ram,0x0041d9c6) */
/* WARNING: Removing unreachable block (ram,0x0041d785) */

uint * _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *extraout_RDX;
  undefined8 uVar17;
  undefined **ppuVar18;
  uint *puVar19;
  undefined *puVar20;
  uint *puVar21;
  uint *unaff_R12;
  undefined1 *puVar22;
  undefined4 uVar23;
  ulong unaff_R13;
  long lVar24;
  uint *unaff_R14;
  uint *puVar25;
  long in_FS_OFFSET;
  undefined *puStack_50;
  undefined4 auStack_48 [2];
  uint auStack_40 [2];
  long lStack_38;
  
  ppuVar18 = (undefined **)auStack_48;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (uint *)0x0) {
    unaff_R14 = auStack_40;
    puStack_50 = &UNK_0041d92c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_001646dd,0x3c,6,0,0xffffffff);
    puStack_50 = &UNK_0041d934;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_50 = &UNK_0041d948;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00161543,0x12);
    puStack_50 = &UNK_0041d95c;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_50 = &UNK_0041d964;
    _ZN7android4base10LogMessageD2Ev(unaff_R14);
  }
  puStack_50 = &UNK_0041d612;
  puVar8 = (uint *)X509_new();
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)0x4;
    puVar19 = (uint *)0x0;
    puStack_50 = &UNK_0041d799;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    puVar10 = unaff_R12;
    if (cVar6 != '\0') {
      puStack_50 = &UNK_0041d96e;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar1 = *unaff_R14;
      puVar10 = (uint *)(ulong)uVar1;
      param_2 = auStack_40;
      puStack_50 = &UNK_0041d99a;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (param_2,&UNK_001646dd,0x3f,4,0,0xffffffff);
      puStack_50 = &UNK_0041d9a2;
      uVar9 = _ZN7android4base10LogMessage6streamEv(param_2);
      puVar19 = (uint *)&UNK_0017bc6b;
      puStack_50 = &UNK_0041d9b6;
      func_0x0032eb30(uVar9,&UNK_0017bc6b,0x21);
      puStack_50 = &UNK_0041d9be;
      puVar8 = param_2;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar1;
    }
    param_1[0] = 0;
    param_1[1] = 0;
code_r0x0041d8e1:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    puStack_50 = &UNK_0041da28;
    func_0x0099bd00();
    puVar16 = extraout_RDX;
  }
  else {
    puStack_50 = &UNK_0041d62b;
    X509_set_version(puVar8,2);
    puStack_50 = &UNK_0041d633;
    uVar9 = X509_get_serialNumber(puVar8);
    puStack_50 = &UNK_0041d640;
    ASN1_INTEGER_set(uVar9,1);
    puStack_50 = &UNK_0041d648;
    uVar9 = X509_get_notBefore(puVar8);
    puStack_50 = &UNK_0041d652;
    X509_gmtime_adj(uVar9,0);
    puStack_50 = &UNK_0041d65a;
    uVar9 = X509_get_notAfter(puVar8);
    puStack_50 = &UNK_0041d667;
    X509_gmtime_adj(uVar9,0x12cc0300);
    puStack_50 = &UNK_0041d672;
    iVar7 = X509_set_pubkey(puVar8);
    unaff_R14 = puVar8;
    if (iVar7 == 0) {
      puVar19 = (uint *)0x0;
      puStack_50 = &UNK_0041d7b9;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      if (cVar6 != '\0') {
        puStack_50 = &UNK_0041d7c6;
        param_2 = (uint *)func_0x0099bce0();
        unaff_R13 = (ulong)*param_2;
        puStack_50 = &UNK_0041d7f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001646dd,0x49,4,0,0xffffffff);
        puStack_50 = &UNK_0041d7fa;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puVar19 = (uint *)&UNK_0016ee4f;
        uVar17 = 0x1d;
code_r0x0041da0b:
        puStack_50 = &UNK_0041da13;
        func_0x0032eb30(uVar9,puVar19,uVar17);
        puStack_50 = &UNK_0041da1b;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *param_2 = (uint)unaff_R13;
        unaff_R12 = auStack_40;
      }
code_r0x0041d8d2:
      param_1[0] = 0;
      param_1[1] = 0;
      puStack_50 = &UNK_0041d8e1;
      X509_free();
      puVar10 = unaff_R12;
      goto code_r0x0041d8e1;
    }
    puStack_50 = &UNK_0041d682;
    puVar10 = (uint *)X509_get_subject_name(puVar8);
    if (puVar10 == (uint *)0x0) {
      puVar19 = (uint *)0x0;
      puStack_50 = &UNK_0041d817;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      if (cVar6 != '\0') {
        puStack_50 = &UNK_0041d824;
        param_2 = (uint *)func_0x0099bce0();
        unaff_R13 = (ulong)*param_2;
        puStack_50 = &UNK_0041d850;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001646dd,0x4f,4,0,0xffffffff);
        puStack_50 = &UNK_0041d858;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puVar19 = (uint *)&UNK_0017081d;
        uVar17 = 0x1f;
        goto code_r0x0041da0b;
      }
      goto code_r0x0041d8d2;
    }
    auStack_48[0] = 0;
    puStack_50 = &UNK_0041d6bd;
    X509_NAME_add_entry_by_txt
              (puVar10,&UNK_0017bc8d,0x1001,&UNK_001772e0,0xffffffffffffffff,0xffffffff);
    auStack_48[0] = 0;
    puStack_50 = &UNK_0041d6ec;
    X509_NAME_add_entry_by_txt
              (puVar10,&UNK_0017579e,0x1001,&UNK_0017083d,0xffffffffffffffff,0xffffffff);
    auStack_48[0] = 0;
    puStack_50 = &UNK_0041d71b;
    X509_NAME_add_entry_by_txt
              (puVar10,&UNK_0016b10c,0x1001,&UNK_0017bc8f,0xffffffffffffffff,0xffffffff);
    puStack_50 = &UNK_0041d726;
    iVar7 = X509_set_issuer_name(puVar8);
    if (iVar7 == 0) {
      puVar19 = (uint *)0x0;
      puStack_50 = &UNK_0041d870;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      unaff_R12 = puVar10;
      if (cVar6 != '\0') {
        puStack_50 = &UNK_0041d879;
        param_2 = (uint *)func_0x0099bce0();
        unaff_R13 = (ulong)*param_2;
        puStack_50 = &UNK_0041d8a5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001646dd,0x59,4,0,0xffffffff);
        puStack_50 = &UNK_0041d8ad;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puVar19 = (uint *)&UNK_0017bc93;
        uVar17 = 0x1e;
        goto code_r0x0041da0b;
      }
      goto code_r0x0041d8d2;
    }
    puVar16 = (uint *)&UNK_001fe960;
    puVar19 = (uint *)0x57;
    ppuVar18 = &puStack_50;
    puStack_50 = &UNK_0041d742;
  }
  *(undefined1 **)((long)ppuVar18 + -8) = &stack0xfffffffffffffff8;
  *(uint **)((long)ppuVar18 + -0x10) = param_2;
  *(uint **)((long)ppuVar18 + -0x18) = unaff_R14;
  *(ulong *)((long)ppuVar18 + -0x20) = unaff_R13;
  *(uint **)((long)ppuVar18 + -0x28) = puVar10;
  *(uint **)((long)ppuVar18 + -0x30) = param_1;
  *(int *)((long)ppuVar18 + -0x6c) = (int)puVar19;
  *(undefined8 *)((long)ppuVar18 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041da5f;
  puVar21 = puVar16;
  lVar11 = func_0x0099bcf0();
  puVar12 = (uint *)0x0;
  puVar25 = (uint *)0x0;
  puVar10 = (uint *)(lVar11 + 1);
  if (puVar10 == (uint *)0x0) {
code_r0x0041da92:
    *(undefined8 *)((long)ppuVar18 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar18 + -0x40) = 0;
    *(undefined8 *)((long)ppuVar18 + -0x58) = 0;
    *(undefined8 *)((long)ppuVar18 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar18 + -0x68) = 0;
    *(undefined8 *)((long)ppuVar18 + -0x60) = 0;
    puVar10 = (uint *)((long)ppuVar18 + -0x68);
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041daaf;
    X509V3_set_nconf(puVar10,0);
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041dac5;
    X509V3_set_ctx(puVar10,puVar8,puVar8,0,0,0);
    puVar21 = (uint *)0x0;
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041dad5;
    puVar19 = puVar10;
    puVar13 = (uint *)X509V3_EXT_nconf_nid
                                (0,puVar10,*(undefined4 *)((long)ppuVar18 + -0x6c),puVar12);
    if (puVar13 != (uint *)0x0) {
      *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041daed;
      puVar19 = puVar13;
      X509_add_ext(puVar8,puVar13,0xffffffff);
      *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041daf5;
      puVar21 = puVar13;
      X509_EXTENSION_free();
      puVar8 = puVar13;
    }
    if (puVar12 != (uint *)0x0) {
      puVar25 = (uint *)((long)puVar25 - (long)puVar12);
      *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041db08;
      puVar19 = puVar25;
      puVar21 = puVar12;
      _ZdaPvSt11align_val_t(puVar12,puVar25);
    }
    if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)((long)ppuVar18 + -0x38)) {
      return *(uint **)(in_FS_OFFSET + 0x28);
    }
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041db2b;
    func_0x0099bd00();
  }
  else if (-1 < (long)puVar10) {
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041da7d;
    puVar12 = (uint *)_Znwm(puVar10);
    puVar25 = (uint *)((long)puVar12 + (long)puVar10);
    *(undefined **)((long)ppuVar18 + -0x80) = &UNK_0041da92;
    func_0x0099bda0(puVar12,puVar16,puVar10);
    goto code_r0x0041da92;
  }
  *(code **)((long)ppuVar18 + -0x80) = _ZN3adb6crypto15X509ToPEMStringEP7x509_st;
  func_0x00330ca0();
  *(undefined1 **)((long)ppuVar18 + -0x80) = (undefined1 *)((long)ppuVar18 + -8);
  *(uint **)((long)ppuVar18 + -0x88) = puVar25;
  *(uint **)((long)ppuVar18 + -0x90) = puVar8;
  *(uint **)((long)ppuVar18 + -0x98) = puVar16;
  *(uint **)((long)ppuVar18 + -0xa0) = puVar10;
  *(uint **)((long)ppuVar18 + -0xa8) = puVar12;
  *(undefined8 *)((long)ppuVar18 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)ppuVar18 + -200) = &UNK_0041db59;
  uVar9 = BIO_s_mem();
  *(undefined **)((long)ppuVar18 + -200) = &UNK_0041db61;
  lVar11 = BIO_new(uVar9);
  *(undefined **)((long)ppuVar18 + -200) = &UNK_0041db6f;
  iVar7 = PEM_write_bio_X509(lVar11,puVar19);
  if (iVar7 == 1) {
    *(undefined8 *)((long)ppuVar18 + -0xb8) = 0;
    *(undefined **)((long)ppuVar18 + -200) = &UNK_0041db88;
    BIO_get_mem_ptr(lVar11,(undefined1 *)((long)ppuVar18 + -0xb8));
    puVar2 = *(ulong **)((long)ppuVar18 + -0xb8);
    if (((puVar2 == (ulong *)0x0) || (uVar3 = puVar2[1], uVar3 == 0)) ||
       (uVar4 = *puVar2, uVar4 == 0)) {
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dc33;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar6 != '\0') {
        *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dcc4;
        puVar15 = (undefined4 *)func_0x0099bce0();
        uVar23 = *puVar15;
        puVar22 = (undefined1 *)((long)ppuVar18 + -0xc0);
        *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dcf0;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar22,&UNK_001646dd,0x75,4,0,0xffffffff);
        *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dcf8;
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar22);
        puVar20 = &UNK_001597b6;
        uVar17 = 0x16;
        goto code_r0x0041dd04;
      }
      goto code_r0x0041dc3b;
    }
    if (0xfffffffffffffff6 < uVar4) goto code_r0x0041dd21;
    if (uVar4 < 0x17) {
      *(char *)puVar21 = (char)uVar4 * '\x02';
      lVar14 = (long)puVar21 + 1;
    }
    else {
      lVar24 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        lVar24 = (uVar4 | 7) + 1;
      }
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dc93;
      lVar14 = _Znwm(lVar24);
      *(long *)puVar21 = lVar24 + 1;
      *(ulong *)(puVar21 + 2) = uVar4;
      *(long *)(puVar21 + 4) = lVar14;
    }
    *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dcb2;
    func_0x0099bd90(lVar14,uVar3,uVar4);
    *(undefined1 *)(lVar14 + uVar4) = 0;
  }
  else {
    *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dbd9;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar6 != '\0') {
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dbe2;
      puVar15 = (undefined4 *)func_0x0099bce0();
      uVar23 = *puVar15;
      puVar22 = (undefined1 *)((long)ppuVar18 + -0xb8);
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dc0e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar22,&UNK_001646dd,0x6e,4,0,0xffffffff);
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dc16;
      uVar9 = _ZN7android4base10LogMessage6streamEv(puVar22);
      puVar20 = &UNK_00161556;
      uVar17 = 0x19;
code_r0x0041dd04:
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dd0c;
      func_0x0032eb30(uVar9,puVar20,uVar17);
      *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dd14;
      _ZN7android4base10LogMessageD2Ev(puVar22);
      *puVar15 = uVar23;
    }
code_r0x0041dc3b:
    *(undefined2 *)puVar21 = 0;
  }
  if (lVar11 != 0) {
    *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dc4d;
    BIO_free(lVar11);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar18 + -0xb0)) {
    return puVar21;
  }
  *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dd21;
  func_0x0099bd00();
code_r0x0041dd21:
  *(undefined **)((long)ppuVar18 + -200) = &UNK_0041dd26;
  func_0x0032e8f0();
  pcVar5 = (code *)swi(3);
  puVar8 = (uint *)(*pcVar5)();
  return puVar8;
}


