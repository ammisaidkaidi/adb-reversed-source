// Function: _ZNK7android8ResTable16getResourceFlagsEjPj
// Address: 0043b1b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK7android8ResTable16getResourceFlagsEjPj
               (long param_1,undefined *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint *extraout_RDX;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = param_2;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar4 = (ulong)*(byte *)(param_1 + 0xe8 + ((ulong)param_2 >> 0x18 & 0xff));
    if (uVar4 == 0) {
      if ((uint)param_2 < 0x1000000) {
        puVar5 = &UNK_0015e42d;
      }
      else {
        puVar5 = &UNK_00167fd7;
      }
code_r0x0043b290:
      puVar6 = &UNK_0015b3df;
      param_1 = 5;
      __android_log_print(5,&UNK_0015b3df,puVar5);
      goto code_r0x0043b29c;
    }
    if (((ulong)param_2 & 0xff0000) == 0) {
      puVar5 = &UNK_00168016;
      goto code_r0x0043b290;
    }
    puVar6 = *(undefined **)(*(long *)(param_1 + 200) + -8 + uVar4 * 8);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = &UNK_0018995f;
      goto code_r0x0043b290;
    }
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iVar2 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                      (param_1,puVar6,((uint)((ulong)param_2 >> 0x10) & 0xff) - 1,
                       (ulong)param_2 & 0xffff,0,&uStack_98);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *param_3 = (undefined4)uStack_48;
    }
  }
  else {
code_r0x0043b29c:
    bVar9 = false;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return bVar9;
  }
  func_0x0099bd00();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar4 = (ulong)*(byte *)(param_1 + 0xe8 + ((ulong)puVar6 >> 0x18 & 0xff));
    if (uVar4 == 0) {
      if ((uint)puVar6 < 0x1000000) {
        puVar5 = &UNK_0015e42d;
      }
      else {
        puVar5 = &UNK_00167fd7;
      }
    }
    else if (((ulong)puVar6 & 0xff0000) == 0) {
      puVar5 = &UNK_00168016;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar4 * 8);
      if (lVar8 != 0) {
        iVar2 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                          ();
        bVar7 = (byte)lVar8;
        bVar9 = iVar2 == 0;
        if (bVar9) {
          *extraout_RDX = (uint)uRam0000000000000002;
        }
        goto code_r0x0043b3b7;
      }
      puVar5 = &UNK_0018995f;
    }
    puVar6 = &UNK_0015b3df;
    param_1 = 5;
    __android_log_print(5,&UNK_0015b3df,puVar5);
  }
  bVar7 = (byte)puVar6;
  bVar9 = false;
code_r0x0043b3b7:
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar1) {
    return bVar9;
  }
  func_0x0099bd00();
  if (*(int *)(param_1 + 0x50) == 0) {
    if (bVar7 == 0) {
      puVar6 = &UNK_00178d84;
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)bVar7;
      uVar3 = (ulong)*(byte *)(param_1 + 0xe8 + uVar4);
      if (uVar3 == 0) {
        puVar6 = &UNK_001726be;
      }
      else {
        lVar1 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar3 * 8);
        if (lVar1 != 0) {
          return (bool)*(undefined1 *)(lVar1 + 0x299);
        }
        puVar6 = &UNK_00170963;
      }
    }
    __android_log_print(5,&UNK_0015b3df,puVar6,uVar4);
    return false;
  }
  return false;
}


