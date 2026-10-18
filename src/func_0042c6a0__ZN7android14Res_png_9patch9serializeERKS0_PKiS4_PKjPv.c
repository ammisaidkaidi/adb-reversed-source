// Function: _ZN7android14Res_png_9patch9serializeERKS0_PKiS4_PKjPv
// Address: 0042c6a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android14Res_png_9patch9serializeERKS0_PKiS4_PKjPv
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_5 = *param_1;
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  param_5[3] = param_1[3];
  param_5[4] = uVar2;
  param_5[5] = uVar3;
  param_5[6] = uVar4;
  func_0x0099bda0(param_5 + 8,param_2,(ulong)*(byte *)((long)param_1 + 1) << 2);
  bVar1 = *(byte *)((long)param_1 + 1);
  func_0x0099bda0(param_5 + (ulong)bVar1 + 8,param_3,(ulong)*(byte *)((long)param_1 + 2) << 2);
  func_0x0099bda0(param_5 + (ulong)bVar1 + 8 + *(byte *)((long)param_1 + 2),param_4,
                  (ulong)*(byte *)((long)param_1 + 3) << 2);
  param_5[1] = 0x20;
  param_5[2] = (uint)*(byte *)((long)param_5 + 1) * 4 + 0x20;
  param_5[7] = ((uint)*(byte *)((long)param_5 + 2) + (uint)*(byte *)((long)param_5 + 1)) * 4 + 0x20;
  return;
}


