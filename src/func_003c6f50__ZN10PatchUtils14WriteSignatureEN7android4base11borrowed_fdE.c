// Function: _ZN10PatchUtils14WriteSignatureEN7android4base11borrowed_fdE
// Address: 003c6f50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN10PatchUtils14WriteSignatureEN7android4base11borrowed_fdE(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong unaff_RBX;
  undefined1 *puVar10;
  undefined8 unaff_RBP;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *unaff_R12;
  undefined4 *unaff_R13;
  ulong unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  bool bVar15;
  undefined1 auVar16 [16];
  
  pbVar11 = &UNK_001fddb8;
  uVar9 = 10;
  puVar10 = (undefined1 *)register0x00000020;
  do {
    uVar13 = (uint)param_1;
    *(undefined8 *)(puVar10 + -8) = unaff_RBP;
    *(byte **)(puVar10 + -0x10) = unaff_R15;
    *(ulong *)(puVar10 + -0x18) = unaff_R14;
    *(undefined4 **)(puVar10 + -0x20) = unaff_R13;
    *(uint **)(puVar10 + -0x28) = unaff_R12;
    *(ulong *)(puVar10 + -0x30) = unaff_RBX;
    param_1 = param_1 & 0xffffffff;
    *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R13 = &adb_trace_mask;
    unaff_R15 = pbVar11;
    uVar14 = uVar13;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar14 = 1;
      unaff_R15 = (byte *)0x0;
      *(undefined **)(puVar10 + -0x80) = &UNK_003d1085;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        *(undefined **)(puVar10 + -0x80) = &UNK_003d1092;
        puVar4 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)(puVar10 + -0x68) = puVar4;
        *(undefined4 *)(puVar10 + -0x5c) = *puVar4;
        *(undefined **)(puVar10 + -0x80) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar10 + -0x40,&UNK_001770ec,0x6a,1,0,0xffffffff);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d10c9;
        uVar8 = _ZN7android4base10LogMessage6streamEv(puVar10 + -0x40);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d10dd;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015fba7,0xb);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d10e7;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,param_1);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d10fb;
        uVar8 = func_0x0032eb30(uVar8,&UNK_001595f3,5);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d1106;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,uVar9);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d111a;
        unaff_R12 = (uint *)func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d112c;
        _Z8dump_hexPKvm(puVar10 + -0x58,pbVar11,uVar9);
        unaff_R15 = puVar10 + -0x58;
        *(undefined **)(puVar10 + -0x80) = &UNK_003d1138;
        func_0x0032e5a0(unaff_R12);
        if ((puVar10[-0x58] & 1) != 0) {
          unaff_R15 = (byte *)(*(ulong *)(puVar10 + -0x58) & 0xfffffffffffffffe);
          *(undefined **)(puVar10 + -0x80) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)(puVar10 + -0x48));
        }
        uVar14 = (uint)(puVar10 + -0x40);
        *(undefined **)(puVar10 + -0x80) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)(puVar10 + -0x68) = *(undefined4 *)(puVar10 + -0x5c);
      }
    }
    uVar5 = 1;
    if (uVar9 != 0) {
      do {
        while( true ) {
          *(undefined **)(puVar10 + -0x80) = &UNK_003d0f1d;
          unaff_R15 = pbVar11;
          uVar14 = uVar13;
          lVar6 = func_0x0099be60(param_1,pbVar11,uVar9);
          if (lVar6 != -1) break;
          *(undefined **)(puVar10 + -0x80) = &UNK_003d0f45;
          piVar7 = (int *)func_0x0099bce0();
          if (*piVar7 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar14 = 1;
              unaff_R15 = (byte *)0x0;
              *(undefined **)(puVar10 + -0x80) = &UNK_003d0f84;
              cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar2 != '\0') {
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0f8d;
                puVar4 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)(puVar10 + -0x68) = puVar4;
                *(undefined4 *)(puVar10 + -0x5c) = *puVar4;
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (puVar10 + -0x40,&UNK_001770ec,0x70,1,0,0xffffffff);
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0fc4;
                uVar8 = _ZN7android4base10LogMessage6streamEv(puVar10 + -0x40);
                *(undefined8 *)(puVar10 + -0x70) = uVar8;
                uVar1 = **(undefined4 **)(puVar10 + -0x68);
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0fd7;
                func_0x0099bd20(uVar1);
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz(puVar10 + -0x58,&UNK_0015c7bb,param_1,uVar1);
                unaff_R15 = puVar10 + -0x58;
                *(undefined **)(puVar10 + -0x80) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)(puVar10 + -0x70));
                if ((puVar10[-0x58] & 1) != 0) {
                  unaff_R15 = (byte *)(*(ulong *)(puVar10 + -0x58) & 0xfffffffffffffffe);
                  *(undefined **)(puVar10 + -0x80) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)(puVar10 + -0x48));
                }
                uVar14 = (uint)(puVar10 + -0x40);
                *(undefined **)(puVar10 + -0x80) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)(puVar10 + -0x68) = *(undefined4 *)(puVar10 + -0x5c);
              }
            }
            *(undefined **)(puVar10 + -0x80) = &UNK_003d0f63;
            unaff_R12 = (uint *)func_0x0099bce0();
            if (*unaff_R12 != 0xb) {
              if (*unaff_R12 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar14 = 1;
                  unaff_R15 = (byte *)0x0;
                  *(undefined **)(puVar10 + -0x80) = &UNK_003d1172;
                  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar2 != '\0') {
                    uVar13 = *unaff_R12;
                    unaff_R13 = (undefined4 *)(ulong)uVar13;
                    *(undefined **)(puVar10 + -0x80) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (puVar10 + -0x40,&UNK_001770ec,0x76,1,0,0xffffffff);
                    *(undefined **)(puVar10 + -0x80) = &UNK_003d11ac;
                    uVar9 = _ZN7android4base10LogMessage6streamEv(puVar10 + -0x40);
                    pbVar11 = puVar10 + -0x58;
                    *(undefined **)(puVar10 + -0x80) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(pbVar11,&UNK_0016eb75,param_1);
                    *(undefined **)(puVar10 + -0x80) = &UNK_003d11d1;
                    unaff_R15 = pbVar11;
                    func_0x0032e5a0(uVar9);
                    if ((puVar10[-0x58] & 1) != 0) {
                      unaff_R15 = (byte *)(*(ulong *)(puVar10 + -0x58) & 0xfffffffffffffffe);
                      *(undefined **)(puVar10 + -0x80) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)(puVar10 + -0x48));
                    }
                    uVar14 = (uint)(puVar10 + -0x40);
                    *(undefined **)(puVar10 + -0x80) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *unaff_R12 = uVar13;
                  }
                }
                *unaff_R12 = 0;
              }
              uVar5 = 0;
              goto code_r0x003d1053;
            }
            *(undefined **)(puVar10 + -0x80) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar3 = (int)lVar6;
        if (iVar3 == -1) goto code_r0x003d0f4a;
        pbVar11 = pbVar11 + iVar3;
        uVar9 = uVar9 - (long)iVar3;
      } while (uVar9 != 0);
      uVar5 = 1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar10 + -0x38)) {
      return uVar5;
    }
    *(undefined **)(puVar10 + -0x80) = &UNK_003d11ff;
    auVar16 = func_0x0099bd00();
    unaff_R14 = auVar16._8_8_;
    *(undefined1 **)(puVar10 + -0x80) = puVar10 + -8;
    *(byte **)(puVar10 + -0x88) = pbVar11;
    *(ulong *)(puVar10 + -0x90) = uVar9;
    *(ulong *)(puVar10 + -0x98) = param_1;
    *(long *)(puVar10 + -0xa0) = auVar16._0_8_;
    uVar9 = (ulong)uVar14;
    *(undefined **)(puVar10 + -0xa8) = &UNK_003d1224;
    cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar2 == '\0') {
      return 0;
    }
    unaff_RBX = *(ulong *)(puVar10 + -0x98);
    pbVar11 = *(byte **)(puVar10 + -0x88);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x80);
    *(byte **)(puVar10 + -0x88) = pbVar11;
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x90);
    *(undefined4 **)(puVar10 + -0x98) = unaff_R13;
    *(uint **)(puVar10 + -0xa0) = unaff_R12;
    *(ulong *)(puVar10 + -0xa8) = unaff_RBX;
    *(undefined8 *)(puVar10 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar16._8_4_ < 0xffffd) {
      *(undefined8 *)(puVar10 + -0xd0) = 0;
      *(undefined8 *)(puVar10 + -200) = 0;
      *(undefined8 *)(puVar10 + -0xc0) = 0;
      *(undefined **)(puVar10 + -0xf8) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz(puVar10 + -0xe8,&UNK_00179ee3,unaff_R14 & 0xffffffff);
      uVar5 = *(ulong *)(puVar10 + -0xe8);
      lVar6 = 0x16;
      if ((puVar10[-0xe8] & 1) != 0) {
        lVar6 = (uVar5 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar5 & 1) == 0) {
        unaff_R12 = (uint *)(ulong)((uint)(uVar5 >> 1) & 0x7f);
      }
      else {
        unaff_R12 = *(uint **)(puVar10 + -0xe0);
      }
      if ((ulong)(lVar6 - (long)unaff_R12) < unaff_R14) {
        *(byte **)(puVar10 + -0xf8) = unaff_R15;
        *(ulong *)(puVar10 + -0x100) = unaff_R14;
        *(undefined **)(puVar10 + -0x108) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (puVar10 + -0xe8,lVar6,(unaff_R14 - lVar6) + (long)unaff_R12,unaff_R12,unaff_R12,0
                  );
      }
      else if (unaff_R14 != 0) {
        if ((uVar5 & 1) == 0) {
          unaff_R13 = (undefined4 *)(puVar10 + -0xe7);
        }
        else {
          unaff_R13 = *(undefined4 **)(puVar10 + -0xd8);
        }
        *(undefined **)(puVar10 + -0xf8) = &UNK_003d08b6;
        func_0x0099bd90((long)unaff_R12 + (long)unaff_R13,unaff_R15,unaff_R14);
        unaff_R12 = (uint *)((long)unaff_R12 + unaff_R14);
        if ((puVar10[-0xe8] & 1) == 0) {
          puVar10[-0xe8] = (char)unaff_R12 * '\x02';
        }
        else {
          *(uint **)(puVar10 + -0xe0) = unaff_R12;
        }
        *(undefined1 *)((long)unaff_R13 + (long)unaff_R12) = 0;
      }
      if ((puVar10[-0xe8] & 1) == 0) {
        *(undefined8 *)(puVar10 + -0xc0) = *(undefined8 *)(puVar10 + -0xd8);
        *(undefined4 *)(puVar10 + -0xd0) = *(undefined4 *)(puVar10 + -0xe8);
        *(undefined4 *)(puVar10 + -0xcc) = *(undefined4 *)(puVar10 + -0xe4);
        *(undefined4 *)(puVar10 + -200) = *(undefined4 *)(puVar10 + -0xe0);
        *(undefined4 *)(puVar10 + -0xc4) = *(undefined4 *)(puVar10 + -0xdc);
      }
      else {
        *(undefined **)(puVar10 + -0xf8) = &UNK_003d08fb;
        func_0x00330340(puVar10 + -0xd0,*(undefined8 *)(puVar10 + -0xd8),
                        *(undefined8 *)(puVar10 + -0xe0));
        if ((puVar10[-0xe8] & 1) != 0) {
          *(undefined **)(puVar10 + -0xf8) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(puVar10 + -0xd8),
                     *(ulong *)(puVar10 + -0xe8) & 0xfffffffffffffffe);
        }
      }
      bVar15 = (puVar10[-0xd0] & 1) != 0;
      pbVar12 = puVar10 + -0xcf;
      if (bVar15) {
        pbVar12 = *(byte **)(puVar10 + -0xc0);
      }
      uVar5 = (ulong)((byte)puVar10[-0xd0] >> 1);
      if (bVar15) {
        uVar5 = *(ulong *)(puVar10 + -200);
      }
      *(undefined **)(puVar10 + -0xf8) = &UNK_003d0931;
      param_1 = uVar9;
      uVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar9,pbVar12,uVar5);
      unaff_RBX = uVar9;
      if ((puVar10[-0xd0] & 1) != 0) {
        param_1 = *(ulong *)(puVar10 + -0xc0);
        pbVar12 = (byte *)(*(ulong *)(puVar10 + -0xd0) & 0xfffffffffffffffe);
        uVar5 = uVar5 & 0xffffffff;
        *(undefined **)(puVar10 + -0xf8) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        unaff_RBX = uVar5;
      }
    }
    else {
      *(undefined **)(puVar10 + -0xf8) = &UNK_003d07ff;
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = 0x5a;
      uVar5 = 0;
      pbVar12 = unaff_R15;
      param_1 = uVar9;
      unaff_R15 = pbVar11;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar10 + -0xb0)) {
      return uVar5;
    }
    *(undefined **)(puVar10 + -0xf8) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)(puVar10 + -0xf8) = puVar10 + -0x80;
    bVar15 = (*pbVar12 & 1) != 0;
    pbVar11 = pbVar12 + 1;
    if (bVar15) {
      pbVar11 = *(byte **)(pbVar12 + 0x10);
    }
    uVar9 = (ulong)(*pbVar12 >> 1);
    if (bVar15) {
      uVar9 = *(ulong *)(pbVar12 + 8);
    }
    unaff_RBP = *(undefined8 *)(puVar10 + -0xf8);
    puVar10 = puVar10 + -0xf0;
  } while( true );
}


