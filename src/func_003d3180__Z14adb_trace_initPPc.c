// Function: _Z14adb_trace_initPPc
// Address: 003d3180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dc67c) */

ulong _Z14adb_trace_initPPc(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined1 *puVar13;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  long *plStack_a8;
  long lStack_98;
  code *pcStack_90;
  long *plStack_78;
  undefined1 auStack_68 [8];
  code *pcStack_60;
  long *plStack_58;
  long *plStack_48;
  ulong uStack_30;
  
  uStack_30 = *(ulong *)(in_FS_OFFSET + 0x28);
  auStack_b8 = (undefined1  [8])0x0;
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  lVar5 = func_0x0099be70(&UNK_0016e937);
  if (lVar5 != 0) {
    func_0x0032ea60(auStack_b8,lVar5);
    func_0x0099c290(&UNK_0016e937);
  }
  auStack_68 = (undefined1  [8])0x99ea20;
  pcStack_60 = _Z9AdbLoggerN7android4base5LogIdENS0_11LogSeverityEPKcS4_jS4_;
  lStack_98 = 0x99ea68;
  pcStack_90 = _ZN7android4base14DefaultAborterEPKc;
  plVar11 = (long *)auStack_68;
  plStack_78 = &lStack_98;
  plStack_48 = (long *)auStack_68;
  _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE
            (param_1,auStack_68,&lStack_98);
  uVar12 = (uint)plVar11;
  if (plStack_78 == &lStack_98) {
    lVar5 = 0x20;
code_r0x003d3258:
    (**(code **)(*plStack_78 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plStack_78 != (long *)0x0) goto code_r0x003d3258;
  }
  if (plStack_48 == (long *)auStack_68) {
    lVar5 = 0x20;
code_r0x003d3278:
    (**(code **)(*plStack_48 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plStack_48 != (long *)0x0) goto code_r0x003d3278;
  }
  if (((ulong)auStack_b8 & 1) == 0) {
    if (auStack_b8[0] >> 1 != 0) goto code_r0x003d32a0;
  }
  else if (lStack_b0 != 0) {
code_r0x003d32a0:
    plVar11 = plStack_a8;
    if (((ulong)auStack_b8 & 1) == 0) {
      plVar11 = (long *)(auStack_b8 + 1);
    }
    func_0x0099c2a0(&UNK_0016e937,plVar11,1);
    uVar12 = (uint)plVar11;
  }
  plVar6 = (long *)func_0x0099be70(&UNK_001722da);
  plVar11 = (long *)&UNK_00162ac9;
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6;
  }
  plVar6 = plVar11;
  pcVar7 = (code *)func_0x0099bcf0();
  if ((code *)0xfffffffffffffff6 < pcVar7) {
    func_0x0032e8f0();
    goto code_r0x003d348f;
  }
  auStack_68 = (undefined1  [8])0x0;
  pcStack_60 = (code *)0x0;
  plStack_58 = (long *)0x0;
  if (pcVar7 < (code *)0x17) {
    auStack_68._1_7_ = 0;
    auStack_68[0] = (char)pcVar7 * '\x02';
    plVar8 = (long *)(auStack_68 + 1);
  }
  else {
    lVar5 = 0x1a;
    if (((ulong)pcVar7 | 7) != 0x17) {
      lVar5 = ((ulong)pcVar7 | 7) + 1;
    }
    plVar8 = (long *)_Znwm(lVar5);
    auStack_68 = (undefined1  [8])(lVar5 + 1);
    pcStack_60 = pcVar7;
    plStack_58 = plVar8;
  }
  plVar6 = plVar8;
  func_0x0099bd90(plVar8,plVar11,pcVar7);
  uVar12 = (uint)plVar11;
  *(code *)((long)plVar8 + (long)pcVar7) = (code)0x0;
  bVar2 = auStack_68[0] & 1;
  if (((ulong)auStack_68 & 1) == 0) {
    if (auStack_68[0] >> 1 != 0) goto code_r0x003d337a;
  }
  else if (pcStack_60 != (code *)0x0) {
code_r0x003d337a:
    plVar6 = (long *)auStack_68;
    _Z19parse_trace_settingRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
    bVar2 = auStack_68[0] & 1;
  }
  if (bVar2 != 0) {
    uVar12 = auStack_68._0_4_ & 0xfffffffe;
    plVar6 = plStack_58;
    _ZdaPvSt11align_val_t();
  }
  if (((adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    plVar6 = (long *)0x1;
    uVar12 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_98,&UNK_0015c7d6,0xe9,1,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_98);
      puVar13 = auStack_68;
      _Z11adb_versionv(puVar13);
      func_0x0032e5a0(uVar10);
      uVar12 = (uint)puVar13;
      if (((ulong)auStack_68 & 1) != 0) {
        uVar12 = auStack_68._0_4_ & 0xfffffffe;
        _ZdaPvSt11align_val_t(plStack_58);
      }
      plVar6 = &lStack_98;
      _ZN7android4base10LogMessageD2Ev();
      *puVar9 = uVar1;
    }
  }
  if (((ulong)auStack_b8 & 1) != 0) {
    uVar12 = auStack_b8._0_4_ & 0xfffffffe;
    plVar6 = plStack_a8;
    _ZdaPvSt11align_val_t();
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_30) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
code_r0x003d348f:
  func_0x0099bd00();
  adb_trace_mask = adb_trace_mask | 1 << ((byte)plVar6 & 0x1f);
  *(uint *)(adb_trace_severity + ((ulong)plVar6 & 0xffffffff) * 4) = uVar12;
  iVar4 = __android_log_set_minimum_priority(2);
  uVar12 = 6;
  if (iVar4 - 1U < 6) {
    uVar12 = *(uint *)(&UNK_00223110 + (ulong)(iVar4 - 1U) * 4);
  }
  return (ulong)uVar12;
}


