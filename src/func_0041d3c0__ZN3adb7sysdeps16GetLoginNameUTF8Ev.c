// Function: _ZN3adb7sysdeps16GetLoginNameUTF8Ev
// Address: 0041d3c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN3adb7sysdeps16GetLoginNameUTF8Ev(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong uStack_60;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = func_0x0099be70(&UNK_001fe956);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uVar3 = 0;
    uVar10 = 0;
code_r0x0041d4d1:
    puVar4 = (undefined *)func_0x0099c4c0();
    puVar9 = &UNK_00162ac9;
    if (puVar4 != (undefined *)0x0) {
      puVar9 = puVar4;
    }
    uVar5 = func_0x0099bcf0(puVar9);
    if (0xfffffffffffffff6 < uVar5) {
code_r0x0041d5cf:
      func_0x0032e8f0();
      goto code_r0x0041d5d4;
    }
    if (uVar5 < 0x17) {
      *(char *)param_1 = (char)uVar5 * '\x02';
      pcVar7 = (char *)((long)param_1 + 1);
    }
    else {
      lVar8 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar8 = (uVar5 | 7) + 1;
      }
      pcVar7 = (char *)_Znwm(lVar8);
      *param_1 = lVar8 + 1;
      param_1[1] = uVar5;
      param_1[2] = (ulong)pcVar7;
    }
    func_0x0099bd90(pcVar7,puVar9,uVar5);
    pcVar7[uVar5] = '\0';
    if ((lVar2 != 0) && ((uVar10 & 1) != 0)) {
code_r0x0041d597:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        _ZdaPvSt11align_val_t(uVar3,(ulong)((byte)uVar10 & 0xfe) | uStack_60 << 8);
        return param_1;
      }
      goto code_r0x0041d5d4;
    }
  }
  else {
    uVar3 = func_0x0099bcf0(lVar2);
    if (0xfffffffffffffff6 < uVar3) goto code_r0x0041d5cf;
    if (uVar3 < 0x17) {
      uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar3 * '\x02');
      uVar5 = (long)&uStack_50 + 1;
    }
    else {
      lVar8 = 0x1a;
      if ((uVar3 | 7) != 0x17) {
        lVar8 = (uVar3 | 7) + 1;
      }
      uVar5 = _Znwm(lVar8);
      uStack_50 = lVar8 + 1;
      uStack_48 = uVar3;
      uStack_40 = uVar5;
    }
    func_0x0099bd90(uVar5,lVar2,uVar3);
    uVar10 = uStack_50;
    *(undefined1 *)(uVar5 + uVar3) = 0;
    uVar3 = uStack_40;
    uStack_60 = uStack_50 >> 8;
    uVar5 = (ulong)((uint)(uStack_50 >> 1) & 0x7f);
    if ((uStack_50 & 1) != 0) {
      uVar5 = uStack_48;
    }
    if (uVar5 == 0) goto code_r0x0041d4d1;
    if ((uStack_50 & 1) != 0) {
      func_0x00330340(param_1,uStack_40);
      goto code_r0x0041d597;
    }
    *param_1 = uStack_50;
    param_1[1] = uStack_48;
    param_1[2] = uStack_40;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
code_r0x0041d5d4:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar6 = (ulong *)(*pcVar1)();
  return puVar6;
}


