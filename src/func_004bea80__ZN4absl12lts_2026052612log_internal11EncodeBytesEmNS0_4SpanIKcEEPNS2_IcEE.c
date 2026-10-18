// Function: _ZN4absl12lts_2026052612log_internal11EncodeBytesEmNS0_4SpanIKcEEPNS2_IcEE
// Address: 004bea80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052612log_internal11EncodeBytesEmNS0_4SpanIKcEEPNS2_IcEE
               (long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = param_1 * 8 + 2;
  lVar2 = 1;
  lVar3 = 1;
  uVar6 = uVar7;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      lVar3 = lVar3 + 1;
      bVar1 = 0x3fff < uVar6;
      uVar6 = uVar6 >> 7;
    } while (bVar1);
  }
  if (0x7f < param_3) {
    lVar2 = 1;
    uVar6 = param_3;
    do {
      lVar2 = lVar2 + 1;
      bVar1 = 0x3fff < uVar6;
      uVar6 = uVar6 >> 7;
    } while (bVar1);
  }
  uVar10 = lVar3 + param_3 + lVar2;
  uVar6 = param_4[1];
  if (uVar6 < uVar10) {
    lVar2 = 0;
    goto code_r0x004bece8;
  }
  if (lVar3 == 1) {
    uVar4 = 0;
  }
  else {
    uVar9 = (ulong)((uint)(lVar3 - 1U) & 3);
    if (lVar3 - 2U < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(byte *)(*param_4 + uVar4) = (byte)uVar7 | 0x80;
        *(byte *)(*param_4 + 1 + uVar4) = (byte)(uVar7 >> 7) | 0x80;
        *(byte *)(*param_4 + 2 + uVar4) = (byte)(uVar7 >> 0xe) | 0x80;
        *(byte *)(*param_4 + 3 + uVar4) = (byte)(uVar7 >> 0x15) | 0x80;
        uVar4 = uVar4 + 4;
        uVar7 = uVar7 >> 0x1c;
      } while ((lVar3 - 1U & 0xfffffffffffffffc) != uVar4);
      if (uVar9 == 0) goto code_r0x004bebca;
    }
    do {
      *(byte *)(*param_4 + uVar4) = (byte)uVar7 | 0x80;
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 >> 7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
code_r0x004bebca:
  *(byte *)(*param_4 + uVar4) = (uVar4 + 1 != lVar3) << 7 | (byte)uVar7 & 0x7f;
  lVar8 = *param_4 + lVar3;
  *param_4 = lVar8;
  param_4[1] = param_4[1] - lVar3;
  if (lVar2 == 1) {
    uVar4 = 0;
    bVar5 = (byte)param_3;
  }
  else {
    uVar9 = (ulong)((uint)(lVar2 - 1U) & 3);
    uVar7 = param_3;
    if (2 < lVar2 - 2U) {
      uVar4 = 0;
      do {
        *(byte *)(*param_4 + uVar4) = (byte)uVar7 | 0x80;
        *(byte *)(*param_4 + 1 + uVar4) = (byte)(uVar7 >> 7) | 0x80;
        *(byte *)(*param_4 + 2 + uVar4) = (byte)(uVar7 >> 0xe) | 0x80;
        *(byte *)(*param_4 + 3 + uVar4) = (byte)(uVar7 >> 0x15) | 0x80;
        uVar4 = uVar4 + 4;
        uVar7 = uVar7 >> 0x1c;
        if ((lVar2 - 1U & 0xfffffffffffffffc) == uVar4) goto joined_r0x004bec87;
      } while( true );
    }
    uVar4 = 0;
    do {
      *(byte *)(*param_4 + uVar4) = (byte)uVar7 | 0x80;
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 >> 7;
      uVar9 = uVar9 - 1;
joined_r0x004bec87:
    } while (uVar9 != 0);
    bVar5 = (byte)uVar7;
    lVar8 = *param_4;
  }
  *(byte *)(lVar8 + uVar4) = (uVar4 + 1 != lVar2) << 7 | bVar5 & 0x7f;
  *param_4 = *param_4 + lVar2;
  param_4[1] = param_4[1] - lVar2;
  func_0x0099bda0();
  *param_4 = *param_4 + param_3;
  lVar2 = param_4[1] - param_3;
code_r0x004bece8:
  param_4[1] = lVar2;
  return uVar10 <= uVar6;
}


