// Function: _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
// Address: 0032cb80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                 (char *param_1,long param_2,byte *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  puVar7 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)0x0;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_58,&UNK_00183124,0x163,1,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(&bStack_58);
    uVar6 = func_0x0032eb30(uVar6,&UNK_00189390,0x16);
    func_0x0032eb30(uVar6,param_1,param_2);
    _ZN7android4base10LogMessageD2Ev(&bStack_58);
    *puVar5 = uVar1;
  }
  cVar2 = _Z24adb_check_server_versionPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                    (param_3);
  pbVar4 = (byte *)0xffffffff;
  if (cVar2 == '\0') goto code_r0x0032ccdd;
  if (param_2 == 0x11) {
    auVar9[0] = -(*param_1 == 'h');
    auVar9[1] = -(param_1[1] == 'o');
    auVar9[2] = -(param_1[2] == 's');
    auVar9[3] = -(param_1[3] == 't');
    auVar9[4] = -(param_1[4] == ':');
    auVar9[5] = -(param_1[5] == 's');
    auVar9[6] = -(param_1[6] == 't');
    auVar9[7] = -(param_1[7] == 'a');
    auVar9[8] = -(param_1[8] == 'r');
    auVar9[9] = -(param_1[9] == 't');
    auVar9[10] = -(param_1[10] == '-');
    auVar9[0xb] = -(param_1[0xb] == 's');
    auVar9[0xc] = -(param_1[0xc] == 'e');
    auVar9[0xd] = -(param_1[0xd] == 'r');
    auVar9[0xe] = -(param_1[0xe] == 'v');
    auVar9[0xf] = -(param_1[0xf] == 'e');
    auVar10[0] = -(param_1[0x10] == 'r');
    auVar10[1] = 0xff;
    auVar10[2] = 0xff;
    auVar10[3] = 0xff;
    auVar10[4] = 0xff;
    auVar10[5] = 0xff;
    auVar10[6] = 0xff;
    auVar10[7] = 0xff;
    auVar10[8] = 0xff;
    auVar10[9] = 0xff;
    auVar10[10] = 0xff;
    auVar10[0xb] = 0xff;
    auVar10[0xc] = 0xff;
    auVar10[0xd] = 0xff;
    auVar10[0xe] = 0xff;
    auVar10[0xf] = 0xff;
    auVar10 = auVar10 & auVar9;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      pbVar4 = (byte *)0x0;
      goto code_r0x0032ccdd;
    }
  }
  uVar3 = func_0x0032d230(param_1,param_2,0,param_3,0);
  pbVar4 = (byte *)(ulong)uVar3;
  puVar5 = (undefined4 *)func_0x0099bce0();
  if (uVar3 == 0xffffffff) {
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      puVar8 = (undefined4 *)0xffffffff;
      if (cVar2 != '\0') {
        uVar1 = *puVar5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_00183124,0x171,1,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        if ((*param_3 & 1) == 0) {
          param_3 = param_3 + 1;
        }
        else {
          param_3 = *(byte **)(param_3 + 0x10);
        }
        _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00176d41,param_3);
        func_0x0032e5a0(uVar6,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puVar5 = uVar1;
      }
    }
  }
  else {
    puVar8 = puVar7;
    if (uVar3 == 0xfffffffe) {
      func_0x0099bd40(&UNK_0015931c,0x1b,1,_stderr);
      param_3 = pbVar4;
    }
  }
  puVar7 = puVar8;
  if (((byte)adb_trace_mask & 1) == 0) goto code_r0x0032ccdd;
  if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032ccdd;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  param_3 = pbVar4;
  if (cVar2 != '\0') goto code_r0x0032cde2;
  while( true ) {
    pbVar4 = (byte *)((ulong)param_3 & 0xffffffff);
    puVar7 = puVar5;
code_r0x0032ccdd:
    puVar5 = puVar7;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) break;
    func_0x0099bd00();
code_r0x0032cde2:
    uVar1 = *puVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_00183124,0x175,1,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_0015ad84,(ulong)param_3 & 0xffffffff);
    func_0x0032e5a0(uVar6,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar5 = uVar1;
  }
  return pbVar4;
}


