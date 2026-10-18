// Function: _ZNSt3__114__split_bufferIPPN6google8protobuf7MessageERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE13emplace_frontIJRS5_EEEvDpOT_
// Address: 00345d60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__114__split_bufferIPPN6google8protobuf7MessageERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE13emplace_frontIJRS5_EEEvDpOT_
               (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  
  puVar17 = (undefined8 *)*param_1;
  puVar19 = (undefined8 *)param_1[1];
  if (puVar19 != puVar17) goto code_r0x00345f02;
  puVar12 = (undefined8 *)param_1[2];
  lVar10 = param_1[3] - (long)puVar12;
  if (lVar10 != 0) {
    lVar10 = lVar10 >> 3;
    lVar10 = (long)puVar12 + ((lVar10 - (lVar10 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe) * 4;
    puVar17 = (undefined8 *)(lVar10 - ((long)puVar12 - (long)puVar19));
    func_0x0099bd90(puVar17,puVar19,(long)puVar12 - (long)puVar19);
    param_1[1] = (long)puVar17;
    param_1[2] = lVar10;
    puVar19 = puVar17;
    goto code_r0x00345f02;
  }
  lVar10 = param_1[3] - (long)puVar17;
  uVar16 = 1;
  if (puVar12 != puVar19) {
    uVar16 = lVar10 >> 2;
  }
  if (uVar16 >> 0x3d != 0) {
    func_0x0032fc40();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = uVar16 + 3 >> 2;
  lVar11 = _Znwm(uVar16 * 8);
  puVar1 = (undefined8 *)(lVar11 + uVar18 * 8);
  lVar20 = (long)puVar12 - (long)puVar19;
  puVar12 = puVar1;
  if (lVar20 != 0) {
    puVar12 = (undefined8 *)(lVar20 + (long)puVar1);
    puVar13 = puVar1;
    puVar14 = puVar19;
    if ((0x67 < lVar20 - 8U) && (0x1f < (lVar11 + uVar18 * 8) - (long)puVar19)) {
      uVar21 = (lVar20 - 8U >> 3) + 1;
      uVar15 = uVar21 & 0xfffffffffffffffc;
      puVar13 = puVar1 + uVar15;
      puVar14 = puVar19 + uVar15;
      lVar20 = uVar18 * 8 + lVar11;
      uVar18 = 0;
      do {
        puVar2 = puVar19 + uVar18;
        uVar5 = *(undefined4 *)((long)puVar2 + 4);
        uVar6 = *(undefined4 *)(puVar2 + 1);
        uVar7 = *(undefined4 *)((long)puVar2 + 0xc);
        uVar8 = puVar19[uVar18 + 2];
        uVar9 = (puVar19 + uVar18 + 2)[1];
        puVar3 = (undefined4 *)(lVar20 + uVar18 * 8);
        *puVar3 = *(undefined4 *)puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar2 = (undefined8 *)(lVar20 + 0x10 + uVar18 * 8);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        uVar18 = uVar18 + 4;
      } while (uVar15 != uVar18);
      if (uVar21 == uVar15) goto code_r0x00345ed3;
    }
    do {
      *puVar13 = *puVar14;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    } while (puVar13 != puVar12);
  }
code_r0x00345ed3:
  *param_1 = lVar11;
  param_1[1] = (long)puVar1;
  param_1[3] = lVar11 + uVar16 * 8;
  param_1[2] = (long)puVar12;
  bVar22 = puVar19 != (undefined8 *)0x0;
  puVar19 = puVar1;
  if (bVar22) {
    _ZdaPvSt11align_val_t(puVar17,lVar10);
    puVar19 = (undefined8 *)param_1[1];
  }
code_r0x00345f02:
  puVar19[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


