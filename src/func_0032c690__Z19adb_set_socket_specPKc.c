// Function: _Z19adb_set_socket_specPKc
// Address: 0032c690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z19adb_set_socket_specPKc(undefined1 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = param_1;
  if (puRam0000000000a00520 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x6;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar3 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar4;
      puVar7 = auStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar7,&UNK_00183124,0x45,6,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(puVar7);
      uVar5 = func_0x0032eb30(uVar5,&UNK_0017b6a5,0x31);
      uVar6 = func_0x0099bcf0(param_1);
      uVar5 = func_0x0032eb30(uVar5,param_1,uVar6);
      uVar5 = func_0x0032eb30(uVar5,&UNK_0017032b,6);
      lVar2 = (long)puRam0000000000a00520;
      uVar6 = func_0x0099bcf0(puRam0000000000a00520);
      uVar5 = func_0x0032eb30(uVar5,lVar2,uVar6);
      func_0x0032eb30(uVar5,&UNK_001692c7,1);
      _ZN7android4base10LogMessageD2Ev();
      *puVar4 = uVar1;
    }
  }
  puRam0000000000a00520 = param_1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  puRam0000000000a00528 = puVar7;
  return;
}


