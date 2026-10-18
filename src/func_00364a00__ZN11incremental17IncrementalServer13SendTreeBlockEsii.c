// Function: _ZN11incremental17IncrementalServer13SendTreeBlockEsii
// Address: 00364a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                 (uint *param_1,int param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char cVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  long extraout_RDX;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long in_FS_OFFSET;
  ushort auStack_1042 [2];
  uint uStack_103e;
  ushort uStack_103a;
  undefined1 auStack_1038 [4096];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = *(long *)(param_1 + 2);
  lVar10 = (long)param_2 * 0x80;
  func_0x0099bdb0(auStack_1042,0,0x100a);
  lVar12 = *(long *)(lVar13 + 0x78 + lVar10);
  uVar1 = *(undefined4 *)(lVar13 + 0x70 + lVar10);
  do {
    lVar5 = func_0x0099c1b0(uVar1,auStack_1038,0x1000,(long)(int)param_4 * 0x1000 + lVar12);
    if (lVar5 != -1) {
      lVar12 = (long)(int)lVar5;
      if (0 < lVar12) {
        auStack_1042[1] = 1;
        auStack_1042[0] = (ushort)param_2 >> 8 | (ushort)param_2 << 8;
        uVar1 = CONCAT22((short)((uint)param_2 >> 0x10),auStack_1042[0]);
        uStack_103a = (ushort)lVar5 >> 8 | (ushort)lVar5 << 8;
        uStack_103e = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                      param_4 << 0x18;
        puVar2 = *(undefined4 **)(param_1 + 0x24);
        puVar11 = puVar2;
        func_0x0099bd90(puVar2,auStack_1042,lVar12 + 10);
        lVar13 = (long)puVar2 + lVar12 + 10;
        *(long *)(param_1 + 0x24) = lVar13;
        puVar3 = *(uint **)(param_1 + 0x1e);
        puVar7 = (uint *)(lVar13 - (long)puVar3);
        puVar15 = (uint *)CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        if (0x1f000 < (long)puVar7) {
          puVar7 = puVar3 + 1;
          lVar13 = lVar13 - (long)puVar7;
          if (lVar13 != 0) {
            uVar8 = (uint)lVar13;
            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
            puVar7 = (uint *)(ulong)uVar8;
            *puVar3 = uVar8;
            uVar14 = lVar13 + 4;
            puVar11 = (undefined4 *)(ulong)*param_1;
            cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                              (puVar11,*(undefined8 *)(param_1 + 0x1e),uVar14);
            if (cVar4 == '\0') {
              puVar11 = _stderr;
              func_0x0099bd30(_stderr,&UNK_0016793e,uVar14 & 0xffffffff);
            }
            *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar14;
            *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
          }
        }
        goto code_r0x00364b92;
      }
      break;
    }
    piVar6 = (int *)func_0x0099bce0();
  } while (*piVar6 == 4);
  puVar15 = (uint *)0x0;
  puVar7 = (uint *)(ulong)param_4;
  puVar11 = _stderr;
  func_0x0099bd30(_stderr,&UNK_0017d4c7,*(undefined8 *)(lVar13 + lVar10 + 0x38));
code_r0x00364b92:
  iVar9 = (int)puVar7;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    lVar13 = *(long *)(puVar11 + 0x24);
    func_0x0099bd90(lVar13);
    lVar13 = lVar13 + extraout_RDX;
    *(long *)(puVar11 + 0x24) = lVar13;
    puVar7 = *(uint **)(puVar11 + 0x1e);
    if (((iVar9 != 0) || (0x1f000 < lVar13 - (long)puVar7)) &&
       (lVar13 = lVar13 - (long)(puVar7 + 1), lVar13 != 0)) {
      uVar8 = (uint)lVar13;
      *puVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar14 = lVar13 + 4;
      cVar4 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                        (*puVar11,*(undefined8 *)(puVar11 + 0x1e),uVar14);
      if (cVar4 == '\0') {
        func_0x0099bd30(_stderr,&UNK_0016793e,uVar14 & 0xffffffff);
      }
      *(ulong *)(puVar11 + 0x1c) = *(long *)(puVar11 + 0x1c) + uVar14;
      puVar7 = (uint *)(*(long *)(puVar11 + 0x1e) + 4);
      *(uint **)(puVar11 + 0x24) = puVar7;
    }
    return puVar7;
  }
  return puVar15;
}


