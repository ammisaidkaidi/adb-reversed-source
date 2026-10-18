// Function: LZ4_compress_HC_continue
// Address: 004ad700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004ad74b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004ad750) */
/* WARNING: Removing unreachable block (ram,0x004ad76c) */
/* WARNING: Removing unreachable block (ram,0x004ad75f) */

void LZ4_compress_HC_continue(long param_1,ulong param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long in_FS_OFFSET;
  int iStack_34;
  undefined8 uStack_30;
  
  uStack_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iStack_34 = param_4;
  iVar1 = LZ4_compressBound(param_4);
  if (*(ulong *)(param_1 + 0x40008) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x40000) + (ulong)*(uint *)(param_1 + 0x40018);
    if (0x40000000 < uVar7) {
      uVar7 = 0;
      func_0x0099bdb0(param_1,0,0x20000);
      func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    }
    uVar12 = (int)uVar7 + 0x10000;
    *(uint *)(param_1 + 0x40020) = uVar12;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(uint *)(param_1 + 0x40018) = uVar12;
    *(uint *)(param_1 + 0x4001c) = uVar12;
    uVar5 = param_2;
    uVar7 = param_2;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x40018);
    uVar5 = *(ulong *)(param_1 + 0x40008);
    uVar7 = *(ulong *)(param_1 + 0x40000);
  }
  uVar5 = uVar7 - uVar5;
  if (0x80000000 < uVar12 + uVar5) {
    uVar8 = 0x10000;
    if (uVar5 < 0x10000) {
      uVar8 = uVar5;
    }
    LZ4_loadDictHC(param_1,uVar7 - uVar8,uVar8 & 0xffffffff);
    uVar7 = *(ulong *)(param_1 + 0x40000);
  }
  if (param_2 == uVar7) {
    uVar5 = *(ulong *)(param_1 + 0x40010);
    iVar13 = *(int *)(param_1 + 0x40018);
    uVar12 = *(uint *)(param_1 + 0x4001c);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x40008);
    if (uVar7 < uVar5 + 4) {
      uVar12 = *(uint *)(param_1 + 0x40018);
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x40018);
      if (1 < (ushort)((short)*(undefined4 *)(param_1 + 0x40024) - 1U)) {
        uVar10 = (((int)uVar7 - (int)uVar5) + uVar12) - 3;
        uVar4 = *(uint *)(param_1 + 0x40020);
        uVar8 = (ulong)uVar4;
        if (uVar4 < uVar10) {
          lVar6 = uVar5 - uVar12;
          uVar9 = uVar8;
          if ((uVar10 - uVar4 & 1) != 0) {
            uVar9 = (ulong)((uint)(*(int *)(lVar6 + uVar8) * -0x61c8864f) >> 0x11);
            uVar2 = uVar4 - *(int *)(param_1 + uVar9 * 4);
            uVar11 = 0xffff;
            if (uVar2 < 0xffff) {
              uVar11 = uVar2;
            }
            *(short *)(param_1 + 0x20000 + (uVar8 & 0xffff) * 2) = (short)uVar11;
            *(uint *)(param_1 + uVar9 * 4) = uVar4;
            uVar9 = uVar8 + 1;
          }
          if ((ulong)uVar10 - 1 != uVar8) {
            do {
              uVar8 = (ulong)((uint)(*(int *)(lVar6 + uVar9) * -0x61c8864f) >> 0x11);
              iVar13 = (int)uVar9;
              uVar4 = iVar13 - *(int *)(param_1 + uVar8 * 4);
              if (0xfffe < uVar4) {
                uVar4 = 0xffff;
              }
              *(short *)(param_1 + 0x20000 + (uVar9 & 0xffff) * 2) = (short)uVar4;
              *(int *)(param_1 + uVar8 * 4) = iVar13;
              iVar13 = iVar13 + 1;
              uVar8 = (ulong)((uint)(*(int *)(lVar6 + 1 + uVar9) * -0x61c8864f) >> 0x11);
              uVar4 = iVar13 - *(int *)(param_1 + uVar8 * 4);
              if (0xfffe < uVar4) {
                uVar4 = 0xffff;
              }
              *(short *)(param_1 + 0x20000 + (ulong)(ushort)iVar13 * 2) = (short)uVar4;
              *(int *)(param_1 + uVar8 * 4) = iVar13;
              uVar9 = uVar9 + 2;
            } while (uVar9 != uVar10);
          }
        }
      }
    }
    *(uint *)(param_1 + 0x4001c) = uVar12;
    *(ulong *)(param_1 + 0x40010) = uVar5;
    iVar13 = ((int)uVar7 - (int)uVar5) + uVar12;
    *(int *)(param_1 + 0x40018) = iVar13;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(int *)(param_1 + 0x40020) = iVar13;
    *(undefined8 *)(param_1 + 0x40028) = 0;
  }
  uVar7 = (long)iStack_34 + param_2;
  if ((uVar5 < uVar7) && (uVar8 = (iVar13 - uVar12) + uVar5, param_2 < uVar8)) {
    if (uVar8 < uVar7) {
      uVar7 = uVar8;
    }
    uVar4 = (int)uVar7 - (int)uVar5;
    iVar3 = uVar12 + uVar4;
    *(int *)(param_1 + 0x4001c) = iVar3;
    *(ulong *)(param_1 + 0x40010) = uVar4 + uVar5;
    if ((uint)(iVar13 - iVar3) < 4) {
      *(int *)(param_1 + 0x4001c) = iVar13;
      *(undefined8 *)(param_1 + 0x40010) = *(undefined8 *)(param_1 + 0x40008);
    }
  }
  func_0x004a84b0(param_1,param_2,param_3,&iStack_34,param_5,(int)*(short *)(param_1 + 0x40024),
                  param_5 < iVar1);
  return;
}


