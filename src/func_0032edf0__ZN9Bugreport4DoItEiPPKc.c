// Function: _ZN9Bugreport4DoItEiPPKc
// Address: 0032edf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * _ZN9Bugreport4DoItEiPPKc(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBX;
  undefined1 auVar8 [8];
  short *psVar9;
  ulong *puVar10;
  short *unaff_R12;
  undefined8 *unaff_R13;
  byte *unaff_R14;
  long lVar11;
  long in_FS_OFFSET;
  undefined4 uStack_1ec;
  undefined8 *puStack_1e8;
  byte bStack_1e0;
  undefined5 uStack_1df;
  undefined2 uStack_1da;
  undefined1 uStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  undefined8 *puStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  undefined8 *puStack_198;
  int iStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_168;
  ulong uStack_160;
  short *psStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_108;
  undefined8 uStack_107;
  undefined2 uStack_ff;
  undefined4 uStack_fd;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < (int)param_2) {
    _Z10error_exitPKcz(&UNK_0017d290);
    goto code_r0x0032f616;
  }
  unaff_R14 = (byte *)(param_2 & 0xffffffff);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_40 = 0;
  uStack_58 = 0x99e138;
  puStack_50 = &uStack_128;
  puStack_48 = &uStack_148;
  bStack_108 = 0x1a;
  uStack_107._0_5_ = 0x6572677562;
  uStack_107._5_2_ = 0x6f70;
  uStack_107._7_1_ = 'r';
  uStack_ff = 0x7a74;
  uStack_fd = 0x762d20;
  uVar3 = (**(code **)*param_1)(param_1,&bStack_108,0,&uStack_58);
  unaff_R12 = (short *)(ulong)uVar3;
  if ((bStack_108 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (puStack_f8,
               CONCAT26(uStack_107._5_2_,CONCAT51((undefined5)uStack_107,bStack_108)) &
               0xfffffffffffffffe);
  }
  uStack_168 = 0;
  uStack_160 = 0;
  psStack_158 = (short *)0x0;
  _ZN7android4base4TrimIRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEES8_OT_
            (&uStack_168,&uStack_148);
  uStack_188 = 0;
  uStack_180 = 0;
  lStack_178 = 0;
  _ZN7android4base4TrimIRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEES8_OT_
            (&uStack_188,&uStack_128);
  iStack_18c = 0;
  iStack_190 = 0;
  if (uVar3 != 0) {
code_r0x0032effd:
    if (((byte)adb_trace_mask & 1) == 0) goto code_r0x0032f019;
    if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032f019;
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 == '\0') goto code_r0x0032f019;
    puStack_1e8 = (undefined8 *)func_0x0099bce0();
    uStack_1ec = *(undefined4 *)puStack_1e8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_1a8,&UNK_00159338,0xd5,1,0,0xffffffff);
    param_3 = (undefined8 *)_ZN7android4base10LogMessage6streamEv(auStack_1a8);
    lVar11 = lStack_178;
    if ((uStack_188 & 1) == 0) goto code_r0x0032f620;
    goto code_r0x0032f627;
  }
  if ((uStack_168 & 1) == 0) {
    if ((byte)uStack_168 >> 1 == 0) goto code_r0x0032effd;
  }
  else if (uStack_160 == 0) goto code_r0x0032effd;
  unaff_R12 = (short *)((long)&uStack_168 + 1);
  psVar9 = unaff_R12;
  if ((uStack_168 & 1) != 0) {
    psVar9 = psStack_158;
  }
  func_0x0099bdc0(psVar9,&UNK_00187a93,&iStack_18c,&iStack_190);
  auStack_1a8 = (undefined1  [8])0x0;
  uStack_1a0 = 0;
  puStack_198 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar6 = param_3;
  if ((int)param_2 == 1) {
    cVar1 = _Z6getcwdPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(&uStack_1c8);
    if (cVar1 == '\0') {
      func_0x0099bdf0(&UNK_001893a7);
      unaff_RBX = (undefined8 *)0x1;
      goto code_r0x0032f3cb;
    }
code_r0x0032f214:
    unaff_R12 = (short *)((long)&uStack_168 + 1);
    if (((ulong)auStack_1a8 & 1) == 0) {
      uVar5 = (ulong)auStack_1a8 >> 1 & 0x7f;
      if (uVar5 != 0) goto code_r0x0032f22b;
code_r0x0032f241:
      if (((ulong)auStack_1a8 & 1) == 0) {
        auStack_1a8[0] = 0x1a;
        puVar7 = (undefined8 *)(auStack_1a8 + 1);
      }
      else {
        uStack_1a0 = 0xd;
        puVar7 = puStack_198;
      }
      *(undefined8 *)((long)puVar7 + 5) = 0x70697a2e74726f70;
      *puVar7 = 0x726f706572677562;
      *(undefined1 *)((long)puVar7 + 0xd) = 0;
    }
    else {
      uVar5 = uStack_1a0;
      if (uStack_1a0 == 0) goto code_r0x0032f241;
code_r0x0032f22b:
      puVar7 = puStack_198;
      if (((ulong)auStack_1a8 & 1) == 0) {
        puVar7 = (undefined8 *)(auStack_1a8 + 1);
      }
      cVar1 = _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (puVar7,uVar5,&UNK_00180157,4);
      if (cVar1 == '\0') {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (auStack_1a8,&UNK_00180157);
      }
    }
    uStack_1d2 = 0;
    puStack_1d0 = (undefined8 *)0x0;
    bStack_1e0 = 0x1a;
    uStack_1df = 0x6572677562;
    uStack_1da = 0x6f70;
    uStack_1d8 = 0x72;
    uStack_1d7 = 0x7a74;
    uStack_1d5 = 0x20;
    uStack_1d4 = 0x702d;
    uVar5 = uStack_160;
    if ((uStack_168 & 1) == 0) {
      uVar5 = uStack_168 >> 1 & 0x7f;
    }
    uVar2 = 1;
    if (uVar5 == 3) {
      if ((uStack_168 & 1) != 0) {
        unaff_R12 = psStack_158;
      }
      if ((char)unaff_R12[1] == '0' && *unaff_R12 == 0x2e31) {
        func_0x0099bd40(&UNK_0015c4f9,0x92,1,_stderr);
        bStack_1e0 = 0x14;
        uStack_1d5 = 0;
        uVar2 = 0;
      }
    }
    uStack_1d8 = 0x72;
    uStack_1da = 0x6f70;
    uStack_1df = 0x6572677562;
    uStack_1d7 = 0x7a74;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_f8 = (undefined8 *)0x0;
    uStack_f0 = 0;
    bStack_108 = 0;
    uStack_107._0_5_ = 0;
    uStack_107._5_2_ = 0;
    uStack_107._7_1_ = '\0';
    uStack_ff = 0;
    uStack_fd = 0;
    uStack_f9 = 0;
    unaff_R14 = &bStack_108;
    _ZN32BugreportStandardStreamsCallbackC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_bP9Bugreport
              (unaff_R14,&uStack_1c8,auStack_1a8,uVar2,param_1);
    uVar3 = (**(code **)*param_1)(param_1,&bStack_1e0,0,unaff_R14);
    unaff_RBX = (undefined8 *)(ulong)uVar3;
    _ZN32BugreportStandardStreamsCallbackD2Ev(unaff_R14);
    param_3 = puVar6;
    if ((bStack_1e0 & 1) == 0) goto code_r0x0032f3cb;
    uVar5 = CONCAT26(uStack_1da,CONCAT51(uStack_1df,bStack_1e0));
    puVar6 = puStack_1d0;
  }
  else {
    unaff_R14 = (byte *)param_3[1];
    iVar4 = func_0x0099bdd0(unaff_R14,&UNK_0017ea6d);
    if (iVar4 != 0) {
      uVar5 = func_0x0099bcf0(unaff_R14);
      if (0xfffffffffffffff6 < uVar5) goto code_r0x0032f61b;
      if (uVar5 < 0x17) {
        bStack_108 = (char)uVar5 * '\x02';
        puVar6 = &uStack_107;
      }
      else {
        lVar11 = 0x1a;
        if ((uVar5 | 7) != 0x17) {
          lVar11 = (uVar5 | 7) + 1;
        }
        puVar6 = (undefined8 *)_Znwm(lVar11);
        lVar11 = lVar11 + 1;
        bStack_108 = (byte)lVar11;
        uStack_107._0_5_ = (undefined5)((ulong)lVar11 >> 8);
        uStack_107._5_2_ = (undefined2)((ulong)lVar11 >> 0x30);
        uStack_ff = (undefined2)(uVar5 >> 8);
        uStack_fd = (undefined4)(uVar5 >> 0x18);
        uStack_f9 = (undefined1)(uVar5 >> 0x38);
        uStack_107._7_1_ = (char)uVar5;
        puStack_f8 = puVar6;
      }
      func_0x0099bd90(puVar6,unaff_R14,uVar5);
      *(undefined1 *)((long)puVar6 + uVar5) = 0;
      cVar1 = _Z16directory_existsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                        (&bStack_108);
      if ((bStack_108 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (puStack_f8,
                   CONCAT26(uStack_107._5_2_,CONCAT51((undefined5)uStack_107,bStack_108)) &
                   0xfffffffffffffffe);
      }
      if (cVar1 == '\0') {
        puVar10 = (ulong *)auStack_1a8;
      }
      else {
        puVar10 = &uStack_1c8;
      }
      func_0x0032ea60(puVar10,param_3[1]);
      puStack_1e8 = param_3;
      goto code_r0x0032f214;
    }
    if ((iStack_18c == 1) && (iStack_190 < 2)) {
      func_0x0099bd40(&UNK_0016772d,0x40,1,_stderr);
      goto code_r0x0032f214;
    }
    bStack_108 = 0x1a;
    uStack_107._0_5_ = 0x6572677562;
    uStack_107._5_2_ = 0x6f70;
    uStack_107._7_1_ = 'r';
    uStack_ff = 0x7a74;
    uStack_fd = 0x732d20;
    uVar3 = (**(code **)*param_1)(param_1,&bStack_108,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
    unaff_RBX = (undefined8 *)(ulong)uVar3;
    if ((bStack_108 & 1) == 0) goto code_r0x0032f3cb;
    uVar5 = CONCAT26(uStack_107._5_2_,CONCAT51((undefined5)uStack_107,bStack_108));
    puVar6 = puStack_f8;
  }
  _ZdaPvSt11align_val_t(puVar6,uVar5 & 0xfffffffffffffffe);
code_r0x0032f3cb:
  if ((uStack_1c8 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  auVar8 = auStack_1a8;
  puVar6 = puStack_198;
  unaff_R13 = param_3;
  if (((ulong)auStack_1a8 & 1) == 0) goto joined_r0x0032f412;
  do {
    _ZdaPvSt11align_val_t(puVar6,(ulong)auVar8 & 0xfffffffffffffffe);
    unaff_R13 = param_3;
joined_r0x0032f412:
    do {
      while( true ) {
        if ((uStack_188 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_178,uStack_188 & 0xfffffffffffffffe);
        }
        if ((uStack_168 & 1) != 0) {
          _ZdaPvSt11align_val_t(psStack_158,uStack_168 & 0xfffffffffffffffe);
        }
        if ((uStack_148 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_138,uStack_148 & 0xfffffffffffffffe);
        }
        if ((uStack_128 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_118,uStack_128 & 0xfffffffffffffffe);
        }
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
          return unaff_RBX;
        }
code_r0x0032f616:
        func_0x0099bd00();
        param_1 = unaff_RBX;
        param_3 = unaff_R13;
code_r0x0032f61b:
        func_0x0032e8f0();
code_r0x0032f620:
        lVar11 = (long)&uStack_188 + 1;
code_r0x0032f627:
        psVar9 = psStack_158;
        if ((uStack_168 & 1) == 0) {
          psVar9 = (short *)((long)&uStack_168 + 1);
        }
        _ZN7android4base12StringPrintfEPKcz
                  (&bStack_108,&UNK_0017d2c9,(ulong)unaff_R12 & 0xffffffff,lVar11,psVar9);
        func_0x0032e5a0(param_3,&bStack_108);
        if ((bStack_108 & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (puStack_f8,
                     CONCAT26(uStack_107._5_2_,CONCAT51((undefined5)uStack_107,bStack_108)) &
                     0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_1a8);
        *(undefined4 *)puStack_1e8 = uStack_1ec;
code_r0x0032f019:
        unaff_R13 = param_3;
        if ((int)unaff_R14 == 1) break;
        lVar11 = lStack_178;
        if ((uStack_188 & 1) == 0) {
          lVar11 = (long)&uStack_188 + 1;
        }
        func_0x0099bd30(_stderr,&UNK_00173b53,lVar11,(ulong)unaff_R12 & 0xffffffff);
        unaff_RBX = (undefined8 *)(ulong)(-(uint)((uint)unaff_R12 == 0) | (uint)unaff_R12);
      }
      func_0x0099bd40(&UNK_001676a1,0x8b,1);
      bStack_108 = 0x12;
      uStack_107._0_5_ = 0x6572677562;
      uStack_107._5_2_ = 0x6f70;
      uStack_107._7_1_ = 'r';
      uStack_ff = 0x74;
      uVar3 = (**(code **)*param_1)(param_1,&bStack_108,0,DEFAULT_STANDARD_STREAMS_CALLBACK);
      unaff_RBX = (undefined8 *)(ulong)uVar3;
    } while ((bStack_108 & 1) == 0);
    auVar8 = (undefined1  [8])CONCAT26(uStack_107._5_2_,CONCAT51((undefined5)uStack_107,bStack_108))
    ;
    puVar6 = puStack_f8;
  } while( true );
}


