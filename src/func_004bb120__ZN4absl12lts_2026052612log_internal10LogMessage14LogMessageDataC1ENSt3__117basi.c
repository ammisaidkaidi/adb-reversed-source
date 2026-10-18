// Function: _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
// Address: 004bb120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
               (long *param_1,long param_2,long param_3,undefined4 param_4,int param_5,
               undefined8 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x2a] = 0;
  param_1[0x23] = 0x9b9ce0;
  param_1[0x24] = 0x9b9d08;
  _ZNSt3__18ios_base4initEPv(param_1 + 0x24,0);
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  puVar3 = (uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120);
  *puVar3 = *puVar3 | 0x201;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    lVar4 = 0;
    lVar9 = param_2;
    do {
      lVar8 = lVar4;
      if (param_3 == lVar8) goto code_r0x004bb232;
      lVar1 = lVar9 + -1;
      lVar2 = lVar9 + -1;
      lVar4 = lVar8 + 1;
      lVar9 = lVar1;
    } while (*(char *)(lVar2 + param_3) != '/');
    if (param_3 + 1 != lVar8 + 1) {
      param_2 = lVar1 + param_3 + 1;
      param_3 = lVar8;
    }
  }
code_r0x004bb232:
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar5 = _ZN4absl12lts_2026052622ShouldPrependLogPrefixEv();
  *(undefined1 *)((long)param_1 + 0x24) = uVar5;
  iVar10 = 0;
  if (0 < param_5) {
    iVar10 = param_5;
  }
  iVar6 = 2;
  if (param_5 < 4) {
    iVar6 = iVar10;
  }
  *(int *)(param_1 + 5) = iVar6;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = param_7;
  *(undefined4 *)(param_1 + 7) = param_8;
  uVar7 = _ZN4absl12lts_2026052613base_internal12GetCachedTIDEv();
  *(undefined4 *)((long)param_1 + 0x3c) = uVar7;
  return;
}


