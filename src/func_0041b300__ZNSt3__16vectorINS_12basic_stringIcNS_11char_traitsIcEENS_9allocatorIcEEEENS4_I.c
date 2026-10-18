// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPS6_EEEESE_EESD_NSB_IPKS6_EET_T0_l
// Address: 0041b300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPS6_EEEESE_EESD_NSB_IPKS6_EET_T0_l
                  (long *param_1,ulong *param_2,ulong *param_3,byte *param_4,long param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  
  if (0 < param_5) {
    puVar12 = (ulong *)param_1[1];
    if ((param_1[2] - (long)puVar12 >> 3) * -0x5555555555555555 < param_5) {
      lVar14 = *param_1;
      uVar23 = ((long)puVar12 - lVar14 >> 3) * -0x5555555555555555 + param_5;
      if (0xaaaaaaaaaaaaaaa < uVar23) {
        func_0x00330ca0();
code_r0x0041b86e:
        func_0x0032fc40();
        pcVar5 = (code *)swi(3);
        puVar12 = (ulong *)(*pcVar5)();
        return puVar12;
      }
      lVar11 = param_1[2] - lVar14 >> 3;
      uVar16 = lVar11 * 0x5555555555555556;
      if (uVar23 < uVar16) {
        uVar23 = uVar16;
      }
      if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
        uVar23 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar23 == 0) {
        lVar11 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar23) goto code_r0x0041b86e;
        lVar11 = _Znwm(uVar23 * 0x18);
      }
      puVar18 = (ulong *)((long)param_2 + (lVar11 - lVar14));
      uVar16 = param_5 * 0x18 - 0x18;
      uVar13 = (uint)(uVar16 / 0x18);
      puVar12 = puVar18;
      if ((~uVar13 & 3) != 0) {
        lVar14 = -(ulong)(uVar13 + 1 & 3);
        do {
          puVar12[2] = param_3[2];
          uVar9 = param_3[1];
          *puVar12 = *param_3;
          puVar12[1] = uVar9;
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          puVar12 = puVar12 + 3;
          param_3 = param_3 + 3;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0);
      }
      puVar21 = puVar18 + param_5 * 3;
      if (0x47 < uVar16) {
        lVar14 = 0;
        do {
          *(undefined8 *)((long)puVar12 + lVar14 + 0x10) =
               *(undefined8 *)((long)param_3 + lVar14 + 0x10);
          uVar10 = ((undefined8 *)((long)param_3 + lVar14))[1];
          *(undefined8 *)((long)puVar12 + lVar14) = *(undefined8 *)((long)param_3 + lVar14);
          *(undefined8 *)((byte *)((long)puVar12 + lVar14) + 8) = uVar10;
          *(undefined8 *)((long)param_3 + lVar14) = 0;
          ((undefined8 *)((long)param_3 + lVar14))[1] = 0;
          *(undefined8 *)((long)param_3 + lVar14 + 0x10) = 0;
          *(undefined8 *)((long)puVar12 + lVar14 + 0x28) =
               *(undefined8 *)((long)param_3 + lVar14 + 0x28);
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x18);
          uVar10 = puVar2[1];
          pbVar17 = (byte *)((long)puVar12 + lVar14 + 0x18);
          *(undefined8 *)pbVar17 = *puVar2;
          *(undefined8 *)(pbVar17 + 8) = uVar10;
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)((long)param_3 + lVar14 + 0x28) = 0;
          *(undefined8 *)((long)puVar12 + lVar14 + 0x40) =
               *(undefined8 *)((long)param_3 + lVar14 + 0x40);
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x30);
          uVar10 = puVar2[1];
          pbVar17 = (byte *)((long)puVar12 + lVar14 + 0x30);
          *(undefined8 *)pbVar17 = *puVar2;
          *(undefined8 *)(pbVar17 + 8) = uVar10;
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x30);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)((long)param_3 + lVar14 + 0x40) = 0;
          *(undefined8 *)((long)puVar12 + lVar14 + 0x58) =
               *(undefined8 *)((long)param_3 + lVar14 + 0x58);
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x48);
          uVar10 = puVar2[1];
          pbVar17 = (byte *)((long)puVar12 + lVar14 + 0x48);
          *(undefined8 *)pbVar17 = *puVar2;
          *(undefined8 *)(pbVar17 + 8) = uVar10;
          puVar2 = (undefined8 *)((long)param_3 + lVar14 + 0x48);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)((long)param_3 + lVar14 + 0x58) = 0;
          lVar3 = lVar14 + 0x60;
          lVar14 = lVar14 + 0x60;
        } while ((ulong *)((long)puVar12 + lVar3) != puVar21);
      }
      lVar14 = param_1[1];
      func_0x0099bda0(puVar21,param_2,lVar14 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar3 = *param_1;
      lVar22 = (long)puVar18 - ((long)param_2 - lVar3);
      func_0x0099bda0(lVar22,lVar3,(long)param_2 - lVar3);
      lVar4 = param_1[2];
      *param_1 = lVar22;
      param_1[1] = (long)((lVar14 - (long)param_2) + (long)puVar21);
      param_1[2] = lVar11 + uVar23 * 0x18;
      param_2 = puVar18;
      if (lVar3 != 0) {
        _ZdaPvSt11align_val_t(lVar3,lVar4 - lVar3);
      }
    }
    else {
      lVar14 = (long)puVar12 - (long)param_2;
      if ((lVar14 >> 3) * -0x5555555555555555 < param_5) {
        puVar18 = puVar12;
        puVar21 = puVar12;
        if ((byte *)((long)param_3 + lVar14) != param_4) {
          lVar11 = (long)param_3 - (long)param_2;
          do {
            puVar18[2] = *(ulong *)(lVar11 + 0x10 + (long)puVar21);
            uVar23 = ((ulong *)(lVar11 + (long)puVar21))[1];
            *puVar18 = *(ulong *)(lVar11 + (long)puVar21);
            puVar18[1] = uVar23;
            pbVar17 = (byte *)(lVar11 + (long)puVar21);
            pbVar17[0] = 0;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17[4] = 0;
            pbVar17[5] = 0;
            pbVar17[6] = 0;
            pbVar17[7] = 0;
            pbVar17[8] = 0;
            pbVar17[9] = 0;
            pbVar17[10] = 0;
            pbVar17[0xb] = 0;
            pbVar17[0xc] = 0;
            pbVar17[0xd] = 0;
            pbVar17[0xe] = 0;
            pbVar17[0xf] = 0;
            pbVar17 = (byte *)(lVar11 + 0x10 + (long)puVar21);
            pbVar17[0] = 0;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17[4] = 0;
            pbVar17[5] = 0;
            pbVar17[6] = 0;
            pbVar17[7] = 0;
            puVar18 = puVar18 + 3;
            pbVar17 = (byte *)((long)puVar21 + lVar11 + 0x18);
            puVar21 = puVar21 + 3;
          } while (pbVar17 != param_4);
        }
        param_1[1] = (long)puVar21;
        if (0 < lVar14) {
          puVar20 = puVar21 + param_5 * -3;
          puVar15 = puVar21;
          for (puVar19 = puVar20; puVar19 < puVar12; puVar19 = puVar19 + 3) {
            puVar15[2] = puVar19[2];
            uVar23 = puVar19[1];
            *puVar15 = *puVar19;
            puVar15[1] = uVar23;
            *puVar19 = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar15 = puVar15 + 3;
          }
          param_1[1] = (long)puVar15;
          if (puVar18 != param_2 + param_5 * 3) {
            do {
              puVar12 = puVar21 + -3;
              if ((*puVar12 & 1) != 0) {
                _ZdaPvSt11align_val_t(puVar21[-1],*puVar12 & 0xfffffffffffffffe);
                *puVar12 = 0;
                puVar21[-2] = 0;
                puVar21[-1] = 0;
              }
              puVar18 = puVar20 + -3;
              puVar21[-1] = puVar20[-1];
              uVar6 = *(undefined4 *)((long)puVar20 + -0x14);
              uVar23 = puVar20[-2];
              uVar7 = *(undefined4 *)((long)puVar20 + -0xc);
              *(int *)puVar12 = (int)*puVar18;
              *(undefined4 *)((long)puVar21 + -0x14) = uVar6;
              *(int *)(puVar21 + -2) = (int)uVar23;
              *(undefined4 *)((long)puVar21 + -0xc) = uVar7;
              *(undefined2 *)(puVar20 + -3) = 0;
              puVar20 = puVar18;
              puVar21 = puVar12;
            } while (puVar18 != param_2);
          }
          lVar11 = 0;
          do {
            pbVar17 = (byte *)((long)param_2 + lVar11);
            if ((*(byte *)((long)param_2 + lVar11) & 1) != 0) {
              _ZdaPvSt11align_val_t
                        (*(undefined8 *)((long)param_2 + lVar11 + 0x10),
                         *(ulong *)((long)param_2 + lVar11) & 0xfffffffffffffffe);
              pbVar17[0] = 0;
              pbVar17[1] = 0;
              pbVar17[2] = 0;
              pbVar17[3] = 0;
              pbVar17[4] = 0;
              pbVar17[5] = 0;
              pbVar17[6] = 0;
              pbVar17[7] = 0;
              pbVar17[8] = 0;
              pbVar17[9] = 0;
              pbVar17[10] = 0;
              pbVar17[0xb] = 0;
              pbVar17[0xc] = 0;
              pbVar17[0xd] = 0;
              pbVar17[0xe] = 0;
              pbVar17[0xf] = 0;
              pbVar17[0x10] = 0;
              pbVar17[0x11] = 0;
              pbVar17[0x12] = 0;
              pbVar17[0x13] = 0;
              pbVar17[0x14] = 0;
              pbVar17[0x15] = 0;
              pbVar17[0x16] = 0;
              pbVar17[0x17] = 0;
            }
            puVar1 = (undefined4 *)((long)param_3 + lVar11);
            *(undefined8 *)(pbVar17 + 0x10) = *(undefined8 *)(puVar1 + 4);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            *(undefined4 *)pbVar17 = *puVar1;
            *(undefined4 *)(pbVar17 + 4) = uVar6;
            *(undefined4 *)(pbVar17 + 8) = uVar7;
            *(undefined4 *)(pbVar17 + 0xc) = uVar8;
            *(undefined2 *)puVar1 = 0;
            lVar11 = lVar11 + 0x18;
          } while ((byte *)(puVar1 + 6) != (byte *)((long)param_3 + lVar14));
        }
      }
      else {
        puVar19 = puVar12 + param_5 * -3;
        puVar18 = puVar12;
        for (puVar21 = puVar19; puVar21 < puVar12; puVar21 = puVar21 + 3) {
          puVar18[2] = puVar21[2];
          uVar23 = puVar21[1];
          *puVar18 = *puVar21;
          puVar18[1] = uVar23;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar18 = puVar18 + 3;
        }
        param_1[1] = (long)puVar18;
        if (puVar12 != param_2 + param_5 * 3) {
          do {
            puVar18 = puVar12 + -3;
            if ((*puVar18 & 1) != 0) {
              _ZdaPvSt11align_val_t(puVar12[-1],*puVar18 & 0xfffffffffffffffe);
              *puVar18 = 0;
              puVar12[-2] = 0;
              puVar12[-1] = 0;
            }
            puVar21 = puVar19 + -3;
            puVar12[-1] = puVar19[-1];
            uVar6 = *(undefined4 *)((long)puVar19 + -0x14);
            uVar23 = puVar19[-2];
            uVar7 = *(undefined4 *)((long)puVar19 + -0xc);
            *(int *)puVar18 = (int)*puVar21;
            *(undefined4 *)((long)puVar12 + -0x14) = uVar6;
            *(int *)(puVar12 + -2) = (int)uVar23;
            *(undefined4 *)((long)puVar12 + -0xc) = uVar7;
            *(undefined2 *)(puVar19 + -3) = 0;
            puVar19 = puVar21;
            puVar12 = puVar18;
          } while (puVar21 != param_2);
        }
        lVar14 = 0;
        do {
          pbVar17 = (byte *)((long)param_2 + lVar14);
          if ((*(byte *)((long)param_2 + lVar14) & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)((long)param_2 + lVar14 + 0x10),
                       *(ulong *)((long)param_2 + lVar14) & 0xfffffffffffffffe);
            pbVar17[0] = 0;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17[4] = 0;
            pbVar17[5] = 0;
            pbVar17[6] = 0;
            pbVar17[7] = 0;
            pbVar17[8] = 0;
            pbVar17[9] = 0;
            pbVar17[10] = 0;
            pbVar17[0xb] = 0;
            pbVar17[0xc] = 0;
            pbVar17[0xd] = 0;
            pbVar17[0xe] = 0;
            pbVar17[0xf] = 0;
            pbVar17[0x10] = 0;
            pbVar17[0x11] = 0;
            pbVar17[0x12] = 0;
            pbVar17[0x13] = 0;
            pbVar17[0x14] = 0;
            pbVar17[0x15] = 0;
            pbVar17[0x16] = 0;
            pbVar17[0x17] = 0;
          }
          puVar1 = (undefined4 *)((long)param_3 + lVar14);
          *(undefined8 *)(pbVar17 + 0x10) = *(undefined8 *)(puVar1 + 4);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          *(undefined4 *)pbVar17 = *puVar1;
          *(undefined4 *)(pbVar17 + 4) = uVar6;
          *(undefined4 *)(pbVar17 + 8) = uVar7;
          *(undefined4 *)(pbVar17 + 0xc) = uVar8;
          *(undefined2 *)puVar1 = 0;
          lVar14 = lVar14 + 0x18;
        } while ((ulong *)(puVar1 + 6) != param_3 + param_5 * 3);
      }
    }
  }
  return param_2;
}


