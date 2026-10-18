// Function: LZ4_compress_HC_continue_destSize
// Address: 004adab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_compress_HC_continue_destSize
               (long param_1,ulong param_2,undefined8 param_3,int *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (*(ulong *)(param_1 + 0x40008) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x40000) + (ulong)*(uint *)(param_1 + 0x40018);
    if (0x40000000 < uVar6) {
      uVar6 = 0;
      func_0x0099bdb0(param_1,0,0x20000);
      func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    }
    uVar11 = (int)uVar6 + 0x10000;
    *(uint *)(param_1 + 0x40020) = uVar11;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(uint *)(param_1 + 0x40018) = uVar11;
    *(uint *)(param_1 + 0x4001c) = uVar11;
    uVar4 = param_2;
    uVar6 = param_2;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x40018);
    uVar4 = *(ulong *)(param_1 + 0x40008);
    uVar6 = *(ulong *)(param_1 + 0x40000);
  }
  uVar4 = uVar6 - uVar4;
  if (0x80000000 < uVar11 + uVar4) {
    uVar7 = 0x10000;
    if (uVar4 < 0x10000) {
      uVar7 = uVar4;
    }
    LZ4_loadDictHC(param_1,uVar6 - uVar7,uVar7 & 0xffffffff);
    uVar6 = *(ulong *)(param_1 + 0x40000);
  }
  if (param_2 == uVar6) {
    uVar4 = *(ulong *)(param_1 + 0x40010);
    iVar12 = *(int *)(param_1 + 0x40018);
    uVar11 = *(uint *)(param_1 + 0x4001c);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x40008);
    if (uVar6 < uVar4 + 4) {
      uVar11 = *(uint *)(param_1 + 0x40018);
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x40018);
      if (1 < (ushort)((short)*(undefined4 *)(param_1 + 0x40024) - 1U)) {
        uVar9 = (((int)uVar6 - (int)uVar4) + uVar11) - 3;
        uVar3 = *(uint *)(param_1 + 0x40020);
        uVar7 = (ulong)uVar3;
        if (uVar3 < uVar9) {
          lVar5 = uVar4 - uVar11;
          uVar8 = uVar7;
          if ((uVar9 - uVar3 & 1) != 0) {
            uVar8 = (ulong)((uint)(*(int *)(lVar5 + uVar7) * -0x61c8864f) >> 0x11);
            uVar1 = uVar3 - *(int *)(param_1 + uVar8 * 4);
            uVar10 = 0xffff;
            if (uVar1 < 0xffff) {
              uVar10 = uVar1;
            }
            *(short *)(param_1 + 0x20000 + (uVar7 & 0xffff) * 2) = (short)uVar10;
            *(uint *)(param_1 + uVar8 * 4) = uVar3;
            uVar8 = uVar7 + 1;
          }
          if ((ulong)uVar9 - 1 != uVar7) {
            do {
              uVar7 = (ulong)((uint)(*(int *)(lVar5 + uVar8) * -0x61c8864f) >> 0x11);
              iVar12 = (int)uVar8;
              uVar3 = iVar12 - *(int *)(param_1 + uVar7 * 4);
              if (0xfffe < uVar3) {
                uVar3 = 0xffff;
              }
              *(short *)(param_1 + 0x20000 + (uVar8 & 0xffff) * 2) = (short)uVar3;
              *(int *)(param_1 + uVar7 * 4) = iVar12;
              iVar12 = iVar12 + 1;
              uVar7 = (ulong)((uint)(*(int *)(lVar5 + 1 + uVar8) * -0x61c8864f) >> 0x11);
              uVar3 = iVar12 - *(int *)(param_1 + uVar7 * 4);
              if (0xfffe < uVar3) {
                uVar3 = 0xffff;
              }
              *(short *)(param_1 + 0x20000 + (ulong)(ushort)iVar12 * 2) = (short)uVar3;
              *(int *)(param_1 + uVar7 * 4) = iVar12;
              uVar8 = uVar8 + 2;
            } while (uVar8 != uVar9);
          }
        }
      }
    }
    *(uint *)(param_1 + 0x4001c) = uVar11;
    *(ulong *)(param_1 + 0x40010) = uVar4;
    iVar12 = ((int)uVar6 - (int)uVar4) + uVar11;
    *(int *)(param_1 + 0x40018) = iVar12;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(int *)(param_1 + 0x40020) = iVar12;
    *(undefined8 *)(param_1 + 0x40028) = 0;
  }
  uVar6 = (long)*param_4 + param_2;
  if ((uVar4 < uVar6) && (uVar7 = (iVar12 - uVar11) + uVar4, param_2 < uVar7)) {
    if (uVar7 < uVar6) {
      uVar6 = uVar7;
    }
    uVar3 = (int)uVar6 - (int)uVar4;
    iVar2 = uVar11 + uVar3;
    *(int *)(param_1 + 0x4001c) = iVar2;
    *(ulong *)(param_1 + 0x40010) = uVar3 + uVar4;
    if ((uint)(iVar12 - iVar2) < 4) {
      *(int *)(param_1 + 0x4001c) = iVar12;
      *(undefined8 *)(param_1 + 0x40010) = *(undefined8 *)(param_1 + 0x40008);
    }
  }
  func_0x004a84b0(param_1,param_2,param_3,param_4,param_5,(int)*(short *)(param_1 + 0x40024),2);
  return;
}


