// Function: _ZN7android8ResTable12getIdmapInfoEPKvmPjS3_S3_PNS_7String8ES5_
// Address: 0043c2d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7android8ResTable12getIdmapInfoEPKvmPjS3_S3_PNS_7String8ES5_
                (int *param_1,ulong param_2,undefined4 *param_3,int *param_4,int *param_5,
                long param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  int *unaff_RBX;
  ulong uVar3;
  undefined8 uVar4;
  
  if (((ulong)param_1 & 3) == 0) {
    if (param_2 < 0x210) {
      uVar3 = 0;
      __android_log_print(5,&UNK_0015b3df,&UNK_001599e0,param_2);
    }
    else {
      iVar1 = *param_1;
      if (iVar1 == 0x504d4449) {
        iVar1 = param_1[1];
        if (iVar1 == 0xb) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0xb;
          }
          if (param_4 != (int *)0x0) {
            *param_4 = param_1[2];
          }
          if (param_5 != (int *)0x0) {
            *param_5 = param_1[3];
          }
          if (param_6 != 0) {
            _ZN7android7String85setToEPKc(param_6,param_1 + 4);
            unaff_RBX = param_1;
          }
          uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
          if (param_7 != 0) {
            _ZN7android7String85setToEPKc(param_7,param_1 + 0x44);
          }
          goto code_r0x0043c3d8;
        }
        puVar2 = &UNK_00186a3d;
        uVar4 = 0xb;
      }
      else {
        puVar2 = &UNK_0016b2cf;
        uVar4 = 0x504d4449;
      }
      uVar3 = 0;
      __android_log_print(5,&UNK_0015b3df,puVar2,iVar1,uVar4);
    }
  }
  else {
    uVar3 = 0;
    __android_log_print(6,&UNK_0015b3df,&UNK_00157bc8);
  }
code_r0x0043c3d8:
  return uVar3 & 0xffffffff;
}


