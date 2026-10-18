// Function: BrotliEncoderCompress
// Address: 00375660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong BrotliEncoderCompress
                (Elf64_Ehdr *param_1,long *****param_2,undefined4 param_3,Elf64_Ehdr *param_4,
                ulong *****param_5,ulong *****param_6,long *****param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  word wVar23;
  word wVar24;
  word wVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  byte bVar29;
  byte bVar30;
  long ****pppplVar31;
  ulong uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  Elf64_Ehdr *pEVar36;
  ulong uVar37;
  qword qVar38;
  undefined8 uVar39;
  long lVar40;
  ulong ****ppppuVar41;
  word *pwVar42;
  byte bVar43;
  ushort uVar46;
  byte bVar44;
  bool bVar45;
  long *****ppppplVar47;
  ulong uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  ulong *extraout_RDX;
  ulong uVar52;
  char *pcVar53;
  byte *pbVar54;
  ulong uVar55;
  ulong uVar56;
  long ****pppplVar57;
  Elf64_Ehdr *pEVar58;
  ulong uVar59;
  long lVar60;
  int iVar62;
  Elf64_Ehdr *pEVar61;
  Elf64_Ehdr *unaff_R12;
  Elf64_Ehdr *unaff_R13;
  bool bVar63;
  qword *pqVar64;
  ulong uVar65;
  long in_FS_OFFSET;
  bool bVar66;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_f0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  Elf64_Ehdr *pEStack_c0;
  Elf64_Ehdr *pEStack_b8;
  long ****pppplStack_b0;
  Elf64_Ehdr *pEStack_a8;
  undefined *puStack_a0;
  ulong ***pppuStack_98;
  qword *pqStack_90;
  Elf64_Ehdr *pEStack_88;
  long ****pppplStack_80;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long ****pppplStack_68;
  long ***ppplStack_60;
  ulong ****ppppuStack_58;
  long ***ppplStack_50;
  long ****pppplStack_48;
  Elf64_Ehdr *pEStack_40;
  qword qStack_38;
  
  iVar35 = (int)param_2;
  qStack_38 = *(qword *)(in_FS_OFFSET + 0x28);
  pEVar61 = (Elf64_Ehdr *)*param_6;
  ppppplVar47 = param_7;
  if (param_4 == (Elf64_Ehdr *)0x0) {
    if (pEVar61 == (Elf64_Ehdr *)0x0) {
code_r0x003759c8:
      uVar55 = 0;
    }
    else {
      *param_6 = (ulong ****)0x1;
      *(undefined1 *)param_7 = 6;
code_r0x003759da:
      iVar35 = (int)param_2;
      uVar55 = 1;
    }
  }
  else {
    uStack_6c = SUB84(param_1,0);
    uVar55 = 0;
    unaff_R13 = (Elf64_Ehdr *)0x0;
    if (param_4 <= (Elf64_Ehdr *)(param_4->e_ident_pad + ((ulong)param_4 >> 0xe) * 4 + -3)) {
      unaff_R13 = (Elf64_Ehdr *)(param_4->e_ident_pad + ((ulong)param_4 >> 0xe) * 4 + -3);
    }
    pEStack_88 = pEVar61;
    iStack_74 = iVar35;
    uStack_70 = param_3;
    pppplStack_68 = (long ****)param_6;
    if (pEVar61 != (Elf64_Ehdr *)0x0) {
      uVar55 = 0;
      param_1 = (Elf64_Ehdr *)0x1b40;
      ppppplVar47 = (long *****)0x0;
      puStack_a0 = &UNK_003756de;
      iVar35 = 0;
      pEVar36 = (Elf64_Ehdr *)func_0x003bd140(0x1b40,0,0);
      if (pEVar36 != (Elf64_Ehdr *)0x0) {
        puStack_a0 = &UNK_003756fc;
        func_0x003bd0d0(&pEVar36[0x15].e_phnum,0,0,0);
        pEVar36->e_ident_magic_num = 0;
        pEVar36->e_ident_magic_str[0] = '\0';
        pEVar36->e_ident_magic_str[1] = '\0';
        pEVar36->e_ident_magic_str[2] = '\0';
        pEVar36->e_ident_class = 0xb;
        pEVar36->e_ident_data = 0;
        pEVar36->e_ident_version = 0;
        pEVar36->e_ident_osabi = 0;
        *(undefined4 *)((long)&pEVar36->e_phoff + 4) = 0;
        pEVar36->e_ident_abiversion = 0x16;
        pEVar36->e_ident_pad[0] = 0;
        pEVar36->e_ident_pad[1] = 0;
        pEVar36->e_ident_pad[2] = 0;
        *(undefined8 *)(pEVar36->e_ident_pad + 3) = 0;
        *(undefined8 *)&pEVar36->e_version = 0;
        *(undefined8 *)((long)&pEVar36->e_entry + 4) = 0;
        puStack_a0 = &UNK_0037573a;
        func_0x003bb550(&pEVar36[1].e_type);
        pEVar36->e_phnum = 0;
        pEVar36->e_shentsize = 0;
        pEVar36->e_shnum = 0;
        pEVar36->e_shstrndx = 0;
        pEVar36[1].e_ident_magic_num = 0x40;
        pEVar36[1].e_ident_magic_str[0] = '\0';
        pEVar36[1].e_ident_magic_str[1] = '\0';
        pEVar36[1].e_ident_magic_str[2] = '\0';
        pEVar36[1].e_ident_class = 0x40;
        pEVar36[1].e_ident_data = 0;
        pEVar36[1].e_ident_version = 0;
        pEVar36[1].e_ident_osabi = 0;
        pEVar36[1].e_ident_abiversion = 0xfc;
        pEVar36[1].e_ident_pad[0] = 0xff;
        pEVar36[1].e_ident_pad[1] = 0xff;
        pEVar36[1].e_ident_pad[2] = 3;
        pEVar36[1].e_ident_pad[3] = 0;
        pEVar36[1].e_ident_pad[4] = 0;
        pEVar36[1].e_ident_pad[5] = 0;
        pEVar36[1].e_ident_pad[6] = 0;
        pEVar36[0x16].e_type = 0;
        pEVar36[0x16].e_machine = 0;
        pEVar36[0x16].e_version = 0;
        pEVar36[0x19].e_ident_pad[3] = 0;
        pEVar36[0x19].e_ident_pad[4] = 0;
        pEVar36[0x6c].e_ehsize = 0;
        pEVar36[0x6c].e_phentsize = 0;
        pEVar36[0x6c].e_phnum = 0;
        pEVar36[0x6c].e_shentsize = 0;
        pEVar36[0x6c].e_shnum = 0;
        pEVar36[0x6c].e_shstrndx = 0;
        pEVar36[0x16].e_shoff = 0;
        pEVar36[0x16].e_flags = 0;
        pEVar36[0x16].e_ehsize = 0;
        pEVar36[0x16].e_phentsize = 0;
        pEVar36[0x16].e_phnum = 0;
        pEVar36[0x16].e_shentsize = 0;
        pEVar36[0x16].e_shnum = 0;
        pEVar36[0x16].e_shstrndx = 0;
        pEVar36[0x17].e_ident_magic_num = 0;
        pEVar36[0x17].e_ident_magic_str[0] = '\0';
        pEVar36[0x17].e_ident_magic_str[1] = '\0';
        pEVar36[0x17].e_ident_magic_str[2] = '\0';
        pEVar36[0x17].e_ident_class = 0;
        pEVar36[0x17].e_ident_data = 0;
        pEVar36[0x17].e_ident_version = 0;
        pEVar36[0x17].e_ident_osabi = 0;
        pEVar36[0x17].e_ident_abiversion = 0;
        pEVar36[0x17].e_ident_pad[0] = 0;
        pEVar36[0x17].e_ident_pad[1] = 0;
        pEVar36[0x17].e_ident_pad[2] = 0;
        pEVar36[0x17].e_ident_pad[3] = 0;
        pEVar36[0x17].e_ident_pad[4] = 0;
        pEVar36[0x17].e_ident_pad[5] = 0;
        pEVar36[0x17].e_ident_pad[6] = 0;
        pEVar36[0x17].e_type = 0;
        pEVar36[0x17].e_machine = 0;
        pEVar36[0x17].e_version = 0;
        pEVar36[0x17].e_entry = 0;
        pEVar36[0x17].e_phoff = 0;
        pEVar36[0x17].e_shoff = 0;
        pEVar36[0x17].e_flags = 0;
        pEVar36[0x17].e_ehsize = 0;
        pEVar36[0x17].e_phentsize = 0;
        pEVar36[0x19].e_type = 0;
        pEVar36[0x19].e_machine = 0;
        pEVar36[0x19].e_version = 0;
        pEVar36[0x19].e_entry = 0;
        pEVar36[0x19].e_phoff = 0;
        pEVar36[0x19].e_shoff = 0;
        pEVar36[0x19].e_flags = 0;
        pEVar36[0x19].e_ehsize = 0;
        pEVar36[0x19].e_phentsize = 0;
        pEVar36[0x19].e_phnum = 0;
        pEVar36[0x19].e_shentsize = 0;
        pEVar36[0x19].e_shnum = 0;
        pEVar36[0x19].e_shstrndx = 0;
        pEVar36[0x1a].e_ident_magic_num = 0;
        pEVar36[0x1a].e_ident_magic_str[0] = '\0';
        pEVar36[0x1a].e_ident_magic_str[1] = '\0';
        pEVar36[0x1a].e_ident_magic_str[2] = '\0';
        pEVar36[0x6b].e_type = 0;
        pEVar36[0x6b].e_machine = 0;
        pEVar36[0x6b].e_version = 0;
        pEVar36[0x6b].e_entry = 0;
        pEVar36[0x6b].e_phoff = 0;
        pEVar36[0x6b].e_shoff = 0;
        pEVar36[0x6b].e_flags = 0;
        pEVar36[0x6b].e_ehsize = 0;
        pEVar36[0x6b].e_phentsize = 0;
        pEVar36[0x6b].e_phnum = 0;
        pEVar36[0x6b].e_shentsize = 0;
        pEVar36[0x6b].e_shnum = 0;
        pEVar36[0x6b].e_shstrndx = 0;
        pEVar36[0x6c].e_ident_magic_num = 0;
        pEVar36[0x6c].e_ident_magic_str[0] = '\0';
        pEVar36[0x6c].e_ident_magic_str[1] = '\0';
        pEVar36[0x6c].e_ident_magic_str[2] = '\0';
        pEVar36[0x6c].e_ident_class = 0;
        pEVar36[0x6c].e_ident_data = 0;
        pEVar36[0x6c].e_ident_version = 0;
        pEVar36[0x6c].e_ident_osabi = 0;
        pEVar36[0x6c].e_ident_abiversion = 0;
        pEVar36[0x6c].e_ident_pad[0] = 0;
        pEVar36[0x6c].e_ident_pad[1] = 0;
        pEVar36[0x6c].e_ident_pad[2] = 0;
        pEVar36[0x6c].e_ident_pad[3] = 0;
        pEVar36[0x6c].e_ident_pad[4] = 0;
        pEVar36[0x6c].e_ident_pad[5] = 0;
        pEVar36[0x6c].e_ident_pad[6] = 0;
        pEVar36[0x6c].e_type = 0;
        pEVar36[0x6c].e_machine = 0;
        pEVar36[0x6c].e_version = 0;
        pEVar36[0x6c].e_entry = 0;
        pEVar36[0x17].e_phnum = 4;
        pEVar36[0x17].e_shentsize = 0;
        pEVar36[0x17].e_shnum = 0xb;
        pEVar36[0x17].e_shstrndx = 0;
        pEVar36[0x18].e_ident_magic_num = 0xf;
        pEVar36[0x18].e_ident_magic_str[0] = '\0';
        pEVar36[0x18].e_ident_magic_str[1] = '\0';
        pEVar36[0x18].e_ident_magic_str[2] = '\0';
        pEVar36[0x18].e_ident_class = 0x10;
        pEVar36[0x18].e_ident_data = 0;
        pEVar36[0x18].e_ident_version = 0;
        pEVar36[0x18].e_ident_osabi = 0;
        wVar23 = pEVar36[0x17].e_shentsize;
        wVar24 = pEVar36[0x17].e_shnum;
        wVar25 = pEVar36[0x17].e_shstrndx;
        cVar26 = pEVar36[0x18].e_ident_magic_str[0];
        cVar27 = pEVar36[0x18].e_ident_magic_str[1];
        cVar28 = pEVar36[0x18].e_ident_magic_str[2];
        bVar44 = pEVar36[0x18].e_ident_class;
        bVar43 = pEVar36[0x18].e_ident_data;
        bVar29 = pEVar36[0x18].e_ident_version;
        bVar30 = pEVar36[0x18].e_ident_osabi;
        pEVar36[0x18].e_phnum = pEVar36[0x17].e_phnum;
        pEVar36[0x18].e_shentsize = wVar23;
        pEVar36[0x18].e_shnum = wVar24;
        pEVar36[0x18].e_shstrndx = wVar25;
        pEVar36[0x19].e_ident_magic_num = pEVar36[0x18].e_ident_magic_num;
        pEVar36[0x19].e_ident_magic_str[0] = cVar26;
        pEVar36[0x19].e_ident_magic_str[1] = cVar27;
        pEVar36[0x19].e_ident_magic_str[2] = cVar28;
        pEVar36[0x19].e_ident_class = bVar44;
        pEVar36[0x19].e_ident_data = bVar43;
        pEVar36[0x19].e_ident_version = bVar29;
        pEVar36[0x19].e_ident_osabi = bVar30;
        ppplStack_50 = *pppplStack_68;
        ppppuStack_58 = (ulong ****)param_7;
        ppplStack_60 = (long ***)0x0;
        pEVar36->e_ident_class = (undefined1)uStack_6c;
        pEVar36->e_ident_data = uStack_6c._1_1_;
        pEVar36->e_ident_version = uStack_6c._2_1_;
        pEVar36->e_ident_osabi = uStack_6c._3_1_;
        pEVar36->e_ident_abiversion = (undefined1)iStack_74;
        pEVar36->e_ident_pad[0] = iStack_74._1_1_;
        pEVar36->e_ident_pad[1] = iStack_74._2_1_;
        pEVar36->e_ident_pad[2] = iStack_74._3_1_;
        pEVar36->e_ident_magic_num = (undefined1)uStack_70;
        pEVar36->e_ident_magic_str[0] = uStack_70._1_1_;
        pEVar36->e_ident_magic_str[1] = uStack_70._2_1_;
        pEVar36->e_ident_magic_str[2] = uStack_70._3_1_;
        pEVar36->e_entry = (ulong)param_4 & 0xffffffff;
        if (0x18 < iStack_74) {
          *(undefined4 *)((long)&pEVar36->e_phoff + 4) = 1;
        }
        pppuStack_98 = (ulong ***)&ppplStack_60;
        ppppplVar47 = &pppplStack_48;
        pEVar61 = (Elf64_Ehdr *)&ppplStack_50;
        param_6 = &ppppuStack_58;
        param_2 = (long *****)0x2;
        puStack_a0 = &UNK_0037589a;
        pppplStack_48 = (long ****)param_5;
        pEStack_40 = param_4;
        iVar33 = BrotliEncoderCompressStream(pEVar36,2,&pEStack_40);
        pppplVar57 = pppplStack_68;
        iVar35._0_2_ = pEVar36[0x6c].e_ehsize;
        iVar35._2_2_ = pEVar36[0x6c].e_phentsize;
        if ((iVar35 != 2) ||
           (lVar40._0_2_ = pEVar36[0x6c].e_type, lVar40._2_2_ = pEVar36[0x6c].e_machine,
           lVar40._4_4_ = pEVar36[0x6c].e_version, lVar40 != 0)) {
          iVar33 = 0;
        }
        *pppplStack_68 = ppplStack_60;
        puStack_a0 = &UNK_003758cd;
        param_1 = pEVar36;
        pppplStack_80 = (long ****)param_5;
        BrotliEncoderDestroyInstance();
        pppplVar31 = pppplStack_80;
        iVar35 = (int)param_2;
        unaff_R12 = pEVar36;
        param_5 = (ulong *****)pppplVar57;
        if ((iVar33 == 0) ||
           ((unaff_R13 != (Elf64_Ehdr *)0x0 && (unaff_R13 < (Elf64_Ehdr *)*pppplVar57)))) {
          *pppplVar57 = (long ***)0x0;
          unaff_R13 = (Elf64_Ehdr *)((long)&unaff_R13[-1].e_shstrndx + 1);
          if (pEStack_88 <= unaff_R13) goto code_r0x003759c8;
          *(undefined2 *)param_7 = 0x321;
          pcVar53 = (char *)0x2;
          unaff_R13 = (Elf64_Ehdr *)0x0;
          do {
            unaff_R12 = (Elf64_Ehdr *)0x1000000;
            if (param_4 < (Elf64_Ehdr *)0x1000000) {
              unaff_R12 = param_4;
            }
            iVar35 = 2 - (uint)(param_4 < Elf64_Ehdr_00100000.e_ident_magic_str);
            if (param_4 < (Elf64_Ehdr *)0x10001) {
              iVar35 = 0;
            }
            uVar49 = ((int)unaff_R12 * 8 + iVar35 * 2) - 8;
            uVar34 = 0x80000 << ((byte)(iVar35 << 2) & 0x1f) | uVar49;
            ppppplVar47 = (long *****)(ulong)(uVar34 >> 0x10);
            *(char *)((long)param_7 + (long)pcVar53) = (char)uVar49;
            ((undefined1 *)((long)param_7 + 1))[(long)pcVar53] =
                 (char)((uint)((int)unaff_R12 * 8 + -8) >> 8);
            *(char *)((long)param_7 + (long)(pcVar53 + 2)) = (char)(uVar34 >> 0x10);
            if (&Elf64_Ehdr_00100000 < param_4) {
              ((undefined1 *)((long)param_7 + 3))[(long)pcVar53] = (char)(uVar34 >> 0x18);
              pbVar54 = (byte *)(pcVar53 + 4);
            }
            else {
              pbVar54 = (byte *)(pcVar53 + 3);
            }
            param_1 = (Elf64_Ehdr *)((long)param_7 + (long)pbVar54);
            puStack_a0 = &UNK_0037592b;
            func_0x0099bda0(param_1,(char *)((long)pppplVar31 + (long)unaff_R13),unaff_R12);
            pcVar53 = unaff_R12->e_ident_magic_str + (long)(pbVar54 + -1);
            unaff_R13 = (Elf64_Ehdr *)
                        (unaff_R12->e_ident_magic_str + (long)(unaff_R13->e_ident_magic_str + -2));
            param_4 = (Elf64_Ehdr *)((long)param_4 - (long)unaff_R12);
          } while (param_4 != (Elf64_Ehdr *)0x0);
          *(char *)((long)param_7 + (long)pcVar53) = '\x03';
          *pppplStack_68 = (long ***)(pcVar53 + 1);
          param_4 = (Elf64_Ehdr *)0x0;
          param_2 = param_7;
          param_5 = (ulong *****)pppplVar31;
        }
        goto code_r0x003759da;
      }
    }
  }
  if (*(qword *)(in_FS_OFFSET + 0x28) == qStack_38) {
    return uVar55;
  }
  puStack_a0 = &UNK_00375a0b;
  func_0x0099bd00();
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar36 = (Elf64_Ehdr *)&param_1[0x15].e_phnum;
  iVar33._0_2_ = param_1[0x6c].e_shnum;
  iVar33._2_2_ = param_1[0x6c].e_shstrndx;
  pEVar58 = param_1;
  uStack_c8 = uVar55;
  pEStack_c0 = unaff_R12;
  pEStack_b8 = unaff_R13;
  pppplStack_b0 = (long ****)param_5;
  pEStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff8;
  if (iVar33 == 0) {
    param_1[0x19].e_ident_abiversion = 0;
    param_1[0x19].e_ident_pad[0] = 0;
    param_1[0x19].e_ident_pad[1] = 0;
    param_1[0x19].e_ident_pad[2] = 0xfe;
    param_1[0x6c].e_flags = 0xffffffff;
    uVar34._0_1_ = param_1->e_ident_class;
    uVar34._1_1_ = param_1->e_ident_data;
    uVar34._2_1_ = param_1->e_ident_version;
    uVar34._3_1_ = param_1->e_ident_osabi;
    uVar49 = 0;
    if (0 < (int)uVar34) {
      uVar49 = uVar34;
    }
    uVar50 = 0xb;
    if ((int)uVar49 < 0xb) {
      uVar50 = uVar49;
    }
    param_1->e_ident_class = (char)uVar50;
    param_1->e_ident_data = (char)(uVar50 >> 8);
    param_1->e_ident_version = (char)(uVar50 >> 0x10);
    param_1->e_ident_osabi = (char)(uVar50 >> 0x18);
    if ((int)uVar34 < 3) {
      *(undefined4 *)((long)&param_1->e_phoff + 4) = 0;
    }
    uVar49._0_1_ = param_1->e_ident_abiversion;
    uVar49._1_1_ = param_1->e_ident_pad[0];
    uVar49._2_1_ = param_1->e_ident_pad[1];
    uVar49._3_1_ = param_1->e_ident_pad[2];
    uVar50 = 10;
    if ((int)uVar49 < 10) {
code_r0x00375ab3:
      uVar49 = uVar50;
      param_1->e_ident_abiversion = (char)uVar49;
      param_1->e_ident_pad[0] = (char)(uVar49 >> 8);
      param_1->e_ident_pad[1] = (char)(uVar49 >> 0x10);
      param_1->e_ident_pad[2] = (char)(uVar49 >> 0x18);
    }
    else {
      uVar50 = 0x1e;
      if (*(int *)((long)&param_1->e_phoff + 4) == 0) {
        uVar50 = 0x18;
      }
      if (uVar50 < uVar49) goto code_r0x00375ab3;
    }
    uVar50 = uVar49;
    if (((int)uVar34 < 2) || (uVar50 = 0xe, uVar34 < 4)) {
      *(uint *)(param_1->e_ident_pad + 3) = uVar50;
code_r0x00375ad2:
      uVar50 = 0;
      uVar51 = 0;
    }
    else {
      uVar50 = *(uint *)(param_1->e_ident_pad + 3);
      if (uVar50 == 0) {
        uVar50 = 0x10;
        if (((8 < uVar34) && (0x10 < uVar49)) && (uVar50 = 0x12, uVar49 < 0x12)) {
          uVar50 = uVar49;
        }
      }
      else {
        uVar34 = 0x10;
        if (0x10 < (int)uVar50) {
          uVar34 = uVar50;
        }
        uVar50 = 0x18;
        if ((int)uVar34 < 0x18) {
          uVar50 = uVar34;
        }
      }
      *(uint *)(param_1->e_ident_pad + 3) = uVar50;
      iVar62._0_1_ = param_1->e_ident_magic_num;
      iVar62._1_1_ = param_1->e_ident_magic_str[0];
      iVar62._2_1_ = param_1->e_ident_magic_str[1];
      iVar62._3_1_ = param_1->e_ident_magic_str[2];
      if (iVar62 == 2) {
        uVar51 = 0xc;
        uVar50 = 1;
      }
      else {
        uVar50._0_2_ = param_1->e_phnum;
        uVar50._2_2_ = param_1->e_shentsize;
        uVar51._0_2_ = param_1->e_shnum;
        uVar51._2_2_ = param_1->e_shstrndx;
      }
      if ((0x78 < uVar51 || 3 < uVar50) ||
         ((uVar51 >> ((byte)uVar50 & 0x1f) & 0xf) << ((byte)uVar50 & 0x1f) != uVar51))
      goto code_r0x00375ad2;
    }
    puStack_a0 = &stack0xfffffffffffffff8;
    func_0x003bd1a0(&param_1->e_phnum,uVar50,uVar51,*(undefined4 *)((long)&param_1->e_phoff + 4));
    uVar55._0_2_ = param_1->e_type;
    uVar55._2_2_ = param_1->e_machine;
    uVar55._4_4_ = param_1->e_version;
    if (uVar55 != 0) {
      param_1[0x19].e_ident_pad[2] = 2;
      param_1[0x17].e_phnum = 0xfff0;
      param_1[0x17].e_shentsize = 0xffff;
      param_1[0x17].e_shnum = 0xfff0;
      param_1[0x17].e_shstrndx = 0xffff;
      param_1[0x18].e_ident_magic_num = 0xf0;
      param_1[0x18].e_ident_magic_str[0] = -1;
      param_1[0x18].e_ident_magic_str[1] = -1;
      param_1[0x18].e_ident_magic_str[2] = -1;
      param_1[0x18].e_ident_class = 0xf0;
      param_1[0x18].e_ident_data = 0xff;
      param_1[0x18].e_ident_version = 0xff;
      param_1[0x18].e_ident_osabi = 0xff;
      wVar23 = param_1[0x17].e_shentsize;
      wVar24 = param_1[0x17].e_shnum;
      wVar25 = param_1[0x17].e_shstrndx;
      cVar26 = param_1[0x18].e_ident_magic_str[0];
      cVar27 = param_1[0x18].e_ident_magic_str[1];
      cVar28 = param_1[0x18].e_ident_magic_str[2];
      bVar44 = param_1[0x18].e_ident_class;
      bVar43 = param_1[0x18].e_ident_data;
      bVar29 = param_1[0x18].e_ident_version;
      bVar30 = param_1[0x18].e_ident_osabi;
      param_1[0x18].e_phnum = param_1[0x17].e_phnum;
      param_1[0x18].e_shentsize = wVar23;
      param_1[0x18].e_shnum = wVar24;
      param_1[0x18].e_shstrndx = wVar25;
      param_1[0x19].e_ident_magic_num = param_1[0x18].e_ident_magic_num;
      param_1[0x19].e_ident_magic_str[0] = cVar26;
      param_1[0x19].e_ident_magic_str[1] = cVar27;
      param_1[0x19].e_ident_magic_str[2] = cVar28;
      param_1[0x19].e_ident_class = bVar44;
      param_1[0x19].e_ident_data = bVar43;
      param_1[0x19].e_ident_version = bVar29;
      param_1[0x19].e_ident_osabi = bVar30;
    }
    uVar1._0_1_ = param_1->e_ident_abiversion;
    uVar1._1_1_ = param_1->e_ident_pad[0];
    uVar1._2_1_ = param_1->e_ident_pad[1];
    uVar1._3_1_ = param_1->e_ident_pad[2];
    bVar43 = (byte)*(int *)(param_1->e_ident_pad + 3);
    bVar44 = bVar43;
    if (*(int *)(param_1->e_ident_pad + 3) < (int)uVar1) {
      bVar44 = (undefined1)uVar1;
    }
    iVar33 = 1 << (bVar44 + 1 & 0x1f);
    uVar2._0_1_ = param_1->e_ident_class;
    uVar2._1_1_ = param_1->e_ident_data;
    uVar2._2_1_ = param_1->e_ident_version;
    uVar2._3_1_ = param_1->e_ident_osabi;
    iVar62 = 1 << (bVar43 & 0x1f);
    uVar34 = 0x12;
    if (0x12 < (int)uVar1) {
      uVar34 = uVar1;
    }
    if (1 < uVar2) {
      uVar34 = uVar1;
    }
    *(int *)&param_1[0x16].e_entry = iVar33;
    *(int *)((long)&param_1[0x16].e_entry + 4) = iVar33 + -1;
    *(int *)&param_1[0x16].e_phoff = iVar62;
    *(int *)((long)&param_1[0x16].e_phoff + 4) = iVar33 + iVar62;
    if (uVar55 == 0) {
      if (*(int *)((long)&param_1->e_phoff + 4) == 0) {
        if (uVar34 == 0x10) {
          bVar44 = 1;
          uVar46 = 0;
        }
        else if (uVar34 == 0x11) {
          bVar44 = 7;
          uVar46 = 1;
        }
        else if ((int)uVar34 < 0x12) {
          uVar46 = (short)uVar34 * 0x10 - 0x7f;
          bVar44 = 7;
        }
        else {
          uVar46 = (short)uVar34 * 2 - 0x21;
          bVar44 = 4;
        }
      }
      else {
        uVar46 = (ushort)((uVar34 & 0x3f) << 8) | 0x11;
        bVar44 = 0xe;
      }
      param_1[0x19].e_ident_abiversion = (char)uVar46;
      param_1[0x19].e_ident_pad[0] = (char)(uVar46 >> 8);
      param_1[0x19].e_ident_pad[1] = bVar44;
      if (uVar2 != 1) goto code_r0x00375b91;
code_r0x00375cac:
      qVar38 = func_0x003bd100(pEVar36,0x1dc8);
      param_1[0x6b].e_shoff = qVar38;
      pEVar58 = pEVar36;
    }
    else {
      uVar37 = (1L << ((byte)uVar34 & 0x3f)) - 0x10;
      if (uVar55 < uVar37) {
        uVar37 = uVar55;
      }
      param_1->e_type = (short)uVar37;
      param_1->e_machine = (short)(uVar37 >> 0x10);
      param_1->e_version = (int)(uVar37 >> 0x20);
      if (uVar2 == 1) goto code_r0x00375cac;
code_r0x00375b91:
      pEVar58 = (Elf64_Ehdr *)(ulong)uVar1;
      if (uVar2 == 0) {
        qVar38 = func_0x003bd100(pEVar36,0x1fd0);
        param_1[0x6b].e_phoff = qVar38;
        *(undefined8 *)(qVar38 + 0x300) = 0x707060605040400;
        *(undefined8 *)(qVar38 + 0x308) = 0x808080808070707;
        *(undefined8 *)(qVar38 + 0x310) = 0x404040404000000;
        *(undefined8 *)(qVar38 + 0x318) = 0x707060606060505;
        *(undefined8 *)(qVar38 + 800) = 0xa0a0a0a0a0a0707;
        *(undefined8 *)(qVar38 + 0x328) = 0x606050505040400;
        *(undefined8 *)(qVar38 + 0x330) = 0xa0a0a0a09080807;
        *(undefined8 *)(qVar38 + 0x338) = 0xa0a0a0a0a0a0a0a;
        *(undefined8 *)(qVar38 + 0x340) = 5;
        *(undefined8 *)(qVar38 + 0x348) = 0;
        *(undefined8 *)(qVar38 + 0x350) = 0x505060606060606;
        *(undefined8 *)(qVar38 + 0x358) = 0x404040405050505;
        *(undefined8 *)(qVar38 + 0x360) = 0x505050505040404;
        *(undefined8 *)(qVar38 + 0x368) = 0xa08070707060605;
        *(undefined4 *)(qVar38 + 0x370) = 0xc0c0c0c;
        *(undefined4 *)(qVar38 + 0x374) = 0xc0c0c0c;
        *(undefined4 *)(qVar38 + 0x378) = 0xc0c0c0c;
        *(undefined4 *)(qVar38 + 0x37c) = 0;
        pEVar58 = (Elf64_Ehdr *)(qVar38 + 0x380);
        func_0x0099bda0(pEVar58,&UNK_001b0b00,0x100);
        *(undefined8 *)(qVar38 + 0x680) = 0x9eeadee7bfd577ff;
        *(undefined8 *)(qVar38 + 0x688) = 0x58bc5770c6de5d51;
        *(undefined8 *)(qVar38 + 0x690) = 0x8ccbd558d8d85858;
        *(undefined8 *)(qVar38 + 0x698) = 0x60c1831f87c3e0ea;
        *(undefined8 *)(qVar38 + 0x6a0) = 0x60c18306aab2671c;
        *(undefined8 *)(qVar38 + 0x6a8) = 0x945488cea1cc1830;
        *(undefined4 *)(qVar38 + 0x6a9) = 0xcea1cc18;
        *(undefined4 *)(qVar38 + 0x6ad) = 0x46945488;
        *(undefined4 *)(qVar38 + 0x6b1) = 0x4ed0b0e1;
        *(undefined4 *)(qVar38 + 0x6b5) = 0x4f7b2;
        *(undefined8 *)(qVar38 + 0x880) = 0x1c0;
      }
    }
    param_1[0x6c].e_shnum = 1;
    param_1[0x6c].e_shstrndx = 0;
  }
  if ((ulong)param_1[0x6c].e_flags == 0xffffffff) {
    if (iVar35 != 3) {
      uVar55 = 0;
      if ((*(int *)&param_1[0x6c].e_ehsize - 3U < 2) ||
         ((*(int *)&param_1[0x6c].e_ehsize != 0 && (*extraout_RDX != 0)))) goto code_r0x00376bba;
      uVar3._0_1_ = param_1->e_ident_class;
      uVar3._1_1_ = param_1->e_ident_data;
      uVar3._2_1_ = param_1->e_ident_version;
      uVar3._3_1_ = param_1->e_ident_osabi;
      if (1 < uVar3) {
code_r0x003761b0:
        while( true ) {
          uVar55 = *(long *)&param_1[0x16].e_type - *(long *)&param_1[0x17].e_flags;
          uVar37 = 1L << (param_1->e_ident_pad[3] & 0x3f);
          uVar56 = uVar37 - uVar55;
          if (uVar37 < uVar55) {
            uVar56 = 0;
          }
          uVar55 = (ulong)(char)param_1[0x19].e_ident_pad[2];
          uVar37 = uVar55;
          if (uVar56 < uVar55) {
            uVar37 = uVar56;
          }
          if ((long)uVar55 < 0) {
            uVar37 = uVar56;
          }
          if ((uVar37 == 0) || (uVar55 = *extraout_RDX, uVar55 == 0)) break;
          if (uVar55 <= uVar37) {
            uVar37 = uVar55;
          }
          pppplVar57 = *ppppplVar47;
          uVar34 = *(uint *)((long)&param_1[0x16].e_shoff + 4);
          uVar49 = (uint)uVar37;
          if ((uVar34 == 0) && (uVar37 < (uint)param_1[0x16].e_phoff)) {
            *(uint *)((long)&param_1[0x16].e_shoff + 4) = uVar49;
            lVar40 = func_0x003bd100(&param_1[0x15].e_phnum,(ulong)(uVar49 + 2) + 7);
            lVar13._0_4_ = param_1[0x16].e_flags;
            lVar13._4_2_ = param_1[0x16].e_ehsize;
            lVar13._6_2_ = param_1[0x16].e_phentsize;
            if (lVar13 != 0) {
              func_0x0099bda0(lVar40,lVar13,(ulong)((int)param_1[0x16].e_shoff + 2) + 7);
              uVar14._0_4_ = param_1[0x16].e_flags;
              uVar14._4_2_ = param_1[0x16].e_ehsize;
              uVar14._6_2_ = param_1[0x16].e_phentsize;
              func_0x003bd120(&param_1[0x15].e_phnum,uVar14);
            }
            param_1[0x16].e_flags = (int)lVar40;
            param_1[0x16].e_ehsize = (short)((ulong)lVar40 >> 0x20);
            param_1[0x16].e_phentsize = (short)((ulong)lVar40 >> 0x30);
            *(uint *)&param_1[0x16].e_shoff = uVar49;
            *(long *)&param_1[0x16].e_phnum = lVar40 + 2;
            *(undefined1 *)(lVar40 + 1) = 0;
            *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + -2) = 0;
            *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + (ulong)(uint)param_1[0x16].e_shoff) =
                 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 1 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 2 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 3 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 4 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 5 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            *(undefined1 *)
             (*(long *)&param_1[0x16].e_phnum + 6 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
            uVar15._0_2_ = param_1[0x16].e_phnum;
            uVar15._2_2_ = param_1[0x16].e_shentsize;
            uVar15._4_2_ = param_1[0x16].e_shnum;
            uVar15._6_2_ = param_1[0x16].e_shstrndx;
            func_0x0099bda0(uVar15,pppplVar57,uVar37);
            uVar34 = *(uint *)((long)&param_1[0x16].e_shoff + 4);
          }
          else {
            uVar50 = *(uint *)((long)&param_1[0x16].e_phoff + 4);
            if ((uint)param_1[0x16].e_shoff < uVar50) {
              lVar40 = func_0x003bd100(&param_1[0x15].e_phnum,(ulong)(uVar50 + 2) + 7);
              lVar17._0_4_ = param_1[0x16].e_flags;
              lVar17._4_2_ = param_1[0x16].e_ehsize;
              lVar17._6_2_ = param_1[0x16].e_phentsize;
              if (lVar17 != 0) {
                func_0x0099bda0(lVar40,lVar17,(ulong)((int)param_1[0x16].e_shoff + 2) + 7);
                uVar39._0_4_ = param_1[0x16].e_flags;
                uVar39._4_2_ = param_1[0x16].e_ehsize;
                uVar39._6_2_ = param_1[0x16].e_phentsize;
                func_0x003bd120(&param_1[0x15].e_phnum,uVar39);
              }
              param_1[0x16].e_flags = (int)lVar40;
              param_1[0x16].e_ehsize = (short)((ulong)lVar40 >> 0x20);
              param_1[0x16].e_phentsize = (short)((ulong)lVar40 >> 0x30);
              *(uint *)&param_1[0x16].e_shoff = uVar50;
              *(long *)&param_1[0x16].e_phnum = lVar40 + 2;
              *(undefined1 *)(lVar40 + 1) = 0;
              *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + -2) = 0;
              *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + (ulong)(uint)param_1[0x16].e_shoff)
                   = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 1 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 2 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 3 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 4 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 5 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + 6 + (ulong)(uint)param_1[0x16].e_shoff) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + (ulong)((int)param_1[0x16].e_entry - 2)) = 0;
              *(undefined1 *)
               (*(long *)&param_1[0x16].e_phnum + (ulong)((int)param_1[0x16].e_entry - 1)) = 0;
              *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + (ulong)(uint)param_1[0x16].e_entry)
                   = 0xf1;
              uVar34 = *(uint *)((long)&param_1[0x16].e_shoff + 4);
            }
            uVar34 = uVar34 & *(uint *)((long)&param_1[0x16].e_entry + 4);
            uVar56 = (ulong)uVar34;
            uVar55 = (ulong)(uint)param_1[0x16].e_entry;
            uVar50 = (uint)param_1[0x16].e_phoff;
            if (uVar34 < uVar50) {
              uVar52 = (ulong)(uVar50 - uVar34);
              if (uVar37 < uVar52) {
                uVar52 = uVar37;
              }
              func_0x0099bda0(uVar55 + *(long *)&param_1[0x16].e_phnum + uVar56,pppplVar57,uVar52);
              uVar55 = (ulong)(uint)param_1[0x16].e_entry;
            }
            lVar60 = *(long *)&param_1[0x16].e_phnum + uVar56;
            uVar52 = uVar37;
            if (uVar55 < uVar56 + uVar37) {
              uVar55 = *(uint *)((long)&param_1[0x16].e_phoff + 4) - uVar56;
              if (uVar37 < uVar55) {
                uVar55 = uVar37;
              }
              func_0x0099bda0(lVar60,pppplVar57,uVar55);
              lVar60._0_2_ = param_1[0x16].e_phnum;
              lVar60._2_2_ = param_1[0x16].e_shentsize;
              lVar60._4_2_ = param_1[0x16].e_shnum;
              lVar60._6_2_ = param_1[0x16].e_shstrndx;
              lVar40 = (uint)param_1[0x16].e_entry - uVar56;
              pppplVar57 = (long ****)((long)pppplVar57 + lVar40);
              uVar52 = uVar37 - lVar40;
            }
            func_0x0099bda0(lVar60,pppplVar57,uVar52);
            uVar34 = *(uint *)((long)&param_1[0x16].e_shoff + 4);
            *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + -2) =
                 *(undefined1 *)
                  (*(long *)&param_1[0x16].e_phnum + (ulong)((int)param_1[0x16].e_entry - 2));
            *(undefined1 *)(*(long *)&param_1[0x16].e_phnum + -1) =
                 *(undefined1 *)
                  (*(long *)&param_1[0x16].e_phnum + (ulong)((int)param_1[0x16].e_entry - 1));
            uVar34 = (uVar49 & 0x7fffffff) +
                     (*(uint *)((long)&param_1[0x16].e_shoff + 4) & 0x7fffffff) |
                     uVar34 & 0x80000000;
            *(uint *)((long)&param_1[0x16].e_shoff + 4) = uVar34;
          }
          *(ulong *)&param_1[0x16].e_type = *(long *)&param_1[0x16].e_type + uVar37;
          if (uVar34 <= *(uint *)((long)&param_1[0x16].e_entry + 4)) {
            lVar40 = *(long *)&param_1[0x16].e_phnum;
            *(undefined4 *)(lVar40 + 3 + (ulong)uVar34) = 0;
            *(undefined4 *)(lVar40 + (ulong)uVar34) = 0;
          }
          *ppppplVar47 = (long ****)((long)*ppppplVar47 + uVar37);
          *extraout_RDX = *extraout_RDX - uVar37;
          *(ulong *)(param_1 + 0x6c) = *(ulong *)(param_1 + 0x6c) + uVar37;
          if ('\0' < (char)param_1[0x19].e_ident_pad[2]) {
            param_1[0x19].e_ident_pad[2] = param_1[0x19].e_ident_pad[2] - (char)uVar37;
          }
        }
        pEVar58 = param_1;
        iVar33 = func_0x00376c30(param_1,pEVar61,param_6,pqStack_90);
        if (iVar33 != 0) {
          if (param_1[0x19].e_ident_pad[2] == 0xff) {
            iVar5._0_2_ = param_1[0x6c].e_ehsize;
            iVar5._2_2_ = param_1[0x6c].e_phentsize;
            if (iVar5 != 0) {
              if ((iVar5 != 1) ||
                 (lVar16._0_2_ = param_1[0x6c].e_type, lVar16._2_2_ = param_1[0x6c].e_machine,
                 lVar16._4_4_ = param_1[0x6c].e_version, lVar16 != 0)) goto code_r0x003761b0;
              param_1[0x6c].e_ehsize = 0;
              param_1[0x6c].e_phentsize = 0;
              param_1[0x6c].e_ident_abiversion = 0;
              param_1[0x6c].e_ident_pad[0] = 0;
              param_1[0x6c].e_ident_pad[1] = 0;
              param_1[0x6c].e_ident_pad[2] = 0;
              param_1[0x6c].e_ident_pad[3] = 0;
              param_1[0x6c].e_ident_pad[4] = 0;
              param_1[0x6c].e_ident_pad[5] = 0;
              param_1[0x6c].e_ident_pad[6] = 0;
            }
            param_1[0x19].e_ident_pad[2] = 0xfe;
          }
          goto code_r0x003761b0;
        }
        uVar55 = 1;
        lVar18._0_2_ = param_1[0x6c].e_type;
        lVar18._2_2_ = param_1[0x6c].e_machine;
        lVar18._4_4_ = param_1[0x6c].e_version;
        if (lVar18 != 0) goto code_r0x00376bba;
        iVar6._0_2_ = param_1[0x6c].e_ehsize;
        iVar6._2_2_ = param_1[0x6c].e_phentsize;
        if (iVar6 != 0) {
          if (iVar6 != 1) goto code_r0x00376bba;
          goto code_r0x00376ba5;
        }
        if ((iVar35 == 0) && (uVar37 != 0)) goto code_r0x00376bba;
        bVar66 = *extraout_RDX == 0;
        bVar45 = iVar35 == 2 && bVar66;
        bVar63 = iVar35 == 1 && bVar66;
        if ((iVar35 != 2 || !bVar66) && (param_1[0x19].e_ident_pad[2] == 0)) {
          param_1[0x19].e_ident_pad[2] = 0xff;
          bVar63 = true;
        }
        if (param_1->e_entry == 0) {
          uVar55 = *(long *)&param_1[0x16].e_type - *(long *)&param_1[0x17].e_flags;
          qVar38 = uVar55 + *extraout_RDX;
          if (0x3fffffff < qVar38) {
            qVar38 = 0x40000000;
          }
          if (0x3fffffff < (uVar55 | *extraout_RDX)) {
            qVar38 = 0x40000000;
          }
          param_1->e_entry = qVar38;
        }
        pEVar58 = param_1;
        iVar33 = func_0x00376d50(param_1,bVar45,bVar63,&param_1[0x6c].e_type,
                                 &param_1[0x6c].e_ident_abiversion);
        if (iVar33 != 0) {
          if ((bVar63 | bVar45) == 1) {
            *(uint *)&param_1[0x6c].e_ehsize = bVar45 + 1;
          }
          goto code_r0x003761b0;
        }
        uVar55 = 0;
        goto code_r0x00376bba;
      }
      uVar56 = 1L << (param_1->e_ident_abiversion & 0x3f);
      uVar55 = *extraout_RDX;
      uVar37 = uVar56;
      if (uVar55 < uVar56) {
        uVar37 = uVar55;
      }
      uVar52 = 0x20000;
      if (uVar37 < 0x20000) {
        uVar52 = uVar37;
      }
      if (uVar3 == 1) {
        lStack_f0._0_4_ = param_1[0x6b].e_flags;
        lStack_f0._4_2_ = param_1[0x6b].e_ehsize;
        lStack_f0._6_2_ = param_1[0x6b].e_phentsize;
        if ((lStack_f0 == 0) && (0x1ffff < uVar37)) {
          uVar39 = func_0x003bd100(&param_1[0x15].e_phnum,0x80000);
          param_1[0x6b].e_flags = (int)uVar39;
          param_1[0x6b].e_ehsize = (short)((ulong)uVar39 >> 0x20);
          param_1[0x6b].e_phentsize = (short)((ulong)uVar39 >> 0x30);
          uStack_118 = func_0x003bd100(&param_1[0x15].e_phnum,0x20000);
          param_1[0x6b].e_phnum = (short)uStack_118;
          param_1[0x6b].e_shentsize = (short)((ulong)uStack_118 >> 0x10);
          param_1[0x6b].e_shnum = (short)((ulong)uStack_118 >> 0x20);
          param_1[0x6b].e_shstrndx = (short)((ulong)uStack_118 >> 0x30);
          lStack_f0._0_4_ = param_1[0x6b].e_flags;
          lStack_f0._4_2_ = param_1[0x6b].e_ehsize;
          lStack_f0._6_2_ = param_1[0x6b].e_phentsize;
          if (lStack_f0 == 0) {
code_r0x003767e5:
            lStack_108 = func_0x003bd100(&param_1[0x15].e_phnum,uVar52 * 4);
            uStack_118 = func_0x003bd100(&param_1[0x15].e_phnum,uVar52);
            uStack_110 = uStack_118;
            lStack_f0 = lStack_108;
          }
          else {
            uStack_110 = 0;
            lStack_108 = 0;
          }
        }
        else if (lStack_f0 == 0) {
          if (uVar55 != 0) goto code_r0x003767e5;
          uStack_118 = 0;
          uStack_110 = 0;
          lStack_f0 = 0;
          lStack_108 = 0;
        }
        else {
          uStack_118._0_2_ = param_1[0x6b].e_phnum;
          uStack_118._2_2_ = param_1[0x6b].e_shentsize;
          uStack_118._4_2_ = param_1[0x6b].e_shnum;
          uStack_118._6_2_ = param_1[0x6b].e_shstrndx;
          uStack_110 = 0;
          lStack_108 = 0;
        }
      }
      else {
        uStack_118 = 0;
        uStack_110 = 0;
        lStack_f0 = 0;
        lStack_108 = 0;
      }
      pqVar64 = pqStack_90;
code_r0x00376869:
      do {
        iVar33 = func_0x00376c30(param_1,pEVar61,param_6,pqVar64);
      } while (iVar33 != 0);
      lVar19._0_2_ = param_1[0x6c].e_type;
      lVar19._2_2_ = param_1[0x6c].e_machine;
      lVar19._4_4_ = param_1[0x6c].e_version;
      if (((lVar19 == 0) &&
          (iVar7._0_2_ = param_1[0x6c].e_ehsize, iVar7._2_2_ = param_1[0x6c].e_phentsize, iVar7 == 0
          )) && (uVar55 = *extraout_RDX, iVar35 != 0 || uVar55 != 0)) {
        uVar37 = uVar55;
        if (uVar55 > uVar56) {
          uVar37 = uVar56;
        }
        uStack_d8 = (ulong)param_1[0x19].e_ident_pad[1];
        iVar33 = 1;
        if (iVar35 != 1 || uVar55 != 0) goto code_r0x003768f3;
        goto code_r0x00376850;
      }
      pEVar58 = (Elf64_Ehdr *)&param_1[0x15].e_phnum;
      func_0x003bd120(pEVar58,lStack_108);
      func_0x003bd120(pEVar58,uStack_110);
      iVar10._0_2_ = param_1[0x6c].e_ehsize;
      iVar10._2_2_ = param_1[0x6c].e_phentsize;
      uVar55 = 1;
      if ((iVar10 == 1) &&
         (lVar21._0_2_ = param_1[0x6c].e_type, lVar21._2_2_ = param_1[0x6c].e_machine,
         lVar21._4_4_ = param_1[0x6c].e_version, lVar21 == 0)) {
code_r0x00376ba5:
        param_1[0x6c].e_ehsize = 0;
        param_1[0x6c].e_phentsize = 0;
        param_1[0x6c].e_ident_abiversion = 0;
        param_1[0x6c].e_ident_pad[0] = 0;
        param_1[0x6c].e_ident_pad[1] = 0;
        param_1[0x6c].e_ident_pad[2] = 0;
        param_1[0x6c].e_ident_pad[3] = 0;
        param_1[0x6c].e_ident_pad[4] = 0;
        param_1[0x6c].e_ident_pad[5] = 0;
        param_1[0x6c].e_ident_pad[6] = 0;
        uVar55 = 1;
      }
      goto code_r0x00376bba;
    }
  }
  else {
    uVar55 = 0;
    if ((iVar35 != 3) || (*extraout_RDX != (ulong)param_1[0x6c].e_flags)) goto code_r0x00376bba;
  }
  if (param_1->e_entry == 0) {
    uVar55 = *(long *)&param_1[0x16].e_type - *(long *)&param_1[0x17].e_flags;
    qVar38 = 0x40000000;
    if (uVar55 < 0x40000000) {
      qVar38 = uVar55;
    }
    param_1->e_entry = qVar38;
  }
  uVar55 = 0;
  if (*extraout_RDX < 0x1000001) {
    if (*(int *)&param_1[0x6c].e_ehsize == 0) {
      param_1[0x6c].e_flags = (dword)*extraout_RDX;
      param_1[0x6c].e_ehsize = 3;
      param_1[0x6c].e_phentsize = 0;
    }
    else {
      uVar55 = 0;
      if (1 < *(int *)&param_1[0x6c].e_ehsize - 3U) goto code_r0x00376bba;
    }
code_r0x00375edc:
    while( true ) {
      while( true ) {
        do {
          pEVar58 = param_1;
          iVar35 = func_0x00376c30(param_1,pEVar61,param_6,pqStack_90);
        } while (iVar35 != 0);
        lVar12._0_2_ = param_1[0x6c].e_type;
        lVar12._2_2_ = param_1[0x6c].e_machine;
        lVar12._4_4_ = param_1[0x6c].e_version;
        uVar55 = 1;
        if (lVar12 != 0) goto code_r0x00376bba;
        qVar38._0_2_ = param_1[0x16].e_type;
        qVar38._2_2_ = param_1[0x16].e_machine;
        qVar38._4_4_ = param_1[0x16].e_version;
        if (qVar38 == param_1[0x17].e_shoff) break;
        pEVar58 = param_1;
        iVar35 = func_0x00376d50(param_1,0,1,&param_1[0x6c].e_type,&param_1[0x6c].e_ident_abiversion
                                );
        uVar55 = 0;
        if (iVar35 == 0) goto code_r0x00376bba;
      }
      iVar4._0_2_ = param_1[0x6c].e_ehsize;
      iVar4._2_2_ = param_1[0x6c].e_phentsize;
      if (iVar4 != 3) break;
      *(qword **)&param_1[0x6c].e_ident_abiversion = &param_1[0x6c].e_phoff;
      uVar34 = param_1[0x6c].e_flags;
      uVar56 = (ulong)uVar34;
      bVar44 = param_1[0x19].e_ident_pad[1];
      uVar52 = (ulong)bVar44;
      *(undefined2 *)&param_1[0x6c].e_phoff = *(undefined2 *)&param_1[0x19].e_ident_abiversion;
      param_1[0x19].e_ident_abiversion = 0;
      param_1[0x19].e_ident_pad[0] = 0;
      param_1[0x19].e_ident_pad[1] = 0;
      *(ulong *)(param_1[0x6c].e_ident_pad + (ulong)(bVar44 >> 3) + 0x17) =
           (ulong)param_1[0x6c].e_ident_pad[(ulong)(bVar44 >> 3) + 0x17];
      uVar37 = uVar52 + 1 >> 3;
      uVar59 = (ulong)(bVar44 + 3 >> 3);
      uVar55 = uVar52 + 4;
      *(ulong *)(param_1[0x6c].e_ident_pad + uVar37 + 0x17) =
           3L << ((byte)(uVar52 + 1) & 7) | (ulong)param_1[0x6c].e_ident_pad[uVar37 + 0x17];
      *(ulong *)(param_1[0x6c].e_ident_pad + uVar59 + 0x17) =
           (ulong)param_1[0x6c].e_ident_pad[uVar59 + 0x17];
      if (uVar56 == 1) {
code_r0x00376018:
        uVar37 = uVar52 + (ulong)uVar34 * 8;
        *(ulong *)(param_1[0x6c].e_ident_pad + (uVar55 >> 3) + 0x17) =
             (ulong)uVar34 << ((byte)uVar55 & 7) |
             (ulong)param_1[0x6c].e_ident_pad[(uVar55 >> 3) + 0x17];
        uVar55 = uVar52 + 6 >> 3;
        *(ulong *)(param_1[0x6c].e_ident_pad + uVar55 + 0x17) =
             uVar56 - 1 << ((byte)(uVar52 + 6) & 7) |
             (ulong)param_1[0x6c].e_ident_pad[uVar55 + 0x17];
      }
      else {
        if (uVar34 != 0) {
          iVar35 = 0x1f;
          if (uVar34 - 1 != 0) {
            for (; uVar34 - 1 >> iVar35 == 0; iVar35 = iVar35 + -1) {
            }
          }
          uVar34 = iVar35 + 8U >> 3;
          goto code_r0x00376018;
        }
        *(ulong *)(param_1[0x6c].e_ident_pad + (uVar55 >> 3) + 0x17) =
             (ulong)param_1[0x6c].e_ident_pad[(uVar55 >> 3) + 0x17];
        uVar37 = uVar52;
      }
      uVar55 = uVar37 + 0xd >> 3;
      param_1[0x6c].e_type = (short)uVar55;
      param_1[0x6c].e_machine = (short)(uVar55 >> 0x10);
      param_1[0x6c].e_version = (int)(uVar55 >> 0x20);
      param_1[0x6c].e_ehsize = 4;
      param_1[0x6c].e_phentsize = 0;
    }
    uVar37 = (ulong)param_1[0x6c].e_flags;
    if (uVar37 != 0) {
      uVar56._0_1_ = pEVar61->e_ident_magic_num;
      uVar56._1_1_ = pEVar61->e_ident_magic_str[0];
      uVar56._2_1_ = pEVar61->e_ident_magic_str[1];
      uVar56._3_1_ = pEVar61->e_ident_magic_str[2];
      uVar56._4_1_ = pEVar61->e_ident_class;
      uVar56._5_1_ = pEVar61->e_ident_data;
      uVar56._6_1_ = pEVar61->e_ident_version;
      uVar56._7_1_ = pEVar61->e_ident_osabi;
      if (uVar56 == 0) {
        if (0xf < param_1[0x6c].e_flags) {
          uVar37 = 0x10;
        }
        *(qword **)&param_1[0x6c].e_ident_abiversion = &param_1[0x6c].e_phoff;
        func_0x0099bda0(&param_1[0x6c].e_phoff,*ppppplVar47,uVar37);
        *ppppplVar47 = (long ****)((long)*ppppplVar47 + uVar37);
        *extraout_RDX = *extraout_RDX - uVar37;
        *(ulong *)(param_1 + 0x6c) = *(ulong *)(param_1 + 0x6c) + uVar37;
        param_1[0x6c].e_flags = param_1[0x6c].e_flags - (int)uVar37;
        param_1[0x6c].e_type = (short)uVar37;
        param_1[0x6c].e_machine = (short)(uVar37 >> 0x10);
        param_1[0x6c].e_version = (int)(uVar37 >> 0x20);
      }
      else {
        if (uVar37 < uVar56) {
          uVar56 = uVar37;
        }
        func_0x0099bda0(*param_6,*ppppplVar47,uVar56);
        *ppppplVar47 = (long ****)((long)*ppppplVar47 + uVar56);
        *extraout_RDX = *extraout_RDX - uVar56;
        *(ulong *)(param_1 + 0x6c) = *(ulong *)(param_1 + 0x6c) + uVar56;
        param_1[0x6c].e_flags = param_1[0x6c].e_flags - (int)uVar56;
        *param_6 = (ulong ****)((long)*param_6 + uVar56);
        *(ulong *)pEVar61 = *(ulong *)pEVar61 - uVar56;
      }
      goto code_r0x00375edc;
    }
    param_1[0x6c].e_flags = 0xffffffff;
    param_1[0x6c].e_ehsize = 0;
    param_1[0x6c].e_phentsize = 0;
  }
code_r0x00376bba:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_d0) {
    func_0x0099bd00();
    uVar55 = 0;
    iVar11._0_2_ = pEVar58[0x6c].e_ehsize;
    iVar11._2_2_ = pEVar58[0x6c].e_phentsize;
    if (iVar11 == 2) {
      lVar22._0_2_ = pEVar58[0x6c].e_type;
      lVar22._2_2_ = pEVar58[0x6c].e_machine;
      lVar22._4_4_ = pEVar58[0x6c].e_version;
      uVar55 = (ulong)(lVar22 == 0);
    }
    return uVar55;
  }
  return uVar55;
code_r0x003768f3:
  uVar52 = uVar37 * 2 + 0x1f7;
  uVar59._0_1_ = pEVar61->e_ident_magic_num;
  uVar59._1_1_ = pEVar61->e_ident_magic_str[0];
  uVar59._2_1_ = pEVar61->e_ident_magic_str[1];
  uVar59._3_1_ = pEVar61->e_ident_magic_str[2];
  uVar59._4_1_ = pEVar61->e_ident_class;
  uVar59._5_1_ = pEVar61->e_ident_data;
  uVar59._6_1_ = pEVar61->e_ident_version;
  uVar59._7_1_ = pEVar61->e_ident_osabi;
  if (uVar59 < uVar52) {
    ppppuVar41 = (ulong ****)param_1[0x19].e_entry;
    uVar48._0_2_ = param_1[0x19].e_type;
    uVar48._2_2_ = param_1[0x19].e_machine;
    uVar48._4_4_ = param_1[0x19].e_version;
    if (uVar48 < uVar52) {
      func_0x003bd120(&param_1[0x15].e_phnum);
      param_1[0x19].e_entry = 0;
      ppppuVar41 = (ulong ****)func_0x003bd100(&param_1[0x15].e_phnum,uVar37 * 2 + 0x1f7);
      param_1[0x19].e_entry = (qword)ppppuVar41;
      *(ulong *)&param_1[0x19].e_type = uVar37 * 2 + 0x1f7;
    }
  }
  else {
    ppppuVar41 = *param_6;
  }
  bVar63 = iVar35 == 2 && uVar55 <= uVar56;
  *(byte *)ppppuVar41 = param_1[0x19].e_ident_abiversion;
  *(byte *)((long)ppppuVar41 + 1) = param_1[0x19].e_ident_pad[0];
  iVar8._0_1_ = param_1->e_ident_class;
  iVar8._1_1_ = param_1->e_ident_data;
  iVar8._2_1_ = param_1->e_ident_version;
  iVar8._3_1_ = param_1->e_ident_osabi;
  uVar48 = 0x20000;
  if (iVar8 == 0) {
    uVar48 = 0x8000;
  }
  if (uVar37 <= uVar48) {
    uVar48 = uVar37;
  }
  uVar32 = 0x100;
  do {
    uVar65 = uVar32;
    uVar32 = uVar65 * 2;
  } while (uVar65 < uVar48);
  uVar48 = uVar65 * 2;
  if ((uVar65 & 0xaaa00) != 0) {
    uVar48 = uVar65;
  }
  if (iVar8 != 0) {
    uVar48 = uVar65;
  }
  pwVar42 = &param_1[0x2b].e_type;
  if (0x400 < uVar48) {
    if (param_1[0x6b].e_entry < uVar48) {
      param_1[0x6b].e_entry = uVar48;
      uVar20._0_2_ = param_1[0x6b].e_type;
      uVar20._2_2_ = param_1[0x6b].e_machine;
      uVar20._4_4_ = param_1[0x6b].e_version;
      func_0x003bd120(&param_1[0x15].e_phnum,uVar20);
      param_1[0x6b].e_type = 0;
      param_1[0x6b].e_machine = 0;
      param_1[0x6b].e_version = 0;
      pwVar42 = (word *)func_0x003bd100(&param_1[0x15].e_phnum,uVar48 * 4);
      *(word **)&param_1[0x6b].e_type = pwVar42;
    }
    else {
      pwVar42 = *(word **)&param_1[0x6b].e_type;
    }
  }
  func_0x0099bdb0(pwVar42,0,uVar48 * 4);
  iVar9._0_1_ = param_1->e_ident_class;
  iVar9._1_1_ = param_1->e_ident_data;
  iVar9._2_1_ = param_1->e_ident_version;
  iVar9._3_1_ = param_1->e_ident_osabi;
  if (iVar9 == 0) {
    func_0x00386ab0(param_1[0x6b].e_phoff,*ppppplVar47,uVar37,bVar63,pwVar42,uVar48,&uStack_d8,
                    ppppuVar41);
  }
  else {
    func_0x0037bd70(param_1[0x6b].e_shoff,*ppppplVar47,uVar37,bVar63,lStack_f0,uStack_118,pwVar42,
                    uVar48,&uStack_d8,ppppuVar41);
  }
  if (uVar55 != 0) {
    *ppppplVar47 = (long ****)((long)*ppppplVar47 + uVar37);
    *extraout_RDX = *extraout_RDX - uVar37;
    *(ulong *)(param_1 + 0x6c) = *(ulong *)(param_1 + 0x6c) + uVar37;
  }
  uVar37 = uStack_d8 >> 3;
  if (uVar59 < uVar52) {
    *(ulong *****)&param_1[0x6c].e_ident_abiversion = ppppuVar41;
    param_1[0x6c].e_type = (short)uVar37;
    param_1[0x6c].e_machine = (short)(uVar37 >> 0x10);
    param_1[0x6c].e_version = (int)(uVar37 >> 0x20);
  }
  else {
    *param_6 = (ulong ****)((long)*param_6 + uVar37);
    *(ulong *)pEVar61 = *(ulong *)pEVar61 - uVar37;
    qVar38 = param_1[0x6c].e_entry + uVar37;
    param_1[0x6c].e_entry = qVar38;
    if (pqStack_90 != (qword *)0x0) {
      *pqStack_90 = qVar38;
    }
  }
  bVar44 = *(byte *)((long)ppppuVar41 + uVar37);
  param_1[0x19].e_ident_abiversion = (char)(ushort)bVar44;
  param_1[0x19].e_ident_pad[0] = (char)((ushort)bVar44 >> 8);
  param_1[0x19].e_ident_pad[1] = (byte)uStack_d8 & 7;
  pqVar64 = pqStack_90;
  iVar33 = (iVar35 == 2) + 1;
  if (iVar35 - 1U < 2 && uVar55 <= uVar56) {
code_r0x00376850:
    param_1[0x6c].e_ehsize = (short)iVar33;
    param_1[0x6c].e_phentsize = (short)((uint)iVar33 >> 0x10);
    pqVar64 = pqStack_90;
  }
  goto code_r0x00376869;
}


