// Function: _ZN7android12IdmapEntries5setToEPKvm
// Address: 0043d8a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android12IdmapEntries5setToEPKvm(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if (((ulong)param_2 & 3) == 0) {
    if (param_3 < 8) {
      __android_log_print(6,&UNK_0015b3df,&UNK_001838b5,param_3);
    }
    else {
      if ((ushort)(param_2[1] - 0x100) < 0xff01 || (ushort)(*param_2 - 0x100) < 0xff01) {
        uVar2 = (ulong)param_2[1];
        puVar1 = &UNK_001709a9;
        param_3 = (ulong)*param_2;
      }
      else {
        uVar2 = (ulong)param_2[2];
        if (uVar2 * 4 + 8 <= param_3) {
          *param_1 = param_2;
          return 0;
        }
        puVar1 = &UNK_00184e2f;
      }
      __android_log_print(6,&UNK_0015b3df,puVar1,param_3,uVar2);
    }
  }
  else {
    __android_log_print(6,&UNK_0015b3df,&UNK_00178dfe);
  }
  return 0x80000000;
}


