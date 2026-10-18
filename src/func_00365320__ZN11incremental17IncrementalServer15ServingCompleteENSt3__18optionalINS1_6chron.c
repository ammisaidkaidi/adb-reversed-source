// Function: _ZN11incremental17IncrementalServer15ServingCompleteENSt3__18optionalINS1_6chrono10time_pointINS3_12steady_clockENS3_8durationIxNS1_5ratioILl1ELl1000000000EEEEEEEEEii
// Address: 00365320
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN11incremental17IncrementalServer15ServingCompleteENSt3__18optionalINS1_6chrono10time_pointINS3_12steady_clockENS3_8durationIxNS1_5ratioILl1ELl1000000000EEEEEEEEEii
          (long param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  long lVar2;
  long extraout_RDX;
  long in_FS_OFFSET;
  double dVar3;
  double dVar4;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_1 + 0x98) = 1;
  lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
  if (((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) {
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 != '\0') {
      puStack_70 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *puStack_70;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016790b,0x222,1,0,0xffffffff);
      uStack_68 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      dVar3 = (double)*(long *)(param_1 + 0x70) * 0.0009765625 * 0.0009765625;
      lVar2 = SUB168(SEXT816(lVar2 - param_2) * SEXT816(0x20c49ba5e353f7cf),8);
      if ((param_3 & 1) != 0) goto code_r0x0036542b;
      dVar4 = 0.0;
      goto code_r0x00365449;
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    dVar3 = (double)func_0x0099bd00();
    lVar2 = extraout_RDX;
code_r0x0036542b:
    dVar4 = (double)((lVar2 >> 7) - (lVar2 >> 0x3f)) / 1000.0;
code_r0x00365449:
    _ZN7android4base12StringPrintfEPKcz(dVar3,dVar4,&bStack_58,&UNK_00178824,param_4,param_5);
    func_0x0032e5a0(uStack_68,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puStack_70 = uStack_5c;
  }
  return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
}


