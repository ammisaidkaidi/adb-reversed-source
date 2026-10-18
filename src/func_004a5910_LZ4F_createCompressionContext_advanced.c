// Function: LZ4F_createCompressionContext_advanced
// Address: 004a5910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * LZ4F_createCompressionContext_advanced(undefined4 param_1)

{
  undefined8 *puVar1;
  code *in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (in_stack_00000010 == (code *)0x0) {
    if (in_stack_00000008 != (code *)0x0) {
      puVar1 = (undefined8 *)(*in_stack_00000008)(in_stack_00000020,0xd8);
      if (puVar1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[0x1a] = 0;
      goto code_r0x004a59b9;
    }
    puVar1 = (undefined8 *)func_0x0099c4d0(1,0xd8);
  }
  else {
    puVar1 = (undefined8 *)(*in_stack_00000010)(in_stack_00000020,0xd8);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
code_r0x004a59b9:
  puVar1[2] = in_stack_00000018;
  puVar1[3] = in_stack_00000020;
  *puVar1 = in_stack_00000008;
  puVar1[1] = in_stack_00000010;
  *(undefined4 *)(puVar1 + 0xb) = param_1;
  *(undefined4 *)((long)puVar1 + 0x5c) = 0;
  return puVar1;
}


