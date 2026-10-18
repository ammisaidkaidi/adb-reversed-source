// Function: _Z15adb_kill_serverv
// Address: 0032c8c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _Z15adb_kill_serverv(void)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte *extraout_RDX;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  int *piVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  ulong uStack_b8;
  ulong auStack_88 [4];
  ulong auStack_68 [3];
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  int iStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
     (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_48,&UNK_00183124,0xc4,1,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_48);
    func_0x0032eb30(uVar8,&UNK_00176d31,0xf);
    _ZN7android4base10LogMessageD2Ev(&uStack_48);
    *puVar5 = uVar1;
  }
  uVar8 = uRam0000000000a00520;
  uStack_48 = 0;
  uStack_40 = 0;
  pcStack_38 = (char *)0x0;
  uStack_4c = 0xffffffff;
  uVar4 = func_0x0099bcf0(uRam0000000000a00520);
  cVar2 = _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
                    (&uStack_4c,uVar8,uVar4,0,0,&uStack_48);
  if (cVar2 == '\0') {
    pcVar9 = pcStack_38;
    if ((uStack_48 & 1) == 0) {
      pcVar9 = (char *)((long)&uStack_48 + 1);
    }
    piVar13 = (int *)&UNK_00170332;
    func_0x0099bd30(_stderr,&UNK_00170332,uRam0000000000a00520,pcVar9);
  }
  else {
    cVar2 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                      (uStack_4c,&UNK_00181809,9);
    uVar4 = _stderr;
    if (cVar2 == '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar8 = func_0x0099bd20(*puVar5);
      piVar13 = (int *)&UNK_0016c5a6;
      uVar10 = 0;
      func_0x0099bd30(uVar4,&UNK_0016c5a6,uVar8);
      goto code_r0x0032c98e;
    }
    iStack_2c = 0;
    piVar13 = &iStack_2c;
    cVar2 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(uStack_4c,piVar13,4);
    if (cVar2 == '\0') {
      piVar13 = (int *)0x2b;
      func_0x0099bd40(&UNK_0015f735,0x2b,1,_stderr);
      uVar10 = 0;
      goto code_r0x0032c98e;
    }
    if (iStack_2c == 0x4c494146) {
      auStack_68[0] = 0;
      auStack_68[1] = 0;
      auStack_68[2] = 0;
      auStack_88[0] = 0;
      auStack_88[1] = 0;
      auStack_88[2] = 0;
      cVar2 = _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                        (uStack_4c,auStack_68,auStack_88);
      puVar11 = auStack_88;
      if (cVar2 != '\0') {
        puVar11 = auStack_68;
      }
      if ((*puVar11 & 1) == 0) {
        pbVar12 = (byte *)((long)puVar11 + 1);
      }
      else {
        pbVar12 = (byte *)puVar11[2];
      }
      piVar13 = (int *)&UNK_001692c9;
      func_0x0099bd30(_stderr,&UNK_001692c9,pbVar12);
      if ((auStack_88[0] & 1) != 0) {
        piVar13 = (int *)(auStack_88[0] & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(auStack_88[2]);
      }
      if ((auStack_68[0] & 1) != 0) {
        piVar13 = (int *)(auStack_68[0] & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(auStack_68[2]);
      }
      uVar10 = 0;
      goto code_r0x0032c98e;
    }
    _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(uStack_4c);
  }
  uVar10 = CONCAT71((int7)((ulong)uVar8 >> 8),1);
code_r0x0032c98e:
  puVar5 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar5;
  pcVar9 = (char *)(ulong)uStack_4c;
  if (uStack_4c != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar5 = uVar1;
  if ((uStack_48 & 1) != 0) {
    piVar13 = (int *)(uStack_48 & 0xfffffffffffffffe);
    pcVar9 = pcStack_38;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    puVar14 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
    uStack_b8 = uVar10;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_e0,&UNK_00183124,0x163,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_e0);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189390,0x16);
      func_0x0032eb30(uVar8,pcVar9,piVar13);
      _ZN7android4base10LogMessageD2Ev(&bStack_e0);
      *puVar7 = uVar1;
    }
    cVar2 = _Z24adb_check_server_versionPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                      (extraout_RDX);
    pbVar6 = (byte *)0xffffffff;
    pbVar12 = extraout_RDX;
    if (cVar2 == '\0') goto code_r0x0032ccdd;
    if ((piVar13 == (int *)0x11) &&
       (auVar15[0] = -(*pcVar9 == 'h'), auVar15[1] = -(pcVar9[1] == 'o'),
       auVar15[2] = -(pcVar9[2] == 's'), auVar15[3] = -(pcVar9[3] == 't'),
       auVar15[4] = -(pcVar9[4] == ':'), auVar15[5] = -(pcVar9[5] == 's'),
       auVar15[6] = -(pcVar9[6] == 't'), auVar15[7] = -(pcVar9[7] == 'a'),
       auVar15[8] = -(pcVar9[8] == 'r'), auVar15[9] = -(pcVar9[9] == 't'),
       auVar15[10] = -(pcVar9[10] == '-'), auVar15[0xb] = -(pcVar9[0xb] == 's'),
       auVar15[0xc] = -(pcVar9[0xc] == 'e'), auVar15[0xd] = -(pcVar9[0xd] == 'r'),
       auVar15[0xe] = -(pcVar9[0xe] == 'v'), auVar15[0xf] = -(pcVar9[0xf] == 'e'),
       auVar16[0] = -(pcVar9[0x10] == 'r'), auVar16[1] = 0xff, auVar16[2] = 0xff, auVar16[3] = 0xff,
       auVar16[4] = 0xff, auVar16[5] = 0xff, auVar16[6] = 0xff, auVar16[7] = 0xff, auVar16[8] = 0xff
       , auVar16[9] = 0xff, auVar16[10] = 0xff, auVar16[0xb] = 0xff, auVar16[0xc] = 0xff,
       auVar16[0xd] = 0xff, auVar16[0xe] = 0xff, auVar16[0xf] = 0xff, auVar16 = auVar16 & auVar15,
       (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff)) {
      pbVar6 = (byte *)0x0;
      goto code_r0x0032ccdd;
    }
    uVar3 = func_0x0032d230(pcVar9,piVar13,0,extraout_RDX,0);
    pbVar6 = (byte *)(ulong)uVar3;
    puVar7 = (undefined4 *)func_0x0099bce0();
    if (uVar3 == 0xffffffff) {
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        puVar5 = (undefined4 *)0xffffffff;
        if (cVar2 != '\0') {
          uVar1 = *puVar7;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_c8,&UNK_00183124,0x171,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_c8);
          if ((*extraout_RDX & 1) == 0) {
            pbVar12 = extraout_RDX + 1;
          }
          else {
            pbVar12 = *(byte **)(extraout_RDX + 0x10);
          }
          _ZN7android4base12StringPrintfEPKcz(&bStack_e0,&UNK_00176d41,pbVar12);
          func_0x0032e5a0(uVar8,&bStack_e0);
          if ((bStack_e0 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_d0,CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_c8);
          *puVar7 = uVar1;
        }
      }
    }
    else {
      pbVar12 = extraout_RDX;
      puVar5 = puVar14;
      if (uVar3 == 0xfffffffe) {
        func_0x0099bd40(&UNK_0015931c,0x1b,1,_stderr);
        pbVar12 = pbVar6;
      }
    }
    puVar14 = puVar5;
    if (((byte)adb_trace_mask & 1) == 0) goto code_r0x0032ccdd;
    if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032ccdd;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pbVar12 = pbVar6;
    if (cVar2 != '\0') goto code_r0x0032cde2;
    while( true ) {
      pbVar6 = (byte *)((ulong)pbVar12 & 0xffffffff);
      puVar14 = puVar7;
code_r0x0032ccdd:
      puVar7 = puVar14;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) break;
      func_0x0099bd00();
code_r0x0032cde2:
      uVar1 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_c8,&UNK_00183124,0x175,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_c8);
      _ZN7android4base12StringPrintfEPKcz(&bStack_e0,&UNK_0015ad84,(ulong)pbVar12 & 0xffffffff);
      func_0x0032e5a0(uVar8,&bStack_e0);
      if ((bStack_e0 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_d0,CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_c8);
      *puVar7 = uVar1;
    }
    return pbVar6;
  }
  return (byte *)(uVar10 & 0xffffffff);
}


