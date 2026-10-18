// Function: _ZN4absl12lts_202605267ToUDateENS0_4TimeE
// Address: 004c1d60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004cca84) */

double _ZN4absl12lts_202605267ToUDateENS0_4TimeE(long param_1,uint param_2)

{
  if (param_2 == 0xffffffff) {
    return *(double *)(&UNK_00156d10 + (param_1 >> 0x3f) * -8);
  }
  return ((double)param_2 + (double)param_1 * 4000000000.0) / 4000000.0;
}


