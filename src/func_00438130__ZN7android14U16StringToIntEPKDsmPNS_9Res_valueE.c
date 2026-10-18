// Function: _ZN7android14U16StringToIntEPKDsmPNS_9Res_valueE
// Address: 00438130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android14U16StringToIntEPKDsmPNS_9Res_valueE(ushort *param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 uStack_31;
  
  if (param_2 == 0) {
    return 0;
  }
  while( true ) {
    uVar3 = *param_1;
    uVar9 = (ulong)uVar3;
    if ((0x7f < uVar9) ||
       (plVar7 = (long *)func_0x0099be00(), (*(byte *)(*plVar7 + 1 + uVar9 * 2) & 0x20) == 0))
    break;
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      return 0;
    }
  }
  uVar11 = (ulong)(uVar9 == 0x2d);
  uVar4 = param_1[uVar11];
  uVar9 = (ulong)uVar4;
  if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
    return 0;
  }
  if (((param_2 == 1) || (uVar4 != 0x30)) || (param_1[uVar11 + 1] != 0x78)) {
    if (uVar11 < param_2) {
      uVar10 = 0;
      do {
        uVar4 = param_1[uVar11];
        if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
          return 0;
        }
        lVar1 = (ulong)uVar4 + uVar10 * 10;
        if (uVar3 == 0x2d) {
          if (0x80000030 < lVar1) {
            return 0;
          }
        }
        else if (0x8000002f < lVar1) {
          return 0;
        }
        uVar11 = uVar11 + 1;
        uVar10 = ((ulong)uVar4 + uVar10 * 10) - 0x30;
      } while (uVar11 < param_2);
      uVar9 = 0x30 - lVar1;
      if (uVar3 == 0x2d) {
        uVar10 = uVar9;
      }
      iVar5 = (int)uVar10;
      uStack_31 = 0x10;
      goto code_r0x00438315;
    }
    uStack_31 = 0x10;
    uVar11 = 1;
    uVar10 = 0;
  }
  else {
    if (uVar3 == 0x2d) {
      return 0;
    }
    uVar11 = uVar11 | 2;
    if (param_2 == uVar11) {
      return 0;
    }
    bVar12 = false;
    uVar10 = 0;
    while ((uVar9 = 0, !bVar12 && (uVar11 < param_2))) {
      cVar2 = (char)param_1[uVar11];
      iVar5 = (int)cVar2;
      if ((byte)(cVar2 - 0x30U) < 10) {
        uVar6 = iVar5 - 0x30;
code_r0x004381e3:
        bVar12 = false;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          uVar6 = iVar5 - 0x57;
          goto code_r0x004381e3;
        }
        bVar12 = (byte)(cVar2 + 0xb9U) < 0xfa;
        uVar6 = iVar5 - 0x37;
        if (bVar12) {
          uVar6 = 0;
        }
      }
      uVar10 = uVar10 * 0x10 + (ulong)uVar6;
      uVar11 = uVar11 + 1;
      if (uVar10 >> 0x20 != 0) {
        return 0;
      }
    }
    uStack_31 = 0x11;
    if (bVar12) {
      return 0;
    }
  }
  iVar5 = -(int)uVar10;
  if (uVar3 != 0x2d) {
    iVar5 = (int)uVar10;
  }
  if (uVar11 < param_2) {
    do {
      uVar3 = param_1[uVar11];
      if (0x7f < (ulong)uVar3) goto code_r0x004382f5;
      puVar8 = (ulong *)func_0x0099be00();
      uVar9 = *puVar8;
      if ((*(byte *)(uVar9 + 1 + (ulong)uVar3 * 2) & 0x20) == 0) goto code_r0x004382f5;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  else {
code_r0x004382f5:
    if (param_2 != uVar11) {
      return 0;
    }
  }
code_r0x00438315:
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 3) = uStack_31;
    *(int *)(param_3 + 4) = iVar5;
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}


