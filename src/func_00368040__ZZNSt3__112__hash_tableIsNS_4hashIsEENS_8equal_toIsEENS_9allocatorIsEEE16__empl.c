// Function: _ZZNSt3__112__hash_tableIsNS_4hashIsEENS_8equal_toIsEENS_9allocatorIsEEE16__emplace_uniqueB8nn220000IJRKsEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIsPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
// Address: 00368040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__112__hash_tableIsNS_4hashIsEENS_8equal_toIsEENS_9allocatorIsEEE16__emplace_uniqueB8nn220000IJRKsEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIsPvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
          (long *param_1,short *param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  param_1 = (long *)*param_1;
  uVar8 = (ulong)*param_2;
  uVar10 = param_1[1];
  if (uVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      uVar5 = uVar9 & uVar8;
    }
    else {
      uVar5 = uVar8;
      if (uVar10 <= uVar8) {
        if ((uVar8 | uVar10) >> 0x20 == 0) {
          uVar5 = (uVar8 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar5 = uVar8 % uVar10;
        }
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + uVar5 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      for (puVar11 = (ulong *)*puVar1; puVar11 != (ulong *)0x0; puVar11 = (ulong *)*puVar11) {
        uVar6 = puVar11[1];
        if (uVar6 == uVar8) {
          if ((short)puVar11[2] == *param_2) {
            uVar7 = 0;
            goto code_r0x00368391;
          }
        }
        else {
          if ((uVar10 & uVar9) == 0) {
            uVar6 = uVar6 & uVar9;
          }
          else if (uVar10 <= uVar6) {
            if ((uVar6 | uVar10) >> 0x20 != 0) {
              if (uVar6 % uVar10 == uVar5) goto code_r0x003680cb;
              break;
            }
            uVar6 = (uVar6 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          if (uVar6 != uVar5) break;
        }
code_r0x003680cb:
      }
    }
  }
  auVar13 = _Znwm(0x18);
  uVar9 = auVar13._8_8_;
  puVar11 = auVar13._0_8_;
  *puVar11 = 0;
  puVar11[1] = uVar8;
  *(undefined2 *)(puVar11 + 2) = *param_3;
  if ((float)(param_1[3] + 1) <= (float)uVar10 * *(float *)(param_1 + 4)) goto code_r0x0036831e;
  uVar5 = 1;
  if (2 < uVar10) {
    uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar5 = uVar5 | uVar10 * 2;
  fVar12 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar9 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
  if (uVar9 < uVar5) {
    uVar9 = uVar5;
  }
  auVar4._8_8_ = extraout_RDX;
  auVar4._0_8_ = uVar9;
  auVar13._8_8_ = extraout_RDX;
  auVar13._0_8_ = 2;
  if ((uVar9 != 1) && (auVar13 = auVar4, (uVar9 & uVar9 - 1) != 0)) {
    auVar13 = _ZNSt3__112__next_primeEm();
    uVar10 = param_1[1];
  }
  uVar9 = auVar13._8_8_;
  uVar5 = auVar13._0_8_;
  if (uVar10 < uVar5) {
code_r0x0036821d:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar5);
    uVar9 = extraout_RDX_00;
  }
  else if (uVar5 < uVar10) {
    fVar12 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar6 = (long)fVar12 >> 0x3f;
    uVar9 = (long)(fVar12 - 9.223372e+18) & uVar6 | (long)fVar12;
    auVar14._8_8_ = uVar6;
    auVar14._0_8_ = uVar9;
    if ((uVar10 < 3) || ((uVar10 - 1 & uVar10) != 0)) {
      auVar14 = _ZNSt3__112__next_primeEm(uVar9);
    }
    else if (1 < uVar9) {
      lVar2 = 0x3f;
      if (uVar9 - 1 != 0) {
        for (; uVar9 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      auVar14._0_8_ = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
    }
    uVar9 = auVar14._8_8_;
    if (uVar5 <= auVar14._0_8_) {
      uVar5 = auVar14._0_8_;
    }
    if (uVar5 < uVar10) goto code_r0x0036821d;
  }
  uVar10 = param_1[1];
  if ((uVar10 & uVar10 - 1) == 0) {
    uVar5 = uVar10 - 1 & uVar8;
  }
  else {
    uVar5 = uVar8;
    if (uVar10 <= uVar8) {
      if ((uVar8 | uVar10) >> 0x20 == 0) {
        uVar9 = (uVar8 & 0xffffffff) % (uVar10 & 0xffffffff);
        uVar5 = uVar9;
      }
      else {
        uVar9 = uVar8 % uVar10;
        uVar5 = uVar9;
      }
    }
  }
code_r0x0036831e:
  lVar2 = *param_1;
  puVar3 = *(ulong **)(lVar2 + uVar5 * 8);
  if (puVar3 == (ulong *)0x0) {
    uVar9 = param_1[2];
    *puVar11 = uVar9;
    param_1[2] = (long)puVar11;
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    if (*puVar11 != 0) {
      uVar8 = *(ulong *)(*puVar11 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        if ((uVar8 | uVar10) >> 0x20 == 0) {
          uVar8 = (uVar8 & 0xffffffff) % (uVar10 & 0xffffffff);
          uVar9 = uVar8;
        }
        else {
          uVar8 = uVar8 % uVar10;
          uVar9 = uVar8;
        }
      }
      *(ulong **)(*param_1 + uVar8 * 8) = puVar11;
    }
  }
  else {
    *puVar11 = *puVar3;
    *puVar3 = (ulong)puVar11;
  }
  param_1[3] = param_1[3] + 1;
  uVar7 = CONCAT71((int7)(uVar9 >> 8),1);
code_r0x00368391:
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = puVar11;
  return auVar15;
}


