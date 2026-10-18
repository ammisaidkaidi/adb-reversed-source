// Function: _ZNK7android9ZipFileRO15uncompressEntryEPvi
// Address: 00491bb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK7android9ZipFileRO15uncompressEntryEPvi(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _Z18ExtractEntryToFileP10ZipArchivePK8ZipEntryi(*param_1);
  if (iVar1 != 0) {
    uVar2 = _Z15ErrorCodeStringi(iVar1);
    __android_log_print(5,&UNK_001699cb,&UNK_00159a1e,uVar2);
  }
  return iVar1 == 0;
}


