// Function: _ZN4absl12lts_2026052623inlined_vector_internal7StorageIPNS0_7LogSinkELm16ENSt3__19allocatorIS4_EEE15EmplaceBackSlowIJRKS4_EEERS4_DpOT_
// Address: 004be240
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052623inlined_vector_internal7StorageIPNS0_7LogSinkELm16ENSt3__19allocatorIS4_EEE15EmplaceBackSlowIJRKS4_EEERS4_DpOT_
               (ulong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar19 = *param_1;
  uVar3 = param_1[2];
  uVar13 = 0x20;
  if ((uVar19 & 1) != 0) {
    uVar13 = uVar3 * 2;
  }
  if (uVar13 >> 0x3d != 0) {
    func_0x0032fc40();
    pcVar5 = (code *)swi(3);
    lVar12 = (*pcVar5)();
    return lVar12;
  }
  puVar4 = (ulong *)param_1[1];
  uVar18 = uVar19 >> 1;
  uVar10 = _Znwm(uVar13 * 8);
  *(undefined8 *)(uVar10 + uVar18 * 8) = *param_2;
  if (1 < uVar19) {
    puVar11 = param_1 + 1;
    if ((uVar19 & 1) != 0) {
      puVar11 = puVar4;
    }
    uVar14 = 0;
    if ((0xb < uVar19) && (0x1f < uVar10 - (long)puVar11)) {
      uVar14 = uVar18 & 0xfffffffffffffffc;
      uVar17 = 0;
      do {
        puVar2 = puVar11 + uVar17;
        uVar6 = *(undefined4 *)((long)puVar2 + 4);
        uVar9 = puVar2[1];
        uVar7 = *(undefined4 *)((long)puVar2 + 0xc);
        uVar15 = puVar11[uVar17 + 2];
        uVar8 = (puVar11 + uVar17 + 2)[1];
        puVar1 = (undefined4 *)(uVar10 + uVar17 * 8);
        *puVar1 = (int)*puVar2;
        puVar1[1] = uVar6;
        puVar1[2] = (int)uVar9;
        puVar1[3] = uVar7;
        puVar2 = (ulong *)(uVar10 + 0x10 + uVar17 * 8);
        *puVar2 = uVar15;
        puVar2[1] = uVar8;
        uVar17 = uVar17 + 4;
      } while (uVar14 != uVar17);
      puVar11 = puVar11 + uVar14;
      if (uVar18 == uVar14) goto code_r0x004be38f;
    }
    uVar15 = uVar14;
    for (uVar17 = uVar18 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(ulong *)(uVar10 + uVar15 * 8) = *puVar11;
      puVar11 = puVar11 + 1;
      uVar15 = uVar15 + 1;
    }
    if (uVar14 - uVar18 < 0xfffffffffffffffd) {
      lVar12 = uVar10 + uVar15 * 8;
      lVar16 = 0;
      do {
        *(ulong *)(lVar12 + lVar16 * 8) = puVar11[lVar16];
        *(ulong *)(lVar12 + 8 + lVar16 * 8) = puVar11[lVar16 + 1];
        *(ulong *)(lVar12 + 0x10 + lVar16 * 8) = puVar11[lVar16 + 2];
        *(ulong *)(lVar12 + 0x18 + lVar16 * 8) = puVar11[lVar16 + 3];
        lVar16 = lVar16 + 4;
      } while (uVar18 - uVar15 != lVar16);
    }
  }
code_r0x004be38f:
  if ((uVar19 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar4,uVar3 << 3);
    uVar19 = *param_1;
  }
  param_1[1] = uVar10;
  param_1[2] = uVar13;
  *param_1 = (uVar19 | 1) + 2;
  return uVar10 + uVar18 * 8;
}


