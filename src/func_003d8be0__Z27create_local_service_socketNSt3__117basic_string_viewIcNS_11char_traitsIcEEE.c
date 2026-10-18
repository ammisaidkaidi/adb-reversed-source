// Function: _Z27create_local_service_socketNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEP10atransport
// Address: 003d8be0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


Elf64_Ehdr *
_Z27create_local_service_socketNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEP10atransport
          (uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  char cVar6;
  uint *puVar7;
  Elf64_Ehdr *pEVar8;
  undefined4 *puVar9;
  Elf64_Ehdr *pEVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long extraout_RDX;
  Elf64_Ehdr *pEVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  Elf64_Ehdr *unaff_R13;
  long in_FS_OFFSET;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [8];
  Elf64_Ehdr *pEStack_298;
  undefined4 *puStack_290;
  undefined4 *puStack_288;
  Elf64_Ehdr *pEStack_280;
  undefined4 *puStack_278;
  undefined4 *puStack_270;
  undefined *puStack_268;
  undefined4 *puStack_258;
  undefined8 uStack_250;
  undefined4 uStack_244;
  undefined1 auStack_240 [56];
  Elf64_Ehdr *pEStack_208;
  uint *puStack_200;
  undefined4 *puStack_1f8;
  undefined *apuStack_1f0 [2];
  uint uStack_1dc;
  undefined1 auStack_1d8 [56];
  Elf64_Ehdr *pEStack_1a0;
  uint *puStack_198;
  undefined4 *puStack_190;
  undefined *puStack_188;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  Elf64_Ehdr *pEStack_160;
  undefined4 *puStack_158;
  uint *puStack_150;
  Elf64_Ehdr *pEStack_148;
  uint *puStack_140;
  undefined4 *puStack_138;
  undefined *apuStack_130 [2];
  undefined4 uStack_11c;
  undefined1 auStack_118 [56];
  Elf64_Ehdr *pEStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined *apuStack_c8 [2];
  uint uStack_b4;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long lStack_90;
  Elf64_Ehdr *pEStack_88;
  uint *puStack_80;
  Elf64_Ehdr *pEStack_78;
  Elf64_Ehdr *pEStack_70;
  uint *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_3c = 0;
  pEVar10 = (Elf64_Ehdr *)&stack0xffffffffffffffc4;
  puStack_60 = &UNK_003d8c20;
  puVar14 = param_1;
  _Z13service_to_fdNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEP10atransport
            (pEVar10,param_1,param_2,param_3);
  uVar2 = uStack_3c;
  if ((int)uStack_3c < 0) {
    pEVar8 = (Elf64_Ehdr *)0x0;
    puStack_60 = &UNK_003d8c8a;
    puVar7 = (uint *)func_0x0099bce0();
    uVar1 = uVar2;
  }
  else {
    uStack_3c = 0xffffffff;
    puStack_60 = &UNK_003d8c3b;
    uStack_58 = param_2;
    puStack_50 = param_1;
    puVar7 = (uint *)func_0x0099bce0();
    uStack_40 = uVar2;
    puStack_60 = &UNK_003d8c4a;
    pEVar8 = (Elf64_Ehdr *)
             _Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
                       (&uStack_40);
    uVar1 = *puVar7;
    unaff_R13 = (Elf64_Ehdr *)(ulong)uVar1;
    pEVar10 = (Elf64_Ehdr *)(ulong)uStack_40;
    if (uStack_40 != 0xffffffff) {
      puStack_60 = &UNK_003d8c5d;
      func_0x0099bd10();
    }
    *puVar7 = uVar1;
    pEVar8->e_phnum = (short)param_3;
    pEVar8->e_shentsize = (short)((ulong)param_3 >> 0x10);
    pEVar8->e_shnum = (short)((ulong)param_3 >> 0x20);
    pEVar8->e_shstrndx = (short)((ulong)param_3 >> 0x30);
    uVar1 = uStack_3c;
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      pEVar10 = (Elf64_Ehdr *)0x1;
      puVar14 = (uint *)0x0;
      puStack_60 = &UNK_003d8cd0;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar1 = uStack_3c;
      if (cVar6 != '\0') {
        uVar1 = *puVar7;
        unaff_R13 = (Elf64_Ehdr *)&stack0xffffffffffffffb8;
        puStack_60 = &UNK_003d8cfd;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R13,&UNK_0015b0ed,0x1e3,1,0,0xffffffff);
        puStack_60 = &UNK_003d8d05;
        uVar19 = _ZN7android4base10LogMessage6streamEv(unaff_R13);
        puStack_60 = &UNK_003d8d19;
        uVar19 = func_0x0032eb30(uVar19,&UNK_00187ce2,3);
        uVar3._0_1_ = pEVar8->e_ident_magic_num;
        uVar3._1_1_ = pEVar8->e_ident_magic_str[0];
        uVar3._2_1_ = pEVar8->e_ident_magic_str[1];
        uVar3._3_1_ = pEVar8->e_ident_magic_str[2];
        puStack_60 = &UNK_003d8d24;
        uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19,uVar3);
        puStack_60 = &UNK_003d8d38;
        uVar19 = func_0x0032eb30(uVar19,&UNK_0018346e,0xd);
        puStack_60 = &UNK_003d8d48;
        uVar19 = func_0x0032eb30(uVar19,puStack_50,uStack_58);
        puStack_60 = &UNK_003d8d5c;
        uVar19 = func_0x0032eb30(uVar19,&UNK_0018659b,6);
        puVar14 = (uint *)(ulong)uVar2;
        puStack_60 = &UNK_003d8d66;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar19);
        puStack_60 = &UNK_003d8d6e;
        pEVar10 = unaff_R13;
        _ZN7android4base10LogMessageD2Ev();
        *puVar7 = uVar1;
        uVar1 = uStack_3c;
      }
    }
  }
  pEVar17 = (Elf64_Ehdr *)(ulong)uVar1;
  uVar2 = *puVar7;
  puVar13 = (uint *)(ulong)uVar2;
  if (uVar1 != 0xffffffff) {
    puStack_60 = &UNK_003d8c9c;
    pEVar10 = pEVar17;
    func_0x0099bd10();
  }
  *puVar7 = uVar2;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pEVar8;
  }
  puStack_60 = &UNK_003d8d7b;
  func_0x0099bd00();
  iVar20 = (int)pEVar10;
  uVar18 = (ulong)pEVar10 & 0xffffffff;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = puVar14;
  pEStack_88 = pEVar17;
  puStack_80 = puVar13;
  pEStack_78 = unaff_R13;
  pEStack_70 = pEVar8;
  puStack_68 = puVar7;
  puStack_60 = &stack0xfffffffffffffff8;
  if (iVar20 == 0) {
    puVar12 = (uint *)0x0;
    apuStack_c8[0] = &UNK_003d8db3;
    puStack_60 = &stack0xfffffffffffffff8;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6);
    if (cVar6 != '\0') {
      apuStack_c8[0] = &UNK_003d8f26;
      puVar7 = (uint *)func_0x0099bce0();
      uVar2 = *puVar7;
      unaff_R13 = (Elf64_Ehdr *)(ulong)uVar2;
      puVar13 = (uint *)&bStack_b0;
      apuStack_c8[0] = &UNK_003d8f52;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar13,&UNK_0015b0ed,0x232,6,0,0xffffffff);
      apuStack_c8[0] = &UNK_003d8f5a;
      uVar19 = _ZN7android4base10LogMessage6streamEv(puVar13);
      puVar12 = (uint *)&UNK_0017baa1;
      apuStack_c8[0] = &UNK_003d8f6e;
      func_0x0032eb30(uVar19,&UNK_0017baa1,0x1c);
      apuStack_c8[0] = &UNK_003d8f76;
      _ZN7android4base10LogMessageD2Ev(puVar13);
      *puVar7 = uVar2;
    }
  }
  puVar21 = (undefined4 *)0xa8;
  apuStack_c8[0] = &UNK_003d8dc5;
  pEVar8 = (Elf64_Ehdr *)_Znwm();
  pEVar8[1].e_ident_magic_num = 0;
  pEVar8[1].e_ident_magic_str[0] = '\0';
  pEVar8[1].e_ident_magic_str[1] = '\0';
  pEVar8[1].e_ident_magic_str[2] = '\0';
  pEVar8[1].e_ident_class = 0;
  pEVar8[1].e_ident_data = 0;
  pEVar8[1].e_ident_version = 0;
  pEVar8[1].e_ident_osabi = 0;
  pEVar8[1].e_ident_abiversion = 0;
  pEVar8[1].e_ident_pad[0] = 0;
  pEVar8[1].e_ident_pad[1] = 0;
  pEVar8[1].e_ident_pad[2] = 0;
  pEVar8[1].e_ident_pad[3] = 0;
  pEVar8[1].e_ident_pad[4] = 0;
  pEVar8[1].e_ident_pad[5] = 0;
  pEVar8[1].e_ident_pad[6] = 0;
  pEVar8[2].e_ident_magic_num = 0;
  pEVar8[2].e_ident_magic_str[0] = '\0';
  pEVar8[2].e_ident_magic_str[1] = '\0';
  pEVar8[2].e_ident_magic_str[2] = '\0';
  pEVar8[2].e_ident_class = 0;
  pEVar8[2].e_ident_data = 0;
  pEVar8[2].e_ident_version = 0;
  pEVar8[2].e_ident_osabi = 0;
  pEVar8[2].e_ident_abiversion = 0;
  pEVar8[2].e_ident_pad[0] = 0;
  pEVar8[2].e_ident_pad[1] = 0;
  pEVar8[2].e_ident_pad[2] = 0;
  pEVar8[2].e_ident_pad[3] = 0;
  pEVar8[2].e_ident_pad[4] = 0;
  pEVar8[2].e_ident_pad[5] = 0;
  pEVar8[2].e_ident_pad[6] = 0;
  pEVar8->e_ident_magic_num = 0;
  pEVar8->e_ident_magic_str[0] = '\0';
  pEVar8->e_ident_magic_str[1] = '\0';
  pEVar8->e_ident_magic_str[2] = '\0';
  pEVar8->e_ident_class = 0;
  pEVar8->e_ident_data = 0;
  pEVar8->e_ident_version = 0;
  pEVar8->e_ident_osabi = 0;
  pEVar8->e_ident_abiversion = 0;
  pEVar8->e_ident_pad[0] = 0;
  pEVar8->e_ident_pad[1] = 0;
  pEVar8->e_ident_pad[2] = 0;
  pEVar8->e_ident_pad[3] = 0;
  pEVar8->e_ident_pad[4] = 0;
  pEVar8->e_ident_pad[5] = 0;
  pEVar8->e_ident_pad[6] = 0;
  pEVar8->e_type = 0;
  pEVar8->e_machine = 0;
  pEVar8->e_version = 0;
  pEVar8->e_entry = 0;
  pEVar8->e_phoff = 0;
  pEVar8->e_shoff = 0;
  pEVar8->e_flags = 0;
  pEVar8->e_ehsize = 0;
  pEVar8->e_phentsize = 0;
  pEVar8->e_phnum = 0;
  pEVar8->e_shentsize = 0;
  pEVar8->e_shnum = 0;
  pEVar8->e_shstrndx = 0;
  pEVar8[1].e_type = 0;
  pEVar8[1].e_machine = 0;
  pEVar8[1].e_version = 0;
  pEVar8[1].e_entry = 0;
  pEVar8[1].e_phoff = 0;
  pEVar8[1].e_shoff = 0;
  pEVar8[1].e_flags = 0;
  pEVar8[1].e_ehsize = 0;
  pEVar8[1].e_phentsize = 0;
  pEVar8[1].e_phnum = 0;
  pEVar8[1].e_shentsize = 0;
  pEVar8[1].e_shnum = 0;
  pEVar8[1].e_shstrndx = 0;
  pEVar8[1].e_ident_abiversion = 0xff;
  pEVar8[1].e_ident_pad[0] = 0xff;
  pEVar8[1].e_ident_pad[1] = 0xff;
  pEVar8[1].e_ident_pad[2] = 0xff;
  pEVar8[2].e_type = 0;
  pEVar8[2].e_machine = 0;
  pEVar8[2].e_version = 0;
  pEVar8[2].e_entry = 0;
  pEVar8[2].e_phoff = 0;
  pEVar8[2].e_ident_magic_num = 0;
  pEVar8->e_ident_magic_num = (char)iVar20;
  pEVar8->e_ident_magic_str[0] = (char)((uint)iVar20 >> 8);
  pEVar8->e_ident_magic_str[1] = (char)((uint)iVar20 >> 0x10);
  pEVar8->e_ident_magic_str[2] = (char)((uint)iVar20 >> 0x18);
  pEVar8->e_entry = (qword)&UNK_003d8f90;
  pEVar8->e_phoff = (qword)&UNK_003d9170;
  pEVar8->e_shoff = (qword)&UNK_003d92a0;
  *(undefined **)&pEVar8->e_flags = &UNK_003d93e0;
  *(uint **)&pEVar8->e_phnum = puVar14;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    puVar21 = (undefined4 *)0x1;
    puVar12 = (uint *)0x0;
    apuStack_c8[0] = &UNK_003d8e8a;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    unaff_R13 = pEVar8;
    if (cVar6 != '\0') {
      apuStack_c8[0] = &UNK_003d8e98;
      puVar14 = (uint *)func_0x0099bce0();
      uStack_b4 = *puVar14;
      apuStack_c8[0] = &UNK_003d8ec6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_0015b0ed,0x23c,1,0,0xffffffff);
      apuStack_c8[0] = &UNK_003d8ece;
      puVar7 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_98);
      puVar13 = (uint *)&bStack_b0;
      apuStack_c8[0] = &UNK_003d8ee8;
      _ZN7android4base12StringPrintfEPKcz(puVar13,&UNK_001695d7,(ulong)pEVar10 & 0xffffffff);
      apuStack_c8[0] = &UNK_003d8ef3;
      puVar12 = puVar13;
      func_0x0032e5a0(puVar7);
      if ((bStack_b0 & 1) != 0) {
        puVar12 = (uint *)(CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
        apuStack_c8[0] = &UNK_003d8f0a;
        _ZdaPvSt11align_val_t(uStack_a0);
      }
      puVar21 = auStack_98;
      apuStack_c8[0] = &UNK_003d8f13;
      _ZN7android4base10LogMessageD2Ev();
      *puVar14 = uStack_b4;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return pEVar8;
  }
  apuStack_c8[0] = &UNK_003d8f83;
  func_0x0099bd00();
  auStack_118._32_8_ = *(qword *)(in_FS_OFFSET + 0x28);
  auStack_118._40_8_ = uVar18;
  auStack_118._48_8_ = puVar13;
  pEStack_e0 = unaff_R13;
  puStack_d8 = puVar14;
  puStack_d0 = puVar7;
  apuStack_c8[0] = (undefined *)&puStack_60;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (apuStack_c8[0] = (undefined *)&puStack_60, (int)adb_trace_severity._4_4_ < 2)) {
    apuStack_130[0] = &UNK_003d90c4;
    apuStack_c8[0] = (undefined *)&puStack_60;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar6 != '\0') {
      apuStack_130[0] = &UNK_003d90d1;
      puVar9 = (undefined4 *)func_0x0099bce0();
      uStack_11c = *puVar9;
      apuStack_130[0] = &UNK_003d90ff;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_118 + 0x18,&UNK_0015b0ed,0x1f2,1,0,0xffffffff);
      apuStack_130[0] = &UNK_003d9107;
      puVar13 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_118 + 0x18);
      unaff_R13 = (Elf64_Ehdr *)auStack_118;
      apuStack_130[0] = &UNK_003d912c;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R13,&UNK_0016139a,*puVar21,puVar21[0x12],
                 *(undefined4 *)(*(long *)(puVar21 + 4) + 0x48));
      apuStack_130[0] = &UNK_003d9137;
      func_0x0032e5a0(puVar13,unaff_R13);
      if ((auStack_118[0] & 1) != 0) {
        apuStack_130[0] = &UNK_003d914e;
        _ZdaPvSt11align_val_t
                  (auStack_118._16_8_,
                   CONCAT71(auStack_118._1_7_,auStack_118[0]) & 0xfffffffffffffffe);
      }
      apuStack_130[0] = &UNK_003d9157;
      _ZN7android4base10LogMessageD2Ev(auStack_118 + 0x18);
      *puVar9 = uStack_11c;
    }
  }
  apuStack_130[0] = &UNK_003d8fd6;
  puVar9 = (undefined4 *)_Z11get_apacketv();
  *puVar9 = 0x45545257;
  puVar9[1] = **(undefined4 **)(puVar21 + 4);
  puVar9[2] = *puVar21;
  puVar11 = puVar9;
  if (*(ulong *)(puVar12 + 4) < 0x100001) {
    lVar5 = *(long *)(puVar9 + 6);
    *(undefined8 *)(puVar9 + 6) = 0;
    if (lVar5 != 0) {
      apuStack_130[0] = &UNK_003d9021;
      _ZdaPvSt11align_val_t();
    }
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 10) = 0;
    *(undefined8 *)(puVar9 + 0xc) = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    lVar5 = *(long *)(puVar9 + 6);
    *(undefined8 *)(puVar9 + 6) = *(undefined8 *)puVar12;
    if (lVar5 != 0) {
      apuStack_130[0] = &UNK_003d904d;
      _ZdaPvSt11align_val_t();
    }
    uVar19 = *(undefined8 *)(puVar12 + 2);
    puVar12[2] = 0;
    puVar12[3] = 0;
    *(undefined8 *)(puVar9 + 8) = uVar19;
    uVar19 = *(undefined8 *)(puVar12 + 4);
    puVar12[4] = 0;
    puVar12[5] = 0;
    *(undefined8 *)(puVar9 + 10) = uVar19;
    uVar19 = *(undefined8 *)(puVar12 + 4);
    puVar12[4] = 0;
    puVar12[5] = 0;
    *(undefined8 *)(puVar9 + 0xc) = uVar19;
    puVar9[3] = puVar9[10];
    apuStack_130[0] = &UNK_003d9091;
    _Z11send_packetP7apacketP10atransport(puVar9,*(undefined8 *)(puVar21 + 0xe));
    pEVar10 = (Elf64_Ehdr *)0x1;
  }
  else {
    apuStack_130[0] = &UNK_003d9001;
    _Z11put_apacketP7apacket();
    pEVar10 = (Elf64_Ehdr *)0xffffffff;
  }
  if (*(qword *)(in_FS_OFFSET + 0x28) == auStack_118._32_8_) {
    return pEVar10;
  }
  apuStack_130[0] = &UNK_003d9167;
  func_0x0099bd00();
  pEStack_160 = *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  puStack_158 = puVar21;
  puStack_150 = puVar13;
  pEStack_148 = unaff_R13;
  puStack_140 = puVar12;
  puStack_138 = puVar9;
  apuStack_130[0] = (undefined *)apuStack_c8;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (apuStack_130[0] = (undefined *)apuStack_c8, (int)adb_trace_severity._4_4_ < 2)) {
    puStack_188 = &UNK_003d91fd;
    apuStack_130[0] = (undefined *)apuStack_c8;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar6 != '\0') {
      puStack_188 = &UNK_003d9206;
      puVar12 = (uint *)func_0x0099bce0();
      uVar2 = *puVar12;
      unaff_R13 = (Elf64_Ehdr *)(ulong)uVar2;
      puStack_188 = &UNK_003d9232;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_168,&UNK_0015b0ed,0x208,1,0,0xffffffff);
      puStack_188 = &UNK_003d923a;
      puVar9 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_168);
      puVar13 = (uint *)&bStack_180;
      puStack_188 = &UNK_003d925f;
      _ZN7android4base12StringPrintfEPKcz
                (puVar13,&UNK_0017a173,*puVar11,puVar11[0x12],
                 *(undefined4 *)(*(long *)(puVar11 + 4) + 0x48));
      puStack_188 = &UNK_003d926a;
      func_0x0032e5a0(puVar9,puVar13);
      if ((bStack_180 & 1) != 0) {
        puStack_188 = &UNK_003d9281;
        _ZdaPvSt11align_val_t(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
      }
      puStack_188 = &UNK_003d928a;
      _ZN7android4base10LogMessageD2Ev(auStack_168);
      *puVar12 = uVar2;
    }
  }
  puStack_188 = &UNK_003d91af;
  puVar21 = (undefined4 *)_Z11get_apacketv();
  *puVar21 = 0x59414b4f;
  puVar21[1] = **(undefined4 **)(puVar11 + 4);
  puVar21[2] = *puVar11;
  puStack_188 = &UNK_003d91cf;
  _Z11send_packetP7apacketP10atransport(puVar21,*(undefined8 *)(puVar11 + 0xe));
  if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) == pEStack_160) {
    return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  }
  puStack_188 = &UNK_003d9297;
  func_0x0099bd00();
  auStack_1d8._32_8_ = *(long *)(in_FS_OFFSET + 0x28);
  auStack_1d8._40_8_ = puVar11;
  auStack_1d8._48_8_ = puVar13;
  pEStack_1a0 = unaff_R13;
  puStack_198 = puVar12;
  puStack_190 = puVar9;
  puStack_188 = (undefined *)apuStack_130;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (puStack_188 = (undefined *)apuStack_130, (int)adb_trace_severity._4_4_ < 2)) {
    apuStack_1f0[0] = &UNK_003d9332;
    puStack_188 = (undefined *)apuStack_130;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar6 != '\0') {
      apuStack_1f0[0] = &UNK_003d933b;
      puVar12 = (uint *)func_0x0099bce0();
      uStack_1dc = *puVar12;
      puVar9 = (undefined4 *)0xffffffff;
      apuStack_1f0[0] = &UNK_003d936f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1d8 + 0x18,&UNK_0015b0ed,0x212,1,0,0xffffffff);
      apuStack_1f0[0] = &UNK_003d9377;
      puVar13 = (uint *)_ZN7android4base10LogMessage6streamEv(auStack_1d8 + 0x18);
      if (*(long *)(puVar21 + 4) != 0) {
        puVar9 = (undefined4 *)(ulong)*(uint *)(*(long *)(puVar21 + 4) + 0x48);
      }
      unaff_R13 = (Elf64_Ehdr *)auStack_1d8;
      apuStack_1f0[0] = &UNK_003d93a4;
      _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_00172301,*puVar21,puVar21[0x12],puVar9);
      apuStack_1f0[0] = &UNK_003d93af;
      func_0x0032e5a0(puVar13,unaff_R13);
      if ((auStack_1d8[0] & 1) != 0) {
        apuStack_1f0[0] = &UNK_003d93c6;
        _ZdaPvSt11align_val_t
                  (auStack_1d8._16_8_,
                   CONCAT71(auStack_1d8._1_7_,auStack_1d8[0]) & 0xfffffffffffffffe);
      }
      apuStack_1f0[0] = &UNK_003d93cf;
      _ZN7android4base10LogMessageD2Ev(auStack_1d8 + 0x18);
      *puVar12 = uStack_1dc;
    }
  }
  apuStack_1f0[0] = &UNK_003d92df;
  puVar11 = (undefined4 *)_Z11get_apacketv();
  *puVar11 = 0x45534c43;
  if (*(undefined4 **)(puVar21 + 4) != (undefined4 *)0x0) {
    puVar11[1] = **(undefined4 **)(puVar21 + 4);
  }
  puVar11[2] = *puVar21;
  apuStack_1f0[0] = &UNK_003d9304;
  _Z11send_packetP7apacketP10atransport(puVar11,*(undefined8 *)(puVar21 + 0xe));
  if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != (Elf64_Ehdr *)auStack_1d8._32_8_) {
    apuStack_1f0[0] = &UNK_003d93df;
    func_0x0099bd00();
    auStack_240._32_8_ = *(long *)(in_FS_OFFSET + 0x28);
    auStack_240._40_8_ = puVar21;
    auStack_240._48_8_ = puVar13;
    pEStack_208 = unaff_R13;
    puStack_200 = puVar12;
    puStack_1f8 = puVar9;
    apuStack_1f0[0] = (undefined *)&puStack_188;
    if (*(long *)(puVar11 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar11 + 4) + 0x10) = 0;
      apuStack_1f0[0] = (undefined *)&puStack_188;
      if ((((byte)adb_trace_mask & 2) != 0) &&
         (apuStack_1f0[0] = (undefined *)&puStack_188, (int)adb_trace_severity._4_4_ < 2)) {
        puStack_268 = &UNK_003d9668;
        apuStack_1f0[0] = (undefined *)&puStack_188;
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar6 != '\0') {
          puStack_268 = &UNK_003d9675;
          puVar14 = (uint *)func_0x0099bce0();
          uVar2 = *puVar14;
          unaff_R13 = (Elf64_Ehdr *)(ulong)uVar2;
          puStack_268 = &UNK_003d96a1;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_240 + 0x18,&UNK_0015b0ed,0x221,1,0,0xffffffff);
          puStack_268 = &UNK_003d96a9;
          puVar9 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_240 + 0x18);
          puStack_268 = &UNK_003d96cd;
          _ZN7android4base12StringPrintfEPKcz
                    (auStack_240,&UNK_00183486,*puVar11,**(undefined4 **)(puVar11 + 4),
                     (*(undefined4 **)(puVar11 + 4))[0x12]);
          puStack_268 = &UNK_003d96d8;
          func_0x0032e5a0(puVar9,auStack_240);
          if ((auStack_240[0] & 1) != 0) {
            puStack_268 = &UNK_003d96ef;
            _ZdaPvSt11align_val_t
                      (auStack_240._16_8_,
                       CONCAT71(auStack_240._1_7_,auStack_240[0]) & 0xfffffffffffffffe);
          }
          puStack_268 = &UNK_003d96f8;
          _ZN7android4base10LogMessageD2Ev(auStack_240 + 0x18);
          *puVar14 = uVar2;
        }
      }
      puStack_268 = &UNK_003d9436;
      (**(code **)(*(long *)(puVar11 + 4) + 0x30))();
    }
    puVar21 = &adb_trace_mask;
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      puStack_268 = &UNK_003d9510;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar6 != '\0') {
        puStack_268 = &UNK_003d951d;
        puStack_258 = (undefined4 *)func_0x0099bce0();
        uStack_244 = *puStack_258;
        puVar9 = (undefined4 *)0xffffffff;
        puStack_268 = &UNK_003d9552;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_240 + 0x18,&UNK_0015b0ed,0x225,1,0,0xffffffff);
        puStack_268 = &UNK_003d955a;
        uStack_250 = _ZN7android4base10LogMessage6streamEv(auStack_240 + 0x18);
        if (*(long *)(puVar11 + 4) != 0) {
          puVar9 = (undefined4 *)(ulong)*(uint *)(*(long *)(puVar11 + 4) + 0x48);
        }
        unaff_R13 = (Elf64_Ehdr *)auStack_240;
        puStack_268 = &UNK_003d9588;
        _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_00157881,*puVar11,puVar11[0x12],puVar9);
        puStack_268 = &UNK_003d9594;
        func_0x0032e5a0(uStack_250,unaff_R13);
        if ((auStack_240[0] & 1) != 0) {
          puStack_268 = &UNK_003d95ab;
          _ZdaPvSt11align_val_t
                    (auStack_240._16_8_,
                     CONCAT71(auStack_240._1_7_,auStack_240[0]) & 0xfffffffffffffffe);
        }
        puStack_268 = &UNK_003d95b4;
        _ZN7android4base10LogMessageD2Ev(auStack_240 + 0x18);
        *puStack_258 = uStack_244;
      }
    }
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      puStack_268 = &UNK_003d95ce;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar6 != '\0') {
        puStack_268 = &UNK_003d95db;
        puVar14 = (uint *)func_0x0099bce0();
        uVar2 = *puVar14;
        unaff_R13 = (Elf64_Ehdr *)(ulong)uVar2;
        puStack_268 = &UNK_003d9607;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_240 + 0x18,&UNK_0015b0ed,0x228,1,0,0xffffffff);
        puStack_268 = &UNK_003d960f;
        puVar9 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_240 + 0x18);
        puVar21 = (undefined4 *)auStack_240;
        puStack_268 = &UNK_003d9629;
        _ZN7android4base12StringPrintfEPKcz(puVar21,&UNK_001789d8,*puVar11);
        puStack_268 = &UNK_003d9634;
        func_0x0032e5a0(puVar9,puVar21);
        if ((auStack_240[0] & 1) != 0) {
          puStack_268 = &UNK_003d964b;
          _ZdaPvSt11align_val_t
                    (auStack_240._16_8_,
                     CONCAT71(auStack_240._1_7_,auStack_240[0]) & 0xfffffffffffffffe);
        }
        puStack_268 = &UNK_003d9654;
        _ZN7android4base10LogMessageD2Ev(auStack_240 + 0x18);
        *puVar14 = uVar2;
      }
    }
    if ((*(byte *)(puVar11 + 0x24) & 1) != 0) {
      puStack_268 = &UNK_003d9488;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)(puVar11 + 0x28),*(ulong *)(puVar11 + 0x24) & 0xfffffffffffffffe);
    }
    puVar4 = *(undefined4 **)(puVar11 + 0x1a);
    if (puVar4 != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(puVar11 + 0x1c);
      puVar22 = puVar4;
      if (puVar4 != puVar9) {
        do {
          lVar5 = *(long *)(puVar9 + -8);
          *(undefined8 *)(puVar9 + -8) = 0;
          if (lVar5 != 0) {
            puStack_268 = &UNK_003d94bf;
            _ZdaPvSt11align_val_t();
          }
          puVar9 = puVar9 + -8;
        } while (puVar9 != puVar4);
        puVar22 = *(undefined4 **)(puVar11 + 0x1a);
      }
      *(undefined4 **)(puVar11 + 0x1c) = puVar4;
      puStack_268 = &UNK_003d94d5;
      _ZdaPvSt11align_val_t(puVar22,*(long *)(puVar11 + 0x1e) - (long)puVar22);
    }
    uVar19 = 0xa8;
    puStack_268 = &UNK_003d94e2;
    puVar22 = puVar11;
    _ZdaPvSt11align_val_t(puVar11,0xa8);
    if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != (Elf64_Ehdr *)auStack_240._32_8_) {
      puStack_268 = &UNK_003d9705;
      func_0x0099bd00();
      pEStack_298 = *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
      puStack_290 = puVar11;
      puStack_288 = puVar21;
      pEStack_280 = unaff_R13;
      puStack_278 = puVar4;
      puStack_270 = puVar9;
      puStack_268 = (undefined *)apuStack_1f0;
      _ZN10atransport19UpdateReverseConfigENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
                (*(undefined8 *)(puVar22 + 0xe));
      if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
        puVar21 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar21;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_2a0,&UNK_0015b0ed,0x247,1,0,0xffffffff);
        uVar16 = _ZN7android4base10LogMessage6streamEv(auStack_2a0);
        _ZN7android4base12StringPrintfEPKcz(&bStack_2b8,&UNK_001643ac,*puVar22,puVar22[0x12]);
        func_0x0032e5a0(uVar16,&bStack_2b8);
        if ((bStack_2b8 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_2a0);
        *puVar21 = uVar3;
      }
      puVar21 = (undefined4 *)_Z11get_apacketv();
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&bStack_2b8,&UNK_0015b0ed,0x24b,1,0,0xffffffff);
        uVar16 = _ZN7android4base10LogMessage6streamEv(&bStack_2b8);
        uVar16 = func_0x0032eb30(uVar16,&UNK_00187ce2,3);
        uVar16 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar16,*puVar22);
        uVar16 = func_0x0032eb30(uVar16,&UNK_0017711f,10);
        uVar16 = func_0x0032eb30(uVar16,uVar19,extraout_RDX);
        func_0x0032eb30(uVar16,&UNK_001692c7,1);
        _ZN7android4base10LogMessageD2Ev(&bStack_2b8);
        *puVar9 = uVar3;
      }
      *puVar21 = 0x4e45504f;
      puVar21[1] = *puVar22;
      if (*(char *)(*(long *)(puVar22 + 0xe) + 0x1c8) == '\x01') {
        puVar21[2] = 0x2000000;
        if (*(char *)(puVar22 + 0x22) == '\0') {
          *(undefined1 *)(puVar22 + 0x22) = 1;
        }
        *(undefined8 *)(puVar22 + 0x20) = 0;
      }
      _ZN5Block6resizeEm(puVar21 + 6,extraout_RDX + 1);
      func_0x0099bda0(*(undefined8 *)(puVar21 + 6),uVar19,extraout_RDX);
      *(undefined1 *)(*(long *)(puVar21 + 6) + extraout_RDX) = 0;
      puVar21[3] = puVar21[10];
      if (*(long *)(puVar22 + 0xe) == 0) {
        uVar18 = 0x100000;
      }
      else {
        uVar15 = _ZNK10atransport15get_max_payloadEv();
        uVar18 = 0x100000;
        if (uVar15 < 0x100000) {
          uVar18 = uVar15;
        }
      }
      if (((*(long *)(puVar22 + 4) != 0) && (*(long *)(*(long *)(puVar22 + 4) + 0x38) != 0)) &&
         (uVar15 = _ZNK10atransport15get_max_payloadEv(), uVar15 < uVar18)) {
        uVar18 = uVar15;
      }
      uVar2 = puVar21[3];
      if (uVar18 < uVar2) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_2b8,&UNK_0015b0ed,0x25b,6,0,0xffffffff);
          uVar19 = _ZN7android4base10LogMessage6streamEv(&bStack_2b8);
          uVar19 = func_0x0032eb30(uVar19,&UNK_00165d45,0xe);
          uVar19 = func_0x0032eb30(uVar19,&UNK_00178931,0x12);
          uVar19 = func_0x0032eb30(uVar19,&UNK_0015ae05,1);
          uVar19 = func_0x0032eb30(uVar19,&UNK_00184995,2);
          uVar19 = func_0x0032eb30(uVar19,&UNK_0015ae05,1);
          uVar19 = func_0x0032eb30(uVar19,&UNK_001865a2,0x14);
          uVar19 = func_0x0032eb30(uVar19,&UNK_00187ce6,0x15);
          uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19,(ulong)uVar2);
          uVar19 = func_0x0032eb30(uVar19,&UNK_0017d60d,0x17);
          uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar19,uVar18);
          func_0x0032eb30(uVar19,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(&bStack_2b8);
        } while( true );
      }
      _Z11send_packetP7apacketP10atransport(puVar21,*(undefined8 *)(puVar22 + 0xe));
      if (*(Elf64_Ehdr **)(in_FS_OFFSET + 0x28) != pEStack_298) {
        func_0x0099bd00();
        if (*(long *)(puVar21 + 0xe) == 0) {
          pEVar10 = &Elf64_Ehdr_00100000;
        }
        else {
          pEVar8 = (Elf64_Ehdr *)_ZNK10atransport15get_max_payloadEv();
          pEVar10 = &Elf64_Ehdr_00100000;
          if (pEVar8 < &Elf64_Ehdr_00100000) {
            pEVar10 = pEVar8;
          }
        }
        pEVar8 = pEVar10;
        if (((*(long *)(puVar21 + 4) != 0) && (*(long *)(*(long *)(puVar21 + 4) + 0x38) != 0)) &&
           (pEVar8 = (Elf64_Ehdr *)_ZNK10atransport15get_max_payloadEv(), pEVar10 <= pEVar8)) {
          pEVar8 = pEVar10;
        }
        return pEVar8;
      }
      return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
    }
    return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
  }
  return *(Elf64_Ehdr **)(in_FS_OFFSET + 0x28);
}


