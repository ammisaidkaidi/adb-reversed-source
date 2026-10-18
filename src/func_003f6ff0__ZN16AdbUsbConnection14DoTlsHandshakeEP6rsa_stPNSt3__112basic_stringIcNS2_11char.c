// Function: _ZN16AdbUsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 003f6ff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN16AdbUsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
          (void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined1 *)0x6;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar3;
    puVar5 = auStack_30;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar5,&UNK_00184aaa,0x51,6,0,0xffffffff);
    uVar4 = _ZN7android4base10LogMessage6streamEv(puVar5);
    func_0x0032eb30(uVar4,&UNK_001706a6,0x1d);
    _ZN7android4base10LogMessageD2Ev();
    *puVar3 = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return 0;
  }
  func_0x0099bd00();
                    /* WARNING: Could not recover jumptable at 0x003f70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(long **)(puVar5 + 8) + 0x38))();
  return uVar4;
}


