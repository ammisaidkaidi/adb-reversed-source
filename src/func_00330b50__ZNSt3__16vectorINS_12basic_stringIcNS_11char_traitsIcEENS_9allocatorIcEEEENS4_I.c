// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKS6_EEEPS6_DpOT_
// Address: 00330b50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKS6_EEEPS6_DpOT_
          (long *param_1,byte *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lStack_40;
  
  lVar7 = *param_1;
  lVar9 = param_1[1] - lVar7;
  uVar10 = (lVar9 >> 3) * -0x5555555555555555 + 1;
  if (uVar10 < 0xaaaaaaaaaaaaaab) {
    lStack_40 = param_1[2];
    lVar6 = lStack_40 - lVar7 >> 3;
    uVar2 = lVar6 * 0x5555555555555556;
    if (uVar10 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar10) goto code_r0x00330c97;
      lVar6 = _Znwm(uVar10 * 0x18);
    }
    puVar8 = (undefined4 *)(lVar6 + lVar9);
    if ((*param_2 & 1) == 0) {
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      *puVar8 = *(undefined4 *)param_2;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
    }
    else {
      func_0x00330340(puVar8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      lVar7 = *param_1;
      lStack_40 = param_1[2];
      lVar9 = param_1[1] - lVar7;
    }
    func_0x0099bda0((long)puVar8 - lVar9,lVar7,lVar9);
    *param_1 = (long)puVar8 - lVar9;
    param_1[1] = (long)(puVar8 + 6);
    param_1[2] = lVar6 + uVar10 * 0x18;
    if (lVar7 != 0) {
      _ZdaPvSt11align_val_t(lVar7,lStack_40 - lVar7);
    }
    return puVar8 + 6;
  }
  func_0x00330ca0();
code_r0x00330c97:
  func_0x0032fc40();
  pcVar1 = (code *)swi(3);
  puVar8 = (undefined4 *)(*pcVar1)();
  return puVar8;
}


