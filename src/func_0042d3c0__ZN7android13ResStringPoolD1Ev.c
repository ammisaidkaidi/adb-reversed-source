// Function: _ZN7android13ResStringPoolD1Ev
// Address: 0042d3c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android13ResStringPoolD1Ev(undefined8 *param_1)

{
  *param_1 = 0x99f820;
  _ZN7android13ResStringPool6uninitEv();
  func_0x0043d990(param_1 + 0x1b);
  pthread_mutex_destroy(param_1 + 7);
  return;
}


