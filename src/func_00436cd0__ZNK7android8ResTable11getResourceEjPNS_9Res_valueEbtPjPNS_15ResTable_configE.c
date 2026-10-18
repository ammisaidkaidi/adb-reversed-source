// Function: _ZNK7android8ResTable11getResourceEjPNS_9Res_valueEbtPjPNS_15ResTable_configE
// Address: 00436cd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android8ResTable11getResourceEjPNS_9Res_valueEbtPjPNS_15ResTable_configE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
               undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long extraout_RDX;
  undefined8 *unaff_RBX;
  long in_FS_OFFSET;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  int iStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (long)*(int *)(param_1 + 10);
  if (lVar4 != 0) goto code_r0x00436e34;
  uVar5 = (ulong)*(byte *)((long)param_1 + ((ulong)param_2 >> 0x18 & 0xff) + 0xe8);
  if (uVar5 == 0) {
    if ((uint)param_2 < 0x1000000) {
      puVar8 = &UNK_00183823;
    }
    else {
      puVar8 = &UNK_0015b4d8;
    }
code_r0x00436e26:
    uVar5 = (ulong)param_2 & 0xffffffff;
    param_1 = (undefined8 *)0x5;
    param_2 = (undefined8 *)&UNK_0015b3df;
    puStack_100 = &UNK_00436e2d;
    __android_log_print(5,&UNK_0015b3df,puVar8,uVar5);
    lVar4 = -0x4b;
  }
  else {
    uVar2 = (ulong)param_2 >> 0x10;
    if (((ulong)param_2 & 0xff0000) == 0) {
      puVar8 = &UNK_00181d7f;
      goto code_r0x00436e26;
    }
    unaff_RBX = *(undefined8 **)(param_1[0x19] + -8 + uVar5 * 8);
    if (unaff_RBX == (undefined8 *)0x0) {
      puVar8 = &UNK_001698da;
      goto code_r0x00436e26;
    }
    uVar7 = (ulong)param_2 & 0xffffffff;
    uVar5 = (ulong)param_2 & 0xffff;
    uStack_78 = *(undefined8 *)((long)param_1 + 0x54);
    uStack_70 = *(undefined8 *)((long)param_1 + 0x5c);
    uStack_68 = *(undefined4 *)((long)param_1 + 100);
    uStack_64 = *(undefined4 *)(param_1 + 0xd);
    uStack_60 = *(undefined4 *)((long)param_1 + 0x6c);
    uStack_5c = *(undefined4 *)(param_1 + 0xe);
    uStack_58 = *(undefined4 *)((long)param_1 + 0x74);
    uStack_54 = *(undefined4 *)(param_1 + 0xf);
    uStack_50 = *(undefined4 *)((long)param_1 + 0x7c);
    uStack_4c = *(undefined4 *)(param_1 + 0x10);
    uStack_48 = *(undefined4 *)((long)param_1 + 0x84);
    uStack_44 = *(undefined4 *)(param_1 + 0x11);
    uStack_40 = *(undefined4 *)((long)param_1 + 0x8c);
    uStack_3c = *(undefined4 *)(param_1 + 0x12);
    if ((short)param_5 != 0) {
      uStack_70 = CONCAT26((short)param_5,(undefined6)uStack_70);
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    param_5 = &uStack_78;
    puStack_100 = &UNK_00436dc3;
    param_2 = unaff_RBX;
    iVar3 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                      (param_1,unaff_RBX,((uint)uVar2 & 0xff) - 1,uVar5,param_5,&uStack_f8);
    if (iVar3 == 0) {
      if ((puStack_b8 == (undefined8 *)0x0) || ((*(ushort *)((long)puStack_b8 + 2) & 9) != 1)) {
        puStack_100 = &UNK_00436e9b;
        uVar6 = _ZNK7android14ResTable_entry5valueEv();
        *param_3 = uVar6;
        unaff_RBX = unaff_RBX + 0x29;
        puStack_100 = &UNK_00436eb1;
        param_2 = param_3;
        param_1 = unaff_RBX;
        iVar3 = _ZNK7android15DynamicRefTable19lookupResourceValueEPNS_9Res_valueE();
        if (iVar3 != 0) {
          uVar7 = (ulong)*(uint *)((long)param_3 + 4);
          puVar8 = &UNK_00181dc0;
          goto code_r0x00436ecd;
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = (undefined4)uStack_a8;
        }
        if (param_7 != (undefined4 *)0x0) {
          *(undefined8 *)(param_7 + 0xc) = uStack_c8;
          *(undefined8 *)(param_7 + 0xe) = uStack_c0;
          *(undefined8 *)(param_7 + 8) = uStack_d8;
          *(undefined8 *)(param_7 + 10) = uStack_d0;
          *(undefined8 *)(param_7 + 4) = uStack_e8;
          *(undefined8 *)(param_7 + 6) = uStack_e0;
          *param_7 = (undefined4)uStack_f8;
          param_7[1] = uStack_f8._4_4_;
          param_7[2] = (undefined4)uStack_f0;
          param_7[3] = uStack_f0._4_4_;
        }
        lVar4 = *(long *)(*(long *)(lStack_a0 + 8) + 0x28);
      }
      else {
        lVar4 = -0x16;
        param_1 = puStack_b8;
        if (param_4 == '\0') {
          puVar8 = &UNK_0017266c;
code_r0x00436ecd:
          param_1 = (undefined8 *)0x5;
          param_2 = (undefined8 *)&UNK_0015b3df;
          puStack_100 = &UNK_00436ed4;
          __android_log_print(5,&UNK_0015b3df,puVar8,uVar7);
          lVar4 = -0x16;
        }
      }
    }
    else {
      lVar4 = (long)iVar3;
    }
  }
code_r0x00436e34:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return lVar4;
  }
  puStack_100 = &UNK_00436f3b;
  func_0x0099bd00();
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_108 = unaff_RBX;
  puStack_100 = &stack0xfffffffffffffff8;
  if ((param_2 != (undefined8 *)0x0) &&
     (puStack_100 = &stack0xfffffffffffffff8, *(char *)((long)param_2 + 3) == '\x03')) {
    lVar4 = *(long *)(param_1[0x14] + extraout_RDX * 8);
    puVar1 = (undefined4 *)((long)param_2 + 4);
    param_2 = (undefined8 *)(lVar4 + 0x38);
    param_1 = &uStack_130;
    puStack_100 = &stack0xfffffffffffffff8;
    (**(code **)(*(long *)(lVar4 + 0x38) + 0x10))(param_1,param_2,*puVar1);
    if (iStack_118 == 0) {
      *param_5 = uStack_120;
      goto code_r0x00436f8c;
    }
  }
  lStack_128 = 0;
code_r0x00436f8c:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_110) {
    func_0x0099bd00();
    return *(long *)(param_1[0x14] + (long)param_2 * 8) + 0x38;
  }
  return lStack_128;
}


