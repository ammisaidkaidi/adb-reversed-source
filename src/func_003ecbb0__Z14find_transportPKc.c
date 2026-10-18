// Function: _Z14find_transportPKc
// Address: 003ecbb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z14find_transportPKc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar2 = lRam0000000000a006d8;
  lVar5 = lRam0000000000a006d8;
  do {
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 == lVar2) {
      lVar6 = 0;
      break;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar6 + 0x28) & 1) == 0) {
      lVar4 = lVar6 + 0x29;
    }
    else {
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    iVar3 = func_0x0099bdd0(param_1,lVar4);
  } while (iVar3 != 0);
  _ZNSt3__115recursive_mutex6unlockEv(uVar1);
  return lVar6;
}


