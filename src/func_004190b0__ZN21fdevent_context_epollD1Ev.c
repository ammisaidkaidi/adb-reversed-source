// Function: _ZN21fdevent_context_epollD1Ev
// Address: 004190b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN21fdevent_context_epollD1Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 **ppuVar3;
  long in_FS_OFFSET;
  int iStack_34;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN15fdevent_context7DestroyEP7fdevent(&iStack_34,param_1,param_1[0x17]);
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  if (iStack_34 != -1) {
    func_0x0099bd10();
  }
  iStack_34 = -1;
  *puVar2 = uVar1;
  if (*(int *)((long)param_1 + 0xb4) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  *puVar2 = uVar1;
  if (*(int *)(param_1 + 0x16) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *puVar2 = uVar1;
  *param_1 = 0x99f420;
  puStack_30 = param_1 + 0x14;
  func_0x0041a3e0(&puStack_30,param_1[0x14]);
  func_0x0041a210(param_1 + 0xd);
  puStack_30 = param_1 + 5;
  ppuVar3 = &puStack_30;
  func_0x0041a430(ppuVar3,param_1[5]);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  _ZN21fdevent_context_epollD1Ev();
  free(ppuVar3,0xc0);
  return;
}


