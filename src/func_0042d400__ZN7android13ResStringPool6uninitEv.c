// Function: _ZN7android13ResStringPool6uninitEv
// Address: 0042d400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android13ResStringPool6uninitEv(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined4 *)(param_1 + 8) = 0xffffffed;
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != 0) && (lVar6 = *(long *)(param_1 + 0xa8), lVar6 != 0)) {
    if (*(int *)(lVar3 + 8) != 0) {
      uVar7 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0xa8) + uVar7 * 8) != 0) {
          func_0x0099c1f0();
          *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar7 * 8) = 0;
          lVar3 = *(long *)(param_1 + 0x18);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(lVar3 + 8));
      lVar6 = *(long *)(param_1 + 0xa8);
    }
    func_0x0099c1f0(lVar6);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0099c1f0();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0x128) != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      _ZdaPvSt11align_val_t(puVar2,0x28);
      puVar2 = puVar1;
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    uVar7 = *(ulong *)(param_1 + 0xe0);
    if (uVar7 != 0) {
      uVar4 = (ulong)((uint)uVar7 & 3);
      if (uVar7 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar5 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + 8 + uVar5 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10 + uVar5 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x18 + uVar5 * 8) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
        if (uVar4 == 0) goto code_r0x0042d587;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar5 * 8) = 0;
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
code_r0x0042d587:
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    _ZdaPvSt11align_val_t(puVar2,0x28);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar7 = *(ulong *)(param_1 + 0x108);
  if (uVar7 != 0) {
    uVar4 = (ulong)((uint)uVar7 & 3);
    if (uVar7 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x100) + uVar5 * 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + 8 + uVar5 * 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10 + uVar5 * 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x18 + uVar5 * 8) = 0;
        uVar5 = uVar5 + 4;
      } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      if (uVar4 == 0) goto code_r0x0042d667;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x100) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
code_r0x0042d667:
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}


