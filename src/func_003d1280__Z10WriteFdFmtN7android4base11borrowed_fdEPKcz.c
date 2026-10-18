// Function: _Z10WriteFdFmtN7android4base11borrowed_fdEPKcz
// Address: 003d1280
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z10WriteFdFmtN7android4base11borrowed_fdEPKcz
                (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                ulong param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14)

{
  undefined4 uVar1;
  code *pcVar2;
  char in_AL;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte bStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  long lStack_18;
  
  if (in_AL != '\0') {
    uStack_d8 = param_1;
    uStack_c8 = param_2;
    uStack_b8 = param_3;
    uStack_a8 = param_4;
    uStack_98 = param_5;
    uStack_88 = param_6;
    uStack_78 = param_7;
    uStack_68 = param_8;
  }
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_28 = auStack_108;
  uStack_38 = 0x3000000010;
  puStack_30 = &stack0x00000008;
  uStack_f8 = param_11;
  uStack_f0 = param_12;
  uStack_e8 = param_13;
  uStack_e0 = param_14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (&uStack_58,param_10,&uStack_38);
  uVar5 = uStack_58 >> 1 & 0x7f;
  uVar10 = (long)&uStack_58 + 1;
  if ((uStack_58 & 1) != 0) {
    uVar5 = uStack_50;
    uVar10 = uStack_48;
  }
  uVar11 = param_9 & 0xffffffff;
  uVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(uVar11,uVar10,uVar5);
  uVar10 = param_9 & 0xffffffff;
  if ((uStack_58 & 1) != 0) {
    uVar5 = uVar5 & 0xffffffff;
    uVar11 = uStack_48;
    _ZdaPvSt11align_val_t(uStack_48,uStack_58 & 0xfffffffffffffffe);
    uVar10 = uVar5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uVar5;
  }
  func_0x0099bd00();
  lStack_140 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_138 = uVar10;
  do {
    lVar6 = func_0x0099be20(uVar11 & 0xffffffff,&uStack_150,0x10);
    if (lVar6 != -1) {
      iVar4 = (int)lVar6;
      if (iVar4 == 0) {
        uVar10 = 1;
        goto code_r0x003d1557;
      }
      if (iVar4 != -1) {
        if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
           (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
          puVar9 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar9;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_158,&UNK_001770ec,0xb5,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_158);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0016eb90,0x14);
          uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,uVar11 & 0xffffffff);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0016eba5,0x14);
          _Z8dump_hexPKvm(&bStack_170,&uStack_150,(long)iVar4);
          func_0x0032e5a0(uVar8,&bStack_170);
          if ((bStack_170 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_160,CONCAT71(uStack_16f,bStack_170) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_158);
          *puVar9 = uVar1;
        }
        func_0x0099c060(uVar11 & 0xffffffff,2);
        puVar9 = (undefined4 *)func_0x0099bce0();
        *puVar9 = 0x16;
        goto code_r0x003d1555;
      }
      piVar7 = (int *)func_0x0099bce0();
      iVar4 = *piVar7;
      break;
    }
    piVar7 = (int *)func_0x0099bce0();
    iVar4 = *piVar7;
  } while (iVar4 == 4);
  if (iVar4 == 0xb) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_170,&UNK_001770ec,0xa6,6,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_170);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      uVar8 = func_0x0032eb30(uVar8,&UNK_0018654b,0x16);
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      uVar8 = func_0x0032eb30(uVar8,&UNK_0016e934,2);
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00173f69,2);
      uVar8 = func_0x0032eb30(uVar8,&UNK_001595f9,0x19);
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,0xb);
      uVar8 = func_0x0032eb30(uVar8,&UNK_0018038a,5);
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,0xb);
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(&bStack_170);
    } while( true );
  }
code_r0x003d1555:
  uVar10 = 0;
code_r0x003d1557:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_140) {
    return uVar10;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar10 = (*pcVar2)();
  return uVar10;
}


