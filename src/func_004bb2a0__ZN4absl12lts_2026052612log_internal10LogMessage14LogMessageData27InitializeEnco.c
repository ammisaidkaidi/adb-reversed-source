// Function: _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
// Address: 004bb2a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004be528) */
/* WARNING: Removing unreachable block (ram,0x004be530) */
/* WARNING: Removing unreachable block (ram,0x004be59e) */
/* WARNING: Removing unreachable block (ram,0x004be5b8) */
/* WARNING: Removing unreachable block (ram,0x004be5c0) */
/* WARNING: Removing unreachable block (ram,0x004be614) */
/* WARNING: Removing unreachable block (ram,0x004be5b3) */
/* WARNING: Removing unreachable block (ram,0x004be620) */

undefined8
_ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
          (undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  plVar1 = param_1 + 0x78a;
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
  }
  _ZN4absl12lts_2026052612log_internal19EncodeBytesTruncateEmNS0_4SpanIKcEEPNS2_IcEE
            (2,uVar5,uVar2,plVar1);
  iVar4 = *(int *)(param_1 + 4);
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
  }
  _ZN4absl12lts_2026052612log_internal12EncodeVarintEmmPNS0_4SpanIcEE(3,(long)iVar4,plVar1);
  uVar5 = _ZN4absl12lts_2026052611ToUnixNanosENS0_4TimeE(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
  }
  _ZN4absl12lts_2026052612log_internal12EncodeVarintEmmPNS0_4SpanIcEE(4,uVar5,plVar1);
  switch(*(undefined4 *)(param_1 + 5)) {
  case 0:
    iVar4 = 800;
    if (*(int *)((long)param_1 + 0x2c) != -1) {
      iVar4 = 600 - *(int *)((long)param_1 + 0x2c);
    }
    lVar11 = (long)iVar4;
    lVar6 = *plVar1;
    break;
  case 1:
    lVar11 = 900;
    lVar6 = *plVar1;
    goto joined_r0x004bb46d;
  case 2:
    lVar11 = 0x3b6;
    lVar6 = *plVar1;
    break;
  case 3:
    lVar11 = 0x44c;
    lVar6 = *plVar1;
    break;
  default:
    lVar11 = 800;
    lVar6 = *plVar1;
joined_r0x004bb46d:
    if (lVar6 != 0) goto code_r0x004bb40c;
    goto code_r0x004bb3eb;
  }
  if (lVar6 == 0) {
code_r0x004bb3eb:
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
  }
code_r0x004bb40c:
  _ZN4absl12lts_2026052612log_internal12EncodeVarintEmmPNS0_4SpanIcEE(5,lVar11,plVar1);
  iVar4 = *(int *)((long)param_1 + 0x3c);
  uVar10 = (ulong)iVar4;
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
  }
  lVar6 = 1;
  if (0x7f < uVar10) {
    lVar6 = 1;
    uVar7 = uVar10;
    do {
      lVar6 = lVar6 + 1;
      bVar3 = 0x3fff < uVar7;
      uVar7 = uVar7 >> 7;
    } while (bVar3);
  }
  uVar7 = param_1[0x78b];
  if (uVar7 < lVar6 + 1U) {
    lVar11 = 0;
  }
  else {
    *(undefined1 *)*plVar1 = 0x30;
    lVar11 = *plVar1 + 1;
    *plVar1 = lVar11;
    param_1[0x78b] = param_1[0x78b] + -1;
    if (lVar6 == 1) {
      uVar8 = 0;
    }
    else {
      uVar9 = (ulong)((uint)(lVar6 - 1U) & 3);
      if (2 < lVar6 - 2U) {
        uVar8 = 0;
        do {
          *(byte *)(*plVar1 + uVar8) = (byte)uVar10 | 0x80;
          *(byte *)(*plVar1 + 1 + uVar8) = (byte)(uVar10 >> 7) | 0x80;
          *(byte *)(*plVar1 + 2 + uVar8) = (byte)(uVar10 >> 0xe) | 0x80;
          *(byte *)(*plVar1 + 3 + uVar8) = (byte)(uVar10 >> 0x15) | 0x80;
          uVar8 = uVar8 + 4;
          uVar10 = uVar10 >> 0x1c;
          if ((lVar6 - 1U & 0xfffffffffffffffc) == uVar8) goto joined_r0x004be6e7;
        } while( true );
      }
      uVar8 = 0;
      do {
        *(byte *)(*plVar1 + uVar8) = (byte)uVar10 | 0x80;
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 >> 7;
        uVar9 = uVar9 - 1;
joined_r0x004be6e7:
      } while (uVar9 != 0);
      iVar4 = (int)uVar10;
      lVar11 = *plVar1;
    }
    *(byte *)(lVar11 + uVar8) = (uVar8 + 1 != lVar6) << 7 | (byte)iVar4 & 0x7f;
    *plVar1 = *plVar1 + lVar6;
    lVar11 = param_1[0x78b] - lVar6;
  }
  param_1[0x78b] = lVar11;
  return CONCAT71((int7)((ulong)lVar6 >> 8),lVar6 + 1U <= uVar7);
}


