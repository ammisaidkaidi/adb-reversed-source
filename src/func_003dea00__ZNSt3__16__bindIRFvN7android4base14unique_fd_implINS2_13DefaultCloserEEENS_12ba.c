// Function: _ZNSt3__16__bindIRFvN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESB_EJRKNS_12placeholders4__phILi1EEERSB_SJ_EED2Ev
// Address: 003dea00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__16__bindIRFvN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESB_EJRKNS_12placeholders4__phILi1EEERSB_SJ_EED2Ev
               (long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_1 + 0x30),*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  free(*(undefined8 *)(param_1 + 0x18),*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  return;
}


