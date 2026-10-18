// Function: _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
// Address: 00362d80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
               (long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x0032fc40();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = _Znwm(param_2 * 8);
  }
  lVar1 = *param_1;
  *param_1 = lVar3;
  if (lVar1 != 0) {
    _ZdaPvSt11align_val_t(lVar1,param_1[1] << 3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = (ulong)((uint)param_2 & 3);
    if (3 < param_2) {
      uVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
        *(undefined8 *)(*param_1 + 8 + uVar5 * 8) = 0;
        *(undefined8 *)(*param_1 + 0x10 + uVar5 * 8) = 0;
        *(undefined8 *)(*param_1 + 0x18 + uVar5 * 8) = 0;
        uVar5 = uVar5 + 4;
        if ((param_2 & 0xfffffffffffffffc) == uVar5) goto joined_r0x00362e2b;
      } while( true );
    }
    uVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00362e2b:
    } while (uVar4 != 0);
    puVar7 = (undefined8 *)param_1[2];
    if (puVar7 != (undefined8 *)0x0) {
      uVar5 = puVar7[1];
      uVar4 = param_2 - 1;
      if ((param_2 & uVar4) == 0) {
        uVar5 = uVar5 & uVar4;
      }
      else if (param_2 <= uVar5) {
        if ((uVar5 | param_2) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) % (param_2 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 % param_2;
        }
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      puVar8 = (undefined8 *)*puVar7;
      while (puVar8 != (undefined8 *)0x0) {
        uVar6 = puVar8[1];
        if ((param_2 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (param_2 <= uVar6) {
          if ((uVar6 | param_2) >> 0x20 == 0) {
            uVar6 = (uVar6 & 0xffffffff) % (param_2 & 0xffffffff);
          }
          else {
            uVar6 = uVar6 % param_2;
          }
        }
        if (uVar6 != uVar5) {
          if (*(long *)(*param_1 + uVar6 * 8) == 0) {
            *(undefined8 **)(*param_1 + uVar6 * 8) = puVar7;
            uVar5 = uVar6;
          }
          else {
            *puVar7 = *puVar8;
            *puVar8 = **(undefined8 **)(*param_1 + uVar6 * 8);
            **(undefined8 **)(*param_1 + uVar6 * 8) = puVar8;
            puVar8 = puVar7;
          }
        }
        puVar7 = puVar8;
        puVar8 = (undefined8 *)*puVar7;
      }
    }
  }
  return;
}


