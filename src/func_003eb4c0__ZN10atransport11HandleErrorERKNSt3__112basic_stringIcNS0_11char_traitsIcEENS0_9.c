// Function: _ZN10atransport11HandleErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003eb4c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport11HandleErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *extraout_RDX;
  uint uVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar5;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_70,&UNK_0017a1e0,0x4c6,2,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_70);
    _ZNK10atransport11serial_nameEv(&bStack_88,param_1);
    uVar6 = func_0x0032e5a0(uVar6,&bStack_88);
    uVar6 = func_0x0032eb30(uVar6,&UNK_00183510,0x19);
    uVar8 = param_2;
    func_0x0032e5a0(uVar6);
    if ((bStack_88 & 1) != 0) {
      uVar8 = (uint)CONCAT71(uStack_87,bStack_88) & 0xfffffffe;
      _ZdaPvSt11align_val_t(uStack_78);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_70);
    *puVar5 = uVar1;
  }
  puStack_68 = &UNK_0099eec8;
  uStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_68);
  ppuVar9 = ppuStack_48;
  if (ppuStack_48 == &puStack_68) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (ppuStack_48 == (undefined **)0x0) goto code_r0x003eb533;
  }
  (**(code **)(*ppuStack_48 + lVar4))();
code_r0x003eb533:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    uVar3 = 0x1000001;
    if ((int)uVar8 < 0x1000001) {
      uVar3 = uVar8;
    }
    *(uint *)(ppuVar9 + 0x1d) = uVar3;
    puVar7 = (undefined *)0x100000;
    if (extraout_RDX < (undefined *)0x100000) {
      puVar7 = extraout_RDX;
    }
    ppuVar9[0x1e] = puVar7;
    return;
  }
  return;
}


