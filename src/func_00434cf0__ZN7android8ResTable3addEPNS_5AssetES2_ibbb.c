// Function: _ZN7android8ResTable3addEPNS_5AssetES2_ibbb
// Address: 00434cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android8ResTable3addEPNS_5AssetES2_ibbb
          (undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,undefined1 param_5,
          undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,1);
  if (lVar1 == 0) {
    puVar5 = &UNK_001869a8;
code_r0x00434db9:
    __android_log_print(5,&UNK_0015b3df,puVar5);
    uVar3 = 0x80000000;
  }
  else {
    if (param_3 == (long *)0x0) {
      uVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_3 + 0x28))(param_3,1);
      if (lVar2 == 0) {
        puVar5 = &UNK_0018b0e0;
        goto code_r0x00434db9;
      }
      uVar3 = (**(code **)(*param_3 + 0x38))(param_3);
    }
    uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar3 = _ZN7android8ResTable11addInternalEPKvmS2_mbibb
                      (param_1,lVar1,uVar4,lVar2,uVar3,param_6,param_4,param_5,param_7);
  }
  return uVar3;
}


