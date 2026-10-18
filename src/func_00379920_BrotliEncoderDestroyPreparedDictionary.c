// Function: BrotliEncoderDestroyPreparedDictionary
// Address: 00379920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void BrotliEncoderDestroyPreparedDictionary(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if ((param_1 == (int *)0x0) || (*param_1 != -0x2143121e)) {
    return;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if (iVar1 == -0x2143121f) {
      func_0x003bb690(param_1 + 2);
      func_0x003bd120(param_1 + 2,*(undefined8 *)(param_1 + 8));
      param_3 = extraout_RDX_00;
    }
    else if (iVar1 == -0x2143121d) {
      func_0x003bb4b0(param_1 + 2);
      param_3 = extraout_RDX;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003bd198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))(*(undefined8 *)(param_1 + 6),param_1,param_3,*(code **)(param_1 + 4));
  return;
}


