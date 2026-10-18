// Function: _ZNK4absl12lts_2026052619str_format_internal16ParsedFormatBase18MatchesConversionsEbSt16initializer_listINS0_23FormatConversionCharSetEE
// Address: 004ed4a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK4absl12lts_2026052619str_format_internal16ParsedFormatBase18MatchesConversionsEbSt16initializer_listINS0_23FormatConversionCharSetEE
                (long param_1,byte param_2,long param_3,ulong param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  uint uStack_74;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_48 = 0x3f800000;
  pcVar9 = *(char **)(param_1 + 0x10);
  pcVar1 = *(char **)(param_1 + 0x18);
  if (pcVar9 != pcVar1) {
    do {
      if (*pcVar9 == '\x01') {
        if ((int)*(uint *)(pcVar9 + 0x18) < -1) {
          uStack_74 = ~*(uint *)(pcVar9 + 0x18);
          if ((uStack_74 <= param_4) && ((*(byte *)(param_3 + -8 + (ulong)uStack_74 * 8) & 1) != 0))
          {
            plStack_70 = &lStack_68;
            _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                      (&plStack_70,&uStack_74);
            goto code_r0x004ed56d;
          }
        }
        else {
code_r0x004ed56d:
          if ((int)*(uint *)(pcVar9 + 0x14) < -1) {
            uStack_74 = ~*(uint *)(pcVar9 + 0x14);
            if ((param_4 < uStack_74) || ((*(byte *)(param_3 + -8 + (ulong)uStack_74 * 8) & 1) == 0)
               ) goto code_r0x004ed600;
            plStack_70 = &lStack_68;
            _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                      (&plStack_70,&uStack_74);
          }
          uStack_74 = *(uint *)(pcVar9 + 0x10);
          if ((ulong)(byte)pcVar9[0x1e] < 0x13) {
            cVar6 = (&UNK_0020492c)[(byte)pcVar9[0x1e]];
          }
          else {
            cVar6 = '\0';
          }
          if (((ulong)(long)(int)uStack_74 <= param_4) &&
             (uVar8 = *(ulong *)(param_3 + -8 + (long)(int)uStack_74 * 8),
             uVar7 = _ZN4absl12lts_2026052619str_format_internal29FormatConversionCharToConvIntEc
                               ((int)cVar6), (uVar7 & uVar8) != 0)) {
            plStack_70 = &lStack_68;
            _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                      (&plStack_70,&uStack_74);
            goto code_r0x004ed523;
          }
        }
code_r0x004ed600:
        uVar8 = 0;
        lVar4 = lStack_68;
        puVar5 = puStack_58;
        goto joined_r0x004ed61f;
      }
code_r0x004ed523:
      pcVar9 = pcVar9 + 0x20;
    } while (pcVar9 != pcVar1);
  }
  uVar8 = CONCAT71((int7)(param_4 >> 8),uStack_50 == param_4 | param_2);
  lVar4 = lStack_68;
  puVar5 = puStack_58;
joined_r0x004ed61f:
  while (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar5;
    lStack_68 = lVar4;
    _ZdaPvSt11align_val_t(puVar5,0x18);
    lVar4 = lStack_68;
    puVar5 = puVar2;
  }
  lStack_68 = 0;
  if (lVar4 != 0) {
    _ZdaPvSt11align_val_t(lVar4,lStack_60 << 3);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  return uVar8 & 0xffffffff;
}


