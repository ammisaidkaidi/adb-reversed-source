// Function: _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
// Address: 004ee1b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
              (byte *param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = (char)*param_1 + -0x30;
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != param_3) {
    *param_2 = (long)(pbVar2 + 1);
    bVar1 = *pbVar2;
    *param_1 = bVar1;
    if (0xf5 < (byte)(bVar1 - 0x3a)) {
      iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
      pbVar2 = (byte *)*param_2;
      if (pbVar2 != param_3) {
        *param_2 = (long)(pbVar2 + 1);
        bVar1 = *pbVar2;
        *param_1 = bVar1;
        if (0xf5 < (byte)(bVar1 - 0x3a)) {
          iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
          pbVar2 = (byte *)*param_2;
          if (pbVar2 != param_3) {
            *param_2 = (long)(pbVar2 + 1);
            bVar1 = *pbVar2;
            *param_1 = bVar1;
            if (0xf5 < (byte)(bVar1 - 0x3a)) {
              iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
              pbVar2 = (byte *)*param_2;
              if (pbVar2 != param_3) {
                *param_2 = (long)(pbVar2 + 1);
                bVar1 = *pbVar2;
                *param_1 = bVar1;
                if (0xf5 < (byte)(bVar1 - 0x3a)) {
                  iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
                  pbVar2 = (byte *)*param_2;
                  if (pbVar2 != param_3) {
                    *param_2 = (long)(pbVar2 + 1);
                    bVar1 = *pbVar2;
                    *param_1 = bVar1;
                    if (0xf5 < (byte)(bVar1 - 0x3a)) {
                      iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
                      pbVar2 = (byte *)*param_2;
                      if (pbVar2 != param_3) {
                        *param_2 = (long)(pbVar2 + 1);
                        bVar1 = *pbVar2;
                        *param_1 = bVar1;
                        if (0xf5 < (byte)(bVar1 - 0x3a)) {
                          iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
                          pbVar2 = (byte *)*param_2;
                          if (pbVar2 != param_3) {
                            *param_2 = (long)(pbVar2 + 1);
                            bVar1 = *pbVar2;
                            *param_1 = bVar1;
                            if (0xf5 < (byte)(bVar1 - 0x3a)) {
                              iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
                              pbVar2 = (byte *)*param_2;
                              if (pbVar2 != param_3) {
                                *param_2 = (long)(pbVar2 + 1);
                                bVar1 = *pbVar2;
                                *param_1 = bVar1;
                                if (0xf5 < (byte)(bVar1 - 0x3a)) {
                                  iVar3 = (uint)bVar1 + iVar3 * 10 + -0x30;
                                  pbVar2 = (byte *)*param_2;
                                  if (pbVar2 != param_3) {
                                    *param_2 = (long)(pbVar2 + 1);
                                    *param_1 = *pbVar2;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


