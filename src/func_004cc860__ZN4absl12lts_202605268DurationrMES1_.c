// Function: _ZN4absl12lts_202605268DurationrMES1_
// Address: 004cc860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_202605268DurationrMES1_(ulong *param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)param_1[1];
  if ((uVar3 == 0xffffffff) || (param_3 == -1)) goto code_r0x004cc9c2;
  if (param_2 == 0) {
    if (param_3 < 4000) {
      if (param_3 == 4) {
        if (uVar4 >> 8 < 0x225c17d) {
          uVar3 = uVar3 & 3;
          uVar4 = 0;
          goto code_r0x004cc9f1;
        }
code_r0x004cc9c2:
        func_0x004ce520(0);
        return param_1;
      }
      if ((param_3 != 400) || (0xd6bf94d454 < uVar4)) goto code_r0x004cc9c2;
      iVar1 = (uVar3 / 400) * 400;
    }
    else if (param_3 == 4000) {
      if (0x8637bd04b55 < uVar4) goto code_r0x004cc9c2;
      iVar1 = (uVar3 / 4000) * 4000;
    }
    else {
      if ((param_3 != 4000000) || (0x20c49ba5a64af6 < uVar4)) goto code_r0x004cc9c2;
      iVar1 = (uVar3 / 4000000) * 4000000;
    }
    uVar3 = uVar3 - iVar1;
    uVar4 = 0;
  }
  else {
    if (param_3 != 0 || (long)param_2 < 1) goto code_r0x004cc9c2;
    if ((long)uVar4 < 0) {
      uVar2 = -uVar4 - (ulong)(uVar3 != 0);
      if ((uVar2 | param_2) >> 0x20 == 0) {
        uVar2 = (uVar2 & 0xffffffff) % (param_2 & 0xffffffff);
      }
      else {
        uVar2 = uVar2 % param_2;
      }
      uVar4 = ~uVar2;
      if (uVar3 == 0) {
        uVar4 = -uVar2;
      }
    }
    else if (param_2 == 1) {
      uVar4 = 0;
    }
    else if ((uVar4 | param_2) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) % (param_2 & 0xffffffff);
    }
    else {
      uVar4 = uVar4 % param_2;
    }
  }
code_r0x004cc9f1:
  *param_1 = uVar4;
  *(uint *)(param_1 + 1) = uVar3;
  return param_1;
}


