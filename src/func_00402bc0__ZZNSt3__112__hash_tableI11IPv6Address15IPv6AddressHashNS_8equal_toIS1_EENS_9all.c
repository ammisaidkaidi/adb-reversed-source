// Function: _ZZNSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE16__emplace_uniqueB8nn220000IJRKS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
// Address: 00402bc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE16__emplace_uniqueB8nn220000IJRKS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
          (long *param_1,char *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  param_1 = (long *)*param_1;
  uVar5 = _ZNSt3__113__hash_memoryEPKvm(param_2,0x10);
  uVar9 = param_1[1];
  if (uVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      uVar6 = uVar7 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar9 <= uVar5) {
        if ((uVar5 | uVar9) >> 0x20 == 0) {
          uVar6 = (uVar5 & 0xffffffff) % (uVar9 & 0xffffffff);
        }
        else {
          uVar6 = uVar5 % uVar9;
        }
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + uVar6 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      for (puVar11 = (ulong *)*puVar1; puVar11 != (ulong *)0x0; puVar11 = (ulong *)*puVar11) {
        uVar10 = puVar11[1];
        if (uVar10 == uVar5) {
          auVar15 = *(undefined1 (*) [16])(puVar11 + 2);
          auVar14[0] = -(*param_2 == auVar15[0]);
          auVar14[1] = -(param_2[1] == auVar15[1]);
          auVar14[2] = -(param_2[2] == auVar15[2]);
          auVar14[3] = -(param_2[3] == auVar15[3]);
          auVar14[4] = -(param_2[4] == auVar15[4]);
          auVar14[5] = -(param_2[5] == auVar15[5]);
          auVar14[6] = -(param_2[6] == auVar15[6]);
          auVar14[7] = -(param_2[7] == auVar15[7]);
          auVar14[8] = -(param_2[8] == auVar15[8]);
          auVar14[9] = -(param_2[9] == auVar15[9]);
          auVar14[10] = -(param_2[10] == auVar15[10]);
          auVar14[0xb] = -(param_2[0xb] == auVar15[0xb]);
          auVar14[0xc] = -(param_2[0xc] == auVar15[0xc]);
          auVar14[0xd] = -(param_2[0xd] == auVar15[0xd]);
          auVar14[0xe] = -(param_2[0xe] == auVar15[0xe]);
          auVar14[0xf] = -(param_2[0xf] == auVar15[0xf]);
          if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
            uVar8 = 0;
            goto code_r0x00402f41;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar9 <= uVar10) {
            if ((uVar10 | uVar9) >> 0x20 != 0) {
              if (uVar10 % uVar9 == uVar6) goto code_r0x00402c7f;
              break;
            }
            uVar10 = (uVar10 & 0xffffffff) % (uVar9 & 0xffffffff);
          }
          if (uVar10 != uVar6) break;
        }
code_r0x00402c7f:
      }
    }
  }
  auVar15 = _Znwm(0x20);
  uVar7 = auVar15._8_8_;
  puVar11 = auVar15._0_8_;
  *puVar11 = 0;
  puVar11[1] = uVar5;
  uVar10 = param_3[1];
  puVar11[2] = *param_3;
  puVar11[3] = uVar10;
  if ((float)(param_1[3] + 1) <= (float)uVar9 * *(float *)(param_1 + 4)) goto code_r0x00402ecd;
  uVar6 = 1;
  if (2 < uVar9) {
    uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
  }
  uVar6 = uVar6 | uVar9 * 2;
  fVar13 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar10 = (long)(fVar13 - 9.223372e+18) & (long)fVar13 >> 0x3f | (long)fVar13;
  if (uVar10 < uVar6) {
    uVar10 = uVar6;
  }
  auVar4._8_8_ = extraout_RDX;
  auVar4._0_8_ = uVar10;
  auVar15._8_8_ = extraout_RDX;
  auVar15._0_8_ = 2;
  if (uVar10 == 1) {
code_r0x00402dc7:
    uVar10 = auVar15._0_8_;
    bVar12 = uVar10 < uVar9;
    auVar4 = auVar15;
    if (uVar9 < uVar10) goto code_r0x00402dcc;
code_r0x00402de4:
    uVar7 = auVar4._8_8_;
    if (bVar12) {
      fVar13 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      uVar7 = (long)fVar13 >> 0x3f;
      uVar6 = (long)(fVar13 - 9.223372e+18) & uVar7 | (long)fVar13;
      auVar16._8_8_ = uVar7;
      auVar16._0_8_ = uVar6;
      if ((uVar9 < 3) || ((uVar9 - 1 & uVar9) != 0)) {
        auVar16 = _ZNSt3__112__next_primeEm(uVar6);
      }
      else if (1 < uVar6) {
        lVar2 = 0x3f;
        if (uVar6 - 1 != 0) {
          for (; uVar6 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        auVar16._0_8_ = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
      }
      uVar7 = auVar16._8_8_;
      uVar10 = auVar4._0_8_;
      if (auVar4._0_8_ <= auVar16._0_8_) {
        uVar10 = auVar16._0_8_;
      }
      if (uVar10 < uVar9) goto code_r0x00402dcc;
    }
  }
  else {
    if ((uVar10 & uVar10 - 1) != 0) {
      auVar15 = _ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
      goto code_r0x00402dc7;
    }
    bVar12 = uVar10 < uVar9;
    if (uVar10 <= uVar9) goto code_r0x00402de4;
code_r0x00402dcc:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar10);
    uVar7 = extraout_RDX_00;
  }
  uVar9 = param_1[1];
  if ((uVar9 & uVar9 - 1) == 0) {
    uVar6 = uVar9 - 1 & uVar5;
  }
  else {
    uVar6 = uVar5;
    if (uVar9 <= uVar5) {
      if ((uVar5 | uVar9) >> 0x20 == 0) {
        uVar7 = (uVar5 & 0xffffffff) % (uVar9 & 0xffffffff);
        uVar6 = uVar7;
      }
      else {
        uVar7 = uVar5 % uVar9;
        uVar6 = uVar7;
      }
    }
  }
code_r0x00402ecd:
  lVar2 = *param_1;
  puVar3 = *(ulong **)(lVar2 + uVar6 * 8);
  if (puVar3 == (ulong *)0x0) {
    uVar7 = param_1[2];
    *puVar11 = uVar7;
    param_1[2] = (long)puVar11;
    *(long **)(lVar2 + uVar6 * 8) = param_1 + 2;
    if (*puVar11 != 0) {
      uVar5 = *(ulong *)(*puVar11 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar5 = uVar5 & uVar9 - 1;
      }
      else if (uVar9 <= uVar5) {
        if ((uVar5 | uVar9) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) % (uVar9 & 0xffffffff);
          uVar7 = uVar5;
        }
        else {
          uVar5 = uVar5 % uVar9;
          uVar7 = uVar5;
        }
      }
      *(ulong **)(*param_1 + uVar5 * 8) = puVar11;
    }
  }
  else {
    *puVar11 = *puVar3;
    *puVar3 = (ulong)puVar11;
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
code_r0x00402f41:
  auVar17._8_8_ = uVar8;
  auVar17._0_8_ = puVar11;
  return auVar17;
}


