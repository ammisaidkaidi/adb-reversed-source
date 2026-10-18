// Function: _ZN4absl12lts_2026052612log_internal19EncodeBytesTruncateEmNS0_4SpanIKcEEPNS2_IcEE
// Address: 004bed00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052612log_internal19EncodeBytesTruncateEmNS0_4SpanIKcEEPNS2_IcEE
               (long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = param_1 * 8 + 2;
  lVar2 = 1;
  lVar3 = 1;
  uVar7 = uVar6;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      lVar3 = lVar3 + 1;
      bVar1 = 0x3fff < uVar7;
      uVar7 = uVar7 >> 7;
    } while (bVar1);
  }
  uVar7 = param_4[1];
  uVar8 = param_3;
  if (uVar7 < param_3) {
    uVar8 = uVar7;
  }
  if (0x7f < uVar8) {
    lVar2 = 1;
    do {
      lVar2 = lVar2 + 1;
      bVar1 = 0x3fff < uVar8;
      uVar8 = uVar8 >> 7;
    } while (bVar1);
  }
  uVar8 = lVar2 + lVar3;
  uVar11 = uVar7 - uVar8;
  if (uVar8 + param_3 <= uVar7) {
    uVar11 = param_3;
  }
  if (uVar7 < uVar8) {
    uVar11 = param_3;
  }
  if (uVar7 < uVar8 + uVar11) {
    lVar2 = 0;
    goto code_r0x004bef88;
  }
  if (lVar3 == 1) {
    uVar4 = 0;
  }
  else {
    uVar10 = (ulong)((uint)(lVar3 - 1U) & 3);
    if (lVar3 - 2U < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(byte *)(*param_4 + uVar4) = (byte)uVar6 | 0x80;
        *(byte *)(*param_4 + 1 + uVar4) = (byte)(uVar6 >> 7) | 0x80;
        *(byte *)(*param_4 + 2 + uVar4) = (byte)(uVar6 >> 0xe) | 0x80;
        *(byte *)(*param_4 + 3 + uVar4) = (byte)(uVar6 >> 0x15) | 0x80;
        uVar4 = uVar4 + 4;
        uVar6 = uVar6 >> 0x1c;
      } while ((lVar3 - 1U & 0xfffffffffffffffc) != uVar4);
      if (uVar10 == 0) goto code_r0x004bee6a;
    }
    do {
      *(byte *)(*param_4 + uVar4) = (byte)uVar6 | 0x80;
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 >> 7;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
code_r0x004bee6a:
  *(byte *)(*param_4 + uVar4) = (uVar4 + 1 != lVar3) << 7 | (byte)uVar6 & 0x7f;
  lVar9 = *param_4 + lVar3;
  *param_4 = lVar9;
  param_4[1] = param_4[1] - lVar3;
  if (lVar2 == 1) {
    uVar4 = 0;
    bVar5 = (byte)uVar11;
  }
  else {
    uVar10 = (ulong)((uint)(lVar2 - 1U) & 3);
    uVar6 = uVar11;
    if (2 < lVar2 - 2U) {
      uVar4 = 0;
      do {
        *(byte *)(*param_4 + uVar4) = (byte)uVar6 | 0x80;
        *(byte *)(*param_4 + 1 + uVar4) = (byte)(uVar6 >> 7) | 0x80;
        *(byte *)(*param_4 + 2 + uVar4) = (byte)(uVar6 >> 0xe) | 0x80;
        *(byte *)(*param_4 + 3 + uVar4) = (byte)(uVar6 >> 0x15) | 0x80;
        uVar4 = uVar4 + 4;
        uVar6 = uVar6 >> 0x1c;
        if ((lVar2 - 1U & 0xfffffffffffffffc) == uVar4) goto joined_r0x004bef27;
      } while( true );
    }
    uVar4 = 0;
    do {
      *(byte *)(*param_4 + uVar4) = (byte)uVar6 | 0x80;
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 >> 7;
      uVar10 = uVar10 - 1;
joined_r0x004bef27:
    } while (uVar10 != 0);
    bVar5 = (byte)uVar6;
    lVar9 = *param_4;
  }
  *(byte *)(lVar9 + uVar4) = (uVar4 + 1 != lVar2) << 7 | bVar5 & 0x7f;
  lVar3 = *param_4;
  *param_4 = lVar3 + lVar2;
  param_4[1] = param_4[1] - lVar2;
  func_0x0099bda0(lVar3 + lVar2,param_2,uVar11);
  *param_4 = *param_4 + uVar11;
  lVar2 = param_4[1] - uVar11;
code_r0x004bef88:
  param_4[1] = lVar2;
  return uVar8 + uVar11 <= uVar7;
}


