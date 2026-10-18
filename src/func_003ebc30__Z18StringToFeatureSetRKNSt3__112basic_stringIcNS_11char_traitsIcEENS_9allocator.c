// Function: _Z18StringToFeatureSetRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003ebc30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_Z18StringToFeatureSetRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
          (undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  byte bStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined5 uStack_2d;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = param_1;
  if ((*param_2 & 1) == 0) {
    if (*param_2 >> 1 != 0) goto code_r0x003ebc59;
  }
  else if (*(long *)(param_2 + 8) != 0) {
code_r0x003ebc59:
    bStack_30 = 2;
    uStack_2f = 0x2c;
    uStack_2e = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (param_1,param_2,&bStack_30);
    if ((bStack_30 & 1) != 0) {
      param_2 = (byte *)(CONCAT53(uStack_2d,CONCAT12(uStack_2e,CONCAT11(uStack_2f,bStack_30))) &
                        0xfffffffffffffffe);
      _ZdaPvSt11align_val_t();
      puVar5 = puStack_20;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
      return param_1;
    }
    goto code_r0x003ebcc5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
code_r0x003ebcc5:
  func_0x0099bd00();
  pbVar8 = (byte *)*puVar5;
  pbVar9 = (byte *)puVar5[1];
  if (pbVar8 != pbVar9) {
    pbVar4 = param_2 + 1;
    if ((*param_2 & 1) == 0) {
      uVar10 = (ulong)(*param_2 >> 1);
      pbVar7 = pbVar4;
    }
    else {
      uVar10 = *(ulong *)(param_2 + 8);
      pbVar7 = *(byte **)(param_2 + 0x10);
    }
    do {
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar3 == uVar10) {
        if ((bVar1 & 1) == 0) {
          pbVar6 = pbVar8 + 1;
        }
        else {
          pbVar6 = *(byte **)(pbVar8 + 0x10);
        }
        iVar2 = func_0x0099bf90(pbVar6,pbVar7,uVar10);
        if (iVar2 == 0) {
          if (pbVar8 == pbVar9) {
            return (undefined8 *)0x0;
          }
          if ((cRam0000000000a00730 == '\0') && (iVar2 = __cxa_guard_acquire(0xa00730), iVar2 != 0))
          {
            func_0x003eb760();
            __cxa_guard_release(0xa00730);
          }
          pbVar8 = pbRam0000000000a00720;
          if (pbRam0000000000a00718 == pbRam0000000000a00720) {
            return (undefined8 *)0x0;
          }
          pbVar9 = pbRam0000000000a00718;
          if ((*param_2 & 1) == 0) {
            uVar10 = (ulong)(*param_2 >> 1);
          }
          else {
            uVar10 = *(ulong *)(param_2 + 8);
            pbVar4 = *(byte **)(param_2 + 0x10);
          }
          goto code_r0x003ebddc;
        }
      }
      pbVar8 = pbVar8 + 0x18;
    } while (pbVar8 != pbVar9);
  }
  return (undefined8 *)0x0;
code_r0x003ebddc:
  do {
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar9 + 8);
    }
    if (uVar3 == uVar10) {
      if ((bVar1 & 1) == 0) {
        pbVar7 = pbVar9 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar9 + 0x10);
      }
      iVar2 = func_0x0099bf90(pbVar7,pbVar4,uVar10);
      pbVar7 = pbVar9;
      if (iVar2 == 0) break;
    }
    pbVar9 = pbVar9 + 0x18;
    pbVar7 = pbVar8;
  } while (pbVar9 != pbVar8);
  return (undefined8 *)(ulong)(pbVar7 != pbVar8);
}


