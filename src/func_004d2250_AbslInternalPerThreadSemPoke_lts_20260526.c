// Function: AbslInternalPerThreadSemPoke_lts_20260526
// Address: 004d2250
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void AbslInternalPerThreadSemPoke_lts_20260526(long param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = func_0x0099c620(0xca,param_1 + 0x80,0x81,1);
  if (lVar2 < 0) {
    piVar3 = (int *)func_0x0099bce0();
    if (0 < *piVar3) {
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


