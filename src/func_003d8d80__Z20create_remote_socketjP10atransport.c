// Function: _Z20create_remote_socketjP10atransport
// Address: 003d8d80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


Elf64_Ehdr * _Z20create_remote_socketjP10atransport(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  char cVar5;
  Elf64_Ehdr *pEVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  Elf64_Ehdr *pEVar12;
  long extraout_RDX;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint *unaff_R12;
  Elf64_Ehdr *unaff_R13;
  uint *unaff_R15;
  long in_FS_OFFSET;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  Elf64_Ehdr *pEStack_240;
  undefined4 *puStack_238;
  undefined4 *puStack_230;
  Elf64_Ehdr *pEStack_228;
  undefined4 *puStack_220;
  undefined4 *puStack_218;
  undefined *puStack_210;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [56];
  Elf64_Ehdr *pEStack_1b0;
  uint *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined *apuStack_198 [2];
  uint uStack_184;
  undefined1 auStack_180 [56];
  Elf64_Ehdr *pEStack_148;
  uint *puStack_140;
  undefined4 *puStack_138;
  undefined *puStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  Elf64_Ehdr *pEStack_108;
  undefined4 *puStack_100;
  uint *puStack_f8;
  Elf64_Ehdr *pEStack_f0;
  uint *puStack_e8;
  undefined4 *puStack_e0;
  undefined *apuStack_d8 [2];
  undefined4 uStack_c4;
  undefined1 auStack_c0 [56];
  Elf64_Ehdr *pEStack_88;
  uint *puStack_80;
  uint *puStack_78;
  undefined *apuStack_70 [2];
  uint uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  
  uVar13 = (ulong)param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = param_2;
  if (param_1 == 0) {
    puVar9 = (uint *)0x0;
    apuStack_70[0] = &UNK_003d8db3;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
    if (cVar5 != '\0') {
      apuStack_70[0] = &UNK_003d8f26;
      unaff_R15 = (uint *)func_0x0099bce0();
      uVar1 = *unaff_R15;
      unaff_R13 = (Elf64_Ehdr *)(ulong)uVar1;
      unaff_R12 = (uint *)&bStack_58;
      apuStack_70[0] = &UNK_003d8f52;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_0015b0ed,0x232,6,0,0xffffffff);
      apuStack_70[0] = &UNK_003d8f5a;
      uVar14 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puVar9 = (uint *)&UNK_0017baa1;
      apuStack_70[0] = &UNK_003d8f6e;
      func_0x0032eb30(uVar14,&UNK_0017baa1,0x1c);
      apuStack_70[0] = &UNK_003d8f76;
      _ZN7android4base10LogMessageD2Ev(unaff_R12);
      *unaff_R15 = uVar1;
    }
  }
  puVar15 = (undefined4 *)0xa8;
  apuStack_70[0] = &UNK_003d8dc5;
  pEVar6 = (Elf64_Ehdr *)_Znwm();
  pEVar6[1].e_ident_magic_num = 0;
  pEVar6[1].e_ident_magic_str[0] = '\0';
  pEVar6[1].e_ident_magic_str[1] = '\0';
  pEVar6[1].e_ident_magic_str[2] = '\0';
  pEVar6[1].e_ident_class = 0;
  pEVar6[1].e_ident_data = 0;
  pEVar6[1].e_ident_version = 0;
  pEVar6[1].e_ident_osabi = 0;
  pEVar6[1].e_ident_abiversion = 0;
  pEVar6[1].e_ident_pad[0] = 0;
  pEVar6[1].e_ident_pad[1] = 0;
  pEVar6[1].e_ident_pad[2] = 0;
  pEVar6[1].e_ident_pad[3] = 0;
  pEVar6[1].e_ident_pad[4] = 0;
  pEVar6[1].e_ident_pad[5] = 0;
  pEVar6[1].e_ident_pad[6] = 0;
  pEVar6[2].e_ident_magic_num = 0;
  pEVar6[2].e_ident_magic_str[0] = '\0';
  pEVar6[2].e_ident_magic_str[1] = '\0';
  pEVar6[2].e_ident_magic_str[2] = '\0';
  pEVar6[2].e_ident_class = 0;
  pEVar6[2].e_ident_data = 0;
  pEVar6[2].e_ident_version = 0;
  pEVar6[2].e_ident_osabi = 0;
  pEVar6[2].e_ident_abiversion = 0;
  pEVar6[2].e_ident_pad[0] = 0;
  pEVar6[2].e_ident_pad[1] = 0;
  pEVar6[2].e_ident_pad[2] = 0;
  pEVar6[2].e_ident_pad[3] = 0;
  pEVar6[2].e_ident_pad[4] = 0;
  pEVar6[2].e_ident_pad[5] = 0;
  pEVar6[2].e_ident_pad[6] = 0;
  pEVar6->e_ident_magic_num = 0;
  pEVar6->e_ident_magic_str[0] = '\0';
  pEVar6->e_ident_magic_str[1] = '\0';
  pEVar6->e_ident_magic_str[2] = '\0';
  pEVar6->e_ident_class = 0;
  pEVar6->e_ident_data = 0;
  pEVar6->e_ident_version = 0;
  pEVar6->e_ident_osabi = 0;
  pEVar6->e_ident_abiversion = 0;
  pEVar6->e_ident_pad[0] = 0;
  pEVar6->e_ident_pad[1] = 0;
  pEVar6->e_ident_pad[2] = 0;
  pEVar6->e_ident_pad[3] = 0;
  pEVar6->e_ident_pad[4] = 0;
  pEVar6->e_ident_pad[5] = 0;
  pEVar6->e_ident_pad[6] = 0;
  pEVar6->e_type = 0;
  pEVar6->e_machine = 0;
  pEVar6->e_version = 0;
  pEVar6->e_entry = 0;
  pEVar6->e_phoff = 0;
  pEVar6->e_shoff = 0;
  pEVar6->e_flags = 0;
  pEVar6->e_ehsize = 0;
  pEVar6->e_phentsize = 0;
  pEVar6->e_phnum = 0;
  pEVar6->e_shentsize = 0;
  pEVar6->e_shnum = 0;
  pEVar6->e_shstrndx = 0;
  pEVar6[1].e_type = 0;
  pEVar6[1].e_machine = 0;
  pEVar6[1].e_version = 0;
  pEVar6[1].e_entry = 0;
  pEVar6[1].e_phoff = 0;
  pEVar6[1].e_shoff = 0;
  pEVar6[1].e_flags = 0;
  pEVar6[1].e_ehsize = 0;
  pEVar6[1].e_phentsize = 0;
  pEVar6[1].e_phnum = 0;
  pEVar6[1].e_shentsize = 0;
  pEVar6[1].e_shnum = 0;
  pEVar6[1].e_shstrndx = 0;
  pEVar6[1].e_ident_abiversion = 0xff;
  pEVar6[1].e_ident_pad[0] = 0xff;
  pEVar6[1].e_ident_pad[1] = 0xff;
  pEVar6[1].e_ident_pad[2] = 0xff;
  pEVar6[2].e_type = 0;
  pEVar6[2].e_machine = 0;
  pEVar6[2].e_version = 0;
  pEVar6[2].e_entry = 0;
  pEVar6[2].e_phoff = 0;
  pEVar6[2].e_ident_magic_num = 0;
  pEVar6->e_ident_magic_num = (char)param_1;
  pEVar6->e_ident_magic_str[0] = (char)(param_1 >> 8);
  pEVar6->e_ident_magic_str[1] = (char)(param_1 >> 0x10);
  pEVar6->e_ident_magic_str[2] = (char)(param_1 >> 0x18);
  pEVar6->e_entry = (qword)&UNK_003d8f90;
  pEVar6->e_phoff = (qword)&UNK_003d9170;
  pEVar6->e_shoff = (qword)&UNK_003d92a0;
  *(undefined **)&pEVar6->e_flags = &UNK_003d93e0;
  *(uint **)&pEVar6->e_phnum = param_2;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    puVar15 = (undefined4 *)0x1;
    puVar9 = (uint *)0x0;
    apuStack_70[0] = &UNK_003d8e8a;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    unaff_R13 = pEVar6;
    if (cVar5 != '\0') {
      apuStack_70[0] = &UNK_003d8e98;
      param_2 = (uint *)func_0x0099bce0();
      uStack_5c = *param_2;
      apuStack_70[0] = &UNK_003d8ec6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0015b0ed,0x23c,1,0,0xffffffff);
      apuStack_70[0] = &UNK_003d8ece;
      unaff_R15 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_40);
      unaff_R12 = (uint *)&bStack_58;
      apuStack_70[0] = &UNK_003d8ee8;
      _ZN7android4base12StringPrintfEPKcz(unaff_R12,&UNK_001695d7,param_1);
      apuStack_70[0] = &UNK_003d8ef3;
      puVar9 = unaff_R12;
      func_0x0032e5a0(unaff_R15);
      if ((bStack_58 & 1) != 0) {
        puVar9 = (uint *)(CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        apuStack_70[0] = &UNK_003d8f0a;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      puVar15 = auStack_40;
      apuStack_70[0] = &UNK_003d8f13;
      _ZN7android4base10LogMessageD2Ev();
      *param_2 = uStack_5c;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pEVar6;
  }
  apuStack_70[0] = &UNK_003d8f83;
  func_0x0099bd00();
  auStack_c0._32_8_ = *(qword *)(in_FS_OFFSET + 0x28);
  auStack_c0._40_8_ = uVar13;
  auStack_c0._48_8_ = unaff_R12;
  pEStack_88 = unaff_R13;
  puStack_80 = param_2;
  puStack_78 = unaff_R15;
  apuStack_70[0] = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (apuStack_70[0] = &stack0xfffffffffffffff8, (int)adb_trace_severity._4_4_ < 2)) {
    apuStack_d8[0] = &UNK_003d90c4;
    apuStack_70[0] = &stack0xfffffffffffffff8;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      apuStack_d8[0] = &UNK_003d90d1;
      puVar7 = (undefined4 *)func_0x0099bce0();
      uStack_c4 = *puVar7;
      apuStack_d8[0] = &UNK_003d90ff;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_c0 + 0x18,&UNK_0015b0ed,0x1f2,1,0,0xffffffff);
      apuStack_d8[0] = &UNK_003d9107;
      unaff_R12 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_c0 + 0x18);
      unaff_R13 = (Elf64_Ehdr *)auStack_c0;
      apuStack_d8[0] = &UNK_003d912c;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R13,&UNK_0016139a,*puVar15,puVar15[0x12],
                 *(undefined4 *)(*(long *)(puVar15 + 4) + 0x48));
      apuStack_d8[0] = &UNK_003d9137;
      func_0x0032e5a0(unaff_R12,unaff_R13);
      if ((auStack_c0[0] & 1) != 0) {
        apuStack_d8[0] = &UNK_003d914e;
        _ZdaPvSt11align_val_t
                  (auStack_c0._16_8_,CONCAT71(auStack_c0._1_7_,auStack_c0[0]) & 0xfffffffffffffffe);
      }
      apuStack_d8[0] = &UNK_003d9157;
      _ZN7android4base10LogMessageD2Ev(auStack_c0 + 0x18);
      *puVar7 = uStack_c4;
    }
  }
  apuStack_d8[0] = &UNK_003d8fd6;
  puVar7 = (undefined4 *)_Z11get_apacketv();
  *puVar7 = 0x45545257;
  puVar7[1] = **(undefined4 **)(puVar15 + 4);
  puVar7[2] = *puVar15;
  puVar8 = puVar7;
  if (*(ulong *)(puVar9 + 4) < 0x100001) {
    lVar4 = *(long *)(puVar7 + 6);
    *(undefined8 *)(puVar7 + 6) = 0;
    if (lVar4 != 0) {
      apuStack_d8[0] = &UNK_003d9021;
      _ZdaPvSt11align_val_t();
    }
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 10) = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar9[0] = 0;
    puVar9[1] = 0;
    lVar4 = *(long *)(puVar7 + 6);
    *(undefined8 *)(puVar7 + 6) = *(undefined8 *)puVar9;
    if (lVar4 != 0) {
      apuStack_d8[0] = &UNK_003d904d;
      _ZdaPvSt11align_val_t();
    }
    uVar14 = *(undefined8 *)(puVar9 + 2);
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(undefined8 *)(puVar7 + 8) = uVar14;
    uVar14 = *(undefined8 *)(puVar9 + 4);
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined8 *)(puVar7 + 10) = uVar14;
    uVar14 = *(undefined8 *)(puVar9 + 4);
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined8 *)(puVar7 + 0xc) = uVar14;
    puVar7[3] = puVar7[10];
    apuStack_d8[0] = &UNK_003d9091;
    _Z11send_packetP7apacketP10atransport(puVar7,*(undefined8 *)(puVar15 + 0xe));
    pEVar6 = (Elf64_Ehdr *)0x1;
  }
  else {
    apuStack_d8[0] = &UNK_003d9001;
    _Z11put_apacketP7apacket();
    pEVar6 = (Elf64_Ehdr *)0xffffffff;
  }
  if (*(qword *)(in_FS_OFFSET + 0x28) == auStack_c0._32_8_) {
    return pEVar6;
  }
  apuStack_d8[0] = &UNK_003d9167;
  func_0x0099bd00();
  pEStack_108 = *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  puStack_100 = puVar15;
  puStack_f8 = unaff_R12;
  pEStack_f0 = unaff_R13;
  puStack_e8 = puVar9;
  puStack_e0 = puVar7;
  apuStack_d8[0] = (undefined *)apuStack_70;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (apuStack_d8[0] = (undefined *)apuStack_70, (int)adb_trace_severity._4_4_ < 2)) {
    puStack_130 = &UNK_003d91fd;
    apuStack_d8[0] = (undefined *)apuStack_70;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      puStack_130 = &UNK_003d9206;
      puVar9 = (uint *)func_0x0099bce0();
      uVar1 = *puVar9;
      unaff_R13 = (Elf64_Ehdr *)(ulong)uVar1;
      puStack_130 = &UNK_003d9232;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_110,&UNK_0015b0ed,0x208,1,0,0xffffffff);
      puStack_130 = &UNK_003d923a;
      puVar7 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_110);
      unaff_R12 = (uint *)&bStack_128;
      puStack_130 = &UNK_003d925f;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R12,&UNK_0017a173,*puVar8,puVar8[0x12],
                 *(undefined4 *)(*(long *)(puVar8 + 4) + 0x48));
      puStack_130 = &UNK_003d926a;
      func_0x0032e5a0(puVar7,unaff_R12);
      if ((bStack_128 & 1) != 0) {
        puStack_130 = &UNK_003d9281;
        _ZdaPvSt11align_val_t(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
      }
      puStack_130 = &UNK_003d928a;
      _ZN7android4base10LogMessageD2Ev(auStack_110);
      *puVar9 = uVar1;
    }
  }
  puStack_130 = &UNK_003d91af;
  puVar15 = (undefined4 *)_Z11get_apacketv();
  *puVar15 = 0x59414b4f;
  puVar15[1] = **(undefined4 **)(puVar8 + 4);
  puVar15[2] = *puVar8;
  puStack_130 = &UNK_003d91cf;
  _Z11send_packetP7apacketP10atransport(puVar15,*(undefined8 *)(puVar8 + 0xe));
  if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) == pEStack_108) {
    return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  }
  puStack_130 = &UNK_003d9297;
  func_0x0099bd00();
  auStack_180._32_8_ = *(long *)(in_FS_OFFSET + 0x28);
  auStack_180._40_8_ = puVar8;
  auStack_180._48_8_ = unaff_R12;
  pEStack_148 = unaff_R13;
  puStack_140 = puVar9;
  puStack_138 = puVar7;
  puStack_130 = (undefined *)apuStack_d8;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (puStack_130 = (undefined *)apuStack_d8, (int)adb_trace_severity._4_4_ < 2)) {
    apuStack_198[0] = &UNK_003d9332;
    puStack_130 = (undefined *)apuStack_d8;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      apuStack_198[0] = &UNK_003d933b;
      puVar9 = (uint *)func_0x0099bce0();
      uStack_184 = *puVar9;
      puVar7 = (undefined4 *)0xffffffff;
      apuStack_198[0] = &UNK_003d936f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_180 + 0x18,&UNK_0015b0ed,0x212,1,0,0xffffffff);
      apuStack_198[0] = &UNK_003d9377;
      unaff_R12 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_180 + 0x18);
      if (*(long *)(puVar15 + 4) != 0) {
        puVar7 = (undefined4 *)(ulong)*(uint *)(*(long *)(puVar15 + 4) + 0x48);
      }
      unaff_R13 = (Elf64_Ehdr *)auStack_180;
      apuStack_198[0] = &UNK_003d93a4;
      _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_00172301,*puVar15,puVar15[0x12],puVar7);
      apuStack_198[0] = &UNK_003d93af;
      func_0x0032e5a0(unaff_R12,unaff_R13);
      if ((auStack_180[0] & 1) != 0) {
        apuStack_198[0] = &UNK_003d93c6;
        _ZdaPvSt11align_val_t
                  (auStack_180._16_8_,
                   CONCAT71(auStack_180._1_7_,auStack_180[0]) & 0xfffffffffffffffe);
      }
      apuStack_198[0] = &UNK_003d93cf;
      _ZN7android4base10LogMessageD2Ev(auStack_180 + 0x18);
      *puVar9 = uStack_184;
    }
  }
  apuStack_198[0] = &UNK_003d92df;
  puVar8 = (undefined4 *)_Z11get_apacketv();
  *puVar8 = 0x45534c43;
  if (*(undefined4 **)(puVar15 + 4) != (undefined4 *)0x0) {
    puVar8[1] = **(undefined4 **)(puVar15 + 4);
  }
  puVar8[2] = *puVar15;
  apuStack_198[0] = &UNK_003d9304;
  _Z11send_packetP7apacketP10atransport(puVar8,*(undefined8 *)(puVar15 + 0xe));
  if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != (Elf64_Ehdr *)auStack_180._32_8_) {
    apuStack_198[0] = &UNK_003d93df;
    func_0x0099bd00();
    auStack_1e8._32_8_ = *(long *)(in_FS_OFFSET + 0x28);
    auStack_1e8._40_8_ = puVar15;
    auStack_1e8._48_8_ = unaff_R12;
    pEStack_1b0 = unaff_R13;
    puStack_1a8 = puVar9;
    puStack_1a0 = puVar7;
    apuStack_198[0] = (undefined *)&puStack_130;
    if (*(long *)(puVar8 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar8 + 4) + 0x10) = 0;
      apuStack_198[0] = (undefined *)&puStack_130;
      if ((((byte)adb_trace_mask & 2) != 0) &&
         (apuStack_198[0] = (undefined *)&puStack_130, (int)adb_trace_severity._4_4_ < 2)) {
        puStack_210 = &UNK_003d9668;
        apuStack_198[0] = (undefined *)&puStack_130;
        cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar5 != '\0') {
          puStack_210 = &UNK_003d9675;
          puVar9 = (uint *)func_0x0099bce0();
          uVar1 = *puVar9;
          unaff_R13 = (Elf64_Ehdr *)(ulong)uVar1;
          puStack_210 = &UNK_003d96a1;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_1e8 + 0x18,&UNK_0015b0ed,0x221,1,0,0xffffffff);
          puStack_210 = &UNK_003d96a9;
          puVar7 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_1e8 + 0x18);
          puStack_210 = &UNK_003d96cd;
          _ZN7android4base12StringPrintfEPKcz
                    (auStack_1e8,&UNK_00183486,*puVar8,**(undefined4 **)(puVar8 + 4),
                     (*(undefined4 **)(puVar8 + 4))[0x12]);
          puStack_210 = &UNK_003d96d8;
          func_0x0032e5a0(puVar7,auStack_1e8);
          if ((auStack_1e8[0] & 1) != 0) {
            puStack_210 = &UNK_003d96ef;
            _ZdaPvSt11align_val_t
                      (auStack_1e8._16_8_,
                       CONCAT71(auStack_1e8._1_7_,auStack_1e8[0]) & 0xfffffffffffffffe);
          }
          puStack_210 = &UNK_003d96f8;
          _ZN7android4base10LogMessageD2Ev(auStack_1e8 + 0x18);
          *puVar9 = uVar1;
        }
      }
      puStack_210 = &UNK_003d9436;
      (**(code **)(*(long *)(puVar8 + 4) + 0x30))();
    }
    puVar15 = &adb_trace_mask;
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      puStack_210 = &UNK_003d9510;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar5 != '\0') {
        puStack_210 = &UNK_003d951d;
        puStack_200 = (undefined4 *)func_0x0099bce0();
        uStack_1ec = *puStack_200;
        puVar7 = (undefined4 *)0xffffffff;
        puStack_210 = &UNK_003d9552;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1e8 + 0x18,&UNK_0015b0ed,0x225,1,0,0xffffffff);
        puStack_210 = &UNK_003d955a;
        uStack_1f8 = _ZN7android4base10LogMessage6streamEv(auStack_1e8 + 0x18);
        if (*(long *)(puVar8 + 4) != 0) {
          puVar7 = (undefined4 *)(ulong)*(uint *)(*(long *)(puVar8 + 4) + 0x48);
        }
        unaff_R13 = (Elf64_Ehdr *)auStack_1e8;
        puStack_210 = &UNK_003d9588;
        _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_00157881,*puVar8,puVar8[0x12],puVar7);
        puStack_210 = &UNK_003d9594;
        func_0x0032e5a0(uStack_1f8,unaff_R13);
        if ((auStack_1e8[0] & 1) != 0) {
          puStack_210 = &UNK_003d95ab;
          _ZdaPvSt11align_val_t
                    (auStack_1e8._16_8_,
                     CONCAT71(auStack_1e8._1_7_,auStack_1e8[0]) & 0xfffffffffffffffe);
        }
        puStack_210 = &UNK_003d95b4;
        _ZN7android4base10LogMessageD2Ev(auStack_1e8 + 0x18);
        *puStack_200 = uStack_1ec;
      }
    }
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      puStack_210 = &UNK_003d95ce;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar5 != '\0') {
        puStack_210 = &UNK_003d95db;
        puVar9 = (uint *)func_0x0099bce0();
        uVar1 = *puVar9;
        unaff_R13 = (Elf64_Ehdr *)(ulong)uVar1;
        puStack_210 = &UNK_003d9607;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1e8 + 0x18,&UNK_0015b0ed,0x228,1,0,0xffffffff);
        puStack_210 = &UNK_003d960f;
        puVar7 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_1e8 + 0x18);
        puVar15 = (undefined4 *)auStack_1e8;
        puStack_210 = &UNK_003d9629;
        _ZN7android4base12StringPrintfEPKcz(puVar15,&UNK_001789d8,*puVar8);
        puStack_210 = &UNK_003d9634;
        func_0x0032e5a0(puVar7,puVar15);
        if ((auStack_1e8[0] & 1) != 0) {
          puStack_210 = &UNK_003d964b;
          _ZdaPvSt11align_val_t
                    (auStack_1e8._16_8_,
                     CONCAT71(auStack_1e8._1_7_,auStack_1e8[0]) & 0xfffffffffffffffe);
        }
        puStack_210 = &UNK_003d9654;
        _ZN7android4base10LogMessageD2Ev(auStack_1e8 + 0x18);
        *puVar9 = uVar1;
      }
    }
    if ((*(byte *)(puVar8 + 0x24) & 1) != 0) {
      puStack_210 = &UNK_003d9488;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)(puVar8 + 0x28),*(ulong *)(puVar8 + 0x24) & 0xfffffffffffffffe);
    }
    puVar3 = *(undefined4 **)(puVar8 + 0x1a);
    if (puVar3 != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(puVar8 + 0x1c);
      puVar16 = puVar3;
      if (puVar3 != puVar7) {
        do {
          lVar4 = *(long *)(puVar7 + -8);
          *(undefined8 *)(puVar7 + -8) = 0;
          if (lVar4 != 0) {
            puStack_210 = &UNK_003d94bf;
            _ZdaPvSt11align_val_t();
          }
          puVar7 = puVar7 + -8;
        } while (puVar7 != puVar3);
        puVar16 = *(undefined4 **)(puVar8 + 0x1a);
      }
      *(undefined4 **)(puVar8 + 0x1c) = puVar3;
      puStack_210 = &UNK_003d94d5;
      _ZdaPvSt11align_val_t(puVar16,*(long *)(puVar8 + 0x1e) - (long)puVar16);
    }
    uVar14 = 0xa8;
    puStack_210 = &UNK_003d94e2;
    puVar16 = puVar8;
    _ZdaPvSt11align_val_t(puVar8,0xa8);
    if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != (Elf64_Ehdr *)auStack_1e8._32_8_) {
      puStack_210 = &UNK_003d9705;
      func_0x0099bd00();
      pEStack_240 = *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
      puStack_238 = puVar8;
      puStack_230 = puVar15;
      pEStack_228 = unaff_R13;
      puStack_220 = puVar3;
      puStack_218 = puVar7;
      puStack_210 = (undefined *)apuStack_198;
      _ZN10atransport19UpdateReverseConfigENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
                (*(undefined8 *)(puVar16 + 0xe));
      if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
         (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
        puVar15 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar15;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_248,&UNK_0015b0ed,0x247,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_248);
        _ZN7android4base12StringPrintfEPKcz(&bStack_260,&UNK_001643ac,*puVar16,puVar16[0x12]);
        func_0x0032e5a0(uVar11,&bStack_260);
        if ((bStack_260 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_248);
        *puVar15 = uVar2;
      }
      puVar15 = (undefined4 *)_Z11get_apacketv();
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar7;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&bStack_260,&UNK_0015b0ed,0x24b,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_260);
        uVar11 = func_0x0032eb30(uVar11,&UNK_00187ce2,3);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar11,*puVar16);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0017711f,10);
        uVar11 = func_0x0032eb30(uVar11,uVar14,extraout_RDX);
        func_0x0032eb30(uVar11,&UNK_001692c7,1);
        _ZN7android4base10LogMessageD2Ev(&bStack_260);
        *puVar7 = uVar2;
      }
      *puVar15 = 0x4e45504f;
      puVar15[1] = *puVar16;
      if (*(char *)(*(long *)(puVar16 + 0xe) + 0x1c8) == '\x01') {
        puVar15[2] = 0x2000000;
        if (*(char *)(puVar16 + 0x22) == '\0') {
          *(undefined1 *)(puVar16 + 0x22) = 1;
        }
        *(undefined8 *)(puVar16 + 0x20) = 0;
      }
      _ZN5Block6resizeEm(puVar15 + 6,extraout_RDX + 1);
      func_0x0099bda0(*(undefined8 *)(puVar15 + 6),uVar14,extraout_RDX);
      *(undefined1 *)(*(long *)(puVar15 + 6) + extraout_RDX) = 0;
      puVar15[3] = puVar15[10];
      if (*(long *)(puVar16 + 0xe) == 0) {
        uVar13 = 0x100000;
      }
      else {
        uVar10 = _ZNK10atransport15get_max_payloadEv();
        uVar13 = 0x100000;
        if (uVar10 < 0x100000) {
          uVar13 = uVar10;
        }
      }
      if (((*(long *)(puVar16 + 4) != 0) && (*(long *)(*(long *)(puVar16 + 4) + 0x38) != 0)) &&
         (uVar10 = _ZNK10atransport15get_max_payloadEv(), uVar10 < uVar13)) {
        uVar13 = uVar10;
      }
      uVar1 = puVar15[3];
      if (uVar13 < uVar1) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_260,&UNK_0015b0ed,0x25b,6,0,0xffffffff);
          uVar14 = _ZN7android4base10LogMessage6streamEv(&bStack_260);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00165d45,0xe);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00178931,0x12);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00184995,2);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
          uVar14 = func_0x0032eb30(uVar14,&UNK_001865a2,0x14);
          uVar14 = func_0x0032eb30(uVar14,&UNK_00187ce6,0x15);
          uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar14,(ulong)uVar1);
          uVar14 = func_0x0032eb30(uVar14,&UNK_0017d60d,0x17);
          uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,uVar13);
          func_0x0032eb30(uVar14,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(&bStack_260);
        } while( true );
      }
      _Z11send_packetP7apacketP10atransport(puVar15,*(undefined8 *)(puVar16 + 0xe));
      if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != pEStack_240) {
        func_0x0099bd00();
        if (*(long *)(puVar15 + 0xe) == 0) {
          pEVar6 = &Elf64_Ehdr_00100000;
        }
        else {
          pEVar12 = (Elf64_Ehdr *)_ZNK10atransport15get_max_payloadEv();
          pEVar6 = &Elf64_Ehdr_00100000;
          if (pEVar12 < &Elf64_Ehdr_00100000) {
            pEVar6 = pEVar12;
          }
        }
        pEVar12 = pEVar6;
        if (((*(long *)(puVar15 + 4) != 0) && (*(long *)(*(long *)(puVar15 + 4) + 0x38) != 0)) &&
           (pEVar12 = (Elf64_Ehdr *)_ZNK10atransport15get_max_payloadEv(), pEVar6 <= pEVar12)) {
          pEVar12 = pEVar6;
        }
        return pEVar12;
      }
      return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
    }
    return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  }
  return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
}


