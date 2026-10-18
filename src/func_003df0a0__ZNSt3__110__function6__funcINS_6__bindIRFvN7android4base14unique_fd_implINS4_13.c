// Function: _ZNSt3__110__function6__funcINS_6__bindIRFvN7android4base14unique_fd_implINS4_13DefaultCloserEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEJRKNS_12placeholders4__phILi1EEERSD_EEEFvS7_EED2Ev
// Address: 003df0a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__110__function6__funcINS_6__bindIRFvN7android4base14unique_fd_implINS4_13DefaultCloserEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEJRKNS_12placeholders4__phILi1EEERSD_EEEFvS7_EED2Ev
               (undefined8 *param_1)

{
  *param_1 = 0x99eaf8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  free(param_1[4],param_1[2] & 0xfffffffffffffffe);
  return;
}


