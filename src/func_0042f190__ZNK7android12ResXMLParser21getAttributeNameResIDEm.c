// Function: _ZNK7android12ResXMLParser21getAttributeNameResIDEm
// Address: 0042f190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser21getAttributeNameResIDEm(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined4 uStack_14;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if (((int)param_1[1] == 0x102) &&
     (lVar1 = param_1[3], param_2 < (undefined4 *)(ulong)*(ushort *)(lVar1 + 0xc))) {
    param_2 = (undefined4 *)((long)param_2 * (ulong)*(ushort *)(lVar1 + 10));
    uVar3 = (ulong)*(int *)((long)param_2 + (ulong)*(ushort *)(lVar1 + 8) + lVar1 + 4);
    if ((-1 < (long)uVar3) && (lVar1 = *param_1, uVar2 = 0, uVar3 < *(ulong *)(lVar1 + 0x1b8))) {
      uStack_14 = *(undefined4 *)(*(long *)(lVar1 + 0x1b0) + uVar3 * 4);
      param_1 = *(long **)(lVar1 + 0x28);
      uVar2 = uStack_14;
      if (param_1 != (long *)0x0) {
        param_2 = &uStack_14;
        (**(code **)(*param_1 + 0x10))();
        uVar2 = uStack_14;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_10) {
    func_0x0099bd00();
    uVar2 = 0xffffffff;
    if (((int)param_1[1] == 0x102) &&
       (lVar1 = param_1[3], param_2 < (undefined4 *)(ulong)*(ushort *)(lVar1 + 0xc))) {
      uVar2 = *(undefined4 *)
               ((long)param_2 * (ulong)*(ushort *)(lVar1 + 10) + 8 +
               (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    }
    return uVar2;
  }
  return uVar2;
}


