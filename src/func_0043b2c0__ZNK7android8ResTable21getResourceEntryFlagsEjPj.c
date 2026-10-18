// Function: _ZNK7android8ResTable21getResourceEntryFlagsEjPj
// Address: 0043b2c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK7android8ResTable21getResourceEntryFlagsEjPj(long param_1,undefined *param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 0xe8 + ((ulong)param_2 >> 0x18 & 0xff));
    if (uVar3 == 0) {
      if ((uint)param_2 < 0x1000000) {
        puVar4 = &UNK_0015e42d;
      }
      else {
        puVar4 = &UNK_00167fd7;
      }
    }
    else if (((ulong)param_2 & 0xff0000) == 0) {
      puVar4 = &UNK_00168016;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar3 * 8);
      if (lVar6 != 0) {
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        lStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        iVar1 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                          (param_1,lVar6,((uint)((ulong)param_2 >> 0x10) & 0xff) - 1,
                           (ulong)param_2 & 0xffff,0,&uStack_98);
        bVar5 = (byte)lVar6;
        bVar7 = iVar1 == 0;
        if (bVar7) {
          *param_3 = (uint)*(ushort *)(lStack_58 + 2);
        }
        goto code_r0x0043b3b7;
      }
      puVar4 = &UNK_0018995f;
    }
    param_2 = &UNK_0015b3df;
    param_1 = 5;
    __android_log_print(5,&UNK_0015b3df,puVar4);
  }
  bVar5 = (byte)param_2;
  bVar7 = false;
code_r0x0043b3b7:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return bVar7;
  }
  func_0x0099bd00();
  if (*(int *)(param_1 + 0x50) == 0) {
    if (bVar5 == 0) {
      puVar4 = &UNK_00178d84;
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)bVar5;
      uVar2 = (ulong)*(byte *)(param_1 + 0xe8 + uVar3);
      if (uVar2 == 0) {
        puVar4 = &UNK_001726be;
      }
      else {
        lVar6 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar2 * 8);
        if (lVar6 != 0) {
          return (bool)*(undefined1 *)(lVar6 + 0x299);
        }
        puVar4 = &UNK_00170963;
      }
    }
    __android_log_print(5,&UNK_0015b3df,puVar4,uVar3);
    return false;
  }
  return false;
}


