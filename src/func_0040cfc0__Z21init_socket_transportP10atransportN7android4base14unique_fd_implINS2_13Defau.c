// Function: _Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
// Address: 0040cfc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined *
_Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
          (undefined8 param_1,uint *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  uint uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_2;
  *param_2 = 0xffffffff;
  puVar3 = (undefined4 *)func_0x0099bce0();
  if (param_4 == 0) {
    uStack_40 = uVar2;
    _Z25init_socket_transport_tcpP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEE
              (param_1,&uStack_40);
    uVar1 = *puVar3;
    puVar4 = (undefined *)0x0;
    uVar2 = uStack_40;
  }
  else {
    uStack_3c = uVar2;
    uVar2 = _Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
                      (param_1,&uStack_3c,param_3);
    puVar4 = (undefined *)(ulong)uVar2;
    uVar1 = *puVar3;
    uVar2 = uStack_3c;
  }
  puVar5 = (undefined8 *)(ulong)uVar2;
  if (uVar2 != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar3 = uVar1;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    *puVar5 = &UNK_0099f278;
    if ((*(byte *)(puVar5 + 1) & 1) == 0) {
      return &UNK_0099f278;
    }
    puVar4 = (undefined *)free(puVar5[3],puVar5[1] & 0xfffffffffffffffe);
    return puVar4;
  }
  return puVar4;
}


