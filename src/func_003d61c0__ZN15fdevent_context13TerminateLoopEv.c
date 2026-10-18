// Function: _ZN15fdevent_context13TerminateLoopEv
// Address: 003d61c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context13TerminateLoopEv(long *param_1)

{
  LOCK();
  *(undefined1 *)(param_1 + 3) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x003d61cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


