// Function: _ZN7android8ResTable3addEPNS_5AssetEib
// Address: 00434c60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android8ResTable3addEPNS_5AssetEib
          (undefined8 param_1,long *param_2,undefined4 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,1);
  if (lVar1 == 0) {
    __android_log_print(5,&UNK_0015b3df,&UNK_001869a8);
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar2 = _ZN7android8ResTable11addInternalEPKvmS2_mbibb
                      (param_1,lVar1,uVar2,0,0,0,param_3,param_4,0);
  }
  return uVar2;
}


