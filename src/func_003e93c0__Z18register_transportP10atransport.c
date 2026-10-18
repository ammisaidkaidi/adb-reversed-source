// Function: _Z18register_transportP10atransport
// Address: 003e93c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z18register_transportP10atransport(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long in_FS_OFFSET;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_48 = &UNK_0099ee38;
  uStack_40 = param_1;
  ppuStack_28 = &puStack_48;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_48);
  ppuVar2 = ppuStack_28;
  if (ppuStack_28 == &puStack_48) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto code_r0x003e9415;
  }
  (**(code **)(*ppuStack_28 + lVar1))();
code_r0x003e9415:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_18) {
    func_0x0099bd00();
    __transport_server_one_device = ppuVar2;
    return;
  }
  return;
}


