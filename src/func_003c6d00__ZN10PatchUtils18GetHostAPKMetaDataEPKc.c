// Function: _ZN10PatchUtils18GetHostAPKMetaDataEPKc
// Address: 003c6d00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _ZN10PatchUtils18GetHostAPKMetaDataEPKc(byte *param_1,byte *param_2)

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
  byte *pbVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  byte **ppbVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 auVar26 [16];
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte abStack_68 [48];
  long lStack_38;
  
  puVar17 = &stack0xfffffffffffffff8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar6 = (byte *)func_0x0099bcf0(param_2);
  if ((byte *)0xfffffffffffffff6 < pbVar6) goto code_r0x003c6f31;
  if (pbVar6 < (byte *)0x17) {
    uStack_a8 = CONCAT71(uStack_a8._1_7_,(char)pbVar6 * '\x02');
    lVar7 = (long)&uStack_a8 + 1;
  }
  else {
    lVar8 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      lVar8 = ((ulong)pbVar6 | 7) + 1;
    }
    lVar7 = _Znwm(lVar8);
    uStack_a8 = lVar8 + 1;
    pbStack_a0 = pbVar6;
    lStack_98 = lVar7;
  }
  abStack_68[0x10] = 0;
  abStack_68[0x11] = 0;
  abStack_68[0x12] = 0;
  abStack_68[0x13] = 0;
  abStack_68[0x14] = 0;
  abStack_68[0x15] = 0;
  abStack_68[0x16] = 0;
  abStack_68[0x17] = 0;
  abStack_68[0x18] = 0;
  abStack_68[0x19] = 0;
  abStack_68[0x1a] = 0;
  abStack_68[0x1b] = 0;
  abStack_68[0x1c] = 0;
  abStack_68[0x1d] = 0;
  abStack_68[0x1e] = 0;
  abStack_68[0x1f] = 0;
  abStack_68[0] = 0;
  abStack_68[1] = 0;
  abStack_68[2] = 0;
  abStack_68[3] = 0;
  abStack_68[4] = 0;
  abStack_68[5] = 0;
  abStack_68[6] = 0;
  abStack_68[7] = 0;
  abStack_68[8] = 0;
  abStack_68[9] = 0;
  abStack_68[10] = 0;
  abStack_68[0xb] = 0;
  abStack_68[0xc] = 0;
  abStack_68[0xd] = 0;
  abStack_68[0xe] = 0;
  abStack_68[0xf] = 0;
  abStack_68[0x20] = 0;
  abStack_68[0x21] = 0;
  abStack_68[0x22] = 0;
  abStack_68[0x23] = 0;
  abStack_68[0x24] = 0;
  abStack_68[0x25] = 0;
  abStack_68[0x26] = 0;
  abStack_68[0x27] = 0;
  func_0x0099bda0(lVar7,param_2,pbVar6);
  pbVar6[lVar7] = 0;
  _ZN10ApkArchiveC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (abStack_68,&uStack_a8);
  if ((uStack_a8 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_98,uStack_a8 & 0xfffffffffffffffe);
  }
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  pbStack_a0 = (byte *)0x0;
  uStack_78 = 0;
  _ZN10ApkArchive15ExtractMetadataEv(&uStack_a8,abStack_68);
  bVar1 = *(byte *)(uStack_88 & 0xfffffffffffffffc);
  if ((bVar1 & 1) == 0) {
    uVar14 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar14 = *(ulong *)((byte *)(uStack_88 & 0xfffffffffffffffc) + 8);
  }
  pbStack_b0 = param_2;
  if (uVar14 == 0) goto code_r0x003c6f36;
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
  _ZN10PatchUtils20GetDeviceAPKMetaDataERKN3com7android10fastdeploy7APKDumpE(param_1,&uStack_a8);
  param_1[0x10] = param_1[0x10] | 1;
  puVar23 = (uint *)(*(ulong *)(param_1 + 0x18) + 7);
  if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
    puVar23 = (uint *)(param_1 + 0x18);
  }
  pbVar24 = (byte *)0x0;
  pbStack_b8 = param_1;
  if ((long)*(int *)(param_1 + 0x20) != 0) {
    pbVar24 = (byte *)((long)*(int *)(param_1 + 0x20) * 8);
    param_2 = (byte *)0x0;
    pbVar6 = abStack_68;
    do {
      param_1 = *(byte **)((long)puVar23 + (long)param_2);
      lVar8 = _ZNK10ApkArchive27CalculateLocalFileEntrySizeEll
                        (pbVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      if (lVar8 == 0) {
        puVar18 = &UNK_00187c73;
        do {
          func_0x0099bd30(_stderr,puVar18,pbStack_b0);
          func_0x0099bd80(1);
code_r0x003c6f31:
          func_0x0032e8f0();
code_r0x003c6f36:
          puVar18 = &UNK_00161304;
        } while( true );
      }
      *(long *)(param_1 + 0x28) = lVar8;
      param_1[0x10] = param_1[0x10] | 4;
      param_2 = param_2 + 8;
    } while (pbVar24 != param_2);
  }
  _ZN3com7android10fastdeploy7APKDumpD2Ev(&uStack_a8);
  pbVar11 = abStack_68;
  _ZN10ApkArchiveD1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pbStack_b8;
  }
  func_0x0099bd00();
  pbVar19 = &UNK_001fddb8;
  uVar14 = 10;
  ppbVar16 = &pbStack_b8;
  do {
    uVar21 = (uint)pbVar11;
    *(undefined1 **)((long)ppbVar16 + -8) = puVar17;
    *(byte **)((long)ppbVar16 + -0x10) = pbVar6;
    *(byte **)((long)ppbVar16 + -0x18) = param_1;
    *(byte **)((long)ppbVar16 + -0x20) = pbVar24;
    *(uint **)((long)ppbVar16 + -0x28) = puVar23;
    *(byte **)((long)ppbVar16 + -0x30) = param_2;
    uVar15 = (ulong)pbVar11 & 0xffffffff;
    *(undefined8 *)((long)ppbVar16 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    pbVar24 = (byte *)&adb_trace_mask;
    pbVar6 = pbVar19;
    uVar22 = uVar21;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar22 = 1;
      pbVar6 = (byte *)0x0;
      *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1085;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar4 != '\0') {
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1092;
        puVar9 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)ppbVar16 + -0x68) = puVar9;
        *(undefined4 *)((long)ppbVar16 + -0x5c) = *puVar9;
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)ppbVar16 + -0x40),&UNK_001770ec,0x6a,1,0,0xffffffff);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d10c9;
        uVar13 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppbVar16 + -0x40));
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d10dd;
        uVar13 = func_0x0032eb30(uVar13,&UNK_0015fba7,0xb);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d10e7;
        uVar13 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar13,uVar15);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d10fb;
        uVar13 = func_0x0032eb30(uVar13,&UNK_001595f3,5);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1106;
        uVar13 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar13,uVar14);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d111a;
        puVar23 = (uint *)func_0x0032eb30(uVar13,&UNK_0015ae05,1);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d112c;
        _Z8dump_hexPKvm((undefined1 *)((long)ppbVar16 + -0x58),pbVar19,uVar14);
        pbVar6 = (byte *)((long)ppbVar16 + -0x58);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1138;
        func_0x0032e5a0(puVar23);
        if ((*(byte *)((long)ppbVar16 + -0x58) & 1) != 0) {
          pbVar6 = (byte *)(*(ulong *)((long)ppbVar16 + -0x58) & 0xfffffffffffffffe);
          *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar16 + -0x48));
        }
        uVar22 = (uint)(undefined1 *)((long)ppbVar16 + -0x40);
        *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)((long)ppbVar16 + -0x68) = *(undefined4 *)((long)ppbVar16 + -0x5c);
      }
    }
    pbVar11 = (byte *)0x1;
    if (uVar14 != 0) {
      do {
        while( true ) {
          *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f1d;
          pbVar6 = pbVar19;
          uVar22 = uVar21;
          lVar8 = func_0x0099be60(uVar15,pbVar19,uVar14);
          if (lVar8 != -1) break;
          *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f45;
          piVar12 = (int *)func_0x0099bce0();
          if (*piVar12 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar22 = 1;
              pbVar6 = (byte *)0x0;
              *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f84;
              cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar4 != '\0') {
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f8d;
                puVar9 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)((long)ppbVar16 + -0x68) = puVar9;
                *(undefined4 *)((long)ppbVar16 + -0x5c) = *puVar9;
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          ((undefined1 *)((long)ppbVar16 + -0x40),&UNK_001770ec,0x70,1,0,0xffffffff)
                ;
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0fc4;
                uVar13 = _ZN7android4base10LogMessage6streamEv
                                   ((undefined1 *)((long)ppbVar16 + -0x40));
                *(undefined8 *)((long)ppbVar16 + -0x70) = uVar13;
                uVar2 = **(undefined4 **)((long)ppbVar16 + -0x68);
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0fd7;
                func_0x0099bd20(uVar2);
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz
                          ((undefined1 *)((long)ppbVar16 + -0x58),&UNK_0015c7bb,uVar15,uVar2);
                pbVar6 = (byte *)((long)ppbVar16 + -0x58);
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)((long)ppbVar16 + -0x70));
                if ((*(byte *)((long)ppbVar16 + -0x58) & 1) != 0) {
                  pbVar6 = (byte *)(*(ulong *)((long)ppbVar16 + -0x58) & 0xfffffffffffffffe);
                  *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar16 + -0x48));
                }
                uVar22 = (uint)(undefined1 *)((long)ppbVar16 + -0x40);
                *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)((long)ppbVar16 + -0x68) = *(undefined4 *)((long)ppbVar16 + -0x5c);
              }
            }
            *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f63;
            puVar23 = (uint *)func_0x0099bce0();
            if (*puVar23 != 0xb) {
              if (*puVar23 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar22 = 1;
                  pbVar6 = (byte *)0x0;
                  *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d1172;
                  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar4 != '\0') {
                    uVar21 = *puVar23;
                    pbVar24 = (byte *)(ulong)uVar21;
                    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              ((undefined1 *)((long)ppbVar16 + -0x40),&UNK_001770ec,0x76,1,0,
                               0xffffffff);
                    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11ac;
                    uVar14 = _ZN7android4base10LogMessage6streamEv
                                       ((undefined1 *)((long)ppbVar16 + -0x40));
                    pbVar19 = (byte *)((long)ppbVar16 + -0x58);
                    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(pbVar19,&UNK_0016eb75,uVar15);
                    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11d1;
                    pbVar6 = pbVar19;
                    func_0x0032e5a0(uVar14);
                    if ((*(byte *)((long)ppbVar16 + -0x58) & 1) != 0) {
                      pbVar6 = (byte *)(*(ulong *)((long)ppbVar16 + -0x58) & 0xfffffffffffffffe);
                      *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppbVar16 + -0x48));
                    }
                    uVar22 = (uint)(undefined1 *)((long)ppbVar16 + -0x40);
                    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *puVar23 = uVar21;
                  }
                }
                *puVar23 = 0;
              }
              pbVar11 = (byte *)0x0;
              goto code_r0x003d1053;
            }
            *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar5 = (int)lVar8;
        if (iVar5 == -1) goto code_r0x003d0f4a;
        pbVar19 = pbVar19 + iVar5;
        uVar14 = uVar14 - (long)iVar5;
      } while (uVar14 != 0);
      pbVar11 = (byte *)0x1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar16 + -0x38)) {
      return pbVar11;
    }
    *(undefined **)((long)ppbVar16 + -0x80) = &UNK_003d11ff;
    auVar26 = func_0x0099bd00();
    param_1 = auVar26._8_8_;
    *(undefined1 **)((long)ppbVar16 + -0x80) = (undefined1 *)((long)ppbVar16 + -8);
    *(byte **)((long)ppbVar16 + -0x88) = pbVar19;
    *(ulong *)((long)ppbVar16 + -0x90) = uVar14;
    *(ulong *)((long)ppbVar16 + -0x98) = uVar15;
    *(long *)((long)ppbVar16 + -0xa0) = auVar26._0_8_;
    pbVar19 = (byte *)(ulong)uVar22;
    *(undefined **)((long)ppbVar16 + -0xa8) = &UNK_003d1224;
    cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar4 == '\0') {
      return (byte *)0x0;
    }
    param_2 = *(byte **)((long)ppbVar16 + -0x98);
    pbVar3 = *(byte **)((long)ppbVar16 + -0x88);
    *(undefined8 *)((long)ppbVar16 + -0x80) = *(undefined8 *)((long)ppbVar16 + -0x80);
    *(byte **)((long)ppbVar16 + -0x88) = pbVar3;
    *(undefined8 *)((long)ppbVar16 + -0x90) = *(undefined8 *)((long)ppbVar16 + -0x90);
    *(byte **)((long)ppbVar16 + -0x98) = pbVar24;
    *(uint **)((long)ppbVar16 + -0xa0) = puVar23;
    *(byte **)((long)ppbVar16 + -0xa8) = param_2;
    *(undefined8 *)((long)ppbVar16 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar26._8_4_ < 0xffffd) {
      *(undefined8 *)((long)ppbVar16 + -0xd0) = 0;
      *(undefined8 *)((long)ppbVar16 + -200) = 0;
      *(undefined8 *)((long)ppbVar16 + -0xc0) = 0;
      *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)ppbVar16 + -0xe8),&UNK_00179ee3,(ulong)param_1 & 0xffffffff);
      uVar14 = *(ulong *)((long)ppbVar16 + -0xe8);
      lVar8 = 0x16;
      if ((*(byte *)((long)ppbVar16 + -0xe8) & 1) != 0) {
        lVar8 = (uVar14 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar14 & 1) == 0) {
        puVar23 = (uint *)(ulong)((uint)(uVar14 >> 1) & 0x7f);
      }
      else {
        puVar23 = *(uint **)((long)ppbVar16 + -0xe0);
      }
      if ((byte *)(lVar8 - (long)puVar23) < param_1) {
        *(byte **)((long)ppbVar16 + -0xf8) = pbVar6;
        *(byte **)((long)ppbVar16 + -0x100) = param_1;
        *(undefined **)((long)ppbVar16 + -0x108) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  ((undefined1 *)((long)ppbVar16 + -0xe8),lVar8,
                   ((long)param_1 - lVar8) + (long)puVar23,puVar23,puVar23,0);
      }
      else if (param_1 != (byte *)0x0) {
        if ((uVar14 & 1) == 0) {
          pbVar24 = (byte *)((long)ppbVar16 + -0xe7);
        }
        else {
          pbVar24 = *(byte **)((long)ppbVar16 + -0xd8);
        }
        *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d08b6;
        func_0x0099bd90((byte *)((long)puVar23 + (long)pbVar24),pbVar6,param_1);
        puVar23 = (uint *)((long)puVar23 + (long)param_1);
        if ((*(byte *)((long)ppbVar16 + -0xe8) & 1) == 0) {
          *(char *)((long)ppbVar16 + -0xe8) = (char)puVar23 * '\x02';
        }
        else {
          *(uint **)((long)ppbVar16 + -0xe0) = puVar23;
        }
        pbVar24[(long)puVar23] = 0;
      }
      if ((*(byte *)((long)ppbVar16 + -0xe8) & 1) == 0) {
        *(undefined8 *)((long)ppbVar16 + -0xc0) = *(undefined8 *)((long)ppbVar16 + -0xd8);
        *(undefined4 *)((long)ppbVar16 + -0xd0) = *(undefined4 *)((long)ppbVar16 + -0xe8);
        *(undefined4 *)((long)ppbVar16 + -0xcc) = *(undefined4 *)((long)ppbVar16 + -0xe4);
        *(undefined4 *)((long)ppbVar16 + -200) = *(undefined4 *)((long)ppbVar16 + -0xe0);
        *(undefined4 *)((long)ppbVar16 + -0xc4) = *(undefined4 *)((long)ppbVar16 + -0xdc);
      }
      else {
        *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d08fb;
        func_0x00330340((undefined1 *)((long)ppbVar16 + -0xd0),
                        *(undefined8 *)((long)ppbVar16 + -0xd8),
                        *(undefined8 *)((long)ppbVar16 + -0xe0));
        if ((*(byte *)((long)ppbVar16 + -0xe8) & 1) != 0) {
          *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppbVar16 + -0xd8),
                     *(ulong *)((long)ppbVar16 + -0xe8) & 0xfffffffffffffffe);
        }
      }
      bVar25 = (*(byte *)((long)ppbVar16 + -0xd0) & 1) != 0;
      pbVar20 = (byte *)((long)ppbVar16 + -0xcf);
      if (bVar25) {
        pbVar20 = *(byte **)((long)ppbVar16 + -0xc0);
      }
      uVar14 = (ulong)(*(byte *)((long)ppbVar16 + -0xd0) >> 1);
      if (bVar25) {
        uVar14 = *(ulong *)((long)ppbVar16 + -200);
      }
      *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d0931;
      pbVar11 = pbVar19;
      pbVar10 = (byte *)_Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(pbVar19,pbVar20,uVar14);
      param_2 = pbVar19;
      if ((*(byte *)((long)ppbVar16 + -0xd0) & 1) != 0) {
        pbVar11 = *(byte **)((long)ppbVar16 + -0xc0);
        pbVar20 = (byte *)(*(ulong *)((long)ppbVar16 + -0xd0) & 0xfffffffffffffffe);
        pbVar10 = (byte *)((ulong)pbVar10 & 0xffffffff);
        *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        param_2 = pbVar10;
      }
    }
    else {
      *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d07ff;
      puVar9 = (undefined4 *)func_0x0099bce0();
      *puVar9 = 0x5a;
      pbVar10 = (byte *)0x0;
      pbVar20 = pbVar6;
      pbVar11 = pbVar19;
      pbVar6 = pbVar3;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppbVar16 + -0xb0)) {
      return pbVar10;
    }
    *(undefined **)((long)ppbVar16 + -0xf8) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)((long)ppbVar16 + -0xf8) = (undefined1 *)((long)ppbVar16 + -0x80);
    bVar25 = (*pbVar20 & 1) != 0;
    pbVar19 = pbVar20 + 1;
    if (bVar25) {
      pbVar19 = *(byte **)(pbVar20 + 0x10);
    }
    uVar14 = (ulong)(*pbVar20 >> 1);
    if (bVar25) {
      uVar14 = *(ulong *)(pbVar20 + 8);
    }
    puVar17 = *(undefined1 **)((long)ppbVar16 + -0xf8);
    ppbVar16 = (byte **)((long)ppbVar16 + -0xf0);
  } while( true );
}


