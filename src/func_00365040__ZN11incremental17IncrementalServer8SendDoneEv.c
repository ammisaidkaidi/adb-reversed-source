// Function: _ZN11incremental17IncrementalServer8SendDoneEv
// Address: 00365040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _ZN11incremental17IncrementalServer8SendDoneEv(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = *(undefined2 **)(param_1 + 0x24);
  *puVar1 = 0xffff;
  *(undefined8 *)(puVar1 + 1) = 0;
  *(undefined2 **)(param_1 + 0x24) = puVar1 + 5;
  puVar3 = *(uint **)(param_1 + 0x1e);
  lVar5 = (long)(puVar1 + 5) - (long)(puVar3 + 1);
  if (lVar5 != 0) {
    uVar4 = (uint)lVar5;
    *puVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar6 = lVar5 + 4;
    cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                      (*param_1,*(undefined8 *)(param_1 + 0x1e),uVar6);
    if (cVar2 == '\0') {
      func_0x0099bd30(_stderr,&UNK_0016793e,uVar6 & 0xffffffff);
    }
    *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar6;
    puVar3 = (uint *)(*(long *)(param_1 + 0x1e) + 4);
    *(uint **)(param_1 + 0x24) = puVar3;
  }
  return CONCAT71((int7)((ulong)puVar3 >> 8),1);
}


