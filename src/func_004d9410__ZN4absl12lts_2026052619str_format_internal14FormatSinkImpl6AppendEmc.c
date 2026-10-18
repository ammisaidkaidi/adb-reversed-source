// Function: _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc
// Address: 004d9410
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc
               (undefined8 *param_1,ulong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    param_1[2] = param_1[2] + param_2;
    puVar4 = param_1 + 0x84;
    puVar2 = (undefined8 *)param_1[3];
    uVar3 = (long)puVar4 - (long)puVar2;
    uVar5 = param_2 - uVar3;
    if (uVar3 <= param_2 && uVar5 != 0) {
      puVar1 = param_1 + 4;
      if (puVar4 != puVar2) {
        func_0x0099bdb0(puVar2,param_3,uVar3);
        puVar4 = (undefined8 *)(uVar3 + param_1[3]);
        param_1[3] = puVar4;
      }
      (*(code *)param_1[1])(*param_1,puVar1,(long)puVar4 - (long)puVar1);
      param_1[3] = puVar1;
      puVar2 = puVar1;
      param_2 = uVar5;
      if (0x400 < uVar5) {
        do {
          param_2 = param_2 - 0x400;
          func_0x0099bdb0(puVar1,param_3,0x400);
          param_1[3] = param_1 + 0x84;
          (*(code *)param_1[1])(*param_1,puVar1,0x400);
          param_1[3] = puVar1;
        } while (0x400 < param_2);
      }
    }
    func_0x0099bdb0(puVar2,param_3,param_2);
    param_1[3] = param_1[3] + param_2;
  }
  return;
}


