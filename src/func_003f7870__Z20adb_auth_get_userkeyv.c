// Function: _Z20adb_auth_get_userkeyv
// Address: 003f7870
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003f7ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f83da: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003fab0d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f8dd6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f9193: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f8a51: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003f9198) */
/* WARNING: Removing unreachable block (ram,0x003f91a4) */
/* WARNING: Removing unreachable block (ram,0x003f91bb) */
/* WARNING: Removing unreachable block (ram,0x003f91cb) */
/* WARNING: Removing unreachable block (ram,0x003f91e2) */
/* WARNING: Removing unreachable block (ram,0x003f8ddb) */
/* WARNING: Removing unreachable block (ram,0x003fab12) */
/* WARNING: Removing unreachable block (ram,0x003f83df) */
/* WARNING: Removing unreachable block (ram,0x003f8a7e) */
/* WARNING: Removing unreachable block (ram,0x003f8a94) */
/* WARNING: Removing unreachable block (ram,0x003f7ab5) */
/* WARNING: Removing unreachable block (ram,0x003f7abd) */
/* WARNING: Removing unreachable block (ram,0x003f7ace) */
/* WARNING: Removing unreachable block (ram,0x003f7add) */
/* WARNING: Removing unreachable block (ram,0x003f8a56) */
/* WARNING: Removing unreachable block (ram,0x003f8a70) */
/* WARNING: Removing unreachable block (ram,0x003f8a7c) */
/* WARNING: Removing unreachable block (ram,0x003f8a60) */
/* WARNING: Removing unreachable block (ram,0x003f8a6b) */
/* WARNING: Removing unreachable block (ram,0x003f8a40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * _Z20adb_auth_get_userkeyv(uint *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined1 *puVar24;
  uint *extraout_RDX;
  ulong uVar25;
  ulong uVar26;
  undefined **ppuVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  byte *pbVar33;
  uint *puVar34;
  uint *puVar35;
  uint *unaff_R12;
  uint *puVar36;
  uint *unaff_R14;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar37;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint *puStack_68;
  byte abStack_60 [8];
  long lStack_58;
  uint *puStack_50;
  long lStack_48;
  uint *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_80 = &UNK_003f789a;
  _Z25adb_auth_get_userkey_pathv(abStack_60);
  puVar36 = (uint *)((ulong)abStack_60[0] & 0xffffffffffffff01);
  if ((abStack_60[0] & 1) == 0) {
    if (abStack_60[0] >> 1 != 0) goto code_r0x003f78b0;
  }
  else if (lStack_58 != 0) {
code_r0x003f78b0:
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_68 = (uint *)0x0;
    puVar15 = (uint *)&lStack_48;
    puStack_80 = &UNK_003f78cc;
    func_0x003f7650(puVar15,abStack_60);
    if (lStack_48 == 0) {
      unaff_R14 = (uint *)0x0;
    }
    else {
      puVar15 = (uint *)&uStack_78;
      puStack_80 = &UNK_003f78de;
      uVar10 = _ZN3adb6crypto18CalculatePublicKeyEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEP6rsa_st
                         ();
      unaff_R14 = (uint *)(ulong)uVar10;
    }
    if (puStack_40 == (uint *)0x0) {
code_r0x003f792b:
      if ((char)unaff_R14 != '\0') goto code_r0x003f7930;
code_r0x003f7957:
      *(undefined2 *)param_1 = 0;
      if ((uStack_78 & 1) != 0) {
        puStack_80 = &UNK_003f7973;
        puVar15 = puStack_68;
        _ZdaPvSt11align_val_t();
      }
    }
    else {
      LOCK();
      puVar36 = puStack_40 + 2;
      lVar13 = *(long *)puVar36;
      *(long *)puVar36 = *(long *)puVar36 + -1;
      UNLOCK();
      if (lVar13 != 0) goto code_r0x003f792b;
      puStack_80 = &UNK_003f794a;
      (**(code **)(*(long *)puStack_40 + 0x10))(puStack_40);
      puStack_80 = &UNK_003f7952;
      puVar15 = puStack_40;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
      if ((char)unaff_R14 == '\0') goto code_r0x003f7957;
code_r0x003f7930:
      *(uint **)(param_1 + 4) = puStack_68;
      *param_1 = (uint)uStack_78;
      param_1[1] = uStack_78._4_4_;
      param_1[2] = (uint)uStack_70;
      param_1[3] = uStack_70._4_4_;
    }
    abStack_60[0] = abStack_60[0] & 1;
    puVar36 = (uint *)(ulong)abStack_60[0];
    unaff_R15 = puStack_40;
    puVar21 = puStack_50;
    goto joined_r0x003f7906;
  }
  puVar15 = (uint *)0x4;
  puStack_80 = &UNK_003f78f6;
  cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar8 != '\0') {
    puStack_80 = &UNK_003f79b8;
    unaff_R14 = (uint *)func_0x0099bce0();
    uVar10 = *unaff_R14;
    unaff_R15 = (uint *)(ulong)uVar10;
    unaff_R12 = (uint *)&uStack_78;
    puStack_80 = &UNK_003f79e1;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_001706c4,0x13c,4,0,unaff_R15);
    puStack_80 = &UNK_003f79e9;
    uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    puStack_80 = &UNK_003f79fd;
    func_0x0032eb30(uVar17,&UNK_00187e5f,0x1f);
    puStack_80 = &UNK_003f7a05;
    puVar15 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
    *unaff_R14 = uVar10;
  }
  *(undefined2 *)param_1 = 0;
  abStack_60[0] = abStack_60[0] & 1 & (byte)puVar36;
  puVar21 = puStack_50;
joined_r0x003f7906:
  if (abStack_60[0] != 0) {
    puStack_80 = &UNK_003f7992;
    _ZdaPvSt11align_val_t();
    puVar15 = puVar21;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  puStack_80 = &UNK_003f7a12;
  func_0x0099bd00();
  ppuVar31 = &puStack_80;
  ppuVar27 = (undefined **)&uStack_c0;
  uStack_a8 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack_c8 = &UNK_003f7a44;
  puVar21 = puVar15;
  puStack_a0 = param_1;
  puStack_98 = unaff_R12;
  puStack_90 = unaff_R14;
  puStack_88 = unaff_R15;
  puStack_80 = &stack0xfffffffffffffff8;
  puVar12 = (uint *)func_0x0099bcf0();
  if (puVar12 < (uint *)0xfffffffffffffff7) {
    if (puVar12 < (uint *)0x17) {
      uStack_c0 = (uint *)CONCAT71(uStack_c0._1_7_,(char)puVar12 * '\x02');
      unaff_R15 = (uint *)((long)&uStack_c0 + 1);
    }
    else {
      lVar13 = 0x1a;
      if (((ulong)puVar12 | 7) != 0x17) {
        lVar13 = ((ulong)puVar12 | 7) + 1;
      }
      puStack_c8 = &UNK_003f7a87;
      unaff_R15 = (uint *)_Znwm(lVar13);
      unaff_R12 = (uint *)(lVar13 + 1);
      uStack_c0 = unaff_R12;
      puStack_b8 = puVar12;
      puStack_b0 = unaff_R15;
    }
    puStack_c8 = &UNK_003f7aa7;
    func_0x0099bda0(unaff_R15,puVar15,puVar12);
    *(byte *)((long)unaff_R15 + (long)puVar12) = 0;
    puVar21 = (uint *)&uStack_c0;
    ppuVar27 = &puStack_c8;
    puStack_c8 = &UNK_003f7ab5;
    ppuVar31 = &puStack_80;
    unaff_R14 = puVar12;
  }
  else {
    puStack_c8 = &UNK_003f7af5;
    func_0x0032e8f0();
    puStack_c8 = &UNK_003f7afa;
    func_0x0099bd00();
  }
  do {
    *(undefined ***)((long)ppuVar27 + -8) = ppuVar31;
    *(uint **)((long)ppuVar27 + -0x10) = unaff_R15;
    *(uint **)((long)ppuVar27 + -0x18) = unaff_R14;
    *(uint **)((long)ppuVar27 + -0x20) = puVar36;
    *(uint **)((long)ppuVar27 + -0x28) = unaff_R12;
    *(uint **)((long)ppuVar27 + -0x30) = puVar15;
    *(undefined8 *)((long)ppuVar27 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f1f;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f2c;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar10 = *unaff_R14;
        unaff_R12 = (uint *)(ulong)uVar10;
        unaff_R15 = (uint *)((long)ppuVar27 + -0x58);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f58;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_001706c4,0x3e,1,0,0xffffffff);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f60;
        uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f74;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00184b18,0xd);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f7f;
        uVar17 = func_0x0032e5a0(uVar17,puVar21);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f93;
        func_0x0032eb30(uVar17,&UNK_0016afcb,4);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7f9b;
        _ZN7android4base10LogMessageD2Ev(unaff_R15);
        *unaff_R14 = uVar10;
      }
    }
    *(undefined8 *)((long)ppuVar27 + -0x58) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x48) = 0;
    *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7b5a;
    _ZN3adb6crypto16CreateRSA2048KeyEv((undefined1 *)((long)ppuVar27 + -0x58));
    if ((*(byte *)((long)ppuVar27 + -0x48) & 1) == 0) {
      puVar21 = (uint *)0x0;
      puVar15 = (uint *)0x4;
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c1f;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c2c;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar10 = *unaff_R14;
        unaff_R12 = (uint *)(ulong)uVar10;
        puVar21 = (uint *)0x0;
        unaff_R15 = (uint *)((long)ppuVar27 + -0x78);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c5a;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_001706c4,0x42,4,0,0xffffffff);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c62;
        uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c76;
        func_0x0032eb30(uVar17,&UNK_0016ecd3,0x14);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c7e;
        puVar15 = unaff_R15;
        _ZN7android4base10LogMessageD2Ev();
        *unaff_R14 = uVar10;
      }
code_r0x003f7ed0:
      if (*(char *)((long)ppuVar27 + -0x48) == '\x01') {
        puVar15 = *(uint **)((long)ppuVar27 + -0x58);
        *(undefined8 *)((long)ppuVar27 + -0x58) = 0;
        if (puVar15 != (uint *)0x0) {
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7eec;
          EVP_PKEY_free();
        }
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar27 + -0x38)) {
        return (uint *)((ulong)puVar21 & 0xffffffff);
      }
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f80db;
      func_0x0099bd00();
    }
    else {
      *(undefined8 *)((long)ppuVar27 + -0x78) = 0;
      *(undefined8 *)((long)ppuVar27 + -0x70) = 0;
      *(undefined8 *)((long)ppuVar27 + -0x68) = 0;
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7b7c;
      lVar13 = EVP_PKEY_get0_RSA(*(undefined8 *)((long)ppuVar27 + -0x58));
      puVar12 = unaff_R14;
      if (lVar13 == 0) {
        puVar12 = (uint *)((long)ppuVar27 + -0x98);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7fcf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar12,&UNK_001706c4,0x48,6,0,0xffffffff);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7fd7;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar12);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7feb;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0016452e,0x11);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7fff;
        func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f8007;
        _ZN7android4base10LogMessageD2Ev(puVar12);
        unaff_R15 = (uint *)0x0;
      }
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7b91;
      cVar8 = _ZN3adb6crypto18CalculatePublicKeyEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEP6rsa_st
                        ((undefined1 *)((long)ppuVar27 + -0x78));
      if (cVar8 == '\0') {
        puVar21 = (uint *)0x0;
        puVar15 = (uint *)0x4;
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7c94;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7ca1;
          puVar12 = (uint *)func_0x0099bce0();
          uVar10 = *puVar12;
          unaff_R12 = (uint *)(ulong)uVar10;
          puVar21 = (uint *)0x0;
          unaff_R15 = (uint *)((long)ppuVar27 + -0x98);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7cd2;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_001706c4,0x4b,4,0,0xffffffff);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7cda;
          uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7cee;
          func_0x0032eb30(uVar17,&UNK_0017720a,0x1e);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7cf6;
          puVar15 = unaff_R15;
          _ZN7android4base10LogMessageD2Ev();
          *puVar12 = uVar10;
        }
code_r0x003f7eb9:
        unaff_R14 = puVar12;
        if ((*(byte *)((long)ppuVar27 + -0x78) & 1) != 0) {
          puVar15 = *(uint **)((long)ppuVar27 + -0x68);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7ed0;
          _ZdaPvSt11align_val_t();
        }
        goto code_r0x003f7ed0;
      }
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7ba3;
      uVar10 = func_0x0099c0a0(0x3f);
      unaff_R15 = (uint *)(ulong)uVar10;
      puVar36 = (uint *)((long)puVar21 + 1);
      puVar15 = puVar36;
      if ((*puVar21 & 1) != 0) {
        puVar15 = *(uint **)(puVar21 + 4);
      }
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7bc2;
      unaff_R14 = (uint *)func_0x0099c3c0(puVar15);
      if (unaff_R14 == (uint *)0x0) {
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d0a;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f8014;
          puVar12 = (uint *)func_0x0099bce0();
          uVar10 = *puVar12;
          unaff_R12 = (uint *)(ulong)uVar10;
          puVar36 = (uint *)((long)ppuVar27 + -0x98);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f8040;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar36,&UNK_001706c4,0x54,4,0,unaff_R12);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f8048;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar36);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f805c;
          uVar17 = func_0x0032eb30(uVar17,&UNK_0016afd0,0xf);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f8067;
          func_0x0032e5a0(uVar17);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f806f;
          _ZN7android4base10LogMessageD2Ev(puVar36);
          *puVar12 = uVar10;
        }
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d1a;
        puVar15 = unaff_R15;
        func_0x0099c0a0();
        puVar21 = (uint *)0x0;
        goto code_r0x003f7eb9;
      }
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7bd6;
      func_0x0099c0a0(unaff_R15);
      *(undefined8 *)((long)ppuVar27 + -0xb8) = 0;
      *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7bf4;
      puVar15 = unaff_R14;
      iVar11 = PEM_write_PrivateKey(unaff_R14,*(undefined8 *)((long)ppuVar27 + -0x58),0,0,0,0);
      if (iVar11 == 0) {
        puVar21 = (uint *)0x0;
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d2f;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d3c;
          unaff_R15 = (uint *)func_0x0099bce0();
          uVar10 = *unaff_R15;
          puVar21 = (uint *)0x0;
          unaff_R12 = (uint *)((long)ppuVar27 + -0x98);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d70;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R12,&UNK_001706c4,0x5d,4,0);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d78;
          uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d8c;
          func_0x0032eb30(uVar17,&UNK_00181c00,0x13);
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7d94;
          _ZN7android4base10LogMessageD2Ev(unaff_R12);
          *unaff_R15 = uVar10;
          puVar36 = unaff_R14;
        }
code_r0x003f7eb1:
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7eb9;
        puVar15 = unaff_R14;
        func_0x0099c1d0();
        puVar12 = unaff_R14;
        goto code_r0x003f7eb9;
      }
      bVar9 = (byte)*puVar21;
      uVar10 = (uint)bVar9;
      if ((bVar9 & 1) == 0) {
        unaff_R15 = (uint *)(ulong)(bVar9 >> 1);
      }
      else {
        unaff_R15 = *(uint **)(puVar21 + 2);
      }
      puVar21 = *(uint **)(puVar21 + 4);
      *(undefined8 *)((long)ppuVar27 + -0x98) = 0;
      *(undefined8 *)((long)ppuVar27 + -0x90) = 0;
      *(undefined8 *)((long)ppuVar27 + -0x88) = 0;
      unaff_R12 = unaff_R15 + 1;
      if (unaff_R12 < (uint *)0xfffffffffffffff7) {
        if (unaff_R12 < (uint *)0x17) {
          uVar14 = 0;
          *(char *)((long)ppuVar27 + -0x98) = (char)unaff_R12 * '\x02';
          puVar15 = (uint *)0x0;
        }
        else {
          *(uint *)((long)ppuVar27 + -0x9c) = (uint)bVar9;
          *(uint **)((long)ppuVar27 + -0xa8) = unaff_R14;
          lVar13 = 0x1a;
          if (((ulong)unaff_R12 | 7) != 0x17) {
            lVar13 = ((ulong)unaff_R12 | 7) + 1;
          }
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7e0b;
          puVar15 = (uint *)_Znwm(lVar13);
          uVar10 = *(uint *)((long)ppuVar27 + -0x9c);
          *(ulong *)((long)ppuVar27 + -0x98) = lVar13 + 1U;
          *(uint **)((long)ppuVar27 + -0x90) = unaff_R12;
          *(uint **)((long)ppuVar27 + -0x88) = puVar15;
          uVar14 = lVar13 + 1U & 0xffffffff;
          unaff_R14 = *(uint **)((long)ppuVar27 + -0xa8);
        }
        if ((uVar10 & 1) == 0) {
          puVar21 = puVar36;
        }
        unaff_R12 = (uint *)((long)ppuVar27 + -0x97);
        if ((uVar14 & 1) != 0) {
          unaff_R12 = puVar15;
        }
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7e54;
        func_0x0099bda0(unaff_R12,puVar21,unaff_R15);
        pbVar33 = (byte *)((long)unaff_R12 + (long)unaff_R15);
        pbVar33[0] = 0x2e;
        pbVar33[1] = 0x70;
        pbVar33[2] = 0x75;
        pbVar33[3] = 0x62;
        *(byte *)((long)(unaff_R12 + 1) + (long)unaff_R15) = 0;
        *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7e74;
        uVar10 = _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b
                           ((undefined1 *)((long)ppuVar27 + -0x78),
                            (undefined1 *)((long)ppuVar27 + -0x98),0);
        unaff_R15 = (uint *)(ulong)uVar10;
        if ((*(byte *)((long)ppuVar27 + -0x98) & 1) != 0) {
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7e94;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar27 + -0x88));
        }
        puVar21 = (uint *)CONCAT71((int7)((ulong)puVar21 >> 8),1);
        if ((char)uVar10 == '\0') {
          puVar21 = (uint *)0x0;
          *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f7ea9;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
          if (cVar8 != '\0') {
            *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f807c;
            unaff_R15 = (uint *)func_0x0099bce0();
            uVar10 = *unaff_R15;
            unaff_R12 = (uint *)(ulong)uVar10;
            puVar21 = (uint *)0x0;
            puVar36 = (uint *)((long)ppuVar27 + -0x98);
            *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f80aa;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar36,&UNK_001706c4,0x62,4,0);
            *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f80b2;
            uVar17 = _ZN7android4base10LogMessage6streamEv(puVar36);
            *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f80c6;
            func_0x0032eb30(uVar17,&UNK_00189666,0x1a);
            *(undefined **)((long)ppuVar27 + -0xc0) = &UNK_003f80ce;
            _ZN7android4base10LogMessageD2Ev(puVar36);
            *unaff_R15 = uVar10;
          }
        }
        goto code_r0x003f7eb1;
      }
    }
    *(code **)((long)ppuVar27 + -0xc0) = _Z15adb_auth_pubkeyPKc;
    func_0x0032e8f0();
    *(undefined1 **)((long)ppuVar27 + -0xc0) = (undefined1 *)((long)ppuVar27 + -8);
    *(uint **)((long)ppuVar27 + -200) = unaff_R15;
    *(uint **)((long)ppuVar27 + -0xd0) = unaff_R14;
    *(uint **)((long)ppuVar27 + -0xd8) = unaff_R12;
    *(uint **)((long)ppuVar27 + -0xe0) = puVar21;
    *(undefined8 *)((long)ppuVar27 + -0xe8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar27 + -0x110) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x108) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x100) = 0;
    *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8113;
    uVar14 = func_0x0099bcf0();
    if (uVar14 < 0xfffffffffffffff7) {
      if (uVar14 < 0x17) {
        *(char *)((long)ppuVar27 + -0x128) = (char)uVar14 * '\x02';
        unaff_R15 = (uint *)((long)ppuVar27 + -0x127);
      }
      else {
        lVar13 = 0x1a;
        if ((uVar14 | 7) != 0x17) {
          lVar13 = (uVar14 | 7) + 1;
        }
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8156;
        unaff_R15 = (uint *)_Znwm(lVar13);
        unaff_R12 = (uint *)(lVar13 + 1);
        *(uint **)((long)ppuVar27 + -0x128) = unaff_R12;
        *(ulong *)((long)ppuVar27 + -0x120) = uVar14;
        *(uint **)((long)ppuVar27 + -0x118) = unaff_R15;
      }
      *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8176;
      func_0x0099bda0(unaff_R15,puVar15,uVar14);
      *(byte *)((long)unaff_R15 + uVar14) = 0;
      *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8188;
      func_0x003f7650((undefined1 *)((long)ppuVar27 + -0xf8),(undefined1 *)((long)ppuVar27 + -0x128)
                     );
      if (*(long *)((long)ppuVar27 + -0xf8) == 0) {
        puVar15 = (uint *)0x0;
      }
      else {
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f819a;
        uVar10 = _ZN3adb6crypto18CalculatePublicKeyEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEP6rsa_st
                           ((undefined1 *)((long)ppuVar27 + -0x110));
        puVar15 = (uint *)(ulong)uVar10;
      }
      plVar23 = *(long **)((long)ppuVar27 + -0xf0);
      if (plVar23 == (long *)0x0) {
code_r0x003f81bf:
        bVar9 = *(byte *)((long)ppuVar27 + -0x128);
      }
      else {
        LOCK();
        plVar3 = plVar23 + 1;
        lVar13 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar13 != 0) goto code_r0x003f81bf;
        pcVar2 = *(code **)(*plVar23 + 0x10);
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f824e;
        (*pcVar2)(plVar23);
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8256;
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        bVar9 = *(byte *)((long)ppuVar27 + -0x128);
      }
      if ((bVar9 & 1) != 0) {
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f81d6;
        _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar27 + -0x118));
      }
      unaff_R14 = (uint *)0x1;
      bVar9 = *(byte *)((long)ppuVar27 + -0x110);
      if ((char)puVar15 != '\0') {
        if ((bVar9 & 1) == 0) {
          puVar24 = (undefined1 *)((long)ppuVar27 + -0x10f);
        }
        else {
          puVar24 = *(undefined1 **)((long)ppuVar27 + -0x100);
        }
        unaff_R14 = (uint *)0x0;
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f820d;
        func_0x0099bd30(_stdout,&UNK_0015f7ba,puVar24);
        bVar9 = *(byte *)((long)ppuVar27 + -0x110);
      }
      if ((bVar9 & 1) != 0) {
        *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f8226;
        _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar27 + -0x100));
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar27 + -0xe8)) {
        return unaff_R14;
      }
    }
    else {
      *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f826a;
      func_0x0032e8f0();
    }
    *(undefined **)((long)ppuVar27 + -0x138) = &UNK_003f826f;
    func_0x0099bd00();
    ppuVar31 = (undefined **)((long)ppuVar27 + -0x138);
    puVar24 = (undefined1 *)((long)ppuVar27 + -0x138);
    *(undefined1 **)((long)ppuVar27 + -0x138) = (undefined1 *)((long)ppuVar27 + -0xc0);
    *(uint **)((long)ppuVar27 + -0x140) = unaff_R15;
    *(uint **)((long)ppuVar27 + -0x148) = unaff_R14;
    *(uint **)((long)ppuVar27 + -0x150) = puVar36;
    *(uint **)((long)ppuVar27 + -0x158) = unaff_R12;
    *(uint **)((long)ppuVar27 + -0x160) = puVar15;
    puVar28 = (undefined1 *)((long)ppuVar27 + -600);
    *(undefined8 *)((long)ppuVar27 + -0x168) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b02;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b0f;
        puVar15 = (uint *)func_0x0099bce0();
        uVar10 = *puVar15;
        unaff_R15 = (uint *)(ulong)uVar10;
        unaff_R14 = (uint *)((long)ppuVar27 + -0x1f8);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b3e;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R14,&UNK_001706c4,0x1a2,1,0)
        ;
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b46;
        uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b5a;
        func_0x0032eb30(uVar17,&UNK_0016afba,0x10);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b62;
        _ZN7android4base10LogMessageD2Ev(unaff_R14);
        *puVar15 = uVar10;
      }
    }
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f82bb;
    _Z25adb_auth_get_userkey_pathv((undefined1 *)((long)ppuVar27 + -0x218));
    bVar9 = *(byte *)((long)ppuVar27 + -0x218);
    puVar36 = (uint *)((ulong)bVar9 & 0xffffffffffffff01);
    if ((bVar9 & 1) == 0) {
      if (bVar9 >> 1 == 0) goto code_r0x003f8326;
    }
    else if (*(long *)((long)ppuVar27 + -0x210) == 0) {
code_r0x003f8326:
      puVar15 = (uint *)0x0;
      puVar32 = (undefined *)0x0;
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8334;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8341;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar10 = *unaff_R14;
        unaff_R15 = (uint *)(ulong)uVar10;
        puVar15 = (uint *)0x0;
        unaff_R12 = (uint *)((long)ppuVar27 + -0x1f8);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f836f;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R12,&UNK_001706c4,0xd4,4,0,unaff_R15);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8377;
        uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
        puVar32 = &UNK_00187e5f;
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f838b;
        func_0x0032eb30(uVar17,&UNK_00187e5f,0x1f);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8393;
        _ZN7android4base10LogMessageD2Ev(unaff_R12);
        *unaff_R14 = uVar10;
      }
      goto code_r0x003f8401;
    }
    *(undefined8 *)((long)ppuVar27 + -0x178) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x170) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x188) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x180) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x198) = 0;
    *(undefined8 *)((long)ppuVar27 + -400) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1a8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1a0) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1b8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1b0) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1c8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1c0) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1d8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1d0) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1e8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1e0) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1f8) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x1f0) = 0;
    if ((bVar9 & 1 & (byte)puVar36) == 0) {
      puVar32 = (undefined *)((long)ppuVar27 + -0x217);
    }
    else {
      puVar32 = *(undefined **)((long)ppuVar27 + -0x208);
    }
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f83b0;
    iVar11 = func_0x0099bf30(1,puVar32,(undefined1 *)((long)ppuVar27 + -0x1f8));
    if (iVar11 != -1) break;
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bea;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bf7;
        puVar15 = (uint *)func_0x0099bce0();
        uVar10 = *puVar15;
        unaff_R15 = (uint *)(ulong)uVar10;
        unaff_R14 = (uint *)((long)ppuVar27 + -0x230);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c26;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R14,&UNK_001706c4,0xda,1,0);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c2e;
        uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c42;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00181c14,10);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c51;
        uVar17 = func_0x0032e5a0(uVar17,(undefined1 *)((long)ppuVar27 + -0x218));
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c65;
        func_0x0032eb30(uVar17,&UNK_00164540,0x13);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c6d;
        _ZN7android4base10LogMessageD2Ev(unaff_R14);
        *puVar15 = uVar10;
      }
    }
    puVar21 = (uint *)((long)ppuVar27 + -0x218);
    puVar29 = (undefined8 *)((long)ppuVar27 + -0x260);
    ppuVar27 = (undefined **)((long)ppuVar27 + -0x260);
    *puVar29 = &UNK_003f83df;
  } while( true );
  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f83f3;
  uVar10 = func_0x003fa400((undefined1 *)((long)ppuVar27 + -0x218));
  puVar15 = (uint *)(ulong)uVar10;
  puVar36 = (uint *)(ulong)(*(byte *)((long)ppuVar27 + -0x218) & 1);
code_r0x003f8401:
  if ((char)puVar36 != '\0') {
    puVar32 = (undefined *)(*(ulong *)((long)ppuVar27 + -0x218) & 0xfffffffffffffffe);
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f841d;
    _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar27 + -0x208));
  }
  if ((char)puVar15 == '\0') {
    puVar21 = (uint *)0x4;
    puVar32 = (undefined *)0x0;
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8494;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar8 != '\0') {
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f84a1;
      puVar15 = (uint *)func_0x0099bce0();
      uVar10 = *puVar15;
      unaff_R15 = (uint *)(ulong)uVar10;
      unaff_R14 = (uint *)((long)ppuVar27 + -0x1f8);
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f84d0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R14,&UNK_001706c4,0x1a5,4,0,0xffffffff);
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f84d8;
      uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
      puVar32 = &UNK_00162f2f;
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f84ec;
      func_0x0032eb30(uVar17,&UNK_00162f2f,0x25);
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f84f4;
      puVar21 = unaff_R14;
      _ZN7android4base10LogMessageD2Ev();
      *puVar15 = uVar10;
    }
code_r0x003f8a15:
    if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)((long)ppuVar27 + -0x168)) {
      return *(uint **)(in_FS_OFFSET + 0x28);
    }
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8cd7;
    func_0x0099bd00();
  }
  else {
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f842d;
    puVar15 = (uint *)func_0x0099be70(&UNK_0015c891);
    puVar36 = (uint *)((long)ppuVar27 + -0x240);
    *(undefined8 *)((long)ppuVar27 + -0x240) = 0;
    *(undefined8 *)((long)ppuVar27 + -0x238) = 0;
    *(uint **)((long)ppuVar27 + -0x248) = puVar36;
    if (puVar15 == (uint *)0x0) {
code_r0x003f8680:
      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b76;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8b83;
          puVar15 = (uint *)func_0x0099bce0();
          uVar10 = *puVar15;
          unaff_R15 = (uint *)(ulong)uVar10;
          unaff_R14 = (uint *)((long)ppuVar27 + -0x1f8);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bb2;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R14,&UNK_001706c4,0x189,1,0,0xffffffff);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bba;
          uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bce;
          func_0x0032eb30(uVar17,&UNK_00178ae4,0x18);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8bd6;
          _ZN7android4base10LogMessageD2Ev(unaff_R14);
          *puVar15 = uVar10;
        }
      }
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f86a8;
      iVar11 = func_0x0099c3d0(0x80800);
      *(int *)((long)ppuVar27 + -0x24c) = iVar11;
      if (iVar11 < 0) {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f89e7;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar8 != '\0') {
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8c7a;
          puVar36 = (uint *)func_0x0099bce0();
          uVar10 = *puVar36;
          unaff_R14 = (uint *)(ulong)uVar10;
          unaff_R15 = (uint *)((long)ppuVar27 + -0x1f8);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8ca6;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_001706c4,0x18d,4,0,unaff_R14);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8cae;
          uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8cc2;
          func_0x0032eb30(uVar17,&UNK_0015fc69,0x1b);
          *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8cca;
          _ZN7android4base10LogMessageD2Ev(unaff_R15);
          *puVar36 = uVar10;
        }
      }
      else {
        puVar15 = *(uint **)((long)ppuVar27 + -0x248);
        if (puVar15 != puVar36) {
          do {
            pbVar33 = (byte *)((long)puVar15 + 0x21);
            if ((puVar15[8] & 1) != 0) {
              pbVar33 = *(byte **)(puVar15 + 0xc);
            }
            *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8716;
            uVar10 = func_0x0099c3e0(*(undefined4 *)((long)ppuVar27 + -0x24c),pbVar33,0x180);
            plVar23 = plRam0000000000a00748;
            if ((int)uVar10 < 0) {
              *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f881c;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
              if (cVar8 != '\0') {
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8829;
                unaff_R14 = (uint *)func_0x0099bce0();
                uVar10 = *unaff_R14;
                unaff_R15 = (uint *)(ulong)uVar10;
                unaff_R12 = (uint *)((long)ppuVar27 + -0x1f8);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8855;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (unaff_R12,&UNK_001706c4,0x194,4,0,unaff_R15);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f885d;
                uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8871;
                uVar17 = func_0x0032eb30(uVar17,&UNK_001723bc,0x25);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f887d;
                uVar17 = func_0x0032e5a0(uVar17,puVar15 + 8);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8891;
                func_0x0032eb30(uVar17,&UNK_00162c6d,1);
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8899;
                _ZN7android4base10LogMessageD2Ev(unaff_R12);
                *unaff_R14 = uVar10;
              }
            }
            else {
              unaff_R15 = (uint *)(ulong)uVar10;
              puVar36 = (uint *)plRam0000000000a00748[1];
              if ((uint *)plRam0000000000a00748[1] == (uint *)0x0) {
                puVar21 = (uint *)(plRam0000000000a00748 + 1);
                unaff_R14 = puVar21;
              }
              else {
                do {
                  while (puVar21 = puVar36, (int)uVar10 < (int)puVar21[8]) {
                    puVar36 = *(uint **)puVar21;
                    unaff_R14 = puVar21;
                    if (*(uint **)puVar21 == (uint *)0x0) goto code_r0x003f8766;
                  }
                  if (uVar10 == puVar21[8]) goto code_r0x003f87c2;
                  puVar36 = *(uint **)(puVar21 + 2);
                } while (*(uint **)(puVar21 + 2) != (uint *)0x0);
                unaff_R14 = puVar21 + 2;
              }
code_r0x003f8766:
              *(uint **)((long)ppuVar27 + -600) = puVar21;
              *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8777;
              puVar21 = (uint *)_Znwm(0x40);
              puVar21[8] = uVar10;
              puVar21[10] = 0;
              puVar21[0xb] = 0;
              puVar21[0xc] = 0;
              puVar21[0xd] = 0;
              puVar21[0xe] = 0;
              puVar21[0xf] = 0;
              puVar21[0] = 0;
              puVar21[1] = 0;
              puVar21[2] = 0;
              puVar21[3] = 0;
              *(undefined8 *)(puVar21 + 4) = *(undefined8 *)((long)ppuVar27 + -600);
              *(uint **)unaff_R14 = puVar21;
              puVar36 = puVar21;
              if (*(long *)*plVar23 != 0) {
                *plVar23 = *(long *)*plVar23;
                puVar36 = *(uint **)unaff_R14;
              }
              lVar13 = plVar23[1];
              *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f87be;
              func_0x003d6af0(lVar13,puVar36);
              plVar23[2] = plVar23[2] + 1;
code_r0x003f87c2:
              unaff_R12 = puVar21 + 10;
              puVar36 = puVar15 + 8;
              if (unaff_R12 != puVar36) {
                bVar9 = (byte)*puVar36;
                if ((*unaff_R12 & 1) == 0) {
                  if ((bVar9 & 1) == 0) {
                    *(undefined8 *)(puVar21 + 0xe) = *(undefined8 *)(puVar15 + 0xc);
                    uVar10 = puVar15[9];
                    uVar4 = puVar15[10];
                    uVar5 = puVar15[0xb];
                    *unaff_R12 = *puVar36;
                    puVar21[0xb] = uVar10;
                    puVar21[0xc] = uVar4;
                    puVar21[0xd] = uVar5;
                  }
                  else {
                    uVar17 = *(undefined8 *)(puVar15 + 10);
                    uVar22 = *(undefined8 *)(puVar15 + 0xc);
                    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f88cc;
                    func_0x0032e990(unaff_R12,uVar22,uVar17);
                  }
                }
                else {
                  bVar37 = (bVar9 & 1) != 0;
                  pbVar33 = (byte *)((long)puVar15 + 0x21);
                  if (bVar37) {
                    pbVar33 = *(byte **)(puVar15 + 0xc);
                  }
                  uVar14 = (ulong)(bVar9 >> 1);
                  if (bVar37) {
                    uVar14 = *(ulong *)(puVar15 + 10);
                  }
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f88ba;
                  func_0x0032e920(unaff_R12,pbVar33,uVar14);
                }
              }
              if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
                *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f892d;
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                if (cVar8 != '\0') {
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8936;
                  unaff_R14 = (uint *)func_0x0099bce0();
                  *(uint *)((long)ppuVar27 + -600) = *unaff_R14;
                  unaff_R12 = (uint *)((long)ppuVar27 + -0x1f8);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f896a;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (unaff_R12,&UNK_001706c4,0x199,1,0,0xffffffff);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8972;
                  uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8986;
                  uVar17 = func_0x0032eb30(uVar17,&UNK_00166070,0x11);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8991;
                  uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar17,unaff_R15);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f89a5;
                  uVar17 = func_0x0032eb30(uVar17,&UNK_001596e6,0x11);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f89b1;
                  uVar17 = func_0x0032e5a0(uVar17,puVar15 + 8);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f89c5;
                  func_0x0032eb30(uVar17,&UNK_00162c6d,1);
                  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f89cd;
                  _ZN7android4base10LogMessageD2Ev(unaff_R12);
                  *unaff_R14 = *(uint *)((long)ppuVar27 + -600);
                }
              }
            }
            puVar36 = *(uint **)(puVar15 + 2);
            puVar21 = puVar15;
            if (*(uint **)(puVar15 + 2) == (uint *)0x0) {
              do {
                puVar15 = *(uint **)(puVar21 + 4);
                bVar37 = puVar21 != *(uint **)puVar15;
                puVar21 = puVar15;
              } while (bVar37);
            }
            else {
              do {
                puVar15 = puVar36;
                puVar36 = *(uint **)puVar15;
              } while (*(uint **)puVar15 != (uint *)0x0);
            }
          } while (puVar15 != (uint *)((long)ppuVar27 + -0x240));
        }
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f86d6;
        uVar17 = _Z14fdevent_createiPFvijPvES_
                           (*(undefined4 *)((long)ppuVar27 + -0x24c),&UNK_003fa820,0);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f86e3;
        _Z11fdevent_addP7fdeventj(uVar17,1);
      }
      puVar36 = (uint *)((long)ppuVar27 + -0x240);
      puVar15 = *(uint **)((long)ppuVar27 + -0x248);
      if (puVar15 != puVar36) {
        puVar21 = puVar15 + 8;
        puVar32 = (undefined *)0x1;
        puVar28 = (undefined1 *)((long)ppuVar27 + -0x260);
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8a56;
        goto code_r0x003f8ce0;
      }
      puVar32 = *(undefined **)((long)ppuVar27 + -0x240);
      *(uint **)((long)ppuVar27 + -0x1f8) = puVar36;
      puVar21 = (uint *)((long)ppuVar27 + -0x1f8);
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8a15;
      func_0x003fb690();
      goto code_r0x003f8a15;
    }
    *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8459;
    puVar21 = puVar15;
    puVar12 = (uint *)func_0x0099bcf0();
    if (puVar12 < (uint *)0xfffffffffffffff7) {
      if (puVar12 < (uint *)0x17) {
        *(char *)((long)ppuVar27 + -0x218) = (char)puVar12 * '\x02';
        puVar16 = (undefined1 *)((long)ppuVar27 + -0x217);
      }
      else {
        lVar13 = 0x1a;
        if (((ulong)puVar12 | 7) != 0x17) {
          lVar13 = ((ulong)puVar12 | 7) + 1;
        }
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f851d;
        puVar16 = (undefined1 *)_Znwm(lVar13);
        unaff_R12 = (uint *)(lVar13 + 1);
        *(uint **)((long)ppuVar27 + -0x218) = unaff_R12;
        *(uint **)((long)ppuVar27 + -0x210) = puVar12;
        *(undefined1 **)((long)ppuVar27 + -0x208) = puVar16;
      }
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8546;
      func_0x0099bd90(puVar16,puVar15,puVar12);
      puVar16[(long)puVar12] = 0;
      *(undefined2 *)((long)ppuVar27 + -0x230) = 0x3a02;
      *(undefined1 *)((long)ppuVar27 + -0x22e) = 0;
      *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8575;
      _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                ((undefined1 *)((long)ppuVar27 + -0x1f8),(undefined1 *)((long)ppuVar27 + -0x218),
                 (undefined1 *)((long)ppuVar27 + -0x230));
      puVar15 = *(uint **)((long)ppuVar27 + -0x1f8);
      unaff_R15 = *(uint **)((long)ppuVar27 + -0x1f0);
      unaff_R14 = puVar12;
      if (puVar15 != unaff_R15) {
        unaff_R12 = (uint *)((long)ppuVar27 + -0x248);
        unaff_R14 = (uint *)((long)ppuVar27 + -0x200);
        do {
          if (((byte)*puVar15 & 1) == 0) {
            if ((byte)((byte)*puVar15 >> 1) != 0) goto code_r0x003f85c7;
          }
          else if (*(long *)(puVar15 + 2) != 0) {
code_r0x003f85c7:
            *(uint **)((long)ppuVar27 + -0x200) = unaff_R12;
            *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f85dc;
            _ZZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE16__emplace_uniqueB8nn220000IJRKS6_EEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEEDpOT_ENKUlSD_SD_E_clESD_SD_
                      (unaff_R14,puVar15,puVar15);
          }
          puVar15 = puVar15 + 6;
        } while (puVar15 != unaff_R15);
        puVar15 = *(uint **)((long)ppuVar27 + -0x1f8);
      }
      if (puVar15 != (uint *)0x0) {
        unaff_R14 = *(uint **)((long)ppuVar27 + -0x1f0);
        puVar21 = puVar15;
        if (puVar15 != unaff_R14) {
          do {
            if ((unaff_R14[-6] & 1) != 0) {
              uVar14 = *(ulong *)(unaff_R14 + -6);
              uVar17 = *(undefined8 *)(unaff_R14 + -2);
              *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8621;
              _ZdaPvSt11align_val_t(uVar17,uVar14 & 0xfffffffffffffffe);
            }
            unaff_R14 = unaff_R14 + -6;
          } while (unaff_R14 != puVar15);
          puVar21 = *(uint **)((long)ppuVar27 + -0x1f8);
        }
        *(uint **)((long)ppuVar27 + -0x1f0) = puVar15;
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8640;
        _ZdaPvSt11align_val_t(puVar21,*(long *)((long)ppuVar27 + -0x1e8) - (long)puVar21);
      }
      if ((*(byte *)((long)ppuVar27 + -0x230) & 1) != 0) {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8660;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar27 + -0x220),
                   *(ulong *)((long)ppuVar27 + -0x230) & 0xfffffffffffffffe);
      }
      if ((*(byte *)((long)ppuVar27 + -0x218) & 1) != 0) {
        *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8680;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar27 + -0x208),
                   *(ulong *)((long)ppuVar27 + -0x218) & 0xfffffffffffffffe);
      }
      goto code_r0x003f8680;
    }
  }
  *(undefined **)((long)ppuVar27 + -0x260) = &UNK_003f8cdc;
  func_0x0032e8f0();
  puVar24 = (undefined1 *)((long)ppuVar27 + -0x138);
code_r0x003f8ce0:
  puVar16 = puVar28 + -8;
  *(undefined1 **)(puVar28 + -8) = puVar24;
  *(uint **)(puVar28 + -0x10) = unaff_R15;
  *(uint **)(puVar28 + -0x18) = unaff_R14;
  *(uint **)(puVar28 + -0x20) = puVar36;
  *(uint **)(puVar28 + -0x28) = unaff_R12;
  *(uint **)(puVar28 + -0x30) = puVar15;
  puVar24 = (undefined1 *)((ulong)puVar32 & 0xffffffff);
  *(undefined8 *)(puVar28 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    *(undefined **)(puVar28 + -0x160) = &UNK_003f93de;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      *(undefined **)(puVar28 + -0x160) = &UNK_003f93eb;
      puVar20 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar20;
      unaff_R12 = (uint *)(puVar28 + -200);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f941c;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_001706c4,0x9c,1,0,0xffffffff);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f9424;
      uVar17 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f9438;
      uVar17 = func_0x0032eb30(uVar17,&UNK_00166082,0xb);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f9443;
      uVar17 = func_0x0032e5a0(uVar17,puVar21);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f9457;
      func_0x0032eb30(uVar17,&UNK_00187eac,4);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f945f;
      _ZN7android4base10LogMessageD2Ev(unaff_R12);
      *puVar20 = uVar1;
      puVar36 = puVar21;
    }
  }
  *(undefined8 *)(puVar28 + -0x48) = 0;
  *(undefined8 *)(puVar28 + -0x40) = 0;
  *(undefined8 *)(puVar28 + -0x58) = 0;
  *(undefined8 *)(puVar28 + -0x50) = 0;
  *(undefined8 *)(puVar28 + -0x68) = 0;
  *(undefined8 *)(puVar28 + -0x60) = 0;
  *(undefined8 *)(puVar28 + -0x78) = 0;
  *(undefined8 *)(puVar28 + -0x70) = 0;
  *(undefined8 *)(puVar28 + -0x88) = 0;
  *(undefined8 *)(puVar28 + -0x80) = 0;
  *(undefined8 *)(puVar28 + -0x98) = 0;
  *(undefined8 *)(puVar28 + -0x90) = 0;
  *(undefined8 *)(puVar28 + -0xa8) = 0;
  *(undefined8 *)(puVar28 + -0xa0) = 0;
  *(undefined8 *)(puVar28 + -0xb8) = 0;
  *(undefined8 *)(puVar28 + -0xb0) = 0;
  *(undefined8 *)(puVar28 + -200) = 0;
  *(undefined8 *)(puVar28 + -0xc0) = 0;
  puVar15 = (uint *)((long)puVar21 + 1);
  puVar12 = puVar15;
  if ((*puVar21 & 1) != 0) {
    puVar12 = *(uint **)(puVar21 + 4);
  }
  *(undefined **)(puVar28 + -0x160) = &UNK_003f8d79;
  iVar11 = func_0x0099bf30(1,puVar12,puVar28 + -200);
  puVar7 = puVar21;
  puVar34 = unaff_R12;
  puVar19 = (uint *)puVar24;
  if (iVar11 == 0) {
    if ((*(uint *)(puVar28 + -0xb0) & 0xf000) == 0x4000) {
      if ((char)puVar24 == '\0') {
        puVar35 = (uint *)0x3;
        puVar12 = (uint *)0x0;
        *(undefined **)(puVar28 + -0x160) = &UNK_003f92de;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        if (cVar8 != '\0') {
          *(undefined **)(puVar28 + -0x160) = &UNK_003f92eb;
          puVar19 = (uint *)func_0x0099bce0();
          uVar10 = *puVar19;
          puVar15 = (uint *)(puVar28 + -0xe8);
          *(undefined **)(puVar28 + -0x160) = &UNK_003f931c;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar15,&UNK_001706c4,0xac,3,0,0xffffffff);
          *(undefined **)(puVar28 + -0x160) = &UNK_003f9324;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar15);
          *(undefined **)(puVar28 + -0x160) = &UNK_003f9338;
          uVar17 = func_0x0032eb30(uVar17,&UNK_00167bc3,0x2f);
          *(undefined **)(puVar28 + -0x160) = &UNK_003f9343;
          uVar17 = func_0x0032e5a0(uVar17,puVar21);
          puVar12 = (uint *)&UNK_00162c6d;
          *(undefined **)(puVar28 + -0x160) = &UNK_003f9357;
          func_0x0032eb30(uVar17,&UNK_00162c6d,1);
          *(undefined **)(puVar28 + -0x160) = &UNK_003f935f;
          puVar35 = puVar15;
          _ZN7android4base10LogMessageD2Ev();
          *puVar19 = uVar10;
          puVar7 = (uint *)(ulong)uVar10;
          puVar34 = puVar21;
        }
      }
      else {
        puVar19 = puVar15;
        if ((*puVar21 & 1) != 0) {
          puVar19 = *(uint **)(puVar21 + 4);
        }
        *(undefined **)(puVar28 + -0x160) = &UNK_003f8df7;
        puVar19 = (uint *)func_0x0099c0d0(puVar19);
        if (puVar19 == (uint *)0x0) {
          puVar35 = (uint *)0x4;
          puVar12 = (uint *)0x0;
          *(undefined **)(puVar28 + -0x160) = &UNK_003f9380;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar19 = (uint *)puVar24;
          if (cVar8 != '\0') {
            *(undefined **)(puVar28 + -0x160) = &UNK_003f938d;
            puVar19 = (uint *)func_0x0099bce0();
            puVar15 = (uint *)(ulong)*puVar19;
            *(undefined **)(puVar28 + -0x160) = &UNK_003f93b9;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar28 + -0xe8,&UNK_001706c4,0xb2,4,0,puVar15);
            *(undefined **)(puVar28 + -0x160) = &UNK_003f93c1;
            uVar17 = _ZN7android4base10LogMessage6streamEv(puVar28 + -0xe8);
            puVar32 = &UNK_0016ece8;
            uVar22 = 0x25;
            goto code_r0x003f94af;
          }
        }
        else {
          *(uint **)(puVar28 + -0x150) = puVar15;
          *(undefined **)(puVar28 + -0x160) = &UNK_003f8e12;
          lVar13 = func_0x0099c0e0(puVar19);
          if (lVar13 != 0) {
            *(undefined8 *)(puVar28 + -0x140) = 0;
            *(uint **)(puVar28 + -0x130) = puVar19;
            *(uint **)(puVar28 + -0x148) = puVar21;
            do {
              *(undefined8 *)(puVar28 + -0xe8) = 0;
              *(undefined8 *)(puVar28 + -0xe0) = 0;
              *(undefined8 *)(puVar28 + -0xd8) = 0;
              puVar36 = (uint *)(lVar13 + 0x13);
              *(undefined **)(puVar28 + -0x160) = &UNK_003f8e75;
              puVar35 = puVar36;
              unaff_R12 = (uint *)func_0x0099bcf0();
              if ((uint *)0xfffffffffffffff6 < unaff_R12) {
code_r0x003f94e6:
                *(undefined **)(puVar28 + -0x160) = &UNK_003f94eb;
                func_0x0032e8f0();
                goto code_r0x003f94eb;
              }
              if (unaff_R12 < (uint *)0x17) {
                puVar28[-0xe8] = (char)unaff_R12 * '\x02';
                puVar15 = (uint *)(puVar28 + -0xe7);
              }
              else {
                lVar13 = ((ulong)unaff_R12 | 7) + 1;
                if (((ulong)unaff_R12 | 7) == 0x17) {
                  lVar13 = 0x1a;
                }
                *(undefined **)(puVar28 + -0x160) = &UNK_003f8ec0;
                puVar15 = (uint *)_Znwm(lVar13);
                *(long *)(puVar28 + -0xe8) = lVar13 + 1;
                puVar19 = *(uint **)(puVar28 + -0x130);
                *(uint **)(puVar28 + -0xe0) = unaff_R12;
                *(uint **)(puVar28 + -0xd8) = puVar15;
              }
              *(undefined **)(puVar28 + -0x160) = &UNK_003f8ef0;
              func_0x0099bd90(puVar15,puVar36,unaff_R12);
              *(byte *)((long)puVar15 + (long)unaff_R12) = 0;
              bVar9 = puVar28[-0xe8];
              if ((bVar9 & 1) == 0) {
                puVar12 = (uint *)(ulong)(bVar9 >> 1);
              }
              else {
                puVar12 = *(uint **)(puVar28 + -0xe0);
              }
              puVar35 = *(uint **)(puVar28 + -0xd8);
              if (puVar12 == (uint *)0x2) {
                if ((bVar9 & 1) == 0) {
                  puVar35 = (uint *)(puVar28 + -0xe7);
                }
                if ((short)*puVar35 != 0x2e2e) goto code_r0x003f8f78;
              }
              else {
                if (puVar12 == (uint *)0x1) {
                  puVar36 = puVar35;
                  if ((bVar9 & 1) == 0) {
                    puVar36 = (uint *)(puVar28 + -0xe7);
                  }
                  if ((byte)*puVar36 == 0x2e) goto code_r0x003f91f3;
                }
                if ((bVar9 & 1) == 0) {
                  puVar35 = (uint *)(puVar28 + -0xe7);
                }
code_r0x003f8f78:
                *(undefined **)(puVar28 + -0x160) = &UNK_003f8f89;
                cVar8 = _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                                  (puVar35,puVar12,&UNK_0015fc85,8);
                if (cVar8 != '\0') {
                  bVar9 = (byte)*puVar21;
                  uVar10 = (uint)bVar9;
                  if ((bVar9 & 1) == 0) {
                    puVar36 = (uint *)(ulong)(bVar9 >> 1);
                  }
                  else {
                    puVar36 = *(uint **)(puVar21 + 2);
                  }
                  puVar34 = *(uint **)(puVar21 + 4);
                  *(undefined8 *)(puVar28 + -0x128) = 0;
                  *(undefined8 *)(puVar28 + -0x120) = 0;
                  *(undefined8 *)(puVar28 + -0x118) = 0;
                  puVar19 = (uint *)((long)puVar36 + 1);
                  if ((uint *)0xfffffffffffffff6 < puVar19) goto code_r0x003f94e6;
                  if (puVar19 < (uint *)0x17) {
                    cVar8 = (char)puVar19 * '\x02';
                    puVar24 = (undefined1 *)CONCAT71((int7)((ulong)puVar19 >> 8),cVar8);
                    puVar28[-0x128] = cVar8;
                    puVar15 = (uint *)0x0;
                  }
                  else {
                    *(uint *)(puVar28 + -0x134) = (uint)bVar9;
                    lVar13 = ((ulong)puVar19 | 7) + 1;
                    if (((ulong)puVar19 | 7) == 0x17) {
                      lVar13 = 0x1a;
                    }
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f90fd;
                    puVar15 = (uint *)_Znwm(lVar13);
                    uVar10 = *(uint *)(puVar28 + -0x134);
                    *(ulong *)(puVar28 + -0x128) = lVar13 + 1U;
                    *(uint **)(puVar28 + -0x120) = puVar19;
                    *(uint **)(puVar28 + -0x118) = puVar15;
                    puVar24 = (undefined1 *)(lVar13 + 1U & 0xffffffff);
                    puVar21 = *(uint **)(puVar28 + -0x148);
                  }
                  unaff_R12 = puVar34;
                  if ((uVar10 & 1) == 0) {
                    unaff_R12 = *(uint **)(puVar28 + -0x150);
                  }
                  if (((ulong)puVar24 & 1) == 0) {
                    puVar15 = (uint *)(puVar28 + -0x127);
                  }
                  *(undefined **)(puVar28 + -0x160) = &UNK_003f914f;
                  func_0x0099bda0(puVar15,unaff_R12,puVar36);
                  ((byte *)((long)puVar15 + (long)puVar36))[0] = 0x2f;
                  ((byte *)((long)puVar15 + (long)puVar36))[1] = 0;
                  *(undefined **)(puVar28 + -0x160) = &UNK_003f9169;
                  puVar18 = (undefined8 *)func_0x0032e820(puVar28 + -0x128,puVar28 + -0xe8);
                  *(undefined8 *)(puVar28 + -0xf8) = puVar18[2];
                  uVar17 = puVar18[1];
                  *(undefined8 *)(puVar28 + -0x108) = *puVar18;
                  *(undefined8 *)(puVar28 + -0x100) = uVar17;
                  *puVar18 = 0;
                  puVar18[1] = 0;
                  puVar18[2] = 0;
                  unaff_R15 = (uint *)(puVar28 + -0x108);
                  puVar30 = puVar28 + -0x160;
                  *(undefined **)(puVar28 + -0x160) = &UNK_003f9198;
                  goto code_r0x003fa400;
                }
                if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
                  puVar12 = (uint *)0x0;
                  *(undefined **)(puVar28 + -0x160) = &UNK_003f8fde;
                  cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
                  if (cVar8 != '\0') {
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f8feb;
                    puVar20 = (undefined4 *)func_0x0099bce0();
                    uVar1 = *puVar20;
                    puVar15 = (uint *)(puVar28 + -0x108);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f901c;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (puVar15,&UNK_001706c4,0xc0,1,0,0xffffffff);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9024;
                    uVar17 = _ZN7android4base10LogMessage6streamEv(puVar15);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9038;
                    uVar17 = func_0x0032eb30(uVar17,&UNK_001579a5,0x15);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9043;
                    uVar17 = func_0x0032e5a0(uVar17,puVar21);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9057;
                    uVar17 = func_0x0032eb30(uVar17,&UNK_00161196,1);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9066;
                    uVar17 = func_0x0032e5a0(uVar17,puVar28 + -0xe8);
                    puVar12 = (uint *)&UNK_00162c6d;
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f907a;
                    func_0x0032eb30(uVar17,&UNK_00162c6d,1);
                    *(undefined **)(puVar28 + -0x160) = &UNK_003f9082;
                    _ZN7android4base10LogMessageD2Ev(puVar15);
                    *puVar20 = uVar1;
                    puVar19 = *(uint **)(puVar28 + -0x130);
                  }
                }
              }
code_r0x003f91f3:
              if ((puVar28[-0xe8] & 1) != 0) {
                puVar12 = (uint *)(*(ulong *)(puVar28 + -0xe8) & 0xfffffffffffffffe);
                *(undefined **)(puVar28 + -0x160) = &UNK_003f9217;
                _ZdaPvSt11align_val_t(*(undefined8 *)(puVar28 + -0xd8));
              }
              *(undefined **)(puVar28 + -0x160) = &UNK_003f8e48;
              lVar13 = func_0x0099c0e0(puVar19);
              puVar36 = (uint *)0x0;
              puVar34 = unaff_R12;
            } while (lVar13 != 0);
          }
          *(undefined **)(puVar28 + -0x160) = &UNK_003f936f;
          puVar35 = puVar19;
          func_0x0099c100();
          puVar34 = unaff_R12;
        }
      }
    }
    else {
      if ((*(uint *)(puVar28 + -0xb0) & 0xf000) == 0x8000) {
        puVar30 = puVar28 + -0x160;
        *(undefined **)(puVar28 + -0x160) = &UNK_003f8ddb;
        puVar16 = puVar28 + -8;
        unaff_R15 = puVar21;
        goto code_r0x003fa400;
      }
      puVar35 = (uint *)0x4;
      puVar12 = (uint *)0x0;
      *(undefined **)(puVar28 + -0x160) = &UNK_003f9228;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x160) = &UNK_003f9235;
        puVar19 = (uint *)func_0x0099bce0();
        uVar10 = *puVar19;
        puVar15 = (uint *)(puVar28 + -0xe8);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f9264;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar15,&UNK_001706c4,0xc9,4,0,0xffffffff);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f926c;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar15);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f9280;
        uVar17 = func_0x0032eb30(uVar17,&UNK_00170704,0x20);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f928b;
        uVar17 = func_0x0032e5a0(uVar17,puVar21);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f929f;
        plVar23 = (long *)func_0x0032eb30(uVar17,&UNK_00184b28,5);
        *(uint *)((long)plVar23 + *(long *)(*plVar23 + -0x18) + 8) =
             *(uint *)((long)plVar23 + *(long *)(*plVar23 + -0x18) + 8) & 0xffffffb5 | 8;
        puVar12 = (uint *)(ulong)*(uint *)(puVar28 + -0xb0);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f92c2;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar23);
        *(undefined **)(puVar28 + -0x160) = &UNK_003f92ca;
        puVar35 = puVar15;
        _ZN7android4base10LogMessageD2Ev();
        *puVar19 = uVar10;
        puVar34 = (uint *)(ulong)uVar10;
      }
    }
  }
  else {
    puVar35 = (uint *)0x4;
    puVar12 = (uint *)0x0;
    *(undefined **)(puVar28 + -0x160) = &UNK_003f8d89;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar8 != '\0') {
      *(undefined **)(puVar28 + -0x160) = &UNK_003f946f;
      puVar19 = (uint *)func_0x0099bce0();
      puVar15 = (uint *)(ulong)*puVar19;
      *(undefined **)(puVar28 + -0x160) = &UNK_003f949b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar28 + -0xe8,&UNK_001706c4,0xa0,4,0,puVar15);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f94a3;
      uVar17 = _ZN7android4base10LogMessage6streamEv(puVar28 + -0xe8);
      puVar32 = &UNK_00157989;
      uVar22 = 0x1b;
code_r0x003f94af:
      *(undefined **)(puVar28 + -0x160) = &UNK_003f94b7;
      uVar17 = func_0x0032eb30(uVar17,puVar32,uVar22);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f94c2;
      uVar17 = func_0x0032e5a0(uVar17,puVar21);
      puVar12 = (uint *)&UNK_00162c6d;
      *(undefined **)(puVar28 + -0x160) = &UNK_003f94d6;
      func_0x0032eb30(uVar17,&UNK_00162c6d,1);
      *(undefined **)(puVar28 + -0x160) = &UNK_003f94de;
      puVar35 = (uint *)(puVar28 + -0xe8);
      _ZN7android4base10LogMessageD2Ev();
      *puVar19 = (uint)puVar15;
      puVar34 = (uint *)(puVar28 + -0xe8);
    }
  }
  puVar21 = puVar7;
  if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)(puVar28 + -0x38)) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
code_r0x003f94eb:
  *(code **)(puVar28 + -0x160) = _Z18send_auth_responsePKcmP10atransport;
  func_0x0099bd00();
  *(undefined1 **)(puVar28 + -0x160) = puVar28 + -8;
  *(uint **)(puVar28 + -0x168) = puVar15;
  *(uint **)(puVar28 + -0x170) = puVar19;
  *(uint **)(puVar28 + -0x178) = puVar36;
  *(uint **)(puVar28 + -0x180) = puVar34;
  *(uint **)(puVar28 + -0x188) = puVar21;
  *(undefined8 *)(puVar28 + -400) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar28 + -0x1d0) = 0;
  *(undefined8 *)(puVar28 + -0x1c8) = 0;
  *(undefined **)(puVar28 + -0x208) = &UNK_003f952a;
  _ZN10atransport7NextKeyEv(puVar28 + -0x1d0,extraout_RDX);
  if (*(long *)(puVar28 + -0x1d0) == 0) {
    *(undefined **)(puVar28 + -0x208) = &UNK_003f95b3;
    _ZN10atransport18SetConnectionStateE15ConnectionState(extraout_RDX,2);
    *(undefined **)(puVar28 + -0x208) = &UNK_003f95c0;
    _ZN10atransport24SetConnectionEstablishedEb(extraout_RDX,1);
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9a41;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a4e;
        puVar20 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar20;
        puVar12 = (uint *)(puVar28 + -0x1b0);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a7c;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar12,&UNK_001706c4,0x1b5,1,0,0xffffffff);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a84;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar12);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a98;
        func_0x0032eb30(uVar17,&UNK_0017566a,0x1b);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9aa0;
        _ZN7android4base10LogMessageD2Ev(puVar12);
        *puVar20 = uVar1;
        puVar35 = extraout_RDX;
      }
    }
    *(undefined8 *)(puVar28 + -0x1b0) = 0;
    *(undefined8 *)(puVar28 + -0x1a8) = 0;
    *(undefined8 *)(puVar28 + -0x1a0) = 0;
    *(undefined **)(puVar28 + -0x208) = &UNK_003f95f6;
    _Z20adb_auth_get_userkeyv(puVar28 + -0x1b0);
    bVar9 = puVar28[-0x1b0];
    puVar36 = (uint *)(ulong)bVar9;
    if ((bVar9 & 1) == 0) {
      puVar15 = (uint *)(ulong)(bVar9 >> 1);
      if (puVar15 != (uint *)0x0) goto code_r0x003f9612;
code_r0x003f96f0:
      puVar21 = (uint *)0x3;
      *(undefined **)(puVar28 + -0x208) = &UNK_003f96fc;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9709;
        puVar19 = (uint *)func_0x0099bce0();
        uVar10 = *puVar19;
        puVar12 = (uint *)(ulong)uVar10;
        puVar15 = (uint *)(puVar28 + -0x1f0);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9738;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar15,&UNK_001706c4,0x1b9,3,0,0xffffffff);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9740;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar15);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9754;
        func_0x0032eb30(uVar17,&UNK_00183555,0x1d);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f975c;
        puVar21 = puVar15;
        _ZN7android4base10LogMessageD2Ev();
        *puVar19 = uVar10;
      }
    }
    else {
      puVar15 = *(uint **)(puVar28 + -0x1a8);
      if (puVar15 == (uint *)0x0) goto code_r0x003f96f0;
code_r0x003f9612:
      if (puVar15 < (uint *)0x1000) {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f98a5;
        puVar12 = (uint *)_Z11get_apacketv();
        puVar12[0] = 0x48545541;
        puVar12[1] = 3;
        if ((bVar9 & 1) == 0) {
          puVar35 = (uint *)(puVar28 + -0x1af);
        }
        else {
          puVar35 = *(uint **)(puVar28 + -0x1a0);
        }
        lVar13 = *(long *)(puVar12 + 6);
        puVar12[6] = 0;
        puVar12[7] = 0;
        if (lVar13 != 0) {
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9911;
          _ZdaPvSt11align_val_t();
        }
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = 0;
        puVar15 = (uint *)((long)puVar15 + 1);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9933;
        _ZN5Block8allocateEm(puVar12 + 6,puVar15);
        uVar17 = *(undefined8 *)(puVar12 + 6);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9942;
        func_0x0099bd90(uVar17,puVar35,puVar15);
        puVar12[3] = puVar12[10];
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9955;
        puVar21 = puVar12;
        _Z11send_packetP7apacketP10atransport(puVar12,extraout_RDX);
      }
      else {
        puVar21 = (uint *)0x3;
        *(undefined **)(puVar28 + -0x208) = &UNK_003f962b;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
        if (cVar8 != '\0') {
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9638;
          puVar19 = (uint *)func_0x0099bce0();
          uVar10 = *puVar19;
          puVar35 = (uint *)(ulong)uVar10;
          puVar12 = (uint *)(puVar28 + -0x1f0);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9667;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar12,&UNK_001706c4,0x1be,3,0,0xffffffff);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f966f;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar12);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9683;
          uVar17 = func_0x0032eb30(uVar17,&UNK_00177229,0x1a);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f968e;
          uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,puVar15);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f96a2;
          func_0x0032eb30(uVar17,&UNK_00180434,6);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f96aa;
          puVar21 = puVar12;
          _ZN7android4base10LogMessageD2Ev();
          *puVar19 = uVar10;
        }
      }
    }
    if ((bVar9 & 1) != 0) {
      uVar14 = *(ulong *)(puVar28 + -0x1b0);
      puVar21 = *(uint **)(puVar28 + -0x1a0);
      goto code_r0x003f9963;
    }
  }
  else {
    *(uint **)(puVar28 + -0x200) = extraout_RDX;
    puVar36 = &adb_trace_mask;
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)(puVar28 + -0x208) = &UNK_003f99c6;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f99d3;
        puVar20 = (undefined4 *)func_0x0099bce0();
        *(undefined4 *)(puVar28 + -500) = *puVar20;
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a01;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar28 + -0x1b0,&UNK_001706c4,0x1d6,1,0,0xffffffff);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a0a;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar28 + -0x1b0);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a1e;
        func_0x0032eb30(uVar17,&UNK_0016ecb8,0x1a);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9a27;
        _ZN7android4base10LogMessageD2Ev(puVar28 + -0x1b0);
        *puVar20 = *(undefined4 *)(puVar28 + -500);
      }
    }
    *(undefined **)(puVar28 + -0x208) = &UNK_003f955c;
    puVar15 = (uint *)_Z11get_apacketv();
    if (puVar12 == (uint *)0x14) {
      uVar17 = *(undefined8 *)(puVar28 + -0x1d0);
      *(undefined8 *)(puVar28 + -0x1b0) = 0;
      *(undefined8 *)(puVar28 + -0x1a8) = 0;
      *(undefined8 *)(puVar28 + -0x1a0) = 0;
      *(undefined **)(puVar28 + -0x208) = &UNK_003f958c;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (puVar28 + -0x1b0,0x100000,0);
      *(undefined4 *)(puVar28 + -0x1b4) = 0;
      if ((puVar28[-0x1b0] & 1) == 0) {
        puVar24 = puVar28 + -0x1af;
      }
      else {
        puVar24 = *(undefined1 **)(puVar28 + -0x1a0);
      }
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9781;
      iVar11 = RSA_sign(0x40,puVar35,0x14,puVar24,puVar28 + -0x1b4,uVar17);
      if (iVar11 == 0) {
        *(undefined8 *)(puVar28 + -0x1f0) = 0;
        *(undefined8 *)(puVar28 + -0x1e8) = 0;
        *(undefined8 *)(puVar28 + -0x1e0) = 0;
        if ((puVar28[-0x1b0] & 1) != 0) {
          *(undefined **)(puVar28 + -0x208) = &UNK_003f98ee;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(puVar28 + -0x1a0),
                     *(ulong *)(puVar28 + -0x1b0) & 0xfffffffffffffffe);
        }
        goto code_r0x003f96d8;
      }
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9797;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (puVar28 + -0x1b0,*(undefined4 *)(puVar28 + -0x1b4),0);
      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b7d;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9b8a;
          puVar20 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar20;
          puVar35 = (uint *)(puVar28 + -0x1f0);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9bb8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar35,&UNK_001706c4,0x117,1,0,0xffffffff);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9bc0;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar35);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9bd4;
          uVar17 = func_0x0032eb30(uVar17,&UNK_0016ed0e,0x12);
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9bdf;
          _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj
                    (uVar17,*(undefined4 *)(puVar28 + -0x1b4));
          *(undefined **)(puVar28 + -0x208) = &UNK_003f9be7;
          _ZN7android4base10LogMessageD2Ev(puVar35);
          *puVar20 = uVar1;
        }
      }
      *(undefined8 *)(puVar28 + -0x1e0) = *(undefined8 *)(puVar28 + -0x1a0);
      *(undefined4 *)(puVar28 + -0x1f0) = *(undefined4 *)(puVar28 + -0x1b0);
      *(undefined4 *)(puVar28 + -0x1ec) = *(undefined4 *)(puVar28 + -0x1ac);
      *(undefined4 *)(puVar28 + -0x1e8) = *(undefined4 *)(puVar28 + -0x1a8);
      *(undefined4 *)(puVar28 + -0x1e4) = *(undefined4 *)(puVar28 + -0x1a4);
      uVar14 = (ulong)(byte)puVar28[-0x1f0];
      puVar19 = *(uint **)(puVar28 + -0x1e8);
    }
    else {
      *(undefined **)(puVar28 + -0x208) = &UNK_003f96be;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9ab0;
        puVar35 = (uint *)func_0x0099bce0();
        uVar10 = *puVar35;
        puVar36 = (uint *)(puVar28 + -0x1b0);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9adb;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar36,&UNK_001706c4,0x108,3,0,0xffffffff);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9ae3;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar36);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9af7;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0017d70b,0x16);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b02;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,puVar12);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b0a;
        _ZN7android4base10LogMessageD2Ev(puVar36);
        *puVar35 = uVar10;
      }
      *(undefined8 *)(puVar28 + -0x1f0) = 0;
      *(undefined8 *)(puVar28 + -0x1e8) = 0;
      *(undefined8 *)(puVar28 + -0x1e0) = 0;
code_r0x003f96d8:
      puVar19 = (uint *)0x0;
      uVar14 = 0;
    }
    puVar12 = (uint *)(uVar14 >> 1);
    if ((uVar14 & 1) == 0) {
      puVar19 = puVar12;
    }
    puVar21 = puVar15;
    if (puVar19 == (uint *)0x0) {
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9808;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b18;
        puVar35 = (uint *)func_0x0099bce0();
        uVar10 = *puVar35;
        puVar36 = (uint *)(ulong)uVar10;
        puVar12 = (uint *)(puVar28 + -0x1b0);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b44;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar12,&UNK_001706c4,0x1db,3,0,0xffffffff);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b4c;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar12);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b60;
        func_0x0032eb30(uVar17,&UNK_00175652,0x17);
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9b68;
        _ZN7android4base10LogMessageD2Ev(puVar12);
        *puVar35 = uVar10;
      }
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9818;
      _Z11put_apacketP7apacket();
    }
    else {
      puVar15[0] = 0x48545541;
      puVar15[1] = 2;
      if ((uVar14 & 1) == 0) {
        puVar35 = (uint *)(puVar28 + -0x1ef);
      }
      else {
        puVar35 = *(uint **)(puVar28 + -0x1e0);
        puVar12 = *(uint **)(puVar28 + -0x1e8);
      }
      puVar36 = puVar15 + 6;
      lVar13 = *(long *)(puVar15 + 6);
      puVar15[6] = 0;
      puVar15[7] = 0;
      if (lVar13 != 0) {
        *(undefined **)(puVar28 + -0x208) = &UNK_003f9846;
        _ZdaPvSt11align_val_t();
      }
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9861;
      _ZN5Block8allocateEm(puVar36,puVar12);
      uVar17 = *(undefined8 *)(puVar15 + 6);
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9870;
      func_0x0099bd90(uVar17,puVar35,puVar12);
      puVar15[3] = puVar15[10];
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9887;
      _Z11send_packetP7apacketP10atransport(puVar15,*(undefined8 *)(puVar28 + -0x200));
    }
    if ((uVar14 & 1) != 0) {
      uVar14 = *(ulong *)(puVar28 + -0x1f0);
      puVar21 = *(uint **)(puVar28 + -0x1e0);
code_r0x003f9963:
      *(undefined **)(puVar28 + -0x208) = &UNK_003f996c;
      _ZdaPvSt11align_val_t(puVar21,uVar14 & 0xfffffffffffffffe);
    }
  }
  puVar19 = *(uint **)(puVar28 + -0x1c8);
  if (puVar19 != (uint *)0x0) {
    LOCK();
    puVar34 = puVar19 + 2;
    lVar13 = *(long *)puVar34;
    *(long *)puVar34 = *(long *)puVar34 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      pcVar2 = *(code **)(*(long *)puVar19 + 0x10);
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9990;
      (*pcVar2)(puVar19);
      *(undefined **)(puVar28 + -0x208) = &UNK_003f9998;
      puVar21 = puVar19;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)(puVar28 + -400)) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)(puVar28 + -0x208) = &UNK_003f9bf4;
  func_0x0099bd00();
  *(undefined1 **)(puVar28 + -0x208) = puVar28 + -0x160;
  *(uint **)(puVar28 + -0x210) = puVar15;
  *(uint **)(puVar28 + -0x218) = puVar19;
  *(undefined8 *)(puVar28 + -0x220) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)(puVar28 + -0x230) = &UNK_003f9c25;
  uVar17 = _Znwm(8);
  *(undefined **)(puVar28 + -0x230) = &UNK_003f9c30;
  _ZNSt3__115__thread_structC2Ev(uVar17);
  *(undefined **)(puVar28 + -0x230) = &UNK_003f9c3a;
  puVar18 = (undefined8 *)_Znwm(0x10);
  *puVar18 = uVar17;
  puVar18[1] = puVar21;
  *(undefined **)(puVar28 + -0x230) = &UNK_003f9c56;
  uVar10 = func_0x0099be80(puVar28 + -0x228,0,&UNK_003faf40,puVar18);
  if (uVar10 == 0) {
    puVar21 = (uint *)(puVar28 + -0x228);
    *(undefined **)(puVar28 + -0x230) = &UNK_003f9c66;
    _ZNSt3__16thread6detachEv(puVar21);
    *(undefined **)(puVar28 + -0x230) = &UNK_003f9c6e;
    unaff_R12 = puVar21;
    _ZNSt3__16threadD2Ev();
    if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)(puVar28 + -0x220)) {
      return *(uint **)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    unaff_R12 = (uint *)(ulong)uVar10;
    *(undefined **)(puVar28 + -0x230) = &UNK_003f9c94;
    _ZNSt3__120__throw_system_errorEiPKc(unaff_R12,&UNK_0015f7ec);
  }
  *(undefined **)(puVar28 + -0x230) = &UNK_003f9c99;
  func_0x0099bd00();
  *(undefined1 **)(puVar28 + -0x230) = puVar28 + -0x208;
  *(uint **)(puVar28 + -0x238) = puVar12;
  *(undefined8 *)(puVar28 + -0x240) = uVar17;
  *(uint **)(puVar28 + -0x248) = puVar36;
  *(uint **)(puVar28 + -0x250) = puVar35;
  *(uint **)(puVar28 + -600) = puVar21;
  puVar30 = puVar28 + -0x310;
  *(undefined8 *)(puVar28 + -0x260) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    *(undefined **)(puVar28 + -0x318) = &UNK_003fa317;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa324;
      puVar21 = (uint *)func_0x0099bce0();
      uVar10 = *puVar21;
      puVar24 = puVar28 + -0x280;
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa350;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar24,&UNK_001706c4,0x203,1,0,0xffffffff);
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa358;
      uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa36c;
      func_0x0032eb30(uVar17,&UNK_00164516,0x17);
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa37b;
      _ZN7android4base10LogMessageD2Ev(puVar24);
      *puVar21 = uVar10;
    }
  }
  puVar15 = &adb_trace_mask;
  puVar24 = adb_trace_severity;
  *(undefined **)(puVar28 + -0x318) = &UNK_003f9cec;
  unaff_R15 = unaff_R12;
  puVar12 = (uint *)SSL_get_client_CA_list();
  if (puVar12 == (uint *)0x0) {
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      unaff_R15 = (uint *)0x1;
      *(undefined **)(puVar28 + -0x318) = &UNK_003fa396;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar28 + -0x318) = &UNK_003fa3a3;
        puVar21 = (uint *)func_0x0099bce0();
        uVar10 = *puVar21;
        puVar15 = (uint *)(ulong)uVar10;
        puVar24 = puVar28 + -0x280;
        *(undefined **)(puVar28 + -0x318) = &UNK_003fa3cf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar24,&UNK_001706c4,0x209,1,0,0xffffffff);
        *(undefined **)(puVar28 + -0x318) = &UNK_003fa3d7;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
        *(undefined **)(puVar28 + -0x318) = &UNK_003fa3eb;
        func_0x0032eb30(uVar17,&UNK_0018ae20,0x33);
        *(undefined **)(puVar28 + -0x318) = &UNK_003fa3f3;
        unaff_R15 = (uint *)puVar24;
        _ZN7android4base10LogMessageD2Ev();
        *puVar21 = uVar10;
      }
    }
  }
  else {
    *(uint **)(puVar28 + -0x300) = unaff_R12;
    *(undefined **)(puVar28 + -0x318) = &UNK_003f9d07;
    unaff_R15 = puVar12;
    puVar19 = (uint *)OPENSSL_sk_num();
    puVar21 = puVar12;
    if (puVar19 != (uint *)0x0) {
      unaff_R12 = (uint *)0x0;
      *(uint **)(puVar28 + -0x2f0) = puVar12;
      *(uint **)(puVar28 + -0x310) = puVar19;
      puVar36 = puVar19;
      do {
        *(undefined **)(puVar28 + -0x318) = &UNK_003f9d58;
        uVar17 = OPENSSL_sk_value(puVar21,unaff_R12);
        *(undefined8 *)(puVar28 + -0x270) = 0;
        *(undefined8 *)(puVar28 + -0x268) = 0;
        *(undefined8 *)(puVar28 + -0x280) = 0;
        *(undefined8 *)(puVar28 + -0x278) = 0;
        unaff_R15 = (uint *)(puVar28 + -0x280);
        *(undefined **)(puVar28 + -0x318) = &UNK_003f9d6f;
        _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st(unaff_R15,uVar17);
        if (puVar28[-0x268] != '\0') {
          if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
            *(undefined **)(puVar28 + -0x318) = &UNK_003fa156;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar8 != '\0') {
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa163;
              puVar20 = (undefined4 *)func_0x0099bce0();
              uVar1 = *puVar20;
              puVar24 = puVar28 + -0x2a0;
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa18f;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (puVar24,&UNK_001706c4,0x217,1,0,0xffffffff);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa197;
              uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa1ab;
              uVar17 = func_0x0032eb30(uVar17,&UNK_0017239b,0x20);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa1b7;
              uVar17 = func_0x0032e5a0(uVar17,puVar28 + -0x280);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa1cb;
              func_0x0032eb30(uVar17,&UNK_00178ae2,1);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa1d3;
              _ZN7android4base10LogMessageD2Ev(puVar24);
              *puVar20 = uVar1;
              puVar21 = *(uint **)(puVar28 + -0x2f0);
            }
          }
          *(undefined8 *)(puVar28 + -0x290) = 0;
          *(undefined8 *)(puVar28 + -0x288) = 0;
          bVar37 = (puVar28[-0x280] & 1) == 0;
          puVar24 = *(undefined1 **)(puVar28 + -0x270);
          if (bVar37) {
            puVar24 = puVar28 + -0x27f;
          }
          *(undefined8 *)(puVar28 + -0x2a0) = 0;
          *(undefined8 *)(puVar28 + -0x298) = 0;
          uVar14 = (ulong)((byte)puVar28[-0x280] >> 1);
          if (!bVar37) {
            uVar14 = *(ulong *)(puVar28 + -0x278);
          }
          unaff_R15 = (uint *)(puVar28 + -0x2a0);
          *(undefined **)(puVar28 + -0x318) = &UNK_003f9db6;
          _ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                    (unaff_R15,puVar24,uVar14);
          bVar37 = false;
          if (puVar28[-0x288] == '\x01') {
            *(undefined8 *)(puVar28 + -0x308) = uRam0000000000a00738;
            *(undefined **)(puVar28 + -0x318) = &UNK_003f9dd9;
            _ZNSt3__15mutex4lockEv();
            *(long *)(puVar28 + -0x2e8) = lRam0000000000a00740;
            plVar23 = *(long **)(lRam0000000000a00740 + 8);
            if (plVar23 != (long *)0x0) {
              *(long *)(puVar28 + -0x2e8) = *(long *)(puVar28 + -0x2e8) + 8;
              bVar37 = (puVar28[-0x2a0] & 1) == 0;
              puVar24 = *(undefined1 **)(puVar28 + -0x290);
              if (bVar37) {
                puVar24 = puVar28 + -0x29f;
              }
              uVar14 = (ulong)((byte)puVar28[-0x2a0] >> 1);
              if (!bVar37) {
                uVar14 = *(ulong *)(puVar28 + -0x298);
              }
              do {
                while( true ) {
                  bVar37 = (*(byte *)(plVar23 + 4) & 1) != 0;
                  lVar13 = (long)plVar23 + 0x21;
                  if (bVar37) {
                    lVar13 = plVar23[6];
                  }
                  uVar26 = (ulong)(*(byte *)(plVar23 + 4) >> 1);
                  if (bVar37) {
                    uVar26 = plVar23[5];
                  }
                  uVar25 = uVar14;
                  if (uVar26 < uVar14) {
                    uVar25 = uVar26;
                  }
                  *(undefined **)(puVar28 + -0x318) = &UNK_003f9e57;
                  iVar11 = func_0x0099c3a0(puVar24,lVar13,uVar25);
                  if (iVar11 != 0) break;
                  if (uVar14 == uVar26) {
                    if (plVar23 != *(long **)(puVar28 + -0x2e8)) {
                      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2))
                      {
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa1f5;
                        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                        if (cVar8 != '\0') {
                          *(undefined **)(puVar28 + -0x318) = &UNK_003fa202;
                          puVar20 = (undefined4 *)func_0x0099bce0();
                          *(undefined4 *)(puVar28 + -0x2e8) = *puVar20;
                          puVar24 = puVar28 + -0x2c0;
                          *(undefined **)(puVar28 + -0x318) = &UNK_003fa236;
                          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                    (puVar24,&UNK_001706c4,0x220,1,0,0xffffffff);
                          *(undefined **)(puVar28 + -0x318) = &UNK_003fa23e;
                          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
                          *(undefined **)(puVar28 + -0x318) = &UNK_003fa252;
                          func_0x0032eb30(uVar17,&UNK_0018353b,0x19);
                          *(undefined **)(puVar28 + -0x318) = &UNK_003fa25a;
                          _ZN7android4base10LogMessageD2Ev(puVar24);
                          *puVar20 = *(undefined4 *)(puVar28 + -0x2e8);
                        }
                      }
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9ea6;
                      uVar17 = EVP_PKEY_new();
                      lVar13 = plVar23[7];
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9eb5;
                      iVar11 = EVP_PKEY_set1_RSA(uVar17,lVar13);
                      if (iVar11 == 0) {
                        puVar24 = puVar28 + -0x2c0;
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa292;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (puVar24,&UNK_001706c4,0x222,6,0,0xffffffff);
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa29a;
                        uVar22 = _ZN7android4base10LogMessage6streamEv(puVar24);
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa2ae;
                        uVar22 = func_0x0032eb30(uVar22,&UNK_001771be,0x4b);
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa2c2;
                        func_0x0032eb30(uVar22,&UNK_0015ae05,1);
                        *(undefined **)(puVar28 + -0x318) = &UNK_003fa2ca;
                        _ZN7android4base10LogMessageD2Ev(puVar24);
                      }
                      *(undefined8 *)(puVar28 + -0x2a8) = 0;
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9ed1;
                      _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st
                                (puVar28 + -0x2a8,uVar17);
                      *(undefined8 *)(puVar28 + -0x2c0) = 0;
                      *(undefined8 *)(puVar28 + -0x2b8) = 0;
                      *(undefined8 *)(puVar28 + -0x2b0) = 0;
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9ef3;
                      _ZN3adb6crypto15X509ToPEMStringEP7x509_st
                                (puVar28 + -0x2c0,*(undefined8 *)(puVar28 + -0x2a8));
                      *(undefined8 *)(puVar28 + -0x2e0) = 0;
                      *(undefined8 *)(puVar28 + -0x2d8) = 0;
                      *(undefined8 *)(puVar28 + -0x2d0) = 0;
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9f17;
                      _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(puVar28 + -0x2e0,uVar17);
                      bVar37 = (puVar28[-0x2c0] & 1) == 0;
                      puVar24 = *(undefined1 **)(puVar28 + -0x2b0);
                      if (bVar37) {
                        puVar24 = puVar28 + -0x2bf;
                      }
                      uVar14 = (ulong)((byte)puVar28[-0x2c0] >> 1);
                      if (!bVar37) {
                        uVar14 = *(ulong *)(puVar28 + -0x2b8);
                      }
                      puVar16 = puVar28 + -0x2df;
                      if ((puVar28[-0x2e0] & 1) != 0) {
                        puVar16 = *(undefined1 **)(puVar28 + -0x2d0);
                      }
                      *(undefined **)(puVar28 + -0x318) = &UNK_003f9f70;
                      _ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
                                (*(undefined8 *)(puVar28 + -0x300),puVar24,uVar14,puVar16);
                      if ((puVar28[-0x2e0] & 1) != 0) {
                        *(undefined **)(puVar28 + -0x318) = &UNK_003f9f97;
                        _ZdaPvSt11align_val_t
                                  (*(undefined8 *)(puVar28 + -0x2d0),
                                   *(ulong *)(puVar28 + -0x2e0) & 0xfffffffffffffffe);
                      }
                      puVar21 = *(uint **)(puVar28 + -0x2f0);
                      if ((puVar28[-0x2c0] & 1) != 0) {
                        *(undefined **)(puVar28 + -0x318) = &UNK_003f9fbb;
                        _ZdaPvSt11align_val_t
                                  (*(undefined8 *)(puVar28 + -0x2b0),
                                   *(ulong *)(puVar28 + -0x2c0) & 0xfffffffffffffffe);
                      }
                      *(undefined8 *)(puVar28 + -0x2e8) = uVar17;
                      lVar13 = *(long *)(puVar28 + -0x2a8);
                      *(undefined8 *)(puVar28 + -0x2a8) = 0;
                      if (lVar13 != 0) {
                        *(undefined **)(puVar28 + -0x318) = &UNK_003f9fd8;
                        X509_free();
                      }
                      bVar37 = true;
                      if (*(long *)(puVar28 + -0x2e8) != 0) {
                        *(undefined **)(puVar28 + -0x318) = &UNK_003f9ff3;
                        EVP_PKEY_free();
                      }
                      goto code_r0x003fa0e8;
                    }
                    goto code_r0x003fa000;
                  }
                  if (uVar14 < uVar26) goto code_r0x003f9e20;
code_r0x003f9e67:
                  plVar23 = (long *)plVar23[1];
                  if (plVar23 == (long *)0x0) goto code_r0x003fa000;
                }
                if (-1 < iVar11) goto code_r0x003f9e67;
code_r0x003f9e20:
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
code_r0x003fa000:
            bVar37 = false;
            if ((adb_trace_mask._1_1_ & 4) == 0) {
code_r0x003fa0e1:
              bVar37 = false;
              puVar21 = *(uint **)(puVar28 + -0x2f0);
            }
            else {
              puVar21 = *(uint **)(puVar28 + -0x2f0);
              if ((int)adb_trace_severity._40_4_ < 2) {
                bVar37 = false;
                *(undefined **)(puVar28 + -0x318) = &UNK_003fa03d;
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                if (cVar8 != '\0') {
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa04a;
                  puVar20 = (undefined4 *)func_0x0099bce0();
                  *(undefined4 **)(puVar28 + -0x2f8) = puVar20;
                  *(undefined4 *)(puVar28 + -0x2e8) = *puVar20;
                  puVar24 = puVar28 + -0x2c0;
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa085;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (puVar24,&UNK_001706c4,0x229,1,0,0xffffffff);
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa08d;
                  uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa0a1;
                  uVar17 = func_0x0032eb30(uVar17,&UNK_0018ae54,0xe);
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa0ad;
                  uVar17 = func_0x0032e5a0(uVar17,puVar28 + -0x280);
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa0c1;
                  func_0x0032eb30(uVar17,&UNK_00178ae2,1);
                  *(undefined **)(puVar28 + -0x318) = &UNK_003fa0c9;
                  _ZN7android4base10LogMessageD2Ev(puVar24);
                  **(undefined4 **)(puVar28 + -0x2f8) = *(undefined4 *)(puVar28 + -0x2e8);
                  goto code_r0x003fa0e1;
                }
              }
            }
code_r0x003fa0e8:
            unaff_R15 = *(uint **)(puVar28 + -0x308);
            *(undefined **)(puVar28 + -0x318) = &UNK_003fa0f4;
            _ZNSt3__115recursive_mutex6unlockEv();
            if ((puVar28[-0x288] == '\x01') && ((puVar28[-0x2a0] & 1) != 0)) {
              unaff_R15 = *(uint **)(puVar28 + -0x290);
              *(undefined **)(puVar28 + -0x318) = &UNK_003fa111;
              _ZdaPvSt11align_val_t(unaff_R15,*(ulong *)(puVar28 + -0x2a0) & 0xfffffffffffffffe);
            }
          }
          puVar15 = &adb_trace_mask;
          puVar24 = adb_trace_severity;
          if ((puVar28[-0x268] == '\x01') && ((puVar28[-0x280] & 1) != 0)) {
            unaff_R15 = *(uint **)(puVar28 + -0x270);
            *(undefined **)(puVar28 + -0x318) = &UNK_003fa145;
            _ZdaPvSt11align_val_t(unaff_R15,*(ulong *)(puVar28 + -0x280) & 0xfffffffffffffffe);
          }
          puVar36 = *(uint **)(puVar28 + -0x310);
          if (bVar37) break;
        }
        puVar15 = &adb_trace_mask;
        puVar24 = adb_trace_severity;
        unaff_R12 = (uint *)((long)unaff_R12 + 1);
      } while (unaff_R12 != puVar36);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar28 + -0x260)) {
    return (uint *)0x1;
  }
  *(undefined **)(puVar28 + -0x318) = &UNK_003fa400;
  func_0x0099bd00();
  puVar16 = puVar28 + -0x230;
code_r0x003fa400:
  *(undefined1 **)(puVar30 + -8) = puVar16;
  *(uint **)(puVar30 + -0x10) = puVar15;
  *(undefined1 **)(puVar30 + -0x18) = puVar24;
  *(uint **)(puVar30 + -0x20) = puVar36;
  *(uint **)(puVar30 + -0x28) = unaff_R12;
  *(uint **)(puVar30 + -0x30) = puVar21;
  *(undefined8 *)(puVar30 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar12 = (uint *)(puVar30 + -0x58);
  *(undefined **)(puVar30 + -0xc0) = &UNK_003fa430;
  puVar19 = unaff_R15;
  func_0x003f7650();
  lVar13 = *(long *)(puVar30 + -0x58);
  puVar15 = (uint *)0x0;
  puVar21 = unaff_R12;
  if (lVar13 != 0) {
    *(undefined8 *)(puVar30 + -0xb0) = uRam0000000000a00738;
    *(undefined **)(puVar30 + -0xc0) = &UNK_003fa450;
    _ZNSt3__15mutex4lockEv();
    *(undefined8 *)(puVar30 + -0x78) = 0;
    *(undefined8 *)(puVar30 + -0x70) = 0;
    *(undefined8 *)(puVar30 + -0x68) = 0;
    *(undefined8 *)(puVar30 + -0x90) = 0;
    *(undefined **)(puVar30 + -0xc0) = &UNK_003fa479;
    iVar11 = i2d_RSA_PUBKEY(lVar13,puVar30 + -0x90);
    *(long *)(puVar30 + -0xa0) = lVar13;
    *(uint **)(puVar30 + -0xa8) = unaff_R15;
    if (iVar11 < 0) {
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa4cf;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa7b9;
        puVar20 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar20;
        puVar24 = puVar30 + -0x40;
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa7e5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar24,&UNK_001706c4,0x6d,4,0,0xffffffff);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa7ed;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa801;
        func_0x0032eb30(uVar17,&UNK_00166050,0x1f);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa809;
        _ZN7android4base10LogMessageD2Ev(puVar24);
        *puVar20 = uVar1;
      }
      *(undefined8 *)(puVar30 + -0x78) = 0;
      *(undefined8 *)(puVar30 + -0x70) = 0;
      *(undefined8 *)(puVar30 + -0x68) = 0;
    }
    else {
      *(undefined8 *)(puVar30 + -0x78) = 0;
      *(undefined8 *)(puVar30 + -0x70) = 0;
      *(undefined8 *)(puVar30 + -0x68) = 0;
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa4ad;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (puVar30 + -0x78,0x20,0);
      if ((puVar30[-0x78] & 1) == 0) {
        puVar24 = puVar30 + -0x77;
      }
      else {
        puVar24 = *(undefined1 **)(puVar30 + -0x68);
      }
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa4f1;
      SHA256(*(undefined8 *)(puVar30 + -0x90),iVar11,puVar24);
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa4fd;
      OPENSSL_free(*(undefined8 *)(puVar30 + -0x90));
    }
    lVar13 = lRam0000000000a00740;
    plVar23 = *(long **)(lRam0000000000a00740 + 8);
    if (plVar23 != (long *)0x0) {
      bVar37 = (puVar30[-0x78] & 1) != 0;
      puVar21 = (uint *)(puVar30 + -0x77);
      if (bVar37) {
        puVar21 = *(uint **)(puVar30 + -0x68);
      }
      unaff_R15 = (uint *)(ulong)((byte)puVar30[-0x78] >> 1);
      if (bVar37) {
        unaff_R15 = *(uint **)(puVar30 + -0x70);
      }
      do {
        while( true ) {
          bVar37 = (*(byte *)(plVar23 + 4) & 1) != 0;
          puVar19 = (uint *)((long)plVar23 + 0x21);
          if (bVar37) {
            puVar19 = (uint *)plVar23[6];
          }
          puVar36 = (uint *)(ulong)(*(byte *)(plVar23 + 4) >> 1);
          if (bVar37) {
            puVar36 = (uint *)plVar23[5];
          }
          puVar15 = unaff_R15;
          if (puVar36 < unaff_R15) {
            puVar15 = puVar36;
          }
          *(undefined **)(puVar30 + -0xc0) = &UNK_003fa563;
          iVar11 = func_0x0099c3a0(puVar21,puVar19,puVar15);
          if (iVar11 != 0) break;
          if (unaff_R15 == puVar36) {
            if (plVar23 != (long *)(lVar13 + 8)) {
              puVar36 = (uint *)&UNK_00181c1f;
              puVar15 = *(uint **)(puVar30 + -0xa0);
              goto code_r0x003fa614;
            }
            goto code_r0x003fa59b;
          }
          if (unaff_R15 < puVar36) goto code_r0x003fa530;
code_r0x003fa577:
          plVar23 = (long *)plVar23[1];
          if (plVar23 == (long *)0x0) goto code_r0x003fa59b;
        }
        if (-1 < iVar11) goto code_r0x003fa577;
code_r0x003fa530:
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
code_r0x003fa59b:
    puVar19 = (uint *)(puVar30 + -0x78);
    *(uint **)(puVar30 + -0x40) = puVar19;
    *(long *)(puVar30 + -0x90) = lVar13;
    *(undefined **)(puVar30 + -0xc0) = &UNK_003fa5c5;
    lVar13 = _ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                       (puVar30 + -0x90,puVar19,&_ZNSt3__119piecewise_constructE,puVar30 + -0x40);
    uVar17 = *(undefined8 *)(puVar30 + -0x50);
    *(undefined8 *)(puVar30 + -0x58) = 0;
    *(undefined8 *)(puVar30 + -0x50) = 0;
    puVar15 = *(uint **)(puVar30 + -0xa0);
    *(uint **)(lVar13 + 0x38) = puVar15;
    puVar21 = *(uint **)(lVar13 + 0x40);
    *(undefined8 *)(lVar13 + 0x40) = uVar17;
    puVar36 = (uint *)&UNK_0015e18b;
    if (puVar21 != (uint *)0x0) {
      LOCK();
      puVar12 = puVar21 + 2;
      lVar13 = *(long *)puVar12;
      *(long *)puVar12 = *(long *)puVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        pcVar2 = *(code **)(*(long *)puVar21 + 0x10);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa60c;
        (*pcVar2)(puVar21);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa614;
        _ZNSt3__119__shared_weak_count14__release_weakEv(puVar21);
      }
    }
code_r0x003fa614:
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      puVar19 = (uint *)0x0;
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa6b4;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa6c1;
        puVar20 = (undefined4 *)func_0x0099bce0();
        *(undefined4 *)(puVar30 + -0x94) = *puVar20;
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa6f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar30 + -0x40,&UNK_001706c4,0x96,1,0,0xffffffff);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa6fa;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar30 + -0x40);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa705;
        uVar22 = func_0x0099bcf0(puVar36);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa713;
        uVar17 = func_0x0032eb30(uVar17,puVar36,uVar22);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa727;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015e196,0xb);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa736;
        uVar17 = func_0x0032e5a0(uVar17,*(undefined8 *)(puVar30 + -0xa8));
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa74a;
        unaff_R15 = (uint *)func_0x0032eb30(uVar17,&UNK_00181c36,0x13);
        bVar37 = (puVar30[-0x78] & 1) != 0;
        puVar24 = puVar30 + -0x77;
        if (bVar37) {
          puVar24 = *(undefined1 **)(puVar30 + -0x68);
        }
        uVar14 = (ulong)((byte)puVar30[-0x78] >> 1);
        if (bVar37) {
          uVar14 = *(ulong *)(puVar30 + -0x70);
        }
        puVar21 = (uint *)(puVar30 + -0x90);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa775;
        _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (puVar21,puVar24,uVar14);
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa780;
        puVar19 = puVar21;
        func_0x0032e5a0(unaff_R15);
        if ((puVar30[-0x90] & 1) != 0) {
          puVar19 = (uint *)(*(ulong *)(puVar30 + -0x90) & 0xfffffffffffffffe);
          *(undefined **)(puVar30 + -0xc0) = &UNK_003fa79d;
          _ZdaPvSt11align_val_t(*(undefined8 *)(puVar30 + -0x80));
        }
        *(undefined **)(puVar30 + -0xc0) = &UNK_003fa7a6;
        _ZN7android4base10LogMessageD2Ev(puVar30 + -0x40);
        *puVar20 = *(undefined4 *)(puVar30 + -0x94);
      }
    }
    if ((puVar30[-0x78] & 1) != 0) {
      puVar19 = (uint *)(*(ulong *)(puVar30 + -0x78) & 0xfffffffffffffffe);
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa645;
      _ZdaPvSt11align_val_t(*(undefined8 *)(puVar30 + -0x68));
    }
    puVar12 = *(uint **)(puVar30 + -0xb0);
    *(undefined **)(puVar30 + -0xc0) = &UNK_003fa651;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  puVar34 = *(uint **)(puVar30 + -0x50);
  if (puVar34 != (uint *)0x0) {
    LOCK();
    puVar7 = puVar34 + 2;
    lVar13 = *(long *)puVar7;
    *(long *)puVar7 = *(long *)puVar7 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      pcVar2 = *(code **)(*(long *)puVar34 + 0x10);
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa675;
      (*pcVar2)(puVar34);
      *(undefined **)(puVar30 + -0xc0) = &UNK_003fa67d;
      puVar12 = puVar34;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar30 + -0x38)) {
    return (uint *)(ulong)(puVar15 != (uint *)0x0);
  }
  *(undefined **)(puVar30 + -0xc0) = &UNK_003fa817;
  func_0x0099bd00();
  puVar24 = puVar30 + -0xc0;
  *(undefined1 **)(puVar30 + -0xc0) = puVar30 + -8;
  *(uint **)(puVar30 + -200) = unaff_R15;
  *(uint **)(puVar30 + -0xd0) = puVar34;
  *(uint **)(puVar30 + -0xd8) = puVar36;
  *(uint **)(puVar30 + -0xe0) = puVar21;
  *(uint **)(puVar30 + -0xe8) = puVar15;
  *(int *)(puVar30 + -0x23c) = (int)puVar12;
  *(undefined8 *)(puVar30 + -0xf0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  unaff_R14 = &adb_trace_mask;
  puVar34 = puVar19;
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    puVar12 = (uint *)0x1;
    puVar15 = (uint *)((ulong)puVar19 & 0xffffffff);
    *(undefined **)(puVar30 + -600) = &UNK_003fae5b;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    puVar34 = (uint *)((ulong)puVar19 & 0xffffffff);
    if (cVar8 != '\0') {
      *(undefined **)(puVar30 + -600) = &UNK_003fae6a;
      puVar36 = (uint *)func_0x0099bce0();
      uVar10 = *puVar36;
      unaff_R15 = (uint *)(ulong)uVar10;
      puVar21 = (uint *)(puVar30 + -0x200);
      *(undefined **)(puVar30 + -600) = &UNK_003fae99;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar21,&UNK_001706c4,0x156,1,0,0xffffffff);
      *(undefined **)(puVar30 + -600) = &UNK_003faea1;
      uVar17 = _ZN7android4base10LogMessage6streamEv(puVar21);
      *(undefined **)(puVar30 + -600) = &UNK_003faeb5;
      func_0x0032eb30(uVar17,&UNK_00189681,0x1e);
      *(undefined **)(puVar30 + -600) = &UNK_003faebd;
      puVar12 = puVar21;
      _ZN7android4base10LogMessageD2Ev();
      puVar34 = (uint *)((ulong)puVar19 & 0xffffffff);
      *puVar36 = uVar10;
    }
  }
  if (((ulong)puVar34 & 1) == 0) {
code_r0x003fae28:
    if (*(uint **)(in_FS_OFFSET + 0x28) == *(uint **)(puVar30 + -0xf0)) {
      return *(uint **)(in_FS_OFFSET + 0x28);
    }
    *(undefined **)(puVar30 + -600) = &UNK_003faf3b;
    func_0x0099bd00();
    *(undefined1 **)(puVar30 + -600) = puVar30 + -0xc0;
    *(uint **)(puVar30 + -0x260) = unaff_R15;
    *(uint **)(puVar30 + -0x268) = unaff_R14;
    *(uint **)(puVar30 + -0x270) = puVar36;
    *(uint **)(puVar30 + -0x278) = puVar21;
    *(uint **)(puVar30 + -0x280) = puVar15;
    *(undefined8 *)(puVar30 + -0x288) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003faf66;
    puVar20 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
    uVar17 = *(undefined8 *)puVar12;
    puVar12[0] = 0;
    puVar12[1] = 0;
    uVar1 = *puVar20;
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003faf77;
    func_0x0099bfc0(uVar1,uVar17);
    *(undefined8 *)(puVar30 + -0x298) = 0;
    *(undefined8 *)(puVar30 + -0x290) = 0;
    uVar17 = *(undefined8 *)(puVar12 + 2);
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003faf8b;
    _ZN10atransport3KeyEv(puVar30 + -0x298,uVar17);
    if (*(long *)(puVar30 + -0x298) == 0) {
      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb2cc;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb2d9;
          puVar20 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar20;
          puVar24 = puVar30 + -0x2a8;
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb305;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar24,&UNK_001706c4,0x1ec,1,0,0xffffffff);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb30d;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb321;
          func_0x0032eb30(uVar17,&UNK_0015e1a2,0x24);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb329;
          _ZN7android4base10LogMessageD2Ev(puVar24);
          *puVar20 = uVar1;
        }
      }
      uVar17 = *(undefined8 *)(puVar12 + 2);
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fafc1;
      _ZN10atransport7NextKeyEv(puVar30 + -0x2a8,uVar17);
      uVar1 = *(undefined4 *)(puVar30 + -0x2a8);
      uVar6 = *(undefined4 *)(puVar30 + -0x2a0);
      *(undefined8 *)(puVar30 + -0x2a8) = 0;
      *(undefined8 *)(puVar30 + -0x2a0) = 0;
      plVar23 = *(long **)(puVar30 + -0x290);
      *(undefined4 *)(puVar30 + -0x298) = uVar1;
      *(undefined4 *)(puVar30 + -0x294) = *(undefined4 *)(puVar30 + -0x2a4);
      *(undefined4 *)(puVar30 + -0x290) = uVar6;
      *(undefined4 *)(puVar30 + -0x28c) = *(undefined4 *)(puVar30 + -0x29c);
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar3 = plVar23 + 1;
        lVar13 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          pcVar2 = *(code **)(*plVar23 + 0x10);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003faff4;
          (*pcVar2)(plVar23);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003faffc;
          _ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = *(long **)(puVar30 + -0x2a0);
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar3 = plVar23 + 1;
        lVar13 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          pcVar2 = *(code **)(*plVar23 + 0x10);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb020;
          (*pcVar2)(plVar23);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb028;
          _ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      if (*(long *)(puVar30 + -0x298) == 0) {
        puVar24 = puVar30 + -0x2a8;
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb357;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar24,&UNK_001706c4,0x1ee,6,0,0xffffffff);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb35f;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb373;
        uVar17 = func_0x0032eb30(uVar17,&UNK_0016608e,0x11);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb387;
        func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb38f;
        _ZN7android4base10LogMessageD2Ev(puVar24);
      }
    }
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb1ea;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb1f7;
        puVar20 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar20;
        puVar24 = puVar30 + -0x2a8;
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb223;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar24,&UNK_001706c4,0x1f1,1,0,0xffffffff);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb22b;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb23f;
        func_0x0032eb30(uVar17,&UNK_00167bf3,0x1b);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb247;
        _ZN7android4base10LogMessageD2Ev(puVar24);
        *puVar20 = uVar1;
      }
    }
    lVar13 = *(long *)(puVar12 + 2);
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb065;
    _ZNSt3__15mutex4lockEv(lVar13 + 0x1a0);
    plVar23 = *(long **)(lVar13 + 0x158);
    plVar3 = *(long **)(lVar13 + 0x160);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb085;
    _ZNSt3__115recursive_mutex6unlockEv(lVar13 + 0x1a0);
    pcVar2 = *(code **)(*plVar23 + 0x28);
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb094;
    cVar8 = (*pcVar2)(plVar23,*(undefined8 *)(puVar30 + -0x298),0);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar23 = plVar3 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        pcVar2 = *(code **)(*plVar3 + 0x10);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb0b7;
        (*pcVar2)(plVar3);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb0bf;
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    bVar37 = (adb_trace_mask._1_1_ & 4) != 0;
    if (cVar8 == '\0') {
      if ((int)adb_trace_severity._40_4_ < 2 && bVar37) {
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb25b;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb268;
          puVar20 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar20;
          puVar24 = puVar30 + -0x2a8;
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb294;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar24,&UNK_001706c4,0x1f6,1,0,0xffffffff);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb29c;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb2b0;
          func_0x0032eb30(uVar17,&UNK_00187eb1,0x23);
          *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb2b8;
          _ZN7android4base10LogMessageD2Ev(puVar24);
          *puVar20 = uVar1;
        }
      }
      uVar17 = *(undefined8 *)(puVar12 + 2);
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb15d;
      _ZN10atransport4KickEv(uVar17);
    }
    else if ((int)adb_trace_severity._40_4_ < 2 && bVar37) {
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb0ee;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb0f7;
        puVar20 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar20;
        puVar24 = puVar30 + -0x2a8;
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb123;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar24,&UNK_001706c4,500,1,0,0xffffffff);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb12b;
        uVar17 = _ZN7android4base10LogMessage6streamEv(puVar24);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb13f;
        func_0x0032eb30(uVar17,&UNK_00183573,0x2f);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb147;
        _ZN7android4base10LogMessageD2Ev(puVar24);
        *puVar20 = uVar1;
      }
    }
    plVar23 = *(long **)(puVar30 + -0x290);
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar3 = plVar23 + 1;
      lVar13 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        pcVar2 = *(code **)(*plVar23 + 0x10);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb181;
        (*pcVar2)(plVar23);
        *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb189;
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    lVar13 = *(long *)puVar12;
    puVar12[0] = 0;
    puVar12[1] = 0;
    if (lVar13 != 0) {
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb1a0;
      _ZNSt3__115__thread_structD2Ev(lVar13);
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb1ad;
      _ZdaPvSt11align_val_t(lVar13,8);
    }
    *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb1ba;
    _ZdaPvSt11align_val_t(puVar12,0x10);
    if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(puVar30 + -0x288)) {
      *(undefined **)(puVar30 + -0x2b0) = &UNK_003fb399;
      func_0x0099bd00();
      pcVar2 = (code *)swi(3);
      puVar36 = (uint *)(*pcVar2)();
      return puVar36;
    }
    return (uint *)0x0;
  }
  *(undefined **)(puVar30 + -600) = &UNK_003fa883;
  func_0x0099bdb0(puVar30 + -0x200,0,0x110);
  puVar21 = (uint *)(puVar30 + -0x220);
code_r0x003fa890:
  do {
    while( true ) {
      puVar12 = (uint *)(ulong)*(uint *)(puVar30 + -0x23c);
      *(undefined **)(puVar30 + -600) = &UNK_003fa8a7;
      lVar13 = func_0x0099be20(puVar12,puVar30 + -0x200,0x110);
      if (lVar13 == -1) goto code_r0x003fa8d0;
      iVar11 = (int)lVar13;
      if (iVar11 == -1) break;
      if (0 < (long)iVar11) {
        puVar15 = (uint *)(puVar30 + (long)iVar11 + -0x200);
        unaff_R15 = (uint *)(puVar30 + -0x200);
        do {
          puVar12 = (uint *)plRam0000000000a00748[1];
          puVar19 = (uint *)(plRam0000000000a00748 + 1);
          puVar36 = puVar19;
          if (puVar12 != (uint *)0x0) {
            do {
              while ((int)*unaff_R15 < (int)puVar12[8]) {
                puVar12 = *(uint **)puVar12;
                if (puVar12 == (uint *)0x0) goto code_r0x003fa9c1;
              }
              if (*unaff_R15 == puVar12[8]) {
                puVar36 = puVar12;
                if (puVar12 != puVar19) goto code_r0x003fa9d5;
                break;
              }
              puVar12 = *(uint **)(puVar12 + 2);
            } while (puVar12 != (uint *)0x0);
          }
code_r0x003fa9c1:
          puVar12 = puVar36;
          *(undefined **)(puVar30 + -600) = &UNK_003fa9cd;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
          if (cVar8 != '\0') {
            *(undefined **)(puVar30 + -600) = &UNK_003fac63;
            puVar20 = (undefined4 *)func_0x0099bce0();
            *(undefined4 **)(puVar30 + -0x238) = puVar20;
            *(undefined4 *)(puVar30 + -0x22c) = *puVar20;
            *(undefined **)(puVar30 + -600) = &UNK_003fac94;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar21,&UNK_001706c4,0x16e,6,0,0xffffffff);
            *(undefined **)(puVar30 + -600) = &UNK_003fac9c;
            uVar17 = _ZN7android4base10LogMessage6streamEv(puVar21);
            *(undefined **)(puVar30 + -600) = &UNK_003facb0;
            uVar17 = func_0x0032eb30(uVar17,&UNK_0018671d,0x32);
            *(undefined **)(puVar30 + -600) = &UNK_003facbb;
            _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar17);
            *(undefined **)(puVar30 + -600) = &UNK_003facc3;
            _ZN7android4base10LogMessageD2Ev(puVar21);
            **(undefined4 **)(puVar30 + -0x238) = *(undefined4 *)(puVar30 + -0x22c);
          }
code_r0x003fa9d5:
          *(undefined8 *)(puVar30 + -0x220) = 0;
          *(undefined8 *)(puVar30 + -0x218) = 0;
          *(undefined8 *)(puVar30 + -0x210) = 0;
          if ((puVar12[10] & 1) == 0) {
            puVar36 = puVar12 + 10;
            *(undefined8 *)(puVar30 + -0x210) = *(undefined8 *)(puVar12 + 0xe);
            uVar10 = puVar12[0xb];
            uVar4 = puVar12[0xc];
            uVar5 = puVar12[0xd];
            *(uint *)(puVar30 + -0x220) = *puVar36;
            *(uint *)(puVar30 + -0x21c) = uVar10;
            *(uint *)(puVar30 + -0x218) = uVar4;
            *(uint *)(puVar30 + -0x214) = uVar5;
            uVar10 = unaff_R15[3];
          }
          else {
            uVar17 = *(undefined8 *)(puVar12 + 0xc);
            uVar22 = *(undefined8 *)(puVar12 + 0xe);
            *(undefined **)(puVar30 + -600) = &UNK_003faa30;
            func_0x00330340(puVar21,uVar22,uVar17);
            uVar10 = unaff_R15[3];
            puVar36 = puVar12;
          }
          if (uVar10 != 0) {
            bVar9 = puVar30[-0x220];
            if ((bVar9 & 1) == 0) {
              puVar36 = (uint *)0x16;
              if (bVar9 == 0x2c) {
code_r0x003faa8a:
                puVar12 = puVar36;
                *(undefined8 *)(puVar30 + -0x250) = 0;
                *(undefined **)(puVar30 + -600) = &UNK_003faaab;
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                          (puVar21,puVar12,1,puVar12,puVar12,0);
                puVar36 = puVar12;
                goto code_r0x003faaae;
              }
              puVar12 = (uint *)(ulong)(bVar9 >> 1);
              puVar30[-0x220] = bVar9 + 2;
              puVar16 = puVar30 + -0x21f;
            }
            else {
              puVar12 = *(uint **)(puVar30 + -0x218);
              puVar36 = (uint *)((*(ulong *)(puVar30 + -0x220) & 0xfffffffffffffffe) - 1);
              if (puVar12 == puVar36) goto code_r0x003faa8a;
code_r0x003faaae:
              puVar16 = *(undefined1 **)(puVar30 + -0x210);
              *(byte **)(puVar30 + -0x218) = (byte *)((long)puVar12 + 1);
            }
            *(undefined2 *)(puVar16 + (long)puVar12) = 0x2f;
            *(undefined **)(puVar30 + -600) = &UNK_003faad2;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puVar21);
          }
          if ((unaff_R15[1] & 0x180) == 0) {
            *(undefined **)(puVar30 + -600) = &UNK_003fab2c;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3);
            if (cVar8 != '\0') {
              *(undefined **)(puVar30 + -600) = &UNK_003fab39;
              puVar20 = (undefined4 *)func_0x0099bce0();
              *(undefined4 **)(puVar30 + -0x238) = puVar20;
              *(undefined4 *)(puVar30 + -0x22c) = *puVar20;
              *(undefined **)(puVar30 + -600) = &UNK_003fab71;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (puVar30 + -0x228,&UNK_001706c4,0x17f,3,0);
              *(undefined **)(puVar30 + -600) = &UNK_003fab79;
              uVar17 = _ZN7android4base10LogMessage6streamEv(puVar30 + -0x228);
              *(undefined **)(puVar30 + -600) = &UNK_003fab8d;
              uVar17 = func_0x0032eb30(uVar17,&UNK_0017d6f4,0x16);
              bVar37 = (puVar30[-0x220] & 1) == 0;
              puVar16 = *(undefined1 **)(puVar30 + -0x210);
              if (bVar37) {
                puVar16 = puVar30 + -0x21f;
              }
              uVar14 = (ulong)((byte)puVar30[-0x220] >> 1);
              if (!bVar37) {
                uVar14 = *(ulong *)(puVar30 + -0x218);
              }
              *(undefined **)(puVar30 + -600) = &UNK_003fabbd;
              uVar17 = func_0x0032eb30(uVar17,puVar16,uVar14);
              *(undefined **)(puVar30 + -600) = &UNK_003fabd1;
              plVar23 = (long *)func_0x0032eb30(uVar17,&UNK_0016143e,4);
              *(uint *)((long)plVar23 + *(long *)(*plVar23 + -0x18) + 8) =
                   *(uint *)((long)plVar23 + *(long *)(*plVar23 + -0x18) + 8) & 0xffffffb5 | 8;
              *(undefined **)(puVar30 + -600) = &UNK_003fabf2;
              _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar23);
code_r0x003fabf2:
              *(undefined **)(puVar30 + -600) = &UNK_003fabfa;
              _ZN7android4base10LogMessageD2Ev(puVar30 + -0x228);
              **(undefined4 **)(puVar30 + -0x238) = *(undefined4 *)(puVar30 + -0x22c);
            }
          }
          else {
            bVar37 = (adb_trace_mask._1_1_ & 4) != 0;
            if ((unaff_R15[1] & 0x40000000) == 0) {
              if ((int)adb_trace_severity._40_4_ < 2 && bVar37) {
                *(undefined **)(puVar30 + -600) = &UNK_003face3;
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
                if (cVar8 != '\0') {
                  *(undefined **)(puVar30 + -600) = &UNK_003facf0;
                  puVar20 = (undefined4 *)func_0x0099bce0();
                  *(undefined4 **)(puVar30 + -0x238) = puVar20;
                  *(undefined4 *)(puVar30 + -0x22c) = *puVar20;
                  puVar36 = (uint *)(puVar30 + -0x228);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad28;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (puVar36,&UNK_001706c4,0x17b,1,0);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad30;
                  uVar17 = _ZN7android4base10LogMessage6streamEv(puVar36);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad44;
                  uVar17 = func_0x0032eb30(uVar17,&UNK_00157972,0x16);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad4f;
                  uVar17 = func_0x0032e5a0(uVar17,puVar21);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad63;
                  func_0x0032eb30(uVar17,&UNK_00162c6d,1);
                  *(undefined **)(puVar30 + -600) = &UNK_003fad6b;
                  _ZN7android4base10LogMessageD2Ev(puVar36);
                  **(undefined4 **)(puVar30 + -0x238) = *(undefined4 *)(puVar30 + -0x22c);
                }
              }
              puVar32 = (undefined *)0x0;
              puVar28 = puVar30 + -600;
              *(undefined **)(puVar30 + -600) = &UNK_003fab12;
              unaff_R12 = puVar21;
              goto code_r0x003f8ce0;
            }
            if ((int)adb_trace_severity._40_4_ < 2 && bVar37) {
              *(undefined **)(puVar30 + -600) = &UNK_003fad8b;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
              if (cVar8 != '\0') {
                *(undefined **)(puVar30 + -600) = &UNK_003fad98;
                puVar20 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)(puVar30 + -0x238) = puVar20;
                *(undefined4 *)(puVar30 + -0x22c) = *puVar20;
                *(undefined **)(puVar30 + -600) = &UNK_003fadd0;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (puVar30 + -0x228,&UNK_001706c4,0x179,1,0);
                *(undefined **)(puVar30 + -600) = &UNK_003fadd8;
                uVar17 = _ZN7android4base10LogMessage6streamEv(puVar30 + -0x228);
                *(undefined **)(puVar30 + -600) = &UNK_003fadec;
                uVar17 = func_0x0032eb30(uVar17,&UNK_00187e90,0x1b);
                *(undefined **)(puVar30 + -600) = &UNK_003fadf7;
                uVar17 = func_0x0032e5a0(uVar17,puVar21);
                *(undefined **)(puVar30 + -600) = &UNK_003fae0b;
                func_0x0032eb30(uVar17,&UNK_00162c6d,1);
                goto code_r0x003fabf2;
              }
            }
          }
          uVar10 = unaff_R15[3];
          if ((puVar30[-0x220] & 1) != 0) {
            *(undefined **)(puVar30 + -600) = &UNK_003fac40;
            _ZdaPvSt11align_val_t(*(undefined8 *)(puVar30 + -0x210));
          }
          unaff_R15 = (uint *)((long)unaff_R15 + (ulong)uVar10 + 0x10);
        } while (unaff_R15 < puVar15);
      }
    }
    *(undefined **)(puVar30 + -600) = &UNK_003fa8bb;
    puVar36 = (uint *)func_0x0099bce0();
    uVar10 = *puVar36;
  } while (uVar10 == 4);
  goto code_r0x003fa8e4;
code_r0x003fa8d0:
  *(undefined **)(puVar30 + -600) = &UNK_003fa8d5;
  puVar36 = (uint *)func_0x0099bce0();
  uVar10 = *puVar36;
  if ((uVar10 != 4) && (uVar10 != 4)) {
code_r0x003fa8e4:
    if (uVar10 == 0xb) {
      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
        puVar12 = (uint *)0x1;
        *(undefined **)(puVar30 + -600) = &UNK_003faed4;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          uVar10 = *puVar36;
          unaff_R14 = (uint *)(ulong)uVar10;
          puVar15 = (uint *)(puVar30 + -0x220);
          *(undefined **)(puVar30 + -600) = &UNK_003faf09;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar15,&UNK_001706c4,0x160,1,0,0xffffffff);
          *(undefined **)(puVar30 + -600) = &UNK_003faf11;
          uVar17 = _ZN7android4base10LogMessage6streamEv(puVar15);
          *(undefined **)(puVar30 + -600) = &UNK_003faf25;
          func_0x0032eb30(uVar17,&UNK_001706e9,0x17);
          *(undefined **)(puVar30 + -600) = &UNK_003faf2d;
          puVar12 = puVar15;
          _ZN7android4base10LogMessageD2Ev();
          *puVar36 = uVar10;
        }
      }
      goto code_r0x003fae28;
    }
    *(undefined **)(puVar30 + -600) = &UNK_003fa8f9;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      uVar10 = *puVar36;
      puVar15 = (uint *)(ulong)uVar10;
      *(undefined **)(puVar30 + -600) = &UNK_003fa920;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar21,&UNK_001706c4,0x163,6,0);
      *(undefined **)(puVar30 + -600) = &UNK_003fa928;
      uVar17 = _ZN7android4base10LogMessage6streamEv(puVar21);
      *(undefined **)(puVar30 + -600) = &UNK_003fa93c;
      func_0x0032eb30(uVar17,&UNK_0018ae63,0x1c);
      *(undefined **)(puVar30 + -600) = &UNK_003fa944;
      _ZN7android4base10LogMessageD2Ev(puVar21);
      *puVar36 = uVar10;
    }
  }
  goto code_r0x003fa890;
}


