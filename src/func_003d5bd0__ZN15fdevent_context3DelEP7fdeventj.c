// Function: _ZN15fdevent_context3DelEP7fdeventj
// Address: 003d5bd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context3DelEP7fdeventj
               (long *param_1,long param_2,ushort param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 8) != 0) {
    param_4 = 6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00167a35,0x72,6,0,0xffffffff);
    uVar1 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    uVar1 = func_0x0032eb30(uVar1,&UNK_0017ba7b,0x25);
    func_0x0032eb30(uVar1,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_38);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,~param_3 & *(ushort *)(param_2 + 0xc));
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  func_0x0099bd00();
  _ZNK15fdevent_context17CheckLooperThreadEv();
  *(undefined8 *)(param_2 + 0x10) = extraout_RDX;
  *(undefined1 *)(param_2 + 0x18) = param_4;
  uVar1 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return;
}


