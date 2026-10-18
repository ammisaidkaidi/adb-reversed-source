// Function: _ZN11incremental17IncrementalServer5FlushEv
// Address: 003652b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN11incremental17IncrementalServer5FlushEv(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x24) - (long)(*(uint **)(param_1 + 0x1e) + 1);
  if (lVar3 != 0) {
    uVar2 = (uint)lVar3;
    **(uint **)(param_1 + 0x1e) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar4 = lVar3 + 4;
    cVar1 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                      (*param_1,*(undefined8 *)(param_1 + 0x1e),uVar4);
    if (cVar1 == '\0') {
      func_0x0099bd30(_stderr,&UNK_0016793e,uVar4 & 0xffffffff);
    }
    *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar4;
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
  }
  return;
}


