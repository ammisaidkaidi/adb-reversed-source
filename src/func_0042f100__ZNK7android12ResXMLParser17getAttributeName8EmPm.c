// Function: _ZNK7android12ResXMLParser17getAttributeName8EmPm
// Address: 0042f100
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android12ResXMLParser17getAttributeName8EmPm
                (long *param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint uStack_4c;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_1[1] == 0x102) &&
     (lVar1 = param_1[3], param_2 < (uint *)(ulong)*(ushort *)(lVar1 + 0xc))) {
    param_2 = (uint *)((long)param_2 * (ulong)*(ushort *)(lVar1 + 10));
    lVar1 = (long)*(int *)((long)param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1 + 4);
    if (-1 < lVar1) {
      param_2 = (uint *)(*param_1 + 0x80);
      param_1 = &lStack_38;
      puStack_40 = &UNK_0042f15b;
      _ZNK7android13ResStringPool9string8AtEm(param_1,param_2,lVar1);
      if (iStack_20 == 0) {
        *param_3 = uStack_28;
        goto code_r0x0042f163;
      }
    }
  }
  uStack_30 = 0;
code_r0x0042f163:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uStack_30;
  }
  puStack_40 = &UNK_0042f18b;
  func_0x0099bd00();
  lStack_48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  puStack_40 = &stack0xfffffffffffffff8;
  if (((int)param_1[1] == 0x102) &&
     (lVar1 = param_1[3], puStack_40 = &stack0xfffffffffffffff8,
     param_2 < (uint *)(ulong)*(ushort *)(lVar1 + 0xc))) {
    param_2 = (uint *)((long)param_2 * (ulong)*(ushort *)(lVar1 + 10));
    uVar3 = (ulong)*(int *)((long)param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1 + 4);
    puStack_40 = &stack0xfffffffffffffff8;
    if ((-1 < (long)uVar3) &&
       (lVar1 = *param_1, uVar2 = 0, puStack_40 = &stack0xfffffffffffffff8,
       uVar3 < *(ulong *)(lVar1 + 0x1b8))) {
      uStack_4c = *(uint *)(*(long *)(lVar1 + 0x1b0) + uVar3 * 4);
      uVar2 = (ulong)uStack_4c;
      param_1 = *(long **)(lVar1 + 0x28);
      puStack_40 = &stack0xfffffffffffffff8;
      if (param_1 != (long *)0x0) {
        param_2 = &uStack_4c;
        puStack_40 = &stack0xfffffffffffffff8;
        (**(code **)(*param_1 + 0x10))();
        uVar2 = (ulong)uStack_4c;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_48) {
    func_0x0099bd00();
    uVar2 = 0xffffffff;
    if (((int)param_1[1] == 0x102) &&
       (lVar1 = param_1[3], param_2 < (uint *)(ulong)*(ushort *)(lVar1 + 0xc))) {
      uVar2 = (ulong)*(uint *)((long)param_2 * (ulong)*(ushort *)(lVar1 + 10) + 8 +
                              (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    }
    return uVar2;
  }
  return uVar2;
}


