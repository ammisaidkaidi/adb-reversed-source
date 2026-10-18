// Function: _Z10invoke_fdeP7fdeventj
// Address: 003d5110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z10invoke_fdeP7fdeventj(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003d5123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003d5133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            (*(undefined4 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x38),
             *(code **)(param_1 + 0x28));
  return;
}


