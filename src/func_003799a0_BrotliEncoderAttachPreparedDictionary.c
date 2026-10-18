// Function: BrotliEncoderAttachPreparedDictionary
// Address: 003799a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 BrotliEncoderAttachPreparedDictionary(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *param_2;
  if (iVar1 == -0x2143121e) {
    param_2 = *(int **)(param_2 + 8);
    iVar1 = *param_2;
  }
  if (iVar1 != -0x2143121d) {
    if (iVar1 == -0x2143121f) {
      if (((*(int *)(param_1 + 0x270) == 0) && (*(char *)(param_1 + 0x274) == '\x01')) &&
         (*(undefined **)(*(long *)(param_1 + 0x2b8) + 0x18) == &DAT_001b61b0)) {
        bVar3 = *(undefined **)(*(long *)(param_1 + 0x2b8) + 0x20) == &DAT_001c61b0;
      }
      else {
        bVar3 = false;
      }
      bVar4 = false;
      if (param_2[0x88] == 0) {
        if ((char)param_2[0x89] == '\x01') {
          if (*(undefined **)(*(long *)(param_2 + 0x9a) + 0x18) == &DAT_001b61b0) {
            bVar4 = *(undefined **)(*(long *)(param_2 + 0x9a) + 0x20) == &DAT_001c61b0;
            iVar1 = *(int *)(param_1 + 0x1b3c);
          }
          else {
            bVar4 = false;
            iVar1 = *(int *)(param_1 + 0x1b3c);
          }
        }
        else {
          bVar4 = false;
          iVar1 = *(int *)(param_1 + 0x1b3c);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1b3c);
      }
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = param_2[0x148];
      if (*(int *)(param_1 + 0x570) < param_2[0x148]) {
        iVar1 = *(int *)(param_1 + 0x570);
      }
      *(int *)(param_1 + 0x570) = iVar1;
      if (*(long *)(param_2 + 2) != 0) {
        uVar2 = 0;
        do {
          iVar1 = func_0x003bb4d0(param_1 + 0x58,*(undefined8 *)(param_2 + uVar2 * 2 + 6));
          if (iVar1 == 0) {
            return 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulong *)(param_2 + 2));
      }
      if (bVar4) {
        return 1;
      }
      if (bVar3) {
        func_0x0099bda0(param_1 + 0x270,param_2 + 0x88,0x300);
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        return 1;
      }
      return 0;
    }
    if (iVar1 != -0x21431220) {
      return 0;
    }
  }
  iVar1 = func_0x003bb4d0(param_1 + 0x58,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}


