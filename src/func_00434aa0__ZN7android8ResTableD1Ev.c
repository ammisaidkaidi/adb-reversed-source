// Function: _ZN7android8ResTableD1Ev
// Address: 00434aa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00434b05: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00434b0a) */

void _ZN7android8ResTableD1Ev(long param_1)

{
  _ZN7android8ResTable6uninitEv();
  *(undefined8 *)(param_1 + 0xc0) = 0x99fa00;
  _ZN7android10VectorImpl13finish_vectorEv(param_1 + 0xc0);
  _ZN7android16SortedVectorImplD1Ev(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x98) = 0x99fa00;
  _ZN7android10VectorImpl13finish_vectorEv(param_1 + 0x98);
  _ZN7android16SortedVectorImplD1Ev(param_1 + 0x98);
  pthread_mutex_destroy(param_1 + 0x28);
  return;
}


