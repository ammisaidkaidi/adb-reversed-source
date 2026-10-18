// Function: _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__assign_trivialB8nn220000INS_11__wrap_iterIPKcEESA_EEvT_T0_m
// Address: 003dc4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__assign_trivialB8nn220000INS_11__wrap_iterIPKcEESA_EEvT_T0_m
               (ulong *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar9 = *param_1;
  uVar11 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar11 = (uVar9 & 0xfffffffffffffffe) - 1;
  }
  if (uVar11 < param_4) {
    if (-uVar11 - 10 < param_4 - uVar11) {
      func_0x0032e8f0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = 0xfffffffffffffff8;
    if (uVar11 < 0x7ffffffffffffff3) {
      uVar8 = uVar11 * 2;
      if (uVar11 * 2 < param_4) {
        uVar8 = param_4;
      }
      if (0x16 < uVar8) {
        uVar11 = 0x19;
        if ((uVar8 | 7) != 0x17) {
          uVar11 = uVar8 | 7;
        }
        uVar8 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar8 = (uVar11 | 7) + 1;
        }
        if (0x16 < uVar11) goto code_r0x003dc591;
      }
      uVar8 = 0x17;
    }
code_r0x003dc591:
    uVar11 = param_1[2];
    pbVar5 = (byte *)_Znwm(uVar8);
    if ((uVar9 & 1) != 0) {
      _ZdaPvSt11align_val_t(uVar11,uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = uVar8 | 1;
    *param_1 = uVar9;
    param_1[2] = (ulong)pbVar5;
    param_1[1] = 0;
  }
  else {
    pbVar5 = (byte *)param_1[2];
  }
  pbVar6 = (byte *)((long)param_1 + 1);
  if ((uVar9 & 1) != 0) {
    pbVar6 = pbVar5;
  }
  pbVar5 = pbVar6;
  if (param_2 != param_3) {
    uVar9 = (long)param_3 - (long)param_2;
    if ((0x1f < uVar9) && (0x1f < (ulong)((long)pbVar6 - (long)param_2))) {
      uVar8 = uVar9 & 0xffffffffffffffe0;
      pbVar5 = pbVar6 + uVar8;
      uVar11 = 0;
      do {
        uVar2 = *(undefined8 *)(param_2 + uVar11 + 8);
        uVar3 = *(undefined8 *)(param_2 + uVar11 + 0x10);
        uVar4 = *(undefined8 *)(param_2 + uVar11 + 0x10 + 8);
        *(undefined8 *)(pbVar6 + uVar11) = *(undefined8 *)(param_2 + uVar11);
        *(undefined8 *)(pbVar6 + uVar11 + 8) = uVar2;
        *(undefined8 *)(pbVar6 + uVar11 + 0x10) = uVar3;
        *(undefined8 *)(pbVar6 + uVar11 + 0x10 + 8) = uVar4;
        uVar11 = uVar11 + 0x20;
      } while (uVar8 != uVar11);
      pbVar6 = pbVar5;
      param_2 = param_2 + uVar8;
      if (uVar9 == uVar8) goto code_r0x003dc6c3;
    }
    uVar10 = (int)param_3 - (int)param_2 & 7;
    uVar9 = (ulong)uVar10;
    pbVar7 = param_2;
    if (uVar10 != 0) {
      do {
        *pbVar6 = *pbVar7;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pbVar5 = pbVar6;
    if ((ulong)((long)param_2 - (long)param_3) < 0xfffffffffffffff9) {
      do {
        *pbVar6 = *pbVar7;
        pbVar6[1] = pbVar7[1];
        pbVar6[2] = pbVar7[2];
        pbVar6[3] = pbVar7[3];
        pbVar6[4] = pbVar7[4];
        pbVar6[5] = pbVar7[5];
        pbVar6[6] = pbVar7[6];
        pbVar6[7] = pbVar7[7];
        pbVar6 = pbVar6 + 8;
        pbVar7 = pbVar7 + 8;
        pbVar5 = pbVar6;
      } while (pbVar7 != param_3);
    }
  }
code_r0x003dc6c3:
  *pbVar5 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)param_4 * '\x02';
  }
  else {
    param_1[1] = param_4;
  }
  return;
}


