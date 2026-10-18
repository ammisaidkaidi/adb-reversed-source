// Function: _ZN7android19IsFabricatedOverlayENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
// Address: 0042c7b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android19IsFabricatedOverlayENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
                 (long *param_1,ulong param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auVar3 [8];
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined1 *extraout_RDX;
  undefined *puVar11;
  long *unaff_RBX;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  long *unaff_R15;
  long in_FS_OFFSET;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  uint *puStack_88;
  long *plStack_80;
  undefined *puStack_78;
  int iStack_6c;
  long lStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long *plStack_48;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 < 6) ||
     ((*(char *)((long)param_1 + (param_2 - 1)) != 'o' ||
       *(int *)((long)param_1 + (param_2 - 5)) != 0x7272662e &&
      ((param_2 < 0xc ||
       (*(long *)((long)param_1 + (param_2 - 8)) != 0x70616d6469406f72 ||
        *(long *)((long)param_1 + (param_2 - 0xb)) != 0x6469406f7272662e)))))) {
    plVar13 = (long *)0x0;
code_r0x0042c814:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return plVar13;
    }
    puStack_60 = &UNK_0042c957;
    func_0x0099bd00();
  }
  else {
    auStack_58 = (undefined1  [8])0x0;
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (param_2 < 0xfffffffffffffff7) {
      if (param_2 < 0x17) {
        auStack_58._1_7_ = 0;
        auStack_58[0] = (char)param_2 * '\x02';
        plVar7 = (long *)(auStack_58 + 1);
      }
      else {
        lVar9 = 0x1a;
        if ((param_2 | 7) != 0x17) {
          lVar9 = (param_2 | 7) + 1;
        }
        puStack_60 = &UNK_0042c88b;
        plVar7 = (long *)_Znwm(lVar9);
        auStack_58 = (undefined1  [8])(lVar9 + 1);
        uStack_50 = param_2;
        plStack_48 = plVar7;
      }
      puStack_60 = &UNK_0042c8b1;
      func_0x0099bda0(plVar7,param_1,param_2);
      auVar3 = auStack_58;
      *(undefined1 *)((long)plVar7 + param_2) = 0;
      plVar7 = plStack_48;
      unaff_R12 = (ulong)auStack_58 & 0xff;
      param_1 = (long *)(auStack_58 + 1);
      if (((ulong)auStack_58 & 1) != 0) {
        param_1 = plStack_48;
      }
      puStack_60 = &UNK_0042c8d6;
      uVar5 = func_0x0099bf40(param_1,0x80000);
      unaff_R15 = (long *)(ulong)uVar5;
      puStack_60 = &UNK_0042c8de;
      unaff_R14 = (uint *)func_0x0099bce0();
      if ((int)uVar5 < 0) {
        unaff_R13 = (ulong)*unaff_R14;
        plVar13 = (long *)0x0;
        uVar6 = 0;
        if (uVar5 != 0xffffffff) goto code_r0x0042c91e;
      }
      else {
        iStack_3c = 0;
        puStack_60 = &UNK_0042c900;
        uVar14 = _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml(uVar5,&iStack_3c,4,0);
        uVar6 = (uint)CONCAT71((int7)((ulong)uVar14 >> 8),iStack_3c == 0x4f525246 & (byte)uVar14);
        unaff_R13 = (ulong)*unaff_R14;
code_r0x0042c91e:
        param_1 = (long *)(ulong)uVar5;
        plVar13 = (long *)(ulong)uVar6;
        puStack_60 = &UNK_0042c929;
        func_0x0099bd10();
        unaff_R15 = plVar13;
      }
      *unaff_R14 = (uint)unaff_R13;
      unaff_RBX = plVar7;
      if (((ulong)auVar3 & 1) != 0) {
        puStack_60 = &UNK_0042c94b;
        _ZdaPvSt11align_val_t(plVar7,(ulong)auStack_58 & 0xfffffffffffffffe);
        unaff_RBX = plVar13;
        param_1 = plVar7;
      }
      goto code_r0x0042c814;
    }
  }
  puStack_60 = &UNK_0042c95c;
  func_0x0032e8f0();
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_6c = 0;
  piVar10 = &iStack_6c;
  uVar14 = 0;
  puStack_78 = &UNK_0042c98c;
  puStack_60 = &stack0xfffffffffffffff8;
  bVar4 = _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml();
  plVar7 = (long *)CONCAT71((int7)((ulong)uVar14 >> 8),iStack_6c == 0x4f525246);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return (long *)(ulong)(bVar4 & iStack_6c == 0x4f525246);
  }
  puStack_78 = &UNK_0042c9b2;
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_a0 = unaff_RBX;
  uStack_98 = unaff_R12;
  uStack_90 = unaff_R13;
  puStack_88 = unaff_R14;
  plStack_80 = unaff_R15;
  if (((ulong)param_1 & 3) == 0) {
    if (piVar10 < (int *)0x210) {
      puVar11 = &UNK_001599e0;
      plVar13 = (long *)0x5;
code_r0x0042ca25:
      puStack_78 = (undefined *)&puStack_60;
      __android_log_print(plVar13,&UNK_0015b3df,puVar11,piVar10);
    }
    else {
      iVar2 = (int)*param_1;
      if (iVar2 == 0x504d4449) {
        iVar2 = *(int *)((long)param_1 + 4);
        if (iVar2 == 0xb) {
          piVar12 = piVar10 + -0x85;
          if (piVar12 < (int *)0x4) {
            puVar11 = &UNK_00174152;
          }
          else {
            uVar1 = *(ushort *)((long)param_1 + 0x214);
            piVar10 = (int *)(ulong)uVar1;
            if ((ushort)(uVar1 - 0x100) < 0xff01) {
              puVar11 = &UNK_0015fde2;
              plVar13 = (long *)0x6;
              goto code_r0x0042ca25;
            }
            if (*(ushort *)((long)param_1 + 0x216) != 0) {
              plVar13 = param_1;
              puStack_78 = (undefined *)&puStack_60;
              if (0xff < *(ushort *)((long)param_1 + 0x216)) {
                plVar13 = (long *)0x5;
                puStack_78 = (undefined *)&puStack_60;
                __android_log_print(5,&UNK_0015b3df,&UNK_0018b086);
              }
              if ((int *)0x8 < piVar12) {
                param_1 = param_1 + 0x43;
                do {
                  lStack_c0 = 0;
                  plVar13 = &lStack_c0;
                  plVar8 = (long *)_ZN7android12IdmapEntries5setToEPKvm(plVar13,param_1);
                  if ((int)plVar8 != 0) goto code_r0x0042caa0;
                  if (lStack_c0 == 0) {
                    auStack_b8[0] = 0;
                  }
                  else {
                    auStack_b8[0] = *(undefined1 *)(lStack_c0 + 2);
                  }
                  lStack_b0 = lStack_c0;
                  plVar13 = plVar7;
                  lVar9 = _ZN7android16SortedVectorImpl3addEPKv(plVar7,auStack_b8);
                  if (lVar9 < 0) {
                    plVar8 = (long *)0xfffffff4;
                    goto code_r0x0042caa0;
                  }
                  if (lStack_c0 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    param_1 = (long *)((long)param_1 + ((ulong)*(ushort *)(lStack_c0 + 4) + 2) * 4);
                    lVar9 = (ulong)*(ushort *)(lStack_c0 + 4) * 4 + 8;
                  }
                  piVar12 = (int *)((long)piVar12 - lVar9);
                } while ((int *)0x8 < piVar12);
              }
              plVar8 = (long *)0x0;
              if (extraout_RDX != (undefined1 *)0x0) {
                *extraout_RDX = (char)uVar1;
              }
              goto code_r0x0042caa0;
            }
            puVar11 = &UNK_00178cd6;
          }
          goto code_r0x0042c9f2;
        }
        puVar11 = &UNK_00186a3d;
        uVar14 = 0xb;
      }
      else {
        puVar11 = &UNK_0016b2cf;
        uVar14 = 0x504d4449;
      }
      plVar13 = (long *)0x5;
      puStack_78 = (undefined *)&puStack_60;
      __android_log_print(5,&UNK_0015b3df,puVar11,iVar2,uVar14);
    }
  }
  else {
    puVar11 = &UNK_00157bc8;
code_r0x0042c9f2:
    plVar13 = (long *)0x6;
    puStack_78 = (undefined *)&puStack_60;
    __android_log_print(6,&UNK_0015b3df,puVar11);
  }
  plVar8 = (long *)0x0;
code_r0x0042caa0:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
    return plVar8;
  }
  func_0x0099bd00();
  *(undefined1 *)plVar13 = 1;
  *(int *)((long)plVar13 + 4) = 0x20;
  *(uint *)(plVar13 + 1) = (uint)*(byte *)((long)plVar13 + 1) * 4 + 0x20;
  *(uint *)((long)plVar13 + 0x1c) =
       ((uint)*(byte *)((long)plVar13 + 2) + (uint)*(byte *)((long)plVar13 + 1)) * 4 + 0x20;
  return plVar13;
}


