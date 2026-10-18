// Function: _ZN11ServiceInfoC2ERKS_
// Address: 00402020
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11ServiceInfoC2ERKS_(undefined4 *param_1,byte *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    param_1[7] = uVar3;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
  }
  else {
    func_0x00330340(param_1 + 6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
  }
  else {
    func_0x00330340(param_1 + 0xc,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  }
  *(byte *)(param_1 + 0x13) = param_2[0x4c];
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  if (*(long *)(param_2 + 0x68) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x58);
    if (0x1fffffffffffffff < uVar1) goto code_r0x004021d8;
    uVar6 = _Znwm(uVar1 * 8);
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(ulong *)(param_1 + 0x16) = uVar1;
    if (uVar1 != 0) {
      func_0x0099bdb0(uVar6,0,uVar1 * 8);
    }
    func_0x00401920(param_1 + 0x14,*(undefined8 *)(param_2 + 0x60));
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x68);
  }
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  if (*(long *)(param_2 + 0x98) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x88);
    if (0x1fffffffffffffff < uVar1) {
code_r0x004021d8:
      func_0x0032fc40();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = _Znwm(uVar1 * 8);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(ulong *)(param_1 + 0x22) = uVar1;
    if (uVar1 != 0) {
      func_0x0099bdb0(uVar6,0,uVar1 * 8);
    }
    func_0x00401d20(param_1 + 0x20,*(undefined8 *)(param_2 + 0x90));
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x98);
  }
  return;
}


