// Function: pairing_auth_destroy
// Address: 00428a60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void pairing_auth_destroy(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_28,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_28);
    uVar3 = func_0x0032eb30(uVar3,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar3,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_28);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return;
    }
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      EVP_AEAD_CTX_cleanup(lVar1);
      _ZdaPvSt11align_val_t(lVar1,0x250);
    }
    lVar1 = param_1[4];
    param_1[4] = 0;
    if (lVar1 != 0) {
      SPAKE2_CTX_free();
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      param_1[1] = lVar1;
      _ZdaPvSt11align_val_t(lVar1,param_1[2] - lVar1);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      free(param_1,0x30);
      return;
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


