// Function: _Z11close_stdinv
// Address: 003d3b40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z11close_stdinv(void)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  ulong uStack_30;
  
  uStack_30 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack_3e = 0;
  uStack_38 = 0;
  uStack_48 = 0x12;
  uStack_47 = 0x756e2f7665642f;
  uStack_40 = 0x6c;
  uStack_3f = 0x6c;
  do {
    uVar3 = func_0x0099bf40(&uStack_47,0);
    if (uVar3 != 0xffffffff) {
      uVar9 = (ulong)uVar3;
      goto code_r0x003d3c30;
    }
    piVar5 = (int *)func_0x0099bce0();
  } while (*piVar5 == 4);
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  uVar9 = 0xffffffff;
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_48,&UNK_001895e3,0x3a,6,0,uVar1);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_48);
    uVar7 = func_0x0032eb30(uVar7,&UNK_0017d5ee,0xf);
    func_0x0032eb30(uVar7,&UNK_001fde74,9);
    _ZN7android4base10LogMessageD2Ev(&uStack_48);
    *puVar6 = uVar1;
  }
code_r0x003d3c30:
  do {
    iVar4 = func_0x0099bf70(uVar9,0);
    if (iVar4 != -1) goto code_r0x003d3c5b;
    piVar5 = (int *)func_0x0099bce0();
  } while (*piVar5 == 4);
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    iVar4 = *piVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_48,&UNK_001895e3,0x3e,6,0,iVar4);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_48);
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015e011,0x1c);
    func_0x0032eb30(uVar7,&UNK_001fde74,9);
    _ZN7android4base10LogMessageD2Ev(&uStack_48);
    *piVar5 = iVar4;
  }
code_r0x003d3c5b:
  func_0x0099bd10(uVar9);
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_30) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lVar8 = func_0x0099c2b0(0,0);
  if (lVar8 != 0) {
    func_0x0032ea60(uVar9,lVar8);
  }
  func_0x0099c1f0(lVar8);
  return CONCAT71((int7)(uVar9 >> 8),lVar8 != 0) & 0xffffffff;
}


