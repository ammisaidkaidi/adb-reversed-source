// Function: _ZNK7android9ZipFileRO15uncompressEntryEPvS1_m
// Address: 00491b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK7android9ZipFileRO15uncompressEntryEPvS1_m(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _Z15ExtractToMemoryP10ZipArchivePK8ZipEntryPhm(*param_1);
  if (iVar1 != 0) {
    uVar2 = _Z15ErrorCodeStringi(iVar1);
    __android_log_print(5,&UNK_001699cb,&UNK_00170a28,uVar2);
  }
  return iVar1 == 0;
}


