// Function: _ZN7android5incfs12IncFsFileMap6CreateEilmPKc
// Address: 00491ed0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char _ZN7android5incfs12IncFsFileMap6CreateEilmPKc
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined *param_5)

{
  char cVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined1 auStack_50 [24];
  char cStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN7android4base10MappedFile6CreateEilmi(auStack_50);
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == cStack_38) {
    if (cVar1 != '\0') {
      _ZN7android4base10MappedFileaSEOS1_(param_1 + 0x18,auStack_50);
    }
  }
  else if (cVar1 == '\0') {
    _ZN7android4base10MappedFileC2EOS1_(param_1 + 0x18,auStack_50);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    _ZN7android4base10MappedFileD2Ev();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (cStack_38 == '\x01') {
    _ZN7android4base10MappedFileD2Ev(auStack_50);
  }
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x01') {
    puVar2 = &UNK_00162ac9;
    if (param_5 != (undefined *)0x0) {
      puVar2 = param_5;
    }
    func_0x0032ea60(param_1 + 0x38,puVar2);
    *(undefined8 *)(param_1 + 0x50) = param_3;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return cVar1;
  }
  func_0x0099bd00();
  return '\x01';
}


