// Function: _ZN4absl12lts_2026052612log_internal11Encode32BitEmjPNS0_4SpanIcEE
// Address: 004be900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052612log_internal11Encode32BitEmjPNS0_4SpanIcEE
                (long param_1,undefined4 param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1 * 8 + 5;
  if ((ulong)(param_1 << 3) < 0x80) {
    lVar5 = 1;
    uVar3 = 0;
    lVar7 = 0;
    if ((ulong)param_3[1] < 5) goto code_r0x004bea73;
  }
  else {
    uVar3 = uVar6;
    uVar9 = 0;
    uVar2 = 1;
    do {
      uVar4 = uVar2;
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
      bVar1 = 0x3fff < uVar3;
      uVar3 = uVar3 >> 7;
      uVar2 = uVar4 + 1;
    } while (bVar1);
    if ((ulong)param_3[1] < uVar8 + 6) {
      uVar3 = 0;
      lVar7 = 0;
      goto code_r0x004bea73;
    }
    lVar5 = uVar8 + 2;
    if (uVar8 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        *(byte *)(*param_3 + uVar3) = (byte)uVar6 | 0x80;
        *(byte *)(*param_3 + 1 + uVar3) = (byte)(uVar6 >> 7) | 0x80;
        *(byte *)(*param_3 + 2 + uVar3) = (byte)(uVar6 >> 0xe) | 0x80;
        *(byte *)(*param_3 + 3 + uVar3) = (byte)(uVar6 >> 0x15) | 0x80;
        uVar3 = uVar3 + 4;
        uVar6 = uVar6 >> 0x1c;
      } while ((uVar9 & 0xfffffffffffffffc) != uVar3);
      if ((uVar9 & 3) == 0) goto code_r0x004bea1a;
    }
    uVar9 = (ulong)(uVar4 & 3);
    do {
      *(byte *)(*param_3 + uVar3) = (byte)uVar6 | 0x80;
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 >> 7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
code_r0x004bea1a:
  *(byte *)(*param_3 + uVar3) = (uVar3 + 1 != lVar5) << 7 | (byte)uVar6 & 0x7f;
  lVar7 = *param_3;
  *param_3 = lVar7 + lVar5;
  param_3[1] = param_3[1] - lVar5;
  *(char *)(lVar7 + lVar5) = (char)param_2;
  *(char *)(*param_3 + 1) = (char)((uint)param_2 >> 8);
  *(char *)(*param_3 + 2) = (char)((uint)param_2 >> 0x10);
  lVar5 = *param_3;
  *(char *)(lVar5 + 3) = (char)((uint)param_2 >> 0x18);
  *param_3 = *param_3 + 4;
  lVar7 = param_3[1] + -4;
  uVar3 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
code_r0x004bea73:
  param_3[1] = lVar7;
  return uVar3;
}


