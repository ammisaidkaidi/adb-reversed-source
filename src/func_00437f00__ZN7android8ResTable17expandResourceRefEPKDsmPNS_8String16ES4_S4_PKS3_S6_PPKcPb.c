// Function: _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
// Address: 00437f00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
          (ushort *param_1,long param_2,ushort *param_3,ushort *param_4,ushort *param_5,long param_6
          ,long param_7,undefined8 *param_8,undefined1 *param_9)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long extraout_RDX;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 uStack_99;
  ushort auStack_40 [4];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = param_1 + param_2;
  if (param_2 == 0) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)0x0;
    puVar12 = param_1;
    do {
      puVar15 = puVar12;
      if ((*puVar12 != 0x3a) && (puVar15 = puVar13, *puVar12 == 0x2f)) goto code_r0x00437f76;
      puVar13 = puVar15;
      puVar12 = puVar12 + 1;
    } while (puVar12 < puVar14);
  }
  puVar12 = (ushort *)0x0;
code_r0x00437f76:
  puVar15 = param_1 + (*param_1 == 0x40);
  if (param_9 == (undefined1 *)0x0) {
    puVar15 = puVar15 + (*puVar15 == 0x2a);
  }
  else {
    *param_9 = 1;
    if (*puVar15 == 0x2a) {
      puVar15 = puVar15 + 1;
      *param_9 = 0;
    }
  }
  if (puVar13 == (ushort *)0x0) {
    if (param_7 != 0) {
      param_1 = param_3;
      _ZN7android8String165setToERKS0_();
      goto code_r0x00437ffd;
    }
    puVar14 = (ushort *)0x0;
    param_5 = param_1;
    if (param_8 == (undefined8 *)0x0) goto code_r0x00438102;
    puVar9 = &UNK_0015b51c;
code_r0x004380ff:
    *param_8 = puVar9;
    param_5 = param_1;
code_r0x00438102:
    uVar8 = 0;
  }
  else {
    param_1 = auStack_40;
    _ZN7android8String16C2EPKDsm(param_1,puVar15,(long)puVar13 - (long)puVar15 >> 1);
    _ZN7android8String16aSEOS0_(param_3,param_1);
    _ZN7android8String16D2Ev();
    puVar15 = puVar13 + 1;
code_r0x00437ffd:
    if (puVar12 == (ushort *)0x0) {
      if (param_6 != 0) {
        _ZN7android8String165setToERKS0_(param_4);
        goto code_r0x0043804f;
      }
      puVar14 = (ushort *)0x0;
      param_5 = param_1;
      if (param_8 != (undefined8 *)0x0) {
        puVar9 = &UNK_0016ef76;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    _ZN7android8String16C2EPKDsm(auStack_40,puVar15,(long)puVar12 - (long)puVar15 >> 1);
    _ZN7android8String16aSEOS0_(param_4,auStack_40);
    _ZN7android8String16D2Ev(auStack_40);
    puVar15 = puVar12 + 1;
code_r0x0043804f:
    _ZN7android8String16C2EPKDsm(auStack_40,puVar15,(long)puVar14 - (long)puVar15 >> 1);
    puVar14 = auStack_40;
    _ZN7android8String16aSEOS0_(param_5);
    _ZN7android8String16D2Ev(auStack_40);
    lVar7 = _ZNK7android8String164sizeEv();
    if (lVar7 == 0) {
      param_5 = param_3;
      if (param_8 != (undefined8 *)0x0) {
        puVar9 = &UNK_00163162;
        param_1 = param_3;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar7 = _ZNK7android8String164sizeEv();
    if (lVar7 == 0) {
      param_5 = param_4;
      if (param_8 != (undefined8 *)0x0) {
        puVar9 = &UNK_0016b1bf;
        param_1 = param_4;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar7 = _ZNK7android8String164sizeEv();
    uVar8 = 1;
    if (lVar7 == 0) {
      if (param_8 != (undefined8 *)0x0) {
        puVar9 = &UNK_001881ef;
        param_1 = param_5;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar8;
  }
  func_0x0099bd00();
  if (puVar14 == (ushort *)0x0) {
    return 0;
  }
  while( true ) {
    uVar3 = *param_5;
    uVar11 = (ulong)uVar3;
    if ((0x7f < uVar11) ||
       (plVar10 = (long *)func_0x0099be00(), (*(byte *)(*plVar10 + 1 + uVar11 * 2) & 0x20) == 0))
    break;
    param_5 = param_5 + 1;
    puVar14 = (ushort *)((long)puVar14 + -1);
    if (puVar14 == (ushort *)0x0) {
      return 0;
    }
  }
  puVar13 = (ushort *)(ulong)(uVar11 == 0x2d);
  if ((ushort)(param_5[(long)puVar13] - 0x3a) < 0xfff6) {
    return 0;
  }
  if (((puVar14 == (ushort *)0x1) || (param_5[(long)puVar13] != 0x30)) ||
     (param_5[(long)puVar13 + 1] != 0x78)) {
    if (puVar13 < puVar14) {
      lVar7 = 0;
      do {
        uVar4 = param_5[(long)puVar13];
        if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
          return 0;
        }
        lVar1 = (ulong)uVar4 + lVar7 * 10;
        if (uVar3 == 0x2d) {
          if (0x80000030 < lVar1) {
            return 0;
          }
        }
        else if (0x8000002f < lVar1) {
          return 0;
        }
        puVar13 = (ushort *)((long)puVar13 + 1);
        lVar7 = (ulong)uVar4 + lVar7 * 10 + -0x30;
      } while (puVar13 < puVar14);
      if (uVar3 == 0x2d) {
        lVar7 = 0x30 - lVar1;
      }
      iVar5 = (int)lVar7;
      uStack_99 = 0x10;
      goto code_r0x00438315;
    }
    uStack_99 = 0x10;
    puVar13 = (ushort *)0x1;
    uVar11 = 0;
  }
  else {
    if (uVar3 == 0x2d) {
      return 0;
    }
    puVar13 = (ushort *)((ulong)puVar13 | 2);
    if (puVar14 == puVar13) {
      return 0;
    }
    bVar16 = false;
    uVar11 = 0;
    while ((!bVar16 && (puVar13 < puVar14))) {
      cVar2 = (char)param_5[(long)puVar13];
      iVar5 = (int)cVar2;
      if ((byte)(cVar2 - 0x30U) < 10) {
        uVar6 = iVar5 - 0x30;
code_r0x004381e3:
        bVar16 = false;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          uVar6 = iVar5 - 0x57;
          goto code_r0x004381e3;
        }
        bVar16 = (byte)(cVar2 + 0xb9U) < 0xfa;
        uVar6 = iVar5 - 0x37;
        if (bVar16) {
          uVar6 = 0;
        }
      }
      uVar11 = uVar11 * 0x10 + (ulong)uVar6;
      puVar13 = (ushort *)((long)puVar13 + 1);
      if (uVar11 >> 0x20 != 0) {
        return 0;
      }
    }
    uStack_99 = 0x11;
    if (bVar16) {
      return 0;
    }
  }
  iVar5 = -(int)uVar11;
  if (uVar3 != 0x2d) {
    iVar5 = (int)uVar11;
  }
  if (puVar13 < puVar14) {
    do {
      uVar3 = param_5[(long)puVar13];
      if ((0x7f < (ulong)uVar3) ||
         (plVar10 = (long *)func_0x0099be00(),
         (*(byte *)(*plVar10 + 1 + (ulong)uVar3 * 2) & 0x20) == 0)) goto code_r0x004382f5;
      puVar13 = (ushort *)((long)puVar13 + 1);
    } while (puVar13 < puVar14);
  }
  else {
code_r0x004382f5:
    if (puVar14 != puVar13) {
      return 0;
    }
  }
code_r0x00438315:
  if (extraout_RDX != 0) {
    *(undefined1 *)(extraout_RDX + 3) = uStack_99;
    *(int *)(extraout_RDX + 4) = iVar5;
  }
  return 1;
}


