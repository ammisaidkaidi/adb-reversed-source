// Function: _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv
// Address: 004bc050
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x28) == 3) {
    cVar1 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv();
    if (cVar1 != '\0') {
      _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(param_1);
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  if ((*(ulong *)(lVar3 + 0x88) & 1) == 0) {
    lVar2 = lVar3 + 0x90;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar3,lVar2,*(ulong *)(lVar3 + 0x88) >> 1,*(undefined1 *)(lVar3 + 0x110));
  if (*(int *)(*(long *)(param_1 + 8) + 0x28) == 3) {
    cVar1 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv();
    if (cVar1 != '\0') {
      _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
      if (*(char *)(*(long *)(param_1 + 8) + 0x81) == '\x01') {
        _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
      }
      _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
      *(undefined1 *)(*(long *)(lVar3 + 8) + 0x81) = 1;
      return;
    }
  }
  return;
}


