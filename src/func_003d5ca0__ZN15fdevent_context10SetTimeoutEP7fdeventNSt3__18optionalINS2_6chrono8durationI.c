// Function: _ZN15fdevent_context10SetTimeoutEP7fdeventNSt3__18optionalINS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEEEE
// Address: 003d5ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context10SetTimeoutEP7fdeventNSt3__18optionalINS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEEEE
               (undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  _ZNK15fdevent_context17CheckLooperThreadEv();
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined1 *)(param_2 + 0x18) = param_4;
  uVar1 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return;
}


