// Function: _ZN4absl12lts_2026052614GetStackFramesEPPvPiii
// Address: 004d47d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052614GetStackFramesEPPvPiii
                (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  if (pcRam0000000000a02f88 == (code *)0x0) {
    iVar2 = func_0x004d4f10(param_1,0,param_2,param_3,param_4 + 1);
  }
  else {
    iVar2 = (*pcRam0000000000a02f88)(param_1,param_2,param_3,param_4 + 1,0,0);
  }
  uStack_40 = (ulong)iVar2;
  if (cVar1 != '\0') {
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (param_1,0,param_2,(long)param_3,&uStack_40);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uStack_40 & 0xffffffff;
  }
  func_0x0099bd00();
  if (pcRam0000000000a02f88 == (code *)0x0) {
    uVar3 = func_0x004d4b80();
  }
  else {
    uVar3 = (*pcRam0000000000a02f88)();
  }
  return uVar3;
}


