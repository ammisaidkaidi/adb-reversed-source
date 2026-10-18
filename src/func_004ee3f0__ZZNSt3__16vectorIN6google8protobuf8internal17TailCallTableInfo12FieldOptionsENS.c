// Function: _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
// Address: 004ee3f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorIN6google8protobuf8internal17TailCallTableInfo12FieldOptionsENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  plVar3 = (long *)param_1[2];
  lVar4 = *plVar3;
  lVar19 = plVar3[1] - lVar4;
  uVar2 = (lVar19 >> 5) + 1;
  if (uVar2 >> 0x3b == 0) {
    uVar17 = plVar3[2] - lVar4;
    uVar18 = (long)uVar17 >> 4;
    if ((ulong)((long)uVar17 >> 4) <= uVar2) {
      uVar18 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar17) {
      uVar18 = 0x7ffffffffffffff;
    }
    if (uVar18 < 0x800000000000000) {
      puVar5 = (undefined4 *)param_1[1];
      lVar14 = _Znwm(uVar18 * 0x20);
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      uVar10 = puVar5[4];
      uVar11 = puVar5[5];
      uVar12 = puVar5[6];
      uVar13 = puVar5[7];
      puVar1 = (undefined4 *)(lVar14 + lVar19);
      *puVar1 = *puVar5;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar19);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar15 = lVar14 + lVar19 + 0x20;
      lVar16 = lVar14 + lVar19 + (lVar19 >> 5) * -0x20;
      func_0x0099bda0(lVar16,lVar4,lVar19);
      *plVar3 = lVar16;
      plVar3[1] = lVar15;
      plVar3[2] = uVar18 * 0x20 + lVar14;
      if (lVar4 != 0) {
        _ZdaPvSt11align_val_t(lVar4,uVar17);
      }
      *(long *)*param_1 = lVar15;
      return;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


