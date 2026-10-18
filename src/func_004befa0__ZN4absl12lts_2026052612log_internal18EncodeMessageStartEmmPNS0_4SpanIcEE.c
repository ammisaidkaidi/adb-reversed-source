// Function: _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
// Address: 004befa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
               (long param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = param_1 * 8 + 2;
  lVar6 = 1;
  lVar7 = 1;
  uVar4 = uVar5;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      lVar7 = lVar7 + 1;
      bVar1 = 0x3fff < uVar4;
      uVar4 = uVar4 >> 7;
    } while (bVar1);
  }
  uVar4 = param_3[1];
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (0x7f < param_2) {
    lVar6 = 1;
    do {
      lVar6 = lVar6 + 1;
      bVar1 = 0x3fff < param_2;
      param_2 = param_2 >> 7;
    } while (bVar1);
  }
  lVar3 = 0;
  if (uVar4 < (ulong)(lVar6 + lVar7)) goto code_r0x004bf1b1;
  if (lVar7 == 1) {
    uVar2 = 0;
  }
  else {
    uVar4 = (ulong)((uint)(lVar7 - 1U) & 3);
    if (lVar7 - 2U < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        *(byte *)(*param_3 + uVar2) = (byte)uVar5 | 0x80;
        *(byte *)(*param_3 + 1 + uVar2) = (byte)(uVar5 >> 7) | 0x80;
        *(byte *)(*param_3 + 2 + uVar2) = (byte)(uVar5 >> 0xe) | 0x80;
        *(byte *)(*param_3 + 3 + uVar2) = (byte)(uVar5 >> 0x15) | 0x80;
        uVar2 = uVar2 + 4;
        uVar5 = uVar5 >> 0x1c;
      } while ((lVar7 - 1U & 0xfffffffffffffffc) != uVar2);
      if (uVar4 == 0) goto code_r0x004bf0da;
    }
    do {
      *(byte *)(*param_3 + uVar2) = (byte)uVar5 | 0x80;
      uVar2 = uVar2 + 1;
      uVar5 = uVar5 >> 7;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
code_r0x004bf0da:
  *(byte *)(*param_3 + uVar2) = (uVar2 + 1 != lVar7) << 7 | (byte)uVar5 & 0x7f;
  lVar3 = *param_3 + lVar7;
  *param_3 = lVar3;
  param_3[1] = param_3[1] - lVar7;
  if (lVar6 == 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)((uint)(lVar6 - 1U) & 3);
    if (2 < lVar6 - 2U) {
      uVar4 = 0;
      do {
        *(undefined1 *)(*param_3 + uVar4) = 0x80;
        *(undefined1 *)(*param_3 + 1 + uVar4) = 0x80;
        *(undefined1 *)(*param_3 + 2 + uVar4) = 0x80;
        *(undefined1 *)(*param_3 + 3 + uVar4) = 0x80;
        uVar4 = uVar4 + 4;
        if ((lVar6 - 1U & 0xfffffffffffffffc) == uVar4) goto joined_r0x004bf16f;
      } while( true );
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*param_3 + uVar4) = 0x80;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
joined_r0x004bf16f:
    } while (uVar5 != 0);
    lVar3 = *param_3;
  }
  *(char *)(lVar3 + uVar4) = (uVar4 + 1 != lVar6) << 7;
  *param_3 = *param_3 + lVar6;
  lVar3 = param_3[1] - lVar6;
code_r0x004bf1b1:
  param_3[1] = lVar3;
  return;
}


