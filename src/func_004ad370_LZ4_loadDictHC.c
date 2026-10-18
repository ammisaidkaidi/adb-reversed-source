// Function: LZ4_loadDictHC
// Address: 004ad370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_loadDictHC(ulong param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar8 = 0x10000;
  if ((int)param_3 < 0x10000) {
    uVar8 = param_3;
  }
  lVar11 = param_2 + -0x10000 + (ulong)param_3;
  if ((int)param_3 < 0x10001) {
    lVar11 = param_2;
  }
  uVar1 = *(ushort *)(param_1 + 0x40024);
  if ((param_1 & 7) == 0 && param_1 != 0) {
    func_0x0099bdb0(param_1,0,0x40030);
  }
  if ((short)uVar1 < 1) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if (uVar1 < 0xc) {
      uVar2 = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x40024) = uVar2;
  uVar12 = (ulong)*(uint *)(param_1 + 0x40018) +
           (*(long *)(param_1 + 0x40000) - *(long *)(param_1 + 0x40008));
  if (0x40000000 < uVar12) {
    func_0x0099bdb0(param_1,0,0x20000);
    func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    uVar12 = 0;
  }
  uVar3 = (int)uVar12 + 0x10000;
  *(uint *)(param_1 + 0x40020) = uVar3;
  *(long *)(param_1 + 0x40008) = lVar11;
  *(long *)(param_1 + 0x40010) = lVar11;
  *(uint *)(param_1 + 0x40018) = uVar3;
  *(uint *)(param_1 + 0x4001c) = uVar3;
  *(long *)(param_1 + 0x40000) = (int)uVar8 + lVar11;
  if ((ushort)(uVar1 - 1) < 2) {
    if (uVar8 < 9) {
      return;
    }
    uVar10 = (uVar3 + uVar8) - 8;
    if (uVar3 < uVar10) {
      uVar7 = uVar3;
      do {
        *(uint *)(param_1 +
                 (ulong)((uint)(*(int *)(-(ulong)uVar3 + (ulong)uVar7 + lVar11) * -0x61c8864f) >>
                        0x12) * 4) = uVar7;
        *(uint *)(param_1 + 0x10000 +
                 ((ulong)(*(long *)(-(ulong)uVar3 + 1 + (ulong)uVar7 + lVar11) * -0x30e44323405a9d00
                         ) >> 0x32) * 4) = uVar7 + 1;
        uVar7 = uVar7 + 3;
      } while (uVar7 < uVar10);
    }
    uVar7 = (uVar3 + uVar8) - 0x8008;
    if (uVar8 < 0x8009) {
      uVar7 = uVar3;
    }
    if (uVar7 < uVar10) {
      uVar5 = (ulong)uVar7;
      uVar8 = uVar10 - uVar7 & 3;
      uVar6 = uVar5;
      if (uVar8 != 0) {
        lVar9 = -(ulong)uVar8;
        do {
          *(int *)(param_1 + 0x10000 +
                  ((ulong)(*(long *)((lVar11 - (ulong)uVar3) + uVar6) * -0x30e44323405a9d00) >> 0x32
                  ) * 4) = (int)uVar6;
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
      if (uVar5 - uVar10 < 0xfffffffffffffffd) {
        lVar11 = lVar11 - uVar12;
        do {
          iVar4 = (int)uVar6;
          *(int *)(param_1 + 0x10000 +
                  ((ulong)(*(long *)(lVar11 + -0x10000 + uVar6) * -0x30e44323405a9d00) >> 0x32) * 4)
               = iVar4;
          *(int *)(param_1 + 0x10000 +
                  ((ulong)(*(long *)(lVar11 + -0xffff + uVar6) * -0x30e44323405a9d00) >> 0x32) * 4)
               = iVar4 + 1;
          *(int *)(param_1 + 0x10000 +
                  ((ulong)(*(long *)(lVar11 + -0xfffe + uVar6) * -0x30e44323405a9d00) >> 0x32) * 4)
               = iVar4 + 2;
          *(int *)(param_1 + 0x10000 +
                  ((ulong)(*(long *)(lVar11 + -0xfffd + uVar6) * -0x30e44323405a9d00) >> 0x32) * 4)
               = iVar4 + 3;
          uVar6 = uVar6 + 4;
        } while (uVar6 != uVar10);
      }
    }
  }
  else {
    if ((int)param_3 < 4) {
      return;
    }
    uVar10 = (uVar8 + uVar3) - 3;
    if (uVar3 < uVar10) {
      uVar6 = uVar12 + 0x10000;
      if ((uVar10 - (int)uVar12 & 1) != 0) {
        uVar5 = (ulong)((uint)(*(int *)((lVar11 - (ulong)uVar3) + 0x10000 + uVar12) * -0x61c8864f)
                       >> 0x11);
        uVar3 = (int)uVar6 - *(int *)(param_1 + uVar5 * 4);
        uVar8 = 0xffff;
        if (uVar3 < 0xffff) {
          uVar8 = uVar3;
        }
        *(short *)(param_1 + 0x20000 + (uVar12 & 0xffff) * 2) = (short)uVar8;
        *(int *)(param_1 + uVar5 * 4) = (int)uVar6;
        uVar6 = uVar12 + 0x10001;
      }
      if ((ulong)uVar10 - 0x10001 != uVar12) {
        do {
          uVar5 = (ulong)((uint)(*(int *)((lVar11 - uVar12) + -0x10000 + uVar6) * -0x61c8864f) >>
                         0x11);
          iVar4 = (int)uVar6;
          uVar8 = iVar4 - *(int *)(param_1 + uVar5 * 4);
          if (0xfffe < uVar8) {
            uVar8 = 0xffff;
          }
          *(short *)(param_1 + 0x20000 + (uVar6 & 0xffff) * 2) = (short)uVar8;
          *(int *)(param_1 + uVar5 * 4) = iVar4;
          iVar4 = iVar4 + 1;
          uVar5 = (ulong)((uint)(*(int *)((lVar11 - uVar12) + -0xffff + uVar6) * -0x61c8864f) >>
                         0x11);
          uVar8 = iVar4 - *(int *)(param_1 + uVar5 * 4);
          if (0xfffe < uVar8) {
            uVar8 = 0xffff;
          }
          *(short *)(param_1 + 0x20000 + (ulong)(ushort)iVar4 * 2) = (short)uVar8;
          *(int *)(param_1 + uVar5 * 4) = iVar4;
          uVar6 = uVar6 + 2;
        } while (uVar6 != uVar10);
      }
    }
  }
  *(uint *)(param_1 + 0x40020) = uVar10;
  return;
}


