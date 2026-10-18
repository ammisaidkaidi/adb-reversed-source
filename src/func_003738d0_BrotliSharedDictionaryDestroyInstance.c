// Function: BrotliSharedDictionaryDestroyInstance
// Address: 003738d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void BrotliSharedDictionaryDestroyInstance(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x570);
    uVar1 = *(undefined8 *)(param_1 + 0x578);
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x548));
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x558));
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x560));
                    /* WARNING: Could not recover jumptable at 0x0037392a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}


