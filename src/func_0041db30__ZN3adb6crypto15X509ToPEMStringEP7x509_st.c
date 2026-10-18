// Function: _ZN3adb6crypto15X509ToPEMStringEP7x509_st
// Address: 0041db30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN3adb6crypto15X509ToPEMStringEP7x509_st(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong **ppuVar13;
  undefined4 uVar14;
  long lVar15;
  long in_FS_OFFSET;
  ulong *puStack_48;
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = BIO_s_mem();
  lVar7 = BIO_new(uVar6);
  iVar5 = PEM_write_bio_X509(lVar7,param_2);
  if (iVar5 == 1) {
    puStack_40 = (ulong *)0x0;
    BIO_get_mem_ptr(lVar7,&puStack_40);
    if (((puStack_40 == (ulong *)0x0) || (uVar1 = puStack_40[1], uVar1 == 0)) ||
       (uVar2 = *puStack_40, uVar2 == 0)) {
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar4 != '\0') {
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar14 = *puVar9;
        ppuVar13 = &puStack_48;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (ppuVar13,&UNK_001646dd,0x75,4,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(ppuVar13);
        puVar12 = &UNK_001597b6;
        uVar11 = 0x16;
        goto code_r0x0041dd04;
      }
      goto code_r0x0041dc3b;
    }
    if (0xfffffffffffffff6 < uVar2) goto code_r0x0041dd21;
    if (uVar2 < 0x17) {
      *(char *)param_1 = (char)uVar2 * '\x02';
      pcVar8 = (char *)((long)param_1 + 1);
    }
    else {
      lVar15 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        lVar15 = (uVar2 | 7) + 1;
      }
      pcVar8 = (char *)_Znwm(lVar15);
      *param_1 = lVar15 + 1;
      param_1[1] = uVar2;
      param_1[2] = (long)pcVar8;
    }
    func_0x0099bd90(pcVar8,uVar1,uVar2);
    pcVar8[uVar2] = '\0';
  }
  else {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar14 = *puVar9;
      ppuVar13 = &puStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (ppuVar13,&UNK_001646dd,0x6e,4,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(ppuVar13);
      puVar12 = &UNK_00161556;
      uVar11 = 0x19;
code_r0x0041dd04:
      func_0x0032eb30(uVar6,puVar12,uVar11);
      _ZN7android4base10LogMessageD2Ev(ppuVar13);
      *puVar9 = uVar14;
    }
code_r0x0041dc3b:
    *(undefined2 *)param_1 = 0;
  }
  if (lVar7 != 0) {
    BIO_free(lVar7);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x0041dd21:
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  plVar10 = (long *)(*pcVar3)();
  return plVar10;
}


