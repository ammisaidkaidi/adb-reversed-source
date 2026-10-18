// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueImEEmRKT_
// Address: 0040ae70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueImEEmRKT_
          (long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long alStack_28 [3];
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_1[1];
  uVar6 = 0;
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar1 = uVar2 - 1;
    if ((uVar2 & uVar1) == 0) {
      uVar7 = uVar3 & uVar1;
    }
    else {
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        if ((uVar3 | uVar2) >> 0x20 == 0) {
          uVar7 = (uVar3 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar7 = uVar3 % uVar2;
        }
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + uVar7 * 8);
    if (puVar9 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      for (puVar9 = (undefined8 *)*puVar9; uVar6 = 0, puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        uVar8 = puVar9[1];
        if (uVar8 == uVar3) {
          if (puVar9[2] == uVar3) {
            func_0x003f1bd0(alStack_28,param_1,puVar9);
            lVar5 = alStack_28[0];
            alStack_28[0] = 0;
            if (lVar5 != 0) {
              _ZdaPvSt11align_val_t(lVar5,0x20);
            }
            uVar6 = 1;
            break;
          }
        }
        else {
          if ((uVar2 & uVar1) == 0) {
            uVar8 = uVar8 & uVar1;
          }
          else if (uVar2 <= uVar8) {
            if ((uVar8 | uVar2) >> 0x20 == 0) {
              uVar8 = (uVar8 & 0xffffffff) % (uVar2 & 0xffffffff);
            }
            else {
              uVar8 = uVar8 % uVar2;
            }
          }
          uVar6 = 0;
          if (uVar8 != uVar7) break;
        }
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_10) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return uVar6;
}


