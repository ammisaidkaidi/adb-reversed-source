// Function: _ZN7android8ResTable5Theme12copy_packageEPNS1_12package_infoE
// Address: 00432f70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN7android8ResTable5Theme12copy_packageEPNS1_12package_infoE(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = func_0x0099c1e0(0x1000);
  lVar5 = 8;
  do {
    uVar1 = *(ulong *)(param_2 + -8 + lVar5);
    *(ulong *)(lVar3 + -8 + lVar5) = uVar1;
    lVar2 = *(long *)(param_2 + lVar5);
    if (uVar1 >> 1 < 0x7fffffff && lVar2 != 0) {
      uVar4 = func_0x0099c1e0(uVar1 * 0x18);
      func_0x0099bda0(uVar4,lVar2,uVar1 * 0x18);
    }
    else {
      uVar4 = 0;
    }
    *(undefined8 *)(lVar3 + lVar5) = uVar4;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x1008);
  return lVar3;
}


