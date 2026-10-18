// Function: _ZN14SyncConnection13SendSmallFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_jPKcmb
// Address: 00344860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00344baa) */

bool _ZN14SyncConnection13SendSmallFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_jPKcmb
               (long param_1,byte *param_2,undefined4 param_3,byte *param_4,byte *param_5,
               undefined4 param_6,undefined8 param_7,long param_8,char param_9)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long lStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == '\0') {
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_0017216b,param_2);
    uVar7 = uStack_58;
    if ((uStack_58 & 1) == 0) {
      uVar9 = uStack_58 >> 1 & 0x7f;
      if (uVar9 < 0x401) goto code_r0x0034498c;
code_r0x00344918:
      _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00176f42,uVar9);
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = 0x24;
    }
    else {
      uVar9 = uStack_50;
      if (0x400 < uStack_50) goto code_r0x00344918;
code_r0x0034498c:
      lVar8 = param_8 + uVar9 + 0x18;
      if (lVar8 == 0) {
        puVar4 = (undefined4 *)0x0;
        lStack_b0 = 0;
      }
      else {
        if (lVar8 < 0) goto code_r0x00344c16;
        puVar4 = (undefined4 *)_Znwm(lVar8);
        lStack_b0 = (long)puVar4 + lVar8;
        func_0x0099bdb0(puVar4,0,lVar8);
      }
      *puVar4 = 0x444e4553;
      puVar4[1] = (int)uVar9;
      lVar8 = lStack_48;
      if ((uVar7 & 1) == 0) {
        lVar8 = (long)&uStack_58 + 1;
      }
      func_0x0099bda0(puVar4 + 2,lVar8,uVar9);
      lVar8 = uVar9 + 8;
      *(undefined4 *)((long)puVar4 + uVar9 + 8) = 0x41544144;
      *(int *)((long)puVar4 + uVar9 + 0xc) = (int)param_8;
      func_0x0099bda0((long)puVar4 + uVar9 + 0x10,param_7,param_8);
      *(undefined4 *)((long)puVar4 + param_8 + 8 + lVar8) = 0x454e4f44;
      *(undefined4 *)((long)puVar4 + param_8 + 0xc + lVar8) = param_6;
      _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
                (param_1,param_4,param_5,puVar4,param_8 + lVar8 + 0x10);
      if ((*param_4 & 1) == 0) {
        uStack_68 = *(undefined8 *)(param_4 + 0x10);
        uStack_78 = *(undefined8 *)param_4;
        uStack_70 = *(undefined8 *)(param_4 + 8);
        if ((*param_5 & 1) != 0) goto code_r0x00344aa8;
code_r0x00344ad4:
        uStack_88 = *(undefined8 *)(param_5 + 0x10);
        uStack_98 = *(undefined8 *)param_5;
        uStack_90 = *(undefined8 *)(param_5 + 8);
      }
      else {
        func_0x00330340(&uStack_78,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
        if ((*param_5 & 1) == 0) goto code_r0x00344ad4;
code_r0x00344aa8:
        func_0x00330340(&uStack_98,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
      }
      lVar8 = *(long *)(param_1 + 0x18);
      uVar7 = 0;
      if (*(long *)(param_1 + 0x20) != lVar8) {
        uVar7 = (*(long *)(param_1 + 0x20) - lVar8 >> 3) * 0x55 - 1;
      }
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
      uVar5 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30);
      if (uVar7 == uVar5) {
        func_0x00345950(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x18);
        uVar5 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + (uVar5 / 0x55) * 8);
      lVar6 = (uVar5 % 0x55) * 0x30;
      *(undefined8 *)(lVar8 + 0x10 + lVar6) = uStack_68;
      *(undefined8 *)(lVar8 + lVar6) = uStack_78;
      ((undefined8 *)(lVar8 + lVar6))[1] = uStack_70;
      *(undefined8 *)(lVar8 + 0x28 + lVar6) = uStack_88;
      puVar1 = (undefined4 *)(lVar8 + 0x18 + lVar6);
      *puVar1 = (undefined4)uStack_98;
      puVar1[1] = uStack_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_8;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + param_8;
      _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
                (param_1 + 0xc0,param_1 + 0x110,param_5,param_8,param_8);
      _ZdaPvSt11align_val_t(puVar4,lStack_b0 - (long)puVar4);
    }
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar9 < 0x401;
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    uVar3 = _ZN14SyncConnection13SendLargeFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_j15CompressionTypeb
                      (param_1,param_2,param_3,param_4,param_5,param_6,0,1);
    return (bool)uVar3;
  }
  func_0x0099bd00();
code_r0x00344c16:
  func_0x00330ca0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}


