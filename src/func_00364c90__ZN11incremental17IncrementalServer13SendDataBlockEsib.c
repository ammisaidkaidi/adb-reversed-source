// Function: _ZN11incremental17IncrementalServer13SendDataBlockEsib
// Address: 00364c90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN11incremental17IncrementalServer13SendDataBlockEsib
          (uint *param_1,int param_2,uint param_3,char param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  ushort uVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  long in_FS_OFFSET;
  undefined8 uStack_2078;
  undefined1 auStack_206e [6];
  undefined8 uStack_2068;
  uint auStack_1048 [2];
  undefined1 auStack_103e [4102];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = *(uint **)(param_1 + 2);
  puVar11 = puVar14 + (long)param_2 * 0x20;
  uVar17 = (ulong)(int)param_3;
  if ((long)uVar17 < *(long *)(puVar14 + (long)param_2 * 0x20 + 2)) {
    uVar7 = 1;
    if ((*(ulong *)(*(long *)puVar11 + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) == 0) {
      uVar13 = (ushort)param_2;
      puVar14 = param_1;
      cVar5 = _ZN11incremental17IncrementalServer26SendTreeBlocksForDataBlockEsi
                        (param_1,(int)(short)uVar13,param_3);
      uVar7 = 2;
      if (cVar5 != '\0') {
        func_0x0099bdb0(auStack_1048,0,0x100a);
        uVar12 = puVar11[0x14];
        do {
          uVar8 = func_0x0099c1b0(uVar12,auStack_103e,0x1000,uVar17 << 0xc);
          if (uVar8 != 0xffffffffffffffff) {
            iVar15 = (int)uVar8;
            if (-1 < iVar15) {
              puVar18 = (uint *)&uStack_2078;
              func_0x0099bdb0(puVar18,0,0x102a);
              iVar6 = LZ4_compress_default(auStack_103e,auStack_206e,uVar8 & 0xffffffff,0x1020);
              bVar4 = 0xf31 < (iVar6 - 1U & 0xffff);
              if (bVar4) {
                param_1[0x1b] = param_1[0x1b] + 1;
                puVar18 = auStack_1048;
              }
              else {
                param_1[0x1a] = param_1[0x1a] + 1;
                iVar15 = iVar6;
              }
              *(bool *)((long)puVar18 + 3) = !bVar4;
              *(byte *)((long)puVar18 + 2) = 0;
              *(ushort *)puVar18 = uVar13 >> 8 | uVar13 << 8;
              uVar13 = (ushort)iVar15;
              *(ushort *)(puVar18 + 2) = uVar13 >> 8 | uVar13 << 8;
              puVar18[1] = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                           param_3 << 0x18;
              puVar1 = (ulong *)(*(long *)puVar11 + (uVar17 >> 6) * 8);
              *puVar1 = *puVar1 | 1L << ((byte)param_3 & 0x3f);
              puVar11[6] = puVar11[6] + 1;
              puVar11 = *(uint **)(param_1 + 0x24);
              puVar14 = puVar11;
              func_0x0099bd90(puVar11,puVar18,(long)(short)uVar13 + 10);
              lVar16 = (long)puVar11 + (long)(short)uVar13 + 10;
              *(long *)(param_1 + 0x24) = lVar16;
              puVar11 = *(uint **)(param_1 + 0x1e);
              if (((param_4 != '\0') || (0x1f000 < lVar16 - (long)puVar11)) &&
                 (lVar16 = lVar16 - (long)(puVar11 + 1), lVar16 != 0)) {
                uVar12 = (uint)lVar16;
                *puVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                uVar17 = lVar16 + 4;
                puVar14 = (uint *)(ulong)*param_1;
                cVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                                  (puVar14,*(undefined8 *)(param_1 + 0x1e),uVar17);
                if (cVar5 == '\0') {
                  puVar14 = _stderr;
                  func_0x0099bd30(_stderr,&UNK_0016793e,uVar17 & 0xffffffff);
                }
                *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + uVar17;
                *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x1e) + 4;
              }
              uVar7 = 0;
              goto code_r0x00364fb8;
            }
            piVar9 = (int *)func_0x0099bce0();
            break;
          }
          piVar9 = (int *)func_0x0099bce0();
        } while (*piVar9 == 4);
        puVar14 = _stderr;
        func_0x0099bd30(_stderr,&UNK_0018abca,*(undefined8 *)(puVar11 + 0xe),param_3,*piVar9);
        uVar7 = 2;
      }
    }
  }
  else {
    uVar7 = 1;
    if (((adb_trace_mask._1_1_ & 0x20) != 0) && ((int)adb_trace_severity._52_4_ < 2)) {
      puVar14 = (uint *)0x1;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      uVar7 = 1;
      if (cVar5 != '\0') {
        puVar10 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar10;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1048,&UNK_0016790b,0x1a7,1,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_1048);
        _ZN7android4base12StringPrintfEPKcz
                  (&uStack_2078,&UNK_00177039,*(undefined8 *)(puVar11 + 0xe),param_3);
        func_0x0032e5a0(uVar7,&uStack_2078);
        if (((byte)uStack_2078 & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (uStack_2068,CONCAT71(uStack_2078._1_7_,(byte)uStack_2078) & 0xfffffffffffffffe)
          ;
        }
        puVar14 = auStack_1048;
        _ZN7android4base10LogMessageD2Ev();
        *puVar10 = uVar2;
        uVar7 = 1;
      }
    }
  }
code_r0x00364fb8:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    puVar3 = *(undefined2 **)(puVar14 + 0x24);
    *puVar3 = 0xffff;
    *(undefined8 *)(puVar3 + 1) = 0;
    *(undefined2 **)(puVar14 + 0x24) = puVar3 + 5;
    puVar11 = *(uint **)(puVar14 + 0x1e);
    lVar16 = (long)(puVar3 + 5) - (long)(puVar11 + 1);
    if (lVar16 != 0) {
      uVar12 = (uint)lVar16;
      *puVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
      ;
      uVar17 = lVar16 + 4;
      cVar5 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                        (*puVar14,*(undefined8 *)(puVar14 + 0x1e),uVar17);
      if (cVar5 == '\0') {
        func_0x0099bd30(_stderr,&UNK_0016793e,uVar17 & 0xffffffff);
      }
      *(ulong *)(puVar14 + 0x1c) = *(long *)(puVar14 + 0x1c) + uVar17;
      puVar11 = (uint *)(*(long *)(puVar14 + 0x1e) + 4);
      *(uint **)(puVar14 + 0x24) = puVar11;
    }
    return CONCAT71((int7)((ulong)puVar11 >> 8),1);
  }
  return uVar7;
}


