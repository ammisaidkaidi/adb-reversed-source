// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPKNS_17basic_string_viewIcS3_EEEESF_EENSA_IPS6_EENSA_IPKS6_EET_T0_l
// Address: 00363860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPKNS_17basic_string_viewIcS3_EEEESF_EENSA_IPS6_EENSA_IPKS6_EET_T0_l
                  (long *param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4,long param_5
                  )

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  ulong *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = param_2;
  if (param_5 < 1) {
code_r0x00363f08:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return puStack_60;
    }
    goto code_r0x00363f2f;
  }
  puVar8 = (ulong *)param_1[1];
  if (param_5 <= (param_1[2] - (long)puVar8 >> 3) * -0x5555555555555555) {
    lVar14 = (long)puVar8 - (long)param_2 >> 3;
    if (lVar14 * -0x5555555555555555 < param_5) {
      puVar11 = puVar8;
      puVar9 = puVar8;
      for (puVar15 = param_3 + lVar14 * -0xaaaaaaaaaaaaaaa; puVar15 != param_4;
          puVar15 = puVar15 + 2) {
        uVar18 = puVar15[1];
        if (0xfffffffffffffff6 < uVar18) goto code_r0x00363f2a;
        uVar1 = *puVar15;
        if (uVar18 < 0x17) {
          *(char *)puVar11 = (char)uVar18 * '\x02';
          pbVar6 = (byte *)((long)puVar11 + 1);
        }
        else {
          lVar14 = (uVar18 | 7) + 1;
          if ((uVar18 | 7) == 0x17) {
            lVar14 = 0x1a;
          }
          pbVar6 = (byte *)_Znwm(lVar14,uVar1);
          *puVar11 = lVar14 + 1;
          puVar11[1] = uVar18;
          puVar11[2] = (ulong)pbVar6;
        }
        func_0x0099bd90(pbVar6,uVar1,uVar18);
        pbVar6[uVar18] = 0;
        puVar11 = puVar11 + 3;
        puVar9 = puVar9 + 3;
      }
      param_1[1] = (long)puVar9;
      if (0 < (long)puVar8 - (long)param_2) {
        puVar13 = puVar9 + param_5 * -3;
        puVar10 = puVar9;
        for (puVar12 = puVar13; puVar12 < puVar8; puVar12 = puVar12 + 3) {
          puVar10[2] = puVar12[2];
          uVar18 = puVar12[1];
          *puVar10 = *puVar12;
          puVar10[1] = uVar18;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar10 = puVar10 + 3;
        }
        param_1[1] = (long)puVar10;
        puVar12 = param_2;
        if (puVar11 != param_2 + param_5 * 3) {
          do {
            puStack_60 = puVar9 + -3;
            if ((*puStack_60 & 1) != 0) {
              _ZdaPvSt11align_val_t(puVar9[-1],*puStack_60 & 0xfffffffffffffffe);
              *puStack_60 = 0;
              puVar9[-2] = 0;
              puVar9[-1] = 0;
            }
            puVar11 = puVar13 + -3;
            puVar9[-1] = puVar13[-1];
            uVar3 = *(undefined4 *)((long)puVar13 + -0x14);
            uVar18 = puVar13[-2];
            uVar4 = *(undefined4 *)((long)puVar13 + -0xc);
            *(int *)puStack_60 = (int)*puVar11;
            *(undefined4 *)((long)puVar9 + -0x14) = uVar3;
            *(int *)(puVar9 + -2) = (int)uVar18;
            *(undefined4 *)((long)puVar9 + -0xc) = uVar4;
            *(undefined2 *)(puVar13 + -3) = 0;
            puVar13 = puVar11;
            puVar9 = puStack_60;
          } while (puVar11 != param_2);
        }
        do {
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          uVar18 = param_3[1];
          if (0xfffffffffffffff6 < uVar18) goto code_r0x00363f2a;
          uVar1 = *param_3;
          if (uVar18 < 0x17) {
            uStack_58 = (ulong)(byte)((char)uVar18 * '\x02');
            uVar7 = (long)&uStack_58 + 1;
          }
          else {
            lVar14 = (uVar18 | 7) + 1;
            if ((uVar18 | 7) == 0x17) {
              lVar14 = 0x1a;
            }
            uVar7 = _Znwm(lVar14,uVar1);
            uStack_58 = lVar14 + 1;
            uStack_50 = uVar18;
            uStack_48 = uVar7;
          }
          func_0x0099bd90(uVar7,uVar1,uVar18);
          *(undefined1 *)(uVar7 + uVar18) = 0;
          if ((*puVar12 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
          }
          puVar12[2] = uStack_48;
          *(undefined4 *)puVar12 = (undefined4)uStack_58;
          *(undefined4 *)((long)puVar12 + 4) = uStack_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((long)puVar12 + 0xc) = uStack_50._4_4_;
          param_3 = param_3 + 2;
          puVar12 = puVar12 + 3;
          puStack_60 = param_2;
        } while (puVar8 != puVar12);
      }
    }
    else {
      puVar12 = puVar8 + param_5 * -3;
      puVar9 = puVar8;
      for (puVar11 = puVar12; puVar11 < puVar8; puVar11 = puVar11 + 3) {
        puVar9[2] = puVar11[2];
        uVar18 = puVar11[1];
        *puVar9 = *puVar11;
        puVar9[1] = uVar18;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar9 = puVar9 + 3;
      }
      param_1[1] = (long)puVar9;
      if (puVar8 != param_2 + param_5 * 3) {
        do {
          puVar9 = puVar8 + -3;
          if ((*puVar9 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar8[-1],*puVar9 & 0xfffffffffffffffe);
            *puVar9 = 0;
            puVar8[-2] = 0;
            puVar8[-1] = 0;
          }
          puVar11 = puVar12 + -3;
          puVar8[-1] = puVar12[-1];
          uVar3 = *(undefined4 *)((long)puVar12 + -0x14);
          uVar18 = puVar12[-2];
          uVar4 = *(undefined4 *)((long)puVar12 + -0xc);
          *(int *)puVar9 = (int)*puVar11;
          *(undefined4 *)((long)puVar8 + -0x14) = uVar3;
          *(int *)(puVar8 + -2) = (int)uVar18;
          *(undefined4 *)((long)puVar8 + -0xc) = uVar4;
          *(undefined2 *)(puVar12 + -3) = 0;
          puVar12 = puVar11;
          puVar8 = puVar9;
        } while (puVar11 != param_2);
      }
      lVar14 = 0;
      do {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uVar18 = param_3[1];
        if (0xfffffffffffffff6 < uVar18) goto code_r0x00363f2a;
        uVar1 = *param_3;
        if (uVar18 < 0x17) {
          uStack_58 = (ulong)(byte)((char)uVar18 * '\x02');
          uVar7 = (long)&uStack_58 + 1;
        }
        else {
          lVar5 = (uVar18 | 7) + 1;
          if ((uVar18 | 7) == 0x17) {
            lVar5 = 0x1a;
          }
          uVar7 = _Znwm(lVar5,uVar1);
          uStack_58 = lVar5 + 1;
          uStack_50 = uVar18;
          uStack_48 = uVar7;
        }
        pbVar6 = (byte *)((long)param_2 + lVar14);
        func_0x0099bd90(uVar7,uVar1,uVar18);
        *(undefined1 *)(uVar7 + uVar18) = 0;
        if ((*pbVar6 & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)param_2 + lVar14 + 0x10),
                     *(ulong *)((long)param_2 + lVar14) & 0xfffffffffffffffe);
        }
        *(ulong *)(pbVar6 + 0x10) = uStack_48;
        *(undefined4 *)pbVar6 = (undefined4)uStack_58;
        *(undefined4 *)(pbVar6 + 4) = uStack_58._4_4_;
        *(undefined4 *)(pbVar6 + 8) = (undefined4)uStack_50;
        *(undefined4 *)(pbVar6 + 0xc) = uStack_50._4_4_;
        param_3 = param_3 + 2;
        lVar14 = lVar14 + 0x18;
      } while (param_5 * 0x18 != lVar14);
    }
    goto code_r0x00363f08;
  }
  lVar14 = *param_1;
  uVar18 = ((long)puVar8 - lVar14 >> 3) * -0x5555555555555555 + param_5;
  if (uVar18 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - lVar14 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar18 < uVar7) {
      uVar18 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar18 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar18 == 0) {
      lVar5 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar18) goto code_r0x00363f39;
      lVar5 = _Znwm(uVar18 * 0x18);
    }
    puStack_60 = (ulong *)((long)param_2 + (lVar5 - lVar14));
    lVar17 = 0;
    do {
      uVar7 = param_3[1];
      if (0xfffffffffffffff6 < uVar7) goto code_r0x00363f2a;
      uVar1 = *param_3;
      if (uVar7 < 0x17) {
        *(char *)((long)puStack_60 + lVar17) = (char)uVar7 * '\x02';
        pbVar6 = (byte *)((long)param_2 + lVar17 + (lVar5 - lVar14) + 1);
      }
      else {
        lVar16 = (uVar7 | 7) + 1;
        if ((uVar7 | 7) == 0x17) {
          lVar16 = 0x1a;
        }
        pbVar6 = (byte *)_Znwm(lVar16);
        *(long *)((long)puStack_60 + lVar17) = lVar16 + 1;
        *(ulong *)((long)puStack_60 + lVar17 + 8) = uVar7;
        *(byte **)((long)puStack_60 + lVar17 + 0x10) = pbVar6;
      }
      func_0x0099bd90(pbVar6,uVar1,uVar7);
      pbVar6[uVar7] = 0;
      param_3 = param_3 + 2;
      lVar17 = lVar17 + 0x18;
    } while (param_5 * 0x18 != lVar17);
    lVar14 = param_1[1];
    func_0x0099bda0(puStack_60 + param_5 * 3,param_2,lVar14 - (long)param_2);
    param_1[1] = (long)param_2;
    lVar17 = *param_1;
    lVar19 = (long)puStack_60 - ((long)param_2 - lVar17);
    func_0x0099bda0(lVar19,lVar17,(long)param_2 - lVar17);
    lVar16 = param_1[2];
    *param_1 = lVar19;
    param_1[1] = (long)((lVar14 - (long)param_2) + (long)(puStack_60 + param_5 * 3));
    param_1[2] = lVar5 + uVar18 * 0x18;
    if (lVar17 != 0) {
      _ZdaPvSt11align_val_t(lVar17,lVar16 - lVar17);
    }
    goto code_r0x00363f08;
  }
  goto code_r0x00363f34;
code_r0x00363f2a:
  func_0x0032e8f0();
code_r0x00363f2f:
  func_0x0099bd00();
code_r0x00363f34:
  func_0x00330ca0();
code_r0x00363f39:
  func_0x0032fc40();
  pcVar2 = (code *)swi(3);
  puVar8 = (ulong *)(*pcVar2)();
  return puVar8;
}


