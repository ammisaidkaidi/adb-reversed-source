// Function: _ZN7android8ResTable5Theme5setToERKS1_
// Address: 00433b30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android8ResTable5Theme5setToERKS1_(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == *param_2) {
    lVar7 = 0;
    do {
      lVar1 = param_1[lVar7 + 1];
      if (lVar1 != 0) {
        lVar5 = 8;
        do {
          if (*(long *)(lVar1 + lVar5) != 0) {
            func_0x0099c1f0();
          }
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != 0x1008);
        func_0x0099c1f0(lVar1);
      }
      lVar1 = param_2[lVar7 + 1];
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = func_0x0099c1e0(0x1000);
        lVar6 = 8;
        do {
          uVar2 = *(ulong *)(lVar1 + -8 + lVar6);
          *(ulong *)(lVar5 + -8 + lVar6) = uVar2;
          lVar3 = *(long *)(lVar1 + lVar6);
          if (lVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            if (uVar2 < 0xfffffffe) {
              uVar4 = func_0x0099c1e0(uVar2 * 0x18);
              func_0x0099bda0(uVar4,lVar3,uVar2 * 0x18);
            }
          }
          *(undefined8 *)(lVar5 + lVar6) = uVar4;
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != 0x1008);
      }
      param_1[lVar7 + 1] = lVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xff);
  }
  else {
    lVar7 = 0;
    do {
      lVar1 = param_1[lVar7 + 1];
      if (lVar1 != 0) {
        lVar5 = 8;
        do {
          if (*(long *)(lVar1 + lVar5) != 0) {
            func_0x0099c1f0();
          }
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != 0x1008);
        func_0x0099c1f0(lVar1);
      }
      if ((lVar7 == 0) && (lVar1 = param_2[1], lVar1 != 0)) {
        lVar5 = func_0x0099c1e0(0x1000);
        lVar6 = 8;
        do {
          uVar2 = *(ulong *)(lVar1 + -8 + lVar6);
          *(ulong *)(lVar5 + -8 + lVar6) = uVar2;
          lVar3 = *(long *)(lVar1 + lVar6);
          if (uVar2 < 0xfffffffe && lVar3 != 0) {
            uVar4 = func_0x0099c1e0(uVar2 * 0x18);
            func_0x0099bda0(uVar4,lVar3,uVar2 * 0x18);
          }
          else {
            uVar4 = 0;
          }
          *(undefined8 *)(lVar5 + lVar6) = uVar4;
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != 0x1008);
      }
      else {
        lVar5 = 0;
      }
      param_1[lVar7 + 1] = lVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xff);
  }
  *(int *)(param_1 + 0x100) = (int)param_2[0x100];
  return 0;
}


