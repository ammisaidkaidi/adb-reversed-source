// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__assign_with_sizeB8nn220000IPKS6_SB_EEvT_T0_l
// Address: 00352af0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__assign_with_sizeB8nn220000IPKS6_SB_EEvT_T0_l
               (undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  
  pbVar11 = (byte *)*param_1;
  lVar9 = param_1[2];
  lVar10 = lVar9 - (long)pbVar11;
  if (param_4 <= (ulong)((lVar10 >> 3) * -0x5555555555555555)) {
    pbVar13 = (byte *)param_1[1];
    lVar9 = (long)pbVar13 - (long)pbVar11;
    if ((ulong)((lVar9 >> 3) * -0x5555555555555555) < param_4) {
      pbVar6 = pbVar13;
      pbVar12 = param_2;
      if (pbVar13 != pbVar11) {
        pbVar12 = param_2 + lVar9;
        do {
          if (param_2 != pbVar11) {
            bVar1 = *param_2;
            if ((*pbVar11 & 1) == 0) {
              if ((bVar1 & 1) == 0) {
                *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                uVar3 = *(undefined4 *)(param_2 + 4);
                uVar4 = *(undefined4 *)(param_2 + 8);
                uVar5 = *(undefined4 *)(param_2 + 0xc);
                *(undefined4 *)pbVar11 = *(undefined4 *)param_2;
                *(undefined4 *)(pbVar11 + 4) = uVar3;
                *(undefined4 *)(pbVar11 + 8) = uVar4;
                *(undefined4 *)(pbVar11 + 0xc) = uVar5;
              }
              else {
                func_0x0032e990(pbVar11,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8)
                               );
              }
            }
            else {
              bVar14 = (bVar1 & 1) != 0;
              pbVar13 = param_2 + 1;
              if (bVar14) {
                pbVar13 = *(byte **)(param_2 + 0x10);
              }
              uVar8 = (ulong)(bVar1 >> 1);
              if (bVar14) {
                uVar8 = *(ulong *)(param_2 + 8);
              }
              func_0x0032e920(pbVar11,pbVar13,uVar8);
            }
          }
          param_2 = param_2 + 0x18;
          pbVar11 = pbVar11 + 0x18;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
        pbVar13 = (byte *)param_1[1];
        pbVar6 = pbVar13;
      }
      for (; pbVar12 != param_3; pbVar12 = pbVar12 + 0x18) {
        if ((*pbVar12 & 1) == 0) {
          *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
          uVar3 = *(undefined4 *)(pbVar12 + 4);
          uVar4 = *(undefined4 *)(pbVar12 + 8);
          uVar5 = *(undefined4 *)(pbVar12 + 0xc);
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar12;
          *(undefined4 *)(pbVar13 + 4) = uVar3;
          *(undefined4 *)(pbVar13 + 8) = uVar4;
          *(undefined4 *)(pbVar13 + 0xc) = uVar5;
        }
        else {
          func_0x00330340(pbVar13,*(undefined8 *)(pbVar12 + 0x10),*(undefined8 *)(pbVar12 + 8));
        }
        pbVar13 = pbVar13 + 0x18;
        pbVar6 = pbVar6 + 0x18;
      }
      param_1[1] = pbVar6;
    }
    else {
      pbVar12 = pbVar11;
      if (param_2 != param_3) {
        do {
          if (param_2 != pbVar12) {
            bVar1 = *param_2;
            if ((*pbVar12 & 1) == 0) {
              if ((bVar1 & 1) == 0) {
                *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                uVar3 = *(undefined4 *)(param_2 + 4);
                uVar4 = *(undefined4 *)(param_2 + 8);
                uVar5 = *(undefined4 *)(param_2 + 0xc);
                *(undefined4 *)pbVar12 = *(undefined4 *)param_2;
                *(undefined4 *)(pbVar12 + 4) = uVar3;
                *(undefined4 *)(pbVar12 + 8) = uVar4;
                *(undefined4 *)(pbVar12 + 0xc) = uVar5;
              }
              else {
                func_0x0032e990(pbVar12,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8)
                               );
              }
            }
            else {
              bVar14 = (bVar1 & 1) != 0;
              pbVar13 = param_2 + 1;
              if (bVar14) {
                pbVar13 = *(byte **)(param_2 + 0x10);
              }
              uVar8 = (ulong)(bVar1 >> 1);
              if (bVar14) {
                uVar8 = *(ulong *)(param_2 + 8);
              }
              func_0x0032e920(pbVar12,pbVar13,uVar8);
            }
          }
          param_2 = param_2 + 0x18;
          pbVar12 = pbVar12 + 0x18;
          pbVar11 = pbVar11 + 0x18;
        } while (param_2 != param_3);
        pbVar13 = (byte *)param_1[1];
      }
      for (; pbVar12 != pbVar13; pbVar13 = pbVar13 + -0x18) {
        if ((pbVar13[-0x18] & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(pbVar13 + -8),*(ulong *)(pbVar13 + -0x18) & 0xfffffffffffffffe)
          ;
        }
      }
      param_1[1] = pbVar11;
    }
    return;
  }
  if (pbVar11 != (byte *)0x0) {
    pbVar13 = (byte *)param_1[1];
    pbVar12 = pbVar11;
    if (pbVar11 != pbVar13) {
      do {
        if ((pbVar13[-0x18] & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(pbVar13 + -8),*(ulong *)(pbVar13 + -0x18) & 0xfffffffffffffffe)
          ;
        }
        pbVar13 = pbVar13 + -0x18;
      } while (pbVar13 != pbVar11);
      lVar10 = param_1[2] - (long)*param_1;
      pbVar12 = (byte *)*param_1;
    }
    param_1[1] = pbVar11;
    _ZdaPvSt11align_val_t(pbVar12,lVar10);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar9 = 0;
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    uVar8 = (lVar9 >> 3) * 0x5555555555555556;
    if (param_4 < uVar8) {
      param_4 = uVar8;
    }
    if (0x555555555555554 < (ulong)((lVar9 >> 3) * -0x5555555555555555)) {
      param_4 = 0xaaaaaaaaaaaaaaa;
    }
    if (param_4 < 0xaaaaaaaaaaaaaab) {
      puVar7 = (undefined4 *)_Znwm(param_4 * 0x18);
      *param_1 = puVar7;
      param_1[1] = puVar7;
      param_1[2] = puVar7 + param_4 * 6;
      for (; param_2 != param_3; param_2 = param_2 + 0x18) {
        if ((*param_2 & 1) == 0) {
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_2 + 0x10);
          uVar3 = *(undefined4 *)(param_2 + 4);
          uVar4 = *(undefined4 *)(param_2 + 8);
          uVar5 = *(undefined4 *)(param_2 + 0xc);
          *puVar7 = *(undefined4 *)param_2;
          puVar7[1] = uVar3;
          puVar7[2] = uVar4;
          puVar7[3] = uVar5;
        }
        else {
          func_0x00330340(puVar7,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
        }
        puVar7 = puVar7 + 6;
      }
      param_1[1] = puVar7;
      return;
    }
  }
  func_0x00330ca0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


