// Function: BrotliDecoderAttachDictionary
// Address: 0036cda0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 BrotliDecoderAttachDictionary(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar6 = 0;
  if (*param_1 == 0) {
    uVar1 = **(uint **)(param_1 + 200);
    uVar8 = (ulong)uVar1;
    iVar3 = BrotliSharedDictionaryAttach();
    if (iVar3 != 0) {
      puVar4 = *(uint **)(param_1 + 200);
      if (uVar1 < *puVar4) {
        do {
          if (*param_1 != 0) {
            return 0;
          }
          uVar6 = *(undefined8 *)(puVar4 + uVar8 * 2 + 2);
          uVar2 = *(undefined8 *)(puVar4 + uVar8 * 2 + 0x20);
          piVar5 = *(int **)(param_1 + 0xca);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)(**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10),0x1e0);
            if (piVar5 == (int *)0x0) {
              return 0;
            }
            piVar5[0] = 0;
            piVar5[1] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[0x36] = -1;
            piVar5[0x26] = 0;
            *(int **)(param_1 + 0xca) = piVar5;
          }
          if ((long)*piVar5 == 0xf) {
            return 0;
          }
          *(undefined8 *)(piVar5 + (long)*piVar5 * 2 + 6) = uVar2;
          iVar3 = *piVar5;
          *piVar5 = iVar3 + 1;
          iVar7 = (int)uVar6 + piVar5[1];
          piVar5[1] = iVar7;
          piVar5[(long)iVar3 + 0x27] = iVar7;
          uVar8 = uVar8 + 1;
          puVar4 = *(uint **)(param_1 + 200);
        } while (uVar8 < *puVar4);
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


