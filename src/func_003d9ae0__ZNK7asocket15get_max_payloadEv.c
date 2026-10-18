// Function: _ZNK7asocket15get_max_payloadEv
// Address: 003d9ae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7asocket15get_max_payloadEv(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar2 = 0x100000;
  }
  else {
    uVar1 = _ZNK10atransport15get_max_payloadEv();
    uVar2 = 0x100000;
    if (uVar1 < 0x100000) {
      uVar2 = uVar1;
    }
  }
  uVar1 = uVar2;
  if (((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0)) &&
     (uVar1 = _ZNK10atransport15get_max_payloadEv(), uVar2 <= uVar1)) {
    uVar1 = uVar2;
  }
  return uVar1;
}


