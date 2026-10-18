// Function: _ZN11incremental17IncrementalServer13SkipToRequestEPvPmb
// Address: 00364020
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00364881) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char _ZN11incremental17IncrementalServer13SkipToRequestEPvPmb
               (undefined4 *param_1,undefined *param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  int extraout_EDX;
  ulong uVar11;
  long extraout_RDX;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  char cStack_98;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = 300000;
  if (param_4 == 0) {
    uVar20 = 0;
  }
  do {
    lVar10 = *(long *)(param_1 + 8);
    lVar21 = *(long *)(param_1 + 10);
    if (4 < (int)lVar21 - (int)lVar10) {
      uVar4 = ((int)lVar21 - (int)lVar10) - 4;
      uVar9 = 0;
      do {
        uVar18 = *(uint *)(lVar10 + uVar9);
        uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18
        ;
        if (uVar18 == 0x494e4352) {
          uVar4 = (uint)uVar9;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      if (uVar4 != 0) {
        uVar9 = (ulong)uVar4;
        _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(param_1[1],lVar10,uVar9);
        lVar21 = *(long *)(param_1 + 10);
        lVar10 = *(long *)(param_1 + 8) + uVar9;
        func_0x0099bd90(*(long *)(param_1 + 8),lVar10,lVar21 - lVar10);
        lVar21 = lVar21 - uVar9;
        *(long *)(param_1 + 10) = lVar21;
      }
      if ((uVar18 == 0x494e4352) && (*param_3 + 4U <= (ulong)(lVar21 - *(long *)(param_1 + 8)))) {
        func_0x0099bda0(param_2,*(long *)(param_1 + 8) + 4);
        cVar3 = '\x01';
        iVar5 = (int)*param_3 + 4;
        puVar17 = param_2;
        if (iVar5 != 0) {
          puVar17 = *(undefined **)(param_1 + 8);
          lVar10 = *(long *)(param_1 + 10);
          func_0x0099bd90(puVar17,puVar17 + iVar5,lVar10 - (long)(puVar17 + iVar5));
          cVar3 = '\x01';
          *(long *)(param_1 + 10) = lVar10 - iVar5;
        }
        goto code_r0x003646e3;
      }
    }
    uStack_40 = CONCAT44(1,*param_1);
    while (iVar5 = func_0x0099c120(&uStack_40,1,uVar20), iVar5 == -1) {
      piVar6 = (int *)func_0x0099bce0();
      if (*piVar6 != 4) {
        bVar13 = 1;
        goto code_r0x0036442e;
      }
    }
    if (iVar5 != 1) {
      piVar6 = (int *)func_0x0099bce0();
      bVar13 = (byte)((uint)iVar5 >> 0x1f);
code_r0x0036442e:
      iVar5 = *piVar6;
      puVar17 = (undefined *)(ulong)(uint)param_1[1];
      _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
                (puVar17,*(long *)(param_1 + 8),*(long *)(param_1 + 10) - *(long *)(param_1 + 8));
      if (bVar13 == 0) {
        cStack_98 = (char)param_4;
        if (cStack_98 != '\0') {
          puVar17 = &UNK_001612c8;
          func_0x0099bd40(&UNK_001612c8,0x28,1,_stderr);
          if (*(char *)(param_1 + 0x26) != '\0') goto code_r0x003646e1;
        }
        *param_3 = 0;
        cVar3 = '\x01';
        goto code_r0x003646e3;
      }
      cVar3 = '\0';
      if (((adb_trace_mask._1_1_ & 0x20) == 0) || (1 < (int)adb_trace_severity._52_4_))
      goto code_r0x003646e3;
      puVar17 = (undefined *)0x1;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      cVar3 = '\0';
      if (cVar2 == '\0') goto code_r0x003646e3;
      iVar15 = *piVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_48,&UNK_0016790b,0x132,1,0,0xffffffff);
      uVar20 = _ZN7android4base10LogMessage6streamEv(auStack_48);
      uVar7 = func_0x0099bd20(iVar5);
      _ZN7android4base12StringPrintfEPKcz(&bStack_60,&UNK_0016aeba,uVar7);
      func_0x0032e5a0(uVar20,&bStack_60);
      if ((bStack_60 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
      }
      puVar17 = auStack_48;
      _ZN7android4base10LogMessageD2Ev();
      *piVar6 = iVar15;
      goto code_r0x003646e1;
    }
    lVar10 = *(long *)(param_1 + 8);
    lVar21 = *(long *)(param_1 + 10);
    uVar9 = lVar21 - lVar10;
    if (uVar9 < 0x20000) {
      uVar22 = 0x20000 - uVar9;
      if ((ulong)(*(long *)(param_1 + 0xc) - lVar21) < uVar22) {
        uVar11 = *(long *)(param_1 + 0xc) - lVar10;
        uVar16 = uVar11 * 2;
        if (uVar16 < 0x20001) {
          uVar16 = 0x20000;
        }
        if (0x3ffffffffffffffe < uVar11) {
          uVar16 = 0x7fffffffffffffff;
        }
        lVar21 = _Znwm();
        func_0x0099bdb0(lVar21 + uVar9,0,uVar22);
        func_0x0099bda0(lVar21,lVar10,uVar9);
        *(long *)(param_1 + 8) = lVar21;
        *(long *)(param_1 + 10) = lVar21 + 0x20000;
        *(ulong *)(param_1 + 0xc) = uVar16 + lVar21;
        if (lVar10 != 0) {
          _ZdaPvSt11align_val_t(lVar10,uVar11);
        }
      }
      else {
        func_0x0099bdb0(lVar21,0,uVar22);
        *(ulong *)(param_1 + 10) = lVar21 + uVar22;
      }
    }
    else if (uVar9 != 0x20000) {
      *(long *)(param_1 + 10) = lVar10 + 0x20000;
    }
    uVar19 = *param_1;
    iVar5 = (int)uVar9;
    uVar9 = (ulong)iVar5;
    lVar10 = *(long *)(param_1 + 8);
    while (lVar21 = func_0x0099be20(uVar19,lVar10 + uVar9,(long)(0x20000 - iVar5)), lVar21 == -1) {
      piVar6 = (int *)func_0x0099bce0();
      if (*piVar6 != 4) {
        bVar24 = false;
        goto code_r0x00364534;
      }
    }
    iVar15 = (int)lVar21;
    bVar24 = iVar15 == 0;
    if (iVar15 < 1) break;
    uVar9 = (ulong)(iVar15 + iVar5);
    lVar10 = *(long *)(param_1 + 8);
    puVar17 = *(undefined **)(param_1 + 10);
    uVar22 = (long)puVar17 - lVar10;
    uVar16 = uVar9 - uVar22;
    if (uVar9 < uVar22 || uVar16 == 0) {
      if (uVar9 < uVar22) {
        *(ulong *)(param_1 + 10) = lVar10 + uVar9;
      }
    }
    else if ((ulong)(*(long *)(param_1 + 0xc) - (long)puVar17) < uVar16) {
      if ((long)uVar9 < 0) goto code_r0x00364830;
      uVar14 = *(long *)(param_1 + 0xc) - lVar10;
      uVar11 = uVar14 * 2;
      if (uVar14 * 2 <= uVar9) {
        uVar11 = uVar9;
      }
      if (0x3ffffffffffffffe < uVar14) {
        uVar11 = 0x7fffffffffffffff;
      }
      lVar21 = _Znwm(uVar11);
      func_0x0099bdb0(lVar21 + uVar22,0,uVar16);
      func_0x0099bda0(lVar21,lVar10,uVar22);
      *(long *)(param_1 + 8) = lVar21;
      *(ulong *)(param_1 + 10) = uVar9 + lVar21;
      *(ulong *)(param_1 + 0xc) = uVar11 + lVar21;
      if (lVar10 != 0) {
        _ZdaPvSt11align_val_t(lVar10,uVar14);
      }
    }
    else {
      func_0x0099bdb0(puVar17,0,uVar16);
      *(undefined **)(param_1 + 10) = puVar17 + uVar16;
    }
  } while( true );
code_r0x00364534:
  lVar10 = *(long *)(param_1 + 8);
  puVar17 = *(undefined **)(param_1 + 10);
  uVar22 = (long)puVar17 - lVar10;
  uVar16 = uVar9 - uVar22;
  if (uVar9 < uVar22 || uVar16 == 0) {
    if (uVar9 < uVar22) {
      *(ulong *)(param_1 + 10) = lVar10 + uVar9;
    }
  }
  else if ((ulong)(*(long *)(param_1 + 0xc) - (long)puVar17) < uVar16) {
    if ((long)uVar9 < 0) goto code_r0x00364830;
    uVar14 = *(long *)(param_1 + 0xc) - lVar10;
    uVar11 = uVar14 * 2;
    if (uVar14 * 2 <= uVar9) {
      uVar11 = uVar9;
    }
    uVar23 = 0x7fffffffffffffff;
    if (uVar14 < 0x3fffffffffffffff) {
      uVar23 = uVar11;
    }
    lVar21 = _Znwm(uVar23);
    func_0x0099bdb0(lVar21 + uVar22,0,uVar16);
    func_0x0099bda0(lVar21,lVar10,uVar22);
    *(long *)(param_1 + 8) = lVar21;
    *(ulong *)(param_1 + 10) = uVar9 + lVar21;
    *(ulong *)(param_1 + 0xc) = uVar23 + lVar21;
    if (lVar10 != 0) {
      _ZdaPvSt11align_val_t(lVar10,uVar14);
    }
  }
  else {
    func_0x0099bdb0(puVar17,0,uVar16);
    *(undefined **)(param_1 + 10) = puVar17 + uVar16;
  }
  bVar25 = (adb_trace_mask._1_1_ & 0x20) != 0;
  if (bVar24) {
    if (((int)adb_trace_severity._52_4_ < 2 && bVar25) &&
       (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
      puVar8 = (undefined4 *)func_0x0099bce0();
      uVar19 = *puVar8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_48,&UNK_0016790b,0x14c,1,0,0xffffffff);
      uVar20 = _ZN7android4base10LogMessage6streamEv(auStack_48);
      _ZN7android4base12StringPrintfEPKcz(&bStack_60,&UNK_00183320,*param_1);
code_r0x003647f4:
      func_0x0032e5a0(uVar20,&bStack_60);
      if ((bStack_60 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_48);
      *puVar8 = uVar19;
    }
  }
  else if (((int)adb_trace_severity._52_4_ < 2 && bVar25) &&
          (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar19 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_48,&UNK_0016790b,0x14f,1,0,0xffffffff);
    uVar20 = _ZN7android4base10LogMessage6streamEv(auStack_48);
    _ZN7android4base12StringPrintfEPKcz(&bStack_60,&UNK_00175572,*param_1,*puVar8);
    goto code_r0x003647f4;
  }
  puVar17 = (undefined *)(ulong)(uint)param_1[1];
  _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm
            (puVar17,*(long *)(param_1 + 8),*(long *)(param_1 + 10) - *(long *)(param_1 + 8));
code_r0x003646e1:
  cVar3 = '\0';
code_r0x003646e3:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return cVar3;
  }
  func_0x0099bd00();
code_r0x00364830:
  func_0x00330ca0();
  lVar10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = _ZN11incremental17IncrementalServer13SkipToRequestEPvPmb();
  if (cVar3 == '\0') {
    cVar3 = '\x03';
  }
  else {
    cVar3 = '\0';
  }
  lVar21 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar21 != lVar10) {
    func_0x0099bd00();
    lVar10 = (long)(int)lVar21 * 0x80;
    cVar3 = '\x01';
    if (-1 < *(int *)(*(long *)(puVar17 + 8) + 0x70 + lVar10)) {
      lVar10 = *(long *)(puVar17 + 8) + lVar10;
      iVar5 = (int)(*(long *)(lVar10 + 0x48) + 0xfffU >> 0xc);
      iVar15 = iVar5 + 0x7f;
      iVar5 = iVar5 + 0xfe;
      if (-1 < iVar15) {
        iVar5 = iVar15;
      }
      uVar4 = *(int *)(lVar10 + 0x28) - (iVar5 >> 7);
      iVar5 = extraout_EDX + 0x7f;
      if (-1 < extraout_EDX) {
        iVar5 = extraout_EDX;
      }
      iVar5 = (iVar5 >> 7) + uVar4;
      uVar22 = (ulong)(long)iVar5 >> 6;
      uVar9 = *(ulong *)(*(long *)(lVar10 + 0x20) + uVar22 * 8);
      if ((uVar9 >> ((long)iVar5 & 0x3fU) & 1) == 0) {
        cVar3 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                          (puVar17,(int)(short)lVar21,uVar9,iVar5);
        if (cVar3 == '\0') {
          cVar3 = '\0';
        }
        else {
          puVar1 = (ulong *)(*(long *)(lVar10 + 0x20) + uVar22 * 8);
          *puVar1 = *puVar1 | 1L << ((byte)iVar5 & 0x3f);
          cVar3 = '\x01';
          if (((uVar4 != 0) && ((**(byte **)(lVar10 + 0x20) & 1) == 0)) && (0 < (int)uVar4)) {
            uVar9 = 0;
            lVar12 = extraout_RDX;
            do {
              cVar3 = _ZN11incremental17IncrementalServer13SendTreeBlockEsii
                                (puVar17,(int)(short)lVar21,lVar12,uVar9 & 0xffffffff);
              if (cVar3 == '\0') {
                return '\0';
              }
              lVar12 = *(long *)(lVar10 + 0x20);
              puVar1 = (ulong *)(lVar12 + (uVar9 >> 6) * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
              uVar9 = uVar9 + 1;
            } while (uVar4 != uVar9);
          }
        }
      }
    }
    return cVar3;
  }
  return cVar3;
}


