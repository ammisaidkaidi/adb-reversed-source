// Function: _ZN4absl12lts_2026052618debugging_internal17AddressIsReadableEPKv
// Address: 004d52f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052618debugging_internal17AddressIsReadableEPKv(ulong param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  
  if ((param_1 & 0xfffffffffffffff8) == 0) {
    return 0;
  }
  piVar4 = (int *)func_0x0099bce0();
  iVar1 = *piVar4;
  lVar5 = func_0x0099c620(0xe,0xffffffff,param_1 & 0xfffffffffffffff8,0,8);
  if (lVar5 == -1) {
    iVar2 = *piVar4;
    if ((iVar2 == 0xe) || (iVar2 == 0x16)) {
      *piVar4 = iVar1;
      return (ulong)CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != 0xe);
    }
  }
  else {
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00157d86,0x59,&UNK_00183943,&UNK_001680dc,&UNK_001839bb);
  }
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00157d86,0x5a,&UNK_00183943,&UNK_00164a0d,&UNK_001618ae);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}


