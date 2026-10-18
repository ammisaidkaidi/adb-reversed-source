// Function: _ZN7android8ResTable5Theme12free_packageEPNS1_12package_infoE
// Address: 00432f20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00432f56: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00432f5b) */

void _ZN7android8ResTable5Theme12free_packageEPNS1_12package_infoE(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 8;
  do {
    lVar1 = *(long *)(param_2 + lVar2);
    if (lVar1 != 0) break;
    lVar2 = lVar2 + 0x10;
    lVar1 = param_2;
  } while (lVar2 != 0x1008);
  free(lVar1);
  return;
}


