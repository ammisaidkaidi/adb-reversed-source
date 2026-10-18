// Function: _ZNK4absl12lts_2026052613time_internal4cctz10Transition11ByCivilTimeclERKS3_S6_
// Address: 004c9c80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK4absl12lts_2026052613time_internal4cctz10Transition11ByCivilTimeclERKS3_S6_
               (undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(long *)(param_3 + 0x10) <= *(long *)(param_2 + 0x10)) {
    if (*(long *)(param_2 + 0x10) == *(long *)(param_3 + 0x10)) {
      if (*(char *)(param_2 + 0x18) < *(char *)(param_3 + 0x18)) {
        return true;
      }
      if (*(char *)(param_2 + 0x18) == *(char *)(param_3 + 0x18)) {
        if (*(char *)(param_2 + 0x19) < *(char *)(param_3 + 0x19)) {
          return true;
        }
        if (*(char *)(param_2 + 0x19) == *(char *)(param_3 + 0x19)) {
          if (*(char *)(param_2 + 0x1a) < *(char *)(param_3 + 0x1a)) {
            return true;
          }
          if (*(char *)(param_2 + 0x1a) == *(char *)(param_3 + 0x1a)) {
            if (*(char *)(param_2 + 0x1b) < *(char *)(param_3 + 0x1b)) {
              return true;
            }
            if (*(char *)(param_2 + 0x1b) == *(char *)(param_3 + 0x1b)) {
              return *(char *)(param_2 + 0x1c) < *(char *)(param_3 + 0x1c);
            }
          }
        }
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


