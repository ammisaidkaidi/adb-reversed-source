// Function: _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
// Address: 004bf1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
               (ulong param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*param_3 < param_1) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar1 = (*param_3 - param_1) - param_2;
  if (param_2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)((uint)(param_2 - 1U) & 3);
    if (param_2 - 2U < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        *(byte *)(param_1 + uVar2) = (byte)uVar1 | 0x80;
        *(byte *)(param_1 + 1 + uVar2) = (byte)(uVar1 >> 7) | 0x80;
        *(byte *)(param_1 + 2 + uVar2) = (byte)(uVar1 >> 0xe) | 0x80;
        *(byte *)(param_1 + 3 + uVar2) = (byte)(uVar1 >> 0x15) | 0x80;
        uVar2 = uVar2 + 4;
        uVar1 = uVar1 >> 0x1c;
      } while ((param_2 - 1U & 0xfffffffffffffffc) != uVar2);
      if (uVar3 == 0) goto code_r0x004bf287;
    }
    do {
      *(byte *)(param_1 + uVar2) = (byte)uVar1 | 0x80;
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 >> 7;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
code_r0x004bf287:
  *(byte *)(param_1 + uVar2) = (uVar2 + 1 != param_2) << 7 | (byte)uVar1 & 0x7f;
  return;
}


