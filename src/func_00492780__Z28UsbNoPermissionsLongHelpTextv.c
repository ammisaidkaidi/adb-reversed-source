// Function: _Z28UsbNoPermissionsLongHelpTextv
// Address: 00492780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z28UsbNoPermissionsLongHelpTextv(undefined8 param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined2 *puStack_78;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined8 *)_Znwm(0x28);
  auStack_50 = (undefined1  [8])0x29;
  uStack_48 = 0x23;
  *puVar6 = 0x6369666675736e69;
  puVar6[1] = 0x72657020746e6569;
  puVar6[2] = 0x736e6f697373696d;
  puVar6[3] = 0x76656420726f6620;
  *(undefined4 *)((long)puVar6 + 0x1f) = 0x65636976;
  *(undefined1 *)((long)puVar6 + 0x23) = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  puStack_40 = puVar6;
  func_0x00492560(&uStack_68);
  lVar11 = lStack_58;
  uVar5 = uStack_68;
  uVar4 = uStack_60;
  if ((uStack_68 & 1) == 0) {
    uVar4 = uStack_68 >> 1 & 0x7f;
  }
  if (uVar4 != 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_78 = (undefined2 *)0x0;
    uVar1 = uVar4 + 2;
    if (0xfffffffffffffff6 < uVar1) goto code_r0x00492973;
    if (uVar1 < 0x17) {
      uVar10 = 0;
      uStack_88 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar9 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar9 = (uVar1 | 7) + 1;
      }
      puStack_78 = (undefined2 *)_Znwm(lVar9);
      uStack_88 = lVar9 + 1;
      uVar10 = uStack_88 & 0xffffffff;
      uStack_80 = uVar1;
    }
    if ((uVar5 & 1) == 0) {
      lVar11 = (long)&uStack_68 + 1;
    }
    puVar2 = puStack_78 + 1;
    bVar12 = (uVar10 & 1) != 0;
    puVar8 = (undefined2 *)((long)&uStack_88 + 1);
    if (bVar12) {
      puVar8 = puStack_78;
    }
    *puVar8 = 0x203a;
    puVar8 = (undefined2 *)((long)&uStack_88 + 3);
    if (bVar12) {
      puVar8 = puVar2;
    }
    func_0x0099bd90(puVar8,lVar11,uVar4);
    *(undefined1 *)((long)puVar8 + uVar4) = 0;
    func_0x0032e820(auStack_50,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    puVar6 = puStack_40;
    if (((ulong)auStack_50 & 1) == 0) {
      puVar6 = (undefined8 *)(auStack_50 + 1);
    }
  }
  _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_0015b56c,puVar6,&UNK_001ff090);
  if ((uStack_68 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_50 & 1) != 0) {
    _ZdaPvSt11align_val_t(puStack_40,(ulong)auStack_50 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x00492973:
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}


