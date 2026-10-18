// Function: _ZN4absl12lts_2026052612log_internal26EncodeStructuredProtoFieldENS1_20StructuredProtoFieldERNS0_4SpanIcEE
// Address: 004fc170
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1
_ZN4absl12lts_2026052612log_internal26EncodeStructuredProtoFieldENS1_20StructuredProtoFieldERNS0_4SpanIcEE
          (undefined8 **param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  uint in_stack_00000028;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 **ppuStack_20;
  undefined8 *puStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = in_stack_00000008;
  ppuStack_20 = param_1;
  if ((ulong)in_stack_00000028 == 0xffffffff) {
    puStack_30 = &UNK_004fc1d6;
    func_0x0043f2f0();
  }
  else {
    puStack_18 = &uStack_28;
    param_2 = (undefined8 *)&stack0x00000018;
    param_1 = &puStack_18;
    puStack_30 = &UNK_004fc1bc;
    uVar5 = (**(code **)(&UNK_009a0b30 + (ulong)in_stack_00000028 * 8))();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
      return uVar5;
    }
  }
  puStack_30 = &UNK_004fc1db;
  func_0x0099bd00();
  puStack_30 = &stack0xfffffffffffffff8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = *param_2;
  uStack_40 = *(uint *)(param_2 + 1);
  puVar9 = (undefined8 *)0xffffffff;
  uStack_60 = **param_1;
  uStack_58 = (*param_1)[1];
  if ((ulong)uStack_40 == 0xffffffff) {
    puStack_68 = &UNK_004fc252;
    func_0x0043f2f0();
  }
  else {
    puStack_50 = &uStack_60;
    param_1 = &puStack_50;
    puVar9 = &uStack_48;
    puStack_68 = &UNK_004fc238;
    uVar5 = (**(code **)(&UNK_009a0b50 + (ulong)uStack_40 * 8))();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar5;
    }
  }
  puStack_68 = &UNK_004fc257;
  func_0x0099bd00();
  puStack_68 = (undefined *)&puStack_30;
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_80 = *puVar9;
  uStack_78 = *(uint *)(puVar9 + 1);
  puVar9 = (undefined8 *)0xffffffff;
  uStack_98 = **param_1;
  uStack_90 = (*param_1)[1];
  if ((ulong)uStack_78 == 0xffffffff) {
    func_0x0043f2f0();
  }
  else {
    puStack_88 = &uStack_98;
    param_1 = &puStack_88;
    puVar9 = &uStack_80;
    uVar5 = (**(code **)(&UNK_009a0b78 + (ulong)uStack_78 * 8))();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
      return uVar5;
    }
  }
  func_0x0099bd00();
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  lVar13 = **param_1;
  plVar3 = (long *)(*param_1)[1];
  uVar12 = lVar13 * 8 + 2;
  lVar6 = 1;
  lVar7 = 1;
  uVar11 = uVar12;
  if (0x7f < (ulong)(lVar13 << 3)) {
    do {
      lVar7 = lVar7 + 1;
      bVar4 = 0x3fff < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar4);
  }
  if (0x7f < uVar2) {
    lVar6 = 1;
    uVar11 = uVar2;
    do {
      lVar6 = lVar6 + 1;
      bVar4 = 0x3fff < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar4);
  }
  uVar15 = lVar7 + uVar2 + lVar6;
  uVar11 = plVar3[1];
  if (uVar11 < uVar15) {
    lVar13 = 0;
    goto code_r0x004bece8;
  }
  if (lVar7 == 1) {
    uVar8 = 0;
  }
  else {
    uVar14 = (ulong)((uint)(lVar7 - 1U) & 3);
    if (lVar7 - 2U < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(byte *)(*plVar3 + uVar8) = (byte)uVar12 | 0x80;
        *(byte *)(*plVar3 + 1 + uVar8) = (byte)(uVar12 >> 7) | 0x80;
        *(byte *)(*plVar3 + 2 + uVar8) = (byte)(uVar12 >> 0xe) | 0x80;
        *(byte *)(*plVar3 + 3 + uVar8) = (byte)(uVar12 >> 0x15) | 0x80;
        uVar8 = uVar8 + 4;
        uVar12 = uVar12 >> 0x1c;
      } while ((lVar7 - 1U & 0xfffffffffffffffc) != uVar8);
      if (uVar14 == 0) goto code_r0x004bebca;
    }
    do {
      *(byte *)(*plVar3 + uVar8) = (byte)uVar12 | 0x80;
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 >> 7;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
code_r0x004bebca:
  *(byte *)(*plVar3 + uVar8) = (uVar8 + 1 != lVar7) << 7 | (byte)uVar12 & 0x7f;
  lVar13 = *plVar3 + lVar7;
  *plVar3 = lVar13;
  plVar3[1] = plVar3[1] - lVar7;
  if (lVar6 == 1) {
    uVar8 = 0;
    bVar10 = (byte)uVar2;
  }
  else {
    uVar14 = (ulong)((uint)(lVar6 - 1U) & 3);
    uVar12 = uVar2;
    if (2 < lVar6 - 2U) {
      uVar8 = 0;
      do {
        *(byte *)(*plVar3 + uVar8) = (byte)uVar12 | 0x80;
        *(byte *)(*plVar3 + 1 + uVar8) = (byte)(uVar12 >> 7) | 0x80;
        *(byte *)(*plVar3 + 2 + uVar8) = (byte)(uVar12 >> 0xe) | 0x80;
        *(byte *)(*plVar3 + 3 + uVar8) = (byte)(uVar12 >> 0x15) | 0x80;
        uVar8 = uVar8 + 4;
        uVar12 = uVar12 >> 0x1c;
        if ((lVar6 - 1U & 0xfffffffffffffffc) == uVar8) goto joined_r0x004bec87;
      } while( true );
    }
    uVar8 = 0;
    do {
      *(byte *)(*plVar3 + uVar8) = (byte)uVar12 | 0x80;
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 >> 7;
      uVar14 = uVar14 - 1;
joined_r0x004bec87:
    } while (uVar14 != 0);
    bVar10 = (byte)uVar12;
    lVar13 = *plVar3;
  }
  *(byte *)(lVar13 + uVar8) = (uVar8 + 1 != lVar6) << 7 | bVar10 & 0x7f;
  lVar13 = *plVar3;
  *plVar3 = lVar13 + lVar6;
  plVar3[1] = plVar3[1] - lVar6;
  func_0x0099bda0(lVar13 + lVar6,uVar1);
  *plVar3 = *plVar3 + uVar2;
  lVar13 = plVar3[1] - uVar2;
code_r0x004bece8:
  plVar3[1] = lVar13;
  return uVar15 <= uVar11;
}


