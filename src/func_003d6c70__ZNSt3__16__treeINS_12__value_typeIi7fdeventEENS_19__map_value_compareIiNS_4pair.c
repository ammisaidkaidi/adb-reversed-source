// Function: _ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
// Address: 003d6c70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
          (undefined8 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar7 = puVar2;
  do {
    if (*param_2 < *(int *)(puVar7 + 4)) {
      puVar7 = (undefined8 *)*puVar7;
    }
    else {
      if (*param_2 == *(int *)(puVar7 + 4)) {
        if (puVar7 != param_1 + 1) {
          puVar6 = puVar7;
          puVar3 = (undefined8 *)puVar7[1];
          if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
            do {
              puVar4 = (undefined8 *)puVar6[2];
              bVar8 = puVar6 != (undefined8 *)*puVar4;
              puVar6 = puVar4;
            } while (bVar8);
          }
          else {
            do {
              puVar4 = puVar3;
              puVar3 = (undefined8 *)*puVar4;
            } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
          }
          if ((undefined8 *)*param_1 == puVar7) {
            *param_1 = puVar4;
          }
          param_1[2] = param_1[2] + -1;
          func_0x003d6d50(puVar2,puVar7);
          puVar5 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar5;
          if (*(int *)(puVar7 + 6) != -1) {
            func_0x0099bd10();
          }
          *puVar5 = uVar1;
          _ZdaPvSt11align_val_t(puVar7,0x68);
          return 1;
        }
        return 0;
      }
      puVar7 = (undefined8 *)puVar7[1];
    }
  } while (puVar7 != (undefined8 *)0x0);
  return 0;
}


