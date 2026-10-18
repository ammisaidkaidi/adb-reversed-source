// Function: _ZN4absl12lts_202605268DurationdVEd
// Address: 004cc6e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_202605268DurationdVEd(double param_1,ulong *param_2)

{
  double dVar1;
  double dVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  if (param_1 == 0.0 || (uint)param_2[1] == 0xffffffff) {
    iVar4 = -1;
    if (NAN(param_1)) {
      uVar5 = 0x8000000000000000;
    }
    else {
      uVar5 = 0x7fffffffffffffff - ((long)((ulong)param_1 ^ *param_2) >> 0x3f);
    }
    goto code_r0x004cc83f;
  }
  dStack_20 = (double)(uint)param_2[1] / param_1;
  dVar1 = (double)func_0x0099c6e0(SUB84((double)(long)*param_2 / param_1,0),&dStack_30);
  dStack_28 = dStack_30;
  dVar1 = (double)func_0x0099c6e0(SUB84(dVar1 + dStack_20 / 4000000000.0,0),&dStack_38);
  dVar1 = (double)func_0x0099b070(SUB84(dVar1 * 4000000000.0,0));
  dStack_28 = dStack_28 + dStack_38;
  iVar4 = -1;
  if (dStack_28 < 9.223372036854776e+18) {
    uVar5 = 0x8000000000000000;
    if (dStack_28 <= -9.223372036854776e+18) goto code_r0x004cc83f;
    dVar2 = (double)((long)dVar1 / 4000000000) + (double)(long)dStack_28;
    if (dVar2 < 9.223372036854776e+18) {
      uVar5 = 0x8000000000000000;
      if (-9.223372036854776e+18 < dVar2) {
        lVar3 = (long)dVar1 % 4000000000;
        uVar5 = (lVar3 >> 0x3f) + (long)dVar2;
        iVar4 = (int)lVar3 + -0x1194d800;
        if (-1 < lVar3) {
          iVar4 = (int)lVar3;
        }
      }
      goto code_r0x004cc83f;
    }
  }
  uVar5 = 0x7fffffffffffffff;
code_r0x004cc83f:
  *param_2 = uVar5;
  *(int *)(param_2 + 1) = iVar4;
  return param_2;
}


