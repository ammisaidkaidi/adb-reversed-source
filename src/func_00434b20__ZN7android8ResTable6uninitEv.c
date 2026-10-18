// Function: _ZN7android8ResTable6uninitEv
// Address: 00434b20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007d2584) */
/* WARNING: Removing unreachable block (ram,0x007d258e) */
/* WARNING: Removing unreachable block (ram,0x007d25aa) */
/* WARNING: Removing unreachable block (ram,0x007d25b7) */

void _ZN7android8ResTable6uninitEv(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  
  *(undefined4 *)(param_1 + 0x50) = 0xffffffed;
  lVar17 = *(long *)(param_1 + 0xd0);
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      lVar19 = *(long *)(*(long *)(param_1 + 200) + lVar21 * 8);
      if (lVar19 != 0) {
        _ZN7android8ResTable12PackageGroupD2Ev(lVar19);
        _ZdaPvSt11align_val_t(lVar19);
      }
      lVar21 = lVar21 + 1;
    } while (lVar17 != lVar21);
  }
  lVar17 = *(long *)(param_1 + 0xa8);
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      plVar20 = *(long **)(*(long *)(param_1 + 0xa0) + lVar21 * 8);
      if (*plVar20 == param_1) {
        if (plVar20[1] != 0) {
          func_0x0099c1f0();
        }
        func_0x0099c1f0(plVar20[0x2d]);
        _ZN7android13ResStringPoolD1Ev(plVar20 + 7);
        _ZdaPvSt11align_val_t(plVar20);
      }
      lVar21 = lVar21 + 1;
    } while (lVar17 != lVar21);
  }
  plVar18 = (long *)(param_1 + 0x98);
  _ZN7android10VectorImpl5clearEv(param_1 + 0xc0);
  uVar2 = *(ulong *)(param_1 + 0xa8);
  plVar20 = *(long **)(param_1 + 0xa0);
  if (plVar20 == (long *)0x0) {
    return;
  }
  uVar22 = *(ulong *)(param_1 + 0xa8) - uVar2;
  if (*(ulong *)(param_1 + 0xa8) < uVar2) {
    plVar20 = (long *)&UNK_00158d6b;
    __android_log_assert(&UNK_00158d6b,&UNK_0015a8e2,0);
code_r0x007d26a3:
    func_0x008fcf20();
code_r0x007d26a8:
    func_0x008fcec0();
code_r0x007d26ad:
    func_0x008fcec0();
    func_0x008fce60();
code_r0x007d26b7:
    func_0x008fcec0();
    func_0x008fce90();
code_r0x007d26c1:
    func_0x008fcec0();
    func_0x008fce60();
code_r0x007d26cb:
    func_0x008fcec0();
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0xb8);
    if (uVar1 == 0) goto code_r0x007d26a3;
    uVar16 = plVar20[-2];
    if ((uVar16 | uVar1) >> 0x20 == 0) {
      uVar16 = (uVar16 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar16 = uVar16 / uVar1;
    }
    if (uVar16 < 5 || uVar16 >> 1 <= uVar22) {
      plVar20 = plVar18;
      lVar17 = _ZN7android10VectorImpl13editArrayImplEv();
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulong *)(param_1 + 0xb8);
      if (SUB168(ZEXT816(0) * auVar9,8) != 0) goto code_r0x007d26a8;
      lVar21 = SUB168(ZEXT816(0) * auVar9,0) + lVar17;
      if ((*(byte *)(param_1 + 0xb0) & 2) == 0) {
        plVar20 = plVar18;
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar21,uVar2);
      }
      if (uVar22 == 0) goto code_r0x007d2679;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong *)(param_1 + 0xb8);
      if (SUB168(auVar4 * auVar10,8) == 0) {
        (**(code **)(*plVar18 + 0x38))(plVar18,lVar21,lVar17 + SUB168(auVar4 * auVar10,0),uVar22);
        goto code_r0x007d2679;
      }
      goto code_r0x007d26b7;
    }
    uVar16 = 4;
    if (4 < uVar22 * 2) {
      uVar16 = uVar22 * 2;
    }
    if ((uVar22 == 0) && ((~*(uint *)(param_1 + 0xb0) & 6) == 0)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar1;
      if (SUB168(auVar3 * auVar8,8) == 0) {
        lVar17 = _ZNK7android12SharedBuffer10editResizeEm(plVar20 + -3,SUB168(auVar3 * auVar8,0));
        if (lVar17 == 0) {
          return;
        }
        *(long *)(param_1 + 0xa0) = lVar17 + 0x18;
        goto code_r0x007d2679;
      }
      goto code_r0x007d26c1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar16;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar1;
    if (SUB168(auVar5 * auVar11,8) != 0) goto code_r0x007d26ad;
    lVar17 = _ZN7android12SharedBuffer5allocEm();
    if (lVar17 == 0) {
      return;
    }
    if (uVar22 == 0) {
code_r0x007d2637:
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar21 = *(long *)(param_1 + 0xa0) + -0x18;
        iVar15 = _ZNK7android12SharedBuffer7releaseEj(lVar21,1);
        if (iVar15 == 1) {
          if ((*(byte *)(param_1 + 0xb0) & 2) == 0) {
            (**(code **)(*plVar18 + 0x18))
                      (plVar18,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
          }
          _ZN7android12SharedBuffer7deallocEPKS0_(lVar21);
        }
      }
      *(long *)(param_1 + 0xa0) = lVar17 + 0x18;
code_r0x007d2679:
      *(ulong *)(param_1 + 0xa8) = uVar22;
      return;
    }
    plVar20 = *(long **)(param_1 + 0xb8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = plVar20;
    if (SUB168(auVar6 * auVar12,8) != 0) goto code_r0x007d26cb;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = plVar20;
    if (SUB168(ZEXT816(0) * auVar13,8) == 0) {
      lVar21 = SUB168(auVar6 * auVar12,0) + *(long *)(param_1 + 0xa0);
      lVar19 = SUB168(ZEXT816(0) * auVar13,0) + lVar17 + 0x18;
      if ((*(byte *)(param_1 + 0xb0) & 4) == 0) {
        (**(code **)(*plVar18 + 0x20))(plVar18,lVar19,lVar21,uVar22);
      }
      else {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar22;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = plVar20;
        if (SUB168(auVar7 * auVar14,8) != 0) goto code_r0x007d26df;
        func_0x0099bda0(lVar19,lVar21,SUB168(auVar7 * auVar14,0));
      }
      goto code_r0x007d2637;
    }
  }
  func_0x008fcec0();
  func_0x008fce90();
  func_0x008fcec0();
code_r0x007d26df:
  func_0x008fcec0();
  if (plVar20[1] != 0) {
    lVar17 = plVar20[1] + -0x18;
    iVar15 = _ZNK7android12SharedBuffer7releaseEj(lVar17,1);
    if (iVar15 == 1) {
      if ((*(byte *)(plVar20 + 3) & 2) == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar20[1],plVar20[2]);
      }
      _ZN7android12SharedBuffer7deallocEPKS0_(lVar17);
    }
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  return;
}


