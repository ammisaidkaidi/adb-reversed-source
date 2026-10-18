// Function: _ZN7android5incfs12IncFsFileMapaSEOS1_
// Address: 00491cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _ZN7android5incfs12IncFsFileMapaSEOS1_(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == *(char *)(param_2 + 0xc)) {
    if (cVar1 != '\0') {
      _ZN7android4base10MappedFileaSEOS1_();
    }
  }
  else if (cVar1 == '\0') {
    _ZN7android4base10MappedFileC2EOS1_(param_1 + 6,param_2 + 6);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    _ZN7android4base10MappedFileD2Ev();
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_1 + 0x12),*(ulong *)(param_1 + 0xe) & 0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  lVar2 = *(long *)(param_1 + 0x16);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x18) = lVar2;
    _ZdaPvSt11align_val_t(lVar2,*(long *)(param_1 + 0x1a) - lVar2);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  return param_1;
}


