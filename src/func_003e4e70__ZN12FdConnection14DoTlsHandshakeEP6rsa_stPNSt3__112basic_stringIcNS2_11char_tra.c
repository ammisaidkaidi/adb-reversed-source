// Function: _ZN12FdConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 003e4e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN12FdConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined *apuStack_98 [4];
  undefined **ppuStack_78;
  long lStack_68;
  code *pcStack_60;
  long *plStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar5 + 0x10) == '\x01') {
    lVar5 = _Z19fdevent_get_ambientv();
    lVar6 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar5 + 8) == lVar6) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_b8,&UNK_0017a1e0,0x209,6,0,0xffffffff);
        uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_b8);
        uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
        uVar8 = func_0x0032eb30(uVar8,&UNK_00162e7f,0x29);
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        uVar8 = func_0x0032eb30(uVar8,&UNK_0016e934,2);
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        uVar8 = func_0x0032eb30(uVar8,&UNK_00183451,0x1c);
        uVar8 = func_0x0032eb30(uVar8,&UNK_0017ed76,0x2c);
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,lVar6);
        uVar8 = func_0x0032eb30(uVar8,&UNK_00165f20,0x1f);
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,lVar6);
        func_0x0032eb30(uVar8,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&uStack_b8);
      } while( true );
    }
  }
  puVar7 = (undefined8 *)EVP_PKEY_new();
  iVar4 = EVP_PKEY_set1_RSA(puVar7,param_2);
  if (iVar4 == 0) {
    uVar11 = 0;
    puVar13 = (undefined8 *)0x4;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar10;
      uVar11 = 0;
      puVar13 = &uStack_b8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar13,&UNK_0017a1e0,0x20d,4,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(puVar13);
      func_0x0032eb30(uVar8,&UNK_0017d675,0x18);
      _ZN7android4base10LogMessageD2Ev();
      *puVar10 = uVar1;
    }
    goto code_r0x003e5199;
  }
  puStack_a0 = (undefined8 *)0x0;
  _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(&puStack_a0,puVar7);
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_b8,puStack_a0);
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_d8,puVar7);
  uVar11 = uStack_b8 >> 1 & 0x7f;
  lVar5 = (long)&uStack_b8 + 1;
  if ((uStack_b8 & 1) != 0) {
    uVar11 = uStack_b0;
    lVar5 = lStack_a8;
  }
  bVar15 = (uStack_d8 & 1) != 0;
  lVar6 = (long)&uStack_d8 + 1;
  if (bVar15) {
    lVar6 = lStack_c8;
  }
  uVar14 = uStack_d8 >> 1 & 0x7f;
  if (bVar15) {
    uVar14 = uStack_d0;
  }
  _ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
            (&plStack_e0,1,lVar5,uVar11,lVar6,uVar14,*(undefined4 *)(param_1 + 8));
  plVar12 = plStack_e0;
  plStack_e0 = (long *)0x0;
  plVar2 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar12;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar2 = plStack_e0;
    plStack_e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar12 = *(long **)(param_1 + 0x10);
  }
  if (plVar12 == (long *)0x0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&plStack_e0,&UNK_0017a1e0,0x216,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(&plStack_e0);
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017068c,0x12);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&plStack_e0);
    plVar12 = *(long **)(param_1 + 0x10);
  }
  (**(code **)(*plVar12 + 0x38))(plVar12,1);
  lStack_68 = 0x99ea68;
  pcStack_60 = _Z23adb_tls_set_certificateP6ssl_st;
  plStack_48 = &lStack_68;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),&lStack_68);
  if (plStack_48 == &lStack_68) {
    lVar5 = 0x20;
code_r0x003e50c8:
    (**(code **)(*plStack_48 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plStack_48 != (long *)0x0) goto code_r0x003e50c8;
  }
  apuStack_98[0] = &UNK_0099edf0;
  ppuStack_78 = apuStack_98;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),apuStack_98);
  if (ppuStack_78 == apuStack_98) {
    lVar5 = 0x20;
code_r0x003e510e:
    (**(code **)(*ppuStack_78 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_78 != (undefined **)0x0) goto code_r0x003e510e;
  }
  cVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  uVar11 = CONCAT71((int7)((ulong)apuStack_98 >> 8),cVar3 == '\0');
  if (cVar3 != '\0') {
    plVar2 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if ((uStack_d8 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
  }
  if ((uStack_b8 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  puVar13 = puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    X509_free();
  }
code_r0x003e5199:
  if (puVar7 != (undefined8 *)0x0) {
    EVP_PKEY_free();
    puVar13 = puVar7;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (undefined4 *)(uVar11 & 0xffffffff);
  }
  func_0x0099bd00();
  func_0x0099c060(*(undefined4 *)(puVar13 + 1),2);
  puVar9 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar9;
  puVar10 = puVar9;
  if (*(int *)(puVar13 + 1) != -1) {
    puVar10 = (undefined4 *)func_0x0099bd10();
  }
  *(undefined4 *)(puVar13 + 1) = 0xffffffff;
  *puVar9 = uVar1;
  return puVar10;
}


