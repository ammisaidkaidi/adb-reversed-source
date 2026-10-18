// Function: _ZN4absl12lts_2026052624GetStackTraceWithContextEPPviiPKvPi
// Address: 004d4a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052624GetStackTraceWithContextEPPviiPKvPi
                (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  uVar4 = param_1;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    iVar2 = func_0x004d4ce0();
  }
  else {
    iVar2 = (*pcRam0000000000a02f88)(param_1,0,param_2,param_3 + 1,param_4,param_5);
  }
  uStack_40 = (ulong)iVar2;
  if (cVar1 != '\0') {
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (param_1,0,0,(long)param_2,&uStack_40);
    uVar4 = param_1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uStack_40 & 0xffffffff;
  }
  uVar3 = func_0x0099bd00();
  pcRam0000000000a02f88 = (code *)uVar4;
  return uVar3;
}


