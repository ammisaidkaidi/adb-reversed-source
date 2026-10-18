// Function: _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
// Address: 003ebcd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
               (undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar7 = (byte *)*param_1;
  pbVar8 = (byte *)param_1[1];
  if (pbVar7 != pbVar8) {
    pbVar4 = param_2 + 1;
    if ((*param_2 & 1) == 0) {
      uVar9 = (ulong)(*param_2 >> 1);
      pbVar6 = pbVar4;
    }
    else {
      uVar9 = *(ulong *)(param_2 + 8);
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
    do {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar7 + 8);
      }
      if (uVar3 == uVar9) {
        if ((bVar1 & 1) == 0) {
          pbVar5 = pbVar7 + 1;
        }
        else {
          pbVar5 = *(byte **)(pbVar7 + 0x10);
        }
        iVar2 = func_0x0099bf90(pbVar5,pbVar6,uVar9);
        if (iVar2 == 0) {
          if (pbVar7 == pbVar8) {
            return false;
          }
          if ((cRam0000000000a00730 == '\0') && (iVar2 = __cxa_guard_acquire(0xa00730), iVar2 != 0))
          {
            func_0x003eb760();
            __cxa_guard_release(0xa00730);
          }
          pbVar7 = pbRam0000000000a00720;
          if (pbRam0000000000a00718 == pbRam0000000000a00720) {
            return false;
          }
          pbVar8 = pbRam0000000000a00718;
          if ((*param_2 & 1) == 0) {
            uVar9 = (ulong)(*param_2 >> 1);
          }
          else {
            uVar9 = *(ulong *)(param_2 + 8);
            pbVar4 = *(byte **)(param_2 + 0x10);
          }
          goto code_r0x003ebddc;
        }
      }
      pbVar7 = pbVar7 + 0x18;
    } while (pbVar7 != pbVar8);
  }
  return false;
code_r0x003ebddc:
  do {
    bVar1 = *pbVar8;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar8 + 8);
    }
    if (uVar3 == uVar9) {
      if ((bVar1 & 1) == 0) {
        pbVar6 = pbVar8 + 1;
      }
      else {
        pbVar6 = *(byte **)(pbVar8 + 0x10);
      }
      iVar2 = func_0x0099bf90(pbVar6,pbVar4,uVar9);
      pbVar6 = pbVar8;
      if (iVar2 == 0) break;
    }
    pbVar8 = pbVar8 + 0x18;
    pbVar6 = pbVar7;
  } while (pbVar8 != pbVar7);
  return pbVar6 != pbVar7;
}


