// Function: _ZN7android14Res_png_9patch9serializeERKS0_PKiS4_PKj
// Address: 0042c5c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN7android14Res_png_9patch9serializeERKS0_PKiS4_PKj
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  bVar1 = *(byte *)((long)param_1 + 1);
  bVar2 = *(byte *)((long)param_1 + 2);
  bVar3 = *(byte *)((long)param_1 + 3);
  puVar7 = (undefined4 *)func_0x0099c4d0(1,((uint)bVar2 + (uint)bVar1 + (uint)bVar3) * 4 + 0x20);
  *puVar7 = *param_1;
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  puVar7[3] = param_1[3];
  puVar7[4] = uVar4;
  puVar7[5] = uVar5;
  puVar7[6] = uVar6;
  func_0x0099bda0(puVar7 + 8,param_2,(ulong)bVar1 * 4);
  func_0x0099bda0(puVar7 + (ulong)bVar1 + 8,param_3,(ulong)bVar2 * 4);
  func_0x0099bda0(puVar7 + (ulong)bVar1 + 8 + bVar2,param_4,(ulong)bVar3 << 2);
  puVar7[1] = 0x20;
  puVar7[2] = (uint)*(byte *)((long)puVar7 + 1) * 4 + 0x20;
  puVar7[7] = ((uint)*(byte *)((long)puVar7 + 2) + (uint)*(byte *)((long)puVar7 + 1)) * 4 + 0x20;
  return puVar7;
}


