// Function: _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
// Address: 003d07d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (ulong param_1,byte *param_2,ulong param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong unaff_RBX;
  undefined8 unaff_RBP;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint *unaff_R12;
  undefined4 *unaff_R13;
  undefined8 unaff_R14;
  ulong uVar12;
  byte *unaff_R15;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 auVar15 [16];
  
  do {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined4 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((uint)param_3 < 0xffffd) {
      unaff_RBX = param_1 & 0xffffffff;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)register0x00000020 + -0x70),&UNK_00179ee3,param_3 & 0xffffffff
                );
      uVar12 = *(ulong *)((long)register0x00000020 + -0x70);
      lVar6 = 0x16;
      if ((*(byte *)((long)register0x00000020 + -0x70) & 1) != 0) {
        lVar6 = (uVar12 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar12 & 1) == 0) {
        unaff_R12 = (uint *)(ulong)((uint)(uVar12 >> 1) & 0x7f);
      }
      else {
        unaff_R12 = *(uint **)((long)register0x00000020 + -0x68);
      }
      if ((ulong)(lVar6 - (long)unaff_R12) < param_3) {
        *(byte **)((long)register0x00000020 + -0x80) = param_2;
        *(ulong *)((long)register0x00000020 + -0x88) = param_3;
        *(undefined **)((long)register0x00000020 + -0x90) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  ((undefined1 *)((long)register0x00000020 + -0x70),lVar6,
                   (param_3 - lVar6) + (long)unaff_R12,unaff_R12,unaff_R12,0);
      }
      else if (param_3 != 0) {
        if ((uVar12 & 1) == 0) {
          unaff_R13 = (undefined4 *)((long)register0x00000020 + -0x6f);
        }
        else {
          unaff_R13 = *(undefined4 **)((long)register0x00000020 + -0x60);
        }
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d08b6;
        func_0x0099bd90((long)unaff_R12 + (long)unaff_R13,param_2,param_3);
        unaff_R12 = (uint *)((long)unaff_R12 + param_3);
        if ((*(byte *)((long)register0x00000020 + -0x70) & 1) == 0) {
          *(char *)((long)register0x00000020 + -0x70) = (char)unaff_R12 * '\x02';
        }
        else {
          *(uint **)((long)register0x00000020 + -0x68) = unaff_R12;
        }
        *(undefined1 *)((long)unaff_R13 + (long)unaff_R12) = 0;
      }
      if ((*(byte *)((long)register0x00000020 + -0x70) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x60);
        *(undefined4 *)((long)register0x00000020 + -0x58) =
             *(undefined4 *)((long)register0x00000020 + -0x70);
        *(undefined4 *)((long)register0x00000020 + -0x54) =
             *(undefined4 *)((long)register0x00000020 + -0x6c);
        *(undefined4 *)((long)register0x00000020 + -0x50) =
             *(undefined4 *)((long)register0x00000020 + -0x68);
        *(undefined4 *)((long)register0x00000020 + -0x4c) =
             *(undefined4 *)((long)register0x00000020 + -100);
      }
      else {
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d08fb;
        func_0x00330340((undefined1 *)((long)register0x00000020 + -0x58),
                        *(undefined8 *)((long)register0x00000020 + -0x60),
                        *(undefined8 *)((long)register0x00000020 + -0x68));
        if ((*(byte *)((long)register0x00000020 + -0x70) & 1) != 0) {
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)register0x00000020 + -0x60),
                     *(ulong *)((long)register0x00000020 + -0x70) & 0xfffffffffffffffe);
        }
      }
      bVar14 = (*(byte *)((long)register0x00000020 + -0x58) & 1) != 0;
      pbVar9 = (byte *)((long)register0x00000020 + -0x57);
      if (bVar14) {
        pbVar9 = *(byte **)((long)register0x00000020 + -0x48);
      }
      uVar12 = (ulong)(*(byte *)((long)register0x00000020 + -0x58) >> 1);
      if (bVar14) {
        uVar12 = *(ulong *)((long)register0x00000020 + -0x50);
      }
      param_1 = param_1 & 0xffffffff;
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0931;
      uVar12 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(param_1,pbVar9,uVar12);
      if ((*(byte *)((long)register0x00000020 + -0x58) & 1) != 0) {
        param_1 = *(ulong *)((long)register0x00000020 + -0x48);
        pbVar9 = (byte *)(*(ulong *)((long)register0x00000020 + -0x58) & 0xfffffffffffffffe);
        uVar12 = uVar12 & 0xffffffff;
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        unaff_RBX = uVar12;
      }
    }
    else {
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d07ff;
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = 0x5a;
      uVar12 = 0;
      pbVar9 = param_2;
      param_2 = unaff_R15;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
      return uVar12;
    }
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d096f;
    func_0x0099bd00();
    uVar10 = (uint)param_1;
    *(undefined1 **)((long)register0x00000020 + -0x80) =
         (undefined1 *)((long)register0x00000020 + -8);
    bVar14 = (*pbVar9 & 1) != 0;
    pbVar13 = pbVar9 + 1;
    if (bVar14) {
      pbVar13 = *(byte **)(pbVar9 + 0x10);
    }
    uVar12 = (ulong)(*pbVar9 >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(pbVar9 + 8);
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(byte **)((long)register0x00000020 + -0x88) = param_2;
    *(ulong *)((long)register0x00000020 + -0x90) = param_3;
    *(undefined4 **)((long)register0x00000020 + -0x98) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0xa0) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0xa8) = unaff_RBX;
    param_1 = param_1 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R13 = &adb_trace_mask;
    param_2 = pbVar13;
    uVar11 = uVar10;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar11 = 1;
      param_2 = (byte *)0x0;
      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1085;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1092;
        puVar4 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)register0x00000020 + -0xe0) = puVar4;
        *(undefined4 *)((long)register0x00000020 + -0xd4) = *puVar4;
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x6a,1,0);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10c9;
        uVar8 = _ZN7android4base10LogMessage6streamEv
                          ((undefined1 *)((long)register0x00000020 + -0xb8));
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10dd;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015fba7,0xb);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10e7;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,param_1);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10fb;
        uVar8 = func_0x0032eb30(uVar8,&UNK_001595f3,5);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1106;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,uVar12);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d111a;
        unaff_R12 = (uint *)func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d112c;
        _Z8dump_hexPKvm((undefined1 *)((long)register0x00000020 + -0xd0),pbVar13,uVar12);
        param_2 = (byte *)((long)register0x00000020 + -0xd0);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1138;
        func_0x0032e5a0(unaff_R12);
        if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
          param_2 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) & 0xfffffffffffffffe);
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0xc0));
        }
        uVar11 = (uint)(undefined1 *)((long)register0x00000020 + -0xb8);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)((long)register0x00000020 + -0xe0) =
             *(undefined4 *)((long)register0x00000020 + -0xd4);
      }
    }
    uVar5 = 1;
    if (uVar12 != 0) {
      do {
        while( true ) {
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f1d;
          param_2 = pbVar13;
          uVar11 = uVar10;
          lVar6 = func_0x0099be60(param_1,pbVar13,uVar12);
          if (lVar6 != -1) break;
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f45;
          piVar7 = (int *)func_0x0099bce0();
          if (*piVar7 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar11 = 1;
              param_2 = (byte *)0x0;
              *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f84;
              cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar2 != '\0') {
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f8d;
                puVar4 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)((long)register0x00000020 + -0xe0) = puVar4;
                *(undefined4 *)((long)register0x00000020 + -0xd4) = *puVar4;
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x70,1,0);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fc4;
                uVar8 = _ZN7android4base10LogMessage6streamEv
                                  ((undefined1 *)((long)register0x00000020 + -0xb8));
                *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar8;
                uVar1 = **(undefined4 **)((long)register0x00000020 + -0xe0);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fd7;
                func_0x0099bd20(uVar1);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz
                          ((undefined1 *)((long)register0x00000020 + -0xd0),&UNK_0015c7bb,param_1,
                           uVar1);
                param_2 = (byte *)((long)register0x00000020 + -0xd0);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)((long)register0x00000020 + -0xe8));
                if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
                  param_2 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) &
                                    0xfffffffffffffffe);
                  *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0xc0));
                }
                uVar11 = (uint)(undefined1 *)((long)register0x00000020 + -0xb8);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)((long)register0x00000020 + -0xe0) =
                     *(undefined4 *)((long)register0x00000020 + -0xd4);
              }
            }
            *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f63;
            unaff_R12 = (uint *)func_0x0099bce0();
            if (*unaff_R12 != 0xb) {
              if (*unaff_R12 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar11 = 1;
                  param_2 = (byte *)0x0;
                  *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1172;
                  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar2 != '\0') {
                    uVar10 = *unaff_R12;
                    unaff_R13 = (undefined4 *)(ulong)uVar10;
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x76,1
                               ,0);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11ac;
                    uVar12 = _ZN7android4base10LogMessage6streamEv
                                       ((undefined1 *)((long)register0x00000020 + -0xb8));
                    pbVar13 = (byte *)((long)register0x00000020 + -0xd0);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(pbVar13,&UNK_0016eb75,param_1);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11d1;
                    param_2 = pbVar13;
                    func_0x0032e5a0(uVar12);
                    if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
                      param_2 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) &
                                        0xfffffffffffffffe);
                      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0xc0));
                    }
                    uVar11 = (uint)(undefined1 *)((long)register0x00000020 + -0xb8);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *unaff_R12 = uVar10;
                  }
                }
                *unaff_R12 = 0;
              }
              uVar5 = 0;
              goto code_r0x003d1053;
            }
            *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar3 = (int)lVar6;
        if (iVar3 == -1) goto code_r0x003d0f4a;
        pbVar13 = pbVar13 + iVar3;
        uVar12 = uVar12 - (long)iVar3;
      } while (uVar12 != 0);
      uVar5 = 1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0xb0)) {
      return uVar5;
    }
    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11ff;
    auVar15 = func_0x0099bd00();
    param_3 = auVar15._8_8_;
    *(undefined1 **)((long)register0x00000020 + -0xf8) =
         (undefined1 *)((long)register0x00000020 + -0x80);
    *(byte **)((long)register0x00000020 + -0x100) = pbVar13;
    *(ulong *)((long)register0x00000020 + -0x108) = uVar12;
    *(ulong *)((long)register0x00000020 + -0x110) = param_1;
    *(long *)((long)register0x00000020 + -0x118) = auVar15._0_8_;
    param_1 = (ulong)uVar11;
    *(undefined **)((long)register0x00000020 + -0x120) = &UNK_003d1224;
    cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar2 == '\0') {
      return 0;
    }
    unaff_RBX = *(ulong *)((long)register0x00000020 + -0x110);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x108);
    unaff_R15 = *(byte **)((long)register0x00000020 + -0x100);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0xf8);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xf0);
  } while( true );
}


