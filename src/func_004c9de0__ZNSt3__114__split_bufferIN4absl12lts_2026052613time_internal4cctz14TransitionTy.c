// Function: _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz14TransitionTypeERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
// Address: 004c9de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz14TransitionTypeERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
               (long *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  
  puVar21 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar21) {
    lVar14 = *param_1;
    puVar17 = (undefined8 *)param_1[1];
    if ((long)puVar17 - lVar14 == 0) {
      lVar20 = param_1[3] - lVar14;
      uVar12 = 1;
      if (puVar21 != puVar17) {
        uVar12 = (lVar20 >> 4) * 0x5555555555555556;
      }
      if (0x555555555555555 < uVar12) {
        func_0x0032fc40();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = _Znwm(uVar12 * 0x30);
      lVar15 = (uVar12 >> 2) * 0x30 + lVar13;
      lVar18 = (long)puVar21 - (long)puVar17;
      lVar16 = lVar15;
      if (lVar18 != 0) {
        lVar16 = lVar18 + lVar15;
        lVar19 = 0;
        do {
          puVar1 = (undefined4 *)((long)puVar17 + lVar19);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined8 *)((long)puVar17 + lVar19 + 0x10);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (undefined8 *)((long)puVar17 + lVar19 + 0x20);
          uVar11 = puVar2[1];
          puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar11;
          puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar19);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar1 = (undefined4 *)(lVar15 + lVar19);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          lVar19 = lVar19 + 0x30;
        } while (lVar18 != lVar19);
      }
      *param_1 = lVar13;
      param_1[1] = lVar15;
      param_1[3] = uVar12 * 0x30 + lVar13;
      param_1[2] = lVar16;
      if (puVar17 != (undefined8 *)0x0) {
        _ZdaPvSt11align_val_t(lVar14,lVar20);
      }
    }
    else {
      lVar14 = ((long)puVar17 - lVar14 >> 4) * -0x5555555555555555;
      lVar14 = (lVar14 - (lVar14 + 1 >> 0x3f)) + 1 >> 1;
      puVar2 = puVar17 + lVar14 * -6;
      lVar20 = (long)puVar21 - (long)puVar17;
      if (lVar20 != 0) {
        func_0x0099bd90(puVar2,puVar17,lVar20 + -6);
        puVar17 = (undefined8 *)param_1[1];
      }
      puVar21 = (undefined8 *)(lVar20 + (long)puVar2);
      param_1[1] = (long)(puVar17 + lVar14 * -6);
    }
  }
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[1] = 0x7b2;
  *(undefined2 *)(puVar21 + 2) = 0x101;
  puVar21[3] = 0x7b2;
  *(undefined2 *)(puVar21 + 4) = 0x101;
  param_1[2] = (long)(puVar21 + 6);
  return;
}


