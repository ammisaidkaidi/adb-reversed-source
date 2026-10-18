// Function: _ZN7android9ZipFileROD2Ev
// Address: 00491390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android9ZipFileROD2Ev(undefined8 *param_1)

{
  _Z12CloseArchiveP10ZipArchive(*param_1);
  if (param_1[1] != 0) {
    free();
    return;
  }
  return;
}


