// Function: _ZN14SyncConnection20ReadAcknowledgementsEb
// Address: 003432b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN14SyncConnection20ReadAcknowledgementsEb(undefined4 *param_1,byte param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 unaff_R14;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 *puStack_68;
  byte *pbStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  byte bStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  _uStack_40 = CONCAT44(1,*param_1);
  uVar5 = *(ulong *)(param_1 + 0xe);
  uVar10 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (uVar5 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
code_r0x00343310:
    bStack_41 = 0x7f < uVar5 | param_2;
    pbStack_60 = &bStack_41;
    puStack_58 = &uStack_40;
    puStack_68 = puVar1;
    puStack_50 = param_1;
    iVar4 = _ZZN14SyncConnection20ReadAcknowledgementsEbENKUlmE_clEm(&puStack_68,8);
    if (iVar4 == 1) {
code_r0x0034351d:
      uVar10 = 0;
      goto code_r0x00343520;
    }
    if (iVar4 == 2) goto code_r0x00343384;
    piVar2 = (int *)*puVar1;
    if (*piVar2 == 0x59414b4f) {
      _ZN5Block6resizeEm(puVar1,0);
      if (piVar2[1] != 0) {
        puVar9 = &UNK_00175499;
        goto code_r0x003433c7;
      }
      func_0x00348860(param_1 + 4);
      uVar5 = *(ulong *)(param_1 + 0xe);
      if (uVar5 == 0) goto code_r0x00343384;
      goto code_r0x00343310;
    }
    if (*piVar2 == 0x4c494146) {
      if ((ulong)(uint)piVar2[1] < 0x10001) {
        iVar4 = _ZZN14SyncConnection20ReadAcknowledgementsEbENKUlmE_clEm
                          (&puStack_68,(ulong)(uint)piVar2[1] + 8);
        if (iVar4 == 2) goto code_r0x00343384;
        if (iVar4 == 1) goto code_r0x0034351d;
        uStack_88 = 0;
        uStack_80 = 0;
        lStack_78 = 0;
        uVar5 = *(long *)(param_1 + 0x14) - 8;
        if (0xfffffffffffffff6 < uVar5) goto code_r0x00343546;
        lVar7 = *(long *)(param_1 + 0x10);
        if (uVar5 < 0x17) {
          uStack_88 = (ulong)(byte)((char)uVar5 * '\x02');
          lVar8 = (long)&uStack_88 + 1;
        }
        else {
          lVar6 = 0x1a;
          if ((uVar5 | 7) != 0x17) {
            lVar6 = (uVar5 | 7) + 1;
          }
          lVar8 = _Znwm(lVar6,lVar7 + 8);
          uStack_88 = lVar6 + 1;
          uStack_80 = uVar5;
          lStack_78 = lVar8;
        }
        func_0x0099bd90(lVar8,lVar7 + 8,uVar5);
        *(undefined1 *)(lVar8 + uVar5) = 0;
        lVar7 = *(long *)(*(long *)(param_1 + 6) + (*(ulong *)(param_1 + 0xc) / 0x55) * 8);
        lVar6 = (*(ulong *)(param_1 + 0xc) % 0x55) * 0x30;
        if ((*(byte *)(lVar7 + lVar6) & 1) == 0) {
          lVar8 = lVar7 + lVar6 + 1;
        }
        else {
          lVar8 = *(long *)(lVar7 + 0x10 + lVar6);
        }
        if ((*(byte *)(lVar7 + 0x18 + lVar6) & 1) == 0) {
          lVar7 = lVar6 + lVar7 + 0x19;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x28 + lVar6);
        }
        lVar6 = lStack_78;
        if ((uStack_88 & 1) == 0) {
          lVar6 = (long)&uStack_88 + 1;
        }
        _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_0017eb2a,lVar8,lVar7,lVar6);
        func_0x00348860(param_1 + 4);
        _ZN5Block6resizeEm(puVar1,0);
        if ((uStack_88 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_78,uStack_88 & 0xfffffffffffffffe);
        }
        goto code_r0x0034351d;
      }
      puVar9 = &UNK_00169446;
    }
    else {
      puVar9 = &UNK_0016ad77;
    }
code_r0x003433c7:
    uVar10 = 0;
    _ZN14SyncConnection5ErrorEPKcz(param_1,puVar9);
  }
  goto code_r0x00343520;
code_r0x00343384:
  uVar10 = CONCAT71((int7)((ulong)puVar1 >> 8),1);
code_r0x00343520:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar10 & 0xffffffff;
  }
  func_0x0099bd00();
code_r0x00343546:
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}


