// Function: _ZN10Connection5ResetEv
// Address: 003e3a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN10Connection5ResetEv(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long *plStack_30;
  
  plStack_30 = *(long **)(in_FS_OFFSET + 0x28);
  puVar8 = (undefined *)0x0;
  cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
  if (cVar5 != '\0') {
    puVar6 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_0017a1e0,0x126,2,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    puVar8 = &UNK_0015e0dc;
    func_0x0032eb30(uVar7,&UNK_0015e0dc,0x1d);
    _ZN7android4base10LogMessageD2Ev(auStack_38);
    *puVar6 = uVar2;
  }
  (**(code **)(*param_1 + 0x20))();
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_30) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  lVar3 = *(long *)(puVar8 + 8);
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x28);
    uVar9 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar9 = *(ulong *)(lVar3 + 0x30);
    }
    if (uVar9 != 0) {
      if ((bVar1 & 1) == 0) {
        param_1[2] = *(long *)(lVar3 + 0x38);
        lVar4 = *(long *)(lVar3 + 0x30);
        *param_1 = *(long *)(lVar3 + 0x28);
        param_1[1] = lVar4;
        return param_1;
      }
      func_0x00330340();
      return param_1;
    }
  }
  *(undefined1 *)param_1 = 0x12;
  *(undefined8 *)((long)param_1 + 1) = 0x6e776f6e6b6e753c;
  *(undefined2 *)((long)param_1 + 9) = 0x3e;
  return param_1;
}


