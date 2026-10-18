// Function: _ZN5Block8allocateEm
// Address: 003436f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN5Block8allocateEm(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != 0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_00180212,0x81,6,0,0xffffffff);
    uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    uVar4 = func_0x0032eb30(uVar4,&UNK_001818f4,0x1e);
    func_0x0032eb30(uVar4,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_40);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00180212,0x82,6,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00162ba6,4);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015aef8,2);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0016ad56,9);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001611c8,7);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(uVar4,0);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00162bab,0xc);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,lVar1);
      func_0x0032eb30(uVar4,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(auStack_40);
    } while( true );
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00180212,0x83,6,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
      uVar4 = func_0x0032eb30(uVar4,&UNK_00162ba6,4);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015aef8,2);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0015aefb,5);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001611c8,7);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(uVar4,0);
      uVar4 = func_0x0032eb30(uVar4,&UNK_0018622e,8);
      uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,lVar1);
      func_0x0032eb30(uVar4,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(auStack_40);
    } while( true );
  }
  if (param_2 != 0) {
    lVar3 = _Znam(param_2);
    lVar1 = *param_1;
    *param_1 = lVar3;
    if (lVar1 != 0) {
      _ZdaPvSt11align_val_t();
    }
    param_1[1] = param_2;
    param_1[2] = param_2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


