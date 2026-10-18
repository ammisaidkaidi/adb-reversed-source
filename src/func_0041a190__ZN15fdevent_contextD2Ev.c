// Function: _ZN15fdevent_contextD2Ev
// Address: 0041a190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_contextD2Ev(undefined8 *param_1)

{
  code *pcVar1;
  long in_FS_OFFSET;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99f420;
  puStack_20 = param_1 + 0x14;
  func_0x0041a3e0(&puStack_20,param_1[0x14]);
  func_0x0041a210(param_1 + 0xd);
  puStack_20 = param_1 + 5;
  func_0x0041a430(&puStack_20,param_1[5]);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


