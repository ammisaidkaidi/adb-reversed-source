// Function: BrotliDecoderDestroyInstance
// Address: 0036cd60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void BrotliDecoderDestroyInstance(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00375160();
                    /* WARNING: Could not recover jumptable at 0x0036cd92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}


