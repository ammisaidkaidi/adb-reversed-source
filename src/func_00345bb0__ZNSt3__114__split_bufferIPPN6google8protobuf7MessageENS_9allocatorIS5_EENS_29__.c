// Function: _ZNSt3__114__split_bufferIPPN6google8protobuf7MessageENS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJS5_EEEvDpOT_
// Address: 00345bb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__114__split_bufferIPPN6google8protobuf7MessageENS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJS5_EEEvDpOT_
               (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  
  puVar21 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] != puVar21) goto code_r0x00345d38;
  lVar11 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  if ((long)puVar4 - lVar11 != 0) {
    lVar11 = (long)puVar4 - lVar11 >> 3;
    uVar20 = (lVar11 - (lVar11 + 1 >> 0x3f)) + 1U >> 1;
    func_0x0099bd90(puVar4 + -uVar20,puVar4,(long)puVar21 - (long)puVar4);
    puVar21 = puVar21 + -uVar20;
    param_1[1] = param_1[1] + uVar20 * -8;
    param_1[2] = (long)puVar21;
    goto code_r0x00345d38;
  }
  lVar13 = param_1[3] - lVar11;
  uVar20 = 1;
  if (puVar21 != puVar4) {
    uVar20 = lVar13 >> 2;
  }
  if (uVar20 >> 0x3d != 0) {
    func_0x0032fc40();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar22 = uVar20 >> 2;
  lVar12 = _Znwm(uVar20 * 8);
  puVar1 = (undefined8 *)(lVar12 + uVar22 * 8);
  lVar15 = (long)puVar21 - (long)puVar4;
  puVar14 = puVar1;
  if (lVar15 != 0) {
    puVar14 = (undefined8 *)(lVar15 + (long)puVar1);
    puVar17 = puVar1;
    puVar18 = puVar4;
    if ((0x67 < lVar15 - 8U) && (0x1f < (lVar12 + uVar22 * 8) - (long)puVar4)) {
      uVar16 = (lVar15 - 8U >> 3) + 1;
      uVar19 = uVar16 & 0xfffffffffffffffc;
      puVar17 = puVar1 + uVar19;
      puVar18 = puVar4 + uVar19;
      lVar15 = uVar22 * 8 + lVar12;
      uVar22 = 0;
      do {
        puVar2 = puVar4 + uVar22;
        uVar6 = *(undefined4 *)((long)puVar2 + 4);
        uVar7 = *(undefined4 *)(puVar2 + 1);
        uVar8 = *(undefined4 *)((long)puVar2 + 0xc);
        uVar9 = puVar4[uVar22 + 2];
        uVar10 = (puVar4 + uVar22 + 2)[1];
        puVar3 = (undefined4 *)(lVar15 + uVar22 * 8);
        *puVar3 = *(undefined4 *)puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        puVar2 = (undefined8 *)(lVar15 + 0x10 + uVar22 * 8);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        uVar22 = uVar22 + 4;
      } while (uVar19 != uVar22);
      if (uVar16 == uVar19) goto code_r0x00345d13;
    }
    do {
      *puVar17 = *puVar18;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    } while (puVar17 != puVar14);
  }
code_r0x00345d13:
  *param_1 = lVar12;
  param_1[1] = (long)puVar1;
  param_1[3] = lVar12 + uVar20 * 8;
  param_1[2] = (long)puVar14;
  if (puVar4 != (undefined8 *)0x0) {
    _ZdaPvSt11align_val_t(lVar11,lVar13);
  }
code_r0x00345d38:
  *puVar21 = *param_2;
  param_1[2] = (long)(puVar21 + 1);
  return;
}


