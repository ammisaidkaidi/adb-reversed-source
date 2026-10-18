// Function: _ZN11incremental17IncrementalServer4SendEPKvmb
// Address: 00364be0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN11incremental17IncrementalServer4SendEPKvmb
               (undefined4 *param_1,undefined8 param_2,long param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x24);
  func_0x0099bd90(lVar4);
  lVar4 = lVar4 + param_3;
  *(long *)(param_1 + 0x24) = lVar4;
  puVar1 = *(uint **)(param_1 + 0x1e);
  if (((param_4 != 0) || (0x1f000 < lVar4 - (long)puVar1)) &&
     (lVar4 = lVar4 - (long)(puVar1 + 1), lVar4 != 0)) {
    uVar3 = (uint)lVar4;
    *puVar1 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar5 = lVar4 + 4;
    cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                      (*param_1,*(undefined8 *)(param_1 + 0x1e),uVar5);
    if (cVar2 == '\0') {
      func_0x0099bd30(_stderr,&UNK_0016793e,uVar5 & 0xffffffff);
    }
    *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar5;
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
  }
  return;
}


