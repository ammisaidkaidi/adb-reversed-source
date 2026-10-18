// Function: _ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
// Address: 0036b400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE16__emplace_uniqueB8nn220000IJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
          (long *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  param_1 = (long *)*param_1;
  uVar1 = *param_2;
  uVar9 = (ulong)(int)uVar1;
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    uVar6 = 0;
  }
  else {
    uVar10 = uVar11 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar6 = uVar10 & uVar9;
    }
    else {
      uVar6 = uVar9;
      if (uVar11 <= uVar9) {
        if ((uVar9 | uVar11) >> 0x20 == 0) {
          uVar6 = (ulong)uVar1 % (uVar11 & 0xffffffff);
        }
        else {
          uVar6 = uVar9 % uVar11;
        }
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + uVar6 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (puVar12 = (ulong *)*puVar2; puVar12 != (ulong *)0x0; puVar12 = (ulong *)*puVar12) {
        uVar7 = puVar12[1];
        if (uVar7 == uVar9) {
          if ((uint)puVar12[2] == uVar1) {
            uVar8 = 0;
            goto code_r0x0036b74e;
          }
        }
        else {
          if ((uVar11 & uVar10) == 0) {
            uVar7 = uVar7 & uVar10;
          }
          else if (uVar11 <= uVar7) {
            if ((uVar7 | uVar11) >> 0x20 != 0) {
              if (uVar7 % uVar11 == uVar6) goto code_r0x0036b48a;
              break;
            }
            uVar7 = (uVar7 & 0xffffffff) % (uVar11 & 0xffffffff);
          }
          if (uVar7 != uVar6) break;
        }
code_r0x0036b48a:
      }
    }
  }
  auVar14 = _Znwm(0x18);
  uVar10 = auVar14._8_8_;
  puVar12 = auVar14._0_8_;
  *puVar12 = 0;
  puVar12[1] = uVar9;
  *(undefined4 *)(puVar12 + 2) = *param_3;
  if ((float)(param_1[3] + 1) <= (float)uVar11 * *(float *)(param_1 + 4)) goto code_r0x0036b6db;
  uVar6 = 1;
  if (2 < uVar11) {
    uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar6 = uVar6 | uVar11 * 2;
  fVar13 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar10 = (long)(fVar13 - 9.223372e+18) & (long)fVar13 >> 0x3f | (long)fVar13;
  if (uVar10 < uVar6) {
    uVar10 = uVar6;
  }
  auVar5._8_8_ = extraout_RDX;
  auVar5._0_8_ = uVar10;
  auVar14._8_8_ = extraout_RDX;
  auVar14._0_8_ = 2;
  if ((uVar10 != 1) && (auVar14 = auVar5, (uVar10 & uVar10 - 1) != 0)) {
    auVar14 = _ZNSt3__112__next_primeEm();
    uVar11 = param_1[1];
  }
  uVar10 = auVar14._8_8_;
  uVar6 = auVar14._0_8_;
  if (uVar11 < uVar6) {
code_r0x0036b5da:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar6);
    uVar10 = extraout_RDX_00;
  }
  else if (uVar6 < uVar11) {
    fVar13 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar7 = (long)fVar13 >> 0x3f;
    uVar10 = (long)(fVar13 - 9.223372e+18) & uVar7 | (long)fVar13;
    auVar15._8_8_ = uVar7;
    auVar15._0_8_ = uVar10;
    if ((uVar11 < 3) || ((uVar11 - 1 & uVar11) != 0)) {
      auVar15 = _ZNSt3__112__next_primeEm(uVar10);
    }
    else if (1 < uVar10) {
      lVar3 = 0x3f;
      if (uVar10 - 1 != 0) {
        for (; uVar10 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      auVar15._0_8_ = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
    }
    uVar10 = auVar15._8_8_;
    if (uVar6 <= auVar15._0_8_) {
      uVar6 = auVar15._0_8_;
    }
    if (uVar6 < uVar11) goto code_r0x0036b5da;
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar6 = uVar11 - 1 & uVar9;
  }
  else {
    uVar6 = uVar9;
    if (uVar11 <= uVar9) {
      if ((uVar9 | uVar11) >> 0x20 == 0) {
        uVar10 = (ulong)uVar1 % (uVar11 & 0xffffffff);
        uVar6 = uVar10;
      }
      else {
        uVar10 = uVar9 % uVar11;
        uVar6 = uVar10;
      }
    }
  }
code_r0x0036b6db:
  lVar3 = *param_1;
  puVar4 = *(ulong **)(lVar3 + uVar6 * 8);
  if (puVar4 == (ulong *)0x0) {
    uVar10 = param_1[2];
    *puVar12 = uVar10;
    param_1[2] = (long)puVar12;
    *(long **)(lVar3 + uVar6 * 8) = param_1 + 2;
    if (*puVar12 != 0) {
      uVar9 = *(ulong *)(*puVar12 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        if ((uVar9 | uVar11) >> 0x20 == 0) {
          uVar9 = (uVar9 & 0xffffffff) % (uVar11 & 0xffffffff);
          uVar10 = uVar9;
        }
        else {
          uVar9 = uVar9 % uVar11;
          uVar10 = uVar9;
        }
      }
      *(ulong **)(*param_1 + uVar9 * 8) = puVar12;
    }
  }
  else {
    *puVar12 = *puVar4;
    *puVar4 = (ulong)puVar12;
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)(uVar10 >> 8),1);
code_r0x0036b74e:
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = puVar12;
  return auVar16;
}


