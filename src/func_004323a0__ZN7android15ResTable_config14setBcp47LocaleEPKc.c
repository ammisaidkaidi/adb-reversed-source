// Function: _ZN7android15ResTable_config14setBcp47LocaleEPKc
// Address: 004323a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN7android15ResTable_config14setBcp47LocaleEPKc(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  lVar3 = func_0x0099c0c0(param_2,0x2d);
  lVar7 = param_2;
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar8 = 0;
    do {
      uVar2 = _ZN7android21assignLocaleComponentEPNS_15ResTable_configEPKcmNS_17LocaleParserStateE
                        (param_1,lVar7,lVar3 - lVar7,uVar8 | uVar2 & 0xff);
      if ((char)uVar2 == '\x02') {
        func_0x0099bd30(_stderr,&UNK_0015e394,param_2);
        goto code_r0x00432467;
      }
      uVar8 = uVar2 & 0xff00;
      lVar7 = lVar3 + 1;
      lVar3 = func_0x0099c0c0(lVar7,0x2d);
    } while (lVar3 != 0);
  }
  uVar4 = func_0x0099bcf0(lVar7);
  _ZN7android21assignLocaleComponentEPNS_15ResTable_configEPKcmNS_17LocaleParserStateE
            (param_1,lVar7,uVar4,uVar2);
code_r0x00432467:
  bVar9 = *(char *)(param_1 + 0x24) == '\0';
  *(bool *)(param_1 + 0x34) = bVar9;
  if (bVar9) {
    uVar6 = 0;
    if (*(byte *)(param_1 + 8) != 0) {
      uVar2 = (uint)*(byte *)(param_1 + 9) << 0x10 | (uint)*(byte *)(param_1 + 8) << 0x18;
      uVar1 = *(ushort *)(param_1 + 10);
      puVar5 = (undefined4 *)
               _ZN7android18lookupLikelyScriptEj((ushort)(uVar1 << 8 | uVar1 >> 8) | uVar2);
      if ((puVar5 != (undefined4 *)0x0) ||
         ((uVar6 = 0, *(char *)(param_1 + 10) != '\0' &&
          (puVar5 = (undefined4 *)_ZN7android18lookupLikelyScriptEj(uVar2),
          puVar5 != (undefined4 *)0x0)))) {
        uVar6 = *puVar5;
      }
    }
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    return;
  }
  return;
}


