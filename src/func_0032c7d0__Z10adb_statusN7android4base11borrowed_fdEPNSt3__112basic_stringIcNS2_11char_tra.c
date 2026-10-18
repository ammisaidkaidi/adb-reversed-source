// Function: _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 0032c7d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                 (ulong param_1,ulong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *extraout_RDX;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  int *piVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte bStack_128;
  undefined7 uStack_127;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  ulong uStack_100;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  int iStack_74;
  long lStack_70;
  ulong *puStack_68;
  ulong uStack_60;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  long lStack_20;
  
  uVar11 = param_1 & 0xffffffff;
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_24 = 0;
  uStack_28 = 0;
  cVar3 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(param_1,&uStack_28,4);
  if (cVar3 == '\0') {
    _Z10perror_strPKc(&uStack_40,&UNK_001846dc);
    bVar1 = (byte)*param_2;
joined_r0x0032c85f:
    if ((bVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(param_2[2],*param_2 & 0xfffffffffffffffe);
    }
    param_2[2] = uStack_30;
    *param_2 = uStack_40;
    param_2[1] = uStack_38;
code_r0x0032c880:
    pbVar13 = (byte *)0x0;
  }
  else {
    if (uStack_28 != 0x59414b4f) {
      if (uStack_28 != 0x4c494146) {
        _ZN7android4base12StringPrintfEPKcz
                  (&uStack_40,&UNK_0015f707,(int)(char)uStack_28,(int)uStack_28._1_1_,
                   (int)uStack_28._2_1_,(int)uStack_28._3_1_);
        bVar1 = (byte)*param_2;
        goto joined_r0x0032c85f;
      }
      _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                (uVar11,param_2,param_2);
      goto code_r0x0032c880;
    }
    pbVar13 = (byte *)0x1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return pbVar13;
  }
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_68 = param_2;
  uStack_60 = uVar11;
  if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar6 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_90,&UNK_00183124,0xc4,1,0,0xffffffff);
    uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_90);
    func_0x0032eb30(uVar9,&UNK_00176d31,0xf);
    _ZN7android4base10LogMessageD2Ev(&uStack_90);
    *puVar6 = uVar2;
  }
  uVar9 = uRam0000000000a00520;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_80 = (char *)0x0;
  uStack_94 = 0xffffffff;
  uVar5 = func_0x0099bcf0(uRam0000000000a00520);
  cVar3 = _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
                    (&uStack_94,uVar9,uVar5,0,0,&uStack_90);
  if (cVar3 == '\0') {
    pcVar10 = pcStack_80;
    if ((uStack_90 & 1) == 0) {
      pcVar10 = (char *)((long)&uStack_90 + 1);
    }
    piVar14 = (int *)&UNK_00170332;
    func_0x0099bd30(_stderr,&UNK_00170332,uRam0000000000a00520,pcVar10);
  }
  else {
    cVar3 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                      (uStack_94,&UNK_00181809,9);
    uVar5 = _stderr;
    if (cVar3 == '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar9 = func_0x0099bd20(*puVar6);
      piVar14 = (int *)&UNK_0016c5a6;
      uVar11 = 0;
      func_0x0099bd30(uVar5,&UNK_0016c5a6,uVar9);
      goto code_r0x0032c98e;
    }
    iStack_74 = 0;
    piVar14 = &iStack_74;
    cVar3 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(uStack_94,piVar14,4);
    if (cVar3 == '\0') {
      piVar14 = (int *)0x2b;
      func_0x0099bd40(&UNK_0015f735,0x2b,1,_stderr);
      uVar11 = 0;
      goto code_r0x0032c98e;
    }
    if (iStack_74 == 0x4c494146) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      cVar3 = _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                        (uStack_94,&uStack_b0,&uStack_d0);
      puVar12 = &uStack_d0;
      if (cVar3 != '\0') {
        puVar12 = &uStack_b0;
      }
      if ((*puVar12 & 1) == 0) {
        pbVar13 = (byte *)((long)puVar12 + 1);
      }
      else {
        pbVar13 = (byte *)puVar12[2];
      }
      piVar14 = (int *)&UNK_001692c9;
      func_0x0099bd30(_stderr,&UNK_001692c9,pbVar13);
      if ((uStack_d0 & 1) != 0) {
        piVar14 = (int *)(uStack_d0 & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_c0);
      }
      if ((uStack_b0 & 1) != 0) {
        piVar14 = (int *)(uStack_b0 & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_a0);
      }
      uVar11 = 0;
      goto code_r0x0032c98e;
    }
    _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(uStack_94);
  }
  uVar11 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
code_r0x0032c98e:
  puVar6 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar6;
  pcVar10 = (char *)(ulong)uStack_94;
  if (uStack_94 != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar6 = uVar2;
  if ((uStack_90 & 1) != 0) {
    piVar14 = (int *)(uStack_90 & 0xfffffffffffffffe);
    pcVar10 = pcStack_80;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return (byte *)(uVar11 & 0xffffffff);
  }
  func_0x0099bd00();
  puVar15 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_100 = uVar11;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  if (cVar3 != '\0') {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_128,&UNK_00183124,0x163,1,0,0xffffffff);
    uVar9 = _ZN7android4base10LogMessage6streamEv(&bStack_128);
    uVar9 = func_0x0032eb30(uVar9,&UNK_00189390,0x16);
    func_0x0032eb30(uVar9,pcVar10,piVar14);
    _ZN7android4base10LogMessageD2Ev(&bStack_128);
    *puVar8 = uVar2;
  }
  cVar3 = _Z24adb_check_server_versionPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                    (extraout_RDX);
  pbVar7 = (byte *)0xffffffff;
  pbVar13 = extraout_RDX;
  if (cVar3 == '\0') goto code_r0x0032ccdd;
  if ((piVar14 == (int *)0x11) &&
     (auVar16[0] = -(*pcVar10 == 'h'), auVar16[1] = -(pcVar10[1] == 'o'),
     auVar16[2] = -(pcVar10[2] == 's'), auVar16[3] = -(pcVar10[3] == 't'),
     auVar16[4] = -(pcVar10[4] == ':'), auVar16[5] = -(pcVar10[5] == 's'),
     auVar16[6] = -(pcVar10[6] == 't'), auVar16[7] = -(pcVar10[7] == 'a'),
     auVar16[8] = -(pcVar10[8] == 'r'), auVar16[9] = -(pcVar10[9] == 't'),
     auVar16[10] = -(pcVar10[10] == '-'), auVar16[0xb] = -(pcVar10[0xb] == 's'),
     auVar16[0xc] = -(pcVar10[0xc] == 'e'), auVar16[0xd] = -(pcVar10[0xd] == 'r'),
     auVar16[0xe] = -(pcVar10[0xe] == 'v'), auVar16[0xf] = -(pcVar10[0xf] == 'e'),
     auVar17[0] = -(pcVar10[0x10] == 'r'), auVar17[1] = 0xff, auVar17[2] = 0xff, auVar17[3] = 0xff,
     auVar17[4] = 0xff, auVar17[5] = 0xff, auVar17[6] = 0xff, auVar17[7] = 0xff, auVar17[8] = 0xff,
     auVar17[9] = 0xff, auVar17[10] = 0xff, auVar17[0xb] = 0xff, auVar17[0xc] = 0xff,
     auVar17[0xd] = 0xff, auVar17[0xe] = 0xff, auVar17[0xf] = 0xff, auVar17 = auVar17 & auVar16,
     (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff)) {
    pbVar7 = (byte *)0x0;
    goto code_r0x0032ccdd;
  }
  uVar4 = func_0x0032d230(pcVar10,piVar14,0,extraout_RDX,0);
  pbVar7 = (byte *)(ulong)uVar4;
  puVar8 = (undefined4 *)func_0x0099bce0();
  if (uVar4 == 0xffffffff) {
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      puVar6 = (undefined4 *)0xffffffff;
      if (cVar3 != '\0') {
        uVar2 = *puVar8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_110,&UNK_00183124,0x171,1,0,0xffffffff);
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_110);
        if ((*extraout_RDX & 1) == 0) {
          pbVar13 = extraout_RDX + 1;
        }
        else {
          pbVar13 = *(byte **)(extraout_RDX + 0x10);
        }
        _ZN7android4base12StringPrintfEPKcz(&bStack_128,&UNK_00176d41,pbVar13);
        func_0x0032e5a0(uVar9,&bStack_128);
        if ((bStack_128 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_110);
        *puVar8 = uVar2;
      }
    }
  }
  else {
    pbVar13 = extraout_RDX;
    puVar6 = puVar15;
    if (uVar4 == 0xfffffffe) {
      func_0x0099bd40(&UNK_0015931c,0x1b,1,_stderr);
      pbVar13 = pbVar7;
    }
  }
  puVar15 = puVar6;
  if (((byte)adb_trace_mask & 1) == 0) goto code_r0x0032ccdd;
  if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032ccdd;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  pbVar13 = pbVar7;
  if (cVar3 != '\0') goto code_r0x0032cde2;
  while( true ) {
    pbVar7 = (byte *)((ulong)pbVar13 & 0xffffffff);
    puVar15 = puVar8;
code_r0x0032ccdd:
    puVar8 = puVar15;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_108) break;
    func_0x0099bd00();
code_r0x0032cde2:
    uVar2 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_110,&UNK_00183124,0x175,1,0,0xffffffff);
    uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_110);
    _ZN7android4base12StringPrintfEPKcz(&bStack_128,&UNK_0015ad84,(ulong)pbVar13 & 0xffffffff);
    func_0x0032e5a0(uVar9,&bStack_128);
    if ((bStack_128 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_110);
    *puVar8 = uVar2;
  }
  return pbVar7;
}


