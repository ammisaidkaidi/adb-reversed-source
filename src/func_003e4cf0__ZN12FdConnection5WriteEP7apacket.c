// Function: _ZN12FdConnection5WriteEP7apacket
// Address: 003e4cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _ZN12FdConnection5WriteEP7apacket(undefined4 *param_1,undefined *param_2)

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
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long *plStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined *apuStack_d0 [4];
  undefined **ppuStack_b0;
  long lStack_a0;
  code *pcStack_98;
  long *plStack_80;
  long lStack_70;
  undefined4 *puStack_68;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  plVar13 = *(long **)(param_1 + 4);
  puVar12 = param_2;
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(ulong)(uint)param_1[2];
    cVar3 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(plVar13,param_2,0x18);
    if (cVar3 == '\0') goto code_r0x003e4d63;
code_r0x003e4d2b:
    puVar10 = (undefined4 *)0x1;
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar12 = *(undefined **)(param_2 + 0x18);
      plVar13 = *(long **)(param_1 + 4);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(ulong)(uint)param_1[2];
        cVar3 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
      }
      else {
        cVar3 = (**(code **)(*plVar13 + 0x58))();
      }
      puVar10 = (undefined4 *)0x1;
      if (((cVar3 == '\0') && (puVar10 = (undefined4 *)0x0, ((byte)adb_trace_mask & 8) != 0)) &&
         ((int)adb_trace_severity._12_4_ < 2)) {
        plVar13 = (long *)0x1;
        puVar12 = (undefined *)0x0;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        puVar10 = (undefined4 *)0x0;
        if (cVar3 != '\0') {
          param_1 = (undefined4 *)func_0x0099bce0();
          uVar1 = *param_1;
          uVar8 = 0x1fe;
          goto code_r0x003e4e27;
        }
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar13 + 0x58))(plVar13,param_2,0x18);
    if (cVar3 != '\0') goto code_r0x003e4d2b;
code_r0x003e4d63:
    puVar10 = (undefined4 *)0x0;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      plVar13 = (long *)0x1;
      puVar12 = (undefined *)0x0;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar10 = (undefined4 *)0x0;
      if (cVar3 == '\0') goto code_r0x003e4ddb;
      param_1 = (undefined4 *)func_0x0099bce0();
      uVar1 = *param_1;
      uVar8 = 0x1f8;
code_r0x003e4e27:
      plVar13 = &lStack_30;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_30,&UNK_0017a1e0,uVar8,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(plVar13);
      puVar12 = &UNK_0016ebf2;
      func_0x0032eb30(uVar8,&UNK_0016ebf2,0x1e);
      _ZN7android4base10LogMessageD2Ev();
      puVar10 = (undefined4 *)0x0;
      *param_1 = uVar1;
    }
  }
code_r0x003e4ddb:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return puVar10;
  }
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_68 = param_1;
  lVar5 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar5 + 0x10) == '\x01') {
    lVar5 = _Z19fdevent_get_ambientv();
    lVar6 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar5 + 8) == lVar6) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_f0,&UNK_0017a1e0,0x209,6,0,0xffffffff);
        uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_f0);
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
        _ZN7android4base10LogMessageD2Ev(&uStack_f0);
      } while( true );
    }
  }
  puVar7 = (undefined8 *)EVP_PKEY_new();
  iVar4 = EVP_PKEY_set1_RSA(puVar7,puVar12);
  if (iVar4 == 0) {
    puVar10 = (undefined4 *)0x0;
    puVar15 = (undefined8 *)0x4;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      puVar10 = (undefined4 *)0x0;
      puVar15 = &uStack_f0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar15,&UNK_0017a1e0,0x20d,4,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(puVar15);
      func_0x0032eb30(uVar8,&UNK_0017d675,0x18);
      _ZN7android4base10LogMessageD2Ev();
      *puVar9 = uVar1;
    }
    goto code_r0x003e5199;
  }
  puStack_d8 = (undefined8 *)0x0;
  _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(&puStack_d8,puVar7);
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_f0,puStack_d8);
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_110,puVar7);
  uVar11 = uStack_f0 >> 1 & 0x7f;
  lVar5 = (long)&uStack_f0 + 1;
  if ((uStack_f0 & 1) != 0) {
    uVar11 = uStack_e8;
    lVar5 = lStack_e0;
  }
  bVar17 = (uStack_110 & 1) != 0;
  lVar6 = (long)&uStack_110 + 1;
  if (bVar17) {
    lVar6 = lStack_100;
  }
  uVar16 = uStack_110 >> 1 & 0x7f;
  if (bVar17) {
    uVar16 = uStack_108;
  }
  _ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
            (&plStack_118,1,lVar5,uVar11,lVar6,uVar16,(int)plVar13[1]);
  plVar14 = plStack_118;
  plStack_118 = (long *)0x0;
  plVar2 = (long *)plVar13[2];
  plVar13[2] = (long)plVar14;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar2 = plStack_118;
    plStack_118 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar14 = (long *)plVar13[2];
  }
  if (plVar14 == (long *)0x0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&plStack_118,&UNK_0017a1e0,0x216,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(&plStack_118);
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017068c,0x12);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&plStack_118);
    plVar14 = (long *)plVar13[2];
  }
  (**(code **)(*plVar14 + 0x38))(plVar14,1);
  lStack_a0 = 0x99ea68;
  pcStack_98 = _Z23adb_tls_set_certificateP6ssl_st;
  plStack_80 = &lStack_a0;
  (**(code **)(*(long *)plVar13[2] + 0x28))((long *)plVar13[2],&lStack_a0);
  if (plStack_80 == &lStack_a0) {
    lVar5 = 0x20;
code_r0x003e50c8:
    (**(code **)(*plStack_80 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plStack_80 != (long *)0x0) goto code_r0x003e50c8;
  }
  apuStack_d0[0] = &UNK_0099edf0;
  ppuStack_b0 = apuStack_d0;
  (**(code **)(*(long *)plVar13[2] + 0x18))((long *)plVar13[2],apuStack_d0);
  if (ppuStack_b0 == apuStack_d0) {
    lVar5 = 0x20;
code_r0x003e510e:
    (**(code **)(*ppuStack_b0 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_b0 != (undefined **)0x0) goto code_r0x003e510e;
  }
  cVar3 = (**(code **)(*(long *)plVar13[2] + 0x40))();
  puVar10 = (undefined4 *)(ulong)(cVar3 == '\0');
  if (cVar3 != '\0') {
    plVar2 = (long *)plVar13[2];
    plVar13[2] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if ((uStack_110 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_100,uStack_110 & 0xfffffffffffffffe);
  }
  if ((uStack_f0 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_e0,uStack_f0 & 0xfffffffffffffffe);
  }
  puVar15 = puStack_d8;
  puStack_d8 = (undefined8 *)0x0;
  if (puVar15 != (undefined8 *)0x0) {
    X509_free();
  }
code_r0x003e5199:
  if (puVar7 != (undefined8 *)0x0) {
    EVP_PKEY_free();
    puVar15 = puVar7;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return puVar10;
  }
  func_0x0099bd00();
  func_0x0099c060(*(undefined4 *)(puVar15 + 1),2);
  puVar9 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar9;
  puVar10 = puVar9;
  if (*(int *)(puVar15 + 1) != -1) {
    puVar10 = (undefined4 *)func_0x0099bd10();
  }
  *(undefined4 *)(puVar15 + 1) = 0xffffffff;
  *puVar9 = uVar1;
  return puVar10;
}


