// Function: LZ4_setStreamDecode
// Address: 004a0f20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 LZ4_setStreamDecode(undefined8 *param_1,long param_2,int param_3)

{
  param_1[3] = (long)param_3;
  param_1[1] = param_2 + param_3;
  *param_1 = 0;
  param_1[2] = 0;
  return 1;
}


