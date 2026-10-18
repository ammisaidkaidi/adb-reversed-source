// Function: _Z25adb_auth_get_private_keysv
// Address: 003f72e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _Z25adb_auth_get_private_keysv(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = uRam0000000000a00738;
  _ZNSt3__15mutex4lockEv();
  plVar7 = (long *)*plRam0000000000a00740;
  plVar11 = plRam0000000000a00740 + 1;
  if (plVar7 == plVar11) {
    lVar8 = 0;
    lVar9 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar8 = param_1[1];
      uVar6 = 0;
      if (param_1[2] != lVar8) {
        uVar6 = (param_1[2] - lVar8) * 0x20 - 1;
      }
      uVar4 = lVar5 + param_1[4];
      if (uVar6 == uVar4) {
        func_0x003fb700();
        lVar8 = param_1[1];
        uVar4 = param_1[4] + param_1[5];
      }
      lVar8 = *(long *)(lVar8 + (uVar4 >> 8) * 8);
      uVar6 = (ulong)(((uint)uVar4 & 0xff) << 4);
      *(long *)(lVar8 + uVar6) = plVar7[7];
      lVar9 = plVar7[8];
      *(long *)(lVar8 + 8 + uVar6) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      lVar5 = param_1[5] + 1;
      param_1[5] = lVar5;
      plVar3 = (long *)plVar7[1];
      plVar10 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar10[2];
          bVar12 = plVar10 != (long *)*plVar7;
          plVar10 = plVar7;
        } while (bVar12);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != plVar11);
    lVar8 = param_1[1];
    lVar9 = param_1[2];
    uVar6 = lVar5 + param_1[4];
  }
  uVar4 = 0;
  if (lVar9 != lVar8) {
    uVar4 = (lVar9 - lVar8) * 0x20 - 1;
  }
  if (uVar4 == uVar6) {
    func_0x003fb700(param_1);
    lVar8 = param_1[1];
    uVar6 = param_1[4] + param_1[5];
  }
  puVar1 = (undefined8 *)(*(long *)(lVar8 + (uVar6 >> 8) * 8) + (ulong)(((uint)uVar6 & 0xff) << 4));
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[5] = param_1[5] + 1;
  _ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return param_1;
}


