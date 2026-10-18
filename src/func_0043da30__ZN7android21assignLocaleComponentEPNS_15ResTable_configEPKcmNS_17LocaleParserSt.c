// Function: _ZN7android21assignLocaleComponentEPNS_15ResTable_configEPKcmNS_17LocaleParserStateE
// Address: 0043da30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN7android21assignLocaleComponentEPNS_15ResTable_configEPKcmNS_17LocaleParserStateE
               (long param_1,byte *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  byte bVar5;
  ulong uVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_4 >> 8 & 0xff;
  iVar8 = (int)uVar6;
  bVar5 = (byte)param_4;
  bVar3 = bVar5;
  if (bVar5 == 1) {
    bVar2 = 2;
    sVar7 = (short)uVar6;
    bVar3 = bVar2;
    if (5 < param_3 - 3) {
      if (((param_3 == 2) && (((uint)param_4 & 0xffff) < 0x100 || sVar7 == 1)) &&
         (((*param_2 | 0x20) != 0x6e || (iVar8 = 3, bVar3 = bVar5, (param_2[1] | 0x20) != 0x75)))) {
        iVar8 = 2;
        bVar3 = bVar5;
      }
      goto code_r0x0043ddfa;
    }
    if (sVar7 == 1) goto code_r0x0043ddfa;
    if (iVar8 == 2) {
      iVar8 = 1;
      bVar3 = bVar5;
      goto code_r0x0043ddfa;
    }
    bVar3 = bVar5;
    if ((iVar8 != 3) || (bVar3 = bVar2, *(char *)(param_1 + 0x35) != '\0')) goto code_r0x0043ddfa;
    plVar4 = (long *)func_0x0099c530();
    uVar6 = (ulong)((uint)param_3 & 3);
    if (param_3 - 1 < 3) {
      uVar9 = 0;
code_r0x0043dd8f:
      uVar10 = 0;
      do {
        *(undefined1 *)(param_1 + uVar9 + 0x35 + uVar10) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar10 + uVar9] * 4);
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(param_1 + 0x35 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9] * 4);
        *(undefined1 *)(param_1 + 0x36 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 1] * 4);
        *(undefined1 *)(param_1 + 0x37 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 2] * 4);
        *(undefined1 *)(param_1 + 0x38 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 3] * 4);
        uVar9 = uVar9 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar9);
      if (uVar6 != 0) goto code_r0x0043dd8f;
    }
    iVar8 = 1;
    bVar3 = bVar5;
    goto code_r0x0043ddfa;
  }
  switch(param_3 - 1) {
  case 0:
    bVar3 = ((*param_2 & 0xdf) != 0x55) + 1;
    break;
  case 1:
  case 2:
    if (*(char *)(param_1 + 8) == '\0') {
      bVar5 = param_2[2];
      if ((bVar5 == 0x2d) || (bVar5 == 0)) {
        *(byte *)(param_1 + 8) = *param_2;
        *(byte *)(param_1 + 9) = param_2[1];
      }
      else {
        bVar2 = *param_2;
        bVar1 = param_2[1];
        *(byte *)(param_1 + 8) = (byte)(bVar1 + 0x9f) >> 3 & 0xf | bVar5 * '\x04' + 0x7c | 0x80;
        *(byte *)(param_1 + 9) = (bVar1 + 0x9f) * ' ' | bVar2 + 0x1f & 0x7f;
      }
    }
    else {
      bVar5 = param_2[2];
      if ((bVar5 == 0x2d) || (bVar5 == 0)) {
        *(byte *)(param_1 + 10) = *param_2;
        *(byte *)(param_1 + 0xb) = param_2[1];
      }
      else {
        bVar2 = *param_2;
        bVar1 = param_2[1];
        *(byte *)(param_1 + 10) = ((bVar5 & 0x1f) << 2 | (byte)(bVar1 + 0x50) >> 3 & 0xf) ^ 0xc0;
        *(byte *)(param_1 + 0xb) = bVar1 << 5 | bVar2 + 0x50 & 0x7f;
      }
    }
    break;
  case 3:
    bVar5 = *param_2;
    if (9 < (byte)(bVar5 - 0x30)) {
      plVar4 = (long *)func_0x0099c540();
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(*plVar4 + (long)(char)bVar5 * 4);
      plVar4 = (long *)func_0x0099c530();
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(*plVar4 + (long)(char)param_2[1] * 4);
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(*plVar4 + (long)(char)param_2[2] * 4);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(*plVar4 + (long)(char)param_2[3] * 4);
      break;
    }
  case 4:
  case 5:
  case 6:
  case 7:
    plVar4 = (long *)func_0x0099c530();
    uVar6 = (ulong)((uint)param_3 & 3);
    if (param_3 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(param_1 + 0x28 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9] * 4);
        *(undefined1 *)(param_1 + 0x29 + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 1] * 4);
        *(undefined1 *)(param_1 + 0x2a + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 2] * 4);
        *(undefined1 *)(param_1 + 0x2b + uVar9) =
             *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar9 + 3] * 4);
        uVar9 = uVar9 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar9);
      if (uVar6 == 0) break;
    }
    uVar10 = 0;
    do {
      *(undefined1 *)(uVar9 + param_1 + 0x28 + uVar10) =
           *(undefined1 *)(*plVar4 + (long)(char)param_2[uVar10 + uVar9] * 4);
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
    break;
  default:
    bVar3 = 2;
  }
code_r0x0043ddfa:
  return (uint)bVar3 | iVar8 << 8;
}


