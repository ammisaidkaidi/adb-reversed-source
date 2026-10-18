// Function: _ZN10PatchUtils20GetDeviceAPKMetaDataERKN3com7android10fastdeploy7APKDumpE
// Address: 003c6b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _ZN10PatchUtils20GetDeviceAPKMetaDataERKN3com7android10fastdeploy7APKDumpE
                 (byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  byte **ppbVar15;
  code **ppcVar16;
  byte *pbVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  undefined8 unaff_R12;
  uint *puVar24;
  long unaff_R13;
  byte *pbVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  bool bVar27;
  undefined1 auVar28 [16];
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte abStack_d0 [48];
  long lStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  long lStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong auStack_58 [2];
  byte *pbStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  pcStack_70 = (code *)&UNK_003c6ba5;
  _ZN3com7android10fastdeploy11APKMetaDataC1EPN6google8protobuf5ArenaE(param_1,0);
  uVar14 = *(ulong *)(param_2 + 0x30);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  uVar13 = *(ulong *)(param_1 + 8);
  if ((uVar13 & 1) != 0) {
    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
  }
  pcStack_70 = (code *)&UNK_003c6bc6;
  _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
            (param_1 + 0x30,uVar14 & 0xfffffffffffffffc,uVar13);
  auStack_58[0] = 0;
  auStack_58[1] = 0;
  pbStack_48 = (byte *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  pbVar6 = (byte *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
  bVar27 = (*pbVar6 & 1) != 0;
  pbVar25 = pbVar6 + 1;
  if (bVar27) {
    pbVar25 = *(byte **)(pbVar6 + 0x10);
  }
  pbVar26 = (byte *)(ulong)(*pbVar6 >> 1);
  if (bVar27) {
    pbVar26 = *(byte **)(pbVar6 + 8);
  }
  pcStack_70 = (code *)&UNK_003c6c1e;
  pbVar17 = pbVar26;
  pbVar6 = pbVar25;
  lVar7 = _ZN10ApkArchive27ParseCentralDirectoryRecordEPKcmPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPlSA_
                    (pbVar25,pbVar26,auStack_58,&uStack_60,&uStack_68);
  if (lVar7 != 0) {
    do {
      uVar14 = *(ulong *)(param_1 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      pcStack_70 = (code *)&UNK_003c6c43;
      unaff_R13 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerIN3com7android10fastdeploy8APKEntryEEEEEPNT_4TypeEPNS0_5ArenaE
                            (param_1 + 0x18,uVar14);
      param_1[0x10] = param_1[0x10] | 1;
      *(byte *)(unaff_R13 + 0x10) = *(byte *)(unaff_R13 + 0x10) | 1;
      uVar14 = *(ulong *)(unaff_R13 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      pbVar25 = pbVar25 + lVar7;
      pbVar26 = pbVar26 + -lVar7;
      pcStack_70 = (code *)&UNK_003c6c70;
      _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                (unaff_R13 + 0x18,auStack_58,uVar14);
      *(undefined8 *)(unaff_R13 + 0x20) = uStack_60;
      *(undefined8 *)(unaff_R13 + 0x28) = uStack_68;
      *(uint *)(unaff_R13 + 0x10) = *(uint *)(unaff_R13 + 0x10) | 6;
      pcStack_70 = (code *)&UNK_003c6c9b;
      pbVar17 = pbVar26;
      pbVar6 = pbVar25;
      lVar7 = _ZN10ApkArchive27ParseCentralDirectoryRecordEPKcmPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPlSA_
                        (pbVar25,pbVar26,auStack_58,&uStack_60,&uStack_68);
    } while (lVar7 != 0);
    unaff_R12 = 0;
  }
  if ((auStack_58[0] & 1) != 0) {
    pbVar17 = (byte *)(auStack_58[0] & 0xfffffffffffffffe);
    pcStack_70 = (code *)&UNK_003c6cce;
    pbVar6 = pbStack_48;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  pcStack_70 = _ZN10PatchUtils18GetHostAPKMetaDataEPKc;
  func_0x0099bd00();
  ppcVar16 = &pcStack_70;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_98 = param_1;
  uStack_90 = unaff_R12;
  lStack_88 = unaff_R13;
  pbStack_80 = pbVar25;
  pbStack_78 = pbVar26;
  pcStack_70 = (code *)&stack0xfffffffffffffff8;
  pbVar25 = (byte *)func_0x0099bcf0(pbVar17);
  if ((byte *)0xfffffffffffffff6 < pbVar25) goto code_r0x003c6f31;
  if (pbVar25 < (byte *)0x17) {
    uStack_110 = CONCAT71(uStack_110._1_7_,(char)pbVar25 * '\x02');
    lVar8 = (long)&uStack_110 + 1;
  }
  else {
    lVar7 = 0x1a;
    if (((ulong)pbVar25 | 7) != 0x17) {
      lVar7 = ((ulong)pbVar25 | 7) + 1;
    }
    lVar8 = _Znwm(lVar7);
    uStack_110 = lVar7 + 1;
    pbStack_108 = pbVar25;
    lStack_100 = lVar8;
  }
  abStack_d0[0x10] = 0;
  abStack_d0[0x11] = 0;
  abStack_d0[0x12] = 0;
  abStack_d0[0x13] = 0;
  abStack_d0[0x14] = 0;
  abStack_d0[0x15] = 0;
  abStack_d0[0x16] = 0;
  abStack_d0[0x17] = 0;
  abStack_d0[0x18] = 0;
  abStack_d0[0x19] = 0;
  abStack_d0[0x1a] = 0;
  abStack_d0[0x1b] = 0;
  abStack_d0[0x1c] = 0;
  abStack_d0[0x1d] = 0;
  abStack_d0[0x1e] = 0;
  abStack_d0[0x1f] = 0;
  abStack_d0[0] = 0;
  abStack_d0[1] = 0;
  abStack_d0[2] = 0;
  abStack_d0[3] = 0;
  abStack_d0[4] = 0;
  abStack_d0[5] = 0;
  abStack_d0[6] = 0;
  abStack_d0[7] = 0;
  abStack_d0[8] = 0;
  abStack_d0[9] = 0;
  abStack_d0[10] = 0;
  abStack_d0[0xb] = 0;
  abStack_d0[0xc] = 0;
  abStack_d0[0xd] = 0;
  abStack_d0[0xe] = 0;
  abStack_d0[0xf] = 0;
  abStack_d0[0x20] = 0;
  abStack_d0[0x21] = 0;
  abStack_d0[0x22] = 0;
  abStack_d0[0x23] = 0;
  abStack_d0[0x24] = 0;
  abStack_d0[0x25] = 0;
  abStack_d0[0x26] = 0;
  abStack_d0[0x27] = 0;
  func_0x0099bda0(lVar8,pbVar17,pbVar25);
  pbVar25[lVar8] = 0;
  _ZN10ApkArchiveC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (abStack_d0,&uStack_110);
  if ((uStack_110 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_100,uStack_110 & 0xfffffffffffffffe);
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  pbStack_108 = (byte *)0x0;
  uStack_e0 = 0;
  _ZN10ApkArchive15ExtractMetadataEv(&uStack_110,abStack_d0);
  bVar1 = *(byte *)(uStack_f0 & 0xfffffffffffffffc);
  if ((bVar1 & 1) == 0) {
    uVar14 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar14 = *(ulong *)((byte *)(uStack_f0 & 0xfffffffffffffffc) + 8);
  }
  pbStack_118 = pbVar17;
  if (uVar14 == 0) goto code_r0x003c6f36;
  pbVar6[0x20] = 0;
  pbVar6[0x21] = 0;
  pbVar6[0x22] = 0;
  pbVar6[0x23] = 0;
  pbVar6[0x24] = 0;
  pbVar6[0x25] = 0;
  pbVar6[0x26] = 0;
  pbVar6[0x27] = 0;
  pbVar6[0x28] = 0;
  pbVar6[0x29] = 0;
  pbVar6[0x2a] = 0;
  pbVar6[0x2b] = 0;
  pbVar6[0x2c] = 0;
  pbVar6[0x2d] = 0;
  pbVar6[0x2e] = 0;
  pbVar6[0x2f] = 0;
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  pbVar6[0x18] = 0;
  pbVar6[0x19] = 0;
  pbVar6[0x1a] = 0;
  pbVar6[0x1b] = 0;
  pbVar6[0x1c] = 0;
  pbVar6[0x1d] = 0;
  pbVar6[0x1e] = 0;
  pbVar6[0x1f] = 0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 0;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  pbVar6[0x30] = 0;
  pbVar6[0x31] = 0;
  pbVar6[0x32] = 0;
  pbVar6[0x33] = 0;
  pbVar6[0x34] = 0;
  pbVar6[0x35] = 0;
  pbVar6[0x36] = 0;
  pbVar6[0x37] = 0;
  _ZN10PatchUtils20GetDeviceAPKMetaDataERKN3com7android10fastdeploy7APKDumpE(pbVar6,&uStack_110);
  pbVar6[0x10] = pbVar6[0x10] | 1;
  puVar24 = (uint *)(*(ulong *)(pbVar6 + 0x18) + 7);
  if ((*(ulong *)(pbVar6 + 0x18) & 1) == 0) {
    puVar24 = (uint *)(pbVar6 + 0x18);
  }
  pbVar26 = (byte *)0x0;
  pbStack_120 = pbVar6;
  if ((long)*(int *)(pbVar6 + 0x20) != 0) {
    pbVar26 = (byte *)((long)*(int *)(pbVar6 + 0x20) * 8);
    pbVar17 = (byte *)0x0;
    pbVar25 = abStack_d0;
    do {
      pbVar6 = *(byte **)((long)puVar24 + (long)pbVar17);
      lVar7 = _ZNK10ApkArchive27CalculateLocalFileEntrySizeEll
                        (pbVar25,*(undefined8 *)(pbVar6 + 0x20),*(undefined8 *)(pbVar6 + 0x28));
      if (lVar7 == 0) {
        puVar18 = &UNK_00187c73;
        do {
          func_0x0099bd30(_stderr,puVar18,pbStack_118);
          func_0x0099bd80(1);
code_r0x003c6f31:
          func_0x0032e8f0();
code_r0x003c6f36:
          puVar18 = &UNK_00161304;
        } while( true );
      }
      *(long *)(pbVar6 + 0x28) = lVar7;
      pbVar6[0x10] = pbVar6[0x10] | 4;
      pbVar17 = pbVar17 + 8;
    } while (pbVar26 != pbVar17);
  }
  _ZN3com7android10fastdeploy7APKDumpD2Ev(&uStack_110);
  pbVar23 = abStack_d0;
  _ZN10ApkArchiveD1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return pbStack_120;
  }
  func_0x0099bd00();
  pbVar19 = &UNK_001fddb8;
  uVar14 = 10;
  ppbVar15 = &pbStack_120;
  do {
    uVar21 = (uint)pbVar23;
    *(code ***)((long)ppbVar15 + -8) = ppcVar16;
    *(byte **)((long)ppbVar15 + -0x10) = pbVar25;
    *(byte **)((long)ppbVar15 + -0x18) = pbVar6;
    *(byte **)((long)ppbVar15 + -0x20) = pbVar26;
    *(uint **)((long)ppbVar15 + -0x28) = puVar24;
    *(byte **)((long)ppbVar15 + -0x30) = pbVar17;
    uVar13 = (ulong)pbVar23 & 0xffffffff;
    *(undefined8 *)((long)ppbVar15 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    pbVar26 = (byte *)&adb_trace_mask;
    pbVar25 = pbVar19;
    uVar22 = uVar21;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar22 = 1;
      pbVar25 = (byte *)0x0;
      *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1085;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar4 != '\0') {
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1092;
        puVar9 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)ppbVar15 + -0x68) = puVar9;
        *(undefined4 *)((long)ppbVar15 + -0x5c) = *puVar9;
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)ppbVar15 + -0x40),&UNK_001770ec,0x6a,1,0,0xffffffff);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d10c9;
        uVar12 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppbVar15 + -0x40));
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d10dd;
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015fba7,0xb);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d10e7;
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar12,uVar13);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d10fb;
        uVar12 = func_0x0032eb30(uVar12,&UNK_001595f3,5);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1106;
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,uVar14);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d111a;
        puVar24 = (uint *)func_0x0032eb30(uVar12,&UNK_0015ae05,1);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d112c;
        _Z8dump_hexPKvm((undefined1 *)((long)ppbVar15 + -0x58),pbVar19,uVar14);
        pbVar25 = (byte *)((long)ppbVar15 + -0x58);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1138;
        func_0x0032e5a0(puVar24);
        if ((*(byte *)((long)ppbVar15 + -0x58) & 1) != 0) {
          pbVar25 = (byte *)(*(ulong *)((long)ppbVar15 + -0x58) & 0xfffffffffffffffe);
          *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar15 + -0x48));
        }
        uVar22 = (uint)(undefined1 *)((long)ppbVar15 + -0x40);
        *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)((long)ppbVar15 + -0x68) = *(undefined4 *)((long)ppbVar15 + -0x5c);
      }
    }
    pbVar6 = (byte *)0x1;
    if (uVar14 != 0) {
      do {
        while( true ) {
          *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f1d;
          pbVar25 = pbVar19;
          uVar22 = uVar21;
          lVar7 = func_0x0099be60(uVar13,pbVar19,uVar14);
          if (lVar7 != -1) break;
          *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f45;
          piVar11 = (int *)func_0x0099bce0();
          if (*piVar11 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar22 = 1;
              pbVar25 = (byte *)0x0;
              *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f84;
              cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar4 != '\0') {
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f8d;
                puVar9 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)((long)ppbVar15 + -0x68) = puVar9;
                *(undefined4 *)((long)ppbVar15 + -0x5c) = *puVar9;
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          ((undefined1 *)((long)ppbVar15 + -0x40),&UNK_001770ec,0x70,1,0,0xffffffff)
                ;
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0fc4;
                uVar12 = _ZN7android4base10LogMessage6streamEv
                                   ((undefined1 *)((long)ppbVar15 + -0x40));
                *(undefined8 *)((long)ppbVar15 + -0x70) = uVar12;
                uVar2 = **(undefined4 **)((long)ppbVar15 + -0x68);
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0fd7;
                func_0x0099bd20(uVar2);
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz
                          ((undefined1 *)((long)ppbVar15 + -0x58),&UNK_0015c7bb,uVar13,uVar2);
                pbVar25 = (byte *)((long)ppbVar15 + -0x58);
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)((long)ppbVar15 + -0x70));
                if ((*(byte *)((long)ppbVar15 + -0x58) & 1) != 0) {
                  pbVar25 = (byte *)(*(ulong *)((long)ppbVar15 + -0x58) & 0xfffffffffffffffe);
                  *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar15 + -0x48));
                }
                uVar22 = (uint)(undefined1 *)((long)ppbVar15 + -0x40);
                *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)((long)ppbVar15 + -0x68) = *(undefined4 *)((long)ppbVar15 + -0x5c);
              }
            }
            *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f63;
            puVar24 = (uint *)func_0x0099bce0();
            if (*puVar24 != 0xb) {
              if (*puVar24 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar22 = 1;
                  pbVar25 = (byte *)0x0;
                  *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d1172;
                  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar4 != '\0') {
                    uVar21 = *puVar24;
                    pbVar26 = (byte *)(ulong)uVar21;
                    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              ((undefined1 *)((long)ppbVar15 + -0x40),&UNK_001770ec,0x76,1,0,
                               0xffffffff);
                    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11ac;
                    uVar14 = _ZN7android4base10LogMessage6streamEv
                                       ((undefined1 *)((long)ppbVar15 + -0x40));
                    pbVar19 = (byte *)((long)ppbVar15 + -0x58);
                    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(pbVar19,&UNK_0016eb75,uVar13);
                    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11d1;
                    pbVar25 = pbVar19;
                    func_0x0032e5a0(uVar14);
                    if ((*(byte *)((long)ppbVar15 + -0x58) & 1) != 0) {
                      pbVar25 = (byte *)(*(ulong *)((long)ppbVar15 + -0x58) & 0xfffffffffffffffe);
                      *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar15 + -0x48));
                    }
                    uVar22 = (uint)(undefined1 *)((long)ppbVar15 + -0x40);
                    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *puVar24 = uVar21;
                  }
                }
                *puVar24 = 0;
              }
              pbVar6 = (byte *)0x0;
              goto code_r0x003d1053;
            }
            *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar5 = (int)lVar7;
        if (iVar5 == -1) goto code_r0x003d0f4a;
        pbVar19 = pbVar19 + iVar5;
        uVar14 = uVar14 - (long)iVar5;
      } while (uVar14 != 0);
      pbVar6 = (byte *)0x1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar15 + -0x38)) {
      return pbVar6;
    }
    *(undefined **)((long)ppbVar15 + -0x80) = &UNK_003d11ff;
    auVar28 = func_0x0099bd00();
    pbVar6 = auVar28._8_8_;
    *(undefined1 **)((long)ppbVar15 + -0x80) = (undefined1 *)((long)ppbVar15 + -8);
    *(byte **)((long)ppbVar15 + -0x88) = pbVar19;
    *(ulong *)((long)ppbVar15 + -0x90) = uVar14;
    *(ulong *)((long)ppbVar15 + -0x98) = uVar13;
    *(long *)((long)ppbVar15 + -0xa0) = auVar28._0_8_;
    pbVar19 = (byte *)(ulong)uVar22;
    *(undefined **)((long)ppbVar15 + -0xa8) = &UNK_003d1224;
    cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar4 == '\0') {
      return (byte *)0x0;
    }
    pbVar17 = *(byte **)((long)ppbVar15 + -0x98);
    pbVar3 = *(byte **)((long)ppbVar15 + -0x88);
    *(undefined8 *)((long)ppbVar15 + -0x80) = *(undefined8 *)((long)ppbVar15 + -0x80);
    *(byte **)((long)ppbVar15 + -0x88) = pbVar3;
    *(undefined8 *)((long)ppbVar15 + -0x90) = *(undefined8 *)((long)ppbVar15 + -0x90);
    *(byte **)((long)ppbVar15 + -0x98) = pbVar26;
    *(uint **)((long)ppbVar15 + -0xa0) = puVar24;
    *(byte **)((long)ppbVar15 + -0xa8) = pbVar17;
    *(undefined8 *)((long)ppbVar15 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar28._8_4_ < 0xffffd) {
      *(undefined8 *)((long)ppbVar15 + -0xd0) = 0;
      *(undefined8 *)((long)ppbVar15 + -200) = 0;
      *(undefined8 *)((long)ppbVar15 + -0xc0) = 0;
      *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)ppbVar15 + -0xe8),&UNK_00179ee3,(ulong)pbVar6 & 0xffffffff);
      uVar14 = *(ulong *)((long)ppbVar15 + -0xe8);
      lVar7 = 0x16;
      if ((*(byte *)((long)ppbVar15 + -0xe8) & 1) != 0) {
        lVar7 = (uVar14 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar14 & 1) == 0) {
        puVar24 = (uint *)(ulong)((uint)(uVar14 >> 1) & 0x7f);
      }
      else {
        puVar24 = *(uint **)((long)ppbVar15 + -0xe0);
      }
      if ((byte *)(lVar7 - (long)puVar24) < pbVar6) {
        *(byte **)((long)ppbVar15 + -0xf8) = pbVar25;
        *(byte **)((long)ppbVar15 + -0x100) = pbVar6;
        *(undefined **)((long)ppbVar15 + -0x108) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  ((undefined1 *)((long)ppbVar15 + -0xe8),lVar7,
                   (byte *)(((long)pbVar6 - lVar7) + (long)puVar24),puVar24,puVar24,0);
      }
      else if (pbVar6 != (byte *)0x0) {
        if ((uVar14 & 1) == 0) {
          pbVar26 = (byte *)((long)ppbVar15 + -0xe7);
        }
        else {
          pbVar26 = *(byte **)((long)ppbVar15 + -0xd8);
        }
        *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d08b6;
        func_0x0099bd90((byte *)((long)puVar24 + (long)pbVar26),pbVar25,pbVar6);
        puVar24 = (uint *)((long)puVar24 + (long)pbVar6);
        if ((*(byte *)((long)ppbVar15 + -0xe8) & 1) == 0) {
          *(char *)((long)ppbVar15 + -0xe8) = (char)puVar24 * '\x02';
        }
        else {
          *(uint **)((long)ppbVar15 + -0xe0) = puVar24;
        }
        pbVar26[(long)puVar24] = 0;
      }
      if ((*(byte *)((long)ppbVar15 + -0xe8) & 1) == 0) {
        *(undefined8 *)((long)ppbVar15 + -0xc0) = *(undefined8 *)((long)ppbVar15 + -0xd8);
        *(undefined4 *)((long)ppbVar15 + -0xd0) = *(undefined4 *)((long)ppbVar15 + -0xe8);
        *(undefined4 *)((long)ppbVar15 + -0xcc) = *(undefined4 *)((long)ppbVar15 + -0xe4);
        *(undefined4 *)((long)ppbVar15 + -200) = *(undefined4 *)((long)ppbVar15 + -0xe0);
        *(undefined4 *)((long)ppbVar15 + -0xc4) = *(undefined4 *)((long)ppbVar15 + -0xdc);
      }
      else {
        *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d08fb;
        func_0x00330340((undefined1 *)((long)ppbVar15 + -0xd0),
                        *(undefined8 *)((long)ppbVar15 + -0xd8),
                        *(undefined8 *)((long)ppbVar15 + -0xe0));
        if ((*(byte *)((long)ppbVar15 + -0xe8) & 1) != 0) {
          *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppbVar15 + -0xd8),
                     *(ulong *)((long)ppbVar15 + -0xe8) & 0xfffffffffffffffe);
        }
      }
      bVar27 = (*(byte *)((long)ppbVar15 + -0xd0) & 1) != 0;
      pbVar20 = (byte *)((long)ppbVar15 + -0xcf);
      if (bVar27) {
        pbVar20 = *(byte **)((long)ppbVar15 + -0xc0);
      }
      uVar14 = (ulong)(*(byte *)((long)ppbVar15 + -0xd0) >> 1);
      if (bVar27) {
        uVar14 = *(ulong *)((long)ppbVar15 + -200);
      }
      *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d0931;
      pbVar23 = pbVar19;
      pbVar10 = (byte *)_Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(pbVar19,pbVar20,uVar14);
      pbVar17 = pbVar19;
      if ((*(byte *)((long)ppbVar15 + -0xd0) & 1) != 0) {
        pbVar23 = *(byte **)((long)ppbVar15 + -0xc0);
        pbVar20 = (byte *)(*(ulong *)((long)ppbVar15 + -0xd0) & 0xfffffffffffffffe);
        pbVar10 = (byte *)((ulong)pbVar10 & 0xffffffff);
        *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        pbVar17 = pbVar10;
      }
    }
    else {
      *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d07ff;
      puVar9 = (undefined4 *)func_0x0099bce0();
      *puVar9 = 0x5a;
      pbVar10 = (byte *)0x0;
      pbVar20 = pbVar25;
      pbVar23 = pbVar19;
      pbVar25 = pbVar3;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar15 + -0xb0)) {
      return pbVar10;
    }
    *(undefined **)((long)ppbVar15 + -0xf8) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)((long)ppbVar15 + -0xf8) = (undefined1 *)((long)ppbVar15 + -0x80);
    bVar27 = (*pbVar20 & 1) != 0;
    pbVar19 = pbVar20 + 1;
    if (bVar27) {
      pbVar19 = *(byte **)(pbVar20 + 0x10);
    }
    uVar14 = (ulong)(*pbVar20 >> 1);
    if (bVar27) {
      uVar14 = *(ulong *)(pbVar20 + 8);
    }
    ppcVar16 = *(code ***)((long)ppbVar15 + -0xf8);
    ppbVar15 = (byte **)((long)ppbVar15 + -0xf0);
  } while( true );
}


