// Function: _ZN4absl12lts_2026052619str_format_internal14ConvertBoolArgEbPNS1_14FormatSinkImplE
// Address: 004d66e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal14ConvertBoolArgEbPNS1_14FormatSinkImplE
          (int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    param_2[2] = param_2[2] + 5;
    puVar2 = (undefined4 *)param_2[3];
    if (5 < (ulong)((long)param_2 + (0x420 - (long)puVar2))) {
      *(undefined1 *)(puVar2 + 1) = 0x65;
      *puVar2 = 0x736c6166;
      param_2[3] = param_2[3] + 5;
      return 1;
    }
    puVar1 = param_2 + 4;
    (*(code *)param_2[1])(*param_2,puVar1,(long)puVar2 - (long)puVar1);
    param_2[3] = puVar1;
    uVar5 = *param_2;
    puVar4 = &UNK_00157545;
    uVar3 = 5;
  }
  else {
    param_2[2] = param_2[2] + 4;
    puVar2 = (undefined4 *)param_2[3];
    if (4 < (ulong)((long)param_2 + (0x420 - (long)puVar2))) {
      *puVar2 = 0x65757274;
      param_2[3] = param_2[3] + 4;
      return 1;
    }
    puVar1 = param_2 + 4;
    (*(code *)param_2[1])(*param_2,puVar1,(long)puVar2 - (long)puVar1);
    param_2[3] = puVar1;
    uVar5 = *param_2;
    puVar4 = &UNK_001703d2;
    uVar3 = 4;
  }
  (*(code *)param_2[1])(uVar5,puVar4,uVar3);
  return 1;
}


