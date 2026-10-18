// Function: _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz10TransitionERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
// Address: 004ca5d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz10TransitionERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
               (long *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  
  puVar21 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar21) {
    lVar15 = *param_1;
    puVar4 = (undefined8 *)param_1[1];
    if ((long)puVar4 - lVar15 == 0) {
      lVar20 = param_1[3] - lVar15;
      uVar13 = 1;
      if (puVar21 != puVar4) {
        uVar13 = (lVar20 >> 4) * 0x5555555555555556;
      }
      if (0x555555555555555 < uVar13) {
        func_0x0032fc40();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = _Znwm();
      lVar16 = (uVar13 >> 2) * 0x30 + lVar14;
      lVar18 = (long)puVar21 - (long)puVar4;
      lVar17 = lVar16;
      if (lVar18 != 0) {
        lVar17 = lVar18 + lVar16;
        lVar19 = 0;
        do {
          puVar1 = (undefined4 *)((long)puVar4 + lVar19);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined8 *)((long)puVar4 + lVar19 + 0x10);
          uVar10 = *puVar2;
          uVar11 = puVar2[1];
          puVar2 = (undefined8 *)((long)puVar4 + lVar19 + 0x20);
          uVar12 = puVar2[1];
          puVar3 = (undefined8 *)(lVar16 + 0x20 + lVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar12;
          puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar19);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar1 = (undefined4 *)(lVar16 + lVar19);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          lVar19 = lVar19 + 0x30;
        } while (lVar18 != lVar19);
      }
      *param_1 = lVar14;
      param_1[1] = lVar16;
      param_1[3] = uVar13 * 0x30 + lVar14;
      param_1[2] = lVar17;
      if (puVar4 != (undefined8 *)0x0) {
        _ZdaPvSt11align_val_t(lVar15,lVar20);
      }
    }
    else {
      lVar15 = ((long)puVar4 - lVar15 >> 4) * -0x5555555555555555;
      uVar13 = (lVar15 - (lVar15 + 1 >> 0x3f)) + 1U >> 1;
      func_0x0099bd90(puVar4 + uVar13 * -6,puVar4,(long)puVar21 - (long)puVar4);
      puVar21 = (undefined8 *)(((long)puVar21 - (long)puVar4) + (long)(puVar4 + uVar13 * -6));
      param_1[1] = param_1[1] + uVar13 * -0x30;
    }
  }
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[2] = 0x7b2;
  *(undefined2 *)(puVar21 + 3) = 0x101;
  puVar21[4] = 0x7b2;
  *(undefined2 *)(puVar21 + 5) = 0x101;
  param_1[2] = (long)(puVar21 + 6);
  return;
}


