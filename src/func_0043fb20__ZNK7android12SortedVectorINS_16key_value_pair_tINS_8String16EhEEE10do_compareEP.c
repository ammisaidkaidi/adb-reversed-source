// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE10do_compareEPKvS6_
// Address: 0043fb20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE10do_compareEPKvS6_
              (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_3;
  uVar5 = _ZNK7android8String164sizeEv(param_3);
  uVar2 = *param_2;
  uVar6 = _ZNK7android8String164sizeEv(param_2);
  iVar3 = strzcmp16(uVar1,uVar5,uVar2,uVar6);
  uVar1 = *param_2;
  uVar5 = _ZNK7android8String164sizeEv(param_2);
  uVar2 = *param_3;
  uVar6 = _ZNK7android8String164sizeEv(param_3);
  iVar4 = strzcmp16(uVar1,uVar5,uVar2,uVar6);
  return (iVar4 >> 0x1f) - (iVar3 >> 0x1f);
}


