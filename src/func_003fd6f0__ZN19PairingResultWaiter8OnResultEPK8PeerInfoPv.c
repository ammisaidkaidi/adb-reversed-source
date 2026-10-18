// Function: _ZN19PairingResultWaiter8OnResultEPK8PeerInfoPv
// Address: 003fd6f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN19PairingResultWaiter8OnResultEPK8PeerInfoPv(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_30,&UNK_001896a0,0x32,6,0,0xffffffff);
    uVar2 = _ZN7android4base10LogMessage6streamEv(auStack_30);
    uVar2 = func_0x0032eb30(uVar2,&UNK_00187ed5,0x14);
    func_0x0032eb30(uVar2,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_30);
  }
  _ZNSt3__15mutex4lockEv(param_2);
  if (param_1 != 0) {
    func_0x0099bda0(param_2 + 0x5a,param_1,0x2000);
  }
  *(ushort *)(param_2 + 0x58) = 0x101 - (ushort)(param_1 == 0);
  _ZNSt3__115recursive_mutex6unlockEv(param_2);
  _ZNSt3__118condition_variable10notify_oneEv(param_2 + 0x28);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


