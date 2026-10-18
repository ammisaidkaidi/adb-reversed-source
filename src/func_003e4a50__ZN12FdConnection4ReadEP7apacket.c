// Function: _ZN12FdConnection4ReadEP7apacket
// Address: 003e4a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _ZN12FdConnection4ReadEP7apacket(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong unaff_R12;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar21;
  long *plStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined *apuStack_128 [4];
  undefined **ppuStack_108;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_d8;
  long lStack_c8;
  uint *puStack_c0;
  ulong uStack_b8;
  long lStack_88;
  long lStack_80;
  uint *puStack_78;
  uint *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_40;
  uint auStack_38 [2];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = *(uint **)(param_1 + 4);
  puVar14 = param_2;
  if (puVar16 == (uint *)0x0) {
    puVar16 = (uint *)(ulong)param_1[2];
    puStack_60 = &UNK_003e4b7a;
    cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(puVar16,param_2,0x18);
    if (cVar4 == '\0') goto code_r0x003e4b82;
code_r0x003e4a95:
    puVar14 = (uint *)(ulong)param_2[3];
    if (puVar14 < Elf64_Ehdr_00100000.e_ident_magic_str) {
      puStack_60 = &UNK_003e4c22;
      _ZN5Block6resizeEm(param_2 + 6);
      puVar14 = *(uint **)(param_2 + 6);
      puVar16 = *(uint **)(param_1 + 4);
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)(ulong)param_1[2];
        puStack_60 = &UNK_003e4c4b;
        cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm();
      }
      else {
        puVar6 = (undefined4 *)0x1;
        if (*(long *)(param_2 + 10) == 0) goto code_r0x003e4c6e;
        puStack_60 = &UNK_003e4c40;
        cVar4 = (**(code **)(*(long *)puVar16 + 0x50))();
      }
      puVar6 = (undefined4 *)0x1;
      if (((cVar4 == '\0') && (puVar6 = (undefined4 *)0x0, ((byte)adb_trace_mask & 8) != 0)) &&
         ((int)adb_trace_severity._12_4_ < 2)) {
        puVar16 = (uint *)0x1;
        puVar14 = (uint *)0x0;
        puStack_60 = &UNK_003e4c96;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        puVar6 = (undefined4 *)0x0;
        if (cVar4 != '\0') {
          puStack_60 = &UNK_003e4ca3;
          param_2 = (uint *)func_0x0099bce0();
          uVar1 = *param_2;
          puStack_60 = &UNK_003e4ccf;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_50,&UNK_0017a1e0,0x1ef,1,0,0xffffffff);
          puStack_60 = &UNK_003e4cd7;
          uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_50);
          puVar14 = (uint *)&UNK_00187d6d;
          uVar13 = 0x1f;
          goto code_r0x003e4c02;
        }
      }
    }
    else {
      puVar6 = (undefined4 *)0x0;
      if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
        puVar16 = (uint *)0x1;
        puVar14 = (uint *)0x0;
        puStack_60 = &UNK_003e4ad4;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        puVar6 = (undefined4 *)0x0;
        if (cVar4 != '\0') {
          puStack_60 = &UNK_003e4ae5;
          param_1 = (uint *)func_0x0099bce0();
          uVar1 = *param_1;
          unaff_R12 = (ulong)uVar1;
          puStack_60 = &UNK_003e4b11;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_38,&UNK_0017a1e0,0x1e7,1,0,0xffffffff);
          puStack_60 = &UNK_003e4b19;
          unaff_R15 = _ZN7android4base10LogMessage6streamEv(auStack_38);
          puVar16 = param_2 + 3;
          param_2 = (uint *)&uStack_50;
          puStack_60 = &UNK_003e4b34;
          _ZN7android4base12StringPrintfEPKcz(param_2,&UNK_001578d6,*puVar16);
          puStack_60 = &UNK_003e4b3f;
          puVar14 = param_2;
          func_0x0032e5a0(unaff_R15);
          if (((byte)uStack_50 & 1) != 0) {
            puVar14 = (uint *)(CONCAT71(uStack_50._1_7_,(byte)uStack_50) & 0xfffffffffffffffe);
            puStack_60 = &UNK_003e4b56;
            _ZdaPvSt11align_val_t(uStack_40);
          }
          puVar16 = auStack_38;
          puStack_60 = &UNK_003e4b5f;
          _ZN7android4base10LogMessageD2Ev();
          *param_1 = uVar1;
          puVar6 = (undefined4 *)0x0;
        }
      }
    }
  }
  else {
    puStack_60 = &UNK_003e4a8d;
    cVar4 = (**(code **)(*(long *)puVar16 + 0x50))(puVar16,param_2,0x18);
    if (cVar4 != '\0') goto code_r0x003e4a95;
code_r0x003e4b82:
    puVar6 = (undefined4 *)0x0;
    if ((((byte)adb_trace_mask & 8) == 0) || (1 < (int)adb_trace_severity._12_4_))
    goto code_r0x003e4c6e;
    puVar16 = (uint *)0x1;
    puVar14 = (uint *)0x0;
    puStack_60 = &UNK_003e4bb1;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    puVar6 = (undefined4 *)0x0;
    if (cVar4 == '\0') goto code_r0x003e4c6e;
    puStack_60 = &UNK_003e4bc2;
    param_2 = (uint *)func_0x0099bce0();
    uVar1 = *param_2;
    puStack_60 = &UNK_003e4bee;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_50,&UNK_0017a1e0,0x1e2,1,0,0xffffffff);
    puStack_60 = &UNK_003e4bf6;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_50);
    puVar14 = (uint *)&UNK_0015e0fa;
    uVar13 = 0x27;
code_r0x003e4c02:
    unaff_R15 = (ulong)uVar1;
    param_1 = (uint *)&uStack_50;
    puStack_60 = &UNK_003e4c0a;
    func_0x0032eb30(uVar10,puVar14,uVar13);
    puStack_60 = &UNK_003e4c12;
    puVar16 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    puVar6 = (undefined4 *)0x0;
    *param_2 = uVar1;
  }
code_r0x003e4c6e:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return puVar6;
  }
  puStack_60 = &UNK_003e4ced;
  func_0x0099bd00();
  puStack_60 = &stack0xfffffffffffffff8;
  uStack_68 = unaff_R15;
  puStack_70 = param_1;
  puStack_78 = param_2;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  plVar17 = *(long **)(puVar16 + 4);
  puVar15 = puVar14;
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)(ulong)puVar16[2];
    cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(plVar17,puVar14,0x18);
    if (cVar4 == '\0') goto code_r0x003e4d63;
code_r0x003e4d2b:
    puVar6 = (undefined4 *)0x1;
    if (puVar14[3] != 0) {
      puVar15 = *(uint **)(puVar14 + 6);
      plVar17 = *(long **)(puVar16 + 4);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)(ulong)puVar16[2];
        cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
      }
      else {
        cVar4 = (**(code **)(*plVar17 + 0x58))();
      }
      puVar6 = (undefined4 *)0x1;
      if (((cVar4 == '\0') && (puVar6 = (undefined4 *)0x0, ((byte)adb_trace_mask & 8) != 0)) &&
         ((int)adb_trace_severity._12_4_ < 2)) {
        plVar17 = (long *)0x1;
        puVar15 = (uint *)0x0;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        puVar6 = (undefined4 *)0x0;
        if (cVar4 != '\0') {
          puVar16 = (uint *)func_0x0099bce0();
          uVar1 = *puVar16;
          uVar10 = 0x1fe;
          goto code_r0x003e4e27;
        }
      }
    }
  }
  else {
    cVar4 = (**(code **)(*plVar17 + 0x58))(plVar17,puVar14,0x18);
    if (cVar4 != '\0') goto code_r0x003e4d2b;
code_r0x003e4d63:
    puVar6 = (undefined4 *)0x0;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      plVar17 = (long *)0x1;
      puVar15 = (uint *)0x0;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar6 = (undefined4 *)0x0;
      if (cVar4 == '\0') goto code_r0x003e4ddb;
      puVar16 = (uint *)func_0x0099bce0();
      uVar1 = *puVar16;
      uVar10 = 0x1f8;
code_r0x003e4e27:
      plVar17 = &lStack_88;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_88,&UNK_0017a1e0,uVar10,1,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(plVar17);
      puVar15 = (uint *)&UNK_0016ebf2;
      func_0x0032eb30(uVar10,&UNK_0016ebf2,0x1e);
      _ZN7android4base10LogMessageD2Ev();
      puVar6 = (undefined4 *)0x0;
      *puVar16 = uVar1;
    }
  }
code_r0x003e4ddb:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return puVar6;
  }
  func_0x0099bd00();
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_c0 = puVar16;
  uStack_b8 = unaff_R12;
  lVar7 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar7 + 0x10) == '\x01') {
    lVar7 = _Z19fdevent_get_ambientv();
    lVar8 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar7 + 8) == lVar8) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_148,&UNK_0017a1e0,0x209,6,0,0xffffffff);
        uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_148);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00162e7f,0x29);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0016e934,2);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00183451,0x1c);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0017ed76,0x2c);
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,lVar8);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165f20,0x1f);
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,lVar8);
        func_0x0032eb30(uVar10,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&uStack_148);
      } while( true );
    }
  }
  puVar9 = (undefined8 *)EVP_PKEY_new();
  iVar5 = EVP_PKEY_set1_RSA(puVar9,puVar15);
  if (iVar5 == 0) {
    puVar6 = (undefined4 *)0x0;
    puVar19 = (undefined8 *)0x4;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 != '\0') {
      puVar11 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar11;
      puVar6 = (undefined4 *)0x0;
      puVar19 = &uStack_148;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar19,&UNK_0017a1e0,0x20d,4,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(puVar19);
      func_0x0032eb30(uVar10,&UNK_0017d675,0x18);
      _ZN7android4base10LogMessageD2Ev();
      *puVar11 = uVar2;
    }
    goto code_r0x003e5199;
  }
  puStack_130 = (undefined8 *)0x0;
  _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(&puStack_130,puVar9);
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_148,puStack_130);
  uStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_168,puVar9);
  uVar12 = uStack_148 >> 1 & 0x7f;
  lVar7 = (long)&uStack_148 + 1;
  if ((uStack_148 & 1) != 0) {
    uVar12 = uStack_140;
    lVar7 = lStack_138;
  }
  bVar21 = (uStack_168 & 1) != 0;
  lVar8 = (long)&uStack_168 + 1;
  if (bVar21) {
    lVar8 = lStack_158;
  }
  uVar20 = uStack_168 >> 1 & 0x7f;
  if (bVar21) {
    uVar20 = uStack_160;
  }
  _ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
            (&plStack_170,1,lVar7,uVar12,lVar8,uVar20,(int)plVar17[1]);
  plVar18 = plStack_170;
  plStack_170 = (long *)0x0;
  plVar3 = (long *)plVar17[2];
  plVar17[2] = (long)plVar18;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar3 = plStack_170;
    plStack_170 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar18 = (long *)plVar17[2];
  }
  if (plVar18 == (long *)0x0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&plStack_170,&UNK_0017a1e0,0x216,6,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(&plStack_170);
    uVar10 = func_0x0032eb30(uVar10,&UNK_0017068c,0x12);
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&plStack_170);
    plVar18 = (long *)plVar17[2];
  }
  (**(code **)(*plVar18 + 0x38))(plVar18,1);
  lStack_f8 = 0x99ea68;
  pcStack_f0 = _Z23adb_tls_set_certificateP6ssl_st;
  plStack_d8 = &lStack_f8;
  (**(code **)(*(long *)plVar17[2] + 0x28))((long *)plVar17[2],&lStack_f8);
  if (plStack_d8 == &lStack_f8) {
    lVar7 = 0x20;
code_r0x003e50c8:
    (**(code **)(*plStack_d8 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (plStack_d8 != (long *)0x0) goto code_r0x003e50c8;
  }
  apuStack_128[0] = &UNK_0099edf0;
  ppuStack_108 = apuStack_128;
  (**(code **)(*(long *)plVar17[2] + 0x18))((long *)plVar17[2],apuStack_128);
  if (ppuStack_108 == apuStack_128) {
    lVar7 = 0x20;
code_r0x003e510e:
    (**(code **)(*ppuStack_108 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto code_r0x003e510e;
  }
  cVar4 = (**(code **)(*(long *)plVar17[2] + 0x40))();
  puVar6 = (undefined4 *)(ulong)(cVar4 == '\0');
  if (cVar4 != '\0') {
    plVar3 = (long *)plVar17[2];
    plVar17[2] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if ((uStack_168 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_158,uStack_168 & 0xfffffffffffffffe);
  }
  if ((uStack_148 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_138,uStack_148 & 0xfffffffffffffffe);
  }
  puVar19 = puStack_130;
  puStack_130 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    X509_free();
  }
code_r0x003e5199:
  if (puVar9 != (undefined8 *)0x0) {
    EVP_PKEY_free();
    puVar19 = puVar9;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
    return puVar6;
  }
  func_0x0099bd00();
  func_0x0099c060(*(undefined4 *)(puVar19 + 1),2);
  puVar11 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar11;
  puVar6 = puVar11;
  if (*(int *)(puVar19 + 1) != -1) {
    puVar6 = (undefined4 *)func_0x0099bd10();
  }
  *(undefined4 *)(puVar19 + 1) = 0xffffffff;
  *puVar11 = uVar2;
  return puVar6;
}


