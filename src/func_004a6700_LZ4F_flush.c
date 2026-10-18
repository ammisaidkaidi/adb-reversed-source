// Function: LZ4F_flush
// Address: 004a6700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long LZ4F_flush(long param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  
  uVar3 = *(ulong *)(param_1 + 0x88);
  if (uVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = -0x14;
    if ((*(int *)(param_1 + 0x5c) == 1) && (lVar8 = -0xb, uVar3 + 8 <= param_3)) {
      if (*(int *)(param_1 + 0xd4) == 1) {
        pcVar11 = (code *)&UNK_004a7db0;
      }
      else {
        if (*(int *)(param_1 + 0x40) < 2) {
          pcVar9 = (code *)&UNK_004a7dc0;
          pcVar11 = (code *)&UNK_004a7e80;
        }
        else {
          pcVar9 = (code *)&UNK_004a7eb0;
          pcVar11 = (code *)&UNK_004a7f60;
        }
        if (*(int *)(param_1 + 0x24) == 1) {
          pcVar11 = pcVar9;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      uVar2 = *(uint *)(param_1 + 0x3c);
      puVar1 = param_2 + 1;
      uVar5 = (*pcVar11)(*(undefined8 *)(param_1 + 200),uVar4,puVar1,uVar3 & 0xffffffff,
                         (uint)uVar3 - 1,*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
      uVar12 = (ulong)uVar5;
      if (uVar5 == 0 || uVar3 <= uVar12) {
        *param_2 = (uint)uVar3 | 0x80000000;
        func_0x0099bda0(puVar1,uVar4,uVar3);
        uVar12 = uVar3 & 0xffffffff;
      }
      else {
        *param_2 = uVar5;
      }
      if ((ulong)uVar2 != 0) {
        uVar6 = XXH32(puVar1,uVar12,0);
        *(undefined4 *)((long)puVar1 + uVar12) = uVar6;
      }
      lVar10 = *(long *)(param_1 + 0x80);
      if (*(int *)(param_1 + 0x24) == 0) {
        lVar10 = lVar10 + *(long *)(param_1 + 0x88);
        *(long *)(param_1 + 0x80) = lVar10;
      }
      lVar8 = uVar12 + (ulong)uVar2 * 4 + 4;
      *(undefined8 *)(param_1 + 0x88) = 0;
      if ((ulong)(*(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x78)) <
          (ulong)(lVar10 + *(long *)(param_1 + 0x68))) {
        if (*(int *)(param_1 + 0x40) < 2) {
          iVar7 = LZ4_saveDict();
        }
        else {
          iVar7 = LZ4_saveDictHC(*(undefined8 *)(param_1 + 200),*(long *)(param_1 + 0x78),0x10000);
        }
        *(long *)(param_1 + 0x80) = (long)iVar7 + *(long *)(param_1 + 0x78);
      }
    }
  }
  return lVar8;
}


