// Function: _ZN7android9Res_value18copyFrom_dtoh_slowERKS0_
// Address: 0042c400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android9Res_value18copyFrom_dtoh_slowERKS0_(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}


