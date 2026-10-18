// Function: _ZN15fdevent_context3AddEP7fdeventj
// Address: 003d5b00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context3AddEP7fdeventj(long *param_1,long param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *unaff_RBX;
  ulong unaff_R12;
  long *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 *puStack_60;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 8) != 0) {
    unaff_RBX = auStack_38;
    unaff_R12 = (ulong)param_3;
    param_4 = 6;
    puStack_40 = &UNK_003d5b7f;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_00167a35,0x6d,6,0,0xffffffff);
    puStack_40 = &UNK_003d5b87;
    uVar1 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    puStack_40 = &UNK_003d5b9b;
    uVar1 = func_0x0032eb30(uVar1,&UNK_0017ba7b,0x25);
    puStack_40 = &UNK_003d5baf;
    func_0x0032eb30(uVar1,&UNK_0015ae05,1);
    puStack_40 = &UNK_003d5bb7;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = param_1;
    unaff_R15 = param_2;
  }
  puStack_40 = &UNK_003d5b2d;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3 | *(ushort *)(param_2 + 0xc));
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  puStack_40 = &UNK_003d5bca;
  func_0x0099bd00();
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = unaff_RBX;
  uStack_58 = unaff_R12;
  plStack_50 = unaff_R14;
  lStack_48 = unaff_R15;
  puStack_40 = &stack0xfffffffffffffff8;
  if ((extraout_RDX & 8) != 0) {
    param_4 = 6;
    puStack_40 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_70,&UNK_00167a35,0x72,6,0,0xffffffff);
    uVar1 = _ZN7android4base10LogMessage6streamEv(auStack_70);
    uVar1 = func_0x0032eb30(uVar1,&UNK_0017ba7b,0x25);
    func_0x0032eb30(uVar1,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_70);
  }
  (**(code **)(*param_1 + 0x20))();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return;
  }
  func_0x0099bd00();
  _ZNK15fdevent_context17CheckLooperThreadEv();
  *(undefined8 *)(param_2 + 0x10) = extraout_RDX_00;
  *(undefined1 *)(param_2 + 0x18) = param_4;
  uVar1 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return;
}


