// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueIiEEmRKT_
// Address: 0040dc20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueIiEEmRKT_
          (long *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  long alStack_28 [3];
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_1[1];
  uVar6 = 0;
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar2 = *param_2;
    uVar7 = (ulong)(int)uVar2;
    uVar1 = uVar3 - 1;
    if ((uVar3 & uVar1) == 0) {
      uVar8 = uVar1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        if ((uVar7 | uVar3) >> 0x20 == 0) {
          uVar8 = (ulong)uVar2 % (uVar3 & 0xffffffff);
        }
        else {
          uVar8 = uVar7 % uVar3;
        }
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if (puVar10 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      for (puVar10 = (undefined8 *)*puVar10; uVar6 = 0, puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        uVar9 = puVar10[1];
        if (uVar9 == uVar7) {
          if (*(uint *)(puVar10 + 2) == uVar2) {
            func_0x003f1bd0(alStack_28,param_1,puVar10);
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
          if ((uVar3 & uVar1) == 0) {
            uVar9 = uVar9 & uVar1;
          }
          else if (uVar3 <= uVar9) {
            if ((uVar9 | uVar3) >> 0x20 == 0) {
              uVar9 = (uVar9 & 0xffffffff) % (uVar3 & 0xffffffff);
            }
            else {
              uVar9 = uVar9 % uVar3;
            }
          }
          uVar6 = 0;
          if (uVar9 != uVar8) break;
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


