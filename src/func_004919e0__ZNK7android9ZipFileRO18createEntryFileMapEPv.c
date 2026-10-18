// Function: _ZNK7android9ZipFileRO18createEntryFileMapEPv
// Address: 004919e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZNK7android9ZipFileRO18createEntryFileMapEPv(undefined8 *param_1,short *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = _Z17GetFileDescriptorP10ZipArchive(*param_1);
  uVar1 = *(undefined4 *)(param_2 + (ulong)(*param_2 == 0) * 2 + 0x18);
  uVar4 = _Znwm(0x30);
  _ZN7android7FileMapC2Ev(uVar4);
  cVar2 = _ZN7android7FileMap6createEPKcilmb
                    (uVar4,param_1[1],uVar3,*(undefined8 *)(param_2 + 0xc),uVar1,1);
  if (cVar2 == '\0') {
    _ZN7android7FileMapD2Ev(uVar4);
    _ZdaPvSt11align_val_t(uVar4,0x30);
    uVar4 = 0;
  }
  return uVar4;
}


