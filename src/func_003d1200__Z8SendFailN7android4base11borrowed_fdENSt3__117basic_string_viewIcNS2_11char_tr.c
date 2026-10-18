// Function: _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
// Address: 003d1200
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
          (undefined1 *param_1,byte *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 in_RAX;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *unaff_RBX;
  undefined1 *unaff_RBP;
  byte *pbVar15;
  uint *unaff_R12;
  undefined4 *unaff_R13;
  ulong unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 auVar17 [16];
  
  auVar17._8_8_ = param_3;
  auVar17._0_8_ = in_RAX;
  do {
    uVar13 = auVar17._8_8_;
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined1 **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(long *)((long)register0x00000020 + -0x28) = auVar17._0_8_;
    puVar8 = (undefined1 *)((ulong)param_1 & 0xffffffff);
    *(undefined **)((long)register0x00000020 + -0x30) = &UNK_003d1224;
    cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar4 == '\0') {
      return (undefined1 *)0x0;
    }
    puVar14 = *(undefined1 **)((long)register0x00000020 + -0x20);
    pbVar3 = *(byte **)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(byte **)((long)register0x00000020 + -0x10) = pbVar3;
    *(undefined8 *)((long)register0x00000020 + -0x18) =
         *(undefined8 *)((long)register0x00000020 + -0x18);
    *(undefined4 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined1 **)((long)register0x00000020 + -0x30) = puVar14;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar17._8_4_ < 0xffffd) {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)register0x00000020 + -0x70),&UNK_00179ee3,uVar13 & 0xffffffff)
      ;
      uVar12 = *(ulong *)((long)register0x00000020 + -0x70);
      lVar9 = 0x16;
      if ((*(byte *)((long)register0x00000020 + -0x70) & 1) != 0) {
        lVar9 = (uVar12 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar12 & 1) == 0) {
        unaff_R12 = (uint *)(ulong)((uint)(uVar12 >> 1) & 0x7f);
      }
      else {
        unaff_R12 = *(uint **)((long)register0x00000020 + -0x68);
      }
      if ((ulong)(lVar9 - (long)unaff_R12) < uVar13) {
        *(byte **)((long)register0x00000020 + -0x80) = param_2;
        *(ulong *)((long)register0x00000020 + -0x88) = uVar13;
        *(undefined **)((long)register0x00000020 + -0x90) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  ((undefined1 *)((long)register0x00000020 + -0x70),lVar9,
                   (uVar13 - lVar9) + (long)unaff_R12,unaff_R12,unaff_R12,0);
      }
      else if (uVar13 != 0) {
        if ((uVar12 & 1) == 0) {
          unaff_R13 = (undefined4 *)((long)register0x00000020 + -0x6f);
        }
        else {
          unaff_R13 = *(undefined4 **)((long)register0x00000020 + -0x60);
        }
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d08b6;
        func_0x0099bd90((long)unaff_R12 + (long)unaff_R13,param_2,uVar13);
        unaff_R12 = (uint *)((long)unaff_R12 + uVar13);
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
      bVar16 = (*(byte *)((long)register0x00000020 + -0x58) & 1) != 0;
      pbVar15 = (byte *)((long)register0x00000020 + -0x57);
      if (bVar16) {
        pbVar15 = *(byte **)((long)register0x00000020 + -0x48);
      }
      uVar12 = (ulong)(*(byte *)((long)register0x00000020 + -0x58) >> 1);
      if (bVar16) {
        uVar12 = *(ulong *)((long)register0x00000020 + -0x50);
      }
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d0931;
      param_1 = puVar8;
      puVar7 = (undefined1 *)
               _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(puVar8,pbVar15,uVar12);
      puVar14 = puVar8;
      if ((*(byte *)((long)register0x00000020 + -0x58) & 1) != 0) {
        param_1 = *(undefined1 **)((long)register0x00000020 + -0x48);
        pbVar15 = (byte *)(*(ulong *)((long)register0x00000020 + -0x58) & 0xfffffffffffffffe);
        puVar7 = (undefined1 *)((ulong)puVar7 & 0xffffffff);
        *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        puVar14 = puVar7;
      }
    }
    else {
      *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d07ff;
      puVar6 = (undefined4 *)func_0x0099bce0();
      *puVar6 = 0x5a;
      puVar7 = (undefined1 *)0x0;
      pbVar15 = param_2;
      param_1 = puVar8;
      param_2 = pbVar3;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
      return puVar7;
    }
    *(undefined **)((long)register0x00000020 + -0x80) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)((long)register0x00000020 + -0x80) =
         (undefined1 *)((long)register0x00000020 + -8);
    bVar16 = (*pbVar15 & 1) != 0;
    unaff_R15 = pbVar15 + 1;
    if (bVar16) {
      unaff_R15 = *(byte **)(pbVar15 + 0x10);
    }
    unaff_R14 = (ulong)(*pbVar15 >> 1);
    if (bVar16) {
      unaff_R14 = *(ulong *)(pbVar15 + 8);
    }
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -0x80);
    *(undefined8 *)((long)register0x00000020 + -0x80) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(byte **)((long)register0x00000020 + -0x88) = param_2;
    *(ulong *)((long)register0x00000020 + -0x90) = uVar13;
    *(undefined4 **)((long)register0x00000020 + -0x98) = unaff_R13;
    *(uint **)((long)register0x00000020 + -0xa0) = unaff_R12;
    *(undefined1 **)((long)register0x00000020 + -0xa8) = puVar14;
    unaff_RBX = (undefined1 *)((ulong)param_1 & 0xffffffff);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R13 = &adb_trace_mask;
    param_2 = unaff_R15;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      param_1 = (undefined1 *)0x1;
      param_2 = (byte *)0x0;
      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1085;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar4 != '\0') {
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1092;
        puVar6 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)register0x00000020 + -0xe0) = puVar6;
        *(undefined4 *)((long)register0x00000020 + -0xd4) = *puVar6;
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x6a,1,0);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10c9;
        uVar11 = _ZN7android4base10LogMessage6streamEv
                           ((undefined1 *)((long)register0x00000020 + -0xb8));
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10dd;
        uVar11 = func_0x0032eb30(uVar11,&UNK_0015fba7,0xb);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10e7;
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar11,unaff_RBX);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d10fb;
        uVar11 = func_0x0032eb30(uVar11,&UNK_001595f3,5);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1106;
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,unaff_R14);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d111a;
        unaff_R12 = (uint *)func_0x0032eb30(uVar11,&UNK_0015ae05,1);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d112c;
        _Z8dump_hexPKvm((undefined1 *)((long)register0x00000020 + -0xd0),unaff_R15,unaff_R14);
        param_2 = (byte *)((long)register0x00000020 + -0xd0);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1138;
        func_0x0032e5a0(unaff_R12);
        if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
          param_2 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) & 0xfffffffffffffffe);
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0xc0));
        }
        param_1 = (undefined1 *)((long)register0x00000020 + -0xb8);
        *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)((long)register0x00000020 + -0xe0) =
             *(undefined4 *)((long)register0x00000020 + -0xd4);
      }
    }
    puVar8 = (undefined1 *)0x1;
    if (unaff_R14 != 0) {
      do {
        while( true ) {
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f1d;
          param_2 = unaff_R15;
          param_1 = unaff_RBX;
          lVar9 = func_0x0099be60(unaff_RBX,unaff_R15,unaff_R14);
          if (lVar9 != -1) break;
          *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f45;
          piVar10 = (int *)func_0x0099bce0();
          if (*piVar10 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              param_1 = (undefined1 *)0x1;
              param_2 = (byte *)0x0;
              *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f84;
              cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar4 != '\0') {
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f8d;
                puVar6 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)((long)register0x00000020 + -0xe0) = puVar6;
                *(undefined4 *)((long)register0x00000020 + -0xd4) = *puVar6;
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x70,1,0);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fc4;
                uVar11 = _ZN7android4base10LogMessage6streamEv
                                   ((undefined1 *)((long)register0x00000020 + -0xb8));
                *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar11;
                uVar1 = **(undefined4 **)((long)register0x00000020 + -0xe0);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0fd7;
                func_0x0099bd20(uVar1);
                *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz
                          ((undefined1 *)((long)register0x00000020 + -0xd0),&UNK_0015c7bb,unaff_RBX,
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
                param_1 = (undefined1 *)((long)register0x00000020 + -0xb8);
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
                  param_1 = (undefined1 *)0x1;
                  param_2 = (byte *)0x0;
                  *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d1172;
                  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar4 != '\0') {
                    uVar2 = *unaff_R12;
                    unaff_R13 = (undefined4 *)(ulong)uVar2;
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              ((undefined1 *)((long)register0x00000020 + -0xb8),&UNK_001770ec,0x76,1
                               ,0);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11ac;
                    unaff_R14 = _ZN7android4base10LogMessage6streamEv
                                          ((undefined1 *)((long)register0x00000020 + -0xb8));
                    unaff_R15 = (byte *)((long)register0x00000020 + -0xd0);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(unaff_R15,&UNK_0016eb75,unaff_RBX);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11d1;
                    param_2 = unaff_R15;
                    func_0x0032e5a0(unaff_R14);
                    if ((*(byte *)((long)register0x00000020 + -0xd0) & 1) != 0) {
                      param_2 = (byte *)(*(ulong *)((long)register0x00000020 + -0xd0) &
                                        0xfffffffffffffffe);
                      *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)((long)register0x00000020 + -0xc0));
                    }
                    param_1 = (undefined1 *)((long)register0x00000020 + -0xb8);
                    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *unaff_R12 = uVar2;
                  }
                }
                *unaff_R12 = 0;
              }
              puVar8 = (undefined1 *)0x0;
              goto code_r0x003d1053;
            }
            *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar5 = (int)lVar9;
        if (iVar5 == -1) goto code_r0x003d0f4a;
        unaff_R15 = unaff_R15 + iVar5;
        unaff_R14 = unaff_R14 - (long)iVar5;
      } while (unaff_R14 != 0);
      puVar8 = (undefined1 *)0x1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0xb0)) {
      return puVar8;
    }
    *(undefined **)((long)register0x00000020 + -0xf8) = &UNK_003d11ff;
    auVar17 = func_0x0099bd00();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xf0);
  } while( true );
}


