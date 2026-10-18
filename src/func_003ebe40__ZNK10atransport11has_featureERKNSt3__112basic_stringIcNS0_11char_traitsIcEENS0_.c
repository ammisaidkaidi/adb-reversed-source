// Function: _ZNK10atransport11has_featureERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003ebe40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK10atransport11has_featureERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  bool bVar8;
  
  pbVar6 = *(byte **)(param_1 + 0xd0);
  pbVar2 = *(byte **)(param_1 + 0xd8);
  if (pbVar6 == pbVar2) {
    bVar8 = false;
  }
  else {
    if ((*param_2 & 1) == 0) {
      uVar7 = (ulong)(*param_2 >> 1);
      param_2 = param_2 + 1;
    }
    else {
      uVar7 = *(ulong *)(param_2 + 8);
      param_2 = *(byte **)(param_2 + 0x10);
    }
    do {
      bVar1 = *pbVar6;
      if ((bVar1 & 1) == 0) {
        uVar4 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar4 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar4 == uVar7) {
        if ((bVar1 & 1) == 0) {
          pbVar5 = pbVar6 + 1;
        }
        else {
          pbVar5 = *(byte **)(pbVar6 + 0x10);
        }
        iVar3 = func_0x0099bf90(pbVar5,param_2,uVar7);
        pbVar5 = pbVar6;
        if (iVar3 == 0) break;
      }
      pbVar6 = pbVar6 + 0x18;
      pbVar5 = pbVar2;
    } while (pbVar6 != pbVar2);
    bVar8 = pbVar5 != pbVar2;
  }
  return bVar8;
}


