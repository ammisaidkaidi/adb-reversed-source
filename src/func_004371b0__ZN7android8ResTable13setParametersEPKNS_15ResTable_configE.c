// Function: _ZN7android8ResTable13setParametersEPKNS_15ResTable_configE
// Address: 004371b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00437520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00437525) */
/* WARNING: Removing unreachable block (ram,0x00437552) */
/* WARNING: Removing unreachable block (ram,0x00437540) */

void _ZN7android8ResTable13setParametersEPKNS_15ResTable_configE(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  func_0x0099c500();
  func_0x0099c500();
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 10);
  uVar11 = *(undefined8 *)(param_2 + 0xc);
  uVar12 = *(undefined8 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x54) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 100) = uVar7;
  *(undefined8 *)(param_1 + 0x6c) = uVar8;
  *(undefined8 *)(param_1 + 0x74) = uVar9;
  *(undefined8 *)(param_1 + 0x7c) = uVar10;
  *(undefined8 *)(param_1 + 0x84) = uVar11;
  *(undefined8 *)(param_1 + 0x8c) = uVar12;
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar20 = 0;
    do {
      plVar14 = (long *)_ZN7android10VectorImpl16editItemLocationEm(param_1 + 0xc0);
      lVar1 = *plVar14;
      _ZN7android8ResTable12PackageGroup13clearBagCacheEv(lVar1);
      uVar18 = 0;
      do {
        lVar15 = *(long *)(lVar1 + 0x40 + (uVar18 >> 4) * 8);
        lVar16 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
        if (lVar15 != 0) {
          lVar16 = *(long *)(lVar15 + (ulong)((uint)uVar18 & 0xf) * 0x28 + 0x10);
        }
        if (lVar16 != 0) {
          lVar15 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                             (lVar1 + 0x40,uVar18);
          lVar16 = _ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
                             (lVar1 + 200,uVar18);
          if (*(long *)(lVar15 + 0x10) != 0) {
            uVar19 = 0;
            do {
              plVar14 = (long *)_ZN7android10VectorImpl16editItemLocationEm(lVar15,uVar19);
              lVar2 = *plVar14;
              plStack_88 = (long *)0x0;
              plStack_80 = (long *)0x0;
              plVar17 = (long *)_Znwm(0x40);
              plVar17[1] = 0;
              plVar17[2] = 0;
              *plVar17 = 0x99fb00;
              plVar14 = plVar17 + 3;
              _ZN7android10VectorImplC2Emj(plVar14,8,7);
              plVar17[3] = 0x99fa00;
              plStack_88 = plVar14;
              plStack_80 = plVar17;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar22 = 0;
                uVar21 = 0;
                do {
                  uStack_48 = 0;
                  uStack_40 = 0;
                  uStack_58 = 0;
                  uStack_50 = 0;
                  uStack_68 = 0;
                  uStack_60 = 0;
                  lStack_78 = 0;
                  uStack_70 = 0;
                  lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + uVar21 * 8);
                  uVar23 = (ulong)*(uint *)(lVar3 + 0x14);
                  if (uVar23 < 0x40) {
                    func_0x0099c110(&lStack_78,lVar3 + 0x14,uVar23,0x40);
                    func_0x0099bdb0((long)&lStack_78 + uVar23,0,0x40 - uVar23);
                  }
                  else {
                    uStack_70 = *(undefined8 *)(lVar3 + 0x1c);
                    uStack_68 = *(undefined8 *)(lVar3 + 0x24);
                    uStack_60 = *(undefined8 *)(lVar3 + 0x2c);
                    uStack_58 = *(undefined8 *)(lVar3 + 0x34);
                    uStack_50 = *(undefined8 *)(lVar3 + 0x3c);
                    uStack_48 = *(undefined8 *)(lVar3 + 0x44);
                    uStack_40 = *(undefined8 *)(lVar3 + 0x4c);
                    lStack_78 = (ulong)*(uint *)(lVar3 + 0x18) << 0x20;
                  }
                  lStack_78 = CONCAT44(lStack_78._4_4_,0x40);
                  cVar13 = _ZNK7android15ResTable_config5matchERKS0_(&lStack_78,param_1 + 0x54);
                  if (cVar13 != '\0') {
                    _ZN7android10VectorImpl3addEPKv(plStack_88,*(long *)(lVar2 + 0x38) + lVar22);
                  }
                  uVar21 = uVar21 + 1;
                  lVar22 = lVar22 + 8;
                } while (uVar21 < *(ulong *)(lVar2 + 0x40));
              }
              _ZN7android10VectorImpl3addEPKv(lVar16 + 8,&plStack_88);
              plVar14 = plStack_80;
              if (plStack_80 != (long *)0x0) {
                LOCK();
                plVar17 = plStack_80 + 1;
                lVar2 = *plVar17;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (lVar2 == 0) {
                  (**(code **)(*plStack_80 + 0x10))(plStack_80);
                  _ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ulong *)(lVar15 + 0x10));
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x100);
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ulong *)(param_1 + 0xd0));
  }
  pthread_mutex_unlock(param_1 + 0x28);
  return;
}


