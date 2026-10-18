// Function: _ZZNSt3__16vectorIN6google8protobuf14DescriptorPool18DeferredValidation13LifetimesInfoENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
// Address: 004ca1e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorIN6google8protobuf14DescriptorPool18DeferredValidation13LifetimesInfoENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  plVar2 = (long *)param_1[2];
  lVar3 = *plVar2;
  lVar22 = plVar2[1] - lVar3;
  uVar19 = (lVar22 >> 4) * -0x5555555555555555 + 1;
  if (uVar19 < 0x555555555555556) {
    lVar4 = plVar2[2];
    lVar21 = lVar4 - lVar3 >> 4;
    uVar7 = lVar21 * 0x5555555555555556;
    if (uVar19 < uVar7) {
      uVar19 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar21 * -0x5555555555555555)) {
      uVar19 = 0x555555555555555;
    }
    if (uVar19 < 0x555555555555556) {
      puVar5 = (undefined4 *)param_1[1];
      lVar20 = _Znwm(uVar19 * 0x30);
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      uVar11 = puVar5[4];
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      uVar14 = puVar5[7];
      uVar15 = puVar5[8];
      uVar16 = puVar5[9];
      uVar17 = puVar5[10];
      uVar18 = puVar5[0xb];
      puVar1 = (undefined4 *)(lVar20 + lVar22);
      *puVar1 = *puVar5;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar22);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar22);
      *puVar1 = uVar15;
      puVar1[1] = uVar16;
      puVar1[2] = uVar17;
      puVar1[3] = uVar18;
      lVar21 = lVar20 + 0x30 + lVar22;
      func_0x0099bda0(lVar20,lVar3,lVar22);
      *plVar2 = lVar20;
      plVar2[1] = lVar21;
      plVar2[2] = uVar19 * 0x30 + lVar20;
      if (lVar3 != 0) {
        _ZdaPvSt11align_val_t(lVar3,lVar4 - lVar3);
      }
      *(long *)*param_1 = lVar21;
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


