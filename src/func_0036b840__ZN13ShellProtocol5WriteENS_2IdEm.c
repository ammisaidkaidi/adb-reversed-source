// Function: _ZN13ShellProtocol5WriteENS_2IdEm
// Address: 0036b840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN13ShellProtocol5WriteENS_2IdEm(long param_1,undefined1 param_2,long param_3)

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
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 unaff_RBP;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *unaff_R12;
  undefined4 *unaff_R13;
  ulong unaff_R14;
  byte *unaff_R15;
  byte *pbVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 auVar17 [16];
  
  pbVar15 = (byte *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0xd) = (int)param_3;
  uVar10 = (ulong)*(uint *)(param_1 + 8);
  uVar9 = param_3 + 5;
  puVar11 = (undefined1 *)register0x00000020;
  do {
    uVar13 = (uint)uVar10;
    *(undefined8 *)(puVar11 + -8) = unaff_RBP;
    *(byte **)(puVar11 + -0x10) = unaff_R15;
    *(ulong *)(puVar11 + -0x18) = unaff_R14;
    *(undefined4 **)(puVar11 + -0x20) = unaff_R13;
    *(uint **)(puVar11 + -0x28) = unaff_R12;
    *(ulong *)(puVar11 + -0x30) = unaff_RBX;
    uVar10 = uVar10 & 0xffffffff;
    *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R13 = &adb_trace_mask;
    unaff_R15 = pbVar15;
    uVar14 = uVar13;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      uVar14 = 1;
      unaff_R15 = (byte *)0x0;
      *(undefined **)(puVar11 + -0x80) = &UNK_003d1085;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        *(undefined **)(puVar11 + -0x80) = &UNK_003d1092;
        puVar4 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)(puVar11 + -0x68) = puVar4;
        *(undefined4 *)(puVar11 + -0x5c) = *puVar4;
        *(undefined **)(puVar11 + -0x80) = &UNK_003d10c1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar11 + -0x40,&UNK_001770ec,0x6a,1,0,0xffffffff);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d10c9;
        uVar8 = _ZN7android4base10LogMessage6streamEv(puVar11 + -0x40);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d10dd;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015fba7,0xb);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d10e7;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,uVar10);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d10fb;
        uVar8 = func_0x0032eb30(uVar8,&UNK_001595f3,5);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d1106;
        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,uVar9);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d111a;
        unaff_R12 = (uint *)func_0x0032eb30(uVar8,&UNK_0015ae05,1);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d112c;
        _Z8dump_hexPKvm(puVar11 + -0x58,pbVar15,uVar9);
        unaff_R15 = puVar11 + -0x58;
        *(undefined **)(puVar11 + -0x80) = &UNK_003d1138;
        func_0x0032e5a0(unaff_R12);
        if ((puVar11[-0x58] & 1) != 0) {
          unaff_R15 = (byte *)(*(ulong *)(puVar11 + -0x58) & 0xfffffffffffffffe);
          *(undefined **)(puVar11 + -0x80) = &UNK_003d114f;
          _ZdaPvSt11align_val_t(*(undefined8 *)(puVar11 + -0x48));
        }
        uVar14 = (uint)(puVar11 + -0x40);
        *(undefined **)(puVar11 + -0x80) = &UNK_003d1158;
        _ZN7android4base10LogMessageD2Ev();
        **(undefined4 **)(puVar11 + -0x68) = *(undefined4 *)(puVar11 + -0x5c);
      }
    }
    uVar5 = 1;
    if (uVar9 != 0) {
      do {
        while( true ) {
          *(undefined **)(puVar11 + -0x80) = &UNK_003d0f1d;
          unaff_R15 = pbVar15;
          uVar14 = uVar13;
          lVar6 = func_0x0099be60(uVar10,pbVar15,uVar9);
          if (lVar6 != -1) break;
          *(undefined **)(puVar11 + -0x80) = &UNK_003d0f45;
          piVar7 = (int *)func_0x0099bce0();
          if (*piVar7 != 4) {
code_r0x003d0f4a:
            if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
              uVar14 = 1;
              unaff_R15 = (byte *)0x0;
              *(undefined **)(puVar11 + -0x80) = &UNK_003d0f84;
              cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
              if (cVar2 != '\0') {
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0f8d;
                puVar4 = (undefined4 *)func_0x0099bce0();
                *(undefined4 **)(puVar11 + -0x68) = puVar4;
                *(undefined4 *)(puVar11 + -0x5c) = *puVar4;
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0fbc;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (puVar11 + -0x40,&UNK_001770ec,0x70,1,0,0xffffffff);
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0fc4;
                uVar8 = _ZN7android4base10LogMessage6streamEv(puVar11 + -0x40);
                *(undefined8 *)(puVar11 + -0x70) = uVar8;
                uVar1 = **(undefined4 **)(puVar11 + -0x68);
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0fd7;
                func_0x0099bd20(uVar1);
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0ff1;
                _ZN7android4base12StringPrintfEPKcz(puVar11 + -0x58,&UNK_0015c7bb,uVar10,uVar1);
                unaff_R15 = puVar11 + -0x58;
                *(undefined **)(puVar11 + -0x80) = &UNK_003d0ffe;
                func_0x0032e5a0(*(undefined8 *)(puVar11 + -0x70));
                if ((puVar11[-0x58] & 1) != 0) {
                  unaff_R15 = (byte *)(*(ulong *)(puVar11 + -0x58) & 0xfffffffffffffffe);
                  *(undefined **)(puVar11 + -0x80) = &UNK_003d1015;
                  _ZdaPvSt11align_val_t(*(undefined8 *)(puVar11 + -0x48));
                }
                uVar14 = (uint)(puVar11 + -0x40);
                *(undefined **)(puVar11 + -0x80) = &UNK_003d101e;
                _ZN7android4base10LogMessageD2Ev();
                **(undefined4 **)(puVar11 + -0x68) = *(undefined4 *)(puVar11 + -0x5c);
              }
            }
            *(undefined **)(puVar11 + -0x80) = &UNK_003d0f63;
            unaff_R12 = (uint *)func_0x0099bce0();
            if (*unaff_R12 != 0xb) {
              if (*unaff_R12 == 0x20) {
                if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
                  uVar14 = 1;
                  unaff_R15 = (byte *)0x0;
                  *(undefined **)(puVar11 + -0x80) = &UNK_003d1172;
                  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
                  if (cVar2 != '\0') {
                    uVar13 = *unaff_R12;
                    unaff_R13 = (undefined4 *)(ulong)uVar13;
                    *(undefined **)(puVar11 + -0x80) = &UNK_003d11a4;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (puVar11 + -0x40,&UNK_001770ec,0x76,1,0,0xffffffff);
                    *(undefined **)(puVar11 + -0x80) = &UNK_003d11ac;
                    uVar9 = _ZN7android4base10LogMessage6streamEv(puVar11 + -0x40);
                    pbVar15 = puVar11 + -0x58;
                    *(undefined **)(puVar11 + -0x80) = &UNK_003d11c6;
                    _ZN7android4base12StringPrintfEPKcz(pbVar15,&UNK_0016eb75,uVar10);
                    *(undefined **)(puVar11 + -0x80) = &UNK_003d11d1;
                    unaff_R15 = pbVar15;
                    func_0x0032e5a0(uVar9);
                    if ((puVar11[-0x58] & 1) != 0) {
                      unaff_R15 = (byte *)(*(ulong *)(puVar11 + -0x58) & 0xfffffffffffffffe);
                      *(undefined **)(puVar11 + -0x80) = &UNK_003d11e8;
                      _ZdaPvSt11align_val_t(*(undefined8 *)(puVar11 + -0x48));
                    }
                    uVar14 = (uint)(puVar11 + -0x40);
                    *(undefined **)(puVar11 + -0x80) = &UNK_003d11f1;
                    _ZN7android4base10LogMessageD2Ev();
                    *unaff_R12 = uVar13;
                  }
                }
                *unaff_R12 = 0;
              }
              uVar5 = 0;
              goto code_r0x003d1053;
            }
            *(undefined **)(puVar11 + -0x80) = &UNK_003d0f76;
            func_0x0099c270();
          }
        }
        iVar3 = (int)lVar6;
        if (iVar3 == -1) goto code_r0x003d0f4a;
        pbVar15 = pbVar15 + iVar3;
        uVar9 = uVar9 - (long)iVar3;
      } while (uVar9 != 0);
      uVar5 = 1;
    }
code_r0x003d1053:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar11 + -0x38)) {
      return uVar5;
    }
    *(undefined **)(puVar11 + -0x80) = &UNK_003d11ff;
    auVar17 = func_0x0099bd00();
    unaff_R14 = auVar17._8_8_;
    *(undefined1 **)(puVar11 + -0x80) = puVar11 + -8;
    *(byte **)(puVar11 + -0x88) = pbVar15;
    *(ulong *)(puVar11 + -0x90) = uVar9;
    *(ulong *)(puVar11 + -0x98) = uVar10;
    *(long *)(puVar11 + -0xa0) = auVar17._0_8_;
    uVar9 = (ulong)uVar14;
    *(undefined **)(puVar11 + -0xa8) = &UNK_003d1224;
    cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm();
    if (cVar2 == '\0') {
      return 0;
    }
    unaff_RBX = *(ulong *)(puVar11 + -0x98);
    pbVar15 = *(byte **)(puVar11 + -0x88);
    *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x80);
    *(byte **)(puVar11 + -0x88) = pbVar15;
    *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x90);
    *(undefined4 **)(puVar11 + -0x98) = unaff_R13;
    *(uint **)(puVar11 + -0xa0) = unaff_R12;
    *(ulong *)(puVar11 + -0xa8) = unaff_RBX;
    *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (auVar17._8_4_ < 0xffffd) {
      *(undefined8 *)(puVar11 + -0xd0) = 0;
      *(undefined8 *)(puVar11 + -200) = 0;
      *(undefined8 *)(puVar11 + -0xc0) = 0;
      *(undefined **)(puVar11 + -0xf8) = &UNK_003d0835;
      _ZN7android4base12StringPrintfEPKcz(puVar11 + -0xe8,&UNK_00179ee3,unaff_R14 & 0xffffffff);
      uVar10 = *(ulong *)(puVar11 + -0xe8);
      lVar6 = 0x16;
      if ((puVar11[-0xe8] & 1) != 0) {
        lVar6 = (uVar10 & 0xfffffffffffffffe) - 1;
      }
      if ((uVar10 & 1) == 0) {
        unaff_R12 = (uint *)(ulong)((uint)(uVar10 >> 1) & 0x7f);
      }
      else {
        unaff_R12 = *(uint **)(puVar11 + -0xe0);
      }
      if ((ulong)(lVar6 - (long)unaff_R12) < unaff_R14) {
        *(byte **)(puVar11 + -0xf8) = unaff_R15;
        *(ulong *)(puVar11 + -0x100) = unaff_R14;
        *(undefined **)(puVar11 + -0x108) = &UNK_003d088e;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (puVar11 + -0xe8,lVar6,(unaff_R14 - lVar6) + (long)unaff_R12,unaff_R12,unaff_R12,0
                  );
      }
      else if (unaff_R14 != 0) {
        if ((uVar10 & 1) == 0) {
          unaff_R13 = (undefined4 *)(puVar11 + -0xe7);
        }
        else {
          unaff_R13 = *(undefined4 **)(puVar11 + -0xd8);
        }
        *(undefined **)(puVar11 + -0xf8) = &UNK_003d08b6;
        func_0x0099bd90((long)unaff_R12 + (long)unaff_R13,unaff_R15,unaff_R14);
        unaff_R12 = (uint *)((long)unaff_R12 + unaff_R14);
        if ((puVar11[-0xe8] & 1) == 0) {
          puVar11[-0xe8] = (char)unaff_R12 * '\x02';
        }
        else {
          *(uint **)(puVar11 + -0xe0) = unaff_R12;
        }
        *(undefined1 *)((long)unaff_R13 + (long)unaff_R12) = 0;
      }
      if ((puVar11[-0xe8] & 1) == 0) {
        *(undefined8 *)(puVar11 + -0xc0) = *(undefined8 *)(puVar11 + -0xd8);
        *(undefined4 *)(puVar11 + -0xd0) = *(undefined4 *)(puVar11 + -0xe8);
        *(undefined4 *)(puVar11 + -0xcc) = *(undefined4 *)(puVar11 + -0xe4);
        *(undefined4 *)(puVar11 + -200) = *(undefined4 *)(puVar11 + -0xe0);
        *(undefined4 *)(puVar11 + -0xc4) = *(undefined4 *)(puVar11 + -0xdc);
      }
      else {
        *(undefined **)(puVar11 + -0xf8) = &UNK_003d08fb;
        func_0x00330340(puVar11 + -0xd0,*(undefined8 *)(puVar11 + -0xd8),
                        *(undefined8 *)(puVar11 + -0xe0));
        if ((puVar11[-0xe8] & 1) != 0) {
          *(undefined **)(puVar11 + -0xf8) = &UNK_003d0912;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(puVar11 + -0xd8),
                     *(ulong *)(puVar11 + -0xe8) & 0xfffffffffffffffe);
        }
      }
      bVar16 = (puVar11[-0xd0] & 1) != 0;
      pbVar12 = puVar11 + -0xcf;
      if (bVar16) {
        pbVar12 = *(byte **)(puVar11 + -0xc0);
      }
      uVar5 = (ulong)((byte)puVar11[-0xd0] >> 1);
      if (bVar16) {
        uVar5 = *(ulong *)(puVar11 + -200);
      }
      *(undefined **)(puVar11 + -0xf8) = &UNK_003d0931;
      uVar10 = uVar9;
      uVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar9,pbVar12,uVar5);
      unaff_RBX = uVar9;
      if ((puVar11[-0xd0] & 1) != 0) {
        uVar10 = *(ulong *)(puVar11 + -0xc0);
        pbVar12 = (byte *)(*(ulong *)(puVar11 + -0xd0) & 0xfffffffffffffffe);
        uVar5 = uVar5 & 0xffffffff;
        *(undefined **)(puVar11 + -0xf8) = &UNK_003d094a;
        _ZdaPvSt11align_val_t();
        unaff_RBX = uVar5;
      }
    }
    else {
      *(undefined **)(puVar11 + -0xf8) = &UNK_003d07ff;
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = 0x5a;
      uVar5 = 0;
      pbVar12 = unaff_R15;
      uVar10 = uVar9;
      unaff_R15 = pbVar15;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar11 + -0xb0)) {
      return uVar5;
    }
    *(undefined **)(puVar11 + -0xf8) = &UNK_003d096f;
    func_0x0099bd00();
    *(undefined1 **)(puVar11 + -0xf8) = puVar11 + -0x80;
    bVar16 = (*pbVar12 & 1) != 0;
    pbVar15 = pbVar12 + 1;
    if (bVar16) {
      pbVar15 = *(byte **)(pbVar12 + 0x10);
    }
    uVar9 = (ulong)(*pbVar12 >> 1);
    if (bVar16) {
      uVar9 = *(ulong *)(pbVar12 + 8);
    }
    unaff_RBP = *(undefined8 *)(puVar11 + -0xf8);
    puVar11 = puVar11 + -0xf0;
  } while( true );
}


