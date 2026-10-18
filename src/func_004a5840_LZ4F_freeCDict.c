// Function: LZ4F_freeCDict
// Address: 004a5840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004a58b6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004a5872: Changing call to branch */

void LZ4F_freeCDict(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x0099c1f0;
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      func_0x0099c1f0(*(long *)(param_1 + 0x28));
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(uVar1);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x0099c1f0;
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18));
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  }
  lVar2 = param_1;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a58d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18),param_1);
    return;
  }
code_r0x0099c1f0:
  free(lVar2);
  return;
}


