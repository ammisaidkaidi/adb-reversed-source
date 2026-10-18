// Function: _ZN4absl12lts_2026052612log_internal12EncodeVarintEmmPNS0_4SpanIcEE
// Address: 004be510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052612log_internal12EncodeVarintEmmPNS0_4SpanIcEE
          (long param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = param_1 << 3;
  lVar2 = 1;
  lVar6 = 1;
  uVar3 = uVar4;
  if (0x7f < uVar4) {
    do {
      lVar6 = lVar6 + 1;
      bVar1 = 0x3fff < uVar3;
      uVar3 = uVar3 >> 7;
    } while (bVar1);
  }
  if (0x7f < param_2) {
    lVar2 = 1;
    uVar3 = param_2;
    do {
      lVar2 = lVar2 + 1;
      bVar1 = 0x3fff < uVar3;
      uVar3 = uVar3 >> 7;
    } while (bVar1);
  }
  uVar3 = param_3[1];
  if (uVar3 < (ulong)(lVar2 + lVar6)) {
    lVar8 = 0;
    goto code_r0x004be739;
  }
  if (lVar6 == 1) {
    uVar7 = 0;
  }
  else {
    uVar5 = (ulong)((uint)(lVar6 - 1U) & 3);
    if (lVar6 - 2U < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        *(byte *)(*param_3 + uVar7) = (byte)uVar4 | 0x80;
        *(byte *)(*param_3 + 1 + uVar7) = (byte)(uVar4 >> 7) | 0x80;
        *(byte *)(*param_3 + 2 + uVar7) = (byte)(uVar4 >> 0xe) | 0x80;
        *(byte *)(*param_3 + 3 + uVar7) = (byte)(uVar4 >> 0x15) | 0x80;
        uVar7 = uVar7 + 4;
        uVar4 = uVar4 >> 0x1c;
      } while ((lVar6 - 1U & 0xfffffffffffffffc) != uVar7);
      if (uVar5 == 0) goto code_r0x004be638;
    }
    do {
      *(byte *)(*param_3 + uVar7) = (byte)uVar4 | 0x80;
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 >> 7;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
code_r0x004be638:
  *(byte *)(*param_3 + uVar7) = (uVar7 + 1 != lVar6) << 7 | (byte)uVar4 & 0x7f;
  lVar8 = *param_3 + lVar6;
  *param_3 = lVar8;
  param_3[1] = param_3[1] - lVar6;
  if (lVar2 == 1) {
    uVar5 = 0;
  }
  else {
    uVar4 = (ulong)((uint)(lVar2 - 1U) & 3);
    if (2 < lVar2 - 2U) {
      uVar5 = 0;
      do {
        *(byte *)(*param_3 + uVar5) = (byte)param_2 | 0x80;
        *(byte *)(*param_3 + 1 + uVar5) = (byte)(param_2 >> 7) | 0x80;
        *(byte *)(*param_3 + 2 + uVar5) = (byte)(param_2 >> 0xe) | 0x80;
        *(byte *)(*param_3 + 3 + uVar5) = (byte)(param_2 >> 0x15) | 0x80;
        uVar5 = uVar5 + 4;
        param_2 = param_2 >> 0x1c;
        if ((lVar2 - 1U & 0xfffffffffffffffc) == uVar5) goto joined_r0x004be6e7;
      } while( true );
    }
    uVar5 = 0;
    do {
      *(byte *)(*param_3 + uVar5) = (byte)param_2 | 0x80;
      uVar5 = uVar5 + 1;
      param_2 = param_2 >> 7;
      uVar4 = uVar4 - 1;
joined_r0x004be6e7:
    } while (uVar4 != 0);
    lVar8 = *param_3;
  }
  *(byte *)(lVar8 + uVar5) = (uVar5 + 1 != lVar2) << 7 | (byte)param_2 & 0x7f;
  *param_3 = *param_3 + lVar2;
  lVar8 = param_3[1] - lVar2;
code_r0x004be739:
  param_3[1] = lVar8;
  return CONCAT71((int7)((ulong)lVar2 >> 8),(ulong)(lVar2 + lVar6) <= uVar3);
}


