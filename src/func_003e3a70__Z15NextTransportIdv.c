// Function: _Z15NextTransportIdv
// Address: 003e3a70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z15NextTransportIdv(void)

{
  long lVar1;
  
  LOCK();
  lVar1 = lRam00000000009fa518;
  lRam00000000009fa518 = lRam00000000009fa518 + 1;
  UNLOCK();
  return lVar1;
}


