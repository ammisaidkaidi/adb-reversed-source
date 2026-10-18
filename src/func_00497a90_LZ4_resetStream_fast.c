// Function: LZ4_resetStream_fast
// Address: 00497a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_resetStream_fast(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x4014) == 2) {
    uVar1 = *(uint *)(param_1 + 0x4010);
    if (0x40000000 < uVar1) goto code_r0x00497abd;
  }
  else {
    if (*(int *)(param_1 + 0x4014) != 0) {
code_r0x00497abd:
      func_0x0099bdb0(param_1,0,0x4000);
      *(undefined8 *)(param_1 + 0x4010) = 0;
      goto code_r0x00497ae8;
    }
    uVar1 = *(uint *)(param_1 + 0x4010);
  }
  if (uVar1 != 0) {
    *(uint *)(param_1 + 0x4010) = uVar1 + 0x10000;
  }
code_r0x00497ae8:
  *(undefined4 *)(param_1 + 0x4018) = 0;
  *(undefined8 *)(param_1 + 0x4000) = 0;
  *(undefined8 *)(param_1 + 0x4008) = 0;
  return;
}


