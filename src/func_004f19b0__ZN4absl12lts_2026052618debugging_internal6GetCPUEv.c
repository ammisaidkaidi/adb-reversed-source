// Function: _ZN4absl12lts_2026052618debugging_internal6GetCPUEv
// Address: 004f19b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052618debugging_internal6GetCPUEv(void)

{
  code *pcVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  uint uStack_14;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_14 = 0;
  uVar2 = (*_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E)(&uStack_14,0,0);
  if (uVar2 == 0) {
    uVar2 = (ulong)uStack_14;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar2;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


