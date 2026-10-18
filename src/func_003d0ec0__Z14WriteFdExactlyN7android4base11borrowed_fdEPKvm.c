// Function: _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
// Address: 003d0ec0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(ulong param_1,byte *param_2,ulong param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong unaff_RBX;
  undefined8 unaff_RBP;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint *unaff_R12;
  undefined4 *unaff_R13;
  ulong unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 auVar15 [16];
  
  do {
    uVar12 = (uint)param_1;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined4 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    param_1 = param_1 & 0xffffffff;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R13 = &adb_trace_mask;
    unaff_R15 = param_2;
    uVar13 = uVar12;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar13 = 1;
      unaff_R15 = (byte *)0x0;
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1085;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1092;
        puVar5 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)register0x00000020 + -0x68) = puVar5;
        *(undefined4 *)((long)register0x00000020 + -0x5c) = *puVar5;
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)register0x00000020 + -0x40),&UNK_001770ec,0x6a,1,0,
                   0xffffffff);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d10c9;
        uVar10 = _ZN7android4base10LogMessage6streamEv
                           ((undefined1 *)((long)register0x00000020 + -0x40));
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d10dd;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015fba7,0xb);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d10e7;
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10,param_1);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d10fb;
        uVar10 = func_0x0032eb30(uVar10,&UNK_001595f3,5);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1106;
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,param_3);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d111a;
        unaff_R12 = (uint *)func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d112c;
        _Z8dump_hexPKvm((undefined1 *)((long)register0x00000020 + -0x58),param_2,param_3);
        unaff_R15 = (byte *)((long)register0x00000020 + -0x58);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1138;
        func_0x0032e5a0(unaff_R12);
        if ((*(byte *)((long)register0x00000020 + -0x58) & 1) != 0) {
          unaff_R15 = (byte *)(*(ulong *)((long)register0x00000020 + -0x58) & 0xfffffffffffffffe);
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0x48));
        }
        uVar13 = (uint)(undefined1 *)((long)register0x00000020 + -0x40);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)((long)register0x00000020 + -0x68) =
             *(undefined4 *)((long)register0x00000020 + -0x5c);
      }
    }
    uVar7 = 1;
    if (param_3 != 0) {
      do {
        while( true ) {
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f1d;
          unaff_R15 = param_2;
          uVar13 = uVar12;
          lVar8 = func_0x0099be60(param_1,param_2,param_3);
          if (lVar8 != -1) break;
          *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f45;
          piVar9 = (int *)func_0x0099bce0();
          if (*piVar9 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar13 = 1;
              unaff_R15 = (byte *)0x0;
              *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f84;
              cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar3 != '\0') {
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f8d;
                puVar5 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)((long)register0x00000020 + -0x68) = puVar5;
                *(undefined4 *)((long)register0x00000020 + -0x5c) = *puVar5;
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          ((undefined1 *)((long)register0x00000020 + -0x40),&UNK_001770ec,0x70,1,0,
                           0xffffffff);
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0fc4;
                uVar10 = _ZN7android4base10LogMessage6streamEv
                                   ((undefined1 *)((long)register0x00000020 + -0x40));
                *(undefined8 *)((long)register0x00000020 + -0x70) = uVar10;
                uVar1 = **(undefined4 **)((long)register0x00000020 + -0x68);
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0fd7;
                func_0x0099bd20(uVar1);
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz
                          ((undefined1 *)((long)register0x00000020 + -0x58),&UNK_0015c7bb,param_1,
                           uVar1);
                unaff_R15 = (byte *)((long)register0x00000020 + -0x58);
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)((long)register0x00000020 + -0x70));
                if ((*(byte *)((long)register0x00000020 + -0x58) & 1) != 0) {
                  unaff_R15 = (byte *)(*(ulong *)((long)register0x00000020 + -0x58) &
                                      0xfffffffffffffffe);
                  *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0x48));
                }
                uVar13 = (uint)(undefined1 *)((long)register0x00000020 + -0x40);
                *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)((long)register0x00000020 + -0x68) =
                     *(undefined4 *)((long)register0x00000020 + -0x5c);
              }
            }
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f63;
            unaff_R12 = (uint *)func_0x0099bce0();
            if (*unaff_R12 != 0xb) {
              if (*unaff_R12 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar13 = 1;
                  unaff_R15 = (byte *)0x0;
                  *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d1172;
                  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar3 != '\0') {
                    uVar12 = *unaff_R12;
                    unaff_R13 = (undefined4 *)(ulong)uVar12;
                    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              ((undefined1 *)((long)register0x00000020 + -0x40),&UNK_001770ec,0x76,1
                               ,0,0xffffffff);
                    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11ac;
                    param_3 = _ZN7android4base10LogMessage6streamEv
                                        ((undefined1 *)((long)register0x00000020 + -0x40));
                    param_2 = (byte *)((long)register0x00000020 + -0x58);
                    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(param_2,&UNK_0016eb75,param_1);
                    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11d1;
                    unaff_R15 = param_2;
                    func_0x0032e5a0(param_3);
                    if ((*(byte *)((long)register0x00000020 + -0x58) & 1) != 0) {
                      unaff_R15 = (byte *)(*(ulong *)((long)register0x00000020 + -0x58) &
                                          0xfffffffffffffffe);
                      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0x48));
                    }
                    uVar13 = (uint)(undefined1 *)((long)register0x00000020 + -0x40);
                    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *unaff_R12 = uVar12;
                  }
                }
                *unaff_R12 = 0;
              }
              uVar7 = 0;
              goto code_r0x003d1053;
            }
            *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar4 = (int)lVar8;
        if (iVar4 == -1) goto code_r0x003d0f4a;
        param_2 = param_2 + iVar4;
        param_3 = param_3 - (long)iVar4;
      } while (param_3 != 0);
      uVar7 = 1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
      return uVar7;
    }
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d11ff;
    auVar15 = func_0x0099bd00();
    unaff_R14 = auVar15._8_8_;
    *(undefined1 **)((long)register0x00000020 + -0x80) =
         (undefined1 *)((long)register0x00000020 + -8);
    *(byte **)((long)register0x00000020 + -0x88) = param_2;
    *(ulong *)((long)register0x00000020 + -0x90) = param_3;
    *(ulong *)((long)register0x00000020 + -0x98) = param_1;
    *(long *)((long)register0x00000020 + -0xa0) = auVar15._0_8_;
    uVar7 = (ulong)uVar13;
    *(undefined **)((long)register0x00000020 + -0xa8) = &UNK_003d1224;
    cVar3 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar3 == '\0') {
      return 0;
    }
    unaff_RBX = *(ulong *)((long)register0x00000020 + -0x98);
    pbVar2 = *(byte **)((long)register0x00000020 + -0x88);
    *(undefined8 *)((long)register0x00000020 + -0x80) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(byte **)((long)register0x00000020 + -0x88) = pbVar2;
    *(undefined8 *)((long)register0x00000020 + -0x90) =
         *(undefined8 *)((long)register0x00000020 + -0x90);
    *(undefined4 **)((long)register0x00000020 + -0x98) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0xa0) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0xa8) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar15._8_4_ < 0xffffd) {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000020 + -200) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)register0x00000020 + -0xe8),&UNK_00179ee3,
                 unaff_R14 & 0xffffffff);
      uVar6 = *(ulong *)((long)register0x00000020 + -0xe8);
      lVar8 = 0x16;
      if ((*(byte *)((long)register0x00000020 + -0xe8) & 1) != 0) {
        lVar8 = (uVar6 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar6 & 1) == 0) {
        unaff_R12 = (uint *)(ulong)((uint)(uVar6 >> 1) & 0x7f);
      }
      else {
        unaff_R12 = *(uint **)((long)register0x00000020 + -0xe0);
      }
      if ((ulong)(lVar8 - (long)unaff_R12) < unaff_R14) {
        *(byte **)((long)register0x00000020 + -0xf8) = unaff_R15;
        *(ulong *)((long)register0x00000020 + -0x100) = unaff_R14;
        *(undefined **)((long)register0x00000020 + -0x108) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  ((undefined1 *)((long)register0x00000020 + -0xe8),lVar8,
                   (unaff_R14 - lVar8) + (long)unaff_R12,unaff_R12,unaff_R12,0);
      }
      else if (unaff_R14 != 0) {
        if ((uVar6 & 1) == 0) {
          unaff_R13 = (undefined4 *)((long)register0x00000020 + -0xe7);
        }
        else {
          unaff_R13 = *(undefined4 **)((long)register0x00000020 + -0xd8);
        }
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d08b6;
        func_0x0099bd90((long)unaff_R12 + (long)unaff_R13,unaff_R15,unaff_R14);
        unaff_R12 = (uint *)((long)unaff_R12 + unaff_R14);
        if ((*(byte *)((long)register0x00000020 + -0xe8) & 1) == 0) {
          *(char *)((long)register0x00000020 + -0xe8) = (char)unaff_R12 * '\x02';
        }
        else {
          *(uint **)((long)register0x00000020 + -0xe0) = unaff_R12;
        }
        *(undefined1 *)((long)unaff_R13 + (long)unaff_R12) = 0;
      }
      if ((*(byte *)((long)register0x00000020 + -0xe8) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xc0) =
             *(undefined8 *)((long)register0x00000020 + -0xd8);
        *(undefined4 *)((long)register0x00000020 + -0xd0) =
             *(undefined4 *)((long)register0x00000020 + -0xe8);
        *(undefined4 *)((long)register0x00000020 + -0xcc) =
             *(undefined4 *)((long)register0x00000020 + -0xe4);
        *(undefined4 *)((long)register0x00000020 + -200) =
             *(undefined4 *)((long)register0x00000020 + -0xe0);
        *(undefined4 *)((long)register0x00000020 + -0xc4) =
             *(undefined4 *)((long)register0x00000020 + -0xdc);
      }
      else {
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d08fb;
        func_0x00330340((undefined1 *)((long)register0x00000020 + -0xd0),
                        *(undefined8 *)((long)register0x00000020 + -0xd8),
                        *(undefined8 *)((long)register0x00000020 + -0xe0));
        if ((*(byte *)((long)register0x00000020 + -0xe8) & 1) != 0) {
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)register0x00000020 + -0xd8),
                     *(ulong *)((long)register0x00000020 + -0xe8) & 0xfffffffffffffffe);
        }
      }
      bVar14 = (*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0;
      pbVar11 = (byte *)((long)register0x00000020 + -0xcf);
      if (bVar14) {
        pbVar11 = *(byte **)((long)register0x00000020 + -0xc0);
      }
      uVar6 = (ulong)(*(byte *)((long)register0x00000020 + -0xd0) >> 1);
      if (bVar14) {
        uVar6 = *(ulong *)((long)register0x00000020 + -200);
      }
      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0931;
      param_1 = uVar7;
      uVar6 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar7,pbVar11,uVar6);
      unaff_RBX = uVar7;
      if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
        param_1 = *(ulong *)((long)register0x00000020 + -0xc0);
        pbVar11 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) & 0xfffffffffffffffe);
        uVar6 = uVar6 & 0xffffffff;
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        unaff_RBX = uVar6;
      }
    }
    else {
      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d07ff;
      puVar5 = (undefined4 *)func_0x0099bce0();
      *puVar5 = 0x5a;
      uVar6 = 0;
      pbVar11 = unaff_R15;
      param_1 = uVar7;
      unaff_R15 = pbVar2;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0xb0)) {
      return uVar6;
    }
    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)((long)register0x00000020 + -0xf8) =
         (undefined1 *)((long)register0x00000020 + -0x80);
    bVar14 = (*pbVar11 & 1) != 0;
    param_2 = pbVar11 + 1;
    if (bVar14) {
      param_2 = *(byte **)(pbVar11 + 0x10);
    }
    param_3 = (ulong)(*pbVar11 >> 1);
    if (bVar14) {
      param_3 = *(ulong *)(pbVar11 + 8);
    }
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0xf8);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xf0);
  } while( true );
}


