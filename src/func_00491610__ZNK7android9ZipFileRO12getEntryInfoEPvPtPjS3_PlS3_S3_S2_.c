// Function: _ZNK7android9ZipFileRO12getEntryInfoEPvPtPjS3_PlS3_S3_S2_
// Address: 00491610
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK7android9ZipFileRO12getEntryInfoEPvPtPjS3_PlS3_S3_S2_
          (undefined8 param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
          undefined2 *param_9)

{
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = *param_2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_2 + 0x1a);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_2 + 0x18);
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(param_2 + 0xc);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = *(undefined4 *)(param_2 + 2);
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = *(undefined4 *)(param_2 + 8);
  }
  if (param_9 != (undefined2 *)0x0) {
    *param_9 = param_2[0x16];
  }
  return 1;
}


