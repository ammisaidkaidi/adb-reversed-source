// Function: _ZN7android23localeDataComputeScriptEPcPKcS2_
// Address: 00440ef0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android23localeDataComputeScriptEPcPKcS2_
               (undefined4 *param_1,byte *param_2,ushort *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*param_2 != 0) {
    uVar3 = (uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18;
    puVar1 = (undefined4 *)
             _ZN7android18lookupLikelyScriptEj((ushort)(*param_3 << 8 | *param_3 >> 8) | uVar3);
    if ((puVar1 != (undefined4 *)0x0) ||
       ((uVar2 = 0, (char)*param_3 != '\0' &&
        (puVar1 = (undefined4 *)_ZN7android18lookupLikelyScriptEj(uVar3),
        puVar1 != (undefined4 *)0x0)))) {
      uVar2 = *puVar1;
    }
  }
  *param_1 = uVar2;
  return;
}


