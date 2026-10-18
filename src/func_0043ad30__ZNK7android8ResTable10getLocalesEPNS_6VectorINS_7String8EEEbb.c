// Function: _ZNK7android8ResTable10getLocalesEPNS_6VectorINS_7String8EEEbb
// Address: 0043ad30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

void _ZNK7android8ResTable10getLocalesEPNS_6VectorINS_7String8EEEbb
               (long param_1,long param_2,char param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 extraout_EDX;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  long lStack_d8;
  long alStack_d0 [7];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  alStack_d0[3] = 0;
  alStack_d0[4] = 0;
  alStack_d0[1] = 0;
  alStack_d0[2] = 0;
  alStack_d0[5] = 0;
  lVar2 = *(long *)(param_1 + 0xd0);
  lStack_d8 = 0;
  plVar15 = (long *)&UNK_0017f16a;
  _ZN7android8String16C2EPKc(&lStack_d8);
  if (lVar2 != 0) {
    lVar12 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 200) + lVar12 * 8);
      if ((param_3 != '\0') || (*(char *)(lVar3 + 0x298) == '\0')) {
        uVar13 = 0;
        do {
          lVar4 = *(long *)(lVar3 + 0x40 + (uVar13 >> 4) * 8);
          if (lVar4 == 0) {
            puVar9 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
          }
          else {
            puVar9 = (undefined1 *)(lVar4 + (ulong)((uint)uVar13 & 0xf) * 0x28);
          }
          lVar4 = *(long *)(puVar9 + 0x10);
          if (lVar4 != 0) {
            lVar20 = 0;
            do {
              plVar16 = &lStack_98;
              lVar5 = *(long *)(*(long *)(puVar9 + 8) + lVar20 * 8);
              plVar15 = (long *)(*(long *)(lVar5 + 8) + 0x18);
              uStack_58 = 0;
              uStack_50._0_4_ = 0;
              uStack_50._4_4_ = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              plVar17 = plVar16;
              _ZNK7android13ResStringPool15string8ObjectAtEm
                        (plVar16,plVar15,(ulong)*(byte *)(*(long *)(lVar5 + 0x18) + 8) - 1);
              if ((uint)uStack_90 == 0) {
                plVar15 = plVar16;
                _ZN7android7String8C2ERKS0_(&uStack_50);
                uStack_48 = 0;
                uVar7 = (uint)uStack_90;
                if ((uint)uStack_90 != 0xffffffff) goto code_r0x0043af4e;
              }
              else {
                if ((uint)uStack_90 != 1) {
                  func_0x0043f2f0();
                  goto code_r0x0043b18c;
                }
                uStack_50._0_4_ = (undefined4)lStack_98;
                uStack_50._4_4_ = 1;
                uStack_48 = 1;
                uVar7 = 1;
code_r0x0043af4e:
                (**(code **)(&UNK_0099f9d0 + (ulong)uVar7 * 8))(alStack_d0);
                plVar15 = plVar16;
              }
              lVar6 = *(long *)(lVar5 + 0x40);
              if (lVar6 != 0) {
                lVar19 = 0;
                do {
                  lVar11 = *(long *)(*(long *)(lVar5 + 0x38) + lVar19 * 8);
                  uStack_68 = 0;
                  uStack_60 = 0;
                  uStack_78 = 0;
                  uStack_70 = 0;
                  uStack_88 = 0;
                  uStack_80 = 0;
                  lStack_98 = 0;
                  uStack_90 = 0;
                  uVar14 = (ulong)*(uint *)(lVar11 + 0x14);
                  if (uVar14 < 0x40) {
                    func_0x0099c110(&lStack_98,lVar11 + 0x14,uVar14,0x40);
                    func_0x0099bdb0((long)&lStack_98 + uVar14,0,0x40 - uVar14);
                  }
                  else {
                    uStack_90 = *(undefined8 *)(lVar11 + 0x1c);
                    uStack_88 = *(undefined8 *)(lVar11 + 0x24);
                    uStack_80 = *(undefined8 *)(lVar11 + 0x2c);
                    uStack_78 = *(undefined8 *)(lVar11 + 0x34);
                    uStack_70 = *(undefined8 *)(lVar11 + 0x3c);
                    uStack_68 = *(undefined8 *)(lVar11 + 0x44);
                    uStack_60 = *(undefined8 *)(lVar11 + 0x4c);
                    lStack_98 = (ulong)*(uint *)(lVar11 + 0x18) << 0x20;
                  }
                  lStack_98 = CONCAT44(lStack_98._4_4_,0x40);
                  _ZNK7android15ResTable_config14getBcp47LocaleEPcb
                            (&lStack_98,alStack_d0 + 1,param_4);
                  puVar10 = (undefined8 *)_ZN7android10VectorImpl13editArrayImplEv(param_2);
                  lVar11 = _ZN7android10VectorImpl13editArrayImplEv(param_2);
                  puVar1 = (undefined8 *)(lVar11 + *(long *)(param_2 + 0x10) * 8);
                  lVar11 = (long)puVar1 - (long)puVar10;
                  puVar21 = puVar10;
                  if (lVar11 != 0) {
                    uVar14 = lVar11 >> 3;
                    do {
                      uVar18 = uVar14 >> 1;
                      iVar8 = func_0x0099bdd0(puVar21[uVar18],alStack_d0 + 1);
                      if (iVar8 < 0) {
                        puVar21 = puVar21 + uVar18 + 1;
                        uVar18 = ~uVar18 + uVar14;
                      }
                      uVar14 = uVar18;
                    } while (uVar18 != 0);
                  }
                  if (puVar21 == puVar1) {
code_r0x0043af90:
                    _ZN7android7String8C2EPKc(alStack_d0,alStack_d0 + 1);
                    plVar15 = alStack_d0;
                    _ZN7android10VectorImpl8insertAtEPKvmm
                              (param_2,alStack_d0,(long)puVar21 - (long)puVar10 >> 3,1);
                    _ZN7android7String8D2Ev(alStack_d0);
                  }
                  else {
                    plVar15 = alStack_d0 + 1;
                    iVar8 = func_0x0099bdd0(*puVar21);
                    if (iVar8 != 0) goto code_r0x0043af90;
                  }
                  lVar19 = lVar19 + 1;
                } while (lVar19 != lVar6);
              }
              if ((ulong)uStack_48 != 0xffffffff) {
                plVar15 = &uStack_50;
                (**(code **)(&UNK_0099f9e0 + (ulong)uStack_48 * 8))();
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 != lVar4);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x100);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar2);
  }
  plVar17 = &lStack_d8;
  _ZN7android8String16D2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
code_r0x0043b18c:
  func_0x0099bd00();
  *plVar17 = (long)plVar15;
  *(undefined4 *)(plVar17 + 1) = extraout_EDX;
  return;
}


