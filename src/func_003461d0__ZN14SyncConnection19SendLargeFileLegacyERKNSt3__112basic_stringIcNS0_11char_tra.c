// Function: _ZN14SyncConnection19SendLargeFileLegacyERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_j
// Address: 003461d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00346771) */

ulong _ZN14SyncConnection19SendLargeFileLegacyERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_j
                (long param_1,byte *param_2,undefined4 param_3,byte *param_4,byte *param_5,
                undefined4 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined8 uStack_10178;
  undefined8 uStack_10170;
  undefined8 uStack_10168;
  undefined8 uStack_10158;
  undefined8 uStack_10150;
  undefined8 uStack_10148;
  undefined8 uStack_10138;
  undefined8 uStack_10130;
  byte *pbStack_10128;
  undefined4 uStack_1011c;
  undefined4 uStack_10118;
  undefined8 uStack_10114;
  undefined8 uStack_1010c;
  undefined8 uStack_10104;
  undefined8 uStack_100fc;
  undefined8 uStack_100f4;
  undefined8 uStack_100ec;
  undefined8 uStack_100e4;
  undefined8 uStack_100dc;
  undefined4 uStack_100d4;
  undefined4 uStack_100d0;
  int iStack_100cc;
  undefined1 auStack_100c8 [65536];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_10138 = 0;
  uStack_10130 = 0;
  pbStack_10128 = (byte *)0x0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  _ZN7android4base12StringPrintfEPKcz(&uStack_10138,&UNK_0017216b,param_2,param_3);
  cVar3 = _ZN14SyncConnection11SendRequestEiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (param_1,0x444e4553,&uStack_10138);
  if (cVar3 == '\0') {
    pbVar13 = pbStack_10128;
    if ((uStack_10138 & 1) == 0) {
      pbVar13 = (byte *)((long)&uStack_10138 + 1);
    }
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar10 = func_0x0099bd20(*puVar8);
    puVar15 = &UNK_0017b81a;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    pbVar13 = param_4 + 1;
    pbVar14 = pbVar13;
    if ((*param_4 & 1) != 0) {
      pbVar14 = *(byte **)(param_4 + 0x10);
    }
    iVar4 = func_0x0099bf30(1,pbVar14,&uStack_c8);
    uVar10 = uStack_98;
    if (iVar4 != -1) {
      pbVar14 = pbVar13;
      if ((*param_4 & 1) != 0) {
        pbVar14 = *(byte **)(param_4 + 0x10);
      }
      do {
        iVar4 = func_0x0099bf40(pbVar14,0x80000);
        if (iVar4 != -1) {
          if (-1 < iVar4) {
            uVar5 = func_0x0099bf10(iVar4,1);
            if ((uVar5 & 0x80000001) == 0) {
              func_0x0099bf10(iVar4,2,uVar5 | 1);
            }
            piVar7 = (int *)func_0x0099bce0();
            lVar16 = 0;
            func_0x0099bdb0(&iStack_100cc,0,0x10004);
            uStack_100d0 = 0x41544144;
            goto code_r0x00346461;
          }
          piVar7 = (int *)func_0x0099bce0();
          break;
        }
        piVar7 = (int *)func_0x0099bce0();
      } while (*piVar7 == 4);
      pbVar13 = param_4 + 1;
      if ((*param_4 & 1) != 0) {
        pbVar13 = *(byte **)(param_4 + 0x10);
      }
      uVar10 = func_0x0099bd20(*piVar7);
      uVar11 = 0;
      _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_001611d0,pbVar13,uVar10);
      iVar6 = *piVar7;
      goto code_r0x00346629;
    }
    if ((*param_4 & 1) != 0) {
      pbVar13 = *(byte **)(param_4 + 0x10);
    }
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar10 = func_0x0099bd20(*puVar8);
    puVar15 = &UNK_0015f955;
  }
  uVar11 = 0;
  _ZN14SyncConnection5ErrorEPKcz(param_1,puVar15,pbVar13,uVar10);
  goto joined_r0x00346634;
code_r0x00346461:
  uVar1 = *(undefined8 *)(param_1 + 8);
  while (lVar9 = func_0x0099be20(iVar4,auStack_100c8,uVar1), lVar9 == -1) {
    iVar6 = *piVar7;
    if (iVar6 != 4) goto code_r0x003465dc;
  }
  iVar6 = (int)lVar9;
  if (iVar6 == 0) {
    uStack_100e4 = 0;
    uStack_100dc = 0;
    uStack_100f4 = 0;
    uStack_100ec = 0;
    uStack_10104 = 0;
    uStack_100fc = 0;
    uStack_10114 = 0;
    uStack_1010c = 0;
    uStack_100d4 = 0;
    uStack_1011c = 0x454e4f44;
    uStack_10118 = param_6;
    if ((*param_4 & 1) == 0) {
      uStack_10148 = *(undefined8 *)(param_4 + 0x10);
      uStack_10158 = *(undefined8 *)param_4;
      uStack_10150 = *(undefined8 *)(param_4 + 8);
    }
    else {
      func_0x00330340(&uStack_10158,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
    }
    if ((*param_5 & 1) == 0) {
      uStack_10168 = *(undefined8 *)(param_5 + 0x10);
      uStack_10178 = *(undefined8 *)param_5;
      uStack_10170 = *(undefined8 *)(param_5 + 8);
    }
    else {
      func_0x00330340(&uStack_10178,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
    }
    lVar16 = *(long *)(param_1 + 0x18);
    uVar11 = 0;
    if (*(long *)(param_1 + 0x20) != lVar16) {
      uVar11 = (*(long *)(param_1 + 0x20) - lVar16 >> 3) * 0x55 - 1;
    }
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    uVar12 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30);
    if (uVar11 == uVar12) {
      func_0x00345950(param_1 + 0x10);
      lVar16 = *(long *)(param_1 + 0x18);
      uVar12 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + (uVar12 / 0x55) * 8);
    lVar9 = (uVar12 % 0x55) * 0x30;
    *(undefined8 *)(lVar16 + 0x10 + lVar9) = uStack_10148;
    *(undefined8 *)(lVar16 + lVar9) = uStack_10158;
    ((undefined8 *)(lVar16 + lVar9))[1] = uStack_10150;
    *(undefined8 *)(lVar16 + 0x28 + lVar9) = uStack_10168;
    puVar8 = (undefined4 *)(lVar16 + 0x18 + lVar9);
    *puVar8 = (undefined4)uStack_10178;
    puVar8[1] = uStack_10178._4_4_;
    puVar8[2] = (undefined4)uStack_10170;
    puVar8[3] = uStack_10170._4_4_;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    uStack_10148 = 0;
    uStack_10150 = 0;
    uStack_10158 = 0;
    uStack_10168 = 0;
    uStack_10170 = 0;
    uStack_10178 = 0;
    uVar5 = _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
                      (param_1,param_4,param_5,&uStack_1011c,8);
    uVar11 = (ulong)uVar5;
    goto code_r0x0034661d;
  }
  if (iVar6 == -1) goto code_r0x003465d8;
  lVar9 = (long)iVar6;
  iStack_100cc = iVar6;
  _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
            (param_1,param_4,param_5,&uStack_100d0,lVar9 + 8);
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + lVar9;
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + lVar9;
  lVar16 = lVar16 + lVar9;
  _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
            (param_1 + 0xc0,param_1 + 0x110,param_5,lVar16,uVar10);
  goto code_r0x00346461;
code_r0x003465d8:
  iVar6 = *piVar7;
code_r0x003465dc:
  if ((*param_4 & 1) != 0) {
    pbVar13 = *(byte **)(param_4 + 0x10);
  }
  uVar10 = func_0x0099bd20(iVar6);
  uVar11 = 0;
  _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00169426,pbVar13,uVar10);
code_r0x0034661d:
  iVar6 = *piVar7;
  func_0x0099bd10(iVar4);
code_r0x00346629:
  *piVar7 = iVar6;
joined_r0x00346634:
  if ((uStack_10138 & 1) != 0) {
    _ZdaPvSt11align_val_t(pbStack_10128,uStack_10138 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return uVar11;
  }
  return uVar11;
}


