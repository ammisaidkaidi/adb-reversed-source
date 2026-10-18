// Function: LZ4F_createDecompressionContext_advanced
// Address: 004a68a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * LZ4F_createDecompressionContext_advanced(undefined4 param_1)

{
  undefined8 *puVar1;
  code *in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (in_stack_00000010 == (code *)0x0) {
    if (in_stack_00000008 != (code *)0x0) {
      puVar1 = (undefined8 *)(*in_stack_00000008)(in_stack_00000020,0x120);
      if (puVar1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      func_0x0099bdb0(puVar1,0,0x120);
      goto code_r0x004a6904;
    }
    puVar1 = (undefined8 *)func_0x0099c4d0(1,0x120);
  }
  else {
    puVar1 = (undefined8 *)(*in_stack_00000010)(in_stack_00000020,0x120);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
code_r0x004a6904:
  puVar1[2] = in_stack_00000018;
  puVar1[3] = in_stack_00000020;
  *puVar1 = in_stack_00000008;
  puVar1[1] = in_stack_00000010;
  *(undefined4 *)(puVar1 + 8) = param_1;
  return puVar1;
}


