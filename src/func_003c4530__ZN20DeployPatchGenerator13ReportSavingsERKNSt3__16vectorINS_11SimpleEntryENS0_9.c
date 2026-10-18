// Function: _ZN20DeployPatchGenerator13ReportSavingsERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEEm
// Address: 003c4530
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c4640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c4645) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN20DeployPatchGenerator13ReportSavingsERKNSt3__16vectorINS_11SimpleEntryENS0_9allocatorIS2_EEEEm
               (undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *param_2;
  lVar4 = param_2[1] - lVar1;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    if (lVar4 == 0x10) {
      uVar2 = 0;
      lVar3 = 0;
    }
    else {
      plVar5 = (long *)(lVar1 + 0x18);
      uVar2 = 0;
      lVar3 = 0;
      do {
        if (plVar5[-2] != 0) {
          lVar3 = lVar3 + 1;
        }
        if (*plVar5 != 0) {
          lVar3 = lVar3 + 1;
        }
        uVar2 = uVar2 + 2;
        plVar5 = plVar5 + 4;
      } while ((lVar4 >> 4 & 0xfffffffffffffffeU) != uVar2);
      if ((lVar4 >> 4 & 1U) == 0) goto code_r0x003c45d1;
    }
    if (*(long *)(lVar1 + 8 + uVar2 * 0x10) != 0) {
      lVar3 = lVar3 + 1;
    }
  }
code_r0x003c45d1:
  fprintf(_stderr,&UNK_00162d78,lVar3);
  return;
}


