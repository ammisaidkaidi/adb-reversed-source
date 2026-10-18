// Function: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJS6_EEEvDpOT_
// Address: 0033b050
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJS6_EEEvDpOT_
               (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lStack_40;
  
  puVar14 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar14) {
    lStack_40 = *param_1;
    puVar10 = (undefined8 *)param_1[1];
    if ((long)puVar10 - lStack_40 == 0) {
      uVar8 = 1;
      if (puVar14 != puVar10) {
        uVar8 = (param_1[3] - lStack_40 >> 3) * 0x5555555555555556;
      }
      if (0xaaaaaaaaaaaaaaa < uVar8) {
        func_0x0032fc40();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = _Znwm();
      lVar13 = uVar8 * 0x18 + lVar9;
      lVar7 = lVar9 + (uVar8 >> 2) * 0x18;
      lVar11 = (long)puVar14 - (long)puVar10;
      if (lVar11 == 0) {
        *param_1 = lVar9;
        param_1[1] = lVar7;
        param_1[3] = lVar13;
        param_1[2] = lVar7;
        puVar10 = puVar14;
      }
      else {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar7 + 0x10 + lVar12) = *(undefined8 *)((long)puVar10 + lVar12 + 0x10);
          uVar6 = ((undefined8 *)((long)puVar10 + lVar12))[1];
          *(undefined8 *)(lVar7 + lVar12) = *(undefined8 *)((long)puVar10 + lVar12);
          ((undefined8 *)(lVar7 + lVar12))[1] = uVar6;
          *(undefined8 *)((long)puVar10 + lVar12) = 0;
          ((undefined8 *)((long)puVar10 + lVar12))[1] = 0;
          *(undefined8 *)((long)puVar10 + lVar12 + 0x10) = 0;
          lVar12 = lVar12 + 0x18;
        } while (lVar11 != lVar12);
        lStack_40 = *param_1;
        lVar12 = param_1[1];
        puVar10 = (undefined8 *)param_1[3];
        lVar15 = param_1[2];
        *param_1 = lVar9;
        param_1[1] = lVar7;
        param_1[3] = lVar13;
        param_1[2] = lVar11 + lVar7;
        for (; lVar12 != lVar15; lVar15 = lVar15 + -0x18) {
          if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(lVar15 + -8),*(ulong *)(lVar15 + -0x18) & 0xfffffffffffffffe)
            ;
          }
        }
      }
      if (lStack_40 != 0) {
        _ZdaPvSt11align_val_t(lStack_40,(long)puVar10 - lStack_40);
      }
    }
    else {
      lVar7 = ((long)puVar10 - lStack_40 >> 3) * -0x5555555555555555;
      lVar7 = (lVar7 - (lVar7 + 1 >> 0x3f)) + 1 >> 1;
      if (puVar10 == puVar14) {
        puVar14 = puVar10 + lVar7 * -3;
      }
      else {
        do {
          puVar1 = puVar10 + lVar7 * -3;
          if ((*(byte *)(puVar10 + lVar7 * -3) & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar10[lVar7 * -3 + 2],puVar10[lVar7 * -3] & 0xfffffffffffffffe);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
          }
          puVar1[2] = puVar10[2];
          uVar3 = *(undefined4 *)((long)puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
          *(undefined4 *)puVar1 = *(undefined4 *)puVar10;
          *(undefined4 *)((long)puVar1 + 4) = uVar3;
          *(undefined4 *)(puVar1 + 1) = uVar4;
          *(undefined4 *)((long)puVar1 + 0xc) = uVar5;
          *(undefined2 *)puVar10 = 0;
          puVar10 = puVar10 + 3;
        } while (puVar10 != puVar14);
        puVar14 = puVar10 + lVar7 * -3;
        puVar10 = (undefined8 *)param_1[1];
      }
      param_1[1] = (long)(puVar10 + lVar7 * -3);
      param_1[2] = (long)puVar14;
    }
  }
  puVar14[2] = param_2[2];
  uVar6 = param_2[1];
  *puVar14 = *param_2;
  puVar14[1] = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[2] = (long)(puVar14 + 3);
  return;
}


